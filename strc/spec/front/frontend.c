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
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_OpDeclInj_1;
Symbol sym_SortVar_1;
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
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
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
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_OpDeclInj_1 = ATmakeSymbol("OpDeclInj", 1, ATfalse);
  ATprotectSymbol(sym_OpDeclInj_1);
  sym_SortVar_1 = ATmakeSymbol("SortVar", 1, ATfalse);
  ATprotectSymbol(sym_SortVar_1);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
}
ATerm term_r_98;
ATerm term_q_98;
ATerm term_p_98;
ATerm term_u_97;
ATerm term_r_97;
ATerm term_q_97;
ATerm term_v_96;
ATerm term_r_96;
ATerm term_q_96;
ATerm term_j_96;
ATerm term_b_96;
ATerm term_a_96;
ATerm term_w_95;
ATerm term_v_95;
ATerm term_u_95;
ATerm term_t_95;
ATerm term_p_95;
ATerm term_r_94;
ATerm term_f_94;
ATerm term_d_94;
ATerm term_x_93;
ATerm term_w_93;
ATerm term_t_93;
ATerm term_s_93;
ATerm term_d_93;
ATerm term_c_93;
ATerm term_b_93;
ATerm term_p_92;
ATerm term_m_92;
ATerm term_l_92;
ATerm term_k_92;
ATerm term_f_92;
ATerm term_e_92;
ATerm term_d_92;
ATerm term_c_92;
ATerm term_b_92;
ATerm term_a_92;
ATerm term_z_91;
ATerm term_y_91;
ATerm term_x_91;
ATerm term_w_91;
ATerm term_v_91;
ATerm term_u_91;
ATerm term_t_91;
ATerm term_s_91;
ATerm term_r_91;
ATerm term_n_91;
ATerm term_k_91;
ATerm term_u_90;
ATerm term_q_90;
ATerm term_p_90;
ATerm term_h_90;
ATerm term_o_89;
ATerm term_n_89;
ATerm term_m_89;
ATerm term_l_89;
ATerm term_k_89;
ATerm term_j_89;
ATerm term_h_89;
ATerm term_g_89;
ATerm term_a_89;
ATerm term_s_88;
ATerm term_f_88;
ATerm term_e_88;
ATerm term_d_88;
ATerm term_e_87;
ATerm term_d_87;
ATerm term_c_87;
ATerm term_b_87;
ATerm term_a_87;
ATerm term_x_86;
ATerm term_w_86;
ATerm term_v_86;
ATerm term_m_86;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_c_84;
ATerm term_q_82;
ATerm term_p_82;
ATerm term_m_82;
ATerm term_l_82;
ATerm term_k_82;
ATerm term_b_82;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_o_77;
ATerm term_n_77;
ATerm term_b_77;
ATerm term_a_77;
ATerm term_w_76;
ATerm term_v_76;
ATerm term_h_76;
ATerm term_f_76;
ATerm term_e_76;
ATerm term_d_76;
ATerm term_y_75;
ATerm term_w_75;
ATerm term_m_73;
ATerm term_e_73;
ATerm term_d_73;
ATerm term_b_73;
ATerm term_w_72;
ATerm term_m_71;
ATerm term_e_71;
ATerm term_d_71;
ATerm term_a_68;
ATerm term_z_67;
ATerm term_y_65;
ATerm term_m_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_e_65;
ATerm term_j_62;
ATerm term_e_62;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_a_62;
ATerm term_s_59;
ATerm term_r_59;
ATerm term_f_59;
ATerm term_j_58;
ATerm term_e_58;
ATerm term_d_58;
ATerm term_z_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_q_57;
ATerm term_d_57;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_u_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_y_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_e_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_g_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_o_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_j_51;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_v_38;
ATerm term_t_38;
ATerm term_p_38;
ATerm term_d_37;
ATerm term_m_36;
ATerm term_i_36;
ATerm term_y_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_s_35;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Sort_2, term_l_44, (ATerm) ATempty);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_44);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_50);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym__2, term_o_51, term_m_51);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("i_2", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("overlay", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("g_2", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_53);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("e_2", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_53);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Keys_1, term_j_51);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_53);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Sort_2, term_r_53, (ATerm) ATempty);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("s_1", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("u_1", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("o_1", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym__2, term_n_55, (ATerm) ATempty);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(sym__2, term_o_55, (ATerm) ATempty);
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("y_1", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(sym_Defined_2, term_e_65, term_g_65);
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("a_2", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(sym_Defined_2, term_z_67, term_g_65);
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(sym_Defined_2, term_d_71, term_e_71);
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(sym_Op_2, term_r_53, (ATerm) ATempty);
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(sym_Op_2, term_w_75, (ATerm) ATempty);
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_h_76));
  term_h_76 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_76);
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_76);
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_77);
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_77);
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_78);
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_82);
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_82);
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_35);
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_54);
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_53);
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(sym_Call_2, term_w_86, (ATerm) ATempty);
  ATprotect(&(term_a_87));
  term_a_87 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_87));
  term_d_87 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_e_88));
  term_e_88 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_88);
  ATprotect(&(term_f_88));
  term_f_88 = (ATerm) ATmakeAppl(sym_Call_2, term_e_88, (ATerm) ATempty);
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(sym_Call_2, term_m_86, (ATerm) ATempty);
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_g_89));
  term_g_89 = (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue));
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_j_89));
  term_j_89 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_k_89));
  term_k_89 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_l_89));
  term_l_89 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_o_89));
  term_o_89 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_h_90));
  term_h_90 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_90));
  term_p_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_90));
  term_q_90 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_90));
  term_u_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_91));
  term_k_91 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_91));
  term_n_91 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_91));
  term_r_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_91));
  term_s_91 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_91));
  term_t_91 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_91));
  term_u_91 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_91));
  term_v_91 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_91));
  term_w_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_91));
  term_x_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_91));
  term_y_91 = (ATerm) ATmakeAppl(sym__2, term_t_38, term_j_51);
  ATprotect(&(term_z_91));
  term_z_91 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_51);
  ATprotect(&(term_a_92));
  term_a_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_92));
  term_b_92 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_92));
  term_c_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_92));
  term_d_92 = (ATerm) ATmakeAppl(sym__2, term_c_92, term_t_91);
  ATprotect(&(term_e_92));
  term_e_92 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_92));
  term_f_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_92));
  term_k_92 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_92));
  term_l_92 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_92));
  term_m_92 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_92));
  term_p_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_93));
  term_b_93 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_93));
  term_c_93 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_93));
  term_d_93 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_93));
  term_s_93 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_93));
  term_t_93 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_93));
  term_w_93 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_93));
  term_x_93 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_94));
  term_d_94 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_94));
  term_f_94 = (ATerm) ATmakeAppl(sym__2, term_l_92, term_m_92);
  ATprotect(&(term_r_94));
  term_r_94 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_95));
  term_p_95 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_95));
  term_t_95 = (ATerm) ATmakeAppl(sym__2, term_p_95, term_t_91);
  ATprotect(&(term_u_95));
  term_u_95 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_95));
  term_v_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_95));
  term_w_95 = (ATerm) ATmakeAppl(sym__2, term_v_95, term_t_91);
  ATprotect(&(term_a_96));
  term_a_96 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_96));
  term_b_96 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_96));
  term_j_96 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_96));
  term_q_96 = (ATerm) ATmakeAppl(sym__2, term_w_93, term_t_91);
  ATprotect(&(term_r_96));
  term_r_96 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_96));
  term_v_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_97));
  term_q_97 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_97));
  term_r_97 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_97));
  term_u_97 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_98));
  term_p_98 = (ATerm) ATmakeAppl(sym__2, term_u_90, term_t_91);
  ATprotect(&(term_q_98));
  term_q_98 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_98));
  term_r_98 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm c_139 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_15 (ATerm m_78, ATerm n_78, ATerm o_78, ATerm t);
static ATerm r_9 (ATerm b_9, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm desugar_spec_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm v_128 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm spaste_1_0 (ATerm m_138 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm n_138 (ATerm), ATerm o_138 (ATerm), ATerm p_138 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm j_15 (ATerm a_65, ATerm z_64, ATerm t);
ATerm SVar_1_0 (ATerm s_89 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm h_134 (ATerm (ATerm), ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_134 (ATerm (ATerm), ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm l_15 (ATerm j_76, ATerm t);
static ATerm m_15 (ATerm g_76, ATerm t);
static ATerm i_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm p_15 (ATerm z_73, ATerm a_74, ATerm b_74, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm ListVarScope_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm DesugarListMatching_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm DeclareVariables_0_0 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm RDtoSD_0_0 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm r_15 (ATerm c_61, ATerm d_61, ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm tpaste_1_0 (ATerm i_138 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm j_86 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm u_15 (ATerm s_134 (ATerm), ATerm t_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_57, ATerm f_57, ATerm e_57, ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm v_15 (ATerm m_134 (ATerm), ATerm n_134 (ATerm (ATerm), ATerm), ATerm y_56, ATerm b_57, ATerm t);
ATerm env_alltd_1_0 (ATerm i_112 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_6_0 (ATerm t_133 (ATerm), ATerm u_133 (ATerm (ATerm), ATerm), ATerm v_133 (ATerm), ATerm w_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_133 (ATerm (ATerm), ATerm), ATerm y_133 (ATerm), ATerm t);
static ATerm n_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm a_16 (ATerm o_137 (ATerm), ATerm f_62, ATerm g_62, ATerm t);
ATerm Trm_to_Cong_0_0 (ATerm t);
ATerm trm_to_cong_0_0 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm s_15 (ATerm l_62, ATerm n_62, ATerm m_62, ATerm t);
static ATerm j_12 (ATerm t);
static ATerm b_16 (ATerm i_61, ATerm k_61, ATerm j_61, ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
ATerm CheckConsError_0_0 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm CheckCons_0_0 (ATerm t);
ATerm manytd_1_0 (ATerm e_110 (ATerm), ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm q_13 (ATerm t);
ATerm check_constructors_p__2_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
ATerm check_constructors_0_0 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm m_17 (ATerm t);
ATerm GenerateCheckRule_0_0 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm f_18 (ATerm t);
ATerm TupleType_0_0 (ATerm t);
ATerm TupleDecl_0_0 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm c_16 (ATerm h_72, ATerm j_72, ATerm k_72, ATerm t);
ATerm CheckConstructors_0_0 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm j_18 (ATerm t);
static ATerm d_16 (ATerm j_68, ATerm i_68, ATerm k_68, ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm w_138 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm v_138 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm u_138 (ATerm), ATerm t);
static ATerm e_16 (ATerm t);
static ATerm g_19 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
static ATerm i_19 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm f_16 (ATerm a_72, ATerm b_72, ATerm c_72, ATerm t);
static ATerm n_19 (ATerm t);
static ATerm s_19 (ATerm t);
static ATerm t_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm g_16 (ATerm u_71, ATerm y_71, ATerm w_71, ATerm t);
static ATerm b_20 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm h_16 (ATerm o_71, ATerm s_71, ATerm q_71, ATerm t);
static ATerm m_20 (ATerm t);
static ATerm n_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm q_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm w_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm y_20 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm a_21 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm c_21 (ATerm t);
static ATerm i_16 (ATerm m_70, ATerm n_70, ATerm o_70, ATerm q_70, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm j_16 (ATerm x_68, ATerm y_68, ATerm w_68, ATerm t);
static ATerm e_21 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm k_16 (ATerm q_55, ATerm p_55, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm k_69 (ATerm), ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm l_16 (ATerm a_55, ATerm b_55, ATerm c_55, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm p_21 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm q_21 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
static ATerm s_21 (ATerm t);
static ATerm t_21 (ATerm t);
static ATerm v_21 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm d_22 (ATerm t);
static ATerm e_22 (ATerm t);
static ATerm f_22 (ATerm t);
static ATerm g_22 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
static ATerm h_22 (ATerm t);
static ATerm j_22 (ATerm t);
static ATerm k_22 (ATerm t);
static ATerm m_22 (ATerm t);
ATerm spec_use_def_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm b_23 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm w_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm i_24 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm j_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm v_24 (ATerm t);
ATerm split_dynamic_rules_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm w_108 (ATerm), ATerm t);
static ATerm x_24 (ATerm t);
static ATerm z_24 (ATerm t);
static ATerm a_25 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm h_137 (ATerm), ATerm t);
static ATerm e_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm z_25 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm r_16 (ATerm n_59, ATerm m_59, ATerm t);
ATerm listtd_1_0 (ATerm n_115 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm j_138 (ATerm), ATerm k_138 (ATerm), ATerm l_138 (ATerm), ATerm t);
static ATerm k_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm p_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm s_26 (ATerm t);
static ATerm t_26 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm w_16 (ATerm i_118 (ATerm), ATerm y_30, ATerm x_30, ATerm t);
static ATerm x_16 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm c_31, ATerm b_31, ATerm t);
static ATerm y_16 (ATerm d_118 (ATerm), ATerm w_30, ATerm v_30, ATerm t);
ATerm genzip_4_0 (ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm t);
static ATerm d_27 (ATerm t);
static ATerm e_27 (ATerm t);
static ATerm h_27 (ATerm t);
static ATerm d_17 (ATerm w_621, ATerm b_622, ATerm z_58, ATerm t);
ATerm while_not_2_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t);
ATerm for_3_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t);
static ATerm j_27 (ATerm t);
static ATerm l_27 (ATerm t);
static ATerm p_27 (ATerm t);
static ATerm v_206 (ATerm p_205, ATerm q_205, ATerm r_205, ATerm t);
static ATerm s_27 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm u_27 (ATerm t);
static ATerm v_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm r_28 (ATerm t);
ATerm free_vars_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm t_107 (ATerm), ATerm t);
static ATerm g_17 (ATerm y_54, ATerm z_54, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm k_109 (ATerm), ATerm t);
static ATerm h_17 (ATerm r_126 (ATerm), ATerm a_45, ATerm y_44, ATerm t);
static ATerm t_28 (ATerm t);
static ATerm u_28 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm i_17 (ATerm s_54, ATerm t_54, ATerm t);
ATerm end_scope_1_0 (ATerm o_126 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_126 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm t);
static ATerm a_29 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm c_29 (ATerm t);
static ATerm d_29 (ATerm t);
static ATerm e_29 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_121 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm u_114 (ATerm), ATerm t);
static ATerm t_212 (ATerm l_212, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_17 (ATerm j_143, ATerm f_143, ATerm t);
ATerm foldr_3_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm t);
static ATerm k_29 (ATerm t);
static ATerm l_29 (ATerm t);
static ATerm m_29 (ATerm t);
static ATerm n_29 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm q_29 (ATerm t);
static ATerm r_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm w_29 (ATerm t);
static ATerm x_29 (ATerm t);
static ATerm y_29 (ATerm t);
static ATerm z_29 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm c_30 (ATerm t);
static ATerm d_30 (ATerm t);
static ATerm l_30 (ATerm t);
static ATerm m_30 (ATerm t);
static ATerm n_30 (ATerm t);
static ATerm o_30 (ATerm t);
static ATerm q_30 (ATerm t);
static ATerm u_30 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm f_115 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm h_31 (ATerm t);
ATerm unquote_chars_2_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm t);
static ATerm j_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm o_230 (ATerm z_226, ATerm a_227, ATerm t);
static ATerm p_230 (ATerm g_227, ATerm h_227, ATerm t);
static ATerm t_31 (ATerm t);
static ATerm u_31 (ATerm t);
static ATerm w_31 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm d_32 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm s_107 (ATerm), ATerm t);
static ATerm h_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm l_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm e_33 (ATerm t);
static ATerm f_33 (ATerm t);
ATerm frontend_transformation_0_0 (ATerm t);
static ATerm q_17 (ATerm q_40, ATerm r_40, ATerm t);
static ATerm r_17 (ATerm f_25, ATerm g_25, ATerm t);
static ATerm t_17 (ATerm v_113 (ATerm), ATerm q_182, ATerm j_25, ATerm t);
static ATerm s_17 (ATerm b_25, ATerm c_25, ATerm t);
static ATerm g_33 (ATerm t);
static ATerm h_33 (ATerm t);
ATerm output_1_0 (ATerm s_131 (ATerm), ATerm t);
static ATerm x_232 (ATerm r_232, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_17 (ATerm h_25, ATerm t);
static ATerm v_17 (ATerm s_40, ATerm t_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_234 (ATerm h_233, ATerm t);
static ATerm j_234 (ATerm l_233, ATerm m_233, ATerm n_233, ATerm t);
static ATerm k_234 (ATerm v_233, ATerm w_233, ATerm x_233, ATerm t);
static ATerm w_17 (ATerm t);
static ATerm i_33 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_131 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm n_33 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_33 (ATerm t);
static ATerm p_33 (ATerm t);
static ATerm q_33 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm s_33 (ATerm t);
static ATerm t_33 (ATerm t);
static ATerm u_33 (ATerm t);
static ATerm v_33 (ATerm t);
static ATerm w_33 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_18 (ATerm n_49, ATerm o_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm x_33 (ATerm t);
static ATerm y_33 (ATerm t);
static ATerm z_33 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_18 (ATerm n_54, ATerm o_54, ATerm m_54, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm a_34 (ATerm t);
static ATerm b_34 (ATerm t);
static ATerm c_34 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_17 (ATerm m_43, ATerm n_43, ATerm t);
ATerm foldr_2_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_34 (ATerm t);
static ATerm e_34 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_128 (ATerm), ATerm t);
static ATerm f_34 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_34 (ATerm t);
ATerm need_help_1_0 (ATerm j_131 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm j_34 (ATerm t);
static ATerm k_34 (ATerm t);
static ATerm l_34 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_114 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_18 (ATerm x_38, ATerm z_38, ATerm t);
ATerm debug_1_0 (ATerm t_113 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_114 (ATerm), ATerm t);
static ATerm m_34 (ATerm t);
static ATerm q_34 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm b_18 (ATerm e_56, ATerm f_56, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm r_34 (ATerm t);
static ATerm s_34 (ATerm t);
static ATerm t_34 (ATerm t);
static ATerm u_34 (ATerm t);
static ATerm v_34 (ATerm t);
static ATerm w_34 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_133 (ATerm), ATerm t);
static ATerm y_34 (ATerm t);
static ATerm z_34 (ATerm t);
static ATerm a_35 (ATerm t);
static ATerm c_35 (ATerm t);
ATerm parse_options_1_0 (ATerm l_133 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t);
static ATerm e_35 (ATerm t);
static ATerm f_35 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm k_35 (ATerm t);
static ATerm l_35 (ATerm t);
static ATerm m_35 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  f_0 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      j_0 = ATgetArgument(t, 0);
      b_0 = ATgetArgument(t, 1);
      {
        ATerm q_0 = NULL,s_0 = NULL,u_0 = NULL,w_0 = NULL;
        t = f_0;
        t = new_0_0(t);
        q_0 = t;
        t = new_0_0(t);
        s_0 = t;
        t = new_0_0(t);
        u_0 = t;
        t = new_0_0(t);
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_0), u_0), s_0), q_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, q_0), (ATerm) ATmakeAppl(sym_Var_1, u_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, j_0, (ATerm)ATmakeAppl(sym_Var_1, q_0), (ATerm) ATmakeAppl(sym_Var_1, s_0)), (ATerm) ATmakeAppl(sym_BAM_3, b_0, (ATerm)ATmakeAppl(sym_Var_1, u_0), (ATerm) ATmakeAppl(sym_Var_1, w_0)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_s_35, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_0)), (ATerm) ATmakeAppl(sym_Var_1, s_0))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_0 = ATgetArgument(t, 0);
          {
            ATerm x_0 = NULL,z_0 = NULL,n_1 = NULL,p_1 = NULL;
            t = f_0;
            t = new_0_0(t);
            n_1 = t;
            t = j_0;
            {
              static ATerm a_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((x_0 != NULL) && (x_0 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      x_0 = ATgetArgument(t, 0);
                    if(((z_0 != NULL) && (z_0 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, n_1);
                return(t);
              }
              t = oncetd_1_0(a_0, t);
            }
            p_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_35, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_0)), not_null(x_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_1)), (ATerm) ATmakeAppl(sym_Build_1, p_1))));
          }
        }
      else
        {
          ATerm t_1 = NULL,v_1 = NULL,x_1 = NULL,z_1 = NULL,b_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              j_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_0;
          t = new_0_0(t);
          x_1 = t;
          t = new_0_0(t);
          z_1 = t;
          t = j_0;
          {
            static ATerm h_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((t_1 != NULL) && (t_1 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    t_1 = ATgetArgument(t, 0);
                  if(((v_1 != NULL) && (v_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    v_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, x_1);
              return(t);
            }
            t = oncetd_1_0(h_0, t);
          }
          b_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_35, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_1))))), (ATerm)ATmakeAppl(sym_Var_1, x_1), (ATerm) ATmakeAppl(sym_Op_2, term_v_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_1)), not_null(t_1)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm f_2 = NULL,h_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
        t = f_2;
        t = new_0_0(t);
        m_2 = t;
        t = h_2;
        {
          static ATerm m_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_2 = ATgetArgument(t, 0);
                if(((l_2 != NULL) && (l_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_2), k_2);
            return(t);
          }
          t = pat_td_1_0(m_0, t);
        }
        n_2 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_35, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_2))))));
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        {
          ATerm z_35 = t;
          int a_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
              t = f_2;
              t = new_0_0(t);
              s_2 = t;
              t = h_2;
              {
                static ATerm o_0 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_2);
                  return(t);
                }
                t = pat_td_1_0(o_0, t);
              }
              t_2 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_2)), not_null(r_2))));
              LocalPopChoice(a_36);
            }
          else
            {
              t = z_35;
              {
                ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,c_3 = NULL;
                t = f_2;
                t = new_0_0(t);
                y_2 = t;
                t = h_2;
                {
                  static ATerm b_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((x_2 != NULL) && (x_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          x_2 = ATgetArgument(t, 0);
                        if(((w_2 != NULL) && (w_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_2);
                    return(t);
                  }
                  t = pat_td_1_0(b_1, t);
                }
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_2)), not_null(x_2)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm c_139 (ATerm), ATerm t)
{
  ATerm b_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_139(t);
      LocalPopChoice(d_36);
    }
  else
    {
      t = b_36;
      {
        ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
        u_5 = t;
        if(match_cons(t, sym_Op_2))
          {
            v_5 = ATgetArgument(t, 0);
            w_5 = ATgetArgument(t, 1);
            {
              ATerm d_1 = NULL,l_1 = NULL,n_3 = NULL;
              t = SSLgetAnnotations(u_5);
              d_1 = t;
              t = w_5;
              {
                static ATerm f_1 (ATerm t)
                {
                  t = pat_td_1_0(c_139, t);
                  return(t);
                }
                t = fetch_1_0(f_1, t);
              }
              l_1 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, v_5, l_1);
              n_3 = t;
              t = SSLsetAnnotations(n_3, d_1);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                v_5 = ATgetArgument(t, 0);
                w_5 = ATgetArgument(t, 1);
                {
                  ATerm e_36 = t;
                  int f_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_3 = NULL,g_3 = NULL,p_3 = NULL;
                      t = SSLgetAnnotations(u_5);
                      d_3 = t;
                      t = w_5;
                      t = pat_td_1_0(c_139, t);
                      g_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, v_5, g_3);
                      p_3 = t;
                      t = SSLsetAnnotations(p_3, d_3);
                      LocalPopChoice(f_36);
                    }
                  else
                    {
                      t = e_36;
                      {
                        ATerm v_3 = NULL,i_4 = NULL,q_3 = NULL;
                        t = SSLgetAnnotations(u_5);
                        v_3 = t;
                        t = v_5;
                        t = pat_td_1_0(c_139, t);
                        i_4 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, i_4, w_5);
                        q_3 = t;
                        t = SSLsetAnnotations(q_3, v_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    v_5 = ATgetArgument(t, 0);
                    w_5 = ATgetArgument(t, 1);
                    t_5 = ATgetArgument(t, 2);
                    {
                      ATerm k_6 = NULL,e_7 = NULL,r_3 = NULL;
                      t = SSLgetAnnotations(u_5);
                      k_6 = t;
                      t = t_5;
                      {
                        static ATerm h_1 (ATerm t)
                        {
                          t = pat_td_1_0(c_139, t);
                          return(t);
                        }
                        t = fetch_1_0(h_1, t);
                      }
                      e_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, v_5, w_5, e_7);
                      r_3 = t;
                      t = SSLsetAnnotations(r_3, k_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        v_5 = ATgetArgument(t, 0);
                        w_5 = ATgetArgument(t, 1);
                        t_5 = ATgetArgument(t, 2);
                        {
                          ATerm e_8 = NULL,l_8 = NULL,s_3 = NULL;
                          t = SSLgetAnnotations(u_5);
                          e_8 = t;
                          t = t_5;
                          {
                            static ATerm j_1 (ATerm t)
                            {
                              t = pat_td_1_0(c_139, t);
                              return(t);
                            }
                            t = fetch_1_0(j_1, t);
                          }
                          l_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, v_5, w_5, l_8);
                          s_3 = t;
                          t = SSLsetAnnotations(s_3, e_8);
                        }
                      }
                    else
                      {
                        ATerm a_9 = NULL,g_9 = NULL,t_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            v_5 = ATgetArgument(t, 0);
                            w_5 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(u_5);
                        a_9 = t;
                        t = w_5;
                        t = pat_td_1_0(c_139, t);
                        g_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, v_5, g_9);
                        t_3 = t;
                        t = SSLsetAnnotations(t_3, a_9);
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
  ATerm l_6 = NULL,m_6 = NULL;
  l_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      m_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL;
        t = l_6;
        t = new_0_0(t);
        q_6 = t;
        t = m_6;
        {
          static ATerm r_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((n_6 != NULL) && (n_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_6 = ATgetArgument(t, 0);
                if(((o_6 != NULL) && (o_6 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, q_6);
            return(t);
          }
          t = pat_td_1_0(r_1, t);
        }
        r_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_6)), not_null(n_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_6)))), (ATerm) ATmakeAppl(sym_Build_1, r_6)));
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_6 = NULL,u_6 = NULL,v_6 = NULL;
              t = l_6;
              t = new_0_0(t);
              u_6 = t;
              t = m_6;
              {
                static ATerm d_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((s_6 != NULL) && (s_6 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_6 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, u_6);
                  return(t);
                }
                t = pat_td_1_0(d_2, t);
              }
              v_6 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_6), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_6)))), (ATerm) ATmakeAppl(sym_Build_1, v_6)));
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              {
                ATerm w_6 = NULL,x_6 = NULL,a_7 = NULL,b_7 = NULL;
                t = l_6;
                t = new_0_0(t);
                a_7 = t;
                t = m_6;
                {
                  static ATerm j_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_6 != NULL) && (w_6 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_6 = ATgetArgument(t, 0);
                        if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_6 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_7);
                    return(t);
                  }
                  t = pat_td_1_0(j_2, t);
                }
                b_7 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(w_6), not_null(x_6), (ATerm) ATmakeAppl(sym_Var_1, a_7))), (ATerm) ATmakeAppl(sym_Build_1, b_7)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm l_36 = t;
  if((PushChoice() == 0))
    {
      ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,d_4 = NULL;
      y_7 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_7);
      w_7 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, x_7);
      d_4 = t;
      t = SSLsetAnnotations(d_4, w_7);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_36;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_36;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm z_7 = NULL,b_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_7 = ATgetFirst((ATermList) t);
      b_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_7, b_8);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,f_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if(match_cons(s_36, sym__2))
        {
          c_8 = ATgetArgument(s_36, 0);
          d_8 = ATgetArgument(s_36, 1);
        }
      else
        _fail(t);
      {
        ATerm t_36 = ATgetArgument(t, 1);
        if(match_cons(t_36, sym__2))
          {
            f_8 = ATgetArgument(t_36, 0);
            i_8 = ATgetArgument(t_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_8), c_8), (ATerm) ATinsert(CheckATermList(i_8), d_8));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_36;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm k_8 = NULL,m_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_8 = ATgetFirst((ATermList) t);
      m_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_8, m_8);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm q_8 = NULL,s_8 = NULL,u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_36 = ATgetArgument(t, 0);
      if(match_cons(w_36, sym__2))
        {
          q_8 = ATgetArgument(w_36, 0);
          s_8 = ATgetArgument(w_36, 1);
        }
      else
        _fail(t);
      {
        ATerm y_36 = ATgetArgument(t, 1);
        if(match_cons(y_36, sym__2))
          {
            u_8 = ATgetArgument(y_36, 0);
            v_8 = ATgetArgument(y_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_8), q_8), (ATerm) ATinsert(CheckATermList(v_8), s_8));
  return(t);
}
static ATerm e_15 (ATerm m_78, ATerm n_78, ATerm o_78, ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,o_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,e_4 = NULL;
  t = o_78;
  t = fetch_1_0(o_2, t);
  t = o_78;
  t = genzip_4_0(p_2, q_2, u_2, LiftPrimArg_0_0, t);
  u_7 = t;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_7);
  o_7 = t;
  t = p_7;
  t = concat_0_0(t);
  s_7 = t;
  t = r_7;
  t = genzip_4_0(v_2, z_2, a_3, _id, t);
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_7, t_7);
  e_4 = t;
  t = SSLsetAnnotations(e_4, o_7);
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      {
        ATerm z_36 = ATgetArgument(t, 1);
        if(match_cons(z_36, sym__2))
          {
            h_7 = ATgetArgument(z_36, 0);
            i_7 = ATgetArgument(z_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_7), (ATerm) ATmakeAppl(sym_CallT_3, m_78, n_78, i_7)));
  return(t);
}
static ATerm r_9 (ATerm b_9, ATerm t)
{
  ATerm f_9 = NULL;
  t = b_9;
  {
    ATerm a_37 = t;
    if((PushChoice() == 0))
      {
        ATerm h_9 = NULL,j_9 = NULL,l_9 = NULL,h_4 = NULL;
        l_9 = t;
        if(match_cons(t, sym_Var_1))
          {
            j_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_9);
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, j_9);
        h_4 = t;
        t = SSLsetAnnotations(h_4, h_9);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_37;
      }
  }
  t = new_0_0(t);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, f_9), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_9), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_9)))), (ATerm) ATmakeAppl(sym_Var_1, f_9)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm m_9 = NULL,p_9 = NULL;
  m_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_9 = ATgetArgument(t, 0);
      {
        ATerm b_37 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_9(m_9, t);
            LocalPopChoice(c_37);
          }
        else
          {
            t = b_37;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_d_37, (ATerm) ATmakeAppl(sym_Var_1, p_9)));
          }
      }
    }
  else
    {
      t = r_9(m_9, t);
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm e_37 = t;
  if((PushChoice() == 0))
    {
      ATerm r_11 = NULL,b_12 = NULL,c_12 = NULL,k_4 = NULL;
      c_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_12);
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
      k_4 = t;
      t = SSLsetAnnotations(k_4, r_11);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_37;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_36;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm d_12 = NULL,f_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_12 = ATgetFirst((ATermList) t);
      f_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_12, f_12);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_37 = ATgetArgument(t, 0);
      if(match_cons(f_37, sym__2))
        {
          h_12 = ATgetArgument(f_37, 0);
          i_12 = ATgetArgument(f_37, 1);
        }
      else
        _fail(t);
      {
        ATerm g_37 = ATgetArgument(t, 1);
        if(match_cons(g_37, sym__2))
          {
            l_12 = ATgetArgument(g_37, 0);
            m_12 = ATgetArgument(g_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_12), h_12), (ATerm) ATinsert(CheckATermList(m_12), i_12));
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_36;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_12 = ATgetFirst((ATermList) t);
      o_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_12, o_12);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_37 = ATgetArgument(t, 0);
      if(match_cons(h_37, sym__2))
        {
          p_12 = ATgetArgument(h_37, 0);
          q_12 = ATgetArgument(h_37, 1);
        }
      else
        _fail(t);
      {
        ATerm i_37 = ATgetArgument(t, 1);
        if(match_cons(i_37, sym__2))
          {
            r_12 = ATgetArgument(i_37, 0);
            t_12 = ATgetArgument(i_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_12), p_12), (ATerm) ATinsert(CheckATermList(t_12), q_12));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_37 = t;
  if((PushChoice() == 0))
    {
      ATerm r_14 = NULL,v_14 = NULL,z_14 = NULL,m_4 = NULL;
      z_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_14);
      r_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_14);
      m_4 = t;
      t = SSLsetAnnotations(m_4, r_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_37;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_36;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_15 = ATgetFirst((ATermList) t);
      b_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,f_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      if(match_cons(l_37, sym__2))
        {
          c_15 = ATgetArgument(l_37, 0);
          d_15 = ATgetArgument(l_37, 1);
        }
      else
        _fail(t);
      {
        ATerm m_37 = ATgetArgument(t, 1);
        if(match_cons(m_37, sym__2))
          {
            f_15 = ATgetArgument(m_37, 0);
            g_15 = ATgetArgument(m_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_15), c_15), (ATerm) ATinsert(CheckATermList(g_15), d_15));
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_36;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm t_15 = NULL,w_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_15 = ATgetFirst((ATermList) t);
      w_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_15, w_15);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm y_15 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_37 = ATgetArgument(t, 0);
      if(match_cons(q_37, sym__2))
        {
          y_15 = ATgetArgument(q_37, 0);
          m_16 = ATgetArgument(q_37, 1);
        }
      else
        _fail(t);
      {
        ATerm r_37 = ATgetArgument(t, 1);
        if(match_cons(r_37, sym__2))
          {
            n_16 = ATgetArgument(r_37, 0);
            o_16 = ATgetArgument(r_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_16), y_15), (ATerm) ATinsert(CheckATermList(o_16), m_16));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  n_13 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
      m_13 = ATgetArgument(t, 2);
      {
        ATerm e_10 = NULL,f_10 = NULL,m_10 = NULL,p_10 = NULL,q_10 = NULL,s_10 = NULL,u_10 = NULL,v_10 = NULL,i_11 = NULL,l_4 = NULL;
        t = m_13;
        t = fetch_1_0(b_3, t);
        t = m_13;
        t = genzip_4_0(e_3, f_3, h_3, LiftPrimArg_0_0, t);
        i_11 = t;
        if(match_cons(t, sym__2))
          {
            q_10 = ATgetArgument(t, 0);
            s_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_11);
        p_10 = t;
        t = q_10;
        t = concat_0_0(t);
        u_10 = t;
        t = s_10;
        t = genzip_4_0(i_3, j_3, k_3, _id, t);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_10, v_10);
        l_4 = t;
        t = SSLsetAnnotations(l_4, p_10);
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            {
              ATerm u_37 = ATgetArgument(t, 1);
              if(match_cons(u_37, sym__2))
                {
                  f_10 = ATgetArgument(u_37, 0);
                  m_10 = ATgetArgument(u_37, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_10), (ATerm) ATmakeAppl(sym_PrimT_3, o_13, p_13, m_10)));
      }
    }
  else
    {
      ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,f_14 = NULL,i_14 = NULL,n_14 = NULL,n_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          o_13 = ATgetArgument(t, 0);
          p_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_13;
      t = fetch_1_0(l_3, t);
      t = p_13;
      t = genzip_4_0(m_3, o_3, u_3, LiftPrimArg_0_0, t);
      n_14 = t;
      if(match_cons(t, sym__2))
        {
          b_14 = ATgetArgument(t, 0);
          c_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_14);
      a_14 = t;
      t = b_14;
      t = concat_0_0(t);
      f_14 = t;
      t = c_14;
      t = genzip_4_0(w_3, x_3, y_3, _id, t);
      i_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_14, i_14);
      n_4 = t;
      t = SSLsetAnnotations(n_4, a_14);
      if(match_cons(t, sym__2))
        {
          x_13 = ATgetArgument(t, 0);
          {
            ATerm x_37 = ATgetArgument(t, 1);
            if(match_cons(x_37, sym__2))
              {
                y_13 = ATgetArgument(x_37, 0);
                z_13 = ATgetArgument(x_37, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, x_13, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_13), (ATerm) ATmakeAppl(sym_PrimT_3, o_13, (ATerm)ATempty, z_13)));
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
    }
  t = repeat_2_0(a_4, _id, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
      {
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_14 = NULL,h_14 = NULL,j_14 = NULL,k_14 = NULL;
            g_14 = t;
            if(match_cons(t, sym_CallT_3))
              {
                h_14 = ATgetArgument(t, 0);
                j_14 = ATgetArgument(t, 1);
                k_14 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_14;
            t = e_15(h_14, j_14, k_14, t);
            LocalPopChoice(d_38);
          }
        else
          {
            t = c_38;
            {
              ATerm e_38 = t;
              int f_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(f_38);
                }
              else
                {
                  t = e_38;
                  {
                    ATerm h_38 = t;
                    int i_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(i_38);
                      }
                    else
                      {
                        t = h_38;
                        {
                          ATerm j_38 = t;
                          int k_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_38 = t;
                              int m_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_14 = NULL,s_14 = NULL,t_14 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      q_14 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_14;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      s_14 = ATgetArgument(t, 0);
                                      t = s_14;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          s_14 = ATgetArgument(t, 0);
                                          t_14 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, s_14, t_14);
                                    }
                                  LocalPopChoice(m_38);
                                }
                              else
                                {
                                  t = l_38;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(k_38);
                            }
                          else
                            {
                              t = j_38;
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
  t = topdown_1_0(z_3, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
      q_19 = t;
      if(match_cons(t, sym_SDef_3))
        {
          v_19 = ATgetArgument(t, 0);
          w_19 = ATgetArgument(t, 1);
          x_19 = ATgetArgument(t, 2);
          {
            ATerm i_18 = NULL,n_18 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(q_19);
            i_18 = t;
            t = x_19;
            t = desugar_0_0(t);
            n_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, v_19, w_19, n_18);
            t_4 = t;
            t = SSLsetAnnotations(t_4, i_18);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              v_19 = ATgetArgument(t, 0);
              w_19 = ATgetArgument(t, 1);
              x_19 = ATgetArgument(t, 2);
              y_19 = ATgetArgument(t, 3);
              {
                ATerm h_19 = NULL,z_19 = NULL,u_4 = NULL;
                t = SSLgetAnnotations(q_19);
                h_19 = t;
                t = y_19;
                t = desugar_0_0(t);
                z_19 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_19, w_19, x_19, z_19);
                u_4 = t;
                t = SSLsetAnnotations(u_4, h_19);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  v_19 = ATgetArgument(t, 0);
                  w_19 = ATgetArgument(t, 1);
                  x_19 = ATgetArgument(t, 2);
                  {
                    ATerm s_20 = NULL,v_4 = NULL;
                    t = SSLgetAnnotations(q_19);
                    s_20 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDef_3, v_19, w_19, x_19);
                    v_4 = t;
                    t = SSLsetAnnotations(v_4, s_20);
                  }
                }
              else
                {
                  ATerm g_21 = NULL,w_4 = NULL;
                  if(match_cons(t, sym_ExtSDefInl_4))
                    {
                      v_19 = ATgetArgument(t, 0);
                      w_19 = ATgetArgument(t, 1);
                      x_19 = ATgetArgument(t, 2);
                      y_19 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_19);
                  g_21 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, v_19, w_19, x_19, y_19);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, g_21);
                }
            }
        }
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
      t = debug_1_0(c_4, t);
      _fail(t);
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm desugar_spec_0_0 (ATerm t)
{
  t = map_1_0(b_4, t);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_128 (ATerm), ATerm t)
{
  ATerm i_20 = NULL;
  i_20 = t;
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL;
        t = term_t_38;
        t = get_config_0_0(t);
        k_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_20, term_v_38);
        t = geq_0_0(t);
        t = i_20;
        t = v_128(t);
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        t = i_20;
      }
  }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(((ATgetType(y_38) != AT_LIST) || !(ATisEmpty(y_38))))
        _fail(t);
      {
        ATerm a_39 = ATgetArgument(t, 1);
        if(((ATgetType(a_39) != AT_LIST) || !(ATisEmpty(a_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      if(((ATgetType(b_39) == AT_LIST) && !(ATisEmpty(b_39))))
        {
          e_23 = ATgetFirst((ATermList) b_39);
          f_23 = (ATerm) ATgetNext((ATermList) b_39);
        }
      else
        _fail(t);
      {
        ATerm e_39 = ATgetArgument(t, 1);
        if(((ATgetType(e_39) == AT_LIST) && !(ATisEmpty(e_39))))
          {
            g_23 = ATgetFirst((ATermList) e_39);
            h_23 = (ATerm) ATgetNext((ATermList) e_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_23, g_23), (ATerm) ATmakeAppl(sym__2, f_23, h_23));
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_23), i_23);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm l_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  if(match_cons(t, sym__2))
    {
      l_23 = ATgetArgument(t, 0);
      q_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_23;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm h_39 = ATgetArgument(t, 0);
            n_23 = ATgetArgument(t, 1);
            o_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(g_39);
        t = (ATerm) ATmakeAppl(sym_SDef_3, q_23, n_23, o_23);
      }
    else
      {
        t = f_39;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm i_39 = ATgetArgument(t, 0);
            n_23 = ATgetArgument(t, 1);
            o_23 = ATgetArgument(t, 2);
            p_23 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_23, n_23, o_23, p_23);
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      if(((ATgetType(j_39) != AT_LIST) || !(ATisEmpty(j_39))))
        _fail(t);
      {
        ATerm k_39 = ATgetArgument(t, 1);
        if(((ATgetType(k_39) != AT_LIST) || !(ATisEmpty(k_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_39 = ATgetArgument(t, 0);
      if(((ATgetType(l_39) == AT_LIST) && !(ATisEmpty(l_39))))
        {
          o_25 = ATgetFirst((ATermList) l_39);
          p_25 = (ATerm) ATgetNext((ATermList) l_39);
        }
      else
        _fail(t);
      {
        ATerm m_39 = ATgetArgument(t, 1);
        if(((ATgetType(m_39) == AT_LIST) && !(ATisEmpty(m_39))))
          {
            q_25 = ATgetFirst((ATermList) m_39);
            r_25 = (ATerm) ATgetNext((ATermList) m_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_25, q_25), (ATerm) ATmakeAppl(sym__2, p_25, r_25));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_25), s_25);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm v_25 = NULL,y_25 = NULL,c_26 = NULL;
  if(match_cons(t, sym__2))
    {
      v_25 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_25;
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_26);
      }
    else
      {
        t = n_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_39 = ATgetArgument(t, 0);
            y_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_26, y_25);
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      if(((ATgetType(s_39) != AT_LIST) || !(ATisEmpty(s_39))))
        _fail(t);
      {
        ATerm u_39 = ATgetArgument(t, 1);
        if(((ATgetType(u_39) != AT_LIST) || !(ATisEmpty(u_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm q_27 = NULL,w_27 = NULL,z_27 = NULL,f_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
        {
          q_27 = ATgetFirst((ATermList) v_39);
          w_27 = (ATerm) ATgetNext((ATermList) v_39);
        }
      else
        _fail(t);
      {
        ATerm w_39 = ATgetArgument(t, 1);
        if(((ATgetType(w_39) == AT_LIST) && !(ATisEmpty(w_39))))
          {
            z_27 = ATgetFirst((ATermList) w_39);
            f_28 = (ATerm) ATgetNext((ATermList) w_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_27, z_27), (ATerm) ATmakeAppl(sym__2, w_27, f_28));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_28), g_28);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm v_28 = NULL,y_28 = NULL,z_28 = NULL;
  if(match_cons(t, sym__2))
    {
      v_28 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_28;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_28);
      }
    else
      {
        t = x_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_40 = ATgetArgument(t, 0);
            y_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_28, y_28);
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_40 = ATgetArgument(t, 0);
      if(((ATgetType(b_40) != AT_LIST) || !(ATisEmpty(b_40))))
        _fail(t);
      {
        ATerm c_40 = ATgetArgument(t, 1);
        if(((ATgetType(c_40) != AT_LIST) || !(ATisEmpty(c_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,d_31 = NULL,e_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_40 = ATgetArgument(t, 0);
      if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
        {
          z_30 = ATgetFirst((ATermList) d_40);
          a_31 = (ATerm) ATgetNext((ATermList) d_40);
        }
      else
        _fail(t);
      {
        ATerm e_40 = ATgetArgument(t, 1);
        if(((ATgetType(e_40) == AT_LIST) && !(ATisEmpty(e_40))))
          {
            d_31 = ATgetFirst((ATermList) e_40);
            e_31 = (ATerm) ATgetNext((ATermList) e_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_30, d_31), (ATerm) ATmakeAppl(sym__2, a_31, e_31));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__2))
    {
      f_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_31), f_31);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm i_31 = NULL,k_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym__2))
    {
      i_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_31;
  {
    ATerm f_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_31);
      }
    else
      {
        t = f_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_40 = ATgetArgument(t, 0);
            k_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_31, k_31);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm m_138 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_30 = ATgetArgument(t, 0);
      k_30 = ATgetArgument(t, 1);
      {
        ATerm l_22 = NULL,z_22 = NULL,c_23 = NULL,b_5 = NULL;
        t = SSLgetAnnotations(i_30);
        l_22 = t;
        t = j_30;
        t = m_138(t);
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_30, c_23);
        t = genzip_4_0(f_4, g_4, j_4, o_4, t);
        z_22 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_22, k_30);
        b_5 = t;
        t = SSLsetAnnotations(b_5, l_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_30 = ATgetArgument(t, 0);
          k_30 = ATgetArgument(t, 1);
          g_30 = ATgetArgument(t, 2);
          {
            ATerm u_24 = NULL,d_25 = NULL,i_25 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(i_30);
            u_24 = t;
            t = k_30;
            t = m_138(t);
            i_25 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_30, i_25);
            t = genzip_4_0(p_4, q_4, r_4, s_4, t);
            d_25 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, j_30, d_25, g_30);
            c_5 = t;
            t = SSLsetAnnotations(c_5, u_24);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              j_30 = ATgetArgument(t, 0);
              k_30 = ATgetArgument(t, 1);
              g_30 = ATgetArgument(t, 2);
              h_30 = ATgetArgument(t, 3);
              {
                ATerm a_27 = NULL,f_27 = NULL,g_27 = NULL,d_5 = NULL;
                t = SSLgetAnnotations(i_30);
                a_27 = t;
                t = k_30;
                t = m_138(t);
                g_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_30, g_27);
                t = genzip_4_0(x_4, y_4, z_4, a_5, t);
                f_27 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, j_30, f_27, g_30, h_30);
                d_5 = t;
                t = SSLsetAnnotations(d_5, a_27);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  j_30 = ATgetArgument(t, 0);
                  k_30 = ATgetArgument(t, 1);
                  g_30 = ATgetArgument(t, 2);
                  h_30 = ATgetArgument(t, 3);
                  {
                    ATerm a_30 = NULL,s_30 = NULL,t_30 = NULL,e_5 = NULL;
                    t = SSLgetAnnotations(i_30);
                    a_30 = t;
                    t = k_30;
                    t = m_138(t);
                    t_30 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_30, t_30);
                    t = genzip_4_0(g_5, h_5, i_5, j_5, t);
                    s_30 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, j_30, s_30, g_30, h_30);
                    e_5 = t;
                    t = SSLsetAnnotations(e_5, a_30);
                  }
                }
              else
                {
                  ATerm i_32 = NULL,r_32 = NULL,f_5 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      j_30 = ATgetArgument(t, 0);
                      k_30 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_30);
                  i_32 = t;
                  t = j_30;
                  t = m_138(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_32 = ATgetFirst((ATermList) t);
                      {
                        ATerm k_40 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, r_32, k_30);
                  f_5 = t;
                  t = SSLsetAnnotations(f_5, i_32);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm n_138 (ATerm), ATerm o_138 (ATerm), ATerm p_138 (ATerm), ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
      {
        ATerm c_33 = NULL,j_33 = NULL,k_33 = NULL,l_5 = NULL;
        t = SSLgetAnnotations(p_35);
        c_33 = t;
        t = q_35;
        t = n_138(t);
        j_33 = t;
        t = r_35;
        t = n_138(t);
        k_33 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_33, k_33);
        l_5 = t;
        t = SSLsetAnnotations(l_5, c_33);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_35 = ATgetArgument(t, 0);
          r_35 = ATgetArgument(t, 1);
          n_35 = ATgetArgument(t, 2);
          {
            ATerm i_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,m_5 = NULL;
            t = SSLgetAnnotations(p_35);
            i_34 = t;
            t = q_35;
            t = p_138(t);
            n_34 = t;
            t = r_35;
            t = p_138(t);
            o_34 = t;
            t = n_35;
            t = n_138(t);
            p_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_34, o_34, p_34);
            m_5 = t;
            t = SSLsetAnnotations(m_5, i_34);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              q_35 = ATgetArgument(t, 0);
              r_35 = ATgetArgument(t, 1);
              n_35 = ATgetArgument(t, 2);
              o_35 = ATgetArgument(t, 3);
              {
                ATerm b_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,t_35 = NULL,n_5 = NULL;
                t = SSLgetAnnotations(p_35);
                b_35 = t;
                t = q_35;
                t = p_138(t);
                h_35 = t;
                t = r_35;
                t = p_138(t);
                i_35 = t;
                t = n_35;
                t = p_138(t);
                j_35 = t;
                t = o_35;
                t = n_138(t);
                t_35 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, h_35, i_35, j_35, t_35);
                n_5 = t;
                t = SSLsetAnnotations(n_5, b_35);
              }
            }
          else
            {
              ATerm r_36 = NULL,u_36 = NULL,v_36 = NULL,o_5 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  q_35 = ATgetArgument(t, 0);
                  r_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_35);
              r_36 = t;
              t = q_35;
              t = p_138(t);
              u_36 = t;
              t = r_35;
              t = n_138(t);
              v_36 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, u_36, v_36);
              o_5 = t;
              t = SSLsetAnnotations(o_5, r_36);
            }
        }
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm c_36 = NULL;
  ATerm l_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_36 = ATgetArgument(t, 0);
          {
            ATerm o_40 = ATgetArgument(t, 1);
          }
          {
            ATerm u_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_40);
      t = c_36;
    }
  else
    {
      t = l_40;
      if(match_cons(t, sym_SDefT_4))
        {
          c_36 = ATgetArgument(t, 0);
          {
            ATerm v_40 = ATgetArgument(t, 1);
          }
          {
            ATerm b_41 = ATgetArgument(t, 2);
          }
          {
            ATerm c_41 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = c_36;
    }
  return(t);
}
static ATerm j_15 (ATerm a_65, ATerm z_64, ATerm t)
{
  t = a_65;
  t = map_1_0(k_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,a_6 = NULL;
  q_36 = t;
  if(match_cons(t, sym_SVar_1))
    {
      o_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_36);
  n_36 = t;
  t = o_36;
  t = s_89(t);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, p_36);
  a_6 = t;
  t = SSLsetAnnotations(a_6, n_36);
  return(t);
}
ATerm rename_4_0 (ATerm h_134 (ATerm (ATerm), ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_134 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_36 = NULL;
  static ATerm t_37 (ATerm t)
  {
    static ATerm p_5 (ATerm t)
    {
      ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
      n_37 = t;
      if(match_cons(t, sym__2))
        {
          o_37 = ATgetArgument(t, 0);
          p_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_5 (ATerm t)
            {
              ATerm s_37 = NULL;
              s_37 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_37, p_37);
              t = lookup_0_0(t);
              return(t);
            }
            t = o_37;
            t = h_134(q_5, t);
            LocalPopChoice(e_41);
          }
        else
          {
            t = d_41;
            {
              ATerm k_37 = NULL,v_37 = NULL,w_37 = NULL;
              t = n_37;
              t = v_15(i_134, k_134, o_37, p_37, t);
              if(match_cons(t, sym__3))
                {
                  k_37 = ATgetArgument(t, 0);
                  v_37 = ATgetArgument(t, 1);
                  w_37 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_15(t_37, j_134, k_37, v_37, w_37, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(p_5, t);
    return(t);
  }
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_36, (ATerm) ATempty);
  t = t_37(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_41);
    }
  else
    {
      t = f_41;
      {
        ATerm s_38 = NULL,u_38 = NULL,c_39 = NULL,d_39 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            s_38 = ATgetArgument(t, 0);
            u_38 = ATgetArgument(t, 1);
            c_39 = ATgetArgument(t, 2);
            d_39 = ATgetArgument(t, 3);
            t = c_39;
            t = map_1_0(s_5, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                s_38 = ATgetArgument(t, 0);
                u_38 = ATgetArgument(t, 1);
                c_39 = ATgetArgument(t, 2);
                d_39 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = c_39;
            t = map_1_0(x_5, t);
          }
      }
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm t_39 = NULL;
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_39 = ATgetArgument(t, 0);
          {
            ATerm j_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_41);
      t = t_39;
    }
  else
    {
      t = h_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_39;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm g_40 = NULL;
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_40 = ATgetArgument(t, 0);
          {
            ATerm m_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_41);
      t = g_40;
    }
  else
    {
      t = k_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_40;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm p_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
  p_40 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
      t = p_40;
      t = j_15(w_40, x_40, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_40 = ATgetArgument(t, 0);
          x_40 = ATgetArgument(t, 1);
          y_40 = ATgetArgument(t, 2);
          t = x_40;
          t = map_1_0(z_5, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              w_40 = ATgetArgument(t, 0);
              x_40 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, w_40);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  w_40 = ATgetArgument(t, 0);
                  x_40 = ATgetArgument(t, 1);
                  y_40 = ATgetArgument(t, 2);
                  z_40 = ATgetArgument(t, 3);
                  t = x_40;
                  t = map_1_0(b_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_40 = ATgetArgument(t, 0);
                      x_40 = ATgetArgument(t, 1);
                      y_40 = ATgetArgument(t, 2);
                      z_40 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_40;
                  t = map_1_0(d_6, t);
                }
            }
        }
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm q_41 = NULL;
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_41 = ATgetArgument(t, 0);
          {
            ATerm r_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_41);
      t = q_41;
    }
  else
    {
      t = o_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_41;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm j_42 = NULL;
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_42 = ATgetArgument(t, 0);
          {
            ATerm u_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = j_42;
    }
  else
    {
      t = s_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_42;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm y_42 = NULL;
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_42 = ATgetArgument(t, 0);
          {
            ATerm x_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_41);
      t = y_42;
    }
  else
    {
      t = v_41;
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
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, r_5, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, y_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm l_15 (ATerm j_76, ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  t = j_76;
  {
    static ATerm g_6 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm z_41 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) z_41) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm a_42 = ATgetArgument(t, 1);
            if(((ATgetType(a_42) == AT_LIST) && !(ATisEmpty(a_42))))
              {
                ATerm b_42 = ATgetFirst((ATermList) a_42);
                if(match_cons(b_42, sym_Var_1))
                  {
                    ATerm d_42 = ATgetArgument(b_42, 0);
                    if(match_cons(d_42, sym_ListVar_1))
                      {
                        if(((b_43 != NULL) && (b_43 != ATgetArgument(d_42, 0))))
                          _fail(ATgetArgument(d_42, 0));
                        else
                          b_43 = ATgetArgument(d_42, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm c_42 = (ATerm) ATgetNext((ATermList) a_42);
                  if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
                    {
                      ATerm e_42 = ATgetFirst((ATermList) c_42);
                      if(match_cons(e_42, sym_Op_2))
                        {
                          ATerm g_42 = ATgetArgument(e_42, 0);
                          if((ATgetSymbol((ATermAppl) g_42) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm h_42 = ATgetArgument(e_42, 1);
                            if(((ATgetType(h_42) != AT_LIST) || !(ATisEmpty(h_42))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm f_42 = (ATerm) ATgetNext((ATermList) c_42);
                        if(((ATgetType(f_42) != AT_LIST) || !(ATisEmpty(f_42))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, b_43);
      return(t);
    }
    t = oncetd_1_0(g_6, t);
  }
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, c_43);
  return(t);
}
static ATerm m_15 (ATerm g_76, ATerm t)
{
  ATerm d_43 = NULL,g_43 = NULL;
  t = g_76;
  {
    static ATerm h_6 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm i_42 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_42) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm k_42 = ATgetArgument(t, 1);
            if(((ATgetType(k_42) == AT_LIST) && !(ATisEmpty(k_42))))
              {
                ATerm l_42 = ATgetFirst((ATermList) k_42);
                if(match_cons(l_42, sym_Var_1))
                  {
                    ATerm n_42 = ATgetArgument(l_42, 0);
                    if(match_cons(n_42, sym_ListVar_1))
                      {
                        if(((d_43 != NULL) && (d_43 != ATgetArgument(n_42, 0))))
                          _fail(ATgetArgument(n_42, 0));
                        else
                          d_43 = ATgetArgument(n_42, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm m_42 = (ATerm) ATgetNext((ATermList) k_42);
                  if(((ATgetType(m_42) == AT_LIST) && !(ATisEmpty(m_42))))
                    {
                      ATerm o_42 = ATgetFirst((ATermList) m_42);
                      if(match_cons(o_42, sym_Op_2))
                        {
                          ATerm q_42 = ATgetArgument(o_42, 0);
                          if((ATgetSymbol((ATermAppl) q_42) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm r_42 = ATgetArgument(o_42, 1);
                            if(((ATgetType(r_42) != AT_LIST) || !(ATisEmpty(r_42))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm p_42 = (ATerm) ATgetNext((ATermList) m_42);
                        if(((ATgetType(p_42) != AT_LIST) || !(ATisEmpty(p_42))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, d_43);
      return(t);
    }
    t = oncetd_1_0(h_6, t);
  }
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, g_43);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,k_44 = NULL;
  k_44 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_44 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
      i_44 = ATgetArgument(t, 2);
      {
        ATerm g_38 = NULL,c_6 = NULL;
        t = SSLgetAnnotations(k_44);
        g_38 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, g_44, h_44, i_44);
        c_6 = t;
        t = SSLsetAnnotations(c_6, g_38);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = k_44;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm s_42 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_42;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  if(match_cons(t, sym_Con_3))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
      o_46 = ATgetArgument(t, 2);
      {
        ATerm w_38 = NULL,e_6 = NULL;
        t = SSLgetAnnotations(p_46);
        w_38 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, q_46, r_46, o_46);
        e_6 = t;
        t = SSLsetAnnotations(e_6, w_38);
      }
    }
  else
    {
      ATerm r_39 = NULL,f_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          q_46 = ATgetArgument(t, 0);
          r_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_46);
      r_39 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, q_46, r_46);
      f_6 = t;
      t = SSLsetAnnotations(f_6, r_39);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm t_42 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_42;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      d_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_47;
  if(match_cons(t, sym_StratRule_3))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
      g_47 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_47), (ATerm) ATmakeAppl(sym_Where_1, g_47)), e_47));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          e_47 = ATgetArgument(t, 0);
          f_47 = ATgetArgument(t, 1);
          g_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_47;
      t = pureterm_0_0(t);
      t = f_47;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, f_47)), (ATerm) ATmakeAppl(sym_Where_1, g_47)), (ATerm) ATmakeAppl(sym_Match_1, e_47)));
    }
  return(t);
}
static ATerm p_15 (ATerm z_73, ATerm a_74, ATerm b_74, ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  t = new_0_0(t);
  a_48 = t;
  t = z_73;
  {
    static ATerm p_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_42 = ATgetArgument(t, 0);
          if(match_cons(u_42, sym_Var_1))
            {
              if(((z_47 != NULL) && (z_47 != ATgetArgument(u_42, 0))))
                _fail(ATgetArgument(u_42, 0));
              else
                z_47 = ATgetArgument(u_42, 0);
            }
          else
            _fail(t);
          if(((x_47 != NULL) && (x_47 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_47 = ATgetArgument(t, 1);
          {
            ATerm v_42 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, z_47);
      return(t);
    }
    t = oncetd_1_0(p_6, t);
  }
  b_48 = t;
  t = a_74;
  {
    static ATerm t_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm x_42 = ATgetArgument(t, 0);
          if(match_cons(x_42, sym_Var_1))
            {
              if(((z_47 != NULL) && (z_47 != ATgetArgument(x_42, 0))))
                _fail(ATgetArgument(x_42, 0));
              else
                z_47 = ATgetArgument(x_42, 0);
            }
          else
            _fail(t);
          if(((y_47 != NULL) && (y_47 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_47 = ATgetArgument(t, 1);
          {
            ATerm z_42 = ATgetArgument(t, 2);
            if(match_cons(z_42, sym_CallT_3))
              {
                if(((w_47 != NULL) && (w_47 != ATgetArgument(z_42, 0))))
                  _fail(ATgetArgument(z_42, 0));
                else
                  w_47 = ATgetArgument(z_42, 0);
                {
                  ATerm a_43 = ATgetArgument(z_42, 1);
                  if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
                    _fail(t);
                }
                {
                  ATerm e_43 = ATgetArgument(z_42, 2);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, a_48);
      return(t);
    }
    t = oncetd_1_0(t_6, t);
  }
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_48), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, b_48, c_48, (ATerm) ATmakeAppl(sym_Seq_2, b_74, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(w_47), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_47), not_null(y_47), term_d_37))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_47)), (ATerm) ATmakeAppl(sym_Var_1, a_48))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm f_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_43 = t;
      int k_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_48 = NULL,b_49 = NULL,c_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
          h_49 = t;
          if(match_cons(t, sym_SRule_1))
            {
              i_49 = ATgetArgument(t, 0);
              t = i_49;
              if(match_cons(t, sym_Rule_3))
                {
                  v_48 = ATgetArgument(t, 0);
                  b_49 = ATgetArgument(t, 1);
                  c_49 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = h_49;
              t = p_15(v_48, b_49, c_49, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm n_40 = NULL,a_41 = NULL,a_10 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  i_49 = ATgetArgument(t, 0);
                  j_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_49);
              n_40 = t;
              t = j_49;
              t = desugarRule_0_0(t);
              a_41 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, i_49, a_41);
              a_10 = t;
              t = SSLsetAnnotations(a_10, n_40);
            }
          LocalPopChoice(k_43);
        }
      else
        {
          t = j_43;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(h_43);
    }
  else
    {
      t = f_43;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  c_51 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      b_51 = ATgetArgument(t, 0);
      t = b_51;
    }
  else
    {
      t = c_51;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  r_51 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      q_51 = ATgetArgument(t, 0);
      t = q_51;
    }
  else
    {
      t = r_51;
    }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,m_50 = NULL,o_50 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      m_50 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
      j_50 = ATgetArgument(t, 2);
      k_50 = ATgetArgument(t, 3);
      {
        ATerm a_51 = NULL;
        t = j_50;
        t = map_1_0(y_6, t);
        a_51 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_50, o_50, a_51, k_50);
      }
    }
  else
    {
      ATerm k_51 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          m_50 = ATgetArgument(t, 0);
          o_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_50;
      t = map_1_0(z_6, t);
      k_51 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_51, o_50);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm l_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_43 = t;
      int r_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          LocalPopChoice(r_43);
        }
      else
        {
          t = p_43;
          t = desugarRule_0_0(t);
        }
      LocalPopChoice(o_43);
    }
  else
    {
      t = l_43;
    }
  t = repeat_2_0(d_7, _id, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm u_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_43 = t;
      int a_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_52 = NULL;
          if(match_cons(t, sym_DefaultVarDec_1))
            {
              j_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          {
            ATerm c_44 = t;
            int e_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_VarDec_2, j_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_44), term_n_44));
                LocalPopChoice(e_44);
              }
            else
              {
                t = c_44;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, j_52, term_n_44);
              }
          }
          LocalPopChoice(a_44);
        }
      else
        {
          t = w_43;
          {
            ATerm o_44 = t;
            int p_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0_0(t);
                LocalPopChoice(p_44);
              }
            else
              {
                t = o_44;
                {
                  ATerm p_52 = NULL,q_52 = NULL;
                  p_52 = t;
                  if(match_cons(t, sym_Match_1))
                    {
                      q_52 = ATgetArgument(t, 0);
                      t = p_52;
                      t = m_15(q_52, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          q_52 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = p_52;
                      t = l_15(q_52, t);
                    }
                }
              }
          }
        }
      LocalPopChoice(v_43);
    }
  else
    {
      t = u_43;
      {
        ATerm u_52 = NULL,v_52 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            u_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_52;
        if(match_cons(t, sym_ListVar_1))
          {
            v_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, v_52);
      }
    }
  return(t);
}
ATerm DesugarListMatching_0_0 (ATerm t)
{
  t = topdown_1_0(c_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm v_54 = NULL;
  ATerm q_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_54 = ATgetArgument(t, 0);
          {
            ATerm s_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_44);
      t = v_54;
    }
  else
    {
      t = q_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_54;
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm m_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_55);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm t_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_44);
    }
  else
    {
      t = t_44;
      {
        ATerm v_44 = t;
        int w_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_44);
          }
        else
          {
            t = v_44;
            {
              ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_55 = ATgetArgument(t, 0);
                  v_55 = ATgetArgument(t, 1);
                  w_55 = ATgetArgument(t, 2);
                  x_55 = ATgetArgument(t, 3);
                  t = w_55;
                  t = map_1_0(l_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_55 = ATgetArgument(t, 0);
                      v_55 = ATgetArgument(t, 1);
                      w_55 = ATgetArgument(t, 2);
                      x_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_55;
                  t = map_1_0(m_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm s_56 = NULL;
  ATerm x_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_56 = ATgetArgument(t, 0);
          {
            ATerm c_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_44);
      t = s_56;
    }
  else
    {
      t = x_44;
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
static ATerm m_7 (ATerm t)
{
  ATerm u_57 = NULL;
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_57 = ATgetArgument(t, 0);
          {
            ATerm f_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_45);
      t = u_57;
    }
  else
    {
      t = d_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_57;
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  c_58 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      b_58 = ATgetArgument(t, 0);
      t = b_58;
    }
  else
    {
      t = c_58;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm m_58 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_58);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_45);
    }
  else
    {
      t = g_45;
      {
        ATerm j_45 = t;
        int k_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_45);
          }
        else
          {
            t = j_45;
            {
              ATerm q_58 = NULL,s_58 = NULL,d_59 = NULL,e_59 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_58 = ATgetArgument(t, 0);
                  s_58 = ATgetArgument(t, 1);
                  d_59 = ATgetArgument(t, 2);
                  e_59 = ATgetArgument(t, 3);
                  t = d_59;
                  t = map_1_0(a_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_58 = ATgetArgument(t, 0);
                      s_58 = ATgetArgument(t, 1);
                      d_59 = ATgetArgument(t, 2);
                      e_59 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_59;
                  t = map_1_0(g_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm w_59 = NULL;
  ATerm m_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_59 = ATgetArgument(t, 0);
          {
            ATerm q_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_45);
      t = w_59;
    }
  else
    {
      t = m_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_59;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm x_62 = NULL;
  ATerm r_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_62 = ATgetArgument(t, 0);
          {
            ATerm y_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_45);
      t = x_62;
    }
  else
    {
      t = r_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_62;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm p_53 = NULL,t_53 = NULL,u_53 = NULL,a_54 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      t_53 = ATgetArgument(t, 0);
      u_53 = ATgetArgument(t, 1);
      a_54 = ATgetArgument(t, 2);
      p_53 = ATgetArgument(t, 3);
      {
        ATerm h_54 = NULL,l_54 = NULL,p_54 = NULL;
        t = a_54;
        t = map_1_0(f_7, t);
        h_54 = t;
        t = p_53;
        t = free_vars_3_0(j_7, k_7, tboundin_3_0, t);
        t = map_1_0(n_7, t);
        l_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_54, h_54);
        t = diff_0_0(t);
        p_54 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_53, u_53, a_54, (ATerm) ATmakeAppl(sym_Scope_2, p_54, p_53));
      }
    }
  else
    {
      ATerm l_58 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          t_53 = ATgetArgument(t, 0);
          u_53 = ATgetArgument(t, 1);
          a_54 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_54;
      t = free_vars_3_0(q_7, v_7, tboundin_3_0, t);
      l_58 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, t_53, u_53, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, l_58, a_54));
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm x_64 = NULL;
  ATerm z_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_64 = ATgetArgument(t, 0);
          {
            ATerm b_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_46);
      t = x_64;
    }
  else
    {
      t = z_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_64;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm f_65 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_65);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm c_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_46);
    }
  else
    {
      t = c_46;
      {
        ATerm g_46 = t;
        int h_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_46);
          }
        else
          {
            t = g_46;
            {
              ATerm n_65 = NULL,q_65 = NULL,v_65 = NULL,x_65 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_65 = ATgetArgument(t, 0);
                  q_65 = ATgetArgument(t, 1);
                  v_65 = ATgetArgument(t, 2);
                  x_65 = ATgetArgument(t, 3);
                  t = v_65;
                  t = map_1_0(o_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_65 = ATgetArgument(t, 0);
                      q_65 = ATgetArgument(t, 1);
                      v_65 = ATgetArgument(t, 2);
                      x_65 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_65;
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
  ATerm j_66 = NULL;
  ATerm i_46 = t;
  int j_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_66 = ATgetArgument(t, 0);
          {
            ATerm k_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_46);
      t = j_66;
    }
  else
    {
      t = i_46;
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
static ATerm p_8 (ATerm t)
{
  ATerm f_68 = NULL;
  ATerm l_46 = t;
  int m_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_68 = ATgetArgument(t, 0);
          {
            ATerm n_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_46);
      t = f_68;
    }
  else
    {
      t = l_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_68;
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm g_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_69);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm s_46 = t;
  int t_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_46);
    }
  else
    {
      t = s_46;
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
              ATerm q_69 = NULL,r_69 = NULL,v_69 = NULL,w_69 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_69 = ATgetArgument(t, 0);
                  r_69 = ATgetArgument(t, 1);
                  v_69 = ATgetArgument(t, 2);
                  w_69 = ATgetArgument(t, 3);
                  t = v_69;
                  t = map_1_0(w_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_69 = ATgetArgument(t, 0);
                      r_69 = ATgetArgument(t, 1);
                      v_69 = ATgetArgument(t, 2);
                      w_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_69;
                  t = map_1_0(x_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm g_73 = NULL;
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_73 = ATgetArgument(t, 0);
          {
            ATerm y_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_46);
      t = g_73;
    }
  else
    {
      t = w_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_73;
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm t_74 = NULL;
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_74 = ATgetArgument(t, 0);
          {
            ATerm b_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_47);
      t = t_74;
    }
  else
    {
      t = z_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_74;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm s_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      z_63 = ATgetArgument(t, 0);
      a_64 = ATgetArgument(t, 1);
      b_64 = ATgetArgument(t, 2);
      s_63 = ATgetArgument(t, 3);
      {
        ATerm m_64 = NULL,n_64 = NULL,p_64 = NULL;
        t = b_64;
        t = map_1_0(h_8, t);
        m_64 = t;
        t = s_63;
        t = free_vars_3_0(j_8, n_8, tboundin_3_0, t);
        p_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_64, m_64);
        t = diff_0_0(t);
        n_64 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_63, a_64, b_64, (ATerm) ATmakeAppl(sym_Scope_2, n_64, (ATerm) ATmakeAppl(sym_SRule_1, s_63)));
      }
    }
  else
    {
      ATerm f_69 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          z_63 = ATgetArgument(t, 0);
          a_64 = ATgetArgument(t, 1);
          b_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_64;
      t = free_vars_3_0(r_8, t_8, tboundin_3_0, t);
      f_69 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_63, a_64, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, f_69, (ATerm) ATmakeAppl(sym_SRule_1, b_64)));
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm c_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_47 = t;
      int j_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RDtoSD_0_0(t);
          LocalPopChoice(j_47);
        }
      else
        {
          t = i_47;
          t = DeclareVariables_0_0(t);
        }
      LocalPopChoice(h_47);
    }
  else
    {
      t = c_47;
    }
  t = topdown_1_0(z_8, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  g_77 = t;
  if(match_cons(t, sym_Call_2))
    {
      e_77 = ATgetArgument(t, 0);
      f_77 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, e_77, f_77, (ATerm) ATempty);
    }
  else
    {
      t = g_77;
    }
  return(t);
}
static ATerm r_15 (ATerm c_61, ATerm d_61, ATerm t)
{
  ATerm m_76 = NULL;
  t = d_61;
  t = map_1_0(y_8, t);
  m_76 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, m_76)), (ATerm) ATmakeAppl(sym_Signature_1, c_61)));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_47 = ATgetArgument(t, 0);
      if(((ATgetType(k_47) != AT_LIST) || !(ATisEmpty(k_47))))
        _fail(t);
      {
        ATerm l_47 = ATgetArgument(t, 1);
        if(((ATgetType(l_47) != AT_LIST) || !(ATisEmpty(l_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,x_43 = NULL,y_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_47 = ATgetArgument(t, 0);
      if(((ATgetType(n_47) == AT_LIST) && !(ATisEmpty(n_47))))
        {
          s_43 = ATgetFirst((ATermList) n_47);
          t_43 = (ATerm) ATgetNext((ATermList) n_47);
        }
      else
        _fail(t);
      {
        ATerm o_47 = ATgetArgument(t, 1);
        if(((ATgetType(o_47) == AT_LIST) && !(ATisEmpty(o_47))))
          {
            x_43 = ATgetFirst((ATermList) o_47);
            y_43 = (ATerm) ATgetNext((ATermList) o_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_43, x_43), (ATerm) ATmakeAppl(sym__2, t_43, y_43));
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm z_43 = NULL,b_44 = NULL;
  if(match_cons(t, sym__2))
    {
      z_43 = ATgetArgument(t, 0);
      b_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_44), z_43);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm d_44 = NULL,f_44 = NULL,j_44 = NULL;
  if(match_cons(t, sym__2))
    {
      d_44 = ATgetArgument(t, 0);
      j_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_44;
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_44);
      }
    else
      {
        t = p_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_47 = ATgetArgument(t, 0);
            f_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_44, f_44);
      }
  }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_47 = ATgetArgument(t, 0);
      if(((ATgetType(u_47) != AT_LIST) || !(ATisEmpty(u_47))))
        _fail(t);
      {
        ATerm v_47 = ATgetArgument(t, 1);
        if(((ATgetType(v_47) != AT_LIST) || !(ATisEmpty(v_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,s_45 = NULL,t_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_48 = ATgetArgument(t, 0);
      if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
        {
          n_45 = ATgetFirst((ATermList) d_48);
          o_45 = (ATerm) ATgetNext((ATermList) d_48);
        }
      else
        _fail(t);
      {
        ATerm e_48 = ATgetArgument(t, 1);
        if(((ATgetType(e_48) == AT_LIST) && !(ATisEmpty(e_48))))
          {
            s_45 = ATgetFirst((ATermList) e_48);
            t_45 = (ATerm) ATgetNext((ATermList) e_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_45, s_45), (ATerm) ATmakeAppl(sym__2, o_45, t_45));
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_45), u_45);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm x_45 = NULL,d_46 = NULL,e_46 = NULL;
  if(match_cons(t, sym__2))
    {
      x_45 = ATgetArgument(t, 0);
      e_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_45;
  {
    ATerm f_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_46);
      }
    else
      {
        t = f_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_48 = ATgetArgument(t, 0);
            d_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_46, d_46);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm i_138 (ATerm), ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL,p_87 = NULL,q_87 = NULL;
  f_87 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_87 = ATgetArgument(t, 0);
      h_87 = ATgetArgument(t, 1);
      {
        ATerm n_41 = NULL,y_41 = NULL,c_10 = NULL;
        t = SSLgetAnnotations(f_87);
        n_41 = t;
        t = g_87;
        t = i_138(t);
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, y_41, h_87);
        c_10 = t;
        t = SSLsetAnnotations(c_10, n_41);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          g_87 = ATgetArgument(t, 0);
          h_87 = ATgetArgument(t, 1);
          p_87 = ATgetArgument(t, 2);
          q_87 = ATgetArgument(t, 3);
          {
            ATerm w_42 = NULL,i_43 = NULL,q_43 = NULL,g_10 = NULL;
            t = SSLgetAnnotations(f_87);
            w_42 = t;
            t = p_87;
            t = i_138(t);
            q_43 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_87, q_43);
            t = genzip_4_0(c_9, d_9, e_9, i_9, t);
            i_43 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_87, h_87, i_43, q_87);
            g_10 = t;
            t = SSLsetAnnotations(g_10, w_42);
          }
        }
      else
        {
          ATerm b_45 = NULL,i_45 = NULL,l_45 = NULL,h_10 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              g_87 = ATgetArgument(t, 0);
              h_87 = ATgetArgument(t, 1);
              p_87 = ATgetArgument(t, 2);
              q_87 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_87);
          b_45 = t;
          t = p_87;
          t = i_138(t);
          l_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_87, l_45);
          t = genzip_4_0(k_9, n_9, o_9, q_9, t);
          i_45 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, g_87, h_87, i_45, q_87);
          h_10 = t;
          t = SSLsetAnnotations(h_10, b_45);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,l_10 = NULL;
  x_87 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_87);
  u_87 = t;
  t = v_87;
  t = j_86(t);
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_87);
  l_10 = t;
  t = SSLsetAnnotations(l_10, u_87);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL;
  d_90 = t;
  if(match_cons(t, sym__2))
    {
      e_90 = ATgetArgument(t, 0);
      i_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_90 = ATgetFirst((ATermList) t);
      k_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_90;
  if(match_cons(t, sym__2))
    {
      b_90 = ATgetArgument(t, 0);
      c_90 = ATgetArgument(t, 1);
      {
        ATerm l_48 = t;
        int m_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_90;
            if((e_90 != t))
              {
                _fail(t);
              }
            t = c_90;
            LocalPopChoice(m_48);
          }
        else
          {
            t = l_48;
            t = (ATerm) ATmakeAppl(sym__2, e_90, k_90);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, e_90, k_90);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm u_15 (ATerm s_134 (ATerm), ATerm t_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_57, ATerm f_57, ATerm e_57, ATerm t)
{
  static ATerm s_9 (ATerm t)
  {
    ATerm b_88 = NULL;
    b_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_88, e_57);
    t = s_134(t);
    return(t);
  }
  static ATerm t_9 (ATerm t)
  {
    ATerm c_88 = NULL;
    c_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_88, f_57);
    t = s_134(t);
    return(t);
  }
  t = g_57;
  t = t_134(s_9, t_9, _id, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_48 = ATgetArgument(t, 0);
      if(((ATgetType(n_48) != AT_LIST) || !(ATisEmpty(n_48))))
        _fail(t);
      {
        ATerm o_48 = ATgetArgument(t, 1);
        if(((ATgetType(o_48) != AT_LIST) || !(ATisEmpty(o_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_48 = ATgetArgument(t, 0);
      if(((ATgetType(p_48) == AT_LIST) && !(ATisEmpty(p_48))))
        {
          v_88 = ATgetFirst((ATermList) p_48);
          w_88 = (ATerm) ATgetNext((ATermList) p_48);
        }
      else
        _fail(t);
      {
        ATerm q_48 = ATgetArgument(t, 1);
        if(((ATgetType(q_48) == AT_LIST) && !(ATisEmpty(q_48))))
          {
            x_88 = ATgetFirst((ATermList) q_48);
            y_88 = (ATerm) ATgetNext((ATermList) q_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_88, x_88), (ATerm) ATmakeAppl(sym__2, w_88, y_88));
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm b_89 = NULL,d_89 = NULL;
  if(match_cons(t, sym__2))
    {
      b_89 = ATgetArgument(t, 0);
      d_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_89), b_89);
  return(t);
}
static ATerm v_15 (ATerm m_134 (ATerm), ATerm n_134 (ATerm (ATerm), ATerm), ATerm y_56, ATerm b_57, ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL,q_88 = NULL;
  t = y_56;
  t = m_134(t);
  k_88 = t;
  t = map_1_0(new_0_0, t);
  l_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_88, l_88);
  t = genzip_4_0(u_9, v_9, w_9, _id, t);
  q_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_88, b_57);
  t = conc_0_0(t);
  m_88 = t;
  t = y_56;
  {
    static ATerm x_9 (ATerm t)
    {
      t = l_88;
      return(t);
    }
    t = n_134(x_9, t);
  }
  n_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_88, b_57, m_88);
  return(t);
}
ATerm env_alltd_1_0 (ATerm i_112 (ATerm), ATerm t)
{
  static ATerm t_92 (ATerm t)
  {
    ATerm r_48 = t;
    int s_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_112(t);
        LocalPopChoice(s_48);
      }
    else
      {
        t = r_48;
        {
          ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
          static ATerm y_9 (ATerm t)
          {
            ATerm m_47 = NULL;
            m_47 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_47, not_null(s_92));
            t = t_92(t);
            return(t);
          }
          q_92 = t;
          if(match_cons(t, sym__2))
            {
              r_92 = ATgetArgument(t, 0);
              if(((s_92 != NULL) && (s_92 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                s_92 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_92;
          t = SRTS_all(y_9, t);
        }
      }
    return(t);
  }
  t = t_92(t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_48 = ATgetArgument(t, 0);
      if(((ATgetType(t_48) != AT_LIST) || !(ATisEmpty(t_48))))
        _fail(t);
      {
        ATerm u_48 = ATgetArgument(t, 1);
        if(((ATgetType(u_48) != AT_LIST) || !(ATisEmpty(u_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm e_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_48 = ATgetArgument(t, 0);
      if(((ATgetType(w_48) == AT_LIST) && !(ATisEmpty(w_48))))
        {
          e_94 = ATgetFirst((ATermList) w_48);
          s_94 = (ATerm) ATgetNext((ATermList) w_48);
        }
      else
        _fail(t);
      {
        ATerm x_48 = ATgetArgument(t, 1);
        if(((ATgetType(x_48) == AT_LIST) && !(ATisEmpty(x_48))))
          {
            t_94 = ATgetFirst((ATermList) x_48);
            u_94 = (ATerm) ATgetNext((ATermList) x_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_94, t_94), (ATerm) ATmakeAppl(sym__2, s_94, u_94));
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm v_94 = NULL,x_94 = NULL;
  if(match_cons(t, sym__2))
    {
      v_94 = ATgetArgument(t, 0);
      x_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_94), v_94);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm a_93 = NULL,e_93 = NULL,n_93 = NULL,p_93 = NULL;
  a_93 = t;
  {
    ATerm y_48 = t;
    int z_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_49 = ATgetArgument(t, 0);
            ATerm k_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_48);
        t = a_93;
      }
    else
      {
        t = y_48;
        {
          ATerm y_93 = NULL;
          if(match_cons(t, sym__3))
            {
              e_93 = ATgetArgument(t, 0);
              n_93 = ATgetArgument(t, 1);
              p_93 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, e_93, n_93);
          t = genzip_4_0(z_9, b_10, d_10, _id, t);
          y_93 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_93, p_93);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm t_133 (ATerm), ATerm u_133 (ATerm (ATerm), ATerm), ATerm v_133 (ATerm), ATerm w_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_133 (ATerm (ATerm), ATerm), ATerm y_133 (ATerm), ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL;
  static ATerm h_96 (ATerm t)
  {
    static ATerm i_10 (ATerm t)
    {
      static ATerm i_96 (ATerm g_95, ATerm t)
      {
        ATerm h_95 = NULL,t_47 = NULL;
        t = SSL_explode_term(g_95);
        if(match_cons(t, sym__2))
          {
            ATerm l_49 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_49) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_49 = ATgetArgument(t, 1);
              if(((ATgetType(m_49) == AT_LIST) && !(ATisEmpty(m_49))))
                {
                  h_95 = ATgetFirst((ATermList) m_49);
                  {
                    ATerm p_49 = (ATerm) ATgetNext((ATermList) m_49);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_95;
        t = t_133(t);
        t_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_47, not_null(e_95));
        t = lookup_0_0(t);
        t = y_133(t);
        return(t);
      }
      static ATerm m_96 (ATerm j_95, ATerm l_95, ATerm m_95, ATerm t)
      {
        ATerm n_95 = NULL,o_95 = NULL,s_95 = NULL;
        t = m_95;
        t = v_15(v_133, x_133, j_95, l_95, t);
        if(match_cons(t, sym__3))
          {
            n_95 = ATgetArgument(t, 0);
            o_95 = ATgetArgument(t, 1);
            s_95 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_15(h_96, w_133, n_95, o_95, s_95, t);
        return(t);
      }
      ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL;
      x_95 = t;
      if(match_cons(t, sym__2))
        {
          y_95 = ATgetArgument(t, 0);
          z_95 = ATgetArgument(t, 1);
          {
            ATerm q_49 = t;
            int r_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm j_10 (ATerm t)
                {
                  ATerm f_96 = NULL;
                  f_96 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_96, z_95);
                  t = lookup_0_0(t);
                  return(t);
                }
                t = y_95;
                t = u_133(j_10, t);
                LocalPopChoice(r_49);
              }
            else
              {
                t = q_49;
                {
                  ATerm s_49 = t;
                  int t_49 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_96(x_95, t);
                      LocalPopChoice(t_49);
                    }
                  else
                    {
                      t = s_49;
                      t = m_96(y_95, z_95, x_95, t);
                    }
                }
              }
          }
        }
      else
        {
          t = i_96(x_95, t);
        }
      return(t);
    }
    t = env_alltd_1_0(i_10, t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((e_95 != NULL) && (e_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_95 = ATgetArgument(t, 0);
      d_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_95, (ATerm) ATempty);
  t = h_96(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_49 = ATgetArgument(t, 0);
      if(((ATgetType(u_49) != AT_LIST) || !(ATisEmpty(u_49))))
        _fail(t);
      {
        ATerm v_49 = ATgetArgument(t, 1);
        if(((ATgetType(v_49) != AT_LIST) || !(ATisEmpty(v_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm d_97 = NULL,m_97 = NULL,p_97 = NULL,v_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_49 = ATgetArgument(t, 0);
      if(((ATgetType(w_49) == AT_LIST) && !(ATisEmpty(w_49))))
        {
          d_97 = ATgetFirst((ATermList) w_49);
          m_97 = (ATerm) ATgetNext((ATermList) w_49);
        }
      else
        _fail(t);
      {
        ATerm x_49 = ATgetArgument(t, 1);
        if(((ATgetType(x_49) == AT_LIST) && !(ATisEmpty(x_49))))
          {
            p_97 = ATgetFirst((ATermList) x_49);
            v_97 = (ATerm) ATgetNext((ATermList) x_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_97, p_97), (ATerm) ATmakeAppl(sym__2, m_97, v_97));
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm b_98 = NULL,d_98 = NULL;
  if(match_cons(t, sym__2))
    {
      b_98 = ATgetArgument(t, 0);
      d_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_98), b_98);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm g_98 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_98;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm y_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_49);
    }
  else
    {
      t = y_49;
      {
        ATerm a_50 = t;
        int b_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_50);
          }
        else
          {
            t = a_50;
            {
              ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_98 = ATgetArgument(t, 0);
                  j_98 = ATgetArgument(t, 1);
                  k_98 = ATgetArgument(t, 2);
                  l_98 = ATgetArgument(t, 3);
                  t = k_98;
                  t = map_1_0(c_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_98 = ATgetArgument(t, 0);
                      j_98 = ATgetArgument(t, 1);
                      k_98 = ATgetArgument(t, 2);
                      l_98 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_98;
                  t = map_1_0(j_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm y_98 = NULL;
  ATerm c_50 = t;
  int d_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_98 = ATgetArgument(t, 0);
          {
            ATerm e_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_50);
      t = y_98;
    }
  else
    {
      t = c_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_98;
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm v_99 = NULL;
  ATerm f_50 = t;
  int g_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_99 = ATgetArgument(t, 0);
          {
            ATerm i_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_50);
      t = v_99;
    }
  else
    {
      t = f_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_99;
    }
  return(t);
}
static ATerm a_16 (ATerm o_137 (ATerm), ATerm f_62, ATerm g_62, ATerm t)
{
  ATerm t_96 = NULL,u_96 = NULL;
  t = o_137(t);
  {
    static ATerm k_10 (ATerm t)
    {
      ATerm w_96 = NULL,b_97 = NULL,c_97 = NULL;
      w_96 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((f_62 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          b_97 = ATgetArgument(t, 1);
          c_97 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, b_97, g_62);
      t = genzip_4_0(n_10, r_10, z_10, _id, t);
      if(((t_96 != NULL) && (t_96 != t)))
        _fail(t);
      else
        t_96 = t;
      t = c_97;
      if(((u_96 != NULL) && (u_96 != t)))
        _fail(t);
      else
        u_96 = t;
      t = w_96;
      return(t);
    }
    t = fetch_1_0(k_10, t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), not_null(u_96));
  t = substitute_6_0(a_11, Var_1_0, b_11, tboundin_3_0, tpaste_1_0, _id, t);
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm g_100 = NULL,i_100 = NULL;
  ATerm l_50 = t;
  int q_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm r_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(q_50);
      t = term_d_37;
    }
  else
    {
      t = l_50;
      if(match_cons(t, sym_Real_1))
        {
          i_100 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, i_100));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              i_100 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, i_100));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  i_100 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, i_100));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      i_100 = ATgetArgument(t, 0);
                      g_100 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_50, (ATerm)ATinsert(ATinsert(ATempty, g_100), i_100), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          i_100 = ATgetArgument(t, 0);
                          g_100 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_100), g_100, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              i_100 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_100), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL;
  r_101 = t;
  if(match_cons(t, sym_Op_2))
    {
      p_101 = ATgetArgument(t, 0);
      q_101 = ATgetArgument(t, 1);
      {
        ATerm u_50 = t;
        int x_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_48 = NULL,k_48 = NULL,o_10 = NULL;
            t = SSLgetAnnotations(r_101);
            h_48 = t;
            t = q_101;
            t = map_1_0(trm_to_cong_0_0, t);
            k_48 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, p_101, k_48);
            o_10 = t;
            t = SSLsetAnnotations(o_10, h_48);
            LocalPopChoice(x_50);
          }
        else
          {
            t = u_50;
            t = r_101;
          }
      }
    }
  else
    {
      t = r_101;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm f_102 = NULL;
  f_102 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_102, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_44), term_n_44));
  return(t);
}
static ATerm s_15 (ATerm l_62, ATerm n_62, ATerm m_62, ATerm t)
{
  ATerm w_101 = NULL,x_101 = NULL;
  t = n_62;
  t = map_1_0(k_11, t);
  w_101 = t;
  t = m_62;
  t = trm_to_cong_0_0(t);
  x_101 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, l_62, w_101, x_101);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm a_103 = NULL,b_103 = NULL,c_103 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      a_103 = ATgetArgument(t, 0);
      b_103 = ATgetArgument(t, 1);
      c_103 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_15(a_103, b_103, c_103, t);
  return(t);
}
static ATerm b_16 (ATerm i_61, ATerm k_61, ATerm j_61, ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL;
  t = k_61;
  {
    ATerm y_50 = t;
    int z_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_11 (ATerm t)
        {
          static ATerm m_11 (ATerm t)
          {
            ATerm o_102 = NULL,s_102 = NULL;
            static ATerm n_11 (ATerm t)
            {
              t = k_61;
              return(t);
            }
            if(match_cons(t, sym_Op_2))
              {
                o_102 = ATgetArgument(t, 0);
                s_102 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_16(n_11, o_102, s_102, t);
            return(t);
          }
          t = repeat_2_0(m_11, _id, t);
          return(t);
        }
        ATerm d_51 = t;
        if((PushChoice() == 0))
          {
            t = k_61;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_51;
          }
        t = k_61;
        t = topdown_1_0(l_11, t);
        LocalPopChoice(z_50);
      }
    else
      {
        t = y_50;
      }
  }
  j_102 = t;
  t = k_61;
  t = map_1_0(j_12, t);
  l_102 = t;
  t = j_61;
  {
    ATerm e_51 = t;
    int f_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_12 (ATerm t)
        {
          ATerm g_51 = t;
          int h_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_49 = NULL,e_49 = NULL;
              static ATerm s_12 (ATerm t)
              {
                t = j_102;
                return(t);
              }
              if(match_cons(t, sym_Op_2))
                {
                  d_49 = ATgetArgument(t, 0);
                  e_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_16(s_12, d_49, e_49, t);
              LocalPopChoice(h_51);
            }
          else
            {
              t = g_51;
            }
          return(t);
        }
        ATerm i_51 = t;
        if((PushChoice() == 0))
          {
            t = j_102;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_51;
          }
        t = j_61;
        t = topdown_1_0(k_12, t);
        LocalPopChoice(f_51);
      }
    else
      {
        t = e_51;
      }
  }
  m_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_102, m_102);
  t = conc_0_0(t);
  k_102 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, k_102)), (ATerm) ATmakeAppl(sym_Signature_1, i_61)));
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL;
  if(match_cons(t, sym__2))
    {
      w_103 = ATgetArgument(t, 0);
      x_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(w_103, x_103, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_l_51;
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm h_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL,f_49 = NULL,g_49 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      p_103 = ATgetArgument(t, 0);
      q_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_51;
  f_49 = t;
  t = term_o_51;
  g_49 = t;
  t = term_s_51;
  t = g_17(g_49, f_49, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm t_51 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_51) != ATmakeSymbol("i_2", 0, ATtrue)))
        _fail(t);
      h_103 = ATgetArgument(t, 1);
      o_103 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_103;
  t = foldr_3_0(u_12, v_12, w_12, t);
  v_103 = t;
  t = SSL_int_to_string(v_103);
  s_103 = t;
  t = term_u_51;
  t_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_52), s_103), term_c_52), p_103), term_b_52), term_y_51), o_103), term_x_51), h_103), term_w_51);
  u_103 = t;
  t = SSL_printnl(t_103, u_103);
  t = (ATerm) ATmakeAppl(sym_Op_2, p_103, q_103);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm n_50 = NULL,p_50 = NULL;
  if(match_cons(t, sym__2))
    {
      n_50 = ATgetArgument(t, 0);
      p_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(n_50, p_50, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm p_51 = NULL,v_51 = NULL;
  if(match_cons(t, sym__2))
    {
      p_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(p_51, v_51, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm m_52 = NULL,y_52 = NULL;
  if(match_cons(t, sym__2))
    {
      m_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(m_52, y_52, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_l_51;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm d_106 = NULL,e_106 = NULL,f_106 = NULL;
  d_106 = t;
  if(match_cons(t, sym_Op_2))
    {
      e_106 = ATgetArgument(t, 0);
      f_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_52 = t;
    int f_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_50 = NULL,v_50 = NULL,w_50 = NULL;
        t = f_106;
        t = foldr_3_0(x_12, y_12, z_12, t);
        h_50 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, e_106, (ATerm) ATmakeAppl(sym_Keys_1, h_50));
        v_50 = t;
        t = term_g_52;
        w_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_52, (ATerm) ATmakeAppl(sym_Op_2, e_106, (ATerm) ATmakeAppl(sym_Keys_1, h_50)));
        t = g_17(w_50, v_50, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm h_52 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_52) != ATmakeSymbol("g_2", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, e_106, (ATerm) ATempty);
        LocalPopChoice(f_52);
      }
    else
      {
        t = e_52;
        {
          ATerm i_52 = t;
          int l_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_51 = NULL,z_51 = NULL,a_52 = NULL;
              t = f_106;
              t = foldr_3_0(a_13, b_13, c_13, t);
              n_51 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, e_106, (ATerm) ATmakeAppl(sym_Keys_1, n_51));
              z_51 = t;
              t = term_g_52;
              a_52 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_52, (ATerm) ATmakeAppl(sym_Op_2, e_106, (ATerm) ATmakeAppl(sym_Keys_1, n_51)));
              t = g_17(a_52, z_51, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm n_52 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_52) != ATmakeSymbol("e_2", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, e_106, (ATerm) ATempty);
              LocalPopChoice(l_52);
            }
          else
            {
              t = i_52;
              {
                ATerm k_52 = NULL,c_53 = NULL,d_53 = NULL;
                t = f_106;
                t = foldr_3_0(d_13, e_13, f_13, t);
                k_52 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, e_106, (ATerm) ATmakeAppl(sym_Keys_1, k_52));
                c_53 = t;
                t = term_g_52;
                d_53 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_52, (ATerm) ATmakeAppl(sym_Op_2, e_106, (ATerm) ATmakeAppl(sym_Keys_1, k_52)));
                t = g_17(d_53, c_53, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm o_52 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_52) != ATmakeSymbol("c_2", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Op_2, e_106, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  static ATerm b_107 (ATerm t)
  {
    ATerm r_52 = t;
    int s_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_13 (ATerm t)
        {
          ATerm t_52 = t;
          int w_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_107(t);
              LocalPopChoice(w_52);
            }
          else
            {
              t = t_52;
            }
          return(t);
        }
        t = e_110(t);
        t = SRTS_all(g_13, t);
        LocalPopChoice(s_52);
      }
    else
      {
        t = r_52;
        t = SRTS_some(b_107, t);
      }
    return(t);
  }
  t = b_107(t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_o_51;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_o_51;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm x_52 = t;
  if((PushChoice() == 0))
    {
      t = CheckCons_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_52;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm t)
{
  ATerm e_107 = NULL,g_107 = NULL;
  static ATerm i_13 (ATerm t)
  {
    ATerm i_107 = NULL,p_107 = NULL,w_107 = NULL;
    i_107 = t;
    t = z_138(t);
    if(((g_107 != NULL) && (g_107 != t)))
      _fail(t);
    else
      g_107 = t;
    t = a_139(t);
    if(((e_107 != NULL) && (e_107 != t)))
      _fail(t);
    else
      e_107 = t;
    t = term_m_51;
    p_107 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_3, term_z_52, e_107, g_107);
    w_107 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_51, (ATerm) ATmakeAppl(sym_Defined_3, term_z_52, e_107, g_107));
    t = h_17(j_13, p_107, w_107, t);
    t = i_107;
    t = manytd_1_0(q_13, t);
    return(t);
  }
  t = scope_2_0(h_13, i_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_a_53;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm n_108 = NULL,o_108 = NULL;
  if(match_cons(t, sym__2))
    {
      n_108 = ATgetArgument(t, 0);
      o_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(n_108, o_108, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_b_53;
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm b_109 = NULL,d_109 = NULL;
  if(match_cons(t, sym__2))
    {
      b_109 = ATgetArgument(t, 0);
      d_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(b_109, d_109, t);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm e_109 = NULL,f_109 = NULL;
  if(match_cons(t, sym__2))
    {
      e_109 = ATgetArgument(t, 0);
      f_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(e_109, f_109, t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_e_53;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm t_109 = NULL,u_109 = NULL;
  if(match_cons(t, sym__2))
    {
      t_109 = ATgetArgument(t, 0);
      u_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(t_109, u_109, t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL;
  if(match_cons(t, sym__2))
    {
      v_109 = ATgetArgument(t, 0);
      w_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(v_109, w_109, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_l_51;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      z_107 = ATgetArgument(t, 0);
      a_108 = ATgetArgument(t, 1);
      b_108 = ATgetArgument(t, 2);
      {
        static ATerm r_13 (ATerm t)
        {
          ATerm m_108 = NULL;
          t = a_108;
          t = foldr_3_0(u_13, w_13, d_14, t);
          m_108 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_107, m_108);
          return(t);
        }
        t = b_108;
        t = check_constructors_p__2_0(r_13, s_13, t);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          z_107 = ATgetArgument(t, 0);
          a_108 = ATgetArgument(t, 1);
          b_108 = ATgetArgument(t, 2);
          c_108 = ATgetArgument(t, 3);
          {
            static ATerm e_14 (ATerm t)
            {
              ATerm t_108 = NULL,u_108 = NULL;
              t = a_108;
              t = foldr_3_0(m_14, o_14, p_14, t);
              t_108 = t;
              t = b_108;
              t = foldr_3_0(u_14, w_14, x_14, t);
              u_108 = t;
              t = (ATerm) ATmakeAppl(sym__3, z_107, t_108, u_108);
              return(t);
            }
            t = c_108;
            t = check_constructors_p__2_0(e_14, l_14, t);
          }
        }
      else
        {
          static ATerm y_14 (ATerm t)
          {
            ATerm q_109 = NULL,r_109 = NULL;
            t = not_null(a_108);
            t = foldr_3_0(i_15, k_15, n_15, t);
            q_109 = t;
            t = not_null(b_108);
            t = foldr_3_0(z_15, p_16, q_16, t);
            r_109 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_107), q_109, r_109);
            return(t);
          }
          if(match_cons(t, sym_RDefT_4))
            {
              if(((z_107 != NULL) && (z_107 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_107 = ATgetArgument(t, 0);
              if(((a_108 != NULL) && (a_108 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                a_108 = ATgetArgument(t, 1);
              if(((b_108 != NULL) && (b_108 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                b_108 = ATgetArgument(t, 2);
              c_108 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = c_108;
          t = check_constructors_p__2_0(y_14, h_15, t);
        }
    }
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm w_110 = NULL,x_110 = NULL;
  if(match_cons(t, sym__2))
    {
      w_110 = ATgetArgument(t, 0);
      x_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(w_110, x_110, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_g_52;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm j_111 = NULL,k_111 = NULL;
  if(match_cons(t, sym__2))
    {
      j_111 = ATgetArgument(t, 0);
      k_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(j_111, k_111, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_g_52;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_g_52;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm z_109 = NULL,a_110 = NULL,b_110 = NULL,d_110 = NULL,g_110 = NULL,h_110 = NULL;
  b_110 = t;
  if(match_cons(t, sym_Overlay_3))
    {
      d_110 = ATgetArgument(t, 0);
      g_110 = ATgetArgument(t, 1);
      z_109 = ATgetArgument(t, 2);
      {
        ATerm o_110 = NULL,t_110 = NULL,u_110 = NULL;
        t = g_110;
        t = foldr_3_0(s_16, t_16, u_16, t);
        o_110 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, d_110, (ATerm) ATmakeAppl(sym_Keys_1, o_110));
        t_110 = t;
        t = term_h_53;
        u_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, d_110, (ATerm) ATmakeAppl(sym_Keys_1, o_110)), term_h_53);
        t = h_17(b_17, t_110, u_110, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, d_110, g_110, z_109);
      }
    }
  else
    {
      ATerm i_53 = t;
      int j_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_OpDeclInj_1))
            {
              ATerm k_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(j_53);
          t = b_110;
        }
      else
        {
          t = i_53;
          if(match_cons(t, sym_OpDecl_2))
            {
              d_110 = ATgetArgument(t, 0);
              g_110 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_110;
          if(match_cons(t, sym_FunType_2))
            {
              h_110 = ATgetArgument(t, 0);
              a_110 = ATgetArgument(t, 1);
              {
                ATerm c_111 = NULL,h_111 = NULL,i_111 = NULL;
                t = h_110;
                t = foldr_3_0(c_17, e_17, f_17, t);
                c_111 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, d_110, (ATerm) ATmakeAppl(sym_Keys_1, c_111));
                h_111 = t;
                t = term_m_53;
                i_111 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, d_110, (ATerm) ATmakeAppl(sym_Keys_1, c_111)), term_m_53);
                t = h_17(j_17, h_111, i_111, t);
                t = (ATerm) ATmakeAppl(sym_OpDecl_2, d_110, (ATerm) ATmakeAppl(sym_FunType_2, h_110, a_110));
              }
            }
          else
            {
              ATerm n_111 = NULL,o_111 = NULL;
              if(match_cons(t, sym_ConstType_1))
                {
                  h_110 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, d_110, term_n_53);
              n_111 = t;
              t = term_q_53;
              o_111 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, d_110, term_n_53), term_q_53);
              t = h_17(m_17, n_111, o_111, t);
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, d_110, (ATerm) ATmakeAppl(sym_ConstType_1, h_110));
            }
        }
    }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = term_s_53;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL,f_53 = NULL;
  m_112 = t;
  t = SSL_explode_term(m_112);
  if(match_cons(t, sym__2))
    {
      ATerm v_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_53 = ATgetArgument(t, 1);
        if(((ATgetType(w_53) == AT_LIST) && !(ATisEmpty(w_53))))
          {
            n_112 = ATgetFirst((ATermList) w_53);
            {
              ATerm x_53 = (ATerm) ATgetNext((ATermList) w_53);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(m_112);
  if(match_cons(t, sym__2))
    {
      ATerm b_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_54 = ATgetArgument(t, 1);
        if(((ATgetType(c_54) == AT_LIST) && !(ATisEmpty(c_54))))
          {
            ATerm e_54 = ATgetFirst((ATermList) c_54);
            ATerm g_54 = (ATerm) ATgetNext((ATermList) c_54);
            if(((ATgetType(g_54) == AT_LIST) && !(ATisEmpty(g_54))))
              {
                f_53 = ATgetFirst((ATermList) g_54);
                {
                  ATerm i_54 = (ATerm) ATgetNext((ATermList) g_54);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_j_54, (ATerm) ATinsert(ATinsert(ATempty, f_53), n_112));
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm q_112 = NULL;
  if(match_cons(t, sym_ConstType_1))
    {
      q_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_112;
  return(t);
}
ATerm TupleType_0_0 (ATerm t)
{
  ATerm p_111 = NULL;
  t = foldr_3_0(o_17, p_17, f_18, t);
  p_111 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term_k_54, (ATerm) ATinsert(ATempty, p_111)));
  return(t);
}
ATerm TupleDecl_0_0 (ATerm t)
{
  ATerm u_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL,h_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL,q_114 = NULL,s_114 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL;
  if(match_cons(t, sym_OpDeclInj_1))
    {
      c_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_115;
  if(match_cons(t, sym_FunType_2))
    {
      d_115 = ATgetArgument(t, 0);
      e_115 = ATgetArgument(t, 1);
      t = e_115;
      if(match_cons(t, sym_ConstType_1))
        {
          x_113 = ATgetArgument(t, 0);
          t = x_113;
          if(match_cons(t, sym_SortVar_1))
            {
              y_113 = ATgetArgument(t, 0);
              t = d_115;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_114 = ATgetFirst((ATermList) t);
                  l_114 = (ATerm) ATgetNext((ATermList) t);
                  t = l_114;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = h_114;
                      if(match_cons(t, sym_ConstType_1))
                        {
                          u_113 = ATgetArgument(t, 0);
                          t = u_113;
                          if(match_cons(t, sym_SortVar_1))
                            {
                              w_113 = ATgetArgument(t, 0);
                              {
                                ATerm q_54 = t;
                                int r_54 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = y_113;
                                    if((w_113 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_SortVar_1, w_113))), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term_k_54, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Sort_2, term_j_54, (ATerm) ATinsert(ATinsert(ATempty, term_s_53), (ATerm) ATmakeAppl(sym_SortVar_1, w_113))))))));
                                    LocalPopChoice(r_54);
                                  }
                                else
                                  {
                                    t = q_54;
                                    t = d_115;
                                    t = TupleType_0_0(t);
                                    if((e_115 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_35, c_115);
                                  }
                              }
                            }
                          else
                            {
                              t = d_115;
                              t = TupleType_0_0(t);
                              if((e_115 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_35, c_115);
                            }
                        }
                      else
                        {
                          t = d_115;
                          t = TupleType_0_0(t);
                          if((e_115 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_35, c_115);
                        }
                    }
                  else
                    {
                      t = d_115;
                      t = TupleType_0_0(t);
                      if((e_115 != t))
                        {
                          _fail(t);
                        }
                      t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_35, c_115);
                    }
                }
              else
                {
                  t = d_115;
                  t = TupleType_0_0(t);
                  if((e_115 != t))
                    {
                      _fail(t);
                    }
                  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_35, c_115);
                }
            }
          else
            {
              t = d_115;
              t = TupleType_0_0(t);
              if((e_115 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_35, c_115);
            }
        }
      else
        {
          t = d_115;
          t = TupleType_0_0(t);
          if((e_115 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_35, c_115);
        }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          d_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_115;
      if(match_cons(t, sym_Sort_2))
        {
          h_114 = ATgetArgument(t, 0);
          l_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_114;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Tuple", 0, ATtrue)))
        _fail(t);
      t = l_114;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_114 = ATgetFirst((ATermList) t);
          s_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_114;
      if(match_cons(t, sym_Sort_2))
        {
          n_114 = ATgetArgument(t, 0);
          q_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_114;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = q_114;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_114;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_35, (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Sort_2, term_k_54, (ATerm) ATinsert(ATempty, term_s_53))));
    }
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm u_54 = t;
  int w_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TupleDecl_0_0(t);
      LocalPopChoice(w_54);
    }
  else
    {
      t = u_54;
    }
  return(t);
}
static ATerm c_16 (ATerm h_72, ATerm j_72, ATerm k_72, ATerm t)
{
  ATerm z_116 = NULL;
  t = h_72;
  t = map_1_0(g_18, t);
  z_116 = t;
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = j_72;
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = j_72;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = k_72;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, k_72)), (ATerm) ATmakeAppl(sym_Overlays_1, j_72)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, z_116)))));
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm g_117 = NULL,n_117 = NULL,o_117 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm x_54 = ATgetArgument(t, 0);
      if(((ATgetType(x_54) == AT_LIST) && !(ATisEmpty(x_54))))
        {
          ATerm d_55 = ATgetFirst((ATermList) x_54);
          if(match_cons(d_55, sym_Signature_1))
            {
              ATerm f_55 = ATgetArgument(d_55, 0);
              if(((ATgetType(f_55) == AT_LIST) && !(ATisEmpty(f_55))))
                {
                  ATerm g_55 = ATgetFirst((ATermList) f_55);
                  if(match_cons(g_55, sym_Constructors_1))
                    {
                      g_117 = ATgetArgument(g_55, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_55 = (ATerm) ATgetNext((ATermList) f_55);
                    if(((ATgetType(h_55) != AT_LIST) || !(ATisEmpty(h_55))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm e_55 = (ATerm) ATgetNext((ATermList) x_54);
            if(((ATgetType(e_55) == AT_LIST) && !(ATisEmpty(e_55))))
              {
                ATerm i_55 = ATgetFirst((ATermList) e_55);
                if(match_cons(i_55, sym_Overlays_1))
                  {
                    n_117 = ATgetArgument(i_55, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm j_55 = (ATerm) ATgetNext((ATermList) e_55);
                  if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
                    {
                      ATerm k_55 = ATgetFirst((ATermList) j_55);
                      if(match_cons(k_55, sym_Strategies_1))
                        {
                          o_117 = ATgetArgument(k_55, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm l_55 = (ATerm) ATgetNext((ATermList) j_55);
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
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = c_16(g_117, n_117, o_117, t);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  t = term_n_55;
  return(t);
}
static ATerm j_18 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm d_16 (ATerm j_68, ATerm i_68, ATerm k_68, ATerm t)
{
  ATerm p_117 = NULL,q_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL;
  p_117 = t;
  t = (ATerm) ATempty;
  u_117 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_55, j_68);
  v_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_55, j_68));
  t = h_17(h_18, u_117, v_117, t);
  t = (ATerm) ATempty;
  q_117 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_55, j_68);
  t_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_55, j_68));
  t = h_17(j_18, q_117, t_117, t);
  t = k_68;
  t = use_vars_0_0(t);
  t = p_117;
  return(t);
}
static ATerm k_18 (ATerm t)
{
  t = term_n_55;
  return(t);
}
static ATerm l_18 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm m_18 (ATerm t)
{
  t = term_n_55;
  return(t);
}
static ATerm o_18 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = term_n_55;
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = term_o_55;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL,t_120 = NULL,u_120 = NULL,v_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL,d_121 = NULL,e_121 = NULL;
  v_120 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      x_120 = ATgetArgument(t, 0);
      y_120 = ATgetArgument(t, 1);
      z_120 = ATgetArgument(t, 2);
      r_120 = ATgetArgument(t, 3);
      t = r_120;
      if(match_cons(t, sym_StratRule_3))
        {
          s_120 = ATgetArgument(t, 0);
          t_120 = ATgetArgument(t, 1);
          u_120 = ATgetArgument(t, 2);
          {
            ATerm o_121 = NULL,s_121 = NULL,u_121 = NULL,v_121 = NULL;
            t = (ATerm) ATempty;
            u_121 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_55, x_120);
            v_121 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_55, x_120));
            t = h_17(k_18, u_121, v_121, t);
            t = (ATerm) ATempty;
            o_121 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_55, x_120);
            s_121 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_55, x_120));
            t = h_17(l_18, o_121, s_121, t);
            t = (ATerm) ATmakeAppl(sym__3, s_120, t_120, u_120);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, x_120, y_120, z_120, (ATerm) ATmakeAppl(sym_StratRule_3, s_120, t_120, u_120));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              s_120 = ATgetArgument(t, 0);
              t_120 = ATgetArgument(t, 1);
              u_120 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = v_120;
          {
            ATerm z_55 = t;
            int a_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_53 = NULL,z_53 = NULL,d_54 = NULL,f_54 = NULL;
                t = (ATerm) ATempty;
                d_54 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_56, x_120);
                f_54 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_56, x_120));
                t = h_17(m_18, d_54, f_54, t);
                t = (ATerm) ATempty;
                y_53 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_56, x_120);
                z_53 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_56, x_120));
                t = h_17(o_18, y_53, z_53, t);
                t = s_120;
                t = bind_vars_0_0(t);
                LocalPopChoice(a_56);
              }
            else
              {
                t = z_55;
                {
                  ATerm j_56 = t;
                  int k_56 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_120;
                      t = unbound_vars_0_0(t);
                      LocalPopChoice(k_56);
                    }
                  else
                    {
                      t = j_56;
                      t = t_120;
                      t = use_vars_0_0(t);
                    }
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_RDefT_4, x_120, y_120, z_120, (ATerm) ATmakeAppl(sym_Rule_3, s_120, t_120, u_120));
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          x_120 = ATgetArgument(t, 0);
          y_120 = ATgetArgument(t, 1);
          z_120 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_120;
      if(match_cons(t, sym_Rule_3))
        {
          a_121 = ATgetArgument(t, 0);
          d_121 = ATgetArgument(t, 1);
          e_121 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_120;
      {
        ATerm l_56 = t;
        int m_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
            t = (ATerm) ATempty;
            h_56 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_56, x_120);
            i_56 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_56, x_120));
            t = h_17(p_18, h_56, i_56, t);
            t = (ATerm) ATempty;
            d_56 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_56, x_120);
            g_56 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_56, x_120));
            t = h_17(q_18, d_56, g_56, t);
            t = a_121;
            t = bind_vars_0_0(t);
            LocalPopChoice(m_56);
          }
        else
          {
            t = l_56;
            {
              ATerm p_56 = t;
              int q_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_121;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(q_56);
                }
              else
                {
                  t = p_56;
                  t = d_121;
                  t = use_vars_0_0(t);
                }
            }
          }
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, x_120, y_120, (ATerm) ATmakeAppl(sym_Rule_3, a_121, d_121, e_121));
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm s_123 = NULL;
  s_123 = t;
  {
    ATerm r_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_58 = NULL,p_58 = NULL,r_58 = NULL;
        t = (ATerm) ATempty;
        p_58 = t;
        t = term_n_55;
        r_58 = t;
        t = term_u_56;
        t = g_17(r_58, p_58, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_56) != ATmakeSymbol("s_1", 0, ATtrue)))
              _fail(t);
            i_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_123), term_x_56), i_58), term_w_56);
        LocalPopChoice(t_56);
      }
    else
      {
        t = r_56;
        {
          ATerm z_56 = t;
          int a_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_58 = NULL,y_58 = NULL,a_59 = NULL;
              t = (ATerm) ATempty;
              y_58 = t;
              t = term_n_55;
              a_59 = t;
              t = term_u_56;
              t = g_17(a_59, y_58, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm c_57 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_57) != ATmakeSymbol("o_1", 0, ATtrue)))
                    _fail(t);
                  w_58 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_123), term_x_56), w_58), term_d_57);
              LocalPopChoice(a_57);
            }
          else
            {
              t = z_56;
              {
                ATerm h_57 = t;
                int i_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_59 = NULL,j_59 = NULL,k_59 = NULL;
                    t = (ATerm) ATempty;
                    j_59 = t;
                    t = term_n_55;
                    k_59 = t;
                    t = term_u_56;
                    t = g_17(k_59, j_59, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm j_57 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) j_57) != ATmakeSymbol("k_1", 0, ATtrue)))
                          _fail(t);
                        h_59 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_123), term_x_56), h_59), term_d_57);
                    LocalPopChoice(i_57);
                  }
                else
                  {
                    t = h_57;
                    {
                      ATerm k_57 = t;
                      int l_57 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_59 = NULL,y_59 = NULL,a_60 = NULL;
                          t = (ATerm) ATempty;
                          y_59 = t;
                          t = term_n_55;
                          a_60 = t;
                          t = term_u_56;
                          t = g_17(a_60, y_59, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm m_57 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) m_57) != ATmakeSymbol("g_1", 0, ATtrue)))
                                _fail(t);
                              q_59 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_123), term_x_56), q_59), term_d_57);
                          LocalPopChoice(l_57);
                        }
                      else
                        {
                          t = k_57;
                          {
                            ATerm n_57 = t;
                            int o_57 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_60 = NULL,g_60 = NULL,h_60 = NULL;
                                t = (ATerm) ATempty;
                                g_60 = t;
                                t = term_n_55;
                                h_60 = t;
                                t = term_u_56;
                                t = g_17(h_60, g_60, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm p_57 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) p_57) != ATmakeSymbol("c_1", 0, ATtrue)))
                                      _fail(t);
                                    e_60 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_123), term_x_56), e_60), term_q_57);
                                LocalPopChoice(o_57);
                              }
                            else
                              {
                                t = n_57;
                                {
                                  ATerm l_60 = NULL,n_60 = NULL,o_60 = NULL;
                                  t = (ATerm) ATempty;
                                  n_60 = t;
                                  t = term_n_55;
                                  o_60 = t;
                                  t = term_u_56;
                                  t = g_17(o_60, n_60, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm r_57 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) r_57) != ATmakeSymbol("y_0", 0, ATtrue)))
                                        _fail(t);
                                      l_60 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_123), term_x_56), l_60), term_q_57);
                                }
                              }
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
  ATerm i_124 = NULL,j_124 = NULL,k_124 = NULL,l_124 = NULL,m_124 = NULL,n_124 = NULL;
  m_124 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_124;
  if(match_cons(t, sym_ListVar_1))
    {
      l_124 = ATgetArgument(t, 0);
      {
        ATerm s_57 = t;
        int t_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_124;
            i_124 = t;
            t = m_124;
            LocalPopChoice(t_57);
          }
        else
          {
            t = s_57;
            t = n_124;
            i_124 = t;
            t = m_124;
          }
      }
    }
  else
    {
      t = n_124;
      i_124 = t;
      t = m_124;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_57), i_124), term_v_57);
  t = Context_0_0(t);
  j_124 = t;
  t = term_u_51;
  k_124 = t;
  t = SSL_printnl(k_124, j_124);
  t = j_124;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm b_126 = NULL;
  b_126 = t;
  {
    ATerm x_57 = t;
    int y_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_61 = NULL,w_61 = NULL,x_61 = NULL;
        t = (ATerm) ATempty;
        w_61 = t;
        t = term_o_55;
        x_61 = t;
        t = term_z_57;
        t = g_17(x_61, w_61, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm a_58 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_58) != ATmakeSymbol("u_1", 0, ATtrue)))
              _fail(t);
            u_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_126), term_e_58), u_61), term_d_58);
        LocalPopChoice(y_57);
      }
    else
      {
        t = x_57;
        {
          ATerm f_58 = t;
          int g_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_62 = NULL,h_62 = NULL,i_62 = NULL;
              t = (ATerm) ATempty;
              h_62 = t;
              t = term_o_55;
              i_62 = t;
              t = term_z_57;
              t = g_17(i_62, h_62, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_58 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_58) != ATmakeSymbol("q_1", 0, ATtrue)))
                    _fail(t);
                  b_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_126), term_e_58), b_62), term_j_58);
              LocalPopChoice(g_58);
            }
          else
            {
              t = f_58;
              {
                ATerm k_58 = t;
                int n_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_62 = NULL,r_62 = NULL,s_62 = NULL;
                    t = (ATerm) ATempty;
                    r_62 = t;
                    t = term_o_55;
                    s_62 = t;
                    t = term_z_57;
                    t = g_17(s_62, r_62, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm o_58 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) o_58) != ATmakeSymbol("m_1", 0, ATtrue)))
                          _fail(t);
                        p_62 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_126), term_e_58), p_62), term_j_58);
                    LocalPopChoice(n_58);
                  }
                else
                  {
                    t = k_58;
                    {
                      ATerm t_58 = t;
                      int u_58 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_62 = NULL,b_63 = NULL,c_63 = NULL;
                          t = (ATerm) ATempty;
                          b_63 = t;
                          t = term_o_55;
                          c_63 = t;
                          t = term_z_57;
                          t = g_17(c_63, b_63, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm v_58 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) v_58) != ATmakeSymbol("i_1", 0, ATtrue)))
                                _fail(t);
                              w_62 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_126), term_e_58), w_62), term_j_58);
                          LocalPopChoice(u_58);
                        }
                      else
                        {
                          t = t_58;
                          {
                            ATerm x_58 = t;
                            int b_59 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_63 = NULL,i_63 = NULL,j_63 = NULL;
                                t = (ATerm) ATempty;
                                i_63 = t;
                                t = term_o_55;
                                j_63 = t;
                                t = term_z_57;
                                t = g_17(j_63, i_63, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm c_59 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) c_59) != ATmakeSymbol("e_1", 0, ATtrue)))
                                      _fail(t);
                                    g_63 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_126), term_e_58), g_63), term_f_59);
                                LocalPopChoice(b_59);
                              }
                            else
                              {
                                t = x_58;
                                {
                                  ATerm n_63 = NULL,p_63 = NULL,q_63 = NULL;
                                  t = (ATerm) ATempty;
                                  p_63 = t;
                                  t = term_o_55;
                                  q_63 = t;
                                  t = term_z_57;
                                  t = g_17(q_63, p_63, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm g_59 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) g_59) != ATmakeSymbol("a_1", 0, ATtrue)))
                                        _fail(t);
                                      n_63 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_126), term_e_58), n_63), term_f_59);
                                }
                              }
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
ATerm MaybeUnbound_0_0 (ATerm t)
{
  ATerm v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL;
  x_126 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_126;
  if(match_cons(t, sym_ListVar_1))
    {
      w_126 = ATgetArgument(t, 0);
      {
        ATerm i_59 = t;
        int l_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_126;
            v_126 = t;
            t = x_126;
            LocalPopChoice(l_59);
          }
        else
          {
            t = i_59;
            t = y_126;
            v_126 = t;
            t = x_126;
          }
      }
    }
  else
    {
      t = y_126;
      v_126 = t;
      t = x_126;
    }
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_126 = NULL,a_127 = NULL;
        t = term_r_59;
        t = get_config_0_0(t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_59), v_126), term_v_57);
        t = Warning_0_0(t);
        z_126 = t;
        t = term_u_51;
        a_127 = t;
        t = SSL_printnl(a_127, z_126);
        t = z_126;
        LocalPopChoice(p_59);
      }
    else
      {
        t = o_59;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm d_127 = NULL,e_127 = NULL;
  ATerm t_59 = t;
  int u_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_127 = NULL,o_127 = NULL;
      j_127 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      o_127 = t;
      t = SSLgetAnnotations(j_127);
      d_127 = t;
      t = o_127;
      LocalPopChoice(u_59);
      {
        ATerm r_127 = NULL;
        r_127 = t;
        t = d_127;
        {
          ATerm v_59 = t;
          int x_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_59 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) z_59) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_60 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(b_60) != AT_LIST) || !(ATisEmpty(b_60))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(x_59);
              _fail(t);
            }
          else
            {
              t = v_59;
              {
                ATerm c_60 = t;
                int d_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm f_60 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) f_60) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm i_60 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(i_60) != AT_LIST) || !(ATisEmpty(i_60))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_60);
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_127);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = c_60;
                    {
                      ATerm j_60 = t;
                      int k_60 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm m_60 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) m_60) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm p_60 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(p_60) != AT_LIST) || !(ATisEmpty(p_60))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(k_60);
                          t = (ATerm) ATmakeAppl(sym_Var_1, e_127);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = j_60;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, e_127);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = r_127;
      }
    }
  else
    {
      t = t_59;
      {
        ATerm q_60 = t;
        int r_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_127 = NULL,t_127 = NULL,v_127 = NULL,w_127 = NULL,t_10 = NULL;
            w_127 = t;
            if(match_cons(t, sym_App_2))
              {
                t_127 = ATgetArgument(t, 0);
                v_127 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_127);
            s_127 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, t_127, v_127);
            t_10 = t;
            t = SSLsetAnnotations(t_10, s_127);
            LocalPopChoice(r_60);
            {
              ATerm x_127 = NULL,y_127 = NULL,b_128 = NULL,d_128 = NULL,e_128 = NULL,i_128 = NULL,w_10 = NULL;
              i_128 = t;
              if(match_cons(t, sym_App_2))
                {
                  y_127 = ATgetArgument(t, 0);
                  b_128 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_128);
              x_127 = t;
              t = y_127;
              t = unbound_vars_0_0(t);
              d_128 = t;
              t = b_128;
              t = use_vars_0_0(t);
              e_128 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, d_128, e_128);
              w_10 = t;
              t = SSLsetAnnotations(w_10, x_127);
            }
          }
        else
          {
            t = q_60;
            {
              ATerm s_60 = t;
              int t_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_128 = NULL,o_128 = NULL,p_128 = NULL,x_10 = NULL;
                  p_128 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      o_128 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_128);
                  j_128 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, o_128);
                  x_10 = t;
                  t = SSLsetAnnotations(x_10, j_128);
                  LocalPopChoice(t_60);
                  {
                    ATerm q_128 = NULL,r_128 = NULL,s_128 = NULL,u_128 = NULL,y_10 = NULL;
                    u_128 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        r_128 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_128);
                    q_128 = t;
                    t = r_128;
                    t = unbound_vars_0_0(t);
                    s_128 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, s_128);
                    y_10 = t;
                    t = SSLsetAnnotations(y_10, q_128);
                  }
                }
              else
                {
                  t = s_60;
                  t = SRTS_some(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm u_60 = t;
  int v_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL,d_11 = NULL;
      y_128 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_128);
      w_128 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, x_128);
      d_11 = t;
      t = SSLsetAnnotations(d_11, w_128);
      LocalPopChoice(v_60);
      _fail(t);
    }
  else
    {
      t = u_60;
      {
        ATerm w_60 = t;
        int x_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_128 = NULL,g_129 = NULL,h_129 = NULL,i_129 = NULL,e_11 = NULL;
            i_129 = t;
            if(match_cons(t, sym_App_2))
              {
                g_129 = ATgetArgument(t, 0);
                h_129 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_129);
            z_128 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, g_129, h_129);
            e_11 = t;
            t = SSLsetAnnotations(e_11, z_128);
            LocalPopChoice(x_60);
            {
              ATerm j_129 = NULL,k_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL,o_129 = NULL,f_11 = NULL;
              o_129 = t;
              if(match_cons(t, sym_App_2))
                {
                  k_129 = ATgetArgument(t, 0);
                  l_129 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_129);
              j_129 = t;
              t = k_129;
              t = unbound_vars_0_0(t);
              m_129 = t;
              t = l_129;
              t = use_vars_0_0(t);
              n_129 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, m_129, n_129);
              f_11 = t;
              t = SSLsetAnnotations(f_11, j_129);
            }
          }
        else
          {
            t = w_60;
            {
              ATerm y_60 = t;
              int z_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_129 = NULL,s_129 = NULL,t_129 = NULL,g_11 = NULL;
                  t_129 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      s_129 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_129);
                  p_129 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, s_129);
                  g_11 = t;
                  t = SSLsetAnnotations(g_11, p_129);
                  LocalPopChoice(z_60);
                  {
                    ATerm y_129 = NULL,a_130 = NULL,d_130 = NULL,e_130 = NULL,h_11 = NULL;
                    e_130 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        a_130 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_130);
                    y_129 = t;
                    t = a_130;
                    t = unbound_vars_0_0(t);
                    d_130 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, d_130);
                    h_11 = t;
                    t = SSLsetAnnotations(h_11, y_129);
                  }
                }
              else
                {
                  t = y_60;
                  t = SRTS_some(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm a_61 = t;
  int b_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_130 = NULL,z_130 = NULL,c_131 = NULL,o_11 = NULL;
      c_131 = t;
      if(match_cons(t, sym_Build_1))
        {
          z_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_131);
      x_130 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, z_130);
      o_11 = t;
      t = SSLsetAnnotations(o_11, x_130);
      LocalPopChoice(b_61);
      {
        ATerm e_131 = NULL,i_131 = NULL,p_131 = NULL,v_131 = NULL,p_11 = NULL;
        v_131 = t;
        if(match_cons(t, sym_Build_1))
          {
            i_131 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_131);
        e_131 = t;
        t = i_131;
        t = use_vars_0_0(t);
        p_131 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, p_131);
        p_11 = t;
        t = SSLsetAnnotations(p_11, e_131);
      }
    }
  else
    {
      t = a_61;
      {
        ATerm e_61 = t;
        int f_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_131 = NULL,y_131 = NULL,z_131 = NULL,q_11 = NULL;
            z_131 = t;
            if(match_cons(t, sym_Match_1))
              {
                y_131 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_131);
            x_131 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, y_131);
            q_11 = t;
            t = SSLsetAnnotations(q_11, x_131);
            LocalPopChoice(f_61);
            {
              ATerm a_132 = NULL,b_132 = NULL,c_132 = NULL,d_132 = NULL,s_11 = NULL;
              d_132 = t;
              if(match_cons(t, sym_Match_1))
                {
                  b_132 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_132);
              a_132 = t;
              t = b_132;
              t = bind_vars_0_0(t);
              c_132 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, c_132);
              s_11 = t;
              t = SSLsetAnnotations(s_11, a_132);
            }
          }
        else
          {
            t = e_61;
            {
              ATerm g_61 = t;
              int h_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL,k_132 = NULL,t_11 = NULL;
                  k_132 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      f_132 = ATgetArgument(t, 0);
                      g_132 = ATgetArgument(t, 1);
                      h_132 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_132);
                  e_132 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, f_132, g_132, h_132);
                  t_11 = t;
                  t = SSLsetAnnotations(t_11, e_132);
                  LocalPopChoice(h_61);
                  {
                    ATerm i_136 = NULL,m_136 = NULL,p_136 = NULL,q_136 = NULL;
                    i_136 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        m_136 = ATgetArgument(t, 0);
                        p_136 = ATgetArgument(t, 1);
                        q_136 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm l_61 = t;
                      int m_61 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_63 = NULL,i_64 = NULL,u_11 = NULL;
                          t = SSLgetAnnotations(i_136);
                          y_63 = t;
                          t = m_136;
                          t = bind_vars_0_0(t);
                          i_64 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, i_64, p_136, q_136);
                          u_11 = t;
                          t = SSLsetAnnotations(u_11, y_63);
                          LocalPopChoice(m_61);
                        }
                      else
                        {
                          t = l_61;
                          {
                            ATerm n_61 = t;
                            int o_61 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_65 = NULL,i_65 = NULL,v_11 = NULL;
                                t = SSLgetAnnotations(i_136);
                                b_65 = t;
                                t = q_136;
                                t = unbound_vars_0_0(t);
                                i_65 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, m_136, p_136, i_65);
                                v_11 = t;
                                t = SSLsetAnnotations(v_11, b_65);
                                LocalPopChoice(o_61);
                              }
                            else
                              {
                                t = n_61;
                                {
                                  ATerm w_65 = NULL,h_66 = NULL,w_11 = NULL;
                                  t = SSLgetAnnotations(i_136);
                                  w_65 = t;
                                  t = p_136;
                                  t = use_vars_0_0(t);
                                  h_66 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, m_136, h_66, q_136);
                                  w_11 = t;
                                  t = SSLsetAnnotations(w_11, w_65);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = g_61;
                  {
                    ATerm p_61 = t;
                    int q_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_136 = NULL,u_136 = NULL,v_136 = NULL,a_137 = NULL,b_137 = NULL,x_11 = NULL;
                        b_137 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            u_136 = ATgetArgument(t, 0);
                            v_136 = ATgetArgument(t, 1);
                            a_137 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(b_137);
                        r_136 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, u_136, v_136, a_137);
                        x_11 = t;
                        t = SSLsetAnnotations(x_11, r_136);
                        LocalPopChoice(q_61);
                        {
                          ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL,m_139 = NULL;
                          j_139 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              k_139 = ATgetArgument(t, 0);
                              l_139 = ATgetArgument(t, 1);
                              m_139 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm r_61 = t;
                            int s_61 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm u_66 = NULL,z_66 = NULL,y_11 = NULL;
                                t = SSLgetAnnotations(j_139);
                                u_66 = t;
                                t = l_139;
                                t = unbound_vars_0_0(t);
                                z_66 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, k_139, z_66, m_139);
                                y_11 = t;
                                t = SSLsetAnnotations(y_11, u_66);
                                LocalPopChoice(s_61);
                              }
                            else
                              {
                                t = r_61;
                                {
                                  ATerm l_67 = NULL,p_67 = NULL,z_11 = NULL;
                                  t = SSLgetAnnotations(j_139);
                                  l_67 = t;
                                  t = m_139;
                                  t = use_vars_0_0(t);
                                  p_67 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, k_139, l_139, p_67);
                                  z_11 = t;
                                  t = SSLsetAnnotations(z_11, l_67);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = p_61;
                        {
                          ATerm t_61 = t;
                          int v_61 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_139 = NULL,o_139 = NULL,r_139 = NULL,s_139 = NULL,t_139 = NULL,a_12 = NULL;
                              t_139 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  o_139 = ATgetArgument(t, 0);
                                  r_139 = ATgetArgument(t, 1);
                                  s_139 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(t_139);
                              n_139 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, o_139, r_139, s_139);
                              a_12 = t;
                              t = SSLsetAnnotations(a_12, n_139);
                              LocalPopChoice(v_61);
                              {
                                ATerm b_141 = NULL,c_141 = NULL,d_141 = NULL,i_141 = NULL;
                                b_141 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    c_141 = ATgetArgument(t, 0);
                                    d_141 = ATgetArgument(t, 1);
                                    i_141 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm y_61 = t;
                                  int z_61 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm b_68 = NULL,h_68 = NULL,e_12 = NULL;
                                      t = SSLgetAnnotations(b_141);
                                      b_68 = t;
                                      t = d_141;
                                      t = unbound_vars_0_0(t);
                                      h_68 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, c_141, h_68, i_141);
                                      e_12 = t;
                                      t = SSLsetAnnotations(e_12, b_68);
                                      LocalPopChoice(z_61);
                                    }
                                  else
                                    {
                                      t = y_61;
                                      {
                                        ATerm a_69 = NULL,i_69 = NULL,g_12 = NULL;
                                        t = SSLgetAnnotations(b_141);
                                        a_69 = t;
                                        t = i_141;
                                        t = use_vars_0_0(t);
                                        i_69 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, c_141, d_141, i_69);
                                        g_12 = t;
                                        t = SSLsetAnnotations(g_12, a_69);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = t_61;
                              t = SRTS_some(unbound_vars_0_0, t);
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
static ATerm u_18 (ATerm t)
{
  t = term_n_55;
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_n_55;
  return(t);
}
static ATerm y_18 (ATerm t)
{
  t = term_o_55;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm t_141 = NULL,v_141 = NULL,w_141 = NULL,z_141 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      v_141 = ATgetArgument(t, 0);
      w_141 = ATgetArgument(t, 1);
      z_141 = ATgetArgument(t, 2);
      t_141 = ATgetArgument(t, 3);
      {
        ATerm k_142 = NULL,o_142 = NULL,r_142 = NULL,s_142 = NULL;
        t = (ATerm) ATempty;
        r_142 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_62, v_141);
        s_142 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_62, v_141));
        t = h_17(u_18, r_142, s_142, t);
        t = (ATerm) ATempty;
        k_142 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_62, v_141);
        o_142 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_62, v_141));
        t = h_17(v_18, k_142, o_142, t);
        t = t_141;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, v_141, w_141, z_141, t_141);
      }
    }
  else
    {
      ATerm a_143 = NULL,g_143 = NULL,k_143 = NULL,n_143 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          v_141 = ATgetArgument(t, 0);
          w_141 = ATgetArgument(t, 1);
          z_141 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      k_143 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_62, v_141);
      n_143 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_62, v_141));
      t = h_17(x_18, k_143, n_143, t);
      t = (ATerm) ATempty;
      a_143 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_62, v_141);
      g_143 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_62, v_141));
      t = h_17(y_18, a_143, g_143, t);
      t = z_141;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, v_141, w_141, z_141);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm w_138 (ATerm), ATerm t)
{
  ATerm o_143 = NULL,p_143 = NULL,q_143 = NULL,r_143 = NULL,s_143 = NULL,k_13 = NULL;
  static ATerm z_18 (ATerm t)
  {
    ATerm t_143 = NULL,a_144 = NULL,b_144 = NULL,c_144 = NULL,i_144 = NULL,j_144 = NULL,k_144 = NULL,m_144 = NULL,n_144 = NULL,o_144 = NULL,p_144 = NULL,q_144 = NULL,t_13 = NULL,l_13 = NULL;
    q_144 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        k_144 = ATgetArgument(t, 0);
        m_144 = ATgetArgument(t, 1);
        n_144 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_144);
    j_144 = t;
    t = k_144;
    t = w_138(t);
    o_144 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_144, m_144, n_144);
    l_13 = t;
    t = SSLsetAnnotations(l_13, j_144);
    p_144 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        a_144 = ATgetArgument(t, 0);
        b_144 = ATgetArgument(t, 1);
        c_144 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_144);
    t_143 = t;
    t = b_144;
    t = w_138(t);
    i_144 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_144, i_144, c_144);
    t_13 = t;
    t = SSLsetAnnotations(t_13, t_143);
    return(t);
  }
  static ATerm b_19 (ATerm t)
  {
    ATerm r_144 = NULL,u_144 = NULL,v_144 = NULL,w_144 = NULL,x_144 = NULL,a_145 = NULL,v_13 = NULL;
    a_145 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        u_144 = ATgetArgument(t, 0);
        v_144 = ATgetArgument(t, 1);
        w_144 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_145);
    r_144 = t;
    t = w_144;
    t = w_138(t);
    x_144 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_144, v_144, x_144);
    v_13 = t;
    t = SSLsetAnnotations(v_13, r_144);
    return(t);
  }
  s_143 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      p_143 = ATgetArgument(t, 0);
      q_143 = ATgetArgument(t, 1);
      r_143 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_143);
  o_143 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_143, q_143, r_143);
  k_13 = t;
  t = SSLsetAnnotations(k_13, o_143);
  t = abstract_choice_2_0(z_18, b_19, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm v_138 (ATerm), ATerm t)
{
  ATerm d_145 = NULL,e_145 = NULL,f_145 = NULL,j_145 = NULL,o_15 = NULL;
  static ATerm c_19 (ATerm t)
  {
    ATerm k_145 = NULL,l_145 = NULL,m_145 = NULL,t_145 = NULL,u_145 = NULL,q_15 = NULL;
    u_145 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        l_145 = ATgetArgument(t, 0);
        m_145 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_145);
    k_145 = t;
    t = l_145;
    t = v_138(t);
    t_145 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_145, m_145);
    q_15 = t;
    t = SSLsetAnnotations(q_15, k_145);
    return(t);
  }
  static ATerm d_19 (ATerm t)
  {
    ATerm v_145 = NULL,x_145 = NULL,y_145 = NULL,z_145 = NULL,a_146 = NULL,x_15 = NULL;
    a_146 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        x_145 = ATgetArgument(t, 0);
        y_145 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_146);
    v_145 = t;
    t = y_145;
    t = v_138(t);
    z_145 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, x_145, z_145);
    x_15 = t;
    t = SSLsetAnnotations(x_15, v_145);
    return(t);
  }
  j_145 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      e_145 = ATgetArgument(t, 0);
      f_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_145);
  d_145 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, e_145, f_145);
  o_15 = t;
  t = SSLsetAnnotations(o_15, d_145);
  t = abstract_choice_2_0(c_19, d_19, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm t)
{
  ATerm g_146 = NULL,h_146 = NULL,s_146 = NULL,t_146 = NULL,u_146 = NULL,z_146 = NULL,d_147 = NULL;
  u_146 = t;
  t = save_MarkVar_0_0(t);
  g_146 = t;
  t = u_146;
  t = x_138(t);
  t_146 = t;
  t = save_MarkVar_0_0(t);
  h_146 = t;
  t = term_j_62;
  d_147 = t;
  t = SSL_table_destroy(d_147);
  t = term_j_62;
  z_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_62, g_146);
  t = k_16(z_146, g_146, t);
  t = t_146;
  t = y_138(t);
  s_146 = t;
  t = h_146;
  t = isect_MarkVar_0_0(t);
  t = s_146;
  return(t);
}
ATerm mark_choice_1_0 (ATerm u_138 (ATerm), ATerm t)
{
  ATerm f_147 = NULL,j_147 = NULL,l_147 = NULL,q_147 = NULL,v_16 = NULL;
  static ATerm e_19 (ATerm t)
  {
    ATerm r_147 = NULL,s_147 = NULL,t_147 = NULL,u_147 = NULL,v_147 = NULL,z_16 = NULL;
    v_147 = t;
    if(match_cons(t, sym_Choice_2))
      {
        s_147 = ATgetArgument(t, 0);
        t_147 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_147);
    r_147 = t;
    t = s_147;
    t = u_138(t);
    u_147 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, u_147, t_147);
    z_16 = t;
    t = SSLsetAnnotations(z_16, r_147);
    return(t);
  }
  static ATerm f_19 (ATerm t)
  {
    ATerm w_147 = NULL,x_147 = NULL,y_147 = NULL,z_147 = NULL,a_148 = NULL,a_17 = NULL;
    a_148 = t;
    if(match_cons(t, sym_Choice_2))
      {
        x_147 = ATgetArgument(t, 0);
        y_147 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_148);
    w_147 = t;
    t = y_147;
    t = u_138(t);
    z_147 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, x_147, z_147);
    a_17 = t;
    t = SSLsetAnnotations(a_17, w_147);
    return(t);
  }
  q_147 = t;
  if(match_cons(t, sym_Choice_2))
    {
      j_147 = ATgetArgument(t, 0);
      l_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_147);
  f_147 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, j_147, l_147);
  v_16 = t;
  t = SSLsetAnnotations(v_16, f_147);
  t = abstract_choice_2_0(e_19, f_19, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm b_148 = NULL,f_148 = NULL,g_148 = NULL,i_148 = NULL,m_148 = NULL,p_148 = NULL,q_148 = NULL,r_148 = NULL,s_148 = NULL,t_148 = NULL,n_17 = NULL,k_17 = NULL;
  f_148 = t;
  t = save_MarkVar_0_0(t);
  b_148 = t;
  t = f_148;
  if(match_cons(t, sym_Rec_2))
    {
      r_148 = ATgetArgument(t, 0);
      s_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_148);
  q_148 = t;
  t = s_148;
  t = mark_buv_0_0(t);
  t_148 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, r_148, t_148);
  k_17 = t;
  t = SSLsetAnnotations(k_17, q_148);
  t = b_148;
  t = isect_MarkVar_0_0(t);
  t = f_148;
  if(match_cons(t, sym_Rec_2))
    {
      i_148 = ATgetArgument(t, 0);
      m_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_148);
  g_148 = t;
  t = m_148;
  t = mark_buv_0_0(t);
  p_148 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, i_148, p_148);
  n_17 = t;
  t = SSLsetAnnotations(n_17, g_148);
  return(t);
}
static ATerm g_19 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm w_148 = NULL,y_148 = NULL,e_149 = NULL,f_149 = NULL,g_149 = NULL,h_149 = NULL,j_149 = NULL,o_149 = NULL,p_149 = NULL,q_149 = NULL,s_149 = NULL,y_149 = NULL,z_149 = NULL,a_150 = NULL,b_150 = NULL,d_150 = NULL,i_150 = NULL,j_150 = NULL,k_150 = NULL,d_18 = NULL,z_17 = NULL,y_17 = NULL;
  k_150 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      b_150 = ATgetArgument(t, 0);
      d_150 = ATgetArgument(t, 1);
      i_150 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_150);
  a_150 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, b_150, d_150, i_150);
  y_17 = t;
  t = SSLsetAnnotations(y_17, a_150);
  j_150 = t;
  t = save_MarkVar_0_0(t);
  w_148 = t;
  t = j_150;
  if(match_cons(t, sym_PrimT_3))
    {
      p_149 = ATgetArgument(t, 0);
      q_149 = ATgetArgument(t, 1);
      s_149 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_150);
  o_149 = t;
  t = s_149;
  t = map_1_0(g_19, t);
  y_149 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_149, q_149, y_149);
  z_17 = t;
  t = SSLsetAnnotations(z_17, o_149);
  z_149 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_149 = ATgetArgument(t, 0);
      f_149 = ATgetArgument(t, 1);
      g_149 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_149);
  y_148 = t;
  t = f_149;
  t = mark_buv_0_0(t);
  h_149 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, e_149, h_149, g_149);
  d_18 = t;
  t = SSLsetAnnotations(d_18, y_148);
  j_149 = t;
  t = w_148;
  t = isect_MarkVar_0_0(t);
  t = j_149;
  return(t);
}
static ATerm i_19 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm w_152 = NULL,x_152 = NULL,y_152 = NULL,c_153 = NULL;
  x_152 = t;
  if(match_cons(t, sym_CallT_3))
    {
      y_152 = ATgetArgument(t, 0);
      c_153 = ATgetArgument(t, 1);
      w_152 = ATgetArgument(t, 2);
      {
        ATerm y_69 = NULL,z_69 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,p_70 = NULL,r_70 = NULL,s_70 = NULL,w_70 = NULL,t_18 = NULL,s_18 = NULL,r_18 = NULL;
        t = SSLgetAnnotations(x_152);
        s_70 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, y_152, c_153, w_152);
        r_18 = t;
        t = SSLsetAnnotations(r_18, s_70);
        w_70 = t;
        t = save_MarkVar_0_0(t);
        y_69 = t;
        t = w_70;
        if(match_cons(t, sym_CallT_3))
          {
            j_70 = ATgetArgument(t, 0);
            k_70 = ATgetArgument(t, 1);
            l_70 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_70);
        i_70 = t;
        t = l_70;
        t = map_1_0(i_19, t);
        p_70 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, j_70, k_70, p_70);
        s_18 = t;
        t = SSLsetAnnotations(s_18, i_70);
        r_70 = t;
        if(match_cons(t, sym_CallT_3))
          {
            c_70 = ATgetArgument(t, 0);
            d_70 = ATgetArgument(t, 1);
            e_70 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_70);
        z_69 = t;
        t = d_70;
        t = mark_buv_0_0(t);
        g_70 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, c_70, g_70, e_70);
        t_18 = t;
        t = SSLsetAnnotations(t_18, z_69);
        h_70 = t;
        t = y_69;
        t = isect_MarkVar_0_0(t);
        t = h_70;
      }
    }
  else
    {
      ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,p_71 = NULL,a_19 = NULL,w_18 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          y_152 = ATgetArgument(t, 0);
          c_153 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_152);
      l_71 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, y_152, c_153);
      w_18 = t;
      t = SSLsetAnnotations(w_18, l_71);
      p_71 = t;
      t = save_MarkVar_0_0(t);
      f_71 = t;
      t = p_71;
      if(match_cons(t, sym_Call_2))
        {
          h_71 = ATgetArgument(t, 0);
          i_71 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_71);
      g_71 = t;
      t = i_71;
      t = mark_buv_0_0(t);
      j_71 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, h_71, j_71);
      a_19 = t;
      t = SSLsetAnnotations(a_19, g_71);
      k_71 = t;
      t = f_71;
      t = isect_MarkVar_0_0(t);
      t = k_71;
    }
  return(t);
}
static ATerm j_19 (ATerm t)
{
  t = term_j_62;
  return(t);
}
static ATerm f_16 (ATerm a_72, ATerm b_72, ATerm c_72, ATerm t)
{
  ATerm g_153 = NULL;
  static ATerm m_19 (ATerm t)
  {
    t = b_72;
    t = map_1_0(IntroduceBound_0_0, t);
    t = c_72;
    t = mark_build_vars_0_0(t);
    if(((g_153 != NULL) && (g_153 != t)))
      _fail(t);
    else
      g_153 = t;
    return(t);
  }
  t = scope_2_0(j_19, m_19, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, a_72, b_72, not_null(g_153));
  return(t);
}
static ATerm n_19 (ATerm t)
{
  t = term_j_62;
  return(t);
}
static ATerm s_19 (ATerm t)
{
  ATerm y_153 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_153);
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm k_62 = t;
  int o_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_62);
    }
  else
    {
      t = k_62;
      {
        ATerm q_62 = t;
        int t_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_62);
          }
        else
          {
            t = q_62;
            {
              ATerm b_154 = NULL,c_154 = NULL,d_154 = NULL,e_154 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_154 = ATgetArgument(t, 0);
                  c_154 = ATgetArgument(t, 1);
                  d_154 = ATgetArgument(t, 2);
                  e_154 = ATgetArgument(t, 3);
                  t = d_154;
                  t = map_1_0(u_19, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_154 = ATgetArgument(t, 0);
                      c_154 = ATgetArgument(t, 1);
                      d_154 = ATgetArgument(t, 2);
                      e_154 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_154;
                  t = map_1_0(a_20, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm p_154 = NULL;
  ATerm u_62 = t;
  int v_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_154 = ATgetArgument(t, 0);
          {
            ATerm y_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_62);
      t = p_154;
    }
  else
    {
      t = u_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_154;
    }
  return(t);
}
static ATerm a_20 (ATerm t)
{
  ATerm d_155 = NULL;
  ATerm z_62 = t;
  int a_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_155 = ATgetArgument(t, 0);
          {
            ATerm d_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_63);
      t = d_155;
    }
  else
    {
      t = z_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_155 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_155;
    }
  return(t);
}
static ATerm g_16 (ATerm u_71, ATerm y_71, ATerm w_71, ATerm t)
{
  ATerm o_153 = NULL,s_153 = NULL,u_153 = NULL;
  static ATerm r_19 (ATerm t)
  {
    t = u_71;
    t = free_vars_3_0(s_19, t_19, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = u_71;
    t = mark_match_vars_0_0(t);
    if(((o_153 != NULL) && (o_153 != t)))
      _fail(t);
    else
      o_153 = t;
    t = w_71;
    t = mark_buv_0_0(t);
    if(((s_153 != NULL) && (s_153 != t)))
      _fail(t);
    else
      s_153 = t;
    t = y_71;
    t = mark_build_vars_0_0(t);
    if(((u_153 != NULL) && (u_153 != t)))
      _fail(t);
    else
      u_153 = t;
    return(t);
  }
  t = scope_2_0(n_19, r_19, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_153), not_null(u_153), not_null(s_153)));
  return(t);
}
static ATerm b_20 (ATerm t)
{
  t = term_j_62;
  return(t);
}
static ATerm g_20 (ATerm t)
{
  ATerm p_155 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_155);
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm e_63 = t;
  int f_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_63);
    }
  else
    {
      t = e_63;
      {
        ATerm h_63 = t;
        int k_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_63);
          }
        else
          {
            t = h_63;
            {
              ATerm s_155 = NULL,u_155 = NULL,v_155 = NULL,w_155 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_155 = ATgetArgument(t, 0);
                  u_155 = ATgetArgument(t, 1);
                  v_155 = ATgetArgument(t, 2);
                  w_155 = ATgetArgument(t, 3);
                  t = v_155;
                  t = map_1_0(j_20, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_155 = ATgetArgument(t, 0);
                      u_155 = ATgetArgument(t, 1);
                      v_155 = ATgetArgument(t, 2);
                      w_155 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_155;
                  t = map_1_0(l_20, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_20 (ATerm t)
{
  ATerm l_156 = NULL;
  ATerm l_63 = t;
  int m_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_156 = ATgetArgument(t, 0);
          {
            ATerm o_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_63);
      t = l_156;
    }
  else
    {
      t = l_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_156;
    }
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm a_157 = NULL;
  ATerm r_63 = t;
  int t_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_157 = ATgetArgument(t, 0);
          {
            ATerm u_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_63);
      t = a_157;
    }
  else
    {
      t = r_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_157 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_157;
    }
  return(t);
}
static ATerm h_16 (ATerm o_71, ATerm s_71, ATerm q_71, ATerm t)
{
  ATerm m_155 = NULL,n_155 = NULL,o_155 = NULL;
  static ATerm c_20 (ATerm t)
  {
    t = o_71;
    t = free_vars_3_0(g_20, h_20, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = o_71;
    t = mark_match_vars_0_0(t);
    if(((m_155 != NULL) && (m_155 != t)))
      _fail(t);
    else
      m_155 = t;
    t = q_71;
    t = mark_buv_0_0(t);
    if(((n_155 != NULL) && (n_155 != t)))
      _fail(t);
    else
      n_155 = t;
    t = s_71;
    t = mark_build_vars_0_0(t);
    if(((o_155 != NULL) && (o_155 != t)))
      _fail(t);
    else
      o_155 = t;
    return(t);
  }
  t = scope_2_0(b_20, c_20, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_155), not_null(o_155), not_null(n_155)));
  return(t);
}
static ATerm m_20 (ATerm t)
{
  ATerm d_159 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_159);
  return(t);
}
static ATerm n_20 (ATerm t)
{
  ATerm v_63 = t;
  int w_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_63);
    }
  else
    {
      t = v_63;
      {
        ATerm x_63 = t;
        int c_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_64);
          }
        else
          {
            t = x_63;
            {
              ATerm g_159 = NULL,i_159 = NULL,j_159 = NULL,o_159 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_159 = ATgetArgument(t, 0);
                  i_159 = ATgetArgument(t, 1);
                  j_159 = ATgetArgument(t, 2);
                  o_159 = ATgetArgument(t, 3);
                  t = j_159;
                  t = map_1_0(o_20, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_159 = ATgetArgument(t, 0);
                      i_159 = ATgetArgument(t, 1);
                      j_159 = ATgetArgument(t, 2);
                      o_159 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_159;
                  t = map_1_0(p_20, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_20 (ATerm t)
{
  ATerm x_159 = NULL;
  ATerm d_64 = t;
  int e_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_159 = ATgetArgument(t, 0);
          {
            ATerm f_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_64);
      t = x_159;
    }
  else
    {
      t = d_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_159 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_159;
    }
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm m_160 = NULL;
  ATerm g_64 = t;
  int h_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_160 = ATgetArgument(t, 0);
          {
            ATerm j_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_64);
      t = m_160;
    }
  else
    {
      t = g_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_160 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_160;
    }
  return(t);
}
static ATerm q_20 (ATerm t)
{
  t = term_j_62;
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm r_161 = NULL;
  ATerm k_64 = t;
  int l_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_161 = ATgetArgument(t, 0);
          {
            ATerm o_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_64);
      t = r_161;
    }
  else
    {
      t = k_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_161 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_161;
    }
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm w_161 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_161);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  ATerm q_64 = t;
  int r_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_64);
    }
  else
    {
      t = q_64;
      {
        ATerm s_64 = t;
        int t_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_64);
          }
        else
          {
            t = s_64;
            {
              ATerm a_162 = NULL,c_162 = NULL,d_162 = NULL,f_162 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_162 = ATgetArgument(t, 0);
                  c_162 = ATgetArgument(t, 1);
                  d_162 = ATgetArgument(t, 2);
                  f_162 = ATgetArgument(t, 3);
                  t = d_162;
                  t = map_1_0(w_20, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_162 = ATgetArgument(t, 0);
                      c_162 = ATgetArgument(t, 1);
                      d_162 = ATgetArgument(t, 2);
                      f_162 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_162;
                  t = map_1_0(x_20, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_20 (ATerm t)
{
  ATerm o_162 = NULL;
  ATerm u_64 = t;
  int v_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_162 = ATgetArgument(t, 0);
          {
            ATerm w_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_64);
      t = o_162;
    }
  else
    {
      t = u_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_162 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_162;
    }
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm i_163 = NULL;
  ATerm y_64 = t;
  int c_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_163 = ATgetArgument(t, 0);
          {
            ATerm d_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_65);
      t = i_163;
    }
  else
    {
      t = y_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_163 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_163;
    }
  return(t);
}
static ATerm y_20 (ATerm t)
{
  t = term_j_62;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm v_157 = NULL,a_158 = NULL,b_158 = NULL,d_158 = NULL,e_158 = NULL,f_158 = NULL,i_158 = NULL,j_158 = NULL,k_158 = NULL,l_158 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      d_158 = ATgetArgument(t, 0);
      e_158 = ATgetArgument(t, 1);
      f_158 = ATgetArgument(t, 2);
      {
        ATerm t_158 = NULL,v_158 = NULL,z_158 = NULL,b_159 = NULL;
        t = f_158;
        if(match_cons(t, sym_Rule_3))
          {
            v_157 = ATgetArgument(t, 0);
            a_158 = ATgetArgument(t, 1);
            b_158 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_158;
        t = free_vars_3_0(m_20, n_20, tboundin_3_0, t);
        t_158 = t;
        {
          static ATerm r_20 (ATerm t)
          {
            t = t_158;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = v_157;
            t = mark_match_vars_0_0(t);
            if(((v_158 != NULL) && (v_158 != t)))
              _fail(t);
            else
              v_158 = t;
            t = b_158;
            t = mark_buv_0_0(t);
            if(((z_158 != NULL) && (z_158 != t)))
              _fail(t);
            else
              z_158 = t;
            t = a_158;
            t = mark_build_vars_0_0(t);
            if(((b_159 != NULL) && (b_159 != t)))
              _fail(t);
            else
              b_159 = t;
            return(t);
          }
          t = scope_2_0(q_20, r_20, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, d_158, e_158, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_158), not_null(b_159), not_null(z_158)));
      }
    }
  else
    {
      ATerm t_160 = NULL,w_160 = NULL,b_161 = NULL,e_161 = NULL,k_161 = NULL,n_161 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          d_158 = ATgetArgument(t, 0);
          e_158 = ATgetArgument(t, 1);
          f_158 = ATgetArgument(t, 2);
          i_158 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_158;
      if(match_cons(t, sym_Rule_3))
        {
          j_158 = ATgetArgument(t, 0);
          k_158 = ATgetArgument(t, 1);
          l_158 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_158;
      t = map_1_0(t_20, t);
      t_160 = t;
      t = i_158;
      t = free_vars_3_0(u_20, v_20, tboundin_3_0, t);
      n_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_161, t_160);
      t = diff_0_0(t);
      w_160 = t;
      {
        static ATerm z_20 (ATerm t)
        {
          t = t_160;
          t = map_1_0(IntroduceBound_0_0, t);
          t = w_160;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = j_158;
          t = mark_match_vars_0_0(t);
          if(((b_161 != NULL) && (b_161 != t)))
            _fail(t);
          else
            b_161 = t;
          t = l_158;
          t = mark_buv_0_0(t);
          if(((e_161 != NULL) && (e_161 != t)))
            _fail(t);
          else
            e_161 = t;
          t = k_158;
          t = mark_build_vars_0_0(t);
          if(((k_161 != NULL) && (k_161 != t)))
            _fail(t);
          else
            k_161 = t;
          return(t);
        }
        t = scope_2_0(y_20, z_20, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, d_158, e_158, f_158, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_161), not_null(k_161), not_null(e_161)));
    }
  return(t);
}
static ATerm a_21 (ATerm t)
{
  t = term_j_62;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm n_163 = NULL,o_163 = NULL,p_163 = NULL;
  n_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_163);
  o_163 = t;
  t = term_h_65;
  p_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_163), term_h_65);
  t = h_17(a_21, o_163, p_163, t);
  t = n_163;
  return(t);
}
static ATerm b_21 (ATerm t)
{
  ATerm b_164 = NULL;
  ATerm j_65 = t;
  int k_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_164 = ATgetArgument(t, 0);
          {
            ATerm l_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_65);
      t = b_164;
    }
  else
    {
      t = j_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_164;
    }
  return(t);
}
static ATerm c_21 (ATerm t)
{
  t = term_j_62;
  return(t);
}
static ATerm i_16 (ATerm m_70, ATerm n_70, ATerm o_70, ATerm q_70, ATerm t)
{
  ATerm r_163 = NULL,u_163 = NULL;
  t = o_70;
  t = map_1_0(b_21, t);
  r_163 = t;
  {
    static ATerm d_21 (ATerm t)
    {
      t = r_163;
      t = map_1_0(IntroduceBound_0_0, t);
      t = q_70;
      t = mark_buv_0_0(t);
      if(((u_163 != NULL) && (u_163 != t)))
        _fail(t);
      else
        u_163 = t;
      return(t);
    }
    t = scope_2_0(c_21, d_21, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_70, n_70, o_70, not_null(u_163));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm d_165 = NULL,e_165 = NULL,g_165 = NULL,j_165 = NULL,k_165 = NULL,o_165 = NULL;
  d_165 = t;
  if(match_cons(t, sym__2))
    {
      e_165 = ATgetArgument(t, 0);
      k_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_165;
  if(match_cons(t, sym_Undefined_0))
    {
      t = e_165;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_m_65;
        }
      else
        {
          t = term_m_65;
        }
    }
  else
    {
      ATerm o_65 = t;
      int p_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm r_65 = ATgetArgument(t, 0);
              o_165 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(p_65);
          t = e_165;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_m_65;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  g_165 = ATgetArgument(t, 0);
                  j_165 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm s_65 = t;
                int t_65 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, j_165, o_165);
                    {
                      ATerm u_65 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm m_72 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              m_72 = ATgetArgument(t, 0);
                              if((m_72 != ATgetArgument(t, 1)))
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
                          t = u_65;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, g_165, term_y_65);
                    LocalPopChoice(t_65);
                  }
                else
                  {
                    t = s_65;
                    t = o_165;
                    if((j_165 != t))
                      {
                        _fail(t);
                      }
                    t = e_165;
                  }
              }
            }
        }
      else
        {
          t = o_65;
          t = e_165;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_m_65;
        }
    }
  return(t);
}
static ATerm j_16 (ATerm x_68, ATerm y_68, ATerm w_68, ATerm t)
{
  ATerm v_165 = NULL,w_165 = NULL,z_165 = NULL;
  t = term_j_62;
  z_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_62, x_68);
  t = b_18(z_165, x_68, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_165 = ATgetFirst((ATermList) t);
      {
        ATerm z_65 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_68, v_165);
  t = CompareEntries_0_0(t);
  w_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_68, (ATerm) ATinsert(CheckATermList(w_68), w_165));
  return(t);
}
static ATerm e_21 (ATerm t)
{
  ATerm m_166 = NULL,n_166 = NULL,o_166 = NULL,u_166 = NULL,y_166 = NULL;
  y_166 = t;
  if(match_cons(t, sym__2))
    {
      m_166 = ATgetArgument(t, 0);
      n_166 = ATgetArgument(t, 1);
      t = n_166;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_166 = ATgetFirst((ATermList) t);
          u_166 = (ATerm) ATgetNext((ATermList) t);
          t = o_166;
          {
            ATerm a_66 = t;
            int b_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm c_66 = ATgetArgument(t, 0);
                    ATerm d_66 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(b_66);
                t = m_166;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = y_166;
                  }
                else
                  {
                    ATerm e_66 = t;
                    int f_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_166;
                        t = j_16(m_166, o_166, u_166, t);
                        LocalPopChoice(f_66);
                      }
                    else
                      {
                        t = e_66;
                        t = y_166;
                      }
                  }
              }
            else
              {
                t = a_66;
                t = m_166;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = y_166;
                  }
                else
                  {
                    t = y_166;
                  }
              }
          }
        }
      else
        {
          t = m_166;
          if(match_cons(t, sym_Scopes_0))
            {
              t = y_166;
            }
          else
            {
              t = y_166;
            }
        }
    }
  else
    {
      t = y_166;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm i_166 = NULL,j_166 = NULL,l_166 = NULL;
  t = map_1_0(e_21, t);
  i_166 = t;
  t = term_j_62;
  l_166 = t;
  t = SSL_table_destroy(l_166);
  t = term_j_62;
  j_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_62, i_166);
  t = k_16(j_166, i_166, t);
  t = i_166;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm y_167 = NULL,z_167 = NULL,b_168 = NULL;
  b_168 = t;
  {
    ATerm g_66 = t;
    int i_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm k_66 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_66);
        t = b_168;
      }
    else
      {
        t = g_66;
        {
          ATerm l_66 = t;
          int m_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm n_66 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(m_66);
              t = b_168;
            }
          else
            {
              t = l_66;
              {
                ATerm o_66 = t;
                int p_66 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm q_66 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_66);
                    t = b_168;
                  }
                else
                  {
                    t = o_66;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm r_66 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_168;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  y_167 = t;
  t = b_168;
  t = SRTS_one(mark_buv_0_0, t);
  z_167 = t;
  t = y_167;
  t = isect_MarkVar_0_0(t);
  t = z_167;
  return(t);
}
static ATerm k_16 (ATerm q_55, ATerm p_55, ATerm t)
{
  static ATerm f_21 (ATerm t)
  {
    ATerm d_168 = NULL,e_168 = NULL;
    if(match_cons(t, sym__2))
      {
        d_168 = ATgetArgument(t, 0);
        e_168 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(q_55, d_168, e_168);
    t = (ATerm) ATmakeAppl(sym__3, q_55, d_168, e_168);
    return(t);
  }
  t = p_55;
  t = map_1_0(f_21, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_168 = NULL;
  static ATerm h_21 (ATerm t)
  {
    ATerm g_168 = NULL,h_168 = NULL;
    g_168 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_168), g_168);
    t = b_18(not_null(f_168), g_168, t);
    h_168 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_168, h_168);
    return(t);
  }
  if(((f_168 != NULL) && (f_168 != t)))
    _fail(t);
  else
    f_168 = t;
  t = SSL_table_keys(f_168);
  t = map_1_0(h_21, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_j_62;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm o_168 = NULL,p_168 = NULL,q_168 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm i_21 (ATerm t)
    {
      static ATerm u_169 (ATerm r_168, ATerm t)
      {
        ATerm x_168 = NULL,a_169 = NULL,b_169 = NULL,c_169 = NULL;
        t = r_168;
        if(match_cons(t, sym__2))
          {
            ATerm s_66 = ATgetArgument(t, 0);
            x_168 = s_66;
            if(match_cons(s_66, sym_Var_1))
              {
                a_169 = ATgetArgument(s_66, 0);
              }
            else
              _fail(t);
            {
              ATerm t_66 = ATgetArgument(t, 1);
              if(((ATgetType(t_66) == AT_LIST) && !(ATisEmpty(t_66))))
                {
                  ATerm v_66 = ATgetFirst((ATermList) t_66);
                  if(match_cons(v_66, sym_Defined_2))
                    {
                      b_169 = ATgetArgument(v_66, 0);
                      {
                        ATerm w_66 = ATgetArgument(v_66, 1);
                        if((ATgetSymbol((ATermAppl) w_66) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  c_169 = (ATerm) ATgetNext((ATermList) t_66);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_69;
        {
          static ATerm j_21 (ATerm t)
          {
            if((a_169 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(j_21, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, x_168, (ATerm) ATinsert(CheckATermList(c_169), (ATerm) ATmakeAppl(sym_Defined_2, b_169, term_y_65)));
        return(t);
      }
      ATerm h_169 = NULL,j_169 = NULL;
      j_169 = t;
      {
        ATerm x_66 = t;
        int y_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                h_169 = ATgetArgument(t, 0);
                {
                  ATerm a_67 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_66);
            t = h_169;
            if(match_cons(t, sym_Scopes_0))
              {
                t = j_169;
              }
            else
              {
                ATerm b_67 = t;
                int c_67 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_169(j_169, t);
                    LocalPopChoice(c_67);
                  }
                else
                  {
                    t = b_67;
                    t = j_169;
                  }
              }
          }
        else
          {
            t = x_66;
            {
              ATerm d_67 = t;
              int e_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_169(j_169, t);
                  LocalPopChoice(e_67);
                }
              else
                {
                  t = d_67;
                  t = j_169;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(i_21, t);
  }
  o_168 = t;
  t = term_j_62;
  q_168 = t;
  t = SSL_table_destroy(q_168);
  t = term_j_62;
  p_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_62, o_168);
  t = k_16(p_168, o_168, t);
  t = o_168;
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm a_171 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_171 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_171);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm f_67 = t;
  int g_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_67);
    }
  else
    {
      t = f_67;
      {
        ATerm h_67 = t;
        int i_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_67);
          }
        else
          {
            t = h_67;
            {
              ATerm c_171 = NULL,h_171 = NULL,i_171 = NULL,j_171 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_171 = ATgetArgument(t, 0);
                  h_171 = ATgetArgument(t, 1);
                  i_171 = ATgetArgument(t, 2);
                  j_171 = ATgetArgument(t, 3);
                  t = i_171;
                  t = map_1_0(m_21, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_171 = ATgetArgument(t, 0);
                      h_171 = ATgetArgument(t, 1);
                      i_171 = ATgetArgument(t, 2);
                      j_171 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_171;
                  t = map_1_0(n_21, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_21 (ATerm t)
{
  ATerm s_171 = NULL;
  ATerm j_67 = t;
  int k_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_171 = ATgetArgument(t, 0);
          {
            ATerm m_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_67);
      t = s_171;
    }
  else
    {
      t = j_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_171 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_171;
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm g_172 = NULL;
  ATerm n_67 = t;
  int o_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_172 = ATgetArgument(t, 0);
          {
            ATerm q_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_67);
      t = g_172;
    }
  else
    {
      t = n_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_172 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_172;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm c_170 = NULL,d_170 = NULL,g_170 = NULL,i_170 = NULL,j_170 = NULL,k_170 = NULL,l_170 = NULL,m_170 = NULL,n_170 = NULL,q_170 = NULL,s_170 = NULL,t_170 = NULL,u_170 = NULL,w_170 = NULL,x_170 = NULL,l_19 = NULL,k_19 = NULL;
  x_170 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_170 = ATgetArgument(t, 0);
      u_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_170);
  s_170 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, t_170, u_170);
  k_19 = t;
  t = SSLsetAnnotations(k_19, s_170);
  w_170 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_170 = ATgetArgument(t, 0);
      {
        ATerm r_67 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_170;
  t = free_vars_3_0(k_21, l_21, tboundin_3_0, t);
  c_170 = t;
  t = undefine_unbound_MarkVar_0_1(c_170, t);
  d_170 = t;
  t = w_170;
  if(match_cons(t, sym_Let_2))
    {
      j_170 = ATgetArgument(t, 0);
      k_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_170);
  i_170 = t;
  t = j_170;
  {
    static ATerm o_21 (ATerm t)
    {
      ATerm j_172 = NULL,k_172 = NULL,l_172 = NULL;
      j_172 = t;
      t = term_j_62;
      l_172 = t;
      t = SSL_table_destroy(l_172);
      t = term_j_62;
      k_172 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_62, d_170);
      t = k_16(k_172, d_170, t);
      t = j_172;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(o_21, t);
  }
  l_170 = t;
  t = term_j_62;
  q_170 = t;
  t = SSL_table_destroy(q_170);
  t = term_j_62;
  n_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_62, d_170);
  t = k_16(n_170, d_170, t);
  t = k_170;
  t = mark_buv_0_0(t);
  m_170 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, l_170, m_170);
  l_19 = t;
  t = SSLsetAnnotations(l_19, i_170);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm s_67 = t;
  int t_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_172 = NULL,n_172 = NULL,o_172 = NULL,o_19 = NULL;
      o_172 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_172 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_172);
      m_172 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_172);
      o_19 = t;
      t = SSLsetAnnotations(o_19, m_172);
      LocalPopChoice(t_67);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = s_67;
      {
        ATerm u_67 = t;
        int v_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_172 = NULL,s_172 = NULL,t_172 = NULL,u_172 = NULL,p_19 = NULL;
            u_172 = t;
            if(match_cons(t, sym_App_2))
              {
                s_172 = ATgetArgument(t, 0);
                t_172 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_172);
            p_172 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, s_172, t_172);
            p_19 = t;
            t = SSLsetAnnotations(p_19, p_172);
            LocalPopChoice(v_67);
            {
              ATerm v_172 = NULL,w_172 = NULL,x_172 = NULL,y_172 = NULL,z_172 = NULL,a_173 = NULL,d_20 = NULL;
              a_173 = t;
              if(match_cons(t, sym_App_2))
                {
                  w_172 = ATgetArgument(t, 0);
                  x_172 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_173);
              v_172 = t;
              t = w_172;
              t = mark_buv_0_0(t);
              y_172 = t;
              t = x_172;
              t = mark_build_vars_0_0(t);
              z_172 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, y_172, z_172);
              d_20 = t;
              t = SSLsetAnnotations(d_20, v_172);
            }
          }
        else
          {
            t = u_67;
            {
              ATerm w_67 = t;
              int x_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_173 = NULL,c_173 = NULL,d_173 = NULL,e_20 = NULL;
                  d_173 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_173 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_173);
                  b_173 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, c_173);
                  e_20 = t;
                  t = SSLsetAnnotations(e_20, b_173);
                  LocalPopChoice(x_67);
                  {
                    ATerm e_173 = NULL,f_173 = NULL,g_173 = NULL,i_173 = NULL,f_20 = NULL;
                    i_173 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        f_173 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(i_173);
                    e_173 = t;
                    t = f_173;
                    t = mark_buv_0_0(t);
                    g_173 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, g_173);
                    f_20 = t;
                    t = SSLsetAnnotations(f_20, e_173);
                  }
                }
              else
                {
                  t = w_67;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_16 (ATerm a_55, ATerm b_55, ATerm c_55, ATerm t)
{
  ATerm j_173 = NULL,k_173 = NULL,l_173 = NULL;
  k_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_55, b_55);
  t = b_18(a_55, b_55, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_67 = ATgetFirst((ATermList) t);
      j_173 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_173), c_55);
  l_173 = t;
  t = SSL_table_put(a_55, b_55, l_173);
  t = k_173;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm m_173 = NULL,n_173 = NULL,o_173 = NULL,p_173 = NULL;
  m_173 = t;
  t = term_j_62;
  n_173 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_173);
  o_173 = t;
  t = term_a_68;
  p_173 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_62, (ATerm)ATmakeAppl(sym_Var_1, m_173), term_a_68);
  t = l_16(n_173, o_173, p_173, t);
  t = m_173;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm i_175 = NULL,j_175 = NULL;
  i_175 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_68 = t;
    int d_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,p_73 = NULL;
        t = term_j_62;
        p_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_62, i_175);
        t = g_17(p_73, i_175, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_68 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_68) != ATmakeSymbol("a_2", 0, ATtrue)))
              _fail(t);
            i_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, j_175);
        j_73 = t;
        t = (ATerm) ATinsert(ATempty, i_73);
        k_73 = t;
        t = SSLsetAnnotations(j_73, k_73);
        LocalPopChoice(d_68);
      }
    else
      {
        t = c_68;
        {
          ATerm g_68 = t;
          int l_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_73 = NULL,x_73 = NULL,c_74 = NULL,h_74 = NULL;
              t = term_j_62;
              h_74 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_j_62, i_175);
              t = g_17(h_74, i_175, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_68 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_68) != ATmakeSymbol("y_1", 0, ATtrue)))
                    _fail(t);
                  w_73 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, j_175);
              x_73 = t;
              t = (ATerm) ATinsert(ATempty, w_73);
              c_74 = t;
              t = SSLsetAnnotations(x_73, c_74);
              LocalPopChoice(l_68);
            }
          else
            {
              t = g_68;
              {
                ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL,d_75 = NULL;
                t = term_j_62;
                d_75 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_62, i_175);
                t = g_17(d_75, i_175, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm n_68 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_68) != ATmakeSymbol("w_1", 0, ATtrue)))
                      _fail(t);
                    w_74 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, j_175);
                x_74 = t;
                t = (ATerm) ATinsert(ATempty, w_74);
                y_74 = t;
                t = SSLsetAnnotations(x_74, y_74);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm q_175 = NULL,r_175 = NULL,s_175 = NULL,t_175 = NULL,u_21 = NULL;
  ATerm o_68 = t;
  int p_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(p_68);
    }
  else
    {
      t = o_68;
    }
  t_175 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_175);
  q_175 = t;
  t = r_175;
  t = DeclareBound_0_0(t);
  s_175 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_175);
  u_21 = t;
  t = SSLsetAnnotations(u_21, q_175);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm q_68 = t;
  int r_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_175 = NULL,x_175 = NULL,y_175 = NULL,w_21 = NULL;
      y_175 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_175 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_175);
      w_175 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, x_175);
      w_21 = t;
      t = SSLsetAnnotations(w_21, w_175);
      LocalPopChoice(r_68);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = q_68;
      {
        ATerm s_68 = t;
        int t_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_175 = NULL,a_176 = NULL,d_176 = NULL,g_176 = NULL,x_21 = NULL;
            g_176 = t;
            if(match_cons(t, sym_App_2))
              {
                a_176 = ATgetArgument(t, 0);
                d_176 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_176);
            z_175 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, a_176, d_176);
            x_21 = t;
            t = SSLsetAnnotations(x_21, z_175);
            LocalPopChoice(t_68);
            {
              ATerm h_176 = NULL,i_176 = NULL,j_176 = NULL,n_176 = NULL,q_176 = NULL,t_176 = NULL,y_21 = NULL;
              t_176 = t;
              if(match_cons(t, sym_App_2))
                {
                  i_176 = ATgetArgument(t, 0);
                  j_176 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_176);
              h_176 = t;
              t = i_176;
              t = mark_buv_0_0(t);
              n_176 = t;
              t = j_176;
              t = mark_build_vars_0_0(t);
              q_176 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, n_176, q_176);
              y_21 = t;
              t = SSLsetAnnotations(y_21, h_176);
            }
          }
        else
          {
            t = s_68;
            {
              ATerm u_68 = t;
              int v_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_176 = NULL,x_176 = NULL,y_176 = NULL,z_21 = NULL;
                  y_176 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      x_176 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_176);
                  w_176 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, x_176);
                  z_21 = t;
                  t = SSLsetAnnotations(z_21, w_176);
                  LocalPopChoice(v_68);
                  {
                    ATerm z_176 = NULL,c_177 = NULL,d_177 = NULL,e_177 = NULL,a_22 = NULL;
                    e_177 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        c_177 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_177);
                    z_176 = t;
                    t = c_177;
                    t = mark_buv_0_0(t);
                    d_177 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, d_177);
                    a_22 = t;
                    t = SSLsetAnnotations(a_22, z_176);
                  }
                }
              else
                {
                  t = u_68;
                  t = SRTS_all(mark_match_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm z_68 = t;
  int b_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_178 = NULL,g_178 = NULL;
      f_178 = t;
      if(match_cons(t, sym_Match_1))
        {
          g_178 = ATgetArgument(t, 0);
          {
            ATerm h_75 = NULL,j_75 = NULL,i_22 = NULL;
            t = SSLgetAnnotations(f_178);
            h_75 = t;
            t = g_178;
            t = mark_match_vars_0_0(t);
            j_75 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, j_75);
            i_22 = t;
            t = SSLsetAnnotations(i_22, h_75);
          }
        }
      else
        {
          ATerm p_75 = NULL,r_75 = NULL,n_22 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              g_178 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_178);
          p_75 = t;
          t = g_178;
          t = mark_build_vars_0_0(t);
          r_75 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, r_75);
          n_22 = t;
          t = SSLsetAnnotations(n_22, p_75);
        }
      LocalPopChoice(b_69);
    }
  else
    {
      t = z_68;
      {
        ATerm c_69 = t;
        int d_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(d_69);
          }
        else
          {
            t = c_69;
            {
              ATerm e_69 = t;
              int h_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(h_69);
                }
              else
                {
                  t = e_69;
                  {
                    ATerm j_69 = t;
                    int l_69 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(l_69);
                      }
                    else
                      {
                        t = j_69;
                        {
                          ATerm m_69 = t;
                          int n_69 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_178 = NULL,i_178 = NULL,j_178 = NULL,k_178 = NULL,l_178 = NULL;
                              h_178 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  i_178 = ATgetArgument(t, 0);
                                  j_178 = ATgetArgument(t, 1);
                                  k_178 = ATgetArgument(t, 2);
                                  l_178 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = h_178;
                              t = i_16(i_178, j_178, k_178, l_178, t);
                              LocalPopChoice(n_69);
                            }
                          else
                            {
                              t = m_69;
                              {
                                ATerm o_69 = t;
                                int p_69 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(p_69);
                                  }
                                else
                                  {
                                    t = o_69;
                                    {
                                      ATerm s_69 = t;
                                      int t_69 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_178 = NULL,t_178 = NULL,u_178 = NULL,v_178 = NULL,w_178 = NULL,x_178 = NULL,y_178 = NULL;
                                          v_178 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              w_178 = ATgetArgument(t, 0);
                                              t = w_178;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  q_178 = ATgetArgument(t, 0);
                                                  t_178 = ATgetArgument(t, 1);
                                                  u_178 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = v_178;
                                              t = h_16(q_178, t_178, u_178, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  w_178 = ATgetArgument(t, 0);
                                                  t = w_178;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      q_178 = ATgetArgument(t, 0);
                                                      t_178 = ATgetArgument(t, 1);
                                                      u_178 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_178;
                                                  t = g_16(q_178, t_178, u_178, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      w_178 = ATgetArgument(t, 0);
                                                      x_178 = ATgetArgument(t, 1);
                                                      y_178 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_178;
                                                  t = f_16(w_178, x_178, y_178, t);
                                                }
                                            }
                                          LocalPopChoice(t_69);
                                        }
                                      else
                                        {
                                          t = s_69;
                                          {
                                            ATerm u_69 = t;
                                            int x_69 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(x_69);
                                              }
                                            else
                                              {
                                                t = u_69;
                                                {
                                                  ATerm a_70 = t;
                                                  int b_70 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(b_70);
                                                    }
                                                  else
                                                    {
                                                      t = a_70;
                                                      {
                                                        ATerm f_70 = t;
                                                        int t_70 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm i_179 = NULL;
                                                            i_179 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm u_70 = ATgetArgument(t, 0);
                                                                ATerm v_70 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = i_179;
                                                            t = e_16(t);
                                                            LocalPopChoice(t_70);
                                                          }
                                                        else
                                                          {
                                                            t = f_70;
                                                            {
                                                              ATerm x_70 = t;
                                                              int y_70 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(y_70);
                                                                }
                                                              else
                                                                {
                                                                  t = x_70;
                                                                  {
                                                                    ATerm z_70 = t;
                                                                    int a_71 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(a_71);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_70;
                                                                        {
                                                                          ATerm b_71 = t;
                                                                          int c_71 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(c_71);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_71;
                                                                              t = SRTS_all(mark_buv_0_0, t);
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm p_21 (ATerm t)
{
  t = term_j_62;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm n_179 = NULL,o_179 = NULL,p_179 = NULL;
  n_179 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_179);
  o_179 = t;
  t = term_m_71;
  p_179 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_179), term_m_71);
  t = h_17(p_21, o_179, p_179, t);
  t = n_179;
  return(t);
}
static ATerm q_21 (ATerm t)
{
  t = term_j_62;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm q_179 = NULL,r_179 = NULL,s_179 = NULL,t_179 = NULL,u_179 = NULL,q_22 = NULL;
  u_179 = t;
  if(match_cons(t, sym_Scope_2))
    {
      r_179 = ATgetArgument(t, 0);
      s_179 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_179);
  q_179 = t;
  t = s_179;
  {
    static ATerm r_21 (ATerm t)
    {
      ATerm v_179 = NULL;
      v_179 = t;
      t = r_179;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = v_179;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(q_21, r_21, t);
  }
  t_179 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_179, t_179);
  q_22 = t;
  t = SSLsetAnnotations(q_22, q_179);
  return(t);
}
static ATerm s_21 (ATerm t)
{
  t = term_n_55;
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = scope_2_0(v_21, b_22, t);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  t = term_j_62;
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm e_180 = NULL,f_180 = NULL,g_180 = NULL;
  t = topdown_1_0(c_22, t);
  g_180 = t;
  t = free_vars_3_0(d_22, e_22, tboundin_3_0, t);
  f_180 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_180, g_180);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm n_71 = ATgetArgument(t, 0);
      e_180 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_180;
  {
    ATerm r_71 = t;
    int t_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(t_71);
      }
    else
      {
        t = r_71;
        {
          ATerm v_71 = t;
          int x_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(x_71);
            }
          else
            {
              t = v_71;
              {
                ATerm q_181 = NULL,r_181 = NULL,s_181 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    q_181 = ATgetArgument(t, 0);
                    r_181 = ATgetArgument(t, 1);
                    s_181 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = e_180;
                t = d_16(q_181, r_181, s_181, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm c_22 (ATerm t)
{
  ATerm n_180 = NULL,o_180 = NULL;
  o_180 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_180 = ATgetArgument(t, 0);
      {
        ATerm z_71 = t;
        int d_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_75 = NULL,z_75 = NULL,s_22 = NULL;
            t = SSLgetAnnotations(o_180);
            x_75 = t;
            t = n_180;
            if(match_cons(t, sym_ListVar_1))
              {
                z_75 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, z_75);
            s_22 = t;
            t = SSLsetAnnotations(s_22, x_75);
            LocalPopChoice(d_72);
          }
        else
          {
            t = z_71;
            t = o_180;
          }
      }
    }
  else
    {
      t = o_180;
    }
  return(t);
}
static ATerm d_22 (ATerm t)
{
  ATerm r_180 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_180 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_180);
  return(t);
}
static ATerm e_22 (ATerm t)
{
  ATerm e_72 = t;
  int f_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_72);
    }
  else
    {
      t = e_72;
      {
        ATerm g_72 = t;
        int i_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_72);
          }
        else
          {
            t = g_72;
            {
              ATerm t_180 = NULL,u_180 = NULL,v_180 = NULL,w_180 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_180 = ATgetArgument(t, 0);
                  u_180 = ATgetArgument(t, 1);
                  v_180 = ATgetArgument(t, 2);
                  w_180 = ATgetArgument(t, 3);
                  t = v_180;
                  t = map_1_0(f_22, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_180 = ATgetArgument(t, 0);
                      u_180 = ATgetArgument(t, 1);
                      v_180 = ATgetArgument(t, 2);
                      w_180 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_180;
                  t = map_1_0(g_22, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_22 (ATerm t)
{
  ATerm d_181 = NULL;
  ATerm l_72 = t;
  int n_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_181 = ATgetArgument(t, 0);
          {
            ATerm o_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_72);
      t = d_181;
    }
  else
    {
      t = l_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_181 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_181;
    }
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm m_181 = NULL;
  ATerm p_72 = t;
  int q_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_181 = ATgetArgument(t, 0);
          {
            ATerm r_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_72);
      t = m_181;
    }
  else
    {
      t = p_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_181 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_181;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm d_180 = NULL;
  d_180 = t;
  t = scope_2_0(s_21, t_21, t);
  t = d_180;
  return(t);
}
static ATerm h_22 (ATerm t)
{
  ATerm k_182 = NULL,l_182 = NULL,m_182 = NULL,v_22 = NULL;
  m_182 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      l_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_182);
  k_182 = t;
  t = l_182;
  {
    ATerm s_72 = t;
    int t_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_182;
        LocalPopChoice(t_72);
      }
    else
      {
        t = s_72;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_182;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Overlays_1, l_182);
  v_22 = t;
  t = SSLsetAnnotations(v_22, k_182);
  return(t);
}
static ATerm j_22 (ATerm t)
{
  t = Cons_2_0(k_22, m_22, t);
  return(t);
}
static ATerm k_22 (ATerm t)
{
  ATerm o_182 = NULL,p_182 = NULL,r_182 = NULL,w_22 = NULL;
  r_182 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_182);
  o_182 = t;
  t = p_182;
  {
    ATerm u_72 = t;
    int v_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_182;
        LocalPopChoice(v_72);
      }
    else
      {
        t = u_72;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_182;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_182);
  w_22 = t;
  t = SSLsetAnnotations(w_22, o_182);
  return(t);
}
static ATerm m_22 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm z_181 = NULL,a_182 = NULL,b_182 = NULL,c_182 = NULL,d_182 = NULL,e_182 = NULL,f_182 = NULL,g_182 = NULL,h_182 = NULL,i_182 = NULL,j_182 = NULL,a_23 = NULL,x_22 = NULL,u_22 = NULL;
  j_182 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_182);
  z_181 = t;
  t = a_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_182 = ATgetFirst((ATermList) t);
      d_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_182);
  b_182 = t;
  t = c_182;
  if(match_cons(t, sym_Signature_1))
    {
      h_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_182);
  g_182 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, h_182);
  u_22 = t;
  t = SSLsetAnnotations(u_22, g_182);
  i_182 = t;
  t = d_182;
  t = Cons_2_0(h_22, j_22, t);
  e_182 = t;
  t = (ATerm) ATinsert(CheckATermList(e_182), i_182);
  x_22 = t;
  t = SSLsetAnnotations(x_22, b_182);
  f_182 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_182);
  a_23 = t;
  t = SSLsetAnnotations(a_23, z_181);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_182 = NULL,y_182 = NULL,z_182 = NULL,b_183 = NULL,c_183 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      b_183 = ATgetArgument(t, 0);
      c_183 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, b_183, c_183);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          b_183 = ATgetArgument(t, 0);
          t = b_183;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_182 = ATgetFirst((ATermList) t);
              y_182 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_182, (ATerm) ATmakeAppl(sym_LChoices_1, y_182));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_w_72;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              b_183 = ATgetArgument(t, 0);
              t = b_183;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_182 = ATgetFirst((ATermList) t);
                  y_182 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_182, (ATerm) ATmakeAppl(sym_Choices_1, y_182));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_w_72;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  b_183 = ATgetArgument(t, 0);
                  t = b_183;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_182 = ATgetFirst((ATermList) t);
                      y_182 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_182, (ATerm) ATmakeAppl(sym_Seqs_1, y_182));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_d_37;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      b_183 = ATgetArgument(t, 0);
                      c_183 = ATgetArgument(t, 1);
                      z_182 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, c_183, (ATerm) ATmakeAppl(sym_Op_2, term_v_35, (ATerm) ATinsert(ATinsert(ATempty, z_182), b_183)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          b_183 = ATgetArgument(t, 0);
                          c_183 = ATgetArgument(t, 1);
                          z_182 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_182)), b_183), (ATerm) ATmakeAppl(sym_Build_1, c_183)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              b_183 = ATgetArgument(t, 0);
                              c_183 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_183, (ATerm) ATmakeAppl(sym_Match_1, c_183));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  b_183 = ATgetArgument(t, 0);
                                  c_183 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_183), c_183);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      b_183 = ATgetArgument(t, 0);
                                      c_183 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_183), b_183);
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
static ATerm o_22 (ATerm t)
{
  ATerm n_184 = NULL,o_184 = NULL,p_184 = NULL;
  n_184 = t;
  {
    ATerm x_72 = t;
    int y_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm z_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_72);
        t = n_184;
        {
          ATerm a_73 = t;
          if((PushChoice() == 0))
            {
              ATerm i_76 = NULL,k_76 = NULL,l_76 = NULL,v_23 = NULL,p_76 = NULL;
              l_76 = t;
              if(match_cons(t, sym_Var_1))
                {
                  k_76 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_76);
              i_76 = t;
              t = term_b_73;
              p_76 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_b_73, k_76);
              t = g_17(p_76, k_76, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm c_73 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_73) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, k_76);
              v_23 = t;
              t = SSLsetAnnotations(v_23, i_76);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_73;
            }
        }
        t = term_d_73;
      }
    else
      {
        t = x_72;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_d_73;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                o_184 = ATgetArgument(t, 0);
                {
                  ATerm s_184 = NULL;
                  t = o_184;
                  t = free_vars_3_0(p_22, r_22, tboundin_3_0, t);
                  t = map_1_0(b_23, t);
                  s_184 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_e_73, s_184);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    o_184 = ATgetArgument(t, 0);
                    p_184 = ATgetArgument(t, 1);
                    {
                      ATerm u_185 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, o_184, p_184);
                      t = free_vars_3_0(d_23, k_23, tboundin_3_0, t);
                      t = map_1_0(s_23, t);
                      u_185 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_e_73, u_185);
                    }
                  }
                else
                  {
                    ATerm r_76 = NULL,s_76 = NULL,u_76 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm f_73 = ATgetArgument(t, 0);
                        ATerm h_73 = ATgetArgument(t, 1);
                        ATerm l_73 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_u_51;
                    s_76 = t;
                    t = (ATerm) ATinsert(ATempty, term_m_73);
                    u_76 = t;
                    t = SSL_printnl(s_76, u_76);
                    t = term_l_51;
                    r_76 = t;
                    t = SSL_exit(r_76);
                    t = (ATerm) ATinsert(ATempty, term_m_73);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm p_22 (ATerm t)
{
  ATerm t_184 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_184 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_184);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  ATerm n_73 = t;
  int o_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_73);
    }
  else
    {
      t = n_73;
      {
        ATerm q_73 = t;
        int r_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_73);
          }
        else
          {
            t = q_73;
            {
              ATerm v_184 = NULL,w_184 = NULL,x_184 = NULL,y_184 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  v_184 = ATgetArgument(t, 0);
                  w_184 = ATgetArgument(t, 1);
                  x_184 = ATgetArgument(t, 2);
                  y_184 = ATgetArgument(t, 3);
                  t = x_184;
                  t = map_1_0(t_22, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_184 = ATgetArgument(t, 0);
                      w_184 = ATgetArgument(t, 1);
                      x_184 = ATgetArgument(t, 2);
                      y_184 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_184;
                  t = map_1_0(y_22, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_22 (ATerm t)
{
  ATerm f_185 = NULL;
  ATerm s_73 = t;
  int t_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_185 = ATgetArgument(t, 0);
          {
            ATerm u_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_73);
      t = f_185;
    }
  else
    {
      t = s_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_185 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_185;
    }
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm o_185 = NULL;
  ATerm v_73 = t;
  int y_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_185 = ATgetArgument(t, 0);
          {
            ATerm d_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_73);
      t = o_185;
    }
  else
    {
      t = v_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_185 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_185;
    }
  return(t);
}
static ATerm b_23 (ATerm t)
{
  ATerm r_185 = NULL;
  r_185 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_185);
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm v_185 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_185 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_185);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm e_74 = t;
  int f_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_74);
    }
  else
    {
      t = e_74;
      {
        ATerm g_74 = t;
        int i_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_74);
          }
        else
          {
            t = g_74;
            {
              ATerm x_185 = NULL,y_185 = NULL,z_185 = NULL,a_186 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_185 = ATgetArgument(t, 0);
                  y_185 = ATgetArgument(t, 1);
                  z_185 = ATgetArgument(t, 2);
                  a_186 = ATgetArgument(t, 3);
                  t = z_185;
                  t = map_1_0(m_23, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_185 = ATgetArgument(t, 0);
                      y_185 = ATgetArgument(t, 1);
                      z_185 = ATgetArgument(t, 2);
                      a_186 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_185;
                  t = map_1_0(r_23, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_23 (ATerm t)
{
  ATerm h_186 = NULL;
  ATerm j_74 = t;
  int k_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_186 = ATgetArgument(t, 0);
          {
            ATerm l_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_74);
      t = h_186;
    }
  else
    {
      t = j_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_186 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_186;
    }
  return(t);
}
static ATerm r_23 (ATerm t)
{
  ATerm q_186 = NULL;
  ATerm m_74 = t;
  int n_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_186 = ATgetArgument(t, 0);
          {
            ATerm o_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_74);
      t = q_186;
    }
  else
    {
      t = m_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_186 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_186;
    }
  return(t);
}
static ATerm s_23 (ATerm t)
{
  ATerm t_186 = NULL;
  t_186 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_186);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(o_22, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm d_189 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_189 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_189);
  return(t);
}
static ATerm u_23 (ATerm t)
{
  ATerm p_74 = t;
  int q_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_74);
    }
  else
    {
      t = p_74;
      {
        ATerm r_74 = t;
        int s_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_74);
          }
        else
          {
            t = r_74;
            {
              ATerm f_189 = NULL,g_189 = NULL,h_189 = NULL,i_189 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_189 = ATgetArgument(t, 0);
                  g_189 = ATgetArgument(t, 1);
                  h_189 = ATgetArgument(t, 2);
                  i_189 = ATgetArgument(t, 3);
                  t = h_189;
                  t = map_1_0(w_23, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_189 = ATgetArgument(t, 0);
                      g_189 = ATgetArgument(t, 1);
                      h_189 = ATgetArgument(t, 2);
                      i_189 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_189;
                  t = map_1_0(x_23, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_23 (ATerm t)
{
  ATerm p_189 = NULL;
  ATerm u_74 = t;
  int v_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_189 = ATgetArgument(t, 0);
          {
            ATerm z_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_74);
      t = p_189;
    }
  else
    {
      t = u_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_189 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_189;
    }
  return(t);
}
static ATerm x_23 (ATerm t)
{
  ATerm y_189 = NULL;
  ATerm a_75 = t;
  int b_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_189 = ATgetArgument(t, 0);
          {
            ATerm c_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_75);
      t = y_189;
    }
  else
    {
      t = a_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_189 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_189;
    }
  return(t);
}
static ATerm y_23 (ATerm t)
{
  ATerm b_190 = NULL;
  b_190 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_190);
  return(t);
}
static ATerm z_23 (ATerm t)
{
  ATerm c_190 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_190 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_190);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  ATerm e_75 = t;
  int f_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_75);
    }
  else
    {
      t = e_75;
      {
        ATerm g_75 = t;
        int i_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_75);
          }
        else
          {
            t = g_75;
            {
              ATerm e_190 = NULL,f_190 = NULL,g_190 = NULL,h_190 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_190 = ATgetArgument(t, 0);
                  f_190 = ATgetArgument(t, 1);
                  g_190 = ATgetArgument(t, 2);
                  h_190 = ATgetArgument(t, 3);
                  t = g_190;
                  t = map_1_0(c_24, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_190 = ATgetArgument(t, 0);
                      f_190 = ATgetArgument(t, 1);
                      g_190 = ATgetArgument(t, 2);
                      h_190 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_190;
                  t = map_1_0(e_24, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_24 (ATerm t)
{
  ATerm o_190 = NULL;
  ATerm k_75 = t;
  int l_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_190 = ATgetArgument(t, 0);
          {
            ATerm m_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_75);
      t = o_190;
    }
  else
    {
      t = k_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_190 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_190;
    }
  return(t);
}
static ATerm e_24 (ATerm t)
{
  ATerm y_190 = NULL;
  ATerm n_75 = t;
  int o_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_190 = ATgetArgument(t, 0);
          {
            ATerm q_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_75);
      t = y_190;
    }
  else
    {
      t = n_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_190 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_190;
    }
  return(t);
}
static ATerm i_24 (ATerm t)
{
  ATerm b_191 = NULL;
  b_191 = t;
  {
    ATerm s_75 = t;
    int t_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_191 = NULL,z_76 = NULL,b_24 = NULL,h_77 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            g_191 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_191);
        z_76 = t;
        t = term_b_73;
        h_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_73, g_191);
        t = g_17(h_77, g_191, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm u_75 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_75) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, g_191);
        b_24 = t;
        t = SSLsetAnnotations(b_24, z_76);
        LocalPopChoice(t_75);
      }
    else
      {
        t = s_75;
        {
          ATerm k_77 = NULL;
          t = term_b_73;
          k_77 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_73, b_191);
          t = g_17(k_77, b_191, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm v_75 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_75) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = b_191;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, b_191);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  static ATerm s_191 (ATerm f_188, ATerm g_188, ATerm h_188, ATerm i_188, ATerm j_188, ATerm k_188, ATerm l_188, ATerm t)
  {
    ATerm q_188 = NULL,r_188 = NULL,s_188 = NULL,v_188 = NULL,w_188 = NULL,x_188 = NULL,y_188 = NULL,z_188 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, j_188, term_y_75);
    {
      ATerm a_76 = t;
      if((PushChoice() == 0))
        {
          ATerm a_189 = NULL;
          if(match_cons(t, sym__2))
            {
              a_189 = ATgetArgument(t, 0);
              if((a_189 != ATgetArgument(t, 1)))
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
          t = a_76;
        }
    }
    t = new_0_0(t);
    q_188 = t;
    t = i_188;
    t = dummify_0_0(t);
    s_188 = t;
    {
      ATerm b_76 = t;
      int c_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_188;
          if((i_188 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, q_188);
          LocalPopChoice(c_76);
        }
      else
        {
          t = b_76;
          t = s_188;
        }
    }
    r_188 = t;
    t = s_188;
    t = free_vars_3_0(t_23, u_23, tboundin_3_0, t);
    t = map_1_0(y_23, t);
    w_188 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_188, k_188);
    t = free_vars_3_0(z_23, a_24, tboundin_3_0, t);
    t = filter_1_0(i_24, t);
    v_188 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_188, w_188);
    t = diff_0_0(t);
    x_188 = t;
    t = new_0_0(t);
    y_188 = t;
    t = f_188;
    t = v_0(t);
    z_188 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, z_188, (ATerm) ATmakeAppl(sym_Op_2, term_d_76, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_e_76, (ATerm) ATinsert(CheckATermList(x_188), (ATerm) ATmakeAppl(sym_Str_1, y_188)))), s_188)))), (ATerm) ATmakeAppl(sym_RDefT_4, f_188, g_188, h_188, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_188), i_188), j_188, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_76, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_188)))), r_188), (ATerm) ATmakeAppl(sym_Op_2, term_e_76, (ATerm) ATinsert(CheckATermList(x_188), (ATerm) ATmakeAppl(sym_Str_1, y_188))))), k_188))));
    return(t);
  }
  ATerm h_191 = NULL,i_191 = NULL,j_191 = NULL,k_191 = NULL,l_191 = NULL,m_191 = NULL,n_191 = NULL,o_191 = NULL,p_191 = NULL,q_191 = NULL;
  j_191 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      k_191 = ATgetArgument(t, 0);
      l_191 = ATgetArgument(t, 1);
      m_191 = ATgetArgument(t, 2);
      n_191 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = n_191;
  if(match_cons(t, sym_Rule_3))
    {
      o_191 = ATgetArgument(t, 0);
      p_191 = ATgetArgument(t, 1);
      q_191 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_191;
  if(match_cons(t, sym_Op_2))
    {
      h_191 = ATgetArgument(t, 0);
      i_191 = ATgetArgument(t, 1);
      t = i_191;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = h_191;
          if(match_string(t, "Undefined"))
            {
              ATerm n_76 = t;
              int o_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_77 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL;
                  t = j_191;
                  t = new_0_0(t);
                  b_78 = t;
                  t = o_191;
                  t = dummify_0_0(t);
                  z_77 = t;
                  {
                    ATerm q_76 = t;
                    int t_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = z_77;
                        if((o_191 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, b_78);
                        LocalPopChoice(t_76);
                      }
                    else
                      {
                        t = q_76;
                        t = z_77;
                      }
                  }
                  c_78 = t;
                  t = k_191;
                  t = v_0(t);
                  d_78 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, d_78, (ATerm) ATmakeAppl(sym_Op_2, term_d_76, (ATerm) ATinsert(ATinsert(ATempty, term_y_75), z_77)))), (ATerm) ATmakeAppl(sym_RDefT_4, k_191, l_191, m_191, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, b_78), o_191), term_y_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_76, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_191)))), c_78), term_y_75)), (ATerm) ATmakeAppl(sym_Seq_2, q_191, term_w_72)))));
                  LocalPopChoice(o_76);
                }
              else
                {
                  t = n_76;
                  t = s_191(k_191, l_191, m_191, o_191, p_191, q_191, j_191, t);
                }
            }
          else
            {
              t = s_191(k_191, l_191, m_191, o_191, p_191, q_191, j_191, t);
            }
        }
      else
        {
          t = h_191;
          t = s_191(k_191, l_191, m_191, o_191, p_191, q_191, j_191, t);
        }
    }
  else
    {
      t = s_191(k_191, l_191, m_191, o_191, p_191, q_191, j_191, t);
    }
  return(t);
}
static ATerm j_24 (ATerm t)
{
  t = SplitDynamicRule_1_0(m_24, t);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  ATerm a_192 = NULL;
  a_192 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_76, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_192))));
  return(t);
}
static ATerm n_24 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_36;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  ATerm b_192 = NULL,c_192 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_192 = ATgetFirst((ATermList) t);
      c_192 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_192, c_192);
  return(t);
}
static ATerm p_24 (ATerm t)
{
  ATerm d_192 = NULL,e_192 = NULL,f_192 = NULL,g_192 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_76 = ATgetArgument(t, 0);
      if(match_cons(x_76, sym__2))
        {
          d_192 = ATgetArgument(x_76, 0);
          e_192 = ATgetArgument(x_76, 1);
        }
      else
        _fail(t);
      {
        ATerm y_76 = ATgetArgument(t, 1);
        if(match_cons(y_76, sym__2))
          {
            f_192 = ATgetArgument(y_76, 0);
            g_192 = ATgetArgument(y_76, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_192), d_192), (ATerm) ATinsert(CheckATermList(g_192), e_192));
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = SplitDynamicRule_1_0(r_24, t);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  ATerm j_192 = NULL;
  j_192 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_77, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_192))));
  return(t);
}
static ATerm s_24 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_36;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm k_192 = NULL,l_192 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_192 = ATgetFirst((ATermList) t);
      l_192 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_192, l_192);
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm m_192 = NULL,n_192 = NULL,o_192 = NULL,p_192 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_77 = ATgetArgument(t, 0);
      if(match_cons(c_77, sym__2))
        {
          m_192 = ATgetArgument(c_77, 0);
          n_192 = ATgetArgument(c_77, 1);
        }
      else
        _fail(t);
      {
        ATerm d_77 = ATgetArgument(t, 1);
        if(match_cons(d_77, sym__2))
          {
            o_192 = ATgetArgument(d_77, 0);
            p_192 = ATgetArgument(d_77, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_192), m_192), (ATerm) ATinsert(CheckATermList(p_192), n_192));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm y_191 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      y_191 = ATgetArgument(t, 0);
      t = y_191;
      t = map_1_0(j_24, t);
      t = genzip_4_0(n_24, o_24, p_24, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          y_191 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_191;
      t = map_1_0(q_24, t);
      t = genzip_4_0(s_24, t_24, v_24, _id, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  static ATerm r_192 (ATerm t)
  {
    ATerm i_77 = t;
    int j_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_108(t);
        LocalPopChoice(j_77);
      }
    else
      {
        t = i_77;
        t = SRTS_one(r_192, t);
      }
    return(t);
  }
  t = r_192(t);
  return(t);
}
static ATerm x_24 (ATerm t)
{
  t = term_b_73;
  return(t);
}
static ATerm z_24 (ATerm t)
{
  ATerm a_193 = NULL,c_193 = NULL,d_193 = NULL,e_193 = NULL;
  e_193 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      d_193 = ATgetArgument(t, 0);
      {
        ATerm l_77 = t;
        int m_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_193;
            a_193 = t;
            t = e_193;
            LocalPopChoice(m_77);
          }
        else
          {
            t = l_77;
            t = e_193;
            a_193 = t;
            t = e_193;
          }
      }
    }
  else
    {
      t = e_193;
      a_193 = t;
      t = e_193;
    }
  t = term_o_77;
  c_193 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_193, term_o_77);
  t = h_17(a_25, a_193, c_193, t);
  t = e_193;
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_b_73;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm h_137 (ATerm), ATerm t)
{
  static ATerm f_193 (ATerm t)
  {
    static ATerm w_24 (ATerm t)
    {
      ATerm p_77 = t;
      int q_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_137(t);
          LocalPopChoice(q_77);
        }
      else
        {
          t = p_77;
          {
            ATerm v_192 = NULL,w_192 = NULL,z_192 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                v_192 = ATgetArgument(t, 0);
                w_192 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, v_192, w_192);
            {
              static ATerm y_24 (ATerm t)
              {
                t = v_192;
                t = map_1_0(z_24, t);
                t = w_192;
                t = f_193(t);
                if(((z_192 != NULL) && (z_192 != t)))
                  _fail(t);
                else
                  z_192 = t;
                return(t);
              }
              t = scope_2_0(x_24, y_24, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, v_192, not_null(z_192));
          }
        }
      return(t);
    }
    t = oncetd_1_0(w_24, t);
    return(t);
  }
  t = f_193(t);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  ATerm p_193 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_193 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_193);
  return(t);
}
static ATerm k_25 (ATerm t)
{
  ATerm r_77 = t;
  int s_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_77);
    }
  else
    {
      t = r_77;
      {
        ATerm t_77 = t;
        int u_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_77);
          }
        else
          {
            t = t_77;
            {
              ATerm r_193 = NULL,s_193 = NULL,t_193 = NULL,u_193 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_193 = ATgetArgument(t, 0);
                  s_193 = ATgetArgument(t, 1);
                  t_193 = ATgetArgument(t, 2);
                  u_193 = ATgetArgument(t, 3);
                  t = t_193;
                  t = map_1_0(m_25, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_193 = ATgetArgument(t, 0);
                      s_193 = ATgetArgument(t, 1);
                      t_193 = ATgetArgument(t, 2);
                      u_193 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_193;
                  t = map_1_0(n_25, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_25 (ATerm t)
{
  ATerm b_194 = NULL;
  ATerm v_77 = t;
  int w_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_194 = ATgetArgument(t, 0);
          {
            ATerm x_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_77);
      t = b_194;
    }
  else
    {
      t = v_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_194 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_194;
    }
  return(t);
}
static ATerm n_25 (ATerm t)
{
  ATerm k_194 = NULL;
  ATerm y_77 = t;
  int a_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_194 = ATgetArgument(t, 0);
          {
            ATerm e_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_78);
      t = k_194;
    }
  else
    {
      t = y_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_194 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_194;
    }
  return(t);
}
static ATerm u_25 (ATerm t)
{
  ATerm u_194 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_194 = ATgetArgument(t, 0);
      t = u_194;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_194 = ATgetArgument(t, 0);
          {
            ATerm f_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_194;
    }
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm a_195 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_195 = ATgetArgument(t, 0);
      t = a_195;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_195 = ATgetArgument(t, 0);
          {
            ATerm g_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_195;
    }
  return(t);
}
static ATerm z_25 (ATerm t)
{
  ATerm e_195 = NULL;
  if(match_cons(t, sym__2))
    {
      e_195 = ATgetArgument(t, 0);
      if((e_195 != ATgetArgument(t, 1)))
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
  ATerm m_193 = NULL,n_193 = NULL,o_193 = NULL;
  o_193 = t;
  t = free_vars_3_0(e_25, k_25, tboundin_3_0, t);
  m_193 = t;
  t = o_193;
  {
    ATerm h_78 = t;
    int i_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_194 = NULL;
        ATerm j_78 = t;
        int k_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm l_78 = ATgetArgument(t, 0);
                ATerm p_78 = ATgetArgument(t, 1);
                q_194 = ATgetArgument(t, 2);
                {
                  ATerm q_78 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_78);
            t = q_194;
            t = map_1_0(u_25, t);
          }
        else
          {
            t = j_78;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm r_78 = ATgetArgument(t, 0);
                ATerm t_78 = ATgetArgument(t, 1);
                q_194 = ATgetArgument(t, 2);
                {
                  ATerm u_78 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = q_194;
            t = map_1_0(x_25, t);
          }
        LocalPopChoice(i_78);
      }
    else
      {
        t = h_78;
        t = (ATerm) ATempty;
      }
  }
  n_193 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_193, n_193);
  t = w_16(z_25, m_193, n_193, t);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_b_73;
  return(t);
}
static ATerm g_26 (ATerm t)
{
  ATerm k_195 = NULL,m_195 = NULL,n_195 = NULL,o_195 = NULL;
  o_195 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      n_195 = ATgetArgument(t, 0);
      {
        ATerm w_78 = t;
        int x_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_195;
            k_195 = t;
            t = o_195;
            LocalPopChoice(x_78);
          }
        else
          {
            t = w_78;
            t = o_195;
            k_195 = t;
            t = o_195;
          }
      }
    }
  else
    {
      t = o_195;
      k_195 = t;
      t = o_195;
    }
  t = term_o_77;
  m_195 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_195, term_o_77);
  t = h_17(h_26, k_195, m_195, t);
  t = o_195;
  return(t);
}
static ATerm h_26 (ATerm t)
{
  t = term_b_73;
  return(t);
}
static ATerm r_16 (ATerm n_59, ATerm m_59, ATerm t)
{
  ATerm g_195 = NULL,h_195 = NULL,i_195 = NULL;
  static ATerm f_26 (ATerm t)
  {
    t = n_59;
    t = def_tvars_0_0(t);
    t = map_1_0(g_26, t);
    t = n_59;
    {
      static ATerm i_26 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((h_195 != NULL) && (h_195 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              h_195 = ATgetArgument(t, 0);
            if(((g_195 != NULL) && (g_195 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              g_195 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, h_195);
        return(t);
      }
      t = split_dynamic_rule_1_0(i_26, t);
    }
    if(((i_195 != NULL) && (i_195 != t)))
      _fail(t);
    else
      i_195 = t;
    return(t);
  }
  t = scope_2_0(b_26, f_26, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_195)), not_null(i_195)), m_59);
  t = conc_0_0(t);
  return(t);
}
ATerm listtd_1_0 (ATerm n_115 (ATerm), ATerm t)
{
  static ATerm c_196 (ATerm t)
  {
    ATerm z_195 = NULL,a_196 = NULL,b_196 = NULL;
    t = n_115(t);
    z_195 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_195;
      }
    else
      {
        ATerm s_78 = NULL,v_78 = NULL,d_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_196 = ATgetFirst((ATermList) t);
            b_196 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_195);
        s_78 = t;
        t = b_196;
        t = c_196(t);
        v_78 = t;
        t = (ATerm) ATinsert(CheckATermList(v_78), a_196);
        d_24 = t;
        t = SSLsetAnnotations(d_24, s_78);
      }
    return(t);
  }
  t = c_196(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm g_196 = NULL,h_196 = NULL,j_196 = NULL,k_196 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      j_196 = ATgetArgument(t, 0);
      k_196 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_196;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_196 = ATgetFirst((ATermList) t);
      h_196 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_z_78, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, h_196, k_196)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_196))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_196;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm j_138 (ATerm), ATerm k_138 (ATerm), ATerm l_138 (ATerm), ATerm t)
{
  ATerm u_198 = NULL,v_198 = NULL,w_198 = NULL,x_198 = NULL,y_198 = NULL;
  x_198 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_198 = ATgetArgument(t, 0);
      u_198 = ATgetArgument(t, 1);
      {
        ATerm d_79 = NULL,g_79 = NULL,h_79 = NULL,f_24 = NULL;
        t = SSLgetAnnotations(x_198);
        d_79 = t;
        t = y_198;
        t = l_138(t);
        g_79 = t;
        t = u_198;
        t = j_138(t);
        h_79 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_79, h_79);
        f_24 = t;
        t = SSLsetAnnotations(f_24, d_79);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_198 = ATgetArgument(t, 0);
          u_198 = ATgetArgument(t, 1);
          v_198 = ATgetArgument(t, 2);
          w_198 = ATgetArgument(t, 3);
          {
            ATerm s_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,g_24 = NULL;
            t = SSLgetAnnotations(x_198);
            s_79 = t;
            t = y_198;
            t = l_138(t);
            x_79 = t;
            t = u_198;
            t = l_138(t);
            y_79 = t;
            t = v_198;
            t = l_138(t);
            z_79 = t;
            t = w_198;
            t = j_138(t);
            a_80 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_79, y_79, z_79, a_80);
            g_24 = t;
            t = SSLsetAnnotations(g_24, s_79);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              y_198 = ATgetArgument(t, 0);
              u_198 = ATgetArgument(t, 1);
              v_198 = ATgetArgument(t, 2);
              w_198 = ATgetArgument(t, 3);
              {
                ATerm m_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,h_24 = NULL;
                t = SSLgetAnnotations(x_198);
                m_80 = t;
                t = y_198;
                t = l_138(t);
                r_80 = t;
                t = u_198;
                t = l_138(t);
                s_80 = t;
                t = v_198;
                t = l_138(t);
                t_80 = t;
                t = w_198;
                t = j_138(t);
                u_80 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, r_80, s_80, t_80, u_80);
                h_24 = t;
                t = SSLsetAnnotations(h_24, m_80);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  y_198 = ATgetArgument(t, 0);
                  {
                    ATerm d_81 = NULL,f_81 = NULL,k_24 = NULL;
                    t = SSLgetAnnotations(x_198);
                    d_81 = t;
                    t = y_198;
                    t = j_138(t);
                    f_81 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, f_81);
                    k_24 = t;
                    t = SSLsetAnnotations(k_24, d_81);
                  }
                }
              else
                {
                  ATerm l_81 = NULL,n_81 = NULL,l_24 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      y_198 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_198);
                  l_81 = t;
                  t = y_198;
                  t = j_138(t);
                  n_81 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, n_81);
                  l_24 = t;
                  t = SSLsetAnnotations(l_24, l_81);
                }
            }
        }
    }
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm o_199 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_199 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_199);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  ATerm a_79 = t;
  int b_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_79);
    }
  else
    {
      t = a_79;
      {
        ATerm c_79 = t;
        int e_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_79);
          }
        else
          {
            t = c_79;
            {
              ATerm q_199 = NULL,r_199 = NULL,s_199 = NULL,t_199 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_199 = ATgetArgument(t, 0);
                  r_199 = ATgetArgument(t, 1);
                  s_199 = ATgetArgument(t, 2);
                  t_199 = ATgetArgument(t, 3);
                  t = s_199;
                  t = map_1_0(n_26, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_199 = ATgetArgument(t, 0);
                      r_199 = ATgetArgument(t, 1);
                      s_199 = ATgetArgument(t, 2);
                      t_199 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_199;
                  t = map_1_0(o_26, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_26 (ATerm t)
{
  ATerm a_200 = NULL;
  ATerm f_79 = t;
  int i_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_200 = ATgetArgument(t, 0);
          {
            ATerm j_79 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_79);
      t = a_200;
    }
  else
    {
      t = f_79;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_200 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_200;
    }
  return(t);
}
static ATerm o_26 (ATerm t)
{
  ATerm j_200 = NULL;
  ATerm k_79 = t;
  int l_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_200 = ATgetArgument(t, 0);
          {
            ATerm m_79 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_79);
      t = j_200;
    }
  else
    {
      t = k_79;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_200 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_200;
    }
  return(t);
}
static ATerm p_26 (ATerm t)
{
  ATerm n_200 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_200 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_200);
  return(t);
}
static ATerm q_26 (ATerm t)
{
  ATerm n_79 = t;
  int o_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_79);
    }
  else
    {
      t = n_79;
      {
        ATerm p_79 = t;
        int q_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_79);
          }
        else
          {
            t = p_79;
            {
              ATerm p_200 = NULL,q_200 = NULL,r_200 = NULL,s_200 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_200 = ATgetArgument(t, 0);
                  q_200 = ATgetArgument(t, 1);
                  r_200 = ATgetArgument(t, 2);
                  s_200 = ATgetArgument(t, 3);
                  t = r_200;
                  t = map_1_0(s_26, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_200 = ATgetArgument(t, 0);
                      q_200 = ATgetArgument(t, 1);
                      r_200 = ATgetArgument(t, 2);
                      s_200 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_200;
                  t = map_1_0(t_26, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_26 (ATerm t)
{
  ATerm z_200 = NULL;
  ATerm r_79 = t;
  int t_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_200 = ATgetArgument(t, 0);
          {
            ATerm u_79 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_79);
      t = z_200;
    }
  else
    {
      t = r_79;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_200 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_200;
    }
  return(t);
}
static ATerm t_26 (ATerm t)
{
  ATerm i_201 = NULL;
  ATerm v_79 = t;
  int w_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_201 = ATgetArgument(t, 0);
          {
            ATerm b_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_79);
      t = i_201;
    }
  else
    {
      t = v_79;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_201 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_201;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm m_199 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      m_199 = ATgetArgument(t, 0);
      t = m_199;
      t = free_vars_3_0(k_26, l_26, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          m_199 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_199;
      t = free_vars_3_0(p_26, q_26, tboundin_3_0, t);
    }
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm z_201 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_201 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_201);
  return(t);
}
static ATerm w_26 (ATerm t)
{
  ATerm c_80 = t;
  int d_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_80);
    }
  else
    {
      t = c_80;
      {
        ATerm e_80 = t;
        int f_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_80);
          }
        else
          {
            t = e_80;
            {
              ATerm b_202 = NULL,c_202 = NULL,d_202 = NULL,e_202 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_202 = ATgetArgument(t, 0);
                  c_202 = ATgetArgument(t, 1);
                  d_202 = ATgetArgument(t, 2);
                  e_202 = ATgetArgument(t, 3);
                  t = d_202;
                  t = map_1_0(x_26, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_202 = ATgetArgument(t, 0);
                      c_202 = ATgetArgument(t, 1);
                      d_202 = ATgetArgument(t, 2);
                      e_202 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_202;
                  t = map_1_0(y_26, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_26 (ATerm t)
{
  ATerm l_202 = NULL;
  ATerm g_80 = t;
  int h_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_202 = ATgetArgument(t, 0);
          {
            ATerm i_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_80);
      t = l_202;
    }
  else
    {
      t = g_80;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_202 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_202;
    }
  return(t);
}
static ATerm y_26 (ATerm t)
{
  ATerm u_202 = NULL;
  ATerm j_80 = t;
  int k_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_202 = ATgetArgument(t, 0);
          {
            ATerm l_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_80);
      t = u_202;
    }
  else
    {
      t = j_80;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_202 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_202;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_201 = NULL,w_201 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      w_201 = ATgetArgument(t, 0);
      t = w_201;
      if(match_cons(t, sym_Rule_3))
        {
          r_201 = ATgetArgument(t, 0);
          {
            ATerm n_80 = ATgetArgument(t, 1);
          }
          {
            ATerm o_80 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_201;
      t = free_vars_3_0(u_26, w_26, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          w_201 = ATgetArgument(t, 0);
          {
            ATerm p_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_201;
    }
  return(t);
}
static ATerm w_16 (ATerm i_118 (ATerm), ATerm y_30, ATerm x_30, ATerm t)
{
  static ATerm n_203 (ATerm t)
  {
    ATerm i_203 = NULL,j_203 = NULL,k_203 = NULL;
    i_203 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_203 = ATgetFirst((ATermList) t);
            k_203 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_80 = t;
          int v_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_203;
              {
                static ATerm z_26 (ATerm t)
                {
                  t = x_30;
                  return(t);
                }
                t = x_16(i_118, z_26, j_203, k_203, t);
              }
              t = n_203(t);
              LocalPopChoice(v_80);
            }
          else
            {
              t = q_80;
              {
                ATerm u_81 = NULL,x_81 = NULL,l_25 = NULL;
                t = SSLgetAnnotations(i_203);
                u_81 = t;
                t = k_203;
                t = n_203(t);
                x_81 = t;
                t = (ATerm) ATinsert(CheckATermList(x_81), j_203);
                l_25 = t;
                t = SSLsetAnnotations(l_25, u_81);
              }
            }
        }
      }
    return(t);
  }
  t = y_30;
  t = n_203(t);
  return(t);
}
static ATerm x_16 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm c_31, ATerm b_31, ATerm t)
{
  t = m_118(t);
  {
    static ATerm b_27 (ATerm t)
    {
      ATerm r_203 = NULL;
      r_203 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_31, r_203);
      t = l_118(t);
      return(t);
    }
    t = fetch_1_0(b_27, t);
  }
  t = b_31;
  return(t);
}
static ATerm y_16 (ATerm d_118 (ATerm), ATerm w_30, ATerm v_30, ATerm t)
{
  static ATerm h_204 (ATerm t)
  {
    ATerm c_204 = NULL,d_204 = NULL,e_204 = NULL;
    c_204 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_204;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_204 = ATgetFirst((ATermList) t);
            e_204 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_80 = t;
          int x_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_204;
              {
                static ATerm c_27 (ATerm t)
                {
                  t = v_30;
                  return(t);
                }
                t = x_16(d_118, c_27, d_204, e_204, t);
              }
              t = h_204(t);
              LocalPopChoice(x_80);
            }
          else
            {
              t = w_80;
              {
                ATerm f_82 = NULL,i_82 = NULL,w_25 = NULL;
                t = SSLgetAnnotations(c_204);
                f_82 = t;
                t = e_204;
                t = h_204(t);
                i_82 = t;
                t = (ATerm) ATinsert(CheckATermList(i_82), d_204);
                w_25 = t;
                t = SSLsetAnnotations(w_25, f_82);
              }
            }
        }
      }
    return(t);
  }
  t = w_30;
  t = h_204(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm t)
{
  static ATerm p_204 (ATerm t)
  {
    ATerm y_80 = t;
    int z_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_116(t);
        LocalPopChoice(z_80);
      }
    else
      {
        t = y_80;
        {
          ATerm j_204 = NULL,k_204 = NULL,l_204 = NULL,m_204 = NULL,n_204 = NULL,o_204 = NULL,a_26 = NULL;
          t = i_116(t);
          o_204 = t;
          if(match_cons(t, sym__2))
            {
              k_204 = ATgetArgument(t, 0);
              l_204 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_204);
          j_204 = t;
          t = k_204;
          t = k_116(t);
          m_204 = t;
          t = l_204;
          t = p_204(t);
          n_204 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_204, n_204);
          a_26 = t;
          t = SSLsetAnnotations(a_26, j_204);
          t = j_116(t);
        }
      }
    return(t);
  }
  t = p_204(t);
  return(t);
}
static ATerm d_27 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_81 = ATgetArgument(t, 0);
      if(((ATgetType(a_81) != AT_LIST) || !(ATisEmpty(a_81))))
        _fail(t);
      {
        ATerm b_81 = ATgetArgument(t, 1);
        if(((ATgetType(b_81) != AT_LIST) || !(ATisEmpty(b_81))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_27 (ATerm t)
{
  ATerm w_204 = NULL,x_204 = NULL,y_204 = NULL,z_204 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_81 = ATgetArgument(t, 0);
      if(((ATgetType(c_81) == AT_LIST) && !(ATisEmpty(c_81))))
        {
          w_204 = ATgetFirst((ATermList) c_81);
          x_204 = (ATerm) ATgetNext((ATermList) c_81);
        }
      else
        _fail(t);
      {
        ATerm e_81 = ATgetArgument(t, 1);
        if(((ATgetType(e_81) == AT_LIST) && !(ATisEmpty(e_81))))
          {
            y_204 = ATgetFirst((ATermList) e_81);
            z_204 = (ATerm) ATgetNext((ATermList) e_81);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_204, y_204), (ATerm) ATmakeAppl(sym__2, x_204, z_204));
  return(t);
}
static ATerm h_27 (ATerm t)
{
  ATerm a_205 = NULL,b_205 = NULL;
  if(match_cons(t, sym__2))
    {
      a_205 = ATgetArgument(t, 0);
      b_205 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_205), a_205);
  return(t);
}
static ATerm d_17 (ATerm w_621, ATerm b_622, ATerm z_58, ATerm t)
{
  ATerm r_204 = NULL,s_204 = NULL,t_204 = NULL,u_204 = NULL;
  t = SSL_explode_term(b_622);
  if(match_cons(t, sym__2))
    {
      r_204 = ATgetArgument(t, 0);
      t_204 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_621);
  if(match_cons(t, sym__2))
    {
      if((r_204 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_204 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_204, t_204);
  t = genzip_4_0(d_27, e_27, h_27, _id, t);
  u_204 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_204, z_58);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t)
{
  static ATerm d_205 (ATerm t)
  {
    ATerm g_81 = t;
    int h_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_107(t);
        LocalPopChoice(h_81);
      }
    else
      {
        t = g_81;
        t = k_107(t);
        t = d_205(t);
      }
    return(t);
  }
  t = d_205(t);
  return(t);
}
ATerm for_3_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t)
{
  t = m_107(t);
  t = while_not_2_0(n_107, o_107, t);
  return(t);
}
static ATerm j_27 (ATerm t)
{
  ATerm k_205 = NULL;
  k_205 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_205);
  return(t);
}
static ATerm l_27 (ATerm t)
{
  ATerm l_205 = NULL,m_205 = NULL,n_205 = NULL,o_205 = NULL,d_26 = NULL;
  o_205 = t;
  if(match_cons(t, sym__2))
    {
      m_205 = ATgetArgument(t, 0);
      n_205 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_205);
  l_205 = t;
  t = n_205;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_205, n_205);
  d_26 = t;
  t = SSLsetAnnotations(d_26, l_205);
  return(t);
}
static ATerm p_27 (ATerm t)
{
  ATerm h_206 = NULL,i_206 = NULL,j_206 = NULL,k_206 = NULL,l_206 = NULL;
  h_206 = t;
  if(match_cons(t, sym__2))
    {
      i_206 = ATgetArgument(t, 0);
      j_206 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_206;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_206 = ATgetFirst((ATermList) t);
      l_206 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_81 = t;
        int j_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_206(i_206, j_206, h_206, t);
            LocalPopChoice(j_81);
          }
        else
          {
            t = i_81;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_206), k_206), l_206);
          }
      }
    }
  else
    {
      t = v_206(i_206, j_206, h_206, t);
    }
  return(t);
}
static ATerm v_206 (ATerm p_205, ATerm q_205, ATerm r_205, ATerm t)
{
  ATerm s_205 = NULL,v_205 = NULL,e_26 = NULL,y_205 = NULL,z_205 = NULL,a_206 = NULL,b_206 = NULL;
  t = SSLgetAnnotations(r_205);
  s_205 = t;
  t = q_205;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_205 = ATgetFirst((ATermList) t);
      b_206 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_205;
  if(match_cons(t, sym__2))
    {
      z_205 = ATgetArgument(t, 0);
      a_206 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_81 = t;
    int m_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_206;
        if((z_205 != t))
          {
            _fail(t);
          }
        t = b_206;
        LocalPopChoice(m_81);
      }
    else
      {
        t = k_81;
        t = q_205;
        t = d_17(z_205, a_206, b_206, t);
      }
  }
  v_205 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_205, v_205);
  e_26 = t;
  t = SSLsetAnnotations(e_26, s_205);
  return(t);
}
static ATerm s_27 (ATerm t)
{
  ATerm u_206 = NULL;
  if(match_cons(t, sym__2))
    {
      u_206 = ATgetArgument(t, 0);
      if((u_206 != ATgetArgument(t, 1)))
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
  ATerm o_81 = t;
  int p_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_27, l_27, p_27, t);
      LocalPopChoice(p_81);
    }
  else
    {
      t = o_81;
      {
        ATerm p_206 = NULL,q_206 = NULL,r_206 = NULL;
        p_206 = t;
        if(match_cons(t, sym__2))
          {
            q_206 = ATgetArgument(t, 0);
            r_206 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_206;
        t = y_16(s_27, q_206, r_206, t);
      }
    }
  return(t);
}
static ATerm u_27 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_27 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  ATerm s_82 = NULL,t_82 = NULL;
  if(match_cons(t, sym__2))
    {
      s_82 = ATgetArgument(t, 0);
      t_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_16(b_28, s_82, t_82, t);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  ATerm u_82 = NULL;
  if(match_cons(t, sym__2))
    {
      u_82 = ATgetArgument(t, 0);
      if((u_82 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL;
  if(match_cons(t, sym__2))
    {
      b_83 = ATgetArgument(t, 0);
      c_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_16(r_28, b_83, c_83, t);
  return(t);
}
static ATerm r_28 (ATerm t)
{
  ATerm d_83 = NULL;
  if(match_cons(t, sym__2))
    {
      d_83 = ATgetArgument(t, 0);
      if((d_83 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm j_207 (ATerm t)
  {
    ATerm q_81 = t;
    int r_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_135(t);
        LocalPopChoice(r_81);
      }
    else
      {
        t = q_81;
        {
          ATerm s_81 = t;
          int t_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_206 = NULL,y_206 = NULL,n_82 = NULL,o_82 = NULL;
              x_206 = t;
              t = y_135(t);
              y_206 = t;
              t = x_206;
              {
                static ATerm t_27 (ATerm t)
                {
                  ATerm a_207 = NULL;
                  t = j_207(t);
                  a_207 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_207, y_206);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_135(t_27, j_207, u_27, t);
              }
              o_82 = t;
              t = SSL_explode_term(o_82);
              if(match_cons(t, sym__2))
                {
                  ATerm v_81 = ATgetArgument(t, 0);
                  n_82 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_82;
              t = foldr_3_0(v_27, a_28, _id, t);
              LocalPopChoice(t_81);
            }
          else
            {
              t = s_81;
              {
                ATerm w_82 = NULL,x_82 = NULL;
                x_82 = t;
                t = SSL_explode_term(x_82);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_81 = ATgetArgument(t, 0);
                    w_82 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_82;
                t = foldr_3_0(i_28, q_28, j_207, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_207(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  static ATerm s_28 (ATerm t)
  {
    t = bottomup_1_0(t_107, t);
    return(t);
  }
  t = SRTS_all(s_28, t);
  t = t_107(t);
  return(t);
}
static ATerm g_17 (ATerm y_54, ATerm z_54, ATerm t)
{
  ATerm k_207 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_54, z_54);
  t = b_18(y_54, z_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_207 = ATgetFirst((ATermList) t);
      {
        ATerm y_81 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_207;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm y_207 = NULL,z_207 = NULL;
  y_207 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_207 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_81 = t;
    int a_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_83 = NULL;
        t = term_b_82;
        v_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_82, y_207);
        t = g_17(v_83, y_207, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_82 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_82) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, z_207, (ATerm) ATempty);
        LocalPopChoice(a_82);
      }
    else
      {
        t = z_81;
        {
          ATerm n_84 = NULL;
          t = term_b_82;
          n_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_82, y_207);
          t = g_17(n_84, y_207, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_82 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_82) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, z_207, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  static ATerm c_208 (ATerm t)
  {
    ATerm e_82 = t;
    int g_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_109(t);
        LocalPopChoice(g_82);
      }
    else
      {
        t = e_82;
        t = SRTS_all(c_208, t);
      }
    return(t);
  }
  t = c_208(t);
  return(t);
}
static ATerm h_17 (ATerm r_126 (ATerm), ATerm a_45, ATerm y_44, ATerm t)
{
  ATerm d_208 = NULL,e_208 = NULL,f_208 = NULL,g_208 = NULL,h_208 = NULL,i_208 = NULL;
  g_208 = t;
  t = r_126(t);
  d_208 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_208, a_45, y_44);
  t = c_18(d_208, a_45, y_44, t);
  {
    ATerm h_82 = t;
    int j_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_208 = NULL;
        t = term_k_82;
        j_208 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_208, term_k_82);
        t = b_18(d_208, j_208, t);
        LocalPopChoice(j_82);
      }
    else
      {
        t = h_82;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_208 = ATgetFirst((ATermList) t);
      f_208 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_82;
  h_208 = t;
  t = (ATerm) ATinsert(CheckATermList(f_208), (ATerm) ATinsert(CheckATermList(e_208), a_45));
  i_208 = t;
  t = SSL_table_put(d_208, h_208, i_208);
  t = g_208;
  return(t);
}
static ATerm t_28 (ATerm t)
{
  t = term_b_82;
  return(t);
}
static ATerm u_28 (ATerm t)
{
  t = term_b_82;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm n_208 = NULL,p_208 = NULL,q_208 = NULL,r_208 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      p_208 = ATgetArgument(t, 0);
      q_208 = ATgetArgument(t, 1);
      n_208 = ATgetArgument(t, 2);
      {
        ATerm u_208 = NULL,v_208 = NULL;
        t = q_208;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, p_208);
        u_208 = t;
        t = term_m_82;
        v_208 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_208), term_m_82);
        t = h_17(t_28, u_208, v_208, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, p_208, (ATerm)ATempty, n_208);
      }
    }
  else
    {
      ATerm y_208 = NULL,z_208 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          p_208 = ATgetArgument(t, 0);
          q_208 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_208;
      if(match_cons(t, sym_ConstType_1))
        {
          r_208 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_208);
      y_208 = t;
      t = term_q_82;
      z_208 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_208), term_q_82);
      t = h_17(u_28, y_208, z_208, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_208, (ATerm) ATmakeAppl(sym_ConstType_1, r_208));
    }
  return(t);
}
static ATerm i_17 (ATerm s_54, ATerm t_54, ATerm t)
{
  ATerm d_209 = NULL,e_209 = NULL;
  e_209 = t;
  {
    ATerm r_82 = t;
    int v_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
        t = b_18(s_54, t_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_82 = ATgetFirst((ATermList) t);
            d_209 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_82);
        t = SSL_table_put(s_54, t_54, d_209);
        t = (ATerm) ATmakeAppl(sym__3, s_54, t_54, d_209);
      }
    else
      {
        t = r_82;
        t = SSL_table_remove(s_54, t_54);
        t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
      }
  }
  t = e_209;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_126 (ATerm), ATerm t)
{
  ATerm f_209 = NULL,g_209 = NULL,h_209 = NULL,i_209 = NULL,j_209 = NULL;
  i_209 = t;
  t = o_126(t);
  h_209 = t;
  {
    ATerm z_82 = t;
    int a_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_209 = NULL;
        t = term_k_82;
        k_209 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_209, term_k_82);
        t = b_18(h_209, k_209, t);
        LocalPopChoice(a_83);
      }
    else
      {
        t = z_82;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_209 = ATgetFirst((ATermList) t);
      f_209 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_82;
  j_209 = t;
  t = SSL_table_put(h_209, j_209, f_209);
  t = g_209;
  {
    static ATerm w_28 (ATerm t)
    {
      ATerm l_209 = NULL;
      l_209 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_209, l_209);
      t = i_17(h_209, l_209, t);
      return(t);
    }
    t = map_1_0(w_28, t);
  }
  t = i_209;
  return(t);
}
ATerm restore_always_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t)
{
  ATerm e_83 = t;
  int f_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_106(t);
      t = p_106(t);
      LocalPopChoice(f_83);
    }
  else
    {
      t = e_83;
      t = p_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_126 (ATerm), ATerm t)
{
  ATerm n_209 = NULL,o_209 = NULL,p_209 = NULL,q_209 = NULL,r_209 = NULL;
  o_209 = t;
  t = n_126(t);
  n_209 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_209, term_k_82);
  {
    ATerm g_83 = t;
    int h_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_209 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_83 = ATgetArgument(t, 0);
            ATerm j_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_82;
        v_209 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_209, term_k_82);
        t = b_18(n_209, v_209, t);
        LocalPopChoice(h_83);
      }
    else
      {
        t = g_83;
        t = (ATerm) ATempty;
      }
  }
  p_209 = t;
  t = term_k_82;
  q_209 = t;
  t = (ATerm) ATinsert(CheckATermList(p_209), (ATerm) ATempty);
  r_209 = t;
  t = SSL_table_put(n_209, q_209, r_209);
  t = o_209;
  return(t);
}
ATerm scope_2_0 (ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm t)
{
  static ATerm x_28 (ATerm t)
  {
    t = end_scope_1_0(p_126, t);
    return(t);
  }
  t = begin_scope_1_0(p_126, t);
  t = restore_always_2_0(q_126, x_28, t);
  return(t);
}
static ATerm a_29 (ATerm t)
{
  t = term_b_82;
  return(t);
}
static ATerm b_29 (ATerm t)
{
  ATerm a_210 = NULL,b_210 = NULL,c_210 = NULL,d_210 = NULL,r_26 = NULL;
  d_210 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_210 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_210);
  a_210 = t;
  t = b_210;
  t = map_1_0(c_29, t);
  c_210 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_210);
  r_26 = t;
  t = SSLsetAnnotations(r_26, a_210);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm c_29 (ATerm t)
{
  ATerm q_210 = NULL,r_210 = NULL;
  r_210 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      q_210 = ATgetArgument(t, 0);
      {
        ATerm k_83 = t;
        int l_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_85 = NULL,f_85 = NULL,j_26 = NULL;
            t = SSLgetAnnotations(r_210);
            b_85 = t;
            t = q_210;
            t = map_1_0(d_29, t);
            f_85 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, f_85);
            j_26 = t;
            t = SSLsetAnnotations(j_26, b_85);
            LocalPopChoice(l_83);
          }
        else
          {
            t = k_83;
            t = r_210;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          q_210 = ATgetArgument(t, 0);
          {
            ATerm m_83 = t;
            int n_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_87 = NULL,l_87 = NULL,m_26 = NULL;
                t = SSLgetAnnotations(r_210);
                j_87 = t;
                t = q_210;
                t = map_1_0(e_29, t);
                l_87 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, l_87);
                m_26 = t;
                t = SSLsetAnnotations(m_26, j_87);
                LocalPopChoice(n_83);
              }
            else
              {
                t = m_83;
                t = r_210;
              }
          }
        }
      else
        {
          t = r_210;
        }
    }
  return(t);
}
static ATerm d_29 (ATerm t)
{
  ATerm o_83 = t;
  int p_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(p_83);
    }
  else
    {
      t = o_83;
    }
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm q_83 = t;
  int r_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(r_83);
    }
  else
    {
      t = q_83;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(a_29, b_29, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_210 = NULL,z_210 = NULL,a_211 = NULL;
  y_210 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_210;
    }
  else
    {
      static ATerm f_29 (ATerm t)
      {
        t = not_null(a_211);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_210 = ATgetFirst((ATermList) t);
          if(((a_211 != NULL) && (a_211 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_211 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_210;
      t = at_end_1_0(f_29, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm l_121 (ATerm), ATerm t)
{
  ATerm p_211 = NULL,q_211 = NULL,r_211 = NULL;
  p_211 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_211;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_211 = ATgetFirst((ATermList) t);
          r_211 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_83 = t;
        int t_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_88 = NULL,p_88 = NULL,r_88 = NULL,v_26 = NULL;
            t = SSLgetAnnotations(p_211);
            g_88 = t;
            t = q_211;
            t = l_121(t);
            p_88 = t;
            t = r_211;
            t = filter_1_0(l_121, t);
            r_88 = t;
            t = (ATerm) ATinsert(CheckATermList(r_88), p_88);
            v_26 = t;
            t = SSLsetAnnotations(v_26, g_88);
            LocalPopChoice(t_83);
          }
        else
          {
            t = s_83;
            t = r_211;
            t = filter_1_0(l_121, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  static ATerm h_212 (ATerm t)
  {
    ATerm e_212 = NULL,f_212 = NULL,g_212 = NULL;
    g_212 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_212 = ATgetFirst((ATermList) t);
        f_212 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_89 = NULL,i_89 = NULL,i_27 = NULL;
          t = SSLgetAnnotations(g_212);
          f_89 = t;
          t = f_212;
          t = h_212(t);
          i_89 = t;
          t = (ATerm) ATinsert(CheckATermList(i_89), e_212);
          i_27 = t;
          t = SSLsetAnnotations(i_27, f_89);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_212;
        t = u_114(t);
      }
    return(t);
  }
  t = h_212(t);
  return(t);
}
static ATerm t_212 (ATerm l_212, ATerm t)
{
  ATerm m_212 = NULL;
  t = SSL_explode_term(l_212);
  if(match_cons(t, sym__2))
    {
      ATerm u_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_212 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_212;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_212 = NULL,p_212 = NULL,q_212 = NULL;
  q_212 = t;
  if(match_cons(t, sym__2))
    {
      o_212 = ATgetArgument(t, 0);
      p_212 = ATgetArgument(t, 1);
      {
        ATerm w_83 = t;
        int x_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_29 (ATerm t)
            {
              t = p_212;
              return(t);
            }
            t = o_212;
            t = at_end_1_0(g_29, t);
            LocalPopChoice(x_83);
          }
        else
          {
            t = w_83;
            t = t_212(q_212, t);
          }
      }
    }
  else
    {
      t = t_212(q_212, t);
    }
  return(t);
}
static ATerm l_17 (ATerm j_143, ATerm f_143, ATerm t)
{
  ATerm u_212 = NULL,v_212 = NULL;
  static ATerm j_29 (ATerm t)
  {
    ATerm w_212 = NULL,x_212 = NULL,y_212 = NULL,z_212 = NULL;
    z_212 = t;
    t = SSL_explode_term(z_212);
    if(match_cons(t, sym__2))
      {
        if(((u_212 != NULL) && (u_212 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_212 = ATgetArgument(t, 0);
        {
          ATerm y_83 = ATgetArgument(t, 1);
          if(((ATgetType(y_83) == AT_LIST) && !(ATisEmpty(y_83))))
            {
              w_212 = ATgetFirst((ATermList) y_83);
              {
                ATerm z_83 = (ATerm) ATgetNext((ATermList) y_83);
                if(((ATgetType(z_83) != AT_LIST) || !(ATisEmpty(z_83))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_212, not_null(v_212));
    t = conc_0_0(t);
    x_212 = t;
    t = (ATerm) ATinsert(ATempty, x_212);
    y_212 = t;
    t = SSL_mkterm(u_212, y_212);
    return(t);
  }
  t = SSL_explode_term(j_143);
  if(match_cons(t, sym__2))
    {
      if(((u_212 != NULL) && (u_212 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_212 = ATgetArgument(t, 0);
      {
        ATerm a_84 = ATgetArgument(t, 1);
        if(((ATgetType(a_84) == AT_LIST) && !(ATisEmpty(a_84))))
          {
            if(((v_212 != NULL) && (v_212 != ATgetFirst((ATermList) a_84))))
              _fail(ATgetFirst((ATermList) a_84));
            else
              v_212 = ATgetFirst((ATermList) a_84);
            {
              ATerm b_84 = (ATerm) ATgetNext((ATermList) a_84);
              if(((ATgetType(b_84) != AT_LIST) || !(ATisEmpty(b_84))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_143;
  t = fetch_1_0(j_29, t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm t)
{
  ATerm b_213 = NULL,c_213 = NULL,d_213 = NULL;
  b_213 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_213;
      t = j_120(t);
    }
  else
    {
      ATerm g_213 = NULL,h_213 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_213 = ATgetFirst((ATermList) t);
          d_213 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_213;
      t = l_120(t);
      g_213 = t;
      t = d_213;
      t = foldr_3_0(j_120, k_120, l_120, t);
      h_213 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_213, h_213);
      t = k_120(t);
    }
  return(t);
}
static ATerm k_29 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_84), term_d_84), term_c_84);
  return(t);
}
static ATerm l_29 (ATerm t)
{
  ATerm o_213 = NULL,p_213 = NULL;
  if(match_cons(t, sym__2))
    {
      o_213 = ATgetArgument(t, 0);
      p_213 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_17(o_213, p_213, t);
  return(t);
}
static ATerm m_29 (ATerm t)
{
  ATerm q_213 = NULL,r_213 = NULL;
  r_213 = t;
  if(match_cons(t, sym_Signature_1))
    {
      q_213 = ATgetArgument(t, 0);
      {
        ATerm f_84 = t;
        int g_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_213 = NULL;
            t = q_213;
            t = filter_1_0(n_29, t);
            t = concat_0_0(t);
            t_213 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, t_213);
            LocalPopChoice(g_84);
          }
        else
          {
            t = f_84;
            t = r_213;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          q_213 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, q_213);
        }
      else
        {
          t = r_213;
        }
    }
  return(t);
}
static ATerm n_29 (ATerm t)
{
  ATerm u_213 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      u_213 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_213;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm k_213 = NULL,l_213 = NULL,m_213 = NULL,n_213 = NULL,k_27 = NULL;
  n_213 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_213 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_213);
  k_213 = t;
  t = l_213;
  t = foldr_3_0(k_29, l_29, m_29, t);
  m_213 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_213);
  k_27 = t;
  t = SSLsetAnnotations(k_27, k_213);
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm h_84 = t;
  int i_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(i_84);
    }
  else
    {
      t = h_84;
    }
  return(t);
}
static ATerm p_29 (ATerm t)
{
  ATerm b_215 = NULL,c_215 = NULL,d_215 = NULL,e_215 = NULL,f_215 = NULL;
  f_215 = t;
  if(match_cons(t, sym_LRule_1))
    {
      e_215 = ATgetArgument(t, 0);
      t = e_215;
      if(match_cons(t, sym_Rule_3))
        {
          b_215 = ATgetArgument(t, 0);
          c_215 = ATgetArgument(t, 1);
          d_215 = ATgetArgument(t, 2);
          {
            ATerm j_84 = t;
            int k_84 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_215 = NULL;
                t = b_215;
                t = free_vars_3_0(q_29, r_29, tboundin_3_0, t);
                j_215 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, j_215, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, b_215, c_215, d_215)));
                LocalPopChoice(k_84);
              }
            else
              {
                t = j_84;
                t = f_215;
              }
          }
        }
      else
        {
          t = f_215;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          e_215 = ATgetArgument(t, 0);
          {
            ATerm l_84 = t;
            int m_84 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_216 = NULL;
                t = e_215;
                t = free_vars_3_0(x_29, y_29, tboundin_3_0, t);
                l_216 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, l_216, e_215);
                LocalPopChoice(m_84);
              }
            else
              {
                t = l_84;
                t = f_215;
              }
          }
        }
      else
        {
          t = f_215;
        }
    }
  return(t);
}
static ATerm q_29 (ATerm t)
{
  ATerm k_215 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_215 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_215);
  return(t);
}
static ATerm r_29 (ATerm t)
{
  ATerm o_84 = t;
  int p_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_84);
    }
  else
    {
      t = o_84;
      {
        ATerm q_84 = t;
        int r_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_84);
          }
        else
          {
            t = q_84;
            {
              ATerm m_215 = NULL,n_215 = NULL,o_215 = NULL,p_215 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_215 = ATgetArgument(t, 0);
                  n_215 = ATgetArgument(t, 1);
                  o_215 = ATgetArgument(t, 2);
                  p_215 = ATgetArgument(t, 3);
                  t = o_215;
                  t = map_1_0(t_29, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_215 = ATgetArgument(t, 0);
                      n_215 = ATgetArgument(t, 1);
                      o_215 = ATgetArgument(t, 2);
                      p_215 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_215;
                  t = map_1_0(w_29, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_29 (ATerm t)
{
  ATerm w_215 = NULL;
  ATerm s_84 = t;
  int t_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_215 = ATgetArgument(t, 0);
          {
            ATerm u_84 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_84);
      t = w_215;
    }
  else
    {
      t = s_84;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_215 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_215;
    }
  return(t);
}
static ATerm w_29 (ATerm t)
{
  ATerm f_216 = NULL;
  ATerm v_84 = t;
  int w_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_216 = ATgetArgument(t, 0);
          {
            ATerm x_84 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_84);
      t = f_216;
    }
  else
    {
      t = v_84;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_216 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_216;
    }
  return(t);
}
static ATerm x_29 (ATerm t)
{
  ATerm m_216 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_216 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_216);
  return(t);
}
static ATerm y_29 (ATerm t)
{
  ATerm y_84 = t;
  int z_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_84);
    }
  else
    {
      t = y_84;
      {
        ATerm a_85 = t;
        int c_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_85);
          }
        else
          {
            t = a_85;
            {
              ATerm o_216 = NULL,p_216 = NULL,q_216 = NULL,r_216 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_216 = ATgetArgument(t, 0);
                  p_216 = ATgetArgument(t, 1);
                  q_216 = ATgetArgument(t, 2);
                  r_216 = ATgetArgument(t, 3);
                  t = q_216;
                  t = map_1_0(z_29, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_216 = ATgetArgument(t, 0);
                      p_216 = ATgetArgument(t, 1);
                      q_216 = ATgetArgument(t, 2);
                      r_216 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_216;
                  t = map_1_0(b_30, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_29 (ATerm t)
{
  ATerm y_216 = NULL;
  ATerm d_85 = t;
  int e_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_216 = ATgetArgument(t, 0);
          {
            ATerm g_85 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_85);
      t = y_216;
    }
  else
    {
      t = d_85;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_216 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_216;
    }
  return(t);
}
static ATerm b_30 (ATerm t)
{
  ATerm h_217 = NULL;
  ATerm h_85 = t;
  int i_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_217 = ATgetArgument(t, 0);
          {
            ATerm j_85 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_85);
      t = h_217;
    }
  else
    {
      t = h_85;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_217 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_217;
    }
  return(t);
}
static ATerm c_30 (ATerm t)
{
  t = Cons_2_0(d_30, l_30, t);
  return(t);
}
static ATerm d_30 (ATerm t)
{
  ATerm n_217 = NULL,o_217 = NULL,p_217 = NULL,q_217 = NULL,m_27 = NULL;
  q_217 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_217 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_217);
  n_217 = t;
  t = o_217;
  t = topdown_1_0(m_30, t);
  t = listtd_1_0(n_30, t);
  p_217 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_217);
  m_27 = t;
  t = SSLsetAnnotations(m_27, n_217);
  return(t);
}
static ATerm l_30 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm m_30 (ATerm t)
{
  ATerm k_85 = t;
  int l_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(l_85);
    }
  else
    {
      t = k_85;
    }
  return(t);
}
static ATerm n_30 (ATerm t)
{
  t = repeat_2_0(o_30, _id, t);
  return(t);
}
static ATerm o_30 (ATerm t)
{
  ATerm t_217 = NULL,u_217 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_217 = ATgetFirst((ATermList) t);
      u_217 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_16(t_217, u_217, t);
  return(t);
}
static ATerm q_30 (ATerm t)
{
  ATerm m_85 = t;
  int n_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(n_85);
    }
  else
    {
      t = m_85;
    }
  return(t);
}
static ATerm u_30 (ATerm t)
{
  ATerm y_217 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      y_217 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, y_217)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm n_214 = NULL,o_214 = NULL,p_214 = NULL,q_214 = NULL,r_214 = NULL,s_214 = NULL,t_214 = NULL,u_214 = NULL,v_214 = NULL,w_214 = NULL,x_214 = NULL,y_214 = NULL,r_27 = NULL,o_27 = NULL,n_27 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(o_29, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(p_29, t);
  y_214 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_214 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_214);
  r_214 = t;
  t = s_214;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_214 = ATgetFirst((ATermList) t);
      v_214 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_214);
  t_214 = t;
  t = v_214;
  t = Cons_2_0(_id, c_30, t);
  w_214 = t;
  t = (ATerm) ATinsert(CheckATermList(w_214), u_214);
  n_27 = t;
  t = SSLsetAnnotations(n_27, t_214);
  x_214 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_214);
  o_27 = t;
  t = SSLsetAnnotations(o_27, r_214);
  t = topdown_1_0(q_30, t);
  q_214 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_214 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_214);
  n_214 = t;
  t = o_214;
  t = fetch_1_0(u_30, t);
  p_214 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_214);
  r_27 = t;
  t = SSLsetAnnotations(r_27, n_214);
  return(t);
}
ATerm at_last_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  static ATerm u_218 (ATerm t)
  {
    ATerm r_218 = NULL,s_218 = NULL,t_218 = NULL;
    r_218 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_218 = ATgetFirst((ATermList) t);
        t_218 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_85 = t;
      int p_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_89 = NULL,x_27 = NULL;
          t = SSLgetAnnotations(r_218);
          v_89 = t;
          t = t_218;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(t_218), s_218);
          x_27 = t;
          t = SSLsetAnnotations(x_27, v_89);
          t = f_115(t);
          LocalPopChoice(p_85);
        }
      else
        {
          t = o_85;
          {
            ATerm r_90 = NULL,v_90 = NULL,y_27 = NULL;
            t = SSLgetAnnotations(r_218);
            r_90 = t;
            t = t_218;
            t = u_218(t);
            v_90 = t;
            t = (ATerm) ATinsert(CheckATermList(v_90), s_218);
            y_27 = t;
            t = SSLsetAnnotations(y_27, r_90);
          }
        }
    }
    return(t);
  }
  t = u_218(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm a_219 = NULL,b_219 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_219 = ATgetFirst((ATermList) t);
      b_219 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_219;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_219;
    }
  else
    {
      t = b_219;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm j_219 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_85 = ATgetFirst((ATermList) t);
      j_219 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_219;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm t)
{
  ATerm g_219 = NULL,h_219 = NULL,i_219 = NULL;
  g_219 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_219 = ATgetFirst((ATermList) t);
      {
        ATerm r_85 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_219;
  t = i_123(t);
  t = g_219;
  t = last_0_0(t);
  t = j_123(t);
  t = g_219;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_85 = ATgetFirst((ATermList) t);
      h_219 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_219;
  t = at_last_1_0(h_31, t);
  return(t);
}
static ATerm j_31 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm m_31 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm n_31 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm o_31 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm p_31 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm q_31 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm m_225 = NULL,n_225 = NULL,o_225 = NULL,p_225 = NULL,q_225 = NULL;
  o_225 = t;
  if(match_cons(t, sym_Real_1))
    {
      p_225 = ATgetArgument(t, 0);
      {
        ATerm h_91 = NULL;
        t = SSL_string_to_real(p_225);
        h_91 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, h_91);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          p_225 = ATgetArgument(t, 0);
          {
            ATerm o_91 = NULL;
            t = SSL_string_to_int(p_225);
            o_91 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, o_91);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              p_225 = ATgetArgument(t, 0);
              q_225 = ATgetArgument(t, 1);
              n_225 = ATgetArgument(t, 2);
              t = SSL_is_string(n_225);
              t = (ATerm) ATmakeAppl(sym_Con_3, p_225, q_225, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_225), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  p_225 = ATgetArgument(t, 0);
                  q_225 = ATgetArgument(t, 1);
                  n_225 = ATgetArgument(t, 2);
                  {
                    ATerm n_92 = NULL;
                    t = p_225;
                    {
                      ATerm t_85 = t;
                      int u_85 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_92 = NULL;
                          t = SSL_explode_string(p_225);
                          t = unquote_chars_2_0(j_31, m_31, t);
                          o_92 = t;
                          t = SSL_implode_string(o_92);
                          LocalPopChoice(u_85);
                        }
                      else
                        {
                          t = t_85;
                        }
                    }
                    n_92 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, n_92, q_225, n_225);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      p_225 = ATgetArgument(t, 0);
                      q_225 = ATgetArgument(t, 1);
                      {
                        ATerm k_93 = NULL;
                        t = p_225;
                        {
                          ATerm v_85 = t;
                          int w_85 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_93 = NULL;
                              t = SSL_explode_string(p_225);
                              t = unquote_chars_2_0(n_31, o_31, t);
                              l_93 = t;
                              t = SSL_implode_string(l_93);
                              LocalPopChoice(w_85);
                            }
                          else
                            {
                              t = v_85;
                            }
                        }
                        k_93 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, k_93, (ATerm)ATempty, q_225);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          p_225 = ATgetArgument(t, 0);
                          {
                            ATerm a_94 = NULL;
                            t = p_225;
                            {
                              ATerm x_85 = t;
                              int y_85 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm b_94 = NULL;
                                  t = SSL_explode_string(p_225);
                                  t = unquote_chars_2_0(p_31, q_31, t);
                                  b_94 = t;
                                  t = SSL_implode_string(b_94);
                                  LocalPopChoice(y_85);
                                }
                              else
                                {
                                  t = x_85;
                                }
                            }
                            a_94 = t;
                            t = (ATerm) ATmakeAppl(sym_PrimT_3, a_94, (ATerm)ATempty, (ATerm) ATempty);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              p_225 = ATgetArgument(t, 0);
                              {
                                ATerm j_94 = NULL,l_94 = NULL,m_94 = NULL,c_28 = NULL;
                                t = SSLgetAnnotations(o_225);
                                j_94 = t;
                                t = SSL_explode_string(p_225);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm z_85 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(z_85) != AT_INT) || (ATgetInt((ATermInt) z_85) != 39)))
                                      _fail(t);
                                    l_94 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(l_94);
                                m_94 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_94);
                                c_28 = t;
                                t = SSLsetAnnotations(c_28, j_94);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  p_225 = ATgetArgument(t, 0);
                                  q_225 = ATgetArgument(t, 1);
                                  n_225 = ATgetArgument(t, 2);
                                  m_225 = ATgetArgument(t, 3);
                                  {
                                    ATerm b_95 = NULL,q_95 = NULL,r_95 = NULL,d_28 = NULL;
                                    t = SSLgetAnnotations(o_225);
                                    b_95 = t;
                                    t = SSL_explode_string(p_225);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm a_86 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(a_86) != AT_INT) || (ATgetInt((ATermInt) a_86) != 39)))
                                          _fail(t);
                                        q_95 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(q_95);
                                    r_95 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, r_95, q_225, n_225, m_225);
                                    d_28 = t;
                                    t = SSLsetAnnotations(d_28, b_95);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      p_225 = ATgetArgument(t, 0);
                                      q_225 = ATgetArgument(t, 1);
                                      n_225 = ATgetArgument(t, 2);
                                      {
                                        ATerm o_96 = NULL,s_96 = NULL,x_96 = NULL,e_28 = NULL;
                                        t = SSLgetAnnotations(o_225);
                                        o_96 = t;
                                        t = SSL_explode_string(p_225);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm b_86 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(b_86) != AT_INT) || (ATgetInt((ATermInt) b_86) != 39)))
                                              _fail(t);
                                            s_96 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(s_96);
                                        x_96 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, x_96, q_225, n_225);
                                        e_28 = t;
                                        t = SSLsetAnnotations(e_28, o_96);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          p_225 = ATgetArgument(t, 0);
                                          q_225 = ATgetArgument(t, 1);
                                          n_225 = ATgetArgument(t, 2);
                                          m_225 = ATgetArgument(t, 3);
                                          {
                                            ATerm l_97 = NULL,s_97 = NULL,t_97 = NULL,j_28 = NULL;
                                            t = SSLgetAnnotations(o_225);
                                            l_97 = t;
                                            t = SSL_explode_string(p_225);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm c_86 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(c_86) != AT_INT) || (ATgetInt((ATermInt) c_86) != 39)))
                                                  _fail(t);
                                                s_97 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(s_97);
                                            t_97 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_97, q_225, n_225, m_225);
                                            j_28 = t;
                                            t = SSLsetAnnotations(j_28, l_97);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              p_225 = ATgetArgument(t, 0);
                                              q_225 = ATgetArgument(t, 1);
                                              n_225 = ATgetArgument(t, 2);
                                              {
                                                ATerm u_98 = NULL,b_99 = NULL,c_99 = NULL,k_28 = NULL;
                                                t = SSLgetAnnotations(o_225);
                                                u_98 = t;
                                                t = SSL_explode_string(p_225);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm d_86 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(d_86) != AT_INT) || (ATgetInt((ATermInt) d_86) != 39)))
                                                      _fail(t);
                                                    b_99 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(b_99);
                                                c_99 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, c_99, q_225, n_225);
                                                k_28 = t;
                                                t = SSLsetAnnotations(k_28, u_98);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  p_225 = ATgetArgument(t, 0);
                                                  q_225 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm o_99 = NULL,u_99 = NULL,y_99 = NULL,l_28 = NULL;
                                                    t = SSLgetAnnotations(o_225);
                                                    o_99 = t;
                                                    t = SSL_explode_string(p_225);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm e_86 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(e_86) != AT_INT) || (ATgetInt((ATermInt) e_86) != 39)))
                                                          _fail(t);
                                                        u_99 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(u_99);
                                                    y_99 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, y_99, q_225);
                                                    l_28 = t;
                                                    t = SSLsetAnnotations(l_28, o_99);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      p_225 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm q_100 = NULL,s_100 = NULL,t_100 = NULL,m_28 = NULL;
                                                        t = SSLgetAnnotations(o_225);
                                                        q_100 = t;
                                                        t = SSL_explode_string(p_225);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm f_86 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(f_86) != AT_INT) || (ATgetInt((ATermInt) f_86) != 39)))
                                                              _fail(t);
                                                            s_100 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(s_100);
                                                        t_100 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, t_100);
                                                        m_28 = t;
                                                        t = SSLsetAnnotations(m_28, q_100);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          p_225 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm g_101 = NULL,i_101 = NULL,l_101 = NULL,n_28 = NULL;
                                                            t = SSLgetAnnotations(o_225);
                                                            g_101 = t;
                                                            t = SSL_explode_string(p_225);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm g_86 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(g_86) != AT_INT) || (ATgetInt((ATermInt) g_86) != 39)))
                                                                  _fail(t);
                                                                i_101 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(i_101);
                                                            l_101 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, l_101);
                                                            n_28 = t;
                                                            t = SSLsetAnnotations(n_28, g_101);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              p_225 = ATgetArgument(t, 0);
                                                              q_225 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm c_102 = NULL,g_102 = NULL,h_102 = NULL,o_28 = NULL;
                                                                t = SSLgetAnnotations(o_225);
                                                                c_102 = t;
                                                                t = SSL_explode_string(p_225);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm h_86 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(h_86) != AT_INT) || (ATgetInt((ATermInt) h_86) != 39)))
                                                                      _fail(t);
                                                                    g_102 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(g_102);
                                                                h_102 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, h_102, q_225);
                                                                o_28 = t;
                                                                t = SSLsetAnnotations(o_28, c_102);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm x_102 = NULL,k_103 = NULL,l_103 = NULL,p_28 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  p_225 = ATgetArgument(t, 0);
                                                                  q_225 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(o_225);
                                                              x_102 = t;
                                                              t = SSL_explode_string(p_225);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm i_86 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(i_86) != AT_INT) || (ATgetInt((ATermInt) i_86) != 39)))
                                                                    _fail(t);
                                                                  k_103 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(k_103);
                                                              l_103 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, l_103, q_225);
                                                              p_28 = t;
                                                              t = SSLsetAnnotations(p_28, x_102);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm o_230 (ATerm z_226, ATerm a_227, ATerm t)
{
  t = z_226;
  {
    ATerm k_86 = t;
    if((PushChoice() == 0))
      {
        ATerm c_227 = NULL,d_227 = NULL,e_227 = NULL,f_227 = NULL,h_29 = NULL;
        f_227 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_227 = ATgetFirst((ATermList) t);
            e_227 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_227);
        c_227 = t;
        t = e_227;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_227), d_227);
        h_29 = t;
        t = SSLsetAnnotations(h_29, c_227);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_86;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_35, z_226);
  return(t);
}
static ATerm p_230 (ATerm g_227, ATerm h_227, ATerm t)
{
  t = g_227;
  {
    ATerm l_86 = t;
    if((PushChoice() == 0))
      {
        ATerm j_227 = NULL,k_227 = NULL,l_227 = NULL,m_227 = NULL,i_29 = NULL;
        m_227 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_227 = ATgetFirst((ATermList) t);
            l_227 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_227);
        j_227 = t;
        t = l_227;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_227), k_227);
        i_29 = t;
        t = SSLsetAnnotations(i_29, j_227);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_86;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_86, g_227);
  return(t);
}
static ATerm t_31 (ATerm t)
{
  t = term_d_73;
  return(t);
}
static ATerm u_31 (ATerm t)
{
  ATerm z_227 = NULL,a_228 = NULL,a_104 = NULL;
  z_227 = t;
  t = SSL_explode_term(z_227);
  if(match_cons(t, sym__2))
    {
      ATerm n_86 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_86) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_86 = ATgetArgument(t, 1);
        if(((ATgetType(o_86) == AT_LIST) && !(ATisEmpty(o_86))))
          {
            a_228 = ATgetFirst((ATermList) o_86);
            {
              ATerm p_86 = (ATerm) ATgetNext((ATermList) o_86);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_227);
  if(match_cons(t, sym__2))
    {
      ATerm q_86 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_86) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_86 = ATgetArgument(t, 1);
        if(((ATgetType(r_86) == AT_LIST) && !(ATisEmpty(r_86))))
          {
            ATerm s_86 = ATgetFirst((ATermList) r_86);
            ATerm t_86 = (ATerm) ATgetNext((ATermList) r_86);
            if(((ATgetType(t_86) == AT_LIST) && !(ATisEmpty(t_86))))
              {
                a_104 = ATgetFirst((ATermList) t_86);
                {
                  ATerm u_86 = (ATerm) ATgetNext((ATermList) t_86);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_54, (ATerm) ATinsert(ATinsert(ATempty, a_104), a_228));
  return(t);
}
static ATerm w_31 (ATerm t)
{
  ATerm m_228 = NULL,n_228 = NULL;
  if(match_cons(t, sym__2))
    {
      m_228 = ATgetArgument(t, 0);
      n_228 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_54, (ATerm) ATinsert(ATinsert(ATempty, n_228), m_228));
  return(t);
}
static ATerm x_31 (ATerm t)
{
  t = term_d_73;
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm p_228 = NULL,q_228 = NULL;
  if(match_cons(t, sym__2))
    {
      p_228 = ATgetArgument(t, 0);
      q_228 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_54, (ATerm) ATinsert(ATinsert(ATempty, q_228), p_228));
  return(t);
}
static ATerm a_32 (ATerm t)
{
  ATerm b_229 = NULL,c_229 = NULL;
  if(match_cons(t, sym__2))
    {
      b_229 = ATgetArgument(t, 0);
      c_229 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_86, (ATerm) ATinsert(ATinsert(ATempty, c_229), b_229));
  return(t);
}
static ATerm b_32 (ATerm t)
{
  t = term_x_86;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  ATerm e_229 = NULL,f_229 = NULL;
  if(match_cons(t, sym__2))
    {
      e_229 = ATgetArgument(t, 0);
      f_229 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_86, (ATerm) ATinsert(ATinsert(ATempty, f_229), e_229));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm n_227 = NULL,o_227 = NULL,p_227 = NULL,q_227 = NULL,r_227 = NULL,s_227 = NULL,t_227 = NULL,u_227 = NULL;
  s_227 = t;
  if(match_cons(t, sym_Anno_2))
    {
      t_227 = ATgetArgument(t, 0);
      u_227 = ATgetArgument(t, 1);
      {
        ATerm x_227 = NULL;
        t = u_227;
        t = foldr_2_0(t_31, u_31, t);
        x_227 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, t_227, x_227);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          t_227 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, t_227, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              t_227 = ATgetArgument(t, 0);
              {
                ATerm f_104 = NULL;
                t = t_227;
                {
                  ATerm y_86 = t;
                  int z_86 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_a_87;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_b_87;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_c_87;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_d_87;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_e_87;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(z_86);
                    }
                  else
                    {
                      t = y_86;
                      {
                        ATerm h_104 = NULL;
                        t = SSL_explode_string(t_227);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm i_87 = ATgetFirst((ATermList) t);
                            if(((ATgetType(i_87) != AT_INT) || (ATgetInt((ATermInt) i_87) != 39)))
                              _fail(t);
                            {
                              ATerm k_87 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(k_87) == AT_LIST) && !(ATisEmpty(k_87))))
                                {
                                  h_104 = ATgetFirst((ATermList) k_87);
                                  {
                                    ATerm m_87 = (ATerm) ATgetNext((ATermList) k_87);
                                    if(((ATgetType(m_87) == AT_LIST) && !(ATisEmpty(m_87))))
                                      {
                                        ATerm n_87 = ATgetFirst((ATermList) m_87);
                                        if(((ATgetType(n_87) != AT_INT) || (ATgetInt((ATermInt) n_87) != 39)))
                                          _fail(t);
                                        {
                                          ATerm o_87 = (ATerm) ATgetNext((ATermList) m_87);
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
                            }
                          }
                        else
                          _fail(t);
                        t = h_104;
                      }
                    }
                }
                f_104 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, f_104);
              }
            }
          else
            {
              ATerm r_87 = t;
              int s_87 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      t_227 = ATgetArgument(t, 0);
                      {
                        ATerm t_87 = ATgetArgument(t, 1);
                      }
                      r_227 = ATgetArgument(t, 2);
                      n_227 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_87);
                  t = (ATerm) ATmakeAppl(sym_Con_3, t_227, r_227, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_227), (ATerm) ATempty));
                }
              else
                {
                  t = r_87;
                  {
                    ATerm y_87 = t;
                    int z_87 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            t_227 = ATgetArgument(t, 0);
                            {
                              ATerm a_88 = ATgetArgument(t, 1);
                            }
                            r_227 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_87);
                        t = (ATerm) ATmakeAppl(sym_Con_3, t_227, r_227, term_f_88);
                      }
                    else
                      {
                        t = y_87;
                        if(match_cons(t, sym_Con1_2))
                          {
                            t_227 = ATgetArgument(t, 0);
                            u_227 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, t_227, u_227, term_f_88);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                t_227 = ATgetArgument(t, 0);
                                u_227 = ATgetArgument(t, 1);
                                {
                                  static ATerm v_31 (ATerm t)
                                  {
                                    t = u_227;
                                    return(t);
                                  }
                                  t = t_227;
                                  t = foldr_2_0(v_31, w_31, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    t_227 = ATgetArgument(t, 0);
                                    t = t_227;
                                    t = foldr_2_0(x_31, y_31, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        t_227 = ATgetArgument(t, 0);
                                        t = t_227;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            o_227 = ATgetFirst((ATermList) t);
                                            p_227 = (ATerm) ATgetNext((ATermList) t);
                                            t = p_227;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm h_88 = t;
                                                int i_88 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_230(t_227, s_227, t);
                                                    LocalPopChoice(i_88);
                                                  }
                                                else
                                                  {
                                                    t = h_88;
                                                    t = o_227;
                                                  }
                                              }
                                            else
                                              {
                                                t = o_230(t_227, s_227, t);
                                              }
                                          }
                                        else
                                          {
                                            t = o_230(t_227, s_227, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            t_227 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, t_227));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                t_227 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, t_227));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    t_227 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, t_227));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        t_227 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, t_227));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            t_227 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_227), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                t_227 = ATgetArgument(t, 0);
                                                                u_227 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_227), u_227);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    t_227 = ATgetArgument(t, 0);
                                                                    u_227 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm z_31 (ATerm t)
                                                                      {
                                                                        t = u_227;
                                                                        return(t);
                                                                      }
                                                                      t = t_227;
                                                                      t = foldr_2_0(z_31, a_32, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        t_227 = ATgetArgument(t, 0);
                                                                        t = t_227;
                                                                        t = foldr_2_0(b_32, d_32, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            t_227 = ATgetArgument(t, 0);
                                                                            u_227 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_m_86, (ATerm) ATinsert(CheckATermList(u_227), t_227));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                t_227 = ATgetArgument(t, 0);
                                                                                t = t_227;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    o_227 = ATgetFirst((ATermList) t);
                                                                                    p_227 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = p_227;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm j_88 = t;
                                                                                        int o_88 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = p_230(t_227, s_227, t);
                                                                                            LocalPopChoice(o_88);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = j_88;
                                                                                            t = o_227;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_230(t_227, s_227, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_230(t_227, s_227, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_s_88;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        t_227 = ATgetArgument(t, 0);
                                                                                        u_227 = ATgetArgument(t, 1);
                                                                                        t = u_227;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            q_227 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_t_50, (ATerm) ATinsert(ATinsert(ATempty, q_227), t_227));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            t_227 = ATgetArgument(t, 0);
                                                                                            t = t_227;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                t_227 = ATgetArgument(t, 0);
                                                                                                u_227 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, t_227, u_227, term_d_37);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    t_227 = ATgetArgument(t, 0);
                                                                                                    u_227 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, t_227, u_227, term_d_37);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        t_227 = ATgetArgument(t, 0);
                                                                                                        u_227 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, t_227, (ATerm)ATempty, u_227);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            t_227 = ATgetArgument(t, 0);
                                                                                                            u_227 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, u_227, t_227);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                t_227 = ATgetArgument(t, 0);
                                                                                                                u_227 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, t_227, u_227, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    t_227 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, t_227, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        t_227 = ATgetArgument(t, 0);
                                                                                                                        u_227 = ATgetArgument(t, 1);
                                                                                                                        r_227 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_227, u_227, (ATerm)ATempty, r_227);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            t_227 = ATgetArgument(t, 0);
                                                                                                                            u_227 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_227, (ATerm)ATempty, (ATerm)ATempty, u_227);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                t_227 = ATgetArgument(t, 0);
                                                                                                                                u_227 = ATgetArgument(t, 1);
                                                                                                                                r_227 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_227, u_227, (ATerm)ATempty, r_227);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    t_227 = ATgetArgument(t, 0);
                                                                                                                                    u_227 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_227, (ATerm)ATempty, (ATerm)ATempty, u_227);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        t_227 = ATgetArgument(t, 0);
                                                                                                                                        u_227 = ATgetArgument(t, 1);
                                                                                                                                        r_227 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, t_227, u_227, (ATerm)ATempty, r_227);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            t_227 = ATgetArgument(t, 0);
                                                                                                                                            u_227 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, t_227, (ATerm)ATempty, (ATerm)ATempty, u_227);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm t_88 = ATgetArgument(t, 0);
                                                                                                                                                u_227 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, u_227);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_2_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t)
{
  static ATerm q_230 (ATerm t)
  {
    ATerm u_88 = t;
    int z_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_106(t);
        t = q_230(t);
        LocalPopChoice(z_88);
      }
    else
      {
        t = u_88;
        t = t_106(t);
      }
    return(t);
  }
  t = q_230(t);
  return(t);
}
ATerm topdown_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  static ATerm f_32 (ATerm t)
  {
    t = topdown_1_0(s_107, t);
    return(t);
  }
  t = s_107(t);
  t = SRTS_all(f_32, t);
  return(t);
}
static ATerm h_32 (ATerm t)
{
  ATerm h_231 = NULL;
  h_231 = t;
  t = dtime_0_0(t);
  t = debug_1_0(j_32, t);
  t = h_231;
  return(t);
}
static ATerm j_32 (ATerm t)
{
  t = term_a_89;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm c_89 = t;
    int e_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(e_89);
      }
    else
      {
        t = c_89;
      }
  }
  return(t);
}
static ATerm m_32 (ATerm t)
{
  ATerm l_231 = NULL;
  l_231 = t;
  t = dtime_0_0(t);
  t = debug_1_0(n_32, t);
  t = l_231;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  t = term_g_89;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  ATerm m_231 = NULL;
  m_231 = t;
  t = dtime_0_0(t);
  t = debug_1_0(p_32, t);
  t = m_231;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  t = term_h_89;
  return(t);
}
static ATerm q_32 (ATerm t)
{
  ATerm n_231 = NULL;
  n_231 = t;
  t = dtime_0_0(t);
  t = debug_1_0(s_32, t);
  t = n_231;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_j_89;
  return(t);
}
static ATerm t_32 (ATerm t)
{
  ATerm o_231 = NULL;
  o_231 = t;
  t = dtime_0_0(t);
  t = debug_1_0(u_32, t);
  t = o_231;
  return(t);
}
static ATerm u_32 (ATerm t)
{
  t = term_k_89;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  ATerm p_231 = NULL;
  p_231 = t;
  t = dtime_0_0(t);
  t = debug_1_0(w_32, t);
  t = p_231;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  t = term_l_89;
  return(t);
}
static ATerm x_32 (ATerm t)
{
  ATerm q_231 = NULL;
  q_231 = t;
  t = dtime_0_0(t);
  t = debug_1_0(y_32, t);
  t = q_231;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  t = term_m_89;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  ATerm r_231 = NULL;
  r_231 = t;
  t = dtime_0_0(t);
  t = debug_1_0(a_33, t);
  t = r_231;
  return(t);
}
static ATerm a_33 (ATerm t)
{
  t = term_n_89;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  ATerm s_231 = NULL;
  s_231 = t;
  t = dtime_0_0(t);
  t = debug_1_0(d_33, t);
  t = s_231;
  return(t);
}
static ATerm d_33 (ATerm t)
{
  t = term_o_89;
  return(t);
}
static ATerm e_33 (ATerm t)
{
  ATerm t_231 = NULL,u_231 = NULL,v_231 = NULL,w_231 = NULL,s_29 = NULL;
  w_231 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_231 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_231);
  t_231 = t;
  t = u_231;
  t = desugar_spec_0_0(t);
  v_231 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_231);
  s_29 = t;
  t = SSLsetAnnotations(s_29, t_231);
  return(t);
}
static ATerm f_33 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm frontend_transformation_0_0 (ATerm t)
{
  ATerm t_230 = NULL,u_230 = NULL,v_230 = NULL,w_230 = NULL,x_230 = NULL,y_230 = NULL,z_230 = NULL,a_231 = NULL,b_231 = NULL,c_231 = NULL,d_231 = NULL,e_231 = NULL,f_231 = NULL,g_231 = NULL,v_29 = NULL,u_29 = NULL;
  t = if_verbose3_1_0(h_32, t);
  t = topdown_1_0(l_32, t);
  t = if_verbose3_1_0(m_32, t);
  t = normalize_spec_0_0(t);
  t = if_verbose3_1_0(o_32, t);
  t_230 = t;
  t = spec_use_def_0_0(t);
  t = t_230;
  t = if_verbose3_1_0(q_32, t);
  t = CheckConstructors_0_0(t);
  t = if_verbose3_1_0(t_32, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm p_89 = ATgetArgument(t, 0);
      if(((ATgetType(p_89) == AT_LIST) && !(ATisEmpty(p_89))))
        {
          ATerm q_89 = ATgetFirst((ATermList) p_89);
          if(match_cons(q_89, sym_Signature_1))
            {
              w_230 = ATgetArgument(q_89, 0);
            }
          else
            _fail(t);
          {
            ATerm r_89 = (ATerm) ATgetNext((ATermList) p_89);
            if(((ATgetType(r_89) == AT_LIST) && !(ATisEmpty(r_89))))
              {
                ATerm t_89 = ATgetFirst((ATermList) r_89);
                if(match_cons(t_89, sym_Overlays_1))
                  {
                    x_230 = ATgetArgument(t_89, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm u_89 = (ATerm) ATgetNext((ATermList) r_89);
                  if(((ATgetType(u_89) == AT_LIST) && !(ATisEmpty(u_89))))
                    {
                      ATerm w_89 = ATgetFirst((ATermList) u_89);
                      if(match_cons(w_89, sym_Strategies_1))
                        {
                          y_230 = ATgetArgument(w_89, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm x_89 = (ATerm) ATgetNext((ATermList) u_89);
                        if(((ATgetType(x_89) != AT_LIST) || !(ATisEmpty(x_89))))
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
  t = b_16(w_230, x_230, y_230, t);
  t = if_verbose3_1_0(v_32, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm y_89 = ATgetArgument(t, 0);
      if(((ATgetType(y_89) == AT_LIST) && !(ATisEmpty(y_89))))
        {
          ATerm z_89 = ATgetFirst((ATermList) y_89);
          if(match_cons(z_89, sym_Signature_1))
            {
              u_230 = ATgetArgument(z_89, 0);
            }
          else
            _fail(t);
          {
            ATerm a_90 = (ATerm) ATgetNext((ATermList) y_89);
            if(((ATgetType(a_90) == AT_LIST) && !(ATisEmpty(a_90))))
              {
                ATerm f_90 = ATgetFirst((ATermList) a_90);
                if(match_cons(f_90, sym_Strategies_1))
                  {
                    v_230 = ATgetArgument(f_90, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm g_90 = (ATerm) ATgetNext((ATermList) a_90);
                  if(((ATgetType(g_90) != AT_LIST) || !(ATisEmpty(g_90))))
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
  t = r_15(u_230, v_230, t);
  t = if_verbose3_1_0(x_32, t);
  t = DesugarListMatching_0_0(t);
  t = if_verbose3_1_0(z_32, t);
  t = strename_0_0(t);
  t = if_verbose3_1_0(b_33, t);
  g_231 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_231 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_231);
  z_230 = t;
  t = a_231;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_231 = ATgetFirst((ATermList) t);
      d_231 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_231);
  b_231 = t;
  t = d_231;
  t = Cons_2_0(e_33, f_33, t);
  e_231 = t;
  t = (ATerm) ATinsert(CheckATermList(e_231), c_231);
  u_29 = t;
  t = SSLsetAnnotations(u_29, b_231);
  f_231 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_231);
  v_29 = t;
  t = SSLsetAnnotations(v_29, z_230);
  return(t);
}
static ATerm q_17 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm x_231 = NULL;
  t = SSL_fputc(q_40, r_40);
  x_231 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_231);
  return(t);
}
static ATerm r_17 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm y_231 = NULL;
  t = SSL_write_term_to_stream_text(f_25, g_25);
  y_231 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_231);
  return(t);
}
static ATerm t_17 (ATerm v_113 (ATerm), ATerm q_182, ATerm j_25, ATerm t)
{
  ATerm z_231 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_182, term_h_90);
  t = w_17(t);
  z_231 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_231, j_25);
  t = v_113(t);
  t = fclose_0_0(t);
  t = j_25;
  return(t);
}
static ATerm s_17 (ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm a_232 = NULL;
  t = SSL_write_term_to_stream_baf(b_25, c_25);
  a_232 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_232);
  return(t);
}
static ATerm g_33 (ATerm t)
{
  ATerm d_232 = NULL,e_232 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_90 = ATgetArgument(t, 0);
      if(match_cons(l_90, sym_Stream_1))
        {
          d_232 = ATgetArgument(l_90, 0);
        }
      else
        _fail(t);
      e_232 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_17(d_232, e_232, t);
  return(t);
}
static ATerm h_33 (ATerm t)
{
  ATerm f_232 = NULL,g_232 = NULL,h_232 = NULL,i_232 = NULL,j_232 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_90 = ATgetArgument(t, 0);
      if(match_cons(m_90, sym_Stream_1))
        {
          i_232 = ATgetArgument(m_90, 0);
        }
      else
        _fail(t);
      j_232 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_17(i_232, j_232, t);
  f_232 = t;
  t = term_d_87;
  g_232 = t;
  t = f_232;
  if(match_cons(t, sym_Stream_1))
    {
      h_232 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_87, f_232);
  t = q_17(g_232, h_232, t);
  return(t);
}
ATerm output_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm b_232 = NULL,c_232 = NULL;
  t = s_131(t);
  c_232 = t;
  {
    ATerm n_90 = t;
    int o_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_90;
        t = get_config_0_0(t);
        LocalPopChoice(o_90);
      }
    else
      {
        t = n_90;
        t = term_q_90;
      }
  }
  b_232 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_232, c_232);
  {
    ATerm s_90 = t;
    int t_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_90;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, b_232, c_232);
        LocalPopChoice(t_90);
        if(match_cons(t, sym__2))
          {
            ATerm w_90 = ATgetArgument(t, 0);
            ATerm x_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_17(g_33, b_232, c_232, t);
      }
    else
      {
        t = s_90;
        if(match_cons(t, sym__2))
          {
            ATerm y_90 = ATgetArgument(t, 0);
            ATerm z_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_17(h_33, b_232, c_232, t);
      }
  }
  return(t);
}
static ATerm x_232 (ATerm r_232, ATerm t)
{
  t = SSL_fclose(r_232);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_232 = NULL,v_232 = NULL;
  v_232 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_232 = ATgetArgument(t, 0);
      {
        ATerm a_91 = t;
        int b_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_232);
            LocalPopChoice(b_91);
          }
        else
          {
            t = a_91;
            t = x_232(v_232, t);
          }
      }
    }
  else
    {
      t = x_232(v_232, t);
    }
  return(t);
}
static ATerm u_17 (ATerm h_25, ATerm t)
{
  t = SSL_read_term_from_stream(h_25);
  return(t);
}
static ATerm v_17 (ATerm s_40, ATerm t_40, ATerm t)
{
  ATerm y_232 = NULL;
  t = SSL_fopen(s_40, t_40);
  y_232 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_232);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_232 = NULL;
  t = SSL_stdin_stream();
  z_232 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_232);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_233 = NULL;
  t = SSL_stdout_stream();
  a_233 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_233);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_233 = NULL;
  t = SSL_stderr_stream();
  b_233 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_233);
  return(t);
}
static ATerm i_234 (ATerm h_233, ATerm t)
{
  ATerm i_233 = NULL;
  t = SSL_explode_term(h_233);
  if(match_cons(t, sym__2))
    {
      ATerm c_91 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_91) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_91 = ATgetArgument(t, 1);
        if(((ATgetType(d_91) == AT_LIST) && !(ATisEmpty(d_91))))
          {
            i_233 = ATgetFirst((ATermList) d_91);
            {
              ATerm e_91 = (ATerm) ATgetNext((ATermList) d_91);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_233;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_233;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_233;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_233;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_234 (ATerm l_233, ATerm m_233, ATerm n_233, ATerm t)
{
  ATerm o_233 = NULL,p_233 = NULL,q_233 = NULL,t_233 = NULL,e_30 = NULL;
  t = SSLgetAnnotations(n_233);
  q_233 = t;
  t = l_233;
  if(match_cons(t, sym_Path_1))
    {
      t_233 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_233, m_233);
  e_30 = t;
  t = SSLsetAnnotations(e_30, q_233);
  if(match_cons(t, sym__2))
    {
      o_233 = ATgetArgument(t, 0);
      p_233 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_17(o_233, p_233, t);
  return(t);
}
static ATerm k_234 (ATerm v_233, ATerm w_233, ATerm x_233, ATerm t)
{
  ATerm y_233 = NULL,z_233 = NULL,a_234 = NULL,d_234 = NULL,f_30 = NULL;
  t = SSLgetAnnotations(x_233);
  a_234 = t;
  t = SSL_is_string(v_233);
  d_234 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_234, w_233);
  f_30 = t;
  t = SSLsetAnnotations(f_30, a_234);
  if(match_cons(t, sym__2))
    {
      y_233 = ATgetArgument(t, 0);
      z_233 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_17(y_233, z_233, t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm f_234 = NULL,g_234 = NULL,h_234 = NULL;
  f_234 = t;
  if(match_cons(t, sym__2))
    {
      g_234 = ATgetArgument(t, 0);
      h_234 = ATgetArgument(t, 1);
      {
        ATerm f_91 = t;
        int g_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_234(f_234, t);
            LocalPopChoice(g_91);
          }
        else
          {
            t = f_91;
            {
              ATerm i_91 = t;
              int j_91 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_234(g_234, h_234, f_234, t);
                  LocalPopChoice(j_91);
                }
              else
                {
                  t = i_91;
                  t = k_234(g_234, h_234, f_234, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_234(f_234, t);
    }
  return(t);
}
static ATerm i_33 (ATerm t)
{
  t = term_k_91;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_234 = NULL,m_234 = NULL,n_234 = NULL;
  ATerm l_91 = t;
  int m_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_234 = NULL;
      o_234 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_234, term_n_91);
      t = w_17(t);
      LocalPopChoice(m_91);
    }
  else
    {
      t = l_91;
      t = debug_1_0(i_33, t);
      _fail(t);
    }
  m_234 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_234 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_17(n_234, t);
  l_234 = t;
  t = m_234;
  t = fclose_0_0(t);
  t = l_234;
  return(t);
}
ATerm input_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm p_91 = t;
  int q_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_91;
      t = get_config_0_0(t);
      LocalPopChoice(q_91);
    }
  else
    {
      t = p_91;
      t = term_s_91;
    }
  t = ReadFromFile_0_0(t);
  t = t_131(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_234 = NULL,r_234 = NULL,s_234 = NULL,t_234 = NULL,u_234 = NULL;
  q_234 = t;
  t = term_t_91;
  t = whoami_0_0(t);
  r_234 = t;
  t = term_u_51;
  t_234 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_91), r_234), term_u_91);
  u_234 = t;
  t = SSL_printnl(t_234, u_234);
  t = term_l_51;
  s_234 = t;
  t = SSL_exit(s_234);
  t = q_234;
  return(t);
}
static ATerm l_33 (ATerm t)
{
  ATerm w_234 = NULL;
  w_234 = t;
  if(match_string(t, "-k"))
    {
      t = w_234;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_234;
    }
  return(t);
}
static ATerm m_33 (ATerm t)
{
  ATerm x_234 = NULL,y_234 = NULL,z_234 = NULL;
  x_234 = t;
  t = SSL_string_to_int(x_234);
  y_234 = t;
  t = term_w_91;
  z_234 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_91, y_234);
  t = e_18(z_234, y_234, t);
  t = x_234;
  return(t);
}
static ATerm n_33 (ATerm t)
{
  t = term_x_91;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_33, m_33, n_33, t);
  return(t);
}
static ATerm o_33 (ATerm t)
{
  ATerm b_235 = NULL;
  b_235 = t;
  if(match_string(t, "-S"))
    {
      t = b_235;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_235;
    }
  return(t);
}
static ATerm p_33 (ATerm t)
{
  ATerm c_235 = NULL,d_235 = NULL;
  t = term_t_38;
  c_235 = t;
  t = term_j_51;
  d_235 = t;
  t = term_y_91;
  t = e_18(c_235, d_235, t);
  t = term_z_91;
  return(t);
}
static ATerm q_33 (ATerm t)
{
  t = term_a_92;
  return(t);
}
static ATerm r_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_33 (ATerm t)
{
  ATerm e_235 = NULL,f_235 = NULL,g_235 = NULL;
  e_235 = t;
  t = SSL_string_to_int(e_235);
  f_235 = t;
  t = term_t_38;
  g_235 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_38, f_235);
  t = e_18(g_235, f_235, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_235);
  return(t);
}
static ATerm t_33 (ATerm t)
{
  t = term_b_92;
  return(t);
}
static ATerm u_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_33 (ATerm t)
{
  ATerm h_235 = NULL,i_235 = NULL;
  t = term_c_92;
  h_235 = t;
  t = term_t_91;
  i_235 = t;
  t = term_d_92;
  t = e_18(h_235, i_235, t);
  t = term_e_92;
  return(t);
}
static ATerm w_33 (ATerm t)
{
  t = term_f_92;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_92 = t;
  int h_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_33, p_33, q_33, t);
      LocalPopChoice(h_92);
    }
  else
    {
      t = g_92;
      {
        ATerm i_92 = t;
        int j_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_33, s_33, t_33, t);
            LocalPopChoice(j_92);
          }
        else
          {
            t = i_92;
            t = Option_3_0(u_33, v_33, w_33, t);
          }
      }
    }
  return(t);
}
static ATerm e_18 (ATerm n_49, ATerm o_49, ATerm t)
{
  ATerm j_235 = NULL;
  t = term_k_92;
  j_235 = t;
  t = SSL_table_put(j_235, n_49, o_49);
  t = (ATerm) ATmakeAppl(sym__3, term_k_92, n_49, o_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_235 = NULL,n_235 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_235 = NULL,p_235 = NULL,q_235 = NULL;
      t = term_t_91;
      t = i_0(t);
      o_235 = t;
      t = term_l_92;
      p_235 = t;
      t = term_m_92;
      q_235 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_92, term_m_92, o_235);
      t = c_18(p_235, q_235, o_235, t);
      _fail(t);
    }
  else
    {
      ATerm t_235 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_235 = ATgetFirst((ATermList) t);
          n_235 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_235;
      t = d_0(t);
      t = term_t_91;
      t = g_0(t);
      t_235 = t;
      t = (ATerm) ATinsert(CheckATermList(n_235), t_235);
    }
  return(t);
}
static ATerm x_33 (ATerm t)
{
  ATerm v_235 = NULL;
  v_235 = t;
  if(match_string(t, "-o"))
    {
      t = v_235;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_235;
    }
  return(t);
}
static ATerm y_33 (ATerm t)
{
  ATerm w_235 = NULL,x_235 = NULL;
  w_235 = t;
  t = term_p_90;
  x_235 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_90, w_235);
  t = e_18(x_235, w_235, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_235);
  return(t);
}
static ATerm z_33 (ATerm t)
{
  t = term_p_92;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_33, y_33, z_33, t);
  return(t);
}
static ATerm c_18 (ATerm n_54, ATerm o_54, ATerm m_54, ATerm t)
{
  ATerm z_235 = NULL,a_236 = NULL,b_236 = NULL;
  z_235 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_54, o_54);
  {
    ATerm u_92 = t;
    int v_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_92 = ATgetArgument(t, 0);
            ATerm z_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_54, o_54);
        t = b_18(n_54, o_54, t);
        LocalPopChoice(v_92);
      }
    else
      {
        t = u_92;
        t = (ATerm) ATempty;
      }
  }
  a_236 = t;
  t = (ATerm) ATinsert(CheckATermList(a_236), m_54);
  b_236 = t;
  t = SSL_table_put(n_54, o_54, b_236);
  t = z_235;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm i_236 = NULL,j_236 = NULL,k_236 = NULL,l_236 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_236 = NULL,n_236 = NULL,o_236 = NULL;
      t = term_t_91;
      t = t_0(t);
      m_236 = t;
      t = term_l_92;
      n_236 = t;
      t = term_m_92;
      o_236 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_92, term_m_92, m_236);
      t = c_18(n_236, o_236, m_236, t);
      _fail(t);
    }
  else
    {
      ATerm s_236 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_236 = ATgetFirst((ATermList) t);
          j_236 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_236;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_236 = ATgetFirst((ATermList) t);
          l_236 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_236;
      t = p_0(t);
      t = k_236;
      t = r_0(t);
      s_236 = t;
      t = (ATerm) ATinsert(CheckATermList(l_236), s_236);
    }
  return(t);
}
static ATerm a_34 (ATerm t)
{
  ATerm u_236 = NULL;
  u_236 = t;
  if(match_string(t, "-i"))
    {
      t = u_236;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_236;
    }
  return(t);
}
static ATerm b_34 (ATerm t)
{
  ATerm v_236 = NULL,w_236 = NULL;
  v_236 = t;
  t = term_r_91;
  w_236 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_91, v_236);
  t = e_18(w_236, v_236, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_236);
  return(t);
}
static ATerm c_34 (ATerm t)
{
  t = term_b_93;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_34, b_34, c_34, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_236 = NULL,y_236 = NULL,z_236 = NULL,a_237 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_91;
  t = whoami_0_0(t);
  x_236 = t;
  t = term_u_51;
  z_236 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_93), x_236);
  a_237 = t;
  t = SSL_printnl(z_236, a_237);
  t = term_l_51;
  y_236 = t;
  t = SSL_exit(y_236);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_93;
  t = get_config_0_0(t);
  return(t);
}
static ATerm x_17 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm f_93 = t;
  int g_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_43, n_43);
      LocalPopChoice(g_93);
    }
  else
    {
      t = f_93;
      t = SSL_addr(m_43, n_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm t)
{
  ATerm c_237 = NULL,d_237 = NULL,e_237 = NULL;
  c_237 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_237;
      t = h_120(t);
    }
  else
    {
      ATerm h_237 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_237 = ATgetFirst((ATermList) t);
          e_237 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_237;
      t = foldr_2_0(h_120, i_120, t);
      h_237 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_237, h_237);
      t = i_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_34 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm e_34 (ATerm t)
{
  ATerm m_105 = NULL,o_105 = NULL;
  if(match_cons(t, sym__2))
    {
      m_105 = ATgetArgument(t, 0);
      o_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17(m_105, o_105, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_237 = NULL,z_104 = NULL,j_105 = NULL;
  t = times_0_0(t);
  j_105 = t;
  t = SSL_explode_term(j_105);
  if(match_cons(t, sym__2))
    {
      ATerm h_93 = ATgetArgument(t, 0);
      z_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_104;
  t = foldr_2_0(d_34, e_34, t);
  k_237 = t;
  t = SSL_TicksToSeconds(k_237);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_237 = NULL,w_237 = NULL,x_237 = NULL;
  v_237 = t;
  if(match_cons(t, sym__2))
    {
      w_237 = ATgetArgument(t, 0);
      x_237 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_93 = t;
    int j_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_237;
        if((w_237 != t))
          {
            _fail(t);
          }
        t = v_237;
        LocalPopChoice(j_93);
      }
    else
      {
        t = i_93;
        t = (ATerm) ATmakeAppl(sym__2, w_237, x_237);
        {
          ATerm m_93 = t;
          int o_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_237, x_237);
              LocalPopChoice(o_93);
            }
          else
            {
              t = m_93;
              t = SSL_gtr(w_237, x_237);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_237, x_237);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_128 (ATerm), ATerm t)
{
  ATerm b_238 = NULL;
  b_238 = t;
  {
    ATerm q_93 = t;
    int r_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_238 = NULL;
        t = term_t_38;
        t = get_config_0_0(t);
        d_238 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_238, term_l_51);
        t = geq_0_0(t);
        t = b_238;
        t = t_128(t);
        LocalPopChoice(r_93);
      }
    else
      {
        t = q_93;
        t = b_238;
      }
  }
  return(t);
}
static ATerm f_34 (ATerm t)
{
  ATerm f_238 = NULL,g_238 = NULL,i_238 = NULL,j_238 = NULL;
  t = run_time_0_0(t);
  f_238 = t;
  t = term_t_91;
  t = whoami_0_0(t);
  g_238 = t;
  t = term_u_51;
  i_238 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_93), f_238), term_s_93), g_238);
  j_238 = t;
  t = SSL_printnl(i_238, j_238);
  t = (ATerm) ATmakeAppl(sym__2, term_u_51, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_93), f_238), term_s_93), g_238));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_34, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_238 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_51;
  k_238 = t;
  t = SSL_exit(k_238);
  return(t);
}
static ATerm g_34 (ATerm t)
{
  ATerm s_238 = NULL,t_238 = NULL;
  t_238 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_238;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_238 = ATgetArgument(t, 0);
          {
            ATerm m_106 = NULL,p_30 = NULL;
            t = SSLgetAnnotations(t_238);
            m_106 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_238);
            p_30 = t;
            t = SSLsetAnnotations(p_30, m_106);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_238;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_131 (ATerm), ATerm t)
{
  ATerm u_93 = t;
  int v_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_93;
      t = get_config_0_0(t);
      LocalPopChoice(v_93);
    }
  else
    {
      t = u_93;
      t = fetch_1_0(g_34, t);
    }
  t = j_131(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_238 = NULL,x_238 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_238 = ATgetFirst((ATermList) t);
      x_238 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_239 = NULL,c_239 = NULL;
        static ATerm h_34 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_239)), not_null(c_239));
          return(t);
        }
        t = x_238;
        t = n_0(t);
        if(((b_239 != NULL) && (b_239 != t)))
          _fail(t);
        else
          b_239 = t;
        t = w_238;
        t = k_0(t);
        if(((c_239 != NULL) && (c_239 != t)))
          _fail(t);
        else
          c_239 = t;
        t = x_238;
        t = reverse_acc_2_0(k_0, h_34, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_91;
      t = n_0(t);
    }
  return(t);
}
static ATerm j_34 (ATerm t)
{
  ATerm g_239 = NULL,h_239 = NULL,i_239 = NULL,r_30 = NULL;
  i_239 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_239 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_239);
  g_239 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_239);
  r_30 = t;
  t = SSLsetAnnotations(r_30, g_239);
  return(t);
}
static ATerm k_34 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_34 (ATerm t)
{
  ATerm k_239 = NULL;
  k_239 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_239), term_x_93);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_239 = NULL,f_239 = NULL;
  ATerm z_93 = t;
  int c_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_93;
      t = get_config_0_0(t);
      LocalPopChoice(c_94);
    }
  else
    {
      t = z_93;
      t = fetch_1_0(j_34, t);
    }
  t = term_d_94;
  t = echo_0_0(t);
  t = term_l_92;
  e_239 = t;
  t = term_m_92;
  f_239 = t;
  t = term_f_94;
  t = b_18(e_239, f_239, t);
  t = reverse_acc_2_0(_id, k_34, t);
  t = map_1_0(l_34, t);
  return(t);
}
ATerm fetch_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  static ATerm h_240 (ATerm t)
  {
    ATerm e_240 = NULL,f_240 = NULL,g_240 = NULL;
    e_240 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_240 = ATgetFirst((ATermList) t);
        g_240 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_94 = t;
      int h_94 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_107 = NULL,f_107 = NULL,r_31 = NULL;
          t = SSLgetAnnotations(e_240);
          a_107 = t;
          t = f_240;
          t = o_114(t);
          f_107 = t;
          t = (ATerm) ATinsert(CheckATermList(g_240), f_107);
          r_31 = t;
          t = SSLsetAnnotations(r_31, a_107);
          LocalPopChoice(h_94);
        }
      else
        {
          t = g_94;
          {
            ATerm g_108 = NULL,j_108 = NULL,s_31 = NULL;
            t = SSLgetAnnotations(e_240);
            g_108 = t;
            t = g_240;
            t = h_240(t);
            j_108 = t;
            t = (ATerm) ATinsert(CheckATermList(j_108), f_240);
            s_31 = t;
            t = SSLsetAnnotations(s_31, g_108);
          }
        }
    }
    return(t);
  }
  t = h_240(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_240 = NULL,m_240 = NULL,n_240 = NULL;
  l_240 = t;
  {
    ATerm i_94 = t;
    int k_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_240;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_94 = ATgetFirst((ATermList) t);
                ATerm o_94 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_240;
          }
        LocalPopChoice(k_94);
      }
    else
      {
        t = i_94;
        t = (ATerm) ATinsert(ATempty, l_240);
      }
  }
  m_240 = t;
  t = term_q_90;
  n_240 = t;
  t = SSL_printnl(n_240, m_240);
  t = l_240;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_93;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_18 (ATerm x_38, ATerm z_38, ATerm t)
{
  t = SSL_strcat(x_38, z_38);
  return(t);
}
ATerm debug_1_0 (ATerm t_113 (ATerm), ATerm t)
{
  ATerm r_240 = NULL,s_240 = NULL,t_240 = NULL,u_240 = NULL;
  r_240 = t;
  t = t_113(t);
  s_240 = t;
  t = term_u_51;
  t_240 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_240), s_240);
  u_240 = t;
  t = SSL_printnl(t_240, u_240);
  t = r_240;
  return(t);
}
ATerm map_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  static ATerm j_241 (ATerm t)
  {
    ATerm g_241 = NULL,h_241 = NULL,i_241 = NULL;
    g_241 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_241;
      }
    else
      {
        ATerm g_109 = NULL,n_109 = NULL,o_109 = NULL,c_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_241 = ATgetFirst((ATermList) t);
            i_241 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_241);
        g_109 = t;
        t = h_241;
        t = e_114(t);
        n_109 = t;
        t = i_241;
        t = j_241(t);
        o_109 = t;
        t = (ATerm) ATinsert(CheckATermList(o_109), n_109);
        c_32 = t;
        t = SSLsetAnnotations(c_32, g_109);
      }
    return(t);
  }
  t = j_241(t);
  return(t);
}
static ATerm m_34 (ATerm t)
{
  ATerm p_94 = t;
  int q_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(q_94);
    }
  else
    {
      t = p_94;
    }
  return(t);
}
static ATerm q_34 (ATerm t)
{
  t = term_r_94;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_94 = t;
  int y_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_241 = NULL;
      r_241 = t;
      t = SSL_is_string(r_241);
      LocalPopChoice(y_94);
    }
  else
    {
      t = w_94;
      {
        ATerm z_94 = t;
        int a_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_34, t);
            LocalPopChoice(a_95);
          }
        else
          {
            t = z_94;
            {
              ATerm x_241 = NULL,y_241 = NULL,z_241 = NULL;
              x_241 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_241 = ATgetArgument(t, 0);
                  t = y_241;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_241 = ATgetArgument(t, 0);
                      t = y_241;
                      {
                        ATerm c_95 = t;
                        int f_95 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(f_95);
                          }
                        else
                          {
                            t = c_95;
                            t = debug_1_0(q_34, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_242 = NULL,e_242 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_241 = ATgetArgument(t, 0);
                          z_241 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_241;
                      t = eval_config_0_0(t);
                      d_242 = t;
                      t = z_241;
                      t = eval_config_0_0(t);
                      e_242 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_242, e_242);
                      t = a_18(d_242, e_242, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_18 (ATerm e_56, ATerm f_56, ATerm t)
{
  t = SSL_table_get(e_56, f_56);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_242 = NULL,j_242 = NULL;
  i_242 = t;
  t = term_k_92;
  j_242 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_92, i_242);
  t = b_18(j_242, i_242, t);
  {
    ATerm i_95 = t;
    int k_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_242 = NULL,l_242 = NULL;
        t = eval_config_0_0(t);
        k_242 = t;
        t = term_k_92;
        l_242 = t;
        t = SSL_table_put(l_242, i_242, k_242);
        t = k_242;
        LocalPopChoice(k_95);
      }
    else
      {
        t = i_95;
      }
  }
  return(t);
}
static ATerm r_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_34 (ATerm t)
{
  ATerm o_242 = NULL,p_242 = NULL;
  t = term_p_95;
  o_242 = t;
  t = term_t_91;
  p_242 = t;
  t = term_t_95;
  t = e_18(o_242, p_242, t);
  return(t);
}
static ATerm t_34 (ATerm t)
{
  t = term_u_95;
  return(t);
}
static ATerm u_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_34 (ATerm t)
{
  ATerm q_242 = NULL,r_242 = NULL,s_242 = NULL,t_242 = NULL;
  t = term_p_95;
  s_242 = t;
  t = term_t_91;
  t_242 = t;
  t = term_t_95;
  t = e_18(s_242, t_242, t);
  t = term_v_95;
  q_242 = t;
  t = term_t_91;
  r_242 = t;
  t = term_w_95;
  t = e_18(q_242, r_242, t);
  t = term_a_96;
  return(t);
}
static ATerm w_34 (ATerm t)
{
  t = term_b_96;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_96 = t;
  int d_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_34, s_34, t_34, t);
      LocalPopChoice(d_96);
    }
  else
    {
      t = c_96;
      t = Option_3_0(u_34, v_34, w_34, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm u_242 = NULL,v_242 = NULL,w_242 = NULL,x_242 = NULL,y_242 = NULL,z_242 = NULL,e_32 = NULL;
  z_242 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_242 = ATgetFirst((ATermList) t);
      w_242 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_242);
  u_242 = t;
  t = v_242;
  t = w_92(t);
  x_242 = t;
  t = w_242;
  t = x_92(t);
  y_242 = t;
  t = (ATerm) ATinsert(CheckATermList(y_242), x_242);
  e_32 = t;
  t = SSLsetAnnotations(e_32, u_242);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_133 (ATerm), ATerm t)
{
  ATerm e_243 = NULL,f_243 = NULL,g_243 = NULL,h_243 = NULL,j_243 = NULL,k_243 = NULL,g_32 = NULL;
  e_243 = t;
  {
    ATerm e_96 = t;
    int g_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_96;
        t = m_133(t);
        LocalPopChoice(g_96);
      }
    else
      {
        t = e_96;
      }
  }
  t = e_243;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_243 = ATgetFirst((ATermList) t);
      h_243 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_243);
  f_243 = t;
  t = term_d_93;
  k_243 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_93, g_243);
  t = e_18(k_243, g_243, t);
  t = h_243;
  {
    static ATerm u_243 (ATerm t)
    {
      ATerm k_96 = t;
      int l_96 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_96 = t;
          int p_96 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_243 = NULL;
              n_243 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_243;
              LocalPopChoice(p_96);
            }
          else
            {
              t = n_96;
              t = m_133(t);
              t = Cons_2_0(_id, u_243, t);
            }
          LocalPopChoice(l_96);
        }
      else
        {
          t = k_96;
          {
            ATerm q_243 = NULL,r_243 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_243 = ATgetFirst((ATermList) t);
                r_243 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_243), (ATerm) ATmakeAppl(sym_Undefined_1, q_243));
          }
        }
      return(t);
    }
    t = u_243(t);
  }
  j_243 = t;
  t = (ATerm) ATinsert(CheckATermList(j_243), (ATerm) ATmakeAppl(sym_Program_1, g_243));
  g_32 = t;
  t = SSLsetAnnotations(g_32, f_243);
  return(t);
}
static ATerm y_34 (ATerm t)
{
  ATerm g_244 = NULL;
  g_244 = t;
  if(match_string(t, "--help"))
    {
      t = g_244;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_244;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_244;
        }
    }
  return(t);
}
static ATerm z_34 (ATerm t)
{
  ATerm h_244 = NULL,i_244 = NULL;
  t = term_w_93;
  h_244 = t;
  t = term_t_91;
  i_244 = t;
  t = term_q_96;
  t = e_18(h_244, i_244, t);
  t = term_r_96;
  return(t);
}
static ATerm a_35 (ATerm t)
{
  t = term_v_96;
  return(t);
}
static ATerm c_35 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_133 (ATerm), ATerm t)
{
  ATerm z_243 = NULL,a_244 = NULL,b_244 = NULL,c_244 = NULL,d_244 = NULL,e_244 = NULL,f_244 = NULL;
  b_244 = t;
  t = term_l_92;
  d_244 = t;
  t = term_m_92;
  e_244 = t;
  t = (ATerm) ATempty;
  f_244 = t;
  t = SSL_table_put(d_244, e_244, f_244);
  t = b_244;
  {
    static ATerm x_34 (ATerm t)
    {
      ATerm y_96 = t;
      int z_96 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_133(t);
          LocalPopChoice(z_96);
        }
      else
        {
          t = y_96;
          {
            ATerm a_97 = t;
            int e_97 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_34, z_34, a_35, t);
                LocalPopChoice(e_97);
              }
            else
              {
                t = a_97;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_34, t);
  }
  {
    ATerm f_97 = t;
    int g_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_244 = NULL;
        p_244 = t;
        {
          ATerm h_97 = t;
          int i_97 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_111 = NULL;
              t = p_244;
              {
                ATerm j_97 = t;
                int k_97 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_93;
                    t = get_config_0_0(t);
                    LocalPopChoice(k_97);
                  }
                else
                  {
                    t = j_97;
                    t = fetch_1_0(c_35, t);
                  }
              }
              t = p_244;
              t = default_system_usage_0_0(t);
              t = term_j_51;
              e_111 = t;
              t = SSL_exit(e_111);
              LocalPopChoice(i_97);
            }
          else
            {
              t = h_97;
              {
                ATerm r_111 = NULL;
                t = term_p_95;
                t = get_config_0_0(t);
                t = p_244;
                t = default_system_about_0_0(t);
                t = term_j_51;
                r_111 = t;
                t = SSL_exit(r_111);
              }
            }
        }
        LocalPopChoice(g_97);
      }
    else
      {
        t = f_97;
        {
          ATerm n_97 = t;
          int o_97 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_244 = NULL,r_244 = NULL,s_244 = NULL;
              static ATerm d_35 (ATerm t)
              {
                ATerm t_244 = NULL,u_244 = NULL,v_244 = NULL,k_32 = NULL;
                v_244 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_244 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_244);
                t_244 = t;
                t = u_244;
                if(((z_243 != NULL) && (z_243 != t)))
                  _fail(t);
                else
                  z_243 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_244);
                k_32 = t;
                t = SSLsetAnnotations(k_32, t_244);
                return(t);
              }
              t = fetch_1_0(d_35, t);
              t = term_u_51;
              r_244 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_243)), term_q_97);
              s_244 = t;
              t = SSL_printnl(r_244, s_244);
              t = (ATerm) ATmakeAppl(sym__2, term_u_51, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_243)), term_q_97));
              t = default_system_usage_0_0(t);
              t = term_l_51;
              q_244 = t;
              t = SSL_exit(q_244);
              LocalPopChoice(o_97);
            }
          else
            {
              t = n_97;
            }
        }
      }
  }
  a_244 = t;
  t = term_l_92;
  c_244 = t;
  t = SSL_table_destroy(c_244);
  t = a_244;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t)
{
  ATerm a_245 = NULL,b_245 = NULL,c_245 = NULL,d_245 = NULL;
  t = parse_options_1_0(l_131, t);
  a_245 = t;
  t = term_r_97;
  d_245 = t;
  t = SSL_table_create(d_245);
  t = term_r_97;
  b_245 = t;
  t = term_u_97;
  c_245 = t;
  t = SSL_table_put(b_245, c_245, a_245);
  t = a_245;
  t = n_131(t);
  {
    ATerm w_97 = t;
    int x_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_131, t);
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
              t = o_131(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_97);
            }
          else
            {
              t = y_97;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_35 (ATerm t)
{
  ATerm a_98 = t;
  int c_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_98);
    }
  else
    {
      t = a_98;
      {
        ATerm e_98 = t;
        int f_98 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_98);
          }
        else
          {
            t = e_98;
            {
              ATerm h_98 = t;
              int m_98 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_35, k_35, l_35, t);
                  LocalPopChoice(m_98);
                }
              else
                {
                  t = h_98;
                  {
                    ATerm n_98 = t;
                    int o_98 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(o_98);
                      }
                    else
                      {
                        t = n_98;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_35 (ATerm t)
{
  t = input_1_0(m_35, t);
  return(t);
}
static ATerm g_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_35 (ATerm t)
{
  ATerm f_245 = NULL,g_245 = NULL;
  t = term_u_90;
  f_245 = t;
  t = term_t_91;
  g_245 = t;
  t = term_p_98;
  t = e_18(f_245, g_245, t);
  t = term_q_98;
  return(t);
}
static ATerm l_35 (ATerm t)
{
  t = term_r_98;
  return(t);
}
static ATerm m_35 (ATerm t)
{
  t = output_1_0(frontend_transformation_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_35, default_usage_0_0, _id, f_35, t);
  return(t);
}

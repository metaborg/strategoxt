#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Var_1;
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
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
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
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Hashtable_1;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Anno_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_DynamicRules_1;
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
}
ATerm term_v_65;
ATerm term_k_65;
ATerm term_w_64;
ATerm term_v_64;
ATerm term_u_64;
ATerm term_r_64;
ATerm term_l_64;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_g_64;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_c_63;
ATerm term_u_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_r_62;
ATerm term_q_62;
ATerm term_p_62;
ATerm term_o_62;
ATerm term_j_62;
ATerm term_i_62;
ATerm term_f_62;
ATerm term_e_62;
ATerm term_d_62;
ATerm term_a_62;
ATerm term_z_61;
ATerm term_u_61;
ATerm term_s_61;
ATerm term_d_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_w_60;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_g_60;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_w_59;
ATerm term_k_59;
ATerm term_j_59;
ATerm term_n_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_a_58;
ATerm term_z_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_l_57;
ATerm term_a_41;
ATerm term_x_38;
ATerm term_j_38;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_j_32;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_k_30;
ATerm term_k_27;
ATerm term_f_27;
ATerm term_h_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_t_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_e_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Op_2, term_p_22, (ATerm) ATempty);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_22);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Call_2, term_r_23, (ATerm) ATempty);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Call_2, term_h_25, (ATerm) ATempty);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Call_2, term_o_22, (ATerm) ATempty);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_CallT_3, term_p_30, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_30, term_x_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_30, term_z_30);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_30, term_a_31);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_b_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_31);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_33);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_30, term_x_30);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_30, term_t_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_y_34, term_u_34);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_36);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_36);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_38);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_57);
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_a_60);
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_60);
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(sym__2, term_f_60, term_w_21);
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_b_61);
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_z_61);
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(sym__2, term_n_60, term_o_60);
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(sym__2, term_o_62, term_w_21);
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(sym__2, term_r_62, term_w_21);
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(sym__2, term_z_61, term_w_21);
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(sym__3, term_n_60, term_o_60, (ATerm) ATempty);
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_o_62);
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(sym__2, term_r_64, term_w_21);
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm o_143 (ATerm), ATerm t);
static ATerm g_6 (ATerm x_1, ATerm y_1, ATerm t);
static ATerm i_6 (ATerm f_2, ATerm g_2, ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm d_142 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_9 (ATerm x_78, ATerm y_78, ATerm z_78, ATerm t);
static ATerm k_19 (ATerm b_19, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm r_9 (ATerm k_74, ATerm l_74, ATerm m_74, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t);
static ATerm r_40 (ATerm t_39, ATerm u_39, ATerm t);
static ATerm s_40 (ATerm z_39, ATerm a_40, ATerm t);
ATerm Replace_0_0 (ATerm t);
static ATerm a_11 (ATerm m_43, ATerm n_43, ATerm t);
ATerm end_scope_1_0 (ATerm a_119 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_118 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm b_11 (ATerm q_25, ATerm p_25, ATerm r_25, ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t);
ATerm fuse_with_bottomup_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm a_110 (ATerm), ATerm t);
ATerm propagate_mark_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
ATerm inline_rules_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm bottomup_to_var_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm seq_over_choice_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm i_11 (ATerm a_24, ATerm t);
ATerm alltd_1_0 (ATerm r_111 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm check_that_innermost_is_innermost_0_0 (ATerm t);
ATerm debug_1_0 (ATerm q_118 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm z_109 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm k_11 (ATerm x_62, ATerm w_62, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm d_111 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm b_110 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm spaste_1_0 (ATerm b_143 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm u_12 (ATerm l_81, ATerm k_81, ATerm t);
ATerm SVar_1_0 (ATerm x_92 (ATerm), ATerm t);
static ATerm d_13 (ATerm g_139 (ATerm), ATerm h_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_71, ATerm q_71, ATerm p_71, ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm e_13 (ATerm a_139 (ATerm), ATerm b_139 (ATerm (ATerm), ATerm), ATerm j_71, ATerm m_71, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm q_131 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm v_138 (ATerm (ATerm), ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_138 (ATerm (ATerm), ATerm), ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm tpaste_1_0 (ATerm x_142 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm y_142 (ATerm), ATerm z_142 (ATerm), ATerm a_143 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm x_12 (ATerm w_124 (ATerm), ATerm x_53, ATerm w_53, ATerm t);
ATerm foldr_3_0 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t);
static ATerm y_12 (ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm b_54, ATerm a_54, ATerm t);
static ATerm z_12 (ATerm r_124 (ATerm), ATerm v_53, ATerm u_53, ATerm t);
ATerm at_end_1_0 (ATerm c_121 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_146 (ATerm r_146, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm b_13 (ATerm n_717, ATerm s_717, ATerm k_73, ATerm t);
ATerm while_not_2_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t);
static ATerm u_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm f_149 (ATerm z_147, ATerm a_148, ATerm b_148, ATerm t);
static ATerm d_15 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
ATerm free_vars_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm u_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm d_16 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm u_88 (ATerm), ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm k_13 (ATerm s_43, ATerm t_43, ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
ATerm InlineStrat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
ATerm check_that_try_is_try_0_0 (ATerm t);
ATerm check_library_definitions_0_0 (ATerm t);
static ATerm l_13 (ATerm d_119 (ATerm), ATerm d_42, ATerm b_42, ATerm t);
static ATerm p_17 (ATerm t);
static ATerm m_13 (ATerm c_23, ATerm d_23, ATerm f_23, ATerm e_23, ATerm t);
ATerm map_1_0 (ATerm l_120 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t);
static ATerm o_13 (ATerm g_33, ATerm h_33, ATerm t);
static ATerm p_13 (ATerm u_38, ATerm v_38, ATerm t);
static ATerm r_13 (ATerm s_118 (ATerm), ATerm e_323, ATerm d_39, ATerm t);
static ATerm q_13 (ATerm o_38, ATerm p_38, ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm y_133 (ATerm), ATerm t);
static ATerm z_158 (ATerm t_158, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_13 (ATerm y_38, ATerm t);
static ATerm t_13 (ATerm z_31, ATerm a_32, ATerm t);
static ATerm v_13 (ATerm i_33, ATerm j_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_160 (ATerm j_159, ATerm t);
static ATerm l_160 (ATerm n_159, ATerm o_159, ATerm p_159, ATerm t);
static ATerm m_160 (ATerm x_159, ATerm y_159, ATerm z_159, ATerm t);
static ATerm w_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_120 (ATerm), ATerm t);
static ATerm c_14 (ATerm a_45, ATerm b_45, ATerm t);
static ATerm f_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm j_18 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_14 (ATerm o_67, ATerm p_67, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm a_19 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_14 (ATerm h_43, ATerm i_43, ATerm g_43, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm l_19 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_13 (ATerm m_40, ATerm n_40, ATerm t);
ATerm foldr_2_0 (ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_143 (ATerm), ATerm t);
static ATerm p_19 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_19 (ATerm t);
ATerm need_help_1_0 (ATerm w_134 (ATerm), ATerm t);
static ATerm g_14 (ATerm z_46, ATerm a_47, ATerm b_47, ATerm t);
static ATerm h_14 (ATerm c_47, ATerm d_47, ATerm t);
ATerm lookup_table_0_1 (ATerm t_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm h_47, ATerm i_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_14 (ATerm e_47, ATerm f_47, ATerm t);
static ATerm b_14 (ATerm j_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm t_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_19 (ATerm t);
static ATerm x_19 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm b_138 (ATerm), ATerm t);
static ATerm j_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm n_20 (ATerm t);
ATerm parse_options_1_0 (ATerm a_138 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_134 (ATerm), ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm t);
static ATerm q_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm y_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm d_21 (ATerm t);
ATerm iowrap_3_0 (ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm t);
static ATerm f_21 (ATerm t);
static ATerm g_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm t_21 (ATerm t);
static ATerm v_21 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,p_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL;
  a_0 = t;
  t = term_w_21;
  t = whoami_0_0(t);
  p_0 = t;
  t = term_x_21;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_21), p_0), term_y_21);
  u_0 = t;
  t = SSL_printnl(t_0, u_0);
  t = term_a_22;
  r_0 = t;
  t = SSL_exit(r_0);
  t = a_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_143 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
        t = term_d_22;
        c_1 = t;
        t = term_e_22;
        d_1 = t;
        t = term_f_22;
        t = c_14(c_1, d_1, t);
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_1, term_h_22);
        t = geq_0_0(t);
        t = x_0;
        t = o_143(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = x_0;
      }
  }
  return(t);
}
static ATerm g_6 (ATerm x_1, ATerm y_1, ATerm t)
{
  t = x_1;
  {
    ATerm i_22 = t;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_1 = NULL;
        e_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_2 = ATgetFirst((ATermList) t);
            d_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_2);
        b_2 = t;
        t = d_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_2), c_2);
        f_1 = t;
        t = SSLsetAnnotations(f_1, b_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_22;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_22, x_1);
  return(t);
}
static ATerm i_6 (ATerm f_2, ATerm g_2, ATerm t)
{
  t = f_2;
  {
    ATerm m_22 = t;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL,n_2 = NULL,g_1 = NULL;
        n_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_2 = ATgetFirst((ATermList) t);
            l_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_2);
        i_2 = t;
        t = l_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_2), j_2);
        g_1 = t;
        t = SSLsetAnnotations(g_1, i_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_22;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_22, f_2);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,v_0 = NULL;
  c_3 = t;
  t = SSL_explode_term(c_3);
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_22 = ATgetArgument(t, 1);
        if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
          {
            d_3 = ATgetFirst((ATermList) w_22);
            {
              ATerm y_22 = (ATerm) ATgetNext((ATermList) w_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(c_3);
  if(match_cons(t, sym__2))
    {
      ATerm a_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
          {
            ATerm h_23 = ATgetFirst((ATermList) g_23);
            ATerm n_23 = (ATerm) ATgetNext((ATermList) g_23);
            if(((ATgetType(n_23) == AT_LIST) && !(ATisEmpty(n_23))))
              {
                v_0 = ATgetFirst((ATermList) n_23);
                {
                  ATerm o_23 = (ATerm) ATgetNext((ATermList) n_23);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, v_0), d_3));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, v_3), u_3));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_23, (ATerm) ATinsert(ATinsert(ATempty, y_3), x_3));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_23, (ATerm) ATinsert(ATinsert(ATempty, k_4), j_4));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_v_23;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      m_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_23, (ATerm) ATinsert(ATinsert(ATempty, n_4), m_4));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_Anno_2))
    {
      w_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
      {
        ATerm a_3 = NULL;
        t = x_2;
        t = foldr_2_0(w_0, z_0, t);
        a_3 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, w_2, a_3);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          w_2 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, w_2, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              w_2 = ATgetArgument(t, 0);
              {
                ATerm k_1 = NULL;
                t = w_2;
                {
                  ATerm x_23 = t;
                  int y_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_d_24;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_e_24;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_f_24;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_g_24;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_j_24;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(y_23);
                    }
                  else
                    {
                      t = x_23;
                      {
                        ATerm m_1 = NULL;
                        t = SSL_explode_string(w_2);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm k_24 = ATgetFirst((ATermList) t);
                            if(((ATgetType(k_24) != AT_INT) || (ATgetInt((ATermInt) k_24) != 39)))
                              _fail(t);
                            {
                              ATerm p_24 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
                                {
                                  m_1 = ATgetFirst((ATermList) p_24);
                                  {
                                    ATerm q_24 = (ATerm) ATgetNext((ATermList) p_24);
                                    if(((ATgetType(q_24) == AT_LIST) && !(ATisEmpty(q_24))))
                                      {
                                        ATerm t_24 = ATgetFirst((ATermList) q_24);
                                        if(((ATgetType(t_24) != AT_INT) || (ATgetInt((ATermInt) t_24) != 39)))
                                          _fail(t);
                                        {
                                          ATerm u_24 = (ATerm) ATgetNext((ATermList) q_24);
                                          if(((ATgetType(u_24) != AT_LIST) || !(ATisEmpty(u_24))))
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
                        t = m_1;
                      }
                    }
                }
                k_1 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, k_1);
              }
            }
          else
            {
              ATerm v_24 = t;
              int z_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      w_2 = ATgetArgument(t, 0);
                      {
                        ATerm a_25 = ATgetArgument(t, 1);
                      }
                      t_2 = ATgetArgument(t, 2);
                      p_2 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_24);
                  t = (ATerm) ATmakeAppl(sym_Con_3, w_2, t_2, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_2), (ATerm) ATempty));
                }
              else
                {
                  t = v_24;
                  {
                    ATerm c_25 = t;
                    int e_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            w_2 = ATgetArgument(t, 0);
                            {
                              ATerm f_25 = ATgetArgument(t, 1);
                            }
                            t_2 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(e_25);
                        t = (ATerm) ATmakeAppl(sym_Con_3, w_2, t_2, term_i_25);
                      }
                    else
                      {
                        t = c_25;
                        if(match_cons(t, sym_Con1_2))
                          {
                            w_2 = ATgetArgument(t, 0);
                            x_2 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, w_2, x_2, term_i_25);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                w_2 = ATgetArgument(t, 0);
                                x_2 = ATgetArgument(t, 1);
                                {
                                  static ATerm e_1 (ATerm t)
                                  {
                                    t = x_2;
                                    return(t);
                                  }
                                  t = w_2;
                                  t = foldr_2_0(e_1, h_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    w_2 = ATgetArgument(t, 0);
                                    t = w_2;
                                    t = foldr_2_0(i_1, j_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        w_2 = ATgetArgument(t, 0);
                                        t = w_2;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            q_2 = ATgetFirst((ATermList) t);
                                            r_2 = (ATerm) ATgetNext((ATermList) t);
                                            t = r_2;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm j_25 = t;
                                                int k_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_6(w_2, v_2, t);
                                                    LocalPopChoice(k_25);
                                                  }
                                                else
                                                  {
                                                    t = j_25;
                                                    t = q_2;
                                                  }
                                              }
                                            else
                                              {
                                                t = g_6(w_2, v_2, t);
                                              }
                                          }
                                        else
                                          {
                                            t = g_6(w_2, v_2, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            w_2 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, w_2));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                w_2 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, w_2));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    w_2 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, w_2));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        w_2 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, w_2));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            w_2 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_2), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                w_2 = ATgetArgument(t, 0);
                                                                x_2 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_2), x_2);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    w_2 = ATgetArgument(t, 0);
                                                                    x_2 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm l_1 (ATerm t)
                                                                      {
                                                                        t = x_2;
                                                                        return(t);
                                                                      }
                                                                      t = w_2;
                                                                      t = foldr_2_0(l_1, n_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        w_2 = ATgetArgument(t, 0);
                                                                        t = w_2;
                                                                        t = foldr_2_0(o_1, p_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            w_2 = ATgetArgument(t, 0);
                                                                            x_2 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_o_22, (ATerm) ATinsert(CheckATermList(x_2), w_2));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                w_2 = ATgetArgument(t, 0);
                                                                                t = w_2;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    q_2 = ATgetFirst((ATermList) t);
                                                                                    r_2 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = r_2;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm l_25 = t;
                                                                                        int o_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = i_6(w_2, v_2, t);
                                                                                            LocalPopChoice(o_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_25;
                                                                                            t = q_2;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = i_6(w_2, v_2, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_6(w_2, v_2, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_t_25;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        w_2 = ATgetArgument(t, 0);
                                                                                        x_2 = ATgetArgument(t, 1);
                                                                                        t = x_2;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            s_2 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_y_25, (ATerm) ATinsert(ATinsert(ATempty, s_2), w_2));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            w_2 = ATgetArgument(t, 0);
                                                                                            t = w_2;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                w_2 = ATgetArgument(t, 0);
                                                                                                x_2 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, w_2, x_2, term_z_25);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    w_2 = ATgetArgument(t, 0);
                                                                                                    x_2 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, w_2, x_2, term_z_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        w_2 = ATgetArgument(t, 0);
                                                                                                        x_2 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, w_2, (ATerm)ATempty, x_2);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            w_2 = ATgetArgument(t, 0);
                                                                                                            x_2 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, x_2, w_2);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                w_2 = ATgetArgument(t, 0);
                                                                                                                x_2 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, w_2, x_2, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    w_2 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, w_2, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        w_2 = ATgetArgument(t, 0);
                                                                                                                        x_2 = ATgetArgument(t, 1);
                                                                                                                        t_2 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, w_2, x_2, (ATerm)ATempty, t_2);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            w_2 = ATgetArgument(t, 0);
                                                                                                                            x_2 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_2, (ATerm)ATempty, (ATerm)ATempty, x_2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                w_2 = ATgetArgument(t, 0);
                                                                                                                                x_2 = ATgetArgument(t, 1);
                                                                                                                                t_2 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, w_2, x_2, (ATerm)ATempty, t_2);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    w_2 = ATgetArgument(t, 0);
                                                                                                                                    x_2 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, w_2, (ATerm)ATempty, (ATerm)ATempty, x_2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        w_2 = ATgetArgument(t, 0);
                                                                                                                                        x_2 = ATgetArgument(t, 1);
                                                                                                                                        t_2 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, w_2, x_2, (ATerm)ATempty, t_2);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            w_2 = ATgetArgument(t, 0);
                                                                                                                                            x_2 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, w_2, (ATerm)ATempty, (ATerm)ATempty, x_2);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm a_26 = ATgetArgument(t, 0);
                                                                                                                                                x_2 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, x_2);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  w_6 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      x_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      {
        ATerm b_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
        t = w_6;
        t = new_0_0(t);
        b_7 = t;
        t = new_0_0(t);
        d_7 = t;
        t = new_0_0(t);
        e_7 = t;
        t = new_0_0(t);
        f_7 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_7), e_7), d_7), b_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, b_7), (ATerm) ATmakeAppl(sym_Var_1, e_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, x_6, (ATerm)ATmakeAppl(sym_Var_1, b_7), (ATerm) ATmakeAppl(sym_Var_1, d_7)), (ATerm) ATmakeAppl(sym_BAM_3, v_6, (ATerm)ATmakeAppl(sym_Var_1, e_7), (ATerm) ATmakeAppl(sym_Var_1, f_7)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_c_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_7)), (ATerm) ATmakeAppl(sym_Var_1, d_7))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          x_6 = ATgetArgument(t, 0);
          {
            ATerm h_7 = NULL,i_7 = NULL,k_7 = NULL,l_7 = NULL;
            t = w_6;
            t = new_0_0(t);
            k_7 = t;
            t = x_6;
            {
              static ATerm q_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((h_7 != NULL) && (h_7 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      h_7 = ATgetArgument(t, 0);
                    if(((i_7 != NULL) && (i_7 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      i_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, k_7);
                return(t);
              }
              t = oncetd_1_0(q_1, t);
            }
            l_7 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_7)), not_null(h_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_7)), (ATerm) ATmakeAppl(sym_Build_1, l_7))));
          }
        }
      else
        {
          ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              x_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_6;
          t = new_0_0(t);
          q_7 = t;
          t = new_0_0(t);
          r_7 = t;
          t = x_6;
          {
            static ATerm r_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((o_7 != NULL) && (o_7 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    o_7 = ATgetArgument(t, 0);
                  if(((p_7 != NULL) && (p_7 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    p_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, q_7);
              return(t);
            }
            t = oncetd_1_0(r_1, t);
          }
          s_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_7), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_7)), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_26, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_7))))), (ATerm)ATmakeAppl(sym_Var_1, q_7), (ATerm) ATmakeAppl(sym_Op_2, term_l_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_7)), not_null(o_7)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm x_7 = NULL,c_8 = NULL;
  x_7 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
        t = x_7;
        t = new_0_0(t);
        g_8 = t;
        t = c_8;
        {
          static ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((e_8 != NULL) && (e_8 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_8 = ATgetArgument(t, 0);
                if(((f_8 != NULL) && (f_8 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  f_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_8), e_8);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_8), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_26, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_8))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_8))))));
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_8 = NULL,l_8 = NULL,n_8 = NULL;
              t = x_7;
              t = new_0_0(t);
              l_8 = t;
              t = c_8;
              {
                static ATerm z_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((k_8 != NULL) && (k_8 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_8);
                  return(t);
                }
                t = pat_td_1_0(z_1, t);
              }
              n_8 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_8)), not_null(k_8))));
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              {
                ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,v_8 = NULL;
                t = x_7;
                t = new_0_0(t);
                s_8 = t;
                t = c_8;
                {
                  static ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((r_8 != NULL) && (r_8 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          r_8 = ATgetArgument(t, 0);
                        if(((q_8 != NULL) && (q_8 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_8);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                }
                v_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_8)), not_null(r_8)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm d_142 (ATerm), ATerm t)
{
  ATerm o_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_142(t);
      LocalPopChoice(q_26);
    }
  else
    {
      t = o_26;
      {
        ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
        n_15 = t;
        if(match_cons(t, sym_Op_2))
          {
            o_15 = ATgetArgument(t, 0);
            p_15 = ATgetArgument(t, 1);
            {
              ATerm k_2 = NULL,u_2 = NULL,t_1 = NULL;
              t = SSLgetAnnotations(n_15);
              k_2 = t;
              t = p_15;
              {
                static ATerm h_2 (ATerm t)
                {
                  t = pat_td_1_0(d_142, t);
                  return(t);
                }
                t = fetch_1_0(h_2, t);
              }
              u_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, o_15, u_2);
              t_1 = t;
              t = SSLsetAnnotations(t_1, k_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                o_15 = ATgetArgument(t, 0);
                p_15 = ATgetArgument(t, 1);
                {
                  ATerm r_26 = t;
                  int u_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_5 = NULL,y_5 = NULL,u_1 = NULL;
                      t = SSLgetAnnotations(n_15);
                      l_5 = t;
                      t = p_15;
                      t = pat_td_1_0(d_142, t);
                      y_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, o_15, y_5);
                      u_1 = t;
                      t = SSLsetAnnotations(u_1, l_5);
                      LocalPopChoice(u_26);
                    }
                  else
                    {
                      t = r_26;
                      {
                        ATerm l_6 = NULL,o_6 = NULL,v_1 = NULL;
                        t = SSLgetAnnotations(n_15);
                        l_6 = t;
                        t = o_15;
                        t = pat_td_1_0(d_142, t);
                        o_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, o_6, p_15);
                        v_1 = t;
                        t = SSLsetAnnotations(v_1, l_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    o_15 = ATgetArgument(t, 0);
                    p_15 = ATgetArgument(t, 1);
                    m_15 = ATgetArgument(t, 2);
                    {
                      ATerm g_7 = NULL,v_7 = NULL,w_1 = NULL;
                      t = SSLgetAnnotations(n_15);
                      g_7 = t;
                      t = m_15;
                      {
                        static ATerm m_2 (ATerm t)
                        {
                          t = pat_td_1_0(d_142, t);
                          return(t);
                        }
                        t = fetch_1_0(m_2, t);
                      }
                      v_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, o_15, p_15, v_7);
                      w_1 = t;
                      t = SSLsetAnnotations(w_1, g_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        o_15 = ATgetArgument(t, 0);
                        p_15 = ATgetArgument(t, 1);
                        m_15 = ATgetArgument(t, 2);
                        {
                          ATerm u_8 = NULL,z_8 = NULL,d_6 = NULL;
                          t = SSLgetAnnotations(n_15);
                          u_8 = t;
                          t = m_15;
                          {
                            static ATerm o_2 (ATerm t)
                            {
                              t = pat_td_1_0(d_142, t);
                              return(t);
                            }
                            t = fetch_1_0(o_2, t);
                          }
                          z_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, o_15, p_15, z_8);
                          d_6 = t;
                          t = SSLsetAnnotations(d_6, u_8);
                        }
                      }
                    else
                      {
                        ATerm i_9 = NULL,l_9 = NULL,o_9 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            o_15 = ATgetArgument(t, 0);
                            p_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(n_15);
                        i_9 = t;
                        t = p_15;
                        t = pat_td_1_0(d_142, t);
                        l_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, o_15, l_9);
                        o_9 = t;
                        t = SSLsetAnnotations(o_9, i_9);
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
  ATerm a_16 = NULL,b_16 = NULL;
  a_16 = t;
  if(match_cons(t, sym_Build_1))
    {
      b_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_16 = NULL,f_16 = NULL,i_16 = NULL,j_16 = NULL;
        t = a_16;
        t = new_0_0(t);
        i_16 = t;
        t = b_16;
        {
          static ATerm y_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((c_16 != NULL) && (c_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_16 = ATgetArgument(t, 0);
                if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  f_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_16);
            return(t);
          }
          t = pat_td_1_0(y_2, t);
        }
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_16)), not_null(c_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_16)))), (ATerm) ATmakeAppl(sym_Build_1, j_16)));
        LocalPopChoice(z_26);
      }
    else
      {
        t = w_26;
        {
          ATerm g_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_16 = NULL,m_16 = NULL,p_16 = NULL;
              t = a_16;
              t = new_0_0(t);
              m_16 = t;
              t = b_16;
              {
                static ATerm z_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((k_16 != NULL) && (k_16 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_16);
                  return(t);
                }
                t = pat_td_1_0(z_2, t);
              }
              p_16 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_16)))), (ATerm) ATmakeAppl(sym_Build_1, p_16)));
              LocalPopChoice(h_27);
            }
          else
            {
              t = g_27;
              {
                ATerm t_16 = NULL,u_16 = NULL,w_16 = NULL,x_16 = NULL;
                t = a_16;
                t = new_0_0(t);
                w_16 = t;
                t = b_16;
                {
                  static ATerm b_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((t_16 != NULL) && (t_16 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          t_16 = ATgetArgument(t, 0);
                        if(((u_16 != NULL) && (u_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_16);
                    return(t);
                  }
                  t = pat_td_1_0(b_3, t);
                }
                x_16 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_16), not_null(u_16), (ATerm) ATmakeAppl(sym_Var_1, w_16))), (ATerm) ATmakeAppl(sym_Build_1, x_16)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm i_27 = t;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,d_10 = NULL;
      t_17 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_17);
      r_17 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_17);
      d_10 = t;
      t = SSLsetAnnotations(d_10, r_17);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_27;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_27;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_17 = ATgetFirst((ATermList) t);
      z_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_17, z_17);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(match_cons(l_27, sym__2))
        {
          a_18 = ATgetArgument(l_27, 0);
          b_18 = ATgetArgument(l_27, 1);
        }
      else
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(match_cons(n_27, sym__2))
          {
            c_18 = ATgetArgument(n_27, 0);
            d_18 = ATgetArgument(n_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_18), a_18), (ATerm) ATinsert(CheckATermList(d_18), b_18));
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_27;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm e_18 = NULL,g_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_18 = ATgetFirst((ATermList) t);
      g_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_18, g_18);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm h_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(match_cons(o_27, sym__2))
        {
          h_18 = ATgetArgument(o_27, 0);
          m_18 = ATgetArgument(o_27, 1);
        }
      else
        _fail(t);
      {
        ATerm s_27 = ATgetArgument(t, 1);
        if(match_cons(s_27, sym__2))
          {
            n_18 = ATgetArgument(s_27, 0);
            o_18 = ATgetArgument(s_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_18), h_18), (ATerm) ATinsert(CheckATermList(o_18), m_18));
  return(t);
}
static ATerm n_9 (ATerm x_78, ATerm y_78, ATerm z_78, ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,q_17 = NULL,e_10 = NULL;
  t = z_78;
  t = fetch_1_0(e_3, t);
  t = z_78;
  t = genzip_4_0(f_3, g_3, h_3, LiftPrimArg_0_0, t);
  q_17 = t;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  h_17 = t;
  t = i_17;
  t = concat_0_0(t);
  k_17 = t;
  t = j_17;
  t = genzip_4_0(i_3, j_3, k_3, _id, t);
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
  e_10 = t;
  t = SSLsetAnnotations(e_10, h_17);
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      {
        ATerm t_27 = ATgetArgument(t, 1);
        if(match_cons(t_27, sym__2))
          {
            f_17 = ATgetArgument(t_27, 0);
            g_17 = ATgetArgument(t_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, e_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_17), (ATerm) ATmakeAppl(sym_CallT_3, x_78, y_78, g_17)));
  return(t);
}
static ATerm k_19 (ATerm b_19, ATerm t)
{
  ATerm d_19 = NULL;
  t = b_19;
  {
    ATerm u_27 = t;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,c_11 = NULL;
        g_19 = t;
        if(match_cons(t, sym_Var_1))
          {
            f_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_19);
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, f_19);
        c_11 = t;
        t = SSLsetAnnotations(c_11, e_19);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_27;
      }
  }
  t = new_0_0(t);
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_19), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_19), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_19)))), (ATerm) ATmakeAppl(sym_Var_1, d_19)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  h_19 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_19 = ATgetArgument(t, 0);
      {
        ATerm v_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_19(h_19, t);
            LocalPopChoice(y_27);
          }
        else
          {
            t = v_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_z_25, (ATerm) ATmakeAppl(sym_Var_1, i_19)));
          }
      }
    }
  else
    {
      t = k_19(h_19, t);
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm z_27 = t;
  if((PushChoice() == 0))
    {
      ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,l_11 = NULL;
      t_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_10);
      r_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_10);
      l_11 = t;
      t = SSLsetAnnotations(l_11, r_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_27;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_27;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_10 = ATgetFirst((ATermList) t);
      v_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_10, v_10);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm w_10 = NULL,y_10 = NULL,d_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if(match_cons(a_28, sym__2))
        {
          w_10 = ATgetArgument(a_28, 0);
          y_10 = ATgetArgument(a_28, 1);
        }
      else
        _fail(t);
      {
        ATerm b_28 = ATgetArgument(t, 1);
        if(match_cons(b_28, sym__2))
          {
            d_11 = ATgetArgument(b_28, 0);
            e_11 = ATgetArgument(b_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_11), w_10), (ATerm) ATinsert(CheckATermList(e_11), y_10));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_27;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm f_11 = NULL,h_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_11 = ATgetFirst((ATermList) t);
      h_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_11, h_11);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm j_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      if(match_cons(c_28, sym__2))
        {
          j_11 = ATgetArgument(c_28, 0);
          m_11 = ATgetArgument(c_28, 1);
        }
      else
        _fail(t);
      {
        ATerm d_28 = ATgetArgument(t, 1);
        if(match_cons(d_28, sym__2))
          {
            n_11 = ATgetArgument(d_28, 0);
            o_11 = ATgetArgument(d_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_11), j_11), (ATerm) ATinsert(CheckATermList(o_11), m_11));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm e_28 = t;
  if((PushChoice() == 0))
    {
      ATerm v_12 = NULL,w_12 = NULL,a_13 = NULL,q_11 = NULL;
      a_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_13);
      v_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_12);
      q_11 = t;
      t = SSLsetAnnotations(q_11, v_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_28;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_27;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_13 = ATgetFirst((ATermList) t);
      g_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_13, g_13);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,v_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      if(match_cons(f_28, sym__2))
        {
          s_14 = ATgetArgument(f_28, 0);
          t_14 = ATgetArgument(f_28, 1);
        }
      else
        _fail(t);
      {
        ATerm g_28 = ATgetArgument(t, 1);
        if(match_cons(g_28, sym__2))
          {
            v_14 = ATgetArgument(g_28, 0);
            x_14 = ATgetArgument(g_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_14), s_14), (ATerm) ATinsert(CheckATermList(x_14), t_14));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_27;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_14 = ATgetFirst((ATermList) t);
      z_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_14, z_14);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,f_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(match_cons(h_28, sym__2))
        {
          a_15 = ATgetArgument(h_28, 0);
          b_15 = ATgetArgument(h_28, 1);
        }
      else
        _fail(t);
      {
        ATerm i_28 = ATgetArgument(t, 1);
        if(match_cons(i_28, sym__2))
          {
            f_15 = ATgetArgument(i_28, 0);
            g_15 = ATgetArgument(i_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_15), a_15), (ATerm) ATinsert(CheckATermList(g_15), b_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,l_24 = NULL,m_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
      h_24 = ATgetArgument(t, 2);
      {
        ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,p_11 = NULL;
        t = h_24;
        t = fetch_1_0(l_3, t);
        t = h_24;
        t = genzip_4_0(m_3, n_3, o_3, LiftPrimArg_0_0, t);
        q_10 = t;
        if(match_cons(t, sym__2))
          {
            m_10 = ATgetArgument(t, 0);
            n_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_10);
        l_10 = t;
        t = m_10;
        t = concat_0_0(t);
        o_10 = t;
        t = n_10;
        t = genzip_4_0(p_3, q_3, r_3, _id, t);
        p_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_10, p_10);
        p_11 = t;
        t = SSLsetAnnotations(p_11, l_10);
        if(match_cons(t, sym__2))
          {
            i_10 = ATgetArgument(t, 0);
            {
              ATerm j_28 = ATgetArgument(t, 1);
              if(match_cons(j_28, sym__2))
                {
                  j_10 = ATgetArgument(j_28, 0);
                  k_10 = ATgetArgument(j_28, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_10), (ATerm) ATmakeAppl(sym_PrimT_3, l_24, m_24, k_10)));
      }
    }
  else
    {
      ATerm f_12 = NULL,i_12 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,r_12 = NULL,s_12 = NULL,t_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          l_24 = ATgetArgument(t, 0);
          m_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_24;
      t = fetch_1_0(s_3, t);
      t = m_24;
      t = genzip_4_0(t_3, w_3, z_3, LiftPrimArg_0_0, t);
      s_12 = t;
      if(match_cons(t, sym__2))
        {
          m_12 = ATgetArgument(t, 0);
          n_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_12);
      l_12 = t;
      t = m_12;
      t = concat_0_0(t);
      o_12 = t;
      t = n_12;
      t = genzip_4_0(a_4, b_4, c_4, _id, t);
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_12, r_12);
      t_11 = t;
      t = SSLsetAnnotations(t_11, l_12);
      if(match_cons(t, sym__2))
        {
          f_12 = ATgetArgument(t, 0);
          {
            ATerm k_28 = ATgetArgument(t, 1);
            if(match_cons(k_28, sym__2))
              {
                i_12 = ATgetArgument(k_28, 0);
                j_12 = ATgetArgument(k_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_12), (ATerm) ATmakeAppl(sym_PrimT_3, l_24, (ATerm)ATempty, j_12)));
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,j_27 = NULL;
  j_27 = t;
  if(match_cons(t, sym_Con_3))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
      c_27 = ATgetArgument(t, 2);
      {
        ATerm e_16 = NULL,h_12 = NULL;
        t = SSLgetAnnotations(j_27);
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, a_27, b_27, c_27);
        h_12 = t;
        t = SSLsetAnnotations(h_12, e_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = j_27;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm l_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_28;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  if(match_cons(t, sym_Con_3))
    {
      f_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
      d_29 = ATgetArgument(t, 2);
      {
        ATerm m_17 = NULL,p_12 = NULL;
        t = SSLgetAnnotations(e_29);
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_29, g_29, d_29);
        p_12 = t;
        t = SSLsetAnnotations(p_12, m_17);
      }
    }
  else
    {
      ATerm l_18 = NULL,q_12 = NULL;
      if(match_cons(t, sym_App_2))
        {
          f_29 = ATgetArgument(t, 0);
          g_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_29);
      l_18 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, f_29, g_29);
      q_12 = t;
      t = SSLsetAnnotations(q_12, l_18);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm m_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(e_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm q_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      q_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_29;
  if(match_cons(t, sym_StratRule_3))
    {
      s_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
      u_29 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_29), (ATerm) ATmakeAppl(sym_Where_1, u_29)), s_29));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          s_29 = ATgetArgument(t, 0);
          t_29 = ATgetArgument(t, 1);
          u_29 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_29;
      t = pureterm_0_0(t);
      t = t_29;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, t_29)), (ATerm) ATmakeAppl(sym_Where_1, u_29)), (ATerm) ATmakeAppl(sym_Match_1, s_29)));
    }
  return(t);
}
static ATerm r_9 (ATerm k_74, ATerm l_74, ATerm m_74, ATerm t)
{
  ATerm f_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,l_30 = NULL,q_30 = NULL,s_30 = NULL;
  t = new_0_0(t);
  l_30 = t;
  t = k_74;
  {
    static ATerm f_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm n_28 = ATgetArgument(t, 0);
          if(match_cons(n_28, sym_Var_1))
            {
              if(((j_30 != NULL) && (j_30 != ATgetArgument(n_28, 0))))
                _fail(ATgetArgument(n_28, 0));
              else
                j_30 = ATgetArgument(n_28, 0);
            }
          else
            _fail(t);
          if(((h_30 != NULL) && (h_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_30 = ATgetArgument(t, 1);
          {
            ATerm o_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_30);
      return(t);
    }
    t = oncetd_1_0(f_4, t);
  }
  q_30 = t;
  t = l_74;
  {
    static ATerm g_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_28 = ATgetArgument(t, 0);
          if(match_cons(p_28, sym_Var_1))
            {
              if(((j_30 != NULL) && (j_30 != ATgetArgument(p_28, 0))))
                _fail(ATgetArgument(p_28, 0));
              else
                j_30 = ATgetArgument(p_28, 0);
            }
          else
            _fail(t);
          if(((i_30 != NULL) && (i_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_30 = ATgetArgument(t, 1);
          {
            ATerm q_28 = ATgetArgument(t, 2);
            if(match_cons(q_28, sym_CallT_3))
              {
                if(((f_30 != NULL) && (f_30 != ATgetArgument(q_28, 0))))
                  _fail(ATgetArgument(q_28, 0));
                else
                  f_30 = ATgetArgument(q_28, 0);
                {
                  ATerm r_28 = ATgetArgument(q_28, 1);
                  if(((ATgetType(r_28) != AT_LIST) || !(ATisEmpty(r_28))))
                    _fail(t);
                }
                {
                  ATerm s_28 = ATgetArgument(q_28, 2);
                  if(((ATgetType(s_28) != AT_LIST) || !(ATisEmpty(s_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, l_30);
      return(t);
    }
    t = oncetd_1_0(g_4, t);
  }
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_30), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, q_30, s_30, (ATerm) ATmakeAppl(sym_Seq_2, m_74, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(f_30), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_30), not_null(i_30), term_z_25))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_30)), (ATerm) ATmakeAppl(sym_Var_1, l_30))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_28 = t;
      int w_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,t_31 = NULL,u_31 = NULL,b_32 = NULL;
          t_31 = t;
          if(match_cons(t, sym_SRule_1))
            {
              u_31 = ATgetArgument(t, 0);
              t = u_31;
              if(match_cons(t, sym_Rule_3))
                {
                  o_31 = ATgetArgument(t, 0);
                  p_31 = ATgetArgument(t, 1);
                  q_31 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_31;
              t = r_9(o_31, p_31, q_31, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm z_18 = NULL,m_19 = NULL,h_13 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  u_31 = ATgetArgument(t, 0);
                  b_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_31);
              z_18 = t;
              t = b_32;
              t = desugarRule_0_0(t);
              m_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, u_31, m_19);
              h_13 = t;
              t = SSLsetAnnotations(h_13, z_18);
            }
          LocalPopChoice(w_28);
        }
      else
        {
          t = v_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
    }
  t = repeat_2_0(i_4, _id, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
            x_32 = t;
            if(match_cons(t, sym_CallT_3))
              {
                a_33 = ATgetArgument(t, 0);
                b_33 = ATgetArgument(t, 1);
                c_33 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_32;
            t = n_9(a_33, b_33, c_33, t);
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            {
              ATerm h_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(i_29);
                }
              else
                {
                  t = h_29;
                  {
                    ATerm j_29 = t;
                    int k_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(k_29);
                      }
                    else
                      {
                        t = j_29;
                        {
                          ATerm l_29 = t;
                          int n_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_29 = t;
                              int r_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      f_34 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_34;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      g_34 = ATgetArgument(t, 0);
                                      t = g_34;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          g_34 = ATgetArgument(t, 0);
                                          h_34 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, g_34, h_34);
                                    }
                                  LocalPopChoice(r_29);
                                }
                              else
                                {
                                  t = p_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(n_29);
                            }
                          else
                            {
                              t = l_29;
                              {
                                ATerm v_29 = t;
                                int w_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(w_29);
                                  }
                                else
                                  {
                                    t = v_29;
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
  t = topdown_1_0(h_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm s_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_22);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_23 = NULL,j_23 = NULL,l_23 = NULL,m_23 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_23 = ATgetArgument(t, 0);
                      j_23 = ATgetArgument(t, 1);
                      l_23 = ATgetArgument(t, 2);
                      m_23 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_23;
                  t = map_1_0(p_4, t);
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
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
  ATerm w_23 = NULL;
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_23 = ATgetArgument(t, 0);
          {
            ATerm g_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_30);
      t = w_23;
    }
  else
    {
      t = d_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_23;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_k_30;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  z_37 = t;
  if(match_cons(t, sym_Seq_2))
    {
      a_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_38;
  if(match_cons(t, sym_CallT_3))
    {
      d_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
      g_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_38;
  if(match_cons(t, sym_SVar_1))
    {
      e_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_38;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = f_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = g_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = h_38;
  if(match_cons(t, sym_Seq_2))
    {
      k_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_38;
  if(match_cons(t, sym_Match_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_38;
  if(match_cons(t, sym_Seq_2))
    {
      n_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_38;
  if(match_cons(t, sym_Where_1))
    {
      q_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_38;
  if(match_cons(t, sym_Build_1))
    {
      s_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,q_21 = NULL,r_21 = NULL;
        t = term_b_31;
        q_21 = t;
        t = term_c_31;
        r_21 = t;
        t = term_d_31;
        t = k_13(r_21, q_21, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_31) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            m_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_38, s_38);
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym__3, m_20, l_38, (ATerm) ATmakeAppl(sym__2, q_38, s_38));
        t = b_11(m_20, l_38, x_20, t);
        if(match_cons(t, sym__2))
          {
            v_20 = ATgetArgument(t, 0);
            w_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, v_20), (ATerm) ATmakeAppl(sym_Build_1, w_20)));
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        {
          ATerm j_22 = NULL,r_22 = NULL,n_24 = NULL,o_24 = NULL;
          t = term_b_31;
          n_24 = t;
          t = term_c_31;
          o_24 = t;
          t = term_d_31;
          t = k_13(o_24, n_24, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm f_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_31) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              j_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_38;
          t = free_vars_3_0(l_4, o_4, tboundin_3_0, t);
          {
            static ATerm r_4 (ATerm t)
            {
              static ATerm s_4 (ATerm t)
              {
                ATerm z_23 = NULL,b_24 = NULL,c_24 = NULL;
                z_23 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, j_22, (ATerm) ATmakeAppl(sym_Var_1, z_23));
                b_24 = t;
                t = term_h_31;
                c_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, j_22, (ATerm) ATmakeAppl(sym_Var_1, z_23)), term_h_31);
                t = l_13(t_4, b_24, c_24, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_23);
                return(t);
              }
              t = map_1_0(s_4, t);
              t = (ATerm) ATmakeAppl(sym__2, q_38, s_38);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((r_22 != NULL) && (r_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_22 = ATgetArgument(t, 0);
                  {
                    ATerm k_31 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(q_4, r_4, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(r_22)), (ATerm) ATmakeAppl(sym_Build_1, s_38)));
        }
      }
  }
  return(t);
}
static ATerm r_40 (ATerm t_39, ATerm u_39, ATerm t)
{
  ATerm w_24 = NULL;
  t = term_k_30;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_30, u_39);
  t = k_13(w_24, u_39, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_31) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = t_39;
  return(t);
}
static ATerm s_40 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm b_25 = NULL;
  t = term_k_30;
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_30, a_40);
  t = k_13(b_25, a_40, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm m_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_31) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = z_39;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm f_40 = NULL,l_40 = NULL,p_40 = NULL;
  l_40 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      p_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_40;
  if(match_cons(t, sym_Var_1))
    {
      f_40 = ATgetArgument(t, 0);
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_25 = NULL;
            t = term_k_30;
            m_25 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_k_30, l_40);
            t = k_13(m_25, l_40, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm v_31 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_31) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, f_40);
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            {
              ATerm w_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_40(p_40, l_40, t);
                  LocalPopChoice(y_31);
                }
              else
                {
                  t = w_31;
                  t = s_40(p_40, l_40, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm c_32 = t;
      int d_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_40(p_40, l_40, t);
          LocalPopChoice(d_32);
        }
      else
        {
          t = c_32;
          t = s_40(p_40, l_40, t);
        }
    }
  return(t);
}
static ATerm a_11 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  u_40 = t;
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_43, n_43);
        t = c_14(m_43, n_43, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_32 = ATgetFirst((ATermList) t);
            t_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_32);
        {
          ATerm v_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, m_43, n_43, t_40);
          t = lookup_table_0_1(m_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_14(n_43, t_40, v_40, t);
          t = (ATerm) ATmakeAppl(sym__3, m_43, n_43, t_40);
        }
      }
    else
      {
        t = e_32;
        {
          ATerm z_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, m_43, n_43);
          t = lookup_table_0_1(m_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_14(n_43, z_40, t);
          t = (ATerm) ATmakeAppl(sym__2, m_43, n_43);
        }
      }
  }
  t = u_40;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,e_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,l_41 = NULL,n_41 = NULL;
  h_41 = t;
  t = a_119(t);
  g_41 = t;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_41 = NULL;
        t = term_j_32;
        r_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_41, term_j_32);
        t = c_14(g_41, r_41, t);
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_41 = ATgetFirst((ATermList) t);
      b_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_41, term_j_32, b_41);
  t = lookup_table_0_1(g_41, t);
  n_41 = t;
  t = term_j_32;
  i_41 = t;
  t = n_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(i_41, b_41, l_41, t);
  t = e_41;
  {
    static ATerm u_4 (ATerm t)
    {
      ATerm t_41 = NULL;
      t_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_41, t_41);
      t = a_11(g_41, t_41, t);
      return(t);
    }
    t = map_1_0(u_4, t);
  }
  t = h_41;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_113(t);
      t = h_113(t);
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      t = h_113(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm l_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
  n_42 = t;
  t = z_118(t);
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_42, term_j_32);
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_42 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_32 = ATgetArgument(t, 0);
            ATerm r_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_32;
        w_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_42, term_j_32);
        t = c_14(l_42, w_42, t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = (ATerm) ATempty;
      }
  }
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_42, term_j_32, (ATerm) ATinsert(CheckATermList(o_42), (ATerm) ATempty));
  t = lookup_table_0_1(l_42, t);
  s_42 = t;
  t = term_j_32;
  p_42 = t;
  t = (ATerm) ATinsert(CheckATermList(o_42), (ATerm) ATempty);
  q_42 = t;
  t = s_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(p_42, q_42, r_42, t);
  t = n_42;
  return(t);
}
ATerm scope_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t)
{
  static ATerm v_4 (ATerm t)
  {
    t = end_scope_1_0(b_119, t);
    return(t);
  }
  t = begin_scope_1_0(b_119, t);
  t = restore_always_2_0(c_119, v_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_k_30;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm c_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_43);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm u_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_32);
          }
        else
          {
            t = u_32;
            {
              ATerm y_32 = t;
              int p_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_43 = NULL,k_43 = NULL,o_43 = NULL,r_43 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_43 = ATgetArgument(t, 0);
                      k_43 = ATgetArgument(t, 1);
                      o_43 = ATgetArgument(t, 2);
                      r_43 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_43;
                  t = map_1_0(a_5, t);
                  LocalPopChoice(p_33);
                }
              else
                {
                  t = y_32;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_44 = NULL;
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_44 = ATgetArgument(t, 0);
          {
            ATerm t_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_33);
      t = c_44;
    }
  else
    {
      t = q_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_44;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_k_30;
  return(t);
}
static ATerm b_11 (ATerm q_25, ATerm p_25, ATerm r_25, ATerm t)
{
  ATerm b_43 = NULL;
  static ATerm x_4 (ATerm t)
  {
    t = p_25;
    t = free_vars_3_0(y_4, z_4, tboundin_3_0, t);
    {
      static ATerm b_5 (ATerm t)
      {
        ATerm g_44 = NULL,i_44 = NULL,j_44 = NULL;
        g_44 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, q_25, (ATerm) ATmakeAppl(sym_Var_1, g_44));
        i_44 = t;
        t = term_v_33;
        j_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, q_25, (ATerm) ATmakeAppl(sym_Var_1, g_44)), term_v_33);
        t = l_13(c_5, i_44, j_44, t);
        t = g_44;
        return(t);
      }
      t = map_1_0(b_5, t);
    }
    t = r_25;
    t = alltd_1_0(Replace_0_0, t);
    if(((b_43 != NULL) && (b_43 != t)))
      _fail(t);
    else
      b_43 = t;
    return(t);
  }
  t = scope_2_0(w_4, x_4, t);
  t = not_null(b_43);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm v_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_26);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            {
              ATerm a_34 = t;
              int c_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_26 = NULL,y_26 = NULL,d_27 = NULL,e_27 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_26 = ATgetArgument(t, 0);
                      y_26 = ATgetArgument(t, 1);
                      d_27 = ATgetArgument(t, 2);
                      e_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_27;
                  t = map_1_0(f_5, t);
                  LocalPopChoice(c_34);
                }
              else
                {
                  t = a_34;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm m_27 = NULL;
  ATerm d_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_27 = ATgetArgument(t, 0);
          {
            ATerm l_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_34);
      t = m_27;
    }
  else
    {
      t = d_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_27;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_k_30;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,b_49 = NULL,e_49 = NULL,g_49 = NULL;
  r_48 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_48 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_48;
  if(match_cons(t, sym_CallT_3))
    {
      t_48 = ATgetArgument(t, 0);
      v_48 = ATgetArgument(t, 1);
      w_48 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_48;
  if(match_cons(t, sym_SVar_1))
    {
      u_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_48;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = v_48;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = w_48;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = x_48;
  if(match_cons(t, sym_Seq_2))
    {
      y_48 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_48;
  if(match_cons(t, sym_Match_1))
    {
      b_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_49;
  if(match_cons(t, sym_Build_1))
    {
      g_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL,e_26 = NULL,i_26 = NULL,j_26 = NULL;
        t = term_u_34;
        i_26 = t;
        t = term_y_34;
        j_26 = t;
        t = term_z_34;
        t = k_13(j_26, i_26, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm a_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_35) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            b_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, b_26, b_49, g_49);
        t = b_11(b_26, b_49, g_49, t);
        e_26 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_49), (ATerm) ATmakeAppl(sym_Build_1, e_26));
        LocalPopChoice(o_34);
      }
    else
      {
        t = m_34;
        {
          ATerm p_26 = NULL,s_26 = NULL,w_27 = NULL,x_27 = NULL;
          t = term_u_34;
          w_27 = t;
          t = term_y_34;
          x_27 = t;
          t = term_z_34;
          t = k_13(x_27, w_27, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm b_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_35) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              p_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_49;
          t = free_vars_3_0(d_5, e_5, tboundin_3_0, t);
          {
            static ATerm h_5 (ATerm t)
            {
              static ATerm i_5 (ATerm t)
              {
                ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
                p_27 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, p_26, (ATerm) ATmakeAppl(sym_Var_1, p_27));
                q_27 = t;
                t = term_d_35;
                r_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, p_26, (ATerm) ATmakeAppl(sym_Var_1, p_27)), term_d_35);
                t = l_13(j_5, q_27, r_27, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_27);
                return(t);
              }
              t = map_1_0(i_5, t);
              t = g_49;
              t = alltd_1_0(Replace_0_0, t);
              if(((s_26 != NULL) && (s_26 != t)))
                _fail(t);
              else
                s_26 = t;
              return(t);
            }
            t = scope_2_0(g_5, h_5, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_49), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_26)));
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  static ATerm k_5 (ATerm t)
  {
    ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
    f_52 = t;
    if(match_cons(t, sym_Seq_2))
      {
        r_51 = ATgetArgument(t, 0);
        c_52 = ATgetArgument(t, 1);
        t = r_51;
        if(match_cons(t, sym_Choice_2))
          {
            s_51 = ATgetArgument(t, 0);
            u_51 = ATgetArgument(t, 1);
            {
              ATerm e_35 = t;
              int f_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_29 = NULL,o_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_h_35, c_52);
                  m_29 = t;
                  t = term_i_35;
                  o_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_i_35, (ATerm) ATmakeAppl(sym_Seq_2, term_h_35, c_52));
                  t = k_13(o_29, m_29, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm j_35 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) j_35) != ATmakeSymbol("y_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, s_51, c_52), (ATerm) ATmakeAppl(sym_Seq_2, u_51, c_52));
                  t = bottomup_1_0(k_5, t);
                  LocalPopChoice(f_35);
                }
              else
                {
                  t = e_35;
                  t = f_52;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                s_51 = ATgetArgument(t, 0);
                u_51 = ATgetArgument(t, 1);
                {
                  ATerm k_35 = t;
                  int l_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_30 = NULL,t_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_35, c_52);
                      r_30 = t;
                      t = term_n_35;
                      t_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_n_35, (ATerm) ATmakeAppl(sym_Seq_2, term_m_35, c_52));
                      t = k_13(t_30, r_30, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm o_35 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) o_35) != ATmakeSymbol("a_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, s_51, c_52), (ATerm) ATmakeAppl(sym_Seq_2, u_51, c_52));
                      t = bottomup_1_0(k_5, t);
                      LocalPopChoice(l_35);
                    }
                  else
                    {
                      t = k_35;
                      t = f_52;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    s_51 = ATgetArgument(t, 0);
                    u_51 = ATgetArgument(t, 1);
                    {
                      ATerm q_35 = t;
                      int r_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_52 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_51, c_52);
                          t = k_5(t);
                          n_52 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_51, n_52);
                          t = k_5(t);
                          LocalPopChoice(r_35);
                        }
                      else
                        {
                          t = q_35;
                          t = f_52;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        s_51 = ATgetArgument(t, 0);
                        u_51 = ATgetArgument(t, 1);
                        {
                          ATerm s_35 = t;
                          int t_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_52 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_51, c_52);
                              t = k_5(t);
                              y_52 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_51, y_52);
                              t = k_5(t);
                              LocalPopChoice(t_35);
                            }
                          else
                            {
                              t = s_35;
                              t = f_52;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            s_51 = ATgetArgument(t, 0);
                            {
                              ATerm u_35 = t;
                              int v_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_53 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, c_52, s_51);
                                  t = k_5(t);
                                  k_53 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, k_53);
                                  t = k_5(t);
                                  LocalPopChoice(v_35);
                                }
                              else
                                {
                                  t = u_35;
                                  t = f_52;
                                }
                            }
                          }
                        else
                          {
                            t = f_52;
                          }
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_LChoice_2))
          {
            r_51 = ATgetArgument(t, 0);
            c_52 = ATgetArgument(t, 1);
            t = r_51;
            if(match_cons(t, sym_LChoice_2))
              {
                s_51 = ATgetArgument(t, 0);
                u_51 = ATgetArgument(t, 1);
                {
                  ATerm w_35 = t;
                  int x_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_53 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, u_51, c_52);
                      t = k_5(t);
                      q_53 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, s_51, q_53);
                      t = k_5(t);
                      LocalPopChoice(x_35);
                    }
                  else
                    {
                      t = w_35;
                      t = f_52;
                    }
                }
              }
            else
              {
                t = f_52;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                r_51 = ATgetArgument(t, 0);
                c_52 = ATgetArgument(t, 1);
                t = r_51;
                if(match_cons(t, sym_Choice_2))
                  {
                    s_51 = ATgetArgument(t, 0);
                    u_51 = ATgetArgument(t, 1);
                    {
                      ATerm y_35 = t;
                      int z_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_54 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, u_51, c_52);
                          t = k_5(t);
                          i_54 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, s_51, i_54);
                          t = k_5(t);
                          LocalPopChoice(z_35);
                        }
                      else
                        {
                          t = y_35;
                          t = f_52;
                        }
                    }
                  }
                else
                  {
                    t = f_52;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    r_51 = ATgetArgument(t, 0);
                    c_52 = ATgetArgument(t, 1);
                    t = c_52;
                    if(match_cons(t, sym_Op_2))
                      {
                        d_52 = ATgetArgument(t, 0);
                        e_52 = ATgetArgument(t, 1);
                        t = r_51;
                        if(match_cons(t, sym_CallT_3))
                          {
                            s_51 = ATgetArgument(t, 0);
                            u_51 = ATgetArgument(t, 1);
                            b_52 = ATgetArgument(t, 2);
                            t = b_52;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = u_51;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    v_51 = ATgetFirst((ATermList) t);
                                    w_51 = (ATerm) ATgetNext((ATermList) t);
                                    t = w_51;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = s_51;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            t_51 = ATgetArgument(t, 0);
                                            t = t_51;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm a_36 = t;
                                                int b_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm e_55 = NULL;
                                                    t = e_52;
                                                    {
                                                      static ATerm m_5 (ATerm t)
                                                      {
                                                        ATerm f_55 = NULL;
                                                        f_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_d_36, (ATerm)ATinsert(ATempty, v_51), (ATerm) ATempty), f_55);
                                                        return(t);
                                                      }
                                                      t = map_1_0(m_5, t);
                                                    }
                                                    e_55 = t;
                                                    t = (ATerm) ATmakeAppl(sym_App_2, v_51, (ATerm) ATmakeAppl(sym_Op_2, d_52, e_55));
                                                    t = bottomup_1_0(k_5, t);
                                                    LocalPopChoice(b_36);
                                                  }
                                                else
                                                  {
                                                    t = a_36;
                                                    t = f_52;
                                                  }
                                              }
                                            else
                                              {
                                                t = f_52;
                                              }
                                          }
                                        else
                                          {
                                            t = f_52;
                                          }
                                      }
                                    else
                                      {
                                        t = f_52;
                                      }
                                  }
                                else
                                  {
                                    t = f_52;
                                  }
                              }
                            else
                              {
                                t = f_52;
                              }
                          }
                        else
                          {
                            t = f_52;
                          }
                      }
                    else
                      {
                        t = f_52;
                      }
                  }
                else
                  {
                    t = f_52;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(k_5, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  static ATerm n_5 (ATerm t)
  {
    t = bottomup_1_0(a_110, t);
    return(t);
  }
  t = SRTS_all(n_5, t);
  t = a_110(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL;
    t_56 = t;
    if(match_cons(t, sym_Seq_2))
      {
        p_56 = ATgetArgument(t, 0);
        q_56 = ATgetArgument(t, 1);
        t = q_56;
        if(match_cons(t, sym_Choice_2))
          {
            r_56 = ATgetArgument(t, 0);
            s_56 = ATgetArgument(t, 1);
            {
              ATerm e_36 = t;
              int f_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_57 = NULL,b_57 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_56, r_56);
                  t = o_5(t);
                  a_57 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_56, s_56);
                  t = o_5(t);
                  b_57 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, a_57, b_57);
                  t = o_5(t);
                  LocalPopChoice(f_36);
                }
              else
                {
                  t = e_36;
                  t = t_56;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                r_56 = ATgetArgument(t, 0);
                s_56 = ATgetArgument(t, 1);
                {
                  ATerm g_36 = t;
                  int h_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_57 = NULL,n_57 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_56, r_56);
                      t = o_5(t);
                      m_57 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_56, s_56);
                      t = o_5(t);
                      n_57 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, m_57, n_57);
                      t = o_5(t);
                      LocalPopChoice(h_36);
                    }
                  else
                    {
                      t = g_36;
                      t = t_56;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    r_56 = ATgetArgument(t, 0);
                    s_56 = ATgetArgument(t, 1);
                    {
                      ATerm i_36 = t;
                      int j_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_58 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_56, s_56);
                          t = o_5(t);
                          u_58 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, r_56, u_58);
                          t = o_5(t);
                          LocalPopChoice(j_36);
                        }
                      else
                        {
                          t = i_36;
                          t = t_56;
                        }
                    }
                  }
                else
                  {
                    t = t_56;
                  }
              }
          }
      }
    else
      {
        t = t_56;
      }
    return(t);
  }
  t = bottomup_1_0(o_5, t);
  return(t);
}
ATerm Seq_2_0 (ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,j_13 = NULL;
  e_59 = t;
  if(match_cons(t, sym_Seq_2))
    {
      a_59 = ATgetArgument(t, 0);
      b_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_59);
  z_58 = t;
  t = a_59;
  t = m_93(t);
  c_59 = t;
  t = b_59;
  t = n_93(t);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, c_59, d_59);
  j_13 = t;
  t = SSLsetAnnotations(j_13, z_58);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,l_14 = NULL;
  x_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      w_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, w_34);
  l_14 = t;
  t = SSLsetAnnotations(l_14, v_34);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
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
                ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL;
                w_65 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    x_65 = ATgetArgument(t, 0);
                    y_65 = ATgetArgument(t, 1);
                    {
                      ATerm y_30 = NULL,i_31 = NULL,j_31 = NULL,u_13 = NULL;
                      t = SSLgetAnnotations(w_65);
                      y_30 = t;
                      t = x_65;
                      t = inline_rules_0_0(t);
                      i_31 = t;
                      t = y_65;
                      t = inline_rules_0_0(t);
                      j_31 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, i_31, j_31);
                      u_13 = t;
                      t = SSLsetAnnotations(u_13, y_30);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        x_65 = ATgetArgument(t, 0);
                        y_65 = ATgetArgument(t, 1);
                        {
                          ATerm x_31 = NULL,k_32 = NULL,l_32 = NULL,x_13 = NULL;
                          t = SSLgetAnnotations(w_65);
                          x_31 = t;
                          t = x_65;
                          t = inline_rules_0_0(t);
                          k_32 = t;
                          t = y_65;
                          t = inline_rules_0_0(t);
                          l_32 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, k_32, l_32);
                          x_13 = t;
                          t = SSLsetAnnotations(x_13, x_31);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            x_65 = ATgetArgument(t, 0);
                            y_65 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm q_36 = t;
                          int r_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_32 = NULL,z_32 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,s_33 = NULL,j_14 = NULL,i_14 = NULL,e_14 = NULL,z_13 = NULL;
                              t = SSLgetAnnotations(w_65);
                              v_32 = t;
                              t = y_65;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  d_33 = ATgetArgument(t, 0);
                                  e_33 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(y_65);
                              z_32 = t;
                              t = d_33;
                              if(match_cons(t, sym_Match_1))
                                {
                                  o_33 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(d_33);
                              n_33 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, o_33);
                              z_13 = t;
                              t = SSLsetAnnotations(z_13, n_33);
                              s_33 = t;
                              t = e_33;
                              if(match_cons(t, sym_Build_1))
                                {
                                  l_33 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(e_33);
                              k_33 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, l_33);
                              e_14 = t;
                              t = SSLsetAnnotations(e_14, k_33);
                              m_33 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_33, m_33);
                              i_14 = t;
                              t = SSLsetAnnotations(i_14, z_32);
                              f_33 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_65, f_33);
                              j_14 = t;
                              t = SSLsetAnnotations(j_14, v_32);
                              LocalPopChoice(r_36);
                            }
                          else
                            {
                              t = q_36;
                              {
                                ATerm b_34 = NULL,e_34 = NULL,j_34 = NULL,k_34 = NULL,n_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,n_14 = NULL,m_14 = NULL,k_14 = NULL;
                                t = SSLgetAnnotations(w_65);
                                b_34 = t;
                                t = y_65;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    j_34 = ATgetArgument(t, 0);
                                    k_34 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(y_65);
                                e_34 = t;
                                t = j_34;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    r_34 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(j_34);
                                q_34 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, r_34);
                                k_14 = t;
                                t = SSLsetAnnotations(k_14, q_34);
                                s_34 = t;
                                t = k_34;
                                t = Seq_2_0(_id, p_5, t);
                                n_34 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_34, n_34);
                                m_14 = t;
                                t = SSLsetAnnotations(m_14, e_34);
                                p_34 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, x_65, p_34);
                                n_14 = t;
                                t = SSLsetAnnotations(n_14, b_34);
                              }
                            }
                        }
                      }
                  }
                LocalPopChoice(p_36);
              }
            else
              {
                t = o_36;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_y_34;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_c_31;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm o_66 = NULL,q_66 = NULL,r_66 = NULL,z_66 = NULL,a_67 = NULL;
  o_66 = t;
  t = term_u_34;
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_36, o_66);
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, (ATerm) ATmakeAppl(sym_Defined_2, term_s_36, o_66));
  t = l_13(q_5, z_66, a_67, t);
  t = term_b_31;
  q_66 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_36, o_66);
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_31, (ATerm) ATmakeAppl(sym_Defined_2, term_t_36, o_66));
  t = l_13(r_5, q_66, r_66, t);
  t = o_66;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_i_35;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_n_35;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,j_67 = NULL,k_67 = NULL;
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_h_35, b_67);
  j_67 = t;
  t = term_v_36;
  k_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_h_35, b_67), term_v_36);
  t = l_13(s_5, j_67, k_67, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_35, b_67);
  c_67 = t;
  t = term_x_36;
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_35, b_67), term_x_36);
  t = l_13(t_5, c_67, d_67, t);
  t = b_67;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm e_68 = NULL,j_68 = NULL,o_68 = NULL;
  e_68 = t;
  t = term_x_21;
  j_68 = t;
  t = (ATerm) ATinsert(ATempty, term_y_36);
  o_68 = t;
  t = SSL_printnl(j_68, o_68);
  t = e_68;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            {
              ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  y_68 = ATgetArgument(t, 0);
                  a_69 = ATgetArgument(t, 1);
                  b_69 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_68;
              if(match_cons(t, sym_SVar_1))
                {
                  z_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_68;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = a_69;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_69;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_z_25;
            }
          }
      }
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm e_37 = ATgetArgument(t, 0);
      if(match_cons(e_37, sym_SVar_1))
        {
          ATerm h_37 = ATgetArgument(e_37, 0);
          if((ATgetSymbol((ATermAppl) h_37) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm f_37 = ATgetArgument(t, 1);
        if(((ATgetType(f_37) != AT_LIST) || !(ATisEmpty(f_37))))
          _fail(t);
      }
      {
        ATerm g_37 = ATgetArgument(t, 2);
        if(((ATgetType(g_37) != AT_LIST) || !(ATisEmpty(g_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  t = term_x_21;
  g_69 = t;
  t = (ATerm) ATinsert(ATempty, term_i_37);
  h_69 = t;
  t = SSL_printnl(g_69, h_69);
  t = f_69;
  return(t);
}
static ATerm i_11 (ATerm a_24, ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  t = if_verbose2_1_0(u_5, t);
  t = new_0_0(t);
  v_67 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_36, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_67), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_36, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_67), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = a_24;
  t = inline_rules_0_0(t);
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_36, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, v_67, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_u_30, u_67), (ATerm) ATmakeAppl(sym_CallT_3, term_d_36, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_67), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_z_25))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(v_5, t);
  {
    ATerm j_37 = t;
    if((PushChoice() == 0))
      {
        ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL;
        t = oncetd_1_0(w_5, t);
        c_69 = t;
        t = term_x_21;
        d_69 = t;
        t = (ATerm) ATinsert(ATempty, term_k_37);
        e_69 = t;
        t = SSL_printnl(d_69, e_69);
        t = c_69;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_37;
      }
  }
  t = desugar_0_0(t);
  t = if_verbose1_1_0(x_5, t);
  return(t);
}
ATerm alltd_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  static ATerm i_69 (ATerm t)
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_111(t);
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
        t = SRTS_all(i_69, t);
      }
    return(t);
  }
  t = i_69(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,v_70 = NULL;
  s_70 = t;
  t = term_x_21;
  t_70 = t;
  t = (ATerm) ATinsert(ATempty, term_n_37);
  v_70 = t;
  t = SSL_printnl(t_70, v_70);
  t = s_70;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = debug_1_0(b_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_o_37;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,s_72 = NULL;
  o_72 = t;
  t = term_x_21;
  p_72 = t;
  t = (ATerm) ATinsert(ATempty, term_p_37);
  s_72 = t;
  t = SSL_printnl(p_72, s_72);
  t = o_72;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL;
  r_70 = t;
  t = new_0_0(t);
  q_70 = t;
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_36, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = if_verbose2_1_0(z_5, t);
        _fail(t);
      }
  }
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_70 = NULL,z_70 = NULL,d_71 = NULL,e_71 = NULL,o_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,e_72 = NULL,f_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
        y_70 = t;
        if(match_cons(t, sym_Seq_2))
          {
            z_70 = ATgetArgument(t, 0);
            f_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_70;
        if(match_cons(t, sym_All_1))
          {
            d_71 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_71;
        if(match_cons(t, sym_CallT_3))
          {
            e_71 = ATgetArgument(t, 0);
            u_71 = ATgetArgument(t, 1);
            e_72 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = e_71;
        if(match_cons(t, sym_SVar_1))
          {
            o_71 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_71;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = u_71;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_71 = ATgetFirst((ATermList) t);
            c_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_71;
        if(match_cons(t, sym_CallT_3))
          {
            w_71 = ATgetArgument(t, 0);
            a_72 = ATgetArgument(t, 1);
            b_72 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = w_71;
        if(match_cons(t, sym_SVar_1))
          {
            z_71 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_72;
        if(match_cons(t, sym_CallT_3))
          {
            k_72 = ATgetArgument(t, 0);
            m_72 = ATgetArgument(t, 1);
            n_72 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = k_72;
        if(match_cons(t, sym_SVar_1))
          {
            l_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_71;
        if((q_70 != t))
          {
            _fail(t);
          }
        t = l_72;
        if((z_71 != t))
          {
            _fail(t);
          }
        t = y_70;
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        t = if_verbose1_1_0(a_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(c_6, t);
  t = r_70;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm x_81 = NULL,e_82 = NULL,f_82 = NULL;
  x_81 = t;
  t = term_x_21;
  e_82 = t;
  t = (ATerm) ATinsert(ATempty, term_u_37);
  f_82 = t;
  t = SSL_printnl(e_82, f_82);
  t = x_81;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = debug_1_0(h_6, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_v_37;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm f_89 = NULL,h_89 = NULL,j_89 = NULL;
  f_89 = t;
  t = term_x_21;
  h_89 = t;
  t = (ATerm) ATinsert(ATempty, term_x_37);
  j_89 = t;
  t = SSL_printnl(h_89, j_89);
  t = f_89;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm q_81 = NULL,w_81 = NULL;
  w_81 = t;
  t = new_0_0(t);
  q_81 = t;
  {
    ATerm y_37 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_38, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_81), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(b_38);
      }
    else
      {
        t = y_37;
        t = if_verbose2_1_0(e_6, t);
        _fail(t);
      }
  }
  {
    ATerm z_38 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_82 = NULL,i_82 = NULL,j_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,p_82 = NULL,q_82 = NULL,s_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,d_83 = NULL,b_84 = NULL,c_84 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,d_86 = NULL,o_86 = NULL,p_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,i_87 = NULL,k_87 = NULL,r_87 = NULL,s_87 = NULL,b_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,q_88 = NULL,r_88 = NULL,t_88 = NULL;
        d_86 = t;
        if(match_cons(t, sym_CallT_3))
          {
            o_86 = ATgetArgument(t, 0);
            u_86 = ATgetArgument(t, 1);
            t_88 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = o_86;
        if(match_cons(t, sym_SVar_1))
          {
            p_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_86;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = u_86;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_86 = ATgetFirst((ATermList) t);
            r_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_86;
        if(match_cons(t, sym_CallT_3))
          {
            w_86 = ATgetArgument(t, 0);
            c_87 = ATgetArgument(t, 1);
            i_82 = ATgetArgument(t, 2);
            t = w_86;
            if(match_cons(t, sym_SVar_1))
              {
                g_82 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_82;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
              _fail(t);
            t = c_87;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_87 = ATgetFirst((ATermList) t);
                q_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_87;
            if(match_cons(t, sym_Seq_2))
              {
                e_87 = ATgetArgument(t, 0);
                b_88 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_87;
            if(match_cons(t, sym_CallT_3))
              {
                i_87 = ATgetArgument(t, 0);
                r_87 = ATgetArgument(t, 1);
                s_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = i_87;
            if(match_cons(t, sym_SVar_1))
              {
                k_87 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = s_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_88;
            if(match_cons(t, sym_CallT_3))
              {
                d_88 = ATgetArgument(t, 0);
                f_88 = ATgetArgument(t, 1);
                m_88 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_88;
            if(match_cons(t, sym_SVar_1))
              {
                e_88 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = e_88;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
              _fail(t);
            t = f_88;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_88 = ATgetFirst((ATermList) t);
                l_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_88;
            if(match_cons(t, sym_CallT_3))
              {
                h_88 = ATgetArgument(t, 0);
                j_88 = ATgetArgument(t, 1);
                k_88 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = h_88;
            if(match_cons(t, sym_SVar_1))
              {
                i_88 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = i_82;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_87;
            if((q_81 != t))
              {
                _fail(t);
              }
            t = i_88;
            if((k_87 != t))
              {
                _fail(t);
              }
            t = d_86;
          }
        else
          {
            if(match_cons(t, sym_Rec_2))
              {
                w_86 = ATgetArgument(t, 0);
                c_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_87;
            if(match_cons(t, sym_CallT_3))
              {
                d_87 = ATgetArgument(t, 0);
                q_88 = ATgetArgument(t, 1);
                r_85 = ATgetArgument(t, 2);
                t = d_87;
                if(match_cons(t, sym_SVar_1))
                  {
                    e_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_87;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                  _fail(t);
                t = q_88;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_82 = ATgetFirst((ATermList) t);
                    q_85 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_82;
                if(match_cons(t, sym_Seq_2))
                  {
                    l_82 = ATgetArgument(t, 0);
                    s_82 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_82;
                if(match_cons(t, sym_CallT_3))
                  {
                    m_82 = ATgetArgument(t, 0);
                    p_82 = ATgetArgument(t, 1);
                    q_82 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = m_82;
                if(match_cons(t, sym_SVar_1))
                  {
                    n_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_82;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_82;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_82;
                if(match_cons(t, sym_CallT_3))
                  {
                    v_82 = ATgetArgument(t, 0);
                    x_82 = ATgetArgument(t, 1);
                    p_85 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = v_82;
                if(match_cons(t, sym_SVar_1))
                  {
                    w_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_82;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = x_82;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_82 = ATgetFirst((ATermList) t);
                    c_84 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = y_82;
                if(match_cons(t, sym_CallT_3))
                  {
                    z_82 = ATgetArgument(t, 0);
                    d_83 = ATgetArgument(t, 1);
                    b_84 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = z_82;
                if(match_cons(t, sym_SVar_1))
                  {
                    a_83 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_83;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_84;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_84;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_82;
                if((q_81 != t))
                  {
                    _fail(t);
                  }
                t = a_83;
                if((w_86 != t))
                  {
                    _fail(t);
                  }
                t = d_86;
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    d_87 = ATgetArgument(t, 0);
                    q_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_87;
                if(match_cons(t, sym_Seq_2))
                  {
                    e_87 = ATgetArgument(t, 0);
                    b_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_87;
                if(match_cons(t, sym_CallT_3))
                  {
                    i_87 = ATgetArgument(t, 0);
                    r_87 = ATgetArgument(t, 1);
                    s_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = i_87;
                if(match_cons(t, sym_SVar_1))
                  {
                    k_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_88;
                if(match_cons(t, sym_CallT_3))
                  {
                    d_88 = ATgetArgument(t, 0);
                    f_88 = ATgetArgument(t, 1);
                    m_88 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = d_88;
                if(match_cons(t, sym_SVar_1))
                  {
                    e_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_88;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = f_88;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_88 = ATgetFirst((ATermList) t);
                    l_88 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_88;
                if(match_cons(t, sym_CallT_3))
                  {
                    h_88 = ATgetArgument(t, 0);
                    j_88 = ATgetArgument(t, 1);
                    k_88 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = h_88;
                if(match_cons(t, sym_SVar_1))
                  {
                    i_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_88;
                if(!(match_cons(t, sym_Id_0)))
                  _fail(t);
                t = r_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_87;
                if((q_81 != t))
                  {
                    _fail(t);
                  }
                t = i_88;
                if((w_86 != t))
                  {
                    _fail(t);
                  }
                t = d_86;
              }
          }
        LocalPopChoice(f_39);
      }
    else
      {
        t = z_38;
        t = if_verbose1_1_0(f_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(j_6, t);
  t = w_81;
  return(t);
}
ATerm debug_1_0 (ATerm q_118 (ATerm), ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL;
  k_89 = t;
  t = q_118(t);
  l_89 = t;
  t = term_x_21;
  m_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_89), l_89);
  n_89 = t;
  t = SSL_printnl(m_89, n_89);
  t = k_89;
  return(t);
}
ATerm topdown_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  static ATerm k_6 (ATerm t)
  {
    t = topdown_1_0(z_109, t);
    return(t);
  }
  t = z_109(t);
  t = SRTS_all(k_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm h_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm n_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(m_39);
      {
        ATerm p_89 = NULL,q_89 = NULL;
        p_89 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm o_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        q_89 = t;
        t = SSLgetAnnotations(p_89);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_39 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) p_39) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_39 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(q_39) != AT_LIST) || !(ATisEmpty(q_39))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_89;
      }
    }
  else
    {
      t = h_39;
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm v_39 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_39) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm w_39 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_39);
            _fail(t);
          }
        else
          {
            t = r_39;
          }
      }
    }
  return(t);
}
static ATerm k_11 (ATerm x_62, ATerm w_62, ATerm t)
{
  t = x_62;
  t = topdown_1_0(m_6, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, x_62);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_90 = ATgetArgument(t, 0);
      r_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_90;
  if(match_cons(t, sym_Match_1))
    {
      n_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_90;
  if(match_cons(t, sym_Var_1))
    {
      o_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_90;
  if(match_cons(t, sym_Seq_2))
    {
      s_90 = ATgetArgument(t, 0);
      k_90 = ATgetArgument(t, 1);
      t = s_90;
      if(match_cons(t, sym_Build_1))
        {
          t_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_90;
      if(match_cons(t, sym_Var_1))
        {
          j_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_90;
      if((o_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_90)), k_90);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_90;
      if(match_cons(t, sym_Var_1))
        {
          t_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_90;
      if((o_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_90));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,m_91 = NULL,n_91 = NULL,q_91 = NULL,r_91 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_91 = ATgetArgument(t, 0);
      q_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_91;
  if(match_cons(t, sym_Build_1))
    {
      n_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_91;
  if(match_cons(t, sym_Seq_2))
    {
      r_91 = ATgetArgument(t, 0);
      i_91 = ATgetArgument(t, 1);
      t = r_91;
      if(match_cons(t, sym_Match_1))
        {
          h_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_91;
      if((n_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_91), i_91);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          r_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_91;
      if((n_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, n_91);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,h_92 = NULL,k_92 = NULL,m_92 = NULL,n_92 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_92 = ATgetArgument(t, 0);
      m_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_92;
  if(match_cons(t, sym_Match_1))
    {
      k_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_92;
  if(match_cons(t, sym_Seq_2))
    {
      n_92 = ATgetArgument(t, 0);
      f_92 = ATgetArgument(t, 1);
      t = n_92;
      if(match_cons(t, sym_Match_1))
        {
          e_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_92;
      if((k_92 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_92), f_92);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          n_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_92;
      if((k_92 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, k_92);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm b_93 = NULL,e_93 = NULL,g_93 = NULL,i_93 = NULL,k_93 = NULL,l_93 = NULL,q_93 = NULL,r_93 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_93 = ATgetArgument(t, 0);
      k_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_93;
  if(match_cons(t, sym_Build_1))
    {
      ATerm x_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_93;
  if(match_cons(t, sym_Seq_2))
    {
      l_93 = ATgetArgument(t, 0);
      q_93 = ATgetArgument(t, 1);
      t = l_93;
      if(match_cons(t, sym_PrimT_3))
        {
          b_93 = ATgetArgument(t, 0);
          e_93 = ATgetArgument(t, 1);
          g_93 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, b_93, e_93, g_93), q_93);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          l_93 = ATgetArgument(t, 0);
          q_93 = ATgetArgument(t, 1);
          r_93 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, l_93, q_93, r_93);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,t_94 = NULL,v_94 = NULL,w_94 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_94 = ATgetArgument(t, 0);
      v_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_94;
  if(match_cons(t, sym_Build_1))
    {
      ATerm y_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_94;
  if(match_cons(t, sym_Seq_2))
    {
      w_94 = ATgetArgument(t, 0);
      r_94 = ATgetArgument(t, 1);
      t = w_94;
      if(match_cons(t, sym_Build_1))
        {
          q_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_94), r_94);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          w_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, w_94);
    }
  return(t);
}
static ATerm n_6 (ATerm t)
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
static ATerm p_6 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL,v_96 = NULL,w_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_40 = ATgetArgument(t, 0);
      if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
        {
          r_96 = ATgetFirst((ATermList) d_40);
          s_96 = (ATerm) ATgetNext((ATermList) d_40);
        }
      else
        _fail(t);
      {
        ATerm e_40 = ATgetArgument(t, 1);
        if(((ATgetType(e_40) == AT_LIST) && !(ATisEmpty(e_40))))
          {
            v_96 = ATgetFirst((ATermList) e_40);
            w_96 = (ATerm) ATgetNext((ATermList) e_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_96, v_96), (ATerm) ATmakeAppl(sym__2, s_96, w_96));
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm x_96 = NULL,y_96 = NULL;
  if(match_cons(t, sym__2))
    {
      x_96 = ATgetArgument(t, 0);
      y_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_96), x_96);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm z_96 = NULL,f_97 = NULL;
  if(match_cons(t, sym__2))
    {
      z_96 = ATgetArgument(t, 0);
      f_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_96), (ATerm) ATmakeAppl(sym_Match_1, f_97));
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_40 = ATgetArgument(t, 0);
      if(((ATgetType(g_40) != AT_LIST) || !(ATisEmpty(g_40))))
        _fail(t);
      {
        ATerm h_40 = ATgetArgument(t, 1);
        if(((ATgetType(h_40) != AT_LIST) || !(ATisEmpty(h_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,r_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_40 = ATgetArgument(t, 0);
      if(((ATgetType(i_40) == AT_LIST) && !(ATisEmpty(i_40))))
        {
          m_97 = ATgetFirst((ATermList) i_40);
          n_97 = (ATerm) ATgetNext((ATermList) i_40);
        }
      else
        _fail(t);
      {
        ATerm j_40 = ATgetArgument(t, 1);
        if(((ATgetType(j_40) == AT_LIST) && !(ATisEmpty(j_40))))
          {
            o_97 = ATgetFirst((ATermList) j_40);
            r_97 = (ATerm) ATgetNext((ATermList) j_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_97, o_97), (ATerm) ATmakeAppl(sym__2, n_97, r_97));
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL;
  if(match_cons(t, sym__2))
    {
      s_97 = ATgetArgument(t, 0);
      t_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_97), s_97);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm u_97 = NULL,z_97 = NULL;
  if(match_cons(t, sym__2))
    {
      u_97 = ATgetArgument(t, 0);
      z_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_97), (ATerm) ATmakeAppl(sym_Match_1, z_97));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_96 = ATgetArgument(t, 0);
      e_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_96;
  if(match_cons(t, sym_Build_1))
    {
      b_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_96;
  if(match_cons(t, sym_Op_2))
    {
      c_96 = ATgetArgument(t, 0);
      d_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_96;
  if(match_cons(t, sym_Seq_2))
    {
      f_96 = ATgetArgument(t, 0);
      y_95 = ATgetArgument(t, 1);
      {
        ATerm q_96 = NULL;
        t = f_96;
        if(match_cons(t, sym_Match_1))
          {
            g_96 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_96;
        if(match_cons(t, sym_Op_2))
          {
            w_95 = ATgetArgument(t, 0);
            x_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_95;
        if((c_96 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, d_96, x_95);
        t = genzip_4_0(n_6, p_6, q_6, r_6, t);
        q_96 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_96), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_96, d_96)), y_95));
      }
    }
  else
    {
      ATerm j_97 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          f_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_96;
      if(match_cons(t, sym_Op_2))
        {
          g_96 = ATgetArgument(t, 0);
          h_96 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_96;
      if((c_96 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, d_96, h_96);
      t = genzip_4_0(s_6, t_6, u_6, y_6, t);
      j_97 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_97), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_96, d_96)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm g_99 = NULL,j_99 = NULL,k_99 = NULL,n_99 = NULL,o_99 = NULL,q_99 = NULL,s_99 = NULL,t_99 = NULL;
  j_99 = t;
  if(match_cons(t, sym_Seq_2))
    {
      k_99 = ATgetArgument(t, 0);
      q_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_99;
  if(match_cons(t, sym_Build_1))
    {
      n_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_99;
  if(match_cons(t, sym_Op_2))
    {
      o_99 = ATgetArgument(t, 0);
      {
        ATerm k_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_99;
  {
    ATerm o_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            s_99 = ATgetArgument(t, 0);
            {
              ATerm w_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_40);
        t = s_99;
        if(match_cons(t, sym_Match_1))
          {
            t_99 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_99;
        if(match_cons(t, sym_Op_2))
          {
            g_99 = ATgetArgument(t, 0);
            {
              ATerm x_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_99, g_99);
        {
          ATerm y_40 = t;
          if((PushChoice() == 0))
            {
              ATerm g_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_35 = ATgetArgument(t, 0);
                  if((g_35 != ATgetArgument(t, 1)))
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
              t = y_40;
            }
        }
        t = term_a_41;
      }
    else
      {
        t = o_40;
        if(match_cons(t, sym_Match_1))
          {
            s_99 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_99;
        if(match_cons(t, sym_Op_2))
          {
            t_99 = ATgetArgument(t, 0);
            {
              ATerm d_41 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_99, t_99);
        {
          ATerm f_41 = t;
          if((PushChoice() == 0))
            {
              ATerm p_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  p_35 = ATgetArgument(t, 0);
                  if((p_35 != ATgetArgument(t, 1)))
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
              t = f_41;
            }
        }
        t = term_a_41;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  static ATerm x_99 (ATerm t)
  {
    ATerm j_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_111(t);
        LocalPopChoice(o_41);
      }
    else
      {
        t = j_41;
        t = SRTS_one(x_99, t);
      }
    return(t);
  }
  t = x_99(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL,a_101 = NULL,b_101 = NULL,e_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL;
  w_100 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_100 = ATgetArgument(t, 0);
      k_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_101;
  if(match_cons(t, sym_Let_2))
    {
      l_101 = ATgetArgument(t, 0);
      n_101 = ATgetArgument(t, 1);
      {
        ATerm s_101 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, x_100, l_101);
        t = conc_0_0(t);
        s_101 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, s_101, n_101);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          l_101 = ATgetArgument(t, 0);
          n_101 = ATgetArgument(t, 1);
          o_101 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_100;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_101 = ATgetFirst((ATermList) t);
          j_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_101;
      if(match_cons(t, sym_SDefT_4))
        {
          b_101 = ATgetArgument(t, 0);
          e_101 = ATgetArgument(t, 1);
          h_101 = ATgetArgument(t, 2);
          i_101 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = e_101;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_101;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_101;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_101;
      if(match_cons(t, sym_SVar_1))
        {
          m_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_101;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_101;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_101;
      if((b_101 != t))
        {
          _fail(t);
        }
      t = i_101;
      {
        ATerm x_41 = t;
        if((PushChoice() == 0))
          {
            static ATerm z_6 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm z_41 = ATgetArgument(t, 0);
                  if(match_cons(z_41, sym_SVar_1))
                    {
                      if((b_101 != ATgetArgument(z_41, 0)))
                        {
                          _fail(ATgetArgument(z_41, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm e_42 = ATgetArgument(t, 1);
                    if(((ATgetType(e_42) != AT_LIST) || !(ATisEmpty(e_42))))
                      _fail(t);
                  }
                  {
                    ATerm f_42 = ATgetArgument(t, 2);
                    if(((ATgetType(f_42) != AT_LIST) || !(ATisEmpty(f_42))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(z_6, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_41;
          }
      }
      t = i_101;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,l_102 = NULL,m_102 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      l_102 = ATgetArgument(t, 0);
      t = l_102;
      if(match_cons(t, sym_Seq_2))
        {
          j_102 = ATgetArgument(t, 0);
          f_102 = ATgetArgument(t, 1);
          t = j_102;
          if(match_cons(t, sym_Where_1))
            {
              e_102 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_102;
          if(match_cons(t, sym_Seq_2))
            {
              g_102 = ATgetArgument(t, 0);
              i_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_102;
          if(match_cons(t, sym_Build_1))
            {
              h_102 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, e_102, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_102), i_102)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_102 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, j_102);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          l_102 = ATgetArgument(t, 0);
          t = l_102;
          if(match_cons(t, sym_Test_1))
            {
              j_102 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, j_102);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              l_102 = ATgetArgument(t, 0);
              t = l_102;
              if(match_cons(t, sym_Not_1))
                {
                  j_102 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, j_102);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_102 = ATgetArgument(t, 0);
                  m_102 = ATgetArgument(t, 1);
                  t = m_102;
                  if((l_102 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      l_102 = ATgetArgument(t, 0);
                      m_102 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_102;
                  if((l_102 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm a_103 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      a_103 = ATgetArgument(t, 0);
      d_103 = ATgetArgument(t, 1);
      t = a_103;
      if(match_cons(t, sym_LChoice_2))
        {
          b_103 = ATgetArgument(t, 0);
          c_103 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, b_103, (ATerm) ATmakeAppl(sym_LChoice_2, c_103, d_103));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          a_103 = ATgetArgument(t, 0);
          d_103 = ATgetArgument(t, 1);
          t = a_103;
          if(match_cons(t, sym_Seq_2))
            {
              b_103 = ATgetArgument(t, 0);
              c_103 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, b_103, (ATerm) ATmakeAppl(sym_Seq_2, c_103, d_103));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              a_103 = ATgetArgument(t, 0);
              d_103 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_103;
          if(match_cons(t, sym_Choice_2))
            {
              b_103 = ATgetArgument(t, 0);
              c_103 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, b_103, (ATerm) ATmakeAppl(sym_Choice_2, c_103, d_103));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL,l_104 = NULL,m_104 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      l_104 = ATgetArgument(t, 0);
      m_104 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, l_104, m_104);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_104 = ATgetArgument(t, 0);
          t = l_104;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_104 = ATgetFirst((ATermList) t);
              f_104 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, e_104, (ATerm) ATmakeAppl(sym_LChoices_1, f_104));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_a_41;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              l_104 = ATgetArgument(t, 0);
              t = l_104;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_104 = ATgetFirst((ATermList) t);
                  f_104 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, e_104, (ATerm) ATmakeAppl(sym_Choices_1, f_104));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_a_41;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  l_104 = ATgetArgument(t, 0);
                  t = l_104;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_104 = ATgetFirst((ATermList) t);
                      f_104 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_104, (ATerm) ATmakeAppl(sym_Seqs_1, f_104));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_z_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      l_104 = ATgetArgument(t, 0);
                      m_104 = ATgetArgument(t, 1);
                      g_104 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, m_104, (ATerm) ATmakeAppl(sym_Op_2, term_l_22, (ATerm) ATinsert(ATinsert(ATempty, g_104), l_104)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          l_104 = ATgetArgument(t, 0);
                          m_104 = ATgetArgument(t, 1);
                          g_104 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, g_104)), l_104), (ATerm) ATmakeAppl(sym_Build_1, m_104)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              l_104 = ATgetArgument(t, 0);
                              m_104 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_104, (ATerm) ATmakeAppl(sym_Match_1, m_104));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  l_104 = ATgetArgument(t, 0);
                                  m_104 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_104), m_104);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      l_104 = ATgetArgument(t, 0);
                                      m_104 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_104), l_104);
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
static ATerm a_7 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      z_106 = ATgetArgument(t, 0);
      t = z_106;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_a_41;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          z_106 = ATgetArgument(t, 0);
          t = z_106;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_z_25;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              z_106 = ATgetArgument(t, 0);
              a_107 = ATgetArgument(t, 1);
              t = z_106;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_a_41;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  z_106 = ATgetArgument(t, 0);
                  a_107 = ATgetArgument(t, 1);
                  t = a_107;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_a_41;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      z_106 = ATgetArgument(t, 0);
                      a_107 = ATgetArgument(t, 1);
                      t = a_107;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_a_41;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          z_106 = ATgetArgument(t, 0);
                          t = z_106;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_a_41;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              z_106 = ATgetArgument(t, 0);
                              t = z_106;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_a_41;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  z_106 = ATgetArgument(t, 0);
                                  a_107 = ATgetArgument(t, 1);
                                  t = a_107;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_a_41;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      z_106 = ATgetArgument(t, 0);
                                      a_107 = ATgetArgument(t, 1);
                                      t = a_107;
                                      t = fetch_1_0(a_7, t);
                                      t = term_a_41;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          z_106 = ATgetArgument(t, 0);
                                          a_107 = ATgetArgument(t, 1);
                                          t = a_107;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = z_106;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = a_107;
                                                }
                                              else
                                                {
                                                  t = z_106;
                                                }
                                            }
                                          else
                                            {
                                              t = z_106;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = a_107;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              z_106 = ATgetArgument(t, 0);
                                              a_107 = ATgetArgument(t, 1);
                                              t = a_107;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = z_106;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = a_107;
                                                    }
                                                  else
                                                    {
                                                      t = z_106;
                                                    }
                                                }
                                              else
                                                {
                                                  t = z_106;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = a_107;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  z_106 = ATgetArgument(t, 0);
                                                  t = z_106;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_a_41;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      z_106 = ATgetArgument(t, 0);
                                                      a_107 = ATgetArgument(t, 1);
                                                      b_107 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_107;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_106, a_107);
                                                }
                                            }
                                        }
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm t_108 = NULL,v_108 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_108 = ATgetArgument(t, 0);
      t = v_108;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_z_25;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_108 = ATgetArgument(t, 0);
          t = v_108;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_a_41;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              v_108 = ATgetArgument(t, 0);
              t_108 = ATgetArgument(t, 1);
              t = t_108;
              if(match_cons(t, sym_Id_0))
                {
                  t = v_108;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = t_108;
                    }
                  else
                    {
                      t = v_108;
                    }
                }
              else
                {
                  t = v_108;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = t_108;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  v_108 = ATgetArgument(t, 0);
                  t_108 = ATgetArgument(t, 1);
                  t = v_108;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_z_25;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      v_108 = ATgetArgument(t, 0);
                      t_108 = ATgetArgument(t, 1);
                      t = t_108;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_z_25;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          v_108 = ATgetArgument(t, 0);
                          t_108 = ATgetArgument(t, 1);
                          t = t_108;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_z_25;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              v_108 = ATgetArgument(t, 0);
                              t = v_108;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_z_25;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  v_108 = ATgetArgument(t, 0);
                                  t = v_108;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_z_25;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      v_108 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = v_108;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_z_25;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      {
        ATerm i_42 = t;
        int j_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(j_42);
          }
        else
          {
            t = i_42;
            {
              ATerm k_42 = t;
              int m_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(m_42);
                }
              else
                {
                  t = k_42;
                  {
                    ATerm t_42 = t;
                    int u_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(u_42);
                      }
                    else
                      {
                        t = t_42;
                        {
                          ATerm v_42 = t;
                          int x_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(x_42);
                            }
                          else
                            {
                              t = v_42;
                              {
                                ATerm y_42 = t;
                                int z_42 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_109 = NULL,o_109 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        n_109 = ATgetArgument(t, 0);
                                        o_109 = ATgetArgument(t, 1);
                                        t = n_109;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = o_109;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            n_109 = ATgetArgument(t, 0);
                                            o_109 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = n_109;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = o_109;
                                      }
                                    LocalPopChoice(z_42);
                                  }
                                else
                                  {
                                    t = y_42;
                                    {
                                      ATerm a_43 = t;
                                      int e_43 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(e_43);
                                        }
                                      else
                                        {
                                          t = a_43;
                                          {
                                            ATerm j_43 = t;
                                            int l_43 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(l_43);
                                              }
                                            else
                                              {
                                                t = j_43;
                                                {
                                                  ATerm p_43 = t;
                                                  int q_43 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(q_43);
                                                    }
                                                  else
                                                    {
                                                      t = p_43;
                                                      {
                                                        ATerm u_43 = t;
                                                        int v_43 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(v_43);
                                                          }
                                                        else
                                                          {
                                                            t = u_43;
                                                            {
                                                              ATerm w_43 = t;
                                                              int x_43 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(x_43);
                                                                }
                                                              else
                                                                {
                                                                  t = w_43;
                                                                  {
                                                                    ATerm z_43 = t;
                                                                    int a_44 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(a_44);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_43;
                                                                        {
                                                                          ATerm d_44 = t;
                                                                          int e_44 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(e_44);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_44;
                                                                              {
                                                                                ATerm f_44 = t;
                                                                                int p_44 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(p_44);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_44;
                                                                                    {
                                                                                      ATerm s_109 = NULL,e_110 = NULL,h_110 = NULL,i_110 = NULL;
                                                                                      e_110 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          h_110 = ATgetArgument(t, 0);
                                                                                          i_110 = ATgetArgument(t, 1);
                                                                                          t = h_110;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              s_109 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = e_110;
                                                                                          t = k_11(s_109, i_110, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              h_110 = ATgetArgument(t, 0);
                                                                                              i_110 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_110;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = i_110;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm t)
{
  static ATerm m_110 (ATerm t)
  {
    ATerm r_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_117(t);
        t = m_110(t);
        LocalPopChoice(v_44);
      }
    else
      {
        t = r_44;
        t = e_117(t);
      }
    return(t);
  }
  t = m_110(t);
  return(t);
}
ATerm downup_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  t = b_110(t);
  {
    static ATerm c_7 (ATerm t)
    {
      t = downup_1_0(b_110, t);
      return(t);
    }
    t = SRTS_all(c_7, t);
  }
  t = b_110(t);
  return(t);
}
ATerm genzip_4_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t)
{
  static ATerm x_110 (ATerm t)
  {
    ATerm w_44 = t;
    int x_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_122(t);
        LocalPopChoice(x_44);
      }
    else
      {
        t = w_44;
        {
          ATerm n_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL,w_110 = NULL,l_15 = NULL;
          t = q_122(t);
          w_110 = t;
          if(match_cons(t, sym__2))
            {
              r_110 = ATgetArgument(t, 0);
              s_110 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_110);
          n_110 = t;
          t = r_110;
          t = s_122(t);
          t_110 = t;
          t = s_110;
          t = x_110(t);
          u_110 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_110, u_110);
          l_15 = t;
          t = SSLsetAnnotations(l_15, n_110);
          t = r_122(t);
        }
      }
    return(t);
  }
  t = x_110(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_44 = ATgetArgument(t, 0);
      if(((ATgetType(y_44) != AT_LIST) || !(ATisEmpty(y_44))))
        _fail(t);
      {
        ATerm z_44 = ATgetArgument(t, 1);
        if(((ATgetType(z_44) != AT_LIST) || !(ATisEmpty(z_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_45 = ATgetArgument(t, 0);
      if(((ATgetType(c_45) == AT_LIST) && !(ATisEmpty(c_45))))
        {
          u_111 = ATgetFirst((ATermList) c_45);
          v_111 = (ATerm) ATgetNext((ATermList) c_45);
        }
      else
        _fail(t);
      {
        ATerm d_45 = ATgetArgument(t, 1);
        if(((ATgetType(d_45) == AT_LIST) && !(ATisEmpty(d_45))))
          {
            w_111 = ATgetFirst((ATermList) d_45);
            x_111 = (ATerm) ATgetNext((ATermList) d_45);
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
static ATerm n_7 (ATerm t)
{
  ATerm y_111 = NULL,z_111 = NULL;
  if(match_cons(t, sym__2))
    {
      y_111 = ATgetArgument(t, 0);
      z_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_111), y_111);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL,k_111 = NULL,l_111 = NULL;
  h_111 = t;
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_45 = ATgetArgument(t, 0);
            ATerm h_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(f_45);
        t = h_111;
      }
    else
      {
        t = e_45;
        {
          ATerm t_111 = NULL;
          if(match_cons(t, sym__3))
            {
              i_111 = ATgetArgument(t, 0);
              k_111 = ATgetArgument(t, 1);
              l_111 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, i_111, k_111);
          t = genzip_4_0(j_7, m_7, n_7, _id, t);
          t_111 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_111, l_111);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm t)
{
  ATerm b_112 = NULL,e_112 = NULL;
  static ATerm t_7 (ATerm t)
  {
    ATerm z_36 = NULL;
    t = e_138(t);
    z_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_36, not_null(e_112));
    t = lookup_0_0(t);
    t = f_138(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((e_112 != NULL) && (e_112 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_112 = ATgetArgument(t, 0);
      b_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_112;
  t = alltd_1_0(t_7, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_45 = ATgetArgument(t, 0);
      if(((ATgetType(i_45) != AT_LIST) || !(ATisEmpty(i_45))))
        _fail(t);
      {
        ATerm j_45 = ATgetArgument(t, 1);
        if(((ATgetType(j_45) != AT_LIST) || !(ATisEmpty(j_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm t_38 = NULL,w_38 = NULL,a_39 = NULL,b_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_45 = ATgetArgument(t, 0);
      if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
        {
          t_38 = ATgetFirst((ATermList) k_45);
          w_38 = (ATerm) ATgetNext((ATermList) k_45);
        }
      else
        _fail(t);
      {
        ATerm l_45 = ATgetArgument(t, 1);
        if(((ATgetType(l_45) == AT_LIST) && !(ATisEmpty(l_45))))
          {
            a_39 = ATgetFirst((ATermList) l_45);
            b_39 = (ATerm) ATgetNext((ATermList) l_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_38, a_39), (ATerm) ATmakeAppl(sym__2, w_38, b_39));
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm c_39 = NULL,e_39 = NULL;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      e_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_39), c_39);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm g_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_39;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm p_45 = ATgetArgument(t, 0);
            i_39 = ATgetArgument(t, 1);
            j_39 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(n_45);
        t = (ATerm) ATmakeAppl(sym_SDef_3, l_39, i_39, j_39);
      }
    else
      {
        t = m_45;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm q_45 = ATgetArgument(t, 0);
            i_39 = ATgetArgument(t, 1);
            j_39 = ATgetArgument(t, 2);
            k_39 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, l_39, i_39, j_39, k_39);
      }
  }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_45 = ATgetArgument(t, 0);
      if(((ATgetType(r_45) != AT_LIST) || !(ATisEmpty(r_45))))
        _fail(t);
      {
        ATerm s_45 = ATgetArgument(t, 1);
        if(((ATgetType(s_45) != AT_LIST) || !(ATisEmpty(s_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,s_41 = NULL,u_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_45 = ATgetArgument(t, 0);
      if(((ATgetType(t_45) == AT_LIST) && !(ATisEmpty(t_45))))
        {
          p_41 = ATgetFirst((ATermList) t_45);
          q_41 = (ATerm) ATgetNext((ATermList) t_45);
        }
      else
        _fail(t);
      {
        ATerm u_45 = ATgetArgument(t, 1);
        if(((ATgetType(u_45) == AT_LIST) && !(ATisEmpty(u_45))))
          {
            s_41 = ATgetFirst((ATermList) u_45);
            u_41 = (ATerm) ATgetNext((ATermList) u_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_41, s_41), (ATerm) ATmakeAppl(sym__2, q_41, u_41));
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  if(match_cons(t, sym__2))
    {
      v_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_41), v_41);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm y_41 = NULL,a_42 = NULL,c_42 = NULL;
  if(match_cons(t, sym__2))
    {
      y_41 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_41;
  {
    ATerm v_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_45);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_42);
      }
    else
      {
        t = v_45;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_45 = ATgetArgument(t, 0);
            a_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_42, a_42);
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_45 = ATgetArgument(t, 0);
      if(((ATgetType(z_45) != AT_LIST) || !(ATisEmpty(z_45))))
        _fail(t);
      {
        ATerm a_46 = ATgetArgument(t, 1);
        if(((ATgetType(a_46) != AT_LIST) || !(ATisEmpty(a_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm h_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_46 = ATgetArgument(t, 0);
      if(((ATgetType(b_46) == AT_LIST) && !(ATisEmpty(b_46))))
        {
          h_44 = ATgetFirst((ATermList) b_46);
          k_44 = (ATerm) ATgetNext((ATermList) b_46);
        }
      else
        _fail(t);
      {
        ATerm c_46 = ATgetArgument(t, 1);
        if(((ATgetType(c_46) == AT_LIST) && !(ATisEmpty(c_46))))
          {
            l_44 = ATgetFirst((ATermList) c_46);
            m_44 = (ATerm) ATgetNext((ATermList) c_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_44, l_44), (ATerm) ATmakeAppl(sym__2, k_44, m_44));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  if(match_cons(t, sym__2))
    {
      n_44 = ATgetArgument(t, 0);
      o_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_44), n_44);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm q_44 = NULL,s_44 = NULL,u_44 = NULL;
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_44;
  {
    ATerm e_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_46);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_44);
      }
    else
      {
        t = e_46;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_46 = ATgetArgument(t, 0);
            s_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_44, s_44);
      }
  }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_46 = ATgetArgument(t, 0);
      if(((ATgetType(k_46) != AT_LIST) || !(ATisEmpty(k_46))))
        _fail(t);
      {
        ATerm n_46 = ATgetArgument(t, 1);
        if(((ATgetType(n_46) != AT_LIST) || !(ATisEmpty(n_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm i_46 = NULL,l_46 = NULL,m_46 = NULL,q_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_46 = ATgetArgument(t, 0);
      if(((ATgetType(o_46) == AT_LIST) && !(ATisEmpty(o_46))))
        {
          i_46 = ATgetFirst((ATermList) o_46);
          l_46 = (ATerm) ATgetNext((ATermList) o_46);
        }
      else
        _fail(t);
      {
        ATerm p_46 = ATgetArgument(t, 1);
        if(((ATgetType(p_46) == AT_LIST) && !(ATisEmpty(p_46))))
          {
            m_46 = ATgetFirst((ATermList) p_46);
            q_46 = (ATerm) ATgetNext((ATermList) p_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_46, m_46), (ATerm) ATmakeAppl(sym__2, l_46, q_46));
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  if(match_cons(t, sym__2))
    {
      r_46 = ATgetArgument(t, 0);
      s_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_46), r_46);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm v_46 = NULL,y_46 = NULL,g_47 = NULL;
  if(match_cons(t, sym__2))
    {
      v_46 = ATgetArgument(t, 0);
      g_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_46;
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_46);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_47);
      }
    else
      {
        t = t_46;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_46 = ATgetArgument(t, 0);
            y_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_47, y_46);
      }
  }
  return(t);
}
static ATerm a_9 (ATerm t)
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
static ATerm b_9 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_47 = ATgetArgument(t, 0);
      if(((ATgetType(m_47) == AT_LIST) && !(ATisEmpty(m_47))))
        {
          m_48 = ATgetFirst((ATermList) m_47);
          n_48 = (ATerm) ATgetNext((ATermList) m_47);
        }
      else
        _fail(t);
      {
        ATerm n_47 = ATgetArgument(t, 1);
        if(((ATgetType(n_47) == AT_LIST) && !(ATisEmpty(n_47))))
          {
            o_48 = ATgetFirst((ATermList) n_47);
            p_48 = (ATerm) ATgetNext((ATermList) n_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_48, o_48), (ATerm) ATmakeAppl(sym__2, n_48, p_48));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm q_48 = NULL,z_48 = NULL;
  if(match_cons(t, sym__2))
    {
      q_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_48), q_48);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm c_49 = NULL,f_49 = NULL,j_49 = NULL;
  if(match_cons(t, sym__2))
    {
      c_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_49;
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_49);
      }
    else
      {
        t = o_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_47 = ATgetArgument(t, 0);
            f_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_49, f_49);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm b_143 (ATerm), ATerm t)
{
  ATerm g_121 = NULL,h_121 = NULL,i_121 = NULL,j_121 = NULL,k_121 = NULL;
  i_121 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_121 = ATgetArgument(t, 0);
      k_121 = ATgetArgument(t, 1);
      {
        ATerm w_37 = NULL,c_38 = NULL,i_38 = NULL,t_15 = NULL;
        t = SSLgetAnnotations(i_121);
        w_37 = t;
        t = j_121;
        t = b_143(t);
        i_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_121, i_38);
        t = genzip_4_0(u_7, w_7, y_7, z_7, t);
        c_38 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, c_38, k_121);
        t_15 = t;
        t = SSLsetAnnotations(t_15, w_37);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_121 = ATgetArgument(t, 0);
          k_121 = ATgetArgument(t, 1);
          h_121 = ATgetArgument(t, 2);
          {
            ATerm c_41 = NULL,k_41 = NULL,m_41 = NULL,v_15 = NULL;
            t = SSLgetAnnotations(i_121);
            c_41 = t;
            t = k_121;
            t = b_143(t);
            m_41 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_121, m_41);
            t = genzip_4_0(a_8, b_8, d_8, i_8, t);
            k_41 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, j_121, k_41, h_121);
            v_15 = t;
            t = SSLsetAnnotations(v_15, c_41);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              j_121 = ATgetArgument(t, 0);
              k_121 = ATgetArgument(t, 1);
              h_121 = ATgetArgument(t, 2);
              g_121 = ATgetArgument(t, 3);
              {
                ATerm d_43 = NULL,y_43 = NULL,b_44 = NULL,w_15 = NULL;
                t = SSLgetAnnotations(i_121);
                d_43 = t;
                t = k_121;
                t = b_143(t);
                b_44 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_121, b_44);
                t = genzip_4_0(j_8, m_8, o_8, p_8, t);
                y_43 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, j_121, y_43, h_121, g_121);
                w_15 = t;
                t = SSLsetAnnotations(w_15, d_43);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  j_121 = ATgetArgument(t, 0);
                  k_121 = ATgetArgument(t, 1);
                  h_121 = ATgetArgument(t, 2);
                  g_121 = ATgetArgument(t, 3);
                  {
                    ATerm o_45 = NULL,d_46 = NULL,g_46 = NULL,x_15 = NULL;
                    t = SSLgetAnnotations(i_121);
                    o_45 = t;
                    t = k_121;
                    t = b_143(t);
                    g_46 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_121, g_46);
                    t = genzip_4_0(t_8, w_8, x_8, y_8, t);
                    d_46 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, j_121, d_46, h_121, g_121);
                    x_15 = t;
                    t = SSLsetAnnotations(x_15, o_45);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      j_121 = ATgetArgument(t, 0);
                      k_121 = ATgetArgument(t, 1);
                      h_121 = ATgetArgument(t, 2);
                      {
                        ATerm f_48 = NULL,j_48 = NULL,k_48 = NULL,y_15 = NULL;
                        t = SSLgetAnnotations(i_121);
                        f_48 = t;
                        t = k_121;
                        t = b_143(t);
                        k_48 = t;
                        t = (ATerm) ATmakeAppl(sym__2, k_121, k_48);
                        t = genzip_4_0(a_9, b_9, c_9, d_9, t);
                        j_48 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, j_121, j_48, h_121);
                        y_15 = t;
                        t = SSLsetAnnotations(y_15, f_48);
                      }
                    }
                  else
                    {
                      ATerm u_49 = NULL,x_49 = NULL,r_19 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          j_121 = ATgetArgument(t, 0);
                          k_121 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(i_121);
                      u_49 = t;
                      t = j_121;
                      t = b_143(t);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          x_49 = ATgetFirst((ATermList) t);
                          {
                            ATerm s_47 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Rec_2, x_49, k_121);
                      r_19 = t;
                      t = SSLsetAnnotations(r_19, u_49);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm t)
{
  ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL,l_125 = NULL,m_125 = NULL;
  f_125 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_125 = ATgetArgument(t, 0);
      m_125 = ATgetArgument(t, 1);
      {
        ATerm f_50 = NULL,i_50 = NULL,j_50 = NULL,y_19 = NULL;
        t = SSLgetAnnotations(f_125);
        f_50 = t;
        t = l_125;
        t = c_143(t);
        i_50 = t;
        t = m_125;
        t = c_143(t);
        j_50 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, i_50, j_50);
        y_19 = t;
        t = SSLsetAnnotations(y_19, f_50);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_125 = ATgetArgument(t, 0);
          m_125 = ATgetArgument(t, 1);
          e_125 = ATgetArgument(t, 2);
          {
            ATerm s_50 = NULL,w_50 = NULL,x_50 = NULL,b_51 = NULL,b_20 = NULL;
            t = SSLgetAnnotations(f_125);
            s_50 = t;
            t = l_125;
            t = e_143(t);
            w_50 = t;
            t = m_125;
            t = e_143(t);
            x_50 = t;
            t = e_125;
            t = c_143(t);
            b_51 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, w_50, x_50, b_51);
            b_20 = t;
            t = SSLsetAnnotations(b_20, s_50);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_125 = ATgetArgument(t, 0);
              m_125 = ATgetArgument(t, 1);
              e_125 = ATgetArgument(t, 2);
              d_125 = ATgetArgument(t, 3);
              {
                ATerm q_52 = NULL,x_52 = NULL,z_52 = NULL,c_53 = NULL,d_53 = NULL,c_20 = NULL;
                t = SSLgetAnnotations(f_125);
                q_52 = t;
                t = l_125;
                t = e_143(t);
                x_52 = t;
                t = m_125;
                t = e_143(t);
                z_52 = t;
                t = e_125;
                t = e_143(t);
                c_53 = t;
                t = d_125;
                t = c_143(t);
                d_53 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, x_52, z_52, c_53, d_53);
                c_20 = t;
                t = SSLsetAnnotations(c_20, q_52);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  l_125 = ATgetArgument(t, 0);
                  m_125 = ATgetArgument(t, 1);
                  e_125 = ATgetArgument(t, 2);
                  d_125 = ATgetArgument(t, 3);
                  {
                    ATerm j_54 = NULL,q_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,d_20 = NULL;
                    t = SSLgetAnnotations(f_125);
                    j_54 = t;
                    t = l_125;
                    t = e_143(t);
                    q_54 = t;
                    t = m_125;
                    t = e_143(t);
                    t_54 = t;
                    t = e_125;
                    t = e_143(t);
                    u_54 = t;
                    t = d_125;
                    t = c_143(t);
                    v_54 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, q_54, t_54, u_54, v_54);
                    d_20 = t;
                    t = SSLsetAnnotations(d_20, j_54);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      l_125 = ATgetArgument(t, 0);
                      m_125 = ATgetArgument(t, 1);
                      e_125 = ATgetArgument(t, 2);
                      {
                        ATerm j_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,e_20 = NULL;
                        t = SSLgetAnnotations(f_125);
                        j_55 = t;
                        t = l_125;
                        t = e_143(t);
                        z_55 = t;
                        t = m_125;
                        t = e_143(t);
                        a_56 = t;
                        t = e_125;
                        t = e_143(t);
                        b_56 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, z_55, a_56, b_56);
                        e_20 = t;
                        t = SSLsetAnnotations(e_20, j_55);
                      }
                    }
                  else
                    {
                      ATerm k_56 = NULL,n_56 = NULL,o_56 = NULL,f_20 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          l_125 = ATgetArgument(t, 0);
                          m_125 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(f_125);
                      k_56 = t;
                      t = l_125;
                      t = e_143(t);
                      n_56 = t;
                      t = m_125;
                      t = c_143(t);
                      o_56 = t;
                      t = (ATerm) ATmakeAppl(sym_Rec_2, n_56, o_56);
                      f_20 = t;
                      t = SSLsetAnnotations(f_20, k_56);
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm e_126 = NULL;
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_126 = ATgetArgument(t, 0);
          {
            ATerm v_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_47);
      t = e_126;
    }
  else
    {
      t = t_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_126;
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm k_126 = NULL;
  ATerm w_47 = t;
  int x_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_126 = ATgetArgument(t, 0);
          {
            ATerm y_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_47);
      t = k_126;
    }
  else
    {
      t = w_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_126;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm y_125 = NULL;
  ATerm z_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm b_48 = ATgetArgument(t, 0);
          y_125 = ATgetArgument(t, 1);
          {
            ATerm c_48 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_48);
      t = y_125;
      t = map_1_0(e_9, t);
    }
  else
    {
      t = z_47;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm d_48 = ATgetArgument(t, 0);
          y_125 = ATgetArgument(t, 1);
          {
            ATerm e_48 = ATgetArgument(t, 2);
          }
          {
            ATerm g_48 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_125;
      t = map_1_0(f_9, t);
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm p_126 = NULL;
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_126 = ATgetArgument(t, 0);
          {
            ATerm l_48 = ATgetArgument(t, 1);
          }
          {
            ATerm a_49 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_48);
      t = p_126;
    }
  else
    {
      t = h_48;
      if(match_cons(t, sym_SDefT_4))
        {
          p_126 = ATgetArgument(t, 0);
          {
            ATerm d_49 = ATgetArgument(t, 1);
          }
          {
            ATerm h_49 = ATgetArgument(t, 2);
          }
          {
            ATerm i_49 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = p_126;
    }
  return(t);
}
static ATerm u_12 (ATerm l_81, ATerm k_81, ATerm t)
{
  t = l_81;
  t = map_1_0(g_9, t);
  return(t);
}
ATerm SVar_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL,r_20 = NULL;
  y_126 = t;
  if(match_cons(t, sym_SVar_1))
    {
      w_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_126);
  v_126 = t;
  t = w_126;
  t = x_92(t);
  x_126 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, x_126);
  r_20 = t;
  t = SSLsetAnnotations(r_20, v_126);
  return(t);
}
static ATerm d_13 (ATerm g_139 (ATerm), ATerm h_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_71, ATerm q_71, ATerm p_71, ATerm t)
{
  static ATerm h_9 (ATerm t)
  {
    ATerm a_127 = NULL;
    a_127 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_127, p_71);
    t = g_139(t);
    return(t);
  }
  static ATerm j_9 (ATerm t)
  {
    ATerm b_127 = NULL;
    b_127 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_127, q_71);
    t = g_139(t);
    return(t);
  }
  t = r_71;
  t = h_139(h_9, j_9, _id, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_49 = ATgetArgument(t, 0);
      if(((ATgetType(k_49) != AT_LIST) || !(ATisEmpty(k_49))))
        _fail(t);
      {
        ATerm l_49 = ATgetArgument(t, 1);
        if(((ATgetType(l_49) != AT_LIST) || !(ATisEmpty(l_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm l_127 = NULL,m_127 = NULL,n_127 = NULL,o_127 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_49 = ATgetArgument(t, 0);
      if(((ATgetType(m_49) == AT_LIST) && !(ATisEmpty(m_49))))
        {
          l_127 = ATgetFirst((ATermList) m_49);
          m_127 = (ATerm) ATgetNext((ATermList) m_49);
        }
      else
        _fail(t);
      {
        ATerm n_49 = ATgetArgument(t, 1);
        if(((ATgetType(n_49) == AT_LIST) && !(ATisEmpty(n_49))))
          {
            n_127 = ATgetFirst((ATermList) n_49);
            o_127 = (ATerm) ATgetNext((ATermList) n_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_127, n_127), (ATerm) ATmakeAppl(sym__2, m_127, o_127));
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm p_127 = NULL,q_127 = NULL;
  if(match_cons(t, sym__2))
    {
      p_127 = ATgetArgument(t, 0);
      q_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_127), p_127);
  return(t);
}
static ATerm e_13 (ATerm a_139 (ATerm), ATerm b_139 (ATerm (ATerm), ATerm), ATerm j_71, ATerm m_71, ATerm t)
{
  ATerm e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL,k_127 = NULL;
  t = j_71;
  t = a_139(t);
  e_127 = t;
  t = map_1_0(new_0_0, t);
  f_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_127, f_127);
  t = genzip_4_0(k_9, m_9, p_9, _id, t);
  k_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_127, m_71);
  t = conc_0_0(t);
  g_127 = t;
  t = j_71;
  {
    static ATerm q_9 (ATerm t)
    {
      t = f_127;
      return(t);
    }
    t = b_139(q_9, t);
  }
  h_127 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_127, m_71, g_127);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL,e_128 = NULL,f_128 = NULL,g_128 = NULL;
  x_127 = t;
  if(match_cons(t, sym__2))
    {
      y_127 = ATgetArgument(t, 0);
      e_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_128;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_128 = ATgetFirst((ATermList) t);
      g_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_128;
  if(match_cons(t, sym__2))
    {
      v_127 = ATgetArgument(t, 0);
      w_127 = ATgetArgument(t, 1);
      {
        ATerm o_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_127;
            if((y_127 != t))
              {
                _fail(t);
              }
            t = w_127;
            LocalPopChoice(p_49);
          }
        else
          {
            t = o_49;
            t = (ATerm) ATmakeAppl(sym__2, y_127, g_128);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, y_127, g_128);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm q_131 (ATerm), ATerm t)
{
  static ATerm c_129 (ATerm t)
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_131(t);
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        {
          ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL;
          static ATerm s_9 (ATerm t)
          {
            ATerm p_57 = NULL;
            p_57 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_57, not_null(b_129));
            t = c_129(t);
            return(t);
          }
          z_128 = t;
          if(match_cons(t, sym__2))
            {
              a_129 = ATgetArgument(t, 0);
              if(((b_129 != NULL) && (b_129 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                b_129 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_129;
          t = SRTS_all(s_9, t);
        }
      }
    return(t);
  }
  t = c_129(t);
  return(t);
}
ATerm rename_4_0 (ATerm v_138 (ATerm (ATerm), ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_138 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_129 = NULL;
  static ATerm v_129 (ATerm t)
  {
    static ATerm t_9 (ATerm t)
    {
      ATerm p_129 = NULL,q_129 = NULL,r_129 = NULL;
      p_129 = t;
      if(match_cons(t, sym__2))
        {
          q_129 = ATgetArgument(t, 0);
          r_129 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_49 = t;
        int t_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_9 (ATerm t)
            {
              ATerm u_129 = NULL;
              u_129 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_129, r_129);
              t = lookup_0_0(t);
              return(t);
            }
            t = q_129;
            t = v_138(u_9, t);
            LocalPopChoice(t_49);
          }
        else
          {
            t = s_49;
            {
              ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
              t = p_129;
              t = e_13(w_138, y_138, q_129, r_129, t);
              if(match_cons(t, sym__3))
                {
                  w_57 = ATgetArgument(t, 0);
                  x_57 = ATgetArgument(t, 1);
                  y_57 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = d_13(v_129, x_138, w_57, x_57, y_57, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(t_9, t);
    return(t);
  }
  g_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_129, (ATerm) ATempty);
  t = v_129(t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_49 = ATgetArgument(t, 0);
      if(((ATgetType(v_49) != AT_LIST) || !(ATisEmpty(v_49))))
        _fail(t);
      {
        ATerm w_49 = ATgetArgument(t, 1);
        if(((ATgetType(w_49) != AT_LIST) || !(ATisEmpty(w_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_49 = ATgetArgument(t, 0);
      if(((ATgetType(y_49) == AT_LIST) && !(ATisEmpty(y_49))))
        {
          o_59 = ATgetFirst((ATermList) y_49);
          p_59 = (ATerm) ATgetNext((ATermList) y_49);
        }
      else
        _fail(t);
      {
        ATerm z_49 = ATgetArgument(t, 1);
        if(((ATgetType(z_49) == AT_LIST) && !(ATisEmpty(z_49))))
          {
            q_59 = ATgetFirst((ATermList) z_49);
            r_59 = (ATerm) ATgetNext((ATermList) z_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_59, q_59), (ATerm) ATmakeAppl(sym__2, p_59, r_59));
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL;
  if(match_cons(t, sym__2))
    {
      s_59 = ATgetArgument(t, 0);
      t_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_59), s_59);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm v_59 = NULL,x_59 = NULL,y_59 = NULL;
  if(match_cons(t, sym__2))
    {
      v_59 = ATgetArgument(t, 0);
      y_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_59;
  {
    ATerm a_50 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_59);
      }
    else
      {
        t = a_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_50 = ATgetArgument(t, 0);
            x_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_59, x_59);
      }
  }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_50 = ATgetArgument(t, 0);
      if(((ATgetType(e_50) != AT_LIST) || !(ATisEmpty(e_50))))
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
static ATerm a_10 (ATerm t)
{
  ATerm c_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_50 = ATgetArgument(t, 0);
      if(((ATgetType(h_50) == AT_LIST) && !(ATisEmpty(h_50))))
        {
          c_61 = ATgetFirst((ATermList) h_50);
          m_61 = (ATerm) ATgetNext((ATermList) h_50);
        }
      else
        _fail(t);
      {
        ATerm k_50 = ATgetArgument(t, 1);
        if(((ATgetType(k_50) == AT_LIST) && !(ATisEmpty(k_50))))
          {
            n_61 = ATgetFirst((ATermList) k_50);
            o_61 = (ATerm) ATgetNext((ATermList) k_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_61, n_61), (ATerm) ATmakeAppl(sym__2, m_61, o_61));
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL;
  if(match_cons(t, sym__2))
    {
      p_61 = ATgetArgument(t, 0);
      q_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_61), p_61);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm t_61 = NULL,v_61 = NULL,w_61 = NULL;
  if(match_cons(t, sym__2))
    {
      t_61 = ATgetArgument(t, 0);
      w_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_61;
  {
    ATerm l_50 = t;
    int m_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_61);
      }
    else
      {
        t = l_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_50 = ATgetArgument(t, 0);
            v_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_61, v_61);
      }
  }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_50 = ATgetArgument(t, 0);
      if(((ATgetType(p_50) != AT_LIST) || !(ATisEmpty(p_50))))
        _fail(t);
      {
        ATerm q_50 = ATgetArgument(t, 1);
        if(((ATgetType(q_50) != AT_LIST) || !(ATisEmpty(q_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_50 = ATgetArgument(t, 0);
      if(((ATgetType(r_50) == AT_LIST) && !(ATisEmpty(r_50))))
        {
          p_63 = ATgetFirst((ATermList) r_50);
          q_63 = (ATerm) ATgetNext((ATermList) r_50);
        }
      else
        _fail(t);
      {
        ATerm t_50 = ATgetArgument(t, 1);
        if(((ATgetType(t_50) == AT_LIST) && !(ATisEmpty(t_50))))
          {
            r_63 = ATgetFirst((ATermList) t_50);
            s_63 = (ATerm) ATgetNext((ATermList) t_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_63, r_63), (ATerm) ATmakeAppl(sym__2, q_63, s_63));
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL;
  if(match_cons(t, sym__2))
    {
      t_63 = ATgetArgument(t, 0);
      u_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_63), t_63);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm w_63 = NULL,z_63 = NULL,b_64 = NULL;
  if(match_cons(t, sym__2))
    {
      w_63 = ATgetArgument(t, 0);
      b_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_63;
  {
    ATerm u_50 = t;
    int v_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_64);
      }
    else
      {
        t = u_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_50 = ATgetArgument(t, 0);
            z_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_64, z_63);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm x_142 (ATerm), ATerm t)
{
  ATerm t_133 = NULL,u_133 = NULL,v_133 = NULL,w_133 = NULL,x_133 = NULL;
  t_133 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_133 = ATgetArgument(t, 0);
      v_133 = ATgetArgument(t, 1);
      {
        ATerm i_58 = NULL,l_58 = NULL,u_20 = NULL;
        t = SSLgetAnnotations(t_133);
        i_58 = t;
        t = u_133;
        t = x_142(t);
        l_58 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, l_58, v_133);
        u_20 = t;
        t = SSLsetAnnotations(u_20, i_58);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          u_133 = ATgetArgument(t, 0);
          v_133 = ATgetArgument(t, 1);
          w_133 = ATgetArgument(t, 2);
          {
            ATerm h_59 = NULL,l_59 = NULL,m_59 = NULL,a_21 = NULL;
            t = SSLgetAnnotations(t_133);
            h_59 = t;
            t = w_133;
            t = x_142(t);
            m_59 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_133, m_59);
            t = genzip_4_0(v_9, w_9, x_9, y_9, t);
            l_59 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, u_133, v_133, l_59);
            a_21 = t;
            t = SSLsetAnnotations(a_21, h_59);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_133 = ATgetArgument(t, 0);
              v_133 = ATgetArgument(t, 1);
              w_133 = ATgetArgument(t, 2);
              x_133 = ATgetArgument(t, 3);
              {
                ATerm r_60 = NULL,x_60 = NULL,y_60 = NULL,b_21 = NULL;
                t = SSLgetAnnotations(t_133);
                r_60 = t;
                t = w_133;
                t = x_142(t);
                y_60 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_133, y_60);
                t = genzip_4_0(z_9, a_10, b_10, c_10, t);
                x_60 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_133, v_133, x_60, x_133);
                b_21 = t;
                t = SSLsetAnnotations(b_21, r_60);
              }
            }
          else
            {
              ATerm y_62 = NULL,m_63 = NULL,n_63 = NULL,c_21 = NULL;
              if(match_cons(t, sym_RDefT_4))
                {
                  u_133 = ATgetArgument(t, 0);
                  v_133 = ATgetArgument(t, 1);
                  w_133 = ATgetArgument(t, 2);
                  x_133 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_133);
              y_62 = t;
              t = w_133;
              t = x_142(t);
              n_63 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_133, n_63);
              t = genzip_4_0(f_10, g_10, h_10, x_10, t);
              m_63 = t;
              t = (ATerm) ATmakeAppl(sym_RDefT_4, u_133, v_133, m_63, x_133);
              c_21 = t;
              t = SSLsetAnnotations(c_21, y_62);
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm y_142 (ATerm), ATerm z_142 (ATerm), ATerm a_143 (ATerm), ATerm t)
{
  ATerm y_137 = NULL,z_137 = NULL,c_138 = NULL,d_138 = NULL,g_138 = NULL;
  d_138 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_138 = ATgetArgument(t, 0);
      y_137 = ATgetArgument(t, 1);
      {
        ATerm p_64 = NULL,s_64 = NULL,t_64 = NULL,h_21 = NULL;
        t = SSLgetAnnotations(d_138);
        p_64 = t;
        t = g_138;
        t = a_143(t);
        s_64 = t;
        t = y_137;
        t = y_142(t);
        t_64 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_64, t_64);
        h_21 = t;
        t = SSLsetAnnotations(h_21, p_64);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          g_138 = ATgetArgument(t, 0);
          y_137 = ATgetArgument(t, 1);
          z_137 = ATgetArgument(t, 2);
          {
            ATerm e_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,i_21 = NULL;
            t = SSLgetAnnotations(d_138);
            e_65 = t;
            t = g_138;
            t = a_143(t);
            l_65 = t;
            t = y_137;
            t = a_143(t);
            m_65 = t;
            t = z_137;
            t = a_143(t);
            n_65 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, l_65, m_65, n_65);
            i_21 = t;
            t = SSLsetAnnotations(i_21, e_65);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              g_138 = ATgetArgument(t, 0);
              y_137 = ATgetArgument(t, 1);
              z_137 = ATgetArgument(t, 2);
              c_138 = ATgetArgument(t, 3);
              {
                ATerm m_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,j_21 = NULL;
                t = SSLgetAnnotations(d_138);
                m_66 = t;
                t = g_138;
                t = a_143(t);
                v_66 = t;
                t = y_137;
                t = a_143(t);
                w_66 = t;
                t = z_137;
                t = a_143(t);
                x_66 = t;
                t = c_138;
                t = y_142(t);
                y_66 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_66, w_66, x_66, y_66);
                j_21 = t;
                t = SSLsetAnnotations(j_21, m_66);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  g_138 = ATgetArgument(t, 0);
                  y_137 = ATgetArgument(t, 1);
                  z_137 = ATgetArgument(t, 2);
                  c_138 = ATgetArgument(t, 3);
                  {
                    ATerm t_67 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,f_68 = NULL,m_21 = NULL;
                    t = SSLgetAnnotations(d_138);
                    t_67 = t;
                    t = g_138;
                    t = a_143(t);
                    b_68 = t;
                    t = y_137;
                    t = a_143(t);
                    c_68 = t;
                    t = z_137;
                    t = a_143(t);
                    d_68 = t;
                    t = c_138;
                    t = y_142(t);
                    f_68 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, b_68, c_68, d_68, f_68);
                    m_21 = t;
                    t = SSLsetAnnotations(m_21, t_67);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      g_138 = ATgetArgument(t, 0);
                      {
                        ATerm q_68 = NULL,s_68 = NULL,n_21 = NULL;
                        t = SSLgetAnnotations(d_138);
                        q_68 = t;
                        t = g_138;
                        t = y_142(t);
                        s_68 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, s_68);
                        n_21 = t;
                        t = SSLsetAnnotations(n_21, q_68);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          g_138 = ATgetArgument(t, 0);
                          {
                            ATerm k_69 = NULL,m_69 = NULL,o_21 = NULL;
                            t = SSLgetAnnotations(d_138);
                            k_69 = t;
                            t = g_138;
                            t = y_142(t);
                            m_69 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, m_69);
                            o_21 = t;
                            t = SSLsetAnnotations(o_21, k_69);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              g_138 = ATgetArgument(t, 0);
                              {
                                ATerm s_69 = NULL,u_69 = NULL,p_21 = NULL;
                                t = SSLgetAnnotations(d_138);
                                s_69 = t;
                                t = g_138;
                                t = y_142(t);
                                u_69 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, u_69);
                                p_21 = t;
                                t = SSLsetAnnotations(p_21, s_69);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  g_138 = ATgetArgument(t, 0);
                                  {
                                    ATerm a_70 = NULL,c_70 = NULL,s_21 = NULL;
                                    t = SSLgetAnnotations(d_138);
                                    a_70 = t;
                                    t = g_138;
                                    t = y_142(t);
                                    c_70 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, c_70);
                                    s_21 = t;
                                    t = SSLsetAnnotations(s_21, a_70);
                                  }
                                }
                              else
                                {
                                  ATerm i_70 = NULL,k_70 = NULL,u_21 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      g_138 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(d_138);
                                  i_70 = t;
                                  t = g_138;
                                  t = y_142(t);
                                  k_70 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, k_70);
                                  u_21 = t;
                                  t = SSLsetAnnotations(u_21, i_70);
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
static ATerm z_10 (ATerm t)
{
  ATerm m_139 = NULL;
  ATerm a_51 = t;
  int c_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_139 = ATgetArgument(t, 0);
          {
            ATerm d_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_51);
      t = m_139;
    }
  else
    {
      t = a_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_139 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_139;
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm s_139 = NULL;
  ATerm e_51 = t;
  int f_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_139 = ATgetArgument(t, 0);
          {
            ATerm g_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_51);
      t = s_139;
    }
  else
    {
      t = e_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_139 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_139;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm f_139 = NULL;
  ATerm h_51 = t;
  int i_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm j_51 = ATgetArgument(t, 0);
          ATerm k_51 = ATgetArgument(t, 1);
          f_139 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(i_51);
      t = f_139;
      t = map_1_0(z_10, t);
    }
  else
    {
      t = h_51;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm l_51 = ATgetArgument(t, 0);
          ATerm m_51 = ATgetArgument(t, 1);
          f_139 = ATgetArgument(t, 2);
          {
            ATerm n_51 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_139;
      t = map_1_0(g_11, t);
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm j_140 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_140);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm o_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_51);
    }
  else
    {
      t = o_51;
      {
        ATerm q_51 = t;
        int x_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_51);
          }
        else
          {
            t = q_51;
            {
              ATerm y_51 = t;
              int z_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_140 = NULL,q_140 = NULL,r_140 = NULL,s_140 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_140 = ATgetArgument(t, 0);
                      q_140 = ATgetArgument(t, 1);
                      r_140 = ATgetArgument(t, 2);
                      s_140 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_140;
                  t = map_1_0(u_11, t);
                  LocalPopChoice(z_51);
                }
              else
                {
                  t = y_51;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm z_140 = NULL;
  ATerm a_52 = t;
  int g_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_140 = ATgetArgument(t, 0);
          {
            ATerm h_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_52);
      t = z_140;
    }
  else
    {
      t = a_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_140;
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm d_141 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_141);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm i_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_52);
    }
  else
    {
      t = i_52;
      {
        ATerm k_52 = t;
        int l_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_52);
          }
        else
          {
            t = k_52;
            {
              ATerm m_52 = t;
              int o_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_141 = NULL,g_141 = NULL,h_141 = NULL,i_141 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_141 = ATgetArgument(t, 0);
                      g_141 = ATgetArgument(t, 1);
                      h_141 = ATgetArgument(t, 2);
                      i_141 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_141;
                  t = map_1_0(x_11, t);
                  LocalPopChoice(o_52);
                }
              else
                {
                  t = m_52;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm p_141 = NULL;
  ATerm p_52 = t;
  int r_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_141 = ATgetArgument(t, 0);
          {
            ATerm s_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_52);
      t = p_141;
    }
  else
    {
      t = p_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_141;
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm t_141 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_141);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm t_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_52);
    }
  else
    {
      t = t_52;
      {
        ATerm v_52 = t;
        int w_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_52);
          }
        else
          {
            t = v_52;
            {
              ATerm a_53 = t;
              int b_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_141 = NULL,w_141 = NULL,x_141 = NULL,y_141 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_141 = ATgetArgument(t, 0);
                      w_141 = ATgetArgument(t, 1);
                      x_141 = ATgetArgument(t, 2);
                      y_141 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_141;
                  t = map_1_0(a_12, t);
                  LocalPopChoice(b_53);
                }
              else
                {
                  t = a_53;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm h_142 = NULL;
  ATerm e_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_142 = ATgetArgument(t, 0);
          {
            ATerm g_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_53);
      t = h_142;
    }
  else
    {
      t = e_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_142 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_142;
    }
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm l_142 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_142);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm h_53 = t;
  int i_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_53);
    }
  else
    {
      t = h_53;
      {
        ATerm j_53 = t;
        int l_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_53);
          }
        else
          {
            t = j_53;
            {
              ATerm m_53 = t;
              int n_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_142 = NULL,o_142 = NULL,p_142 = NULL,q_142 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_142 = ATgetArgument(t, 0);
                      o_142 = ATgetArgument(t, 1);
                      p_142 = ATgetArgument(t, 2);
                      q_142 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_142;
                  t = map_1_0(d_12, t);
                  LocalPopChoice(n_53);
                }
              else
                {
                  t = m_53;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm f_143 = NULL;
  ATerm o_53 = t;
  int p_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_143 = ATgetArgument(t, 0);
          {
            ATerm r_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_53);
      t = f_143;
    }
  else
    {
      t = o_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_143;
    }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm j_143 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_143);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm s_53 = t;
  int t_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_53);
    }
  else
    {
      t = s_53;
      {
        ATerm y_53 = t;
        int z_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_53);
          }
        else
          {
            t = y_53;
            {
              ATerm c_54 = t;
              int d_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_143 = NULL,m_143 = NULL,p_143 = NULL,q_143 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_143 = ATgetArgument(t, 0);
                      m_143 = ATgetArgument(t, 1);
                      p_143 = ATgetArgument(t, 2);
                      q_143 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_143;
                  t = map_1_0(k_12, t);
                  LocalPopChoice(d_54);
                }
              else
                {
                  t = c_54;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm x_143 = NULL;
  ATerm e_54 = t;
  int f_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_143 = ATgetArgument(t, 0);
          {
            ATerm g_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_54);
      t = x_143;
    }
  else
    {
      t = e_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_143;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm h_140 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      h_140 = ATgetArgument(t, 0);
      t = h_140;
      t = free_vars_3_0(r_11, s_11, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          h_140 = ATgetArgument(t, 0);
          t = h_140;
          t = free_vars_3_0(v_11, w_11, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              h_140 = ATgetArgument(t, 0);
              t = h_140;
              t = free_vars_3_0(y_11, z_11, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  h_140 = ATgetArgument(t, 0);
                  t = h_140;
                  t = free_vars_3_0(b_12, c_12, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      h_140 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = h_140;
                  t = free_vars_3_0(e_12, g_12, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm x_12 (ATerm w_124 (ATerm), ATerm x_53, ATerm w_53, ATerm t)
{
  static ATerm p_144 (ATerm t)
  {
    ATerm k_144 = NULL,l_144 = NULL,m_144 = NULL;
    k_144 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_144 = ATgetFirst((ATermList) t);
            m_144 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_54 = t;
          int k_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_144;
              {
                static ATerm t_12 (ATerm t)
                {
                  t = w_53;
                  return(t);
                }
                t = y_12(w_124, t_12, l_144, m_144, t);
              }
              t = p_144(t);
              LocalPopChoice(k_54);
            }
          else
            {
              t = h_54;
              {
                ATerm w_70 = NULL,b_71 = NULL,g_22 = NULL;
                t = SSLgetAnnotations(k_144);
                w_70 = t;
                t = m_144;
                t = p_144(t);
                b_71 = t;
                t = (ATerm) ATinsert(CheckATermList(b_71), l_144);
                g_22 = t;
                t = SSLsetAnnotations(g_22, w_70);
              }
            }
        }
      }
    return(t);
  }
  t = x_53;
  t = p_144(t);
  return(t);
}
ATerm foldr_3_0 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t)
{
  ATerm s_144 = NULL,t_144 = NULL,u_144 = NULL;
  s_144 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_144;
      t = b_128(t);
    }
  else
    {
      ATerm x_144 = NULL,y_144 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_144 = ATgetFirst((ATermList) t);
          u_144 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_144;
      t = d_128(t);
      x_144 = t;
      t = u_144;
      t = foldr_3_0(b_128, c_128, d_128, t);
      y_144 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_144, y_144);
      t = c_128(t);
    }
  return(t);
}
static ATerm y_12 (ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm b_54, ATerm a_54, ATerm t)
{
  t = a_125(t);
  {
    static ATerm c_13 (ATerm t)
    {
      ATerm b_145 = NULL;
      b_145 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_54, b_145);
      t = z_124(t);
      return(t);
    }
    t = fetch_1_0(c_13, t);
  }
  t = a_54;
  return(t);
}
static ATerm z_12 (ATerm r_124 (ATerm), ATerm v_53, ATerm u_53, ATerm t)
{
  static ATerm r_145 (ATerm t)
  {
    ATerm m_145 = NULL,n_145 = NULL,o_145 = NULL;
    m_145 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_145;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_145 = ATgetFirst((ATermList) t);
            o_145 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_54 = t;
          int m_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_145;
              {
                static ATerm i_13 (ATerm t)
                {
                  t = u_53;
                  return(t);
                }
                t = y_12(r_124, i_13, n_145, o_145, t);
              }
              t = r_145(t);
              LocalPopChoice(m_54);
            }
          else
            {
              t = l_54;
              {
                ATerm n_71 = NULL,x_71 = NULL,k_22 = NULL;
                t = SSLgetAnnotations(m_145);
                n_71 = t;
                t = o_145;
                t = r_145(t);
                x_71 = t;
                t = (ATerm) ATinsert(CheckATermList(x_71), n_145);
                k_22 = t;
                t = SSLsetAnnotations(k_22, n_71);
              }
            }
        }
      }
    return(t);
  }
  t = v_53;
  t = r_145(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_121 (ATerm), ATerm t)
{
  static ATerm n_146 (ATerm t)
  {
    ATerm k_146 = NULL,l_146 = NULL,m_146 = NULL;
    m_146 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_146 = ATgetFirst((ATermList) t);
        l_146 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_72 = NULL,v_72 = NULL,n_22 = NULL;
          t = SSLgetAnnotations(m_146);
          r_72 = t;
          t = l_146;
          t = n_146(t);
          v_72 = t;
          t = (ATerm) ATinsert(CheckATermList(v_72), k_146);
          n_22 = t;
          t = SSLsetAnnotations(n_22, r_72);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_146;
        t = c_121(t);
      }
    return(t);
  }
  t = n_146(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_145 = NULL,v_145 = NULL,w_145 = NULL;
  u_145 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_145;
    }
  else
    {
      static ATerm n_13 (ATerm t)
      {
        t = not_null(w_145);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_145 = ATgetFirst((ATermList) t);
          if(((w_145 != NULL) && (w_145 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_145 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_145;
      t = at_end_1_0(n_13, t);
    }
  return(t);
}
static ATerm z_146 (ATerm r_146, ATerm t)
{
  ATerm s_146 = NULL;
  t = SSL_explode_term(r_146);
  if(match_cons(t, sym__2))
    {
      ATerm n_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_146;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_146 = NULL,v_146 = NULL,w_146 = NULL;
  w_146 = t;
  if(match_cons(t, sym__2))
    {
      u_146 = ATgetArgument(t, 0);
      v_146 = ATgetArgument(t, 1);
      {
        ATerm o_54 = t;
        int p_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_14 (ATerm t)
            {
              t = v_146;
              return(t);
            }
            t = u_146;
            t = at_end_1_0(o_14, t);
            LocalPopChoice(p_54);
          }
        else
          {
            t = o_54;
            t = z_146(w_146, t);
          }
      }
    }
  else
    {
      t = z_146(w_146, t);
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_54 = ATgetArgument(t, 0);
      if(((ATgetType(r_54) != AT_LIST) || !(ATisEmpty(r_54))))
        _fail(t);
      {
        ATerm s_54 = ATgetArgument(t, 1);
        if(((ATgetType(s_54) != AT_LIST) || !(ATisEmpty(s_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm g_147 = NULL,h_147 = NULL,i_147 = NULL,j_147 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_54 = ATgetArgument(t, 0);
      if(((ATgetType(w_54) == AT_LIST) && !(ATisEmpty(w_54))))
        {
          g_147 = ATgetFirst((ATermList) w_54);
          h_147 = (ATerm) ATgetNext((ATermList) w_54);
        }
      else
        _fail(t);
      {
        ATerm x_54 = ATgetArgument(t, 1);
        if(((ATgetType(x_54) == AT_LIST) && !(ATisEmpty(x_54))))
          {
            i_147 = ATgetFirst((ATermList) x_54);
            j_147 = (ATerm) ATgetNext((ATermList) x_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_147, i_147), (ATerm) ATmakeAppl(sym__2, h_147, j_147));
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm k_147 = NULL,l_147 = NULL;
  if(match_cons(t, sym__2))
    {
      k_147 = ATgetArgument(t, 0);
      l_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_147), k_147);
  return(t);
}
static ATerm b_13 (ATerm n_717, ATerm s_717, ATerm k_73, ATerm t)
{
  ATerm b_147 = NULL,c_147 = NULL,d_147 = NULL,e_147 = NULL;
  t = SSL_explode_term(s_717);
  if(match_cons(t, sym__2))
    {
      b_147 = ATgetArgument(t, 0);
      d_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_717);
  if(match_cons(t, sym__2))
    {
      if((b_147 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_147, d_147);
  t = genzip_4_0(p_14, q_14, r_14, _id, t);
  e_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_147, k_73);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm t)
{
  static ATerm n_147 (ATerm t)
  {
    ATerm y_54 = t;
    int z_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_117(t);
        LocalPopChoice(z_54);
      }
    else
      {
        t = y_54;
        t = v_117(t);
        t = n_147(t);
      }
    return(t);
  }
  t = n_147(t);
  return(t);
}
ATerm for_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t)
{
  t = x_117(t);
  t = while_not_2_0(y_117, z_117, t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm u_147 = NULL;
  u_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_147);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm v_147 = NULL,w_147 = NULL,x_147 = NULL,y_147 = NULL,t_22 = NULL;
  y_147 = t;
  if(match_cons(t, sym__2))
    {
      w_147 = ATgetArgument(t, 0);
      x_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_147);
  v_147 = t;
  t = x_147;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_147, x_147);
  t_22 = t;
  t = SSLsetAnnotations(t_22, v_147);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm r_148 = NULL,s_148 = NULL,t_148 = NULL,u_148 = NULL,v_148 = NULL;
  r_148 = t;
  if(match_cons(t, sym__2))
    {
      s_148 = ATgetArgument(t, 0);
      t_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_148;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_148 = ATgetFirst((ATermList) t);
      v_148 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_55 = t;
        int b_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_149(s_148, t_148, r_148, t);
            LocalPopChoice(b_55);
          }
        else
          {
            t = a_55;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_148), u_148), v_148);
          }
      }
    }
  else
    {
      t = f_149(s_148, t_148, r_148, t);
    }
  return(t);
}
static ATerm f_149 (ATerm z_147, ATerm a_148, ATerm b_148, ATerm t)
{
  ATerm c_148 = NULL,f_148 = NULL,u_22 = NULL,i_148 = NULL,j_148 = NULL,k_148 = NULL,l_148 = NULL;
  t = SSLgetAnnotations(b_148);
  c_148 = t;
  t = a_148;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_148 = ATgetFirst((ATermList) t);
      l_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_148;
  if(match_cons(t, sym__2))
    {
      j_148 = ATgetArgument(t, 0);
      k_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_148;
        if((j_148 != t))
          {
            _fail(t);
          }
        t = l_148;
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = a_148;
        t = b_13(j_148, k_148, l_148, t);
      }
  }
  f_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_147, f_148);
  u_22 = t;
  t = SSLsetAnnotations(u_22, c_148);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm e_149 = NULL;
  if(match_cons(t, sym__2))
    {
      e_149 = ATgetArgument(t, 0);
      if((e_149 != ATgetArgument(t, 1)))
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
  ATerm g_55 = t;
  int h_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(u_14, w_14, c_15, t);
      LocalPopChoice(h_55);
    }
  else
    {
      t = g_55;
      {
        ATerm z_148 = NULL,a_149 = NULL,b_149 = NULL;
        z_148 = t;
        if(match_cons(t, sym__2))
          {
            a_149 = ATgetArgument(t, 0);
            b_149 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_148;
        t = z_12(d_15, a_149, b_149, t);
      }
    }
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  if(match_cons(t, sym__2))
    {
      f_73 = ATgetArgument(t, 0);
      g_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_12(k_15, f_73, g_73, t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm h_73 = NULL;
  if(match_cons(t, sym__2))
    {
      h_73 = ATgetArgument(t, 0);
      if((h_73 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL;
  if(match_cons(t, sym__2))
    {
      p_73 = ATgetArgument(t, 0);
      q_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_12(s_15, p_73, q_73, t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm r_73 = NULL;
  if(match_cons(t, sym__2))
    {
      r_73 = ATgetArgument(t, 0);
      if((r_73 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm t_149 (ATerm t)
  {
    ATerm i_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_140(t);
        LocalPopChoice(k_55);
      }
    else
      {
        t = i_55;
        {
          ATerm l_55 = t;
          int m_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_149 = NULL,i_149 = NULL,a_73 = NULL,b_73 = NULL;
              h_149 = t;
              t = m_140(t);
              i_149 = t;
              t = h_149;
              {
                static ATerm e_15 (ATerm t)
                {
                  ATerm k_149 = NULL;
                  t = t_149(t);
                  k_149 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_149, i_149);
                  t = diff_0_0(t);
                  return(t);
                }
                t = n_140(e_15, t_149, h_15, t);
              }
              b_73 = t;
              t = SSL_explode_term(b_73);
              if(match_cons(t, sym__2))
                {
                  ATerm n_55 = ATgetArgument(t, 0);
                  a_73 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_73;
              t = foldr_3_0(i_15, j_15, _id, t);
              LocalPopChoice(m_55);
            }
          else
            {
              t = l_55;
              {
                ATerm j_73 = NULL,l_73 = NULL;
                l_73 = t;
                t = SSL_explode_term(l_73);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_55 = ATgetArgument(t, 0);
                    j_73 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_73;
                t = foldr_3_0(q_15, r_15, t_149, t);
              }
            }
        }
      }
    return(t);
  }
  t = t_149(t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm f_150 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_150);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm p_55 = t;
  int q_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_55);
    }
  else
    {
      t = p_55;
      {
        ATerm r_55 = t;
        int s_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_55);
          }
        else
          {
            t = r_55;
            {
              ATerm t_55 = t;
              int u_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_150 = NULL,i_150 = NULL,j_150 = NULL,k_150 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_150 = ATgetArgument(t, 0);
                      i_150 = ATgetArgument(t, 1);
                      j_150 = ATgetArgument(t, 2);
                      k_150 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_150;
                  t = map_1_0(d_16, t);
                  LocalPopChoice(u_55);
                }
              else
                {
                  t = t_55;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm r_150 = NULL;
  ATerm v_55 = t;
  int w_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_150 = ATgetArgument(t, 0);
          {
            ATerm x_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_55);
      t = r_150;
    }
  else
    {
      t = v_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_150;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm y_149 = NULL,c_150 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      c_150 = ATgetArgument(t, 0);
      t = c_150;
      if(match_cons(t, sym_Rule_3))
        {
          y_149 = ATgetArgument(t, 0);
          {
            ATerm y_55 = ATgetArgument(t, 1);
          }
          {
            ATerm c_56 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = y_149;
      t = free_vars_3_0(u_15, z_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          c_150 = ATgetArgument(t, 0);
          {
            ATerm d_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_150;
    }
  return(t);
}
ATerm Var_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  ATerm v_150 = NULL,w_150 = NULL,x_150 = NULL,y_150 = NULL,x_22 = NULL;
  y_150 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_150);
  v_150 = t;
  t = w_150;
  t = u_88(t);
  x_150 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_150);
  x_22 = t;
  t = SSLsetAnnotations(x_22, v_150);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm e_56 = t;
  int f_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_56);
    }
  else
    {
      t = e_56;
      {
        ATerm g_56 = t;
        int h_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_151 = NULL,g_151 = NULL,h_151 = NULL,i_151 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                f_151 = ATgetArgument(t, 0);
                g_151 = ATgetArgument(t, 1);
                h_151 = ATgetArgument(t, 2);
                i_151 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = h_151;
            t = map_1_0(h_16, t);
            LocalPopChoice(h_56);
          }
        else
          {
            t = g_56;
            t = Bind8_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm p_151 = NULL;
  ATerm i_56 = t;
  int j_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_151 = ATgetArgument(t, 0);
          {
            ATerm l_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_56);
      t = p_151;
    }
  else
    {
      t = i_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_151;
    }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm m_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_151 = NULL,t_151 = NULL,u_151 = NULL,v_151 = NULL,w_151 = NULL;
      s_151 = t;
      if(match_cons(t, sym_Let_2))
        {
          t_151 = ATgetArgument(t, 0);
          u_151 = ATgetArgument(t, 1);
          t = s_151;
          t = u_12(t_151, u_151, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              t_151 = ATgetArgument(t, 0);
              u_151 = ATgetArgument(t, 1);
              v_151 = ATgetArgument(t, 2);
              t = u_151;
              t = map_1_0(n_16, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  t_151 = ATgetArgument(t, 0);
                  u_151 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, t_151);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_151 = ATgetArgument(t, 0);
                      u_151 = ATgetArgument(t, 1);
                      v_151 = ATgetArgument(t, 2);
                      w_151 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_151;
                  t = map_1_0(o_16, t);
                }
            }
        }
      LocalPopChoice(u_56);
    }
  else
    {
      t = m_56;
      t = Bind7_0_0(t);
    }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm e_152 = NULL;
  ATerm v_56 = t;
  int w_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_152 = ATgetArgument(t, 0);
          {
            ATerm x_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_56);
      t = e_152;
    }
  else
    {
      t = v_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_152;
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm p_152 = NULL;
  ATerm y_56 = t;
  int z_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_152 = ATgetArgument(t, 0);
          {
            ATerm c_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_56);
      t = p_152;
    }
  else
    {
      t = y_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_152;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, g_16, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, l_16, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm k_13 (ATerm s_43, ATerm t_43, ATerm t)
{
  ATerm s_152 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_43, t_43);
  t = c_14(s_43, t_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_152 = ATgetFirst((ATermList) t);
      {
        ATerm d_57 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_152;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm q_153 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_153 = ATgetArgument(t, 0);
      {
        ATerm e_57 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_153;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm r_153 = NULL,t_153 = NULL,u_153 = NULL,v_153 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      t_153 = ATgetArgument(t, 0);
      v_153 = ATgetArgument(t, 1);
      r_153 = ATgetArgument(t, 2);
      t = t_153;
      if(match_cons(t, sym_SVar_1))
        {
          u_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_153;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_153;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_153;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          t_153 = ATgetArgument(t, 0);
          v_153 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_153;
      if(match_cons(t, sym_SVar_1))
        {
          u_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_153;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_153;
    }
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm z_153 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_153 = ATgetArgument(t, 0);
      {
        ATerm f_57 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_153;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_57 = ATgetArgument(t, 0);
      if(((ATgetType(g_57) != AT_LIST) || !(ATisEmpty(g_57))))
        _fail(t);
      {
        ATerm h_57 = ATgetArgument(t, 1);
        if(((ATgetType(h_57) != AT_LIST) || !(ATisEmpty(h_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm a_154 = NULL,b_154 = NULL,c_154 = NULL,d_154 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_57 = ATgetArgument(t, 0);
      if(((ATgetType(i_57) == AT_LIST) && !(ATisEmpty(i_57))))
        {
          a_154 = ATgetFirst((ATermList) i_57);
          b_154 = (ATerm) ATgetNext((ATermList) i_57);
        }
      else
        _fail(t);
      {
        ATerm j_57 = ATgetArgument(t, 1);
        if(((ATgetType(j_57) == AT_LIST) && !(ATisEmpty(j_57))))
          {
            c_154 = ATgetFirst((ATermList) j_57);
            d_154 = (ATerm) ATgetNext((ATermList) j_57);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_154, c_154), (ATerm) ATmakeAppl(sym__2, b_154, d_154));
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm e_154 = NULL,f_154 = NULL;
  if(match_cons(t, sym__2))
    {
      e_154 = ATgetArgument(t, 0);
      f_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_154), e_154);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm g_154 = NULL,h_154 = NULL;
  if(match_cons(t, sym__2))
    {
      g_154 = ATgetArgument(t, 0);
      h_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_154), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_154)));
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm d_153 = NULL,e_153 = NULL,f_153 = NULL,g_153 = NULL,h_153 = NULL,i_153 = NULL,j_153 = NULL,k_153 = NULL,l_153 = NULL,m_153 = NULL,o_153 = NULL,p_153 = NULL,s_73 = NULL,t_73 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm k_57 = ATgetArgument(t, 0);
      if(match_cons(k_57, sym_SVar_1))
        {
          f_153 = ATgetArgument(k_57, 0);
        }
      else
        _fail(t);
      h_153 = ATgetArgument(t, 1);
      l_153 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_153), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  s_73 = t;
  t = term_l_57;
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_57, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_153), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = k_13(t_73, s_73, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm o_57 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_57) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      d_153 = ATgetArgument(t, 1);
      e_153 = ATgetArgument(t, 2);
      k_153 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_153, d_153, k_153, e_153);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((f_153 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_153 = ATgetArgument(t, 1);
      {
        ATerm q_57 = ATgetArgument(t, 2);
      }
      i_153 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_153;
  t = map_1_0(q_16, t);
  p_153 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_153, h_153, i_153);
  t = substitute_2_0(r_16, _id, t);
  j_153 = t;
  t = k_153;
  t = map_1_0(s_16, t);
  m_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_153, m_153);
  t = genzip_4_0(v_16, y_16, z_16, a_17, t);
  o_153 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_153, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_153), j_153));
  t = downup_1_0(b_17, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm r_154 = NULL,s_154 = NULL,t_154 = NULL;
  r_154 = t;
  t = term_x_21;
  s_154 = t;
  t = (ATerm) ATinsert(ATempty, term_r_57);
  t_154 = t;
  t = SSL_printnl(s_154, t_154);
  t = r_154;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = debug_1_0(n_17, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_s_57;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm b_155 = NULL,c_155 = NULL,d_155 = NULL;
  b_155 = t;
  t = term_x_21;
  c_155 = t;
  t = (ATerm) ATinsert(ATempty, term_t_57);
  d_155 = t;
  t = SSL_printnl(c_155, d_155);
  t = b_155;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm p_154 = NULL,q_154 = NULL;
  q_154 = t;
  t = new_0_0(t);
  p_154 = t;
  {
    ATerm u_57 = t;
    int v_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_a_58, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_154), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(v_57);
      }
    else
      {
        t = u_57;
        t = if_verbose2_1_0(c_17, t);
        _fail(t);
      }
  }
  {
    ATerm b_58 = t;
    int c_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_154 = NULL,v_154 = NULL,w_154 = NULL,x_154 = NULL,y_154 = NULL,z_154 = NULL,a_155 = NULL;
        u_154 = t;
        if(match_cons(t, sym_LChoice_2))
          {
            v_154 = ATgetArgument(t, 0);
            a_155 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_154;
        if(match_cons(t, sym_CallT_3))
          {
            w_154 = ATgetArgument(t, 0);
            y_154 = ATgetArgument(t, 1);
            z_154 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = w_154;
        if(match_cons(t, sym_SVar_1))
          {
            x_154 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_154;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_154;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_155;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        t = x_154;
        if((p_154 != t))
          {
            _fail(t);
          }
        t = u_154;
        LocalPopChoice(c_58);
      }
    else
      {
        t = b_58;
        t = if_verbose1_1_0(d_17, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(o_17, t);
  t = q_154;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
static ATerm l_13 (ATerm d_119 (ATerm), ATerm d_42, ATerm b_42, ATerm t)
{
  ATerm e_155 = NULL,f_155 = NULL,g_155 = NULL,h_155 = NULL,i_155 = NULL,j_155 = NULL,k_155 = NULL,l_155 = NULL;
  h_155 = t;
  t = d_119(t);
  e_155 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_155, d_42, b_42);
  t = d_14(e_155, d_42, b_42, t);
  {
    ATerm d_58 = t;
    int e_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_155 = NULL;
        t = term_j_32;
        m_155 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_155, term_j_32);
        t = c_14(e_155, m_155, t);
        LocalPopChoice(e_58);
      }
    else
      {
        t = d_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_155 = ATgetFirst((ATermList) t);
      g_155 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_155, term_j_32, (ATerm) ATinsert(CheckATermList(g_155), (ATerm) ATinsert(CheckATermList(f_155), d_42)));
  t = lookup_table_0_1(e_155, t);
  l_155 = t;
  t = term_j_32;
  i_155 = t;
  t = (ATerm) ATinsert(CheckATermList(g_155), (ATerm) ATinsert(CheckATermList(f_155), d_42));
  j_155 = t;
  t = l_155;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(i_155, j_155, k_155, t);
  t = h_155;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_l_57;
  return(t);
}
static ATerm m_13 (ATerm c_23, ATerm d_23, ATerm f_23, ATerm e_23, ATerm t)
{
  ATerm n_155 = NULL,o_155 = NULL,p_155 = NULL;
  n_155 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_23), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  o_155 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_f_58, d_23, e_23, f_23);
  p_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_23), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_f_58, d_23, e_23, f_23));
  t = l_13(p_17, o_155, p_155, t);
  t = n_155;
  return(t);
}
ATerm map_1_0 (ATerm l_120 (ATerm), ATerm t)
{
  static ATerm e_156 (ATerm t)
  {
    ATerm b_156 = NULL,c_156 = NULL,d_156 = NULL;
    b_156 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_156;
      }
    else
      {
        ATerm y_73 = NULL,b_74 = NULL,c_74 = NULL,z_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_156 = ATgetFirst((ATermList) t);
            d_156 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_156);
        y_73 = t;
        t = c_156;
        t = l_120(t);
        b_74 = t;
        t = d_156;
        t = e_156(t);
        c_74 = t;
        t = (ATerm) ATinsert(CheckATermList(c_74), b_74);
        z_22 = t;
        t = SSLsetAnnotations(z_22, y_73);
      }
    return(t);
  }
  t = e_156(t);
  return(t);
}
ATerm Cons_2_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t)
{
  ATerm g_156 = NULL,h_156 = NULL,i_156 = NULL,j_156 = NULL,k_156 = NULL,l_156 = NULL,b_23 = NULL;
  l_156 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_156 = ATgetFirst((ATermList) t);
      i_156 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_156);
  g_156 = t;
  t = h_156;
  t = o_107(t);
  j_156 = t;
  t = i_156;
  t = p_107(t);
  k_156 = t;
  t = (ATerm) ATinsert(CheckATermList(k_156), j_156);
  b_23 = t;
  t = SSLsetAnnotations(b_23, g_156);
  return(t);
}
static ATerm o_13 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm m_156 = NULL;
  t = SSL_fputc(g_33, h_33);
  m_156 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_156);
  return(t);
}
static ATerm p_13 (ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm n_156 = NULL;
  t = SSL_write_term_to_stream_text(u_38, v_38);
  n_156 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_156);
  return(t);
}
static ATerm r_13 (ATerm s_118 (ATerm), ATerm e_323, ATerm d_39, ATerm t)
{
  ATerm o_156 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_323, term_g_58);
  t = w_13(t);
  o_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_156, d_39);
  t = s_118(t);
  t = fclose_0_0(t);
  t = d_39;
  return(t);
}
static ATerm q_13 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm p_156 = NULL;
  t = SSL_write_term_to_stream_baf(o_38, p_38);
  p_156 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_156);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_58 = ATgetArgument(t, 0);
      if(match_cons(h_58, sym_Stream_1))
        {
          t_74 = ATgetArgument(h_58, 0);
        }
      else
        _fail(t);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_13(t_74, u_74, t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_58 = ATgetArgument(t, 0);
      if(match_cons(j_58, sym_Stream_1))
        {
          i_75 = ATgetArgument(j_58, 0);
        }
      else
        _fail(t);
      j_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13(i_75, j_75, t);
  f_75 = t;
  t = term_g_24;
  g_75 = t;
  t = f_75;
  if(match_cons(t, sym_Stream_1))
    {
      h_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, f_75);
  t = o_13(g_75, h_75, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_156 = NULL,u_156 = NULL,v_156 = NULL,w_156 = NULL,x_156 = NULL,z_156 = NULL,a_157 = NULL,b_157 = NULL,c_157 = NULL,d_157 = NULL,d_158 = NULL,e_158 = NULL,s_23 = NULL,k_23 = NULL;
  u_156 = t;
  if(match_cons(t, sym__2))
    {
      b_157 = ATgetArgument(t, 0);
      c_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_156);
  a_157 = t;
  t = b_157;
  {
    ATerm k_58 = t;
    int m_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_17 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_156 != NULL) && (t_156 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_156 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_17, t);
        LocalPopChoice(m_58);
      }
    else
      {
        t = k_58;
        t = term_n_58;
        t_156 = t;
      }
  }
  d_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_157, c_157);
  k_23 = t;
  t = SSLsetAnnotations(k_23, a_157);
  t = u_156;
  if(match_cons(t, sym__2))
    {
      w_156 = ATgetArgument(t, 0);
      x_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_156);
  v_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_156, (ATerm) ATmakeAppl(sym__2, not_null(t_156), x_156));
  s_23 = t;
  t = SSLsetAnnotations(s_23, v_156);
  z_156 = t;
  if(match_cons(t, sym__2))
    {
      d_158 = ATgetArgument(t, 0);
      e_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_58 = t;
    int p_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_23 = NULL;
        t = SSLgetAnnotations(z_156);
        j_74 = t;
        t = d_158;
        t = fetch_1_0(v_17, t);
        p_74 = t;
        t = e_158;
        if(match_cons(t, sym__2))
          {
            r_74 = ATgetArgument(t, 0);
            s_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_13(w_17, r_74, s_74, t);
        q_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_74, q_74);
        t_23 = t;
        t = SSLsetAnnotations(t_23, j_74);
        LocalPopChoice(p_58);
      }
    else
      {
        t = o_58;
        {
          ATerm z_74 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,u_23 = NULL;
          t = SSLgetAnnotations(z_156);
          z_74 = t;
          t = e_158;
          if(match_cons(t, sym__2))
            {
              d_75 = ATgetArgument(t, 0);
              e_75 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_13(x_17, d_75, e_75, t);
          c_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_158, c_75);
          u_23 = t;
          t = SSLsetAnnotations(u_23, z_74);
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
ATerm apply_strategy_1_0 (ATerm y_133 (ATerm), ATerm t)
{
  ATerm h_158 = NULL,i_158 = NULL,j_158 = NULL,k_158 = NULL,l_158 = NULL;
  l_158 = t;
  t = dtime_0_0(t);
  t = l_158;
  t = y_133(t);
  k_158 = t;
  t = dtime_0_0(t);
  h_158 = t;
  t = k_158;
  if(match_cons(t, sym__2))
    {
      i_158 = ATgetArgument(t, 0);
      j_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_158), (ATerm) ATmakeAppl(sym_Runtime_1, h_158)), j_158);
  return(t);
}
static ATerm z_158 (ATerm t_158, ATerm t)
{
  t = SSL_fclose(t_158);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_158 = NULL,x_158 = NULL;
  x_158 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_158 = ATgetArgument(t, 0);
      {
        ATerm q_58 = t;
        int r_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_158);
            LocalPopChoice(r_58);
          }
        else
          {
            t = q_58;
            t = z_158(x_158, t);
          }
      }
    }
  else
    {
      t = z_158(x_158, t);
    }
  return(t);
}
static ATerm s_13 (ATerm y_38, ATerm t)
{
  t = SSL_read_term_from_stream(y_38);
  return(t);
}
static ATerm t_13 (ATerm z_31, ATerm a_32, ATerm t)
{
  t = SSL_strcat(z_31, a_32);
  return(t);
}
static ATerm v_13 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm a_159 = NULL;
  t = SSL_fopen(i_33, j_33);
  a_159 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_159);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_159 = NULL;
  t = SSL_stdin_stream();
  b_159 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_159);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_159 = NULL;
  t = SSL_stdout_stream();
  c_159 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_159);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_159 = NULL;
  t = SSL_stderr_stream();
  d_159 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_159);
  return(t);
}
static ATerm k_160 (ATerm j_159, ATerm t)
{
  ATerm k_159 = NULL;
  t = SSL_explode_term(j_159);
  if(match_cons(t, sym__2))
    {
      ATerm s_58 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_58) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_58 = ATgetArgument(t, 1);
        if(((ATgetType(t_58) == AT_LIST) && !(ATisEmpty(t_58))))
          {
            k_159 = ATgetFirst((ATermList) t_58);
            {
              ATerm v_58 = (ATerm) ATgetNext((ATermList) t_58);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_159;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_159;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_159;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_159;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_160 (ATerm n_159, ATerm o_159, ATerm p_159, ATerm t)
{
  ATerm q_159 = NULL,r_159 = NULL,s_159 = NULL,v_159 = NULL,r_24 = NULL;
  t = SSLgetAnnotations(p_159);
  s_159 = t;
  t = n_159;
  if(match_cons(t, sym_Path_1))
    {
      v_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_159, o_159);
  r_24 = t;
  t = SSLsetAnnotations(r_24, s_159);
  if(match_cons(t, sym__2))
    {
      q_159 = ATgetArgument(t, 0);
      r_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(q_159, r_159, t);
  return(t);
}
static ATerm m_160 (ATerm x_159, ATerm y_159, ATerm z_159, ATerm t)
{
  ATerm a_160 = NULL,b_160 = NULL,c_160 = NULL,f_160 = NULL,s_24 = NULL;
  t = SSLgetAnnotations(z_159);
  c_160 = t;
  t = SSL_is_string(x_159);
  f_160 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_160, y_159);
  s_24 = t;
  t = SSLsetAnnotations(s_24, c_160);
  if(match_cons(t, sym__2))
    {
      a_160 = ATgetArgument(t, 0);
      b_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(a_160, b_160, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm h_160 = NULL,i_160 = NULL,j_160 = NULL;
  h_160 = t;
  if(match_cons(t, sym__2))
    {
      i_160 = ATgetArgument(t, 0);
      j_160 = ATgetArgument(t, 1);
      {
        ATerm w_58 = t;
        int x_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_160(h_160, t);
            LocalPopChoice(x_58);
          }
        else
          {
            t = w_58;
            {
              ATerm y_58 = t;
              int f_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_160(i_160, j_160, h_160, t);
                  LocalPopChoice(f_59);
                }
              else
                {
                  t = y_58;
                  t = m_160(i_160, j_160, h_160, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_160(h_160, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_160 = NULL,p_160 = NULL,q_160 = NULL,v_160 = NULL;
  v_160 = t;
  {
    ATerm g_59 = t;
    int i_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_160, term_j_59);
        t = w_13(t);
        LocalPopChoice(i_59);
      }
    else
      {
        t = g_59;
        {
          ATerm u_75 = NULL,v_75 = NULL;
          t = term_k_59;
          v_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_59, v_160);
          t = t_13(v_75, v_160, t);
          u_75 = t;
          t = SSL_perror(u_75);
          _fail(t);
        }
      }
  }
  p_160 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_13(q_160, t);
  o_160 = t;
  t = p_160;
  t = fclose_0_0(t);
  t = o_160;
  return(t);
}
ATerm fetch_1_0 (ATerm v_120 (ATerm), ATerm t)
{
  static ATerm u_161 (ATerm t)
  {
    ATerm r_161 = NULL,s_161 = NULL,t_161 = NULL;
    r_161 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_161 = ATgetFirst((ATermList) t);
        t_161 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_59 = t;
      int u_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_76 = NULL,d_76 = NULL,x_24 = NULL;
          t = SSLgetAnnotations(r_161);
          a_76 = t;
          t = s_161;
          t = v_120(t);
          d_76 = t;
          t = (ATerm) ATinsert(CheckATermList(t_161), d_76);
          x_24 = t;
          t = SSLsetAnnotations(x_24, a_76);
          LocalPopChoice(u_59);
        }
      else
        {
          t = n_59;
          {
            ATerm l_76 = NULL,o_76 = NULL,y_24 = NULL;
            t = SSLgetAnnotations(r_161);
            l_76 = t;
            t = t_161;
            t = u_161(t);
            o_76 = t;
            t = (ATerm) ATinsert(CheckATermList(o_76), s_161);
            y_24 = t;
            t = SSLsetAnnotations(y_24, l_76);
          }
        }
    }
    return(t);
  }
  t = u_161(t);
  return(t);
}
static ATerm c_14 (ATerm a_45, ATerm b_45, ATerm t)
{
  ATerm x_161 = NULL;
  t = lookup_table_0_1(a_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_14(b_45, x_161, t);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm a_162 = NULL;
  a_162 = t;
  if(match_string(t, "-k"))
    {
      t = a_162;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_162;
    }
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm b_162 = NULL,c_162 = NULL,d_162 = NULL;
  b_162 = t;
  t = SSL_string_to_int(b_162);
  c_162 = t;
  t = term_w_59;
  d_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_59, c_162);
  t = f_14(d_162, c_162, t);
  t = b_162;
  return(t);
}
static ATerm j_18 (ATerm t)
{
  t = term_z_59;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_18, i_18, j_18, t);
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm f_162 = NULL;
  f_162 = t;
  if(match_string(t, "-S"))
    {
      t = f_162;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_162;
    }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm g_162 = NULL,h_162 = NULL;
  t = term_e_22;
  g_162 = t;
  t = term_a_60;
  h_162 = t;
  t = term_b_60;
  t = f_14(g_162, h_162, t);
  t = term_c_60;
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = term_d_60;
  return(t);
}
static ATerm r_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm i_162 = NULL,j_162 = NULL,k_162 = NULL;
  i_162 = t;
  t = SSL_string_to_int(i_162);
  j_162 = t;
  t = term_e_22;
  k_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, j_162);
  t = f_14(k_162, j_162, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_162);
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = term_e_60;
  return(t);
}
static ATerm u_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm l_162 = NULL,m_162 = NULL;
  t = term_f_60;
  l_162 = t;
  t = term_w_21;
  m_162 = t;
  t = term_g_60;
  t = f_14(l_162, m_162, t);
  t = term_h_60;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = term_i_60;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_60 = t;
  int k_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_18, p_18, q_18, t);
      LocalPopChoice(k_60);
    }
  else
    {
      t = j_60;
      {
        ATerm l_60 = t;
        int m_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_18, s_18, t_18, t);
            LocalPopChoice(m_60);
          }
        else
          {
            t = l_60;
            t = Option_3_0(u_18, v_18, w_18, t);
          }
      }
    }
  return(t);
}
static ATerm f_14 (ATerm o_67, ATerm p_67, ATerm t)
{
  ATerm n_162 = NULL,o_162 = NULL;
  t = term_d_22;
  n_162 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_22, o_67, p_67);
  t = lookup_table_0_1(n_162, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(o_67, p_67, o_162, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_22, o_67, p_67);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_162 = NULL,t_162 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_162 = NULL,v_162 = NULL,w_162 = NULL;
      t = term_w_21;
      t = e_0(t);
      u_162 = t;
      t = term_n_60;
      v_162 = t;
      t = term_o_60;
      w_162 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_60, term_o_60, u_162);
      t = d_14(v_162, w_162, u_162, t);
      _fail(t);
    }
  else
    {
      ATerm z_162 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_162 = ATgetFirst((ATermList) t);
          t_162 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_162;
      t = c_0(t);
      t = term_w_21;
      t = d_0(t);
      z_162 = t;
      t = (ATerm) ATinsert(CheckATermList(t_162), z_162);
    }
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm b_163 = NULL;
  b_163 = t;
  if(match_string(t, "-o"))
    {
      t = b_163;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_163;
    }
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm c_163 = NULL,d_163 = NULL;
  c_163 = t;
  t = term_p_60;
  d_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_60, c_163);
  t = f_14(d_163, c_163, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_163);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_q_60;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_18, y_18, a_19, t);
  return(t);
}
static ATerm d_14 (ATerm h_43, ATerm i_43, ATerm g_43, ATerm t)
{
  ATerm f_163 = NULL,g_163 = NULL,h_163 = NULL,i_163 = NULL,j_163 = NULL;
  f_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_43, i_43);
  {
    ATerm s_60 = t;
    int t_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_60 = ATgetArgument(t, 0);
            ATerm v_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_43, i_43);
        t = c_14(h_43, i_43, t);
        LocalPopChoice(t_60);
      }
    else
      {
        t = s_60;
        t = (ATerm) ATempty;
      }
  }
  g_163 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_43, i_43, (ATerm) ATinsert(CheckATermList(g_163), g_43));
  t = lookup_table_0_1(h_43, t);
  j_163 = t;
  t = (ATerm) ATinsert(CheckATermList(g_163), g_43);
  h_163 = t;
  t = j_163;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(i_43, h_163, i_163, t);
  t = f_163;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_163 = NULL,r_163 = NULL,s_163 = NULL,t_163 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_163 = NULL,v_163 = NULL,w_163 = NULL;
      t = term_w_21;
      t = n_0(t);
      u_163 = t;
      t = term_n_60;
      v_163 = t;
      t = term_o_60;
      w_163 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_60, term_o_60, u_163);
      t = d_14(v_163, w_163, u_163, t);
      _fail(t);
    }
  else
    {
      ATerm a_164 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_163 = ATgetFirst((ATermList) t);
          r_163 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_163;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_163 = ATgetFirst((ATermList) t);
          t_163 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_163;
      t = k_0(t);
      t = s_163;
      t = l_0(t);
      a_164 = t;
      t = (ATerm) ATinsert(CheckATermList(t_163), a_164);
    }
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm c_164 = NULL;
  c_164 = t;
  if(match_string(t, "-i"))
    {
      t = c_164;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_164;
    }
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm d_164 = NULL,e_164 = NULL;
  d_164 = t;
  t = term_w_60;
  e_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_60, d_164);
  t = f_14(e_164, d_164, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_164);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  t = term_z_60;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_19, j_19, l_19, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_164 = NULL,g_164 = NULL,h_164 = NULL,i_164 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_21;
  t = whoami_0_0(t);
  f_164 = t;
  t = term_x_21;
  h_164 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_61), f_164);
  i_164 = t;
  t = SSL_printnl(h_164, i_164);
  t = term_a_22;
  g_164 = t;
  t = SSL_exit(g_164);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_164 = NULL,k_164 = NULL;
  t = term_d_22;
  j_164 = t;
  t = term_b_61;
  k_164 = t;
  t = term_d_61;
  t = c_14(j_164, k_164, t);
  return(t);
}
static ATerm y_13 (ATerm m_40, ATerm n_40, ATerm t)
{
  ATerm e_61 = t;
  int f_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_40, n_40);
      LocalPopChoice(f_61);
    }
  else
    {
      t = e_61;
      t = SSL_addr(m_40, n_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm t)
{
  ATerm m_164 = NULL,n_164 = NULL,o_164 = NULL;
  m_164 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_164;
      t = z_127(t);
    }
  else
    {
      ATerm r_164 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_164 = ATgetFirst((ATermList) t);
          o_164 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_164;
      t = foldr_2_0(z_127, a_128, t);
      r_164 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_164, r_164);
      t = a_128(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_19 (ATerm t)
{
  t = term_a_60;
  return(t);
}
static ATerm o_19 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL;
  if(match_cons(t, sym__2))
    {
      x_76 = ATgetArgument(t, 0);
      y_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_13(x_76, y_76, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_164 = NULL,t_76 = NULL,u_76 = NULL;
  t = times_0_0(t);
  u_76 = t;
  t = SSL_explode_term(u_76);
  if(match_cons(t, sym__2))
    {
      ATerm g_61 = ATgetArgument(t, 0);
      t_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_76;
  t = foldr_2_0(n_19, o_19, t);
  u_164 = t;
  t = SSL_TicksToSeconds(u_164);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_165 = NULL,g_165 = NULL,h_165 = NULL;
  f_165 = t;
  if(match_cons(t, sym__2))
    {
      g_165 = ATgetArgument(t, 0);
      h_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_165;
        if((g_165 != t))
          {
            _fail(t);
          }
        t = f_165;
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
        t = (ATerm) ATmakeAppl(sym__2, g_165, h_165);
        {
          ATerm j_61 = t;
          int k_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_165, h_165);
              LocalPopChoice(k_61);
            }
          else
            {
              t = j_61;
              t = SSL_gtr(g_165, h_165);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_165, h_165);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_143 (ATerm), ATerm t)
{
  ATerm l_165 = NULL;
  l_165 = t;
  {
    ATerm l_61 = t;
    int r_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_165 = NULL,o_165 = NULL,p_165 = NULL;
        t = term_d_22;
        o_165 = t;
        t = term_e_22;
        p_165 = t;
        t = term_f_22;
        t = c_14(o_165, p_165, t);
        n_165 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_165, term_a_22);
        t = geq_0_0(t);
        t = l_165;
        t = n_143(t);
        LocalPopChoice(r_61);
      }
    else
      {
        t = l_61;
        t = l_165;
      }
  }
  return(t);
}
static ATerm p_19 (ATerm t)
{
  ATerm r_165 = NULL,s_165 = NULL,u_165 = NULL,v_165 = NULL;
  t = run_time_0_0(t);
  r_165 = t;
  t = term_w_21;
  t = whoami_0_0(t);
  s_165 = t;
  t = term_x_21;
  u_165 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_61), r_165), term_s_61), s_165);
  v_165 = t;
  t = SSL_printnl(u_165, v_165);
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_61), r_165), term_s_61), s_165));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_165 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_60;
  w_165 = t;
  t = SSL_exit(w_165);
  return(t);
}
static ATerm q_19 (ATerm t)
{
  ATerm g_166 = NULL,h_166 = NULL;
  h_166 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_166;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_166 = ATgetArgument(t, 0);
          {
            ATerm k_77 = NULL,d_25 = NULL;
            t = SSLgetAnnotations(h_166);
            k_77 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_166);
            d_25 = t;
            t = SSLsetAnnotations(d_25, k_77);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_166;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_134 (ATerm), ATerm t)
{
  ATerm x_61 = t;
  int y_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_165 = NULL,a_166 = NULL;
      t = term_d_22;
      z_165 = t;
      t = term_z_61;
      a_166 = t;
      t = term_a_62;
      t = c_14(z_165, a_166, t);
      LocalPopChoice(y_61);
    }
  else
    {
      t = x_61;
      t = fetch_1_0(q_19, t);
    }
  t = w_134(t);
  return(t);
}
static ATerm g_14 (ATerm z_46, ATerm a_47, ATerm b_47, ATerm t)
{
  ATerm j_166 = NULL;
  t = SSL_hashtable_put(b_47, z_46, a_47);
  j_166 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_166);
  return(t);
}
static ATerm h_14 (ATerm c_47, ATerm d_47, ATerm t)
{
  t = SSL_hashtable_get(d_47, c_47);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_44, ATerm t)
{
  ATerm s_166 = NULL;
  t = table_hashtable_0_0(t);
  s_166 = t;
  {
    ATerm b_62 = t;
    int c_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_77 = NULL;
        t = s_166;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_77 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_14(t_44, q_77, t);
        LocalPopChoice(c_62);
      }
    else
      {
        t = b_62;
        {
          ATerm v_77 = NULL;
          t = t_44;
          t = table_create_0_0(t);
          t = s_166;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_14(t_44, v_77, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm v_166 = NULL;
  t = SSL_hashtable_create(h_47, i_47);
  v_166 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_166);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_166 = NULL,x_166 = NULL,y_166 = NULL,a_167 = NULL,b_167 = NULL;
  w_166 = t;
  t = term_d_62;
  a_167 = t;
  t = term_e_62;
  b_167 = t;
  t = w_166;
  t = new_hashtable_0_2(a_167, b_167, t);
  x_166 = t;
  t = w_166;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(w_166, x_166, y_166, t);
  t = w_166;
  return(t);
}
static ATerm a_14 (ATerm e_47, ATerm f_47, ATerm t)
{
  ATerm c_167 = NULL;
  t = SSL_hashtable_remove(f_47, e_47);
  c_167 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_167);
  return(t);
}
static ATerm b_14 (ATerm j_47, ATerm t)
{
  ATerm d_167 = NULL;
  t = SSL_hashtable_destroy(j_47);
  d_167 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_167);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_167 = NULL;
  t = SSL_table_hashtable();
  e_167 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_167);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_167 = NULL,g_167 = NULL,h_167 = NULL,i_167 = NULL;
  f_167 = t;
  t = table_hashtable_0_0(t);
  g_167 = t;
  t = lookup_table_0_1(f_167, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_14(i_167, t);
  t = g_167;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_14(f_167, h_167, t);
  t = f_167;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm k_167 = NULL,l_167 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_167 = ATgetFirst((ATermList) t);
      l_167 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_167 = NULL,q_167 = NULL;
        static ATerm s_19 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_167)), not_null(q_167));
          return(t);
        }
        t = l_167;
        t = i_0(t);
        if(((p_167 != NULL) && (p_167 != t)))
          _fail(t);
        else
          p_167 = t;
        t = k_167;
        t = g_0(t);
        if(((q_167 != NULL) && (q_167 != t)))
          _fail(t);
        else
          q_167 = t;
        t = l_167;
        t = reverse_acc_2_0(g_0, s_19, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_21;
      t = i_0(t);
    }
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm w_167 = NULL,x_167 = NULL,y_167 = NULL,n_25 = NULL;
  y_167 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_167);
  w_167 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_167);
  n_25 = t;
  t = SSLsetAnnotations(n_25, w_167);
  return(t);
}
static ATerm u_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_19 (ATerm t)
{
  ATerm a_168 = NULL;
  a_168 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_168), term_f_62);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_167 = NULL,t_167 = NULL;
  ATerm g_62 = t;
  int h_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_167 = NULL,v_167 = NULL;
      t = term_d_22;
      u_167 = t;
      t = term_b_61;
      v_167 = t;
      t = term_d_61;
      t = c_14(u_167, v_167, t);
      LocalPopChoice(h_62);
    }
  else
    {
      t = g_62;
      t = fetch_1_0(t_19, t);
    }
  t = term_i_62;
  t = echo_0_0(t);
  t = term_n_60;
  s_167 = t;
  t = term_o_60;
  t_167 = t;
  t = term_j_62;
  t = c_14(s_167, t_167, t);
  t = reverse_acc_2_0(_id, u_19, t);
  t = map_1_0(v_19, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_168 = NULL,d_168 = NULL,e_168 = NULL;
  c_168 = t;
  {
    ATerm k_62 = t;
    int l_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_168;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_62 = ATgetFirst((ATermList) t);
                ATerm n_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_168;
          }
        LocalPopChoice(l_62);
      }
    else
      {
        t = k_62;
        t = (ATerm) ATinsert(ATempty, c_168);
      }
  }
  d_168 = t;
  t = term_n_58;
  e_168 = t;
  t = SSL_printnl(e_168, d_168);
  t = c_168;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_168 = NULL,j_168 = NULL;
  t = term_d_22;
  i_168 = t;
  t = term_b_61;
  j_168 = t;
  t = term_d_61;
  t = c_14(i_168, j_168, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_19 (ATerm t)
{
  ATerm k_168 = NULL,l_168 = NULL;
  t = term_o_62;
  k_168 = t;
  t = term_w_21;
  l_168 = t;
  t = term_p_62;
  t = f_14(k_168, l_168, t);
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = term_q_62;
  return(t);
}
static ATerm a_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_20 (ATerm t)
{
  ATerm m_168 = NULL,n_168 = NULL,o_168 = NULL,p_168 = NULL;
  t = term_o_62;
  o_168 = t;
  t = term_w_21;
  p_168 = t;
  t = term_p_62;
  t = f_14(o_168, p_168, t);
  t = term_r_62;
  m_168 = t;
  t = term_w_21;
  n_168 = t;
  t = term_s_62;
  t = f_14(m_168, n_168, t);
  t = term_t_62;
  return(t);
}
static ATerm h_20 (ATerm t)
{
  t = term_u_62;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_62 = t;
  int z_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_19, x_19, z_19, t);
      LocalPopChoice(z_62);
    }
  else
    {
      t = v_62;
      t = Option_3_0(a_20, g_20, h_20, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_138 (ATerm), ATerm t)
{
  ATerm u_168 = NULL,v_168 = NULL,w_168 = NULL,x_168 = NULL,z_168 = NULL,a_169 = NULL,s_25 = NULL;
  u_168 = t;
  {
    ATerm a_63 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_63;
        t = b_138(t);
        LocalPopChoice(b_63);
      }
    else
      {
        t = a_63;
      }
  }
  t = u_168;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_168 = ATgetFirst((ATermList) t);
      x_168 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_168);
  v_168 = t;
  t = term_b_61;
  a_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_61, w_168);
  t = f_14(a_169, w_168, t);
  t = x_168;
  {
    static ATerm k_169 (ATerm t)
    {
      ATerm d_63 = t;
      int e_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_63 = t;
          int g_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_169 = NULL;
              d_169 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_169;
              LocalPopChoice(g_63);
            }
          else
            {
              t = f_63;
              t = b_138(t);
              t = Cons_2_0(_id, k_169, t);
            }
          LocalPopChoice(e_63);
        }
      else
        {
          t = d_63;
          {
            ATerm g_169 = NULL,h_169 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_169 = ATgetFirst((ATermList) t);
                h_169 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_169), (ATerm) ATmakeAppl(sym_Undefined_1, g_169));
          }
        }
      return(t);
    }
    t = k_169(t);
  }
  z_168 = t;
  t = (ATerm) ATinsert(CheckATermList(z_168), (ATerm) ATmakeAppl(sym_Program_1, w_168));
  s_25 = t;
  t = SSLsetAnnotations(s_25, v_168);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  ATerm x_169 = NULL;
  x_169 = t;
  if(match_string(t, "--help"))
    {
      t = x_169;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_169;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_169;
        }
    }
  return(t);
}
static ATerm k_20 (ATerm t)
{
  ATerm y_169 = NULL,z_169 = NULL;
  t = term_z_61;
  y_169 = t;
  t = term_w_21;
  z_169 = t;
  t = term_h_63;
  t = f_14(y_169, z_169, t);
  t = term_i_63;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  t = term_j_63;
  return(t);
}
static ATerm n_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_138 (ATerm), ATerm t)
{
  ATerm p_169 = NULL,q_169 = NULL,r_169 = NULL,s_169 = NULL,t_169 = NULL,u_169 = NULL,v_169 = NULL,w_169 = NULL;
  r_169 = t;
  t = term_n_60;
  s_169 = t;
  t = term_k_63;
  t = lookup_table_0_1(s_169, t);
  w_169 = t;
  t = term_o_60;
  t_169 = t;
  t = (ATerm) ATempty;
  u_169 = t;
  t = w_169;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(t_169, u_169, v_169, t);
  t = r_169;
  {
    static ATerm i_20 (ATerm t)
    {
      ATerm l_63 = t;
      int o_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_138(t);
          LocalPopChoice(o_63);
        }
      else
        {
          t = l_63;
          {
            ATerm v_63 = t;
            int x_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_20, k_20, l_20, t);
                LocalPopChoice(x_63);
              }
            else
              {
                t = v_63;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_20, t);
  }
  {
    ATerm y_63 = t;
    int a_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_170 = NULL;
        k_170 = t;
        {
          ATerm c_64 = t;
          int d_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_77 = NULL;
              t = k_170;
              {
                ATerm e_64 = t;
                int f_64 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_78 = NULL,b_78 = NULL;
                    t = term_d_22;
                    a_78 = t;
                    t = term_z_61;
                    b_78 = t;
                    t = term_a_62;
                    t = c_14(a_78, b_78, t);
                    LocalPopChoice(f_64);
                  }
                else
                  {
                    t = e_64;
                    t = fetch_1_0(n_20, t);
                  }
              }
              t = k_170;
              t = default_system_usage_0_0(t);
              t = term_a_60;
              z_77 = t;
              t = SSL_exit(z_77);
              LocalPopChoice(d_64);
            }
          else
            {
              t = c_64;
              {
                ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL;
                t = term_d_22;
                g_78 = t;
                t = term_o_62;
                h_78 = t;
                t = term_g_64;
                t = c_14(g_78, h_78, t);
                t = k_170;
                t = default_system_about_0_0(t);
                t = term_a_60;
                f_78 = t;
                t = SSL_exit(f_78);
              }
            }
        }
        LocalPopChoice(a_64);
      }
    else
      {
        t = y_63;
        {
          ATerm h_64 = t;
          int i_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_170 = NULL,m_170 = NULL,n_170 = NULL;
              static ATerm o_20 (ATerm t)
              {
                ATerm o_170 = NULL,p_170 = NULL,q_170 = NULL,u_25 = NULL;
                q_170 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_170 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_170);
                o_170 = t;
                t = p_170;
                if(((p_169 != NULL) && (p_169 != t)))
                  _fail(t);
                else
                  p_169 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_170);
                u_25 = t;
                t = SSLsetAnnotations(u_25, o_170);
                return(t);
              }
              t = fetch_1_0(o_20, t);
              t = term_x_21;
              m_170 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_169)), term_j_64);
              n_170 = t;
              t = SSL_printnl(m_170, n_170);
              t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_169)), term_j_64));
              t = default_system_usage_0_0(t);
              t = term_a_22;
              l_170 = t;
              t = SSL_exit(l_170);
              LocalPopChoice(i_64);
            }
          else
            {
              t = h_64;
            }
        }
      }
  }
  q_169 = t;
  t = term_n_60;
  t = table_destroy_0_0(t);
  t = q_169;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_134 (ATerm), ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm t)
{
  ATerm v_170 = NULL,w_170 = NULL,x_170 = NULL,y_170 = NULL,z_170 = NULL;
  t = parse_options_1_0(y_134, t);
  v_170 = t;
  t = term_k_64;
  t = table_create_0_0(t);
  t = term_k_64;
  w_170 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_64, term_l_64, v_170);
  t = lookup_table_0_1(w_170, t);
  z_170 = t;
  t = term_l_64;
  x_170 = t;
  t = z_170;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(x_170, v_170, y_170, t);
  t = v_170;
  t = a_135(t);
  {
    ATerm m_64 = t;
    int n_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_134, t);
        LocalPopChoice(n_64);
      }
    else
      {
        t = m_64;
        {
          ATerm o_64 = t;
          int q_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_135(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_64);
            }
          else
            {
              t = o_64;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_20 (ATerm t)
{
  t = if_verbose2_1_0(d_21, t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm a_171 = NULL,b_171 = NULL;
  t = term_r_64;
  a_171 = t;
  t = term_w_21;
  b_171 = t;
  t = term_u_64;
  t = f_14(a_171, b_171, t);
  t = term_v_64;
  return(t);
}
static ATerm z_20 (ATerm t)
{
  t = term_w_64;
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm c_171 = NULL,d_171 = NULL,e_171 = NULL,f_171 = NULL,g_171 = NULL,h_171 = NULL;
  c_171 = t;
  t = term_d_22;
  g_171 = t;
  t = term_b_61;
  h_171 = t;
  t = term_d_61;
  t = c_14(g_171, h_171, t);
  d_171 = t;
  t = term_x_21;
  e_171 = t;
  t = (ATerm) ATinsert(ATempty, d_171);
  f_171 = t;
  t = SSL_printnl(e_171, f_171);
  t = c_171;
  return(t);
}
ATerm iowrap_3_0 (ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm t)
{
  static ATerm p_20 (ATerm t)
  {
    ATerm x_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_134(t);
        LocalPopChoice(y_64);
      }
    else
      {
        t = x_64;
        {
          ATerm z_64 = t;
          int a_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(a_65);
            }
          else
            {
              t = z_64;
              {
                ATerm b_65 = t;
                int c_65 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(c_65);
                  }
                else
                  {
                    t = b_65;
                    {
                      ATerm d_65 = t;
                      int f_65 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_20, y_20, z_20, t);
                          LocalPopChoice(f_65);
                        }
                      else
                        {
                          t = d_65;
                          {
                            ATerm g_65 = t;
                            int h_65 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(h_65);
                              }
                            else
                              {
                                t = g_65;
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
  static ATerm s_20 (ATerm t)
  {
    ATerm i_171 = NULL,j_171 = NULL,k_171 = NULL;
    j_171 = t;
    {
      ATerm i_65 = t;
      int j_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm e_21 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_171 != NULL) && (i_171 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_171 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_21, t);
          LocalPopChoice(j_65);
        }
      else
        {
          t = i_65;
          t = term_k_65;
          i_171 = t;
        }
    }
    t = not_null(i_171);
    t = ReadFromFile_0_0(t);
    k_171 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_171, k_171);
    t = apply_strategy_1_0(h_134, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(p_20, j_134, q_20, s_20, t);
  return(t);
}
static ATerm f_21 (ATerm t)
{
  ATerm n_171 = NULL,o_171 = NULL,p_171 = NULL,q_171 = NULL,r_171 = NULL,t_26 = NULL;
  r_171 = t;
  if(match_cons(t, sym__2))
    {
      o_171 = ATgetArgument(t, 0);
      p_171 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_171);
  n_171 = t;
  t = p_171;
  {
    ATerm o_65 = t;
    int p_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_172 = NULL,k_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,l_26 = NULL,k_26 = NULL,w_25 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            n_172 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_171);
        k_78 = t;
        t = n_172;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_78 = ATgetFirst((ATermList) t);
            o_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_172);
        m_78 = t;
        t = n_78;
        if(match_cons(t, sym_Signature_1))
          {
            s_78 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_78);
        r_78 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, s_78);
        w_25 = t;
        t = SSLsetAnnotations(w_25, r_78);
        t_78 = t;
        t = o_78;
        t = Cons_2_0(g_21, k_21, t);
        p_78 = t;
        t = (ATerm) ATinsert(CheckATermList(p_78), t_78);
        k_26 = t;
        t = SSLsetAnnotations(k_26, m_78);
        q_78 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, q_78);
        l_26 = t;
        t = SSLsetAnnotations(l_26, k_78);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(t_21, t);
        LocalPopChoice(p_65);
      }
    else
      {
        t = o_65;
        t = if_verbose2_1_0(v_21, t);
      }
  }
  q_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_171, q_171);
  t_26 = t;
  t = SSLsetAnnotations(t_26, n_171);
  return(t);
}
static ATerm g_21 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,a_79 = NULL,x_25 = NULL;
  a_79 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_79);
  u_78 = t;
  t = v_78;
  t = map_1_0(l_21, t);
  w_78 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_78);
  x_25 = t;
  t = SSLsetAnnotations(x_25, u_78);
  return(t);
}
static ATerm k_21 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      b_79 = ATgetArgument(t, 0);
      c_79 = ATgetArgument(t, 1);
      d_79 = ATgetArgument(t, 2);
      e_79 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = m_13(b_79, c_79, d_79, e_79, t);
  return(t);
}
static ATerm t_21 (ATerm t)
{
  ATerm f_79 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm q_65 = ATgetArgument(t, 0);
      if(match_cons(q_65, sym_SVar_1))
        {
          ATerm t_65 = ATgetArgument(q_65, 0);
          if((ATgetSymbol((ATermAppl) t_65) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm r_65 = ATgetArgument(t, 1);
        if(((ATgetType(r_65) == AT_LIST) && !(ATisEmpty(r_65))))
          {
            f_79 = ATgetFirst((ATermList) r_65);
            {
              ATerm u_65 = (ATerm) ATgetNext((ATermList) r_65);
              if(((ATgetType(u_65) != AT_LIST) || !(ATisEmpty(u_65))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm s_65 = ATgetArgument(t, 2);
        if(((ATgetType(s_65) != AT_LIST) || !(ATisEmpty(s_65))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_11(f_79, t);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  ATerm o_172 = NULL,p_172 = NULL,q_172 = NULL;
  o_172 = t;
  t = term_x_21;
  p_172 = t;
  t = (ATerm) ATinsert(ATempty, term_v_65);
  q_172 = t;
  t = SSL_printnl(p_172, q_172);
  t = o_172;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_21, _fail, default_usage_0_0, t);
  return(t);
}

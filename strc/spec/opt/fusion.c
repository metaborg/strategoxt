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
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
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
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
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
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
}
ATerm term_x_62;
ATerm term_h_62;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_n_61;
ATerm term_m_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_z_60;
ATerm term_w_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_g_60;
ATerm term_f_60;
ATerm term_y_59;
ATerm term_t_59;
ATerm term_s_59;
ATerm term_o_59;
ATerm term_m_59;
ATerm term_k_59;
ATerm term_g_59;
ATerm term_e_59;
ATerm term_r_58;
ATerm term_p_58;
ATerm term_l_58;
ATerm term_k_58;
ATerm term_j_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_c_58;
ATerm term_b_58;
ATerm term_r_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_k_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_b_57;
ATerm term_z_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_v_55;
ATerm term_u_55;
ATerm term_e_55;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_h_54;
ATerm term_d_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_v_53;
ATerm term_d_39;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_d_37;
ATerm term_b_37;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_k_36;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_p_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_n_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_u_29;
ATerm term_n_26;
ATerm term_j_26;
ATerm term_u_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_m_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_j_21;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_u_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Op_2, term_h_22, (ATerm) ATempty);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_22);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Call_2, term_f_23, (ATerm) ATempty);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Call_2, term_q_24, (ATerm) ATempty);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Call_2, term_f_22, (ATerm) ATempty);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_CallT_3, term_a_30, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_d_30, term_e_30);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_c_30, term_f_30);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_b_30, term_g_30);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_i_30, term_h_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_30);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_32);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_c_30, term_e_30);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_b_30, term_p_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_u_33, term_q_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_33);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_35);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_36);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_36);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_37);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_54);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_c_56);
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_56);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(sym__2, term_i_56, term_j_21);
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_o_57);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_f_58);
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym__2, term_z_56, term_b_57);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(sym__2, term_e_59, term_j_21);
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(sym__2, term_m_59, term_j_21);
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(sym__2, term_f_58, term_j_21);
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym__3, term_z_56, term_b_57, (ATerm) ATempty);
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_e_59);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(sym__2, term_m_61, term_j_21);
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm b_141 (ATerm), ATerm t);
static ATerm s_6 (ATerm x_1, ATerm y_1, ATerm t);
static ATerm t_6 (ATerm f_2, ATerm g_2, ATerm t);
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
ATerm pat_td_1_0 (ATerm q_139 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm k_9 (ATerm t_77, ATerm u_77, ATerm v_77, ATerm t);
static ATerm p_19 (ATerm b_19, ATerm t);
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
static ATerm o_9 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t);
static ATerm s_41 (ATerm m_40, ATerm n_40, ATerm t);
static ATerm t_41 (ATerm s_40, ATerm t_40, ATerm t);
ATerm Replace_0_0 (ATerm t);
static ATerm x_10 (ATerm t_42, ATerm u_42, ATerm t);
ATerm end_scope_1_0 (ATerm w_116 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm y_10 (ATerm x_24, ATerm w_24, ATerm y_24, ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t);
ATerm fuse_with_bottomup_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm w_107 (ATerm), ATerm t);
ATerm propagate_mark_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
ATerm inline_rules_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm bottomup_to_var_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm seq_over_choice_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm f_11 (ATerm h_23, ATerm t);
ATerm alltd_1_0 (ATerm n_109 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm check_that_innermost_is_innermost_0_0 (ATerm t);
ATerm debug_1_0 (ATerm m_116 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm v_107 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm h_11 (ATerm t_61, ATerm s_61, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm z_108 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm x_107 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm spaste_1_0 (ATerm o_140 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm r_140 (ATerm), ATerm t);
static ATerm d_9 (ATerm t);
static ATerm s_12 (ATerm h_80, ATerm g_80, ATerm t);
ATerm SVar_1_0 (ATerm z_90 (ATerm), ATerm t);
static ATerm c_13 (ATerm t_136 (ATerm), ATerm u_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_70, ATerm m_70, ATerm l_70, ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm d_13 (ATerm n_136 (ATerm), ATerm o_136 (ATerm (ATerm), ATerm), ATerm f_70, ATerm i_70, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm d_129 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm i_136 (ATerm (ATerm), ATerm), ATerm j_136 (ATerm), ATerm k_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_136 (ATerm (ATerm), ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm tpaste_1_0 (ATerm k_140 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm w_12 (ATerm r_122 (ATerm), ATerm t_52, ATerm s_52, ATerm t);
ATerm foldr_3_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t);
static ATerm x_12 (ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm x_52, ATerm w_52, ATerm t);
static ATerm y_12 (ATerm m_122 (ATerm), ATerm r_52, ATerm q_52, ATerm t);
ATerm at_end_1_0 (ATerm x_118 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_142 (ATerm a_142, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm l_710, ATerm q_710, ATerm g_72, ATerm t);
ATerm while_not_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm o_144 (ATerm i_143, ATerm j_143, ATerm k_143, ATerm t);
static ATerm r_13 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm free_vars_3_0 (ATerm y_137 (ATerm), ATerm z_137 (ATerm), ATerm a_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm o_87 (ATerm), ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm j_13 (ATerm z_42, ATerm a_43, ATerm t);
static ATerm c_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
ATerm InlineStrat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm v_16 (ATerm t);
ATerm check_that_try_is_try_0_0 (ATerm t);
ATerm check_library_definitions_0_0 (ATerm t);
static ATerm k_13 (ATerm z_116 (ATerm), ATerm k_41, ATerm i_41, ATerm t);
static ATerm y_16 (ATerm t);
static ATerm l_13 (ATerm j_22, ATerm k_22, ATerm m_22, ATerm l_22, ATerm t);
ATerm map_1_0 (ATerm g_118 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t);
static ATerm n_13 (ATerm n_32, ATerm o_32, ATerm t);
static ATerm o_13 (ATerm b_38, ATerm e_38, ATerm t);
static ATerm q_13 (ATerm o_116 (ATerm), ATerm k_321, ATerm k_38, ATerm t);
static ATerm p_13 (ATerm v_37, ATerm w_37, ATerm t);
static ATerm b_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm l_131 (ATerm), ATerm t);
static ATerm m_155 (ATerm g_155, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_13 (ATerm f_38, ATerm t);
static ATerm t_13 (ATerm g_31, ATerm h_31, ATerm t);
static ATerm v_13 (ATerm p_32, ATerm q_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_156 (ATerm w_155, ATerm t);
static ATerm y_156 (ATerm a_156, ATerm b_156, ATerm c_156, ATerm t);
static ATerm z_156 (ATerm k_156, ATerm l_156, ATerm m_156, ATerm t);
static ATerm w_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_118 (ATerm), ATerm t);
static ATerm b_14 (ATerm h_44, ATerm i_44, ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm o_18 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_14 (ATerm k_66, ATerm l_66, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_14 (ATerm o_42, ATerm p_42, ATerm n_42, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_13 (ATerm t_39, ATerm v_39, ATerm t);
ATerm foldr_2_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm a_19 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_141 (ATerm), ATerm t);
static ATerm c_19 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm need_help_1_0 (ATerm j_132 (ATerm), ATerm t);
static ATerm f_14 (ATerm v_45, ATerm w_45, ATerm x_45, ATerm t);
static ATerm g_14 (ATerm y_45, ATerm z_45, ATerm t);
ATerm lookup_table_0_1 (ATerm a_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm d_46, ATerm e_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_13 (ATerm a_46, ATerm b_46, ATerm t);
static ATerm a_14 (ATerm f_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_19 (ATerm t);
static ATerm r_19 (ATerm t);
static ATerm s_19 (ATerm t);
static ATerm t_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm o_135 (ATerm), ATerm t);
static ATerm y_19 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm e_20 (ATerm t);
ATerm parse_options_1_0 (ATerm n_135 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm t);
static ATerm h_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm m_20 (ATerm t);
static ATerm n_20 (ATerm t);
static ATerm t_20 (ATerm t);
ATerm iowrap_3_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t);
static ATerm w_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm y_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm h_21 (ATerm t);
static ATerm i_21 (ATerm t);
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
  t = term_j_21;
  t = whoami_0_0(t);
  p_0 = t;
  t = term_l_21;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_21), p_0), term_m_21);
  u_0 = t;
  t = SSL_printnl(t_0, u_0);
  t = term_o_21;
  r_0 = t;
  t = SSL_exit(r_0);
  t = a_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_141 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
        t = term_s_21;
        c_1 = t;
        t = term_u_21;
        d_1 = t;
        t = term_v_21;
        t = b_14(c_1, d_1, t);
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_1, term_x_21);
        t = geq_0_0(t);
        t = x_0;
        t = b_141(t);
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = x_0;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm x_1, ATerm y_1, ATerm t)
{
  t = x_1;
  {
    ATerm z_21 = t;
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
        t = z_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_22, x_1);
  return(t);
}
static ATerm t_6 (ATerm f_2, ATerm g_2, ATerm t)
{
  t = f_2;
  {
    ATerm d_22 = t;
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
        t = d_22;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_22, f_2);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,v_0 = NULL;
  c_3 = t;
  t = SSL_explode_term(c_3);
  if(match_cons(t, sym__2))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_22 = ATgetArgument(t, 1);
        if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
          {
            d_3 = ATgetFirst((ATermList) p_22);
            {
              ATerm q_22 = (ATerm) ATgetNext((ATermList) p_22);
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
      ATerm u_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_22 = ATgetArgument(t, 1);
        if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
          {
            ATerm a_23 = ATgetFirst((ATermList) z_22);
            ATerm b_23 = (ATerm) ATgetNext((ATermList) z_22);
            if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
              {
                v_0 = ATgetFirst((ATermList) b_23);
                {
                  ATerm c_23 = (ATerm) ATgetNext((ATermList) b_23);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_23, (ATerm) ATinsert(ATinsert(ATempty, v_0), d_3));
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_23, (ATerm) ATinsert(ATinsert(ATempty, v_3), u_3));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_n_22;
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_23, (ATerm) ATinsert(ATinsert(ATempty, y_3), x_3));
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_23, (ATerm) ATinsert(ATinsert(ATempty, k_4), j_4));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_i_23;
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_23, (ATerm) ATinsert(ATinsert(ATempty, n_4), m_4));
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
                  ATerm j_23 = t;
                  int m_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_n_23;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_q_23;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_r_23;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_s_23;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_t_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(m_23);
                    }
                  else
                    {
                      t = j_23;
                      {
                        ATerm m_1 = NULL;
                        t = SSL_explode_string(w_2);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm u_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(u_23) != AT_INT) || (ATgetInt((ATermInt) u_23) != 39)))
                              _fail(t);
                            {
                              ATerm v_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
                                {
                                  m_1 = ATgetFirst((ATermList) v_23);
                                  {
                                    ATerm w_23 = (ATerm) ATgetNext((ATermList) v_23);
                                    if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
                                      {
                                        ATerm y_23 = ATgetFirst((ATermList) w_23);
                                        if(((ATgetType(y_23) != AT_INT) || (ATgetInt((ATermInt) y_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm z_23 = (ATerm) ATgetNext((ATermList) w_23);
                                          if(((ATgetType(z_23) != AT_LIST) || !(ATisEmpty(z_23))))
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
              ATerm b_24 = t;
              int f_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      w_2 = ATgetArgument(t, 0);
                      {
                        ATerm g_24 = ATgetArgument(t, 1);
                      }
                      t_2 = ATgetArgument(t, 2);
                      p_2 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_24);
                  t = (ATerm) ATmakeAppl(sym_Con_3, w_2, t_2, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_2), (ATerm) ATempty));
                }
              else
                {
                  t = b_24;
                  {
                    ATerm i_24 = t;
                    int j_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            w_2 = ATgetArgument(t, 0);
                            {
                              ATerm l_24 = ATgetArgument(t, 1);
                            }
                            t_2 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_24);
                        t = (ATerm) ATmakeAppl(sym_Con_3, w_2, t_2, term_r_24);
                      }
                    else
                      {
                        t = i_24;
                        if(match_cons(t, sym_Con1_2))
                          {
                            w_2 = ATgetArgument(t, 0);
                            x_2 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, w_2, x_2, term_r_24);
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
                                                ATerm t_24 = t;
                                                int u_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = s_6(w_2, v_2, t);
                                                    LocalPopChoice(u_24);
                                                  }
                                                else
                                                  {
                                                    t = t_24;
                                                    t = q_2;
                                                  }
                                              }
                                            else
                                              {
                                                t = s_6(w_2, v_2, t);
                                              }
                                          }
                                        else
                                          {
                                            t = s_6(w_2, v_2, t);
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
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_f_22, (ATerm) ATinsert(CheckATermList(x_2), w_2));
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
                                                                                        ATerm a_25 = t;
                                                                                        int b_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = t_6(w_2, v_2, t);
                                                                                            LocalPopChoice(b_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = a_25;
                                                                                            t = q_2;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = t_6(w_2, v_2, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_6(w_2, v_2, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_e_25;
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
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_h_25, (ATerm) ATinsert(ATinsert(ATempty, s_2), w_2));
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
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, w_2, x_2, term_i_25);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    w_2 = ATgetArgument(t, 0);
                                                                                                    x_2 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, w_2, x_2, term_i_25);
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
                                                                                                                                                ATerm j_25 = ATgetArgument(t, 0);
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
  ATerm v_6 = NULL,x_6 = NULL,y_6 = NULL;
  x_6 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      y_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      {
        ATerm c_7 = NULL,e_7 = NULL,g_7 = NULL,h_7 = NULL;
        t = x_6;
        t = new_0_0(t);
        c_7 = t;
        t = new_0_0(t);
        e_7 = t;
        t = new_0_0(t);
        g_7 = t;
        t = new_0_0(t);
        h_7 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_7), g_7), e_7), c_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, c_7), (ATerm) ATmakeAppl(sym_Var_1, g_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, y_6, (ATerm)ATmakeAppl(sym_Var_1, c_7), (ATerm) ATmakeAppl(sym_Var_1, e_7)), (ATerm) ATmakeAppl(sym_BAM_3, v_6, (ATerm)ATmakeAppl(sym_Var_1, g_7), (ATerm) ATmakeAppl(sym_Var_1, h_7)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_7)), (ATerm) ATmakeAppl(sym_Var_1, e_7))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_6 = ATgetArgument(t, 0);
          {
            ATerm i_7 = NULL,k_7 = NULL,m_7 = NULL,n_7 = NULL;
            t = x_6;
            t = new_0_0(t);
            m_7 = t;
            t = y_6;
            {
              static ATerm q_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((i_7 != NULL) && (i_7 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      i_7 = ATgetArgument(t, 0);
                    if(((k_7 != NULL) && (k_7 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      k_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_7);
                return(t);
              }
              t = oncetd_1_0(q_1, t);
            }
            n_7 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_7)), not_null(i_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_7)), (ATerm) ATmakeAppl(sym_Build_1, n_7))));
          }
        }
      else
        {
          ATerm p_7 = NULL,s_7 = NULL,u_7 = NULL,v_7 = NULL,z_7 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              y_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_6;
          t = new_0_0(t);
          u_7 = t;
          t = new_0_0(t);
          v_7 = t;
          t = y_6;
          {
            static ATerm r_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((p_7 != NULL) && (p_7 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    p_7 = ATgetArgument(t, 0);
                  if(((s_7 != NULL) && (s_7 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    s_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, u_7);
              return(t);
            }
            t = oncetd_1_0(r_1, t);
          }
          z_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_7), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_7)), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_7))))), (ATerm)ATmakeAppl(sym_Var_1, u_7), (ATerm) ATmakeAppl(sym_Op_2, term_c_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_7)), not_null(p_7)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  b_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_8 = NULL,h_8 = NULL,i_8 = NULL,k_8 = NULL;
        t = b_8;
        t = new_0_0(t);
        i_8 = t;
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
                if(((h_8 != NULL) && (h_8 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_8), e_8);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        k_8 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_8), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_8))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_8))))));
        LocalPopChoice(o_25);
      }
    else
      {
        t = m_25;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
              t = b_8;
              t = new_0_0(t);
              o_8 = t;
              t = c_8;
              {
                static ATerm z_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((n_8 != NULL) && (n_8 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, o_8);
                  return(t);
                }
                t = pat_td_1_0(z_1, t);
              }
              p_8 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_8)), not_null(n_8))));
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              {
                ATerm s_8 = NULL,t_8 = NULL,y_8 = NULL,z_8 = NULL;
                t = b_8;
                t = new_0_0(t);
                y_8 = t;
                t = c_8;
                {
                  static ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((t_8 != NULL) && (t_8 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          t_8 = ATgetArgument(t, 0);
                        if(((s_8 != NULL) && (s_8 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_8);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                }
                z_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_8)), not_null(t_8)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm q_139 (ATerm), ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_139(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm n_15 = NULL,p_15 = NULL,r_15 = NULL,s_15 = NULL;
        p_15 = t;
        if(match_cons(t, sym_Op_2))
          {
            r_15 = ATgetArgument(t, 0);
            s_15 = ATgetArgument(t, 1);
            {
              ATerm k_2 = NULL,u_2 = NULL,t_1 = NULL;
              t = SSLgetAnnotations(p_15);
              k_2 = t;
              t = s_15;
              {
                static ATerm h_2 (ATerm t)
                {
                  t = pat_td_1_0(q_139, t);
                  return(t);
                }
                t = fetch_1_0(h_2, t);
              }
              u_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, r_15, u_2);
              t_1 = t;
              t = SSLsetAnnotations(t_1, k_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                r_15 = ATgetArgument(t, 0);
                s_15 = ATgetArgument(t, 1);
                {
                  ATerm a_26 = t;
                  int b_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_5 = NULL,v_5 = NULL,u_1 = NULL;
                      t = SSLgetAnnotations(p_15);
                      i_5 = t;
                      t = s_15;
                      t = pat_td_1_0(q_139, t);
                      v_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, r_15, v_5);
                      u_1 = t;
                      t = SSLsetAnnotations(u_1, i_5);
                      LocalPopChoice(b_26);
                    }
                  else
                    {
                      t = a_26;
                      {
                        ATerm i_6 = NULL,l_6 = NULL,v_1 = NULL;
                        t = SSLgetAnnotations(p_15);
                        i_6 = t;
                        t = r_15;
                        t = pat_td_1_0(q_139, t);
                        l_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, l_6, s_15);
                        v_1 = t;
                        t = SSLsetAnnotations(v_1, i_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    r_15 = ATgetArgument(t, 0);
                    s_15 = ATgetArgument(t, 1);
                    n_15 = ATgetArgument(t, 2);
                    {
                      ATerm d_7 = NULL,r_7 = NULL,w_1 = NULL;
                      t = SSLgetAnnotations(p_15);
                      d_7 = t;
                      t = n_15;
                      {
                        static ATerm m_2 (ATerm t)
                        {
                          t = pat_td_1_0(q_139, t);
                          return(t);
                        }
                        t = fetch_1_0(m_2, t);
                      }
                      r_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, r_15, s_15, r_7);
                      w_1 = t;
                      t = SSLsetAnnotations(w_1, d_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        r_15 = ATgetArgument(t, 0);
                        s_15 = ATgetArgument(t, 1);
                        n_15 = ATgetArgument(t, 2);
                        {
                          ATerm q_8 = NULL,x_8 = NULL,o_6 = NULL;
                          t = SSLgetAnnotations(p_15);
                          q_8 = t;
                          t = n_15;
                          {
                            static ATerm o_2 (ATerm t)
                            {
                              t = pat_td_1_0(q_139, t);
                              return(t);
                            }
                            t = fetch_1_0(o_2, t);
                          }
                          x_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, r_15, s_15, x_8);
                          o_6 = t;
                          t = SSLsetAnnotations(o_6, q_8);
                        }
                      }
                    else
                      {
                        ATerm i_9 = NULL,m_9 = NULL,q_9 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            r_15 = ATgetArgument(t, 0);
                            s_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(p_15);
                        i_9 = t;
                        t = s_15;
                        t = pat_td_1_0(q_139, t);
                        m_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, r_15, m_9);
                        q_9 = t;
                        t = SSLsetAnnotations(q_9, i_9);
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
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  if(match_cons(t, sym_Build_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_16 = NULL,g_16 = NULL,k_16 = NULL,m_16 = NULL;
        t = d_16;
        t = new_0_0(t);
        k_16 = t;
        t = e_16;
        {
          static ATerm y_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_16 = ATgetArgument(t, 0);
                if(((g_16 != NULL) && (g_16 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  g_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_16);
            return(t);
          }
          t = pat_td_1_0(y_2, t);
        }
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), not_null(f_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_16)))), (ATerm) ATmakeAppl(sym_Build_1, m_16)));
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        {
          ATerm k_26 = t;
          int l_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_16 = NULL,u_16 = NULL,w_16 = NULL;
              t = d_16;
              t = new_0_0(t);
              u_16 = t;
              t = e_16;
              {
                static ATerm z_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((s_16 != NULL) && (s_16 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, u_16);
                  return(t);
                }
                t = pat_td_1_0(z_2, t);
              }
              w_16 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_16)))), (ATerm) ATmakeAppl(sym_Build_1, w_16)));
              LocalPopChoice(l_26);
            }
          else
            {
              t = k_26;
              {
                ATerm x_16 = NULL,c_17 = NULL,e_17 = NULL,f_17 = NULL;
                t = d_16;
                t = new_0_0(t);
                e_17 = t;
                t = e_16;
                {
                  static ATerm b_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((x_16 != NULL) && (x_16 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          x_16 = ATgetArgument(t, 0);
                        if(((c_17 != NULL) && (c_17 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_17);
                    return(t);
                  }
                  t = pat_td_1_0(b_3, t);
                }
                f_17 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_16), not_null(c_17), (ATerm) ATmakeAppl(sym_Var_1, e_17))), (ATerm) ATmakeAppl(sym_Build_1, f_17)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm m_26 = t;
  if((PushChoice() == 0))
    {
      ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,b_11 = NULL;
      b_18 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_18);
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_18);
      b_11 = t;
      t = SSLsetAnnotations(b_11, z_17);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_26;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_26;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_18 = ATgetFirst((ATermList) t);
      e_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_18, e_18);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(match_cons(o_26, sym__2))
        {
          f_18 = ATgetArgument(o_26, 0);
          g_18 = ATgetArgument(o_26, 1);
        }
      else
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(match_cons(q_26, sym__2))
          {
            h_18 = ATgetArgument(q_26, 0);
            i_18 = ATgetArgument(q_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_18), f_18), (ATerm) ATinsert(CheckATermList(i_18), g_18));
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_26;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_18 = ATgetFirst((ATermList) t);
      k_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_18, k_18);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL,w_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(match_cons(r_26, sym__2))
        {
          n_18 = ATgetArgument(r_26, 0);
          p_18 = ATgetArgument(r_26, 1);
        }
      else
        _fail(t);
      {
        ATerm s_26 = ATgetArgument(t, 1);
        if(match_cons(s_26, sym__2))
          {
            w_18 = ATgetArgument(s_26, 0);
            x_18 = ATgetArgument(s_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_18), n_18), (ATerm) ATinsert(CheckATermList(x_18), p_18));
  return(t);
}
static ATerm k_9 (ATerm t_77, ATerm u_77, ATerm v_77, ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,x_17 = NULL,y_17 = NULL,e_11 = NULL;
  t = v_77;
  t = fetch_1_0(e_3, t);
  t = v_77;
  t = genzip_4_0(f_3, g_3, h_3, LiftPrimArg_0_0, t);
  y_17 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_17);
  p_17 = t;
  t = q_17;
  t = concat_0_0(t);
  s_17 = t;
  t = r_17;
  t = genzip_4_0(i_3, j_3, k_3, _id, t);
  x_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_17, x_17);
  e_11 = t;
  t = SSLsetAnnotations(e_11, p_17);
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(match_cons(t_26, sym__2))
          {
            i_17 = ATgetArgument(t_26, 0);
            j_17 = ATgetArgument(t_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, h_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_17), (ATerm) ATmakeAppl(sym_CallT_3, t_77, u_77, j_17)));
  return(t);
}
static ATerm p_19 (ATerm b_19, ATerm t)
{
  ATerm d_19 = NULL;
  t = b_19;
  {
    ATerm v_26 = t;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,o_11 = NULL;
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
        o_11 = t;
        t = SSLsetAnnotations(o_11, e_19);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_26;
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
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_19(h_19, t);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_i_25, (ATerm) ATmakeAppl(sym_Var_1, i_19)));
          }
      }
    }
  else
    {
      t = p_19(h_19, t);
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm y_26 = t;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,u_11 = NULL;
      q_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_10);
      o_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_10);
      u_11 = t;
      t = SSLsetAnnotations(u_11, o_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_26;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_10 = ATgetFirst((ATermList) t);
      s_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_10, s_10);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm t_10 = NULL,v_10 = NULL,w_10 = NULL,z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(match_cons(a_27, sym__2))
        {
          t_10 = ATgetArgument(a_27, 0);
          v_10 = ATgetArgument(a_27, 1);
        }
      else
        _fail(t);
      {
        ATerm b_27 = ATgetArgument(t, 1);
        if(match_cons(b_27, sym__2))
          {
            w_10 = ATgetArgument(b_27, 0);
            z_10 = ATgetArgument(b_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_10), t_10), (ATerm) ATinsert(CheckATermList(z_10), v_10));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_26;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_11 = ATgetFirst((ATermList) t);
      c_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_11, c_11);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm d_11 = NULL,g_11 = NULL,i_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_27 = ATgetArgument(t, 0);
      if(match_cons(c_27, sym__2))
        {
          d_11 = ATgetArgument(c_27, 0);
          g_11 = ATgetArgument(c_27, 1);
        }
      else
        _fail(t);
      {
        ATerm f_27 = ATgetArgument(t, 1);
        if(match_cons(f_27, sym__2))
          {
            i_11 = ATgetArgument(f_27, 0);
            j_11 = ATgetArgument(f_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_11), d_11), (ATerm) ATinsert(CheckATermList(j_11), g_11));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm g_27 = t;
  if((PushChoice() == 0))
    {
      ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,b_12 = NULL;
      r_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_12);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_12);
      b_12 = t;
      t = SSLsetAnnotations(b_12, p_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_27;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_26;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_12 = ATgetFirst((ATermList) t);
      v_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_12, v_12);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,q_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(match_cons(l_27, sym__2))
        {
          n_14 = ATgetArgument(l_27, 0);
          o_14 = ATgetArgument(l_27, 1);
        }
      else
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(match_cons(m_27, sym__2))
          {
            q_14 = ATgetArgument(m_27, 0);
            s_14 = ATgetArgument(m_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_14), n_14), (ATerm) ATinsert(CheckATermList(s_14), o_14));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_26;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_14 = ATgetFirst((ATermList) t);
      u_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_14, u_14);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,z_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if(match_cons(n_27, sym__2))
        {
          v_14 = ATgetArgument(n_27, 0);
          w_14 = ATgetArgument(n_27, 1);
        }
      else
        _fail(t);
      {
        ATerm o_27 = ATgetArgument(t, 1);
        if(match_cons(o_27, sym__2))
          {
            x_14 = ATgetArgument(o_27, 0);
            z_14 = ATgetArgument(o_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_14), v_14), (ATerm) ATinsert(CheckATermList(z_14), w_14));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_26 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
      d_26 = ATgetArgument(t, 2);
      {
        ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,w_11 = NULL;
        t = d_26;
        t = fetch_1_0(l_3, t);
        t = d_26;
        t = genzip_4_0(m_3, n_3, o_3, LiftPrimArg_0_0, t);
        n_10 = t;
        if(match_cons(t, sym__2))
          {
            j_10 = ATgetArgument(t, 0);
            k_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_10);
        i_10 = t;
        t = j_10;
        t = concat_0_0(t);
        l_10 = t;
        t = k_10;
        t = genzip_4_0(p_3, q_3, r_3, _id, t);
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_10, m_10);
        w_11 = t;
        t = SSLsetAnnotations(w_11, i_10);
        if(match_cons(t, sym__2))
          {
            f_10 = ATgetArgument(t, 0);
            {
              ATerm p_27 = ATgetArgument(t, 1);
              if(match_cons(p_27, sym__2))
                {
                  g_10 = ATgetArgument(p_27, 0);
                  h_10 = ATgetArgument(p_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_10), (ATerm) ATmakeAppl(sym_PrimT_3, f_26, g_26, h_10)));
      }
    }
  else
    {
      ATerm a_12 = NULL,d_12 = NULL,e_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,m_12 = NULL,n_12 = NULL,c_12 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          f_26 = ATgetArgument(t, 0);
          g_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_26;
      t = fetch_1_0(s_3, t);
      t = g_26;
      t = genzip_4_0(t_3, w_3, z_3, LiftPrimArg_0_0, t);
      n_12 = t;
      if(match_cons(t, sym__2))
        {
          h_12 = ATgetArgument(t, 0);
          i_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_12);
      g_12 = t;
      t = h_12;
      t = concat_0_0(t);
      j_12 = t;
      t = i_12;
      t = genzip_4_0(a_4, b_4, c_4, _id, t);
      m_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_12, m_12);
      c_12 = t;
      t = SSLsetAnnotations(c_12, g_12);
      if(match_cons(t, sym__2))
        {
          a_12 = ATgetArgument(t, 0);
          {
            ATerm q_27 = ATgetArgument(t, 1);
            if(match_cons(q_27, sym__2))
              {
                d_12 = ATgetArgument(q_27, 0);
                e_12 = ATgetArgument(q_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_12), (ATerm) ATmakeAppl(sym_PrimT_3, f_26, (ATerm)ATempty, e_12)));
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,w_27 = NULL,x_27 = NULL;
  x_27 = t;
  if(match_cons(t, sym_Con_3))
    {
      s_27 = ATgetArgument(t, 0);
      t_27 = ATgetArgument(t, 1);
      w_27 = ATgetArgument(t, 2);
      {
        ATerm b_16 = NULL,t_12 = NULL;
        t = SSLgetAnnotations(x_27);
        b_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, s_27, t_27, w_27);
        t_12 = t;
        t = SSLsetAnnotations(t_12, b_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = x_27;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm u_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_27;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm e_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_29 = ATgetArgument(t, 0);
      m_29 = ATgetArgument(t, 1);
      e_29 = ATgetArgument(t, 2);
      {
        ATerm a_17 = NULL,b_13 = NULL;
        t = SSLgetAnnotations(k_29);
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_29, m_29, e_29);
        b_13 = t;
        t = SSLsetAnnotations(b_13, a_17);
      }
    }
  else
    {
      ATerm c_18 = NULL,e_13 = NULL;
      if(match_cons(t, sym_App_2))
        {
          l_29 = ATgetArgument(t, 0);
          m_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_29);
      c_18 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, l_29, m_29);
      e_13 = t;
      t = SSLsetAnnotations(e_13, c_18);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm v_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(e_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,v_29 = NULL,w_29 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_29;
  if(match_cons(t, sym_StratRule_3))
    {
      t_29 = ATgetArgument(t, 0);
      v_29 = ATgetArgument(t, 1);
      w_29 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_29), (ATerm) ATmakeAppl(sym_Where_1, w_29)), t_29));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          t_29 = ATgetArgument(t, 0);
          v_29 = ATgetArgument(t, 1);
          w_29 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_29;
      t = pureterm_0_0(t);
      t = v_29;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, v_29)), (ATerm) ATmakeAppl(sym_Where_1, w_29)), (ATerm) ATmakeAppl(sym_Match_1, t_29)));
    }
  return(t);
}
static ATerm o_9 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,o_30 = NULL,r_30 = NULL,s_30 = NULL;
  t = new_0_0(t);
  o_30 = t;
  t = g_73;
  {
    static ATerm f_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_27 = ATgetArgument(t, 0);
          if(match_cons(y_27, sym_Var_1))
            {
              if(((m_30 != NULL) && (m_30 != ATgetArgument(y_27, 0))))
                _fail(ATgetArgument(y_27, 0));
              else
                m_30 = ATgetArgument(y_27, 0);
            }
          else
            _fail(t);
          if(((k_30 != NULL) && (k_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_30 = ATgetArgument(t, 1);
          {
            ATerm z_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, m_30);
      return(t);
    }
    t = oncetd_1_0(f_4, t);
  }
  r_30 = t;
  t = h_73;
  {
    static ATerm g_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm a_28 = ATgetArgument(t, 0);
          if(match_cons(a_28, sym_Var_1))
            {
              if(((m_30 != NULL) && (m_30 != ATgetArgument(a_28, 0))))
                _fail(ATgetArgument(a_28, 0));
              else
                m_30 = ATgetArgument(a_28, 0);
            }
          else
            _fail(t);
          if(((l_30 != NULL) && (l_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            l_30 = ATgetArgument(t, 1);
          {
            ATerm b_28 = ATgetArgument(t, 2);
            if(match_cons(b_28, sym_CallT_3))
              {
                if(((j_30 != NULL) && (j_30 != ATgetArgument(b_28, 0))))
                  _fail(ATgetArgument(b_28, 0));
                else
                  j_30 = ATgetArgument(b_28, 0);
                {
                  ATerm c_28 = ATgetArgument(b_28, 1);
                  if(((ATgetType(c_28) != AT_LIST) || !(ATisEmpty(c_28))))
                    _fail(t);
                }
                {
                  ATerm d_28 = ATgetArgument(b_28, 2);
                  if(((ATgetType(d_28) != AT_LIST) || !(ATisEmpty(d_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, o_30);
      return(t);
    }
    t = oncetd_1_0(g_4, t);
  }
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_30), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, r_30, s_30, (ATerm) ATmakeAppl(sym_Seq_2, i_73, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_30), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_30), not_null(l_30), term_i_25))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_30)), (ATerm) ATmakeAppl(sym_Var_1, o_30))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm e_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_28 = t;
      int i_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
          v_31 = t;
          if(match_cons(t, sym_SRule_1))
            {
              w_31 = ATgetArgument(t, 0);
              t = w_31;
              if(match_cons(t, sym_Rule_3))
                {
                  s_31 = ATgetArgument(t, 0);
                  t_31 = ATgetArgument(t, 1);
                  u_31 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = v_31;
              t = o_9(s_31, t_31, u_31, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm z_18 = NULL,k_19 = NULL,h_13 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  w_31 = ATgetArgument(t, 0);
                  x_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_31);
              z_18 = t;
              t = x_31;
              t = desugarRule_0_0(t);
              k_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, w_31, k_19);
              h_13 = t;
              t = SSLsetAnnotations(h_13, z_18);
            }
          LocalPopChoice(i_28);
        }
      else
        {
          t = h_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(g_28);
    }
  else
    {
      t = e_28;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
    }
  t = repeat_2_0(i_4, _id, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,h_33 = NULL;
            d_33 = t;
            if(match_cons(t, sym_CallT_3))
              {
                e_33 = ATgetArgument(t, 0);
                f_33 = ATgetArgument(t, 1);
                h_33 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_33;
            t = k_9(e_33, f_33, h_33, t);
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
            {
              ATerm s_28 = t;
              int t_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(t_28);
                }
              else
                {
                  t = s_28;
                  {
                    ATerm u_28 = t;
                    int v_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(v_28);
                      }
                    else
                      {
                        t = u_28;
                        {
                          ATerm w_28 = t;
                          int x_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_28 = t;
                              int z_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      r_33 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = r_33;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      s_33 = ATgetArgument(t, 0);
                                      t = s_33;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          s_33 = ATgetArgument(t, 0);
                                          t_33 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, s_33, t_33);
                                    }
                                  LocalPopChoice(z_28);
                                }
                              else
                                {
                                  t = y_28;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(x_28);
                            }
                          else
                            {
                              t = w_28;
                              {
                                ATerm a_29 = t;
                                int b_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(b_29);
                                  }
                                else
                                  {
                                    t = a_29;
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
  ATerm t_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_22);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            {
              ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  v_22 = ATgetArgument(t, 0);
                  w_22 = ATgetArgument(t, 1);
                  x_22 = ATgetArgument(t, 2);
                  y_22 = ATgetArgument(t, 3);
                  t = x_22;
                  t = map_1_0(p_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_22 = ATgetArgument(t, 0);
                      w_22 = ATgetArgument(t, 1);
                      x_22 = ATgetArgument(t, 2);
                      y_22 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_22;
                  t = map_1_0(q_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm j_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_23 = ATgetArgument(t, 0);
          {
            ATerm o_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_29);
      t = g_23;
    }
  else
    {
      t = j_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_23;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm x_23 = NULL;
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_23 = ATgetArgument(t, 0);
          {
            ATerm r_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_29);
      t = x_23;
    }
  else
    {
      t = p_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_23;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,r_39 = NULL,s_39 = NULL,u_39 = NULL,x_39 = NULL;
  e_39 = t;
  if(match_cons(t, sym_Seq_2))
    {
      f_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_39;
  if(match_cons(t, sym_CallT_3))
    {
      g_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
      k_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_39;
  if(match_cons(t, sym_SVar_1))
    {
      i_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_39;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = j_39;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = k_39;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = l_39;
  if(match_cons(t, sym_Seq_2))
    {
      m_39 = ATgetArgument(t, 0);
      o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_39;
  if(match_cons(t, sym_Match_1))
    {
      n_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_39;
  if(match_cons(t, sym_Seq_2))
    {
      r_39 = ATgetArgument(t, 0);
      u_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_39;
  if(match_cons(t, sym_Where_1))
    {
      s_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_39;
  if(match_cons(t, sym_Build_1))
    {
      x_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_20 = NULL,r_20 = NULL,s_20 = NULL,v_20 = NULL,k_21 = NULL,p_21 = NULL;
        t = term_h_30;
        k_21 = t;
        t = term_i_30;
        p_21 = t;
        t = term_n_30;
        t = j_13(p_21, k_21, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_30) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            j_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_39, x_39);
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym__3, j_20, n_39, (ATerm) ATmakeAppl(sym__2, s_39, x_39));
        t = y_10(j_20, n_39, v_20, t);
        if(match_cons(t, sym__2))
          {
            r_20 = ATgetArgument(t, 0);
            s_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, r_20), (ATerm) ATmakeAppl(sym_Build_1, s_20)));
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        {
          ATerm i_22 = NULL,s_22 = NULL,n_24 = NULL,o_24 = NULL;
          t = term_h_30;
          n_24 = t;
          t = term_i_30;
          o_24 = t;
          t = term_n_30;
          t = j_13(o_24, n_24, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm q_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_30) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              i_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_39;
          t = free_vars_3_0(l_4, o_4, tboundin_3_0, t);
          {
            static ATerm s_4 (ATerm t)
            {
              static ATerm t_4 (ATerm t)
              {
                ATerm c_24 = NULL,d_24 = NULL,h_24 = NULL;
                c_24 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, i_22, (ATerm) ATmakeAppl(sym_Var_1, c_24));
                d_24 = t;
                t = term_u_30;
                h_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, i_22, (ATerm) ATmakeAppl(sym_Var_1, c_24)), term_u_30);
                t = k_13(u_4, d_24, h_24, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, c_24);
                return(t);
              }
              t = map_1_0(t_4, t);
              t = (ATerm) ATmakeAppl(sym__2, s_39, x_39);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((s_22 != NULL) && (s_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    s_22 = ATgetArgument(t, 0);
                  {
                    ATerm v_30 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(r_4, s_4, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(s_22)), (ATerm) ATmakeAppl(sym_Build_1, x_39)));
        }
      }
  }
  return(t);
}
static ATerm s_41 (ATerm m_40, ATerm n_40, ATerm t)
{
  ATerm v_24 = NULL;
  t = term_u_29;
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, n_40);
  t = j_13(v_24, n_40, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm y_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_30) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = m_40;
  return(t);
}
static ATerm t_41 (ATerm s_40, ATerm t_40, ATerm t)
{
  ATerm c_25 = NULL;
  t = term_u_29;
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, t_40);
  t = j_13(c_25, t_40, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm z_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_30) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = s_40;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,o_41 = NULL;
  b_41 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_41;
  if(match_cons(t, sym_Var_1))
    {
      a_41 = ATgetArgument(t, 0);
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_25 = NULL;
            t = term_u_29;
            n_25 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_u_29, b_41);
            t = j_13(n_25, b_41, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm d_31 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) d_31) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, a_41);
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            {
              ATerm e_31 = t;
              int f_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_41(o_41, b_41, t);
                  LocalPopChoice(f_31);
                }
              else
                {
                  t = e_31;
                  t = t_41(o_41, b_41, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm i_31 = t;
      int j_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_41(o_41, b_41, t);
          LocalPopChoice(j_31);
        }
      else
        {
          t = i_31;
          t = t_41(o_41, b_41, t);
        }
    }
  return(t);
}
static ATerm x_10 (ATerm t_42, ATerm u_42, ATerm t)
{
  ATerm u_41 = NULL,b_42 = NULL;
  b_42 = t;
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_42, u_42);
        t = b_14(t_42, u_42, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_31 = ATgetFirst((ATermList) t);
            u_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_31);
        {
          ATerm c_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, t_42, u_42, u_41);
          t = lookup_table_0_1(t_42, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_14(u_42, u_41, c_42, t);
          t = (ATerm) ATmakeAppl(sym__3, t_42, u_42, u_41);
        }
      }
    else
      {
        t = k_31;
        {
          ATerm e_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, t_42, u_42);
          t = lookup_table_0_1(t_42, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_13(u_42, e_42, t);
          t = (ATerm) ATmakeAppl(sym__2, t_42, u_42);
        }
      }
  }
  t = b_42;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,l_42 = NULL,m_42 = NULL,q_42 = NULL,r_42 = NULL;
  l_42 = t;
  t = w_116(t);
  i_42 = t;
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_43 = NULL;
        t = term_p_31;
        e_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_42, term_p_31);
        t = b_14(i_42, e_43, t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_42 = ATgetFirst((ATermList) t);
      g_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, i_42, term_p_31, g_42);
  t = lookup_table_0_1(i_42, t);
  r_42 = t;
  t = term_p_31;
  m_42 = t;
  t = r_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(m_42, g_42, q_42, t);
  t = h_42;
  {
    static ATerm v_4 (ATerm t)
    {
      ATerm f_43 = NULL;
      f_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_42, f_43);
      t = x_10(i_42, f_43, t);
      return(t);
    }
    t = map_1_0(v_4, t);
  }
  t = l_42;
  return(t);
}
ATerm restore_always_2_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_111(t);
      t = d_111(t);
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      t = d_111(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,o_43 = NULL,p_43 = NULL;
  i_43 = t;
  t = v_116(t);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_43, term_p_31);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_32 = ATgetArgument(t, 0);
            ATerm b_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_31;
        x_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_43, term_p_31);
        t = b_14(h_43, x_43, t);
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = (ATerm) ATempty;
      }
  }
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_43, term_p_31, (ATerm) ATinsert(CheckATermList(j_43), (ATerm) ATempty));
  t = lookup_table_0_1(h_43, t);
  p_43 = t;
  t = term_p_31;
  k_43 = t;
  t = (ATerm) ATinsert(CheckATermList(j_43), (ATerm) ATempty);
  l_43 = t;
  t = p_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(k_43, l_43, o_43, t);
  t = i_43;
  return(t);
}
ATerm scope_2_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t)
{
  static ATerm w_4 (ATerm t)
  {
    t = end_scope_1_0(x_116, t);
    return(t);
  }
  t = begin_scope_1_0(x_116, t);
  t = restore_always_2_0(y_116, w_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_44);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm g_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_32);
          }
        else
          {
            t = g_32;
            {
              ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_44 = ATgetArgument(t, 0);
                  u_44 = ATgetArgument(t, 1);
                  v_44 = ATgetArgument(t, 2);
                  w_44 = ATgetArgument(t, 3);
                  t = v_44;
                  t = map_1_0(b_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_44 = ATgetArgument(t, 0);
                      u_44 = ATgetArgument(t, 1);
                      v_44 = ATgetArgument(t, 2);
                      w_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_44;
                  t = map_1_0(c_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_45 = NULL;
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_45 = ATgetArgument(t, 0);
          {
            ATerm k_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_32);
      t = d_45;
    }
  else
    {
      t = i_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_45;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm o_45 = NULL;
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_45 = ATgetArgument(t, 0);
          {
            ATerm s_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_32);
      t = o_45;
    }
  else
    {
      t = l_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_45;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm y_10 (ATerm x_24, ATerm w_24, ATerm y_24, ATerm t)
{
  ATerm p_44 = NULL;
  static ATerm y_4 (ATerm t)
  {
    t = w_24;
    t = free_vars_3_0(z_4, a_5, tboundin_3_0, t);
    {
      static ATerm d_5 (ATerm t)
      {
        ATerm s_45 = NULL,u_45 = NULL,c_46 = NULL;
        s_45 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, x_24, (ATerm) ATmakeAppl(sym_Var_1, s_45));
        u_45 = t;
        t = term_w_32;
        c_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, x_24, (ATerm) ATmakeAppl(sym_Var_1, s_45)), term_w_32);
        t = k_13(e_5, u_45, c_46, t);
        t = s_45;
        return(t);
      }
      t = map_1_0(d_5, t);
    }
    t = y_24;
    t = alltd_1_0(Replace_0_0, t);
    if(((p_44 != NULL) && (p_44 != t)))
      _fail(t);
    else
      p_44 = t;
    return(t);
  }
  t = scope_2_0(x_4, y_4, t);
  t = not_null(p_44);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm e_27 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_27);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      {
        ATerm z_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_33);
          }
        else
          {
            t = z_32;
            {
              ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_27 = ATgetArgument(t, 0);
                  i_27 = ATgetArgument(t, 1);
                  j_27 = ATgetArgument(t, 2);
                  k_27 = ATgetArgument(t, 3);
                  t = j_27;
                  t = map_1_0(h_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_27 = ATgetArgument(t, 0);
                      i_27 = ATgetArgument(t, 1);
                      j_27 = ATgetArgument(t, 2);
                      k_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_27;
                  t = map_1_0(j_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm r_27 = NULL;
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_27 = ATgetArgument(t, 0);
          {
            ATerm g_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_33);
      t = r_27;
    }
  else
    {
      t = b_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_27;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm f_28 = NULL;
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_28 = ATgetArgument(t, 0);
          {
            ATerm l_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_33);
      t = f_28;
    }
  else
    {
      t = i_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_28;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm r_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
  r_50 = t;
  if(match_cons(t, sym_Seq_2))
    {
      t_50 = ATgetArgument(t, 0);
      c_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_50;
  if(match_cons(t, sym_CallT_3))
    {
      u_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
      b_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_50;
  if(match_cons(t, sym_SVar_1))
    {
      v_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_50;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = w_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = b_51;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = c_51;
  if(match_cons(t, sym_Seq_2))
    {
      d_51 = ATgetArgument(t, 0);
      f_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_51;
  if(match_cons(t, sym_Match_1))
    {
      e_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_51;
  if(match_cons(t, sym_Build_1))
    {
      g_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_25 = NULL,c_26 = NULL,p_26 = NULL,u_26 = NULL;
        t = term_q_33;
        p_26 = t;
        t = term_u_33;
        u_26 = t;
        t = term_v_33;
        t = j_13(u_26, p_26, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_33) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            z_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, z_25, e_51, g_51);
        t = y_10(z_25, e_51, g_51, t);
        c_26 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_51), (ATerm) ATmakeAppl(sym_Build_1, c_26));
        LocalPopChoice(o_33);
      }
    else
      {
        t = m_33;
        {
          ATerm z_26 = NULL,d_27 = NULL,f_29 = NULL,g_29 = NULL;
          t = term_q_33;
          f_29 = t;
          t = term_u_33;
          g_29 = t;
          t = term_v_33;
          t = j_13(g_29, f_29, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm x_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_33) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              z_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_51;
          t = free_vars_3_0(f_5, g_5, tboundin_3_0, t);
          {
            static ATerm l_5 (ATerm t)
            {
              static ATerm m_5 (ATerm t)
              {
                ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
                p_28 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, z_26, (ATerm) ATmakeAppl(sym_Var_1, p_28));
                q_28 = t;
                t = term_a_34;
                r_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, z_26, (ATerm) ATmakeAppl(sym_Var_1, p_28)), term_a_34);
                t = k_13(n_5, q_28, r_28, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_28);
                return(t);
              }
              t = map_1_0(m_5, t);
              t = g_51;
              t = alltd_1_0(Replace_0_0, t);
              if(((d_27 != NULL) && (d_27 != t)))
                _fail(t);
              else
                d_27 = t;
              return(t);
            }
            t = scope_2_0(k_5, l_5, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_51), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_27)));
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
    a_55 = t;
    if(match_cons(t, sym_Seq_2))
      {
        o_54 = ATgetArgument(t, 0);
        x_54 = ATgetArgument(t, 1);
        t = o_54;
        if(match_cons(t, sym_Choice_2))
          {
            p_54 = ATgetArgument(t, 0);
            r_54 = ATgetArgument(t, 1);
            {
              ATerm b_34 = t;
              int c_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_30 = NULL,x_30 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_d_34, x_54);
                  w_30 = t;
                  t = term_e_34;
                  x_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_e_34, (ATerm) ATmakeAppl(sym_Seq_2, term_d_34, x_54));
                  t = j_13(x_30, w_30, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm f_34 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) f_34) != ATmakeSymbol("y_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, p_54, x_54), (ATerm) ATmakeAppl(sym_Seq_2, r_54, x_54));
                  t = bottomup_1_0(o_5, t);
                  LocalPopChoice(c_34);
                }
              else
                {
                  t = b_34;
                  t = a_55;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                p_54 = ATgetArgument(t, 0);
                r_54 = ATgetArgument(t, 1);
                {
                  ATerm h_34 = t;
                  int i_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_32 = NULL,f_32 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_t_34, x_54);
                      e_32 = t;
                      t = term_u_34;
                      f_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_u_34, (ATerm) ATmakeAppl(sym_Seq_2, term_t_34, x_54));
                      t = j_13(f_32, e_32, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm v_34 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) v_34) != ATmakeSymbol("a_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, p_54, x_54), (ATerm) ATmakeAppl(sym_Seq_2, r_54, x_54));
                      t = bottomup_1_0(o_5, t);
                      LocalPopChoice(i_34);
                    }
                  else
                    {
                      t = h_34;
                      t = a_55;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    p_54 = ATgetArgument(t, 0);
                    r_54 = ATgetArgument(t, 1);
                    {
                      ATerm w_34 = t;
                      int x_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_55 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_54, x_54);
                          t = o_5(t);
                          w_55 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, p_54, w_55);
                          t = o_5(t);
                          LocalPopChoice(x_34);
                        }
                      else
                        {
                          t = w_34;
                          t = a_55;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        p_54 = ATgetArgument(t, 0);
                        r_54 = ATgetArgument(t, 1);
                        {
                          ATerm y_34 = t;
                          int z_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_56 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_54, x_54);
                              t = o_5(t);
                              b_56 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_54, b_56);
                              t = o_5(t);
                              LocalPopChoice(z_34);
                            }
                          else
                            {
                              t = y_34;
                              t = a_55;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            p_54 = ATgetArgument(t, 0);
                            {
                              ATerm b_35 = t;
                              int c_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_56 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, x_54, p_54);
                                  t = o_5(t);
                                  h_56 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, h_56);
                                  t = o_5(t);
                                  LocalPopChoice(c_35);
                                }
                              else
                                {
                                  t = b_35;
                                  t = a_55;
                                }
                            }
                          }
                        else
                          {
                            t = a_55;
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
            o_54 = ATgetArgument(t, 0);
            x_54 = ATgetArgument(t, 1);
            t = o_54;
            if(match_cons(t, sym_LChoice_2))
              {
                p_54 = ATgetArgument(t, 0);
                r_54 = ATgetArgument(t, 1);
                {
                  ATerm h_35 = t;
                  int m_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_56 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, r_54, x_54);
                      t = o_5(t);
                      u_56 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, p_54, u_56);
                      t = o_5(t);
                      LocalPopChoice(m_35);
                    }
                  else
                    {
                      t = h_35;
                      t = a_55;
                    }
                }
              }
            else
              {
                t = a_55;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                o_54 = ATgetArgument(t, 0);
                x_54 = ATgetArgument(t, 1);
                t = o_54;
                if(match_cons(t, sym_Choice_2))
                  {
                    p_54 = ATgetArgument(t, 0);
                    r_54 = ATgetArgument(t, 1);
                    {
                      ATerm n_35 = t;
                      int o_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_57 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, r_54, x_54);
                          t = o_5(t);
                          h_57 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, p_54, h_57);
                          t = o_5(t);
                          LocalPopChoice(o_35);
                        }
                      else
                        {
                          t = n_35;
                          t = a_55;
                        }
                    }
                  }
                else
                  {
                    t = a_55;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    o_54 = ATgetArgument(t, 0);
                    x_54 = ATgetArgument(t, 1);
                    t = x_54;
                    if(match_cons(t, sym_Op_2))
                      {
                        y_54 = ATgetArgument(t, 0);
                        z_54 = ATgetArgument(t, 1);
                        t = o_54;
                        if(match_cons(t, sym_CallT_3))
                          {
                            p_54 = ATgetArgument(t, 0);
                            r_54 = ATgetArgument(t, 1);
                            w_54 = ATgetArgument(t, 2);
                            t = w_54;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = r_54;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    s_54 = ATgetFirst((ATermList) t);
                                    t_54 = (ATerm) ATgetNext((ATermList) t);
                                    t = t_54;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = p_54;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            q_54 = ATgetArgument(t, 0);
                                            t = q_54;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm s_35 = t;
                                                int t_35 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm p_57 = NULL;
                                                    t = z_54;
                                                    {
                                                      static ATerm p_5 (ATerm t)
                                                      {
                                                        ATerm q_57 = NULL;
                                                        q_57 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_35, (ATerm)ATinsert(ATempty, s_54), (ATerm) ATempty), q_57);
                                                        return(t);
                                                      }
                                                      t = map_1_0(p_5, t);
                                                    }
                                                    p_57 = t;
                                                    t = (ATerm) ATmakeAppl(sym_App_2, s_54, (ATerm) ATmakeAppl(sym_Op_2, y_54, p_57));
                                                    t = bottomup_1_0(o_5, t);
                                                    LocalPopChoice(t_35);
                                                  }
                                                else
                                                  {
                                                    t = s_35;
                                                    t = a_55;
                                                  }
                                              }
                                            else
                                              {
                                                t = a_55;
                                              }
                                          }
                                        else
                                          {
                                            t = a_55;
                                          }
                                      }
                                    else
                                      {
                                        t = a_55;
                                      }
                                  }
                                else
                                  {
                                    t = a_55;
                                  }
                              }
                            else
                              {
                                t = a_55;
                              }
                          }
                        else
                          {
                            t = a_55;
                          }
                      }
                    else
                      {
                        t = a_55;
                      }
                  }
                else
                  {
                    t = a_55;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(o_5, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  static ATerm q_5 (ATerm t)
  {
    t = bottomup_1_0(w_107, t);
    return(t);
  }
  t = SRTS_all(q_5, t);
  t = w_107(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  static ATerm r_5 (ATerm t)
  {
    ATerm o_58 = NULL,t_58 = NULL,v_58 = NULL,b_59 = NULL,c_59 = NULL;
    c_59 = t;
    if(match_cons(t, sym_Seq_2))
      {
        o_58 = ATgetArgument(t, 0);
        t_58 = ATgetArgument(t, 1);
        t = t_58;
        if(match_cons(t, sym_Choice_2))
          {
            v_58 = ATgetArgument(t, 0);
            b_59 = ATgetArgument(t, 1);
            {
              ATerm w_35 = t;
              int x_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_59 = NULL,p_59 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_58, v_58);
                  t = r_5(t);
                  n_59 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_58, b_59);
                  t = r_5(t);
                  p_59 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_59, p_59);
                  t = r_5(t);
                  LocalPopChoice(x_35);
                }
              else
                {
                  t = w_35;
                  t = c_59;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                v_58 = ATgetArgument(t, 0);
                b_59 = ATgetArgument(t, 1);
                {
                  ATerm y_35 = t;
                  int z_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_60 = NULL,b_60 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_58, v_58);
                      t = r_5(t);
                      a_60 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_58, b_59);
                      t = r_5(t);
                      b_60 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, a_60, b_60);
                      t = r_5(t);
                      LocalPopChoice(z_35);
                    }
                  else
                    {
                      t = y_35;
                      t = c_59;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    v_58 = ATgetArgument(t, 0);
                    b_59 = ATgetArgument(t, 1);
                    {
                      ATerm a_36 = t;
                      int b_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_61 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_58, b_59);
                          t = r_5(t);
                          k_61 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, v_58, k_61);
                          t = r_5(t);
                          LocalPopChoice(b_36);
                        }
                      else
                        {
                          t = a_36;
                          t = c_59;
                        }
                    }
                  }
                else
                  {
                    t = c_59;
                  }
              }
          }
      }
    else
      {
        t = c_59;
      }
    return(t);
  }
  t = bottomup_1_0(r_5, t);
  return(t);
}
ATerm Seq_2_0 (ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,m_62 = NULL,n_62 = NULL,s_62 = NULL,t_62 = NULL,m_13 = NULL;
  t_62 = t;
  if(match_cons(t, sym_Seq_2))
    {
      g_62 = ATgetArgument(t, 0);
      m_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_62);
  f_62 = t;
  t = g_62;
  t = o_91(t);
  n_62 = t;
  t = m_62;
  t = p_91(t);
  s_62 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, n_62, s_62);
  m_13 = t;
  t = SSLsetAnnotations(m_13, f_62);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,l_14 = NULL;
  r_35 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_35);
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, q_35);
  l_14 = t;
  t = SSLsetAnnotations(l_14, p_35);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_36 = t;
      int f_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          LocalPopChoice(f_36);
        }
      else
        {
          t = e_36;
          {
            ATerm g_36 = t;
            int h_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_67 = NULL,r_67 = NULL,s_67 = NULL;
                o_67 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    r_67 = ATgetArgument(t, 0);
                    s_67 = ATgetArgument(t, 1);
                    {
                      ATerm r_32 = NULL,u_32 = NULL,v_32 = NULL,u_13 = NULL;
                      t = SSLgetAnnotations(o_67);
                      r_32 = t;
                      t = r_67;
                      t = inline_rules_0_0(t);
                      u_32 = t;
                      t = s_67;
                      t = inline_rules_0_0(t);
                      v_32 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, u_32, v_32);
                      u_13 = t;
                      t = SSLsetAnnotations(u_13, r_32);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        r_67 = ATgetArgument(t, 0);
                        s_67 = ATgetArgument(t, 1);
                        {
                          ATerm k_33 = NULL,n_33 = NULL,y_33 = NULL,y_13 = NULL;
                          t = SSLgetAnnotations(o_67);
                          k_33 = t;
                          t = r_67;
                          t = inline_rules_0_0(t);
                          n_33 = t;
                          t = s_67;
                          t = inline_rules_0_0(t);
                          y_33 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_33, y_33);
                          y_13 = t;
                          t = SSLsetAnnotations(y_13, k_33);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            r_67 = ATgetArgument(t, 0);
                            s_67 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm i_36 = t;
                          int j_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,j_14 = NULL,i_14 = NULL,h_14 = NULL,d_14 = NULL;
                              t = SSLgetAnnotations(o_67);
                              g_34 = t;
                              t = s_67;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  k_34 = ATgetArgument(t, 0);
                                  l_34 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(s_67);
                              j_34 = t;
                              t = k_34;
                              if(match_cons(t, sym_Match_1))
                                {
                                  r_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(k_34);
                              q_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, r_34);
                              d_14 = t;
                              t = SSLsetAnnotations(d_14, q_34);
                              s_34 = t;
                              t = l_34;
                              if(match_cons(t, sym_Build_1))
                                {
                                  o_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(l_34);
                              n_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, o_34);
                              h_14 = t;
                              t = SSLsetAnnotations(h_14, n_34);
                              p_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_34, p_34);
                              i_14 = t;
                              t = SSLsetAnnotations(i_14, j_34);
                              m_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, r_67, m_34);
                              j_14 = t;
                              t = SSLsetAnnotations(j_14, g_34);
                              LocalPopChoice(j_36);
                            }
                          else
                            {
                              t = i_36;
                              {
                                ATerm a_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,p_14 = NULL,m_14 = NULL,k_14 = NULL;
                                t = SSLgetAnnotations(o_67);
                                a_35 = t;
                                t = s_67;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    e_35 = ATgetArgument(t, 0);
                                    f_35 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(s_67);
                                d_35 = t;
                                t = e_35;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    k_35 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(e_35);
                                j_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, k_35);
                                k_14 = t;
                                t = SSLsetAnnotations(k_14, j_35);
                                l_35 = t;
                                t = f_35;
                                t = Seq_2_0(_id, s_5, t);
                                g_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, l_35, g_35);
                                m_14 = t;
                                t = SSLsetAnnotations(m_14, d_35);
                                i_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_67, i_35);
                                p_14 = t;
                                t = SSLsetAnnotations(p_14, a_35);
                              }
                            }
                        }
                      }
                  }
                LocalPopChoice(h_36);
              }
            else
              {
                t = g_36;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_u_33;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL;
  e_68 = t;
  t = term_q_33;
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_36, e_68);
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATmakeAppl(sym_Defined_2, term_k_36, e_68));
  t = k_13(t_5, l_68, m_68, t);
  t = term_h_30;
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_36, e_68);
  k_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_30, (ATerm) ATmakeAppl(sym_Defined_2, term_m_36, e_68));
  t = k_13(u_5, f_68, k_68, t);
  t = e_68;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_e_34;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,h_69 = NULL,i_69 = NULL;
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_d_34, t_68);
  h_69 = t;
  t = term_o_36;
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_d_34, t_68), term_o_36);
  t = k_13(w_5, h_69, i_69, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_t_34, t_68);
  u_68 = t;
  t = term_q_36;
  v_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_t_34, t_68), term_q_36);
  t = k_13(x_5, u_68, v_68, t);
  t = t_68;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm t_70 = NULL,x_70 = NULL,y_70 = NULL;
  t_70 = t;
  t = term_l_21;
  x_70 = t;
  t = (ATerm) ATinsert(ATempty, term_r_36);
  y_70 = t;
  t = SSL_printnl(x_70, y_70);
  t = t_70;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            {
              ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  e_71 = ATgetArgument(t, 0);
                  g_71 = ATgetArgument(t, 1);
                  h_71 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = e_71;
              if(match_cons(t, sym_SVar_1))
                {
                  f_71 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = f_71;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = g_71;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_71;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_i_25;
            }
          }
      }
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if(match_cons(x_36, sym_SVar_1))
        {
          ATerm a_37 = ATgetArgument(x_36, 0);
          if((ATgetSymbol((ATermAppl) a_37) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm y_36 = ATgetArgument(t, 1);
        if(((ATgetType(y_36) != AT_LIST) || !(ATisEmpty(y_36))))
          _fail(t);
      }
      {
        ATerm z_36 = ATgetArgument(t, 2);
        if(((ATgetType(z_36) != AT_LIST) || !(ATisEmpty(z_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,t_71 = NULL;
  n_71 = t;
  t = term_l_21;
  o_71 = t;
  t = (ATerm) ATinsert(ATempty, term_b_37);
  t_71 = t;
  t = SSL_printnl(o_71, t_71);
  t = n_71;
  return(t);
}
static ATerm f_11 (ATerm h_23, ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  t = if_verbose2_1_0(y_5, t);
  t = new_0_0(t);
  a_70 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = h_23;
  t = inline_rules_0_0(t);
  z_69 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, a_70, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_b_30, z_69), (ATerm) ATmakeAppl(sym_CallT_3, term_v_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_i_25))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(z_5, t);
  {
    ATerm c_37 = t;
    if((PushChoice() == 0))
      {
        ATerm i_71 = NULL,l_71 = NULL,m_71 = NULL;
        t = oncetd_1_0(a_6, t);
        i_71 = t;
        t = term_l_21;
        l_71 = t;
        t = (ATerm) ATinsert(ATempty, term_d_37);
        m_71 = t;
        t = SSL_printnl(l_71, m_71);
        t = i_71;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_37;
      }
  }
  t = desugar_0_0(t);
  t = if_verbose1_1_0(b_6, t);
  return(t);
}
ATerm alltd_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  static ATerm u_71 (ATerm t)
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_109(t);
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        t = SRTS_all(u_71, t);
      }
    return(t);
  }
  t = u_71(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  q_73 = t;
  t = term_l_21;
  r_73 = t;
  t = (ATerm) ATinsert(ATempty, term_g_37);
  s_73 = t;
  t = SSL_printnl(r_73, s_73);
  t = q_73;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = debug_1_0(e_6, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_h_37;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm t_75 = NULL,k_76 = NULL,n_76 = NULL;
  t_75 = t;
  t = term_l_21;
  k_76 = t;
  t = (ATerm) ATinsert(ATempty, term_i_37);
  n_76 = t;
  t = SSL_printnl(k_76, n_76);
  t = t_75;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm c_73 = NULL,f_73 = NULL;
  f_73 = t;
  t = new_0_0(t);
  c_73 = t;
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_73), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        t = if_verbose2_1_0(c_6, t);
        _fail(t);
      }
  }
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,g_74 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,i_75 = NULL,j_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL;
        t_73 = t;
        if(match_cons(t, sym_Seq_2))
          {
            y_73 = ATgetArgument(t, 0);
            o_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_73;
        if(match_cons(t, sym_All_1))
          {
            z_73 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_73;
        if(match_cons(t, sym_CallT_3))
          {
            a_74 = ATgetArgument(t, 0);
            c_74 = ATgetArgument(t, 1);
            j_75 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = a_74;
        if(match_cons(t, sym_SVar_1))
          {
            b_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_74;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = c_74;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_74 = ATgetFirst((ATermList) t);
            i_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_74;
        if(match_cons(t, sym_CallT_3))
          {
            g_74 = ATgetArgument(t, 0);
            f_75 = ATgetArgument(t, 1);
            g_75 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = g_74;
        if(match_cons(t, sym_SVar_1))
          {
            e_75 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_75;
        if(match_cons(t, sym_CallT_3))
          {
            p_75 = ATgetArgument(t, 0);
            r_75 = ATgetArgument(t, 1);
            s_75 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = p_75;
        if(match_cons(t, sym_SVar_1))
          {
            q_75 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_75;
        if((c_73 != t))
          {
            _fail(t);
          }
        t = q_75;
        if((e_75 != t))
          {
            _fail(t);
          }
        t = t_73;
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
        t = if_verbose1_1_0(d_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(f_6, t);
  t = f_73;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm z_85 = NULL,b_86 = NULL,c_86 = NULL;
  z_85 = t;
  t = term_l_21;
  b_86 = t;
  t = (ATerm) ATinsert(ATempty, term_n_37);
  c_86 = t;
  t = SSL_printnl(b_86, c_86);
  t = z_85;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = debug_1_0(j_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_o_37;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm v_89 = NULL,y_89 = NULL,z_89 = NULL;
  v_89 = t;
  t = term_l_21;
  y_89 = t;
  t = (ATerm) ATinsert(ATempty, term_p_37);
  z_89 = t;
  t = SSL_printnl(y_89, z_89);
  t = v_89;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL;
  w_85 = t;
  t = new_0_0(t);
  v_85 = t;
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_37, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_85), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = if_verbose2_1_0(g_6, t);
        _fail(t);
      }
  }
  {
    ATerm u_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,j_86 = NULL,l_86 = NULL,m_86 = NULL,p_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,g_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,a_88 = NULL,b_88 = NULL,d_88 = NULL,f_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,q_88 = NULL,u_88 = NULL,w_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL;
        s_87 = t;
        if(match_cons(t, sym_CallT_3))
          {
            t_87 = ATgetArgument(t, 0);
            v_87 = ATgetArgument(t, 1);
            n_89 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = t_87;
        if(match_cons(t, sym_SVar_1))
          {
            u_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_87;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = v_87;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_87 = ATgetFirst((ATermList) t);
            m_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_87;
        if(match_cons(t, sym_CallT_3))
          {
            x_87 = ATgetArgument(t, 0);
            y_87 = ATgetArgument(t, 1);
            e_86 = ATgetArgument(t, 2);
            t = x_87;
            if(match_cons(t, sym_SVar_1))
              {
                d_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_86;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
              _fail(t);
            t = y_87;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_88 = ATgetFirst((ATermList) t);
                l_89 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_88;
            if(match_cons(t, sym_Seq_2))
              {
                b_88 = ATgetArgument(t, 0);
                k_88 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_88;
            if(match_cons(t, sym_CallT_3))
              {
                d_88 = ATgetArgument(t, 0);
                i_88 = ATgetArgument(t, 1);
                j_88 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_88;
            if(match_cons(t, sym_SVar_1))
              {
                f_88 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_88;
            if(match_cons(t, sym_CallT_3))
              {
                l_88 = ATgetArgument(t, 0);
                u_88 = ATgetArgument(t, 1);
                k_89 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = l_88;
            if(match_cons(t, sym_SVar_1))
              {
                q_88 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_88;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
              _fail(t);
            t = u_88;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_88 = ATgetFirst((ATermList) t);
                j_89 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_88;
            if(match_cons(t, sym_CallT_3))
              {
                z_88 = ATgetArgument(t, 0);
                b_89 = ATgetArgument(t, 1);
                c_89 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = z_88;
            if(match_cons(t, sym_SVar_1))
              {
                a_89 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_89;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_89;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_89;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_89;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_89;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_89;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_89;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_88;
            if((v_85 != t))
              {
                _fail(t);
              }
            t = a_89;
            if((f_88 != t))
              {
                _fail(t);
              }
            t = s_87;
          }
        else
          {
            if(match_cons(t, sym_Rec_2))
              {
                x_87 = ATgetArgument(t, 0);
                y_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_87;
            if(match_cons(t, sym_CallT_3))
              {
                a_88 = ATgetArgument(t, 0);
                l_89 = ATgetArgument(t, 1);
                r_87 = ATgetArgument(t, 2);
                t = a_88;
                if(match_cons(t, sym_SVar_1))
                  {
                    b_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_88;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                  _fail(t);
                t = l_89;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_86 = ATgetFirst((ATermList) t);
                    q_87 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_86;
                if(match_cons(t, sym_Seq_2))
                  {
                    g_86 = ATgetArgument(t, 0);
                    v_86 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_86;
                if(match_cons(t, sym_CallT_3))
                  {
                    j_86 = ATgetArgument(t, 0);
                    m_86 = ATgetArgument(t, 1);
                    p_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = j_86;
                if(match_cons(t, sym_SVar_1))
                  {
                    l_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_86;
                if(match_cons(t, sym_CallT_3))
                  {
                    w_86 = ATgetArgument(t, 0);
                    a_87 = ATgetArgument(t, 1);
                    k_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = w_86;
                if(match_cons(t, sym_SVar_1))
                  {
                    x_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_86;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = a_87;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_87 = ATgetFirst((ATermList) t);
                    j_87 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_87;
                if(match_cons(t, sym_CallT_3))
                  {
                    c_87 = ATgetArgument(t, 0);
                    g_87 = ATgetArgument(t, 1);
                    i_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = c_87;
                if(match_cons(t, sym_SVar_1))
                  {
                    d_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_89;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_89;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_86;
                if((v_85 != t))
                  {
                    _fail(t);
                  }
                t = d_87;
                if((x_87 != t))
                  {
                    _fail(t);
                  }
                t = s_87;
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    a_88 = ATgetArgument(t, 0);
                    l_89 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_88;
                if(match_cons(t, sym_Seq_2))
                  {
                    b_88 = ATgetArgument(t, 0);
                    k_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_88;
                if(match_cons(t, sym_CallT_3))
                  {
                    d_88 = ATgetArgument(t, 0);
                    i_88 = ATgetArgument(t, 1);
                    j_88 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = d_88;
                if(match_cons(t, sym_SVar_1))
                  {
                    f_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = i_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_88;
                if(match_cons(t, sym_CallT_3))
                  {
                    l_88 = ATgetArgument(t, 0);
                    u_88 = ATgetArgument(t, 1);
                    k_89 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = l_88;
                if(match_cons(t, sym_SVar_1))
                  {
                    q_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = q_88;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = u_88;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    w_88 = ATgetFirst((ATermList) t);
                    j_89 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_88;
                if(match_cons(t, sym_CallT_3))
                  {
                    z_88 = ATgetArgument(t, 0);
                    b_89 = ATgetArgument(t, 1);
                    c_89 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = z_88;
                if(match_cons(t, sym_SVar_1))
                  {
                    a_89 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_89;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_89;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_89;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_89;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_89;
                if(!(match_cons(t, sym_Id_0)))
                  _fail(t);
                t = m_89;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_89;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_88;
                if((v_85 != t))
                  {
                    _fail(t);
                  }
                t = a_89;
                if((x_87 != t))
                  {
                    _fail(t);
                  }
                t = s_87;
              }
          }
        LocalPopChoice(x_37);
      }
    else
      {
        t = u_37;
        t = if_verbose1_1_0(h_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(k_6, t);
  t = w_85;
  return(t);
}
ATerm debug_1_0 (ATerm m_116 (ATerm), ATerm t)
{
  ATerm b_90 = NULL,h_90 = NULL,o_90 = NULL,p_90 = NULL;
  b_90 = t;
  t = m_116(t);
  h_90 = t;
  t = term_l_21;
  o_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_90), h_90);
  p_90 = t;
  t = SSL_printnl(o_90, p_90);
  t = b_90;
  return(t);
}
ATerm topdown_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  static ATerm m_6 (ATerm t)
  {
    t = topdown_1_0(v_107, t);
    return(t);
  }
  t = v_107(t);
  t = SRTS_all(m_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm a_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(z_37);
      {
        ATerm r_90 = NULL,s_90 = NULL;
        r_90 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm c_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        s_90 = t;
        t = SSLgetAnnotations(r_90);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_38 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) d_38) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_38 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(g_38) != AT_LIST) || !(ATisEmpty(g_38))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_90;
      }
    }
  else
    {
      t = y_37;
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm l_38 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_38) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm m_38 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_38);
            _fail(t);
          }
        else
          {
            t = h_38;
          }
      }
    }
  return(t);
}
static ATerm h_11 (ATerm t_61, ATerm s_61, ATerm t)
{
  t = t_61;
  t = topdown_1_0(n_6, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, t_61);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_91 = ATgetArgument(t, 0);
      i_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_91;
  if(match_cons(t, sym_Match_1))
    {
      g_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_91;
  if(match_cons(t, sym_Var_1))
    {
      h_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_91;
  if(match_cons(t, sym_Seq_2))
    {
      j_91 = ATgetArgument(t, 0);
      d_91 = ATgetArgument(t, 1);
      t = j_91;
      if(match_cons(t, sym_Build_1))
        {
          k_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_91;
      if(match_cons(t, sym_Var_1))
        {
          c_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_91;
      if((h_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_91)), d_91);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_91;
      if(match_cons(t, sym_Var_1))
        {
          k_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_91;
      if((h_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_91));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_91 = ATgetArgument(t, 0);
      z_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_91;
  if(match_cons(t, sym_Build_1))
    {
      y_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_91;
  if(match_cons(t, sym_Seq_2))
    {
      a_92 = ATgetArgument(t, 0);
      v_91 = ATgetArgument(t, 1);
      t = a_92;
      if(match_cons(t, sym_Match_1))
        {
          u_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_91;
      if((y_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_91), v_91);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          a_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_92;
      if((y_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, y_91);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm i_92 = NULL,j_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_92 = ATgetArgument(t, 0);
      n_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_92;
  if(match_cons(t, sym_Match_1))
    {
      m_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_92;
  if(match_cons(t, sym_Seq_2))
    {
      o_92 = ATgetArgument(t, 0);
      j_92 = ATgetArgument(t, 1);
      t = o_92;
      if(match_cons(t, sym_Match_1))
        {
          i_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_92;
      if((m_92 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_92), j_92);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          o_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_92;
      if((m_92 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, m_92);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL,h_93 = NULL,j_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_93 = ATgetArgument(t, 0);
      j_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_93;
  if(match_cons(t, sym_Build_1))
    {
      ATerm n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_93;
  if(match_cons(t, sym_Seq_2))
    {
      o_93 = ATgetArgument(t, 0);
      p_93 = ATgetArgument(t, 1);
      t = o_93;
      if(match_cons(t, sym_PrimT_3))
        {
          b_93 = ATgetArgument(t, 0);
          c_93 = ATgetArgument(t, 1);
          d_93 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, b_93, c_93, d_93), p_93);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          o_93 = ATgetArgument(t, 0);
          p_93 = ATgetArgument(t, 1);
          q_93 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, o_93, p_93, q_93);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL,h_94 = NULL,j_94 = NULL,o_94 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_94 = ATgetArgument(t, 0);
      j_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_94;
  if(match_cons(t, sym_Build_1))
    {
      ATerm o_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_94;
  if(match_cons(t, sym_Seq_2))
    {
      o_94 = ATgetArgument(t, 0);
      f_94 = ATgetArgument(t, 1);
      t = o_94;
      if(match_cons(t, sym_Build_1))
        {
          e_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_94), f_94);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          o_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, o_94);
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_38 = ATgetArgument(t, 0);
      if(((ATgetType(p_38) != AT_LIST) || !(ATisEmpty(p_38))))
        _fail(t);
      {
        ATerm q_38 = ATgetArgument(t, 1);
        if(((ATgetType(q_38) != AT_LIST) || !(ATisEmpty(q_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_38 = ATgetArgument(t, 0);
      if(((ATgetType(r_38) == AT_LIST) && !(ATisEmpty(r_38))))
        {
          y_95 = ATgetFirst((ATermList) r_38);
          z_95 = (ATerm) ATgetNext((ATermList) r_38);
        }
      else
        _fail(t);
      {
        ATerm s_38 = ATgetArgument(t, 1);
        if(((ATgetType(s_38) == AT_LIST) && !(ATisEmpty(s_38))))
          {
            a_96 = ATgetFirst((ATermList) s_38);
            b_96 = (ATerm) ATgetNext((ATermList) s_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_95, a_96), (ATerm) ATmakeAppl(sym__2, z_95, b_96));
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm c_96 = NULL,d_96 = NULL;
  if(match_cons(t, sym__2))
    {
      c_96 = ATgetArgument(t, 0);
      d_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_96), c_96);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL;
  if(match_cons(t, sym__2))
    {
      e_96 = ATgetArgument(t, 0);
      f_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_96), (ATerm) ATmakeAppl(sym_Match_1, f_96));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if(((ATgetType(t_38) != AT_LIST) || !(ATisEmpty(t_38))))
        _fail(t);
      {
        ATerm u_38 = ATgetArgument(t, 1);
        if(((ATgetType(u_38) != AT_LIST) || !(ATisEmpty(u_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_38 = ATgetArgument(t, 0);
      if(((ATgetType(v_38) == AT_LIST) && !(ATisEmpty(v_38))))
        {
          k_96 = ATgetFirst((ATermList) v_38);
          l_96 = (ATerm) ATgetNext((ATermList) v_38);
        }
      else
        _fail(t);
      {
        ATerm w_38 = ATgetArgument(t, 1);
        if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
          {
            m_96 = ATgetFirst((ATermList) w_38);
            n_96 = (ATerm) ATgetNext((ATermList) w_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_96, m_96), (ATerm) ATmakeAppl(sym__2, l_96, n_96));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  if(match_cons(t, sym__2))
    {
      o_96 = ATgetArgument(t, 0);
      p_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_96), o_96);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL;
  if(match_cons(t, sym__2))
    {
      q_96 = ATgetArgument(t, 0);
      r_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_96), (ATerm) ATmakeAppl(sym_Match_1, r_96));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,m_95 = NULL,n_95 = NULL,p_95 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_95 = ATgetArgument(t, 0);
      j_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_95;
  if(match_cons(t, sym_Build_1))
    {
      g_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_95;
  if(match_cons(t, sym_Op_2))
    {
      h_95 = ATgetArgument(t, 0);
      i_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_95;
  if(match_cons(t, sym_Seq_2))
    {
      m_95 = ATgetArgument(t, 0);
      d_95 = ATgetArgument(t, 1);
      {
        ATerm x_95 = NULL;
        t = m_95;
        if(match_cons(t, sym_Match_1))
          {
            n_95 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_95;
        if(match_cons(t, sym_Op_2))
          {
            b_95 = ATgetArgument(t, 0);
            c_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_95;
        if((h_95 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, i_95, c_95);
        t = genzip_4_0(p_6, q_6, r_6, u_6, t);
        x_95 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_95), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_95, i_95)), d_95));
      }
    }
  else
    {
      ATerm j_96 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          m_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_95;
      if(match_cons(t, sym_Op_2))
        {
          n_95 = ATgetArgument(t, 0);
          p_95 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_95;
      if((h_95 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, i_95, p_95);
      t = genzip_4_0(w_6, z_6, a_7, b_7, t);
      j_96 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_96), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_95, i_95)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm s_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,b_98 = NULL,e_98 = NULL,f_98 = NULL;
  v_97 = t;
  if(match_cons(t, sym_Seq_2))
    {
      w_97 = ATgetArgument(t, 0);
      b_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_97;
  if(match_cons(t, sym_Build_1))
    {
      x_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_97;
  if(match_cons(t, sym_Op_2))
    {
      y_97 = ATgetArgument(t, 0);
      {
        ATerm x_38 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_98;
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            e_98 = ATgetArgument(t, 0);
            {
              ATerm a_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_38);
        t = e_98;
        if(match_cons(t, sym_Match_1))
          {
            f_98 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_98;
        if(match_cons(t, sym_Op_2))
          {
            s_97 = ATgetArgument(t, 0);
            {
              ATerm b_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_97, s_97);
        {
          ATerm c_39 = t;
          if((PushChoice() == 0))
            {
              ATerm l_36 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_36 = ATgetArgument(t, 0);
                  if((l_36 != ATgetArgument(t, 1)))
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
              t = c_39;
            }
        }
        t = term_d_39;
      }
    else
      {
        t = y_38;
        if(match_cons(t, sym_Match_1))
          {
            e_98 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_98;
        if(match_cons(t, sym_Op_2))
          {
            f_98 = ATgetArgument(t, 0);
            {
              ATerm p_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_97, f_98);
        {
          ATerm q_39 = t;
          if((PushChoice() == 0))
            {
              ATerm w_36 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_36 = ATgetArgument(t, 0);
                  if((w_36 != ATgetArgument(t, 1)))
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
              t = q_39;
            }
        }
        t = term_d_39;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  static ATerm m_98 (ATerm t)
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_108(t);
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        t = SRTS_one(m_98, t);
      }
    return(t);
  }
  t = m_98(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL;
  f_99 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_99 = ATgetArgument(t, 0);
      n_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_99;
  if(match_cons(t, sym_Let_2))
    {
      o_99 = ATgetArgument(t, 0);
      q_99 = ATgetArgument(t, 1);
      {
        ATerm z_99 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, g_99, o_99);
        t = conc_0_0(t);
        z_99 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_99, q_99);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          o_99 = ATgetArgument(t, 0);
          q_99 = ATgetArgument(t, 1);
          r_99 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_99 = ATgetFirst((ATermList) t);
          m_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_99;
      if(match_cons(t, sym_SDefT_4))
        {
          i_99 = ATgetArgument(t, 0);
          j_99 = ATgetArgument(t, 1);
          k_99 = ATgetArgument(t, 2);
          l_99 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = j_99;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_99;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_99;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_99;
      if(match_cons(t, sym_SVar_1))
        {
          p_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_99;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_99;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_99;
      if((i_99 != t))
        {
          _fail(t);
        }
      t = l_99;
      {
        ATerm b_40 = t;
        if((PushChoice() == 0))
          {
            static ATerm f_7 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm h_40 = ATgetArgument(t, 0);
                  if(match_cons(h_40, sym_SVar_1))
                    {
                      if((i_99 != ATgetArgument(h_40, 0)))
                        {
                          _fail(ATgetArgument(h_40, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm j_40 = ATgetArgument(t, 1);
                    if(((ATgetType(j_40) != AT_LIST) || !(ATisEmpty(j_40))))
                      _fail(t);
                  }
                  {
                    ATerm k_40 = ATgetArgument(t, 2);
                    if(((ATgetType(k_40) != AT_LIST) || !(ATisEmpty(k_40))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(f_7, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_40;
          }
      }
      t = l_99;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm k_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,x_100 = NULL,y_100 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      x_100 = ATgetArgument(t, 0);
      t = x_100;
      if(match_cons(t, sym_Seq_2))
        {
          t_100 = ATgetArgument(t, 0);
          p_100 = ATgetArgument(t, 1);
          t = t_100;
          if(match_cons(t, sym_Where_1))
            {
              k_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_100;
          if(match_cons(t, sym_Seq_2))
            {
              q_100 = ATgetArgument(t, 0);
              s_100 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_100;
          if(match_cons(t, sym_Build_1))
            {
              r_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, k_100, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_100), s_100)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              t_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, t_100);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          x_100 = ATgetArgument(t, 0);
          t = x_100;
          if(match_cons(t, sym_Test_1))
            {
              t_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, t_100);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              x_100 = ATgetArgument(t, 0);
              t = x_100;
              if(match_cons(t, sym_Not_1))
                {
                  t_100 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, t_100);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  x_100 = ATgetArgument(t, 0);
                  y_100 = ATgetArgument(t, 1);
                  t = y_100;
                  if((x_100 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      x_100 = ATgetArgument(t, 0);
                      y_100 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_100;
                  if((x_100 != t))
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
  ATerm v_101 = NULL,w_101 = NULL,b_102 = NULL,c_102 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      v_101 = ATgetArgument(t, 0);
      c_102 = ATgetArgument(t, 1);
      t = v_101;
      if(match_cons(t, sym_LChoice_2))
        {
          w_101 = ATgetArgument(t, 0);
          b_102 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, w_101, (ATerm) ATmakeAppl(sym_LChoice_2, b_102, c_102));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          v_101 = ATgetArgument(t, 0);
          c_102 = ATgetArgument(t, 1);
          t = v_101;
          if(match_cons(t, sym_Seq_2))
            {
              w_101 = ATgetArgument(t, 0);
              b_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, w_101, (ATerm) ATmakeAppl(sym_Seq_2, b_102, c_102));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              v_101 = ATgetArgument(t, 0);
              c_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_101;
          if(match_cons(t, sym_Choice_2))
            {
              w_101 = ATgetArgument(t, 0);
              b_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, w_101, (ATerm) ATmakeAppl(sym_Choice_2, b_102, c_102));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm w_102 = NULL,z_102 = NULL,a_103 = NULL,c_103 = NULL,d_103 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      c_103 = ATgetArgument(t, 0);
      d_103 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, c_103, d_103);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_103 = ATgetArgument(t, 0);
          t = c_103;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_102 = ATgetFirst((ATermList) t);
              z_102 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_102, (ATerm) ATmakeAppl(sym_LChoices_1, z_102));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_d_39;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              c_103 = ATgetArgument(t, 0);
              t = c_103;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_102 = ATgetFirst((ATermList) t);
                  z_102 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_102, (ATerm) ATmakeAppl(sym_Choices_1, z_102));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_d_39;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  c_103 = ATgetArgument(t, 0);
                  t = c_103;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_102 = ATgetFirst((ATermList) t);
                      z_102 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_102, (ATerm) ATmakeAppl(sym_Seqs_1, z_102));
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
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      c_103 = ATgetArgument(t, 0);
                      d_103 = ATgetArgument(t, 1);
                      a_103 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, d_103, (ATerm) ATmakeAppl(sym_Op_2, term_c_22, (ATerm) ATinsert(ATinsert(ATempty, a_103), c_103)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          c_103 = ATgetArgument(t, 0);
                          d_103 = ATgetArgument(t, 1);
                          a_103 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, a_103)), c_103), (ATerm) ATmakeAppl(sym_Build_1, d_103)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              c_103 = ATgetArgument(t, 0);
                              d_103 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_103, (ATerm) ATmakeAppl(sym_Match_1, d_103));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  c_103 = ATgetArgument(t, 0);
                                  d_103 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_103), d_103);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      c_103 = ATgetArgument(t, 0);
                                      d_103 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_103), c_103);
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
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm h_105 = NULL,i_105 = NULL,j_105 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      h_105 = ATgetArgument(t, 0);
      t = h_105;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_d_39;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          h_105 = ATgetArgument(t, 0);
          t = h_105;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_i_25;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              h_105 = ATgetArgument(t, 0);
              i_105 = ATgetArgument(t, 1);
              t = h_105;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_d_39;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  h_105 = ATgetArgument(t, 0);
                  i_105 = ATgetArgument(t, 1);
                  t = i_105;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_d_39;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      h_105 = ATgetArgument(t, 0);
                      i_105 = ATgetArgument(t, 1);
                      t = i_105;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_d_39;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          h_105 = ATgetArgument(t, 0);
                          t = h_105;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_d_39;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              h_105 = ATgetArgument(t, 0);
                              t = h_105;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_d_39;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  h_105 = ATgetArgument(t, 0);
                                  i_105 = ATgetArgument(t, 1);
                                  t = i_105;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_d_39;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      h_105 = ATgetArgument(t, 0);
                                      i_105 = ATgetArgument(t, 1);
                                      t = i_105;
                                      t = fetch_1_0(j_7, t);
                                      t = term_d_39;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          h_105 = ATgetArgument(t, 0);
                                          i_105 = ATgetArgument(t, 1);
                                          t = i_105;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = h_105;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = i_105;
                                                }
                                              else
                                                {
                                                  t = h_105;
                                                }
                                            }
                                          else
                                            {
                                              t = h_105;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = i_105;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              h_105 = ATgetArgument(t, 0);
                                              i_105 = ATgetArgument(t, 1);
                                              t = i_105;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = h_105;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = i_105;
                                                    }
                                                  else
                                                    {
                                                      t = h_105;
                                                    }
                                                }
                                              else
                                                {
                                                  t = h_105;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = i_105;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  h_105 = ATgetArgument(t, 0);
                                                  t = h_105;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_d_39;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      h_105 = ATgetArgument(t, 0);
                                                      i_105 = ATgetArgument(t, 1);
                                                      j_105 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_105;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_105, i_105);
                                                }
                                            }
                                        }
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
  ATerm y_106 = NULL,a_107 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_107 = ATgetArgument(t, 0);
      t = a_107;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_i_25;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_107 = ATgetArgument(t, 0);
          t = a_107;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_d_39;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_107 = ATgetArgument(t, 0);
              y_106 = ATgetArgument(t, 1);
              t = y_106;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_107;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = y_106;
                    }
                  else
                    {
                      t = a_107;
                    }
                }
              else
                {
                  t = a_107;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_106;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_107 = ATgetArgument(t, 0);
                  y_106 = ATgetArgument(t, 1);
                  t = a_107;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_i_25;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      a_107 = ATgetArgument(t, 0);
                      y_106 = ATgetArgument(t, 1);
                      t = y_106;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_i_25;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          a_107 = ATgetArgument(t, 0);
                          y_106 = ATgetArgument(t, 1);
                          t = y_106;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_i_25;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              a_107 = ATgetArgument(t, 0);
                              t = a_107;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_i_25;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  a_107 = ATgetArgument(t, 0);
                                  t = a_107;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_i_25;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_107 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_107;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_i_25;
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
  ATerm l_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(o_40);
    }
  else
    {
      t = l_40;
      {
        ATerm p_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(r_40);
          }
        else
          {
            t = p_40;
            {
              ATerm u_40 = t;
              int v_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(v_40);
                }
              else
                {
                  t = u_40;
                  {
                    ATerm w_40 = t;
                    int d_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(d_41);
                      }
                    else
                      {
                        t = w_40;
                        {
                          ATerm e_41 = t;
                          int f_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(f_41);
                            }
                          else
                            {
                              t = e_41;
                              {
                                ATerm g_41 = t;
                                int h_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_107 = NULL,q_107 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        p_107 = ATgetArgument(t, 0);
                                        q_107 = ATgetArgument(t, 1);
                                        t = p_107;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_107;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            p_107 = ATgetArgument(t, 0);
                                            q_107 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = p_107;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_107;
                                      }
                                    LocalPopChoice(h_41);
                                  }
                                else
                                  {
                                    t = g_41;
                                    {
                                      ATerm j_41 = t;
                                      int l_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(l_41);
                                        }
                                      else
                                        {
                                          t = j_41;
                                          {
                                            ATerm m_41 = t;
                                            int n_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(n_41);
                                              }
                                            else
                                              {
                                                t = m_41;
                                                {
                                                  ATerm p_41 = t;
                                                  int q_41 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(q_41);
                                                    }
                                                  else
                                                    {
                                                      t = p_41;
                                                      {
                                                        ATerm r_41 = t;
                                                        int v_41 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(v_41);
                                                          }
                                                        else
                                                          {
                                                            t = r_41;
                                                            {
                                                              ATerm w_41 = t;
                                                              int x_41 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(x_41);
                                                                }
                                                              else
                                                                {
                                                                  t = w_41;
                                                                  {
                                                                    ATerm y_41 = t;
                                                                    int a_42 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(a_42);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_41;
                                                                        {
                                                                          ATerm d_42 = t;
                                                                          int f_42 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(f_42);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_42;
                                                                              {
                                                                                ATerm j_42 = t;
                                                                                int k_42 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(k_42);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_42;
                                                                                    {
                                                                                      ATerm t_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL;
                                                                                      y_107 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          z_107 = ATgetArgument(t, 0);
                                                                                          a_108 = ATgetArgument(t, 1);
                                                                                          t = z_107;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              t_107 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = y_107;
                                                                                          t = h_11(t_107, a_108, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              z_107 = ATgetArgument(t, 0);
                                                                                              a_108 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = z_107;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = a_108;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  static ATerm e_108 (ATerm t)
  {
    ATerm w_42 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_114(t);
        t = e_108(t);
        LocalPopChoice(m_43);
      }
    else
      {
        t = w_42;
        t = a_115(t);
      }
    return(t);
  }
  t = e_108(t);
  return(t);
}
ATerm downup_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  t = x_107(t);
  {
    static ATerm l_7 (ATerm t)
    {
      t = downup_1_0(x_107, t);
      return(t);
    }
    t = SRTS_all(l_7, t);
  }
  t = x_107(t);
  return(t);
}
ATerm genzip_4_0 (ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t)
{
  static ATerm r_108 (ATerm t)
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_120(t);
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        {
          ATerm f_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,q_108 = NULL,m_15 = NULL;
          t = l_120(t);
          q_108 = t;
          if(match_cons(t, sym__2))
            {
              k_108 = ATgetArgument(t, 0);
              l_108 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_108);
          f_108 = t;
          t = k_108;
          t = n_120(t);
          m_108 = t;
          t = l_108;
          t = r_108(t);
          n_108 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_108, n_108);
          m_15 = t;
          t = SSLsetAnnotations(m_15, f_108);
          t = m_120(t);
        }
      }
    return(t);
  }
  t = r_108(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_43 = ATgetArgument(t, 0);
      if(((ATgetType(s_43) != AT_LIST) || !(ATisEmpty(s_43))))
        _fail(t);
      {
        ATerm v_43 = ATgetArgument(t, 1);
        if(((ATgetType(v_43) != AT_LIST) || !(ATisEmpty(v_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL,a_110 = NULL,b_110 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_43 = ATgetArgument(t, 0);
      if(((ATgetType(w_43) == AT_LIST) && !(ATisEmpty(w_43))))
        {
          y_109 = ATgetFirst((ATermList) w_43);
          z_109 = (ATerm) ATgetNext((ATermList) w_43);
        }
      else
        _fail(t);
      {
        ATerm y_43 = ATgetArgument(t, 1);
        if(((ATgetType(y_43) == AT_LIST) && !(ATisEmpty(y_43))))
          {
            a_110 = ATgetFirst((ATermList) y_43);
            b_110 = (ATerm) ATgetNext((ATermList) y_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_109, a_110), (ATerm) ATmakeAppl(sym__2, z_109, b_110));
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL;
  if(match_cons(t, sym__2))
    {
      c_110 = ATgetArgument(t, 0);
      d_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_110), c_110);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm g_109 = NULL,h_109 = NULL,l_109 = NULL,m_109 = NULL;
  g_109 = t;
  {
    ATerm z_43 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_44 = ATgetArgument(t, 0);
            ATerm d_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(b_44);
        t = g_109;
      }
    else
      {
        t = z_43;
        {
          ATerm x_109 = NULL;
          if(match_cons(t, sym__3))
            {
              h_109 = ATgetArgument(t, 0);
              l_109 = ATgetArgument(t, 1);
              m_109 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_109, l_109);
          t = genzip_4_0(o_7, q_7, t_7, _id, t);
          x_109 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_109, m_109);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t)
{
  ATerm i_110 = NULL,k_110 = NULL;
  static ATerm w_7 (ATerm t)
  {
    ATerm j_38 = NULL;
    t = r_135(t);
    j_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_38, not_null(k_110));
    t = lookup_0_0(t);
    t = s_135(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((k_110 != NULL) && (k_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_110 = ATgetArgument(t, 0);
      i_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_110;
  t = alltd_1_0(w_7, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_44 = ATgetArgument(t, 0);
      if(((ATgetType(e_44) != AT_LIST) || !(ATisEmpty(e_44))))
        _fail(t);
      {
        ATerm f_44 = ATgetArgument(t, 1);
        if(((ATgetType(f_44) != AT_LIST) || !(ATisEmpty(f_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_44 = ATgetArgument(t, 0);
      if(((ATgetType(g_44) == AT_LIST) && !(ATisEmpty(g_44))))
        {
          c_40 = ATgetFirst((ATermList) g_44);
          d_40 = (ATerm) ATgetNext((ATermList) g_44);
        }
      else
        _fail(t);
      {
        ATerm j_44 = ATgetArgument(t, 1);
        if(((ATgetType(j_44) == AT_LIST) && !(ATisEmpty(j_44))))
          {
            e_40 = ATgetFirst((ATermList) j_44);
            f_40 = (ATerm) ATgetNext((ATermList) j_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_40, e_40), (ATerm) ATmakeAppl(sym__2, d_40, f_40));
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm g_40 = NULL,i_40 = NULL;
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_40), g_40);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm q_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,c_41 = NULL;
  if(match_cons(t, sym__2))
    {
      q_40 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_40;
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm n_44 = ATgetArgument(t, 0);
            x_40 = ATgetArgument(t, 1);
            y_40 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(l_44);
        t = (ATerm) ATmakeAppl(sym_SDef_3, c_41, x_40, y_40);
      }
    else
      {
        t = k_44;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm o_44 = ATgetArgument(t, 0);
            x_40 = ATgetArgument(t, 1);
            y_40 = ATgetArgument(t, 2);
            z_40 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, c_41, x_40, y_40, z_40);
      }
  }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_44 = ATgetArgument(t, 0);
      if(((ATgetType(q_44) != AT_LIST) || !(ATisEmpty(q_44))))
        _fail(t);
      {
        ATerm s_44 = ATgetArgument(t, 1);
        if(((ATgetType(s_44) != AT_LIST) || !(ATisEmpty(s_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,b_43 = NULL,c_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_44 = ATgetArgument(t, 0);
      if(((ATgetType(x_44) == AT_LIST) && !(ATisEmpty(x_44))))
        {
          x_42 = ATgetFirst((ATermList) x_44);
          y_42 = (ATerm) ATgetNext((ATermList) x_44);
        }
      else
        _fail(t);
      {
        ATerm y_44 = ATgetArgument(t, 1);
        if(((ATgetType(y_44) == AT_LIST) && !(ATisEmpty(y_44))))
          {
            b_43 = ATgetFirst((ATermList) y_44);
            c_43 = (ATerm) ATgetNext((ATermList) y_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_42, b_43), (ATerm) ATmakeAppl(sym__2, y_42, c_43));
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm d_43 = NULL,g_43 = NULL;
  if(match_cons(t, sym__2))
    {
      d_43 = ATgetArgument(t, 0);
      g_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_43), d_43);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm n_43 = NULL,t_43 = NULL,u_43 = NULL;
  if(match_cons(t, sym__2))
    {
      n_43 = ATgetArgument(t, 0);
      u_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_43;
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_45);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_43);
      }
    else
      {
        t = z_44;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_45 = ATgetArgument(t, 0);
            t_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_43, t_43);
      }
  }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_45 = ATgetArgument(t, 0);
      if(((ATgetType(e_45) != AT_LIST) || !(ATisEmpty(e_45))))
        _fail(t);
      {
        ATerm f_45 = ATgetArgument(t, 1);
        if(((ATgetType(f_45) != AT_LIST) || !(ATisEmpty(f_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_45 = ATgetArgument(t, 0);
      if(((ATgetType(g_45) == AT_LIST) && !(ATisEmpty(g_45))))
        {
          g_46 = ATgetFirst((ATermList) g_45);
          h_46 = (ATerm) ATgetNext((ATermList) g_45);
        }
      else
        _fail(t);
      {
        ATerm h_45 = ATgetArgument(t, 1);
        if(((ATgetType(h_45) == AT_LIST) && !(ATisEmpty(h_45))))
          {
            i_46 = ATgetFirst((ATermList) h_45);
            j_46 = (ATerm) ATgetNext((ATermList) h_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_46, i_46), (ATerm) ATmakeAppl(sym__2, h_46, j_46));
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_46), k_46);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm n_46 = NULL,p_46 = NULL,q_46 = NULL;
  if(match_cons(t, sym__2))
    {
      n_46 = ATgetArgument(t, 0);
      q_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_46;
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_45);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_46);
      }
    else
      {
        t = i_45;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_45 = ATgetArgument(t, 0);
            p_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_46, p_46);
      }
  }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_45 = ATgetArgument(t, 0);
      if(((ATgetType(m_45) != AT_LIST) || !(ATisEmpty(m_45))))
        _fail(t);
      {
        ATerm p_45 = ATgetArgument(t, 1);
        if(((ATgetType(p_45) != AT_LIST) || !(ATisEmpty(p_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,y_47 = NULL,z_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_45 = ATgetArgument(t, 0);
      if(((ATgetType(r_45) == AT_LIST) && !(ATisEmpty(r_45))))
        {
          t_47 = ATgetFirst((ATermList) r_45);
          u_47 = (ATerm) ATgetNext((ATermList) r_45);
        }
      else
        _fail(t);
      {
        ATerm t_45 = ATgetArgument(t, 1);
        if(((ATgetType(t_45) == AT_LIST) && !(ATisEmpty(t_45))))
          {
            y_47 = ATgetFirst((ATermList) t_45);
            z_47 = (ATerm) ATgetNext((ATermList) t_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_47, y_47), (ATerm) ATmakeAppl(sym__2, u_47, z_47));
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL;
  if(match_cons(t, sym__2))
    {
      b_48 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_48), b_48);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm g_48 = NULL,m_48 = NULL,p_48 = NULL;
  if(match_cons(t, sym__2))
    {
      g_48 = ATgetArgument(t, 0);
      p_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_48;
  {
    ATerm m_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_46);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_48);
      }
    else
      {
        t = m_46;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_46 = ATgetArgument(t, 0);
            m_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_48, m_48);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm o_140 (ATerm), ATerm t)
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,a_119 = NULL,b_119 = NULL;
  w_118 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_119 = ATgetArgument(t, 0);
      b_119 = ATgetArgument(t, 1);
      {
        ATerm h_39 = NULL,w_39 = NULL,a_40 = NULL,u_15 = NULL;
        t = SSLgetAnnotations(w_118);
        h_39 = t;
        t = a_119;
        t = o_140(t);
        a_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_119, a_40);
        t = genzip_4_0(x_7, y_7, a_8, d_8, t);
        w_39 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, w_39, b_119);
        u_15 = t;
        t = SSLsetAnnotations(u_15, h_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_119 = ATgetArgument(t, 0);
          b_119 = ATgetArgument(t, 1);
          u_118 = ATgetArgument(t, 2);
          {
            ATerm z_41 = NULL,s_42 = NULL,v_42 = NULL,v_15 = NULL;
            t = SSLgetAnnotations(w_118);
            z_41 = t;
            t = b_119;
            t = o_140(t);
            v_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_119, v_42);
            t = genzip_4_0(f_8, g_8, j_8, l_8, t);
            s_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_119, s_42, u_118);
            v_15 = t;
            t = SSLsetAnnotations(v_15, z_41);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              a_119 = ATgetArgument(t, 0);
              b_119 = ATgetArgument(t, 1);
              u_118 = ATgetArgument(t, 2);
              v_118 = ATgetArgument(t, 3);
              {
                ATerm m_44 = NULL,n_45 = NULL,q_45 = NULL,w_15 = NULL;
                t = SSLgetAnnotations(w_118);
                m_44 = t;
                t = b_119;
                t = o_140(t);
                q_45 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_119, q_45);
                t = genzip_4_0(m_8, r_8, u_8, v_8, t);
                n_45 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, a_119, n_45, u_118, v_118);
                w_15 = t;
                t = SSLsetAnnotations(w_15, m_44);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  a_119 = ATgetArgument(t, 0);
                  b_119 = ATgetArgument(t, 1);
                  u_118 = ATgetArgument(t, 2);
                  v_118 = ATgetArgument(t, 3);
                  {
                    ATerm g_47 = NULL,q_47 = NULL,r_47 = NULL,x_15 = NULL;
                    t = SSLgetAnnotations(w_118);
                    g_47 = t;
                    t = b_119;
                    t = o_140(t);
                    r_47 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_119, r_47);
                    t = genzip_4_0(w_8, a_9, b_9, c_9, t);
                    q_47 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, a_119, q_47, u_118, v_118);
                    x_15 = t;
                    t = SSLsetAnnotations(x_15, g_47);
                  }
                }
              else
                {
                  ATerm l_49 = NULL,r_49 = NULL,a_16 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      a_119 = ATgetArgument(t, 0);
                      b_119 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_118);
                  l_49 = t;
                  t = a_119;
                  t = o_140(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_49 = ATgetFirst((ATermList) t);
                      {
                        ATerm t_46 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, r_49, b_119);
                  a_16 = t;
                  t = SSLsetAnnotations(a_16, l_49);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm r_140 (ATerm), ATerm t)
{
  ATerm x_122 = NULL,y_122 = NULL,z_122 = NULL,a_123 = NULL,g_123 = NULL;
  z_122 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_123 = ATgetArgument(t, 0);
      g_123 = ATgetArgument(t, 1);
      {
        ATerm d_50 = NULL,g_50 = NULL,i_50 = NULL,w_19 = NULL;
        t = SSLgetAnnotations(z_122);
        d_50 = t;
        t = a_123;
        t = p_140(t);
        g_50 = t;
        t = g_123;
        t = p_140(t);
        i_50 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, g_50, i_50);
        w_19 = t;
        t = SSLsetAnnotations(w_19, d_50);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_123 = ATgetArgument(t, 0);
          g_123 = ATgetArgument(t, 1);
          x_122 = ATgetArgument(t, 2);
          {
            ATerm a_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,b_20 = NULL;
            t = SSLgetAnnotations(z_122);
            a_51 = t;
            t = a_123;
            t = r_140(t);
            m_51 = t;
            t = g_123;
            t = r_140(t);
            n_51 = t;
            t = x_122;
            t = p_140(t);
            o_51 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, m_51, n_51, o_51);
            b_20 = t;
            t = SSLsetAnnotations(b_20, a_51);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              a_123 = ATgetArgument(t, 0);
              g_123 = ATgetArgument(t, 1);
              x_122 = ATgetArgument(t, 2);
              y_122 = ATgetArgument(t, 3);
              {
                ATerm z_51 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,c_20 = NULL;
                t = SSLgetAnnotations(z_122);
                z_51 = t;
                t = a_123;
                t = r_140(t);
                e_52 = t;
                t = g_123;
                t = r_140(t);
                f_52 = t;
                t = x_122;
                t = r_140(t);
                g_52 = t;
                t = y_122;
                t = p_140(t);
                h_52 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, e_52, f_52, g_52, h_52);
                c_20 = t;
                t = SSLsetAnnotations(c_20, z_51);
              }
            }
          else
            {
              ATerm v_52 = NULL,a_53 = NULL,b_53 = NULL,d_20 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  a_123 = ATgetArgument(t, 0);
                  g_123 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_122);
              v_52 = t;
              t = a_123;
              t = r_140(t);
              a_53 = t;
              t = g_123;
              t = p_140(t);
              b_53 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, a_53, b_53);
              d_20 = t;
              t = SSLsetAnnotations(d_20, v_52);
            }
        }
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm n_123 = NULL;
  ATerm u_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_123 = ATgetArgument(t, 0);
          {
            ATerm w_46 = ATgetArgument(t, 1);
          }
          {
            ATerm x_46 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_46);
      t = n_123;
    }
  else
    {
      t = u_46;
      if(match_cons(t, sym_SDefT_4))
        {
          n_123 = ATgetArgument(t, 0);
          {
            ATerm y_46 = ATgetArgument(t, 1);
          }
          {
            ATerm z_46 = ATgetArgument(t, 2);
          }
          {
            ATerm a_47 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = n_123;
    }
  return(t);
}
static ATerm s_12 (ATerm h_80, ATerm g_80, ATerm t)
{
  t = h_80;
  t = map_1_0(d_9, t);
  return(t);
}
ATerm SVar_1_0 (ATerm z_90 (ATerm), ATerm t)
{
  ATerm t_123 = NULL,u_123 = NULL,v_123 = NULL,w_123 = NULL,i_20 = NULL;
  w_123 = t;
  if(match_cons(t, sym_SVar_1))
    {
      u_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_123);
  t_123 = t;
  t = u_123;
  t = z_90(t);
  v_123 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, v_123);
  i_20 = t;
  t = SSLsetAnnotations(i_20, t_123);
  return(t);
}
static ATerm c_13 (ATerm t_136 (ATerm), ATerm u_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_70, ATerm m_70, ATerm l_70, ATerm t)
{
  static ATerm e_9 (ATerm t)
  {
    ATerm y_123 = NULL;
    y_123 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_123, l_70);
    t = t_136(t);
    return(t);
  }
  static ATerm f_9 (ATerm t)
  {
    ATerm z_123 = NULL;
    z_123 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_123, m_70);
    t = t_136(t);
    return(t);
  }
  t = n_70;
  t = u_136(e_9, f_9, _id, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_47 = ATgetArgument(t, 0);
      if(((ATgetType(b_47) != AT_LIST) || !(ATisEmpty(b_47))))
        _fail(t);
      {
        ATerm c_47 = ATgetArgument(t, 1);
        if(((ATgetType(c_47) != AT_LIST) || !(ATisEmpty(c_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm o_124 = NULL,p_124 = NULL,q_124 = NULL,r_124 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_47 = ATgetArgument(t, 0);
      if(((ATgetType(d_47) == AT_LIST) && !(ATisEmpty(d_47))))
        {
          o_124 = ATgetFirst((ATermList) d_47);
          p_124 = (ATerm) ATgetNext((ATermList) d_47);
        }
      else
        _fail(t);
      {
        ATerm e_47 = ATgetArgument(t, 1);
        if(((ATgetType(e_47) == AT_LIST) && !(ATisEmpty(e_47))))
          {
            q_124 = ATgetFirst((ATermList) e_47);
            r_124 = (ATerm) ATgetNext((ATermList) e_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_124, q_124), (ATerm) ATmakeAppl(sym__2, p_124, r_124));
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm s_124 = NULL,t_124 = NULL;
  if(match_cons(t, sym__2))
    {
      s_124 = ATgetArgument(t, 0);
      t_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_124), s_124);
  return(t);
}
static ATerm d_13 (ATerm n_136 (ATerm), ATerm o_136 (ATerm (ATerm), ATerm), ATerm f_70, ATerm i_70, ATerm t)
{
  ATerm c_124 = NULL,d_124 = NULL,e_124 = NULL,f_124 = NULL,h_124 = NULL;
  t = f_70;
  t = n_136(t);
  c_124 = t;
  t = map_1_0(new_0_0, t);
  d_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_124, d_124);
  t = genzip_4_0(g_9, h_9, j_9, _id, t);
  h_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_124, i_70);
  t = conc_0_0(t);
  e_124 = t;
  t = f_70;
  {
    static ATerm l_9 (ATerm t)
    {
      t = d_124;
      return(t);
    }
    t = o_136(l_9, t);
  }
  f_124 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_124, i_70, e_124);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm b_125 = NULL,c_125 = NULL,d_125 = NULL,e_125 = NULL,f_125 = NULL,g_125 = NULL,h_125 = NULL;
  d_125 = t;
  if(match_cons(t, sym__2))
    {
      e_125 = ATgetArgument(t, 0);
      f_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_125;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_125 = ATgetFirst((ATermList) t);
      h_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_125;
  if(match_cons(t, sym__2))
    {
      b_125 = ATgetArgument(t, 0);
      c_125 = ATgetArgument(t, 1);
      {
        ATerm f_47 = t;
        int h_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_125;
            if((e_125 != t))
              {
                _fail(t);
              }
            t = c_125;
            LocalPopChoice(h_47);
          }
        else
          {
            t = f_47;
            t = (ATerm) ATmakeAppl(sym__2, e_125, h_125);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, e_125, h_125);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm d_129 (ATerm), ATerm t)
{
  static ATerm i_126 (ATerm t)
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_129(t);
        LocalPopChoice(j_47);
      }
    else
      {
        t = i_47;
        {
          ATerm f_126 = NULL,g_126 = NULL,h_126 = NULL;
          static ATerm n_9 (ATerm t)
          {
            ATerm t_53 = NULL;
            t_53 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_53, not_null(h_126));
            t = i_126(t);
            return(t);
          }
          f_126 = t;
          if(match_cons(t, sym__2))
            {
              g_126 = ATgetArgument(t, 0);
              if(((h_126 != NULL) && (h_126 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                h_126 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_126;
          t = SRTS_all(n_9, t);
        }
      }
    return(t);
  }
  t = i_126(t);
  return(t);
}
ATerm rename_4_0 (ATerm i_136 (ATerm (ATerm), ATerm), ATerm j_136 (ATerm), ATerm k_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_136 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_126 = NULL;
  static ATerm b_127 (ATerm t)
  {
    static ATerm p_9 (ATerm t)
    {
      ATerm v_126 = NULL,w_126 = NULL,x_126 = NULL;
      v_126 = t;
      if(match_cons(t, sym__2))
        {
          w_126 = ATgetArgument(t, 0);
          x_126 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_47 = t;
        int l_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_9 (ATerm t)
            {
              ATerm a_127 = NULL;
              a_127 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_127, x_126);
              t = lookup_0_0(t);
              return(t);
            }
            t = w_126;
            t = i_136(r_9, t);
            LocalPopChoice(l_47);
          }
        else
          {
            t = k_47;
            {
              ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
              t = v_126;
              t = d_13(j_136, l_136, w_126, x_126, t);
              if(match_cons(t, sym__3))
                {
                  e_54 = ATgetArgument(t, 0);
                  f_54 = ATgetArgument(t, 1);
                  g_54 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = c_13(b_127, k_136, e_54, f_54, g_54, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(p_9, t);
    return(t);
  }
  m_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_126, (ATerm) ATempty);
  t = b_127(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_47 = ATgetArgument(t, 0);
      if(((ATgetType(m_47) != AT_LIST) || !(ATisEmpty(m_47))))
        _fail(t);
      {
        ATerm n_47 = ATgetArgument(t, 1);
        if(((ATgetType(n_47) != AT_LIST) || !(ATisEmpty(n_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,t_56 = NULL,w_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_47 = ATgetArgument(t, 0);
      if(((ATgetType(o_47) == AT_LIST) && !(ATisEmpty(o_47))))
        {
          q_56 = ATgetFirst((ATermList) o_47);
          r_56 = (ATerm) ATgetNext((ATermList) o_47);
        }
      else
        _fail(t);
      {
        ATerm p_47 = ATgetArgument(t, 1);
        if(((ATgetType(p_47) == AT_LIST) && !(ATisEmpty(p_47))))
          {
            t_56 = ATgetFirst((ATermList) p_47);
            w_56 = (ATerm) ATgetNext((ATermList) p_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_56, t_56), (ATerm) ATmakeAppl(sym__2, r_56, w_56));
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL;
  if(match_cons(t, sym__2))
    {
      x_56 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_56), x_56);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm a_57 = NULL,c_57 = NULL,l_57 = NULL;
  if(match_cons(t, sym__2))
    {
      a_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_57;
  {
    ATerm s_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_57);
      }
    else
      {
        t = s_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_47 = ATgetArgument(t, 0);
            c_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_57, c_57);
      }
  }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_48 = ATgetArgument(t, 0);
      if(((ATgetType(a_48) != AT_LIST) || !(ATisEmpty(a_48))))
        _fail(t);
      {
        ATerm d_48 = ATgetArgument(t, 1);
        if(((ATgetType(d_48) != AT_LIST) || !(ATisEmpty(d_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm a_59 = NULL,d_59 = NULL,f_59 = NULL,h_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_48 = ATgetArgument(t, 0);
      if(((ATgetType(e_48) == AT_LIST) && !(ATisEmpty(e_48))))
        {
          a_59 = ATgetFirst((ATermList) e_48);
          d_59 = (ATerm) ATgetNext((ATermList) e_48);
        }
      else
        _fail(t);
      {
        ATerm f_48 = ATgetArgument(t, 1);
        if(((ATgetType(f_48) == AT_LIST) && !(ATisEmpty(f_48))))
          {
            f_59 = ATgetFirst((ATermList) f_48);
            h_59 = (ATerm) ATgetNext((ATermList) f_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_59, f_59), (ATerm) ATmakeAppl(sym__2, d_59, h_59));
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL;
  if(match_cons(t, sym__2))
    {
      i_59 = ATgetArgument(t, 0);
      j_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_59), i_59);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm l_59 = NULL,q_59 = NULL,r_59 = NULL;
  if(match_cons(t, sym__2))
    {
      l_59 = ATgetArgument(t, 0);
      r_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_59;
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_59);
      }
    else
      {
        t = h_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_48 = ATgetArgument(t, 0);
            q_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_59, q_59);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm k_140 (ATerm), ATerm t)
{
  ATerm x_129 = NULL,y_129 = NULL,z_129 = NULL,a_130 = NULL,b_130 = NULL;
  x_129 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_129 = ATgetArgument(t, 0);
      z_129 = ATgetArgument(t, 1);
      {
        ATerm d_55 = NULL,g_55 = NULL,o_20 = NULL;
        t = SSLgetAnnotations(x_129);
        d_55 = t;
        t = y_129;
        t = k_140(t);
        g_55 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_55, z_129);
        o_20 = t;
        t = SSLsetAnnotations(o_20, d_55);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_129 = ATgetArgument(t, 0);
          z_129 = ATgetArgument(t, 1);
          a_130 = ATgetArgument(t, 2);
          b_130 = ATgetArgument(t, 3);
          {
            ATerm t_55 = NULL,m_56 = NULL,n_56 = NULL,p_20 = NULL;
            t = SSLgetAnnotations(x_129);
            t_55 = t;
            t = a_130;
            t = k_140(t);
            n_56 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_130, n_56);
            t = genzip_4_0(s_9, t_9, u_9, v_9, t);
            m_56 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_129, z_129, m_56, b_130);
            p_20 = t;
            t = SSLsetAnnotations(p_20, t_55);
          }
        }
      else
        {
          ATerm q_58 = NULL,x_58 = NULL,y_58 = NULL,q_20 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              y_129 = ATgetArgument(t, 0);
              z_129 = ATgetArgument(t, 1);
              a_130 = ATgetArgument(t, 2);
              b_130 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_129);
          q_58 = t;
          t = a_130;
          t = k_140(t);
          y_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_130, y_58);
          t = genzip_4_0(w_9, x_9, y_9, z_9, t);
          x_58 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, y_129, z_129, x_58, b_130);
          q_20 = t;
          t = SSLsetAnnotations(q_20, q_58);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm t)
{
  ATerm h_133 = NULL,i_133 = NULL,j_133 = NULL,k_133 = NULL,l_133 = NULL;
  k_133 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_133 = ATgetArgument(t, 0);
      h_133 = ATgetArgument(t, 1);
      {
        ATerm l_60 = NULL,o_60 = NULL,p_60 = NULL,a_21 = NULL;
        t = SSLgetAnnotations(k_133);
        l_60 = t;
        t = l_133;
        t = n_140(t);
        o_60 = t;
        t = h_133;
        t = l_140(t);
        p_60 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_60, p_60);
        a_21 = t;
        t = SSLsetAnnotations(a_21, l_60);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          l_133 = ATgetArgument(t, 0);
          h_133 = ATgetArgument(t, 1);
          i_133 = ATgetArgument(t, 2);
          j_133 = ATgetArgument(t, 3);
          {
            ATerm a_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,b_21 = NULL;
            t = SSLgetAnnotations(k_133);
            a_61 = t;
            t = l_133;
            t = n_140(t);
            g_61 = t;
            t = h_133;
            t = n_140(t);
            h_61 = t;
            t = i_133;
            t = n_140(t);
            i_61 = t;
            t = j_133;
            t = l_140(t);
            j_61 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_61, h_61, i_61, j_61);
            b_21 = t;
            t = SSLsetAnnotations(b_21, a_61);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              l_133 = ATgetArgument(t, 0);
              h_133 = ATgetArgument(t, 1);
              i_133 = ATgetArgument(t, 2);
              j_133 = ATgetArgument(t, 3);
              {
                ATerm a_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,o_62 = NULL,c_21 = NULL;
                t = SSLgetAnnotations(k_133);
                a_62 = t;
                t = l_133;
                t = n_140(t);
                j_62 = t;
                t = h_133;
                t = n_140(t);
                k_62 = t;
                t = i_133;
                t = n_140(t);
                l_62 = t;
                t = j_133;
                t = l_140(t);
                o_62 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, j_62, k_62, l_62, o_62);
                c_21 = t;
                t = SSLsetAnnotations(c_21, a_62);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  l_133 = ATgetArgument(t, 0);
                  {
                    ATerm z_62 = NULL,b_63 = NULL,d_21 = NULL;
                    t = SSLgetAnnotations(k_133);
                    z_62 = t;
                    t = l_133;
                    t = l_140(t);
                    b_63 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, b_63);
                    d_21 = t;
                    t = SSLsetAnnotations(d_21, z_62);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      l_133 = ATgetArgument(t, 0);
                      {
                        ATerm h_63 = NULL,j_63 = NULL,e_21 = NULL;
                        t = SSLgetAnnotations(k_133);
                        h_63 = t;
                        t = l_133;
                        t = l_140(t);
                        j_63 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, j_63);
                        e_21 = t;
                        t = SSLsetAnnotations(e_21, h_63);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          l_133 = ATgetArgument(t, 0);
                          {
                            ATerm p_63 = NULL,r_63 = NULL,f_21 = NULL;
                            t = SSLgetAnnotations(k_133);
                            p_63 = t;
                            t = l_133;
                            t = l_140(t);
                            r_63 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, r_63);
                            f_21 = t;
                            t = SSLsetAnnotations(f_21, p_63);
                          }
                        }
                      else
                        {
                          ATerm g_64 = NULL,l_64 = NULL,g_21 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              l_133 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(k_133);
                          g_64 = t;
                          t = l_133;
                          t = l_140(t);
                          l_64 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, l_64);
                          g_21 = t;
                          t = SSLsetAnnotations(g_21, g_64);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm j_134 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_134);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm l_48 = t;
  int n_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_48);
    }
  else
    {
      t = l_48;
      {
        ATerm o_48 = t;
        int q_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_48);
          }
        else
          {
            t = o_48;
            {
              ATerm l_134 = NULL,m_134 = NULL,n_134 = NULL,o_134 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_134 = ATgetArgument(t, 0);
                  m_134 = ATgetArgument(t, 1);
                  n_134 = ATgetArgument(t, 2);
                  o_134 = ATgetArgument(t, 3);
                  t = n_134;
                  t = map_1_0(c_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_134 = ATgetArgument(t, 0);
                      m_134 = ATgetArgument(t, 1);
                      n_134 = ATgetArgument(t, 2);
                      o_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_134;
                  t = map_1_0(d_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm v_134 = NULL;
  ATerm r_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_134 = ATgetArgument(t, 0);
          {
            ATerm t_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_48);
      t = v_134;
    }
  else
    {
      t = r_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_134;
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm e_135 = NULL;
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_135 = ATgetArgument(t, 0);
          {
            ATerm w_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_48);
      t = e_135;
    }
  else
    {
      t = u_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_135;
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm i_135 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_135);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_48);
    }
  else
    {
      t = x_48;
      {
        ATerm z_48 = t;
        int a_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_49);
          }
        else
          {
            t = z_48;
            {
              ATerm k_135 = NULL,l_135 = NULL,m_135 = NULL,p_135 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_135 = ATgetArgument(t, 0);
                  l_135 = ATgetArgument(t, 1);
                  m_135 = ATgetArgument(t, 2);
                  p_135 = ATgetArgument(t, 3);
                  t = m_135;
                  t = map_1_0(k_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_135 = ATgetArgument(t, 0);
                      l_135 = ATgetArgument(t, 1);
                      m_135 = ATgetArgument(t, 2);
                      p_135 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_135;
                  t = map_1_0(l_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm y_135 = NULL;
  ATerm b_49 = t;
  int c_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_135 = ATgetArgument(t, 0);
          {
            ATerm d_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_49);
      t = y_135;
    }
  else
    {
      t = b_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_135;
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm q_136 = NULL;
  ATerm e_49 = t;
  int f_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_136 = ATgetArgument(t, 0);
          {
            ATerm g_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_49);
      t = q_136;
    }
  else
    {
      t = e_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_136;
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm w_136 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_136);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm h_49 = t;
  int i_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_49);
    }
  else
    {
      t = h_49;
      {
        ATerm j_49 = t;
        int k_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_49);
          }
        else
          {
            t = j_49;
            {
              ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL,b_137 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_136 = ATgetArgument(t, 0);
                  z_136 = ATgetArgument(t, 1);
                  a_137 = ATgetArgument(t, 2);
                  b_137 = ATgetArgument(t, 3);
                  t = a_137;
                  t = map_1_0(p_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_136 = ATgetArgument(t, 0);
                      z_136 = ATgetArgument(t, 1);
                      a_137 = ATgetArgument(t, 2);
                      b_137 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_137;
                  t = map_1_0(q_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm i_137 = NULL;
  ATerm m_49 = t;
  int n_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_137 = ATgetArgument(t, 0);
          {
            ATerm o_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_49);
      t = i_137;
    }
  else
    {
      t = m_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_137;
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm r_137 = NULL;
  ATerm p_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_137 = ATgetArgument(t, 0);
          {
            ATerm s_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_49);
      t = r_137;
    }
  else
    {
      t = p_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_137;
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm v_137 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_137);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm t_49 = t;
  int u_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_49);
    }
  else
    {
      t = t_49;
      {
        ATerm v_49 = t;
        int w_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_49);
          }
        else
          {
            t = v_49;
            {
              ATerm x_137 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_137 = ATgetArgument(t, 0);
                  c_138 = ATgetArgument(t, 1);
                  d_138 = ATgetArgument(t, 2);
                  e_138 = ATgetArgument(t, 3);
                  t = d_138;
                  t = map_1_0(t_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_137 = ATgetArgument(t, 0);
                      c_138 = ATgetArgument(t, 1);
                      d_138 = ATgetArgument(t, 2);
                      e_138 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_138;
                  t = map_1_0(v_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm l_138 = NULL;
  ATerm x_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_138 = ATgetArgument(t, 0);
          {
            ATerm z_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_49);
      t = l_138;
    }
  else
    {
      t = x_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_138;
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm u_138 = NULL;
  ATerm a_50 = t;
  int b_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_138 = ATgetArgument(t, 0);
          {
            ATerm c_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_50);
      t = u_138;
    }
  else
    {
      t = a_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_138;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm h_134 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      h_134 = ATgetArgument(t, 0);
      t = h_134;
      t = free_vars_3_0(a_10, b_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          h_134 = ATgetArgument(t, 0);
          t = h_134;
          t = free_vars_3_0(e_10, u_10, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              h_134 = ATgetArgument(t, 0);
              t = h_134;
              t = free_vars_3_0(m_11, n_11, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  h_134 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = h_134;
              t = free_vars_3_0(r_11, s_11, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm w_12 (ATerm r_122 (ATerm), ATerm t_52, ATerm s_52, ATerm t)
{
  static ATerm m_139 (ATerm t)
  {
    ATerm h_139 = NULL,i_139 = NULL,j_139 = NULL;
    h_139 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_52;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_139 = ATgetFirst((ATermList) t);
            j_139 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_50 = t;
          int f_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_139;
              {
                static ATerm x_11 (ATerm t)
                {
                  t = s_52;
                  return(t);
                }
                t = x_12(r_122, x_11, i_139, j_139, t);
              }
              t = m_139(t);
              LocalPopChoice(f_50);
            }
          else
            {
              t = e_50;
              {
                ATerm w_64 = NULL,g_65 = NULL,t_21 = NULL;
                t = SSLgetAnnotations(h_139);
                w_64 = t;
                t = j_139;
                t = m_139(t);
                g_65 = t;
                t = (ATerm) ATinsert(CheckATermList(g_65), i_139);
                t_21 = t;
                t = SSLsetAnnotations(t_21, w_64);
              }
            }
        }
      }
    return(t);
  }
  t = t_52;
  t = m_139(t);
  return(t);
}
ATerm foldr_3_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t)
{
  ATerm r_139 = NULL,s_139 = NULL,t_139 = NULL;
  r_139 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_139;
      t = o_125(t);
    }
  else
    {
      ATerm w_139 = NULL,x_139 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_139 = ATgetFirst((ATermList) t);
          t_139 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_139;
      t = q_125(t);
      w_139 = t;
      t = t_139;
      t = foldr_3_0(o_125, p_125, q_125, t);
      x_139 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_139, x_139);
      t = p_125(t);
    }
  return(t);
}
static ATerm x_12 (ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm x_52, ATerm w_52, ATerm t)
{
  t = v_122(t);
  {
    static ATerm y_11 (ATerm t)
    {
      ATerm a_140 = NULL;
      a_140 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_52, a_140);
      t = u_122(t);
      return(t);
    }
    t = fetch_1_0(y_11, t);
  }
  t = w_52;
  return(t);
}
static ATerm y_12 (ATerm m_122 (ATerm), ATerm r_52, ATerm q_52, ATerm t)
{
  static ATerm y_140 (ATerm t)
  {
    ATerm t_140 = NULL,u_140 = NULL,v_140 = NULL;
    t_140 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_140;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_140 = ATgetFirst((ATermList) t);
            v_140 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_50 = t;
          int j_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_140;
              {
                static ATerm z_11 (ATerm t)
                {
                  t = q_52;
                  return(t);
                }
                t = x_12(m_122, z_11, u_140, v_140, t);
              }
              t = y_140(t);
              LocalPopChoice(j_50);
            }
          else
            {
              t = h_50;
              {
                ATerm z_65 = NULL,c_66 = NULL,w_21 = NULL;
                t = SSLgetAnnotations(t_140);
                z_65 = t;
                t = v_140;
                t = y_140(t);
                c_66 = t;
                t = (ATerm) ATinsert(CheckATermList(c_66), u_140);
                w_21 = t;
                t = SSLsetAnnotations(w_21, z_65);
              }
            }
        }
      }
    return(t);
  }
  t = r_52;
  t = y_140(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  static ATerm w_141 (ATerm t)
  {
    ATerm t_141 = NULL,u_141 = NULL,v_141 = NULL;
    v_141 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_141 = ATgetFirst((ATermList) t);
        u_141 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_66 = NULL,c_67 = NULL,y_21 = NULL;
          t = SSLgetAnnotations(v_141);
          v_66 = t;
          t = u_141;
          t = w_141(t);
          c_67 = t;
          t = (ATerm) ATinsert(CheckATermList(c_67), t_141);
          y_21 = t;
          t = SSLsetAnnotations(y_21, v_66);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_141;
        t = x_118(t);
      }
    return(t);
  }
  t = w_141(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_141 = NULL,e_141 = NULL,f_141 = NULL;
  d_141 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_141;
    }
  else
    {
      static ATerm f_12 (ATerm t)
      {
        t = not_null(f_141);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_141 = ATgetFirst((ATermList) t);
          if(((f_141 != NULL) && (f_141 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_141 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_141;
      t = at_end_1_0(f_12, t);
    }
  return(t);
}
static ATerm i_142 (ATerm a_142, ATerm t)
{
  ATerm b_142 = NULL;
  t = SSL_explode_term(a_142);
  if(match_cons(t, sym__2))
    {
      ATerm k_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_50) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_142;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_142 = NULL,e_142 = NULL,f_142 = NULL;
  f_142 = t;
  if(match_cons(t, sym__2))
    {
      d_142 = ATgetArgument(t, 0);
      e_142 = ATgetArgument(t, 1);
      {
        ATerm l_50 = t;
        int m_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_12 (ATerm t)
            {
              t = e_142;
              return(t);
            }
            t = d_142;
            t = at_end_1_0(k_12, t);
            LocalPopChoice(m_50);
          }
        else
          {
            t = l_50;
            t = i_142(f_142, t);
          }
      }
    }
  else
    {
      t = i_142(f_142, t);
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_50 = ATgetArgument(t, 0);
      if(((ATgetType(n_50) != AT_LIST) || !(ATisEmpty(n_50))))
        _fail(t);
      {
        ATerm o_50 = ATgetArgument(t, 1);
        if(((ATgetType(o_50) != AT_LIST) || !(ATisEmpty(o_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm p_142 = NULL,q_142 = NULL,r_142 = NULL,s_142 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_50 = ATgetArgument(t, 0);
      if(((ATgetType(p_50) == AT_LIST) && !(ATisEmpty(p_50))))
        {
          p_142 = ATgetFirst((ATermList) p_50);
          q_142 = (ATerm) ATgetNext((ATermList) p_50);
        }
      else
        _fail(t);
      {
        ATerm q_50 = ATgetArgument(t, 1);
        if(((ATgetType(q_50) == AT_LIST) && !(ATisEmpty(q_50))))
          {
            r_142 = ATgetFirst((ATermList) q_50);
            s_142 = (ATerm) ATgetNext((ATermList) q_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_142, r_142), (ATerm) ATmakeAppl(sym__2, q_142, s_142));
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm t_142 = NULL,u_142 = NULL;
  if(match_cons(t, sym__2))
    {
      t_142 = ATgetArgument(t, 0);
      u_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_142), t_142);
  return(t);
}
static ATerm a_13 (ATerm l_710, ATerm q_710, ATerm g_72, ATerm t)
{
  ATerm k_142 = NULL,l_142 = NULL,m_142 = NULL,n_142 = NULL;
  t = SSL_explode_term(q_710);
  if(match_cons(t, sym__2))
    {
      k_142 = ATgetArgument(t, 0);
      m_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_710);
  if(match_cons(t, sym__2))
    {
      if((k_142 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_142, m_142);
  t = genzip_4_0(l_12, o_12, z_12, _id, t);
  n_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_142, g_72);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  static ATerm w_142 (ATerm t)
  {
    ATerm s_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_115(t);
        LocalPopChoice(x_50);
      }
    else
      {
        t = s_50;
        t = r_115(t);
        t = w_142(t);
      }
    return(t);
  }
  t = w_142(t);
  return(t);
}
ATerm for_3_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  t = t_115(t);
  t = while_not_2_0(u_115, v_115, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm d_143 = NULL;
  d_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_143);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,a_22 = NULL;
  h_143 = t;
  if(match_cons(t, sym__2))
    {
      f_143 = ATgetArgument(t, 0);
      g_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_143);
  e_143 = t;
  t = g_143;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_143, g_143);
  a_22 = t;
  t = SSLsetAnnotations(a_22, e_143);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL,e_144 = NULL;
  a_144 = t;
  if(match_cons(t, sym__2))
    {
      b_144 = ATgetArgument(t, 0);
      c_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_144;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_144 = ATgetFirst((ATermList) t);
      e_144 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_50 = t;
        int z_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_144(b_144, c_144, a_144, t);
            LocalPopChoice(z_50);
          }
        else
          {
            t = y_50;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_144), d_144), e_144);
          }
      }
    }
  else
    {
      t = o_144(b_144, c_144, a_144, t);
    }
  return(t);
}
static ATerm o_144 (ATerm i_143, ATerm j_143, ATerm k_143, ATerm t)
{
  ATerm l_143 = NULL,o_143 = NULL,b_22 = NULL,r_143 = NULL,s_143 = NULL,t_143 = NULL,u_143 = NULL;
  t = SSLgetAnnotations(k_143);
  l_143 = t;
  t = j_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_143 = ATgetFirst((ATermList) t);
      u_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_143;
  if(match_cons(t, sym__2))
    {
      s_143 = ATgetArgument(t, 0);
      t_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_143;
        if((s_143 != t))
          {
            _fail(t);
          }
        t = u_143;
        LocalPopChoice(i_51);
      }
    else
      {
        t = h_51;
        t = j_143;
        t = a_13(s_143, t_143, u_143, t);
      }
  }
  o_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_143, o_143);
  b_22 = t;
  t = SSLsetAnnotations(b_22, l_143);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm n_144 = NULL;
  if(match_cons(t, sym__2))
    {
      n_144 = ATgetArgument(t, 0);
      if((n_144 != ATgetArgument(t, 1)))
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
  ATerm j_51 = t;
  int k_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_13, g_13, i_13, t);
      LocalPopChoice(k_51);
    }
  else
    {
      t = j_51;
      {
        ATerm i_144 = NULL,j_144 = NULL,k_144 = NULL;
        i_144 = t;
        if(match_cons(t, sym__2))
          {
            j_144 = ATgetArgument(t, 0);
            k_144 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_144;
        t = y_12(r_13, j_144, k_144, t);
      }
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm a_68 = NULL,g_68 = NULL;
  if(match_cons(t, sym__2))
    {
      a_68 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_12(c_15, a_68, g_68, t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm h_68 = NULL;
  if(match_cons(t, sym__2))
    {
      h_68 = ATgetArgument(t, 0);
      if((h_68 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL;
  if(match_cons(t, sym__2))
    {
      r_68 = ATgetArgument(t, 0);
      s_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_12(f_15, r_68, s_68, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm w_68 = NULL;
  if(match_cons(t, sym__2))
    {
      w_68 = ATgetArgument(t, 0);
      if((w_68 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_137 (ATerm), ATerm z_137 (ATerm), ATerm a_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm c_145 (ATerm t)
  {
    ATerm l_51 = t;
    int p_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_137(t);
        LocalPopChoice(p_51);
      }
    else
      {
        t = l_51;
        {
          ATerm q_51 = t;
          int r_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_144 = NULL,r_144 = NULL,p_67 = NULL,q_67 = NULL;
              q_144 = t;
              t = z_137(t);
              r_144 = t;
              t = q_144;
              {
                static ATerm r_14 (ATerm t)
                {
                  ATerm t_144 = NULL;
                  t = c_145(t);
                  t_144 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_144, r_144);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_138(r_14, c_145, y_14, t);
              }
              q_67 = t;
              t = SSL_explode_term(q_67);
              if(match_cons(t, sym__2))
                {
                  ATerm s_51 = ATgetArgument(t, 0);
                  p_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_67;
              t = foldr_3_0(a_15, b_15, _id, t);
              LocalPopChoice(r_51);
            }
          else
            {
              t = q_51;
              {
                ATerm j_68 = NULL,n_68 = NULL;
                n_68 = t;
                t = SSL_explode_term(n_68);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_51 = ATgetArgument(t, 0);
                    j_68 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_68;
                t = foldr_3_0(d_15, e_15, c_145, t);
              }
            }
        }
      }
    return(t);
  }
  t = c_145(t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm p_145 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_145);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm u_51 = t;
  int v_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_51);
    }
  else
    {
      t = u_51;
      {
        ATerm w_51 = t;
        int x_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_51);
          }
        else
          {
            t = w_51;
            {
              ATerm r_145 = NULL,s_145 = NULL,t_145 = NULL,u_145 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_145 = ATgetArgument(t, 0);
                  s_145 = ATgetArgument(t, 1);
                  t_145 = ATgetArgument(t, 2);
                  u_145 = ATgetArgument(t, 3);
                  t = t_145;
                  t = map_1_0(i_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_145 = ATgetArgument(t, 0);
                      s_145 = ATgetArgument(t, 1);
                      t_145 = ATgetArgument(t, 2);
                      u_145 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_145;
                  t = map_1_0(j_15, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm b_146 = NULL;
  ATerm y_51 = t;
  int a_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_146 = ATgetArgument(t, 0);
          {
            ATerm b_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_52);
      t = b_146;
    }
  else
    {
      t = y_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_146;
    }
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm k_146 = NULL;
  ATerm c_52 = t;
  int d_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_146 = ATgetArgument(t, 0);
          {
            ATerm i_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_52);
      t = k_146;
    }
  else
    {
      t = c_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_146;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm i_145 = NULL,m_145 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      m_145 = ATgetArgument(t, 0);
      t = m_145;
      if(match_cons(t, sym_Rule_3))
        {
          i_145 = ATgetArgument(t, 0);
          {
            ATerm j_52 = ATgetArgument(t, 1);
          }
          {
            ATerm k_52 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = i_145;
      t = free_vars_3_0(g_15, h_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          m_145 = ATgetArgument(t, 0);
          {
            ATerm l_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_145;
    }
  return(t);
}
ATerm Var_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm o_146 = NULL,p_146 = NULL,q_146 = NULL,r_146 = NULL,e_22 = NULL;
  r_146 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_146);
  o_146 = t;
  t = p_146;
  t = o_87(t);
  q_146 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_146);
  e_22 = t;
  t = SSLsetAnnotations(e_22, o_146);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm m_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_52);
    }
  else
    {
      t = m_52;
      {
        ATerm a_147 = NULL,b_147 = NULL,c_147 = NULL,d_147 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            a_147 = ATgetArgument(t, 0);
            b_147 = ATgetArgument(t, 1);
            c_147 = ATgetArgument(t, 2);
            d_147 = ATgetArgument(t, 3);
            t = c_147;
            t = map_1_0(l_15, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                a_147 = ATgetArgument(t, 0);
                b_147 = ATgetArgument(t, 1);
                c_147 = ATgetArgument(t, 2);
                d_147 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = c_147;
            t = map_1_0(o_15, t);
          }
      }
    }
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm k_147 = NULL;
  ATerm o_52 = t;
  int p_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_147 = ATgetArgument(t, 0);
          {
            ATerm u_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_52);
      t = k_147;
    }
  else
    {
      t = o_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_147;
    }
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm t_147 = NULL;
  ATerm y_52 = t;
  int z_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_147 = ATgetArgument(t, 0);
          {
            ATerm c_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_52);
      t = t_147;
    }
  else
    {
      t = y_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_147;
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm w_147 = NULL,x_147 = NULL,y_147 = NULL,z_147 = NULL,a_148 = NULL;
  w_147 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_147 = ATgetArgument(t, 0);
      y_147 = ATgetArgument(t, 1);
      t = w_147;
      t = s_12(x_147, y_147, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_147 = ATgetArgument(t, 0);
          y_147 = ATgetArgument(t, 1);
          z_147 = ATgetArgument(t, 2);
          t = y_147;
          t = map_1_0(t_15, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              x_147 = ATgetArgument(t, 0);
              y_147 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, x_147);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  x_147 = ATgetArgument(t, 0);
                  y_147 = ATgetArgument(t, 1);
                  z_147 = ATgetArgument(t, 2);
                  a_148 = ATgetArgument(t, 3);
                  t = y_147;
                  t = map_1_0(y_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_147 = ATgetArgument(t, 0);
                      y_147 = ATgetArgument(t, 1);
                      z_147 = ATgetArgument(t, 2);
                      a_148 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_147;
                  t = map_1_0(z_15, t);
                }
            }
        }
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm i_148 = NULL;
  ATerm d_53 = t;
  int e_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_148 = ATgetArgument(t, 0);
          {
            ATerm f_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_53);
      t = i_148;
    }
  else
    {
      t = d_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_148 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_148;
    }
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm t_148 = NULL;
  ATerm g_53 = t;
  int h_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_148 = ATgetArgument(t, 0);
          {
            ATerm i_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_53);
      t = t_148;
    }
  else
    {
      t = g_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_148 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_148;
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm c_149 = NULL;
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_149 = ATgetArgument(t, 0);
          {
            ATerm l_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_53);
      t = c_149;
    }
  else
    {
      t = j_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_149;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, k_15, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, q_15, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm j_13 (ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm f_149 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_42, a_43);
  t = b_14(z_42, a_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_149 = ATgetFirst((ATermList) t);
      {
        ATerm m_53 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_149;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm d_150 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      d_150 = ATgetArgument(t, 0);
      {
        ATerm n_53 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_150;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm e_150 = NULL,g_150 = NULL,h_150 = NULL,i_150 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      g_150 = ATgetArgument(t, 0);
      i_150 = ATgetArgument(t, 1);
      e_150 = ATgetArgument(t, 2);
      t = g_150;
      if(match_cons(t, sym_SVar_1))
        {
          h_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_150;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_150;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_150;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          g_150 = ATgetArgument(t, 0);
          i_150 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_150;
      if(match_cons(t, sym_SVar_1))
        {
          h_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_150;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_150;
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm m_150 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_150 = ATgetArgument(t, 0);
      {
        ATerm o_53 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_150;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_53 = ATgetArgument(t, 0);
      if(((ATgetType(p_53) != AT_LIST) || !(ATisEmpty(p_53))))
        _fail(t);
      {
        ATerm q_53 = ATgetArgument(t, 1);
        if(((ATgetType(q_53) != AT_LIST) || !(ATisEmpty(q_53))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm n_150 = NULL,o_150 = NULL,p_150 = NULL,q_150 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_53 = ATgetArgument(t, 0);
      if(((ATgetType(r_53) == AT_LIST) && !(ATisEmpty(r_53))))
        {
          n_150 = ATgetFirst((ATermList) r_53);
          o_150 = (ATerm) ATgetNext((ATermList) r_53);
        }
      else
        _fail(t);
      {
        ATerm s_53 = ATgetArgument(t, 1);
        if(((ATgetType(s_53) == AT_LIST) && !(ATisEmpty(s_53))))
          {
            p_150 = ATgetFirst((ATermList) s_53);
            q_150 = (ATerm) ATgetNext((ATermList) s_53);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_150, p_150), (ATerm) ATmakeAppl(sym__2, o_150, q_150));
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm r_150 = NULL,s_150 = NULL;
  if(match_cons(t, sym__2))
    {
      r_150 = ATgetArgument(t, 0);
      s_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_150), r_150);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm t_150 = NULL,u_150 = NULL;
  if(match_cons(t, sym__2))
    {
      t_150 = ATgetArgument(t, 0);
      u_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_150), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_150)));
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm q_149 = NULL,r_149 = NULL,s_149 = NULL,t_149 = NULL,u_149 = NULL,v_149 = NULL,w_149 = NULL,x_149 = NULL,y_149 = NULL,z_149 = NULL,b_150 = NULL,c_150 = NULL,x_68 = NULL,y_68 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_53 = ATgetArgument(t, 0);
      if(match_cons(u_53, sym_SVar_1))
        {
          s_149 = ATgetArgument(u_53, 0);
        }
      else
        _fail(t);
      u_149 = ATgetArgument(t, 1);
      y_149 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_149), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  x_68 = t;
  t = term_v_53;
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_53, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_149), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = j_13(y_68, x_68, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm w_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_53) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      q_149 = ATgetArgument(t, 1);
      r_149 = ATgetArgument(t, 2);
      x_149 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_149, q_149, x_149, r_149);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((s_149 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_149 = ATgetArgument(t, 1);
      {
        ATerm x_53 = ATgetArgument(t, 2);
      }
      v_149 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_149;
  t = map_1_0(c_16, t);
  c_150 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_150, u_149, v_149);
  t = substitute_2_0(h_16, _id, t);
  w_149 = t;
  t = x_149;
  t = map_1_0(i_16, t);
  z_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_149, z_149);
  t = genzip_4_0(j_16, l_16, n_16, o_16, t);
  b_150 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, z_149, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_150), w_149));
  t = downup_1_0(p_16, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm e_151 = NULL,f_151 = NULL,g_151 = NULL;
  e_151 = t;
  t = term_l_21;
  f_151 = t;
  t = (ATerm) ATinsert(ATempty, term_y_53);
  g_151 = t;
  t = SSL_printnl(f_151, g_151);
  t = e_151;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = debug_1_0(t_16, t);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_z_53;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm o_151 = NULL,p_151 = NULL,q_151 = NULL;
  o_151 = t;
  t = term_l_21;
  p_151 = t;
  t = (ATerm) ATinsert(ATempty, term_a_54);
  q_151 = t;
  t = SSL_printnl(p_151, q_151);
  t = o_151;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm c_151 = NULL,d_151 = NULL;
  d_151 = t;
  t = new_0_0(t);
  c_151 = t;
  {
    ATerm b_54 = t;
    int c_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_54, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_151), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(c_54);
      }
    else
      {
        t = b_54;
        t = if_verbose2_1_0(q_16, t);
        _fail(t);
      }
  }
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_151 = NULL,i_151 = NULL,j_151 = NULL,k_151 = NULL,l_151 = NULL,m_151 = NULL,n_151 = NULL;
        h_151 = t;
        if(match_cons(t, sym_LChoice_2))
          {
            i_151 = ATgetArgument(t, 0);
            n_151 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_151;
        if(match_cons(t, sym_CallT_3))
          {
            j_151 = ATgetArgument(t, 0);
            l_151 = ATgetArgument(t, 1);
            m_151 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = j_151;
        if(match_cons(t, sym_SVar_1))
          {
            k_151 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_151;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_151;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_151;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        t = k_151;
        if((c_151 != t))
          {
            _fail(t);
          }
        t = h_151;
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        t = if_verbose1_1_0(r_16, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(v_16, t);
  t = d_151;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
static ATerm k_13 (ATerm z_116 (ATerm), ATerm k_41, ATerm i_41, ATerm t)
{
  ATerm r_151 = NULL,s_151 = NULL,t_151 = NULL,u_151 = NULL,v_151 = NULL,w_151 = NULL,x_151 = NULL,y_151 = NULL;
  u_151 = t;
  t = z_116(t);
  r_151 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_151, k_41, i_41);
  t = c_14(r_151, k_41, i_41, t);
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_151 = NULL;
        t = term_p_31;
        z_151 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_151, term_p_31);
        t = b_14(r_151, z_151, t);
        LocalPopChoice(l_54);
      }
    else
      {
        t = k_54;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_151 = ATgetFirst((ATermList) t);
      t_151 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_151, term_p_31, (ATerm) ATinsert(CheckATermList(t_151), (ATerm) ATinsert(CheckATermList(s_151), k_41)));
  t = lookup_table_0_1(r_151, t);
  y_151 = t;
  t = term_p_31;
  v_151 = t;
  t = (ATerm) ATinsert(CheckATermList(t_151), (ATerm) ATinsert(CheckATermList(s_151), k_41));
  w_151 = t;
  t = y_151;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(v_151, w_151, x_151, t);
  t = u_151;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_v_53;
  return(t);
}
static ATerm l_13 (ATerm j_22, ATerm k_22, ATerm m_22, ATerm l_22, ATerm t)
{
  ATerm a_152 = NULL,b_152 = NULL,c_152 = NULL;
  a_152 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  b_152 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_m_54, k_22, l_22, m_22);
  c_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_m_54, k_22, l_22, m_22));
  t = k_13(y_16, b_152, c_152, t);
  t = a_152;
  return(t);
}
ATerm map_1_0 (ATerm g_118 (ATerm), ATerm t)
{
  static ATerm r_152 (ATerm t)
  {
    ATerm o_152 = NULL,p_152 = NULL,q_152 = NULL;
    o_152 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_152;
      }
    else
      {
        ATerm d_69 = NULL,g_69 = NULL,j_69 = NULL,g_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_152 = ATgetFirst((ATermList) t);
            q_152 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_152);
        d_69 = t;
        t = p_152;
        t = g_118(t);
        g_69 = t;
        t = q_152;
        t = r_152(t);
        j_69 = t;
        t = (ATerm) ATinsert(CheckATermList(j_69), g_69);
        g_22 = t;
        t = SSLsetAnnotations(g_22, d_69);
      }
    return(t);
  }
  t = r_152(t);
  return(t);
}
ATerm Cons_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm t_152 = NULL,u_152 = NULL,v_152 = NULL,w_152 = NULL,x_152 = NULL,y_152 = NULL,r_22 = NULL;
  y_152 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_152 = ATgetFirst((ATermList) t);
      v_152 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_152);
  t_152 = t;
  t = u_152;
  t = l_105(t);
  w_152 = t;
  t = v_152;
  t = m_105(t);
  x_152 = t;
  t = (ATerm) ATinsert(CheckATermList(x_152), w_152);
  r_22 = t;
  t = SSLsetAnnotations(r_22, t_152);
  return(t);
}
static ATerm n_13 (ATerm n_32, ATerm o_32, ATerm t)
{
  ATerm z_152 = NULL;
  t = SSL_fputc(n_32, o_32);
  z_152 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_152);
  return(t);
}
static ATerm o_13 (ATerm b_38, ATerm e_38, ATerm t)
{
  ATerm a_153 = NULL;
  t = SSL_write_term_to_stream_text(b_38, e_38);
  a_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_153);
  return(t);
}
static ATerm q_13 (ATerm o_116 (ATerm), ATerm k_321, ATerm k_38, ATerm t)
{
  ATerm b_153 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_321, term_n_54);
  t = w_13(t);
  b_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_153, k_38);
  t = o_116(t);
  t = fclose_0_0(t);
  t = k_38;
  return(t);
}
static ATerm p_13 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm c_153 = NULL;
  t = SSL_write_term_to_stream_baf(v_37, w_37);
  c_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_153);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_54 = ATgetArgument(t, 0);
      if(match_cons(u_54, sym_Stream_1))
        {
          x_69 = ATgetArgument(u_54, 0);
        }
      else
        _fail(t);
      y_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13(x_69, y_69, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm q_70 = NULL,s_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_54 = ATgetArgument(t, 0);
      if(match_cons(v_54, sym_Stream_1))
        {
          v_70 = ATgetArgument(v_54, 0);
        }
      else
        _fail(t);
      w_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_13(v_70, w_70, t);
  q_70 = t;
  t = term_s_23;
  s_70 = t;
  t = q_70;
  if(match_cons(t, sym_Stream_1))
    {
      u_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, q_70);
  t = n_13(s_70, u_70, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_153 = NULL,h_153 = NULL,i_153 = NULL,j_153 = NULL,k_153 = NULL,m_153 = NULL,n_153 = NULL,o_153 = NULL,p_153 = NULL,q_153 = NULL,q_154 = NULL,r_154 = NULL,l_23 = NULL,k_23 = NULL;
  h_153 = t;
  if(match_cons(t, sym__2))
    {
      o_153 = ATgetArgument(t, 0);
      p_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_153);
  n_153 = t;
  t = o_153;
  {
    ATerm b_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_16 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((g_153 != NULL) && (g_153 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_153 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_16, t);
        LocalPopChoice(c_55);
      }
    else
      {
        t = b_55;
        t = term_e_55;
        g_153 = t;
      }
  }
  q_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_153, p_153);
  k_23 = t;
  t = SSLsetAnnotations(k_23, n_153);
  t = h_153;
  if(match_cons(t, sym__2))
    {
      j_153 = ATgetArgument(t, 0);
      k_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_153);
  i_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_153, (ATerm) ATmakeAppl(sym__2, not_null(g_153), k_153));
  l_23 = t;
  t = SSLsetAnnotations(l_23, i_153);
  m_153 = t;
  if(match_cons(t, sym__2))
    {
      q_154 = ATgetArgument(t, 0);
      r_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,o_23 = NULL;
        t = SSLgetAnnotations(m_153);
        q_69 = t;
        t = q_154;
        t = fetch_1_0(b_17, t);
        t_69 = t;
        t = r_154;
        if(match_cons(t, sym__2))
          {
            v_69 = ATgetArgument(t, 0);
            w_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_13(d_17, v_69, w_69, t);
        u_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_69, u_69);
        o_23 = t;
        t = SSLsetAnnotations(o_23, q_69);
        LocalPopChoice(h_55);
      }
    else
      {
        t = f_55;
        {
          ATerm g_70 = NULL,k_70 = NULL,o_70 = NULL,p_70 = NULL,p_23 = NULL;
          t = SSLgetAnnotations(m_153);
          g_70 = t;
          t = r_154;
          if(match_cons(t, sym__2))
            {
              o_70 = ATgetArgument(t, 0);
              p_70 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_13(g_17, o_70, p_70, t);
          k_70 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_154, k_70);
          p_23 = t;
          t = SSLsetAnnotations(p_23, g_70);
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
ATerm apply_strategy_1_0 (ATerm l_131 (ATerm), ATerm t)
{
  ATerm u_154 = NULL,v_154 = NULL,w_154 = NULL,x_154 = NULL,y_154 = NULL;
  y_154 = t;
  t = dtime_0_0(t);
  t = y_154;
  t = l_131(t);
  x_154 = t;
  t = dtime_0_0(t);
  u_154 = t;
  t = x_154;
  if(match_cons(t, sym__2))
    {
      v_154 = ATgetArgument(t, 0);
      w_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_154), (ATerm) ATmakeAppl(sym_Runtime_1, u_154)), w_154);
  return(t);
}
static ATerm m_155 (ATerm g_155, ATerm t)
{
  t = SSL_fclose(g_155);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_155 = NULL,k_155 = NULL;
  k_155 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_155 = ATgetArgument(t, 0);
      {
        ATerm i_55 = t;
        int j_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_155);
            LocalPopChoice(j_55);
          }
        else
          {
            t = i_55;
            t = m_155(k_155, t);
          }
      }
    }
  else
    {
      t = m_155(k_155, t);
    }
  return(t);
}
static ATerm s_13 (ATerm f_38, ATerm t)
{
  t = SSL_read_term_from_stream(f_38);
  return(t);
}
static ATerm t_13 (ATerm g_31, ATerm h_31, ATerm t)
{
  t = SSL_strcat(g_31, h_31);
  return(t);
}
static ATerm v_13 (ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm n_155 = NULL;
  t = SSL_fopen(p_32, q_32);
  n_155 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_155);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_155 = NULL;
  t = SSL_stdin_stream();
  o_155 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_155);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_155 = NULL;
  t = SSL_stdout_stream();
  p_155 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_155);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_155 = NULL;
  t = SSL_stderr_stream();
  q_155 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_155);
  return(t);
}
static ATerm x_156 (ATerm w_155, ATerm t)
{
  ATerm x_155 = NULL;
  t = SSL_explode_term(w_155);
  if(match_cons(t, sym__2))
    {
      ATerm k_55 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_55) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_55 = ATgetArgument(t, 1);
        if(((ATgetType(l_55) == AT_LIST) && !(ATisEmpty(l_55))))
          {
            x_155 = ATgetFirst((ATermList) l_55);
            {
              ATerm m_55 = (ATerm) ATgetNext((ATermList) l_55);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_155;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_155;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_155;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_155;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_156 (ATerm a_156, ATerm b_156, ATerm c_156, ATerm t)
{
  ATerm d_156 = NULL,e_156 = NULL,f_156 = NULL,i_156 = NULL,a_24 = NULL;
  t = SSLgetAnnotations(c_156);
  f_156 = t;
  t = a_156;
  if(match_cons(t, sym_Path_1))
    {
      i_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_156, b_156);
  a_24 = t;
  t = SSLsetAnnotations(a_24, f_156);
  if(match_cons(t, sym__2))
    {
      d_156 = ATgetArgument(t, 0);
      e_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(d_156, e_156, t);
  return(t);
}
static ATerm z_156 (ATerm k_156, ATerm l_156, ATerm m_156, ATerm t)
{
  ATerm n_156 = NULL,o_156 = NULL,p_156 = NULL,s_156 = NULL,e_24 = NULL;
  t = SSLgetAnnotations(m_156);
  p_156 = t;
  t = SSL_is_string(k_156);
  s_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_156, l_156);
  e_24 = t;
  t = SSLsetAnnotations(e_24, p_156);
  if(match_cons(t, sym__2))
    {
      n_156 = ATgetArgument(t, 0);
      o_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13(n_156, o_156, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm u_156 = NULL,v_156 = NULL,w_156 = NULL;
  u_156 = t;
  if(match_cons(t, sym__2))
    {
      v_156 = ATgetArgument(t, 0);
      w_156 = ATgetArgument(t, 1);
      {
        ATerm n_55 = t;
        int o_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_156(u_156, t);
            LocalPopChoice(o_55);
          }
        else
          {
            t = n_55;
            {
              ATerm p_55 = t;
              int q_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_156(v_156, w_156, u_156, t);
                  LocalPopChoice(q_55);
                }
              else
                {
                  t = p_55;
                  t = z_156(v_156, w_156, u_156, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_156(u_156, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_157 = NULL,c_157 = NULL,d_157 = NULL,i_157 = NULL;
  i_157 = t;
  {
    ATerm r_55 = t;
    int s_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_157, term_u_55);
        t = w_13(t);
        LocalPopChoice(s_55);
      }
    else
      {
        t = r_55;
        {
          ATerm v_71 = NULL,w_71 = NULL;
          t = term_v_55;
          w_71 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_55, i_157);
          t = t_13(w_71, i_157, t);
          v_71 = t;
          t = SSL_perror(v_71);
          _fail(t);
        }
      }
  }
  c_157 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_13(d_157, t);
  b_157 = t;
  t = c_157;
  t = fclose_0_0(t);
  t = b_157;
  return(t);
}
ATerm fetch_1_0 (ATerm q_118 (ATerm), ATerm t)
{
  static ATerm h_158 (ATerm t)
  {
    ATerm e_158 = NULL,f_158 = NULL,g_158 = NULL;
    e_158 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_158 = ATgetFirst((ATermList) t);
        g_158 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_55 = t;
      int y_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_72 = NULL,e_72 = NULL,k_24 = NULL;
          t = SSLgetAnnotations(e_158);
          b_72 = t;
          t = f_158;
          t = q_118(t);
          e_72 = t;
          t = (ATerm) ATinsert(CheckATermList(g_158), e_72);
          k_24 = t;
          t = SSLsetAnnotations(k_24, b_72);
          LocalPopChoice(y_55);
        }
      else
        {
          t = x_55;
          {
            ATerm n_72 = NULL,q_72 = NULL,p_24 = NULL;
            t = SSLgetAnnotations(e_158);
            n_72 = t;
            t = g_158;
            t = h_158(t);
            q_72 = t;
            t = (ATerm) ATinsert(CheckATermList(q_72), f_158);
            p_24 = t;
            t = SSLsetAnnotations(p_24, n_72);
          }
        }
    }
    return(t);
  }
  t = h_158(t);
  return(t);
}
static ATerm b_14 (ATerm h_44, ATerm i_44, ATerm t)
{
  ATerm k_158 = NULL;
  t = lookup_table_0_1(h_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(i_44, k_158, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm n_158 = NULL;
  n_158 = t;
  if(match_string(t, "-k"))
    {
      t = n_158;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_158;
    }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm o_158 = NULL,p_158 = NULL,q_158 = NULL;
  o_158 = t;
  t = SSL_string_to_int(o_158);
  p_158 = t;
  t = term_z_55;
  q_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_55, p_158);
  t = e_14(q_158, p_158, t);
  t = o_158;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_a_56;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_17, l_17, m_17, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm s_158 = NULL;
  s_158 = t;
  if(match_string(t, "-S"))
    {
      t = s_158;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_158;
    }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm t_158 = NULL,u_158 = NULL;
  t = term_u_21;
  t_158 = t;
  t = term_c_56;
  u_158 = t;
  t = term_d_56;
  t = e_14(t_158, u_158, t);
  t = term_e_56;
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_f_56;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm v_158 = NULL,w_158 = NULL,x_158 = NULL;
  v_158 = t;
  t = SSL_string_to_int(v_158);
  w_158 = t;
  t = term_u_21;
  x_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_21, w_158);
  t = e_14(x_158, w_158, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_158);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_g_56;
  return(t);
}
static ATerm l_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm y_158 = NULL,z_158 = NULL;
  t = term_i_56;
  y_158 = t;
  t = term_j_21;
  z_158 = t;
  t = term_j_56;
  t = e_14(y_158, z_158, t);
  t = term_k_56;
  return(t);
}
static ATerm o_18 (ATerm t)
{
  t = term_l_56;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_17, o_17, t_17, t);
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      {
        ATerm s_56 = t;
        int v_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_17, v_17, w_17, t);
            LocalPopChoice(v_56);
          }
        else
          {
            t = s_56;
            t = Option_3_0(l_18, m_18, o_18, t);
          }
      }
    }
  return(t);
}
static ATerm e_14 (ATerm k_66, ATerm l_66, ATerm t)
{
  ATerm a_159 = NULL,b_159 = NULL;
  t = term_s_21;
  a_159 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_21, k_66, l_66);
  t = lookup_table_0_1(a_159, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(k_66, l_66, b_159, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_21, k_66, l_66);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm f_159 = NULL,g_159 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_159 = NULL,i_159 = NULL,j_159 = NULL;
      t = term_j_21;
      t = e_0(t);
      h_159 = t;
      t = term_z_56;
      i_159 = t;
      t = term_b_57;
      j_159 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_56, term_b_57, h_159);
      t = c_14(i_159, j_159, h_159, t);
      _fail(t);
    }
  else
    {
      ATerm m_159 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_159 = ATgetFirst((ATermList) t);
          g_159 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_159;
      t = c_0(t);
      t = term_j_21;
      t = d_0(t);
      m_159 = t;
      t = (ATerm) ATinsert(CheckATermList(g_159), m_159);
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm o_159 = NULL;
  o_159 = t;
  if(match_string(t, "-o"))
    {
      t = o_159;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_159;
    }
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm p_159 = NULL,q_159 = NULL;
  p_159 = t;
  t = term_d_57;
  q_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_57, p_159);
  t = e_14(q_159, p_159, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_159);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  t = term_e_57;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_18, r_18, s_18, t);
  return(t);
}
static ATerm c_14 (ATerm o_42, ATerm p_42, ATerm n_42, ATerm t)
{
  ATerm s_159 = NULL,t_159 = NULL,u_159 = NULL,v_159 = NULL,w_159 = NULL;
  s_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_42, p_42);
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_57 = ATgetArgument(t, 0);
            ATerm j_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_42, p_42);
        t = b_14(o_42, p_42, t);
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        t = (ATerm) ATempty;
      }
  }
  t_159 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_42, p_42, (ATerm) ATinsert(CheckATermList(t_159), n_42));
  t = lookup_table_0_1(o_42, t);
  w_159 = t;
  t = (ATerm) ATinsert(CheckATermList(t_159), n_42);
  u_159 = t;
  t = w_159;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(p_42, u_159, v_159, t);
  t = s_159;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_160 = NULL,e_160 = NULL,f_160 = NULL,g_160 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_160 = NULL,i_160 = NULL,j_160 = NULL;
      t = term_j_21;
      t = n_0(t);
      h_160 = t;
      t = term_z_56;
      i_160 = t;
      t = term_b_57;
      j_160 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_56, term_b_57, h_160);
      t = c_14(i_160, j_160, h_160, t);
      _fail(t);
    }
  else
    {
      ATerm n_160 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_160 = ATgetFirst((ATermList) t);
          e_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_160;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_160 = ATgetFirst((ATermList) t);
          g_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_160;
      t = k_0(t);
      t = f_160;
      t = l_0(t);
      n_160 = t;
      t = (ATerm) ATinsert(CheckATermList(g_160), n_160);
    }
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm p_160 = NULL;
  p_160 = t;
  if(match_string(t, "-i"))
    {
      t = p_160;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_160;
    }
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm q_160 = NULL,r_160 = NULL;
  q_160 = t;
  t = term_k_57;
  r_160 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_57, q_160);
  t = e_14(r_160, q_160, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_160);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_m_57;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_18, u_18, v_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_160 = NULL,t_160 = NULL,u_160 = NULL,v_160 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_21;
  t = whoami_0_0(t);
  s_160 = t;
  t = term_l_21;
  u_160 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_57), s_160);
  v_160 = t;
  t = SSL_printnl(u_160, v_160);
  t = term_o_21;
  t_160 = t;
  t = SSL_exit(t_160);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_160 = NULL,x_160 = NULL;
  t = term_s_21;
  w_160 = t;
  t = term_o_57;
  x_160 = t;
  t = term_r_57;
  t = b_14(w_160, x_160, t);
  return(t);
}
static ATerm x_13 (ATerm t_39, ATerm v_39, ATerm t)
{
  ATerm s_57 = t;
  int t_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_39, v_39);
      LocalPopChoice(t_57);
    }
  else
    {
      t = s_57;
      t = SSL_addr(t_39, v_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm t)
{
  ATerm z_160 = NULL,a_161 = NULL,b_161 = NULL;
  z_160 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_160;
      t = m_125(t);
    }
  else
    {
      ATerm e_161 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_161 = ATgetFirst((ATermList) t);
          b_161 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_161;
      t = foldr_2_0(m_125, n_125, t);
      e_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_161, e_161);
      t = n_125(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_18 (ATerm t)
{
  t = term_c_56;
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  if(match_cons(t, sym__2))
    {
      z_72 = ATgetArgument(t, 0);
      a_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13(z_72, a_73, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_161 = NULL,v_72 = NULL,w_72 = NULL;
  t = times_0_0(t);
  w_72 = t;
  t = SSL_explode_term(w_72);
  if(match_cons(t, sym__2))
    {
      ATerm u_57 = ATgetArgument(t, 0);
      v_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_72;
  t = foldr_2_0(y_18, a_19, t);
  h_161 = t;
  t = SSL_TicksToSeconds(h_161);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_161 = NULL,t_161 = NULL,u_161 = NULL;
  s_161 = t;
  if(match_cons(t, sym__2))
    {
      t_161 = ATgetArgument(t, 0);
      u_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_57 = t;
    int w_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_161;
        if((t_161 != t))
          {
            _fail(t);
          }
        t = s_161;
        LocalPopChoice(w_57);
      }
    else
      {
        t = v_57;
        t = (ATerm) ATmakeAppl(sym__2, t_161, u_161);
        {
          ATerm x_57 = t;
          int y_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_161, u_161);
              LocalPopChoice(y_57);
            }
          else
            {
              t = x_57;
              t = SSL_gtr(t_161, u_161);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_161, u_161);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_141 (ATerm), ATerm t)
{
  ATerm y_161 = NULL;
  y_161 = t;
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_162 = NULL,b_162 = NULL,c_162 = NULL;
        t = term_s_21;
        b_162 = t;
        t = term_u_21;
        c_162 = t;
        t = term_v_21;
        t = b_14(b_162, c_162, t);
        a_162 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_162, term_o_21);
        t = geq_0_0(t);
        t = y_161;
        t = a_141(t);
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        t = y_161;
      }
  }
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm e_162 = NULL,f_162 = NULL,h_162 = NULL,i_162 = NULL;
  t = run_time_0_0(t);
  e_162 = t;
  t = term_j_21;
  t = whoami_0_0(t);
  f_162 = t;
  t = term_l_21;
  h_162 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_58), e_162), term_b_58), f_162);
  i_162 = t;
  t = SSL_printnl(h_162, i_162);
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_58), e_162), term_b_58), f_162));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_162 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_56;
  j_162 = t;
  t = SSL_exit(j_162);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm t_162 = NULL,u_162 = NULL;
  u_162 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_162;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_162 = ATgetArgument(t, 0);
          {
            ATerm v_73 = NULL,s_24 = NULL;
            t = SSLgetAnnotations(u_162);
            v_73 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_162);
            s_24 = t;
            t = SSLsetAnnotations(s_24, v_73);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_162;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_132 (ATerm), ATerm t)
{
  ATerm d_58 = t;
  int e_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_162 = NULL,n_162 = NULL;
      t = term_s_21;
      m_162 = t;
      t = term_f_58;
      n_162 = t;
      t = term_g_58;
      t = b_14(m_162, n_162, t);
      LocalPopChoice(e_58);
    }
  else
    {
      t = d_58;
      t = fetch_1_0(j_19, t);
    }
  t = j_132(t);
  return(t);
}
static ATerm f_14 (ATerm v_45, ATerm w_45, ATerm x_45, ATerm t)
{
  ATerm w_162 = NULL;
  t = SSL_hashtable_put(x_45, v_45, w_45);
  w_162 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_162);
  return(t);
}
static ATerm g_14 (ATerm y_45, ATerm z_45, ATerm t)
{
  t = SSL_hashtable_get(z_45, y_45);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_44, ATerm t)
{
  ATerm f_163 = NULL;
  t = table_hashtable_0_0(t);
  f_163 = t;
  {
    ATerm h_58 = t;
    int i_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_74 = NULL;
        t = f_163;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_14(a_44, i_74, t);
        LocalPopChoice(i_58);
      }
    else
      {
        t = h_58;
        {
          ATerm n_74 = NULL;
          t = a_44;
          t = table_create_0_0(t);
          t = f_163;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_14(a_44, n_74, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm d_46, ATerm e_46, ATerm t)
{
  ATerm i_163 = NULL;
  t = SSL_hashtable_create(d_46, e_46);
  i_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_163);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_163 = NULL,k_163 = NULL,l_163 = NULL,n_163 = NULL,o_163 = NULL;
  j_163 = t;
  t = term_j_58;
  n_163 = t;
  t = term_k_58;
  o_163 = t;
  t = j_163;
  t = new_hashtable_0_2(n_163, o_163, t);
  k_163 = t;
  t = j_163;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(j_163, k_163, l_163, t);
  t = j_163;
  return(t);
}
static ATerm z_13 (ATerm a_46, ATerm b_46, ATerm t)
{
  ATerm p_163 = NULL;
  t = SSL_hashtable_remove(b_46, a_46);
  p_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_163);
  return(t);
}
static ATerm a_14 (ATerm f_46, ATerm t)
{
  ATerm q_163 = NULL;
  t = SSL_hashtable_destroy(f_46);
  q_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_163);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_163 = NULL;
  t = SSL_table_hashtable();
  r_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_163);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_163 = NULL,t_163 = NULL,u_163 = NULL,v_163 = NULL;
  s_163 = t;
  t = table_hashtable_0_0(t);
  t_163 = t;
  t = lookup_table_0_1(s_163, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_14(v_163, t);
  t = t_163;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_13(s_163, u_163, t);
  t = s_163;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm x_163 = NULL,y_163 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_163 = ATgetFirst((ATermList) t);
      y_163 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_164 = NULL,d_164 = NULL;
        static ATerm l_19 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_164)), not_null(d_164));
          return(t);
        }
        t = y_163;
        t = i_0(t);
        if(((c_164 != NULL) && (c_164 != t)))
          _fail(t);
        else
          c_164 = t;
        t = x_163;
        t = g_0(t);
        if(((d_164 != NULL) && (d_164 != t)))
          _fail(t);
        else
          d_164 = t;
        t = y_163;
        t = reverse_acc_2_0(g_0, l_19, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_21;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm j_164 = NULL,k_164 = NULL,l_164 = NULL,z_24 = NULL;
  l_164 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_164);
  j_164 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_164);
  z_24 = t;
  t = SSLsetAnnotations(z_24, j_164);
  return(t);
}
static ATerm n_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_19 (ATerm t)
{
  ATerm n_164 = NULL;
  n_164 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_164), term_l_58);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_164 = NULL,g_164 = NULL;
  ATerm m_58 = t;
  int n_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_164 = NULL,i_164 = NULL;
      t = term_s_21;
      h_164 = t;
      t = term_o_57;
      i_164 = t;
      t = term_r_57;
      t = b_14(h_164, i_164, t);
      LocalPopChoice(n_58);
    }
  else
    {
      t = m_58;
      t = fetch_1_0(m_19, t);
    }
  t = term_p_58;
  t = echo_0_0(t);
  t = term_z_56;
  f_164 = t;
  t = term_b_57;
  g_164 = t;
  t = term_r_58;
  t = b_14(f_164, g_164, t);
  t = reverse_acc_2_0(_id, n_19, t);
  t = map_1_0(o_19, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_164 = NULL,q_164 = NULL,r_164 = NULL;
  p_164 = t;
  {
    ATerm s_58 = t;
    int u_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_164;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_58 = ATgetFirst((ATermList) t);
                ATerm z_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_164;
          }
        LocalPopChoice(u_58);
      }
    else
      {
        t = s_58;
        t = (ATerm) ATinsert(ATempty, p_164);
      }
  }
  q_164 = t;
  t = term_e_55;
  r_164 = t;
  t = SSL_printnl(r_164, q_164);
  t = p_164;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_164 = NULL,w_164 = NULL;
  t = term_s_21;
  v_164 = t;
  t = term_o_57;
  w_164 = t;
  t = term_r_57;
  t = b_14(v_164, w_164, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_19 (ATerm t)
{
  ATerm x_164 = NULL,y_164 = NULL;
  t = term_e_59;
  x_164 = t;
  t = term_j_21;
  y_164 = t;
  t = term_g_59;
  t = e_14(x_164, y_164, t);
  return(t);
}
static ATerm s_19 (ATerm t)
{
  t = term_k_59;
  return(t);
}
static ATerm t_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm z_164 = NULL,a_165 = NULL,b_165 = NULL,c_165 = NULL;
  t = term_e_59;
  b_165 = t;
  t = term_j_21;
  c_165 = t;
  t = term_g_59;
  t = e_14(b_165, c_165, t);
  t = term_m_59;
  z_164 = t;
  t = term_j_21;
  a_165 = t;
  t = term_o_59;
  t = e_14(z_164, a_165, t);
  t = term_s_59;
  return(t);
}
static ATerm v_19 (ATerm t)
{
  t = term_t_59;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_59 = t;
  int v_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_19, r_19, s_19, t);
      LocalPopChoice(v_59);
    }
  else
    {
      t = u_59;
      t = Option_3_0(t_19, u_19, v_19, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_135 (ATerm), ATerm t)
{
  ATerm h_165 = NULL,i_165 = NULL,j_165 = NULL,k_165 = NULL,m_165 = NULL,n_165 = NULL,d_25 = NULL;
  h_165 = t;
  {
    ATerm w_59 = t;
    int x_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_59;
        t = o_135(t);
        LocalPopChoice(x_59);
      }
    else
      {
        t = w_59;
      }
  }
  t = h_165;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_165 = ATgetFirst((ATermList) t);
      k_165 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_165);
  i_165 = t;
  t = term_o_57;
  n_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_57, j_165);
  t = e_14(n_165, j_165, t);
  t = k_165;
  {
    static ATerm x_165 (ATerm t)
    {
      ATerm z_59 = t;
      int c_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_60 = t;
          int e_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_165 = NULL;
              q_165 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_165;
              LocalPopChoice(e_60);
            }
          else
            {
              t = d_60;
              t = o_135(t);
              t = Cons_2_0(_id, x_165, t);
            }
          LocalPopChoice(c_60);
        }
      else
        {
          t = z_59;
          {
            ATerm t_165 = NULL,u_165 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_165 = ATgetFirst((ATermList) t);
                u_165 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_165), (ATerm) ATmakeAppl(sym_Undefined_1, t_165));
          }
        }
      return(t);
    }
    t = x_165(t);
  }
  m_165 = t;
  t = (ATerm) ATinsert(CheckATermList(m_165), (ATerm) ATmakeAppl(sym_Program_1, j_165));
  d_25 = t;
  t = SSLsetAnnotations(d_25, i_165);
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm k_166 = NULL;
  k_166 = t;
  if(match_string(t, "--help"))
    {
      t = k_166;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_166;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_166;
        }
    }
  return(t);
}
static ATerm z_19 (ATerm t)
{
  ATerm l_166 = NULL,m_166 = NULL;
  t = term_f_58;
  l_166 = t;
  t = term_j_21;
  m_166 = t;
  t = term_f_60;
  t = e_14(l_166, m_166, t);
  t = term_g_60;
  return(t);
}
static ATerm a_20 (ATerm t)
{
  t = term_h_60;
  return(t);
}
static ATerm e_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_135 (ATerm), ATerm t)
{
  ATerm c_166 = NULL,d_166 = NULL,e_166 = NULL,f_166 = NULL,g_166 = NULL,h_166 = NULL,i_166 = NULL,j_166 = NULL;
  e_166 = t;
  t = term_z_56;
  f_166 = t;
  t = term_i_60;
  t = lookup_table_0_1(f_166, t);
  j_166 = t;
  t = term_b_57;
  g_166 = t;
  t = (ATerm) ATempty;
  h_166 = t;
  t = j_166;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(g_166, h_166, i_166, t);
  t = e_166;
  {
    static ATerm x_19 (ATerm t)
    {
      ATerm j_60 = t;
      int k_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_135(t);
          LocalPopChoice(k_60);
        }
      else
        {
          t = j_60;
          {
            ATerm m_60 = t;
            int n_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_19, z_19, a_20, t);
                LocalPopChoice(n_60);
              }
            else
              {
                t = m_60;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_19, t);
  }
  {
    ATerm q_60 = t;
    int r_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_166 = NULL;
        x_166 = t;
        {
          ATerm s_60 = t;
          int t_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_74 = NULL;
              t = x_166;
              {
                ATerm u_60 = t;
                int v_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_74 = NULL,t_74 = NULL;
                    t = term_s_21;
                    s_74 = t;
                    t = term_f_58;
                    t_74 = t;
                    t = term_g_58;
                    t = b_14(s_74, t_74, t);
                    LocalPopChoice(v_60);
                  }
                else
                  {
                    t = u_60;
                    t = fetch_1_0(e_20, t);
                  }
              }
              t = x_166;
              t = default_system_usage_0_0(t);
              t = term_c_56;
              r_74 = t;
              t = SSL_exit(r_74);
              LocalPopChoice(t_60);
            }
          else
            {
              t = s_60;
              {
                ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
                t = term_s_21;
                y_74 = t;
                t = term_e_59;
                z_74 = t;
                t = term_w_60;
                t = b_14(y_74, z_74, t);
                t = x_166;
                t = default_system_about_0_0(t);
                t = term_c_56;
                x_74 = t;
                t = SSL_exit(x_74);
              }
            }
        }
        LocalPopChoice(r_60);
      }
    else
      {
        t = q_60;
        {
          ATerm x_60 = t;
          int y_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_166 = NULL,z_166 = NULL,a_167 = NULL;
              static ATerm f_20 (ATerm t)
              {
                ATerm b_167 = NULL,c_167 = NULL,d_167 = NULL,f_25 = NULL;
                d_167 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_167 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_167);
                b_167 = t;
                t = c_167;
                if(((c_166 != NULL) && (c_166 != t)))
                  _fail(t);
                else
                  c_166 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_167);
                f_25 = t;
                t = SSLsetAnnotations(f_25, b_167);
                return(t);
              }
              t = fetch_1_0(f_20, t);
              t = term_l_21;
              z_166 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_166)), term_z_60);
              a_167 = t;
              t = SSL_printnl(z_166, a_167);
              t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_166)), term_z_60));
              t = default_system_usage_0_0(t);
              t = term_o_21;
              y_166 = t;
              t = SSL_exit(y_166);
              LocalPopChoice(y_60);
            }
          else
            {
              t = x_60;
            }
        }
      }
  }
  d_166 = t;
  t = term_z_56;
  t = table_destroy_0_0(t);
  t = d_166;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm t)
{
  ATerm i_167 = NULL,j_167 = NULL,k_167 = NULL,l_167 = NULL,m_167 = NULL;
  t = parse_options_1_0(l_132, t);
  i_167 = t;
  t = term_b_61;
  t = table_create_0_0(t);
  t = term_b_61;
  j_167 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_61, term_c_61, i_167);
  t = lookup_table_0_1(j_167, t);
  m_167 = t;
  t = term_c_61;
  k_167 = t;
  t = m_167;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(k_167, i_167, l_167, t);
  t = i_167;
  t = n_132(t);
  {
    ATerm d_61 = t;
    int e_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_132, t);
        LocalPopChoice(e_61);
      }
    else
      {
        t = d_61;
        {
          ATerm f_61 = t;
          int l_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_61);
            }
          else
            {
              t = f_61;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm h_20 (ATerm t)
{
  t = if_verbose2_1_0(t_20, t);
  return(t);
}
static ATerm l_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_20 (ATerm t)
{
  ATerm n_167 = NULL,o_167 = NULL;
  t = term_m_61;
  n_167 = t;
  t = term_j_21;
  o_167 = t;
  t = term_n_61;
  t = e_14(n_167, o_167, t);
  t = term_o_61;
  return(t);
}
static ATerm n_20 (ATerm t)
{
  t = term_p_61;
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm p_167 = NULL,q_167 = NULL,r_167 = NULL,s_167 = NULL,t_167 = NULL,u_167 = NULL;
  p_167 = t;
  t = term_s_21;
  t_167 = t;
  t = term_o_57;
  u_167 = t;
  t = term_r_57;
  t = b_14(t_167, u_167, t);
  q_167 = t;
  t = term_l_21;
  r_167 = t;
  t = (ATerm) ATinsert(ATempty, q_167);
  s_167 = t;
  t = SSL_printnl(r_167, s_167);
  t = p_167;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t)
{
  static ATerm g_20 (ATerm t)
  {
    ATerm q_61 = t;
    int r_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_131(t);
        LocalPopChoice(r_61);
      }
    else
      {
        t = q_61;
        {
          ATerm u_61 = t;
          int v_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(v_61);
            }
          else
            {
              t = u_61;
              {
                ATerm w_61 = t;
                int x_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(x_61);
                  }
                else
                  {
                    t = w_61;
                    {
                      ATerm y_61 = t;
                      int z_61 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_20, m_20, n_20, t);
                          LocalPopChoice(z_61);
                        }
                      else
                        {
                          t = y_61;
                          {
                            ATerm b_62 = t;
                            int c_62 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(c_62);
                              }
                            else
                              {
                                t = b_62;
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
  static ATerm k_20 (ATerm t)
  {
    ATerm v_167 = NULL,w_167 = NULL,x_167 = NULL;
    w_167 = t;
    {
      ATerm d_62 = t;
      int e_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm u_20 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_167 != NULL) && (v_167 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_167 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_20, t);
          LocalPopChoice(e_62);
        }
      else
        {
          t = d_62;
          t = term_h_62;
          v_167 = t;
        }
    }
    t = not_null(v_167);
    t = ReadFromFile_0_0(t);
    x_167 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_167, x_167);
    t = apply_strategy_1_0(u_131, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_20, w_131, h_20, k_20, t);
  return(t);
}
static ATerm w_20 (ATerm t)
{
  ATerm a_168 = NULL,b_168 = NULL,c_168 = NULL,d_168 = NULL,e_168 = NULL,t_25 = NULL;
  e_168 = t;
  if(match_cons(t, sym__2))
    {
      b_168 = ATgetArgument(t, 0);
      c_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_168);
  a_168 = t;
  t = c_168;
  {
    ATerm i_62 = t;
    int p_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_169 = NULL,c_75 = NULL,h_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,s_25 = NULL,r_25 = NULL,p_25 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            a_169 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_168);
        c_75 = t;
        t = a_169;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_75 = ATgetFirst((ATermList) t);
            l_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_169);
        h_75 = t;
        t = k_75;
        if(match_cons(t, sym_Signature_1))
          {
            v_75 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_75);
        u_75 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, v_75);
        p_25 = t;
        t = SSLsetAnnotations(p_25, u_75);
        w_75 = t;
        t = l_75;
        t = Cons_2_0(x_20, y_20, t);
        m_75 = t;
        t = (ATerm) ATinsert(CheckATermList(m_75), w_75);
        r_25 = t;
        t = SSLsetAnnotations(r_25, h_75);
        n_75 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, n_75);
        s_25 = t;
        t = SSLsetAnnotations(s_25, c_75);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(h_21, t);
        LocalPopChoice(p_62);
      }
    else
      {
        t = i_62;
        t = if_verbose2_1_0(i_21, t);
      }
  }
  d_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_168, d_168);
  t_25 = t;
  t = SSLsetAnnotations(t_25, a_168);
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,q_25 = NULL;
  a_76 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_76);
  x_75 = t;
  t = y_75;
  t = map_1_0(z_20, t);
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_75);
  q_25 = t;
  t = SSLsetAnnotations(q_25, x_75);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      b_76 = ATgetArgument(t, 0);
      c_76 = ATgetArgument(t, 1);
      d_76 = ATgetArgument(t, 2);
      e_76 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_13(b_76, c_76, d_76, e_76, t);
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm f_76 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm q_62 = ATgetArgument(t, 0);
      if(match_cons(q_62, sym_SVar_1))
        {
          ATerm v_62 = ATgetArgument(q_62, 0);
          if((ATgetSymbol((ATermAppl) v_62) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm r_62 = ATgetArgument(t, 1);
        if(((ATgetType(r_62) == AT_LIST) && !(ATisEmpty(r_62))))
          {
            f_76 = ATgetFirst((ATermList) r_62);
            {
              ATerm w_62 = (ATerm) ATgetNext((ATermList) r_62);
              if(((ATgetType(w_62) != AT_LIST) || !(ATisEmpty(w_62))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm u_62 = ATgetArgument(t, 2);
        if(((ATgetType(u_62) != AT_LIST) || !(ATisEmpty(u_62))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_11(f_76, t);
  return(t);
}
static ATerm i_21 (ATerm t)
{
  ATerm b_169 = NULL,c_169 = NULL,d_169 = NULL;
  b_169 = t;
  t = term_l_21;
  c_169 = t;
  t = (ATerm) ATinsert(ATempty, term_x_62);
  d_169 = t;
  t = SSL_printnl(c_169, d_169);
  t = b_169;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_20, _fail, default_usage_0_0, t);
  return(t);
}

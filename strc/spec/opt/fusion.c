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
ATerm term_x_61;
ATerm term_k_61;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_l_60;
ATerm term_i_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_w_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_z_58;
ATerm term_l_58;
ATerm term_i_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_d_58;
ATerm term_c_58;
ATerm term_u_57;
ATerm term_r_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_l_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_w_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_j_54;
ATerm term_e_54;
ATerm term_c_54;
ATerm term_w_53;
ATerm term_s_53;
ATerm term_n_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_e_53;
ATerm term_n_39;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_y_36;
ATerm term_w_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_r_31;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_s_29;
ATerm term_j_26;
ATerm term_e_26;
ATerm term_u_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_n_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_q_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Op_2, term_e_22, (ATerm) ATempty);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_22);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Call_2, term_g_23, (ATerm) ATempty);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Call_2, term_o_24, (ATerm) ATempty);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Call_2, term_c_22, (ATerm) ATempty);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_29);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_CallT_3, term_w_29, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_29, term_a_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_29, term_b_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_29, term_j_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_l_30, term_k_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_30);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_32);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_29, term_a_30);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_29, term_m_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_n_33);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_35);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_36);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_37);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_53);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_h_55);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_55);
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(sym__2, term_n_55, term_f_21);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_l_56);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_l_57);
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym__2, term_w_55, term_y_55);
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_f_21);
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(sym__2, term_g_58, term_f_21);
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(sym__2, term_l_57, term_f_21);
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_c_58);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym__2, term_i_60, term_f_21);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm s_139 (ATerm), ATerm t);
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
ATerm pat_td_1_0 (ATerm h_138 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm y_8 (ATerm k_76, ATerm l_76, ATerm m_76, ATerm t);
static ATerm k_19 (ATerm q_18, ATerm t);
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
static ATerm c_9 (ATerm x_71, ATerm y_71, ATerm z_71, ATerm t);
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
static ATerm a_41 (ATerm e_40, ATerm f_40, ATerm t);
static ATerm b_41 (ATerm i_40, ATerm j_40, ATerm t);
ATerm Replace_0_0 (ATerm t);
static ATerm l_10 (ATerm t_42, ATerm u_42, ATerm t);
ATerm end_scope_1_0 (ATerm n_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_115 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm m_10 (ATerm x_24, ATerm w_24, ATerm y_24, ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t);
ATerm fuse_with_bottomup_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm n_106 (ATerm), ATerm t);
ATerm propagate_mark_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t);
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
static ATerm t_10 (ATerm h_23, ATerm t);
ATerm alltd_1_0 (ATerm e_108 (ATerm), ATerm t);
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
ATerm debug_1_0 (ATerm d_115 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm v_10 (ATerm k_60, ATerm j_60, ATerm t);
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
ATerm oncetd_1_0 (ATerm q_107 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm o_106 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm spaste_1_0 (ATerm f_139 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm i_139 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_12 (ATerm y_78, ATerm x_78, ATerm t);
ATerm SVar_1_0 (ATerm q_89 (ATerm), ATerm t);
static ATerm q_12 (ATerm k_135 (ATerm), ATerm l_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_69, ATerm d_69, ATerm c_69, ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm r_12 (ATerm e_135 (ATerm), ATerm f_135 (ATerm (ATerm), ATerm), ATerm w_68, ATerm z_68, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm u_127 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm z_134 (ATerm (ATerm), ATerm), ATerm a_135 (ATerm), ATerm b_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_135 (ATerm (ATerm), ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm tpaste_1_0 (ATerm b_139 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm e_139 (ATerm), ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm k_12 (ATerm i_121 (ATerm), ATerm k_51, ATerm j_51, ATerm t);
ATerm foldr_3_0 (ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm h_124 (ATerm), ATerm t);
static ATerm l_12 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm o_51, ATerm n_51, ATerm t);
static ATerm m_12 (ATerm d_121 (ATerm), ATerm i_51, ATerm h_51, ATerm t);
ATerm at_end_1_0 (ATerm o_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm a_140 (ATerm q_139, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm o_12 (ATerm w_693, ATerm b_694, ATerm x_70, ATerm t);
ATerm while_not_2_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t);
ATerm for_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t);
static ATerm f_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm g_142 (ATerm a_141, ATerm b_141, ATerm c_141, ATerm t);
static ATerm s_13 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm free_vars_3_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm r_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm l_15 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm f_86 (ATerm), ATerm t);
static ATerm n_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm x_12 (ATerm z_42, ATerm a_43, ATerm t);
static ATerm c_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm q_16 (ATerm t);
ATerm InlineStrat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
ATerm check_that_try_is_try_0_0 (ATerm t);
ATerm check_library_definitions_0_0 (ATerm t);
static ATerm y_12 (ATerm q_115 (ATerm), ATerm k_41, ATerm i_41, ATerm t);
static ATerm x_16 (ATerm t);
static ATerm z_12 (ATerm j_22, ATerm k_22, ATerm m_22, ATerm l_22, ATerm t);
ATerm map_1_0 (ATerm x_116 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t);
static ATerm b_13 (ATerm n_32, ATerm o_32, ATerm t);
static ATerm c_13 (ATerm d_38, ATerm e_38, ATerm t);
static ATerm e_13 (ATerm f_115 (ATerm), ATerm b_320, ATerm l_38, ATerm t);
static ATerm d_13 (ATerm x_37, ATerm y_37, ATerm t);
static ATerm d_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm c_130 (ATerm), ATerm t);
static ATerm c_153 (ATerm w_152, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_13 (ATerm g_38, ATerm t);
static ATerm h_13 (ATerm g_31, ATerm h_31, ATerm t);
static ATerm j_13 (ATerm p_32, ATerm q_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_154 (ATerm m_153, ATerm t);
static ATerm o_154 (ATerm q_153, ATerm r_153, ATerm s_153, ATerm t);
static ATerm p_154 (ATerm a_154, ATerm b_154, ATerm c_154, ATerm t);
static ATerm k_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_117 (ATerm), ATerm t);
static ATerm n_13 (ATerm f_44, ATerm g_44, ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm n_18 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_13 (ATerm b_65, ATerm c_65, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_13 (ATerm o_42, ATerm p_42, ATerm n_42, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_13 (ATerm u_39, ATerm v_39, ATerm t);
ATerm foldr_2_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_139 (ATerm), ATerm t);
static ATerm b_19 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm f_19 (ATerm t);
ATerm need_help_1_0 (ATerm a_131 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm l_19 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm m_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm p_19 (ATerm t);
static ATerm q_19 (ATerm t);
static ATerm r_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm f_134 (ATerm), ATerm t);
static ATerm x_19 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm b_20 (ATerm t);
ATerm parse_options_1_0 (ATerm e_134 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t);
static ATerm f_20 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm q_20 (ATerm t);
ATerm iowrap_3_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm t);
static ATerm t_20 (ATerm t);
static ATerm y_20 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm c_21 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm e_21 (ATerm t);
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
  t = term_f_21;
  t = whoami_0_0(t);
  p_0 = t;
  t = term_g_21;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_21), p_0), term_h_21);
  u_0 = t;
  t = SSL_printnl(t_0, u_0);
  t = term_k_21;
  r_0 = t;
  t = SSL_exit(r_0);
  t = a_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_139 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm m_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
        t = term_p_21;
        c_1 = t;
        t = term_q_21;
        d_1 = t;
        t = term_t_21;
        t = n_13(c_1, d_1, t);
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_1, term_u_21);
        t = geq_0_0(t);
        t = x_0;
        t = s_139(t);
        LocalPopChoice(o_21);
      }
    else
      {
        t = m_21;
        t = x_0;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm x_1, ATerm y_1, ATerm t)
{
  t = x_1;
  {
    ATerm y_21 = t;
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
        t = y_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_21, x_1);
  return(t);
}
static ATerm t_6 (ATerm f_2, ATerm g_2, ATerm t)
{
  t = f_2;
  {
    ATerm a_22 = t;
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
        t = a_22;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_22, f_2);
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
              ATerm r_22 = (ATerm) ATgetNext((ATermList) p_22);
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
      ATerm s_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_22 = ATgetArgument(t, 1);
        if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
          {
            ATerm u_22 = ATgetFirst((ATermList) t_22);
            ATerm x_22 = (ATerm) ATgetNext((ATermList) t_22);
            if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
              {
                v_0 = ATgetFirst((ATermList) x_22);
                {
                  ATerm z_22 = (ATerm) ATgetNext((ATermList) x_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, v_0), d_3));
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, v_3), u_3));
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, y_3), x_3));
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_23, (ATerm) ATinsert(ATinsert(ATempty, k_4), j_4));
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_23, (ATerm) ATinsert(ATinsert(ATempty, n_4), m_4));
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
                  int k_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_m_23;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_o_23;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_p_23;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_q_23;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_r_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(k_23);
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
                                        ATerm x_23 = ATgetFirst((ATermList) w_23);
                                        if(((ATgetType(x_23) != AT_INT) || (ATgetInt((ATermInt) x_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm y_23 = (ATerm) ATgetNext((ATermList) w_23);
                                          if(((ATgetType(y_23) != AT_LIST) || !(ATisEmpty(y_23))))
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
              ATerm z_23 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      w_2 = ATgetArgument(t, 0);
                      {
                        ATerm c_24 = ATgetArgument(t, 1);
                      }
                      t_2 = ATgetArgument(t, 2);
                      p_2 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_24);
                  t = (ATerm) ATmakeAppl(sym_Con_3, w_2, t_2, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_2), (ATerm) ATempty));
                }
              else
                {
                  t = z_23;
                  {
                    ATerm e_24 = t;
                    int h_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            w_2 = ATgetArgument(t, 0);
                            {
                              ATerm i_24 = ATgetArgument(t, 1);
                            }
                            t_2 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_24);
                        t = (ATerm) ATmakeAppl(sym_Con_3, w_2, t_2, term_q_24);
                      }
                    else
                      {
                        t = e_24;
                        if(match_cons(t, sym_Con1_2))
                          {
                            w_2 = ATgetArgument(t, 0);
                            x_2 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, w_2, x_2, term_q_24);
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
                                                ATerm r_24 = t;
                                                int v_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = s_6(w_2, v_2, t);
                                                    LocalPopChoice(v_24);
                                                  }
                                                else
                                                  {
                                                    t = r_24;
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
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_c_22, (ATerm) ATinsert(CheckATermList(x_2), w_2));
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
                                                                                        int c_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = t_6(w_2, v_2, t);
                                                                                            LocalPopChoice(c_25);
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
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_i_25, (ATerm) ATinsert(ATinsert(ATempty, s_2), w_2));
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
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, w_2, x_2, term_j_25);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    w_2 = ATgetArgument(t, 0);
                                                                                                    x_2 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, w_2, x_2, term_j_25);
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
                                                                                                                                                ATerm k_25 = ATgetArgument(t, 0);
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_7), g_7), e_7), c_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, c_7), (ATerm) ATmakeAppl(sym_Var_1, g_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, y_6, (ATerm)ATmakeAppl(sym_Var_1, c_7), (ATerm) ATmakeAppl(sym_Var_1, e_7)), (ATerm) ATmakeAppl(sym_BAM_3, v_6, (ATerm)ATmakeAppl(sym_Var_1, g_7), (ATerm) ATmakeAppl(sym_Var_1, h_7)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_7)), (ATerm) ATmakeAppl(sym_Var_1, e_7))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_7)), not_null(i_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_7)), (ATerm) ATmakeAppl(sym_Build_1, n_7))));
          }
        }
      else
        {
          ATerm p_7 = NULL,s_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
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
          w_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_7), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_7)), (ATerm) ATmakeAppl(sym_PrimT_3, term_m_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_7))))), (ATerm)ATmakeAppl(sym_Var_1, u_7), (ATerm) ATmakeAppl(sym_Op_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_7)), not_null(p_7)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  y_7 = t;
  if(match_cons(t, sym_Match_1))
    {
      z_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL;
        t = y_7;
        t = new_0_0(t);
        g_8 = t;
        t = z_7;
        {
          static ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((d_8 != NULL) && (d_8 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_8 = ATgetArgument(t, 0);
                if(((e_8 != NULL) && (e_8 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_8), d_8);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_8), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_8))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_8))))));
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_8 = NULL,l_8 = NULL,n_8 = NULL;
              t = y_7;
              t = new_0_0(t);
              l_8 = t;
              t = z_7;
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
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              {
                ATerm p_8 = NULL,v_8 = NULL,w_8 = NULL,z_8 = NULL;
                t = y_7;
                t = new_0_0(t);
                w_8 = t;
                t = z_7;
                {
                  static ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_8 = ATgetArgument(t, 0);
                        if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_8);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                }
                z_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_8)), not_null(v_8)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm h_138 (ATerm), ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_138(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
        f_15 = t;
        if(match_cons(t, sym_Op_2))
          {
            g_15 = ATgetArgument(t, 0);
            h_15 = ATgetArgument(t, 1);
            {
              ATerm k_2 = NULL,u_2 = NULL,t_1 = NULL;
              t = SSLgetAnnotations(f_15);
              k_2 = t;
              t = h_15;
              {
                static ATerm h_2 (ATerm t)
                {
                  t = pat_td_1_0(h_138, t);
                  return(t);
                }
                t = fetch_1_0(h_2, t);
              }
              u_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, g_15, u_2);
              t_1 = t;
              t = SSLsetAnnotations(t_1, k_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                g_15 = ATgetArgument(t, 0);
                h_15 = ATgetArgument(t, 1);
                {
                  ATerm z_25 = t;
                  int a_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_5 = NULL,v_5 = NULL,u_1 = NULL;
                      t = SSLgetAnnotations(f_15);
                      i_5 = t;
                      t = h_15;
                      t = pat_td_1_0(h_138, t);
                      v_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, g_15, v_5);
                      u_1 = t;
                      t = SSLsetAnnotations(u_1, i_5);
                      LocalPopChoice(a_26);
                    }
                  else
                    {
                      t = z_25;
                      {
                        ATerm i_6 = NULL,l_6 = NULL,v_1 = NULL;
                        t = SSLgetAnnotations(f_15);
                        i_6 = t;
                        t = g_15;
                        t = pat_td_1_0(h_138, t);
                        l_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, l_6, h_15);
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
                    g_15 = ATgetArgument(t, 0);
                    h_15 = ATgetArgument(t, 1);
                    e_15 = ATgetArgument(t, 2);
                    {
                      ATerm d_7 = NULL,r_7 = NULL,w_1 = NULL;
                      t = SSLgetAnnotations(f_15);
                      d_7 = t;
                      t = e_15;
                      {
                        static ATerm m_2 (ATerm t)
                        {
                          t = pat_td_1_0(h_138, t);
                          return(t);
                        }
                        t = fetch_1_0(m_2, t);
                      }
                      r_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, g_15, h_15, r_7);
                      w_1 = t;
                      t = SSLsetAnnotations(w_1, d_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        g_15 = ATgetArgument(t, 0);
                        h_15 = ATgetArgument(t, 1);
                        e_15 = ATgetArgument(t, 2);
                        {
                          ATerm s_8 = NULL,a_9 = NULL,o_6 = NULL;
                          t = SSLgetAnnotations(f_15);
                          s_8 = t;
                          t = e_15;
                          {
                            static ATerm o_2 (ATerm t)
                            {
                              t = pat_td_1_0(h_138, t);
                              return(t);
                            }
                            t = fetch_1_0(o_2, t);
                          }
                          a_9 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, g_15, h_15, a_9);
                          o_6 = t;
                          t = SSLsetAnnotations(o_6, s_8);
                        }
                      }
                    else
                      {
                        ATerm k_9 = NULL,n_9 = NULL,p_9 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            g_15 = ATgetArgument(t, 0);
                            h_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_15);
                        k_9 = t;
                        t = h_15;
                        t = pat_td_1_0(h_138, t);
                        n_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, g_15, n_9);
                        p_9 = t;
                        t = SSLsetAnnotations(p_9, k_9);
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
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  if(match_cons(t, sym_Build_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_15 = NULL,y_15 = NULL,d_16 = NULL,e_16 = NULL;
        t = s_15;
        t = new_0_0(t);
        d_16 = t;
        t = t_15;
        {
          static ATerm y_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_15 != NULL) && (w_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_15 = ATgetArgument(t, 0);
                if(((y_15 != NULL) && (y_15 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, d_16);
            return(t);
          }
          t = pat_td_1_0(y_2, t);
        }
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_15)), not_null(w_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_16)))), (ATerm) ATmakeAppl(sym_Build_1, e_16)));
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm f_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_16 = NULL,m_16 = NULL,n_16 = NULL;
              t = s_15;
              t = new_0_0(t);
              m_16 = t;
              t = t_15;
              {
                static ATerm z_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        f_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_16);
                  return(t);
                }
                t = pat_td_1_0(z_2, t);
              }
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_16)))), (ATerm) ATmakeAppl(sym_Build_1, n_16)));
              LocalPopChoice(h_26);
            }
          else
            {
              t = f_26;
              {
                ATerm o_16 = NULL,p_16 = NULL,r_16 = NULL,s_16 = NULL;
                t = s_15;
                t = new_0_0(t);
                r_16 = t;
                t = t_15;
                {
                  static ATerm b_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_16 != NULL) && (o_16 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_16 = ATgetArgument(t, 0);
                        if(((p_16 != NULL) && (p_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_16);
                    return(t);
                  }
                  t = pat_td_1_0(b_3, t);
                }
                s_16 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_16), not_null(p_16), (ATerm) ATmakeAppl(sym_Var_1, r_16))), (ATerm) ATmakeAppl(sym_Build_1, s_16)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm i_26 = t;
  if((PushChoice() == 0))
    {
      ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,b_11 = NULL;
      o_17 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_17);
      m_17 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_17);
      b_11 = t;
      t = SSLsetAnnotations(b_11, m_17);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_26;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm p_17 = NULL,t_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_17 = ATgetFirst((ATermList) t);
      t_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_17, t_17);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if(match_cons(k_26, sym__2))
        {
          u_17 = ATgetArgument(k_26, 0);
          v_17 = ATgetArgument(k_26, 1);
        }
      else
        _fail(t);
      {
        ATerm l_26 = ATgetArgument(t, 1);
        if(match_cons(l_26, sym__2))
          {
            w_17 = ATgetArgument(l_26, 0);
            z_17 = ATgetArgument(l_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_17), u_17), (ATerm) ATinsert(CheckATermList(z_17), v_17));
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_18 = NULL,i_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_18 = ATgetFirst((ATermList) t);
      i_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_18, i_18);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(match_cons(o_26, sym__2))
        {
          j_18 = ATgetArgument(o_26, 0);
          k_18 = ATgetArgument(o_26, 1);
        }
      else
        _fail(t);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(match_cons(p_26, sym__2))
          {
            l_18 = ATgetArgument(p_26, 0);
            m_18 = ATgetArgument(p_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_18), j_18), (ATerm) ATinsert(CheckATermList(m_18), k_18));
  return(t);
}
static ATerm y_8 (ATerm k_76, ATerm l_76, ATerm m_76, ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,e_11 = NULL;
  t = m_76;
  t = fetch_1_0(e_3, t);
  t = m_76;
  t = genzip_4_0(f_3, g_3, h_3, LiftPrimArg_0_0, t);
  l_17 = t;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_17);
  c_17 = t;
  t = h_17;
  t = concat_0_0(t);
  j_17 = t;
  t = i_17;
  t = genzip_4_0(i_3, j_3, k_3, _id, t);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_17, k_17);
  e_11 = t;
  t = SSLsetAnnotations(e_11, c_17);
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(match_cons(q_26, sym__2))
          {
            a_17 = ATgetArgument(q_26, 0);
            b_17 = ATgetArgument(q_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, z_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_17), (ATerm) ATmakeAppl(sym_CallT_3, k_76, l_76, b_17)));
  return(t);
}
static ATerm k_19 (ATerm q_18, ATerm t)
{
  ATerm s_18 = NULL;
  t = q_18;
  {
    ATerm r_26 = t;
    if((PushChoice() == 0))
      {
        ATerm t_18 = NULL,u_18 = NULL,c_19 = NULL,m_11 = NULL;
        c_19 = t;
        if(match_cons(t, sym_Var_1))
          {
            u_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_19);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, u_18);
        m_11 = t;
        t = SSLsetAnnotations(m_11, t_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_26;
      }
  }
  t = new_0_0(t);
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, s_18), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_18)))), (ATerm) ATmakeAppl(sym_Var_1, s_18)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_19 = ATgetArgument(t, 0);
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_19(d_19, t);
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATmakeAppl(sym_Var_1, e_19)));
          }
      }
    }
  else
    {
      t = k_19(d_19, t);
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm v_26 = t;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,s_11 = NULL;
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
      s_11 = t;
      t = SSLsetAnnotations(s_11, o_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_26;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm s_10 = NULL,u_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_10 = ATgetFirst((ATermList) t);
      u_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_10, u_10);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,c_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      if(match_cons(w_26, sym__2))
        {
          x_10 = ATgetArgument(w_26, 0);
          y_10 = ATgetArgument(w_26, 1);
        }
      else
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
        if(match_cons(z_26, sym__2))
          {
            z_10 = ATgetArgument(z_26, 0);
            c_11 = ATgetArgument(z_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_10), x_10), (ATerm) ATinsert(CheckATermList(c_11), y_10));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm d_11 = NULL,g_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_11 = ATgetFirst((ATermList) t);
      g_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_11, g_11);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,l_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if(match_cons(e_27, sym__2))
        {
          h_11 = ATgetArgument(e_27, 0);
          i_11 = ATgetArgument(e_27, 1);
        }
      else
        _fail(t);
      {
        ATerm f_27 = ATgetArgument(t, 1);
        if(match_cons(f_27, sym__2))
          {
            j_11 = ATgetArgument(f_27, 0);
            l_11 = ATgetArgument(f_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_11), h_11), (ATerm) ATinsert(CheckATermList(l_11), i_11));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm g_27 = t;
  if((PushChoice() == 0))
    {
      ATerm c_14 = NULL,e_14 = NULL,f_14 = NULL,a_12 = NULL;
      f_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_14);
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_14);
      a_12 = t;
      t = SSLsetAnnotations(a_12, c_14);
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
  t = term_j_26;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_14 = ATgetFirst((ATermList) t);
      h_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_14, h_14);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(match_cons(h_27, sym__2))
        {
          i_14 = ATgetArgument(h_27, 0);
          j_14 = ATgetArgument(h_27, 1);
        }
      else
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(match_cons(i_27, sym__2))
          {
            k_14 = ATgetArgument(i_27, 0);
            o_14 = ATgetArgument(i_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_14), i_14), (ATerm) ATinsert(CheckATermList(o_14), j_14));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_14 = ATgetFirst((ATermList) t);
      q_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_14, q_14);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_14 = NULL,y_14 = NULL,c_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if(match_cons(j_27, sym__2))
        {
          t_14 = ATgetArgument(j_27, 0);
          y_14 = ATgetArgument(j_27, 1);
        }
      else
        _fail(t);
      {
        ATerm k_27 = ATgetArgument(t, 1);
        if(match_cons(k_27, sym__2))
          {
            c_15 = ATgetArgument(k_27, 0);
            k_15 = ATgetArgument(k_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_15), t_14), (ATerm) ATinsert(CheckATermList(k_15), y_14));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,k_24 = NULL,p_24 = NULL;
  g_24 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
      f_24 = ATgetArgument(t, 2);
      {
        ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,j_10 = NULL,v_11 = NULL;
        t = f_24;
        t = fetch_1_0(l_3, t);
        t = f_24;
        t = genzip_4_0(m_3, n_3, o_3, LiftPrimArg_0_0, t);
        j_10 = t;
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_10);
        d_10 = t;
        t = e_10;
        t = concat_0_0(t);
        g_10 = t;
        t = f_10;
        t = genzip_4_0(p_3, q_3, r_3, _id, t);
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, h_10);
        v_11 = t;
        t = SSLsetAnnotations(v_11, d_10);
        if(match_cons(t, sym__2))
          {
            a_10 = ATgetArgument(t, 0);
            {
              ATerm l_27 = ATgetArgument(t, 1);
              if(match_cons(l_27, sym__2))
                {
                  b_10 = ATgetArgument(l_27, 0);
                  c_10 = ATgetArgument(l_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_10), (ATerm) ATmakeAppl(sym_PrimT_3, k_24, p_24, c_10)));
      }
    }
  else
    {
      ATerm c_12 = NULL,d_12 = NULL,f_12 = NULL,h_12 = NULL,i_12 = NULL,n_12 = NULL,p_12 = NULL,z_13 = NULL,a_14 = NULL,b_12 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          k_24 = ATgetArgument(t, 0);
          p_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_24;
      t = fetch_1_0(s_3, t);
      t = p_24;
      t = genzip_4_0(t_3, w_3, z_3, LiftPrimArg_0_0, t);
      a_14 = t;
      if(match_cons(t, sym__2))
        {
          i_12 = ATgetArgument(t, 0);
          n_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_14);
      h_12 = t;
      t = i_12;
      t = concat_0_0(t);
      p_12 = t;
      t = n_12;
      t = genzip_4_0(a_4, b_4, c_4, _id, t);
      z_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_12, z_13);
      b_12 = t;
      t = SSLsetAnnotations(b_12, h_12);
      if(match_cons(t, sym__2))
        {
          c_12 = ATgetArgument(t, 0);
          {
            ATerm m_27 = ATgetArgument(t, 1);
            if(match_cons(m_27, sym__2))
              {
                d_12 = ATgetArgument(m_27, 0);
                f_12 = ATgetArgument(m_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_12), (ATerm) ATmakeAppl(sym_PrimT_3, k_24, (ATerm)ATempty, f_12)));
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL;
  r_27 = t;
  if(match_cons(t, sym_Con_3))
    {
      n_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
      q_27 = ATgetArgument(t, 2);
      {
        ATerm b_16 = NULL,u_12 = NULL;
        t = SSLgetAnnotations(r_27);
        b_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, n_27, o_27, q_27);
        u_12 = t;
        t = SSLsetAnnotations(u_12, b_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = r_27;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm s_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_27;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  if(match_cons(t, sym_Con_3))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
      x_28 = ATgetArgument(t, 2);
      {
        ATerm e_17 = NULL,w_12 = NULL;
        t = SSLgetAnnotations(y_28);
        e_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, z_28, a_29, x_28);
        w_12 = t;
        t = SSLsetAnnotations(w_12, e_17);
      }
    }
  else
    {
      ATerm f_18 = NULL,a_13 = NULL;
      if(match_cons(t, sym_App_2))
        {
          z_28 = ATgetArgument(t, 0);
          a_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_28);
      f_18 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, z_28, a_29);
      a_13 = t;
      t = SSLsetAnnotations(a_13, f_18);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm t_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(e_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_29;
  if(match_cons(t, sym_StratRule_3))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
      m_29 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_29), (ATerm) ATmakeAppl(sym_Where_1, m_29)), k_29));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          k_29 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
          m_29 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_29;
      t = pureterm_0_0(t);
      t = l_29;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, l_29)), (ATerm) ATmakeAppl(sym_Where_1, m_29)), (ATerm) ATmakeAppl(sym_Match_1, k_29)));
    }
  return(t);
}
static ATerm c_9 (ATerm x_71, ATerm y_71, ATerm z_71, ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  t = new_0_0(t);
  g_30 = t;
  t = x_71;
  {
    static ATerm f_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_27 = ATgetArgument(t, 0);
          if(match_cons(u_27, sym_Var_1))
            {
              if(((f_30 != NULL) && (f_30 != ATgetArgument(u_27, 0))))
                _fail(ATgetArgument(u_27, 0));
              else
                f_30 = ATgetArgument(u_27, 0);
            }
          else
            _fail(t);
          if(((d_30 != NULL) && (d_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_30 = ATgetArgument(t, 1);
          {
            ATerm v_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_30);
      return(t);
    }
    t = oncetd_1_0(f_4, t);
  }
  h_30 = t;
  t = y_71;
  {
    static ATerm g_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm w_27 = ATgetArgument(t, 0);
          if(match_cons(w_27, sym_Var_1))
            {
              if(((f_30 != NULL) && (f_30 != ATgetArgument(w_27, 0))))
                _fail(ATgetArgument(w_27, 0));
              else
                f_30 = ATgetArgument(w_27, 0);
            }
          else
            _fail(t);
          if(((e_30 != NULL) && (e_30 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_30 = ATgetArgument(t, 1);
          {
            ATerm x_27 = ATgetArgument(t, 2);
            if(match_cons(x_27, sym_CallT_3))
              {
                if(((c_30 != NULL) && (c_30 != ATgetArgument(x_27, 0))))
                  _fail(ATgetArgument(x_27, 0));
                else
                  c_30 = ATgetArgument(x_27, 0);
                {
                  ATerm y_27 = ATgetArgument(x_27, 1);
                  if(((ATgetType(y_27) != AT_LIST) || !(ATisEmpty(y_27))))
                    _fail(t);
                }
                {
                  ATerm z_27 = ATgetArgument(x_27, 2);
                  if(((ATgetType(z_27) != AT_LIST) || !(ATisEmpty(z_27))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, g_30);
      return(t);
    }
    t = oncetd_1_0(g_4, t);
  }
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_30), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, h_30, i_30, (ATerm) ATmakeAppl(sym_Seq_2, z_71, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(c_30), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_30), not_null(e_30), term_j_25))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_30)), (ATerm) ATmakeAppl(sym_Var_1, g_30))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_28 = t;
      int e_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_31 = NULL,j_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
          m_31 = t;
          if(match_cons(t, sym_SRule_1))
            {
              n_31 = ATgetArgument(t, 0);
              t = n_31;
              if(match_cons(t, sym_Rule_3))
                {
                  c_31 = ATgetArgument(t, 0);
                  j_31 = ATgetArgument(t, 1);
                  l_31 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = m_31;
              t = c_9(c_31, j_31, l_31, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm a_19 = NULL,h_19 = NULL,m_13 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  n_31 = ATgetArgument(t, 0);
                  o_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_31);
              a_19 = t;
              t = o_31;
              t = desugarRule_0_0(t);
              h_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, n_31, h_19);
              m_13 = t;
              t = SSLsetAnnotations(m_13, a_19);
            }
          LocalPopChoice(e_28);
        }
      else
        {
          t = c_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
    }
  t = repeat_2_0(i_4, _id, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
            u_32 = t;
            if(match_cons(t, sym_CallT_3))
              {
                v_32 = ATgetArgument(t, 0);
                w_32 = ATgetArgument(t, 1);
                x_32 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = u_32;
            t = y_8(v_32, w_32, x_32, t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm l_28 = t;
              int m_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = Bapp_0_0(t);
                        LocalPopChoice(o_28);
                      }
                    else
                      {
                        t = n_28;
                        {
                          ATerm p_28 = t;
                          int t_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_28 = t;
                              int v_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      g_33 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_33;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      h_33 = ATgetArgument(t, 0);
                                      t = h_33;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          h_33 = ATgetArgument(t, 0);
                                          i_33 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, h_33, i_33);
                                    }
                                  LocalPopChoice(v_28);
                                }
                              else
                                {
                                  t = u_28;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(t_28);
                            }
                          else
                            {
                              t = p_28;
                              {
                                ATerm w_28 = t;
                                int b_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(b_29);
                                  }
                                else
                                  {
                                    t = w_28;
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
  ATerm w_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_22);
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
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            {
              ATerm y_22 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_22 = ATgetArgument(t, 0);
                  c_23 = ATgetArgument(t, 1);
                  d_23 = ATgetArgument(t, 2);
                  e_23 = ATgetArgument(t, 3);
                  t = d_23;
                  t = map_1_0(p_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_22 = ATgetArgument(t, 0);
                      c_23 = ATgetArgument(t, 1);
                      d_23 = ATgetArgument(t, 2);
                      e_23 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_23;
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
  ATerm n_23 = NULL;
  ATerm g_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_23 = ATgetArgument(t, 0);
          {
            ATerm o_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_29);
      t = n_23;
    }
  else
    {
      t = g_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_23;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm d_24 = NULL;
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_24 = ATgetArgument(t, 0);
          {
            ATerm r_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_29);
      t = d_24;
    }
  else
    {
      t = p_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_24;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_s_29;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm o_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  o_38 = t;
  if(match_cons(t, sym_Seq_2))
    {
      r_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_38;
  if(match_cons(t, sym_CallT_3))
    {
      s_38 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
      w_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_38;
  if(match_cons(t, sym_SVar_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_38;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = v_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = w_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = x_38;
  if(match_cons(t, sym_Seq_2))
    {
      y_38 = ATgetArgument(t, 0);
      a_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_38;
  if(match_cons(t, sym_Match_1))
    {
      z_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_39;
  if(match_cons(t, sym_Seq_2))
    {
      d_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_39;
  if(match_cons(t, sym_Where_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_39;
  if(match_cons(t, sym_Build_1))
    {
      g_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL,u_20 = NULL,z_20 = NULL,a_21 = NULL,v_21 = NULL,x_21 = NULL;
        t = term_k_30;
        v_21 = t;
        t = term_l_30;
        x_21 = t;
        t = term_m_30;
        t = x_12(x_21, v_21, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm n_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_30) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            m_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_39, g_39);
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym__3, m_20, z_38, (ATerm) ATmakeAppl(sym__2, e_39, g_39));
        t = m_10(m_20, z_38, a_21, t);
        if(match_cons(t, sym__2))
          {
            u_20 = ATgetArgument(t, 0);
            z_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, u_20), (ATerm) ATmakeAppl(sym_Build_1, z_20)));
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        {
          ATerm q_22 = NULL,v_22 = NULL,s_24 = NULL,t_24 = NULL;
          t = term_k_30;
          s_24 = t;
          t = term_l_30;
          t_24 = t;
          t = term_m_30;
          t = x_12(t_24, s_24, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm o_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_30) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              q_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_38;
          t = free_vars_3_0(l_4, o_4, tboundin_3_0, t);
          {
            static ATerm s_4 (ATerm t)
            {
              static ATerm t_4 (ATerm t)
              {
                ATerm j_24 = NULL,l_24 = NULL,m_24 = NULL;
                j_24 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, q_22, (ATerm) ATmakeAppl(sym_Var_1, j_24));
                l_24 = t;
                t = term_q_30;
                m_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, q_22, (ATerm) ATmakeAppl(sym_Var_1, j_24)), term_q_30);
                t = y_12(u_4, l_24, m_24, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, j_24);
                return(t);
              }
              t = map_1_0(t_4, t);
              t = (ATerm) ATmakeAppl(sym__2, e_39, g_39);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((v_22 != NULL) && (v_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    v_22 = ATgetArgument(t, 0);
                  {
                    ATerm r_30 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(r_4, s_4, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(v_22)), (ATerm) ATmakeAppl(sym_Build_1, g_39)));
        }
      }
  }
  return(t);
}
static ATerm a_41 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm d_25 = NULL;
  t = term_s_29;
  d_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_29, f_40);
  t = x_12(d_25, f_40, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm t_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_30) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = e_40;
  return(t);
}
static ATerm b_41 (ATerm i_40, ATerm j_40, ATerm t)
{
  ATerm g_25 = NULL;
  t = term_s_29;
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_29, j_40);
  t = x_12(g_25, j_40, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm u_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_30) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = i_40;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,x_40 = NULL;
  p_40 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm v_30 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_40;
  if(match_cons(t, sym_Var_1))
    {
      o_40 = ATgetArgument(t, 0);
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_25 = NULL;
            t = term_s_29;
            p_25 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_s_29, p_40);
            t = x_12(p_25, p_40, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm y_30 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_30) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, o_40);
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm z_30 = t;
              int a_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_41(x_40, p_40, t);
                  LocalPopChoice(a_31);
                }
              else
                {
                  t = z_30;
                  t = b_41(x_40, p_40, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_41(x_40, p_40, t);
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          t = b_41(x_40, p_40, t);
        }
    }
  return(t);
}
static ATerm l_10 (ATerm t_42, ATerm u_42, ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  o_41 = t;
  {
    ATerm f_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_42, u_42);
        t = n_13(t_42, u_42, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_31 = ATgetFirst((ATermList) t);
            n_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_31);
        t = SSL_table_put(t_42, u_42, n_41);
        t = (ATerm) ATmakeAppl(sym__3, t_42, u_42, n_41);
      }
    else
      {
        t = f_31;
        t = SSL_table_remove(t_42, u_42);
        t = (ATerm) ATmakeAppl(sym__2, t_42, u_42);
      }
  }
  t = o_41;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_115 (ATerm), ATerm t)
{
  ATerm p_41 = NULL,r_41 = NULL,s_41 = NULL,v_41 = NULL,w_41 = NULL;
  v_41 = t;
  t = n_115(t);
  s_41 = t;
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_41 = NULL;
        t = term_r_31;
        x_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_41, term_r_31);
        t = n_13(s_41, x_41, t);
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_41 = ATgetFirst((ATermList) t);
      p_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_31;
  w_41 = t;
  t = SSL_table_put(s_41, w_41, p_41);
  t = r_41;
  {
    static ATerm v_4 (ATerm t)
    {
      ATerm y_41 = NULL;
      y_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_41, y_41);
      t = l_10(s_41, y_41, t);
      return(t);
    }
    t = map_1_0(v_4, t);
  }
  t = v_41;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_109(t);
      t = u_109(t);
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      t = u_109(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_115 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,h_42 = NULL,j_42 = NULL,q_42 = NULL;
  e_42 = t;
  t = m_115(t);
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_42, term_r_31);
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_31 = ATgetArgument(t, 0);
            ATerm x_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_31;
        f_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_42, term_r_31);
        t = n_13(d_42, f_43, t);
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        t = (ATerm) ATempty;
      }
  }
  h_42 = t;
  t = term_r_31;
  j_42 = t;
  t = (ATerm) ATinsert(CheckATermList(h_42), (ATerm) ATempty);
  q_42 = t;
  t = SSL_table_put(d_42, j_42, q_42);
  t = e_42;
  return(t);
}
ATerm scope_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t)
{
  static ATerm w_4 (ATerm t)
  {
    t = end_scope_1_0(o_115, t);
    return(t);
  }
  t = begin_scope_1_0(o_115, t);
  t = restore_always_2_0(p_115, w_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_s_29;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm k_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_43);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            {
              ATerm m_43 = NULL,n_43 = NULL,p_43 = NULL,q_43 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_43 = ATgetArgument(t, 0);
                  n_43 = ATgetArgument(t, 1);
                  p_43 = ATgetArgument(t, 2);
                  q_43 = ATgetArgument(t, 3);
                  t = p_43;
                  t = map_1_0(b_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_43 = ATgetArgument(t, 0);
                      n_43 = ATgetArgument(t, 1);
                      p_43 = ATgetArgument(t, 2);
                      q_43 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_43;
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
  ATerm a_44 = NULL;
  ATerm c_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_44 = ATgetArgument(t, 0);
          {
            ATerm g_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_32);
      t = a_44;
    }
  else
    {
      t = c_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_44;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm n_44 = NULL;
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_44 = ATgetArgument(t, 0);
          {
            ATerm k_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_32);
      t = n_44;
    }
  else
    {
      t = h_32;
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
static ATerm e_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
static ATerm m_10 (ATerm x_24, ATerm w_24, ATerm y_24, ATerm t)
{
  ATerm j_43 = NULL;
  static ATerm y_4 (ATerm t)
  {
    t = w_24;
    t = free_vars_3_0(z_4, a_5, tboundin_3_0, t);
    {
      static ATerm d_5 (ATerm t)
      {
        ATerm r_44 = NULL,s_44 = NULL,u_44 = NULL;
        r_44 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, x_24, (ATerm) ATmakeAppl(sym_Var_1, r_44));
        s_44 = t;
        t = term_m_32;
        u_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, x_24, (ATerm) ATmakeAppl(sym_Var_1, r_44)), term_m_32);
        t = y_12(e_5, s_44, u_44, t);
        t = r_44;
        return(t);
      }
      t = map_1_0(d_5, t);
    }
    t = y_24;
    t = alltd_1_0(Replace_0_0, t);
    if(((j_43 != NULL) && (j_43 != t)))
      _fail(t);
    else
      j_43 = t;
    return(t);
  }
  t = scope_2_0(x_4, y_4, t);
  t = not_null(j_43);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm y_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_26);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm t_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_32);
    }
  else
    {
      t = t_32;
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
              ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_27 = ATgetArgument(t, 0);
                  b_27 = ATgetArgument(t, 1);
                  c_27 = ATgetArgument(t, 2);
                  d_27 = ATgetArgument(t, 3);
                  t = c_27;
                  t = map_1_0(h_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_27 = ATgetArgument(t, 0);
                      b_27 = ATgetArgument(t, 1);
                      c_27 = ATgetArgument(t, 2);
                      d_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_27;
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
  ATerm p_27 = NULL;
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_27 = ATgetArgument(t, 0);
          {
            ATerm d_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_33);
      t = p_27;
    }
  else
    {
      t = b_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_27;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm d_28 = NULL;
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_28 = ATgetArgument(t, 0);
          {
            ATerm j_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_33);
      t = d_28;
    }
  else
    {
      t = e_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_28;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
  g_49 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_49;
  if(match_cons(t, sym_CallT_3))
    {
      j_49 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
      o_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_49;
  if(match_cons(t, sym_SVar_1))
    {
      k_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_49;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = l_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = o_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_49;
  if(match_cons(t, sym_Seq_2))
    {
      q_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_49;
  if(match_cons(t, sym_Match_1))
    {
      r_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_49;
  if(match_cons(t, sym_Build_1))
    {
      t_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL,g_26 = NULL,m_26 = NULL,n_26 = NULL;
        t = term_n_33;
        m_26 = t;
        t = term_p_33;
        n_26 = t;
        t = term_q_33;
        t = x_12(n_26, m_26, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_33) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            b_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, b_26, r_49, t_49);
        t = m_10(b_26, r_49, t_49, t);
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_49), (ATerm) ATmakeAppl(sym_Build_1, g_26));
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        {
          ATerm u_26 = NULL,x_26 = NULL,h_29 = NULL,i_29 = NULL;
          t = term_n_33;
          h_29 = t;
          t = term_p_33;
          i_29 = t;
          t = term_q_33;
          t = x_12(i_29, h_29, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm s_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_33) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              u_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_49;
          t = free_vars_3_0(f_5, g_5, tboundin_3_0, t);
          {
            static ATerm l_5 (ATerm t)
            {
              static ATerm m_5 (ATerm t)
              {
                ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
                q_28 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, u_26, (ATerm) ATmakeAppl(sym_Var_1, q_28));
                r_28 = t;
                t = term_w_33;
                s_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, u_26, (ATerm) ATmakeAppl(sym_Var_1, q_28)), term_w_33);
                t = y_12(n_5, r_28, s_28, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, q_28);
                return(t);
              }
              t = map_1_0(m_5, t);
              t = t_49;
              t = alltd_1_0(Replace_0_0, t);
              if(((x_26 != NULL) && (x_26 != t)))
                _fail(t);
              else
                x_26 = t;
              return(t);
            }
            t = scope_2_0(k_5, l_5, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_49), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_26)));
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,f_53 = NULL,i_53 = NULL,m_53 = NULL,o_53 = NULL,p_53 = NULL,x_53 = NULL;
    x_53 = t;
    if(match_cons(t, sym_Seq_2))
      {
        z_52 = ATgetArgument(t, 0);
        m_53 = ATgetArgument(t, 1);
        t = z_52;
        if(match_cons(t, sym_Choice_2))
          {
            a_53 = ATgetArgument(t, 0);
            c_53 = ATgetArgument(t, 1);
            {
              ATerm x_33 = t;
              int y_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_30 = NULL,b_31 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_z_33, m_53);
                  s_30 = t;
                  t = term_a_34;
                  b_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_a_34, (ATerm) ATmakeAppl(sym_Seq_2, term_z_33, m_53));
                  t = x_12(b_31, s_30, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm b_34 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) b_34) != ATmakeSymbol("y_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, a_53, m_53), (ATerm) ATmakeAppl(sym_Seq_2, c_53, m_53));
                  t = bottomup_1_0(o_5, t);
                  LocalPopChoice(y_33);
                }
              else
                {
                  t = x_33;
                  t = x_53;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                a_53 = ATgetArgument(t, 0);
                c_53 = ATgetArgument(t, 1);
                {
                  ATerm d_34 = t;
                  int e_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_32 = NULL,e_32 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_p_34, m_53);
                      d_32 = t;
                      t = term_q_34;
                      e_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_q_34, (ATerm) ATmakeAppl(sym_Seq_2, term_p_34, m_53));
                      t = x_12(e_32, d_32, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm r_34 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) r_34) != ATmakeSymbol("a_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, a_53, m_53), (ATerm) ATmakeAppl(sym_Seq_2, c_53, m_53));
                      t = bottomup_1_0(o_5, t);
                      LocalPopChoice(e_34);
                    }
                  else
                    {
                      t = d_34;
                      t = x_53;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    a_53 = ATgetArgument(t, 0);
                    c_53 = ATgetArgument(t, 1);
                    {
                      ATerm s_34 = t;
                      int t_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_54 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_53, m_53);
                          t = o_5(t);
                          d_54 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_53, d_54);
                          t = o_5(t);
                          LocalPopChoice(t_34);
                        }
                      else
                        {
                          t = s_34;
                          t = x_53;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        a_53 = ATgetArgument(t, 0);
                        c_53 = ATgetArgument(t, 1);
                        {
                          ATerm u_34 = t;
                          int v_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_54 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_53, m_53);
                              t = o_5(t);
                              l_54 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_53, l_54);
                              t = o_5(t);
                              LocalPopChoice(v_34);
                            }
                          else
                            {
                              t = u_34;
                              t = x_53;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            a_53 = ATgetArgument(t, 0);
                            {
                              ATerm x_34 = t;
                              int y_34 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_54 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, m_53, a_53);
                                  t = o_5(t);
                                  v_54 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, v_54);
                                  t = o_5(t);
                                  LocalPopChoice(y_34);
                                }
                              else
                                {
                                  t = x_34;
                                  t = x_53;
                                }
                            }
                          }
                        else
                          {
                            t = x_53;
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
            z_52 = ATgetArgument(t, 0);
            m_53 = ATgetArgument(t, 1);
            t = z_52;
            if(match_cons(t, sym_LChoice_2))
              {
                a_53 = ATgetArgument(t, 0);
                c_53 = ATgetArgument(t, 1);
                {
                  ATerm h_35 = t;
                  int i_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, c_53, m_53);
                      t = o_5(t);
                      j_55 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, a_53, j_55);
                      t = o_5(t);
                      LocalPopChoice(i_35);
                    }
                  else
                    {
                      t = h_35;
                      t = x_53;
                    }
                }
              }
            else
              {
                t = x_53;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                z_52 = ATgetArgument(t, 0);
                m_53 = ATgetArgument(t, 1);
                t = z_52;
                if(match_cons(t, sym_Choice_2))
                  {
                    a_53 = ATgetArgument(t, 0);
                    c_53 = ATgetArgument(t, 1);
                    {
                      ATerm m_35 = t;
                      int n_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_55 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, c_53, m_53);
                          t = o_5(t);
                          r_55 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, a_53, r_55);
                          t = o_5(t);
                          LocalPopChoice(n_35);
                        }
                      else
                        {
                          t = m_35;
                          t = x_53;
                        }
                    }
                  }
                else
                  {
                    t = x_53;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    z_52 = ATgetArgument(t, 0);
                    m_53 = ATgetArgument(t, 1);
                    t = m_53;
                    if(match_cons(t, sym_Op_2))
                      {
                        o_53 = ATgetArgument(t, 0);
                        p_53 = ATgetArgument(t, 1);
                        t = z_52;
                        if(match_cons(t, sym_CallT_3))
                          {
                            a_53 = ATgetArgument(t, 0);
                            c_53 = ATgetArgument(t, 1);
                            i_53 = ATgetArgument(t, 2);
                            t = i_53;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = c_53;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    d_53 = ATgetFirst((ATermList) t);
                                    f_53 = (ATerm) ATgetNext((ATermList) t);
                                    t = f_53;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = a_53;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            b_53 = ATgetArgument(t, 0);
                                            t = b_53;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm o_35 = t;
                                                int p_35 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm d_56 = NULL;
                                                    t = p_53;
                                                    {
                                                      static ATerm p_5 (ATerm t)
                                                      {
                                                        ATerm f_56 = NULL;
                                                        f_56 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_r_35, (ATerm)ATinsert(ATempty, d_53), (ATerm) ATempty), f_56);
                                                        return(t);
                                                      }
                                                      t = map_1_0(p_5, t);
                                                    }
                                                    d_56 = t;
                                                    t = (ATerm) ATmakeAppl(sym_App_2, d_53, (ATerm) ATmakeAppl(sym_Op_2, o_53, d_56));
                                                    t = bottomup_1_0(o_5, t);
                                                    LocalPopChoice(p_35);
                                                  }
                                                else
                                                  {
                                                    t = o_35;
                                                    t = x_53;
                                                  }
                                              }
                                            else
                                              {
                                                t = x_53;
                                              }
                                          }
                                        else
                                          {
                                            t = x_53;
                                          }
                                      }
                                    else
                                      {
                                        t = x_53;
                                      }
                                  }
                                else
                                  {
                                    t = x_53;
                                  }
                              }
                            else
                              {
                                t = x_53;
                              }
                          }
                        else
                          {
                            t = x_53;
                          }
                      }
                    else
                      {
                        t = x_53;
                      }
                  }
                else
                  {
                    t = x_53;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(o_5, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  static ATerm q_5 (ATerm t)
  {
    t = bottomup_1_0(n_106, t);
    return(t);
  }
  t = SRTS_all(q_5, t);
  t = n_106(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  static ATerm r_5 (ATerm t)
  {
    ATerm k_57 = NULL,m_57 = NULL,s_57 = NULL,t_57 = NULL,v_57 = NULL;
    v_57 = t;
    if(match_cons(t, sym_Seq_2))
      {
        k_57 = ATgetArgument(t, 0);
        m_57 = ATgetArgument(t, 1);
        t = m_57;
        if(match_cons(t, sym_Choice_2))
          {
            s_57 = ATgetArgument(t, 0);
            t_57 = ATgetArgument(t, 1);
            {
              ATerm s_35 = t;
              int t_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_58 = NULL,b_58 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_57, s_57);
                  t = r_5(t);
                  a_58 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_57, t_57);
                  t = r_5(t);
                  b_58 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, a_58, b_58);
                  t = r_5(t);
                  LocalPopChoice(t_35);
                }
              else
                {
                  t = s_35;
                  t = v_57;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                s_57 = ATgetArgument(t, 0);
                t_57 = ATgetArgument(t, 1);
                {
                  ATerm u_35 = t;
                  int v_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_59 = NULL,q_59 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_57, s_57);
                      t = r_5(t);
                      l_59 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_57, t_57);
                      t = r_5(t);
                      q_59 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_59, q_59);
                      t = r_5(t);
                      LocalPopChoice(v_35);
                    }
                  else
                    {
                      t = u_35;
                      t = v_57;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    s_57 = ATgetArgument(t, 0);
                    t_57 = ATgetArgument(t, 1);
                    {
                      ATerm w_35 = t;
                      int x_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_60 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_57, t_57);
                          t = r_5(t);
                          h_60 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_57, h_60);
                          t = r_5(t);
                          LocalPopChoice(x_35);
                        }
                      else
                        {
                          t = w_35;
                          t = v_57;
                        }
                    }
                  }
                else
                  {
                    t = v_57;
                  }
              }
          }
      }
    else
      {
        t = v_57;
      }
    return(t);
  }
  t = bottomup_1_0(r_5, t);
  return(t);
}
ATerm Seq_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,r_13 = NULL;
  t_60 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_60);
  o_60 = t;
  t = p_60;
  t = f_90(t);
  r_60 = t;
  t = q_60;
  t = g_90(t);
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, r_60, s_60);
  r_13 = t;
  t = SSLsetAnnotations(r_13, o_60);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,d_14 = NULL;
  l_35 = t;
  if(match_cons(t, sym_Build_1))
    {
      k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_35);
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, k_35);
  d_14 = t;
  t = SSLsetAnnotations(d_14, j_35);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          LocalPopChoice(b_36);
        }
      else
        {
          t = a_36;
          {
            ATerm d_36 = t;
            int e_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_66 = NULL,e_66 = NULL,h_66 = NULL;
                a_66 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    e_66 = ATgetArgument(t, 0);
                    h_66 = ATgetArgument(t, 1);
                    {
                      ATerm j_32 = NULL,r_32 = NULL,s_32 = NULL,t_13 = NULL;
                      t = SSLgetAnnotations(a_66);
                      j_32 = t;
                      t = e_66;
                      t = inline_rules_0_0(t);
                      r_32 = t;
                      t = h_66;
                      t = inline_rules_0_0(t);
                      s_32 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, r_32, s_32);
                      t_13 = t;
                      t = SSLsetAnnotations(t_13, j_32);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        e_66 = ATgetArgument(t, 0);
                        h_66 = ATgetArgument(t, 1);
                        {
                          ATerm o_33 = NULL,t_33 = NULL,u_33 = NULL,u_13 = NULL;
                          t = SSLgetAnnotations(a_66);
                          o_33 = t;
                          t = e_66;
                          t = inline_rules_0_0(t);
                          t_33 = t;
                          t = h_66;
                          t = inline_rules_0_0(t);
                          u_33 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, t_33, u_33);
                          u_13 = t;
                          t = SSLsetAnnotations(u_13, o_33);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            e_66 = ATgetArgument(t, 0);
                            h_66 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm f_36 = t;
                          int g_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,y_13 = NULL,x_13 = NULL,w_13 = NULL,v_13 = NULL;
                              t = SSLgetAnnotations(a_66);
                              c_34 = t;
                              t = h_66;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  g_34 = ATgetArgument(t, 0);
                                  h_34 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(h_66);
                              f_34 = t;
                              t = g_34;
                              if(match_cons(t, sym_Match_1))
                                {
                                  n_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(g_34);
                              m_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, n_34);
                              v_13 = t;
                              t = SSLsetAnnotations(v_13, m_34);
                              o_34 = t;
                              t = h_34;
                              if(match_cons(t, sym_Build_1))
                                {
                                  k_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(h_34);
                              j_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, k_34);
                              w_13 = t;
                              t = SSLsetAnnotations(w_13, j_34);
                              l_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_34, l_34);
                              x_13 = t;
                              t = SSLsetAnnotations(x_13, f_34);
                              i_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_66, i_34);
                              y_13 = t;
                              t = SSLsetAnnotations(y_13, c_34);
                              LocalPopChoice(g_36);
                            }
                          else
                            {
                              t = f_36;
                              {
                                ATerm w_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,m_14 = NULL,l_14 = NULL,b_14 = NULL;
                                t = SSLgetAnnotations(a_66);
                                w_34 = t;
                                t = h_66;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    a_35 = ATgetArgument(t, 0);
                                    b_35 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(h_66);
                                z_34 = t;
                                t = a_35;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    f_35 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(a_35);
                                e_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, f_35);
                                b_14 = t;
                                t = SSLsetAnnotations(b_14, e_35);
                                g_35 = t;
                                t = b_35;
                                t = Seq_2_0(_id, s_5, t);
                                c_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_35, c_35);
                                l_14 = t;
                                t = SSLsetAnnotations(l_14, z_34);
                                d_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_66, d_35);
                                m_14 = t;
                                t = SSLsetAnnotations(m_14, w_34);
                              }
                            }
                        }
                      }
                  }
                LocalPopChoice(e_36);
              }
            else
              {
                t = d_36;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_p_33;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,i_67 = NULL,j_67 = NULL;
  z_66 = t;
  t = term_n_33;
  i_67 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_36, z_66);
  j_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATmakeAppl(sym_Defined_2, term_h_36, z_66));
  t = y_12(t_5, i_67, j_67, t);
  t = term_k_30;
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_36, z_66);
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_30, (ATerm) ATmakeAppl(sym_Defined_2, term_i_36, z_66));
  t = y_12(u_5, a_67, b_67, t);
  t = z_66;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm k_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,z_67 = NULL;
  k_67 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_z_33, k_67);
  r_67 = t;
  t = term_k_36;
  z_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_z_33, k_67), term_k_36);
  t = y_12(w_5, r_67, z_67, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_p_34, k_67);
  p_67 = t;
  t = term_m_36;
  q_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_p_34, k_67), term_m_36);
  t = y_12(x_5, p_67, q_67, t);
  t = k_67;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm i_69 = NULL,k_69 = NULL,l_69 = NULL;
  i_69 = t;
  t = term_g_21;
  k_69 = t;
  t = (ATerm) ATinsert(ATempty, term_n_36);
  l_69 = t;
  t = SSL_printnl(k_69, l_69);
  t = i_69;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            LocalPopChoice(r_36);
          }
        else
          {
            t = q_36;
            {
              ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,w_69 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  p_69 = ATgetArgument(t, 0);
                  r_69 = ATgetArgument(t, 1);
                  w_69 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = p_69;
              if(match_cons(t, sym_SVar_1))
                {
                  q_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_69;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = r_69;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_69;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_25;
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
      ATerm s_36 = ATgetArgument(t, 0);
      if(match_cons(s_36, sym_SVar_1))
        {
          ATerm v_36 = ATgetArgument(s_36, 0);
          if((ATgetSymbol((ATermAppl) v_36) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm t_36 = ATgetArgument(t, 1);
        if(((ATgetType(t_36) != AT_LIST) || !(ATisEmpty(t_36))))
          _fail(t);
      }
      {
        ATerm u_36 = ATgetArgument(t, 2);
        if(((ATgetType(u_36) != AT_LIST) || !(ATisEmpty(u_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,e_70 = NULL;
  a_70 = t;
  t = term_g_21;
  b_70 = t;
  t = (ATerm) ATinsert(ATempty, term_w_36);
  e_70 = t;
  t = SSL_printnl(b_70, e_70);
  t = a_70;
  return(t);
}
static ATerm t_10 (ATerm h_23, ATerm t)
{
  ATerm r_68 = NULL,b_69 = NULL;
  t = if_verbose2_1_0(y_5, t);
  t = new_0_0(t);
  b_69 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_69), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_69), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = h_23;
  t = inline_rules_0_0(t);
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, b_69, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_x_29, r_68), (ATerm) ATmakeAppl(sym_CallT_3, term_r_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_69), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_j_25))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(z_5, t);
  {
    ATerm x_36 = t;
    if((PushChoice() == 0))
      {
        ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
        t = oncetd_1_0(a_6, t);
        x_69 = t;
        t = term_g_21;
        y_69 = t;
        t = (ATerm) ATinsert(ATempty, term_y_36);
        z_69 = t;
        t = SSL_printnl(y_69, z_69);
        t = x_69;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_36;
      }
  }
  t = desugar_0_0(t);
  t = if_verbose1_1_0(b_6, t);
  return(t);
}
ATerm alltd_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  static ATerm f_70 (ATerm t)
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_108(t);
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = SRTS_all(f_70, t);
      }
    return(t);
  }
  t = f_70(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL;
  t_71 = t;
  t = term_g_21;
  u_71 = t;
  t = (ATerm) ATinsert(ATempty, term_b_37);
  v_71 = t;
  t = SSL_printnl(u_71, v_71);
  t = t_71;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = debug_1_0(e_6, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_c_37;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL,r_74 = NULL;
  i_74 = t;
  t = term_g_21;
  j_74 = t;
  t = (ATerm) ATinsert(ATempty, term_d_37);
  r_74 = t;
  t = SSL_printnl(j_74, r_74);
  t = i_74;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL;
  s_71 = t;
  t = new_0_0(t);
  r_71 = t;
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_71), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        t = if_verbose2_1_0(c_6, t);
        _fail(t);
      }
  }
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_71 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,o_72 = NULL,p_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,v_73 = NULL,w_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,h_74 = NULL;
        w_71 = t;
        if(match_cons(t, sym_Seq_2))
          {
            j_72 = ATgetArgument(t, 0);
            z_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_72;
        if(match_cons(t, sym_All_1))
          {
            k_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_72;
        if(match_cons(t, sym_CallT_3))
          {
            l_72 = ATgetArgument(t, 0);
            o_72 = ATgetArgument(t, 1);
            w_73 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = l_72;
        if(match_cons(t, sym_SVar_1))
          {
            m_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_72;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = o_72;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_72 = ATgetFirst((ATermList) t);
            v_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_72;
        if(match_cons(t, sym_CallT_3))
          {
            u_72 = ATgetArgument(t, 0);
            w_72 = ATgetArgument(t, 1);
            x_72 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_72;
        if(match_cons(t, sym_SVar_1))
          {
            v_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_73;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_73;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_73;
        if(match_cons(t, sym_CallT_3))
          {
            a_74 = ATgetArgument(t, 0);
            c_74 = ATgetArgument(t, 1);
            h_74 = ATgetArgument(t, 2);
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
        t = c_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_72;
        if((r_71 != t))
          {
            _fail(t);
          }
        t = b_74;
        if((v_72 != t))
          {
            _fail(t);
          }
        t = w_71;
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        t = if_verbose1_1_0(d_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(f_6, t);
  t = s_71;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,t_84 = NULL;
  p_84 = t;
  t = term_g_21;
  q_84 = t;
  t = (ATerm) ATinsert(ATempty, term_i_37);
  t_84 = t;
  t = SSL_printnl(q_84, t_84);
  t = p_84;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = debug_1_0(j_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_j_37;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL;
  u_88 = t;
  t = term_g_21;
  v_88 = t;
  t = (ATerm) ATinsert(ATempty, term_k_37);
  w_88 = t;
  t = SSL_printnl(v_88, w_88);
  t = u_88;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL;
  o_84 = t;
  t = new_0_0(t);
  n_84 = t;
  {
    ATerm l_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_37, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_84), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(n_37);
      }
    else
      {
        t = l_37;
        t = if_verbose2_1_0(g_6, t);
        _fail(t);
      }
  }
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,m_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,p_86 = NULL,q_86 = NULL,x_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,u_87 = NULL,x_87 = NULL,y_87 = NULL,b_88 = NULL,l_88 = NULL,m_88 = NULL;
        e_86 = t;
        if(match_cons(t, sym_CallT_3))
          {
            g_86 = ATgetArgument(t, 0);
            i_86 = ATgetArgument(t, 1);
            m_88 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = g_86;
        if(match_cons(t, sym_SVar_1))
          {
            h_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_86;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = i_86;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_86 = ATgetFirst((ATermList) t);
            l_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_86;
        if(match_cons(t, sym_CallT_3))
          {
            k_86 = ATgetArgument(t, 0);
            l_86 = ATgetArgument(t, 1);
            w_84 = ATgetArgument(t, 2);
            t = k_86;
            if(match_cons(t, sym_SVar_1))
              {
                v_84 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_84;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
              _fail(t);
            t = l_86;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_86 = ATgetFirst((ATermList) t);
                b_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_86;
            if(match_cons(t, sym_Seq_2))
              {
                p_86 = ATgetArgument(t, 0);
                b_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_86;
            if(match_cons(t, sym_CallT_3))
              {
                q_86 = ATgetArgument(t, 0);
                z_86 = ATgetArgument(t, 1);
                a_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = q_86;
            if(match_cons(t, sym_SVar_1))
              {
                x_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_87;
            if(match_cons(t, sym_CallT_3))
              {
                c_87 = ATgetArgument(t, 0);
                n_87 = ATgetArgument(t, 1);
                y_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = c_87;
            if(match_cons(t, sym_SVar_1))
              {
                m_87 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_87;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
              _fail(t);
            t = n_87;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_87 = ATgetFirst((ATermList) t);
                x_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_87;
            if(match_cons(t, sym_CallT_3))
              {
                p_87 = ATgetArgument(t, 0);
                r_87 = ATgetArgument(t, 1);
                u_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_87;
            if(match_cons(t, sym_SVar_1))
              {
                q_87 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = u_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_84;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_86;
            if((n_84 != t))
              {
                _fail(t);
              }
            t = q_87;
            if((x_86 != t))
              {
                _fail(t);
              }
            t = e_86;
          }
        else
          {
            if(match_cons(t, sym_Rec_2))
              {
                k_86 = ATgetArgument(t, 0);
                l_86 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_86;
            if(match_cons(t, sym_CallT_3))
              {
                m_86 = ATgetArgument(t, 0);
                b_88 = ATgetArgument(t, 1);
                d_86 = ATgetArgument(t, 2);
                t = m_86;
                if(match_cons(t, sym_SVar_1))
                  {
                    p_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_86;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                  _fail(t);
                t = b_88;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_84 = ATgetFirst((ATermList) t);
                    c_86 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = x_84;
                if(match_cons(t, sym_Seq_2))
                  {
                    d_85 = ATgetArgument(t, 0);
                    i_85 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_85;
                if(match_cons(t, sym_CallT_3))
                  {
                    e_85 = ATgetArgument(t, 0);
                    g_85 = ATgetArgument(t, 1);
                    h_85 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = e_85;
                if(match_cons(t, sym_SVar_1))
                  {
                    f_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_85;
                if(match_cons(t, sym_CallT_3))
                  {
                    j_85 = ATgetArgument(t, 0);
                    s_85 = ATgetArgument(t, 1);
                    z_85 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = j_85;
                if(match_cons(t, sym_SVar_1))
                  {
                    m_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_85;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = s_85;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_85 = ATgetFirst((ATermList) t);
                    y_85 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = t_85;
                if(match_cons(t, sym_CallT_3))
                  {
                    u_85 = ATgetArgument(t, 0);
                    w_85 = ATgetArgument(t, 1);
                    x_85 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = u_85;
                if(match_cons(t, sym_SVar_1))
                  {
                    v_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_85;
                if((n_84 != t))
                  {
                    _fail(t);
                  }
                t = v_85;
                if((k_86 != t))
                  {
                    _fail(t);
                  }
                t = e_86;
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    m_86 = ATgetArgument(t, 0);
                    b_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_86;
                if(match_cons(t, sym_Seq_2))
                  {
                    p_86 = ATgetArgument(t, 0);
                    b_87 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_86;
                if(match_cons(t, sym_CallT_3))
                  {
                    q_86 = ATgetArgument(t, 0);
                    z_86 = ATgetArgument(t, 1);
                    a_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = q_86;
                if(match_cons(t, sym_SVar_1))
                  {
                    x_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_87;
                if(match_cons(t, sym_CallT_3))
                  {
                    c_87 = ATgetArgument(t, 0);
                    n_87 = ATgetArgument(t, 1);
                    y_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = c_87;
                if(match_cons(t, sym_SVar_1))
                  {
                    m_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_87;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = n_87;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_87 = ATgetFirst((ATermList) t);
                    x_87 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_87;
                if(match_cons(t, sym_CallT_3))
                  {
                    p_87 = ATgetArgument(t, 0);
                    r_87 = ATgetArgument(t, 1);
                    u_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = p_87;
                if(match_cons(t, sym_SVar_1))
                  {
                    q_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_88;
                if(!(match_cons(t, sym_Id_0)))
                  _fail(t);
                t = l_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_86;
                if((n_84 != t))
                  {
                    _fail(t);
                  }
                t = q_87;
                if((k_86 != t))
                  {
                    _fail(t);
                  }
                t = e_86;
              }
          }
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = if_verbose1_1_0(h_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(k_6, t);
  t = o_84;
  return(t);
}
ATerm debug_1_0 (ATerm d_115 (ATerm), ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL;
  x_88 = t;
  t = d_115(t);
  y_88 = t;
  t = term_g_21;
  z_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_88), y_88);
  a_89 = t;
  t = SSL_printnl(z_88, a_89);
  t = x_88;
  return(t);
}
ATerm topdown_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  static ATerm m_6 (ATerm t)
  {
    t = topdown_1_0(m_106, t);
    return(t);
  }
  t = m_106(t);
  t = SRTS_all(m_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm u_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(t_37);
      {
        ATerm c_89 = NULL,d_89 = NULL;
        c_89 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm v_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        d_89 = t;
        t = SSLgetAnnotations(c_89);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_37 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) w_37) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_37 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_37) != AT_LIST) || !(ATisEmpty(z_37))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_89;
      }
    }
  else
    {
      t = s_37;
      {
        ATerm a_38 = t;
        int b_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm c_38 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_38) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm f_38 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_38);
            _fail(t);
          }
        else
          {
            t = a_38;
          }
      }
    }
  return(t);
}
static ATerm v_10 (ATerm k_60, ATerm j_60, ATerm t)
{
  t = k_60;
  t = topdown_1_0(n_6, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, k_60);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm m_89 = NULL,n_89 = NULL,p_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_89 = ATgetArgument(t, 0);
      t_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_89;
  if(match_cons(t, sym_Match_1))
    {
      r_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_89;
  if(match_cons(t, sym_Var_1))
    {
      s_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_89;
  if(match_cons(t, sym_Seq_2))
    {
      u_89 = ATgetArgument(t, 0);
      n_89 = ATgetArgument(t, 1);
      t = u_89;
      if(match_cons(t, sym_Build_1))
        {
          v_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_89;
      if(match_cons(t, sym_Var_1))
        {
          m_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_89;
      if((s_89 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_89)), n_89);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_89;
      if(match_cons(t, sym_Var_1))
        {
          v_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_89;
      if((s_89 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_89));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_90 = ATgetArgument(t, 0);
      k_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_90;
  if(match_cons(t, sym_Build_1))
    {
      j_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_90;
  if(match_cons(t, sym_Seq_2))
    {
      l_90 = ATgetArgument(t, 0);
      e_90 = ATgetArgument(t, 1);
      t = l_90;
      if(match_cons(t, sym_Match_1))
        {
          d_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_90;
      if((j_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_90), e_90);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          l_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_90;
      if((j_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, j_90);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_91 = ATgetArgument(t, 0);
      d_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_91;
  if(match_cons(t, sym_Match_1))
    {
      c_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_91;
  if(match_cons(t, sym_Seq_2))
    {
      e_91 = ATgetArgument(t, 0);
      y_90 = ATgetArgument(t, 1);
      t = e_91;
      if(match_cons(t, sym_Match_1))
        {
          x_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_90;
      if((c_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_91), y_90);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          e_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_91;
      if((c_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, c_91);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL,w_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_91 = ATgetArgument(t, 0);
      a_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_91;
  if(match_cons(t, sym_Build_1))
    {
      ATerm h_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_92;
  if(match_cons(t, sym_Seq_2))
    {
      b_92 = ATgetArgument(t, 0);
      c_92 = ATgetArgument(t, 1);
      t = b_92;
      if(match_cons(t, sym_PrimT_3))
        {
          s_91 = ATgetArgument(t, 0);
          t_91 = ATgetArgument(t, 1);
          u_91 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, s_91, t_91, u_91), c_92);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          b_92 = ATgetArgument(t, 0);
          c_92 = ATgetArgument(t, 1);
          d_92 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, b_92, c_92, d_92);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,w_92 = NULL,y_92 = NULL,b_93 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_92 = ATgetArgument(t, 0);
      y_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_92;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_92;
  if(match_cons(t, sym_Seq_2))
    {
      b_93 = ATgetArgument(t, 0);
      u_92 = ATgetArgument(t, 1);
      t = b_93;
      if(match_cons(t, sym_Build_1))
        {
          t_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_92), u_92);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          b_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, b_93);
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_38 = ATgetArgument(t, 0);
      if(((ATgetType(j_38) != AT_LIST) || !(ATisEmpty(j_38))))
        _fail(t);
      {
        ATerm k_38 = ATgetArgument(t, 1);
        if(((ATgetType(k_38) != AT_LIST) || !(ATisEmpty(k_38))))
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
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_38 = ATgetArgument(t, 0);
      if(((ATgetType(m_38) == AT_LIST) && !(ATisEmpty(m_38))))
        {
          j_94 = ATgetFirst((ATermList) m_38);
          k_94 = (ATerm) ATgetNext((ATermList) m_38);
        }
      else
        _fail(t);
      {
        ATerm n_38 = ATgetArgument(t, 1);
        if(((ATgetType(n_38) == AT_LIST) && !(ATisEmpty(n_38))))
          {
            l_94 = ATgetFirst((ATermList) n_38);
            m_94 = (ATerm) ATgetNext((ATermList) n_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_94, l_94), (ATerm) ATmakeAppl(sym__2, k_94, m_94));
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL;
  if(match_cons(t, sym__2))
    {
      n_94 = ATgetArgument(t, 0);
      o_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_94), n_94);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL;
  if(match_cons(t, sym__2))
    {
      p_94 = ATgetArgument(t, 0);
      q_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_94), (ATerm) ATmakeAppl(sym_Match_1, q_94));
  return(t);
}
static ATerm w_6 (ATerm t)
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
static ATerm z_6 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if(((ATgetType(u_38) == AT_LIST) && !(ATisEmpty(u_38))))
        {
          v_94 = ATgetFirst((ATermList) u_38);
          w_94 = (ATerm) ATgetNext((ATermList) u_38);
        }
      else
        _fail(t);
      {
        ATerm b_39 = ATgetArgument(t, 1);
        if(((ATgetType(b_39) == AT_LIST) && !(ATisEmpty(b_39))))
          {
            x_94 = ATgetFirst((ATermList) b_39);
            y_94 = (ATerm) ATgetNext((ATermList) b_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_94, x_94), (ATerm) ATmakeAppl(sym__2, w_94, y_94));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL;
  if(match_cons(t, sym__2))
    {
      z_94 = ATgetArgument(t, 0);
      a_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_95), z_94);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm b_95 = NULL,e_95 = NULL;
  if(match_cons(t, sym__2))
    {
      b_95 = ATgetArgument(t, 0);
      e_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_95), (ATerm) ATmakeAppl(sym_Match_1, e_95));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm m_93 = NULL,p_93 = NULL,q_93 = NULL,v_93 = NULL,w_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_93 = ATgetArgument(t, 0);
      a_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_93;
  if(match_cons(t, sym_Build_1))
    {
      w_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_93;
  if(match_cons(t, sym_Op_2))
    {
      y_93 = ATgetArgument(t, 0);
      z_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_94;
  if(match_cons(t, sym_Seq_2))
    {
      b_94 = ATgetArgument(t, 0);
      q_93 = ATgetArgument(t, 1);
      {
        ATerm i_94 = NULL;
        t = b_94;
        if(match_cons(t, sym_Match_1))
          {
            c_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_94;
        if(match_cons(t, sym_Op_2))
          {
            m_93 = ATgetArgument(t, 0);
            p_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_93;
        if((y_93 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, z_93, p_93);
        t = genzip_4_0(p_6, q_6, r_6, u_6, t);
        i_94 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_94), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, y_93, z_93)), q_93));
      }
    }
  else
    {
      ATerm u_94 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          b_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_94;
      if(match_cons(t, sym_Op_2))
        {
          c_94 = ATgetArgument(t, 0);
          d_94 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_94;
      if((y_93 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, z_93, d_94);
      t = genzip_4_0(w_6, z_6, a_7, b_7, t);
      u_94 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_94), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, y_93, z_93)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm e_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL;
  m_96 = t;
  if(match_cons(t, sym_Seq_2))
    {
      n_96 = ATgetArgument(t, 0);
      r_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_96;
  if(match_cons(t, sym_Build_1))
    {
      o_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_96;
  if(match_cons(t, sym_Op_2))
    {
      p_96 = ATgetArgument(t, 0);
      {
        ATerm c_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_96;
  {
    ATerm h_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            s_96 = ATgetArgument(t, 0);
            {
              ATerm k_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_39);
        t = s_96;
        if(match_cons(t, sym_Match_1))
          {
            t_96 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_96;
        if(match_cons(t, sym_Op_2))
          {
            e_96 = ATgetArgument(t, 0);
            {
              ATerm l_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_96, e_96);
        {
          ATerm m_39 = t;
          if((PushChoice() == 0))
            {
              ATerm c_36 = NULL;
              if(match_cons(t, sym__2))
                {
                  c_36 = ATgetArgument(t, 0);
                  if((c_36 != ATgetArgument(t, 1)))
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
              t = m_39;
            }
        }
        t = term_n_39;
      }
    else
      {
        t = h_39;
        if(match_cons(t, sym_Match_1))
          {
            s_96 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_96;
        if(match_cons(t, sym_Op_2))
          {
            t_96 = ATgetArgument(t, 0);
            {
              ATerm o_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_96, t_96);
        {
          ATerm p_39 = t;
          if((PushChoice() == 0))
            {
              ATerm m_37 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_37 = ATgetArgument(t, 0);
                  if((m_37 != ATgetArgument(t, 1)))
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
              t = p_39;
            }
        }
        t = term_n_39;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm q_107 (ATerm), ATerm t)
{
  static ATerm x_96 (ATerm t)
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_107(t);
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = SRTS_one(x_96, t);
      }
    return(t);
  }
  t = x_96(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL;
  q_97 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_97 = ATgetArgument(t, 0);
      c_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_98;
  if(match_cons(t, sym_Let_2))
    {
      d_98 = ATgetArgument(t, 0);
      f_98 = ATgetArgument(t, 1);
      {
        ATerm m_98 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, r_97, d_98);
        t = conc_0_0(t);
        m_98 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, m_98, f_98);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          d_98 = ATgetArgument(t, 0);
          f_98 = ATgetArgument(t, 1);
          g_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_97;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_97 = ATgetFirst((ATermList) t);
          x_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_97;
      if(match_cons(t, sym_SDefT_4))
        {
          t_97 = ATgetArgument(t, 0);
          u_97 = ATgetArgument(t, 1);
          v_97 = ATgetArgument(t, 2);
          w_97 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_98;
      if(match_cons(t, sym_SVar_1))
        {
          e_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_98;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_98;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_98;
      if((t_97 != t))
        {
          _fail(t);
        }
      t = w_97;
      {
        ATerm t_39 = t;
        if((PushChoice() == 0))
          {
            static ATerm f_7 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm w_39 = ATgetArgument(t, 0);
                  if(match_cons(w_39, sym_SVar_1))
                    {
                      if((t_97 != ATgetArgument(w_39, 0)))
                        {
                          _fail(ATgetArgument(w_39, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_39 = ATgetArgument(t, 1);
                    if(((ATgetType(z_39) != AT_LIST) || !(ATisEmpty(z_39))))
                      _fail(t);
                  }
                  {
                    ATerm c_40 = ATgetArgument(t, 2);
                    if(((ATgetType(c_40) != AT_LIST) || !(ATisEmpty(c_40))))
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
            t = t_39;
          }
      }
      t = w_97;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,k_99 = NULL,l_99 = NULL,n_99 = NULL,o_99 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      n_99 = ATgetArgument(t, 0);
      t = n_99;
      if(match_cons(t, sym_Seq_2))
        {
          l_99 = ATgetArgument(t, 0);
          c_99 = ATgetArgument(t, 1);
          t = l_99;
          if(match_cons(t, sym_Where_1))
            {
              b_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_99;
          if(match_cons(t, sym_Seq_2))
            {
              d_99 = ATgetArgument(t, 0);
              k_99 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_99;
          if(match_cons(t, sym_Build_1))
            {
              e_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, b_99, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_99), k_99)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              l_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, l_99);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          n_99 = ATgetArgument(t, 0);
          t = n_99;
          if(match_cons(t, sym_Test_1))
            {
              l_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, l_99);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              n_99 = ATgetArgument(t, 0);
              t = n_99;
              if(match_cons(t, sym_Not_1))
                {
                  l_99 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, l_99);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  n_99 = ATgetArgument(t, 0);
                  o_99 = ATgetArgument(t, 1);
                  t = o_99;
                  if((n_99 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      n_99 = ATgetArgument(t, 0);
                      o_99 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = o_99;
                  if((n_99 != t))
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
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_100 = ATgetArgument(t, 0);
      p_100 = ATgetArgument(t, 1);
      t = m_100;
      if(match_cons(t, sym_LChoice_2))
        {
          n_100 = ATgetArgument(t, 0);
          o_100 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, n_100, (ATerm) ATmakeAppl(sym_LChoice_2, o_100, p_100));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          m_100 = ATgetArgument(t, 0);
          p_100 = ATgetArgument(t, 1);
          t = m_100;
          if(match_cons(t, sym_Seq_2))
            {
              n_100 = ATgetArgument(t, 0);
              o_100 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, n_100, (ATerm) ATmakeAppl(sym_Seq_2, o_100, p_100));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              m_100 = ATgetArgument(t, 0);
              p_100 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_100;
          if(match_cons(t, sym_Choice_2))
            {
              n_100 = ATgetArgument(t, 0);
              o_100 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, n_100, (ATerm) ATmakeAppl(sym_Choice_2, o_100, p_100));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm j_101 = NULL,l_101 = NULL,m_101 = NULL,o_101 = NULL,r_101 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      o_101 = ATgetArgument(t, 0);
      r_101 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, o_101, r_101);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          o_101 = ATgetArgument(t, 0);
          t = o_101;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_101 = ATgetFirst((ATermList) t);
              l_101 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, j_101, (ATerm) ATmakeAppl(sym_LChoices_1, l_101));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_n_39;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              o_101 = ATgetArgument(t, 0);
              t = o_101;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_101 = ATgetFirst((ATermList) t);
                  l_101 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, j_101, (ATerm) ATmakeAppl(sym_Choices_1, l_101));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_n_39;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  o_101 = ATgetArgument(t, 0);
                  t = o_101;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_101 = ATgetFirst((ATermList) t);
                      l_101 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_101, (ATerm) ATmakeAppl(sym_Seqs_1, l_101));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_j_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      o_101 = ATgetArgument(t, 0);
                      r_101 = ATgetArgument(t, 1);
                      m_101 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, r_101, (ATerm) ATmakeAppl(sym_Op_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, m_101), o_101)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          o_101 = ATgetArgument(t, 0);
                          r_101 = ATgetArgument(t, 1);
                          m_101 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, m_101)), o_101), (ATerm) ATmakeAppl(sym_Build_1, r_101)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              o_101 = ATgetArgument(t, 0);
                              r_101 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_101, (ATerm) ATmakeAppl(sym_Match_1, r_101));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  o_101 = ATgetArgument(t, 0);
                                  r_101 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_101), r_101);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      o_101 = ATgetArgument(t, 0);
                                      r_101 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_101), o_101);
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
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      x_103 = ATgetArgument(t, 0);
      t = x_103;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_n_39;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          x_103 = ATgetArgument(t, 0);
          t = x_103;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_j_25;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              x_103 = ATgetArgument(t, 0);
              y_103 = ATgetArgument(t, 1);
              t = x_103;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_n_39;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  x_103 = ATgetArgument(t, 0);
                  y_103 = ATgetArgument(t, 1);
                  t = y_103;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_n_39;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      x_103 = ATgetArgument(t, 0);
                      y_103 = ATgetArgument(t, 1);
                      t = y_103;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_n_39;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          x_103 = ATgetArgument(t, 0);
                          t = x_103;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_n_39;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              x_103 = ATgetArgument(t, 0);
                              t = x_103;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_n_39;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  x_103 = ATgetArgument(t, 0);
                                  y_103 = ATgetArgument(t, 1);
                                  t = y_103;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_n_39;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      x_103 = ATgetArgument(t, 0);
                                      y_103 = ATgetArgument(t, 1);
                                      t = y_103;
                                      t = fetch_1_0(j_7, t);
                                      t = term_n_39;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          x_103 = ATgetArgument(t, 0);
                                          y_103 = ATgetArgument(t, 1);
                                          t = y_103;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = x_103;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = y_103;
                                                }
                                              else
                                                {
                                                  t = x_103;
                                                }
                                            }
                                          else
                                            {
                                              t = x_103;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = y_103;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              x_103 = ATgetArgument(t, 0);
                                              y_103 = ATgetArgument(t, 1);
                                              t = y_103;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = x_103;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = y_103;
                                                    }
                                                  else
                                                    {
                                                      t = x_103;
                                                    }
                                                }
                                              else
                                                {
                                                  t = x_103;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = y_103;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  x_103 = ATgetArgument(t, 0);
                                                  t = x_103;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_n_39;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      x_103 = ATgetArgument(t, 0);
                                                      y_103 = ATgetArgument(t, 1);
                                                      z_103 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_103;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_103, y_103);
                                                }
                                            }
                                        }
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
  ATerm h_105 = NULL,j_105 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_105 = ATgetArgument(t, 0);
      t = j_105;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_j_25;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_105 = ATgetArgument(t, 0);
          t = j_105;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_n_39;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              j_105 = ATgetArgument(t, 0);
              h_105 = ATgetArgument(t, 1);
              t = h_105;
              if(match_cons(t, sym_Id_0))
                {
                  t = j_105;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = h_105;
                    }
                  else
                    {
                      t = j_105;
                    }
                }
              else
                {
                  t = j_105;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = h_105;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  j_105 = ATgetArgument(t, 0);
                  h_105 = ATgetArgument(t, 1);
                  t = j_105;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_j_25;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      j_105 = ATgetArgument(t, 0);
                      h_105 = ATgetArgument(t, 1);
                      t = h_105;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_j_25;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          j_105 = ATgetArgument(t, 0);
                          h_105 = ATgetArgument(t, 1);
                          t = h_105;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_j_25;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              j_105 = ATgetArgument(t, 0);
                              t = j_105;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_j_25;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  j_105 = ATgetArgument(t, 0);
                                  t = j_105;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_j_25;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_105 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_105;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_j_25;
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
  ATerm d_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(g_40);
    }
  else
    {
      t = d_40;
      {
        ATerm h_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(m_40);
          }
        else
          {
            t = h_40;
            {
              ATerm n_40 = t;
              int s_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(s_40);
                }
              else
                {
                  t = n_40;
                  {
                    ATerm u_40 = t;
                    int w_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(w_40);
                      }
                    else
                      {
                        t = u_40;
                        {
                          ATerm z_40 = t;
                          int e_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(e_41);
                            }
                          else
                            {
                              t = z_40;
                              {
                                ATerm f_41 = t;
                                int g_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_106 = NULL,d_106 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        c_106 = ATgetArgument(t, 0);
                                        d_106 = ATgetArgument(t, 1);
                                        t = c_106;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_106;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            c_106 = ATgetArgument(t, 0);
                                            d_106 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = c_106;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_106;
                                      }
                                    LocalPopChoice(g_41);
                                  }
                                else
                                  {
                                    t = f_41;
                                    {
                                      ATerm h_41 = t;
                                      int j_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(j_41);
                                        }
                                      else
                                        {
                                          t = h_41;
                                          {
                                            ATerm l_41 = t;
                                            int m_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(m_41);
                                              }
                                            else
                                              {
                                                t = l_41;
                                                {
                                                  ATerm q_41 = t;
                                                  int t_41 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(t_41);
                                                    }
                                                  else
                                                    {
                                                      t = q_41;
                                                      {
                                                        ATerm u_41 = t;
                                                        int z_41 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(z_41);
                                                          }
                                                        else
                                                          {
                                                            t = u_41;
                                                            {
                                                              ATerm a_42 = t;
                                                              int b_42 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(b_42);
                                                                }
                                                              else
                                                                {
                                                                  t = a_42;
                                                                  {
                                                                    ATerm c_42 = t;
                                                                    int g_42 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(g_42);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_42;
                                                                        {
                                                                          ATerm i_42 = t;
                                                                          int k_42 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(k_42);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_42;
                                                                              {
                                                                                ATerm r_42 = t;
                                                                                int v_42 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(v_42);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_42;
                                                                                    {
                                                                                      ATerm g_106 = NULL,h_106 = NULL,k_106 = NULL,p_106 = NULL;
                                                                                      h_106 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          k_106 = ATgetArgument(t, 0);
                                                                                          p_106 = ATgetArgument(t, 1);
                                                                                          t = k_106;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              g_106 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_106;
                                                                                          t = v_10(g_106, p_106, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              k_106 = ATgetArgument(t, 0);
                                                                                              p_106 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = k_106;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = p_106;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t)
{
  static ATerm a_107 (ATerm t)
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_113(t);
        t = a_107(t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        t = r_113(t);
      }
    return(t);
  }
  t = a_107(t);
  return(t);
}
ATerm downup_1_0 (ATerm o_106 (ATerm), ATerm t)
{
  t = o_106(t);
  {
    static ATerm l_7 (ATerm t)
    {
      t = downup_1_0(o_106, t);
      return(t);
    }
    t = SRTS_all(l_7, t);
  }
  t = o_106(t);
  return(t);
}
ATerm genzip_4_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm t)
{
  static ATerm n_107 (ATerm t)
  {
    ATerm g_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_119(t);
        LocalPopChoice(i_43);
      }
    else
      {
        t = g_43;
        {
          ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,d_15 = NULL;
          t = c_119(t);
          j_107 = t;
          if(match_cons(t, sym__2))
            {
              c_107 = ATgetArgument(t, 0);
              d_107 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_107);
          b_107 = t;
          t = c_107;
          t = e_119(t);
          h_107 = t;
          t = d_107;
          t = n_107(t);
          i_107 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_107, i_107);
          d_15 = t;
          t = SSLsetAnnotations(d_15, b_107);
          t = d_119(t);
        }
      }
    return(t);
  }
  t = n_107(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_43 = ATgetArgument(t, 0);
      if(((ATgetType(l_43) != AT_LIST) || !(ATisEmpty(l_43))))
        _fail(t);
      {
        ATerm s_43 = ATgetArgument(t, 1);
        if(((ATgetType(s_43) != AT_LIST) || !(ATisEmpty(s_43))))
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
  ATerm o_108 = NULL,q_108 = NULL,r_108 = NULL,u_108 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_43 = ATgetArgument(t, 0);
      if(((ATgetType(t_43) == AT_LIST) && !(ATisEmpty(t_43))))
        {
          o_108 = ATgetFirst((ATermList) t_43);
          q_108 = (ATerm) ATgetNext((ATermList) t_43);
        }
      else
        _fail(t);
      {
        ATerm u_43 = ATgetArgument(t, 1);
        if(((ATgetType(u_43) == AT_LIST) && !(ATisEmpty(u_43))))
          {
            r_108 = ATgetFirst((ATermList) u_43);
            u_108 = (ATerm) ATgetNext((ATermList) u_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_108, r_108), (ATerm) ATmakeAppl(sym__2, q_108, u_108));
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm w_108 = NULL,x_108 = NULL;
  if(match_cons(t, sym__2))
    {
      w_108 = ATgetArgument(t, 0);
      x_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_108), w_108);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm x_107 = NULL,y_107 = NULL,z_107 = NULL,b_108 = NULL;
  x_107 = t;
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_43 = ATgetArgument(t, 0);
            ATerm y_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(w_43);
        t = x_107;
      }
    else
      {
        t = v_43;
        {
          ATerm n_108 = NULL;
          if(match_cons(t, sym__3))
            {
              y_107 = ATgetArgument(t, 0);
              z_107 = ATgetArgument(t, 1);
              b_108 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, y_107, z_107);
          t = genzip_4_0(o_7, q_7, t_7, _id, t);
          n_108 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_108, b_108);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm t)
{
  ATerm z_108 = NULL,a_109 = NULL;
  static ATerm x_7 (ATerm t)
  {
    ATerm i_39 = NULL;
    t = i_134(t);
    i_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_39, not_null(a_109));
    t = lookup_0_0(t);
    t = j_134(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((a_109 != NULL) && (a_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_109 = ATgetArgument(t, 0);
      z_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_108;
  t = alltd_1_0(x_7, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_43 = ATgetArgument(t, 0);
      if(((ATgetType(z_43) != AT_LIST) || !(ATisEmpty(z_43))))
        _fail(t);
      {
        ATerm b_44 = ATgetArgument(t, 1);
        if(((ATgetType(b_44) != AT_LIST) || !(ATisEmpty(b_44))))
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
  ATerm a_40 = NULL,b_40 = NULL,k_40 = NULL,l_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_44 = ATgetArgument(t, 0);
      if(((ATgetType(c_44) == AT_LIST) && !(ATisEmpty(c_44))))
        {
          a_40 = ATgetFirst((ATermList) c_44);
          b_40 = (ATerm) ATgetNext((ATermList) c_44);
        }
      else
        _fail(t);
      {
        ATerm d_44 = ATgetArgument(t, 1);
        if(((ATgetType(d_44) == AT_LIST) && !(ATisEmpty(d_44))))
          {
            k_40 = ATgetFirst((ATermList) d_44);
            l_40 = (ATerm) ATgetNext((ATermList) d_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_40, k_40), (ATerm) ATmakeAppl(sym__2, b_40, l_40));
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL;
  if(match_cons(t, sym__2))
    {
      q_40 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_40), q_40);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm t_40 = NULL,v_40 = NULL,y_40 = NULL,c_41 = NULL,d_41 = NULL;
  if(match_cons(t, sym__2))
    {
      t_40 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_40;
  {
    ATerm e_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm i_44 = ATgetArgument(t, 0);
            v_40 = ATgetArgument(t, 1);
            y_40 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(h_44);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_41, v_40, y_40);
      }
    else
      {
        t = e_44;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm j_44 = ATgetArgument(t, 0);
            v_40 = ATgetArgument(t, 1);
            y_40 = ATgetArgument(t, 2);
            c_41 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_41, v_40, y_40, c_41);
      }
  }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_44 = ATgetArgument(t, 0);
      if(((ATgetType(k_44) != AT_LIST) || !(ATisEmpty(k_44))))
        _fail(t);
      {
        ATerm l_44 = ATgetArgument(t, 1);
        if(((ATgetType(l_44) != AT_LIST) || !(ATisEmpty(l_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm s_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_44 = ATgetArgument(t, 0);
      if(((ATgetType(m_44) == AT_LIST) && !(ATisEmpty(m_44))))
        {
          s_42 = ATgetFirst((ATermList) m_44);
          w_42 = (ATerm) ATgetNext((ATermList) m_44);
        }
      else
        _fail(t);
      {
        ATerm o_44 = ATgetArgument(t, 1);
        if(((ATgetType(o_44) == AT_LIST) && !(ATisEmpty(o_44))))
          {
            x_42 = ATgetFirst((ATermList) o_44);
            y_42 = (ATerm) ATgetNext((ATermList) o_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_42, x_42), (ATerm) ATmakeAppl(sym__2, w_42, y_42));
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm b_43 = NULL,e_43 = NULL;
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      e_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_43), b_43);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm h_43 = NULL,o_43 = NULL,r_43 = NULL;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_43;
  {
    ATerm p_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_44);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_43);
      }
    else
      {
        t = p_44;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_44 = ATgetArgument(t, 0);
            o_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_43, o_43);
      }
  }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_44 = ATgetArgument(t, 0);
      if(((ATgetType(w_44) != AT_LIST) || !(ATisEmpty(w_44))))
        _fail(t);
      {
        ATerm x_44 = ATgetArgument(t, 1);
        if(((ATgetType(x_44) != AT_LIST) || !(ATisEmpty(x_44))))
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
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_44 = ATgetArgument(t, 0);
      if(((ATgetType(y_44) == AT_LIST) && !(ATisEmpty(y_44))))
        {
          j_45 = ATgetFirst((ATermList) y_44);
          k_45 = (ATerm) ATgetNext((ATermList) y_44);
        }
      else
        _fail(t);
      {
        ATerm z_44 = ATgetArgument(t, 1);
        if(((ATgetType(z_44) == AT_LIST) && !(ATisEmpty(z_44))))
          {
            l_45 = ATgetFirst((ATermList) z_44);
            m_45 = (ATerm) ATgetNext((ATermList) z_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_45, l_45), (ATerm) ATmakeAppl(sym__2, k_45, m_45));
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm n_45 = NULL,q_45 = NULL;
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      q_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_45), n_45);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm s_45 = NULL,u_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      s_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_45;
  {
    ATerm a_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_45);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_45);
      }
    else
      {
        t = a_45;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_45 = ATgetArgument(t, 0);
            u_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_45, u_45);
      }
  }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_45 = ATgetArgument(t, 0);
      if(((ATgetType(f_45) != AT_LIST) || !(ATisEmpty(f_45))))
        _fail(t);
      {
        ATerm i_45 = ATgetArgument(t, 1);
        if(((ATgetType(i_45) != AT_LIST) || !(ATisEmpty(i_45))))
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
  ATerm m_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_45 = ATgetArgument(t, 0);
      if(((ATgetType(o_45) == AT_LIST) && !(ATisEmpty(o_45))))
        {
          m_47 = ATgetFirst((ATermList) o_45);
          o_47 = (ATerm) ATgetNext((ATermList) o_45);
        }
      else
        _fail(t);
      {
        ATerm p_45 = ATgetArgument(t, 1);
        if(((ATgetType(p_45) == AT_LIST) && !(ATisEmpty(p_45))))
          {
            p_47 = ATgetFirst((ATermList) p_45);
            q_47 = (ATerm) ATgetNext((ATermList) p_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_47, p_47), (ATerm) ATmakeAppl(sym__2, o_47, q_47));
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm r_47 = NULL,t_47 = NULL;
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_47), r_47);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm x_47 = NULL,z_47 = NULL,a_48 = NULL;
  if(match_cons(t, sym__2))
    {
      x_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_47;
  {
    ATerm r_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_45);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_48);
      }
    else
      {
        t = r_45;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_45 = ATgetArgument(t, 0);
            z_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_48, z_47);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm f_139 (ATerm), ATerm t)
{
  ATerm l_117 = NULL,q_117 = NULL,r_117 = NULL,u_117 = NULL,v_117 = NULL;
  r_117 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_117 = ATgetArgument(t, 0);
      v_117 = ATgetArgument(t, 1);
      {
        ATerm q_39 = NULL,x_39 = NULL,y_39 = NULL,j_15 = NULL;
        t = SSLgetAnnotations(r_117);
        q_39 = t;
        t = u_117;
        t = f_139(t);
        y_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_117, y_39);
        t = genzip_4_0(a_8, b_8, c_8, f_8, t);
        x_39 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_39, v_117);
        j_15 = t;
        t = SSLsetAnnotations(j_15, q_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_117 = ATgetArgument(t, 0);
          v_117 = ATgetArgument(t, 1);
          l_117 = ATgetArgument(t, 2);
          {
            ATerm f_42 = NULL,l_42 = NULL,m_42 = NULL,m_15 = NULL;
            t = SSLgetAnnotations(r_117);
            f_42 = t;
            t = v_117;
            t = f_139(t);
            m_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_117, m_42);
            t = genzip_4_0(i_8, j_8, m_8, o_8, t);
            l_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, u_117, l_42, l_117);
            m_15 = t;
            t = SSLsetAnnotations(m_15, f_42);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_117 = ATgetArgument(t, 0);
              v_117 = ATgetArgument(t, 1);
              l_117 = ATgetArgument(t, 2);
              q_117 = ATgetArgument(t, 3);
              {
                ATerm b_45 = NULL,g_45 = NULL,h_45 = NULL,o_15 = NULL;
                t = SSLgetAnnotations(r_117);
                b_45 = t;
                t = v_117;
                t = f_139(t);
                h_45 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_117, h_45);
                t = genzip_4_0(q_8, r_8, t_8, u_8, t);
                g_45 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_117, g_45, l_117, q_117);
                o_15 = t;
                t = SSLsetAnnotations(o_15, b_45);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  u_117 = ATgetArgument(t, 0);
                  v_117 = ATgetArgument(t, 1);
                  l_117 = ATgetArgument(t, 2);
                  q_117 = ATgetArgument(t, 3);
                  {
                    ATerm y_46 = NULL,i_47 = NULL,j_47 = NULL,p_15 = NULL;
                    t = SSLgetAnnotations(r_117);
                    y_46 = t;
                    t = v_117;
                    t = f_139(t);
                    j_47 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_117, j_47);
                    t = genzip_4_0(x_8, b_9, d_9, e_9, t);
                    i_47 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, u_117, i_47, l_117, q_117);
                    p_15 = t;
                    t = SSLsetAnnotations(p_15, y_46);
                  }
                }
              else
                {
                  ATerm r_48 = NULL,d_49 = NULL,q_15 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      u_117 = ATgetArgument(t, 0);
                      v_117 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_117);
                  r_48 = t;
                  t = u_117;
                  t = f_139(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_49 = ATgetFirst((ATermList) t);
                      {
                        ATerm y_45 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, d_49, v_117);
                  q_15 = t;
                  t = SSLsetAnnotations(q_15, r_48);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm i_139 (ATerm), ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL,t_120 = NULL,u_120 = NULL,v_120 = NULL;
  t_120 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_120 = ATgetArgument(t, 0);
      v_120 = ATgetArgument(t, 1);
      {
        ATerm y_49 = NULL,b_50 = NULL,c_50 = NULL,s_19 = NULL;
        t = SSLgetAnnotations(t_120);
        y_49 = t;
        t = u_120;
        t = g_139(t);
        b_50 = t;
        t = v_120;
        t = g_139(t);
        c_50 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, b_50, c_50);
        s_19 = t;
        t = SSLsetAnnotations(s_19, y_49);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_120 = ATgetArgument(t, 0);
          v_120 = ATgetArgument(t, 1);
          r_120 = ATgetArgument(t, 2);
          {
            ATerm l_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,t_19 = NULL;
            t = SSLgetAnnotations(t_120);
            l_50 = t;
            t = u_120;
            t = i_139(t);
            p_50 = t;
            t = v_120;
            t = i_139(t);
            q_50 = t;
            t = r_120;
            t = g_139(t);
            r_50 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, p_50, q_50, r_50);
            t_19 = t;
            t = SSLsetAnnotations(t_19, l_50);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_120 = ATgetArgument(t, 0);
              v_120 = ATgetArgument(t, 1);
              r_120 = ATgetArgument(t, 2);
              s_120 = ATgetArgument(t, 3);
              {
                ATerm c_51 = NULL,l_51 = NULL,p_51 = NULL,r_51 = NULL,s_51 = NULL,u_19 = NULL;
                t = SSLgetAnnotations(t_120);
                c_51 = t;
                t = u_120;
                t = i_139(t);
                l_51 = t;
                t = v_120;
                t = i_139(t);
                p_51 = t;
                t = r_120;
                t = i_139(t);
                r_51 = t;
                t = s_120;
                t = g_139(t);
                s_51 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_51, p_51, r_51, s_51);
                u_19 = t;
                t = SSLsetAnnotations(u_19, c_51);
              }
            }
          else
            {
              ATerm g_52 = NULL,m_52 = NULL,n_52 = NULL,v_19 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  u_120 = ATgetArgument(t, 0);
                  v_120 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_120);
              g_52 = t;
              t = u_120;
              t = i_139(t);
              m_52 = t;
              t = v_120;
              t = g_139(t);
              n_52 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, m_52, n_52);
              v_19 = t;
              t = SSLsetAnnotations(v_19, g_52);
            }
        }
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm c_121 = NULL;
  ATerm z_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_121 = ATgetArgument(t, 0);
          {
            ATerm b_46 = ATgetArgument(t, 1);
          }
          {
            ATerm c_46 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_46);
      t = c_121;
    }
  else
    {
      t = z_45;
      if(match_cons(t, sym_SDefT_4))
        {
          c_121 = ATgetArgument(t, 0);
          {
            ATerm d_46 = ATgetArgument(t, 1);
          }
          {
            ATerm e_46 = ATgetArgument(t, 2);
          }
          {
            ATerm f_46 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = c_121;
    }
  return(t);
}
static ATerm g_12 (ATerm y_78, ATerm x_78, ATerm t)
{
  t = y_78;
  t = map_1_0(f_9, t);
  return(t);
}
ATerm SVar_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm o_121 = NULL,p_121 = NULL,q_121 = NULL,r_121 = NULL,a_20 = NULL;
  r_121 = t;
  if(match_cons(t, sym_SVar_1))
    {
      p_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_121);
  o_121 = t;
  t = p_121;
  t = q_89(t);
  q_121 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, q_121);
  a_20 = t;
  t = SSLsetAnnotations(a_20, o_121);
  return(t);
}
static ATerm q_12 (ATerm k_135 (ATerm), ATerm l_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_69, ATerm d_69, ATerm c_69, ATerm t)
{
  static ATerm g_9 (ATerm t)
  {
    ATerm y_121 = NULL;
    y_121 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_121, c_69);
    t = k_135(t);
    return(t);
  }
  static ATerm h_9 (ATerm t)
  {
    ATerm z_121 = NULL;
    z_121 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_121, d_69);
    t = k_135(t);
    return(t);
  }
  t = e_69;
  t = l_135(g_9, h_9, _id, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_46 = ATgetArgument(t, 0);
      if(((ATgetType(g_46) != AT_LIST) || !(ATisEmpty(g_46))))
        _fail(t);
      {
        ATerm h_46 = ATgetArgument(t, 1);
        if(((ATgetType(h_46) != AT_LIST) || !(ATisEmpty(h_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_46 = ATgetArgument(t, 0);
      if(((ATgetType(i_46) == AT_LIST) && !(ATisEmpty(i_46))))
        {
          i_122 = ATgetFirst((ATermList) i_46);
          j_122 = (ATerm) ATgetNext((ATermList) i_46);
        }
      else
        _fail(t);
      {
        ATerm j_46 = ATgetArgument(t, 1);
        if(((ATgetType(j_46) == AT_LIST) && !(ATisEmpty(j_46))))
          {
            k_122 = ATgetFirst((ATermList) j_46);
            l_122 = (ATerm) ATgetNext((ATermList) j_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_122, k_122), (ATerm) ATmakeAppl(sym__2, j_122, l_122));
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm m_122 = NULL,n_122 = NULL;
  if(match_cons(t, sym__2))
    {
      m_122 = ATgetArgument(t, 0);
      n_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_122), m_122);
  return(t);
}
static ATerm r_12 (ATerm e_135 (ATerm), ATerm f_135 (ATerm (ATerm), ATerm), ATerm w_68, ATerm z_68, ATerm t)
{
  ATerm c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,h_122 = NULL;
  t = w_68;
  t = e_135(t);
  c_122 = t;
  t = map_1_0(new_0_0, t);
  d_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_122, d_122);
  t = genzip_4_0(i_9, j_9, l_9, _id, t);
  h_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_122, z_68);
  t = conc_0_0(t);
  e_122 = t;
  t = w_68;
  {
    static ATerm m_9 (ATerm t)
    {
      t = d_122;
      return(t);
    }
    t = f_135(m_9, t);
  }
  f_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_122, z_68, e_122);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm s_122 = NULL,t_122 = NULL,u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL,y_122 = NULL;
  u_122 = t;
  if(match_cons(t, sym__2))
    {
      v_122 = ATgetArgument(t, 0);
      w_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_122;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_122 = ATgetFirst((ATermList) t);
      y_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_122;
  if(match_cons(t, sym__2))
    {
      s_122 = ATgetArgument(t, 0);
      t_122 = ATgetArgument(t, 1);
      {
        ATerm k_46 = t;
        int l_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_122;
            if((v_122 != t))
              {
                _fail(t);
              }
            t = t_122;
            LocalPopChoice(l_46);
          }
        else
          {
            t = k_46;
            t = (ATerm) ATmakeAppl(sym__2, v_122, y_122);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, v_122, y_122);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm u_127 (ATerm), ATerm t)
{
  static ATerm v_123 (ATerm t)
  {
    ATerm m_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_127(t);
        LocalPopChoice(n_46);
      }
    else
      {
        t = m_46;
        {
          ATerm s_123 = NULL,t_123 = NULL,u_123 = NULL;
          static ATerm o_9 (ATerm t)
          {
            ATerm j_53 = NULL;
            j_53 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_53, not_null(u_123));
            t = v_123(t);
            return(t);
          }
          s_123 = t;
          if(match_cons(t, sym__2))
            {
              t_123 = ATgetArgument(t, 0);
              if(((u_123 != NULL) && (u_123 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                u_123 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_123;
          t = SRTS_all(o_9, t);
        }
      }
    return(t);
  }
  t = v_123(t);
  return(t);
}
ATerm rename_4_0 (ATerm z_134 (ATerm (ATerm), ATerm), ATerm a_135 (ATerm), ATerm b_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_135 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_123 = NULL;
  static ATerm t_124 (ATerm t)
  {
    static ATerm q_9 (ATerm t)
    {
      ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL;
      n_124 = t;
      if(match_cons(t, sym__2))
        {
          o_124 = ATgetArgument(t, 0);
          p_124 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_46 = t;
        int p_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_9 (ATerm t)
            {
              ATerm s_124 = NULL;
              s_124 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_124, p_124);
              t = lookup_0_0(t);
              return(t);
            }
            t = o_124;
            t = z_134(r_9, t);
            LocalPopChoice(p_46);
          }
        else
          {
            t = o_46;
            {
              ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
              t = n_124;
              t = r_12(a_135, c_135, o_124, p_124, t);
              if(match_cons(t, sym__3))
                {
                  t_53 = ATgetArgument(t, 0);
                  u_53 = ATgetArgument(t, 1);
                  v_53 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_12(t_124, b_135, t_53, u_53, v_53, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(q_9, t);
    return(t);
  }
  z_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_123, (ATerm) ATempty);
  t = t_124(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_46 = ATgetArgument(t, 0);
      if(((ATgetType(q_46) != AT_LIST) || !(ATisEmpty(q_46))))
        _fail(t);
      {
        ATerm r_46 = ATgetArgument(t, 1);
        if(((ATgetType(r_46) != AT_LIST) || !(ATisEmpty(r_46))))
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
  ATerm q_56 = NULL,r_56 = NULL,v_56 = NULL,w_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_46 = ATgetArgument(t, 0);
      if(((ATgetType(s_46) == AT_LIST) && !(ATisEmpty(s_46))))
        {
          q_56 = ATgetFirst((ATermList) s_46);
          r_56 = (ATerm) ATgetNext((ATermList) s_46);
        }
      else
        _fail(t);
      {
        ATerm t_46 = ATgetArgument(t, 1);
        if(((ATgetType(t_46) == AT_LIST) && !(ATisEmpty(t_46))))
          {
            v_56 = ATgetFirst((ATermList) t_46);
            w_56 = (ATerm) ATgetNext((ATermList) t_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_56, v_56), (ATerm) ATmakeAppl(sym__2, r_56, w_56));
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
  ATerm b_57 = NULL,d_57 = NULL,e_57 = NULL;
  if(match_cons(t, sym__2))
    {
      b_57 = ATgetArgument(t, 0);
      e_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_57;
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_46);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_57);
      }
    else
      {
        t = u_46;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_46 = ATgetArgument(t, 0);
            d_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_57, d_57);
      }
  }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_46 = ATgetArgument(t, 0);
      if(((ATgetType(z_46) != AT_LIST) || !(ATisEmpty(z_46))))
        _fail(t);
      {
        ATerm a_47 = ATgetArgument(t, 1);
        if(((ATgetType(a_47) != AT_LIST) || !(ATisEmpty(a_47))))
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
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,q_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_47 = ATgetArgument(t, 0);
      if(((ATgetType(b_47) == AT_LIST) && !(ATisEmpty(b_47))))
        {
          m_58 = ATgetFirst((ATermList) b_47);
          n_58 = (ATerm) ATgetNext((ATermList) b_47);
        }
      else
        _fail(t);
      {
        ATerm c_47 = ATgetArgument(t, 1);
        if(((ATgetType(c_47) == AT_LIST) && !(ATisEmpty(c_47))))
          {
            o_58 = ATgetFirst((ATermList) c_47);
            q_58 = (ATerm) ATgetNext((ATermList) c_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_58, o_58), (ATerm) ATmakeAppl(sym__2, n_58, q_58));
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL;
  if(match_cons(t, sym__2))
    {
      r_58 = ATgetArgument(t, 0);
      s_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_58), r_58);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm u_58 = NULL,w_58 = NULL,x_58 = NULL;
  if(match_cons(t, sym__2))
    {
      u_58 = ATgetArgument(t, 0);
      x_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_58;
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_58);
      }
    else
      {
        t = d_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_47 = ATgetArgument(t, 0);
            w_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_58, w_58);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm b_139 (ATerm), ATerm t)
{
  ATerm n_127 = NULL,o_127 = NULL,p_127 = NULL,q_127 = NULL,r_127 = NULL;
  n_127 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_127 = ATgetArgument(t, 0);
      p_127 = ATgetArgument(t, 1);
      {
        ATerm s_54 = NULL,z_54 = NULL,c_20 = NULL;
        t = SSLgetAnnotations(n_127);
        s_54 = t;
        t = o_127;
        t = b_139(t);
        z_54 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_54, p_127);
        c_20 = t;
        t = SSLsetAnnotations(c_20, s_54);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          o_127 = ATgetArgument(t, 0);
          p_127 = ATgetArgument(t, 1);
          q_127 = ATgetArgument(t, 2);
          r_127 = ATgetArgument(t, 3);
          {
            ATerm x_55 = NULL,e_56 = NULL,o_56 = NULL,h_20 = NULL;
            t = SSLgetAnnotations(n_127);
            x_55 = t;
            t = q_127;
            t = b_139(t);
            o_56 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_127, o_56);
            t = genzip_4_0(s_9, t_9, u_9, v_9, t);
            e_56 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, o_127, p_127, e_56, r_127);
            h_20 = t;
            t = SSLsetAnnotations(h_20, x_55);
          }
        }
      else
        {
          ATerm e_58 = NULL,j_58 = NULL,k_58 = NULL,i_20 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              o_127 = ATgetArgument(t, 0);
              p_127 = ATgetArgument(t, 1);
              q_127 = ATgetArgument(t, 2);
              r_127 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_127);
          e_58 = t;
          t = q_127;
          t = b_139(t);
          k_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_127, k_58);
          t = genzip_4_0(w_9, x_9, y_9, z_9, t);
          j_58 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, o_127, p_127, j_58, r_127);
          i_20 = t;
          t = SSLsetAnnotations(i_20, e_58);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm e_139 (ATerm), ATerm t)
{
  ATerm u_130 = NULL,v_130 = NULL,w_130 = NULL,x_130 = NULL,y_130 = NULL;
  x_130 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_130 = ATgetArgument(t, 0);
      u_130 = ATgetArgument(t, 1);
      {
        ATerm k_59 = NULL,o_59 = NULL,p_59 = NULL,n_20 = NULL;
        t = SSLgetAnnotations(x_130);
        k_59 = t;
        t = y_130;
        t = e_139(t);
        o_59 = t;
        t = u_130;
        t = c_139(t);
        p_59 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_59, p_59);
        n_20 = t;
        t = SSLsetAnnotations(n_20, k_59);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_130 = ATgetArgument(t, 0);
          u_130 = ATgetArgument(t, 1);
          v_130 = ATgetArgument(t, 2);
          w_130 = ATgetArgument(t, 3);
          {
            ATerm c_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,o_20 = NULL;
            t = SSLgetAnnotations(x_130);
            c_60 = t;
            t = y_130;
            t = e_139(t);
            w_60 = t;
            t = u_130;
            t = e_139(t);
            x_60 = t;
            t = v_130;
            t = e_139(t);
            y_60 = t;
            t = w_130;
            t = c_139(t);
            z_60 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_60, x_60, y_60, z_60);
            o_20 = t;
            t = SSLsetAnnotations(o_20, c_60);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              y_130 = ATgetArgument(t, 0);
              u_130 = ATgetArgument(t, 1);
              v_130 = ATgetArgument(t, 2);
              w_130 = ATgetArgument(t, 3);
              {
                ATerm l_61 = NULL,s_61 = NULL,t_61 = NULL,v_61 = NULL,w_61 = NULL,p_20 = NULL;
                t = SSLgetAnnotations(x_130);
                l_61 = t;
                t = y_130;
                t = e_139(t);
                s_61 = t;
                t = u_130;
                t = e_139(t);
                t_61 = t;
                t = v_130;
                t = e_139(t);
                v_61 = t;
                t = w_130;
                t = c_139(t);
                w_61 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, s_61, t_61, v_61, w_61);
                p_20 = t;
                t = SSLsetAnnotations(p_20, l_61);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  y_130 = ATgetArgument(t, 0);
                  {
                    ATerm f_62 = NULL,h_62 = NULL,r_20 = NULL;
                    t = SSLgetAnnotations(x_130);
                    f_62 = t;
                    t = y_130;
                    t = c_139(t);
                    h_62 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_62);
                    r_20 = t;
                    t = SSLsetAnnotations(r_20, f_62);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      y_130 = ATgetArgument(t, 0);
                      {
                        ATerm r_62 = NULL,t_62 = NULL,v_20 = NULL;
                        t = SSLgetAnnotations(x_130);
                        r_62 = t;
                        t = y_130;
                        t = c_139(t);
                        t_62 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, t_62);
                        v_20 = t;
                        t = SSLsetAnnotations(v_20, r_62);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          y_130 = ATgetArgument(t, 0);
                          {
                            ATerm e_63 = NULL,j_63 = NULL,w_20 = NULL;
                            t = SSLgetAnnotations(x_130);
                            e_63 = t;
                            t = y_130;
                            t = c_139(t);
                            j_63 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, j_63);
                            w_20 = t;
                            t = SSLsetAnnotations(w_20, e_63);
                          }
                        }
                      else
                        {
                          ATerm c_64 = NULL,k_64 = NULL,x_20 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              y_130 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(x_130);
                          c_64 = t;
                          t = y_130;
                          t = c_139(t);
                          k_64 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, k_64);
                          x_20 = t;
                          t = SSLsetAnnotations(x_20, c_64);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm b_132 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_132);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm h_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_47);
    }
  else
    {
      t = h_47;
      {
        ATerm l_47 = t;
        int n_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_47);
          }
        else
          {
            t = l_47;
            {
              ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  d_132 = ATgetArgument(t, 0);
                  e_132 = ATgetArgument(t, 1);
                  f_132 = ATgetArgument(t, 2);
                  g_132 = ATgetArgument(t, 3);
                  t = f_132;
                  t = map_1_0(n_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_132 = ATgetArgument(t, 0);
                      e_132 = ATgetArgument(t, 1);
                      f_132 = ATgetArgument(t, 2);
                      g_132 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_132;
                  t = map_1_0(r_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm n_132 = NULL;
  ATerm s_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_132 = ATgetArgument(t, 0);
          {
            ATerm v_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_47);
      t = n_132;
    }
  else
    {
      t = s_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_132;
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm w_132 = NULL;
  ATerm w_47 = t;
  int y_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_132 = ATgetArgument(t, 0);
          {
            ATerm b_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_47);
      t = w_132;
    }
  else
    {
      t = w_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_132;
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm a_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_133);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm c_48 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_48);
    }
  else
    {
      t = c_48;
      {
        ATerm e_48 = t;
        int f_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_48);
          }
        else
          {
            t = e_48;
            {
              ATerm c_133 = NULL,d_133 = NULL,e_133 = NULL,f_133 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_133 = ATgetArgument(t, 0);
                  d_133 = ATgetArgument(t, 1);
                  e_133 = ATgetArgument(t, 2);
                  f_133 = ATgetArgument(t, 3);
                  t = e_133;
                  t = map_1_0(f_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_133 = ATgetArgument(t, 0);
                      d_133 = ATgetArgument(t, 1);
                      e_133 = ATgetArgument(t, 2);
                      f_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_133;
                  t = map_1_0(k_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm m_133 = NULL;
  ATerm g_48 = t;
  int h_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_133 = ATgetArgument(t, 0);
          {
            ATerm i_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_48);
      t = m_133;
    }
  else
    {
      t = g_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_133;
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm v_133 = NULL;
  ATerm j_48 = t;
  int k_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_133 = ATgetArgument(t, 0);
          {
            ATerm l_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_48);
      t = v_133;
    }
  else
    {
      t = j_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_133;
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm z_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_133);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm m_48 = t;
  int n_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_48);
    }
  else
    {
      t = m_48;
      {
        ATerm o_48 = t;
        int p_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_48);
          }
        else
          {
            t = o_48;
            {
              ATerm b_134 = NULL,c_134 = NULL,d_134 = NULL,g_134 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_134 = ATgetArgument(t, 0);
                  c_134 = ATgetArgument(t, 1);
                  d_134 = ATgetArgument(t, 2);
                  g_134 = ATgetArgument(t, 3);
                  t = d_134;
                  t = map_1_0(p_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_134 = ATgetArgument(t, 0);
                      c_134 = ATgetArgument(t, 1);
                      d_134 = ATgetArgument(t, 2);
                      g_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_134;
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
  ATerm p_134 = NULL;
  ATerm q_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_134 = ATgetArgument(t, 0);
          {
            ATerm t_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_48);
      t = p_134;
    }
  else
    {
      t = q_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_134;
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm h_135 = NULL;
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_135 = ATgetArgument(t, 0);
          {
            ATerm w_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_48);
      t = h_135;
    }
  else
    {
      t = u_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_135;
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm n_135 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_135);
  return(t);
}
static ATerm t_11 (ATerm t)
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
              ATerm p_135 = NULL,q_135 = NULL,r_135 = NULL,s_135 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_135 = ATgetArgument(t, 0);
                  q_135 = ATgetArgument(t, 1);
                  r_135 = ATgetArgument(t, 2);
                  s_135 = ATgetArgument(t, 3);
                  t = r_135;
                  t = map_1_0(u_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_135 = ATgetArgument(t, 0);
                      q_135 = ATgetArgument(t, 1);
                      r_135 = ATgetArgument(t, 2);
                      s_135 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_135;
                  t = map_1_0(w_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm z_135 = NULL;
  ATerm b_49 = t;
  int c_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_135 = ATgetArgument(t, 0);
          {
            ATerm e_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_49);
      t = z_135;
    }
  else
    {
      t = b_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_135;
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm i_136 = NULL;
  ATerm f_49 = t;
  int i_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_136 = ATgetArgument(t, 0);
          {
            ATerm m_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_49);
      t = i_136;
    }
  else
    {
      t = f_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_136;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm z_131 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      z_131 = ATgetArgument(t, 0);
      t = z_131;
      t = free_vars_3_0(i_10, k_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          z_131 = ATgetArgument(t, 0);
          t = z_131;
          t = free_vars_3_0(w_10, a_11, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              z_131 = ATgetArgument(t, 0);
              t = z_131;
              t = free_vars_3_0(n_11, o_11, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  z_131 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_131;
              t = free_vars_3_0(r_11, t_11, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm k_12 (ATerm i_121 (ATerm), ATerm k_51, ATerm j_51, ATerm t)
{
  static ATerm e_137 (ATerm t)
  {
    ATerm z_136 = NULL,a_137 = NULL,b_137 = NULL;
    z_136 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_51;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_137 = ATgetFirst((ATermList) t);
            b_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_49 = t;
          int u_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_136;
              {
                static ATerm x_11 (ATerm t)
                {
                  t = j_51;
                  return(t);
                }
                t = l_12(i_121, x_11, a_137, b_137, t);
              }
              t = e_137(t);
              LocalPopChoice(u_49);
            }
          else
            {
              t = n_49;
              {
                ATerm u_64 = NULL,a_65 = NULL,j_21 = NULL;
                t = SSLgetAnnotations(z_136);
                u_64 = t;
                t = b_137;
                t = e_137(t);
                a_65 = t;
                t = (ATerm) ATinsert(CheckATermList(a_65), a_137);
                j_21 = t;
                t = SSLsetAnnotations(j_21, u_64);
              }
            }
        }
      }
    return(t);
  }
  t = k_51;
  t = e_137(t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm h_124 (ATerm), ATerm t)
{
  ATerm h_137 = NULL,i_137 = NULL,j_137 = NULL;
  h_137 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_137;
      t = f_124(t);
    }
  else
    {
      ATerm m_137 = NULL,n_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_137 = ATgetFirst((ATermList) t);
          j_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_137;
      t = h_124(t);
      m_137 = t;
      t = j_137;
      t = foldr_3_0(f_124, g_124, h_124, t);
      n_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_137, n_137);
      t = g_124(t);
    }
  return(t);
}
static ATerm l_12 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm o_51, ATerm n_51, ATerm t)
{
  t = m_121(t);
  {
    static ATerm y_11 (ATerm t)
    {
      ATerm q_137 = NULL;
      q_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_51, q_137);
      t = l_121(t);
      return(t);
    }
    t = fetch_1_0(y_11, t);
  }
  t = n_51;
  return(t);
}
static ATerm m_12 (ATerm d_121 (ATerm), ATerm i_51, ATerm h_51, ATerm t)
{
  static ATerm i_138 (ATerm t)
  {
    ATerm b_138 = NULL,c_138 = NULL,d_138 = NULL;
    b_138 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_138;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_138 = ATgetFirst((ATermList) t);
            d_138 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_49 = t;
          int w_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_138;
              {
                static ATerm z_11 (ATerm t)
                {
                  t = h_51;
                  return(t);
                }
                t = l_12(d_121, z_11, c_138, d_138, t);
              }
              t = i_138(t);
              LocalPopChoice(w_49);
            }
          else
            {
              t = v_49;
              {
                ATerm t_65 = NULL,c_66 = NULL,l_21 = NULL;
                t = SSLgetAnnotations(b_138);
                t_65 = t;
                t = d_138;
                t = i_138(t);
                c_66 = t;
                t = (ATerm) ATinsert(CheckATermList(c_66), c_138);
                l_21 = t;
                t = SSLsetAnnotations(l_21, t_65);
              }
            }
        }
      }
    return(t);
  }
  t = i_51;
  t = i_138(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_117 (ATerm), ATerm t)
{
  static ATerm m_139 (ATerm t)
  {
    ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL;
    l_139 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_139 = ATgetFirst((ATermList) t);
        k_139 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_66 = NULL,w_66 = NULL,n_21 = NULL;
          t = SSLgetAnnotations(l_139);
          t_66 = t;
          t = k_139;
          t = m_139(t);
          w_66 = t;
          t = (ATerm) ATinsert(CheckATermList(w_66), j_139);
          n_21 = t;
          t = SSLsetAnnotations(n_21, t_66);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_139;
        t = o_117(t);
      }
    return(t);
  }
  t = m_139(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_138 = NULL,m_138 = NULL,n_138 = NULL;
  l_138 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_138;
    }
  else
    {
      static ATerm e_12 (ATerm t)
      {
        t = not_null(n_138);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_138 = ATgetFirst((ATermList) t);
          if(((n_138 != NULL) && (n_138 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_138 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_138;
      t = at_end_1_0(e_12, t);
    }
  return(t);
}
static ATerm a_140 (ATerm q_139, ATerm t)
{
  ATerm t_139 = NULL;
  t = SSL_explode_term(q_139);
  if(match_cons(t, sym__2))
    {
      ATerm x_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_139;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_139 = NULL,w_139 = NULL,x_139 = NULL;
  x_139 = t;
  if(match_cons(t, sym__2))
    {
      v_139 = ATgetArgument(t, 0);
      w_139 = ATgetArgument(t, 1);
      {
        ATerm z_49 = t;
        int a_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_12 (ATerm t)
            {
              t = w_139;
              return(t);
            }
            t = v_139;
            t = at_end_1_0(j_12, t);
            LocalPopChoice(a_50);
          }
        else
          {
            t = z_49;
            t = a_140(x_139, t);
          }
      }
    }
  else
    {
      t = a_140(x_139, t);
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_50 = ATgetArgument(t, 0);
      if(((ATgetType(d_50) != AT_LIST) || !(ATisEmpty(d_50))))
        _fail(t);
      {
        ATerm e_50 = ATgetArgument(t, 1);
        if(((ATgetType(e_50) != AT_LIST) || !(ATisEmpty(e_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL,k_140 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_50 = ATgetArgument(t, 0);
      if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
        {
          h_140 = ATgetFirst((ATermList) f_50);
          i_140 = (ATerm) ATgetNext((ATermList) f_50);
        }
      else
        _fail(t);
      {
        ATerm g_50 = ATgetArgument(t, 1);
        if(((ATgetType(g_50) == AT_LIST) && !(ATisEmpty(g_50))))
          {
            j_140 = ATgetFirst((ATermList) g_50);
            k_140 = (ATerm) ATgetNext((ATermList) g_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_140, j_140), (ATerm) ATmakeAppl(sym__2, i_140, k_140));
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm l_140 = NULL,m_140 = NULL;
  if(match_cons(t, sym__2))
    {
      l_140 = ATgetArgument(t, 0);
      m_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_140), l_140);
  return(t);
}
static ATerm o_12 (ATerm w_693, ATerm b_694, ATerm x_70, ATerm t)
{
  ATerm c_140 = NULL,d_140 = NULL,e_140 = NULL,f_140 = NULL;
  t = SSL_explode_term(b_694);
  if(match_cons(t, sym__2))
    {
      c_140 = ATgetArgument(t, 0);
      e_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_693);
  if(match_cons(t, sym__2))
    {
      if((c_140 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_140, e_140);
  t = genzip_4_0(s_12, t_12, v_12, _id, t);
  f_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_140, x_70);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t)
{
  static ATerm o_140 (ATerm t)
  {
    ATerm h_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_114(t);
        LocalPopChoice(i_50);
      }
    else
      {
        t = h_50;
        t = i_114(t);
        t = o_140(t);
      }
    return(t);
  }
  t = o_140(t);
  return(t);
}
ATerm for_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t)
{
  t = k_114(t);
  t = while_not_2_0(l_114, m_114, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm v_140 = NULL;
  v_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_140);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm w_140 = NULL,x_140 = NULL,y_140 = NULL,z_140 = NULL,r_21 = NULL;
  z_140 = t;
  if(match_cons(t, sym__2))
    {
      x_140 = ATgetArgument(t, 0);
      y_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_140);
  w_140 = t;
  t = y_140;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_140, y_140);
  r_21 = t;
  t = SSLsetAnnotations(r_21, w_140);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm s_141 = NULL,t_141 = NULL,u_141 = NULL,v_141 = NULL,w_141 = NULL;
  s_141 = t;
  if(match_cons(t, sym__2))
    {
      t_141 = ATgetArgument(t, 0);
      u_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_141;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_141 = ATgetFirst((ATermList) t);
      w_141 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_50 = t;
        int k_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_142(t_141, u_141, s_141, t);
            LocalPopChoice(k_50);
          }
        else
          {
            t = j_50;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_141), v_141), w_141);
          }
      }
    }
  else
    {
      t = g_142(t_141, u_141, s_141, t);
    }
  return(t);
}
static ATerm g_142 (ATerm a_141, ATerm b_141, ATerm c_141, ATerm t)
{
  ATerm d_141 = NULL,g_141 = NULL,s_21 = NULL,j_141 = NULL,k_141 = NULL,l_141 = NULL,m_141 = NULL;
  t = SSLgetAnnotations(c_141);
  d_141 = t;
  t = b_141;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_141 = ATgetFirst((ATermList) t);
      m_141 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_141;
  if(match_cons(t, sym__2))
    {
      k_141 = ATgetArgument(t, 0);
      l_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_50 = t;
    int n_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_141;
        if((k_141 != t))
          {
            _fail(t);
          }
        t = m_141;
        LocalPopChoice(n_50);
      }
    else
      {
        t = m_50;
        t = b_141;
        t = o_12(k_141, l_141, m_141, t);
      }
  }
  g_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_141, g_141);
  s_21 = t;
  t = SSLsetAnnotations(s_21, d_141);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm f_142 = NULL;
  if(match_cons(t, sym__2))
    {
      f_142 = ATgetArgument(t, 0);
      if((f_142 != ATgetArgument(t, 1)))
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
  ATerm o_50 = t;
  int s_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_13, i_13, p_13, t);
      LocalPopChoice(s_50);
    }
  else
    {
      t = o_50;
      {
        ATerm a_142 = NULL,b_142 = NULL,c_142 = NULL;
        a_142 = t;
        if(match_cons(t, sym__2))
          {
            b_142 = ATgetArgument(t, 0);
            c_142 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_142;
        t = m_12(s_13, b_142, c_142, t);
      }
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL;
  if(match_cons(t, sym__2))
    {
      m_67 = ATgetArgument(t, 0);
      n_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12(v_14, m_67, n_67, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm o_67 = NULL;
  if(match_cons(t, sym__2))
    {
      o_67 = ATgetArgument(t, 0);
      if((o_67 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm y_67 = NULL,a_68 = NULL;
  if(match_cons(t, sym__2))
    {
      y_67 = ATgetArgument(t, 0);
      a_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12(z_14, y_67, a_68, t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm b_68 = NULL;
  if(match_cons(t, sym__2))
    {
      b_68 = ATgetArgument(t, 0);
      if((b_68 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm r_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_142 (ATerm t)
  {
    ATerm t_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_136(t);
        LocalPopChoice(u_50);
      }
    else
      {
        t = t_50;
        {
          ATerm v_50 = t;
          int w_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_142 = NULL,j_142 = NULL,e_67 = NULL,f_67 = NULL;
              i_142 = t;
              t = q_136(t);
              j_142 = t;
              t = i_142;
              {
                static ATerm n_14 (ATerm t)
                {
                  ATerm l_142 = NULL;
                  t = u_142(t);
                  l_142 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_142, j_142);
                  t = diff_0_0(t);
                  return(t);
                }
                t = r_136(n_14, u_142, r_14, t);
              }
              f_67 = t;
              t = SSL_explode_term(f_67);
              if(match_cons(t, sym__2))
                {
                  ATerm x_50 = ATgetArgument(t, 0);
                  e_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_67;
              t = foldr_3_0(s_14, u_14, _id, t);
              LocalPopChoice(w_50);
            }
          else
            {
              t = v_50;
              {
                ATerm t_67 = NULL,u_67 = NULL;
                u_67 = t;
                t = SSL_explode_term(u_67);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_50 = ATgetArgument(t, 0);
                    t_67 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_67;
                t = foldr_3_0(w_14, x_14, u_142, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_142(t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm h_143 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_143);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
      {
        ATerm b_51 = t;
        int d_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_51);
          }
        else
          {
            t = b_51;
            {
              ATerm j_143 = NULL,k_143 = NULL,l_143 = NULL,m_143 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_143 = ATgetArgument(t, 0);
                  k_143 = ATgetArgument(t, 1);
                  l_143 = ATgetArgument(t, 2);
                  m_143 = ATgetArgument(t, 3);
                  t = l_143;
                  t = map_1_0(i_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_143 = ATgetArgument(t, 0);
                      k_143 = ATgetArgument(t, 1);
                      l_143 = ATgetArgument(t, 2);
                      m_143 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_143;
                  t = map_1_0(l_15, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm t_143 = NULL;
  ATerm e_51 = t;
  int f_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_143 = ATgetArgument(t, 0);
          {
            ATerm g_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_51);
      t = t_143;
    }
  else
    {
      t = e_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_143;
    }
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm c_144 = NULL;
  ATerm m_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_144 = ATgetArgument(t, 0);
          {
            ATerm t_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_51);
      t = c_144;
    }
  else
    {
      t = m_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_144;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_143 = NULL,e_143 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_143 = ATgetArgument(t, 0);
      t = e_143;
      if(match_cons(t, sym_Rule_3))
        {
          a_143 = ATgetArgument(t, 0);
          {
            ATerm u_51 = ATgetArgument(t, 1);
          }
          {
            ATerm v_51 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_143;
      t = free_vars_3_0(a_15, b_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_143 = ATgetArgument(t, 0);
          {
            ATerm w_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_143;
    }
  return(t);
}
ATerm Var_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL,w_21 = NULL;
  j_144 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_144);
  g_144 = t;
  t = h_144;
  t = f_86(t);
  i_144 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_144);
  w_21 = t;
  t = SSLsetAnnotations(w_21, g_144);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_51);
    }
  else
    {
      t = x_51;
      {
        ATerm s_144 = NULL,t_144 = NULL,u_144 = NULL,v_144 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            s_144 = ATgetArgument(t, 0);
            t_144 = ATgetArgument(t, 1);
            u_144 = ATgetArgument(t, 2);
            v_144 = ATgetArgument(t, 3);
            t = u_144;
            t = map_1_0(r_15, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                s_144 = ATgetArgument(t, 0);
                t_144 = ATgetArgument(t, 1);
                u_144 = ATgetArgument(t, 2);
                v_144 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = u_144;
            t = map_1_0(u_15, t);
          }
      }
    }
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm c_145 = NULL;
  ATerm z_51 = t;
  int a_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_145 = ATgetArgument(t, 0);
          {
            ATerm b_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_52);
      t = c_145;
    }
  else
    {
      t = z_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_145;
    }
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm l_145 = NULL;
  ATerm c_52 = t;
  int d_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_145 = ATgetArgument(t, 0);
          {
            ATerm e_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_52);
      t = l_145;
    }
  else
    {
      t = c_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_145;
    }
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm o_145 = NULL,p_145 = NULL,q_145 = NULL,r_145 = NULL,s_145 = NULL;
  o_145 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_145 = ATgetArgument(t, 0);
      q_145 = ATgetArgument(t, 1);
      t = o_145;
      t = g_12(p_145, q_145, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_145 = ATgetArgument(t, 0);
          q_145 = ATgetArgument(t, 1);
          r_145 = ATgetArgument(t, 2);
          t = q_145;
          t = map_1_0(x_15, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              p_145 = ATgetArgument(t, 0);
              q_145 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, p_145);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  p_145 = ATgetArgument(t, 0);
                  q_145 = ATgetArgument(t, 1);
                  r_145 = ATgetArgument(t, 2);
                  s_145 = ATgetArgument(t, 3);
                  t = q_145;
                  t = map_1_0(z_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_145 = ATgetArgument(t, 0);
                      q_145 = ATgetArgument(t, 1);
                      r_145 = ATgetArgument(t, 2);
                      s_145 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_145;
                  t = map_1_0(a_16, t);
                }
            }
        }
    }
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm a_146 = NULL;
  ATerm f_52 = t;
  int h_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_146 = ATgetArgument(t, 0);
          {
            ATerm i_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_52);
      t = a_146;
    }
  else
    {
      t = f_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_146;
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm l_146 = NULL;
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_146 = ATgetArgument(t, 0);
          {
            ATerm l_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_52);
      t = l_146;
    }
  else
    {
      t = j_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_146;
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm u_146 = NULL;
  ATerm o_52 = t;
  int p_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_146 = ATgetArgument(t, 0);
          {
            ATerm q_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_52);
      t = u_146;
    }
  else
    {
      t = o_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_146;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, n_15, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, v_15, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm x_12 (ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm x_146 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_42, a_43);
  t = n_13(z_42, a_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_146 = ATgetFirst((ATermList) t);
      {
        ATerm r_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_146;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm v_147 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_147 = ATgetArgument(t, 0);
      {
        ATerm s_52 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_147;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm w_147 = NULL,y_147 = NULL,z_147 = NULL,a_148 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      y_147 = ATgetArgument(t, 0);
      a_148 = ATgetArgument(t, 1);
      w_147 = ATgetArgument(t, 2);
      t = y_147;
      if(match_cons(t, sym_SVar_1))
        {
          z_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_148;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_147;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_147;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          y_147 = ATgetArgument(t, 0);
          a_148 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_147;
      if(match_cons(t, sym_SVar_1))
        {
          z_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_148;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_147;
    }
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm e_148 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_148 = ATgetArgument(t, 0);
      {
        ATerm t_52 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_148;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_52 = ATgetArgument(t, 0);
      if(((ATgetType(u_52) != AT_LIST) || !(ATisEmpty(u_52))))
        _fail(t);
      {
        ATerm v_52 = ATgetArgument(t, 1);
        if(((ATgetType(v_52) != AT_LIST) || !(ATisEmpty(v_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm f_148 = NULL,g_148 = NULL,h_148 = NULL,i_148 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_52 = ATgetArgument(t, 0);
      if(((ATgetType(w_52) == AT_LIST) && !(ATisEmpty(w_52))))
        {
          f_148 = ATgetFirst((ATermList) w_52);
          g_148 = (ATerm) ATgetNext((ATermList) w_52);
        }
      else
        _fail(t);
      {
        ATerm x_52 = ATgetArgument(t, 1);
        if(((ATgetType(x_52) == AT_LIST) && !(ATisEmpty(x_52))))
          {
            h_148 = ATgetFirst((ATermList) x_52);
            i_148 = (ATerm) ATgetNext((ATermList) x_52);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_148, h_148), (ATerm) ATmakeAppl(sym__2, g_148, i_148));
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm j_148 = NULL,k_148 = NULL;
  if(match_cons(t, sym__2))
    {
      j_148 = ATgetArgument(t, 0);
      k_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_148), j_148);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm l_148 = NULL,m_148 = NULL;
  if(match_cons(t, sym__2))
    {
      l_148 = ATgetArgument(t, 0);
      m_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_148), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_148)));
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm i_147 = NULL,j_147 = NULL,k_147 = NULL,l_147 = NULL,m_147 = NULL,n_147 = NULL,o_147 = NULL,p_147 = NULL,q_147 = NULL,r_147 = NULL,t_147 = NULL,u_147 = NULL,c_68 = NULL,d_68 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm y_52 = ATgetArgument(t, 0);
      if(match_cons(y_52, sym_SVar_1))
        {
          k_147 = ATgetArgument(y_52, 0);
        }
      else
        _fail(t);
      m_147 = ATgetArgument(t, 1);
      q_147 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_147), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  c_68 = t;
  t = term_e_53;
  d_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_53, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_147), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = x_12(d_68, c_68, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm g_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_53) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      i_147 = ATgetArgument(t, 1);
      j_147 = ATgetArgument(t, 2);
      p_147 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, k_147, i_147, p_147, j_147);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((k_147 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_147 = ATgetArgument(t, 1);
      {
        ATerm h_53 = ATgetArgument(t, 2);
      }
      n_147 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_147;
  t = map_1_0(c_16, t);
  u_147 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_147, m_147, n_147);
  t = substitute_2_0(g_16, _id, t);
  o_147 = t;
  t = p_147;
  t = map_1_0(h_16, t);
  r_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_147, r_147);
  t = genzip_4_0(i_16, j_16, k_16, l_16, t);
  t_147 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_147, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_147), o_147));
  t = downup_1_0(q_16, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm w_148 = NULL,x_148 = NULL,y_148 = NULL;
  w_148 = t;
  t = term_g_21;
  x_148 = t;
  t = (ATerm) ATinsert(ATempty, term_k_53);
  y_148 = t;
  t = SSL_printnl(x_148, y_148);
  t = w_148;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = debug_1_0(v_16, t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = term_l_53;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm g_149 = NULL,h_149 = NULL,i_149 = NULL;
  g_149 = t;
  t = term_g_21;
  h_149 = t;
  t = (ATerm) ATinsert(ATempty, term_n_53);
  i_149 = t;
  t = SSL_printnl(h_149, i_149);
  t = g_149;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm u_148 = NULL,v_148 = NULL;
  v_148 = t;
  t = new_0_0(t);
  u_148 = t;
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_53, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_148), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
        t = if_verbose2_1_0(t_16, t);
        _fail(t);
      }
  }
  {
    ATerm y_53 = t;
    int z_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_148 = NULL,a_149 = NULL,b_149 = NULL,c_149 = NULL,d_149 = NULL,e_149 = NULL,f_149 = NULL;
        z_148 = t;
        if(match_cons(t, sym_LChoice_2))
          {
            a_149 = ATgetArgument(t, 0);
            f_149 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_149;
        if(match_cons(t, sym_CallT_3))
          {
            b_149 = ATgetArgument(t, 0);
            d_149 = ATgetArgument(t, 1);
            e_149 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = b_149;
        if(match_cons(t, sym_SVar_1))
          {
            c_149 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_149;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_149;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_149;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        t = c_149;
        if((u_148 != t))
          {
            _fail(t);
          }
        t = z_148;
        LocalPopChoice(z_53);
      }
    else
      {
        t = y_53;
        t = if_verbose1_1_0(u_16, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(w_16, t);
  t = v_148;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
static ATerm y_12 (ATerm q_115 (ATerm), ATerm k_41, ATerm i_41, ATerm t)
{
  ATerm j_149 = NULL,k_149 = NULL,l_149 = NULL,m_149 = NULL,n_149 = NULL,o_149 = NULL;
  m_149 = t;
  t = q_115(t);
  j_149 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_149, k_41, i_41);
  t = o_13(j_149, k_41, i_41, t);
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_149 = NULL;
        t = term_r_31;
        p_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_149, term_r_31);
        t = n_13(j_149, p_149, t);
        LocalPopChoice(b_54);
      }
    else
      {
        t = a_54;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_149 = ATgetFirst((ATermList) t);
      l_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_31;
  n_149 = t;
  t = (ATerm) ATinsert(CheckATermList(l_149), (ATerm) ATinsert(CheckATermList(k_149), k_41));
  o_149 = t;
  t = SSL_table_put(j_149, n_149, o_149);
  t = m_149;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_e_53;
  return(t);
}
static ATerm z_12 (ATerm j_22, ATerm k_22, ATerm m_22, ATerm l_22, ATerm t)
{
  ATerm q_149 = NULL,r_149 = NULL,s_149 = NULL;
  q_149 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  r_149 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_c_54, k_22, l_22, m_22);
  s_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_c_54, k_22, l_22, m_22));
  t = y_12(x_16, r_149, s_149, t);
  t = q_149;
  return(t);
}
ATerm map_1_0 (ATerm x_116 (ATerm), ATerm t)
{
  static ATerm h_150 (ATerm t)
  {
    ATerm e_150 = NULL,f_150 = NULL,g_150 = NULL;
    e_150 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_150;
      }
    else
      {
        ATerm i_68 = NULL,l_68 = NULL,m_68 = NULL,b_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_150 = ATgetFirst((ATermList) t);
            g_150 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_150);
        i_68 = t;
        t = f_150;
        t = x_116(t);
        l_68 = t;
        t = g_150;
        t = h_150(t);
        m_68 = t;
        t = (ATerm) ATinsert(CheckATermList(m_68), l_68);
        b_22 = t;
        t = SSLsetAnnotations(b_22, i_68);
      }
    return(t);
  }
  t = h_150(t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  ATerm j_150 = NULL,k_150 = NULL,l_150 = NULL,m_150 = NULL,n_150 = NULL,o_150 = NULL,d_22 = NULL;
  o_150 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_150 = ATgetFirst((ATermList) t);
      l_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_150);
  j_150 = t;
  t = k_150;
  t = c_104(t);
  m_150 = t;
  t = l_150;
  t = d_104(t);
  n_150 = t;
  t = (ATerm) ATinsert(CheckATermList(n_150), m_150);
  d_22 = t;
  t = SSLsetAnnotations(d_22, j_150);
  return(t);
}
static ATerm b_13 (ATerm n_32, ATerm o_32, ATerm t)
{
  ATerm p_150 = NULL;
  t = SSL_fputc(n_32, o_32);
  p_150 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_150);
  return(t);
}
static ATerm c_13 (ATerm d_38, ATerm e_38, ATerm t)
{
  ATerm q_150 = NULL;
  t = SSL_write_term_to_stream_text(d_38, e_38);
  q_150 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_150);
  return(t);
}
static ATerm e_13 (ATerm f_115 (ATerm), ATerm b_320, ATerm l_38, ATerm t)
{
  ATerm r_150 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_320, term_e_54);
  t = k_13(t);
  r_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_150, l_38);
  t = f_115(t);
  t = fclose_0_0(t);
  t = l_38;
  return(t);
}
static ATerm d_13 (ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm s_150 = NULL;
  t = SSL_write_term_to_stream_baf(x_37, y_37);
  s_150 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_150);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm j_69 = NULL,m_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_54 = ATgetArgument(t, 0);
      if(match_cons(f_54, sym_Stream_1))
        {
          j_69 = ATgetArgument(f_54, 0);
        }
      else
        _fail(t);
      m_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_13(j_69, m_69, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_54 = ATgetArgument(t, 0);
      if(match_cons(g_54, sym_Stream_1))
        {
          m_70 = ATgetArgument(g_54, 0);
        }
      else
        _fail(t);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_13(m_70, n_70, t);
  j_70 = t;
  t = term_q_23;
  k_70 = t;
  t = j_70;
  if(match_cons(t, sym_Stream_1))
    {
      l_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, j_70);
  t = b_13(k_70, l_70, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_150 = NULL,x_150 = NULL,y_150 = NULL,z_150 = NULL,a_151 = NULL,c_151 = NULL,d_151 = NULL,e_151 = NULL,f_151 = NULL,g_151 = NULL,g_152 = NULL,h_152 = NULL,g_22 = NULL,f_22 = NULL;
  x_150 = t;
  if(match_cons(t, sym__2))
    {
      e_151 = ATgetArgument(t, 0);
      f_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_150);
  d_151 = t;
  t = e_151;
  {
    ATerm h_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_16 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_150 != NULL) && (w_150 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_150 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_16, t);
        LocalPopChoice(i_54);
      }
    else
      {
        t = h_54;
        t = term_j_54;
        w_150 = t;
      }
  }
  g_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_151, f_151);
  f_22 = t;
  t = SSLsetAnnotations(f_22, d_151);
  t = x_150;
  if(match_cons(t, sym__2))
    {
      z_150 = ATgetArgument(t, 0);
      a_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_150);
  y_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_150, (ATerm) ATmakeAppl(sym__2, not_null(w_150), a_151));
  g_22 = t;
  t = SSLsetAnnotations(g_22, y_150);
  c_151 = t;
  if(match_cons(t, sym__2))
    {
      g_152 = ATgetArgument(t, 0);
      h_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_68 = NULL,y_68 = NULL,a_69 = NULL,f_69 = NULL,g_69 = NULL,h_22 = NULL;
        t = SSLgetAnnotations(c_151);
        u_68 = t;
        t = g_152;
        t = fetch_1_0(d_17, t);
        y_68 = t;
        t = h_152;
        if(match_cons(t, sym__2))
          {
            f_69 = ATgetArgument(t, 0);
            g_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_13(f_17, f_69, g_69, t);
        a_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_68, a_69);
        h_22 = t;
        t = SSLsetAnnotations(h_22, u_68);
        LocalPopChoice(m_54);
      }
    else
      {
        t = k_54;
        {
          ATerm v_69 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,i_22 = NULL;
          t = SSLgetAnnotations(c_151);
          v_69 = t;
          t = h_152;
          if(match_cons(t, sym__2))
            {
              h_70 = ATgetArgument(t, 0);
              i_70 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_13(g_17, h_70, i_70, t);
          g_70 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_152, g_70);
          i_22 = t;
          t = SSLsetAnnotations(i_22, v_69);
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
ATerm apply_strategy_1_0 (ATerm c_130 (ATerm), ATerm t)
{
  ATerm k_152 = NULL,l_152 = NULL,m_152 = NULL,n_152 = NULL,o_152 = NULL;
  o_152 = t;
  t = dtime_0_0(t);
  t = o_152;
  t = c_130(t);
  n_152 = t;
  t = dtime_0_0(t);
  k_152 = t;
  t = n_152;
  if(match_cons(t, sym__2))
    {
      l_152 = ATgetArgument(t, 0);
      m_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_152), (ATerm) ATmakeAppl(sym_Runtime_1, k_152)), m_152);
  return(t);
}
static ATerm c_153 (ATerm w_152, ATerm t)
{
  t = SSL_fclose(w_152);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_152 = NULL,a_153 = NULL;
  a_153 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_152 = ATgetArgument(t, 0);
      {
        ATerm n_54 = t;
        int o_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_152);
            LocalPopChoice(o_54);
          }
        else
          {
            t = n_54;
            t = c_153(a_153, t);
          }
      }
    }
  else
    {
      t = c_153(a_153, t);
    }
  return(t);
}
static ATerm g_13 (ATerm g_38, ATerm t)
{
  t = SSL_read_term_from_stream(g_38);
  return(t);
}
static ATerm h_13 (ATerm g_31, ATerm h_31, ATerm t)
{
  t = SSL_strcat(g_31, h_31);
  return(t);
}
static ATerm j_13 (ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm d_153 = NULL;
  t = SSL_fopen(p_32, q_32);
  d_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_153);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_153 = NULL;
  t = SSL_stdin_stream();
  e_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_153);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_153 = NULL;
  t = SSL_stdout_stream();
  f_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_153);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_153 = NULL;
  t = SSL_stderr_stream();
  g_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_153);
  return(t);
}
static ATerm n_154 (ATerm m_153, ATerm t)
{
  ATerm n_153 = NULL;
  t = SSL_explode_term(m_153);
  if(match_cons(t, sym__2))
    {
      ATerm p_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_54 = ATgetArgument(t, 1);
        if(((ATgetType(q_54) == AT_LIST) && !(ATisEmpty(q_54))))
          {
            n_153 = ATgetFirst((ATermList) q_54);
            {
              ATerm r_54 = (ATerm) ATgetNext((ATermList) q_54);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_153;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_153;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_153;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_153;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_154 (ATerm q_153, ATerm r_153, ATerm s_153, ATerm t)
{
  ATerm t_153 = NULL,u_153 = NULL,v_153 = NULL,y_153 = NULL,b_23 = NULL;
  t = SSLgetAnnotations(s_153);
  v_153 = t;
  t = q_153;
  if(match_cons(t, sym_Path_1))
    {
      y_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_153, r_153);
  b_23 = t;
  t = SSLsetAnnotations(b_23, v_153);
  if(match_cons(t, sym__2))
    {
      t_153 = ATgetArgument(t, 0);
      u_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_13(t_153, u_153, t);
  return(t);
}
static ATerm p_154 (ATerm a_154, ATerm b_154, ATerm c_154, ATerm t)
{
  ATerm d_154 = NULL,e_154 = NULL,f_154 = NULL,i_154 = NULL,l_23 = NULL;
  t = SSLgetAnnotations(c_154);
  f_154 = t;
  t = SSL_is_string(a_154);
  i_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_154, b_154);
  l_23 = t;
  t = SSLsetAnnotations(l_23, f_154);
  if(match_cons(t, sym__2))
    {
      d_154 = ATgetArgument(t, 0);
      e_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_13(d_154, e_154, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm k_154 = NULL,l_154 = NULL,m_154 = NULL;
  k_154 = t;
  if(match_cons(t, sym__2))
    {
      l_154 = ATgetArgument(t, 0);
      m_154 = ATgetArgument(t, 1);
      {
        ATerm t_54 = t;
        int u_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_154(k_154, t);
            LocalPopChoice(u_54);
          }
        else
          {
            t = t_54;
            {
              ATerm w_54 = t;
              int x_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_154(l_154, m_154, k_154, t);
                  LocalPopChoice(x_54);
                }
              else
                {
                  t = w_54;
                  t = p_154(l_154, m_154, k_154, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_154(k_154, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_154 = NULL,s_154 = NULL,t_154 = NULL,y_154 = NULL;
  y_154 = t;
  {
    ATerm y_54 = t;
    int a_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_154, term_b_55);
        t = k_13(t);
        LocalPopChoice(a_55);
      }
    else
      {
        t = y_54;
        {
          ATerm z_70 = NULL,a_71 = NULL;
          t = term_c_55;
          a_71 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_55, y_154);
          t = h_13(a_71, y_154, t);
          z_70 = t;
          t = SSL_perror(z_70);
          _fail(t);
        }
      }
  }
  s_154 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_13(t_154, t);
  r_154 = t;
  t = s_154;
  t = fclose_0_0(t);
  t = r_154;
  return(t);
}
ATerm fetch_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  static ATerm x_155 (ATerm t)
  {
    ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL;
    u_155 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_155 = ATgetFirst((ATermList) t);
        w_155 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_55 = t;
      int e_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_71 = NULL,i_71 = NULL,s_23 = NULL;
          t = SSLgetAnnotations(u_155);
          f_71 = t;
          t = v_155;
          t = h_117(t);
          i_71 = t;
          t = (ATerm) ATinsert(CheckATermList(w_155), i_71);
          s_23 = t;
          t = SSLsetAnnotations(s_23, f_71);
          LocalPopChoice(e_55);
        }
      else
        {
          t = d_55;
          {
            ATerm q_71 = NULL,c_72 = NULL,t_23 = NULL;
            t = SSLgetAnnotations(u_155);
            q_71 = t;
            t = w_155;
            t = x_155(t);
            c_72 = t;
            t = (ATerm) ATinsert(CheckATermList(c_72), v_155);
            t_23 = t;
            t = SSLsetAnnotations(t_23, q_71);
          }
        }
    }
    return(t);
  }
  t = x_155(t);
  return(t);
}
static ATerm n_13 (ATerm f_44, ATerm g_44, ATerm t)
{
  t = SSL_table_get(f_44, g_44);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm b_156 = NULL;
  b_156 = t;
  if(match_string(t, "-k"))
    {
      t = b_156;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_156;
    }
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm c_156 = NULL,d_156 = NULL,e_156 = NULL;
  c_156 = t;
  t = SSL_string_to_int(c_156);
  d_156 = t;
  t = term_f_55;
  e_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_55, d_156);
  t = q_13(e_156, d_156, t);
  t = c_156;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_g_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_17, r_17, s_17, t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm g_156 = NULL;
  g_156 = t;
  if(match_string(t, "-S"))
    {
      t = g_156;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_156;
    }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm h_156 = NULL,i_156 = NULL;
  t = term_q_21;
  h_156 = t;
  t = term_h_55;
  i_156 = t;
  t = term_i_55;
  t = q_13(h_156, i_156, t);
  t = term_k_55;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_l_55;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm j_156 = NULL,k_156 = NULL,l_156 = NULL;
  j_156 = t;
  t = SSL_string_to_int(j_156);
  k_156 = t;
  t = term_q_21;
  l_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, k_156);
  t = q_13(l_156, k_156, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_156);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_m_55;
  return(t);
}
static ATerm g_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm m_156 = NULL,n_156 = NULL;
  t = term_n_55;
  m_156 = t;
  t = term_f_21;
  n_156 = t;
  t = term_o_55;
  t = q_13(m_156, n_156, t);
  t = term_p_55;
  return(t);
}
static ATerm n_18 (ATerm t)
{
  t = term_q_55;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_55 = t;
  int t_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_17, y_17, a_18, t);
      LocalPopChoice(t_55);
    }
  else
    {
      t = s_55;
      {
        ATerm u_55 = t;
        int v_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_18, d_18, e_18, t);
            LocalPopChoice(v_55);
          }
        else
          {
            t = u_55;
            t = Option_3_0(g_18, h_18, n_18, t);
          }
      }
    }
  return(t);
}
static ATerm q_13 (ATerm b_65, ATerm c_65, ATerm t)
{
  ATerm o_156 = NULL;
  t = term_p_21;
  o_156 = t;
  t = SSL_table_put(o_156, b_65, c_65);
  t = (ATerm) ATmakeAppl(sym__3, term_p_21, b_65, c_65);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_156 = NULL,s_156 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_156 = NULL,u_156 = NULL,v_156 = NULL;
      t = term_f_21;
      t = e_0(t);
      t_156 = t;
      t = term_w_55;
      u_156 = t;
      t = term_y_55;
      v_156 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_55, term_y_55, t_156);
      t = o_13(u_156, v_156, t_156, t);
      _fail(t);
    }
  else
    {
      ATerm y_156 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_156 = ATgetFirst((ATermList) t);
          s_156 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_156;
      t = c_0(t);
      t = term_f_21;
      t = d_0(t);
      y_156 = t;
      t = (ATerm) ATinsert(CheckATermList(s_156), y_156);
    }
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm a_157 = NULL;
  a_157 = t;
  if(match_string(t, "-o"))
    {
      t = a_157;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_157;
    }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm b_157 = NULL,c_157 = NULL;
  b_157 = t;
  t = term_z_55;
  c_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_55, b_157);
  t = q_13(c_157, b_157, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_157);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  t = term_a_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_18, p_18, r_18, t);
  return(t);
}
static ATerm o_13 (ATerm o_42, ATerm p_42, ATerm n_42, ATerm t)
{
  ATerm e_157 = NULL,f_157 = NULL,g_157 = NULL;
  e_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_42, p_42);
  {
    ATerm b_56 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_56 = ATgetArgument(t, 0);
            ATerm h_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_42, p_42);
        t = n_13(o_42, p_42, t);
        LocalPopChoice(c_56);
      }
    else
      {
        t = b_56;
        t = (ATerm) ATempty;
      }
  }
  f_157 = t;
  t = (ATerm) ATinsert(CheckATermList(f_157), n_42);
  g_157 = t;
  t = SSL_table_put(o_42, p_42, g_157);
  t = e_157;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_157 = NULL,o_157 = NULL,p_157 = NULL,q_157 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_157 = NULL,s_157 = NULL,t_157 = NULL;
      t = term_f_21;
      t = n_0(t);
      r_157 = t;
      t = term_w_55;
      s_157 = t;
      t = term_y_55;
      t_157 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_55, term_y_55, r_157);
      t = o_13(s_157, t_157, r_157, t);
      _fail(t);
    }
  else
    {
      ATerm x_157 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_157 = ATgetFirst((ATermList) t);
          o_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_157;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_157 = ATgetFirst((ATermList) t);
          q_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_157;
      t = k_0(t);
      t = p_157;
      t = l_0(t);
      x_157 = t;
      t = (ATerm) ATinsert(CheckATermList(q_157), x_157);
    }
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm z_157 = NULL;
  z_157 = t;
  if(match_string(t, "-i"))
    {
      t = z_157;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_157;
    }
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm a_158 = NULL,b_158 = NULL;
  a_158 = t;
  t = term_i_56;
  b_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_56, a_158);
  t = q_13(b_158, a_158, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_158);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_j_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_18, w_18, x_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_158 = NULL,d_158 = NULL,e_158 = NULL,f_158 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_21;
  t = whoami_0_0(t);
  c_158 = t;
  t = term_g_21;
  e_158 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_56), c_158);
  f_158 = t;
  t = SSL_printnl(e_158, f_158);
  t = term_k_21;
  d_158 = t;
  t = SSL_exit(d_158);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_158 = NULL,h_158 = NULL;
  t = term_p_21;
  g_158 = t;
  t = term_l_56;
  h_158 = t;
  t = term_m_56;
  t = n_13(g_158, h_158, t);
  return(t);
}
static ATerm l_13 (ATerm u_39, ATerm v_39, ATerm t)
{
  ATerm n_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_39, v_39);
      LocalPopChoice(p_56);
    }
  else
    {
      t = n_56;
      t = SSL_addr(u_39, v_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm t)
{
  ATerm j_158 = NULL,k_158 = NULL,l_158 = NULL;
  j_158 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_158;
      t = d_124(t);
    }
  else
    {
      ATerm o_158 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_158 = ATgetFirst((ATermList) t);
          l_158 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_158;
      t = foldr_2_0(d_124, e_124, t);
      o_158 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_158, o_158);
      t = e_124(t);
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
  t = term_h_55;
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL;
  if(match_cons(t, sym__2))
    {
      r_72 = ATgetArgument(t, 0);
      s_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13(r_72, s_72, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_158 = NULL,h_72 = NULL,i_72 = NULL;
  t = times_0_0(t);
  i_72 = t;
  t = SSL_explode_term(i_72);
  if(match_cons(t, sym__2))
    {
      ATerm s_56 = ATgetArgument(t, 0);
      h_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_72;
  t = foldr_2_0(y_18, z_18, t);
  r_158 = t;
  t = SSL_TicksToSeconds(r_158);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_159 = NULL,d_159 = NULL,e_159 = NULL;
  c_159 = t;
  if(match_cons(t, sym__2))
    {
      d_159 = ATgetArgument(t, 0);
      e_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_56 = t;
    int u_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_159;
        if((d_159 != t))
          {
            _fail(t);
          }
        t = c_159;
        LocalPopChoice(u_56);
      }
    else
      {
        t = t_56;
        t = (ATerm) ATmakeAppl(sym__2, d_159, e_159);
        {
          ATerm z_56 = t;
          int a_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_159, e_159);
              LocalPopChoice(a_57);
            }
          else
            {
              t = z_56;
              t = SSL_gtr(d_159, e_159);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_159, e_159);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_139 (ATerm), ATerm t)
{
  ATerm i_159 = NULL;
  i_159 = t;
  {
    ATerm c_57 = t;
    int f_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_159 = NULL,l_159 = NULL,m_159 = NULL;
        t = term_p_21;
        l_159 = t;
        t = term_q_21;
        m_159 = t;
        t = term_t_21;
        t = n_13(l_159, m_159, t);
        k_159 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_159, term_k_21);
        t = geq_0_0(t);
        t = i_159;
        t = r_139(t);
        LocalPopChoice(f_57);
      }
    else
      {
        t = c_57;
        t = i_159;
      }
  }
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm o_159 = NULL,p_159 = NULL,r_159 = NULL,s_159 = NULL;
  t = run_time_0_0(t);
  o_159 = t;
  t = term_f_21;
  t = whoami_0_0(t);
  p_159 = t;
  t = term_g_21;
  r_159 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_57), o_159), term_g_57), p_159);
  s_159 = t;
  t = SSL_printnl(r_159, s_159);
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_57), o_159), term_g_57), p_159));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_159 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_55;
  t_159 = t;
  t = SSL_exit(t_159);
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm d_160 = NULL,e_160 = NULL;
  e_160 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_160;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_160 = ATgetArgument(t, 0);
          {
            ATerm i_73 = NULL,a_24 = NULL;
            t = SSLgetAnnotations(e_160);
            i_73 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_160);
            a_24 = t;
            t = SSLsetAnnotations(a_24, i_73);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_160;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_131 (ATerm), ATerm t)
{
  ATerm i_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_159 = NULL,x_159 = NULL;
      t = term_p_21;
      w_159 = t;
      t = term_l_57;
      x_159 = t;
      t = term_n_57;
      t = n_13(w_159, x_159, t);
      LocalPopChoice(j_57);
    }
  else
    {
      t = i_57;
      t = fetch_1_0(f_19, t);
    }
  t = a_131(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_160 = NULL,i_160 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_160 = ATgetFirst((ATermList) t);
      i_160 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_160 = NULL,n_160 = NULL;
        static ATerm g_19 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_160)), not_null(n_160));
          return(t);
        }
        t = i_160;
        t = i_0(t);
        if(((m_160 != NULL) && (m_160 != t)))
          _fail(t);
        else
          m_160 = t;
        t = h_160;
        t = g_0(t);
        if(((n_160 != NULL) && (n_160 != t)))
          _fail(t);
        else
          n_160 = t;
        t = i_160;
        t = reverse_acc_2_0(g_0, g_19, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_21;
      t = i_0(t);
    }
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm t_160 = NULL,u_160 = NULL,v_160 = NULL,u_24 = NULL;
  v_160 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_160);
  t_160 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_160);
  u_24 = t;
  t = SSLsetAnnotations(u_24, t_160);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm x_160 = NULL;
  x_160 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_160), term_o_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_160 = NULL,q_160 = NULL;
  ATerm p_57 = t;
  int q_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_160 = NULL,s_160 = NULL;
      t = term_p_21;
      r_160 = t;
      t = term_l_56;
      s_160 = t;
      t = term_m_56;
      t = n_13(r_160, s_160, t);
      LocalPopChoice(q_57);
    }
  else
    {
      t = p_57;
      t = fetch_1_0(i_19, t);
    }
  t = term_r_57;
  t = echo_0_0(t);
  t = term_w_55;
  p_160 = t;
  t = term_y_55;
  q_160 = t;
  t = term_u_57;
  t = n_13(p_160, q_160, t);
  t = reverse_acc_2_0(_id, j_19, t);
  t = map_1_0(l_19, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_160 = NULL,a_161 = NULL,b_161 = NULL;
  z_160 = t;
  {
    ATerm w_57 = t;
    int x_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_160;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_57 = ATgetFirst((ATermList) t);
                ATerm z_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_160;
          }
        LocalPopChoice(x_57);
      }
    else
      {
        t = w_57;
        t = (ATerm) ATinsert(ATempty, z_160);
      }
  }
  a_161 = t;
  t = term_j_54;
  b_161 = t;
  t = SSL_printnl(b_161, a_161);
  t = z_160;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_161 = NULL,g_161 = NULL;
  t = term_p_21;
  f_161 = t;
  t = term_l_56;
  g_161 = t;
  t = term_m_56;
  t = n_13(f_161, g_161, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm h_161 = NULL,i_161 = NULL;
  t = term_c_58;
  h_161 = t;
  t = term_f_21;
  i_161 = t;
  t = term_d_58;
  t = q_13(h_161, i_161, t);
  return(t);
}
static ATerm o_19 (ATerm t)
{
  t = term_f_58;
  return(t);
}
static ATerm p_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_19 (ATerm t)
{
  ATerm j_161 = NULL,k_161 = NULL,l_161 = NULL,m_161 = NULL;
  t = term_c_58;
  l_161 = t;
  t = term_f_21;
  m_161 = t;
  t = term_d_58;
  t = q_13(l_161, m_161, t);
  t = term_g_58;
  j_161 = t;
  t = term_f_21;
  k_161 = t;
  t = term_h_58;
  t = q_13(j_161, k_161, t);
  t = term_i_58;
  return(t);
}
static ATerm r_19 (ATerm t)
{
  t = term_l_58;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_58 = t;
  int t_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_19, n_19, o_19, t);
      LocalPopChoice(t_58);
    }
  else
    {
      t = p_58;
      t = Option_3_0(p_19, q_19, r_19, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_134 (ATerm), ATerm t)
{
  ATerm r_161 = NULL,s_161 = NULL,t_161 = NULL,u_161 = NULL,w_161 = NULL,x_161 = NULL,z_24 = NULL;
  r_161 = t;
  {
    ATerm v_58 = t;
    int y_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_58;
        t = f_134(t);
        LocalPopChoice(y_58);
      }
    else
      {
        t = v_58;
      }
  }
  t = r_161;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_161 = ATgetFirst((ATermList) t);
      u_161 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_161);
  s_161 = t;
  t = term_l_56;
  x_161 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_56, t_161);
  t = q_13(x_161, t_161, t);
  t = u_161;
  {
    static ATerm h_162 (ATerm t)
    {
      ATerm a_59 = t;
      int b_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_59 = t;
          int d_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_162 = NULL;
              a_162 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_162;
              LocalPopChoice(d_59);
            }
          else
            {
              t = c_59;
              t = f_134(t);
              t = Cons_2_0(_id, h_162, t);
            }
          LocalPopChoice(b_59);
        }
      else
        {
          t = a_59;
          {
            ATerm d_162 = NULL,e_162 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_162 = ATgetFirst((ATermList) t);
                e_162 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_162), (ATerm) ATmakeAppl(sym_Undefined_1, d_162));
          }
        }
      return(t);
    }
    t = h_162(t);
  }
  w_161 = t;
  t = (ATerm) ATinsert(CheckATermList(w_161), (ATerm) ATmakeAppl(sym_Program_1, t_161));
  z_24 = t;
  t = SSLsetAnnotations(z_24, s_161);
  return(t);
}
static ATerm x_19 (ATerm t)
{
  ATerm t_162 = NULL;
  t_162 = t;
  if(match_string(t, "--help"))
    {
      t = t_162;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_162;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_162;
        }
    }
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm u_162 = NULL,v_162 = NULL;
  t = term_l_57;
  u_162 = t;
  t = term_f_21;
  v_162 = t;
  t = term_e_59;
  t = q_13(u_162, v_162, t);
  t = term_f_59;
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = term_g_59;
  return(t);
}
static ATerm b_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  ATerm m_162 = NULL,n_162 = NULL,o_162 = NULL,p_162 = NULL,q_162 = NULL,r_162 = NULL,s_162 = NULL;
  o_162 = t;
  t = term_w_55;
  q_162 = t;
  t = term_y_55;
  r_162 = t;
  t = (ATerm) ATempty;
  s_162 = t;
  t = SSL_table_put(q_162, r_162, s_162);
  t = o_162;
  {
    static ATerm w_19 (ATerm t)
    {
      ATerm h_59 = t;
      int i_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_134(t);
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
                t = Option_3_0(x_19, y_19, z_19, t);
                LocalPopChoice(m_59);
              }
            else
              {
                t = j_59;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_19, t);
  }
  {
    ATerm n_59 = t;
    int r_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_163 = NULL;
        g_163 = t;
        {
          ATerm s_59 = t;
          int t_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_73 = NULL;
              t = g_163;
              {
                ATerm u_59 = t;
                int v_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_73 = NULL,r_73 = NULL;
                    t = term_p_21;
                    q_73 = t;
                    t = term_l_57;
                    r_73 = t;
                    t = term_n_57;
                    t = n_13(q_73, r_73, t);
                    LocalPopChoice(v_59);
                  }
                else
                  {
                    t = u_59;
                    t = fetch_1_0(b_20, t);
                  }
              }
              t = g_163;
              t = default_system_usage_0_0(t);
              t = term_h_55;
              p_73 = t;
              t = SSL_exit(p_73);
              LocalPopChoice(t_59);
            }
          else
            {
              t = s_59;
              {
                ATerm x_73 = NULL,y_73 = NULL,d_74 = NULL;
                t = term_p_21;
                y_73 = t;
                t = term_c_58;
                d_74 = t;
                t = term_w_59;
                t = n_13(y_73, d_74, t);
                t = g_163;
                t = default_system_about_0_0(t);
                t = term_h_55;
                x_73 = t;
                t = SSL_exit(x_73);
              }
            }
        }
        LocalPopChoice(r_59);
      }
    else
      {
        t = n_59;
        {
          ATerm x_59 = t;
          int y_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_163 = NULL,i_163 = NULL,j_163 = NULL;
              static ATerm d_20 (ATerm t)
              {
                ATerm k_163 = NULL,l_163 = NULL,m_163 = NULL,b_25 = NULL;
                m_163 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_163 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_163);
                k_163 = t;
                t = l_163;
                if(((m_162 != NULL) && (m_162 != t)))
                  _fail(t);
                else
                  m_162 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_163);
                b_25 = t;
                t = SSLsetAnnotations(b_25, k_163);
                return(t);
              }
              t = fetch_1_0(d_20, t);
              t = term_g_21;
              i_163 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_162)), term_z_59);
              j_163 = t;
              t = SSL_printnl(i_163, j_163);
              t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_162)), term_z_59));
              t = default_system_usage_0_0(t);
              t = term_k_21;
              h_163 = t;
              t = SSL_exit(h_163);
              LocalPopChoice(y_59);
            }
          else
            {
              t = x_59;
            }
        }
      }
  }
  n_162 = t;
  t = term_w_55;
  p_162 = t;
  t = SSL_table_destroy(p_162);
  t = n_162;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t)
{
  ATerm r_163 = NULL,s_163 = NULL,t_163 = NULL,u_163 = NULL;
  t = parse_options_1_0(c_131, t);
  r_163 = t;
  t = term_a_60;
  u_163 = t;
  t = SSL_table_create(u_163);
  t = term_a_60;
  s_163 = t;
  t = term_b_60;
  t_163 = t;
  t = SSL_table_put(s_163, t_163, r_163);
  t = r_163;
  t = e_131(t);
  {
    ATerm d_60 = t;
    int e_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_131, t);
        LocalPopChoice(e_60);
      }
    else
      {
        t = d_60;
        {
          ATerm f_60 = t;
          int g_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_131(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_60);
            }
          else
            {
              t = f_60;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_20 (ATerm t)
{
  t = if_verbose2_1_0(q_20, t);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  ATerm v_163 = NULL,w_163 = NULL;
  t = term_i_60;
  v_163 = t;
  t = term_f_21;
  w_163 = t;
  t = term_l_60;
  t = q_13(v_163, w_163, t);
  t = term_m_60;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  t = term_n_60;
  return(t);
}
static ATerm q_20 (ATerm t)
{
  ATerm x_163 = NULL,y_163 = NULL,z_163 = NULL,a_164 = NULL,b_164 = NULL,c_164 = NULL;
  x_163 = t;
  t = term_p_21;
  b_164 = t;
  t = term_l_56;
  c_164 = t;
  t = term_m_56;
  t = n_13(b_164, c_164, t);
  y_163 = t;
  t = term_g_21;
  z_163 = t;
  t = (ATerm) ATinsert(ATempty, y_163);
  a_164 = t;
  t = SSL_printnl(z_163, a_164);
  t = x_163;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm t)
{
  static ATerm e_20 (ATerm t)
  {
    ATerm u_60 = t;
    int v_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_130(t);
        LocalPopChoice(v_60);
      }
    else
      {
        t = u_60;
        {
          ATerm a_61 = t;
          int b_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(b_61);
            }
          else
            {
              t = a_61;
              {
                ATerm c_61 = t;
                int d_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(d_61);
                  }
                else
                  {
                    t = c_61;
                    {
                      ATerm e_61 = t;
                      int f_61 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_20, k_20, l_20, t);
                          LocalPopChoice(f_61);
                        }
                      else
                        {
                          t = e_61;
                          {
                            ATerm g_61 = t;
                            int h_61 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(h_61);
                              }
                            else
                              {
                                t = g_61;
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
  static ATerm g_20 (ATerm t)
  {
    ATerm d_164 = NULL,e_164 = NULL,f_164 = NULL;
    e_164 = t;
    {
      ATerm i_61 = t;
      int j_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm s_20 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_164 != NULL) && (d_164 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_164 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_20, t);
          LocalPopChoice(j_61);
        }
      else
        {
          t = i_61;
          t = term_k_61;
          d_164 = t;
        }
    }
    t = not_null(d_164);
    t = ReadFromFile_0_0(t);
    f_164 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_164, f_164);
    t = apply_strategy_1_0(l_130, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(e_20, n_130, f_20, g_20, t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm i_164 = NULL,j_164 = NULL,k_164 = NULL,l_164 = NULL,m_164 = NULL,t_25 = NULL;
  m_164 = t;
  if(match_cons(t, sym__2))
    {
      j_164 = ATgetArgument(t, 0);
      k_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_164);
  i_164 = t;
  t = k_164;
  {
    ATerm m_61 = t;
    int n_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_165 = NULL,g_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,s_74 = NULL,t_74 = NULL,s_25 = NULL,r_25 = NULL,h_25 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            i_165 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_164);
        g_74 = t;
        t = i_165;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_74 = ATgetFirst((ATermList) t);
            n_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_165);
        l_74 = t;
        t = m_74;
        if(match_cons(t, sym_Signature_1))
          {
            s_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_74);
        q_74 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, s_74);
        h_25 = t;
        t = SSLsetAnnotations(h_25, q_74);
        t_74 = t;
        t = n_74;
        t = Cons_2_0(y_20, b_21, t);
        o_74 = t;
        t = (ATerm) ATinsert(CheckATermList(o_74), t_74);
        r_25 = t;
        t = SSLsetAnnotations(r_25, l_74);
        p_74 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, p_74);
        s_25 = t;
        t = SSLsetAnnotations(s_25, g_74);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(d_21, t);
        LocalPopChoice(n_61);
      }
    else
      {
        t = m_61;
        t = if_verbose2_1_0(e_21, t);
      }
  }
  l_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_164, l_164);
  t_25 = t;
  t = SSLsetAnnotations(t_25, i_164);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,q_25 = NULL;
  x_74 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_74);
  u_74 = t;
  t = v_74;
  t = map_1_0(c_21, t);
  w_74 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_74);
  q_25 = t;
  t = SSLsetAnnotations(q_25, u_74);
  return(t);
}
static ATerm b_21 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm c_21 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      y_74 = ATgetArgument(t, 0);
      z_74 = ATgetArgument(t, 1);
      a_75 = ATgetArgument(t, 2);
      b_75 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = z_12(y_74, z_74, a_75, b_75, t);
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm c_75 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm o_61 = ATgetArgument(t, 0);
      if(match_cons(o_61, sym_SVar_1))
        {
          ATerm r_61 = ATgetArgument(o_61, 0);
          if((ATgetSymbol((ATermAppl) r_61) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm p_61 = ATgetArgument(t, 1);
        if(((ATgetType(p_61) == AT_LIST) && !(ATisEmpty(p_61))))
          {
            c_75 = ATgetFirst((ATermList) p_61);
            {
              ATerm u_61 = (ATerm) ATgetNext((ATermList) p_61);
              if(((ATgetType(u_61) != AT_LIST) || !(ATisEmpty(u_61))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm q_61 = ATgetArgument(t, 2);
        if(((ATgetType(q_61) != AT_LIST) || !(ATisEmpty(q_61))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_10(c_75, t);
  return(t);
}
static ATerm e_21 (ATerm t)
{
  ATerm j_165 = NULL,k_165 = NULL,l_165 = NULL;
  j_165 = t;
  t = term_g_21;
  k_165 = t;
  t = (ATerm) ATinsert(ATempty, term_x_61);
  l_165 = t;
  t = SSL_printnl(k_165, l_165);
  t = j_165;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_20, _fail, default_usage_0_0, t);
  return(t);
}

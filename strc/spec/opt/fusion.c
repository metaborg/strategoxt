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
Symbol sym_Prefix_2;
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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_h_62;
ATerm term_x_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_w_60;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_o_60;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_m_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_j_58;
ATerm term_h_58;
ATerm term_d_58;
ATerm term_c_58;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_d_57;
ATerm term_p_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_v_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_p_55;
ATerm term_h_55;
ATerm term_b_55;
ATerm term_y_54;
ATerm term_j_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_f_53;
ATerm term_o_39;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_v_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_p_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_t_32;
ATerm term_r_32;
ATerm term_q_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_t_29;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_t_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_m_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_h_21;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_21);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Op_2, term_h_22, (ATerm) ATempty);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_22);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_22);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Call_2, term_h_23, (ATerm) ATempty);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Call_2, term_p_24, (ATerm) ATempty);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Call_2, term_g_22, (ATerm) ATempty);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_CallT_3, term_z_29, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_f_30, term_g_30);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_30, term_h_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_30, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_j_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_30);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_32);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_30, term_g_30);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_30, term_l_33);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_n_33, term_m_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_33);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_35);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_36);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_37);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_53);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_u_55);
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_55);
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(sym__2, term_c_56, term_h_21);
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(sym__2, term_k_56, term_l_56);
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym__2, term_x_58, term_h_21);
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(sym__2, term_a_59, term_h_21);
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_h_21);
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym__2, term_w_60, term_h_21);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm b_137 (ATerm), ATerm t);
static ATerm b_6 (ATerm v_1, ATerm w_1, ATerm t);
static ATerm c_6 (ATerm d_2, ATerm e_2, ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm q_135 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm c_9 (ATerm a_75, ATerm b_75, ATerm c_75, ATerm t);
static ATerm y_18 (ATerm l_18, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm g_9 (ATerm n_70, ATerm o_70, ATerm p_70, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t);
static ATerm t_40 (ATerm x_39, ATerm y_39, ATerm t);
static ATerm u_40 (ATerm b_40, ATerm e_40, ATerm t);
ATerm Replace_0_0 (ATerm t);
static ATerm p_10 (ATerm o_42, ATerm p_42, ATerm t);
ATerm end_scope_1_0 (ATerm r_113 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_113 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm q_10 (ATerm w_24, ATerm v_24, ATerm x_24, ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t);
ATerm fuse_with_bottomup_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm r_104 (ATerm), ATerm t);
ATerm propagate_mark_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
ATerm inline_rules_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm bottomup_to_var_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm seq_over_choice_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm x_10 (ATerm g_23, ATerm t);
ATerm alltd_1_0 (ATerm i_106 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm check_that_innermost_is_innermost_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm q_104 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm z_10 (ATerm l_59, ATerm k_59, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm u_105 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm spaste_1_0 (ATerm o_136 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm k_12 (ATerm d_77, ATerm c_77, ATerm t);
ATerm SVar_1_0 (ATerm v_87 (ATerm), ATerm t);
static ATerm u_12 (ATerm a_133 (ATerm), ATerm b_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_68, ATerm j_68, ATerm i_68, ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm v_12 (ATerm u_132 (ATerm), ATerm v_132 (ATerm (ATerm), ATerm), ATerm c_68, ATerm f_68, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm k_125 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm p_132 (ATerm (ATerm), ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_132 (ATerm (ATerm), ATerm), ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm tpaste_1_0 (ATerm k_136 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm o_12 (ATerm f_119 (ATerm), ATerm l_50, ATerm k_50, ATerm t);
ATerm foldr_3_0 (ATerm v_121 (ATerm), ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm t);
static ATerm p_12 (ATerm i_119 (ATerm), ATerm j_119 (ATerm), ATerm p_50, ATerm o_50, ATerm t);
static ATerm q_12 (ATerm a_119 (ATerm), ATerm j_50, ATerm i_50, ATerm t);
ATerm at_end_1_0 (ATerm r_115 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_139 (ATerm a_139, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm s_12 (ATerm n_685, ATerm s_685, ATerm d_70, ATerm t);
ATerm while_not_2_0 (ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm t);
static ATerm t_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm o_141 (ATerm i_140, ATerm j_140, ATerm k_140, ATerm t);
static ATerm a_13 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm free_vars_3_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm r_15 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm k_84 (ATerm), ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm b_13 (ATerm u_42, ATerm v_42, ATerm t);
static ATerm c_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm u_16 (ATerm t);
ATerm InlineStrat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm check_that_try_is_try_0_0 (ATerm t);
ATerm check_library_definitions_0_0 (ATerm t);
static ATerm c_13 (ATerm u_113 (ATerm), ATerm f_41, ATerm d_41, ATerm t);
static ATerm d_17 (ATerm t);
static ATerm d_13 (ATerm i_22, ATerm j_22, ATerm l_22, ATerm k_22, ATerm t);
ATerm map_1_0 (ATerm b_115 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm t);
static ATerm g_13 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm h_13 (ATerm w_37, ATerm x_37, ATerm t);
static ATerm k_13 (ATerm j_113 (ATerm), ATerm p_315, ATerm c_38, ATerm t);
static ATerm i_13 (ATerm s_37, ATerm t_37, ATerm t);
static ATerm f_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm u_17 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm s_127 (ATerm), ATerm t);
static ATerm k_152 (ATerm e_152, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_13 (ATerm y_37, ATerm t);
static ATerm n_13 (ATerm n_32, ATerm o_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_153 (ATerm u_152, ATerm t);
static ATerm w_153 (ATerm y_152, ATerm z_152, ATerm a_153, ATerm t);
static ATerm x_153 (ATerm i_153, ATerm j_153, ATerm k_153, ATerm t);
static ATerm o_13 (ATerm t);
static ATerm w_17 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_115 (ATerm), ATerm t);
static ATerm f_13 (ATerm f_31, ATerm g_31, ATerm t);
ATerm debug_1_0 (ATerm h_113 (ATerm), ATerm t);
static ATerm x_17 (ATerm t);
static ATerm z_17 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_13 (ATerm c_64, ATerm d_64, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm z_18 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_13 (ATerm j_42, ATerm k_42, ATerm i_42, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_13 (ATerm l_39, ATerm n_39, ATerm t);
ATerm foldr_2_0 (ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm f_19 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_137 (ATerm), ATerm t);
static ATerm h_19 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_19 (ATerm t);
ATerm need_help_1_0 (ATerm q_128 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_13 (ATerm a_44, ATerm b_44, ATerm t);
static ATerm k_19 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm m_19 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm p_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
static ATerm w_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm v_131 (ATerm), ATerm t);
static ATerm z_19 (ATerm t);
static ATerm d_20 (ATerm t);
static ATerm e_20 (ATerm t);
static ATerm f_20 (ATerm t);
ATerm parse_options_1_0 (ATerm u_131 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t);
static ATerm p_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm v_20 (ATerm t);
ATerm iowrap_3_0 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t);
static ATerm x_20 (ATerm t);
static ATerm y_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm f_21 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,m_0 = NULL,u_0 = NULL;
  a_0 = t;
  t = term_h_21;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_j_21;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_21), b_0), term_m_21);
  u_0 = t;
  t = SSL_printnl(m_0, u_0);
  t = term_p_21;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_137 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm r_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL;
        t = term_v_21;
        t = get_config_0_0(t);
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_1, term_w_21);
        t = geq_0_0(t);
        t = x_0;
        t = b_137(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = r_21;
        t = x_0;
      }
  }
  return(t);
}
static ATerm b_6 (ATerm v_1, ATerm w_1, ATerm t)
{
  t = v_1;
  {
    ATerm x_21 = t;
    if((PushChoice() == 0))
      {
        ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,c_2 = NULL,d_1 = NULL;
        c_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_1 = ATgetFirst((ATermList) t);
            b_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_2);
        y_1 = t;
        t = b_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(b_2), z_1);
        d_1 = t;
        t = SSLsetAnnotations(d_1, y_1);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_21, v_1);
  return(t);
}
static ATerm c_6 (ATerm d_2, ATerm e_2, ATerm t)
{
  t = d_2;
  {
    ATerm f_22 = t;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,e_1 = NULL;
        j_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_2 = ATgetFirst((ATermList) t);
            i_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_2);
        g_2 = t;
        t = i_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_2), h_2);
        e_1 = t;
        t = SSLsetAnnotations(e_1, g_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_22;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_g_22, d_2);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_m_22;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,v_0 = NULL;
  a_3 = t;
  t = SSL_explode_term(a_3);
  if(match_cons(t, sym__2))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_22 = ATgetArgument(t, 1);
        if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
          {
            b_3 = ATgetFirst((ATermList) p_22);
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
  t = SSL_explode_term(a_3);
  if(match_cons(t, sym__2))
    {
      ATerm s_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
          {
            ATerm v_22 = ATgetFirst((ATermList) u_22);
            ATerm w_22 = (ATerm) ATgetNext((ATermList) u_22);
            if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
              {
                v_0 = ATgetFirst((ATermList) w_22);
                {
                  ATerm y_22 = (ATerm) ATgetNext((ATermList) w_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_22, (ATerm) ATinsert(ATinsert(ATempty, v_0), b_3));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_22, (ATerm) ATinsert(ATinsert(ATempty, s_3), r_3));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_m_22;
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_22, (ATerm) ATinsert(ATinsert(ATempty, v_3), u_3));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, h_4), g_4));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_i_23;
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, k_4), j_4));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,v_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym_Anno_2))
    {
      t_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
      {
        ATerm y_2 = NULL;
        t = v_2;
        t = foldr_2_0(w_0, z_0, t);
        y_2 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, t_2, y_2);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          t_2 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, t_2, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              t_2 = ATgetArgument(t, 0);
              {
                ATerm i_1 = NULL;
                t = t_2;
                {
                  ATerm l_23 = t;
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
                                      t = term_s_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(m_23);
                    }
                  else
                    {
                      t = l_23;
                      {
                        ATerm k_1 = NULL;
                        t = SSL_explode_string(t_2);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm u_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(u_23) != AT_INT) || (ATgetInt((ATermInt) u_23) != 39)))
                              _fail(t);
                            {
                              ATerm w_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
                                {
                                  k_1 = ATgetFirst((ATermList) w_23);
                                  {
                                    ATerm x_23 = (ATerm) ATgetNext((ATermList) w_23);
                                    if(((ATgetType(x_23) == AT_LIST) && !(ATisEmpty(x_23))))
                                      {
                                        ATerm a_24 = ATgetFirst((ATermList) x_23);
                                        if(((ATgetType(a_24) != AT_INT) || (ATgetInt((ATermInt) a_24) != 39)))
                                          _fail(t);
                                        {
                                          ATerm b_24 = (ATerm) ATgetNext((ATermList) x_23);
                                          if(((ATgetType(b_24) != AT_LIST) || !(ATisEmpty(b_24))))
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
                        t = k_1;
                      }
                    }
                }
                i_1 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, i_1);
              }
            }
          else
            {
              ATerm c_24 = t;
              int f_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      t_2 = ATgetArgument(t, 0);
                      {
                        ATerm g_24 = ATgetArgument(t, 1);
                      }
                      r_2 = ATgetArgument(t, 2);
                      l_2 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_24);
                  t = (ATerm) ATmakeAppl(sym_Con_3, t_2, r_2, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_2), (ATerm) ATempty));
                }
              else
                {
                  t = c_24;
                  {
                    ATerm h_24 = t;
                    int j_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            t_2 = ATgetArgument(t, 0);
                            {
                              ATerm k_24 = ATgetArgument(t, 1);
                            }
                            r_2 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_24);
                        t = (ATerm) ATmakeAppl(sym_Con_3, t_2, r_2, term_q_24);
                      }
                    else
                      {
                        t = h_24;
                        if(match_cons(t, sym_Con1_2))
                          {
                            t_2 = ATgetArgument(t, 0);
                            v_2 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, t_2, v_2, term_q_24);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                t_2 = ATgetArgument(t, 0);
                                v_2 = ATgetArgument(t, 1);
                                {
                                  static ATerm c_1 (ATerm t)
                                  {
                                    t = v_2;
                                    return(t);
                                  }
                                  t = t_2;
                                  t = foldr_2_0(c_1, f_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    t_2 = ATgetArgument(t, 0);
                                    t = t_2;
                                    t = foldr_2_0(g_1, h_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        t_2 = ATgetArgument(t, 0);
                                        t = t_2;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            n_2 = ATgetFirst((ATermList) t);
                                            p_2 = (ATerm) ATgetNext((ATermList) t);
                                            t = p_2;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm r_24 = t;
                                                int y_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = b_6(t_2, s_2, t);
                                                    LocalPopChoice(y_24);
                                                  }
                                                else
                                                  {
                                                    t = r_24;
                                                    t = n_2;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_6(t_2, s_2, t);
                                              }
                                          }
                                        else
                                          {
                                            t = b_6(t_2, s_2, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            t_2 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, t_2));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                t_2 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, t_2));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    t_2 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, t_2));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        t_2 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, t_2));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            t_2 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_2), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                t_2 = ATgetArgument(t, 0);
                                                                v_2 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_2), v_2);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    t_2 = ATgetArgument(t, 0);
                                                                    v_2 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm j_1 (ATerm t)
                                                                      {
                                                                        t = v_2;
                                                                        return(t);
                                                                      }
                                                                      t = t_2;
                                                                      t = foldr_2_0(j_1, l_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        t_2 = ATgetArgument(t, 0);
                                                                        t = t_2;
                                                                        t = foldr_2_0(m_1, n_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            t_2 = ATgetArgument(t, 0);
                                                                            v_2 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_g_22, (ATerm) ATinsert(CheckATermList(v_2), t_2));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                t_2 = ATgetArgument(t, 0);
                                                                                t = t_2;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    n_2 = ATgetFirst((ATermList) t);
                                                                                    p_2 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = p_2;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm a_25 = t;
                                                                                        int c_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = c_6(t_2, s_2, t);
                                                                                            LocalPopChoice(c_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = a_25;
                                                                                            t = n_2;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = c_6(t_2, s_2, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_6(t_2, s_2, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_f_25;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        t_2 = ATgetArgument(t, 0);
                                                                                        v_2 = ATgetArgument(t, 1);
                                                                                        t = v_2;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            q_2 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_j_25, (ATerm) ATinsert(ATinsert(ATempty, q_2), t_2));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            t_2 = ATgetArgument(t, 0);
                                                                                            t = t_2;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                t_2 = ATgetArgument(t, 0);
                                                                                                v_2 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, t_2, v_2, term_k_25);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    t_2 = ATgetArgument(t, 0);
                                                                                                    v_2 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, t_2, v_2, term_k_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        t_2 = ATgetArgument(t, 0);
                                                                                                        v_2 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, t_2, (ATerm)ATempty, v_2);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            t_2 = ATgetArgument(t, 0);
                                                                                                            v_2 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, v_2, t_2);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                t_2 = ATgetArgument(t, 0);
                                                                                                                v_2 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, t_2, v_2, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    t_2 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, t_2, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        t_2 = ATgetArgument(t, 0);
                                                                                                                        v_2 = ATgetArgument(t, 1);
                                                                                                                        r_2 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_2, v_2, (ATerm)ATempty, r_2);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            t_2 = ATgetArgument(t, 0);
                                                                                                                            v_2 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_2, (ATerm)ATempty, (ATerm)ATempty, v_2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                t_2 = ATgetArgument(t, 0);
                                                                                                                                v_2 = ATgetArgument(t, 1);
                                                                                                                                r_2 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_2, v_2, (ATerm)ATempty, r_2);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    t_2 = ATgetArgument(t, 0);
                                                                                                                                    v_2 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_2, (ATerm)ATempty, (ATerm)ATempty, v_2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        t_2 = ATgetArgument(t, 0);
                                                                                                                                        v_2 = ATgetArgument(t, 1);
                                                                                                                                        r_2 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, t_2, v_2, (ATerm)ATempty, r_2);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            t_2 = ATgetArgument(t, 0);
                                                                                                                                            v_2 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, t_2, (ATerm)ATempty, (ATerm)ATempty, v_2);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm l_25 = ATgetArgument(t, 0);
                                                                                                                                                v_2 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, v_2);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm h_6 = NULL,m_6 = NULL,n_6 = NULL;
  m_6 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      n_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
      {
        ATerm x_6 = NULL,z_6 = NULL,b_7 = NULL,c_7 = NULL;
        t = m_6;
        t = new_0_0(t);
        x_6 = t;
        t = new_0_0(t);
        z_6 = t;
        t = new_0_0(t);
        b_7 = t;
        t = new_0_0(t);
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_7), b_7), z_6), x_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, x_6), (ATerm) ATmakeAppl(sym_Var_1, b_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, n_6, (ATerm)ATmakeAppl(sym_Var_1, x_6), (ATerm) ATmakeAppl(sym_Var_1, z_6)), (ATerm) ATmakeAppl(sym_BAM_3, h_6, (ATerm)ATmakeAppl(sym_Var_1, b_7), (ATerm) ATmakeAppl(sym_Var_1, c_7)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_m_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_7)), (ATerm) ATmakeAppl(sym_Var_1, z_6))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          n_6 = ATgetArgument(t, 0);
          {
            ATerm e_7 = NULL,f_7 = NULL,i_7 = NULL,k_7 = NULL;
            t = m_6;
            t = new_0_0(t);
            i_7 = t;
            t = n_6;
            {
              static ATerm o_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((e_7 != NULL) && (e_7 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_7 = ATgetArgument(t, 0);
                    if(((f_7 != NULL) && (f_7 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      f_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, i_7);
                return(t);
              }
              t = oncetd_1_0(o_1, t);
            }
            k_7 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_7)), not_null(e_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_7)), (ATerm) ATmakeAppl(sym_Build_1, k_7))));
          }
        }
      else
        {
          ATerm m_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              n_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_6;
          t = new_0_0(t);
          p_7 = t;
          t = new_0_0(t);
          q_7 = t;
          t = n_6;
          {
            static ATerm p_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((m_7 != NULL) && (m_7 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    m_7 = ATgetArgument(t, 0);
                  if(((o_7 != NULL) && (o_7 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    o_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, p_7);
              return(t);
            }
            t = oncetd_1_0(p_1, t);
          }
          r_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_7), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_7)), (ATerm) ATmakeAppl(sym_PrimT_3, term_n_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_7))))), (ATerm)ATmakeAppl(sym_Var_1, p_7), (ATerm) ATmakeAppl(sym_Op_2, term_y_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_7)), not_null(m_7)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm t_7 = NULL,v_7 = NULL;
  t_7 = t;
  if(match_cons(t, sym_Match_1))
    {
      v_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
        t = t_7;
        t = new_0_0(t);
        b_8 = t;
        t = v_7;
        {
          static ATerm q_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_7 = ATgetArgument(t, 0);
                if(((a_8 != NULL) && (a_8 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, b_8), y_7);
            return(t);
          }
          t = pat_td_1_0(q_1, t);
        }
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_8), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_8))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_8))))));
        LocalPopChoice(s_25);
      }
    else
      {
        t = o_25;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_8 = NULL,g_8 = NULL,h_8 = NULL;
              t = t_7;
              t = new_0_0(t);
              g_8 = t;
              t = v_7;
              {
                static ATerm x_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((e_8 != NULL) && (e_8 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, g_8);
                  return(t);
                }
                t = pat_td_1_0(x_1, t);
              }
              h_8 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, g_8)), not_null(e_8))));
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              {
                ATerm k_8 = NULL,l_8 = NULL,n_8 = NULL,o_8 = NULL;
                t = t_7;
                t = new_0_0(t);
                n_8 = t;
                t = v_7;
                {
                  static ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((l_8 != NULL) && (l_8 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          l_8 = ATgetArgument(t, 0);
                        if(((k_8 != NULL) && (k_8 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_8);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                }
                o_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_8)), not_null(l_8)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm q_135 (ATerm), ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_135(t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm x_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
        z_14 = t;
        if(match_cons(t, sym_Op_2))
          {
            a_15 = ATgetArgument(t, 0);
            b_15 = ATgetArgument(t, 1);
            {
              ATerm k_2 = NULL,u_2 = NULL,r_1 = NULL;
              t = SSLgetAnnotations(z_14);
              k_2 = t;
              t = b_15;
              {
                static ATerm f_2 (ATerm t)
                {
                  t = pat_td_1_0(q_135, t);
                  return(t);
                }
                t = fetch_1_0(f_2, t);
              }
              u_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, a_15, u_2);
              r_1 = t;
              t = SSLsetAnnotations(r_1, k_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                a_15 = ATgetArgument(t, 0);
                b_15 = ATgetArgument(t, 1);
                {
                  ATerm y_25 = t;
                  int z_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_5 = NULL,t_5 = NULL,s_1 = NULL;
                      t = SSLgetAnnotations(z_14);
                      p_5 = t;
                      t = b_15;
                      t = pat_td_1_0(q_135, t);
                      t_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, a_15, t_5);
                      s_1 = t;
                      t = SSLsetAnnotations(s_1, p_5);
                      LocalPopChoice(z_25);
                    }
                  else
                    {
                      t = y_25;
                      {
                        ATerm k_6 = NULL,p_6 = NULL,t_1 = NULL;
                        t = SSLgetAnnotations(z_14);
                        k_6 = t;
                        t = a_15;
                        t = pat_td_1_0(q_135, t);
                        p_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, p_6, b_15);
                        t_1 = t;
                        t = SSLsetAnnotations(t_1, k_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    a_15 = ATgetArgument(t, 0);
                    b_15 = ATgetArgument(t, 1);
                    x_14 = ATgetArgument(t, 2);
                    {
                      ATerm h_7 = NULL,u_7 = NULL,u_1 = NULL;
                      t = SSLgetAnnotations(z_14);
                      h_7 = t;
                      t = x_14;
                      {
                        static ATerm m_2 (ATerm t)
                        {
                          t = pat_td_1_0(q_135, t);
                          return(t);
                        }
                        t = fetch_1_0(m_2, t);
                      }
                      u_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, a_15, b_15, u_7);
                      u_1 = t;
                      t = SSLsetAnnotations(u_1, h_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        a_15 = ATgetArgument(t, 0);
                        b_15 = ATgetArgument(t, 1);
                        x_14 = ATgetArgument(t, 2);
                        {
                          ATerm t_8 = NULL,x_8 = NULL,a_6 = NULL;
                          t = SSLgetAnnotations(z_14);
                          t_8 = t;
                          t = x_14;
                          {
                            static ATerm o_2 (ATerm t)
                            {
                              t = pat_td_1_0(q_135, t);
                              return(t);
                            }
                            t = fetch_1_0(o_2, t);
                          }
                          x_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, a_15, b_15, x_8);
                          a_6 = t;
                          t = SSLsetAnnotations(a_6, t_8);
                        }
                      }
                    else
                      {
                        ATerm l_9 = NULL,r_9 = NULL,e_9 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            a_15 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(z_14);
                        l_9 = t;
                        t = b_15;
                        t = pat_td_1_0(q_135, t);
                        r_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, a_15, r_9);
                        e_9 = t;
                        t = SSLsetAnnotations(e_9, l_9);
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
  ATerm n_15 = NULL,o_15 = NULL;
  n_15 = t;
  if(match_cons(t, sym_Build_1))
    {
      o_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_15 = NULL,q_15 = NULL,s_15 = NULL,v_15 = NULL;
        t = n_15;
        t = new_0_0(t);
        s_15 = t;
        t = o_15;
        {
          static ATerm w_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_15 = ATgetArgument(t, 0);
                if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, s_15);
            return(t);
          }
          t = pat_td_1_0(w_2, t);
        }
        v_15 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_15)), not_null(p_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_15)))), (ATerm) ATmakeAppl(sym_Build_1, v_15)));
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        {
          ATerm d_26 = t;
          int e_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_15 = NULL,d_16 = NULL,e_16 = NULL;
              t = n_15;
              t = new_0_0(t);
              d_16 = t;
              t = o_15;
              {
                static ATerm x_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_15 != NULL) && (x_15 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, d_16);
                  return(t);
                }
                t = pat_td_1_0(x_2, t);
              }
              e_16 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_16)))), (ATerm) ATmakeAppl(sym_Build_1, e_16)));
              LocalPopChoice(e_26);
            }
          else
            {
              t = d_26;
              {
                ATerm f_16 = NULL,k_16 = NULL,m_16 = NULL,o_16 = NULL;
                t = n_15;
                t = new_0_0(t);
                m_16 = t;
                t = o_15;
                {
                  static ATerm z_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          f_16 = ATgetArgument(t, 0);
                        if(((k_16 != NULL) && (k_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, m_16);
                    return(t);
                  }
                  t = pat_td_1_0(z_2, t);
                }
                o_16 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_16), not_null(k_16), (ATerm) ATmakeAppl(sym_Var_1, m_16))), (ATerm) ATmakeAppl(sym_Build_1, o_16)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm f_26 = t;
  if((PushChoice() == 0))
    {
      ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,t_9 = NULL;
      k_17 = t;
      if(match_cons(t, sym_Var_1))
        {
          j_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_17);
      i_17 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_17);
      t_9 = t;
      t = SSLsetAnnotations(t_9, i_17);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_26;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_26;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_17 = ATgetFirst((ATermList) t);
      m_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_17, m_17);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(match_cons(i_26, sym__2))
        {
          n_17 = ATgetArgument(i_26, 0);
          o_17 = ATgetArgument(i_26, 1);
        }
      else
        _fail(t);
      {
        ATerm j_26 = ATgetArgument(t, 1);
        if(match_cons(j_26, sym__2))
          {
            q_17 = ATgetArgument(j_26, 0);
            r_17 = ATgetArgument(j_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_17), n_17), (ATerm) ATinsert(CheckATermList(r_17), o_17));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_26;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_17 = ATgetFirst((ATermList) t);
      t_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm v_17 = NULL,y_17 = NULL,a_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(match_cons(l_26, sym__2))
        {
          v_17 = ATgetArgument(l_26, 0);
          y_17 = ATgetArgument(l_26, 1);
        }
      else
        _fail(t);
      {
        ATerm m_26 = ATgetArgument(t, 1);
        if(match_cons(m_26, sym__2))
          {
            a_18 = ATgetArgument(m_26, 0);
            h_18 = ATgetArgument(m_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_18), v_17), (ATerm) ATinsert(CheckATermList(h_18), y_17));
  return(t);
}
static ATerm c_9 (ATerm a_75, ATerm b_75, ATerm c_75, ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,h_17 = NULL,m_10 = NULL;
  t = c_75;
  t = fetch_1_0(c_3, t);
  t = c_75;
  t = genzip_4_0(d_3, e_3, f_3, LiftPrimArg_0_0, t);
  h_17 = t;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_17);
  t_16 = t;
  t = z_16;
  t = concat_0_0(t);
  b_17 = t;
  t = a_17;
  t = genzip_4_0(g_3, h_3, i_3, _id, t);
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_17, c_17);
  m_10 = t;
  t = SSLsetAnnotations(m_10, t_16);
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(match_cons(n_26, sym__2))
          {
            r_16 = ATgetArgument(n_26, 0);
            s_16 = ATgetArgument(n_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, q_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_16), (ATerm) ATmakeAppl(sym_CallT_3, a_75, b_75, s_16)));
  return(t);
}
static ATerm y_18 (ATerm l_18, ATerm t)
{
  ATerm n_18 = NULL;
  t = l_18;
  {
    ATerm q_26 = t;
    if((PushChoice() == 0))
      {
        ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,y_10 = NULL;
        q_18 = t;
        if(match_cons(t, sym_Var_1))
          {
            p_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_18);
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, p_18);
        y_10 = t;
        t = SSLsetAnnotations(y_10, o_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_26;
      }
  }
  t = new_0_0(t);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_18), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_18)))), (ATerm) ATmakeAppl(sym_Var_1, n_18)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  r_18 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_18 = ATgetArgument(t, 0);
      {
        ATerm r_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_18(r_18, t);
            LocalPopChoice(t_26);
          }
        else
          {
            t = r_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_k_25, (ATerm) ATmakeAppl(sym_Var_1, s_18)));
          }
      }
    }
  else
    {
      t = y_18(r_18, t);
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_26 = t;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL,t_10 = NULL,v_10 = NULL,f_11 = NULL;
      v_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_10);
      s_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_10);
      f_11 = t;
      t = SSLsetAnnotations(f_11, s_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_26;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_26;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm w_10 = NULL,a_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_10 = ATgetFirst((ATermList) t);
      a_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_10, a_11);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,e_11 = NULL,g_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(match_cons(x_26, sym__2))
        {
          b_11 = ATgetArgument(x_26, 0);
          c_11 = ATgetArgument(x_26, 1);
        }
      else
        _fail(t);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(match_cons(a_27, sym__2))
          {
            e_11 = ATgetArgument(a_27, 0);
            g_11 = ATgetArgument(a_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_11), b_11), (ATerm) ATinsert(CheckATermList(g_11), c_11));
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_26;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_11 = ATgetFirst((ATermList) t);
      k_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,o_11 = NULL,q_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if(match_cons(b_27, sym__2))
        {
          l_11 = ATgetArgument(b_27, 0);
          m_11 = ATgetArgument(b_27, 1);
        }
      else
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(match_cons(e_27, sym__2))
          {
            o_11 = ATgetArgument(e_27, 0);
            q_11 = ATgetArgument(e_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_11), l_11), (ATerm) ATinsert(CheckATermList(q_11), m_11));
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm j_27 = t;
  if((PushChoice() == 0))
    {
      ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,i_11 = NULL;
      j_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_14);
      h_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_14);
      i_11 = t;
      t = SSLsetAnnotations(i_11, h_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_27;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_26;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_14 = ATgetFirst((ATermList) t);
      l_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_14, l_14);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,t_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(match_cons(k_27, sym__2))
        {
          m_14 = ATgetArgument(k_27, 0);
          n_14 = ATgetArgument(k_27, 1);
        }
      else
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(match_cons(l_27, sym__2))
          {
            o_14 = ATgetArgument(l_27, 0);
            t_14 = ATgetArgument(l_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_14), m_14), (ATerm) ATinsert(CheckATermList(t_14), n_14));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_26;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm y_14 = NULL,g_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_14 = ATgetFirst((ATermList) t);
      g_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_14, g_15);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if(match_cons(m_27, sym__2))
        {
          j_15 = ATgetArgument(m_27, 0);
          k_15 = ATgetArgument(m_27, 1);
        }
      else
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(match_cons(n_27, sym__2))
          {
            l_15 = ATgetArgument(n_27, 0);
            m_15 = ATgetArgument(n_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_15), j_15), (ATerm) ATinsert(CheckATermList(m_15), k_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm v_23 = NULL,y_23 = NULL,z_23 = NULL,d_24 = NULL;
  y_23 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      z_23 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
      v_23 = ATgetArgument(t, 2);
      {
        ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,n_10 = NULL,r_10 = NULL,h_11 = NULL;
        t = v_23;
        t = fetch_1_0(j_3, t);
        t = v_23;
        t = genzip_4_0(k_3, l_3, m_3, LiftPrimArg_0_0, t);
        r_10 = t;
        if(match_cons(t, sym__2))
          {
            j_10 = ATgetArgument(t, 0);
            k_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_10);
        i_10 = t;
        t = j_10;
        t = concat_0_0(t);
        l_10 = t;
        t = k_10;
        t = genzip_4_0(n_3, o_3, p_3, _id, t);
        n_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_10, n_10);
        h_11 = t;
        t = SSLsetAnnotations(h_11, i_10);
        if(match_cons(t, sym__2))
          {
            f_10 = ATgetArgument(t, 0);
            {
              ATerm o_27 = ATgetArgument(t, 1);
              if(match_cons(o_27, sym__2))
                {
                  g_10 = ATgetArgument(o_27, 0);
                  h_10 = ATgetArgument(o_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_10), (ATerm) ATmakeAppl(sym_PrimT_3, z_23, d_24, h_10)));
      }
    }
  else
    {
      ATerm g_12 = NULL,i_12 = NULL,j_12 = NULL,l_12 = NULL,n_12 = NULL,r_12 = NULL,c_14 = NULL,d_14 = NULL,f_14 = NULL,n_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          z_23 = ATgetArgument(t, 0);
          d_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_24;
      t = fetch_1_0(q_3, t);
      t = d_24;
      t = genzip_4_0(t_3, w_3, x_3, LiftPrimArg_0_0, t);
      f_14 = t;
      if(match_cons(t, sym__2))
        {
          n_12 = ATgetArgument(t, 0);
          r_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_14);
      l_12 = t;
      t = n_12;
      t = concat_0_0(t);
      c_14 = t;
      t = r_12;
      t = genzip_4_0(y_3, z_3, a_4, _id, t);
      d_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_14, d_14);
      n_11 = t;
      t = SSLsetAnnotations(n_11, l_12);
      if(match_cons(t, sym__2))
        {
          g_12 = ATgetArgument(t, 0);
          {
            ATerm p_27 = ATgetArgument(t, 1);
            if(match_cons(p_27, sym__2))
              {
                i_12 = ATgetArgument(p_27, 0);
                j_12 = ATgetArgument(p_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_12), (ATerm) ATmakeAppl(sym_PrimT_3, z_23, (ATerm)ATempty, j_12)));
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm s_26 = NULL,v_26 = NULL,w_26 = NULL,y_26 = NULL;
  y_26 = t;
  if(match_cons(t, sym_Con_3))
    {
      s_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
      w_26 = ATgetArgument(t, 2);
      {
        ATerm h_16 = NULL,d_12 = NULL;
        t = SSLgetAnnotations(y_26);
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, s_26, v_26, w_26);
        d_12 = t;
        t = SSLsetAnnotations(d_12, h_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = y_26;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm q_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_27;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm o_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
      o_28 = ATgetArgument(t, 2);
      {
        ATerm g_17 = NULL,h_12 = NULL;
        t = SSLgetAnnotations(t_28);
        g_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, u_28, v_28, o_28);
        h_12 = t;
        t = SSLsetAnnotations(h_12, g_17);
      }
    }
  else
    {
      ATerm j_18 = NULL,m_12 = NULL;
      if(match_cons(t, sym_App_2))
        {
          u_28 = ATgetArgument(t, 0);
          v_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_28);
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, u_28, v_28);
      m_12 = t;
      t = SSLsetAnnotations(m_12, j_18);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm r_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(c_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,f_29 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      b_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_29;
  if(match_cons(t, sym_StratRule_3))
    {
      c_29 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
      f_29 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_29), (ATerm) ATmakeAppl(sym_Where_1, f_29)), c_29));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          c_29 = ATgetArgument(t, 0);
          d_29 = ATgetArgument(t, 1);
          f_29 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_29;
      t = pureterm_0_0(t);
      t = d_29;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, d_29)), (ATerm) ATmakeAppl(sym_Where_1, f_29)), (ATerm) ATmakeAppl(sym_Match_1, c_29)));
    }
  return(t);
}
static ATerm g_9 (ATerm n_70, ATerm o_70, ATerm p_70, ATerm t)
{
  ATerm p_29 = NULL,s_29 = NULL,u_29 = NULL,v_29 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  t = new_0_0(t);
  b_30 = t;
  t = n_70;
  {
    static ATerm d_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm s_27 = ATgetArgument(t, 0);
          if(match_cons(s_27, sym_Var_1))
            {
              if(((v_29 != NULL) && (v_29 != ATgetArgument(s_27, 0))))
                _fail(ATgetArgument(s_27, 0));
              else
                v_29 = ATgetArgument(s_27, 0);
            }
          else
            _fail(t);
          if(((s_29 != NULL) && (s_29 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_29 = ATgetArgument(t, 1);
          {
            ATerm u_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, v_29);
      return(t);
    }
    t = oncetd_1_0(d_4, t);
  }
  c_30 = t;
  t = o_70;
  {
    static ATerm e_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm v_27 = ATgetArgument(t, 0);
          if(match_cons(v_27, sym_Var_1))
            {
              if(((v_29 != NULL) && (v_29 != ATgetArgument(v_27, 0))))
                _fail(ATgetArgument(v_27, 0));
              else
                v_29 = ATgetArgument(v_27, 0);
            }
          else
            _fail(t);
          if(((u_29 != NULL) && (u_29 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_29 = ATgetArgument(t, 1);
          {
            ATerm w_27 = ATgetArgument(t, 2);
            if(match_cons(w_27, sym_CallT_3))
              {
                if(((p_29 != NULL) && (p_29 != ATgetArgument(w_27, 0))))
                  _fail(ATgetArgument(w_27, 0));
                else
                  p_29 = ATgetArgument(w_27, 0);
                {
                  ATerm x_27 = ATgetArgument(w_27, 1);
                  if(((ATgetType(x_27) != AT_LIST) || !(ATisEmpty(x_27))))
                    _fail(t);
                }
                {
                  ATerm y_27 = ATgetArgument(w_27, 2);
                  if(((ATgetType(y_27) != AT_LIST) || !(ATisEmpty(y_27))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, b_30);
      return(t);
    }
    t = oncetd_1_0(e_4, t);
  }
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_30), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, c_30, d_30, (ATerm) ATmakeAppl(sym_Seq_2, p_70, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(p_29), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_29), not_null(u_29), term_k_25))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_29)), (ATerm) ATmakeAppl(sym_Var_1, b_30))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,c_31 = NULL;
          z_30 = t;
          if(match_cons(t, sym_SRule_1))
            {
              a_31 = ATgetArgument(t, 0);
              t = a_31;
              if(match_cons(t, sym_Rule_3))
                {
                  w_30 = ATgetArgument(t, 0);
                  x_30 = ATgetArgument(t, 1);
                  y_30 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_30;
              t = g_9(w_30, x_30, y_30, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm d_19 = NULL,g_19 = NULL,x_12 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  a_31 = ATgetArgument(t, 0);
                  c_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_30);
              d_19 = t;
              t = c_31;
              t = desugarRule_0_0(t);
              g_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, a_31, g_19);
              x_12 = t;
              t = SSLsetAnnotations(x_12, d_19);
            }
          LocalPopChoice(c_28);
        }
      else
        {
          t = b_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
    }
  t = repeat_2_0(i_4, _id, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,s_32 = NULL;
            d_32 = t;
            if(match_cons(t, sym_CallT_3))
              {
                e_32 = ATgetArgument(t, 0);
                f_32 = ATgetArgument(t, 1);
                s_32 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_32;
            t = c_9(e_32, f_32, s_32, t);
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
                  t = HL_0_0(t);
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
                        t = Bapp_0_0(t);
                        LocalPopChoice(m_28);
                      }
                    else
                      {
                        t = l_28;
                        {
                          ATerm n_28 = t;
                          int p_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_28 = t;
                              int s_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      x_32 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_32;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      y_32 = ATgetArgument(t, 0);
                                      t = y_32;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          y_32 = ATgetArgument(t, 0);
                                          z_32 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, y_32, z_32);
                                    }
                                  LocalPopChoice(s_28);
                                }
                              else
                                {
                                  t = r_28;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(p_28);
                            }
                          else
                            {
                              t = n_28;
                              {
                                ATerm w_28 = t;
                                int x_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(x_28);
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
  t = topdown_1_0(f_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm a_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_23);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm a_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_29);
    }
  else
    {
      t = a_29;
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
              ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_23 = ATgetArgument(t, 0);
                  d_23 = ATgetArgument(t, 1);
                  e_23 = ATgetArgument(t, 2);
                  f_23 = ATgetArgument(t, 3);
                  t = e_23;
                  t = map_1_0(n_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_23 = ATgetArgument(t, 0);
                      d_23 = ATgetArgument(t, 1);
                      e_23 = ATgetArgument(t, 2);
                      f_23 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_23;
                  t = map_1_0(o_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm t_23 = NULL;
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_23 = ATgetArgument(t, 0);
          {
            ATerm l_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_29);
      t = t_23;
    }
  else
    {
      t = j_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_23;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm i_24 = NULL;
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_24 = ATgetArgument(t, 0);
          {
            ATerm o_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_29);
      t = i_24;
    }
  else
    {
      t = m_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_24;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  i_38 = t;
  if(match_cons(t, sym_Seq_2))
    {
      j_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_38;
  if(match_cons(t, sym_CallT_3))
    {
      k_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
      q_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_38;
  if(match_cons(t, sym_SVar_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_38;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = m_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = r_38;
  if(match_cons(t, sym_Seq_2))
    {
      s_38 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_38;
  if(match_cons(t, sym_Match_1))
    {
      u_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_38;
  if(match_cons(t, sym_Seq_2))
    {
      w_38 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_38;
  if(match_cons(t, sym_Where_1))
    {
      x_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_38;
  if(match_cons(t, sym_Build_1))
    {
      z_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL,b_21 = NULL,c_21 = NULL,o_21 = NULL,z_21 = NULL,a_22 = NULL;
        t = term_j_30;
        z_21 = t;
        t = term_k_30;
        a_22 = t;
        t = term_l_30;
        t = b_13(a_22, z_21, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_30) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            t_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_38, z_38);
        o_21 = t;
        t = (ATerm) ATmakeAppl(sym__3, t_20, u_38, (ATerm) ATmakeAppl(sym__2, x_38, z_38));
        t = q_10(t_20, u_38, o_21, t);
        if(match_cons(t, sym__2))
          {
            b_21 = ATgetArgument(t, 0);
            c_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, b_21), (ATerm) ATmakeAppl(sym_Build_1, c_21)));
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
          ATerm t_22 = NULL,x_22 = NULL,s_24 = NULL,t_24 = NULL;
          t = term_j_30;
          s_24 = t;
          t = term_k_30;
          t_24 = t;
          t = term_l_30;
          t = b_13(t_24, s_24, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm n_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_30) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              t_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_38;
          t = free_vars_3_0(l_4, m_4, tboundin_3_0, t);
          {
            static ATerm q_4 (ATerm t)
            {
              static ATerm r_4 (ATerm t)
              {
                ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
                l_24 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, t_22, (ATerm) ATmakeAppl(sym_Var_1, l_24));
                m_24 = t;
                t = term_p_30;
                n_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, t_22, (ATerm) ATmakeAppl(sym_Var_1, l_24)), term_p_30);
                t = c_13(s_4, m_24, n_24, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, l_24);
                return(t);
              }
              t = map_1_0(r_4, t);
              t = (ATerm) ATmakeAppl(sym__2, x_38, z_38);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((x_22 != NULL) && (x_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_22 = ATgetArgument(t, 0);
                  {
                    ATerm q_30 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(p_4, q_4, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(x_22)), (ATerm) ATmakeAppl(sym_Build_1, z_38)));
        }
      }
  }
  return(t);
}
static ATerm t_40 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm d_25 = NULL;
  t = term_t_29;
  d_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, y_39);
  t = b_13(d_25, y_39, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm r_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_30) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = x_39;
  return(t);
}
static ATerm u_40 (ATerm b_40, ATerm e_40, ATerm t)
{
  ATerm g_25 = NULL;
  t = term_t_29;
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, e_40);
  t = b_13(g_25, e_40, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_30) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = b_40;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm h_40 = NULL,p_40 = NULL,r_40 = NULL;
  p_40 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm t_30 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_40;
  if(match_cons(t, sym_Var_1))
    {
      h_40 = ATgetArgument(t, 0);
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_25 = NULL;
            t = term_t_29;
            r_25 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_t_29, p_40);
            t = b_13(r_25, p_40, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm b_31 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, h_40);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            {
              ATerm d_31 = t;
              int i_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_40(r_40, p_40, t);
                  LocalPopChoice(i_31);
                }
              else
                {
                  t = d_31;
                  t = u_40(r_40, p_40, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm j_31 = t;
      int k_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_40(r_40, p_40, t);
          LocalPopChoice(k_31);
        }
      else
        {
          t = j_31;
          t = u_40(r_40, p_40, t);
        }
    }
  return(t);
}
static ATerm p_10 (ATerm o_42, ATerm p_42, ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  w_40 = t;
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_42, p_42);
        t = r_13(o_42, p_42, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_31 = ATgetFirst((ATermList) t);
            v_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_31);
        t = SSL_table_put(o_42, p_42, v_40);
        t = (ATerm) ATmakeAppl(sym__3, o_42, p_42, v_40);
      }
    else
      {
        t = l_31;
        t = SSL_table_remove(o_42, p_42);
        t = (ATerm) ATmakeAppl(sym__2, o_42, p_42);
      }
  }
  t = w_40;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_113 (ATerm), ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  o_41 = t;
  t = r_113(t);
  n_41 = t;
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_41 = NULL;
        t = term_q_31;
        q_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_41, term_q_31);
        t = r_13(n_41, q_41, t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_41 = ATgetFirst((ATermList) t);
      i_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_31;
  p_41 = t;
  t = SSL_table_put(n_41, p_41, i_41);
  t = j_41;
  {
    static ATerm t_4 (ATerm t)
    {
      ATerm u_41 = NULL;
      u_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_41, u_41);
      t = p_10(n_41, u_41, t);
      return(t);
    }
    t = map_1_0(t_4, t);
  }
  t = o_41;
  return(t);
}
ATerm restore_always_2_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_107(t);
      t = y_107(t);
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      t = y_107(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm w_41 = NULL,z_41 = NULL,b_42 = NULL,f_42 = NULL,h_42 = NULL;
  z_41 = t;
  t = q_113(t);
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_41, term_q_31);
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_42 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_31 = ATgetArgument(t, 0);
            ATerm w_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_31;
        y_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_41, term_q_31);
        t = r_13(w_41, y_42, t);
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATempty;
      }
  }
  b_42 = t;
  t = term_q_31;
  f_42 = t;
  t = (ATerm) ATinsert(CheckATermList(b_42), (ATerm) ATempty);
  h_42 = t;
  t = SSL_table_put(w_41, f_42, h_42);
  t = z_41;
  return(t);
}
ATerm scope_2_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm t)
{
  static ATerm u_4 (ATerm t)
  {
    t = end_scope_1_0(s_113, t);
    return(t);
  }
  t = begin_scope_1_0(s_113, t);
  t = restore_always_2_0(t_113, u_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm d_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_43);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            {
              ATerm f_43 = NULL,h_43 = NULL,i_43 = NULL,k_43 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_43 = ATgetArgument(t, 0);
                  h_43 = ATgetArgument(t, 1);
                  i_43 = ATgetArgument(t, 2);
                  k_43 = ATgetArgument(t, 3);
                  t = i_43;
                  t = map_1_0(z_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_43 = ATgetArgument(t, 0);
                      h_43 = ATgetArgument(t, 1);
                      i_43 = ATgetArgument(t, 2);
                      k_43 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_43;
                  t = map_1_0(a_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm v_43 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_43 = ATgetArgument(t, 0);
          {
            ATerm i_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_32);
      t = v_43;
    }
  else
    {
      t = b_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_43;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm g_44 = NULL;
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_44 = ATgetArgument(t, 0);
          {
            ATerm p_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_32);
      t = g_44;
    }
  else
    {
      t = j_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_44;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm q_10 (ATerm w_24, ATerm v_24, ATerm x_24, ATerm t)
{
  ATerm c_43 = NULL;
  static ATerm w_4 (ATerm t)
  {
    t = v_24;
    t = free_vars_3_0(x_4, y_4, tboundin_3_0, t);
    {
      static ATerm b_5 (ATerm t)
      {
        ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
        k_44 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, w_24, (ATerm) ATmakeAppl(sym_Var_1, k_44));
        l_44 = t;
        t = term_t_32;
        m_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, w_24, (ATerm) ATmakeAppl(sym_Var_1, k_44)), term_t_32);
        t = c_13(c_5, l_44, m_44, t);
        t = k_44;
        return(t);
      }
      t = map_1_0(b_5, t);
    }
    t = x_24;
    t = alltd_1_0(Replace_0_0, t);
    if(((c_43 != NULL) && (c_43 != t)))
      _fail(t);
    else
      c_43 = t;
    return(t);
  }
  t = scope_2_0(v_4, w_4, t);
  t = not_null(c_43);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm d_27 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_27);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm w_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_33);
          }
        else
          {
            t = w_32;
            {
              ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_27 = ATgetArgument(t, 0);
                  g_27 = ATgetArgument(t, 1);
                  h_27 = ATgetArgument(t, 2);
                  i_27 = ATgetArgument(t, 3);
                  t = h_27;
                  t = map_1_0(f_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_27 = ATgetArgument(t, 0);
                      g_27 = ATgetArgument(t, 1);
                      h_27 = ATgetArgument(t, 2);
                      i_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_27;
                  t = map_1_0(g_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm t_27 = NULL;
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_27 = ATgetArgument(t, 0);
          {
            ATerm f_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_33);
      t = t_27;
    }
  else
    {
      t = b_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_27;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm q_28 = NULL;
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_28 = ATgetArgument(t, 0);
          {
            ATerm i_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_33);
      t = q_28;
    }
  else
    {
      t = g_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_28;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
  a_49 = t;
  if(match_cons(t, sym_Seq_2))
    {
      b_49 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_49;
  if(match_cons(t, sym_CallT_3))
    {
      c_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
      h_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_49;
  if(match_cons(t, sym_SVar_1))
    {
      d_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_49;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = g_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = h_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = i_49;
  if(match_cons(t, sym_Seq_2))
    {
      j_49 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_49;
  if(match_cons(t, sym_Match_1))
    {
      k_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_49;
  if(match_cons(t, sym_Build_1))
    {
      m_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL,k_26 = NULL,o_26 = NULL,p_26 = NULL;
        t = term_m_33;
        o_26 = t;
        t = term_n_33;
        p_26 = t;
        t = term_p_33;
        t = b_13(p_26, o_26, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_33) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            g_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, g_26, k_49, m_49);
        t = q_10(g_26, k_49, m_49, t);
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_49), (ATerm) ATmakeAppl(sym_Build_1, k_26));
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        {
          ATerm z_26 = NULL,c_27 = NULL,q_29 = NULL,r_29 = NULL;
          t = term_m_33;
          q_29 = t;
          t = term_n_33;
          r_29 = t;
          t = term_p_33;
          t = b_13(r_29, q_29, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm t_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_33) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              z_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_49;
          t = free_vars_3_0(d_5, e_5, tboundin_3_0, t);
          {
            static ATerm i_5 (ATerm t)
            {
              static ATerm j_5 (ATerm t)
              {
                ATerm y_28 = NULL,z_28 = NULL,e_29 = NULL;
                y_28 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, z_26, (ATerm) ATmakeAppl(sym_Var_1, y_28));
                z_28 = t;
                t = term_v_33;
                e_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, z_26, (ATerm) ATmakeAppl(sym_Var_1, y_28)), term_v_33);
                t = c_13(k_5, z_28, e_29, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, y_28);
                return(t);
              }
              t = map_1_0(j_5, t);
              t = m_49;
              t = alltd_1_0(Replace_0_0, t);
              if(((c_27 != NULL) && (c_27 != t)))
                _fail(t);
              else
                c_27 = t;
              return(t);
            }
            t = scope_2_0(h_5, i_5, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_49), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_27)));
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  static ATerm l_5 (ATerm t)
  {
    ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,x_52 = NULL,a_53 = NULL,e_53 = NULL,g_53 = NULL,h_53 = NULL,q_53 = NULL,r_53 = NULL;
    r_53 = t;
    if(match_cons(t, sym_Seq_2))
      {
        s_52 = ATgetArgument(t, 0);
        g_53 = ATgetArgument(t, 1);
        t = s_52;
        if(match_cons(t, sym_Choice_2))
          {
            t_52 = ATgetArgument(t, 0);
            v_52 = ATgetArgument(t, 1);
            {
              ATerm w_33 = t;
              int x_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_31 = NULL,h_31 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_y_33, g_53);
                  e_31 = t;
                  t = term_z_33;
                  h_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_z_33, (ATerm) ATmakeAppl(sym_Seq_2, term_y_33, g_53));
                  t = b_13(h_31, e_31, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm b_34 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) b_34) != ATmakeSymbol("y_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, t_52, g_53), (ATerm) ATmakeAppl(sym_Seq_2, v_52, g_53));
                  t = bottomup_1_0(l_5, t);
                  LocalPopChoice(x_33);
                }
              else
                {
                  t = w_33;
                  t = r_53;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                t_52 = ATgetArgument(t, 0);
                v_52 = ATgetArgument(t, 1);
                {
                  ATerm c_34 = t;
                  int n_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_32 = NULL,h_32 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_34, g_53);
                      g_32 = t;
                      t = term_p_34;
                      h_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_p_34, (ATerm) ATmakeAppl(sym_Seq_2, term_o_34, g_53));
                      t = b_13(h_32, g_32, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm q_34 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) q_34) != ATmakeSymbol("a_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, t_52, g_53), (ATerm) ATmakeAppl(sym_Seq_2, v_52, g_53));
                      t = bottomup_1_0(l_5, t);
                      LocalPopChoice(n_34);
                    }
                  else
                    {
                      t = c_34;
                      t = r_53;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    t_52 = ATgetArgument(t, 0);
                    v_52 = ATgetArgument(t, 1);
                    {
                      ATerm r_34 = t;
                      int s_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_53 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_52, g_53);
                          t = l_5(t);
                          x_53 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_52, x_53);
                          t = l_5(t);
                          LocalPopChoice(s_34);
                        }
                      else
                        {
                          t = r_34;
                          t = r_53;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        t_52 = ATgetArgument(t, 0);
                        v_52 = ATgetArgument(t, 1);
                        {
                          ATerm t_34 = t;
                          int v_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_54 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_52, g_53);
                              t = l_5(t);
                              e_54 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_52, e_54);
                              t = l_5(t);
                              LocalPopChoice(v_34);
                            }
                          else
                            {
                              t = t_34;
                              t = r_53;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            t_52 = ATgetArgument(t, 0);
                            {
                              ATerm w_34 = t;
                              int y_34 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_54 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, g_53, t_52);
                                  t = l_5(t);
                                  p_54 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, p_54);
                                  t = l_5(t);
                                  LocalPopChoice(y_34);
                                }
                              else
                                {
                                  t = w_34;
                                  t = r_53;
                                }
                            }
                          }
                        else
                          {
                            t = r_53;
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
            s_52 = ATgetArgument(t, 0);
            g_53 = ATgetArgument(t, 1);
            t = s_52;
            if(match_cons(t, sym_LChoice_2))
              {
                t_52 = ATgetArgument(t, 0);
                v_52 = ATgetArgument(t, 1);
                {
                  ATerm z_34 = t;
                  int e_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, v_52, g_53);
                      t = l_5(t);
                      c_55 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, t_52, c_55);
                      t = l_5(t);
                      LocalPopChoice(e_35);
                    }
                  else
                    {
                      t = z_34;
                      t = r_53;
                    }
                }
              }
            else
              {
                t = r_53;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                s_52 = ATgetArgument(t, 0);
                g_53 = ATgetArgument(t, 1);
                t = s_52;
                if(match_cons(t, sym_Choice_2))
                  {
                    t_52 = ATgetArgument(t, 0);
                    v_52 = ATgetArgument(t, 1);
                    {
                      ATerm h_35 = t;
                      int j_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_55 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, v_52, g_53);
                          t = l_5(t);
                          k_55 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, t_52, k_55);
                          t = l_5(t);
                          LocalPopChoice(j_35);
                        }
                      else
                        {
                          t = h_35;
                          t = r_53;
                        }
                    }
                  }
                else
                  {
                    t = r_53;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    s_52 = ATgetArgument(t, 0);
                    g_53 = ATgetArgument(t, 1);
                    t = g_53;
                    if(match_cons(t, sym_Op_2))
                      {
                        h_53 = ATgetArgument(t, 0);
                        q_53 = ATgetArgument(t, 1);
                        t = s_52;
                        if(match_cons(t, sym_CallT_3))
                          {
                            t_52 = ATgetArgument(t, 0);
                            v_52 = ATgetArgument(t, 1);
                            e_53 = ATgetArgument(t, 2);
                            t = e_53;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = v_52;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    x_52 = ATgetFirst((ATermList) t);
                                    a_53 = (ATerm) ATgetNext((ATermList) t);
                                    t = a_53;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = t_52;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            u_52 = ATgetArgument(t, 0);
                                            t = u_52;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm k_35 = t;
                                                int o_35 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm x_55 = NULL;
                                                    t = q_53;
                                                    {
                                                      static ATerm m_5 (ATerm t)
                                                      {
                                                        ATerm y_55 = NULL;
                                                        y_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_q_35, (ATerm)ATinsert(ATempty, x_52), (ATerm) ATempty), y_55);
                                                        return(t);
                                                      }
                                                      t = map_1_0(m_5, t);
                                                    }
                                                    x_55 = t;
                                                    t = (ATerm) ATmakeAppl(sym_App_2, x_52, (ATerm) ATmakeAppl(sym_Op_2, h_53, x_55));
                                                    t = bottomup_1_0(l_5, t);
                                                    LocalPopChoice(o_35);
                                                  }
                                                else
                                                  {
                                                    t = k_35;
                                                    t = r_53;
                                                  }
                                              }
                                            else
                                              {
                                                t = r_53;
                                              }
                                          }
                                        else
                                          {
                                            t = r_53;
                                          }
                                      }
                                    else
                                      {
                                        t = r_53;
                                      }
                                  }
                                else
                                  {
                                    t = r_53;
                                  }
                              }
                            else
                              {
                                t = r_53;
                              }
                          }
                        else
                          {
                            t = r_53;
                          }
                      }
                    else
                      {
                        t = r_53;
                      }
                  }
                else
                  {
                    t = r_53;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(l_5, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  static ATerm n_5 (ATerm t)
  {
    t = bottomup_1_0(r_104, t);
    return(t);
  }
  t = SRTS_all(n_5, t);
  t = r_104(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    ATerm e_57 = NULL,p_57 = NULL,q_57 = NULL,s_57 = NULL,u_57 = NULL;
    u_57 = t;
    if(match_cons(t, sym_Seq_2))
      {
        e_57 = ATgetArgument(t, 0);
        p_57 = ATgetArgument(t, 1);
        t = p_57;
        if(match_cons(t, sym_Choice_2))
          {
            q_57 = ATgetArgument(t, 0);
            s_57 = ATgetArgument(t, 1);
            {
              ATerm r_35 = t;
              int s_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_57 = NULL,z_57 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_57, q_57);
                  t = o_5(t);
                  y_57 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_57, s_57);
                  t = o_5(t);
                  z_57 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, y_57, z_57);
                  t = o_5(t);
                  LocalPopChoice(s_35);
                }
              else
                {
                  t = r_35;
                  t = u_57;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                q_57 = ATgetArgument(t, 0);
                s_57 = ATgetArgument(t, 1);
                {
                  ATerm t_35 = t;
                  int u_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_59 = NULL,p_59 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_57, q_57);
                      t = o_5(t);
                      i_59 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_57, s_57);
                      t = o_5(t);
                      p_59 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, i_59, p_59);
                      t = o_5(t);
                      LocalPopChoice(u_35);
                    }
                  else
                    {
                      t = t_35;
                      t = u_57;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    q_57 = ATgetArgument(t, 0);
                    s_57 = ATgetArgument(t, 1);
                    {
                      ATerm v_35 = t;
                      int w_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_60 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_57, s_57);
                          t = o_5(t);
                          f_60 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, q_57, f_60);
                          t = o_5(t);
                          LocalPopChoice(w_35);
                        }
                      else
                        {
                          t = v_35;
                          t = u_57;
                        }
                    }
                  }
                else
                  {
                    t = u_57;
                  }
              }
          }
      }
    else
      {
        t = u_57;
      }
    return(t);
  }
  t = bottomup_1_0(o_5, t);
  return(t);
}
ATerm Seq_2_0 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,z_12 = NULL;
  q_61 = t;
  if(match_cons(t, sym_Seq_2))
    {
      m_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_61);
  l_61 = t;
  t = m_61;
  t = k_88(t);
  o_61 = t;
  t = n_61;
  t = l_88(t);
  p_61 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, o_61, p_61);
  z_12 = t;
  t = SSLsetAnnotations(z_12, l_61);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,x_13 = NULL;
  n_35 = t;
  if(match_cons(t, sym_Build_1))
    {
      m_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_35);
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, m_35);
  x_13 = t;
  t = SSLsetAnnotations(x_13, l_35);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_35 = t;
      int a_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          LocalPopChoice(a_36);
        }
      else
        {
          t = z_35;
          {
            ATerm b_36 = t;
            int c_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_66 = NULL,e_66 = NULL,f_66 = NULL;
                b_66 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    e_66 = ATgetArgument(t, 0);
                    f_66 = ATgetArgument(t, 1);
                    {
                      ATerm q_32 = NULL,d_33 = NULL,e_33 = NULL,e_13 = NULL;
                      t = SSLgetAnnotations(b_66);
                      q_32 = t;
                      t = e_66;
                      t = inline_rules_0_0(t);
                      d_33 = t;
                      t = f_66;
                      t = inline_rules_0_0(t);
                      e_33 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, d_33, e_33);
                      e_13 = t;
                      t = SSLsetAnnotations(e_13, q_32);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        e_66 = ATgetArgument(t, 0);
                        f_66 = ATgetArgument(t, 1);
                        {
                          ATerm o_33 = NULL,r_33 = NULL,s_33 = NULL,j_13 = NULL;
                          t = SSLgetAnnotations(b_66);
                          o_33 = t;
                          t = e_66;
                          t = inline_rules_0_0(t);
                          r_33 = t;
                          t = f_66;
                          t = inline_rules_0_0(t);
                          s_33 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, r_33, s_33);
                          j_13 = t;
                          t = SSLsetAnnotations(j_13, o_33);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            e_66 = ATgetArgument(t, 0);
                            f_66 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm d_36 = t;
                          int e_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,v_13 = NULL,t_13 = NULL,q_13 = NULL,m_13 = NULL;
                              t = SSLgetAnnotations(b_66);
                              a_34 = t;
                              t = f_66;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  e_34 = ATgetArgument(t, 0);
                                  f_34 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(f_66);
                              d_34 = t;
                              t = e_34;
                              if(match_cons(t, sym_Match_1))
                                {
                                  l_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(e_34);
                              k_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, l_34);
                              m_13 = t;
                              t = SSLsetAnnotations(m_13, k_34);
                              m_34 = t;
                              t = f_34;
                              if(match_cons(t, sym_Build_1))
                                {
                                  i_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(f_34);
                              h_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, i_34);
                              q_13 = t;
                              t = SSLsetAnnotations(q_13, h_34);
                              j_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_34, j_34);
                              t_13 = t;
                              t = SSLsetAnnotations(t_13, d_34);
                              g_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_66, g_34);
                              v_13 = t;
                              t = SSLsetAnnotations(v_13, a_34);
                              LocalPopChoice(e_36);
                            }
                          else
                            {
                              t = d_36;
                              {
                                ATerm u_34 = NULL,x_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,f_35 = NULL,g_35 = NULL,i_35 = NULL,z_13 = NULL,y_13 = NULL,w_13 = NULL;
                                t = SSLgetAnnotations(b_66);
                                u_34 = t;
                                t = f_66;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    a_35 = ATgetArgument(t, 0);
                                    b_35 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(f_66);
                                x_34 = t;
                                t = a_35;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    g_35 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(a_35);
                                f_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, g_35);
                                w_13 = t;
                                t = SSLsetAnnotations(w_13, f_35);
                                i_35 = t;
                                t = b_35;
                                t = Seq_2_0(_id, q_5, t);
                                c_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_35, c_35);
                                y_13 = t;
                                t = SSLsetAnnotations(y_13, x_34);
                                d_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_66, d_35);
                                z_13 = t;
                                t = SSLsetAnnotations(z_13, u_34);
                              }
                            }
                        }
                      }
                  }
                LocalPopChoice(c_36);
              }
            else
              {
                t = b_36;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_n_33;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm x_66 = NULL,d_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  x_66 = t;
  t = term_m_33;
  l_67 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_36, x_66);
  m_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_33, (ATerm) ATmakeAppl(sym_Defined_2, term_f_36, x_66));
  t = c_13(r_5, l_67, m_67, t);
  t = term_j_30;
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_36, x_66);
  k_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_30, (ATerm) ATmakeAppl(sym_Defined_2, term_g_36, x_66));
  t = c_13(s_5, d_67, k_67, t);
  t = x_66;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_z_33;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm o_67 = NULL,w_67 = NULL,x_67 = NULL,o_68 = NULL,p_68 = NULL;
  o_67 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_y_33, o_67);
  o_68 = t;
  t = term_i_36;
  p_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_y_33, o_67), term_i_36);
  t = c_13(u_5, o_68, p_68, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_34, o_67);
  w_67 = t;
  t = term_k_36;
  x_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_o_34, o_67), term_k_36);
  t = c_13(v_5, w_67, x_67, t);
  t = o_67;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,l_69 = NULL;
  h_69 = t;
  t = term_j_21;
  i_69 = t;
  t = (ATerm) ATinsert(ATempty, term_l_36);
  l_69 = t;
  t = SSL_printnl(i_69, l_69);
  t = h_69;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm m_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      LocalPopChoice(o_36);
    }
  else
    {
      t = m_36;
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm n_69 = NULL,o_69 = NULL,t_69 = NULL,u_69 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  n_69 = ATgetArgument(t, 0);
                  t_69 = ATgetArgument(t, 1);
                  u_69 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_69;
              if(match_cons(t, sym_SVar_1))
                {
                  o_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = o_69;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = t_69;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_69;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_25;
            }
          }
      }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_36 = ATgetArgument(t, 0);
      if(match_cons(r_36, sym_SVar_1))
        {
          ATerm u_36 = ATgetArgument(r_36, 0);
          if((ATgetSymbol((ATermAppl) u_36) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm s_36 = ATgetArgument(t, 1);
        if(((ATgetType(s_36) != AT_LIST) || !(ATisEmpty(s_36))))
          _fail(t);
      }
      {
        ATerm t_36 = ATgetArgument(t, 2);
        if(((ATgetType(t_36) != AT_LIST) || !(ATisEmpty(t_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,m_70 = NULL;
  i_70 = t;
  t = term_j_21;
  j_70 = t;
  t = (ATerm) ATinsert(ATempty, term_v_36);
  m_70 = t;
  t = SSL_printnl(j_70, m_70);
  t = i_70;
  return(t);
}
static ATerm x_10 (ATerm g_23, ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL;
  t = if_verbose2_1_0(w_5, t);
  t = new_0_0(t);
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_69), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_69), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = g_23;
  t = inline_rules_0_0(t);
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, f_69, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_a_30, e_69), (ATerm) ATmakeAppl(sym_CallT_3, term_q_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_69), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_k_25))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(x_5, t);
  {
    ATerm w_36 = t;
    if((PushChoice() == 0))
      {
        ATerm e_70 = NULL,f_70 = NULL,h_70 = NULL;
        t = oncetd_1_0(y_5, t);
        e_70 = t;
        t = term_j_21;
        f_70 = t;
        t = (ATerm) ATinsert(ATempty, term_x_36);
        h_70 = t;
        t = SSL_printnl(f_70, h_70);
        t = e_70;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_36;
      }
  }
  t = desugar_0_0(t);
  t = if_verbose1_1_0(z_5, t);
  return(t);
}
ATerm alltd_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  static ATerm x_70 (ATerm t)
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_106(t);
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        t = SRTS_all(x_70, t);
      }
    return(t);
  }
  t = x_70(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,h_73 = NULL;
  y_72 = t;
  t = term_j_21;
  z_72 = t;
  t = (ATerm) ATinsert(ATempty, term_a_37);
  h_73 = t;
  t = SSL_printnl(z_72, h_73);
  t = y_72;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = debug_1_0(f_6, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_b_37;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL,z_76 = NULL;
  w_76 = t;
  t = term_j_21;
  x_76 = t;
  t = (ATerm) ATinsert(ATempty, term_c_37);
  z_76 = t;
  t = SSL_printnl(x_76, z_76);
  t = w_76;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL;
  x_72 = t;
  t = new_0_0(t);
  w_72 = t;
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_72), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = if_verbose2_1_0(d_6, t);
        _fail(t);
      }
  }
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,c_74 = NULL,e_74 = NULL,f_74 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,p_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
        r_73 = t;
        if(match_cons(t, sym_Seq_2))
          {
            u_73 = ATgetArgument(t, 0);
            r_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_73;
        if(match_cons(t, sym_All_1))
          {
            v_73 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_73;
        if(match_cons(t, sym_CallT_3))
          {
            w_73 = ATgetArgument(t, 0);
            e_74 = ATgetArgument(t, 1);
            p_76 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = w_73;
        if(match_cons(t, sym_SVar_1))
          {
            c_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_74;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = e_74;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_74 = ATgetFirst((ATermList) t);
            l_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_74;
        if(match_cons(t, sym_CallT_3))
          {
            h_76 = ATgetArgument(t, 0);
            j_76 = ATgetArgument(t, 1);
            k_76 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = h_76;
        if(match_cons(t, sym_SVar_1))
          {
            i_76 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_76;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_76;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_76;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_76;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_76;
        if(match_cons(t, sym_CallT_3))
          {
            s_76 = ATgetArgument(t, 0);
            u_76 = ATgetArgument(t, 1);
            v_76 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = s_76;
        if(match_cons(t, sym_SVar_1))
          {
            t_76 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_76;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_76;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_76;
        if((w_72 != t))
          {
            _fail(t);
          }
        t = t_76;
        if((i_76 != t))
          {
            _fail(t);
          }
        t = r_73;
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        t = if_verbose1_1_0(e_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(g_6, t);
  t = x_72;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,q_84 = NULL;
  m_84 = t;
  t = term_j_21;
  n_84 = t;
  t = (ATerm) ATinsert(ATempty, term_h_37);
  q_84 = t;
  t = SSL_printnl(n_84, q_84);
  t = m_84;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = debug_1_0(l_6, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_i_37;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm i_88 = NULL,m_88 = NULL,n_88 = NULL;
  i_88 = t;
  t = term_j_21;
  m_88 = t;
  t = (ATerm) ATinsert(ATempty, term_j_37);
  n_88 = t;
  t = SSL_printnl(m_88, n_88);
  t = i_88;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm j_84 = NULL,l_84 = NULL;
  l_84 = t;
  t = new_0_0(t);
  j_84 = t;
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_37, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_84), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = if_verbose2_1_0(i_6, t);
        _fail(t);
      }
  }
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_84 = NULL,t_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,k_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,u_85 = NULL,v_85 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL,t_86 = NULL,x_86 = NULL,z_86 = NULL,d_87 = NULL,e_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,m_87 = NULL,t_87 = NULL,u_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL;
        e_86 = t;
        if(match_cons(t, sym_CallT_3))
          {
            f_86 = ATgetArgument(t, 0);
            h_86 = ATgetArgument(t, 1);
            f_88 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_86;
        if(match_cons(t, sym_SVar_1))
          {
            g_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_86;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = h_86;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_86 = ATgetFirst((ATermList) t);
            e_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_86;
        if(match_cons(t, sym_CallT_3))
          {
            l_86 = ATgetArgument(t, 0);
            m_86 = ATgetArgument(t, 1);
            t_84 = ATgetArgument(t, 2);
            t = l_86;
            if(match_cons(t, sym_SVar_1))
              {
                r_84 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_84;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
              _fail(t);
            t = m_86;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_86 = ATgetFirst((ATermList) t);
                d_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_86;
            if(match_cons(t, sym_Seq_2))
              {
                o_86 = ATgetArgument(t, 0);
                e_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_86;
            if(match_cons(t, sym_CallT_3))
              {
                t_86 = ATgetArgument(t, 0);
                z_86 = ATgetArgument(t, 1);
                d_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_86;
            if(match_cons(t, sym_SVar_1))
              {
                x_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_87;
            if(match_cons(t, sym_CallT_3))
              {
                h_87 = ATgetArgument(t, 0);
                j_87 = ATgetArgument(t, 1);
                a_88 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = h_87;
            if(match_cons(t, sym_SVar_1))
              {
                i_87 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_87;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
              _fail(t);
            t = j_87;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_87 = ATgetFirst((ATermList) t);
                z_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_87;
            if(match_cons(t, sym_CallT_3))
              {
                m_87 = ATgetArgument(t, 0);
                u_87 = ATgetArgument(t, 1);
                y_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_87;
            if(match_cons(t, sym_SVar_1))
              {
                t_87 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_84;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_86;
            if((j_84 != t))
              {
                _fail(t);
              }
            t = t_87;
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
                l_86 = ATgetArgument(t, 0);
                m_86 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_86;
            if(match_cons(t, sym_CallT_3))
              {
                n_86 = ATgetArgument(t, 0);
                d_88 = ATgetArgument(t, 1);
                d_86 = ATgetArgument(t, 2);
                t = n_86;
                if(match_cons(t, sym_SVar_1))
                  {
                    o_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = o_86;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                  _fail(t);
                t = d_88;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_84 = ATgetFirst((ATermList) t);
                    c_86 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_84;
                if(match_cons(t, sym_Seq_2))
                  {
                    a_85 = ATgetArgument(t, 0);
                    f_85 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_85;
                if(match_cons(t, sym_CallT_3))
                  {
                    b_85 = ATgetArgument(t, 0);
                    d_85 = ATgetArgument(t, 1);
                    e_85 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = b_85;
                if(match_cons(t, sym_SVar_1))
                  {
                    c_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_85;
                if(match_cons(t, sym_CallT_3))
                  {
                    k_85 = ATgetArgument(t, 0);
                    n_85 = ATgetArgument(t, 1);
                    b_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = k_85;
                if(match_cons(t, sym_SVar_1))
                  {
                    m_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_85;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = n_85;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_85 = ATgetFirst((ATermList) t);
                    v_85 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_85;
                if(match_cons(t, sym_CallT_3))
                  {
                    p_85 = ATgetArgument(t, 0);
                    r_85 = ATgetArgument(t, 1);
                    u_85 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = p_85;
                if(match_cons(t, sym_SVar_1))
                  {
                    q_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_85;
                if((j_84 != t))
                  {
                    _fail(t);
                  }
                t = q_85;
                if((l_86 != t))
                  {
                    _fail(t);
                  }
                t = e_86;
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    n_86 = ATgetArgument(t, 0);
                    d_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_86;
                if(match_cons(t, sym_Seq_2))
                  {
                    o_86 = ATgetArgument(t, 0);
                    e_87 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_86;
                if(match_cons(t, sym_CallT_3))
                  {
                    t_86 = ATgetArgument(t, 0);
                    z_86 = ATgetArgument(t, 1);
                    d_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = t_86;
                if(match_cons(t, sym_SVar_1))
                  {
                    x_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_87;
                if(match_cons(t, sym_CallT_3))
                  {
                    h_87 = ATgetArgument(t, 0);
                    j_87 = ATgetArgument(t, 1);
                    a_88 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = h_87;
                if(match_cons(t, sym_SVar_1))
                  {
                    i_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = i_87;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = j_87;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    k_87 = ATgetFirst((ATermList) t);
                    z_87 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_87;
                if(match_cons(t, sym_CallT_3))
                  {
                    m_87 = ATgetArgument(t, 0);
                    u_87 = ATgetArgument(t, 1);
                    y_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = m_87;
                if(match_cons(t, sym_SVar_1))
                  {
                    t_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = u_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_88;
                if(!(match_cons(t, sym_Id_0)))
                  _fail(t);
                t = e_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_86;
                if((j_84 != t))
                  {
                    _fail(t);
                  }
                t = t_87;
                if((l_86 != t))
                  {
                    _fail(t);
                  }
                t = e_86;
              }
          }
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        t = if_verbose1_1_0(j_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(o_6, t);
  t = l_84;
  return(t);
}
ATerm topdown_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  static ATerm q_6 (ATerm t)
  {
    t = topdown_1_0(q_104, t);
    return(t);
  }
  t = q_104(t);
  t = SRTS_all(q_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm q_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm v_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(u_37);
      {
        ATerm s_88 = NULL,t_88 = NULL;
        s_88 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm z_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t_88 = t;
        t = SSLgetAnnotations(s_88);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_38 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) a_38) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_38 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(b_38) != AT_LIST) || !(ATisEmpty(b_38))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_88;
      }
    }
  else
    {
      t = q_37;
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm f_38 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) f_38) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm g_38 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_38);
            _fail(t);
          }
        else
          {
            t = d_38;
          }
      }
    }
  return(t);
}
static ATerm z_10 (ATerm l_59, ATerm k_59, ATerm t)
{
  t = l_59;
  t = topdown_1_0(r_6, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, l_59);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_89 = ATgetArgument(t, 0);
      p_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_89;
  if(match_cons(t, sym_Match_1))
    {
      n_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_89;
  if(match_cons(t, sym_Var_1))
    {
      o_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_89;
  if(match_cons(t, sym_Seq_2))
    {
      q_89 = ATgetArgument(t, 0);
      k_89 = ATgetArgument(t, 1);
      t = q_89;
      if(match_cons(t, sym_Build_1))
        {
          r_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_89;
      if(match_cons(t, sym_Var_1))
        {
          j_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_89;
      if((o_89 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_89)), k_89);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          q_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_89;
      if(match_cons(t, sym_Var_1))
        {
          r_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_89;
      if((o_89 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_89));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_90 = ATgetArgument(t, 0);
      e_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_90;
  if(match_cons(t, sym_Build_1))
    {
      d_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_90;
  if(match_cons(t, sym_Seq_2))
    {
      f_90 = ATgetArgument(t, 0);
      a_90 = ATgetArgument(t, 1);
      t = f_90;
      if(match_cons(t, sym_Match_1))
        {
          z_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_89;
      if((d_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_90), a_90);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          f_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_90;
      if((d_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, d_90);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_90 = ATgetArgument(t, 0);
      s_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_90;
  if(match_cons(t, sym_Match_1))
    {
      r_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_90;
  if(match_cons(t, sym_Seq_2))
    {
      t_90 = ATgetArgument(t, 0);
      o_90 = ATgetArgument(t, 1);
      t = t_90;
      if(match_cons(t, sym_Match_1))
        {
          n_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_90;
      if((r_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_90), o_90);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          t_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_90;
      if((r_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, r_90);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL,k_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL,v_91 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_91 = ATgetArgument(t, 0);
      o_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_91;
  if(match_cons(t, sym_Build_1))
    {
      ATerm h_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_91;
  if(match_cons(t, sym_Seq_2))
    {
      p_91 = ATgetArgument(t, 0);
      q_91 = ATgetArgument(t, 1);
      t = p_91;
      if(match_cons(t, sym_PrimT_3))
        {
          g_91 = ATgetArgument(t, 0);
          h_91 = ATgetArgument(t, 1);
          i_91 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, g_91, h_91, i_91), q_91);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          p_91 = ATgetArgument(t, 0);
          q_91 = ATgetArgument(t, 1);
          v_91 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, p_91, q_91, v_91);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm j_92 = NULL,o_92 = NULL,q_92 = NULL,s_92 = NULL,t_92 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_92 = ATgetArgument(t, 0);
      s_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_92;
  if(match_cons(t, sym_Build_1))
    {
      ATerm n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_92;
  if(match_cons(t, sym_Seq_2))
    {
      t_92 = ATgetArgument(t, 0);
      o_92 = ATgetArgument(t, 1);
      t = t_92;
      if(match_cons(t, sym_Build_1))
        {
          j_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_92), o_92);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, t_92);
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_38 = ATgetArgument(t, 0);
      if(((ATgetType(o_38) != AT_LIST) || !(ATisEmpty(o_38))))
        _fail(t);
      {
        ATerm p_38 = ATgetArgument(t, 1);
        if(((ATgetType(p_38) != AT_LIST) || !(ATisEmpty(p_38))))
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
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if(((ATgetType(t_38) == AT_LIST) && !(ATisEmpty(t_38))))
        {
          d_94 = ATgetFirst((ATermList) t_38);
          e_94 = (ATerm) ATgetNext((ATermList) t_38);
        }
      else
        _fail(t);
      {
        ATerm a_39 = ATgetArgument(t, 1);
        if(((ATgetType(a_39) == AT_LIST) && !(ATisEmpty(a_39))))
          {
            f_94 = ATgetFirst((ATermList) a_39);
            g_94 = (ATerm) ATgetNext((ATermList) a_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_94, f_94), (ATerm) ATmakeAppl(sym__2, e_94, g_94));
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL;
  if(match_cons(t, sym__2))
    {
      h_94 = ATgetArgument(t, 0);
      i_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_94), h_94);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  if(match_cons(t, sym__2))
    {
      j_94 = ATgetArgument(t, 0);
      k_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_94), (ATerm) ATmakeAppl(sym_Match_1, k_94));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
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
static ATerm y_6 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_39 = ATgetArgument(t, 0);
      if(((ATgetType(d_39) == AT_LIST) && !(ATisEmpty(d_39))))
        {
          p_94 = ATgetFirst((ATermList) d_39);
          q_94 = (ATerm) ATgetNext((ATermList) d_39);
        }
      else
        _fail(t);
      {
        ATerm e_39 = ATgetArgument(t, 1);
        if(((ATgetType(e_39) == AT_LIST) && !(ATisEmpty(e_39))))
          {
            r_94 = ATgetFirst((ATermList) e_39);
            s_94 = (ATerm) ATgetNext((ATermList) e_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_94, r_94), (ATerm) ATmakeAppl(sym__2, q_94, s_94));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL;
  if(match_cons(t, sym__2))
    {
      t_94 = ATgetArgument(t, 0);
      u_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_94), t_94);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL;
  if(match_cons(t, sym__2))
    {
      v_94 = ATgetArgument(t, 0);
      w_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_94), (ATerm) ATmakeAppl(sym_Match_1, w_94));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,m_93 = NULL,n_93 = NULL,p_93 = NULL,s_93 = NULL,t_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_93 = ATgetArgument(t, 0);
      t_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_93;
  if(match_cons(t, sym_Build_1))
    {
      n_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_93;
  if(match_cons(t, sym_Op_2))
    {
      p_93 = ATgetArgument(t, 0);
      s_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_93;
  if(match_cons(t, sym_Seq_2))
    {
      v_93 = ATgetArgument(t, 0);
      i_93 = ATgetArgument(t, 1);
      {
        ATerm c_94 = NULL;
        t = v_93;
        if(match_cons(t, sym_Match_1))
          {
            w_93 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_93;
        if(match_cons(t, sym_Op_2))
          {
            g_93 = ATgetArgument(t, 0);
            h_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_93;
        if((p_93 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, s_93, h_93);
        t = genzip_4_0(s_6, t_6, u_6, v_6, t);
        c_94 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_94), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_93, s_93)), i_93));
      }
    }
  else
    {
      ATerm o_94 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          v_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_93;
      if(match_cons(t, sym_Op_2))
        {
          w_93 = ATgetArgument(t, 0);
          x_93 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_93;
      if((p_93 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, s_93, x_93);
      t = genzip_4_0(w_6, y_6, a_7, d_7, t);
      o_94 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_94), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_93, s_93)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm x_95 = NULL,a_96 = NULL,c_96 = NULL,d_96 = NULL,g_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL;
  a_96 = t;
  if(match_cons(t, sym_Seq_2))
    {
      c_96 = ATgetArgument(t, 0);
      l_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_96;
  if(match_cons(t, sym_Build_1))
    {
      d_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_96;
  if(match_cons(t, sym_Op_2))
    {
      g_96 = ATgetArgument(t, 0);
      {
        ATerm f_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_96;
  {
    ATerm g_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            m_96 = ATgetArgument(t, 0);
            {
              ATerm j_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_39);
        t = m_96;
        if(match_cons(t, sym_Match_1))
          {
            n_96 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_96;
        if(match_cons(t, sym_Op_2))
          {
            x_95 = ATgetArgument(t, 0);
            {
              ATerm k_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_96, x_95);
        {
          ATerm m_39 = t;
          if((PushChoice() == 0))
            {
              ATerm n_36 = NULL;
              if(match_cons(t, sym__2))
                {
                  n_36 = ATgetArgument(t, 0);
                  if((n_36 != ATgetArgument(t, 1)))
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
        t = term_o_39;
      }
    else
      {
        t = g_39;
        if(match_cons(t, sym_Match_1))
          {
            m_96 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_96;
        if(match_cons(t, sym_Op_2))
          {
            n_96 = ATgetArgument(t, 0);
            {
              ATerm p_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_96, n_96);
        {
          ATerm q_39 = t;
          if((PushChoice() == 0))
            {
              ATerm r_37 = NULL;
              if(match_cons(t, sym__2))
                {
                  r_37 = ATgetArgument(t, 0);
                  if((r_37 != ATgetArgument(t, 1)))
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
        t = term_o_39;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  static ATerm r_96 (ATerm t)
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_105(t);
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        t = SRTS_one(r_96, t);
      }
    return(t);
  }
  t = r_96(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,z_97 = NULL,a_98 = NULL;
  k_97 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_97 = ATgetArgument(t, 0);
      s_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_97;
  if(match_cons(t, sym_Let_2))
    {
      t_97 = ATgetArgument(t, 0);
      z_97 = ATgetArgument(t, 1);
      {
        ATerm e_98 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, l_97, t_97);
        t = conc_0_0(t);
        e_98 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, e_98, z_97);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          t_97 = ATgetArgument(t, 0);
          z_97 = ATgetArgument(t, 1);
          a_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_97;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_97 = ATgetFirst((ATermList) t);
          r_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_97;
      if(match_cons(t, sym_SDefT_4))
        {
          n_97 = ATgetArgument(t, 0);
          o_97 = ATgetArgument(t, 1);
          p_97 = ATgetArgument(t, 2);
          q_97 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = o_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_97;
      if(match_cons(t, sym_SVar_1))
        {
          u_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_98;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_97;
      if((n_97 != t))
        {
          _fail(t);
        }
      t = q_97;
      {
        ATerm u_39 = t;
        if((PushChoice() == 0))
          {
            static ATerm g_7 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm v_39 = ATgetArgument(t, 0);
                  if(match_cons(v_39, sym_SVar_1))
                    {
                      if((n_97 != ATgetArgument(v_39, 0)))
                        {
                          _fail(ATgetArgument(v_39, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_39 = ATgetArgument(t, 1);
                    if(((ATgetType(w_39) != AT_LIST) || !(ATisEmpty(w_39))))
                      _fail(t);
                  }
                  {
                    ATerm z_39 = ATgetArgument(t, 2);
                    if(((ATgetType(z_39) != AT_LIST) || !(ATisEmpty(z_39))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(g_7, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_39;
          }
      }
      t = q_97;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL,h_99 = NULL,i_99 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_99 = ATgetArgument(t, 0);
      t = h_99;
      if(match_cons(t, sym_Seq_2))
        {
          a_99 = ATgetArgument(t, 0);
          u_98 = ATgetArgument(t, 1);
          t = a_99;
          if(match_cons(t, sym_Where_1))
            {
              t_98 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_98;
          if(match_cons(t, sym_Seq_2))
            {
              x_98 = ATgetArgument(t, 0);
              z_98 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_98;
          if(match_cons(t, sym_Build_1))
            {
              y_98 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, t_98, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_98), z_98)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              a_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, a_99);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          h_99 = ATgetArgument(t, 0);
          t = h_99;
          if(match_cons(t, sym_Test_1))
            {
              a_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, a_99);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_99 = ATgetArgument(t, 0);
              t = h_99;
              if(match_cons(t, sym_Not_1))
                {
                  a_99 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, a_99);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_99 = ATgetArgument(t, 0);
                  i_99 = ATgetArgument(t, 1);
                  t = i_99;
                  if((h_99 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_99 = ATgetArgument(t, 0);
                      i_99 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_99;
                  if((h_99 != t))
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
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL,j_100 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      e_100 = ATgetArgument(t, 0);
      j_100 = ATgetArgument(t, 1);
      t = e_100;
      if(match_cons(t, sym_LChoice_2))
        {
          f_100 = ATgetArgument(t, 0);
          g_100 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, f_100, (ATerm) ATmakeAppl(sym_LChoice_2, g_100, j_100));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          e_100 = ATgetArgument(t, 0);
          j_100 = ATgetArgument(t, 1);
          t = e_100;
          if(match_cons(t, sym_Seq_2))
            {
              f_100 = ATgetArgument(t, 0);
              g_100 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, f_100, (ATerm) ATmakeAppl(sym_Seq_2, g_100, j_100));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              e_100 = ATgetArgument(t, 0);
              j_100 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_100;
          if(match_cons(t, sym_Choice_2))
            {
              f_100 = ATgetArgument(t, 0);
              g_100 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, f_100, (ATerm) ATmakeAppl(sym_Choice_2, g_100, j_100));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL,i_101 = NULL,j_101 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      i_101 = ATgetArgument(t, 0);
      j_101 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, i_101, j_101);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          i_101 = ATgetArgument(t, 0);
          t = i_101;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_101 = ATgetFirst((ATermList) t);
              e_101 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, d_101, (ATerm) ATmakeAppl(sym_LChoices_1, e_101));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_o_39;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              i_101 = ATgetArgument(t, 0);
              t = i_101;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_101 = ATgetFirst((ATermList) t);
                  e_101 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, d_101, (ATerm) ATmakeAppl(sym_Choices_1, e_101));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_o_39;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  i_101 = ATgetArgument(t, 0);
                  t = i_101;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_101 = ATgetFirst((ATermList) t);
                      e_101 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_101, (ATerm) ATmakeAppl(sym_Seqs_1, e_101));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_k_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      i_101 = ATgetArgument(t, 0);
                      j_101 = ATgetArgument(t, 1);
                      f_101 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, j_101, (ATerm) ATmakeAppl(sym_Op_2, term_y_21, (ATerm) ATinsert(ATinsert(ATempty, f_101), i_101)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          i_101 = ATgetArgument(t, 0);
                          j_101 = ATgetArgument(t, 1);
                          f_101 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, f_101)), i_101), (ATerm) ATmakeAppl(sym_Build_1, j_101)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              i_101 = ATgetArgument(t, 0);
                              j_101 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_101, (ATerm) ATmakeAppl(sym_Match_1, j_101));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  i_101 = ATgetArgument(t, 0);
                                  j_101 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_101), j_101);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      i_101 = ATgetArgument(t, 0);
                                      j_101 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_101), i_101);
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
  ATerm r_103 = NULL,u_103 = NULL,v_103 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      r_103 = ATgetArgument(t, 0);
      t = r_103;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_o_39;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          r_103 = ATgetArgument(t, 0);
          t = r_103;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_k_25;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              r_103 = ATgetArgument(t, 0);
              u_103 = ATgetArgument(t, 1);
              t = r_103;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_o_39;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  r_103 = ATgetArgument(t, 0);
                  u_103 = ATgetArgument(t, 1);
                  t = u_103;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_o_39;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      r_103 = ATgetArgument(t, 0);
                      u_103 = ATgetArgument(t, 1);
                      t = u_103;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_o_39;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          r_103 = ATgetArgument(t, 0);
                          t = r_103;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_o_39;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              r_103 = ATgetArgument(t, 0);
                              t = r_103;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_o_39;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  r_103 = ATgetArgument(t, 0);
                                  u_103 = ATgetArgument(t, 1);
                                  t = u_103;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_o_39;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      r_103 = ATgetArgument(t, 0);
                                      u_103 = ATgetArgument(t, 1);
                                      t = u_103;
                                      t = fetch_1_0(j_7, t);
                                      t = term_o_39;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          r_103 = ATgetArgument(t, 0);
                                          u_103 = ATgetArgument(t, 1);
                                          t = u_103;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = r_103;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = u_103;
                                                }
                                              else
                                                {
                                                  t = r_103;
                                                }
                                            }
                                          else
                                            {
                                              t = r_103;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = u_103;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              r_103 = ATgetArgument(t, 0);
                                              u_103 = ATgetArgument(t, 1);
                                              t = u_103;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = r_103;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = u_103;
                                                    }
                                                  else
                                                    {
                                                      t = r_103;
                                                    }
                                                }
                                              else
                                                {
                                                  t = r_103;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = u_103;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  r_103 = ATgetArgument(t, 0);
                                                  t = r_103;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_o_39;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      r_103 = ATgetArgument(t, 0);
                                                      u_103 = ATgetArgument(t, 1);
                                                      v_103 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_103;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_103, u_103);
                                                }
                                            }
                                        }
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
  ATerm i_105 = NULL,l_105 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      l_105 = ATgetArgument(t, 0);
      t = l_105;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_k_25;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          l_105 = ATgetArgument(t, 0);
          t = l_105;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_o_39;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              l_105 = ATgetArgument(t, 0);
              i_105 = ATgetArgument(t, 1);
              t = i_105;
              if(match_cons(t, sym_Id_0))
                {
                  t = l_105;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = i_105;
                    }
                  else
                    {
                      t = l_105;
                    }
                }
              else
                {
                  t = l_105;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = i_105;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_105 = ATgetArgument(t, 0);
                  i_105 = ATgetArgument(t, 1);
                  t = l_105;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_k_25;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      l_105 = ATgetArgument(t, 0);
                      i_105 = ATgetArgument(t, 1);
                      t = i_105;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_k_25;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          l_105 = ATgetArgument(t, 0);
                          i_105 = ATgetArgument(t, 1);
                          t = i_105;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_k_25;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              l_105 = ATgetArgument(t, 0);
                              t = l_105;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_k_25;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  l_105 = ATgetArgument(t, 0);
                                  t = l_105;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_k_25;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      l_105 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = l_105;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_k_25;
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
  ATerm a_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(f_40);
    }
  else
    {
      t = a_40;
      {
        ATerm g_40 = t;
        int i_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(i_40);
          }
        else
          {
            t = g_40;
            {
              ATerm q_40 = t;
              int s_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(s_40);
                }
              else
                {
                  t = q_40;
                  {
                    ATerm x_40 = t;
                    int z_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(z_40);
                      }
                    else
                      {
                        t = x_40;
                        {
                          ATerm g_41 = t;
                          int h_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(h_41);
                            }
                          else
                            {
                              t = g_41;
                              {
                                ATerm k_41 = t;
                                int l_41 = stack_ptr;
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
                                    LocalPopChoice(l_41);
                                  }
                                else
                                  {
                                    t = k_41;
                                    {
                                      ATerm m_41 = t;
                                      int r_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(r_41);
                                        }
                                      else
                                        {
                                          t = m_41;
                                          {
                                            ATerm s_41 = t;
                                            int t_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(t_41);
                                              }
                                            else
                                              {
                                                t = s_41;
                                                {
                                                  ATerm v_41 = t;
                                                  int x_41 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(x_41);
                                                    }
                                                  else
                                                    {
                                                      t = v_41;
                                                      {
                                                        ATerm y_41 = t;
                                                        int a_42 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(a_42);
                                                          }
                                                        else
                                                          {
                                                            t = y_41;
                                                            {
                                                              ATerm c_42 = t;
                                                              int d_42 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(d_42);
                                                                }
                                                              else
                                                                {
                                                                  t = c_42;
                                                                  {
                                                                    ATerm g_42 = t;
                                                                    int l_42 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(l_42);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_42;
                                                                        {
                                                                          ATerm m_42 = t;
                                                                          int r_42 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(r_42);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_42;
                                                                              {
                                                                                ATerm s_42 = t;
                                                                                int t_42 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(t_42);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_42;
                                                                                    {
                                                                                      ATerm g_106 = NULL,h_106 = NULL,k_106 = NULL,l_106 = NULL;
                                                                                      h_106 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          k_106 = ATgetArgument(t, 0);
                                                                                          l_106 = ATgetArgument(t, 1);
                                                                                          t = k_106;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              g_106 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_106;
                                                                                          t = z_10(g_106, l_106, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              k_106 = ATgetArgument(t, 0);
                                                                                              l_106 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = k_106;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = l_106;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm t)
{
  static ATerm p_106 (ATerm t)
  {
    ATerm x_42 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_111(t);
        t = p_106(t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = x_42;
        t = v_111(t);
      }
    return(t);
  }
  t = p_106(t);
  return(t);
}
ATerm downup_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  t = s_104(t);
  {
    static ATerm l_7 (ATerm t)
    {
      t = downup_1_0(s_104, t);
      return(t);
    }
    t = SRTS_all(l_7, t);
  }
  t = s_104(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm t)
{
  static ATerm a_107 (ATerm t)
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_117(t);
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        {
          ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL,w_14 = NULL;
          t = f_117(t);
          z_106 = t;
          if(match_cons(t, sym__2))
            {
              r_106 = ATgetArgument(t, 0);
              s_106 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_106);
          q_106 = t;
          t = r_106;
          t = h_117(t);
          x_106 = t;
          t = s_106;
          t = a_107(t);
          y_106 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_106, y_106);
          w_14 = t;
          t = SSLsetAnnotations(w_14, q_106);
          t = g_117(t);
        }
      }
    return(t);
  }
  t = a_107(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_43 = ATgetArgument(t, 0);
      if(((ATgetType(n_43) != AT_LIST) || !(ATisEmpty(n_43))))
        _fail(t);
      {
        ATerm o_43 = ATgetArgument(t, 1);
        if(((ATgetType(o_43) != AT_LIST) || !(ATisEmpty(o_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL,k_108 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_43 = ATgetArgument(t, 0);
      if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
        {
          e_108 = ATgetFirst((ATermList) q_43);
          f_108 = (ATerm) ATgetNext((ATermList) q_43);
        }
      else
        _fail(t);
      {
        ATerm r_43 = ATgetArgument(t, 1);
        if(((ATgetType(r_43) == AT_LIST) && !(ATisEmpty(r_43))))
          {
            g_108 = ATgetFirst((ATermList) r_43);
            k_108 = (ATerm) ATgetNext((ATermList) r_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_108, g_108), (ATerm) ATmakeAppl(sym__2, f_108, k_108));
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm l_108 = NULL,m_108 = NULL;
  if(match_cons(t, sym__2))
    {
      l_108 = ATgetArgument(t, 0);
      m_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_108), l_108);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL;
  p_107 = t;
  {
    ATerm s_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_43 = ATgetArgument(t, 0);
            ATerm x_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(u_43);
        t = p_107;
      }
    else
      {
        t = s_43;
        {
          ATerm a_108 = NULL;
          if(match_cons(t, sym__3))
            {
              q_107 = ATgetArgument(t, 0);
              r_107 = ATgetArgument(t, 1);
              s_107 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, q_107, r_107);
          t = genzip_4_0(n_7, s_7, w_7, _id, t);
          a_108 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_108, s_107);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm t)
{
  ATerm o_108 = NULL,p_108 = NULL;
  static ATerm x_7 (ATerm t)
  {
    ATerm h_39 = NULL;
    t = y_131(t);
    h_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_39, not_null(p_108));
    t = lookup_0_0(t);
    t = z_131(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((p_108 != NULL) && (p_108 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_108 = ATgetArgument(t, 0);
      o_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_108;
  t = alltd_1_0(x_7, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_43 = ATgetArgument(t, 0);
      if(((ATgetType(y_43) != AT_LIST) || !(ATisEmpty(y_43))))
        _fail(t);
      {
        ATerm z_43 = ATgetArgument(t, 1);
        if(((ATgetType(z_43) != AT_LIST) || !(ATisEmpty(z_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_44 = ATgetArgument(t, 0);
      if(((ATgetType(c_44) == AT_LIST) && !(ATisEmpty(c_44))))
        {
          j_40 = ATgetFirst((ATermList) c_44);
          k_40 = (ATerm) ATgetNext((ATermList) c_44);
        }
      else
        _fail(t);
      {
        ATerm d_44 = ATgetArgument(t, 1);
        if(((ATgetType(d_44) == AT_LIST) && !(ATisEmpty(d_44))))
          {
            l_40 = ATgetFirst((ATermList) d_44);
            m_40 = (ATerm) ATgetNext((ATermList) d_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_40, l_40), (ATerm) ATmakeAppl(sym__2, k_40, m_40));
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL;
  if(match_cons(t, sym__2))
    {
      n_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_40), n_40);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm y_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,e_41 = NULL;
  if(match_cons(t, sym__2))
    {
      y_40 = ATgetArgument(t, 0);
      e_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_40;
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm h_44 = ATgetArgument(t, 0);
            a_41 = ATgetArgument(t, 1);
            b_41 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(f_44);
        t = (ATerm) ATmakeAppl(sym_SDef_3, e_41, a_41, b_41);
      }
    else
      {
        t = e_44;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm j_44 = ATgetArgument(t, 0);
            a_41 = ATgetArgument(t, 1);
            b_41 = ATgetArgument(t, 2);
            c_41 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, e_41, a_41, b_41, c_41);
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_44 = ATgetArgument(t, 0);
      if(((ATgetType(n_44) != AT_LIST) || !(ATisEmpty(n_44))))
        _fail(t);
      {
        ATerm o_44 = ATgetArgument(t, 1);
        if(((ATgetType(o_44) != AT_LIST) || !(ATisEmpty(o_44))))
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
  ATerm w_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_44 = ATgetArgument(t, 0);
      if(((ATgetType(p_44) == AT_LIST) && !(ATisEmpty(p_44))))
        {
          w_42 = ATgetFirst((ATermList) p_44);
          z_42 = (ATerm) ATgetNext((ATermList) p_44);
        }
      else
        _fail(t);
      {
        ATerm q_44 = ATgetArgument(t, 1);
        if(((ATgetType(q_44) == AT_LIST) && !(ATisEmpty(q_44))))
          {
            a_43 = ATgetFirst((ATermList) q_44);
            b_43 = (ATerm) ATgetNext((ATermList) q_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_42, a_43), (ATerm) ATmakeAppl(sym__2, z_42, b_43));
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm g_43 = NULL,j_43 = NULL;
  if(match_cons(t, sym__2))
    {
      g_43 = ATgetArgument(t, 0);
      j_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_43), g_43);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm p_43 = NULL,t_43 = NULL,i_44 = NULL;
  if(match_cons(t, sym__2))
    {
      p_43 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_43;
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_44);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_44);
      }
    else
      {
        t = r_44;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_44 = ATgetArgument(t, 0);
            t_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_44, t_43);
      }
  }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_44 = ATgetArgument(t, 0);
      if(((ATgetType(v_44) != AT_LIST) || !(ATisEmpty(v_44))))
        _fail(t);
      {
        ATerm w_44 = ATgetArgument(t, 1);
        if(((ATgetType(w_44) != AT_LIST) || !(ATisEmpty(w_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_44 = ATgetArgument(t, 0);
      if(((ATgetType(x_44) == AT_LIST) && !(ATisEmpty(x_44))))
        {
          h_45 = ATgetFirst((ATermList) x_44);
          i_45 = (ATerm) ATgetNext((ATermList) x_44);
        }
      else
        _fail(t);
      {
        ATerm y_44 = ATgetArgument(t, 1);
        if(((ATgetType(y_44) == AT_LIST) && !(ATisEmpty(y_44))))
          {
            j_45 = ATgetFirst((ATermList) y_44);
            k_45 = (ATerm) ATgetNext((ATermList) y_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_45, j_45), (ATerm) ATmakeAppl(sym__2, i_45, k_45));
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm l_45 = NULL,n_45 = NULL;
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_45), l_45);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm p_45 = NULL,r_45 = NULL,s_45 = NULL;
  if(match_cons(t, sym__2))
    {
      p_45 = ATgetArgument(t, 0);
      s_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_45;
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_45);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_45);
      }
    else
      {
        t = a_45;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_45 = ATgetArgument(t, 0);
            r_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_45, r_45);
      }
  }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_45 = ATgetArgument(t, 0);
      if(((ATgetType(g_45) != AT_LIST) || !(ATisEmpty(g_45))))
        _fail(t);
      {
        ATerm m_45 = ATgetArgument(t, 1);
        if(((ATgetType(m_45) != AT_LIST) || !(ATisEmpty(m_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm l_47 = NULL,n_47 = NULL,p_47 = NULL,q_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_45 = ATgetArgument(t, 0);
      if(((ATgetType(o_45) == AT_LIST) && !(ATisEmpty(o_45))))
        {
          l_47 = ATgetFirst((ATermList) o_45);
          n_47 = (ATerm) ATgetNext((ATermList) o_45);
        }
      else
        _fail(t);
      {
        ATerm q_45 = ATgetArgument(t, 1);
        if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
          {
            p_47 = ATgetFirst((ATermList) q_45);
            q_47 = (ATerm) ATgetNext((ATermList) q_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_47, p_47), (ATerm) ATmakeAppl(sym__2, n_47, q_47));
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL;
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_47), r_47);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm v_47 = NULL,a_48 = NULL,b_48 = NULL;
  if(match_cons(t, sym__2))
    {
      v_47 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_47;
  {
    ATerm t_45 = t;
    int u_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_45);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_48);
      }
    else
      {
        t = t_45;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_45 = ATgetArgument(t, 0);
            a_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_48, a_48);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm o_136 (ATerm), ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL,b_117 = NULL,c_117 = NULL,j_117 = NULL;
  b_117 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_117 = ATgetArgument(t, 0);
      j_117 = ATgetArgument(t, 1);
      {
        ATerm r_39 = NULL,c_40 = NULL,d_40 = NULL,d_15 = NULL;
        t = SSLgetAnnotations(b_117);
        r_39 = t;
        t = c_117;
        t = o_136(t);
        d_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_117, d_40);
        t = genzip_4_0(z_7, d_8, f_8, i_8, t);
        c_40 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, c_40, j_117);
        d_15 = t;
        t = SSLsetAnnotations(d_15, r_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_117 = ATgetArgument(t, 0);
          j_117 = ATgetArgument(t, 1);
          x_116 = ATgetArgument(t, 2);
          {
            ATerm e_42 = NULL,n_42 = NULL,q_42 = NULL,e_15 = NULL;
            t = SSLgetAnnotations(b_117);
            e_42 = t;
            t = j_117;
            t = o_136(t);
            q_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_117, q_42);
            t = genzip_4_0(j_8, m_8, p_8, q_8, t);
            n_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, c_117, n_42, x_116);
            e_15 = t;
            t = SSLsetAnnotations(e_15, e_42);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              c_117 = ATgetArgument(t, 0);
              j_117 = ATgetArgument(t, 1);
              x_116 = ATgetArgument(t, 2);
              y_116 = ATgetArgument(t, 3);
              {
                ATerm z_44 = NULL,e_45 = NULL,f_45 = NULL,f_15 = NULL;
                t = SSLgetAnnotations(b_117);
                z_44 = t;
                t = j_117;
                t = o_136(t);
                f_45 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_117, f_45);
                t = genzip_4_0(r_8, s_8, u_8, v_8, t);
                e_45 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_117, e_45, x_116, y_116);
                f_15 = t;
                t = SSLsetAnnotations(f_15, z_44);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  c_117 = ATgetArgument(t, 0);
                  j_117 = ATgetArgument(t, 1);
                  x_116 = ATgetArgument(t, 2);
                  y_116 = ATgetArgument(t, 3);
                  {
                    ATerm a_47 = NULL,h_47 = NULL,i_47 = NULL,h_15 = NULL;
                    t = SSLgetAnnotations(b_117);
                    a_47 = t;
                    t = j_117;
                    t = o_136(t);
                    i_47 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_117, i_47);
                    t = genzip_4_0(w_8, y_8, z_8, a_9, t);
                    h_47 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, c_117, h_47, x_116, y_116);
                    h_15 = t;
                    t = SSLsetAnnotations(h_15, a_47);
                  }
                }
              else
                {
                  ATerm u_48 = NULL,f_49 = NULL,i_15 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      c_117 = ATgetArgument(t, 0);
                      j_117 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_117);
                  u_48 = t;
                  t = c_117;
                  t = o_136(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_49 = ATgetFirst((ATermList) t);
                      {
                        ATerm x_45 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, f_49, j_117);
                  i_15 = t;
                  t = SSLsetAnnotations(i_15, u_48);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm t)
{
  ATerm k_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL;
  m_120 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_120 = ATgetArgument(t, 0);
      o_120 = ATgetArgument(t, 1);
      {
        ATerm w_49 = NULL,z_49 = NULL,a_50 = NULL,q_19 = NULL;
        t = SSLgetAnnotations(m_120);
        w_49 = t;
        t = n_120;
        t = p_136(t);
        z_49 = t;
        t = o_120;
        t = p_136(t);
        a_50 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_49, a_50);
        q_19 = t;
        t = SSLsetAnnotations(q_19, w_49);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_120 = ATgetArgument(t, 0);
          o_120 = ATgetArgument(t, 1);
          k_120 = ATgetArgument(t, 2);
          {
            ATerm n_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,r_19 = NULL;
            t = SSLgetAnnotations(m_120);
            n_50 = t;
            t = n_120;
            t = r_136(t);
            t_50 = t;
            t = o_120;
            t = r_136(t);
            u_50 = t;
            t = k_120;
            t = p_136(t);
            v_50 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, t_50, u_50, v_50);
            r_19 = t;
            t = SSLsetAnnotations(r_19, n_50);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_120 = ATgetArgument(t, 0);
              o_120 = ATgetArgument(t, 1);
              k_120 = ATgetArgument(t, 2);
              l_120 = ATgetArgument(t, 3);
              {
                ATerm g_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,s_19 = NULL;
                t = SSLgetAnnotations(m_120);
                g_51 = t;
                t = n_120;
                t = r_136(t);
                n_51 = t;
                t = o_120;
                t = r_136(t);
                o_51 = t;
                t = k_120;
                t = r_136(t);
                p_51 = t;
                t = l_120;
                t = p_136(t);
                q_51 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, n_51, o_51, p_51, q_51);
                s_19 = t;
                t = SSLsetAnnotations(s_19, g_51);
              }
            }
          else
            {
              ATerm d_52 = NULL,g_52 = NULL,p_52 = NULL,t_19 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  n_120 = ATgetArgument(t, 0);
                  o_120 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_120);
              d_52 = t;
              t = n_120;
              t = r_136(t);
              g_52 = t;
              t = o_120;
              t = p_136(t);
              p_52 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, g_52, p_52);
              t_19 = t;
              t = SSLsetAnnotations(t_19, d_52);
            }
        }
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm v_120 = NULL;
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_120 = ATgetArgument(t, 0);
          {
            ATerm a_46 = ATgetArgument(t, 1);
          }
          {
            ATerm b_46 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_45);
      t = v_120;
    }
  else
    {
      t = y_45;
      if(match_cons(t, sym_SDefT_4))
        {
          v_120 = ATgetArgument(t, 0);
          {
            ATerm c_46 = ATgetArgument(t, 1);
          }
          {
            ATerm d_46 = ATgetArgument(t, 2);
          }
          {
            ATerm e_46 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_120;
    }
  return(t);
}
static ATerm k_12 (ATerm d_77, ATerm c_77, ATerm t)
{
  t = d_77;
  t = map_1_0(b_9, t);
  return(t);
}
ATerm SVar_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm b_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL,y_19 = NULL;
  e_121 = t;
  if(match_cons(t, sym_SVar_1))
    {
      c_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_121);
  b_121 = t;
  t = c_121;
  t = v_87(t);
  d_121 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, d_121);
  y_19 = t;
  t = SSLsetAnnotations(y_19, b_121);
  return(t);
}
static ATerm u_12 (ATerm a_133 (ATerm), ATerm b_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_68, ATerm j_68, ATerm i_68, ATerm t)
{
  static ATerm d_9 (ATerm t)
  {
    ATerm g_121 = NULL;
    g_121 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_121, i_68);
    t = a_133(t);
    return(t);
  }
  static ATerm f_9 (ATerm t)
  {
    ATerm h_121 = NULL;
    h_121 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_121, j_68);
    t = a_133(t);
    return(t);
  }
  t = k_68;
  t = b_133(d_9, f_9, _id, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_46 = ATgetArgument(t, 0);
      if(((ATgetType(f_46) != AT_LIST) || !(ATisEmpty(f_46))))
        _fail(t);
      {
        ATerm g_46 = ATgetArgument(t, 1);
        if(((ATgetType(g_46) != AT_LIST) || !(ATisEmpty(g_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm r_121 = NULL,s_121 = NULL,y_121 = NULL,z_121 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_46 = ATgetArgument(t, 0);
      if(((ATgetType(h_46) == AT_LIST) && !(ATisEmpty(h_46))))
        {
          r_121 = ATgetFirst((ATermList) h_46);
          s_121 = (ATerm) ATgetNext((ATermList) h_46);
        }
      else
        _fail(t);
      {
        ATerm i_46 = ATgetArgument(t, 1);
        if(((ATgetType(i_46) == AT_LIST) && !(ATisEmpty(i_46))))
          {
            y_121 = ATgetFirst((ATermList) i_46);
            z_121 = (ATerm) ATgetNext((ATermList) i_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_121, y_121), (ATerm) ATmakeAppl(sym__2, s_121, z_121));
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL;
  if(match_cons(t, sym__2))
    {
      a_122 = ATgetArgument(t, 0);
      b_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_122), a_122);
  return(t);
}
static ATerm v_12 (ATerm u_132 (ATerm), ATerm v_132 (ATerm (ATerm), ATerm), ATerm c_68, ATerm f_68, ATerm t)
{
  ATerm l_121 = NULL,m_121 = NULL,n_121 = NULL,o_121 = NULL,q_121 = NULL;
  t = c_68;
  t = u_132(t);
  l_121 = t;
  t = map_1_0(new_0_0, t);
  m_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_121, m_121);
  t = genzip_4_0(h_9, i_9, j_9, _id, t);
  q_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_121, f_68);
  t = conc_0_0(t);
  n_121 = t;
  t = c_68;
  {
    static ATerm k_9 (ATerm t)
    {
      t = m_121;
      return(t);
    }
    t = v_132(k_9, t);
  }
  o_121 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_121, f_68, n_121);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm g_122 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL;
  i_122 = t;
  if(match_cons(t, sym__2))
    {
      j_122 = ATgetArgument(t, 0);
      k_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_122;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_122 = ATgetFirst((ATermList) t);
      m_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_122;
  if(match_cons(t, sym__2))
    {
      g_122 = ATgetArgument(t, 0);
      h_122 = ATgetArgument(t, 1);
      {
        ATerm j_46 = t;
        int k_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_122;
            if((j_122 != t))
              {
                _fail(t);
              }
            t = h_122;
            LocalPopChoice(k_46);
          }
        else
          {
            t = j_46;
            t = (ATerm) ATmakeAppl(sym__2, j_122, m_122);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_122, m_122);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  static ATerm i_123 (ATerm t)
  {
    ATerm l_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_125(t);
        LocalPopChoice(m_46);
      }
    else
      {
        t = l_46;
        {
          ATerm f_123 = NULL,g_123 = NULL,h_123 = NULL;
          static ATerm m_9 (ATerm t)
          {
            ATerm j_53 = NULL;
            j_53 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_53, not_null(h_123));
            t = i_123(t);
            return(t);
          }
          f_123 = t;
          if(match_cons(t, sym__2))
            {
              g_123 = ATgetArgument(t, 0);
              if(((h_123 != NULL) && (h_123 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                h_123 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_123;
          t = SRTS_all(m_9, t);
        }
      }
    return(t);
  }
  t = i_123(t);
  return(t);
}
ATerm rename_4_0 (ATerm p_132 (ATerm (ATerm), ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_132 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_123 = NULL;
  static ATerm b_124 (ATerm t)
  {
    static ATerm n_9 (ATerm t)
    {
      ATerm v_123 = NULL,w_123 = NULL,x_123 = NULL;
      v_123 = t;
      if(match_cons(t, sym__2))
        {
          w_123 = ATgetArgument(t, 0);
          x_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_46 = t;
        int o_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_9 (ATerm t)
            {
              ATerm a_124 = NULL;
              a_124 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_124, x_123);
              t = lookup_0_0(t);
              return(t);
            }
            t = w_123;
            t = p_132(o_9, t);
            LocalPopChoice(o_46);
          }
        else
          {
            t = n_46;
            {
              ATerm y_53 = NULL,z_53 = NULL,f_54 = NULL;
              t = v_123;
              t = v_12(q_132, s_132, w_123, x_123, t);
              if(match_cons(t, sym__3))
                {
                  y_53 = ATgetArgument(t, 0);
                  z_53 = ATgetArgument(t, 1);
                  f_54 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_12(b_124, r_132, y_53, z_53, f_54, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(n_9, t);
    return(t);
  }
  m_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_123, (ATerm) ATempty);
  t = b_124(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_46 = ATgetArgument(t, 0);
      if(((ATgetType(p_46) != AT_LIST) || !(ATisEmpty(p_46))))
        _fail(t);
      {
        ATerm q_46 = ATgetArgument(t, 1);
        if(((ATgetType(q_46) != AT_LIST) || !(ATisEmpty(q_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm q_56 = NULL,s_56 = NULL,u_56 = NULL,v_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_46 = ATgetArgument(t, 0);
      if(((ATgetType(r_46) == AT_LIST) && !(ATisEmpty(r_46))))
        {
          q_56 = ATgetFirst((ATermList) r_46);
          s_56 = (ATerm) ATgetNext((ATermList) r_46);
        }
      else
        _fail(t);
      {
        ATerm s_46 = ATgetArgument(t, 1);
        if(((ATgetType(s_46) == AT_LIST) && !(ATisEmpty(s_46))))
          {
            u_56 = ATgetFirst((ATermList) s_46);
            v_56 = (ATerm) ATgetNext((ATermList) s_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_56, u_56), (ATerm) ATmakeAppl(sym__2, s_56, v_56));
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL;
  if(match_cons(t, sym__2))
    {
      w_56 = ATgetArgument(t, 0);
      x_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_56), w_56);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm z_56 = NULL,b_57 = NULL,c_57 = NULL;
  if(match_cons(t, sym__2))
    {
      z_56 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_56;
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_46);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_57);
      }
    else
      {
        t = t_46;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_46 = ATgetArgument(t, 0);
            b_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_57, b_57);
      }
  }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_46 = ATgetArgument(t, 0);
      if(((ATgetType(x_46) != AT_LIST) || !(ATisEmpty(x_46))))
        _fail(t);
      {
        ATerm y_46 = ATgetArgument(t, 1);
        if(((ATgetType(y_46) != AT_LIST) || !(ATisEmpty(y_46))))
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
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_46 = ATgetArgument(t, 0);
      if(((ATgetType(z_46) == AT_LIST) && !(ATisEmpty(z_46))))
        {
          k_58 = ATgetFirst((ATermList) z_46);
          l_58 = (ATerm) ATgetNext((ATermList) z_46);
        }
      else
        _fail(t);
      {
        ATerm b_47 = ATgetArgument(t, 1);
        if(((ATgetType(b_47) == AT_LIST) && !(ATisEmpty(b_47))))
          {
            m_58 = ATgetFirst((ATermList) b_47);
            n_58 = (ATerm) ATgetNext((ATermList) b_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_58, m_58), (ATerm) ATmakeAppl(sym__2, l_58, n_58));
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL;
  if(match_cons(t, sym__2))
    {
      o_58 = ATgetArgument(t, 0);
      p_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_58), o_58);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm r_58 = NULL,u_58 = NULL,v_58 = NULL;
  if(match_cons(t, sym__2))
    {
      r_58 = ATgetArgument(t, 0);
      v_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_58;
  {
    ATerm c_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_58);
      }
    else
      {
        t = c_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_47 = ATgetArgument(t, 0);
            u_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_58, u_58);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL,b_127 = NULL;
  x_126 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_126 = ATgetArgument(t, 0);
      z_126 = ATgetArgument(t, 1);
      {
        ATerm t_54 = NULL,w_54 = NULL,a_20 = NULL;
        t = SSLgetAnnotations(x_126);
        t_54 = t;
        t = y_126;
        t = k_136(t);
        w_54 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_54, z_126);
        a_20 = t;
        t = SSLsetAnnotations(a_20, t_54);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_126 = ATgetArgument(t, 0);
          z_126 = ATgetArgument(t, 1);
          a_127 = ATgetArgument(t, 2);
          b_127 = ATgetArgument(t, 3);
          {
            ATerm w_55 = NULL,n_56 = NULL,o_56 = NULL,b_20 = NULL;
            t = SSLgetAnnotations(x_126);
            w_55 = t;
            t = a_127;
            t = k_136(t);
            o_56 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_127, o_56);
            t = genzip_4_0(p_9, q_9, s_9, u_9, t);
            n_56 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_126, z_126, n_56, b_127);
            b_20 = t;
            t = SSLsetAnnotations(b_20, w_55);
          }
        }
      else
        {
          ATerm b_58 = NULL,g_58 = NULL,i_58 = NULL,c_20 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              y_126 = ATgetArgument(t, 0);
              z_126 = ATgetArgument(t, 1);
              a_127 = ATgetArgument(t, 2);
              b_127 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_126);
          b_58 = t;
          t = a_127;
          t = k_136(t);
          i_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_127, i_58);
          t = genzip_4_0(v_9, w_9, x_9, y_9, t);
          g_58 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, y_126, z_126, g_58, b_127);
          c_20 = t;
          t = SSLsetAnnotations(c_20, b_58);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm t)
{
  ATerm h_130 = NULL,i_130 = NULL,j_130 = NULL,k_130 = NULL,l_130 = NULL;
  k_130 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_130 = ATgetArgument(t, 0);
      h_130 = ATgetArgument(t, 1);
      {
        ATerm j_59 = NULL,o_59 = NULL,q_59 = NULL,h_20 = NULL;
        t = SSLgetAnnotations(k_130);
        j_59 = t;
        t = l_130;
        t = n_136(t);
        o_59 = t;
        t = h_130;
        t = l_136(t);
        q_59 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_59, q_59);
        h_20 = t;
        t = SSLsetAnnotations(h_20, j_59);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          l_130 = ATgetArgument(t, 0);
          h_130 = ATgetArgument(t, 1);
          i_130 = ATgetArgument(t, 2);
          j_130 = ATgetArgument(t, 3);
          {
            ATerm e_60 = NULL,k_60 = NULL,l_60 = NULL,n_60 = NULL,p_60 = NULL,j_20 = NULL;
            t = SSLgetAnnotations(k_130);
            e_60 = t;
            t = l_130;
            t = n_136(t);
            k_60 = t;
            t = h_130;
            t = n_136(t);
            l_60 = t;
            t = i_130;
            t = n_136(t);
            n_60 = t;
            t = j_130;
            t = l_136(t);
            p_60 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_60, l_60, n_60, p_60);
            j_20 = t;
            t = SSLsetAnnotations(j_20, e_60);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              l_130 = ATgetArgument(t, 0);
              h_130 = ATgetArgument(t, 1);
              i_130 = ATgetArgument(t, 2);
              j_130 = ATgetArgument(t, 3);
              {
                ATerm d_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,r_61 = NULL,k_20 = NULL;
                t = SSLgetAnnotations(k_130);
                d_61 = t;
                t = l_130;
                t = n_136(t);
                i_61 = t;
                t = h_130;
                t = n_136(t);
                j_61 = t;
                t = i_130;
                t = n_136(t);
                k_61 = t;
                t = j_130;
                t = l_136(t);
                r_61 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, i_61, j_61, k_61, r_61);
                k_20 = t;
                t = SSLsetAnnotations(k_20, d_61);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  l_130 = ATgetArgument(t, 0);
                  {
                    ATerm c_62 = NULL,f_62 = NULL,l_20 = NULL;
                    t = SSLgetAnnotations(k_130);
                    c_62 = t;
                    t = l_130;
                    t = l_136(t);
                    f_62 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, f_62);
                    l_20 = t;
                    t = SSLsetAnnotations(l_20, c_62);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      l_130 = ATgetArgument(t, 0);
                      {
                        ATerm s_62 = NULL,u_62 = NULL,m_20 = NULL;
                        t = SSLgetAnnotations(k_130);
                        s_62 = t;
                        t = l_130;
                        t = l_136(t);
                        u_62 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, u_62);
                        m_20 = t;
                        t = SSLsetAnnotations(m_20, s_62);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          l_130 = ATgetArgument(t, 0);
                          {
                            ATerm j_63 = NULL,t_63 = NULL,n_20 = NULL;
                            t = SSLgetAnnotations(k_130);
                            j_63 = t;
                            t = l_130;
                            t = l_136(t);
                            t_63 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, t_63);
                            n_20 = t;
                            t = SSLsetAnnotations(n_20, j_63);
                          }
                        }
                      else
                        {
                          ATerm a_64 = NULL,k_64 = NULL,o_20 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              l_130 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(k_130);
                          a_64 = t;
                          t = l_130;
                          t = l_136(t);
                          k_64 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, k_64);
                          o_20 = t;
                          t = SSLsetAnnotations(o_20, a_64);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm j_131 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_131);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm g_47 = t;
  int j_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_47);
    }
  else
    {
      t = g_47;
      {
        ATerm k_47 = t;
        int m_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_47);
          }
        else
          {
            t = k_47;
            {
              ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL,o_131 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_131 = ATgetArgument(t, 0);
                  m_131 = ATgetArgument(t, 1);
                  n_131 = ATgetArgument(t, 2);
                  o_131 = ATgetArgument(t, 3);
                  t = n_131;
                  t = map_1_0(b_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_131 = ATgetArgument(t, 0);
                      m_131 = ATgetArgument(t, 1);
                      n_131 = ATgetArgument(t, 2);
                      o_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_131;
                  t = map_1_0(c_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm x_131 = NULL;
  ATerm o_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_131 = ATgetArgument(t, 0);
          {
            ATerm u_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_47);
      t = x_131;
    }
  else
    {
      t = o_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_131;
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm i_132 = NULL;
  ATerm w_47 = t;
  int x_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_132 = ATgetArgument(t, 0);
          {
            ATerm y_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_47);
      t = i_132;
    }
  else
    {
      t = w_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_132;
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm m_132 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_132);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm z_47 = t;
  int c_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_48);
    }
  else
    {
      t = z_47;
      {
        ATerm d_48 = t;
        int e_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_48);
          }
        else
          {
            t = d_48;
            {
              ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL,c_133 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_132 = ATgetArgument(t, 0);
                  y_132 = ATgetArgument(t, 1);
                  z_132 = ATgetArgument(t, 2);
                  c_133 = ATgetArgument(t, 3);
                  t = z_132;
                  t = map_1_0(o_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_132 = ATgetArgument(t, 0);
                      y_132 = ATgetArgument(t, 1);
                      z_132 = ATgetArgument(t, 2);
                      c_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_132;
                  t = map_1_0(u_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm j_133 = NULL;
  ATerm f_48 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_133 = ATgetArgument(t, 0);
          {
            ATerm h_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_48);
      t = j_133;
    }
  else
    {
      t = f_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_133;
    }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm s_133 = NULL;
  ATerm i_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_133 = ATgetArgument(t, 0);
          {
            ATerm k_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_48);
      t = s_133;
    }
  else
    {
      t = i_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_133;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm w_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_133);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm l_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_48);
    }
  else
    {
      t = l_48;
      {
        ATerm n_48 = t;
        int o_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_48);
          }
        else
          {
            t = n_48;
            {
              ATerm y_133 = NULL,z_133 = NULL,a_134 = NULL,b_134 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_133 = ATgetArgument(t, 0);
                  z_133 = ATgetArgument(t, 1);
                  a_134 = ATgetArgument(t, 2);
                  b_134 = ATgetArgument(t, 3);
                  t = a_134;
                  t = map_1_0(r_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_133 = ATgetArgument(t, 0);
                      z_133 = ATgetArgument(t, 1);
                      a_134 = ATgetArgument(t, 2);
                      b_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_134;
                  t = map_1_0(s_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm m_134 = NULL;
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_134 = ATgetArgument(t, 0);
          {
            ATerm r_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_48);
      t = m_134;
    }
  else
    {
      t = p_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_134;
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm v_134 = NULL;
  ATerm s_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_134 = ATgetArgument(t, 0);
          {
            ATerm v_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_48);
      t = v_134;
    }
  else
    {
      t = s_48;
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
static ATerm t_11 (ATerm t)
{
  ATerm z_134 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_134);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      {
        ATerm y_48 = t;
        int z_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_48);
          }
        else
          {
            t = y_48;
            {
              ATerm b_135 = NULL,c_135 = NULL,d_135 = NULL,e_135 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_135 = ATgetArgument(t, 0);
                  c_135 = ATgetArgument(t, 1);
                  d_135 = ATgetArgument(t, 2);
                  e_135 = ATgetArgument(t, 3);
                  t = d_135;
                  t = map_1_0(v_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_135 = ATgetArgument(t, 0);
                      c_135 = ATgetArgument(t, 1);
                      d_135 = ATgetArgument(t, 2);
                      e_135 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_135;
                  t = map_1_0(w_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm l_135 = NULL;
  ATerm e_49 = t;
  int n_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_135 = ATgetArgument(t, 0);
          {
            ATerm o_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_49);
      t = l_135;
    }
  else
    {
      t = e_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_135;
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm w_135 = NULL;
  ATerm p_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_135 = ATgetArgument(t, 0);
          {
            ATerm r_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_49);
      t = w_135;
    }
  else
    {
      t = p_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_135;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm h_131 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      h_131 = ATgetArgument(t, 0);
      t = h_131;
      t = free_vars_3_0(z_9, a_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          h_131 = ATgetArgument(t, 0);
          t = h_131;
          t = free_vars_3_0(d_10, e_10, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              h_131 = ATgetArgument(t, 0);
              t = h_131;
              t = free_vars_3_0(d_11, p_11, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  h_131 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = h_131;
              t = free_vars_3_0(t_11, u_11, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm o_12 (ATerm f_119 (ATerm), ATerm l_50, ATerm k_50, ATerm t)
{
  static ATerm w_136 (ATerm t)
  {
    ATerm j_136 = NULL,s_136 = NULL,t_136 = NULL;
    j_136 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_50;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_136 = ATgetFirst((ATermList) t);
            t_136 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_49 = t;
          int t_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_136;
              {
                static ATerm x_11 (ATerm t)
                {
                  t = k_50;
                  return(t);
                }
                t = p_12(f_119, x_11, s_136, t_136, t);
              }
              t = w_136(t);
              LocalPopChoice(t_49);
            }
          else
            {
              t = s_49;
              {
                ATerm r_64 = NULL,x_64 = NULL,e_21 = NULL;
                t = SSLgetAnnotations(j_136);
                r_64 = t;
                t = t_136;
                t = w_136(t);
                x_64 = t;
                t = (ATerm) ATinsert(CheckATermList(x_64), s_136);
                e_21 = t;
                t = SSLsetAnnotations(e_21, r_64);
              }
            }
        }
      }
    return(t);
  }
  t = l_50;
  t = w_136(t);
  return(t);
}
ATerm foldr_3_0 (ATerm v_121 (ATerm), ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm t)
{
  ATerm z_136 = NULL,c_137 = NULL,d_137 = NULL;
  z_136 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_136;
      t = v_121(t);
    }
  else
    {
      ATerm g_137 = NULL,h_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_137 = ATgetFirst((ATermList) t);
          d_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_137;
      t = x_121(t);
      g_137 = t;
      t = d_137;
      t = foldr_3_0(v_121, w_121, x_121, t);
      h_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_137, h_137);
      t = w_121(t);
    }
  return(t);
}
static ATerm p_12 (ATerm i_119 (ATerm), ATerm j_119 (ATerm), ATerm p_50, ATerm o_50, ATerm t)
{
  t = j_119(t);
  {
    static ATerm y_11 (ATerm t)
    {
      ATerm k_137 = NULL;
      k_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_50, k_137);
      t = i_119(t);
      return(t);
    }
    t = fetch_1_0(y_11, t);
  }
  t = o_50;
  return(t);
}
static ATerm q_12 (ATerm a_119 (ATerm), ATerm j_50, ATerm i_50, ATerm t)
{
  static ATerm a_138 (ATerm t)
  {
    ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL;
    v_137 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_137;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_137 = ATgetFirst((ATermList) t);
            x_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_49 = t;
          int v_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_137;
              {
                static ATerm z_11 (ATerm t)
                {
                  t = i_50;
                  return(t);
                }
                t = p_12(a_119, z_11, w_137, x_137, t);
              }
              t = a_138(t);
              LocalPopChoice(v_49);
            }
          else
            {
              t = u_49;
              {
                ATerm q_65 = NULL,z_65 = NULL,g_21 = NULL;
                t = SSLgetAnnotations(v_137);
                q_65 = t;
                t = x_137;
                t = a_138(t);
                z_65 = t;
                t = (ATerm) ATinsert(CheckATermList(z_65), w_137);
                g_21 = t;
                t = SSLsetAnnotations(g_21, q_65);
              }
            }
        }
      }
    return(t);
  }
  t = j_50;
  t = a_138(t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  static ATerm w_138 (ATerm t)
  {
    ATerm t_138 = NULL,u_138 = NULL,v_138 = NULL;
    v_138 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_138 = ATgetFirst((ATermList) t);
        u_138 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_66 = NULL,t_66 = NULL,i_21 = NULL;
          t = SSLgetAnnotations(v_138);
          q_66 = t;
          t = u_138;
          t = w_138(t);
          t_66 = t;
          t = (ATerm) ATinsert(CheckATermList(t_66), t_138);
          i_21 = t;
          t = SSLsetAnnotations(i_21, q_66);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_138;
        t = r_115(t);
      }
    return(t);
  }
  t = w_138(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_138 = NULL,e_138 = NULL,f_138 = NULL;
  d_138 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_138;
    }
  else
    {
      static ATerm a_12 (ATerm t)
      {
        t = not_null(f_138);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_138 = ATgetFirst((ATermList) t);
          if(((f_138 != NULL) && (f_138 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_138 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_138;
      t = at_end_1_0(a_12, t);
    }
  return(t);
}
static ATerm i_139 (ATerm a_139, ATerm t)
{
  ATerm b_139 = NULL;
  t = SSL_explode_term(a_139);
  if(match_cons(t, sym__2))
    {
      ATerm x_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_139;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_139 = NULL,e_139 = NULL,f_139 = NULL;
  f_139 = t;
  if(match_cons(t, sym__2))
    {
      d_139 = ATgetArgument(t, 0);
      e_139 = ATgetArgument(t, 1);
      {
        ATerm y_49 = t;
        int b_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_12 (ATerm t)
            {
              t = e_139;
              return(t);
            }
            t = d_139;
            t = at_end_1_0(b_12, t);
            LocalPopChoice(b_50);
          }
        else
          {
            t = y_49;
            t = i_139(f_139, t);
          }
      }
    }
  else
    {
      t = i_139(f_139, t);
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_50 = ATgetArgument(t, 0);
      if(((ATgetType(c_50) != AT_LIST) || !(ATisEmpty(c_50))))
        _fail(t);
      {
        ATerm d_50 = ATgetArgument(t, 1);
        if(((ATgetType(d_50) != AT_LIST) || !(ATisEmpty(d_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm p_139 = NULL,q_139 = NULL,r_139 = NULL,s_139 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_50 = ATgetArgument(t, 0);
      if(((ATgetType(e_50) == AT_LIST) && !(ATisEmpty(e_50))))
        {
          p_139 = ATgetFirst((ATermList) e_50);
          q_139 = (ATerm) ATgetNext((ATermList) e_50);
        }
      else
        _fail(t);
      {
        ATerm f_50 = ATgetArgument(t, 1);
        if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
          {
            r_139 = ATgetFirst((ATermList) f_50);
            s_139 = (ATerm) ATgetNext((ATermList) f_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_139, r_139), (ATerm) ATmakeAppl(sym__2, q_139, s_139));
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm t_139 = NULL,u_139 = NULL;
  if(match_cons(t, sym__2))
    {
      t_139 = ATgetArgument(t, 0);
      u_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_139), t_139);
  return(t);
}
static ATerm s_12 (ATerm n_685, ATerm s_685, ATerm d_70, ATerm t)
{
  ATerm k_139 = NULL,l_139 = NULL,m_139 = NULL,n_139 = NULL;
  t = SSL_explode_term(s_685);
  if(match_cons(t, sym__2))
    {
      k_139 = ATgetArgument(t, 0);
      m_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_685);
  if(match_cons(t, sym__2))
    {
      if((k_139 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_139, m_139);
  t = genzip_4_0(c_12, e_12, f_12, _id, t);
  n_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_139, d_70);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t)
{
  static ATerm w_139 (ATerm t)
  {
    ATerm g_50 = t;
    int h_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_112(t);
        LocalPopChoice(h_50);
      }
    else
      {
        t = g_50;
        t = m_112(t);
        t = w_139(t);
      }
    return(t);
  }
  t = w_139(t);
  return(t);
}
ATerm for_3_0 (ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm t)
{
  t = o_112(t);
  t = while_not_2_0(p_112, q_112, t);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm d_140 = NULL;
  d_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_140);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm e_140 = NULL,f_140 = NULL,g_140 = NULL,h_140 = NULL,k_21 = NULL;
  h_140 = t;
  if(match_cons(t, sym__2))
    {
      f_140 = ATgetArgument(t, 0);
      g_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_140);
  e_140 = t;
  t = g_140;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_140, g_140);
  k_21 = t;
  t = SSLsetAnnotations(k_21, e_140);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm a_141 = NULL,b_141 = NULL,c_141 = NULL,d_141 = NULL,e_141 = NULL;
  a_141 = t;
  if(match_cons(t, sym__2))
    {
      b_141 = ATgetArgument(t, 0);
      c_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_141;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_141 = ATgetFirst((ATermList) t);
      e_141 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_50 = t;
        int q_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_141(b_141, c_141, a_141, t);
            LocalPopChoice(q_50);
          }
        else
          {
            t = m_50;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_141), d_141), e_141);
          }
      }
    }
  else
    {
      t = o_141(b_141, c_141, a_141, t);
    }
  return(t);
}
static ATerm o_141 (ATerm i_140, ATerm j_140, ATerm k_140, ATerm t)
{
  ATerm l_140 = NULL,o_140 = NULL,l_21 = NULL,r_140 = NULL,s_140 = NULL,t_140 = NULL,u_140 = NULL;
  t = SSLgetAnnotations(k_140);
  l_140 = t;
  t = j_140;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_140 = ATgetFirst((ATermList) t);
      u_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_140;
  if(match_cons(t, sym__2))
    {
      s_140 = ATgetArgument(t, 0);
      t_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_50 = t;
    int s_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_140;
        if((s_140 != t))
          {
            _fail(t);
          }
        t = u_140;
        LocalPopChoice(s_50);
      }
    else
      {
        t = r_50;
        t = j_140;
        t = s_12(s_140, t_140, u_140, t);
      }
  }
  o_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_140, o_140);
  l_21 = t;
  t = SSLsetAnnotations(l_21, l_140);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm n_141 = NULL;
  if(match_cons(t, sym__2))
    {
      n_141 = ATgetArgument(t, 0);
      if((n_141 != ATgetArgument(t, 1)))
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
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(t_12, w_12, y_12, t);
      LocalPopChoice(x_50);
    }
  else
    {
      t = w_50;
      {
        ATerm i_141 = NULL,j_141 = NULL,k_141 = NULL;
        i_141 = t;
        if(match_cons(t, sym__2))
          {
            j_141 = ATgetArgument(t, 0);
            k_141 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_141;
        t = q_12(a_13, j_141, k_141, t);
      }
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL;
  if(match_cons(t, sym__2))
    {
      g_67 = ATgetArgument(t, 0);
      h_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_12(p_14, g_67, h_67, t);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm i_67 = NULL;
  if(match_cons(t, sym__2))
    {
      i_67 = ATgetArgument(t, 0);
      if((i_67 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL;
  if(match_cons(t, sym__2))
    {
      t_67 = ATgetArgument(t, 0);
      u_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_12(s_14, t_67, u_67, t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm v_67 = NULL;
  if(match_cons(t, sym__2))
    {
      v_67 = ATgetArgument(t, 0);
      if((v_67 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm c_142 (ATerm t)
  {
    ATerm y_50 = t;
    int z_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_134(t);
        LocalPopChoice(z_50);
      }
    else
      {
        t = y_50;
        {
          ATerm a_51 = t;
          int b_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_141 = NULL,r_141 = NULL,a_67 = NULL,b_67 = NULL;
              q_141 = t;
              t = g_134(t);
              r_141 = t;
              t = q_141;
              {
                static ATerm a_14 (ATerm t)
                {
                  ATerm t_141 = NULL;
                  t = c_142(t);
                  t_141 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_141, r_141);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_134(a_14, c_142, b_14, t);
              }
              b_67 = t;
              t = SSL_explode_term(b_67);
              if(match_cons(t, sym__2))
                {
                  ATerm c_51 = ATgetArgument(t, 0);
                  a_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_67;
              t = foldr_3_0(e_14, g_14, _id, t);
              LocalPopChoice(b_51);
            }
          else
            {
              t = a_51;
              {
                ATerm n_67 = NULL,p_67 = NULL;
                p_67 = t;
                t = SSL_explode_term(p_67);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_51 = ATgetArgument(t, 0);
                    n_67 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_67;
                t = foldr_3_0(q_14, r_14, c_142, t);
              }
            }
        }
      }
    return(t);
  }
  t = c_142(t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm p_142 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_142);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm e_51 = t;
  int f_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_51);
    }
  else
    {
      t = e_51;
      {
        ATerm h_51 = t;
        int i_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_51);
          }
        else
          {
            t = h_51;
            {
              ATerm r_142 = NULL,s_142 = NULL,t_142 = NULL,u_142 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_142 = ATgetArgument(t, 0);
                  s_142 = ATgetArgument(t, 1);
                  t_142 = ATgetArgument(t, 2);
                  u_142 = ATgetArgument(t, 3);
                  t = t_142;
                  t = map_1_0(c_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_142 = ATgetArgument(t, 0);
                      s_142 = ATgetArgument(t, 1);
                      t_142 = ATgetArgument(t, 2);
                      u_142 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_142;
                  t = map_1_0(r_15, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm b_143 = NULL;
  ATerm j_51 = t;
  int k_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_143 = ATgetArgument(t, 0);
          {
            ATerm l_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_51);
      t = b_143;
    }
  else
    {
      t = j_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_143;
    }
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm k_143 = NULL;
  ATerm m_51 = t;
  int r_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_143 = ATgetArgument(t, 0);
          {
            ATerm s_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_51);
      t = k_143;
    }
  else
    {
      t = m_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_143;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm i_142 = NULL,m_142 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      m_142 = ATgetArgument(t, 0);
      t = m_142;
      if(match_cons(t, sym_Rule_3))
        {
          i_142 = ATgetArgument(t, 0);
          {
            ATerm t_51 = ATgetArgument(t, 1);
          }
          {
            ATerm u_51 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = i_142;
      t = free_vars_3_0(u_14, v_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          m_142 = ATgetArgument(t, 0);
          {
            ATerm v_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_142;
    }
  return(t);
}
ATerm Var_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm o_143 = NULL,p_143 = NULL,q_143 = NULL,r_143 = NULL,q_21 = NULL;
  r_143 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_143);
  o_143 = t;
  t = p_143;
  t = k_84(t);
  q_143 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_143);
  q_21 = t;
  t = SSLsetAnnotations(q_21, o_143);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm w_51 = t;
  int x_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_51);
    }
  else
    {
      t = w_51;
      {
        ATerm a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            a_144 = ATgetArgument(t, 0);
            b_144 = ATgetArgument(t, 1);
            c_144 = ATgetArgument(t, 2);
            d_144 = ATgetArgument(t, 3);
            t = c_144;
            t = map_1_0(u_15, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                a_144 = ATgetArgument(t, 0);
                b_144 = ATgetArgument(t, 1);
                c_144 = ATgetArgument(t, 2);
                d_144 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = c_144;
            t = map_1_0(w_15, t);
          }
      }
    }
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm k_144 = NULL;
  ATerm y_51 = t;
  int z_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_144 = ATgetArgument(t, 0);
          {
            ATerm a_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_51);
      t = k_144;
    }
  else
    {
      t = y_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_144;
    }
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm t_144 = NULL;
  ATerm b_52 = t;
  int c_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_144 = ATgetArgument(t, 0);
          {
            ATerm e_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_52);
      t = t_144;
    }
  else
    {
      t = b_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_144;
    }
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm w_144 = NULL,x_144 = NULL,y_144 = NULL,z_144 = NULL,a_145 = NULL;
  w_144 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_144 = ATgetArgument(t, 0);
      y_144 = ATgetArgument(t, 1);
      t = w_144;
      t = k_12(x_144, y_144, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_144 = ATgetArgument(t, 0);
          y_144 = ATgetArgument(t, 1);
          z_144 = ATgetArgument(t, 2);
          t = y_144;
          t = map_1_0(z_15, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              x_144 = ATgetArgument(t, 0);
              y_144 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, x_144);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  x_144 = ATgetArgument(t, 0);
                  y_144 = ATgetArgument(t, 1);
                  z_144 = ATgetArgument(t, 2);
                  a_145 = ATgetArgument(t, 3);
                  t = y_144;
                  t = map_1_0(a_16, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_144 = ATgetArgument(t, 0);
                      y_144 = ATgetArgument(t, 1);
                      z_144 = ATgetArgument(t, 2);
                      a_145 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_144;
                  t = map_1_0(b_16, t);
                }
            }
        }
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm i_145 = NULL;
  ATerm f_52 = t;
  int h_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_145 = ATgetArgument(t, 0);
          {
            ATerm i_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_52);
      t = i_145;
    }
  else
    {
      t = f_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_145;
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm t_145 = NULL;
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_145 = ATgetArgument(t, 0);
          {
            ATerm l_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_52);
      t = t_145;
    }
  else
    {
      t = j_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_145;
    }
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm c_146 = NULL;
  ATerm m_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_146 = ATgetArgument(t, 0);
          {
            ATerm o_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_52);
      t = c_146;
    }
  else
    {
      t = m_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_146;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, t_15, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, y_15, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm b_13 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm f_146 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_42, v_42);
  t = r_13(u_42, v_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_146 = ATgetFirst((ATermList) t);
      {
        ATerm q_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_146;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm d_147 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      d_147 = ATgetArgument(t, 0);
      {
        ATerm r_52 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_147;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm e_147 = NULL,g_147 = NULL,h_147 = NULL,i_147 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      g_147 = ATgetArgument(t, 0);
      i_147 = ATgetArgument(t, 1);
      e_147 = ATgetArgument(t, 2);
      t = g_147;
      if(match_cons(t, sym_SVar_1))
        {
          h_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_147;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_147;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_147;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          g_147 = ATgetArgument(t, 0);
          i_147 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_147;
      if(match_cons(t, sym_SVar_1))
        {
          h_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_147;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_147;
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm m_147 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_147 = ATgetArgument(t, 0);
      {
        ATerm w_52 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_147;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_52 = ATgetArgument(t, 0);
      if(((ATgetType(y_52) != AT_LIST) || !(ATisEmpty(y_52))))
        _fail(t);
      {
        ATerm z_52 = ATgetArgument(t, 1);
        if(((ATgetType(z_52) != AT_LIST) || !(ATisEmpty(z_52))))
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
  ATerm n_147 = NULL,o_147 = NULL,p_147 = NULL,q_147 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_53 = ATgetArgument(t, 0);
      if(((ATgetType(b_53) == AT_LIST) && !(ATisEmpty(b_53))))
        {
          n_147 = ATgetFirst((ATermList) b_53);
          o_147 = (ATerm) ATgetNext((ATermList) b_53);
        }
      else
        _fail(t);
      {
        ATerm c_53 = ATgetArgument(t, 1);
        if(((ATgetType(c_53) == AT_LIST) && !(ATisEmpty(c_53))))
          {
            p_147 = ATgetFirst((ATermList) c_53);
            q_147 = (ATerm) ATgetNext((ATermList) c_53);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_147, p_147), (ATerm) ATmakeAppl(sym__2, o_147, q_147));
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm r_147 = NULL,s_147 = NULL;
  if(match_cons(t, sym__2))
    {
      r_147 = ATgetArgument(t, 0);
      s_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_147), r_147);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm t_147 = NULL,u_147 = NULL;
  if(match_cons(t, sym__2))
    {
      t_147 = ATgetArgument(t, 0);
      u_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_147), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_147)));
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm q_146 = NULL,r_146 = NULL,s_146 = NULL,t_146 = NULL,u_146 = NULL,v_146 = NULL,w_146 = NULL,x_146 = NULL,y_146 = NULL,z_146 = NULL,b_147 = NULL,c_147 = NULL,y_67 = NULL,z_67 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm d_53 = ATgetArgument(t, 0);
      if(match_cons(d_53, sym_SVar_1))
        {
          s_146 = ATgetArgument(d_53, 0);
        }
      else
        _fail(t);
      u_146 = ATgetArgument(t, 1);
      y_146 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_146), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  y_67 = t;
  t = term_f_53;
  z_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_53, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_146), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = b_13(z_67, y_67, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm i_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_53) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      q_146 = ATgetArgument(t, 1);
      r_146 = ATgetArgument(t, 2);
      x_146 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_146, q_146, x_146, r_146);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((s_146 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_146 = ATgetArgument(t, 1);
      {
        ATerm k_53 = ATgetArgument(t, 2);
      }
      v_146 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_146;
  t = map_1_0(c_16, t);
  c_147 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_147, u_146, v_146);
  t = substitute_2_0(g_16, _id, t);
  w_146 = t;
  t = x_146;
  t = map_1_0(i_16, t);
  z_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_146, z_146);
  t = genzip_4_0(j_16, l_16, n_16, p_16, t);
  b_147 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, z_146, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_147), w_146));
  t = downup_1_0(u_16, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm e_148 = NULL,f_148 = NULL,g_148 = NULL;
  e_148 = t;
  t = term_j_21;
  f_148 = t;
  t = (ATerm) ATinsert(ATempty, term_l_53);
  g_148 = t;
  t = SSL_printnl(f_148, g_148);
  t = e_148;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = debug_1_0(x_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_m_53;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm o_148 = NULL,p_148 = NULL,q_148 = NULL;
  o_148 = t;
  t = term_j_21;
  p_148 = t;
  t = (ATerm) ATinsert(ATempty, term_n_53);
  q_148 = t;
  t = SSL_printnl(p_148, q_148);
  t = o_148;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm c_148 = NULL,d_148 = NULL;
  d_148 = t;
  t = new_0_0(t);
  c_148 = t;
  {
    ATerm o_53 = t;
    int p_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_53, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_148), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(p_53);
      }
    else
      {
        t = o_53;
        t = if_verbose2_1_0(v_16, t);
        _fail(t);
      }
  }
  {
    ATerm u_53 = t;
    int v_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_148 = NULL,i_148 = NULL,j_148 = NULL,k_148 = NULL,l_148 = NULL,m_148 = NULL,n_148 = NULL;
        h_148 = t;
        if(match_cons(t, sym_LChoice_2))
          {
            i_148 = ATgetArgument(t, 0);
            n_148 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_148;
        if(match_cons(t, sym_CallT_3))
          {
            j_148 = ATgetArgument(t, 0);
            l_148 = ATgetArgument(t, 1);
            m_148 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = j_148;
        if(match_cons(t, sym_SVar_1))
          {
            k_148 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_148;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_148;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_148;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        t = k_148;
        if((c_148 != t))
          {
            _fail(t);
          }
        t = h_148;
        LocalPopChoice(v_53);
      }
    else
      {
        t = u_53;
        t = if_verbose1_1_0(w_16, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(y_16, t);
  t = d_148;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
static ATerm c_13 (ATerm u_113 (ATerm), ATerm f_41, ATerm d_41, ATerm t)
{
  ATerm r_148 = NULL,s_148 = NULL,t_148 = NULL,u_148 = NULL,v_148 = NULL,w_148 = NULL;
  u_148 = t;
  t = u_113(t);
  r_148 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_148, f_41, d_41);
  t = s_13(r_148, f_41, d_41, t);
  {
    ATerm w_53 = t;
    int a_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_148 = NULL;
        t = term_q_31;
        x_148 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_148, term_q_31);
        t = r_13(r_148, x_148, t);
        LocalPopChoice(a_54);
      }
    else
      {
        t = w_53;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_148 = ATgetFirst((ATermList) t);
      t_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_31;
  v_148 = t;
  t = (ATerm) ATinsert(CheckATermList(t_148), (ATerm) ATinsert(CheckATermList(s_148), f_41));
  w_148 = t;
  t = SSL_table_put(r_148, v_148, w_148);
  t = u_148;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_f_53;
  return(t);
}
static ATerm d_13 (ATerm i_22, ATerm j_22, ATerm l_22, ATerm k_22, ATerm t)
{
  ATerm y_148 = NULL,z_148 = NULL,a_149 = NULL;
  y_148 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  z_148 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_b_54, j_22, k_22, l_22);
  a_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_b_54, j_22, k_22, l_22));
  t = c_13(d_17, z_148, a_149, t);
  t = y_148;
  return(t);
}
ATerm map_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  static ATerm p_149 (ATerm t)
  {
    ATerm m_149 = NULL,n_149 = NULL,o_149 = NULL;
    m_149 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_149;
      }
    else
      {
        ATerm g_68 = NULL,m_68 = NULL,n_68 = NULL,s_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_149 = ATgetFirst((ATermList) t);
            o_149 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_149);
        g_68 = t;
        t = n_149;
        t = b_115(t);
        m_68 = t;
        t = o_149;
        t = p_149(t);
        n_68 = t;
        t = (ATerm) ATinsert(CheckATermList(n_68), m_68);
        s_21 = t;
        t = SSLsetAnnotations(s_21, g_68);
      }
    return(t);
  }
  t = p_149(t);
  return(t);
}
ATerm Cons_2_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm t)
{
  ATerm r_149 = NULL,s_149 = NULL,t_149 = NULL,u_149 = NULL,v_149 = NULL,w_149 = NULL,u_21 = NULL;
  w_149 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_149 = ATgetFirst((ATermList) t);
      t_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_149);
  r_149 = t;
  t = s_149;
  t = g_102(t);
  u_149 = t;
  t = t_149;
  t = h_102(t);
  v_149 = t;
  t = (ATerm) ATinsert(CheckATermList(v_149), u_149);
  u_21 = t;
  t = SSLsetAnnotations(u_21, r_149);
  return(t);
}
static ATerm g_13 (ATerm l_32, ATerm m_32, ATerm t)
{
  ATerm x_149 = NULL;
  t = SSL_fputc(l_32, m_32);
  x_149 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_149);
  return(t);
}
static ATerm h_13 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm y_149 = NULL;
  t = SSL_write_term_to_stream_text(w_37, x_37);
  y_149 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_149);
  return(t);
}
static ATerm k_13 (ATerm j_113 (ATerm), ATerm p_315, ATerm c_38, ATerm t)
{
  ATerm z_149 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_315, term_c_54);
  t = o_13(t);
  z_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_149, c_38);
  t = j_113(t);
  t = fclose_0_0(t);
  t = c_38;
  return(t);
}
static ATerm i_13 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm a_150 = NULL;
  t = SSL_write_term_to_stream_baf(s_37, t_37);
  a_150 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_150);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm d_69 = NULL,j_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_54 = ATgetArgument(t, 0);
      if(match_cons(d_54, sym_Stream_1))
        {
          d_69 = ATgetArgument(d_54, 0);
        }
      else
        _fail(t);
      j_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_13(d_69, j_69, t);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,g_70 = NULL,k_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_54 = ATgetArgument(t, 0);
      if(match_cons(g_54, sym_Stream_1))
        {
          g_70 = ATgetArgument(g_54, 0);
        }
      else
        _fail(t);
      k_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_13(g_70, k_70, t);
  a_70 = t;
  t = term_q_23;
  b_70 = t;
  t = a_70;
  if(match_cons(t, sym_Stream_1))
    {
      c_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, a_70);
  t = g_13(b_70, c_70, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_150 = NULL,f_150 = NULL,g_150 = NULL,h_150 = NULL,i_150 = NULL,k_150 = NULL,l_150 = NULL,m_150 = NULL,n_150 = NULL,o_150 = NULL,o_151 = NULL,p_151 = NULL,c_22 = NULL,b_22 = NULL;
  f_150 = t;
  if(match_cons(t, sym__2))
    {
      m_150 = ATgetArgument(t, 0);
      n_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_150);
  l_150 = t;
  t = m_150;
  {
    ATerm h_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_17 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((e_150 != NULL) && (e_150 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_150 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_17, t);
        LocalPopChoice(i_54);
      }
    else
      {
        t = h_54;
        t = term_j_54;
        e_150 = t;
      }
  }
  o_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_150, n_150);
  b_22 = t;
  t = SSLsetAnnotations(b_22, l_150);
  t = f_150;
  if(match_cons(t, sym__2))
    {
      h_150 = ATgetArgument(t, 0);
      i_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_150);
  g_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_150, (ATerm) ATmakeAppl(sym__2, not_null(e_150), i_150));
  c_22 = t;
  t = SSLsetAnnotations(c_22, g_150);
  k_150 = t;
  if(match_cons(t, sym__2))
    {
      o_151 = ATgetArgument(t, 0);
      p_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_22 = NULL;
        t = SSLgetAnnotations(k_150);
        w_68 = t;
        t = o_151;
        t = fetch_1_0(f_17, t);
        z_68 = t;
        t = p_151;
        if(match_cons(t, sym__2))
          {
            b_69 = ATgetArgument(t, 0);
            c_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_13(p_17, b_69, c_69, t);
        a_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_68, a_69);
        d_22 = t;
        t = SSLsetAnnotations(d_22, w_68);
        LocalPopChoice(l_54);
      }
    else
      {
        t = k_54;
        {
          ATerm s_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,e_22 = NULL;
          t = SSLgetAnnotations(k_150);
          s_69 = t;
          t = p_151;
          if(match_cons(t, sym__2))
            {
              y_69 = ATgetArgument(t, 0);
              z_69 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_13(u_17, y_69, z_69, t);
          x_69 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_151, x_69);
          e_22 = t;
          t = SSLsetAnnotations(e_22, s_69);
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
ATerm apply_strategy_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm s_151 = NULL,t_151 = NULL,u_151 = NULL,v_151 = NULL,w_151 = NULL;
  w_151 = t;
  t = dtime_0_0(t);
  t = w_151;
  t = s_127(t);
  v_151 = t;
  t = dtime_0_0(t);
  s_151 = t;
  t = v_151;
  if(match_cons(t, sym__2))
    {
      t_151 = ATgetArgument(t, 0);
      u_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_151), (ATerm) ATmakeAppl(sym_Runtime_1, s_151)), u_151);
  return(t);
}
static ATerm k_152 (ATerm e_152, ATerm t)
{
  t = SSL_fclose(e_152);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_152 = NULL,i_152 = NULL;
  i_152 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_152 = ATgetArgument(t, 0);
      {
        ATerm m_54 = t;
        int n_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_152);
            LocalPopChoice(n_54);
          }
        else
          {
            t = m_54;
            t = k_152(i_152, t);
          }
      }
    }
  else
    {
      t = k_152(i_152, t);
    }
  return(t);
}
static ATerm l_13 (ATerm y_37, ATerm t)
{
  t = SSL_read_term_from_stream(y_37);
  return(t);
}
static ATerm n_13 (ATerm n_32, ATerm o_32, ATerm t)
{
  ATerm l_152 = NULL;
  t = SSL_fopen(n_32, o_32);
  l_152 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_152);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_152 = NULL;
  t = SSL_stdin_stream();
  m_152 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_152);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_152 = NULL;
  t = SSL_stdout_stream();
  n_152 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_152);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_152 = NULL;
  t = SSL_stderr_stream();
  o_152 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_152);
  return(t);
}
static ATerm v_153 (ATerm u_152, ATerm t)
{
  ATerm v_152 = NULL;
  t = SSL_explode_term(u_152);
  if(match_cons(t, sym__2))
    {
      ATerm o_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_54 = ATgetArgument(t, 1);
        if(((ATgetType(q_54) == AT_LIST) && !(ATisEmpty(q_54))))
          {
            v_152 = ATgetFirst((ATermList) q_54);
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
  t = v_152;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_152;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_152;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_152;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_153 (ATerm y_152, ATerm z_152, ATerm a_153, ATerm t)
{
  ATerm b_153 = NULL,c_153 = NULL,d_153 = NULL,g_153 = NULL,n_22 = NULL;
  t = SSLgetAnnotations(a_153);
  d_153 = t;
  t = y_152;
  if(match_cons(t, sym_Path_1))
    {
      g_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_153, z_152);
  n_22 = t;
  t = SSLsetAnnotations(n_22, d_153);
  if(match_cons(t, sym__2))
    {
      b_153 = ATgetArgument(t, 0);
      c_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13(b_153, c_153, t);
  return(t);
}
static ATerm x_153 (ATerm i_153, ATerm j_153, ATerm k_153, ATerm t)
{
  ATerm l_153 = NULL,m_153 = NULL,n_153 = NULL,q_153 = NULL,q_22 = NULL;
  t = SSLgetAnnotations(k_153);
  n_153 = t;
  t = SSL_is_string(i_153);
  q_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_153, j_153);
  q_22 = t;
  t = SSLsetAnnotations(q_22, n_153);
  if(match_cons(t, sym__2))
    {
      l_153 = ATgetArgument(t, 0);
      m_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13(l_153, m_153, t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm s_153 = NULL,t_153 = NULL,u_153 = NULL;
  s_153 = t;
  if(match_cons(t, sym__2))
    {
      t_153 = ATgetArgument(t, 0);
      u_153 = ATgetArgument(t, 1);
      {
        ATerm s_54 = t;
        int u_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_153(s_153, t);
            LocalPopChoice(u_54);
          }
        else
          {
            t = s_54;
            {
              ATerm v_54 = t;
              int x_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_153(t_153, u_153, s_153, t);
                  LocalPopChoice(x_54);
                }
              else
                {
                  t = v_54;
                  t = x_153(t_153, u_153, s_153, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_153(s_153, t);
    }
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_y_54;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_153 = NULL,z_153 = NULL,a_154 = NULL;
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_154 = NULL;
      b_154 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_154, term_b_55);
      t = o_13(t);
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      t = debug_1_0(w_17, t);
      _fail(t);
    }
  z_153 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_13(a_154, t);
  y_153 = t;
  t = z_153;
  t = fclose_0_0(t);
  t = y_153;
  return(t);
}
ATerm fetch_1_0 (ATerm l_115 (ATerm), ATerm t)
{
  static ATerm z_154 (ATerm t)
  {
    ATerm w_154 = NULL,x_154 = NULL,y_154 = NULL;
    w_154 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_154 = ATgetFirst((ATermList) t);
        y_154 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_55 = t;
      int e_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_71 = NULL,e_71 = NULL,j_23 = NULL;
          t = SSLgetAnnotations(w_154);
          b_71 = t;
          t = x_154;
          t = l_115(t);
          e_71 = t;
          t = (ATerm) ATinsert(CheckATermList(y_154), e_71);
          j_23 = t;
          t = SSLsetAnnotations(j_23, b_71);
          LocalPopChoice(e_55);
        }
      else
        {
          t = d_55;
          {
            ATerm m_71 = NULL,p_71 = NULL,k_23 = NULL;
            t = SSLgetAnnotations(w_154);
            m_71 = t;
            t = y_154;
            t = z_154(t);
            p_71 = t;
            t = (ATerm) ATinsert(CheckATermList(p_71), x_154);
            k_23 = t;
            t = SSLsetAnnotations(k_23, m_71);
          }
        }
    }
    return(t);
  }
  t = z_154(t);
  return(t);
}
static ATerm f_13 (ATerm f_31, ATerm g_31, ATerm t)
{
  t = SSL_strcat(f_31, g_31);
  return(t);
}
ATerm debug_1_0 (ATerm h_113 (ATerm), ATerm t)
{
  ATerm c_155 = NULL,d_155 = NULL,e_155 = NULL,f_155 = NULL;
  c_155 = t;
  t = h_113(t);
  d_155 = t;
  t = term_j_21;
  e_155 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_155), d_155);
  f_155 = t;
  t = SSL_printnl(e_155, f_155);
  t = c_155;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm f_55 = t;
  int g_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(g_55);
    }
  else
    {
      t = f_55;
    }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_h_55;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_55 = t;
  int j_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_155 = NULL;
      m_155 = t;
      t = SSL_is_string(m_155);
      LocalPopChoice(j_55);
    }
  else
    {
      t = i_55;
      {
        ATerm l_55 = t;
        int m_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_17, t);
            LocalPopChoice(m_55);
          }
        else
          {
            t = l_55;
            {
              ATerm s_155 = NULL,t_155 = NULL,u_155 = NULL;
              s_155 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_155 = ATgetArgument(t, 0);
                  t = t_155;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_155 = ATgetArgument(t, 0);
                      t = t_155;
                      {
                        ATerm n_55 = t;
                        int o_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(o_55);
                          }
                        else
                          {
                            t = n_55;
                            t = debug_1_0(z_17, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_155 = NULL,z_155 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_155 = ATgetArgument(t, 0);
                          u_155 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_155;
                      t = eval_config_0_0(t);
                      y_155 = t;
                      t = u_155;
                      t = eval_config_0_0(t);
                      z_155 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_155, z_155);
                      t = f_13(y_155, z_155, t);
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
  ATerm d_156 = NULL,e_156 = NULL;
  d_156 = t;
  t = term_p_55;
  e_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_55, d_156);
  t = r_13(e_156, d_156, t);
  {
    ATerm q_55 = t;
    int r_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_156 = NULL,g_156 = NULL;
        t = eval_config_0_0(t);
        f_156 = t;
        t = term_p_55;
        g_156 = t;
        t = SSL_table_put(g_156, d_156, f_156);
        t = f_156;
        LocalPopChoice(r_55);
      }
    else
      {
        t = q_55;
      }
  }
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm k_156 = NULL;
  k_156 = t;
  if(match_string(t, "-k"))
    {
      t = k_156;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_156;
    }
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm l_156 = NULL,m_156 = NULL,n_156 = NULL;
  l_156 = t;
  t = SSL_string_to_int(l_156);
  m_156 = t;
  t = term_s_55;
  n_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_55, m_156);
  t = u_13(n_156, m_156, t);
  t = l_156;
  return(t);
}
static ATerm d_18 (ATerm t)
{
  t = term_t_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_18, c_18, d_18, t);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm p_156 = NULL;
  p_156 = t;
  if(match_string(t, "-S"))
    {
      t = p_156;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_156;
    }
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm q_156 = NULL,r_156 = NULL;
  t = term_v_21;
  q_156 = t;
  t = term_u_55;
  r_156 = t;
  t = term_v_55;
  t = u_13(q_156, r_156, t);
  t = term_z_55;
  return(t);
}
static ATerm g_18 (ATerm t)
{
  t = term_a_56;
  return(t);
}
static ATerm i_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm s_156 = NULL,t_156 = NULL,u_156 = NULL;
  s_156 = t;
  t = SSL_string_to_int(s_156);
  t_156 = t;
  t = term_v_21;
  u_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, t_156);
  t = u_13(u_156, t_156, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_156);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  t = term_b_56;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm v_156 = NULL,w_156 = NULL;
  t = term_c_56;
  v_156 = t;
  t = term_h_21;
  w_156 = t;
  t = term_d_56;
  t = u_13(v_156, w_156, t);
  t = term_e_56;
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_f_56;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_56 = t;
  int h_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_18, f_18, g_18, t);
      LocalPopChoice(h_56);
    }
  else
    {
      t = g_56;
      {
        ATerm i_56 = t;
        int j_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_18, k_18, m_18, t);
            LocalPopChoice(j_56);
          }
        else
          {
            t = i_56;
            t = Option_3_0(t_18, u_18, v_18, t);
          }
      }
    }
  return(t);
}
static ATerm u_13 (ATerm c_64, ATerm d_64, ATerm t)
{
  ATerm x_156 = NULL;
  t = term_p_55;
  x_156 = t;
  t = SSL_table_put(x_156, c_64, d_64);
  t = (ATerm) ATmakeAppl(sym__3, term_p_55, c_64, d_64);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_157 = NULL,b_157 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_157 = NULL,d_157 = NULL,e_157 = NULL;
      t = term_h_21;
      t = i_0(t);
      c_157 = t;
      t = term_k_56;
      d_157 = t;
      t = term_l_56;
      e_157 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_56, term_l_56, c_157);
      t = s_13(d_157, e_157, c_157, t);
      _fail(t);
    }
  else
    {
      ATerm h_157 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_157 = ATgetFirst((ATermList) t);
          b_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_157;
      t = d_0(t);
      t = term_h_21;
      t = g_0(t);
      h_157 = t;
      t = (ATerm) ATinsert(CheckATermList(b_157), h_157);
    }
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm j_157 = NULL;
  j_157 = t;
  if(match_string(t, "-o"))
    {
      t = j_157;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_157;
    }
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm k_157 = NULL,l_157 = NULL;
  k_157 = t;
  t = term_m_56;
  l_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_56, k_157);
  t = u_13(l_157, k_157, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_157);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  t = term_p_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_18, x_18, z_18, t);
  return(t);
}
static ATerm s_13 (ATerm j_42, ATerm k_42, ATerm i_42, ATerm t)
{
  ATerm n_157 = NULL,o_157 = NULL,p_157 = NULL;
  n_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_42, k_42);
  {
    ATerm r_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_56 = ATgetArgument(t, 0);
            ATerm a_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_42, k_42);
        t = r_13(j_42, k_42, t);
        LocalPopChoice(t_56);
      }
    else
      {
        t = r_56;
        t = (ATerm) ATempty;
      }
  }
  o_157 = t;
  t = (ATerm) ATinsert(CheckATermList(o_157), i_42);
  p_157 = t;
  t = SSL_table_put(j_42, k_42, p_157);
  t = n_157;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm w_157 = NULL,x_157 = NULL,y_157 = NULL,z_157 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_158 = NULL,b_158 = NULL,c_158 = NULL;
      t = term_h_21;
      t = t_0(t);
      a_158 = t;
      t = term_k_56;
      b_158 = t;
      t = term_l_56;
      c_158 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_56, term_l_56, a_158);
      t = s_13(b_158, c_158, a_158, t);
      _fail(t);
    }
  else
    {
      ATerm g_158 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_157 = ATgetFirst((ATermList) t);
          x_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_157;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_157 = ATgetFirst((ATermList) t);
          z_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_157;
      t = p_0(t);
      t = y_157;
      t = r_0(t);
      g_158 = t;
      t = (ATerm) ATinsert(CheckATermList(z_157), g_158);
    }
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm i_158 = NULL;
  i_158 = t;
  if(match_string(t, "-i"))
    {
      t = i_158;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_158;
    }
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm j_158 = NULL,k_158 = NULL;
  j_158 = t;
  t = term_d_57;
  k_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_57, j_158);
  t = u_13(k_158, j_158, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_158);
  return(t);
}
static ATerm c_19 (ATerm t)
{
  t = term_f_57;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_19, b_19, c_19, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_158 = NULL,m_158 = NULL,n_158 = NULL,o_158 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_21;
  t = whoami_0_0(t);
  l_158 = t;
  t = term_j_21;
  n_158 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_57), l_158);
  o_158 = t;
  t = SSL_printnl(n_158, o_158);
  t = term_p_21;
  m_158 = t;
  t = SSL_exit(m_158);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_57;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_13 (ATerm l_39, ATerm n_39, ATerm t)
{
  ATerm i_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_39, n_39);
      LocalPopChoice(j_57);
    }
  else
    {
      t = i_57;
      t = SSL_addr(l_39, n_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm t)
{
  ATerm q_158 = NULL,r_158 = NULL,s_158 = NULL;
  q_158 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_158;
      t = t_121(t);
    }
  else
    {
      ATerm v_158 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_158 = ATgetFirst((ATermList) t);
          s_158 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_158;
      t = foldr_2_0(t_121, u_121, t);
      v_158 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_158, v_158);
      t = u_121(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = term_u_55;
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL;
  if(match_cons(t, sym__2))
    {
      g_72 = ATgetArgument(t, 0);
      h_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13(g_72, h_72, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_158 = NULL,c_72 = NULL,d_72 = NULL;
  t = times_0_0(t);
  d_72 = t;
  t = SSL_explode_term(d_72);
  if(match_cons(t, sym__2))
    {
      ATerm k_57 = ATgetArgument(t, 0);
      c_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_72;
  t = foldr_2_0(e_19, f_19, t);
  y_158 = t;
  t = SSL_TicksToSeconds(y_158);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_159 = NULL,k_159 = NULL,l_159 = NULL;
  j_159 = t;
  if(match_cons(t, sym__2))
    {
      k_159 = ATgetArgument(t, 0);
      l_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_57 = t;
    int m_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_159;
        if((k_159 != t))
          {
            _fail(t);
          }
        t = j_159;
        LocalPopChoice(m_57);
      }
    else
      {
        t = l_57;
        t = (ATerm) ATmakeAppl(sym__2, k_159, l_159);
        {
          ATerm n_57 = t;
          int o_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_159, l_159);
              LocalPopChoice(o_57);
            }
          else
            {
              t = n_57;
              t = SSL_gtr(k_159, l_159);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_159, l_159);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_137 (ATerm), ATerm t)
{
  ATerm p_159 = NULL;
  p_159 = t;
  {
    ATerm r_57 = t;
    int t_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_159 = NULL;
        t = term_v_21;
        t = get_config_0_0(t);
        r_159 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_159, term_p_21);
        t = geq_0_0(t);
        t = p_159;
        t = a_137(t);
        LocalPopChoice(t_57);
      }
    else
      {
        t = r_57;
        t = p_159;
      }
  }
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm t_159 = NULL,u_159 = NULL,w_159 = NULL,x_159 = NULL;
  t = run_time_0_0(t);
  t_159 = t;
  t = term_h_21;
  t = whoami_0_0(t);
  u_159 = t;
  t = term_j_21;
  w_159 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_57), t_159), term_v_57), u_159);
  x_159 = t;
  t = SSL_printnl(w_159, x_159);
  t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_57), t_159), term_v_57), u_159));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_159 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_55;
  y_159 = t;
  t = SSL_exit(y_159);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm g_160 = NULL,h_160 = NULL;
  h_160 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_160;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_160 = ATgetArgument(t, 0);
          {
            ATerm t_72 = NULL,r_23 = NULL;
            t = SSLgetAnnotations(h_160);
            t_72 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_160);
            r_23 = t;
            t = SSLsetAnnotations(r_23, t_72);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_160;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_128 (ATerm), ATerm t)
{
  ATerm x_57 = t;
  int a_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_58;
      t = get_config_0_0(t);
      LocalPopChoice(a_58);
    }
  else
    {
      t = x_57;
      t = fetch_1_0(i_19, t);
    }
  t = q_128(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_160 = NULL,l_160 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_160 = ATgetFirst((ATermList) t);
      l_160 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_160 = NULL,q_160 = NULL;
        static ATerm j_19 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_160)), not_null(q_160));
          return(t);
        }
        t = l_160;
        t = n_0(t);
        if(((p_160 != NULL) && (p_160 != t)))
          _fail(t);
        else
          p_160 = t;
        t = k_160;
        t = k_0(t);
        if(((q_160 != NULL) && (q_160 != t)))
          _fail(t);
        else
          q_160 = t;
        t = l_160;
        t = reverse_acc_2_0(k_0, j_19, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_21;
      t = n_0(t);
    }
  return(t);
}
static ATerm r_13 (ATerm a_44, ATerm b_44, ATerm t)
{
  t = SSL_table_get(a_44, b_44);
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm u_160 = NULL,v_160 = NULL,w_160 = NULL,e_24 = NULL;
  w_160 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_160);
  u_160 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_160);
  e_24 = t;
  t = SSLsetAnnotations(e_24, u_160);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm y_160 = NULL;
  y_160 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_160), term_d_58);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_160 = NULL,t_160 = NULL;
  ATerm e_58 = t;
  int f_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_57;
      t = get_config_0_0(t);
      LocalPopChoice(f_58);
    }
  else
    {
      t = e_58;
      t = fetch_1_0(k_19, t);
    }
  t = term_h_58;
  t = echo_0_0(t);
  t = term_k_56;
  s_160 = t;
  t = term_l_56;
  t_160 = t;
  t = term_j_58;
  t = r_13(s_160, t_160, t);
  t = reverse_acc_2_0(_id, l_19, t);
  t = map_1_0(m_19, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_161 = NULL,b_161 = NULL,c_161 = NULL;
  a_161 = t;
  {
    ATerm q_58 = t;
    int s_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_161;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_58 = ATgetFirst((ATermList) t);
                ATerm w_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_161;
          }
        LocalPopChoice(s_58);
      }
    else
      {
        t = q_58;
        t = (ATerm) ATinsert(ATempty, a_161);
      }
  }
  b_161 = t;
  t = term_j_54;
  c_161 = t;
  t = SSL_printnl(c_161, b_161);
  t = a_161;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_57;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_19 (ATerm t)
{
  ATerm g_161 = NULL,h_161 = NULL;
  t = term_x_58;
  g_161 = t;
  t = term_h_21;
  h_161 = t;
  t = term_y_58;
  t = u_13(g_161, h_161, t);
  return(t);
}
static ATerm p_19 (ATerm t)
{
  t = term_z_58;
  return(t);
}
static ATerm u_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_19 (ATerm t)
{
  ATerm i_161 = NULL,j_161 = NULL,k_161 = NULL,l_161 = NULL;
  t = term_x_58;
  k_161 = t;
  t = term_h_21;
  l_161 = t;
  t = term_y_58;
  t = u_13(k_161, l_161, t);
  t = term_a_59;
  i_161 = t;
  t = term_h_21;
  j_161 = t;
  t = term_b_59;
  t = u_13(i_161, j_161, t);
  t = term_c_59;
  return(t);
}
static ATerm w_19 (ATerm t)
{
  t = term_d_59;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_59 = t;
  int f_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_19, o_19, p_19, t);
      LocalPopChoice(f_59);
    }
  else
    {
      t = e_59;
      t = Option_3_0(u_19, v_19, w_19, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_131 (ATerm), ATerm t)
{
  ATerm q_161 = NULL,r_161 = NULL,s_161 = NULL,t_161 = NULL,v_161 = NULL,w_161 = NULL,u_24 = NULL;
  q_161 = t;
  {
    ATerm g_59 = t;
    int h_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_59;
        t = v_131(t);
        LocalPopChoice(h_59);
      }
    else
      {
        t = g_59;
      }
  }
  t = q_161;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_161 = ATgetFirst((ATermList) t);
      t_161 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_161);
  r_161 = t;
  t = term_h_57;
  w_161 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_57, s_161);
  t = u_13(w_161, s_161, t);
  t = t_161;
  {
    static ATerm g_162 (ATerm t)
    {
      ATerm n_59 = t;
      int r_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_59 = t;
          int t_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_161 = NULL;
              z_161 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_161;
              LocalPopChoice(t_59);
            }
          else
            {
              t = s_59;
              t = v_131(t);
              t = Cons_2_0(_id, g_162, t);
            }
          LocalPopChoice(r_59);
        }
      else
        {
          t = n_59;
          {
            ATerm c_162 = NULL,d_162 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_162 = ATgetFirst((ATermList) t);
                d_162 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_162), (ATerm) ATmakeAppl(sym_Undefined_1, c_162));
          }
        }
      return(t);
    }
    t = g_162(t);
  }
  v_161 = t;
  t = (ATerm) ATinsert(CheckATermList(v_161), (ATerm) ATmakeAppl(sym_Program_1, s_161));
  u_24 = t;
  t = SSLsetAnnotations(u_24, r_161);
  return(t);
}
static ATerm z_19 (ATerm t)
{
  ATerm s_162 = NULL;
  s_162 = t;
  if(match_string(t, "--help"))
    {
      t = s_162;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_162;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_162;
        }
    }
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm t_162 = NULL,u_162 = NULL;
  t = term_c_58;
  t_162 = t;
  t = term_h_21;
  u_162 = t;
  t = term_u_59;
  t = u_13(t_162, u_162, t);
  t = term_v_59;
  return(t);
}
static ATerm e_20 (ATerm t)
{
  t = term_w_59;
  return(t);
}
static ATerm f_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_131 (ATerm), ATerm t)
{
  ATerm l_162 = NULL,m_162 = NULL,n_162 = NULL,o_162 = NULL,p_162 = NULL,q_162 = NULL,r_162 = NULL;
  n_162 = t;
  t = term_k_56;
  p_162 = t;
  t = term_l_56;
  q_162 = t;
  t = (ATerm) ATempty;
  r_162 = t;
  t = SSL_table_put(p_162, q_162, r_162);
  t = n_162;
  {
    static ATerm x_19 (ATerm t)
    {
      ATerm x_59 = t;
      int y_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_131(t);
          LocalPopChoice(y_59);
        }
      else
        {
          t = x_59;
          {
            ATerm z_59 = t;
            int a_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_19, d_20, e_20, t);
                LocalPopChoice(a_60);
              }
            else
              {
                t = z_59;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_19, t);
  }
  {
    ATerm b_60 = t;
    int c_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_163 = NULL;
        b_163 = t;
        {
          ATerm d_60 = t;
          int g_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_73 = NULL;
              t = b_163;
              {
                ATerm h_60 = t;
                int i_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_c_58;
                    t = get_config_0_0(t);
                    LocalPopChoice(i_60);
                  }
                else
                  {
                    t = h_60;
                    t = fetch_1_0(f_20, t);
                  }
              }
              t = b_163;
              t = default_system_usage_0_0(t);
              t = term_u_55;
              e_73 = t;
              t = SSL_exit(e_73);
              LocalPopChoice(g_60);
            }
          else
            {
              t = d_60;
              {
                ATerm j_73 = NULL;
                t = term_x_58;
                t = get_config_0_0(t);
                t = b_163;
                t = default_system_about_0_0(t);
                t = term_u_55;
                j_73 = t;
                t = SSL_exit(j_73);
              }
            }
        }
        LocalPopChoice(c_60);
      }
    else
      {
        t = b_60;
        {
          ATerm j_60 = t;
          int m_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_163 = NULL,d_163 = NULL,e_163 = NULL;
              static ATerm g_20 (ATerm t)
              {
                ATerm f_163 = NULL,g_163 = NULL,h_163 = NULL,z_24 = NULL;
                h_163 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_163 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_163);
                f_163 = t;
                t = g_163;
                if(((l_162 != NULL) && (l_162 != t)))
                  _fail(t);
                else
                  l_162 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_163);
                z_24 = t;
                t = SSLsetAnnotations(z_24, f_163);
                return(t);
              }
              t = fetch_1_0(g_20, t);
              t = term_j_21;
              d_163 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_162)), term_o_60);
              e_163 = t;
              t = SSL_printnl(d_163, e_163);
              t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_162)), term_o_60));
              t = default_system_usage_0_0(t);
              t = term_p_21;
              c_163 = t;
              t = SSL_exit(c_163);
              LocalPopChoice(m_60);
            }
          else
            {
              t = j_60;
            }
        }
      }
  }
  m_162 = t;
  t = term_k_56;
  o_162 = t;
  t = SSL_table_destroy(o_162);
  t = m_162;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t)
{
  ATerm m_163 = NULL,n_163 = NULL,o_163 = NULL,p_163 = NULL;
  t = parse_options_1_0(s_128, t);
  m_163 = t;
  t = term_q_60;
  p_163 = t;
  t = SSL_table_create(p_163);
  t = term_q_60;
  n_163 = t;
  t = term_r_60;
  o_163 = t;
  t = SSL_table_put(n_163, o_163, m_163);
  t = m_163;
  t = u_128(t);
  {
    ATerm s_60 = t;
    int t_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_128, t);
        LocalPopChoice(t_60);
      }
    else
      {
        t = s_60;
        {
          ATerm u_60 = t;
          int v_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_128(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_60);
            }
          else
            {
              t = u_60;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = if_verbose2_1_0(v_20, t);
  return(t);
}
static ATerm r_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm q_163 = NULL,r_163 = NULL;
  t = term_w_60;
  q_163 = t;
  t = term_h_21;
  r_163 = t;
  t = term_x_60;
  t = u_13(q_163, r_163, t);
  t = term_y_60;
  return(t);
}
static ATerm u_20 (ATerm t)
{
  t = term_z_60;
  return(t);
}
static ATerm v_20 (ATerm t)
{
  ATerm s_163 = NULL,t_163 = NULL,u_163 = NULL,v_163 = NULL;
  s_163 = t;
  t = term_h_57;
  t = get_config_0_0(t);
  t_163 = t;
  t = term_j_21;
  u_163 = t;
  t = (ATerm) ATinsert(ATempty, t_163);
  v_163 = t;
  t = SSL_printnl(u_163, v_163);
  t = s_163;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t)
{
  static ATerm i_20 (ATerm t)
  {
    ATerm a_61 = t;
    int b_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_128(t);
        LocalPopChoice(b_61);
      }
    else
      {
        t = a_61;
        {
          ATerm c_61 = t;
          int e_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(e_61);
            }
          else
            {
              t = c_61;
              {
                ATerm f_61 = t;
                int g_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(g_61);
                  }
                else
                  {
                    t = f_61;
                    {
                      ATerm h_61 = t;
                      int s_61 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_20, s_20, u_20, t);
                          LocalPopChoice(s_61);
                        }
                      else
                        {
                          t = h_61;
                          {
                            ATerm t_61 = t;
                            int u_61 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(u_61);
                              }
                            else
                              {
                                t = t_61;
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
  static ATerm q_20 (ATerm t)
  {
    ATerm w_163 = NULL,x_163 = NULL,y_163 = NULL;
    x_163 = t;
    {
      ATerm v_61 = t;
      int w_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_20 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_163 != NULL) && (w_163 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_163 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_20, t);
          LocalPopChoice(w_61);
        }
      else
        {
          t = v_61;
          t = term_x_61;
          w_163 = t;
        }
    }
    t = not_null(w_163);
    t = ReadFromFile_0_0(t);
    y_163 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_163, y_163);
    t = apply_strategy_1_0(b_128, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(i_20, d_128, p_20, q_20, t);
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm b_164 = NULL,c_164 = NULL,d_164 = NULL,e_164 = NULL,f_164 = NULL,q_25 = NULL;
  f_164 = t;
  if(match_cons(t, sym__2))
    {
      c_164 = ATgetArgument(t, 0);
      d_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_164);
  b_164 = t;
  t = d_164;
  {
    ATerm y_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_165 = NULL,m_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,s_73 = NULL,t_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,p_25 = NULL,h_25 = NULL,b_25 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            b_165 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_164);
        m_73 = t;
        t = b_165;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_73 = ATgetFirst((ATermList) t);
            q_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_165);
        o_73 = t;
        t = p_73;
        if(match_cons(t, sym_Signature_1))
          {
            y_73 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_73);
        x_73 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, y_73);
        b_25 = t;
        t = SSLsetAnnotations(b_25, x_73);
        z_73 = t;
        t = q_73;
        t = Cons_2_0(y_20, z_20, t);
        s_73 = t;
        t = (ATerm) ATinsert(CheckATermList(s_73), z_73);
        h_25 = t;
        t = SSLsetAnnotations(h_25, o_73);
        t_73 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, t_73);
        p_25 = t;
        t = SSLsetAnnotations(p_25, m_73);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(d_21, t);
        LocalPopChoice(z_61);
      }
    else
      {
        t = y_61;
        t = if_verbose2_1_0(f_21, t);
      }
  }
  e_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_164, e_164);
  q_25 = t;
  t = SSLsetAnnotations(q_25, b_164);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,d_74 = NULL,g_74 = NULL,e_25 = NULL;
  g_74 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_74);
  a_74 = t;
  t = b_74;
  t = map_1_0(a_21, t);
  d_74 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_74);
  e_25 = t;
  t = SSLsetAnnotations(e_25, a_74);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      h_74 = ATgetArgument(t, 0);
      i_74 = ATgetArgument(t, 1);
      j_74 = ATgetArgument(t, 2);
      k_74 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_13(h_74, i_74, j_74, k_74, t);
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm l_74 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm a_62 = ATgetArgument(t, 0);
      if(match_cons(a_62, sym_SVar_1))
        {
          ATerm e_62 = ATgetArgument(a_62, 0);
          if((ATgetSymbol((ATermAppl) e_62) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm b_62 = ATgetArgument(t, 1);
        if(((ATgetType(b_62) == AT_LIST) && !(ATisEmpty(b_62))))
          {
            l_74 = ATgetFirst((ATermList) b_62);
            {
              ATerm g_62 = (ATerm) ATgetNext((ATermList) b_62);
              if(((ATgetType(g_62) != AT_LIST) || !(ATisEmpty(g_62))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm d_62 = ATgetArgument(t, 2);
        if(((ATgetType(d_62) != AT_LIST) || !(ATisEmpty(d_62))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_10(l_74, t);
  return(t);
}
static ATerm f_21 (ATerm t)
{
  ATerm c_165 = NULL,d_165 = NULL,e_165 = NULL;
  c_165 = t;
  t = term_j_21;
  d_165 = t;
  t = (ATerm) ATinsert(ATempty, term_h_62);
  e_165 = t;
  t = SSL_printnl(d_165, e_165);
  t = c_165;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_20, _fail, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_Where_1;
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
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Anno_2;
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
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
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
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_x_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_y_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_c_54;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_v_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_c_52;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_m_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_48;
ATerm term_e_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_n_47;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_j_43;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_o_36;
ATerm term_k_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_z_34;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_l_32;
ATerm term_i_27;
ATerm term_o_26;
ATerm term_q_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_z_24;
ATerm term_v_24;
ATerm term_n_24;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_n_19;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Op_2, term_x_19, (ATerm) ATempty);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_18);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_21);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Call_2, term_v_22, (ATerm) ATempty);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Call_2, term_v_24, (ATerm) ATempty);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Call_2, term_p_21, (ATerm) ATempty);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_RootApp_1, term_h_18);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_j_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_36);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_36);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_36);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_36);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_36);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_38);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_43);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_43);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_n_47);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_z_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_e_48);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_m_49);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym__2, term_v_49, term_x_49);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym__2, term_d_50, term_q_49);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_a_51);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_v_49);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_m_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym__2, term_o_50, term_p_50);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__2, term_i_53, term_q_49);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__2, term_m_53, term_q_49);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym__2, term_m_52, term_q_49);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, (ATerm) ATempty);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_i_53);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym__2, term_e_48, term_q_49);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_98 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm z_130 (ATerm), ATerm w_75, ATerm u_75, ATerm v_75, ATerm z_75, ATerm x_75, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_1_0 (ATerm z_130 (ATerm), ATerm t);
static ATerm x_18 (ATerm o_13, ATerm p_13, ATerm t);
static ATerm y_18 (ATerm x_13, ATerm y_13, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm q_129 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_8 (ATerm z_65, ATerm a_66, ATerm b_66, ATerm t);
static ATerm d_30 (ATerm h_29, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm r_8 (ATerm m_61, ATerm n_61, ATerm o_61, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm s_8 (ATerm y_130 (ATerm), ATerm d_75, ATerm a_75, ATerm b_75, ATerm k_75, ATerm o_75, ATerm p_75, ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm split_dynamic_rules_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm v_99 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm u_8 (ATerm n_73, ATerm m_73, ATerm t);
ATerm repeat_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm n_106 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm z_8 (ATerm o_109 (ATerm), ATerm p_29, ATerm o_29, ATerm t);
static ATerm a_9 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_29, ATerm s_29, ATerm t);
static ATerm b_9 (ATerm j_109 (ATerm), ATerm n_29, ATerm m_29, ATerm t);
ATerm genzip_4_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm g_9 (ATerm i_641, ATerm n_641, ATerm m_60, ATerm t);
ATerm while_not_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t);
static ATerm w_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm p_96 (ATerm s_94, ATerm t_94, ATerm u_94, ATerm t);
static ATerm e_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm free_vars_3_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm s_98 (ATerm), ATerm t);
static ATerm k_9 (ATerm g_54, ATerm h_54, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_100 (ATerm), ATerm t);
static ATerm l_9 (ATerm m_118 (ATerm), ATerm r_43, ATerm p_43, ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm m_9 (ATerm a_54, ATerm b_54, ATerm t);
ATerm end_scope_1_0 (ATerm j_118 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_118 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_113 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm u_105 (ATerm), ATerm t);
static ATerm f_105 (ATerm t_104, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_9 (ATerm h_132, ATerm d_132, ATerm t);
ATerm foldr_3_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm e_15 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm q_9 (ATerm h_39, ATerm i_39, ATerm t);
static ATerm r_9 (ATerm l_23, ATerm m_23, ATerm t);
static ATerm t_9 (ATerm u_104 (ATerm), ATerm b_172, ATerm r_23, ATerm t);
static ATerm s_9 (ATerm h_23, ATerm i_23, ATerm t);
static ATerm g_15 (ATerm t);
static ATerm n_15 (ATerm t);
ATerm output_1_0 (ATerm s_123 (ATerm), ATerm t);
static ATerm d_114 (ATerm x_113, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_9 (ATerm n_23, ATerm t);
static ATerm v_9 (ATerm a_38, ATerm b_38, ATerm t);
static ATerm w_9 (ATerm j_39, ATerm k_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_115 (ATerm n_114, ATerm t);
static ATerm p_115 (ATerm r_114, ATerm s_114, ATerm t_114, ATerm t);
static ATerm q_115 (ATerm b_115, ATerm c_115, ATerm d_115, ATerm t);
static ATerm x_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm n_16 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_10 (ATerm a_49, ATerm b_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm e_10 (ATerm v_53, ATerm w_53, ATerm u_53, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_9 (ATerm d_42, ATerm e_42, ATerm t);
ATerm foldr_2_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_120 (ATerm), ATerm t);
static ATerm h_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_17 (ATerm t);
ATerm need_help_1_0 (ATerm j_123 (ATerm), ATerm t);
static ATerm h_10 (ATerm n_57, ATerm o_57, ATerm p_57, ATerm t);
ATerm lookup_table_0_1 (ATerm h_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_57, ATerm w_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_10 (ATerm s_57, ATerm t_57, ATerm t);
static ATerm b_10 (ATerm x_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm d_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_105 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_10 (ATerm q_57, ATerm r_57, ATerm t);
static ATerm d_10 (ATerm o_55, ATerm p_55, ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_125 (ATerm), ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
ATerm parse_options_1_0 (ATerm l_125 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm q_0 = NULL,u_0 = NULL,v_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      y_0 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, y_0, z_0);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          y_0 = ATgetArgument(t, 0);
          t = y_0;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_0 = ATgetFirst((ATermList) t);
              u_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, q_0, (ATerm) ATmakeAppl(sym_LChoices_1, u_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_g_18;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              y_0 = ATgetArgument(t, 0);
              t = y_0;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_0 = ATgetFirst((ATermList) t);
                  u_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, q_0, (ATerm) ATmakeAppl(sym_Choices_1, u_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_g_18;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  y_0 = ATgetArgument(t, 0);
                  t = y_0;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_0 = ATgetFirst((ATermList) t);
                      u_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_0, (ATerm) ATmakeAppl(sym_Seqs_1, u_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_h_18;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      y_0 = ATgetArgument(t, 0);
                      z_0 = ATgetArgument(t, 1);
                      v_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, z_0, (ATerm) ATmakeAppl(sym_Op_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, v_0), y_0)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          y_0 = ATgetArgument(t, 0);
                          z_0 = ATgetArgument(t, 1);
                          v_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, v_0)), y_0), (ATerm) ATmakeAppl(sym_Build_1, z_0)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              y_0 = ATgetArgument(t, 0);
                              z_0 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_0, (ATerm) ATmakeAppl(sym_Match_1, z_0));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  y_0 = ATgetArgument(t, 0);
                                  z_0 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_0), z_0);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      y_0 = ATgetArgument(t, 0);
                                      z_0 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_0), y_0);
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
ATerm topdown_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(r_98, t);
    return(t);
  }
  t = r_98(t);
  t = SRTS_all(b_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm a_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_5);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm g_5 = NULL,i_5 = NULL,l_5 = NULL,m_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_5 = ATgetArgument(t, 0);
                  i_5 = ATgetArgument(t, 1);
                  l_5 = ATgetArgument(t, 2);
                  m_5 = ATgetArgument(t, 3);
                  t = l_5;
                  t = map_1_0(s_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_5 = ATgetArgument(t, 0);
                      i_5 = ATgetArgument(t, 1);
                      l_5 = ATgetArgument(t, 2);
                      m_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_5;
                  t = map_1_0(w_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm c_6 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_6 = ATgetArgument(t, 0);
          {
            ATerm p_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = c_6;
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_6;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm o_6 = NULL;
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_6 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_18);
      t = o_6;
    }
  else
    {
      t = q_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_6;
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm r_6 = NULL;
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_6);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm w_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_6);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm v_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_18);
          }
        else
          {
            t = v_18;
            {
              ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_7 = ATgetArgument(t, 0);
                  c_7 = ATgetArgument(t, 1);
                  d_7 = ATgetArgument(t, 2);
                  e_7 = ATgetArgument(t, 3);
                  t = d_7;
                  t = map_1_0(c_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_7 = ATgetArgument(t, 0);
                      c_7 = ATgetArgument(t, 1);
                      d_7 = ATgetArgument(t, 2);
                      e_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_7;
                  t = map_1_0(d_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm o_7 = NULL;
  ATerm b_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_7 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_19);
      t = o_7;
    }
  else
    {
      t = b_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_7;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm d_8 = NULL;
  ATerm g_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_8 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = d_8;
    }
  else
    {
      t = g_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_8;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL,j_0 = NULL,a_0 = NULL,u_1 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            j_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_8);
        j_0 = t;
        t = term_n_19;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_19, j_10);
        t = k_9(u_1, j_10, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm o_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_19) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, j_10);
        a_0 = t;
        t = SSLsetAnnotations(a_0, j_0);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        {
          ATerm x_1 = NULL;
          t = term_n_19;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_19, v_8);
          t = k_9(x_1, v_8, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm u_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_19) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = v_8;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, v_8);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  static ATerm o_11 (ATerm w_3, ATerm y_3, ATerm z_3, ATerm a_4, ATerm b_4, ATerm c_4, ATerm d_4, ATerm t)
  {
    ATerm m_4 = NULL,o_4 = NULL,p_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, b_4, term_y_19);
    {
      ATerm z_19 = t;
      if((PushChoice() == 0))
        {
          ATerm x_4 = NULL;
          if(match_cons(t, sym__2))
            {
              x_4 = ATgetArgument(t, 0);
              if((x_4 != ATgetArgument(t, 1)))
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
          t = z_19;
        }
    }
    t = new_0_0(t);
    m_4 = t;
    t = a_4;
    t = dummify_0_0(t);
    p_4 = t;
    {
      ATerm a_20 = t;
      int b_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_4;
          if((a_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, m_4);
          LocalPopChoice(b_20);
        }
      else
        {
          t = a_20;
          t = p_4;
        }
    }
    o_4 = t;
    t = p_4;
    t = free_vars_3_0(h_0, m_0, tboundin_3_0, t);
    t = map_1_0(x_0, t);
    t_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
    t = free_vars_3_0(a_1, b_1, tboundin_3_0, t);
    t = filter_1_0(e_1, t);
    s_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_4, t_4);
    t = diff_0_0(t);
    u_4 = t;
    t = new_0_0(t);
    v_4 = t;
    t = w_3;
    t = t_0(t);
    w_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, w_4, (ATerm) ATmakeAppl(sym_Op_2, term_h_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_20, (ATerm) ATinsert(CheckATermList(u_4), (ATerm) ATmakeAppl(sym_Str_1, v_4)))), p_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, w_3, y_3, z_3, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_4), a_4), b_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_3)))), o_4), (ATerm) ATmakeAppl(sym_Op_2, term_i_20, (ATerm) ATinsert(CheckATermList(u_4), (ATerm) ATmakeAppl(sym_Str_1, v_4))))), c_4))));
    return(t);
  }
  ATerm m_10 = NULL,r_10 = NULL,s_10 = NULL,v_10 = NULL,z_10 = NULL,c_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL,m_11 = NULL;
  s_10 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      v_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
      c_11 = ATgetArgument(t, 2);
      e_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = e_11;
  if(match_cons(t, sym_Rule_3))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
      m_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_11;
  if(match_cons(t, sym_Op_2))
    {
      m_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      t = r_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_10;
          if(match_string(t, "Undefined"))
            {
              ATerm m_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
                  t = s_10;
                  t = new_0_0(t);
                  l_2 = t;
                  t = g_11;
                  t = dummify_0_0(t);
                  j_2 = t;
                  {
                    ATerm t_20 = t;
                    int v_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_2;
                        if((g_11 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                        LocalPopChoice(v_20);
                      }
                    else
                      {
                        t = t_20;
                        t = j_2;
                      }
                  }
                  m_2 = t;
                  t = v_10;
                  t = t_0(t);
                  n_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_2, (ATerm) ATmakeAppl(sym_Op_2, term_h_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_19), j_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, v_10, z_10, c_11, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_2), g_11), term_y_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_10)))), m_2), term_y_19)), (ATerm) ATmakeAppl(sym_Seq_2, m_11, term_g_18)))));
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = m_20;
                  t = o_11(v_10, z_10, c_11, g_11, h_11, m_11, s_10, t);
                }
            }
          else
            {
              t = o_11(v_10, z_10, c_11, g_11, h_11, m_11, s_10, t);
            }
        }
      else
        {
          t = m_10;
          t = o_11(v_10, z_10, c_11, g_11, h_11, m_11, s_10, t);
        }
    }
  else
    {
      t = o_11(v_10, z_10, c_11, g_11, h_11, m_11, s_10, t);
    }
  return(t);
}
static ATerm l_8 (ATerm z_130 (ATerm), ATerm w_75, ATerm u_75, ATerm v_75, ATerm z_75, ATerm x_75, ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  t = new_0_0(t);
  s_11 = t;
  t = z_75;
  t = dummify_0_0(t);
  r_11 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_11;
        if((z_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, s_11);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = r_11;
      }
  }
  t_11 = t;
  t = w_75;
  t = z_130(t);
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, u_11, r_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, w_75, u_75, v_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_11), z_75), term_y_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_75)))), t_11), term_e_21)), (ATerm) ATmakeAppl(sym_Seq_2, x_75, term_g_18))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_1_0 (ATerm z_130 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      e_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
      g_12 = ATgetArgument(t, 2);
      {
        ATerm f_21 = ATgetArgument(t, 3);
        if(match_cons(f_21, sym_Rule_3))
          {
            h_12 = ATgetArgument(f_21, 0);
            {
              ATerm k_21 = ATgetArgument(f_21, 1);
              if(match_cons(k_21, sym_Op_2))
                {
                  ATerm l_21 = ATgetArgument(k_21, 0);
                  if((ATgetSymbol((ATermAppl) l_21) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm m_21 = ATgetArgument(k_21, 1);
                    if(((ATgetType(m_21) != AT_LIST) || !(ATisEmpty(m_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            i_12 = ATgetArgument(f_21, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_8(z_130, e_12, f_12, g_12, h_12, i_12, t);
  return(t);
}
static ATerm x_18 (ATerm o_13, ATerm p_13, ATerm t)
{
  t = o_13;
  {
    ATerm n_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,f_0 = NULL;
        u_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_13 = ATgetFirst((ATermList) t);
            t_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_13);
        r_13 = t;
        t = t_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(t_13), s_13);
        f_0 = t;
        t = SSLsetAnnotations(f_0, r_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_18, o_13);
  return(t);
}
static ATerm y_18 (ATerm x_13, ATerm y_13, ATerm t)
{
  t = x_13;
  {
    ATerm o_21 = t;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,v_1 = NULL;
        d_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_14 = ATgetFirst((ATermList) t);
            c_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_14);
        a_14 = t;
        t = c_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(c_14), b_14);
        v_1 = t;
        t = SSLsetAnnotations(v_1, a_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_21, x_13);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,w_2 = NULL;
  s_14 = t;
  t = SSL_explode_term(s_14);
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_21 = ATgetArgument(t, 1);
        if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
          {
            t_14 = ATgetFirst((ATermList) y_21);
            {
              ATerm b_22 = (ATerm) ATgetNext((ATermList) y_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(s_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_22 = ATgetArgument(t, 1);
        if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
          {
            ATerm j_22 = ATgetFirst((ATermList) e_22);
            ATerm r_22 = (ATerm) ATgetNext((ATermList) e_22);
            if(((ATgetType(r_22) == AT_LIST) && !(ATisEmpty(r_22))))
              {
                w_2 = ATgetFirst((ATermList) r_22);
                {
                  ATerm s_22 = (ATerm) ATgetNext((ATermList) r_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, w_2), t_14));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm o_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, r_15), o_15));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, u_15), t_15));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm j_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_22, (ATerm) ATinsert(ATinsert(ATempty, m_16), j_16));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_22, (ATerm) ATinsert(ATinsert(ATempty, p_16), o_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,l_14 = NULL,m_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      l_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
      {
        ATerm q_14 = NULL;
        t = m_14;
        t = foldr_2_0(f_1, g_1, t);
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, l_14, q_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          l_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, l_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              l_14 = ATgetArgument(t, 0);
              {
                ATerm e_3 = NULL;
                t = l_14;
                {
                  ATerm x_22 = t;
                  int z_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_a_23;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_b_23;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_e_23;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_g_23;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_k_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(z_22);
                    }
                  else
                    {
                      t = x_22;
                      {
                        ATerm r_3 = NULL;
                        t = SSL_explode_string(l_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm q_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(q_23) != AT_INT) || (ATgetInt((ATermInt) q_23) != 39)))
                              _fail(t);
                            {
                              ATerm s_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(s_23) == AT_LIST) && !(ATisEmpty(s_23))))
                                {
                                  r_3 = ATgetFirst((ATermList) s_23);
                                  {
                                    ATerm t_23 = (ATerm) ATgetNext((ATermList) s_23);
                                    if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
                                      {
                                        ATerm y_23 = ATgetFirst((ATermList) t_23);
                                        if(((ATgetType(y_23) != AT_INT) || (ATgetInt((ATermInt) y_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm z_23 = (ATerm) ATgetNext((ATermList) t_23);
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
                        t = r_3;
                      }
                    }
                }
                e_3 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, e_3);
              }
            }
          else
            {
              ATerm a_24 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      l_14 = ATgetArgument(t, 0);
                      {
                        ATerm d_24 = ATgetArgument(t, 1);
                      }
                      i_14 = ATgetArgument(t, 2);
                      e_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_24);
                  t = (ATerm) ATmakeAppl(sym_Con_3, l_14, i_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_14), (ATerm) ATempty));
                }
              else
                {
                  t = a_24;
                  {
                    ATerm h_24 = t;
                    int j_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            l_14 = ATgetArgument(t, 0);
                            {
                              ATerm l_24 = ATgetArgument(t, 1);
                            }
                            i_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_24);
                        t = (ATerm) ATmakeAppl(sym_Con_3, l_14, i_14, term_z_24);
                      }
                    else
                      {
                        t = h_24;
                        if(match_cons(t, sym_Con1_2))
                          {
                            l_14 = ATgetArgument(t, 0);
                            m_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, l_14, m_14, term_z_24);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                l_14 = ATgetArgument(t, 0);
                                m_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm h_1 (ATerm t)
                                  {
                                    t = m_14;
                                    return(t);
                                  }
                                  t = l_14;
                                  t = foldr_2_0(h_1, i_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    l_14 = ATgetArgument(t, 0);
                                    t = l_14;
                                    t = foldr_2_0(j_1, k_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        l_14 = ATgetArgument(t, 0);
                                        t = l_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            f_14 = ATgetFirst((ATermList) t);
                                            g_14 = (ATerm) ATgetNext((ATermList) t);
                                            t = g_14;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm b_25 = t;
                                                int c_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = x_18(l_14, j_14, t);
                                                    LocalPopChoice(c_25);
                                                  }
                                                else
                                                  {
                                                    t = b_25;
                                                    t = f_14;
                                                  }
                                              }
                                            else
                                              {
                                                t = x_18(l_14, j_14, t);
                                              }
                                          }
                                        else
                                          {
                                            t = x_18(l_14, j_14, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            l_14 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, l_14));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                l_14 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, l_14));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    l_14 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, l_14));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        l_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, l_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            l_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_14), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                l_14 = ATgetArgument(t, 0);
                                                                m_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_14), m_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    l_14 = ATgetArgument(t, 0);
                                                                    m_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm l_1 (ATerm t)
                                                                      {
                                                                        t = m_14;
                                                                        return(t);
                                                                      }
                                                                      t = l_14;
                                                                      t = foldr_2_0(l_1, m_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        l_14 = ATgetArgument(t, 0);
                                                                        t = l_14;
                                                                        t = foldr_2_0(n_1, o_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            l_14 = ATgetArgument(t, 0);
                                                                            m_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_p_21, (ATerm) ATinsert(CheckATermList(m_14), l_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                l_14 = ATgetArgument(t, 0);
                                                                                t = l_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    f_14 = ATgetFirst((ATermList) t);
                                                                                    g_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = g_14;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm d_25 = t;
                                                                                        int e_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = y_18(l_14, j_14, t);
                                                                                            LocalPopChoice(e_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_25;
                                                                                            t = f_14;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_18(l_14, j_14, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_18(l_14, j_14, t);
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
                                                                                        l_14 = ATgetArgument(t, 0);
                                                                                        m_14 = ATgetArgument(t, 1);
                                                                                        t = m_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            h_14 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_h_25, (ATerm) ATinsert(ATinsert(ATempty, h_14), l_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            l_14 = ATgetArgument(t, 0);
                                                                                            t = l_14;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                l_14 = ATgetArgument(t, 0);
                                                                                                m_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, l_14, m_14, term_h_18);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    l_14 = ATgetArgument(t, 0);
                                                                                                    m_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, l_14, m_14, term_h_18);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        l_14 = ATgetArgument(t, 0);
                                                                                                        m_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, l_14, (ATerm)ATempty, m_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            l_14 = ATgetArgument(t, 0);
                                                                                                            m_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, m_14, l_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                l_14 = ATgetArgument(t, 0);
                                                                                                                m_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, l_14, m_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    l_14 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, l_14, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        l_14 = ATgetArgument(t, 0);
                                                                                                                        m_14 = ATgetArgument(t, 1);
                                                                                                                        i_14 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, l_14, m_14, (ATerm)ATempty, i_14);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            l_14 = ATgetArgument(t, 0);
                                                                                                                            m_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_14, (ATerm)ATempty, (ATerm)ATempty, m_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                l_14 = ATgetArgument(t, 0);
                                                                                                                                m_14 = ATgetArgument(t, 1);
                                                                                                                                i_14 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, l_14, m_14, (ATerm)ATempty, i_14);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    l_14 = ATgetArgument(t, 0);
                                                                                                                                    m_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, l_14, (ATerm)ATempty, (ATerm)ATempty, m_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        l_14 = ATgetArgument(t, 0);
                                                                                                                                        m_14 = ATgetArgument(t, 1);
                                                                                                                                        i_14 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_14, m_14, (ATerm)ATempty, i_14);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            l_14 = ATgetArgument(t, 0);
                                                                                                                                            m_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, l_14, (ATerm)ATempty, (ATerm)ATempty, m_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm i_25 = ATgetArgument(t, 0);
                                                                                                                                                m_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, m_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm a_19 = NULL,e_19 = NULL,h_19 = NULL;
  e_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      h_19 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
      {
        ATerm k_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
        t = e_19;
        t = new_0_0(t);
        k_19 = t;
        t = new_0_0(t);
        p_19 = t;
        t = new_0_0(t);
        q_19 = t;
        t = new_0_0(t);
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_19), q_19), p_19), k_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, k_19), (ATerm) ATmakeAppl(sym_Var_1, q_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, h_19, (ATerm)ATmakeAppl(sym_Var_1, k_19), (ATerm) ATmakeAppl(sym_Var_1, p_19)), (ATerm) ATmakeAppl(sym_BAM_3, a_19, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Var_1, r_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_19)), (ATerm) ATmakeAppl(sym_Var_1, p_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_19 = ATgetArgument(t, 0);
          {
            ATerm s_19 = NULL,t_19 = NULL,v_19 = NULL,w_19 = NULL;
            t = e_19;
            t = new_0_0(t);
            v_19 = t;
            t = h_19;
            {
              static ATerm p_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((s_19 != NULL) && (s_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      s_19 = ATgetArgument(t, 0);
                    if(((t_19 != NULL) && (t_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      t_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, v_19);
                return(t);
              }
              t = oncetd_1_0(p_1, t);
            }
            w_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_19)), not_null(s_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_19)), (ATerm) ATmakeAppl(sym_Build_1, w_19))));
          }
        }
      else
        {
          ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,l_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              h_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_19;
          t = new_0_0(t);
          f_20 = t;
          t = new_0_0(t);
          g_20 = t;
          t = h_19;
          {
            static ATerm q_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((d_20 != NULL) && (d_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_20 = ATgetArgument(t, 0);
                  if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    e_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, f_20);
              return(t);
            }
            t = oncetd_1_0(q_1, t);
          }
          l_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_20))))), (ATerm)ATmakeAppl(sym_Var_1, f_20), (ATerm) ATmakeAppl(sym_Op_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_20)), not_null(d_20)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  n_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,u_20 = NULL;
        t = n_20;
        t = new_0_0(t);
        s_20 = t;
        t = o_20;
        {
          static ATerm r_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_20 = ATgetArgument(t, 0);
                if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  r_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_20), q_20);
            return(t);
          }
          t = pat_td_1_0(r_1, t);
        }
        u_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_q_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_20))))));
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
              t = n_20;
              t = new_0_0(t);
              z_20 = t;
              t = o_20;
              {
                static ATerm s_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_20 != NULL) && (y_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, z_20);
                  return(t);
                }
                t = pat_td_1_0(s_1, t);
              }
              a_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_20)), not_null(y_20))));
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
              {
                ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,u_21 = NULL;
                t = n_20;
                t = new_0_0(t);
                i_21 = t;
                t = o_20;
                {
                  static ATerm t_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((h_21 != NULL) && (h_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          h_21 = ATgetArgument(t, 0);
                        if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_21);
                    return(t);
                  }
                  t = pat_td_1_0(t_1, t);
                }
                u_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, i_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_21)), not_null(h_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm q_129 (ATerm), ATerm t)
{
  ATerm u_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_129(t);
      LocalPopChoice(w_25);
    }
  else
    {
      t = u_25;
      {
        ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
        z_25 = t;
        if(match_cons(t, sym_Op_2))
          {
            a_26 = ATgetArgument(t, 0);
            b_26 = ATgetArgument(t, 1);
            {
              ATerm l_4 = NULL,d_5 = NULL,c_3 = NULL;
              t = SSLgetAnnotations(z_25);
              l_4 = t;
              t = b_26;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = pat_td_1_0(q_129, t);
                  return(t);
                }
                t = fetch_1_0(w_1, t);
              }
              d_5 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, a_26, d_5);
              c_3 = t;
              t = SSLsetAnnotations(c_3, l_4);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                a_26 = ATgetArgument(t, 0);
                b_26 = ATgetArgument(t, 1);
                {
                  ATerm c_26 = t;
                  int e_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_5 = NULL,t_5 = NULL,d_3 = NULL;
                      t = SSLgetAnnotations(z_25);
                      p_5 = t;
                      t = b_26;
                      t = pat_td_1_0(q_129, t);
                      t_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, a_26, t_5);
                      d_3 = t;
                      t = SSLsetAnnotations(d_3, p_5);
                      LocalPopChoice(e_26);
                    }
                  else
                    {
                      t = c_26;
                      {
                        ATerm t_6 = NULL,y_6 = NULL,g_3 = NULL;
                        t = SSLgetAnnotations(z_25);
                        t_6 = t;
                        t = a_26;
                        t = pat_td_1_0(q_129, t);
                        y_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, y_6, b_26);
                        g_3 = t;
                        t = SSLsetAnnotations(g_3, t_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    a_26 = ATgetArgument(t, 0);
                    b_26 = ATgetArgument(t, 1);
                    y_25 = ATgetArgument(t, 2);
                    {
                      ATerm z_7 = NULL,f_8 = NULL,h_3 = NULL;
                      t = SSLgetAnnotations(z_25);
                      z_7 = t;
                      t = y_25;
                      {
                        static ATerm y_1 (ATerm t)
                        {
                          t = pat_td_1_0(q_129, t);
                          return(t);
                        }
                        t = fetch_1_0(y_1, t);
                      }
                      f_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, a_26, b_26, f_8);
                      h_3 = t;
                      t = SSLsetAnnotations(h_3, z_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        a_26 = ATgetArgument(t, 0);
                        b_26 = ATgetArgument(t, 1);
                        y_25 = ATgetArgument(t, 2);
                        {
                          ATerm x_8 = NULL,f_9 = NULL,i_3 = NULL;
                          t = SSLgetAnnotations(z_25);
                          x_8 = t;
                          t = y_25;
                          {
                            static ATerm z_1 (ATerm t)
                            {
                              t = pat_td_1_0(q_129, t);
                              return(t);
                            }
                            t = fetch_1_0(z_1, t);
                          }
                          f_9 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, a_26, b_26, f_9);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, x_8);
                        }
                      }
                    else
                      {
                        ATerm o_10 = NULL,t_10 = NULL,j_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            a_26 = ATgetArgument(t, 0);
                            b_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(z_25);
                        o_10 = t;
                        t = b_26;
                        t = pat_td_1_0(q_129, t);
                        t_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, a_26, t_10);
                        j_3 = t;
                        t = SSLsetAnnotations(j_3, o_10);
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
  ATerm q_26 = NULL,r_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      r_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_26 = NULL,t_26 = NULL,v_26 = NULL,w_26 = NULL;
        t = q_26;
        t = new_0_0(t);
        v_26 = t;
        t = r_26;
        {
          static ATerm a_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_26 != NULL) && (s_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_26 = ATgetArgument(t, 0);
                if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, v_26);
            return(t);
          }
          t = pat_td_1_0(a_2, t);
        }
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_26)), not_null(s_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_26)))), (ATerm) ATmakeAppl(sym_Build_1, w_26)));
        LocalPopChoice(h_26);
      }
    else
      {
        t = f_26;
        {
          ATerm u_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_26 = NULL,z_26 = NULL,j_27 = NULL;
              t = q_26;
              t = new_0_0(t);
              z_26 = t;
              t = r_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_26 != NULL) && (x_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, z_26);
                  return(t);
                }
                t = pat_td_1_0(b_2, t);
              }
              j_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_26)))), (ATerm) ATmakeAppl(sym_Build_1, j_27)));
              LocalPopChoice(y_26);
            }
          else
            {
              t = u_26;
              {
                ATerm m_27 = NULL,n_27 = NULL,p_27 = NULL,q_27 = NULL;
                t = q_26;
                t = new_0_0(t);
                p_27 = t;
                t = r_26;
                {
                  static ATerm c_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_27 = ATgetArgument(t, 0);
                        if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_27);
                    return(t);
                  }
                  t = pat_td_1_0(c_2, t);
                }
                q_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_27), not_null(n_27), (ATerm) ATmakeAppl(sym_Var_1, p_27))), (ATerm) ATmakeAppl(sym_Build_1, q_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm h_27 = t;
  if((PushChoice() == 0))
    {
      ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,q_3 = NULL;
      f_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_28);
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_28);
      q_3 = t;
      t = SSLsetAnnotations(q_3, d_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_27;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm g_28 = NULL,j_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_28 = ATgetFirst((ATermList) t);
      j_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_28, j_28);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,p_28 = NULL,r_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(match_cons(k_27, sym__2))
        {
          k_28 = ATgetArgument(k_27, 0);
          l_28 = ATgetArgument(k_27, 1);
        }
      else
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(match_cons(l_27, sym__2))
          {
            p_28 = ATgetArgument(l_27, 0);
            r_28 = ATgetArgument(l_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_28), k_28), (ATerm) ATinsert(CheckATermList(r_28), l_28));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_28 = ATgetFirst((ATermList) t);
      v_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(match_cons(o_27, sym__2))
        {
          a_29 = ATgetArgument(o_27, 0);
          b_29 = ATgetArgument(o_27, 1);
        }
      else
        _fail(t);
      {
        ATerm r_27 = ATgetArgument(t, 1);
        if(match_cons(r_27, sym__2))
          {
            c_29 = ATgetArgument(r_27, 0);
            d_29 = ATgetArgument(r_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_29), a_29), (ATerm) ATinsert(CheckATermList(d_29), b_29));
  return(t);
}
static ATerm n_8 (ATerm z_65, ATerm a_66, ATerm b_66, ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,b_28 = NULL,c_28 = NULL,s_3 = NULL;
  t = b_66;
  t = fetch_1_0(d_2, t);
  t = b_66;
  t = genzip_4_0(e_2, f_2, g_2, LiftPrimArg_0_0, t);
  c_28 = t;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  v_27 = t;
  t = w_27;
  t = concat_0_0(t);
  y_27 = t;
  t = x_27;
  t = genzip_4_0(h_2, i_2, k_2, _id, t);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, b_28);
  s_3 = t;
  t = SSLsetAnnotations(s_3, v_27);
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      {
        ATerm z_27 = ATgetArgument(t, 1);
        if(match_cons(z_27, sym__2))
          {
            t_27 = ATgetArgument(z_27, 0);
            u_27 = ATgetArgument(z_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_27), (ATerm) ATmakeAppl(sym_CallT_3, z_65, a_66, u_27)));
  return(t);
}
static ATerm d_30 (ATerm h_29, ATerm t)
{
  ATerm j_29 = NULL;
  t = h_29;
  {
    ATerm t_28 = t;
    if((PushChoice() == 0))
      {
        ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,y_8 = NULL;
        z_29 = t;
        if(match_cons(t, sym_Var_1))
          {
            y_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_29);
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, y_29);
        y_8 = t;
        t = SSLsetAnnotations(y_8, x_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_28;
      }
  }
  t = new_0_0(t);
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, j_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_29)))), (ATerm) ATmakeAppl(sym_Var_1, j_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_30 = ATgetArgument(t, 0);
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_30(a_30, t);
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATmakeAppl(sym_Var_1, b_30)));
          }
      }
    }
  else
    {
      t = d_30(a_30, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm y_28 = t;
  if((PushChoice() == 0))
    {
      ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,j_9 = NULL;
      o_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_12);
      m_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_12);
      j_9 = t;
      t = SSLsetAnnotations(j_9, m_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_28;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_12 = ATgetFirst((ATermList) t);
      q_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_12, q_12);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_28 = ATgetArgument(t, 0);
      if(match_cons(z_28, sym__2))
        {
          r_12 = ATgetArgument(z_28, 0);
          s_12 = ATgetArgument(z_28, 1);
        }
      else
        _fail(t);
      {
        ATerm e_29 = ATgetArgument(t, 1);
        if(match_cons(e_29, sym__2))
          {
            t_12 = ATgetArgument(e_29, 0);
            u_12 = ATgetArgument(e_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_12), r_12), (ATerm) ATinsert(CheckATermList(u_12), s_12));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_12 = ATgetFirst((ATermList) t);
      w_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_12, w_12);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if(match_cons(f_29, sym__2))
        {
          x_12 = ATgetArgument(f_29, 0);
          y_12 = ATgetArgument(f_29, 1);
        }
      else
        _fail(t);
      {
        ATerm i_29 = ATgetArgument(t, 1);
        if(match_cons(i_29, sym__2))
          {
            z_12 = ATgetArgument(i_29, 0);
            a_13 = ATgetArgument(i_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_12), x_12), (ATerm) ATinsert(CheckATermList(a_13), y_12));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_30 = t;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL,p_15 = NULL,q_15 = NULL,p_11 = NULL;
      q_15 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_15);
      m_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_15);
      p_11 = t;
      t = SSLsetAnnotations(p_11, m_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_30;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_15 = ATgetFirst((ATermList) t);
      w_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_15, w_15);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,k_16 = NULL,l_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_30 = ATgetArgument(t, 0);
      if(match_cons(j_30, sym__2))
        {
          x_15 = ATgetArgument(j_30, 0);
          y_15 = ATgetArgument(j_30, 1);
        }
      else
        _fail(t);
      {
        ATerm k_30 = ATgetArgument(t, 1);
        if(match_cons(k_30, sym__2))
          {
            k_16 = ATgetArgument(k_30, 0);
            l_16 = ATgetArgument(k_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_16), x_15), (ATerm) ATinsert(CheckATermList(l_16), y_15));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_16 = ATgetFirst((ATermList) t);
      r_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_16, r_16);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,f_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      if(match_cons(l_30, sym__2))
        {
          s_16 = ATgetArgument(l_30, 0);
          t_16 = ATgetArgument(l_30, 1);
        }
      else
        _fail(t);
      {
        ATerm m_30 = ATgetArgument(t, 1);
        if(match_cons(m_30, sym__2))
          {
            f_17 = ATgetArgument(m_30, 0);
            g_17 = ATgetArgument(m_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_17), s_16), (ATerm) ATinsert(CheckATermList(g_17), t_16));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,w_34 = NULL,x_34 = NULL;
  t_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_34 = ATgetArgument(t, 0);
      x_34 = ATgetArgument(t, 1);
      s_34 = ATgetArgument(t, 2);
      {
        ATerm l_11 = NULL,q_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,l_12 = NULL,n_11 = NULL;
        t = s_34;
        t = fetch_1_0(o_2, t);
        t = s_34;
        t = genzip_4_0(p_2, q_2, r_2, LiftPrimArg_0_0, t);
        l_12 = t;
        if(match_cons(t, sym__2))
          {
            y_11 = ATgetArgument(t, 0);
            z_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_12);
        x_11 = t;
        t = y_11;
        t = concat_0_0(t);
        a_12 = t;
        t = z_11;
        t = genzip_4_0(s_2, t_2, u_2, _id, t);
        b_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
        n_11 = t;
        t = SSLsetAnnotations(n_11, x_11);
        if(match_cons(t, sym__2))
          {
            l_11 = ATgetArgument(t, 0);
            {
              ATerm n_30 = ATgetArgument(t, 1);
              if(match_cons(n_30, sym__2))
                {
                  q_11 = ATgetArgument(n_30, 0);
                  w_11 = ATgetArgument(n_30, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, l_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_11), (ATerm) ATmakeAppl(sym_PrimT_3, w_34, x_34, w_11)));
      }
    }
  else
    {
      ATerm p_14 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,j_12 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          w_34 = ATgetArgument(t, 0);
          x_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_34;
      t = fetch_1_0(v_2, t);
      t = x_34;
      t = genzip_4_0(x_2, y_2, z_2, LiftPrimArg_0_0, t);
      l_15 = t;
      if(match_cons(t, sym__2))
        {
          h_15 = ATgetArgument(t, 0);
          i_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_15);
      f_15 = t;
      t = h_15;
      t = concat_0_0(t);
      j_15 = t;
      t = i_15;
      t = genzip_4_0(a_3, b_3, f_3, _id, t);
      k_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_15, k_15);
      j_12 = t;
      t = SSLsetAnnotations(j_12, f_15);
      if(match_cons(t, sym__2))
        {
          p_14 = ATgetArgument(t, 0);
          {
            ATerm o_30 = ATgetArgument(t, 1);
            if(match_cons(o_30, sym__2))
              {
                c_15 = ATgetArgument(o_30, 0);
                d_15 = ATgetArgument(o_30, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, p_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_15), (ATerm) ATmakeAppl(sym_PrimT_3, w_34, (ATerm)ATempty, d_15)));
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm s_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  z_35 = t;
  if(match_cons(t, sym_Con_3))
    {
      s_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
      y_35 = ATgetArgument(t, 2);
      {
        ATerm y_17 = NULL,l_13 = NULL;
        t = SSLgetAnnotations(z_35);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, s_35, x_35, y_35);
        l_13 = t;
        t = SSLsetAnnotations(l_13, y_17);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = z_35;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm u_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_30;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,p_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      n_37 = ATgetArgument(t, 0);
      p_37 = ATgetArgument(t, 1);
      l_37 = ATgetArgument(t, 2);
      {
        ATerm c_19 = NULL,n_13 = NULL;
        t = SSLgetAnnotations(m_37);
        c_19 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, n_37, p_37, l_37);
        n_13 = t;
        t = SSLsetAnnotations(n_13, c_19);
      }
    }
  else
    {
      ATerm c_20 = NULL,w_18 = NULL;
      if(match_cons(t, sym_App_2))
        {
          n_37 = ATgetArgument(t, 0);
          p_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_37);
      c_20 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, n_37, p_37);
      w_18 = t;
      t = SSLsetAnnotations(w_18, c_20);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm w_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_30;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm z_37 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      z_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_37;
  if(match_cons(t, sym_StratRule_3))
    {
      c_38 = ATgetArgument(t, 0);
      d_38 = ATgetArgument(t, 1);
      e_38 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_38), (ATerm) ATmakeAppl(sym_Where_1, e_38)), c_38));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          c_38 = ATgetArgument(t, 0);
          d_38 = ATgetArgument(t, 1);
          e_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_38;
      t = pureterm_0_0(t);
      t = d_38;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, d_38)), (ATerm) ATmakeAppl(sym_Where_1, e_38)), (ATerm) ATmakeAppl(sym_Match_1, c_38)));
    }
  return(t);
}
static ATerm r_8 (ATerm m_61, ATerm n_61, ATerm o_61, ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
  t = new_0_0(t);
  w_38 = t;
  t = m_61;
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_30 = ATgetArgument(t, 0);
          if(match_cons(y_30, sym_Var_1))
            {
              if(((v_38 != NULL) && (v_38 != ATgetArgument(y_30, 0))))
                _fail(ATgetArgument(y_30, 0));
              else
                v_38 = ATgetArgument(y_30, 0);
            }
          else
            _fail(t);
          if(((t_38 != NULL) && (t_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_38 = ATgetArgument(t, 1);
          {
            ATerm a_31 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, v_38);
      return(t);
    }
    t = oncetd_1_0(m_3, t);
  }
  x_38 = t;
  t = n_61;
  {
    static ATerm n_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm b_31 = ATgetArgument(t, 0);
          if(match_cons(b_31, sym_Var_1))
            {
              if(((v_38 != NULL) && (v_38 != ATgetArgument(b_31, 0))))
                _fail(ATgetArgument(b_31, 0));
              else
                v_38 = ATgetArgument(b_31, 0);
            }
          else
            _fail(t);
          if(((u_38 != NULL) && (u_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_38 = ATgetArgument(t, 1);
          {
            ATerm c_31 = ATgetArgument(t, 2);
            if(match_cons(c_31, sym_CallT_3))
              {
                if(((s_38 != NULL) && (s_38 != ATgetArgument(c_31, 0))))
                  _fail(ATgetArgument(c_31, 0));
                else
                  s_38 = ATgetArgument(c_31, 0);
                {
                  ATerm d_31 = ATgetArgument(c_31, 1);
                  if(((ATgetType(d_31) != AT_LIST) || !(ATisEmpty(d_31))))
                    _fail(t);
                }
                {
                  ATerm h_31 = ATgetArgument(c_31, 2);
                  if(((ATgetType(h_31) != AT_LIST) || !(ATisEmpty(h_31))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, w_38);
      return(t);
    }
    t = oncetd_1_0(n_3, t);
  }
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, x_38, y_38, (ATerm) ATmakeAppl(sym_Seq_2, o_61, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(s_38), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_38), not_null(u_38), term_h_18))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_38)), (ATerm) ATmakeAppl(sym_Var_1, w_38))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
          w_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              x_41 = ATgetArgument(t, 0);
              t = x_41;
              if(match_cons(t, sym_Rule_3))
                {
                  p_41 = ATgetArgument(t, 0);
                  u_41 = ATgetArgument(t, 1);
                  v_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_41;
              t = r_8(p_41, u_41, v_41, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm d_21 = NULL,j_21 = NULL,q_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  x_41 = ATgetArgument(t, 0);
                  y_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_41);
              d_21 = t;
              t = y_41;
              t = desugarRule_0_0(t);
              j_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, x_41, j_21);
              q_21 = t;
              t = SSLsetAnnotations(q_21, d_21);
            }
          LocalPopChoice(l_31);
        }
      else
        {
          t = k_31;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
    }
  t = repeat_2_0(p_3, _id, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
            x_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                a_43 = ATgetArgument(t, 0);
                b_43 = ATgetArgument(t, 1);
                c_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_42;
            t = n_8(a_43, b_43, c_43, t);
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
            {
              ATerm s_31 = t;
              int t_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(t_31);
                }
              else
                {
                  t = s_31;
                  {
                    ATerm u_31 = t;
                    int v_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(v_31);
                      }
                    else
                      {
                        t = u_31;
                        {
                          ATerm w_31 = t;
                          int x_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_31 = t;
                              int z_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_43 = NULL,a_44 = NULL,e_44 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      z_43 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = z_43;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      a_44 = ATgetArgument(t, 0);
                                      t = a_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          a_44 = ATgetArgument(t, 0);
                                          e_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, a_44, e_44);
                                    }
                                  LocalPopChoice(z_31);
                                }
                              else
                                {
                                  t = y_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(x_31);
                            }
                          else
                            {
                              t = w_31;
                              {
                                ATerm a_32 = t;
                                int b_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(b_32);
                                  }
                                else
                                  {
                                    t = a_32;
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
  t = topdown_1_0(o_3, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_32);
        t = p_46;
        {
          ATerm g_32 = t;
          if((PushChoice() == 0))
            {
              ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,q_22 = NULL,t_21 = NULL;
              q_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  l_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_22);
              k_22 = t;
              t = l_22;
              {
                ATerm h_32 = t;
                int i_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_23 = NULL;
                    t = term_n_19;
                    c_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_n_19, l_22);
                    t = k_9(c_23, l_22, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm j_32 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) j_32) != ATmakeSymbol("l_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = l_22;
                    LocalPopChoice(i_32);
                  }
                else
                  {
                    t = h_32;
                    {
                      ATerm y_22 = NULL,u_23 = NULL,s_21 = NULL,c_24 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          y_22 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(l_22);
                      u_23 = t;
                      t = term_n_19;
                      c_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_n_19, y_22);
                      t = k_9(c_24, y_22, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm k_32 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) k_32) != ATmakeSymbol("l_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, y_22);
                      s_21 = t;
                      t = SSLsetAnnotations(s_21, u_23);
                    }
                  }
              }
              m_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, m_22);
              t_21 = t;
              t = SSLsetAnnotations(t_21, k_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_32;
            }
        }
        t = term_v_21;
      }
    else
      {
        t = c_32;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_v_21;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                q_46 = ATgetArgument(t, 0);
                {
                  ATerm w_46 = NULL;
                  t = q_46;
                  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
                  t = map_1_0(f_4, t);
                  w_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_32, w_46);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    q_46 = ATgetArgument(t, 0);
                    r_46 = ATgetArgument(t, 1);
                    {
                      ATerm p_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, q_46, r_46);
                      t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
                      t = map_1_0(k_4, t);
                      p_48 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_l_32, p_48);
                    }
                  }
                else
                  {
                    ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm n_32 = ATgetArgument(t, 0);
                        ATerm o_32 = ATgetArgument(t, 1);
                        ATerm p_32 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_q_32;
                    f_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_r_32);
                    g_24 = t;
                    t = SSL_printnl(f_24, g_24);
                    t = term_s_32;
                    e_24 = t;
                    t = SSL_exit(e_24);
                    t = (ATerm) ATinsert(ATempty, term_r_32);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_46);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm v_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_32);
          }
        else
          {
            t = v_32;
            {
              ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  d_47 = ATgetArgument(t, 0);
                  e_47 = ATgetArgument(t, 1);
                  f_47 = ATgetArgument(t, 2);
                  g_47 = ATgetArgument(t, 3);
                  t = f_47;
                  t = map_1_0(x_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_47 = ATgetArgument(t, 0);
                      e_47 = ATgetArgument(t, 1);
                      f_47 = ATgetArgument(t, 2);
                      g_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_47;
                  t = map_1_0(e_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm q_47 = NULL;
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_47 = ATgetArgument(t, 0);
          {
            ATerm z_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_32);
      t = q_47;
    }
  else
    {
      t = x_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_47;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm f_48 = NULL;
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_48 = ATgetArgument(t, 0);
          {
            ATerm e_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_33);
      t = f_48;
    }
  else
    {
      t = b_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_48;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm m_48 = NULL;
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_48);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm q_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_48);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            {
              ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_48 = ATgetArgument(t, 0);
                  v_48 = ATgetArgument(t, 1);
                  w_48 = ATgetArgument(t, 2);
                  x_48 = ATgetArgument(t, 3);
                  t = w_48;
                  t = map_1_0(i_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_48 = ATgetArgument(t, 0);
                      v_48 = ATgetArgument(t, 1);
                      w_48 = ATgetArgument(t, 2);
                      x_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_48;
                  t = map_1_0(j_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm l_49 = NULL;
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_49 = ATgetArgument(t, 0);
          {
            ATerm l_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_33);
      t = l_49;
    }
  else
    {
      t = j_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_49;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm b_50 = NULL;
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_50 = ATgetArgument(t, 0);
          {
            ATerm p_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_33);
      t = b_50;
    }
  else
    {
      t = n_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_50;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm g_50 = NULL;
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_50);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(t_3, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm k_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_52 = ATgetArgument(t, 0);
      t = k_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_52 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_52;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_52), (ATerm) ATempty);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm u_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_52 = ATgetArgument(t, 0);
      t = u_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_52 = ATgetArgument(t, 0);
          {
            ATerm r_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_52;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, u_52);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm c_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_53);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            {
              ATerm k_53 = NULL,n_53 = NULL,o_53 = NULL,t_53 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_53 = ATgetArgument(t, 0);
                  n_53 = ATgetArgument(t, 1);
                  o_53 = ATgetArgument(t, 2);
                  t_53 = ATgetArgument(t, 3);
                  t = o_53;
                  t = map_1_0(z_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_53 = ATgetArgument(t, 0);
                      n_53 = ATgetArgument(t, 1);
                      o_53 = ATgetArgument(t, 2);
                      t_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_53;
                  t = map_1_0(b_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm w_54 = NULL;
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_54 = ATgetArgument(t, 0);
          {
            ATerm z_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_33);
      t = w_54;
    }
  else
    {
      t = w_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_54;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_56 = NULL;
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_56 = ATgetArgument(t, 0);
          {
            ATerm c_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_34);
      t = d_56;
    }
  else
    {
      t = a_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_56;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm k_56 = NULL;
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_56);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm p_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_56);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            {
              ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_56 = ATgetArgument(t, 0);
                  s_56 = ATgetArgument(t, 1);
                  t_56 = ATgetArgument(t, 2);
                  u_56 = ATgetArgument(t, 3);
                  t = t_56;
                  t = map_1_0(h_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_56 = ATgetArgument(t, 0);
                      s_56 = ATgetArgument(t, 1);
                      t_56 = ATgetArgument(t, 2);
                      u_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_56;
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
  ATerm d_57 = NULL;
  ATerm h_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_57 = ATgetArgument(t, 0);
          {
            ATerm k_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_34);
      t = d_57;
    }
  else
    {
      t = h_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_57;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm y_57 = NULL;
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_57 = ATgetArgument(t, 0);
          {
            ATerm n_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_34);
      t = y_57;
    }
  else
    {
      t = l_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_57;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm h_58 = NULL;
  h_58 = t;
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_58 = NULL,a_25 = NULL,x_21 = NULL,o_25 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            m_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_58);
        a_25 = t;
        t = term_n_19;
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_19, m_58);
        t = k_9(o_25, m_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm q_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_34) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, m_58);
        x_21 = t;
        t = SSLsetAnnotations(x_21, a_25);
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        {
          ATerm r_25 = NULL;
          t = term_n_19;
          r_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_19, h_58);
          t = k_9(r_25, h_58, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm r_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_34) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = h_58;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, h_58);
  return(t);
}
static ATerm s_8 (ATerm y_130 (ATerm), ATerm d_75, ATerm a_75, ATerm b_75, ATerm k_75, ATerm o_75, ATerm p_75, ATerm t)
{
  ATerm e_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,w_51 = NULL,x_51 = NULL,d_52 = NULL,e_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_75, term_y_19);
  {
    ATerm y_34 = t;
    if((PushChoice() == 0))
      {
        ATerm f_52 = NULL;
        if(match_cons(t, sym__2))
          {
            f_52 = ATgetArgument(t, 0);
            if((f_52 != ATgetArgument(t, 1)))
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
        t = y_34;
      }
  }
  t = term_z_34;
  e_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_34, d_75);
  t = v_9(e_52, d_75, t);
  e_51 = t;
  t = term_b_35;
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_35, d_75);
  t = v_9(d_52, d_75, t);
  j_51 = t;
  t = new_0_0(t);
  k_51 = t;
  t = a_75;
  t = map_1_0(n_4, t);
  l_51 = t;
  t = b_75;
  t = map_1_0(q_4, t);
  m_51 = t;
  t = new_0_0(t);
  n_51 = t;
  t = k_75;
  t = dummify_0_0(t);
  r_51 = t;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_51;
        if((k_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, n_51);
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = r_51;
      }
  }
  o_51 = t;
  t = r_51;
  t = free_vars_3_0(r_4, y_4, tboundin_3_0, t);
  t = map_1_0(c_5, t);
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_75, p_75);
  t = free_vars_3_0(e_5, f_5, tboundin_3_0, t);
  t = filter_1_0(k_5, t);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
  t = diff_0_0(t);
  u_51 = t;
  t = new_0_0(t);
  w_51 = t;
  t = d_75;
  t = y_130(t);
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, x_51, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_20, (ATerm) ATinsert(CheckATermList(u_51), (ATerm) ATmakeAppl(sym_Str_1, w_51)))), r_51)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, j_51, a_75, b_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_20, (ATerm) ATinsert(CheckATermList(u_51), (ATerm) ATmakeAppl(sym_Str_1, w_51)))), k_75)), o_75, (ATerm) ATmakeAppl(sym_Seq_2, term_k_35, p_75)))), (ATerm) ATmakeAppl(sym_RDefT_4, e_51, a_75, b_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_51), k_75), (ATerm)ATmakeAppl(sym_Var_1, k_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_75)))), o_51), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_51), l_51, m_51), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_h_35), (ATerm) ATmakeAppl(sym_Var_1, n_51)))))), (ATerm) ATmakeAppl(sym_Var_1, k_51)))))), (ATerm) ATmakeAppl(sym_RDefT_4, d_75, a_75, b_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_51), k_75), o_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_75)))), o_51), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_20, (ATerm) ATinsert(CheckATermList(u_51), (ATerm) ATmakeAppl(sym_Str_1, w_51)))), term_e_35))), p_75)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
      p_26 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          a_27 = ATgetArgument(t, 0);
          b_27 = ATgetArgument(t, 1);
          c_27 = ATgetArgument(t, 2);
          d_27 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_27;
      if(match_cons(t, sym_Rule_3))
        {
          e_27 = ATgetArgument(t, 0);
          f_27 = ATgetArgument(t, 1);
          g_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_26;
      t = s_8(o_5, a_27, b_27, c_27, e_27, f_27, g_27, t);
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      t = ExtendSplitDynamicRuleUndefined_1_0(q_5, t);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_28))));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_28))));
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_28 = NULL,m_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_28 = ATgetFirst((ATermList) t);
      m_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_28, m_28);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,q_28 = NULL,s_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      if(match_cons(r_35, sym__2))
        {
          n_28 = ATgetArgument(r_35, 0);
          o_28 = ATgetArgument(r_35, 1);
        }
      else
        _fail(t);
      {
        ATerm t_35 = ATgetArgument(t, 1);
        if(match_cons(t_35, sym__2))
          {
            q_28 = ATgetArgument(t_35, 0);
            s_28 = ATgetArgument(t_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_28), n_28), (ATerm) ATinsert(CheckATermList(s_28), o_28));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
      u_29 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          v_29 = ATgetArgument(t, 0);
          w_29 = ATgetArgument(t, 1);
          e_30 = ATgetArgument(t, 2);
          f_30 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = f_30;
      if(match_cons(t, sym_Rule_3))
        {
          g_30 = ATgetArgument(t, 0);
          h_30 = ATgetArgument(t, 1);
          i_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_29;
      t = s_8(w_5, v_29, w_29, e_30, g_30, h_30, i_30, t);
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      t = ExtendSplitDynamicRuleUndefined_1_0(x_5, t);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_30))));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_30))));
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_30 = ATgetFirst((ATermList) t);
      s_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm t_30 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(match_cons(e_36, sym__2))
        {
          t_30 = ATgetArgument(e_36, 0);
          e_31 = ATgetArgument(e_36, 1);
        }
      else
        _fail(t);
      {
        ATerm f_36 = ATgetArgument(t, 1);
        if(match_cons(f_36, sym__2))
          {
            f_31 = ATgetArgument(f_36, 0);
            g_31 = ATgetArgument(f_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_31), t_30), (ATerm) ATinsert(CheckATermList(g_31), e_31));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = SplitDynamicRule_1_0(d_6, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm t_67 = NULL;
  t_67 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_67))));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_67 = ATgetFirst((ATermList) t);
      v_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_67, v_67);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if(match_cons(i_36, sym__2))
        {
          w_67 = ATgetArgument(i_36, 0);
          x_67 = ATgetArgument(i_36, 1);
        }
      else
        _fail(t);
      {
        ATerm j_36 = ATgetArgument(t, 1);
        if(match_cons(j_36, sym__2))
          {
            y_67 = ATgetArgument(j_36, 0);
            z_67 = ATgetArgument(j_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_67), w_67), (ATerm) ATinsert(CheckATermList(z_67), x_67));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = SplitDynamicRule_1_0(i_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm c_68 = NULL;
  c_68 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_68))));
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_27;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_68 = ATgetFirst((ATermList) t);
      e_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_68, e_68);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL,j_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      if(match_cons(q_36, sym__2))
        {
          f_68 = ATgetArgument(q_36, 0);
          g_68 = ATgetArgument(q_36, 1);
        }
      else
        _fail(t);
      {
        ATerm r_36 = ATgetArgument(t, 1);
        if(match_cons(r_36, sym__2))
          {
            h_68 = ATgetArgument(r_36, 0);
            j_68 = ATgetArgument(r_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_68), f_68), (ATerm) ATinsert(CheckATermList(j_68), g_68));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL;
  q_67 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      r_67 = ATgetArgument(t, 0);
      {
        ATerm g_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,z_21 = NULL;
        t = r_67;
        t = map_1_0(n_5, t);
        t = genzip_4_0(r_5, s_5, u_5, _id, t);
        m_26 = t;
        if(match_cons(t, sym__2))
          {
            j_26 = ATgetArgument(t, 0);
            k_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_26);
        g_26 = t;
        t = k_26;
        t = concat_0_0(t);
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_26, l_26);
        z_21 = t;
        t = SSLsetAnnotations(z_21, g_26);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          r_67 = ATgetArgument(t, 0);
          {
            ATerm g_29 = NULL,k_29 = NULL,l_29 = NULL,q_29 = NULL,r_29 = NULL,a_22 = NULL;
            t = r_67;
            t = map_1_0(v_5, t);
            t = genzip_4_0(y_5, z_5, a_6, _id, t);
            r_29 = t;
            if(match_cons(t, sym__2))
              {
                k_29 = ATgetArgument(t, 0);
                l_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_29);
            g_29 = t;
            t = l_29;
            t = concat_0_0(t);
            q_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_29, q_29);
            a_22 = t;
            t = SSLsetAnnotations(a_22, g_29);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              r_67 = ATgetArgument(t, 0);
              t = r_67;
              t = map_1_0(b_6, t);
              t = genzip_4_0(e_6, f_6, g_6, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  r_67 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_67;
              t = map_1_0(h_6, t);
              t = genzip_4_0(j_6, k_6, l_6, _id, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  static ATerm o_68 (ATerm t)
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_99(t);
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = SRTS_one(o_68, t);
      }
    return(t);
  }
  t = o_68(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm b_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
  f_69 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      e_69 = ATgetArgument(t, 0);
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_69;
            b_69 = t;
            t = f_69;
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            t = f_69;
            b_69 = t;
            t = f_69;
          }
      }
    }
  else
    {
      t = f_69;
      b_69 = t;
      t = f_69;
    }
  t = term_x_36;
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_69, term_x_36);
  t = l_9(s_6, b_69, d_69, t);
  t = f_69;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  static ATerm g_69 (ATerm t)
  {
    static ATerm m_6 (ATerm t)
    {
      ATerm y_36 = t;
      int z_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_130(t);
          LocalPopChoice(z_36);
        }
      else
        {
          t = y_36;
          {
            ATerm s_68 = NULL,x_68 = NULL,a_69 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                s_68 = ATgetArgument(t, 0);
                x_68 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, s_68, x_68);
            {
              static ATerm p_6 (ATerm t)
              {
                t = s_68;
                t = map_1_0(q_6, t);
                t = x_68;
                t = g_69(t);
                if(((a_69 != NULL) && (a_69 != t)))
                  _fail(t);
                else
                  a_69 = t;
                return(t);
              }
              t = scope_2_0(n_6, p_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, s_68, not_null(a_69));
          }
        }
      return(t);
    }
    t = oncetd_1_0(m_6, t);
    return(t);
  }
  t = g_69(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm q_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_69);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      {
        ATerm c_37 = t;
        int e_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_37);
          }
        else
          {
            t = c_37;
            {
              ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_69 = ATgetArgument(t, 0);
                  t_69 = ATgetArgument(t, 1);
                  u_69 = ATgetArgument(t, 2);
                  v_69 = ATgetArgument(t, 3);
                  t = u_69;
                  t = map_1_0(x_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_69 = ATgetArgument(t, 0);
                      t_69 = ATgetArgument(t, 1);
                      u_69 = ATgetArgument(t, 2);
                      v_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_69;
                  t = map_1_0(z_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm v_70 = NULL;
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_70 = ATgetArgument(t, 0);
          {
            ATerm i_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_37);
      t = v_70;
    }
  else
    {
      t = f_37;
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
static ATerm z_6 (ATerm t)
{
  ATerm a_73 = NULL;
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_73 = ATgetArgument(t, 0);
          {
            ATerm o_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_37);
      t = a_73;
    }
  else
    {
      t = j_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_73;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm w_73 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_73 = ATgetArgument(t, 0);
      t = w_73;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_73 = ATgetArgument(t, 0);
          {
            ATerm q_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_73;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm e_76 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_76 = ATgetArgument(t, 0);
      t = e_76;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_76 = ATgetArgument(t, 0);
          {
            ATerm r_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_76;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm i_76 = NULL;
  if(match_cons(t, sym__2))
    {
      i_76 = ATgetArgument(t, 0);
      if((i_76 != ATgetArgument(t, 1)))
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
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
  p_69 = t;
  t = free_vars_3_0(u_6, v_6, tboundin_3_0, t);
  n_69 = t;
  t = p_69;
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_73 = NULL;
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm y_37 = ATgetArgument(t, 0);
                ATerm f_38 = ATgetArgument(t, 1);
                s_73 = ATgetArgument(t, 2);
                {
                  ATerm g_38 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_37);
            t = s_73;
            t = map_1_0(a_7, t);
          }
        else
          {
            t = v_37;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm h_38 = ATgetArgument(t, 0);
                ATerm i_38 = ATgetArgument(t, 1);
                s_73 = ATgetArgument(t, 2);
                {
                  ATerm j_38 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = s_73;
            t = map_1_0(f_7, t);
          }
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        t = (ATerm) ATempty;
      }
  }
  o_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_69, o_69);
  t = z_8(g_7, n_69, o_69, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm o_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL;
  s_76 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      r_76 = ATgetArgument(t, 0);
      {
        ATerm k_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_76;
            o_76 = t;
            t = s_76;
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
            t = s_76;
            o_76 = t;
            t = s_76;
          }
      }
    }
  else
    {
      t = s_76;
      o_76 = t;
      t = s_76;
    }
  t = term_x_36;
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_76, term_x_36);
  t = l_9(k_7, o_76, q_76, t);
  t = s_76;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm u_8 (ATerm n_73, ATerm m_73, ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL;
  static ATerm i_7 (ATerm t)
  {
    t = n_73;
    t = def_tvars_0_0(t);
    t = map_1_0(j_7, t);
    t = n_73;
    {
      static ATerm l_7 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((l_76 != NULL) && (l_76 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              l_76 = ATgetArgument(t, 0);
            if(((k_76 != NULL) && (k_76 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              k_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, l_76);
        return(t);
      }
      t = split_dynamic_rule_1_0(l_7, t);
    }
    if(((m_76 != NULL) && (m_76 != t)))
      _fail(t);
    else
      m_76 = t;
    return(t);
  }
  t = scope_2_0(h_7, i_7, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_76)), not_null(m_76)), m_73);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  static ATerm t_76 (ATerm t)
  {
    ATerm m_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_97(t);
        t = t_76(t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = m_38;
        t = s_97(t);
      }
    return(t);
  }
  t = t_76(t);
  return(t);
}
ATerm listtd_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  static ATerm h_77 (ATerm t)
  {
    ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
    t = n_106(t);
    e_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_77;
      }
    else
      {
        ATerm f_32 = NULL,m_32 = NULL,d_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_77 = ATgetFirst((ATermList) t);
            g_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_77);
        f_32 = t;
        t = g_77;
        t = h_77(t);
        m_32 = t;
        t = (ATerm) ATinsert(CheckATermList(m_32), f_77);
        d_22 = t;
        t = SSLsetAnnotations(d_22, f_32);
      }
    return(t);
  }
  t = h_77(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,o_77 = NULL,p_77 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      o_77 = ATgetArgument(t, 0);
      p_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_77;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_77 = ATgetFirst((ATermList) t);
      m_77 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_q_38, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, m_77, p_77)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_77))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_77;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL;
  n_81 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_81 = ATgetArgument(t, 0);
      k_81 = ATgetArgument(t, 1);
      {
        ATerm a_33 = NULL,d_33 = NULL,m_33 = NULL,f_22 = NULL;
        t = SSLgetAnnotations(n_81);
        a_33 = t;
        t = o_81;
        t = n_130(t);
        d_33 = t;
        t = k_81;
        t = l_130(t);
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, d_33, m_33);
        f_22 = t;
        t = SSLsetAnnotations(f_22, a_33);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          o_81 = ATgetArgument(t, 0);
          k_81 = ATgetArgument(t, 1);
          l_81 = ATgetArgument(t, 2);
          m_81 = ATgetArgument(t, 3);
          {
            ATerm y_33 = NULL,i_34 = NULL,u_34 = NULL,v_34 = NULL,a_35 = NULL,g_22 = NULL;
            t = SSLgetAnnotations(n_81);
            y_33 = t;
            t = o_81;
            t = n_130(t);
            i_34 = t;
            t = k_81;
            t = n_130(t);
            u_34 = t;
            t = l_81;
            t = n_130(t);
            v_34 = t;
            t = m_81;
            t = l_130(t);
            a_35 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, i_34, u_34, v_34, a_35);
            g_22 = t;
            t = SSLsetAnnotations(g_22, y_33);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              o_81 = ATgetArgument(t, 0);
              k_81 = ATgetArgument(t, 1);
              l_81 = ATgetArgument(t, 2);
              m_81 = ATgetArgument(t, 3);
              {
                ATerm w_35 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,p_36 = NULL,h_22 = NULL;
                t = SSLgetAnnotations(n_81);
                w_35 = t;
                t = o_81;
                t = n_130(t);
                l_36 = t;
                t = k_81;
                t = n_130(t);
                m_36 = t;
                t = l_81;
                t = n_130(t);
                n_36 = t;
                t = m_81;
                t = l_130(t);
                p_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, l_36, m_36, n_36, p_36);
                h_22 = t;
                t = SSLsetAnnotations(h_22, w_35);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  o_81 = ATgetArgument(t, 0);
                  {
                    ATerm d_37 = NULL,h_37 = NULL,i_22 = NULL;
                    t = SSLgetAnnotations(n_81);
                    d_37 = t;
                    t = o_81;
                    t = l_130(t);
                    h_37 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_37);
                    i_22 = t;
                    t = SSLsetAnnotations(i_22, d_37);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      o_81 = ATgetArgument(t, 0);
                      {
                        ATerm u_37 = NULL,x_37 = NULL,n_22 = NULL;
                        t = SSLgetAnnotations(n_81);
                        u_37 = t;
                        t = o_81;
                        t = l_130(t);
                        x_37 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_37);
                        n_22 = t;
                        t = SSLsetAnnotations(n_22, u_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          o_81 = ATgetArgument(t, 0);
                          {
                            ATerm n_38 = NULL,z_38 = NULL,o_22 = NULL;
                            t = SSLgetAnnotations(n_81);
                            n_38 = t;
                            t = o_81;
                            t = l_130(t);
                            z_38 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, z_38);
                            o_22 = t;
                            t = SSLsetAnnotations(o_22, n_38);
                          }
                        }
                      else
                        {
                          ATerm f_39 = NULL,l_39 = NULL,p_22 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              o_81 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(n_81);
                          f_39 = t;
                          t = o_81;
                          t = l_130(t);
                          l_39 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, l_39);
                          p_22 = t;
                          t = SSLsetAnnotations(p_22, f_39);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm v_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_82);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm r_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_39);
    }
  else
    {
      t = r_38;
      {
        ATerm b_39 = t;
        int c_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_39);
          }
        else
          {
            t = b_39;
            {
              ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_82 = ATgetArgument(t, 0);
                  y_82 = ATgetArgument(t, 1);
                  z_82 = ATgetArgument(t, 2);
                  a_83 = ATgetArgument(t, 3);
                  t = z_82;
                  t = map_1_0(p_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_82 = ATgetArgument(t, 0);
                      y_82 = ATgetArgument(t, 1);
                      z_82 = ATgetArgument(t, 2);
                      a_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_82;
                  t = map_1_0(q_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm j_83 = NULL;
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_83 = ATgetArgument(t, 0);
          {
            ATerm g_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_39);
      t = j_83;
    }
  else
    {
      t = d_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_83;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm w_83 = NULL;
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_83 = ATgetArgument(t, 0);
          {
            ATerm o_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_39);
      t = w_83;
    }
  else
    {
      t = m_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_83;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm e_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_84);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
      {
        ATerm r_39 = t;
        int t_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_39);
          }
        else
          {
            t = r_39;
            {
              ATerm g_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_84 = ATgetArgument(t, 0);
                  l_84 = ATgetArgument(t, 1);
                  m_84 = ATgetArgument(t, 2);
                  n_84 = ATgetArgument(t, 3);
                  t = m_84;
                  t = map_1_0(t_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_84 = ATgetArgument(t, 0);
                      l_84 = ATgetArgument(t, 1);
                      m_84 = ATgetArgument(t, 2);
                      n_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_84;
                  t = map_1_0(u_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm w_84 = NULL;
  ATerm u_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_84 = ATgetArgument(t, 0);
          {
            ATerm w_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_39);
      t = w_84;
    }
  else
    {
      t = u_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_84;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm m_85 = NULL;
  ATerm x_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_85 = ATgetArgument(t, 0);
          {
            ATerm a_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_39);
      t = m_85;
    }
  else
    {
      t = x_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_85;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm s_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_85);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm d_40 = t;
        int e_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_40);
          }
        else
          {
            t = d_40;
            {
              ATerm u_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_85 = ATgetArgument(t, 0);
                  z_85 = ATgetArgument(t, 1);
                  a_86 = ATgetArgument(t, 2);
                  b_86 = ATgetArgument(t, 3);
                  t = a_86;
                  t = map_1_0(x_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_85 = ATgetArgument(t, 0);
                      z_85 = ATgetArgument(t, 1);
                      a_86 = ATgetArgument(t, 2);
                      b_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_86;
                  t = map_1_0(y_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm k_86 = NULL;
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_86 = ATgetArgument(t, 0);
          {
            ATerm i_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_40);
      t = k_86;
    }
  else
    {
      t = f_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_86;
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm v_86 = NULL;
  ATerm j_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_86 = ATgetArgument(t, 0);
          {
            ATerm m_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_40);
      t = v_86;
    }
  else
    {
      t = j_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_86;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm b_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_87);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      {
        ATerm p_40 = t;
        int s_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_40);
          }
        else
          {
            t = p_40;
            {
              ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL,k_87 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_87 = ATgetArgument(t, 0);
                  g_87 = ATgetArgument(t, 1);
                  h_87 = ATgetArgument(t, 2);
                  k_87 = ATgetArgument(t, 3);
                  t = h_87;
                  t = map_1_0(c_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_87 = ATgetArgument(t, 0);
                      g_87 = ATgetArgument(t, 1);
                      h_87 = ATgetArgument(t, 2);
                      k_87 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_87;
                  t = map_1_0(e_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm t_87 = NULL;
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_87 = ATgetArgument(t, 0);
          {
            ATerm y_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_40);
      t = t_87;
    }
  else
    {
      t = t_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_87;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm c_88 = NULL;
  ATerm a_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_88 = ATgetArgument(t, 0);
          {
            ATerm d_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_41);
      t = c_88;
    }
  else
    {
      t = a_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_88;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_82 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_82 = ATgetArgument(t, 0);
      t = q_82;
      t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_82 = ATgetArgument(t, 0);
          t = q_82;
          t = free_vars_3_0(r_7, s_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_82 = ATgetArgument(t, 0);
              t = q_82;
              t = free_vars_3_0(v_7, w_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_82 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_82;
              t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm c_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_89);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
      {
        ATerm j_41 = t;
        int k_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_41);
          }
        else
          {
            t = j_41;
            {
              ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,m_89 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_89 = ATgetArgument(t, 0);
                  h_89 = ATgetArgument(t, 1);
                  i_89 = ATgetArgument(t, 2);
                  m_89 = ATgetArgument(t, 3);
                  t = i_89;
                  t = map_1_0(i_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_89 = ATgetArgument(t, 0);
                      h_89 = ATgetArgument(t, 1);
                      i_89 = ATgetArgument(t, 2);
                      m_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_89;
                  t = map_1_0(j_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm b_90 = NULL;
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_90 = ATgetArgument(t, 0);
          {
            ATerm n_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_41);
      t = b_90;
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_90;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm u_90 = NULL;
  ATerm o_41 = t;
  int q_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_90 = ATgetArgument(t, 0);
          {
            ATerm r_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_41);
      t = u_90;
    }
  else
    {
      t = o_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_90;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_88 = NULL,u_88 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_88 = ATgetArgument(t, 0);
      t = u_88;
      if(match_cons(t, sym_Rule_3))
        {
          q_88 = ATgetArgument(t, 0);
          {
            ATerm s_41 = ATgetArgument(t, 1);
          }
          {
            ATerm t_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_88;
      t = free_vars_3_0(g_8, h_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_88 = ATgetArgument(t, 0);
          {
            ATerm z_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_88;
    }
  return(t);
}
static ATerm z_8 (ATerm o_109 (ATerm), ATerm p_29, ATerm o_29, ATerm t)
{
  static ATerm y_91 (ATerm t)
  {
    ATerm o_91 = NULL,p_91 = NULL,v_91 = NULL;
    o_91 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_91 = ATgetFirst((ATermList) t);
            v_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_42 = t;
          int b_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_91;
              {
                static ATerm k_8 (ATerm t)
                {
                  t = o_29;
                  return(t);
                }
                t = a_9(o_109, k_8, p_91, v_91, t);
              }
              t = y_91(t);
              LocalPopChoice(b_42);
            }
          else
            {
              t = a_42;
              {
                ATerm s_39 = NULL,y_39 = NULL,d_23 = NULL;
                t = SSLgetAnnotations(o_91);
                s_39 = t;
                t = v_91;
                t = y_91(t);
                y_39 = t;
                t = (ATerm) ATinsert(CheckATermList(y_39), p_91);
                d_23 = t;
                t = SSLsetAnnotations(d_23, s_39);
              }
            }
        }
      }
    return(t);
  }
  t = p_29;
  t = y_91(t);
  return(t);
}
static ATerm a_9 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_29, ATerm s_29, ATerm t)
{
  t = s_109(t);
  {
    static ATerm m_8 (ATerm t)
    {
      ATerm e_92 = NULL;
      e_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_29, e_92);
      t = r_109(t);
      return(t);
    }
    t = fetch_1_0(m_8, t);
  }
  t = s_29;
  return(t);
}
static ATerm b_9 (ATerm j_109 (ATerm), ATerm n_29, ATerm m_29, ATerm t)
{
  static ATerm d_93 (ATerm t)
  {
    ATerm v_92 = NULL,x_92 = NULL,y_92 = NULL;
    v_92 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_92;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_92 = ATgetFirst((ATermList) t);
            y_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_42 = t;
          int f_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_92;
              {
                static ATerm o_8 (ATerm t)
                {
                  t = m_29;
                  return(t);
                }
                t = a_9(j_109, o_8, x_92, y_92, t);
              }
              t = d_93(t);
              LocalPopChoice(f_42);
            }
          else
            {
              t = c_42;
              {
                ATerm h_40 = NULL,k_40 = NULL,f_23 = NULL;
                t = SSLgetAnnotations(v_92);
                h_40 = t;
                t = y_92;
                t = d_93(t);
                k_40 = t;
                t = (ATerm) ATinsert(CheckATermList(k_40), x_92);
                f_23 = t;
                t = SSLsetAnnotations(f_23, h_40);
              }
            }
        }
      }
    return(t);
  }
  t = n_29;
  t = d_93(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t)
{
  static ATerm l_93 (ATerm t)
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_107(t);
        LocalPopChoice(h_42);
      }
    else
      {
        t = g_42;
        {
          ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,j_23 = NULL;
          t = i_107(t);
          k_93 = t;
          if(match_cons(t, sym__2))
            {
              g_93 = ATgetArgument(t, 0);
              h_93 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_93);
          f_93 = t;
          t = g_93;
          t = k_107(t);
          i_93 = t;
          t = h_93;
          t = l_93(t);
          j_93 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_93, j_93);
          j_23 = t;
          t = SSLsetAnnotations(j_23, f_93);
          t = j_107(t);
        }
      }
    return(t);
  }
  t = l_93(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_42 = ATgetArgument(t, 0);
      if(((ATgetType(i_42) != AT_LIST) || !(ATisEmpty(i_42))))
        _fail(t);
      {
        ATerm j_42 = ATgetArgument(t, 1);
        if(((ATgetType(j_42) != AT_LIST) || !(ATisEmpty(j_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_42 = ATgetArgument(t, 0);
      if(((ATgetType(k_42) == AT_LIST) && !(ATisEmpty(k_42))))
        {
          w_93 = ATgetFirst((ATermList) k_42);
          x_93 = (ATerm) ATgetNext((ATermList) k_42);
        }
      else
        _fail(t);
      {
        ATerm l_42 = ATgetArgument(t, 1);
        if(((ATgetType(l_42) == AT_LIST) && !(ATisEmpty(l_42))))
          {
            y_93 = ATgetFirst((ATermList) l_42);
            z_93 = (ATerm) ATgetNext((ATermList) l_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_93, y_93), (ATerm) ATmakeAppl(sym__2, x_93, z_93));
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL;
  if(match_cons(t, sym__2))
    {
      c_94 = ATgetArgument(t, 0);
      d_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_94), c_94);
  return(t);
}
static ATerm g_9 (ATerm i_641, ATerm n_641, ATerm m_60, ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL;
  t = SSL_explode_term(n_641);
  if(match_cons(t, sym__2))
    {
      p_93 = ATgetArgument(t, 0);
      r_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_641);
  if(match_cons(t, sym__2))
    {
      if((p_93 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_93, r_93);
  t = genzip_4_0(p_8, q_8, t_8, _id, t);
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_93, m_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t)
{
  static ATerm f_94 (ATerm t)
  {
    ATerm n_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_98(t);
        LocalPopChoice(o_42);
      }
    else
      {
        t = n_42;
        t = j_98(t);
        t = f_94(t);
      }
    return(t);
  }
  t = f_94(t);
  return(t);
}
ATerm for_3_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t)
{
  t = l_98(t);
  t = while_not_2_0(m_98, n_98, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm m_94 = NULL;
  m_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_94);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,o_23 = NULL;
  q_94 = t;
  if(match_cons(t, sym__2))
    {
      o_94 = ATgetArgument(t, 0);
      p_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_94);
  n_94 = t;
  t = p_94;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_94, p_94);
  o_23 = t;
  t = SSLsetAnnotations(o_23, n_94);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL;
  x_95 = t;
  if(match_cons(t, sym__2))
    {
      y_95 = ATgetArgument(t, 0);
      a_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_96 = ATgetFirst((ATermList) t);
      c_96 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_42 = t;
        int q_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_96(y_95, a_96, x_95, t);
            LocalPopChoice(q_42);
          }
        else
          {
            t = p_42;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_95), b_96), c_96);
          }
      }
    }
  else
    {
      t = p_96(y_95, a_96, x_95, t);
    }
  return(t);
}
static ATerm p_96 (ATerm s_94, ATerm t_94, ATerm u_94, ATerm t)
{
  ATerm v_94 = NULL,a_95 = NULL,p_23 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL;
  t = SSLgetAnnotations(u_94);
  v_94 = t;
  t = t_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_95 = ATgetFirst((ATermList) t);
      o_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_95;
  if(match_cons(t, sym__2))
    {
      m_95 = ATgetArgument(t, 0);
      n_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_95;
        if((m_95 != t))
          {
            _fail(t);
          }
        t = o_95;
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        t = t_94;
        t = g_9(m_95, n_95, o_95, t);
      }
  }
  a_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_94, a_95);
  p_23 = t;
  t = SSLsetAnnotations(p_23, v_94);
  return(t);
}
static ATerm e_9 (ATerm t)
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
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(w_8, c_9, d_9, t);
      LocalPopChoice(u_42);
    }
  else
    {
      t = t_42;
      {
        ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL;
        i_96 = t;
        if(match_cons(t, sym__2))
          {
            j_96 = ATgetArgument(t, 0);
            k_96 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_96;
        t = b_9(e_9, j_96, k_96, t);
      }
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  if(match_cons(t, sym__2))
    {
      v_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8(z_9, v_40, w_40, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm x_40 = NULL;
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      if((x_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  if(match_cons(t, sym__2))
    {
      g_41 = ATgetArgument(t, 0);
      h_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8(k_10, g_41, h_41, t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm i_41 = NULL;
  if(match_cons(t, sym__2))
    {
      i_41 = ATgetArgument(t, 0);
      if((i_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm k_97 (ATerm t)
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_127(t);
        LocalPopChoice(w_42);
      }
    else
      {
        t = v_42;
        {
          ATerm z_42 = t;
          int d_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_96 = NULL,s_96 = NULL,q_40 = NULL,r_40 = NULL;
              r_96 = t;
              t = z_127(t);
              s_96 = t;
              t = r_96;
              {
                static ATerm h_9 (ATerm t)
                {
                  ATerm w_96 = NULL;
                  t = k_97(t);
                  w_96 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_96, s_96);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_128(h_9, k_97, i_9, t);
              }
              r_40 = t;
              t = SSL_explode_term(r_40);
              if(match_cons(t, sym__2))
                {
                  ATerm e_43 = ATgetArgument(t, 0);
                  q_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_40;
              t = foldr_3_0(n_9, o_9, _id, t);
              LocalPopChoice(d_43);
            }
          else
            {
              t = z_42;
              {
                ATerm z_40 = NULL,b_41 = NULL;
                b_41 = t;
                t = SSL_explode_term(b_41);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_43 = ATgetArgument(t, 0);
                    z_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_40;
                t = foldr_3_0(c_10, f_10, k_97, t);
              }
            }
        }
      }
    return(t);
  }
  t = k_97(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  static ATerm l_10 (ATerm t)
  {
    t = bottomup_1_0(s_98, t);
    return(t);
  }
  t = SRTS_all(l_10, t);
  t = s_98(t);
  return(t);
}
static ATerm k_9 (ATerm g_54, ATerm h_54, ATerm t)
{
  ATerm l_97 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_54, h_54);
  t = d_10(g_54, h_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_97 = ATgetFirst((ATermList) t);
      {
        ATerm g_43 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_97;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL;
  t_98 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_42 = NULL;
        t = term_j_43;
        m_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_43, t_98);
        t = k_9(m_42, t_98, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm k_43 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_43) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, u_98, (ATerm) ATempty);
        LocalPopChoice(i_43);
      }
    else
      {
        t = h_43;
        {
          ATerm y_42 = NULL;
          t = term_j_43;
          y_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_43, t_98);
          t = k_9(y_42, t_98, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm m_43 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_43) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, u_98, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  static ATerm y_98 (ATerm t)
  {
    ATerm o_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_100(t);
        LocalPopChoice(q_43);
      }
    else
      {
        t = o_43;
        t = SRTS_all(y_98, t);
      }
    return(t);
  }
  t = y_98(t);
  return(t);
}
static ATerm l_9 (ATerm m_118 (ATerm), ATerm r_43, ATerm p_43, ATerm t)
{
  ATerm z_98 = NULL,e_99 = NULL,h_99 = NULL,k_99 = NULL,l_99 = NULL,o_99 = NULL,q_99 = NULL,r_99 = NULL;
  k_99 = t;
  t = m_118(t);
  z_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_98, r_43, p_43);
  t = e_10(z_98, r_43, p_43, t);
  {
    ATerm s_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_99 = NULL;
        t = term_u_43;
        x_99 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_98, term_u_43);
        t = d_10(z_98, x_99, t);
        LocalPopChoice(t_43);
      }
    else
      {
        t = s_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_99 = ATgetFirst((ATermList) t);
      h_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_98, term_u_43, (ATerm) ATinsert(CheckATermList(h_99), (ATerm) ATinsert(CheckATermList(e_99), r_43)));
  t = lookup_table_0_1(z_98, t);
  r_99 = t;
  t = term_u_43;
  l_99 = t;
  t = (ATerm) ATinsert(CheckATermList(h_99), (ATerm) ATinsert(CheckATermList(e_99), r_43));
  o_99 = t;
  t = r_99;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(l_99, o_99, q_99, t);
  t = k_99;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_j_43;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_j_43;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm d_100 = NULL,f_100 = NULL,i_100 = NULL,m_100 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      f_100 = ATgetArgument(t, 0);
      i_100 = ATgetArgument(t, 1);
      d_100 = ATgetArgument(t, 2);
      {
        ATerm q_100 = NULL,t_100 = NULL;
        t = i_100;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, f_100);
        q_100 = t;
        t = term_w_43;
        t_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_100), term_w_43);
        t = l_9(n_10, q_100, t_100, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, f_100, (ATerm)ATempty, d_100);
      }
    }
  else
    {
      ATerm w_100 = NULL,x_100 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          f_100 = ATgetArgument(t, 0);
          i_100 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_100;
      if(match_cons(t, sym_ConstType_1))
        {
          m_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_100);
      w_100 = t;
      t = term_y_43;
      x_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_100), term_y_43);
      t = l_9(p_10, w_100, x_100, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, f_100, (ATerm) ATmakeAppl(sym_ConstType_1, m_100));
    }
  return(t);
}
static ATerm m_9 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL;
  c_101 = t;
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
        t = d_10(a_54, b_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_44 = ATgetFirst((ATermList) t);
            b_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_44);
        {
          ATerm d_101 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, a_54, b_54, b_101);
          t = lookup_table_0_1(a_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_10(b_54, b_101, d_101, t);
          t = (ATerm) ATmakeAppl(sym__3, a_54, b_54, b_101);
        }
      }
    else
      {
        t = b_44;
        {
          ATerm f_101 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
          t = lookup_table_0_1(a_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_10(b_54, f_101, t);
          t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
        }
      }
  }
  t = c_101;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_118 (ATerm), ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL,p_101 = NULL;
  k_101 = t;
  t = j_118(t);
  j_101 = t;
  {
    ATerm f_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_101 = NULL;
        t = term_u_43;
        q_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_101, term_u_43);
        t = d_10(j_101, q_101, t);
        LocalPopChoice(h_44);
      }
    else
      {
        t = f_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_101 = ATgetFirst((ATermList) t);
      h_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_101, term_u_43, h_101);
  t = lookup_table_0_1(j_101, t);
  p_101 = t;
  t = term_u_43;
  l_101 = t;
  t = p_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(l_101, h_101, m_101, t);
  t = i_101;
  {
    static ATerm q_10 (ATerm t)
    {
      ATerm r_101 = NULL;
      r_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_101, r_101);
      t = m_9(j_101, r_101, t);
      return(t);
    }
    t = map_1_0(q_10, t);
  }
  t = k_101;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  ATerm i_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_97(t);
      t = o_97(t);
      LocalPopChoice(k_44);
    }
  else
    {
      t = i_44;
      t = o_97(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_118 (ATerm), ATerm t)
{
  ATerm t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL;
  u_101 = t;
  t = i_118(t);
  t_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_101, term_u_43);
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_102 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_44 = ATgetArgument(t, 0);
            ATerm o_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_43;
        d_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_101, term_u_43);
        t = d_10(t_101, d_102, t);
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = (ATerm) ATempty;
      }
  }
  v_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_101, term_u_43, (ATerm) ATinsert(CheckATermList(v_101), (ATerm) ATempty));
  t = lookup_table_0_1(t_101, t);
  z_101 = t;
  t = term_u_43;
  w_101 = t;
  t = (ATerm) ATinsert(CheckATermList(v_101), (ATerm) ATempty);
  x_101 = t;
  t = z_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(w_101, x_101, y_101, t);
  t = u_101;
  return(t);
}
ATerm scope_2_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t)
{
  static ATerm u_10 (ATerm t)
  {
    t = end_scope_1_0(k_118, t);
    return(t);
  }
  t = begin_scope_1_0(k_118, t);
  t = restore_always_2_0(l_118, u_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_j_43;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL,x_23 = NULL;
  l_102 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_102);
  i_102 = t;
  t = j_102;
  t = map_1_0(y_10, t);
  k_102 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_102);
  x_23 = t;
  t = SSLsetAnnotations(x_23, i_102);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm y_102 = NULL,z_102 = NULL;
  z_102 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      y_102 = ATgetArgument(t, 0);
      {
        ATerm p_44 = t;
        int q_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_43 = NULL,n_43 = NULL,v_23 = NULL;
            t = SSLgetAnnotations(z_102);
            l_43 = t;
            t = y_102;
            t = map_1_0(a_11, t);
            n_43 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, n_43);
            v_23 = t;
            t = SSLsetAnnotations(v_23, l_43);
            LocalPopChoice(q_44);
          }
        else
          {
            t = p_44;
            t = z_102;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          y_102 = ATgetArgument(t, 0);
          {
            ATerm r_44 = t;
            int s_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_44 = NULL,j_44 = NULL,w_23 = NULL;
                t = SSLgetAnnotations(z_102);
                g_44 = t;
                t = y_102;
                t = map_1_0(b_11, t);
                j_44 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, j_44);
                w_23 = t;
                t = SSLsetAnnotations(w_23, g_44);
                LocalPopChoice(s_44);
              }
            else
              {
                t = r_44;
                t = z_102;
              }
          }
        }
      else
        {
          t = z_102;
        }
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm t_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(u_44);
    }
  else
    {
      t = t_44;
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(w_10, x_10, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL;
  g_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_103;
    }
  else
    {
      static ATerm d_11 (ATerm t)
      {
        t = not_null(i_103);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_103 = ATgetFirst((ATermList) t);
          if(((i_103 != NULL) && (i_103 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_103;
      t = at_end_1_0(d_11, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL;
  x_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_103;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_103 = ATgetFirst((ATermList) t);
          z_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_45 = t;
        int b_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_44 = NULL,y_44 = NULL,z_44 = NULL,i_24 = NULL;
            t = SSLgetAnnotations(x_103);
            v_44 = t;
            t = y_103;
            t = g_113(t);
            y_44 = t;
            t = z_103;
            t = filter_1_0(g_113, t);
            z_44 = t;
            t = (ATerm) ATinsert(CheckATermList(z_44), y_44);
            i_24 = t;
            t = SSLsetAnnotations(i_24, v_44);
            LocalPopChoice(b_45);
          }
        else
          {
            t = a_45;
            t = z_103;
            t = filter_1_0(g_113, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  static ATerm p_104 (ATerm t)
  {
    ATerm m_104 = NULL,n_104 = NULL,o_104 = NULL;
    o_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_104 = ATgetFirst((ATermList) t);
        n_104 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_45 = NULL,k_45 = NULL,k_24 = NULL;
          t = SSLgetAnnotations(o_104);
          h_45 = t;
          t = n_104;
          t = p_104(t);
          k_45 = t;
          t = (ATerm) ATinsert(CheckATermList(k_45), m_104);
          k_24 = t;
          t = SSLsetAnnotations(k_24, h_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_104;
        t = u_105(t);
      }
    return(t);
  }
  t = p_104(t);
  return(t);
}
static ATerm f_105 (ATerm t_104, ATerm t)
{
  ATerm v_104 = NULL;
  t = SSL_explode_term(t_104);
  if(match_cons(t, sym__2))
    {
      ATerm c_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_104;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL;
  z_104 = t;
  if(match_cons(t, sym__2))
    {
      x_104 = ATgetArgument(t, 0);
      y_104 = ATgetArgument(t, 1);
      {
        ATerm d_45 = t;
        int e_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_11 (ATerm t)
            {
              t = y_104;
              return(t);
            }
            t = x_104;
            t = at_end_1_0(f_11, t);
            LocalPopChoice(e_45);
          }
        else
          {
            t = d_45;
            t = f_105(z_104, t);
          }
      }
    }
  else
    {
      t = f_105(z_104, t);
    }
  return(t);
}
static ATerm p_9 (ATerm h_132, ATerm d_132, ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL;
  static ATerm i_11 (ATerm t)
  {
    ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL;
    l_105 = t;
    t = SSL_explode_term(l_105);
    if(match_cons(t, sym__2))
      {
        if(((g_105 != NULL) && (g_105 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          g_105 = ATgetArgument(t, 0);
        {
          ATerm f_45 = ATgetArgument(t, 1);
          if(((ATgetType(f_45) == AT_LIST) && !(ATisEmpty(f_45))))
            {
              i_105 = ATgetFirst((ATermList) f_45);
              {
                ATerm g_45 = (ATerm) ATgetNext((ATermList) f_45);
                if(((ATgetType(g_45) != AT_LIST) || !(ATisEmpty(g_45))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, i_105, not_null(h_105));
    t = conc_0_0(t);
    j_105 = t;
    t = (ATerm) ATinsert(ATempty, j_105);
    k_105 = t;
    t = SSL_mkterm(g_105, k_105);
    return(t);
  }
  t = SSL_explode_term(h_132);
  if(match_cons(t, sym__2))
    {
      if(((g_105 != NULL) && (g_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_105 = ATgetArgument(t, 0);
      {
        ATerm i_45 = ATgetArgument(t, 1);
        if(((ATgetType(i_45) == AT_LIST) && !(ATisEmpty(i_45))))
          {
            if(((h_105 != NULL) && (h_105 != ATgetFirst((ATermList) i_45))))
              _fail(ATgetFirst((ATermList) i_45));
            else
              h_105 = ATgetFirst((ATermList) i_45);
            {
              ATerm j_45 = (ATerm) ATgetNext((ATermList) i_45);
              if(((ATgetType(j_45) != AT_LIST) || !(ATisEmpty(j_45))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_132;
  t = fetch_1_0(i_11, t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL;
  p_105 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_105;
      t = e_112(t);
    }
  else
    {
      ATerm w_105 = NULL,x_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_105 = ATgetFirst((ATermList) t);
          r_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_105;
      t = g_112(t);
      w_105 = t;
      t = r_105;
      t = foldr_3_0(e_112, f_112, g_112, t);
      x_105 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_105, x_105);
      t = f_112(t);
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_45), term_m_45), term_l_45);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm e_106 = NULL,f_106 = NULL;
  if(match_cons(t, sym__2))
    {
      e_106 = ATgetArgument(t, 0);
      f_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(e_106, f_106, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL;
  h_106 = t;
  if(match_cons(t, sym_Signature_1))
    {
      g_106 = ATgetArgument(t, 0);
      {
        ATerm o_45 = t;
        int p_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_106 = NULL;
            t = g_106;
            t = filter_1_0(c_12, t);
            t = concat_0_0(t);
            j_106 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, j_106);
            LocalPopChoice(p_45);
          }
        else
          {
            t = o_45;
            t = h_106;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          g_106 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, g_106);
        }
      else
        {
          t = h_106;
        }
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm k_106 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      k_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_106;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL,d_106 = NULL,m_24 = NULL;
  d_106 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_106);
  a_106 = t;
  t = b_106;
  t = foldr_3_0(j_11, k_11, v_11, t);
  c_106 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_106);
  m_24 = t;
  t = SSLsetAnnotations(m_24, a_106);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(r_45);
    }
  else
    {
      t = q_45;
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL;
  c_108 = t;
  if(match_cons(t, sym_LRule_1))
    {
      b_108 = ATgetArgument(t, 0);
      t = b_108;
      if(match_cons(t, sym_Rule_3))
        {
          y_107 = ATgetArgument(t, 0);
          z_107 = ATgetArgument(t, 1);
          a_108 = ATgetArgument(t, 2);
          {
            ATerm s_45 = t;
            int t_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_108 = NULL;
                t = y_107;
                t = free_vars_3_0(b_13, c_13, tboundin_3_0, t);
                g_108 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, g_108, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, y_107, z_107, a_108)));
                LocalPopChoice(t_45);
              }
            else
              {
                t = s_45;
                t = c_108;
              }
          }
        }
      else
        {
          t = c_108;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          b_108 = ATgetArgument(t, 0);
          {
            ATerm u_45 = t;
            int v_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_109 = NULL;
                t = b_108;
                t = free_vars_3_0(f_13, g_13, tboundin_3_0, t);
                i_109 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, i_109, b_108);
                LocalPopChoice(v_45);
              }
            else
              {
                t = u_45;
                t = c_108;
              }
          }
        }
      else
        {
          t = c_108;
        }
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm h_108 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_108);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_45);
    }
  else
    {
      t = w_45;
      {
        ATerm y_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_45);
          }
        else
          {
            t = y_45;
            {
              ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_108 = ATgetArgument(t, 0);
                  k_108 = ATgetArgument(t, 1);
                  l_108 = ATgetArgument(t, 2);
                  m_108 = ATgetArgument(t, 3);
                  t = l_108;
                  t = map_1_0(d_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_108 = ATgetArgument(t, 0);
                      k_108 = ATgetArgument(t, 1);
                      l_108 = ATgetArgument(t, 2);
                      m_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_108;
                  t = map_1_0(e_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm t_108 = NULL;
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_108 = ATgetArgument(t, 0);
          {
            ATerm c_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_46);
      t = t_108;
    }
  else
    {
      t = a_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_108;
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm c_109 = NULL;
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_109 = ATgetArgument(t, 0);
          {
            ATerm f_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_46);
      t = c_109;
    }
  else
    {
      t = d_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_109;
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm l_109 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_109);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm h_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_46);
    }
  else
    {
      t = h_46;
      {
        ATerm k_46 = t;
        int n_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_46);
          }
        else
          {
            t = k_46;
            {
              ATerm n_109 = NULL,q_109 = NULL,t_109 = NULL,u_109 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_109 = ATgetArgument(t, 0);
                  q_109 = ATgetArgument(t, 1);
                  t_109 = ATgetArgument(t, 2);
                  u_109 = ATgetArgument(t, 3);
                  t = t_109;
                  t = map_1_0(h_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_109 = ATgetArgument(t, 0);
                      q_109 = ATgetArgument(t, 1);
                      t_109 = ATgetArgument(t, 2);
                      u_109 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_109;
                  t = map_1_0(i_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm b_110 = NULL;
  ATerm o_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_110 = ATgetArgument(t, 0);
          {
            ATerm t_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_46);
      t = b_110;
    }
  else
    {
      t = o_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_110;
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm k_110 = NULL;
  ATerm u_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_110 = ATgetArgument(t, 0);
          {
            ATerm y_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_46);
      t = k_110;
    }
  else
    {
      t = u_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_110;
    }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = Cons_2_0(k_13, m_13, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL,o_24 = NULL;
  c_111 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_111);
  z_110 = t;
  t = a_111;
  t = topdown_1_0(q_13, t);
  t = listtd_1_0(v_13, t);
  b_111 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_111);
  o_24 = t;
  t = SSLsetAnnotations(o_24, z_110);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
    }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = repeat_2_0(w_13, _id, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm f_111 = NULL,g_111 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_111 = ATgetFirst((ATermList) t);
      g_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_8(f_111, g_111, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = Cons_2_0(k_14, n_14, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm q_111 = NULL,r_111 = NULL,s_111 = NULL,t_111 = NULL,r_24 = NULL;
  t_111 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      r_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_111);
  q_111 = t;
  t = r_111;
  t = topdown_1_0(o_14, t);
  t = listtd_1_0(r_14, t);
  s_111 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_111);
  r_24 = t;
  t = SSLsetAnnotations(r_24, q_111);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm h_47 = t;
  int i_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(i_47);
    }
  else
    {
      t = h_47;
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = repeat_2_0(u_14, _id, t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_111 = ATgetFirst((ATermList) t);
      x_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_8(w_111, x_111, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = Cons_2_0(w_14, x_14, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL,u_24 = NULL;
  p_112 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_112);
  m_112 = t;
  t = n_112;
  t = topdown_1_0(y_14, t);
  t = listtd_1_0(z_14, t);
  o_112 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_112);
  u_24 = t;
  t = SSLsetAnnotations(u_24, m_112);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm j_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(k_47);
    }
  else
    {
      t = j_47;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = repeat_2_0(a_15, _id, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm s_112 = NULL,t_112 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_112 = ATgetFirst((ATermList) t);
      t_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_8(s_112, t_112, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
    }
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm x_112 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      x_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, x_112)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL,y_24 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(d_12, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(k_12, t);
  q_107 = t;
  t = term_n_47;
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_110 = NULL,q_110 = NULL;
        t = term_r_47;
        p_110 = t;
        t = term_n_47;
        q_110 = t;
        t = term_s_47;
        t = d_10(p_110, q_110, t);
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        t = term_t_47;
      }
  }
  r_107 = t;
  if(match_string(t, "old"))
    {
      ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL,q_24 = NULL,p_24 = NULL;
      t = q_107;
      if(match_cons(t, sym_Specification_1))
        {
          s_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_107);
      r_110 = t;
      t = s_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_110 = ATgetFirst((ATermList) t);
          v_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_110);
      t_110 = t;
      t = v_110;
      t = Cons_2_0(_id, j_13, t);
      w_110 = t;
      t = (ATerm) ATinsert(CheckATermList(w_110), u_110);
      p_24 = t;
      t = SSLsetAnnotations(p_24, t_110);
      x_110 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, x_110);
      q_24 = t;
      t = SSLsetAnnotations(q_24, r_110);
    }
  else
    {
      if(match_string(t, "new"))
        {
          ATerm i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL,t_24 = NULL,s_24 = NULL;
          t = q_107;
          if(match_cons(t, sym_Specification_1))
            {
              j_111 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_107);
          i_111 = t;
          t = j_111;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_111 = ATgetFirst((ATermList) t);
              m_111 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_111);
          k_111 = t;
          t = m_111;
          t = Cons_2_0(_id, z_13, t);
          n_111 = t;
          t = (ATerm) ATinsert(CheckATermList(n_111), l_111);
          s_24 = t;
          t = SSLsetAnnotations(s_24, k_111);
          o_111 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, o_111);
          t_24 = t;
          t = SSLsetAnnotations(t_24, i_111);
        }
      else
        {
          ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL,x_24 = NULL,w_24 = NULL;
          if(match_cons(t, sym_Specification_1))
            {
              a_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_107);
          z_111 = t;
          t = a_112;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_112 = ATgetFirst((ATermList) t);
              i_112 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_112);
          b_112 = t;
          t = i_112;
          t = Cons_2_0(_id, v_14, t);
          j_112 = t;
          t = (ATerm) ATinsert(CheckATermList(j_112), h_112);
          w_24 = t;
          t = SSLsetAnnotations(w_24, b_112);
          k_112 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, k_112);
          x_24 = t;
          t = SSLsetAnnotations(x_24, z_111);
        }
    }
  t = topdown_1_0(b_15, t);
  v_107 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_107);
  s_107 = t;
  t = t_107;
  t = fetch_1_0(e_15, t);
  u_107 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_107);
  y_24 = t;
  t = SSLsetAnnotations(y_24, s_107);
  return(t);
}
static ATerm q_9 (ATerm h_39, ATerm i_39, ATerm t)
{
  ATerm y_112 = NULL;
  t = SSL_fputc(h_39, i_39);
  y_112 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_112);
  return(t);
}
static ATerm r_9 (ATerm l_23, ATerm m_23, ATerm t)
{
  ATerm z_112 = NULL;
  t = SSL_write_term_to_stream_text(l_23, m_23);
  z_112 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_112);
  return(t);
}
static ATerm t_9 (ATerm u_104 (ATerm), ATerm b_172, ATerm r_23, ATerm t)
{
  ATerm a_113 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_172, term_u_47);
  t = x_9(t);
  a_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_113, r_23);
  t = u_104(t);
  t = fclose_0_0(t);
  t = r_23;
  return(t);
}
static ATerm s_9 (ATerm h_23, ATerm i_23, ATerm t)
{
  ATerm b_113 = NULL;
  t = SSL_write_term_to_stream_baf(h_23, i_23);
  b_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_113);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_47 = ATgetArgument(t, 0);
      if(match_cons(v_47, sym_Stream_1))
        {
          j_113 = ATgetArgument(v_47, 0);
        }
      else
        _fail(t);
      k_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(j_113, k_113, t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_47 = ATgetArgument(t, 0);
      if(match_cons(w_47, sym_Stream_1))
        {
          o_113 = ATgetArgument(w_47, 0);
        }
      else
        _fail(t);
      p_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(o_113, p_113, t);
  l_113 = t;
  t = term_g_23;
  m_113 = t;
  t = l_113;
  if(match_cons(t, sym_Stream_1))
    {
      n_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_23, l_113);
  t = q_9(m_113, n_113, t);
  return(t);
}
ATerm output_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  ATerm c_113 = NULL,d_113 = NULL;
  t = s_123(t);
  d_113 = t;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_113 = NULL,f_113 = NULL;
        t = term_r_47;
        e_113 = t;
        t = term_z_47;
        f_113 = t;
        t = term_a_48;
        t = d_10(e_113, f_113, t);
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
        t = term_b_48;
      }
  }
  c_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_113, d_113);
  {
    ATerm c_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_113 = NULL,i_113 = NULL;
        t = term_r_47;
        h_113 = t;
        t = term_e_48;
        i_113 = t;
        t = term_g_48;
        t = d_10(h_113, i_113, t);
        t = (ATerm) ATmakeAppl(sym__2, c_113, d_113);
        LocalPopChoice(d_48);
        if(match_cons(t, sym__2))
          {
            ATerm h_48 = ATgetArgument(t, 0);
            ATerm j_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_9(g_15, c_113, d_113, t);
      }
    else
      {
        t = c_48;
        if(match_cons(t, sym__2))
          {
            ATerm k_48 = ATgetArgument(t, 0);
            ATerm l_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_9(n_15, c_113, d_113, t);
      }
  }
  return(t);
}
static ATerm d_114 (ATerm x_113, ATerm t)
{
  t = SSL_fclose(x_113);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_114 = NULL,b_114 = NULL;
  b_114 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_114 = ATgetArgument(t, 0);
      {
        ATerm n_48 = t;
        int o_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_114);
            LocalPopChoice(o_48);
          }
        else
          {
            t = n_48;
            t = d_114(b_114, t);
          }
      }
    }
  else
    {
      t = d_114(b_114, t);
    }
  return(t);
}
static ATerm u_9 (ATerm n_23, ATerm t)
{
  t = SSL_read_term_from_stream(n_23);
  return(t);
}
static ATerm v_9 (ATerm a_38, ATerm b_38, ATerm t)
{
  t = SSL_strcat(a_38, b_38);
  return(t);
}
static ATerm w_9 (ATerm j_39, ATerm k_39, ATerm t)
{
  ATerm e_114 = NULL;
  t = SSL_fopen(j_39, k_39);
  e_114 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_114);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_114 = NULL;
  t = SSL_stdin_stream();
  f_114 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_114);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_114 = NULL;
  t = SSL_stdout_stream();
  g_114 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_114);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_114 = NULL;
  t = SSL_stderr_stream();
  h_114 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_114);
  return(t);
}
static ATerm o_115 (ATerm n_114, ATerm t)
{
  ATerm o_114 = NULL;
  t = SSL_explode_term(n_114);
  if(match_cons(t, sym__2))
    {
      ATerm r_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_48 = ATgetArgument(t, 1);
        if(((ATgetType(s_48) == AT_LIST) && !(ATisEmpty(s_48))))
          {
            o_114 = ATgetFirst((ATermList) s_48);
            {
              ATerm t_48 = (ATerm) ATgetNext((ATermList) s_48);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_114;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_114;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_114;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_114;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_115 (ATerm r_114, ATerm s_114, ATerm t_114, ATerm t)
{
  ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL,z_114 = NULL,n_25 = NULL;
  t = SSLgetAnnotations(t_114);
  w_114 = t;
  t = r_114;
  if(match_cons(t, sym_Path_1))
    {
      z_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_114, s_114);
  n_25 = t;
  t = SSLsetAnnotations(n_25, w_114);
  if(match_cons(t, sym__2))
    {
      u_114 = ATgetArgument(t, 0);
      v_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(u_114, v_114, t);
  return(t);
}
static ATerm q_115 (ATerm b_115, ATerm c_115, ATerm d_115, ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL,j_115 = NULL,p_25 = NULL;
  t = SSLgetAnnotations(d_115);
  g_115 = t;
  t = SSL_is_string(b_115);
  j_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_115, c_115);
  p_25 = t;
  t = SSLsetAnnotations(p_25, g_115);
  if(match_cons(t, sym__2))
    {
      e_115 = ATgetArgument(t, 0);
      f_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(e_115, f_115, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL;
  l_115 = t;
  if(match_cons(t, sym__2))
    {
      m_115 = ATgetArgument(t, 0);
      n_115 = ATgetArgument(t, 1);
      {
        ATerm z_48 = t;
        int c_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_115(l_115, t);
            LocalPopChoice(c_49);
          }
        else
          {
            t = z_48;
            {
              ATerm d_49 = t;
              int e_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_115(m_115, n_115, l_115, t);
                  LocalPopChoice(e_49);
                }
              else
                {
                  t = d_49;
                  t = q_115(m_115, n_115, l_115, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_115(l_115, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL,z_115 = NULL;
  z_115 = t;
  {
    ATerm f_49 = t;
    int g_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_115, term_h_49);
        t = x_9(t);
        LocalPopChoice(g_49);
      }
    else
      {
        t = f_49;
        {
          ATerm g_46 = NULL,j_46 = NULL;
          t = term_i_49;
          j_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_49, z_115);
          t = v_9(j_46, z_115, t);
          g_46 = t;
          t = SSL_perror(g_46);
          _fail(t);
        }
      }
  }
  t_115 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(u_115, t);
  s_115 = t;
  t = t_115;
  t = fclose_0_0(t);
  t = s_115;
  return(t);
}
ATerm input_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm j_49 = t;
  int k_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_116 = NULL,d_116 = NULL;
      t = term_r_47;
      c_116 = t;
      t = term_m_49;
      d_116 = t;
      t = term_o_49;
      t = d_10(c_116, d_116, t);
      LocalPopChoice(k_49);
    }
  else
    {
      t = j_49;
      t = term_p_49;
    }
  t = ReadFromFile_0_0(t);
  t = t_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL;
  e_116 = t;
  t = term_q_49;
  t = whoami_0_0(t);
  f_116 = t;
  t = term_q_32;
  h_116 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_49), f_116), term_r_49);
  i_116 = t;
  t = SSL_printnl(h_116, i_116);
  t = term_s_32;
  g_116 = t;
  t = SSL_exit(g_116);
  t = e_116;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm k_116 = NULL;
  k_116 = t;
  if(match_string(t, "-k"))
    {
      t = k_116;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_116;
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm q_116 = NULL,r_116 = NULL,s_116 = NULL;
  q_116 = t;
  t = SSL_string_to_int(q_116);
  r_116 = t;
  t = term_t_49;
  s_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_49, r_116);
  t = g_10(s_116, r_116, t);
  t = q_116;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = term_u_49;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_15, z_15, a_16, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm u_116 = NULL;
  u_116 = t;
  if(match_string(t, "-S"))
    {
      t = u_116;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_116;
    }
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm v_116 = NULL,w_116 = NULL;
  t = term_v_49;
  v_116 = t;
  t = term_x_49;
  w_116 = t;
  t = term_y_49;
  t = g_10(v_116, w_116, t);
  t = term_z_49;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_a_50;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL;
  x_116 = t;
  t = SSL_string_to_int(x_116);
  y_116 = t;
  t = term_v_49;
  z_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_49, y_116);
  t = g_10(z_116, y_116, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_116);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_c_50;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm a_117 = NULL,b_117 = NULL;
  t = term_d_50;
  a_117 = t;
  t = term_q_49;
  b_117 = t;
  t = term_e_50;
  t = g_10(a_117, b_117, t);
  t = term_h_50;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_i_50;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_16, c_16, d_16, t);
      LocalPopChoice(l_50);
    }
  else
    {
      t = j_50;
      {
        ATerm m_50 = t;
        int n_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_16, f_16, g_16, t);
            LocalPopChoice(n_50);
          }
        else
          {
            t = m_50;
            t = Option_3_0(h_16, i_16, n_16, t);
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm c_117 = NULL,d_117 = NULL;
  t = term_r_47;
  c_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_47, a_49, b_49);
  t = lookup_table_0_1(c_117, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(a_49, b_49, d_117, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_47, a_49, b_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_117 = NULL,i_117 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL;
      t = term_q_49;
      t = i_0(t);
      j_117 = t;
      t = term_o_50;
      k_117 = t;
      t = term_p_50;
      l_117 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, j_117);
      t = e_10(k_117, l_117, j_117, t);
      _fail(t);
    }
  else
    {
      ATerm o_117 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_117 = ATgetFirst((ATermList) t);
          i_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_117;
      t = d_0(t);
      t = term_q_49;
      t = g_0(t);
      o_117 = t;
      t = (ATerm) ATinsert(CheckATermList(i_117), o_117);
    }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm q_117 = NULL;
  q_117 = t;
  if(match_string(t, "-o"))
    {
      t = q_117;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_117;
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL;
  r_117 = t;
  t = term_z_47;
  s_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_47, r_117);
  t = g_10(s_117, r_117, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_117);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_q_50;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_16, v_16, w_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm u_117 = NULL;
  u_117 = t;
  if(match_string(t, "-i"))
    {
      t = u_117;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_117;
    }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm v_117 = NULL,w_117 = NULL;
  v_117 = t;
  t = term_m_49;
  w_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_49, v_117);
  t = g_10(w_117, v_117, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_117);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_16, y_16, z_16, t);
  return(t);
}
static ATerm e_10 (ATerm v_53, ATerm w_53, ATerm u_53, ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL,c_118 = NULL;
  y_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
  {
    ATerm t_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_50 = ATgetArgument(t, 0);
            ATerm x_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
        t = d_10(v_53, w_53, t);
        LocalPopChoice(u_50);
      }
    else
      {
        t = t_50;
        t = (ATerm) ATempty;
      }
  }
  z_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, (ATerm) ATinsert(CheckATermList(z_117), u_53));
  t = lookup_table_0_1(v_53, t);
  c_118 = t;
  t = (ATerm) ATinsert(CheckATermList(z_117), u_53);
  a_118 = t;
  t = c_118;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(w_53, a_118, b_118, t);
  t = y_117;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_118 = NULL,u_118 = NULL,v_118 = NULL;
      t = term_q_49;
      t = r_0(t);
      t_118 = t;
      t = term_o_50;
      u_118 = t;
      t = term_p_50;
      v_118 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, t_118);
      t = e_10(u_118, v_118, t_118, t);
      _fail(t);
    }
  else
    {
      ATerm z_118 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_118 = ATgetFirst((ATermList) t);
          q_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_118;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_118 = ATgetFirst((ATermList) t);
          s_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_118;
      t = o_0(t);
      t = r_118;
      t = p_0(t);
      z_118 = t;
      t = (ATerm) ATinsert(CheckATermList(s_118), z_118);
    }
  return(t);
}
static ATerm a_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm b_119 = NULL,c_119 = NULL;
  b_119 = t;
  if(match_string(t, "old"))
    {
      t = b_119;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = b_119;
    }
  t = term_n_47;
  c_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_47, b_119);
  t = g_10(c_119, b_119, t);
  t = term_q_49;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_y_50;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_17, b_17, c_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_49;
  t = whoami_0_0(t);
  e_119 = t;
  t = term_q_32;
  g_119 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_50), e_119);
  h_119 = t;
  t = SSL_printnl(g_119, h_119);
  t = term_s_32;
  f_119 = t;
  t = SSL_exit(f_119);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_119 = NULL,j_119 = NULL;
  t = term_r_47;
  i_119 = t;
  t = term_a_51;
  j_119 = t;
  t = term_b_51;
  t = d_10(i_119, j_119, t);
  return(t);
}
static ATerm y_9 (ATerm d_42, ATerm e_42, ATerm t)
{
  ATerm c_51 = t;
  int f_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_42, e_42);
      LocalPopChoice(f_51);
    }
  else
    {
      t = c_51;
      t = SSL_addr(d_42, e_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm t)
{
  ATerm l_119 = NULL,m_119 = NULL,n_119 = NULL;
  l_119 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_119;
      t = c_112(t);
    }
  else
    {
      ATerm q_119 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_119 = ATgetFirst((ATermList) t);
          n_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_119;
      t = foldr_2_0(c_112, d_112, t);
      q_119 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_119, q_119);
      t = d_112(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_x_49;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  if(match_cons(t, sym__2))
    {
      z_46 = ATgetArgument(t, 0);
      a_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(z_46, a_47, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_119 = NULL,l_46 = NULL,m_46 = NULL;
  t = times_0_0(t);
  m_46 = t;
  t = SSL_explode_term(m_46);
  if(match_cons(t, sym__2))
    {
      ATerm g_51 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_46;
  t = foldr_2_0(d_17, e_17, t);
  t_119 = t;
  t = SSL_TicksToSeconds(t_119);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_120 = NULL,f_120 = NULL,g_120 = NULL;
  e_120 = t;
  if(match_cons(t, sym__2))
    {
      f_120 = ATgetArgument(t, 0);
      g_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_51 = t;
    int p_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_120;
        if((f_120 != t))
          {
            _fail(t);
          }
        t = e_120;
        LocalPopChoice(p_51);
      }
    else
      {
        t = i_51;
        t = (ATerm) ATmakeAppl(sym__2, f_120, g_120);
        {
          ATerm q_51 = t;
          int v_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_120, g_120);
              LocalPopChoice(v_51);
            }
          else
            {
              t = q_51;
              t = SSL_gtr(f_120, g_120);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_120, g_120);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_120 (ATerm), ATerm t)
{
  ATerm k_120 = NULL;
  k_120 = t;
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_120 = NULL,n_120 = NULL,o_120 = NULL;
        t = term_r_47;
        n_120 = t;
        t = term_v_49;
        o_120 = t;
        t = term_c_52;
        t = d_10(n_120, o_120, t);
        m_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_120, term_s_32);
        t = geq_0_0(t);
        t = k_120;
        t = t_120(t);
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
        t = k_120;
      }
  }
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm q_120 = NULL,r_120 = NULL,u_120 = NULL,v_120 = NULL;
  t = run_time_0_0(t);
  q_120 = t;
  t = term_q_49;
  t = whoami_0_0(t);
  r_120 = t;
  t = term_q_32;
  u_120 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_52), q_120), term_g_52), r_120);
  v_120 = t;
  t = SSL_printnl(u_120, v_120);
  t = (ATerm) ATmakeAppl(sym__2, term_q_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_52), q_120), term_g_52), r_120));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_120 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_49;
  w_120 = t;
  t = SSL_exit(w_120);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm g_121 = NULL,h_121 = NULL;
  h_121 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_121;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_121 = ATgetArgument(t, 0);
          {
            ATerm i_48 = NULL,v_25 = NULL;
            t = SSLgetAnnotations(h_121);
            i_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_121);
            v_25 = t;
            t = SSLsetAnnotations(v_25, i_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_121;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_123 (ATerm), ATerm t)
{
  ATerm j_52 = t;
  int l_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_120 = NULL,a_121 = NULL;
      t = term_r_47;
      z_120 = t;
      t = term_m_52;
      a_121 = t;
      t = term_n_52;
      t = d_10(z_120, a_121, t);
      LocalPopChoice(l_52);
    }
  else
    {
      t = j_52;
      t = fetch_1_0(i_17, t);
    }
  t = j_123(t);
  return(t);
}
static ATerm h_10 (ATerm n_57, ATerm o_57, ATerm p_57, ATerm t)
{
  ATerm j_121 = NULL;
  t = SSL_hashtable_put(p_57, n_57, o_57);
  j_121 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_121);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_55, ATerm t)
{
  ATerm s_121 = NULL;
  t = table_hashtable_0_0(t);
  s_121 = t;
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_48 = NULL;
        t = s_121;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_10(h_55, y_48, t);
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        {
          ATerm n_49 = NULL;
          t = h_55;
          t = table_create_0_0(t);
          t = s_121;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_10(h_55, n_49, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm v_121 = NULL;
  t = SSL_hashtable_create(v_57, w_57);
  v_121 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_121);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_121 = NULL,x_121 = NULL,y_121 = NULL,a_122 = NULL,b_122 = NULL;
  w_121 = t;
  t = term_s_52;
  a_122 = t;
  t = term_t_52;
  b_122 = t;
  t = w_121;
  t = new_hashtable_0_2(a_122, b_122, t);
  x_121 = t;
  t = w_121;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(w_121, x_121, y_121, t);
  t = w_121;
  return(t);
}
static ATerm a_10 (ATerm s_57, ATerm t_57, ATerm t)
{
  ATerm c_122 = NULL;
  t = SSL_hashtable_remove(t_57, s_57);
  c_122 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_122);
  return(t);
}
static ATerm b_10 (ATerm x_57, ATerm t)
{
  ATerm d_122 = NULL;
  t = SSL_hashtable_destroy(x_57);
  d_122 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_122);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_122 = NULL;
  t = SSL_table_hashtable();
  e_122 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_122);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL;
  f_122 = t;
  t = table_hashtable_0_0(t);
  g_122 = t;
  t = lookup_table_0_1(f_122, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(i_122, t);
  t = g_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(f_122, h_122, t);
  t = f_122;
  return(t);
}
ATerm map_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  static ATerm x_122 (ATerm t)
  {
    ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL;
    u_122 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_122;
      }
    else
      {
        ATerm w_49 = NULL,f_50 = NULL,k_50 = NULL,x_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_122 = ATgetFirst((ATermList) t);
            w_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_122);
        w_49 = t;
        t = v_122;
        t = d_105(t);
        f_50 = t;
        t = w_122;
        t = x_122(t);
        k_50 = t;
        t = (ATerm) ATinsert(CheckATermList(k_50), f_50);
        x_25 = t;
        t = SSLsetAnnotations(x_25, w_49);
      }
    return(t);
  }
  t = x_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_123 = NULL,b_123 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_123 = ATgetFirst((ATermList) t);
      b_123 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_123 = NULL,g_123 = NULL;
        static ATerm j_17 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_123)), not_null(g_123));
          return(t);
        }
        t = b_123;
        t = n_0(t);
        if(((f_123 != NULL) && (f_123 != t)))
          _fail(t);
        else
          f_123 = t;
        t = a_123;
        t = k_0(t);
        if(((g_123 != NULL) && (g_123 != t)))
          _fail(t);
        else
          g_123 = t;
        t = b_123;
        t = reverse_acc_2_0(k_0, j_17, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_49;
      t = n_0(t);
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm r_123 = NULL,u_123 = NULL,v_123 = NULL,d_26 = NULL;
  v_123 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_123);
  r_123 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_123);
  d_26 = t;
  t = SSLsetAnnotations(d_26, r_123);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm x_123 = NULL;
  x_123 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_123), term_v_52);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_123 = NULL,k_123 = NULL;
  ATerm w_52 = t;
  int x_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_123 = NULL,q_123 = NULL;
      t = term_r_47;
      p_123 = t;
      t = term_a_51;
      q_123 = t;
      t = term_b_51;
      t = d_10(p_123, q_123, t);
      LocalPopChoice(x_52);
    }
  else
    {
      t = w_52;
      t = fetch_1_0(k_17, t);
    }
  t = term_z_52;
  t = echo_0_0(t);
  t = term_o_50;
  i_123 = t;
  t = term_p_50;
  k_123 = t;
  t = term_a_53;
  t = d_10(i_123, k_123, t);
  t = reverse_acc_2_0(_id, l_17, t);
  t = map_1_0(m_17, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  static ATerm u_124 (ATerm t)
  {
    ATerm r_124 = NULL,s_124 = NULL,t_124 = NULL;
    r_124 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_124 = ATgetFirst((ATermList) t);
        t_124 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_53 = t;
      int d_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_50 = NULL,v_50 = NULL,i_26 = NULL;
          t = SSLgetAnnotations(r_124);
          s_50 = t;
          t = s_124;
          t = n_105(t);
          v_50 = t;
          t = (ATerm) ATinsert(CheckATermList(t_124), v_50);
          i_26 = t;
          t = SSLsetAnnotations(i_26, s_50);
          LocalPopChoice(d_53);
        }
      else
        {
          t = b_53;
          {
            ATerm d_51 = NULL,h_51 = NULL,n_26 = NULL;
            t = SSLgetAnnotations(r_124);
            d_51 = t;
            t = t_124;
            t = u_124(t);
            h_51 = t;
            t = (ATerm) ATinsert(CheckATermList(h_51), s_124);
            n_26 = t;
            t = SSLsetAnnotations(n_26, d_51);
          }
        }
    }
    return(t);
  }
  t = u_124(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_124 = NULL,z_124 = NULL,a_125 = NULL;
  y_124 = t;
  {
    ATerm e_53 = t;
    int f_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_124;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_53 = ATgetFirst((ATermList) t);
                ATerm h_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_124;
          }
        LocalPopChoice(f_53);
      }
    else
      {
        t = e_53;
        t = (ATerm) ATinsert(ATempty, y_124);
      }
  }
  z_124 = t;
  t = term_b_48;
  a_125 = t;
  t = SSL_printnl(a_125, z_124);
  t = y_124;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_125 = NULL,f_125 = NULL;
  t = term_r_47;
  e_125 = t;
  t = term_a_51;
  f_125 = t;
  t = term_b_51;
  t = d_10(e_125, f_125, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_10 (ATerm q_57, ATerm r_57, ATerm t)
{
  t = SSL_hashtable_get(r_57, q_57);
  return(t);
}
static ATerm d_10 (ATerm o_55, ATerm p_55, ATerm t)
{
  ATerm g_125 = NULL;
  t = lookup_table_0_1(o_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_10(p_55, g_125, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm i_125 = NULL,j_125 = NULL;
  t = term_i_53;
  i_125 = t;
  t = term_q_49;
  j_125 = t;
  t = term_j_53;
  t = g_10(i_125, j_125, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_l_53;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm k_125 = NULL,n_125 = NULL,o_125 = NULL,p_125 = NULL;
  t = term_i_53;
  o_125 = t;
  t = term_q_49;
  p_125 = t;
  t = term_j_53;
  t = g_10(o_125, p_125, t);
  t = term_m_53;
  k_125 = t;
  t = term_q_49;
  n_125 = t;
  t = term_p_53;
  t = g_10(k_125, n_125, t);
  t = term_q_53;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_r_53;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_53 = t;
  int x_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_17, o_17, p_17, t);
      LocalPopChoice(x_53);
    }
  else
    {
      t = s_53;
      t = Option_3_0(q_17, r_17, s_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t)
{
  ATerm q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL,v_30 = NULL;
  v_125 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_125 = ATgetFirst((ATermList) t);
      s_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_125);
  q_125 = t;
  t = r_125;
  t = z_83(t);
  t_125 = t;
  t = s_125;
  t = a_84(t);
  u_125 = t;
  t = (ATerm) ATinsert(CheckATermList(u_125), t_125);
  v_30 = t;
  t = SSLsetAnnotations(v_30, q_125);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_125 (ATerm), ATerm t)
{
  ATerm a_126 = NULL,b_126 = NULL,c_126 = NULL,d_126 = NULL,f_126 = NULL,g_126 = NULL,x_30 = NULL;
  a_126 = t;
  {
    ATerm y_53 = t;
    int z_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_54;
        t = m_125(t);
        LocalPopChoice(z_53);
      }
    else
      {
        t = y_53;
      }
  }
  t = a_126;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_126 = ATgetFirst((ATermList) t);
      d_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_126);
  b_126 = t;
  t = term_a_51;
  g_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_51, c_126);
  t = g_10(g_126, c_126, t);
  t = d_126;
  {
    static ATerm q_126 (ATerm t)
    {
      ATerm d_54 = t;
      int e_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_54 = t;
          int i_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_126 = NULL;
              j_126 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_126;
              LocalPopChoice(i_54);
            }
          else
            {
              t = f_54;
              t = m_125(t);
              t = Cons_2_0(_id, q_126, t);
            }
          LocalPopChoice(e_54);
        }
      else
        {
          t = d_54;
          {
            ATerm m_126 = NULL,n_126 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_126 = ATgetFirst((ATermList) t);
                n_126 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_126), (ATerm) ATmakeAppl(sym_Undefined_1, m_126));
          }
        }
      return(t);
    }
    t = q_126(t);
  }
  f_126 = t;
  t = (ATerm) ATinsert(CheckATermList(f_126), (ATerm) ATmakeAppl(sym_Program_1, c_126));
  x_30 = t;
  t = SSLsetAnnotations(x_30, b_126);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm d_127 = NULL;
  d_127 = t;
  if(match_string(t, "--help"))
    {
      t = d_127;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_127;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_127;
        }
    }
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm e_127 = NULL,f_127 = NULL;
  t = term_m_52;
  e_127 = t;
  t = term_q_49;
  f_127 = t;
  t = term_j_54;
  t = g_10(e_127, f_127, t);
  t = term_k_54;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_l_54;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL,b_127 = NULL,c_127 = NULL;
  x_126 = t;
  t = term_o_50;
  y_126 = t;
  t = term_m_54;
  t = lookup_table_0_1(y_126, t);
  c_127 = t;
  t = term_p_50;
  z_126 = t;
  t = (ATerm) ATempty;
  a_127 = t;
  t = c_127;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(z_126, a_127, b_127, t);
  t = x_126;
  {
    static ATerm t_17 (ATerm t)
    {
      ATerm n_54 = t;
      int o_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_125(t);
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
                t = Option_3_0(u_17, v_17, w_17, t);
                LocalPopChoice(q_54);
              }
            else
              {
                t = p_54;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_17, t);
  }
  {
    ATerm r_54 = t;
    int s_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_127 = NULL;
        q_127 = t;
        {
          ATerm t_54 = t;
          int u_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_52 = NULL;
              t = q_127;
              {
                ATerm v_54 = t;
                int x_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_52 = NULL,i_52 = NULL;
                    t = term_r_47;
                    b_52 = t;
                    t = term_m_52;
                    i_52 = t;
                    t = term_n_52;
                    t = d_10(b_52, i_52, t);
                    LocalPopChoice(x_54);
                  }
                else
                  {
                    t = v_54;
                    t = fetch_1_0(x_17, t);
                  }
              }
              t = q_127;
              t = default_system_usage_0_0(t);
              t = term_x_49;
              a_52 = t;
              t = SSL_exit(a_52);
              LocalPopChoice(u_54);
            }
          else
            {
              t = t_54;
              {
                ATerm q_52 = NULL,r_52 = NULL,y_52 = NULL;
                t = term_r_47;
                r_52 = t;
                t = term_i_53;
                y_52 = t;
                t = term_y_54;
                t = d_10(r_52, y_52, t);
                t = q_127;
                t = default_system_about_0_0(t);
                t = term_x_49;
                q_52 = t;
                t = SSL_exit(q_52);
              }
            }
        }
        LocalPopChoice(s_54);
      }
    else
      {
        t = r_54;
        {
          ATerm z_54 = t;
          int a_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_127 = NULL,s_127 = NULL,t_127 = NULL;
              static ATerm z_17 (ATerm t)
              {
                ATerm u_127 = NULL,v_127 = NULL,w_127 = NULL,z_30 = NULL;
                w_127 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_127 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_127);
                u_127 = t;
                t = v_127;
                if(((v_126 != NULL) && (v_126 != t)))
                  _fail(t);
                else
                  v_126 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_127);
                z_30 = t;
                t = SSLsetAnnotations(z_30, u_127);
                return(t);
              }
              t = fetch_1_0(z_17, t);
              t = term_q_32;
              s_127 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_126)), term_b_55);
              t_127 = t;
              t = SSL_printnl(s_127, t_127);
              t = (ATerm) ATmakeAppl(sym__2, term_q_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_126)), term_b_55));
              t = default_system_usage_0_0(t);
              t = term_s_32;
              r_127 = t;
              t = SSL_exit(r_127);
              LocalPopChoice(a_55);
            }
          else
            {
              t = z_54;
            }
        }
      }
  }
  w_126 = t;
  t = term_o_50;
  t = table_destroy_0_0(t);
  t = w_126;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm t)
{
  ATerm f_128 = NULL,g_128 = NULL,h_128 = NULL,i_128 = NULL,j_128 = NULL;
  t = parse_options_1_0(l_123, t);
  f_128 = t;
  t = term_c_55;
  t = table_create_0_0(t);
  t = term_c_55;
  g_128 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_55, term_d_55, f_128);
  t = lookup_table_0_1(g_128, t);
  j_128 = t;
  t = term_d_55;
  h_128 = t;
  t = j_128;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(h_128, f_128, i_128, t);
  t = f_128;
  t = n_123(t);
  {
    ATerm e_55 = t;
    int f_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_123, t);
        LocalPopChoice(f_55);
      }
    else
      {
        t = e_55;
        {
          ATerm g_55 = t;
          int i_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_55);
            }
          else
            {
              t = g_55;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm j_55 = t;
  int k_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(k_55);
    }
  else
    {
      t = j_55;
      {
        ATerm l_55 = t;
        int m_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(m_55);
          }
        else
          {
            t = l_55;
            {
              ATerm n_55 = t;
              int q_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(q_55);
                }
              else
                {
                  t = n_55;
                  {
                    ATerm r_55 = t;
                    int s_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(c_18, d_18, e_18, t);
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
                              t = verbose_option_0_0(t);
                              LocalPopChoice(u_55);
                            }
                          else
                            {
                              t = t_55;
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
static ATerm b_18 (ATerm t)
{
  t = input_1_0(f_18, t);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm l_128 = NULL,m_128 = NULL;
  t = term_e_48;
  l_128 = t;
  t = term_q_49;
  m_128 = t;
  t = term_v_55;
  t = g_10(l_128, m_128, t);
  t = term_w_55;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_x_55;
  return(t);
}
static ATerm f_18 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_18, default_usage_0_0, _id, b_18, t);
  return(t);
}

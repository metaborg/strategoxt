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
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
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
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
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
ATerm term_x_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_c_54;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_h_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_w_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_d_52;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_g_50;
ATerm term_d_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_48;
ATerm term_f_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_q_47;
ATerm term_n_47;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_t_43;
ATerm term_i_43;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_w_35;
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
ATerm term_a_35;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_m_32;
ATerm term_h_27;
ATerm term_p_26;
ATerm term_p_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_a_25;
ATerm term_u_24;
ATerm term_n_24;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_d_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_m_19;
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
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Op_2, term_v_19, (ATerm) ATempty);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_18);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATempty);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_21);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Call_2, term_v_22, (ATerm) ATempty);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Call_2, term_u_24, (ATerm) ATempty);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, (ATerm) ATempty);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
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
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_35);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_36);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_36);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_36);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_36);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_38);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_43);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
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
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym__2, term_q_47, term_n_47);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym__2, term_q_47, term_z_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym__2, term_q_47, term_f_48);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym__2, term_q_47, term_n_49);
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
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym__2, term_w_49, term_x_49);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym__2, term_d_50, term_q_49);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(sym__2, term_q_47, term_a_51);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym__2, term_q_47, term_w_49);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym__2, term_q_47, term_m_52);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym__2, term_o_50, term_p_50);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__2, term_h_53, term_q_49);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym__2, term_l_53, term_q_49);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
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
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym__2, term_q_47, term_h_53);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym__2, term_f_48, term_q_49);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_98 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm z_130 (ATerm), ATerm w_75, ATerm u_75, ATerm v_75, ATerm z_75, ATerm x_75, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_1_0 (ATerm z_130 (ATerm), ATerm t);
static ATerm y_18 (ATerm p_13, ATerm q_13, ATerm t);
static ATerm z_18 (ATerm y_13, ATerm z_13, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
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
static ATerm e_30 (ATerm i_29, ATerm t);
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
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm r_8 (ATerm m_61, ATerm n_61, ATerm o_61, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm s_8 (ATerm y_130 (ATerm), ATerm d_75, ATerm a_75, ATerm b_75, ATerm k_75, ATerm o_75, ATerm p_75, ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
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
static ATerm r_6 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
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
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
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
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm q_96 (ATerm t_94, ATerm u_94, ATerm v_94, ATerm t);
static ATerm d_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm free_vars_3_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm s_98 (ATerm), ATerm t);
static ATerm k_9 (ATerm g_54, ATerm h_54, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_100 (ATerm), ATerm t);
static ATerm l_9 (ATerm m_118 (ATerm), ATerm r_43, ATerm p_43, ATerm t);
static ATerm l_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm m_9 (ATerm a_54, ATerm b_54, ATerm t);
ATerm end_scope_1_0 (ATerm j_118 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_118 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_113 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm u_105 (ATerm), ATerm t);
static ATerm g_105 (ATerm v_104, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_9 (ATerm h_132, ATerm d_132, ATerm t);
ATerm foldr_3_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm l_12 (ATerm t);
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
static ATerm l_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm q_9 (ATerm h_39, ATerm i_39, ATerm t);
static ATerm r_9 (ATerm l_23, ATerm m_23, ATerm t);
static ATerm t_9 (ATerm u_104 (ATerm), ATerm b_172, ATerm r_23, ATerm t);
static ATerm s_9 (ATerm h_23, ATerm i_23, ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
ATerm output_1_0 (ATerm s_123 (ATerm), ATerm t);
static ATerm e_114 (ATerm y_113, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_9 (ATerm n_23, ATerm t);
static ATerm v_9 (ATerm a_38, ATerm b_38, ATerm t);
static ATerm w_9 (ATerm j_39, ATerm k_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_115 (ATerm o_114, ATerm t);
static ATerm q_115 (ATerm s_114, ATerm t_114, ATerm u_114, ATerm t);
static ATerm r_115 (ATerm c_115, ATerm d_115, ATerm e_115, ATerm t);
static ATerm x_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm o_16 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_10 (ATerm a_49, ATerm b_49, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm e_10 (ATerm v_53, ATerm w_53, ATerm u_53, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_9 (ATerm d_42, ATerm e_42, ATerm t);
ATerm foldr_2_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm g_17 (ATerm t);
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
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
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
static ATerm y_17 (ATerm t);
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
  ATerm u_0 = NULL,v_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_0, a_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_0 = ATgetArgument(t, 0);
          t = z_0;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_0 = ATgetFirst((ATermList) t);
              v_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_0, (ATerm) ATmakeAppl(sym_LChoices_1, v_0));
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
              z_0 = ATgetArgument(t, 0);
              t = z_0;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_0 = ATgetFirst((ATermList) t);
                  v_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_0, (ATerm) ATmakeAppl(sym_Choices_1, v_0));
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
                  z_0 = ATgetArgument(t, 0);
                  t = z_0;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_0 = ATgetFirst((ATermList) t);
                      v_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_0, (ATerm) ATmakeAppl(sym_Seqs_1, v_0));
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
                      z_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          z_0 = ATgetArgument(t, 0);
                          a_1 = ATgetArgument(t, 1);
                          x_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_0)), z_0), (ATerm) ATmakeAppl(sym_Build_1, a_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              z_0 = ATgetArgument(t, 0);
                              a_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_0, (ATerm) ATmakeAppl(sym_Match_1, a_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  z_0 = ATgetArgument(t, 0);
                                  a_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_0), a_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      z_0 = ATgetArgument(t, 0);
                                      a_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_1), z_0);
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
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(r_98, t);
    return(t);
  }
  t = r_98(t);
  t = SRTS_all(h_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm c_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_5);
  return(t);
}
static ATerm r_0 (ATerm t)
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
              ATerm i_5 = NULL,l_5 = NULL,m_5 = NULL,r_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_5 = ATgetArgument(t, 0);
                  l_5 = ATgetArgument(t, 1);
                  m_5 = ATgetArgument(t, 2);
                  r_5 = ATgetArgument(t, 3);
                  t = m_5;
                  t = map_1_0(s_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_5 = ATgetArgument(t, 0);
                      l_5 = ATgetArgument(t, 1);
                      m_5 = ATgetArgument(t, 2);
                      r_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_5;
                  t = map_1_0(t_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm e_6 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_6 = ATgetArgument(t, 0);
          {
            ATerm p_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = e_6;
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_6;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm p_6 = NULL;
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_6 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_18);
      t = p_6;
    }
  else
    {
      t = q_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_6;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm w_6 = NULL;
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_6);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm x_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_6);
  return(t);
}
static ATerm c_1 (ATerm t)
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
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            {
              ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_7 = ATgetArgument(t, 0);
                  d_7 = ATgetArgument(t, 1);
                  e_7 = ATgetArgument(t, 2);
                  f_7 = ATgetArgument(t, 3);
                  t = e_7;
                  t = map_1_0(d_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_7 = ATgetArgument(t, 0);
                      d_7 = ATgetArgument(t, 1);
                      e_7 = ATgetArgument(t, 2);
                      f_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_7;
                  t = map_1_0(e_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm p_7 = NULL;
  ATerm a_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_7 = ATgetArgument(t, 0);
          {
            ATerm e_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_19);
      t = p_7;
    }
  else
    {
      t = a_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_7;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_8 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_19);
      t = i_8;
    }
  else
    {
      t = f_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_8;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL,q_0 = NULL,a_0 = NULL,w_0 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            m_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_8);
        q_0 = t;
        t = term_m_19;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_19, m_10);
        t = k_9(w_0, m_10, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm n_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_19) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, m_10);
        a_0 = t;
        t = SSLsetAnnotations(a_0, q_0);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        {
          ATerm x_1 = NULL;
          t = term_m_19;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_19, y_8);
          t = k_9(x_1, y_8, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm o_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_19) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = y_8;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, y_8);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm p_11 (ATerm y_3, ATerm z_3, ATerm a_4, ATerm b_4, ATerm c_4, ATerm d_4, ATerm e_4, ATerm t)
  {
    ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, c_4, term_w_19);
    {
      ATerm z_19 = t;
      if((PushChoice() == 0))
        {
          ATerm y_4 = NULL;
          if(match_cons(t, sym__2))
            {
              y_4 = ATgetArgument(t, 0);
              if((y_4 != ATgetArgument(t, 1)))
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
    o_4 = t;
    t = b_4;
    t = dummify_0_0(t);
    q_4 = t;
    {
      ATerm a_20 = t;
      int c_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_4;
          if((b_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, o_4);
          LocalPopChoice(c_20);
        }
      else
        {
          t = a_20;
          t = q_4;
        }
    }
    p_4 = t;
    t = q_4;
    t = free_vars_3_0(p_0, r_0, tboundin_3_0, t);
    t = map_1_0(y_0, t);
    u_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_4, d_4);
    t = free_vars_3_0(b_1, c_1, tboundin_3_0, t);
    t = filter_1_0(f_1, t);
    t_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
    t = diff_0_0(t);
    v_4 = t;
    t = new_0_0(t);
    w_4 = t;
    t = y_3;
    t = o_0(t);
    x_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, x_4, (ATerm) ATmakeAppl(sym_Op_2, term_d_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_h_20, (ATerm) ATinsert(CheckATermList(v_4), (ATerm) ATmakeAppl(sym_Str_1, w_4)))), q_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, y_3, z_3, a_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_4), b_4), c_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_3)))), p_4), (ATerm) ATmakeAppl(sym_Op_2, term_h_20, (ATerm) ATinsert(CheckATermList(v_4), (ATerm) ATmakeAppl(sym_Str_1, w_4))))), d_4))));
    return(t);
  }
  ATerm r_10 = NULL,s_10 = NULL,v_10 = NULL,z_10 = NULL,c_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL,m_11 = NULL,n_11 = NULL;
  v_10 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      z_10 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
      e_11 = ATgetArgument(t, 2);
      g_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_11;
  if(match_cons(t, sym_Rule_3))
    {
      h_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
      n_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_11;
  if(match_cons(t, sym_Op_2))
    {
      r_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
      t = s_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_10;
          if(match_string(t, "Undefined"))
            {
              ATerm k_20 = t;
              int n_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
                  t = v_10;
                  t = new_0_0(t);
                  l_2 = t;
                  t = h_11;
                  t = dummify_0_0(t);
                  j_2 = t;
                  {
                    ATerm q_20 = t;
                    int t_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_2;
                        if((h_11 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                        LocalPopChoice(t_20);
                      }
                    else
                      {
                        t = q_20;
                        t = j_2;
                      }
                  }
                  m_2 = t;
                  t = z_10;
                  t = o_0(t);
                  n_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_2, (ATerm) ATmakeAppl(sym_Op_2, term_d_20, (ATerm) ATinsert(ATinsert(ATempty, term_w_19), j_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, z_10, c_11, e_11, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_2), h_11), term_w_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_10)))), m_2), term_w_19)), (ATerm) ATmakeAppl(sym_Seq_2, n_11, term_g_18)))));
                  LocalPopChoice(n_20);
                }
              else
                {
                  t = k_20;
                  t = p_11(z_10, c_11, e_11, h_11, m_11, n_11, v_10, t);
                }
            }
          else
            {
              t = p_11(z_10, c_11, e_11, h_11, m_11, n_11, v_10, t);
            }
        }
      else
        {
          t = r_10;
          t = p_11(z_10, c_11, e_11, h_11, m_11, n_11, v_10, t);
        }
    }
  else
    {
      t = p_11(z_10, c_11, e_11, h_11, m_11, n_11, v_10, t);
    }
  return(t);
}
static ATerm l_8 (ATerm z_130 (ATerm), ATerm w_75, ATerm u_75, ATerm v_75, ATerm z_75, ATerm x_75, ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t = new_0_0(t);
  t_11 = t;
  t = z_75;
  t = dummify_0_0(t);
  s_11 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_11;
        if((z_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, t_11);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = s_11;
      }
  }
  u_11 = t;
  t = w_75;
  t = z_130(t);
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, v_11, s_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, w_75, u_75, v_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_11), z_75), term_w_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_75)))), u_11), term_e_21)), (ATerm) ATmakeAppl(sym_Seq_2, x_75, term_g_18))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_1_0 (ATerm z_130 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      f_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
      h_12 = ATgetArgument(t, 2);
      {
        ATerm g_21 = ATgetArgument(t, 3);
        if(match_cons(g_21, sym_Rule_3))
          {
            i_12 = ATgetArgument(g_21, 0);
            {
              ATerm j_21 = ATgetArgument(g_21, 1);
              if(match_cons(j_21, sym_Op_2))
                {
                  ATerm k_21 = ATgetArgument(j_21, 0);
                  if((ATgetSymbol((ATermAppl) k_21) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm l_21 = ATgetArgument(j_21, 1);
                    if(((ATgetType(l_21) != AT_LIST) || !(ATisEmpty(l_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            j_12 = ATgetArgument(g_21, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_8(z_130, f_12, g_12, h_12, i_12, j_12, t);
  return(t);
}
static ATerm y_18 (ATerm p_13, ATerm q_13, ATerm t)
{
  t = p_13;
  {
    ATerm m_21 = t;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,x_13 = NULL,j_0 = NULL;
        x_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_13 = ATgetFirst((ATermList) t);
            u_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_13);
        s_13 = t;
        t = u_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(u_13), t_13);
        j_0 = t;
        t = SSLsetAnnotations(j_0, s_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_18, p_13);
  return(t);
}
static ATerm z_18 (ATerm y_13, ATerm z_13, ATerm t)
{
  t = y_13;
  {
    ATerm n_21 = t;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,v_1 = NULL;
        e_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_14 = ATgetFirst((ATermList) t);
            d_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_14);
        b_14 = t;
        t = d_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_14), c_14);
        v_1 = t;
        t = SSLsetAnnotations(v_1, b_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, y_13);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,w_2 = NULL;
  t_14 = t;
  t = SSL_explode_term(t_14);
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_21 = ATgetArgument(t, 1);
        if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
          {
            u_14 = ATgetFirst((ATermList) y_21);
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
  t = SSL_explode_term(t_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(((ATgetType(d_22) == AT_LIST) && !(ATisEmpty(d_22))))
          {
            ATerm f_22 = ATgetFirst((ATermList) d_22);
            ATerm r_22 = (ATerm) ATgetNext((ATermList) d_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, w_2), u_14));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, s_15), r_15));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm u_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, z_15), u_15));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_22, (ATerm) ATinsert(ATinsert(ATempty, n_16), m_16));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm p_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_22, (ATerm) ATinsert(ATinsert(ATempty, u_16), p_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      {
        ATerm r_14 = NULL;
        t = n_14;
        t = foldr_2_0(g_1, h_1, t);
        r_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, m_14, r_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          m_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, m_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              m_14 = ATgetArgument(t, 0);
              {
                ATerm b_3 = NULL;
                t = m_14;
                {
                  ATerm y_22 = t;
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
                              t = term_c_23;
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
                      t = y_22;
                      {
                        ATerm f_3 = NULL;
                        t = SSL_explode_string(m_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm o_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(o_23) != AT_INT) || (ATgetInt((ATermInt) o_23) != 39)))
                              _fail(t);
                            {
                              ATerm t_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
                                {
                                  f_3 = ATgetFirst((ATermList) t_23);
                                  {
                                    ATerm u_23 = (ATerm) ATgetNext((ATermList) t_23);
                                    if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
                                      {
                                        ATerm v_23 = ATgetFirst((ATermList) u_23);
                                        if(((ATgetType(v_23) != AT_INT) || (ATgetInt((ATermInt) v_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm z_23 = (ATerm) ATgetNext((ATermList) u_23);
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
                        t = f_3;
                      }
                    }
                }
                b_3 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, b_3);
              }
            }
          else
            {
              ATerm a_24 = t;
              int c_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      m_14 = ATgetArgument(t, 0);
                      {
                        ATerm g_24 = ATgetArgument(t, 1);
                      }
                      j_14 = ATgetArgument(t, 2);
                      f_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_24);
                  t = (ATerm) ATmakeAppl(sym_Con_3, m_14, j_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_14), (ATerm) ATempty));
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
                            m_14 = ATgetArgument(t, 0);
                            {
                              ATerm l_24 = ATgetArgument(t, 1);
                            }
                            j_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_24);
                        t = (ATerm) ATmakeAppl(sym_Con_3, m_14, j_14, term_a_25);
                      }
                    else
                      {
                        t = h_24;
                        if(match_cons(t, sym_Con1_2))
                          {
                            m_14 = ATgetArgument(t, 0);
                            n_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, m_14, n_14, term_a_25);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                m_14 = ATgetArgument(t, 0);
                                n_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm i_1 (ATerm t)
                                  {
                                    t = n_14;
                                    return(t);
                                  }
                                  t = m_14;
                                  t = foldr_2_0(i_1, j_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    m_14 = ATgetArgument(t, 0);
                                    t = m_14;
                                    t = foldr_2_0(k_1, l_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        m_14 = ATgetArgument(t, 0);
                                        t = m_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            g_14 = ATgetFirst((ATermList) t);
                                            h_14 = (ATerm) ATgetNext((ATermList) t);
                                            t = h_14;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm b_25 = t;
                                                int c_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = y_18(m_14, l_14, t);
                                                    LocalPopChoice(c_25);
                                                  }
                                                else
                                                  {
                                                    t = b_25;
                                                    t = g_14;
                                                  }
                                              }
                                            else
                                              {
                                                t = y_18(m_14, l_14, t);
                                              }
                                          }
                                        else
                                          {
                                            t = y_18(m_14, l_14, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            m_14 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, m_14));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                m_14 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, m_14));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    m_14 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, m_14));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        m_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, m_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            m_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_14), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                m_14 = ATgetArgument(t, 0);
                                                                n_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_14), n_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    m_14 = ATgetArgument(t, 0);
                                                                    n_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm m_1 (ATerm t)
                                                                      {
                                                                        t = n_14;
                                                                        return(t);
                                                                      }
                                                                      t = m_14;
                                                                      t = foldr_2_0(m_1, n_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        m_14 = ATgetArgument(t, 0);
                                                                        t = m_14;
                                                                        t = foldr_2_0(o_1, p_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            m_14 = ATgetArgument(t, 0);
                                                                            n_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, (ATerm) ATinsert(CheckATermList(n_14), m_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                m_14 = ATgetArgument(t, 0);
                                                                                t = m_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    g_14 = ATgetFirst((ATermList) t);
                                                                                    h_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = h_14;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm e_25 = t;
                                                                                        int f_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = z_18(m_14, l_14, t);
                                                                                            LocalPopChoice(f_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = e_25;
                                                                                            t = g_14;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = z_18(m_14, l_14, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_18(m_14, l_14, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_g_25;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        m_14 = ATgetArgument(t, 0);
                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                        t = n_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            i_14 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_i_25, (ATerm) ATinsert(ATinsert(ATempty, i_14), m_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            m_14 = ATgetArgument(t, 0);
                                                                                            t = m_14;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                m_14 = ATgetArgument(t, 0);
                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, m_14, n_14, term_h_18);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    m_14 = ATgetArgument(t, 0);
                                                                                                    n_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, m_14, n_14, term_h_18);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        m_14 = ATgetArgument(t, 0);
                                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, m_14, (ATerm)ATempty, n_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            m_14 = ATgetArgument(t, 0);
                                                                                                            n_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, n_14, m_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                m_14 = ATgetArgument(t, 0);
                                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, m_14, n_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    m_14 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, m_14, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        m_14 = ATgetArgument(t, 0);
                                                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                                                        j_14 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_14, n_14, (ATerm)ATempty, j_14);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            m_14 = ATgetArgument(t, 0);
                                                                                                                            n_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, m_14, (ATerm)ATempty, (ATerm)ATempty, n_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                m_14 = ATgetArgument(t, 0);
                                                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                                                j_14 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, m_14, n_14, (ATerm)ATempty, j_14);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    m_14 = ATgetArgument(t, 0);
                                                                                                                                    n_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, m_14, (ATerm)ATempty, (ATerm)ATempty, n_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        m_14 = ATgetArgument(t, 0);
                                                                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                                                                        j_14 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, m_14, n_14, (ATerm)ATempty, j_14);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            m_14 = ATgetArgument(t, 0);
                                                                                                                                            n_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, m_14, (ATerm)ATempty, (ATerm)ATempty, n_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm j_25 = ATgetArgument(t, 0);
                                                                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, n_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm b_19 = NULL,h_19 = NULL,i_19 = NULL;
  h_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      i_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      {
        ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
        t = h_19;
        t = new_0_0(t);
        p_19 = t;
        t = new_0_0(t);
        q_19 = t;
        t = new_0_0(t);
        r_19 = t;
        t = new_0_0(t);
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_19), r_19), q_19), p_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, p_19), (ATerm) ATmakeAppl(sym_Var_1, r_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, i_19, (ATerm)ATmakeAppl(sym_Var_1, p_19), (ATerm) ATmakeAppl(sym_Var_1, q_19)), (ATerm) ATmakeAppl(sym_BAM_3, b_19, (ATerm)ATmakeAppl(sym_Var_1, r_19), (ATerm) ATmakeAppl(sym_Var_1, s_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_19)), (ATerm) ATmakeAppl(sym_Var_1, q_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_19 = ATgetArgument(t, 0);
          {
            ATerm t_19 = NULL,u_19 = NULL,x_19 = NULL,y_19 = NULL;
            t = h_19;
            t = new_0_0(t);
            x_19 = t;
            t = i_19;
            {
              static ATerm q_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((t_19 != NULL) && (t_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      t_19 = ATgetArgument(t, 0);
                    if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, x_19);
                return(t);
              }
              t = oncetd_1_0(q_1, t);
            }
            y_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_19)), not_null(t_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_19)), (ATerm) ATmakeAppl(sym_Build_1, y_19))));
          }
        }
      else
        {
          ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,l_20 = NULL,m_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              i_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_19;
          t = new_0_0(t);
          g_20 = t;
          t = new_0_0(t);
          l_20 = t;
          t = i_19;
          {
            static ATerm r_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_20 = ATgetArgument(t, 0);
                  if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    f_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_20);
              return(t);
            }
            t = oncetd_1_0(r_1, t);
          }
          m_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_20))))), (ATerm)ATmakeAppl(sym_Var_1, g_20), (ATerm) ATmakeAppl(sym_Op_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_20)), not_null(e_20)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,s_20 = NULL,u_20 = NULL,v_20 = NULL;
        t = o_20;
        t = new_0_0(t);
        u_20 = t;
        t = p_20;
        {
          static ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_20 = ATgetArgument(t, 0);
                if(((s_20 != NULL) && (s_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_20), r_20);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_20))))));
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
              t = o_20;
              t = new_0_0(t);
              a_21 = t;
              t = p_20;
              {
                static ATerm t_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, a_21);
                  return(t);
                }
                t = pat_td_1_0(t_1, t);
              }
              b_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_21)), not_null(z_20))));
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
              {
                ATerm h_21 = NULL,i_21 = NULL,u_21 = NULL,v_21 = NULL;
                t = o_20;
                t = new_0_0(t);
                u_21 = t;
                t = p_20;
                {
                  static ATerm u_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_21 != NULL) && (i_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_21 = ATgetArgument(t, 0);
                        if(((h_21 != NULL) && (h_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_21);
                    return(t);
                  }
                  t = pat_td_1_0(u_1, t);
                }
                v_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_21)), not_null(i_21)))));
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
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_129(t);
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
        a_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            b_26 = ATgetArgument(t, 0);
            c_26 = ATgetArgument(t, 1);
            {
              ATerm j_4 = NULL,b_5 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(a_26);
              j_4 = t;
              t = c_26;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = pat_td_1_0(q_129, t);
                  return(t);
                }
                t = fetch_1_0(w_1, t);
              }
              b_5 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, b_26, b_5);
              d_3 = t;
              t = SSLsetAnnotations(d_3, j_4);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                b_26 = ATgetArgument(t, 0);
                c_26 = ATgetArgument(t, 1);
                {
                  ATerm x_25 = t;
                  int d_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_5 = NULL,s_5 = NULL,g_3 = NULL;
                      t = SSLgetAnnotations(a_26);
                      o_5 = t;
                      t = c_26;
                      t = pat_td_1_0(q_129, t);
                      s_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, b_26, s_5);
                      g_3 = t;
                      t = SSLsetAnnotations(g_3, o_5);
                      LocalPopChoice(d_26);
                    }
                  else
                    {
                      t = x_25;
                      {
                        ATerm s_6 = NULL,v_6 = NULL,h_3 = NULL;
                        t = SSLgetAnnotations(a_26);
                        s_6 = t;
                        t = b_26;
                        t = pat_td_1_0(q_129, t);
                        v_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, v_6, c_26);
                        h_3 = t;
                        t = SSLsetAnnotations(h_3, s_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    b_26 = ATgetArgument(t, 0);
                    c_26 = ATgetArgument(t, 1);
                    z_25 = ATgetArgument(t, 2);
                    {
                      ATerm y_7 = NULL,e_8 = NULL,i_3 = NULL;
                      t = SSLgetAnnotations(a_26);
                      y_7 = t;
                      t = z_25;
                      {
                        static ATerm y_1 (ATerm t)
                        {
                          t = pat_td_1_0(q_129, t);
                          return(t);
                        }
                        t = fetch_1_0(y_1, t);
                      }
                      e_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, b_26, c_26, e_8);
                      i_3 = t;
                      t = SSLsetAnnotations(i_3, y_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        b_26 = ATgetArgument(t, 0);
                        c_26 = ATgetArgument(t, 1);
                        z_25 = ATgetArgument(t, 2);
                        {
                          ATerm w_8 = NULL,e_9 = NULL,j_3 = NULL;
                          t = SSLgetAnnotations(a_26);
                          w_8 = t;
                          t = z_25;
                          {
                            static ATerm z_1 (ATerm t)
                            {
                              t = pat_td_1_0(q_129, t);
                              return(t);
                            }
                            t = fetch_1_0(z_1, t);
                          }
                          e_9 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, b_26, c_26, e_9);
                          j_3 = t;
                          t = SSLsetAnnotations(j_3, w_8);
                        }
                      }
                    else
                      {
                        ATerm n_10 = NULL,q_10 = NULL,k_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            b_26 = ATgetArgument(t, 0);
                            c_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(a_26);
                        n_10 = t;
                        t = c_26;
                        t = pat_td_1_0(q_129, t);
                        q_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, b_26, q_10);
                        k_3 = t;
                        t = SSLsetAnnotations(k_3, n_10);
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
  ATerm r_26 = NULL,s_26 = NULL;
  r_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL,u_26 = NULL,w_26 = NULL,x_26 = NULL;
        t = r_26;
        t = new_0_0(t);
        w_26 = t;
        t = s_26;
        {
          static ATerm a_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_26 = ATgetArgument(t, 0);
                if(((u_26 != NULL) && (u_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_26);
            return(t);
          }
          t = pat_td_1_0(a_2, t);
        }
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_26)), not_null(t_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_26)))), (ATerm) ATmakeAppl(sym_Build_1, x_26)));
        LocalPopChoice(i_26);
      }
    else
      {
        t = e_26;
        {
          ATerm v_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_26 = NULL,j_27 = NULL,m_27 = NULL;
              t = r_26;
              t = new_0_0(t);
              j_27 = t;
              t = s_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_27);
                  return(t);
                }
                t = pat_td_1_0(b_2, t);
              }
              m_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_27)))), (ATerm) ATmakeAppl(sym_Build_1, m_27)));
              LocalPopChoice(z_26);
            }
          else
            {
              t = v_26;
              {
                ATerm n_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL;
                t = r_26;
                t = new_0_0(t);
                q_27 = t;
                t = s_26;
                {
                  static ATerm c_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          n_27 = ATgetArgument(t, 0);
                        if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          o_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, q_27);
                    return(t);
                  }
                  t = pat_td_1_0(c_2, t);
                }
                r_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_27), not_null(o_27), (ATerm) ATmakeAppl(sym_Var_1, q_27))), (ATerm) ATmakeAppl(sym_Build_1, r_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm g_27 = t;
  if((PushChoice() == 0))
    {
      ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,s_3 = NULL;
      g_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_28);
      e_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_28);
      s_3 = t;
      t = SSLsetAnnotations(s_3, e_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_27;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_27;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_28 = ATgetFirst((ATermList) t);
      k_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_28, k_28);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm l_28 = NULL,p_28 = NULL,r_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if(match_cons(i_27, sym__2))
        {
          l_28 = ATgetArgument(i_27, 0);
          p_28 = ATgetArgument(i_27, 1);
        }
      else
        _fail(t);
      {
        ATerm k_27 = ATgetArgument(t, 1);
        if(match_cons(k_27, sym__2))
          {
            r_28 = ATgetArgument(k_27, 0);
            u_28 = ATgetArgument(k_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_28), l_28), (ATerm) ATinsert(CheckATermList(u_28), p_28));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_27;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm v_28 = NULL,a_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_28 = ATgetFirst((ATermList) t);
      a_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_28, a_29);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(match_cons(l_27, sym__2))
        {
          b_29 = ATgetArgument(l_27, 0);
          c_29 = ATgetArgument(l_27, 1);
        }
      else
        _fail(t);
      {
        ATerm p_27 = ATgetArgument(t, 1);
        if(match_cons(p_27, sym__2))
          {
            d_29 = ATgetArgument(p_27, 0);
            e_29 = ATgetArgument(p_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_29), b_29), (ATerm) ATinsert(CheckATermList(e_29), c_29));
  return(t);
}
static ATerm n_8 (ATerm z_65, ATerm a_66, ATerm b_66, ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,t_3 = NULL;
  t = b_66;
  t = fetch_1_0(d_2, t);
  t = b_66;
  t = genzip_4_0(e_2, f_2, g_2, LiftPrimArg_0_0, t);
  d_28 = t;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  w_27 = t;
  t = x_27;
  t = concat_0_0(t);
  b_28 = t;
  t = y_27;
  t = genzip_4_0(h_2, i_2, k_2, _id, t);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, c_28);
  t_3 = t;
  t = SSLsetAnnotations(t_3, w_27);
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      {
        ATerm s_27 = ATgetArgument(t, 1);
        if(match_cons(s_27, sym__2))
          {
            u_27 = ATgetArgument(s_27, 0);
            v_27 = ATgetArgument(s_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_27), (ATerm) ATmakeAppl(sym_CallT_3, z_65, a_66, v_27)));
  return(t);
}
static ATerm e_30 (ATerm i_29, ATerm t)
{
  ATerm x_29 = NULL;
  t = i_29;
  {
    ATerm s_28 = t;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,h_9 = NULL;
        a_30 = t;
        if(match_cons(t, sym_Var_1))
          {
            z_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_30);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, z_29);
        h_9 = t;
        t = SSLsetAnnotations(h_9, y_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_28;
      }
  }
  t = new_0_0(t);
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, x_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_29)))), (ATerm) ATmakeAppl(sym_Var_1, x_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_30 = ATgetArgument(t, 0);
      {
        ATerm t_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_30(b_30, t);
            LocalPopChoice(w_28);
          }
        else
          {
            t = t_28;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATmakeAppl(sym_Var_1, c_30)));
          }
      }
    }
  else
    {
      t = e_30(b_30, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm x_28 = t;
  if((PushChoice() == 0))
    {
      ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,f_10 = NULL;
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
      f_10 = t;
      t = SSLsetAnnotations(f_10, m_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_28;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_27;
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
      ATerm y_28 = ATgetArgument(t, 0);
      if(match_cons(y_28, sym__2))
        {
          r_12 = ATgetArgument(y_28, 0);
          s_12 = ATgetArgument(y_28, 1);
        }
      else
        _fail(t);
      {
        ATerm z_28 = ATgetArgument(t, 1);
        if(match_cons(z_28, sym__2))
          {
            t_12 = ATgetArgument(z_28, 0);
            u_12 = ATgetArgument(z_28, 1);
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
  t = term_h_27;
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
        ATerm j_29 = ATgetArgument(t, 1);
        if(match_cons(j_29, sym__2))
          {
            z_12 = ATgetArgument(j_29, 0);
            a_13 = ATgetArgument(j_29, 1);
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
  ATerm d_30 = t;
  if((PushChoice() == 0))
    {
      ATerm l_15 = NULL,m_15 = NULL,p_15 = NULL,q_11 = NULL;
      p_15 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_15);
      l_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_15);
      q_11 = t;
      t = SSLsetAnnotations(q_11, l_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_30;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_27;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm q_15 = NULL,v_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_15 = ATgetFirst((ATermList) t);
      v_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_15, v_15);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_30 = ATgetArgument(t, 0);
      if(match_cons(j_30, sym__2))
        {
          w_15 = ATgetArgument(j_30, 0);
          x_15 = ATgetArgument(j_30, 1);
        }
      else
        _fail(t);
      {
        ATerm k_30 = ATgetArgument(t, 1);
        if(match_cons(k_30, sym__2))
          {
            y_15 = ATgetArgument(k_30, 0);
            k_16 = ATgetArgument(k_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_15), w_15), (ATerm) ATinsert(CheckATermList(k_16), x_15));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_27;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm l_16 = NULL,q_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_16 = ATgetFirst((ATermList) t);
      q_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_16, q_16);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      if(match_cons(l_30, sym__2))
        {
          r_16 = ATgetArgument(l_30, 0);
          s_16 = ATgetArgument(l_30, 1);
        }
      else
        _fail(t);
      {
        ATerm m_30 = ATgetArgument(t, 1);
        if(match_cons(m_30, sym__2))
          {
            t_16 = ATgetArgument(m_30, 0);
            f_17 = ATgetArgument(m_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_16), r_16), (ATerm) ATinsert(CheckATermList(f_17), s_16));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm t_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_34 = ATgetArgument(t, 0);
      y_34 = ATgetArgument(t, 1);
      t_34 = ATgetArgument(t, 2);
      {
        ATerm k_11 = NULL,l_11 = NULL,r_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,o_11 = NULL;
        t = t_34;
        t = fetch_1_0(o_2, t);
        t = t_34;
        t = genzip_4_0(p_2, q_2, r_2, LiftPrimArg_0_0, t);
        b_12 = t;
        if(match_cons(t, sym__2))
          {
            x_11 = ATgetArgument(t, 0);
            y_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_12);
        w_11 = t;
        t = x_11;
        t = concat_0_0(t);
        z_11 = t;
        t = y_11;
        t = genzip_4_0(s_2, t_2, u_2, _id, t);
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_11, a_12);
        o_11 = t;
        t = SSLsetAnnotations(o_11, w_11);
        if(match_cons(t, sym__2))
          {
            k_11 = ATgetArgument(t, 0);
            {
              ATerm n_30 = ATgetArgument(t, 1);
              if(match_cons(n_30, sym__2))
                {
                  l_11 = ATgetArgument(n_30, 0);
                  r_11 = ATgetArgument(n_30, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_11), (ATerm) ATmakeAppl(sym_PrimT_3, x_34, y_34, r_11)));
      }
    }
  else
    {
      ATerm k_14 = NULL,p_14 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,k_12 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          x_34 = ATgetArgument(t, 0);
          y_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_34;
      t = fetch_1_0(v_2, t);
      t = y_34;
      t = genzip_4_0(x_2, y_2, z_2, LiftPrimArg_0_0, t);
      k_15 = t;
      if(match_cons(t, sym__2))
        {
          f_15 = ATgetArgument(t, 0);
          h_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_15);
      d_15 = t;
      t = f_15;
      t = concat_0_0(t);
      i_15 = t;
      t = h_15;
      t = genzip_4_0(a_3, c_3, e_3, _id, t);
      j_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_15, j_15);
      k_12 = t;
      t = SSLsetAnnotations(k_12, d_15);
      if(match_cons(t, sym__2))
        {
          k_14 = ATgetArgument(t, 0);
          {
            ATerm o_30 = ATgetArgument(t, 1);
            if(match_cons(o_30, sym__2))
              {
                p_14 = ATgetArgument(o_30, 0);
                c_15 = ATgetArgument(o_30, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_14), (ATerm) ATmakeAppl(sym_PrimT_3, x_34, (ATerm)ATempty, c_15)));
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      x_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
      z_35 = ATgetArgument(t, 2);
      {
        ATerm x_17 = NULL,m_13 = NULL;
        t = SSLgetAnnotations(a_36);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, x_35, y_35, z_35);
        m_13 = t;
        t = SSLsetAnnotations(m_13, x_17);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = a_36;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm v_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_30;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,p_37 = NULL,q_37 = NULL;
  n_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
      m_37 = ATgetArgument(t, 2);
      {
        ATerm c_19 = NULL,o_13 = NULL;
        t = SSLgetAnnotations(n_37);
        c_19 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, p_37, q_37, m_37);
        o_13 = t;
        t = SSLsetAnnotations(o_13, c_19);
      }
    }
  else
    {
      ATerm b_20 = NULL,x_18 = NULL;
      if(match_cons(t, sym_App_2))
        {
          p_37 = ATgetArgument(t, 0);
          q_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_37);
      b_20 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, p_37, q_37);
      x_18 = t;
      t = SSLsetAnnotations(x_18, b_20);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm x_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(m_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_30;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,g_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      c_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_38;
  if(match_cons(t, sym_StratRule_3))
    {
      d_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
      g_38 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_38), (ATerm) ATmakeAppl(sym_Where_1, g_38)), d_38));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          d_38 = ATgetArgument(t, 0);
          e_38 = ATgetArgument(t, 1);
          g_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_38;
      t = pureterm_0_0(t);
      t = e_38;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, e_38)), (ATerm) ATmakeAppl(sym_Where_1, g_38)), (ATerm) ATmakeAppl(sym_Match_1, d_38)));
    }
  return(t);
}
static ATerm r_8 (ATerm m_61, ATerm n_61, ATerm o_61, ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,b_39 = NULL;
  t = new_0_0(t);
  x_38 = t;
  t = m_61;
  {
    static ATerm n_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm z_30 = ATgetArgument(t, 0);
          if(match_cons(z_30, sym_Var_1))
            {
              if(((w_38 != NULL) && (w_38 != ATgetArgument(z_30, 0))))
                _fail(ATgetArgument(z_30, 0));
              else
                w_38 = ATgetArgument(z_30, 0);
            }
          else
            _fail(t);
          if(((u_38 != NULL) && (u_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_38 = ATgetArgument(t, 1);
          {
            ATerm b_31 = ATgetArgument(t, 2);
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
  t = n_61;
  {
    static ATerm o_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm c_31 = ATgetArgument(t, 0);
          if(match_cons(c_31, sym_Var_1))
            {
              if(((w_38 != NULL) && (w_38 != ATgetArgument(c_31, 0))))
                _fail(ATgetArgument(c_31, 0));
              else
                w_38 = ATgetArgument(c_31, 0);
            }
          else
            _fail(t);
          if(((v_38 != NULL) && (v_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_38 = ATgetArgument(t, 1);
          {
            ATerm d_31 = ATgetArgument(t, 2);
            if(match_cons(d_31, sym_CallT_3))
              {
                if(((t_38 != NULL) && (t_38 != ATgetArgument(d_31, 0))))
                  _fail(ATgetArgument(d_31, 0));
                else
                  t_38 = ATgetArgument(d_31, 0);
                {
                  ATerm g_31 = ATgetArgument(d_31, 1);
                  if(((ATgetType(g_31) != AT_LIST) || !(ATisEmpty(g_31))))
                    _fail(t);
                }
                {
                  ATerm h_31 = ATgetArgument(d_31, 2);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, x_38);
      return(t);
    }
    t = oncetd_1_0(o_3, t);
  }
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, y_38, b_39, (ATerm) ATmakeAppl(sym_Seq_2, o_61, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(t_38), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_38), not_null(v_38), term_h_18))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_38)), (ATerm) ATmakeAppl(sym_Var_1, x_38))))));
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
          ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
          x_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              y_41 = ATgetArgument(t, 0);
              t = y_41;
              if(match_cons(t, sym_Rule_3))
                {
                  u_41 = ATgetArgument(t, 0);
                  v_41 = ATgetArgument(t, 1);
                  w_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = x_41;
              t = r_8(u_41, v_41, w_41, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm c_21 = NULL,f_21 = NULL,p_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  y_41 = ATgetArgument(t, 0);
                  z_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_41);
              c_21 = t;
              t = z_41;
              t = desugarRule_0_0(t);
              f_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, y_41, f_21);
              p_21 = t;
              t = SSLsetAnnotations(p_21, c_21);
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
static ATerm p_3 (ATerm t)
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
  t = repeat_2_0(q_3, _id, t);
  return(t);
}
static ATerm q_3 (ATerm t)
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
            ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,u_43 = NULL;
            a_43 = t;
            if(match_cons(t, sym_CallT_3))
              {
                b_43 = ATgetArgument(t, 0);
                c_43 = ATgetArgument(t, 1);
                u_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = a_43;
            t = n_8(b_43, c_43, u_43, t);
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
                          ATerm x_31 = t;
                          int y_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_31 = t;
                              int a_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_44 = NULL,e_44 = NULL,f_44 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_44;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      e_44 = ATgetArgument(t, 0);
                                      t = e_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          e_44 = ATgetArgument(t, 0);
                                          f_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, e_44, f_44);
                                    }
                                  LocalPopChoice(a_32);
                                }
                              else
                                {
                                  t = z_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(y_31);
                            }
                          else
                            {
                              t = x_31;
                              {
                                ATerm b_32 = t;
                                int c_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(c_32);
                                  }
                                else
                                  {
                                    t = b_32;
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
  t = topdown_1_0(p_3, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_32);
        t = q_46;
        {
          ATerm g_32 = t;
          if((PushChoice() == 0))
            {
              ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,s_21 = NULL;
              m_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  k_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_22);
              j_22 = t;
              t = k_22;
              {
                ATerm h_32 = t;
                int i_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_23 = NULL;
                    t = term_m_19;
                    b_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_m_19, k_22);
                    t = k_9(b_23, k_22, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm j_32 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) j_32) != ATmakeSymbol("m_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = k_22;
                    LocalPopChoice(i_32);
                  }
                else
                  {
                    t = h_32;
                    {
                      ATerm x_22 = NULL,q_23 = NULL,r_21 = NULL,b_24 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          x_22 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(k_22);
                      q_23 = t;
                      t = term_m_19;
                      b_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_m_19, x_22);
                      t = k_9(b_24, x_22, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm k_32 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) k_32) != ATmakeSymbol("m_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, x_22);
                      r_21 = t;
                      t = SSLsetAnnotations(r_21, q_23);
                    }
                  }
              }
              l_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, l_22);
              s_21 = t;
              t = SSLsetAnnotations(s_21, j_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_32;
            }
        }
        t = term_t_21;
      }
    else
      {
        t = d_32;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_t_21;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                r_46 = ATgetArgument(t, 0);
                {
                  ATerm x_46 = NULL;
                  t = r_46;
                  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
                  t = map_1_0(f_4, t);
                  x_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_32, x_46);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    r_46 = ATgetArgument(t, 0);
                    s_46 = ATgetArgument(t, 1);
                    {
                      ATerm q_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, r_46, s_46);
                      t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
                      t = map_1_0(l_4, t);
                      q_48 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_m_32, q_48);
                    }
                  }
                else
                  {
                    ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm n_32 = ATgetArgument(t, 0);
                        ATerm o_32 = ATgetArgument(t, 1);
                        ATerm p_32 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_q_32;
                    e_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_r_32);
                    f_24 = t;
                    t = SSL_printnl(e_24, f_24);
                    t = term_s_32;
                    d_24 = t;
                    t = SSL_exit(d_24);
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
  ATerm y_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_46);
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
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            {
              ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_47 = ATgetArgument(t, 0);
                  f_47 = ATgetArgument(t, 1);
                  g_47 = ATgetArgument(t, 2);
                  h_47 = ATgetArgument(t, 3);
                  t = g_47;
                  t = map_1_0(w_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_47 = ATgetArgument(t, 0);
                      f_47 = ATgetArgument(t, 1);
                      g_47 = ATgetArgument(t, 2);
                      h_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_47;
                  t = map_1_0(x_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm r_47 = NULL;
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_47 = ATgetArgument(t, 0);
          {
            ATerm a_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_32);
      t = r_47;
    }
  else
    {
      t = y_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_47;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm g_48 = NULL;
  ATerm b_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_48 = ATgetArgument(t, 0);
          {
            ATerm f_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_33);
      t = g_48;
    }
  else
    {
      t = b_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_48;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm n_48 = NULL;
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_48);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_48);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm i_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_33);
          }
        else
          {
            t = i_33;
            {
              ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,z_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  v_48 = ATgetArgument(t, 0);
                  w_48 = ATgetArgument(t, 1);
                  x_48 = ATgetArgument(t, 2);
                  z_48 = ATgetArgument(t, 3);
                  t = x_48;
                  t = map_1_0(i_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_48 = ATgetArgument(t, 0);
                      w_48 = ATgetArgument(t, 1);
                      x_48 = ATgetArgument(t, 2);
                      z_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_48;
                  t = map_1_0(k_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm m_49 = NULL;
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_49 = ATgetArgument(t, 0);
          {
            ATerm m_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_33);
      t = m_49;
    }
  else
    {
      t = k_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_49;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm c_50 = NULL;
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_50 = ATgetArgument(t, 0);
          {
            ATerm p_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_33);
      t = c_50;
    }
  else
    {
      t = n_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_50;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm h_50 = NULL;
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_50);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(r_3, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm l_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_52 = ATgetArgument(t, 0);
      t = l_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_52 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_52;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_52), (ATerm) ATempty);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm v_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_52 = ATgetArgument(t, 0);
      t = v_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_52 = ATgetArgument(t, 0);
          {
            ATerm r_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_52;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, v_52);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm i_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_53);
  return(t);
}
static ATerm s_4 (ATerm t)
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
              ATerm n_53 = NULL,o_53 = NULL,t_53 = NULL,y_53 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_53 = ATgetArgument(t, 0);
                  o_53 = ATgetArgument(t, 1);
                  t_53 = ATgetArgument(t, 2);
                  y_53 = ATgetArgument(t, 3);
                  t = t_53;
                  t = map_1_0(z_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_53 = ATgetArgument(t, 0);
                      o_53 = ATgetArgument(t, 1);
                      t_53 = ATgetArgument(t, 2);
                      y_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_53;
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
  ATerm a_55 = NULL;
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_55 = ATgetArgument(t, 0);
          {
            ATerm z_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_33);
      t = a_55;
    }
  else
    {
      t = x_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_55;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm e_56 = NULL;
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_56 = ATgetArgument(t, 0);
          {
            ATerm c_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_34);
      t = e_56;
    }
  else
    {
      t = a_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_56;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm p_56 = NULL;
  p_56 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_56);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_56);
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
              ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_56 = ATgetArgument(t, 0);
                  t_56 = ATgetArgument(t, 1);
                  u_56 = ATgetArgument(t, 2);
                  v_56 = ATgetArgument(t, 3);
                  t = u_56;
                  t = map_1_0(g_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_56 = ATgetArgument(t, 0);
                      t_56 = ATgetArgument(t, 1);
                      u_56 = ATgetArgument(t, 2);
                      v_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_56;
                  t = map_1_0(h_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm e_57 = NULL;
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_57 = ATgetArgument(t, 0);
          {
            ATerm l_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_34);
      t = e_57;
    }
  else
    {
      t = j_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_57;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm z_57 = NULL;
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_57 = ATgetArgument(t, 0);
          {
            ATerm o_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_34);
      t = z_57;
    }
  else
    {
      t = m_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_57;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_58 = NULL,v_24 = NULL,x_21 = NULL,d_25 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            p_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_58);
        v_24 = t;
        t = term_m_19;
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_19, p_58);
        t = k_9(d_25, p_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm r_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_34) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, p_58);
        x_21 = t;
        t = SSLsetAnnotations(x_21, v_24);
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        {
          ATerm q_25 = NULL;
          t = term_m_19;
          q_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_19, i_58);
          t = k_9(q_25, i_58, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm s_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_34) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = i_58;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, i_58);
  return(t);
}
static ATerm s_8 (ATerm y_130 (ATerm), ATerm d_75, ATerm a_75, ATerm b_75, ATerm k_75, ATerm o_75, ATerm p_75, ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,w_51 = NULL,x_51 = NULL,c_52 = NULL,e_52 = NULL,f_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_75, term_w_19);
  {
    ATerm z_34 = t;
    if((PushChoice() == 0))
      {
        ATerm g_52 = NULL;
        if(match_cons(t, sym__2))
          {
            g_52 = ATgetArgument(t, 0);
            if((g_52 != ATgetArgument(t, 1)))
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
        t = z_34;
      }
  }
  t = term_a_35;
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_35, d_75);
  t = v_9(f_52, d_75, t);
  j_51 = t;
  t = term_b_35;
  e_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_35, d_75);
  t = v_9(e_52, d_75, t);
  k_51 = t;
  t = new_0_0(t);
  l_51 = t;
  t = a_75;
  t = map_1_0(m_4, t);
  m_51 = t;
  t = b_75;
  t = map_1_0(n_4, t);
  n_51 = t;
  t = new_0_0(t);
  o_51 = t;
  t = k_75;
  t = dummify_0_0(t);
  s_51 = t;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_51;
        if((k_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, o_51);
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = s_51;
      }
  }
  r_51 = t;
  t = s_51;
  t = free_vars_3_0(r_4, s_4, tboundin_3_0, t);
  t = map_1_0(d_5, t);
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_75, p_75);
  t = free_vars_3_0(e_5, f_5, tboundin_3_0, t);
  t = filter_1_0(j_5, t);
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_51, u_51);
  t = diff_0_0(t);
  w_51 = t;
  t = new_0_0(t);
  x_51 = t;
  t = d_75;
  t = y_130(t);
  c_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, c_52, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_h_20, (ATerm) ATinsert(CheckATermList(w_51), (ATerm) ATmakeAppl(sym_Str_1, x_51)))), s_51)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, k_51, a_75, b_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_h_20, (ATerm) ATinsert(CheckATermList(w_51), (ATerm) ATmakeAppl(sym_Str_1, x_51)))), k_75)), o_75, (ATerm) ATmakeAppl(sym_Seq_2, term_k_35, p_75)))), (ATerm) ATmakeAppl(sym_RDefT_4, j_51, a_75, b_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_51), k_75), (ATerm)ATmakeAppl(sym_Var_1, l_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_75)))), r_51), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_51), m_51, n_51), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_h_35), (ATerm) ATmakeAppl(sym_Var_1, o_51)))))), (ATerm) ATmakeAppl(sym_Var_1, l_51)))))), (ATerm) ATmakeAppl(sym_RDefT_4, d_75, a_75, b_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_51), k_75), o_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_75)))), r_51), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_h_20, (ATerm) ATinsert(CheckATermList(w_51), (ATerm) ATmakeAppl(sym_Str_1, x_51)))), term_e_35))), p_75)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_26 = NULL,q_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
      m_26 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          q_26 = ATgetArgument(t, 0);
          a_27 = ATgetArgument(t, 1);
          b_27 = ATgetArgument(t, 2);
          c_27 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = c_27;
      if(match_cons(t, sym_Rule_3))
        {
          d_27 = ATgetArgument(t, 0);
          e_27 = ATgetArgument(t, 1);
          f_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_26;
      t = s_8(n_5, q_26, a_27, b_27, d_27, e_27, f_27, t);
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      t = ExtendSplitDynamicRuleUndefined_1_0(p_5, t);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_27))));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_28))));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_27;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_28 = ATgetFirst((ATermList) t);
      i_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,q_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      if(match_cons(r_35, sym__2))
        {
          m_28 = ATgetArgument(r_35, 0);
          n_28 = ATgetArgument(r_35, 1);
        }
      else
        _fail(t);
      {
        ATerm s_35 = ATgetArgument(t, 1);
        if(match_cons(s_35, sym__2))
          {
            o_28 = ATgetArgument(s_35, 0);
            q_28 = ATgetArgument(s_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_28), m_28), (ATerm) ATinsert(CheckATermList(q_28), n_28));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
      r_29 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          u_29 = ATgetArgument(t, 0);
          v_29 = ATgetArgument(t, 1);
          w_29 = ATgetArgument(t, 2);
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
      t = r_29;
      t = s_8(w_5, u_29, v_29, w_29, g_30, h_30, i_30, t);
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
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
  t = term_h_27;
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
  ATerm t_30 = NULL,u_30 = NULL,e_31 = NULL,f_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(match_cons(e_36, sym__2))
        {
          t_30 = ATgetArgument(e_36, 0);
          u_30 = ATgetArgument(e_36, 1);
        }
      else
        _fail(t);
      {
        ATerm g_36 = ATgetArgument(t, 1);
        if(match_cons(g_36, sym__2))
          {
            e_31 = ATgetArgument(g_36, 0);
            f_31 = ATgetArgument(g_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_31), t_30), (ATerm) ATinsert(CheckATermList(f_31), u_30));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = SplitDynamicRule_1_0(c_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm u_67 = NULL;
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_67))));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_27;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_67 = ATgetFirst((ATermList) t);
      w_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_67, w_67);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      if(match_cons(j_36, sym__2))
        {
          x_67 = ATgetArgument(j_36, 0);
          y_67 = ATgetArgument(j_36, 1);
        }
      else
        _fail(t);
      {
        ATerm k_36 = ATgetArgument(t, 1);
        if(match_cons(k_36, sym__2))
          {
            z_67 = ATgetArgument(k_36, 0);
            a_68 = ATgetArgument(k_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_67), x_67), (ATerm) ATinsert(CheckATermList(a_68), y_67));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = SplitDynamicRule_1_0(i_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm d_68 = NULL;
  d_68 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_68))));
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_27;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_68 = ATgetFirst((ATermList) t);
      f_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_68, f_68);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,j_68 = NULL,k_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      if(match_cons(q_36, sym__2))
        {
          g_68 = ATgetArgument(q_36, 0);
          h_68 = ATgetArgument(q_36, 1);
        }
      else
        _fail(t);
      {
        ATerm r_36 = ATgetArgument(t, 1);
        if(match_cons(r_36, sym__2))
          {
            j_68 = ATgetArgument(r_36, 0);
            k_68 = ATgetArgument(r_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_68), g_68), (ATerm) ATinsert(CheckATermList(k_68), h_68));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL;
  r_67 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      s_67 = ATgetArgument(t, 0);
      {
        ATerm f_26 = NULL,g_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,z_21 = NULL;
        t = s_67;
        t = map_1_0(k_5, t);
        t = genzip_4_0(q_5, t_5, u_5, _id, t);
        l_26 = t;
        if(match_cons(t, sym__2))
          {
            g_26 = ATgetArgument(t, 0);
            j_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_26);
        f_26 = t;
        t = j_26;
        t = concat_0_0(t);
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_26, k_26);
        z_21 = t;
        t = SSLsetAnnotations(z_21, f_26);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          s_67 = ATgetArgument(t, 0);
          {
            ATerm g_29 = NULL,h_29 = NULL,k_29 = NULL,l_29 = NULL,q_29 = NULL,a_22 = NULL;
            t = s_67;
            t = map_1_0(v_5, t);
            t = genzip_4_0(y_5, z_5, a_6, _id, t);
            q_29 = t;
            if(match_cons(t, sym__2))
              {
                h_29 = ATgetArgument(t, 0);
                k_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_29);
            g_29 = t;
            t = k_29;
            t = concat_0_0(t);
            l_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_29, l_29);
            a_22 = t;
            t = SSLsetAnnotations(a_22, g_29);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              s_67 = ATgetArgument(t, 0);
              t = s_67;
              t = map_1_0(b_6, t);
              t = genzip_4_0(d_6, f_6, g_6, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  s_67 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_67;
              t = map_1_0(h_6, t);
              t = genzip_4_0(j_6, k_6, l_6, _id, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  static ATerm p_68 (ATerm t)
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
        t = SRTS_one(p_68, t);
      }
    return(t);
  }
  t = p_68(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm c_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
  g_69 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      f_69 = ATgetArgument(t, 0);
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_69;
            c_69 = t;
            t = g_69;
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            t = g_69;
            c_69 = t;
            t = g_69;
          }
      }
    }
  else
    {
      t = g_69;
      c_69 = t;
      t = g_69;
    }
  t = term_x_36;
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_69, term_x_36);
  t = l_9(r_6, c_69, e_69, t);
  t = g_69;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  static ATerm h_69 (ATerm t)
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
            ATerm x_68 = NULL,y_68 = NULL,b_69 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                x_68 = ATgetArgument(t, 0);
                y_68 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_68, y_68);
            {
              static ATerm o_6 (ATerm t)
              {
                t = x_68;
                t = map_1_0(q_6, t);
                t = y_68;
                t = h_69(t);
                if(((b_69 != NULL) && (b_69 != t)))
                  _fail(t);
                else
                  b_69 = t;
                return(t);
              }
              t = scope_2_0(n_6, o_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_68, not_null(b_69));
          }
        }
      return(t);
    }
    t = oncetd_1_0(m_6, t);
    return(t);
  }
  t = h_69(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm r_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_69);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_37);
    }
  else
    {
      t = a_37;
      {
        ATerm d_37 = t;
        int e_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_37);
          }
        else
          {
            t = d_37;
            {
              ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_69 = ATgetArgument(t, 0);
                  u_69 = ATgetArgument(t, 1);
                  v_69 = ATgetArgument(t, 2);
                  w_69 = ATgetArgument(t, 3);
                  t = v_69;
                  t = map_1_0(y_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_69 = ATgetArgument(t, 0);
                      u_69 = ATgetArgument(t, 1);
                      v_69 = ATgetArgument(t, 2);
                      w_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_69;
                  t = map_1_0(z_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm w_70 = NULL;
  ATerm f_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_70 = ATgetArgument(t, 0);
          {
            ATerm i_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_37);
      t = w_70;
    }
  else
    {
      t = f_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_70;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm b_73 = NULL;
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_73 = ATgetArgument(t, 0);
          {
            ATerm l_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_37);
      t = b_73;
    }
  else
    {
      t = j_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_73;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm b_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_74 = ATgetArgument(t, 0);
      t = b_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_74 = ATgetArgument(t, 0);
          {
            ATerm o_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_74;
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm f_76 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_76 = ATgetArgument(t, 0);
      t = f_76;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_76 = ATgetArgument(t, 0);
          {
            ATerm r_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_76;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm j_76 = NULL;
  if(match_cons(t, sym__2))
    {
      j_76 = ATgetArgument(t, 0);
      if((j_76 != ATgetArgument(t, 1)))
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
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  q_69 = t;
  t = free_vars_3_0(t_6, u_6, tboundin_3_0, t);
  o_69 = t;
  t = q_69;
  {
    ATerm s_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_73 = NULL;
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm y_37 = ATgetArgument(t, 0);
                ATerm z_37 = ATgetArgument(t, 1);
                t_73 = ATgetArgument(t, 2);
                {
                  ATerm f_38 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_37);
            t = t_73;
            t = map_1_0(a_7, t);
          }
        else
          {
            t = v_37;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm h_38 = ATgetArgument(t, 0);
                ATerm i_38 = ATgetArgument(t, 1);
                t_73 = ATgetArgument(t, 2);
                {
                  ATerm j_38 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = t_73;
            t = map_1_0(b_7, t);
          }
        LocalPopChoice(u_37);
      }
    else
      {
        t = s_37;
        t = (ATerm) ATempty;
      }
  }
  p_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_69, p_69);
  t = z_8(g_7, o_69, p_69, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm p_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
  t_76 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      s_76 = ATgetArgument(t, 0);
      {
        ATerm k_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_76;
            p_76 = t;
            t = t_76;
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
            t = t_76;
            p_76 = t;
            t = t_76;
          }
      }
    }
  else
    {
      t = t_76;
      p_76 = t;
      t = t_76;
    }
  t = term_x_36;
  r_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_76, term_x_36);
  t = l_9(k_7, p_76, r_76, t);
  t = t_76;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm u_8 (ATerm n_73, ATerm m_73, ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL;
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
            if(((m_76 != NULL) && (m_76 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              m_76 = ATgetArgument(t, 0);
            if(((l_76 != NULL) && (l_76 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, m_76);
        return(t);
      }
      t = split_dynamic_rule_1_0(l_7, t);
    }
    if(((n_76 != NULL) && (n_76 != t)))
      _fail(t);
    else
      n_76 = t;
    return(t);
  }
  t = scope_2_0(h_7, i_7, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_76)), not_null(n_76)), m_73);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  static ATerm u_76 (ATerm t)
  {
    ATerm n_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_97(t);
        t = u_76(t);
        LocalPopChoice(p_38);
      }
    else
      {
        t = n_38;
        t = s_97(t);
      }
    return(t);
  }
  t = u_76(t);
  return(t);
}
ATerm listtd_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  static ATerm i_77 (ATerm t)
  {
    ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
    t = n_106(t);
    f_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_77;
      }
    else
      {
        ATerm w_31 = NULL,l_32 = NULL,e_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_77 = ATgetFirst((ATermList) t);
            h_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_77);
        w_31 = t;
        t = h_77;
        t = i_77(t);
        l_32 = t;
        t = (ATerm) ATinsert(CheckATermList(l_32), g_77);
        e_22 = t;
        t = SSLsetAnnotations(e_22, w_31);
      }
    return(t);
  }
  t = i_77(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL,p_77 = NULL,q_77 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      p_77 = ATgetArgument(t, 0);
      q_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_77;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_77 = ATgetFirst((ATermList) t);
      n_77 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_r_38, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, n_77, q_77)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_77))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_77;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL;
  o_81 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_81 = ATgetArgument(t, 0);
      h_81 = ATgetArgument(t, 1);
      {
        ATerm v_32 = NULL,c_33 = NULL,d_33 = NULL,g_22 = NULL;
        t = SSLgetAnnotations(o_81);
        v_32 = t;
        t = p_81;
        t = n_130(t);
        c_33 = t;
        t = h_81;
        t = l_130(t);
        d_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, c_33, d_33);
        g_22 = t;
        t = SSLsetAnnotations(g_22, v_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          p_81 = ATgetArgument(t, 0);
          h_81 = ATgetArgument(t, 1);
          i_81 = ATgetArgument(t, 2);
          n_81 = ATgetArgument(t, 3);
          {
            ATerm w_33 = NULL,h_34 = NULL,i_34 = NULL,u_34 = NULL,v_34 = NULL,h_22 = NULL;
            t = SSLgetAnnotations(o_81);
            w_33 = t;
            t = p_81;
            t = n_130(t);
            h_34 = t;
            t = h_81;
            t = n_130(t);
            i_34 = t;
            t = i_81;
            t = n_130(t);
            u_34 = t;
            t = n_81;
            t = l_130(t);
            v_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, h_34, i_34, u_34, v_34);
            h_22 = t;
            t = SSLsetAnnotations(h_22, w_33);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              p_81 = ATgetArgument(t, 0);
              h_81 = ATgetArgument(t, 1);
              i_81 = ATgetArgument(t, 2);
              n_81 = ATgetArgument(t, 3);
              {
                ATerm v_35 = NULL,f_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,i_22 = NULL;
                t = SSLgetAnnotations(o_81);
                v_35 = t;
                t = p_81;
                t = n_130(t);
                f_36 = t;
                t = h_81;
                t = n_130(t);
                l_36 = t;
                t = i_81;
                t = n_130(t);
                m_36 = t;
                t = n_81;
                t = l_130(t);
                n_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, f_36, l_36, m_36, n_36);
                i_22 = t;
                t = SSLsetAnnotations(i_22, v_35);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_81 = ATgetArgument(t, 0);
                  {
                    ATerm b_37 = NULL,g_37 = NULL,n_22 = NULL;
                    t = SSLgetAnnotations(o_81);
                    b_37 = t;
                    t = p_81;
                    t = l_130(t);
                    g_37 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_37);
                    n_22 = t;
                    t = SSLsetAnnotations(n_22, b_37);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      p_81 = ATgetArgument(t, 0);
                      {
                        ATerm t_37 = NULL,x_37 = NULL,o_22 = NULL;
                        t = SSLgetAnnotations(o_81);
                        t_37 = t;
                        t = p_81;
                        t = l_130(t);
                        x_37 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_37);
                        o_22 = t;
                        t = SSLsetAnnotations(o_22, t_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          p_81 = ATgetArgument(t, 0);
                          {
                            ATerm m_38 = NULL,o_38 = NULL,p_22 = NULL;
                            t = SSLgetAnnotations(o_81);
                            m_38 = t;
                            t = p_81;
                            t = l_130(t);
                            o_38 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, o_38);
                            p_22 = t;
                            t = SSLsetAnnotations(p_22, m_38);
                          }
                        }
                      else
                        {
                          ATerm f_39 = NULL,l_39 = NULL,q_22 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              p_81 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(o_81);
                          f_39 = t;
                          t = p_81;
                          t = l_130(t);
                          l_39 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, l_39);
                          q_22 = t;
                          t = SSLsetAnnotations(q_22, f_39);
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
  ATerm t_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_82);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm s_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_38);
    }
  else
    {
      t = s_38;
      {
        ATerm a_39 = t;
        int c_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_39);
          }
        else
          {
            t = a_39;
            {
              ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL,c_83 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_82 = ATgetArgument(t, 0);
                  z_82 = ATgetArgument(t, 1);
                  a_83 = ATgetArgument(t, 2);
                  c_83 = ATgetArgument(t, 3);
                  t = a_83;
                  t = map_1_0(o_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_82 = ATgetArgument(t, 0);
                      z_82 = ATgetArgument(t, 1);
                      a_83 = ATgetArgument(t, 2);
                      c_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_83;
                  t = map_1_0(q_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm o_83 = NULL;
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_83 = ATgetArgument(t, 0);
          {
            ATerm g_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_39);
      t = o_83;
    }
  else
    {
      t = d_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_83;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm b_84 = NULL;
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_84 = ATgetArgument(t, 0);
          {
            ATerm o_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_39);
      t = b_84;
    }
  else
    {
      t = m_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_84;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm f_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_84);
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
              ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL,o_84 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_84 = ATgetArgument(t, 0);
                  m_84 = ATgetArgument(t, 1);
                  n_84 = ATgetArgument(t, 2);
                  o_84 = ATgetArgument(t, 3);
                  t = n_84;
                  t = map_1_0(t_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_84 = ATgetArgument(t, 0);
                      m_84 = ATgetArgument(t, 1);
                      n_84 = ATgetArgument(t, 2);
                      o_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_84;
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
  ATerm y_84 = NULL;
  ATerm u_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_84 = ATgetArgument(t, 0);
          {
            ATerm x_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_39);
      t = y_84;
    }
  else
    {
      t = u_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_84;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm n_85 = NULL;
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_85 = ATgetArgument(t, 0);
          {
            ATerm a_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_39);
      t = n_85;
    }
  else
    {
      t = y_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_85;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm t_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_85);
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
              ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_85 = ATgetArgument(t, 0);
                  a_86 = ATgetArgument(t, 1);
                  b_86 = ATgetArgument(t, 2);
                  c_86 = ATgetArgument(t, 3);
                  t = b_86;
                  t = map_1_0(x_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_85 = ATgetArgument(t, 0);
                      a_86 = ATgetArgument(t, 1);
                      b_86 = ATgetArgument(t, 2);
                      c_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_86;
                  t = map_1_0(z_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm l_86 = NULL;
  ATerm f_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_86 = ATgetArgument(t, 0);
          {
            ATerm i_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_40);
      t = l_86;
    }
  else
    {
      t = f_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_86;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm y_86 = NULL;
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_86 = ATgetArgument(t, 0);
          {
            ATerm m_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_40);
      t = y_86;
    }
  else
    {
      t = k_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_86;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm e_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_87);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm n_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_40);
    }
  else
    {
      t = n_40;
      {
        ATerm r_40 = t;
        int s_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_40);
          }
        else
          {
            t = r_40;
            {
              ATerm g_87 = NULL,h_87 = NULL,k_87 = NULL,l_87 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_87 = ATgetArgument(t, 0);
                  h_87 = ATgetArgument(t, 1);
                  k_87 = ATgetArgument(t, 2);
                  l_87 = ATgetArgument(t, 3);
                  t = k_87;
                  t = map_1_0(c_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_87 = ATgetArgument(t, 0);
                      h_87 = ATgetArgument(t, 1);
                      k_87 = ATgetArgument(t, 2);
                      l_87 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_87;
                  t = map_1_0(d_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm u_87 = NULL;
  ATerm t_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_87 = ATgetArgument(t, 0);
          {
            ATerm a_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_40);
      t = u_87;
    }
  else
    {
      t = t_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_87;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm d_88 = NULL;
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_88 = ATgetArgument(t, 0);
          {
            ATerm d_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_41);
      t = d_88;
    }
  else
    {
      t = b_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_88;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm r_82 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      r_82 = ATgetArgument(t, 0);
      t = r_82;
      t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          r_82 = ATgetArgument(t, 0);
          t = r_82;
          t = free_vars_3_0(r_7, s_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              r_82 = ATgetArgument(t, 0);
              t = r_82;
              t = free_vars_3_0(v_7, w_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  r_82 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_82;
              t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm f_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_89);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm f_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_41);
    }
  else
    {
      t = f_41;
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
              ATerm h_89 = NULL,i_89 = NULL,m_89 = NULL,n_89 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_89 = ATgetArgument(t, 0);
                  i_89 = ATgetArgument(t, 1);
                  m_89 = ATgetArgument(t, 2);
                  n_89 = ATgetArgument(t, 3);
                  t = m_89;
                  t = map_1_0(h_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_89 = ATgetArgument(t, 0);
                      i_89 = ATgetArgument(t, 1);
                      m_89 = ATgetArgument(t, 2);
                      n_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_89;
                  t = map_1_0(j_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm e_90 = NULL;
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_90 = ATgetArgument(t, 0);
          {
            ATerm n_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_41);
      t = e_90;
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_90;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm v_90 = NULL;
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_90 = ATgetArgument(t, 0);
          {
            ATerm q_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_41);
      t = v_90;
    }
  else
    {
      t = o_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_90;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_88 = NULL,a_89 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_89 = ATgetArgument(t, 0);
      t = a_89;
      if(match_cons(t, sym_Rule_3))
        {
          r_88 = ATgetArgument(t, 0);
          {
            ATerm r_41 = ATgetArgument(t, 1);
          }
          {
            ATerm s_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_88;
      t = free_vars_3_0(f_8, g_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_89 = ATgetArgument(t, 0);
          {
            ATerm t_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_89;
    }
  return(t);
}
static ATerm z_8 (ATerm o_109 (ATerm), ATerm p_29, ATerm o_29, ATerm t)
{
  static ATerm z_91 (ATerm t)
  {
    ATerm p_91 = NULL,v_91 = NULL,w_91 = NULL;
    p_91 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_91 = ATgetFirst((ATermList) t);
            w_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_42 = t;
          int b_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_91;
              {
                static ATerm k_8 (ATerm t)
                {
                  t = o_29;
                  return(t);
                }
                t = a_9(o_109, k_8, v_91, w_91, t);
              }
              t = z_91(t);
              LocalPopChoice(b_42);
            }
          else
            {
              t = a_42;
              {
                ATerm s_39 = NULL,v_39 = NULL,d_23 = NULL;
                t = SSLgetAnnotations(p_91);
                s_39 = t;
                t = w_91;
                t = z_91(t);
                v_39 = t;
                t = (ATerm) ATinsert(CheckATermList(v_39), v_91);
                d_23 = t;
                t = SSLsetAnnotations(d_23, s_39);
              }
            }
        }
      }
    return(t);
  }
  t = p_29;
  t = z_91(t);
  return(t);
}
static ATerm a_9 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_29, ATerm s_29, ATerm t)
{
  t = s_109(t);
  {
    static ATerm m_8 (ATerm t)
    {
      ATerm f_92 = NULL;
      f_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_29, f_92);
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
  static ATerm e_93 (ATerm t)
  {
    ATerm x_92 = NULL,y_92 = NULL,b_93 = NULL;
    x_92 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_92;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_92 = ATgetFirst((ATermList) t);
            b_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_42 = t;
          int f_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_92;
              {
                static ATerm o_8 (ATerm t)
                {
                  t = m_29;
                  return(t);
                }
                t = a_9(j_109, o_8, y_92, b_93, t);
              }
              t = e_93(t);
              LocalPopChoice(f_42);
            }
          else
            {
              t = c_42;
              {
                ATerm g_40 = NULL,j_40 = NULL,f_23 = NULL;
                t = SSLgetAnnotations(x_92);
                g_40 = t;
                t = b_93;
                t = e_93(t);
                j_40 = t;
                t = (ATerm) ATinsert(CheckATermList(j_40), y_92);
                f_23 = t;
                t = SSLsetAnnotations(f_23, g_40);
              }
            }
        }
      }
    return(t);
  }
  t = n_29;
  t = e_93(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t)
{
  static ATerm n_93 (ATerm t)
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
          ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,j_23 = NULL;
          t = i_107(t);
          l_93 = t;
          if(match_cons(t, sym__2))
            {
              h_93 = ATgetArgument(t, 0);
              i_93 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_93);
          g_93 = t;
          t = h_93;
          t = k_107(t);
          j_93 = t;
          t = i_93;
          t = n_93(t);
          k_93 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_93, k_93);
          j_23 = t;
          t = SSLsetAnnotations(j_23, g_93);
          t = j_107(t);
        }
      }
    return(t);
  }
  t = n_93(t);
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
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL,c_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_42 = ATgetArgument(t, 0);
      if(((ATgetType(k_42) == AT_LIST) && !(ATisEmpty(k_42))))
        {
          x_93 = ATgetFirst((ATermList) k_42);
          y_93 = (ATerm) ATgetNext((ATermList) k_42);
        }
      else
        _fail(t);
      {
        ATerm l_42 = ATgetArgument(t, 1);
        if(((ATgetType(l_42) == AT_LIST) && !(ATisEmpty(l_42))))
          {
            z_93 = ATgetFirst((ATermList) l_42);
            c_94 = (ATerm) ATgetNext((ATermList) l_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_93, z_93), (ATerm) ATmakeAppl(sym__2, y_93, c_94));
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL;
  if(match_cons(t, sym__2))
    {
      d_94 = ATgetArgument(t, 0);
      e_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_94), d_94);
  return(t);
}
static ATerm g_9 (ATerm i_641, ATerm n_641, ATerm m_60, ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL;
  t = SSL_explode_term(n_641);
  if(match_cons(t, sym__2))
    {
      q_93 = ATgetArgument(t, 0);
      s_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_641);
  if(match_cons(t, sym__2))
    {
      if((q_93 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      r_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_93, s_93);
  t = genzip_4_0(p_8, q_8, t_8, _id, t);
  t_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_93, m_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t)
{
  static ATerm g_94 (ATerm t)
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
        t = g_94(t);
      }
    return(t);
  }
  t = g_94(t);
  return(t);
}
ATerm for_3_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t)
{
  t = l_98(t);
  t = while_not_2_0(m_98, n_98, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm n_94 = NULL;
  n_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_94);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL,s_94 = NULL,p_23 = NULL;
  s_94 = t;
  if(match_cons(t, sym__2))
    {
      p_94 = ATgetArgument(t, 0);
      q_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_94);
  o_94 = t;
  t = q_94;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_94, q_94);
  p_23 = t;
  t = SSLsetAnnotations(p_23, o_94);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm y_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL;
  y_95 = t;
  if(match_cons(t, sym__2))
    {
      a_96 = ATgetArgument(t, 0);
      b_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_96 = ATgetFirst((ATermList) t);
      d_96 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_42 = t;
        int q_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_96(a_96, b_96, y_95, t);
            LocalPopChoice(q_42);
          }
        else
          {
            t = p_42;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_96), c_96), d_96);
          }
      }
    }
  else
    {
      t = q_96(a_96, b_96, y_95, t);
    }
  return(t);
}
static ATerm q_96 (ATerm t_94, ATerm u_94, ATerm v_94, ATerm t)
{
  ATerm w_94 = NULL,b_95 = NULL,s_23 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL;
  t = SSLgetAnnotations(v_94);
  w_94 = t;
  t = u_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_95 = ATgetFirst((ATermList) t);
      p_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_95;
  if(match_cons(t, sym__2))
    {
      n_95 = ATgetArgument(t, 0);
      o_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_95;
        if((n_95 != t))
          {
            _fail(t);
          }
        t = p_95;
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        t = u_94;
        t = g_9(n_95, o_95, p_95, t);
      }
  }
  b_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_94, b_95);
  s_23 = t;
  t = SSLsetAnnotations(s_23, w_94);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm p_96 = NULL;
  if(match_cons(t, sym__2))
    {
      p_96 = ATgetArgument(t, 0);
      if((p_96 != ATgetArgument(t, 1)))
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
      t = for_3_0(v_8, x_8, c_9, t);
      LocalPopChoice(u_42);
    }
  else
    {
      t = t_42;
      {
        ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL;
        j_96 = t;
        if(match_cons(t, sym__2))
          {
            k_96 = ATgetArgument(t, 0);
            l_96 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_96;
        t = b_9(d_9, k_96, l_96, t);
      }
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  if(match_cons(t, sym__2))
    {
      u_40 = ATgetArgument(t, 0);
      v_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8(o_9, u_40, v_40, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm w_40 = NULL;
  if(match_cons(t, sym__2))
    {
      w_40 = ATgetArgument(t, 0);
      if((w_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm e_41 = NULL,g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      e_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8(j_10, e_41, g_41, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm h_41 = NULL;
  if(match_cons(t, sym__2))
    {
      h_41 = ATgetArgument(t, 0);
      if((h_41 != ATgetArgument(t, 1)))
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
  static ATerm l_97 (ATerm t)
  {
    ATerm v_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_127(t);
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
              ATerm s_96 = NULL,v_96 = NULL,o_40 = NULL,q_40 = NULL;
              s_96 = t;
              t = z_127(t);
              v_96 = t;
              t = s_96;
              {
                static ATerm f_9 (ATerm t)
                {
                  ATerm x_96 = NULL;
                  t = l_97(t);
                  x_96 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_96, v_96);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_128(f_9, l_97, i_9, t);
              }
              q_40 = t;
              t = SSL_explode_term(q_40);
              if(match_cons(t, sym__2))
                {
                  ATerm d_43 = ATgetArgument(t, 0);
                  o_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_40;
              t = foldr_3_0(j_9, n_9, _id, t);
              LocalPopChoice(z_42);
            }
          else
            {
              t = y_42;
              {
                ATerm y_40 = NULL,z_40 = NULL;
                z_40 = t;
                t = SSL_explode_term(z_40);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_43 = ATgetArgument(t, 0);
                    y_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_40;
                t = foldr_3_0(z_9, c_10, l_97, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_97(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  static ATerm k_10 (ATerm t)
  {
    t = bottomup_1_0(s_98, t);
    return(t);
  }
  t = SRTS_all(k_10, t);
  t = s_98(t);
  return(t);
}
static ATerm k_9 (ATerm g_54, ATerm h_54, ATerm t)
{
  ATerm m_97 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_54, h_54);
  t = d_10(g_54, h_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_97 = ATgetFirst((ATermList) t);
      {
        ATerm f_43 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_97;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL;
  u_98 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_42 = NULL;
        t = term_i_43;
        m_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_43, u_98);
        t = k_9(m_42, u_98, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm j_43 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_43) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, v_98, (ATerm) ATempty);
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        {
          ATerm w_42 = NULL;
          t = term_i_43;
          w_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_43, u_98);
          t = k_9(w_42, u_98, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm l_43 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_43) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, v_98, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  static ATerm z_98 (ATerm t)
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_100(t);
        LocalPopChoice(o_43);
      }
    else
      {
        t = n_43;
        t = SRTS_all(z_98, t);
      }
    return(t);
  }
  t = z_98(t);
  return(t);
}
static ATerm l_9 (ATerm m_118 (ATerm), ATerm r_43, ATerm p_43, ATerm t)
{
  ATerm e_99 = NULL,h_99 = NULL,k_99 = NULL,l_99 = NULL,o_99 = NULL,q_99 = NULL,r_99 = NULL,x_99 = NULL;
  l_99 = t;
  t = m_118(t);
  e_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_99, r_43, p_43);
  t = e_10(e_99, r_43, p_43, t);
  {
    ATerm q_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_99 = NULL;
        t = term_t_43;
        y_99 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_99, term_t_43);
        t = d_10(e_99, y_99, t);
        LocalPopChoice(s_43);
      }
    else
      {
        t = q_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_99 = ATgetFirst((ATermList) t);
      k_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_99, term_t_43, (ATerm) ATinsert(CheckATermList(k_99), (ATerm) ATinsert(CheckATermList(h_99), r_43)));
  t = lookup_table_0_1(e_99, t);
  x_99 = t;
  t = term_t_43;
  o_99 = t;
  t = (ATerm) ATinsert(CheckATermList(k_99), (ATerm) ATinsert(CheckATermList(h_99), r_43));
  q_99 = t;
  t = x_99;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(o_99, q_99, r_99, t);
  t = l_99;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_i_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_i_43;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm e_100 = NULL,i_100 = NULL,m_100 = NULL,n_100 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      i_100 = ATgetArgument(t, 0);
      m_100 = ATgetArgument(t, 1);
      e_100 = ATgetArgument(t, 2);
      {
        ATerm t_100 = NULL,u_100 = NULL;
        t = m_100;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, i_100);
        t_100 = t;
        t = term_w_43;
        u_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_100), term_w_43);
        t = l_9(l_10, t_100, u_100, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, i_100, (ATerm)ATempty, e_100);
      }
    }
  else
    {
      ATerm x_100 = NULL,y_100 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          i_100 = ATgetArgument(t, 0);
          m_100 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_100;
      if(match_cons(t, sym_ConstType_1))
        {
          n_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, i_100);
      x_100 = t;
      t = term_y_43;
      y_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_100), term_y_43);
      t = l_9(o_10, x_100, y_100, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, i_100, (ATerm) ATmakeAppl(sym_ConstType_1, n_100));
    }
  return(t);
}
static ATerm m_9 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL;
  d_101 = t;
  {
    ATerm z_43 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
        t = d_10(a_54, b_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_44 = ATgetFirst((ATermList) t);
            c_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_44);
        {
          ATerm e_101 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, a_54, b_54, c_101);
          t = lookup_table_0_1(a_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_10(b_54, c_101, e_101, t);
          t = (ATerm) ATmakeAppl(sym__3, a_54, b_54, c_101);
        }
      }
    else
      {
        t = z_43;
        {
          ATerm g_101 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
          t = lookup_table_0_1(a_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_10(b_54, g_101, t);
          t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
        }
      }
  }
  t = d_101;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_118 (ATerm), ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL,p_101 = NULL,q_101 = NULL;
  l_101 = t;
  t = j_118(t);
  k_101 = t;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_101 = NULL;
        t = term_t_43;
        r_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_101, term_t_43);
        t = d_10(k_101, r_101, t);
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_101 = ATgetFirst((ATermList) t);
      i_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_101, term_t_43, i_101);
  t = lookup_table_0_1(k_101, t);
  q_101 = t;
  t = term_t_43;
  m_101 = t;
  t = q_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(m_101, i_101, p_101, t);
  t = j_101;
  {
    static ATerm p_10 (ATerm t)
    {
      ATerm s_101 = NULL;
      s_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_101, s_101);
      t = m_9(k_101, s_101, t);
      return(t);
    }
    t = map_1_0(p_10, t);
  }
  t = l_101;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_97(t);
      t = o_97(t);
      LocalPopChoice(k_44);
    }
  else
    {
      t = j_44;
      t = o_97(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_118 (ATerm), ATerm t)
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL;
  v_101 = t;
  t = i_118(t);
  u_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_101, term_t_43);
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_102 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_44 = ATgetArgument(t, 0);
            ATerm o_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_43;
        e_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_101, term_t_43);
        t = d_10(u_101, e_102, t);
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = (ATerm) ATempty;
      }
  }
  w_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_101, term_t_43, (ATerm) ATinsert(CheckATermList(w_101), (ATerm) ATempty));
  t = lookup_table_0_1(u_101, t);
  a_102 = t;
  t = term_t_43;
  x_101 = t;
  t = (ATerm) ATinsert(CheckATermList(w_101), (ATerm) ATempty);
  y_101 = t;
  t = a_102;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(x_101, y_101, z_101, t);
  t = v_101;
  return(t);
}
ATerm scope_2_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t)
{
  static ATerm t_10 (ATerm t)
  {
    t = end_scope_1_0(k_118, t);
    return(t);
  }
  t = begin_scope_1_0(k_118, t);
  t = restore_always_2_0(l_118, t_10, t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_i_43;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL,y_23 = NULL;
  m_102 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_102);
  j_102 = t;
  t = k_102;
  t = map_1_0(x_10, t);
  l_102 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_102);
  y_23 = t;
  t = SSLsetAnnotations(y_23, j_102);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL;
  a_103 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      z_102 = ATgetArgument(t, 0);
      {
        ATerm p_44 = t;
        int q_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_43 = NULL,m_43 = NULL,w_23 = NULL;
            t = SSLgetAnnotations(a_103);
            k_43 = t;
            t = z_102;
            t = map_1_0(y_10, t);
            m_43 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, m_43);
            w_23 = t;
            t = SSLsetAnnotations(w_23, k_43);
            LocalPopChoice(q_44);
          }
        else
          {
            t = p_44;
            t = a_103;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          z_102 = ATgetArgument(t, 0);
          {
            ATerm r_44 = t;
            int s_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_44 = NULL,i_44 = NULL,x_23 = NULL;
                t = SSLgetAnnotations(a_103);
                d_44 = t;
                t = z_102;
                t = map_1_0(a_11, t);
                i_44 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, i_44);
                x_23 = t;
                t = SSLsetAnnotations(x_23, d_44);
                LocalPopChoice(s_44);
              }
            else
              {
                t = r_44;
                t = a_103;
              }
          }
        }
      else
        {
          t = a_103;
        }
    }
  return(t);
}
static ATerm y_10 (ATerm t)
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
static ATerm a_11 (ATerm t)
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
  t = scope_2_0(u_10, w_10, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_103 = NULL,i_103 = NULL,j_103 = NULL;
  h_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_103;
    }
  else
    {
      static ATerm b_11 (ATerm t)
      {
        t = not_null(j_103);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_103 = ATgetFirst((ATermList) t);
          if(((j_103 != NULL) && (j_103 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_103;
      t = at_end_1_0(b_11, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL,a_104 = NULL;
  y_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_103;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_103 = ATgetFirst((ATermList) t);
          a_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_45 = t;
        int b_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_44 = NULL,y_44 = NULL,z_44 = NULL,i_24 = NULL;
            t = SSLgetAnnotations(y_103);
            v_44 = t;
            t = z_103;
            t = g_113(t);
            y_44 = t;
            t = a_104;
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
            t = a_104;
            t = filter_1_0(g_113, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  static ATerm q_104 (ATerm t)
  {
    ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
    p_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_104 = ATgetFirst((ATermList) t);
        o_104 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_45 = NULL,k_45 = NULL,k_24 = NULL;
          t = SSLgetAnnotations(p_104);
          h_45 = t;
          t = o_104;
          t = q_104(t);
          k_45 = t;
          t = (ATerm) ATinsert(CheckATermList(k_45), n_104);
          k_24 = t;
          t = SSLsetAnnotations(k_24, h_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_104;
        t = u_105(t);
      }
    return(t);
  }
  t = q_104(t);
  return(t);
}
static ATerm g_105 (ATerm v_104, ATerm t)
{
  ATerm w_104 = NULL;
  t = SSL_explode_term(v_104);
  if(match_cons(t, sym__2))
    {
      ATerm c_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_104;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL;
  a_105 = t;
  if(match_cons(t, sym__2))
    {
      y_104 = ATgetArgument(t, 0);
      z_104 = ATgetArgument(t, 1);
      {
        ATerm d_45 = t;
        int e_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_11 (ATerm t)
            {
              t = z_104;
              return(t);
            }
            t = y_104;
            t = at_end_1_0(d_11, t);
            LocalPopChoice(e_45);
          }
        else
          {
            t = d_45;
            t = g_105(a_105, t);
          }
      }
    }
  else
    {
      t = g_105(a_105, t);
    }
  return(t);
}
static ATerm p_9 (ATerm h_132, ATerm d_132, ATerm t)
{
  ATerm h_105 = NULL,i_105 = NULL;
  static ATerm f_11 (ATerm t)
  {
    ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL;
    m_105 = t;
    t = SSL_explode_term(m_105);
    if(match_cons(t, sym__2))
      {
        if(((h_105 != NULL) && (h_105 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_105 = ATgetArgument(t, 0);
        {
          ATerm f_45 = ATgetArgument(t, 1);
          if(((ATgetType(f_45) == AT_LIST) && !(ATisEmpty(f_45))))
            {
              j_105 = ATgetFirst((ATermList) f_45);
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
    t = (ATerm) ATmakeAppl(sym__2, j_105, not_null(i_105));
    t = conc_0_0(t);
    k_105 = t;
    t = (ATerm) ATinsert(ATempty, k_105);
    l_105 = t;
    t = SSL_mkterm(h_105, l_105);
    return(t);
  }
  t = SSL_explode_term(h_132);
  if(match_cons(t, sym__2))
    {
      if(((h_105 != NULL) && (h_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_105 = ATgetArgument(t, 0);
      {
        ATerm i_45 = ATgetArgument(t, 1);
        if(((ATgetType(i_45) == AT_LIST) && !(ATisEmpty(i_45))))
          {
            if(((i_105 != NULL) && (i_105 != ATgetFirst((ATermList) i_45))))
              _fail(ATgetFirst((ATermList) i_45));
            else
              i_105 = ATgetFirst((ATermList) i_45);
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
  t = fetch_1_0(f_11, t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL;
  q_105 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_105;
      t = e_112(t);
    }
  else
    {
      ATerm x_105 = NULL,y_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_105 = ATgetFirst((ATermList) t);
          s_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_105;
      t = g_112(t);
      x_105 = t;
      t = s_105;
      t = foldr_3_0(e_112, f_112, g_112, t);
      y_105 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_105, y_105);
      t = f_112(t);
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_45), term_m_45), term_l_45);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL;
  if(match_cons(t, sym__2))
    {
      f_106 = ATgetArgument(t, 0);
      g_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(f_106, g_106, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm h_106 = NULL,i_106 = NULL;
  i_106 = t;
  if(match_cons(t, sym_Signature_1))
    {
      h_106 = ATgetArgument(t, 0);
      {
        ATerm o_45 = t;
        int p_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_106 = NULL;
            t = h_106;
            t = filter_1_0(d_12, t);
            t = concat_0_0(t);
            k_106 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, k_106);
            LocalPopChoice(p_45);
          }
        else
          {
            t = o_45;
            t = i_106;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          h_106 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, h_106);
        }
      else
        {
          t = i_106;
        }
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm l_106 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      l_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_106;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL,e_106 = NULL,m_24 = NULL;
  e_106 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_106);
  b_106 = t;
  t = c_106;
  t = foldr_3_0(i_11, j_11, c_12, t);
  d_106 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, d_106);
  m_24 = t;
  t = SSLsetAnnotations(m_24, b_106);
  return(t);
}
static ATerm e_12 (ATerm t)
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
static ATerm l_12 (ATerm t)
{
  ATerm z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL;
  d_108 = t;
  if(match_cons(t, sym_LRule_1))
    {
      c_108 = ATgetArgument(t, 0);
      t = c_108;
      if(match_cons(t, sym_Rule_3))
        {
          z_107 = ATgetArgument(t, 0);
          a_108 = ATgetArgument(t, 1);
          b_108 = ATgetArgument(t, 2);
          {
            ATerm s_45 = t;
            int t_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_108 = NULL;
                t = z_107;
                t = free_vars_3_0(b_13, c_13, tboundin_3_0, t);
                h_108 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, h_108, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, z_107, a_108, b_108)));
                LocalPopChoice(t_45);
              }
            else
              {
                t = s_45;
                t = d_108;
              }
          }
        }
      else
        {
          t = d_108;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          c_108 = ATgetArgument(t, 0);
          {
            ATerm u_45 = t;
            int v_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_109 = NULL;
                t = c_108;
                t = free_vars_3_0(f_13, g_13, tboundin_3_0, t);
                l_109 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, l_109, c_108);
                LocalPopChoice(v_45);
              }
            else
              {
                t = u_45;
                t = d_108;
              }
          }
        }
      else
        {
          t = d_108;
        }
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm i_108 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_108);
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
              ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_108 = ATgetArgument(t, 0);
                  l_108 = ATgetArgument(t, 1);
                  m_108 = ATgetArgument(t, 2);
                  n_108 = ATgetArgument(t, 3);
                  t = m_108;
                  t = map_1_0(d_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_108 = ATgetArgument(t, 0);
                      l_108 = ATgetArgument(t, 1);
                      m_108 = ATgetArgument(t, 2);
                      n_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_108;
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
  ATerm u_108 = NULL;
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_108 = ATgetArgument(t, 0);
          {
            ATerm d_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_46);
      t = u_108;
    }
  else
    {
      t = a_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_108;
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm d_109 = NULL;
  ATerm e_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_109 = ATgetArgument(t, 0);
          {
            ATerm h_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_46);
      t = d_109;
    }
  else
    {
      t = e_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_109;
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm m_109 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_109);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm i_46 = t;
  int j_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_46);
    }
  else
    {
      t = i_46;
      {
        ATerm m_46 = t;
        int n_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_46);
          }
        else
          {
            t = m_46;
            {
              ATerm q_109 = NULL,t_109 = NULL,u_109 = NULL,v_109 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_109 = ATgetArgument(t, 0);
                  t_109 = ATgetArgument(t, 1);
                  u_109 = ATgetArgument(t, 2);
                  v_109 = ATgetArgument(t, 3);
                  t = u_109;
                  t = map_1_0(h_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_109 = ATgetArgument(t, 0);
                      t_109 = ATgetArgument(t, 1);
                      u_109 = ATgetArgument(t, 2);
                      v_109 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_109;
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
  ATerm c_110 = NULL;
  ATerm o_46 = t;
  int p_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_110 = ATgetArgument(t, 0);
          {
            ATerm t_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_46);
      t = c_110;
    }
  else
    {
      t = o_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_110;
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm l_110 = NULL;
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_110 = ATgetArgument(t, 0);
          {
            ATerm a_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_46);
      t = l_110;
    }
  else
    {
      t = v_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_110;
    }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = Cons_2_0(k_13, l_13, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,o_24 = NULL;
  d_111 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_111);
  a_111 = t;
  t = b_111;
  t = topdown_1_0(n_13, t);
  t = listtd_1_0(r_13, t);
  c_111 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_111);
  o_24 = t;
  t = SSLsetAnnotations(o_24, a_111);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm n_13 (ATerm t)
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
static ATerm r_13 (ATerm t)
{
  t = repeat_2_0(v_13, _id, t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_111 = ATgetFirst((ATermList) t);
      h_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_8(g_111, h_111, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = Cons_2_0(a_14, o_14, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm r_111 = NULL,s_111 = NULL,t_111 = NULL,u_111 = NULL,r_24 = NULL;
  u_111 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_111);
  r_111 = t;
  t = s_111;
  t = topdown_1_0(q_14, t);
  t = listtd_1_0(s_14, t);
  t_111 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_111);
  r_24 = t;
  t = SSLsetAnnotations(r_24, r_111);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm d_47 = t;
  int i_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(i_47);
    }
  else
    {
      t = d_47;
    }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = repeat_2_0(v_14, _id, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm x_111 = NULL,y_111 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_111 = ATgetFirst((ATermList) t);
      y_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_8(x_111, y_111, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = Cons_2_0(x_14, y_14, t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL,w_24 = NULL;
  q_112 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_112);
  n_112 = t;
  t = o_112;
  t = topdown_1_0(z_14, t);
  t = listtd_1_0(a_15, t);
  p_112 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_112);
  w_24 = t;
  t = SSLsetAnnotations(w_24, n_112);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm z_14 (ATerm t)
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
static ATerm a_15 (ATerm t)
{
  t = repeat_2_0(b_15, _id, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm t_112 = NULL,u_112 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_112 = ATgetFirst((ATermList) t);
      u_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_8(t_112, u_112, t);
  return(t);
}
static ATerm e_15 (ATerm t)
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
static ATerm g_15 (ATerm t)
{
  ATerm y_112 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      y_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, y_112)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,z_24 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(e_12, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(l_12, t);
  r_107 = t;
  t = term_n_47;
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_110 = NULL,r_110 = NULL;
        t = term_q_47;
        q_110 = t;
        t = term_n_47;
        r_110 = t;
        t = term_s_47;
        t = d_10(q_110, r_110, t);
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        t = term_t_47;
      }
  }
  s_107 = t;
  if(match_string(t, "old"))
    {
      ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL,y_110 = NULL,q_24 = NULL,p_24 = NULL;
      t = r_107;
      if(match_cons(t, sym_Specification_1))
        {
          t_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_107);
      s_110 = t;
      t = t_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_110 = ATgetFirst((ATermList) t);
          w_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_110);
      u_110 = t;
      t = w_110;
      t = Cons_2_0(_id, j_13, t);
      x_110 = t;
      t = (ATerm) ATinsert(CheckATermList(x_110), v_110);
      p_24 = t;
      t = SSLsetAnnotations(p_24, u_110);
      y_110 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, y_110);
      q_24 = t;
      t = SSLsetAnnotations(q_24, s_110);
    }
  else
    {
      if(match_string(t, "new"))
        {
          ATerm j_111 = NULL,k_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL,t_24 = NULL,s_24 = NULL;
          t = r_107;
          if(match_cons(t, sym_Specification_1))
            {
              k_111 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_107);
          j_111 = t;
          t = k_111;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_111 = ATgetFirst((ATermList) t);
              n_111 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_111);
          l_111 = t;
          t = n_111;
          t = Cons_2_0(_id, w_13, t);
          o_111 = t;
          t = (ATerm) ATinsert(CheckATermList(o_111), m_111);
          s_24 = t;
          t = SSLsetAnnotations(s_24, l_111);
          p_111 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, p_111);
          t_24 = t;
          t = SSLsetAnnotations(t_24, j_111);
        }
      else
        {
          ATerm a_112 = NULL,b_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL,y_24 = NULL,x_24 = NULL;
          if(match_cons(t, sym_Specification_1))
            {
              b_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_107);
          a_112 = t;
          t = b_112;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_112 = ATgetFirst((ATermList) t);
              j_112 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_112);
          h_112 = t;
          t = j_112;
          t = Cons_2_0(_id, w_14, t);
          k_112 = t;
          t = (ATerm) ATinsert(CheckATermList(k_112), i_112);
          x_24 = t;
          t = SSLsetAnnotations(x_24, h_112);
          l_112 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, l_112);
          y_24 = t;
          t = SSLsetAnnotations(y_24, a_112);
        }
    }
  t = topdown_1_0(e_15, t);
  w_107 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_107);
  t_107 = t;
  t = u_107;
  t = fetch_1_0(g_15, t);
  v_107 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_107);
  z_24 = t;
  t = SSLsetAnnotations(z_24, t_107);
  return(t);
}
static ATerm q_9 (ATerm h_39, ATerm i_39, ATerm t)
{
  ATerm z_112 = NULL;
  t = SSL_fputc(h_39, i_39);
  z_112 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_112);
  return(t);
}
static ATerm r_9 (ATerm l_23, ATerm m_23, ATerm t)
{
  ATerm a_113 = NULL;
  t = SSL_write_term_to_stream_text(l_23, m_23);
  a_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_113);
  return(t);
}
static ATerm t_9 (ATerm u_104 (ATerm), ATerm b_172, ATerm r_23, ATerm t)
{
  ATerm b_113 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_172, term_u_47);
  t = x_9(t);
  b_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_113, r_23);
  t = u_104(t);
  t = fclose_0_0(t);
  t = r_23;
  return(t);
}
static ATerm s_9 (ATerm h_23, ATerm i_23, ATerm t)
{
  ATerm c_113 = NULL;
  t = SSL_write_term_to_stream_baf(h_23, i_23);
  c_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_113);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm k_113 = NULL,l_113 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_47 = ATgetArgument(t, 0);
      if(match_cons(v_47, sym_Stream_1))
        {
          k_113 = ATgetArgument(v_47, 0);
        }
      else
        _fail(t);
      l_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(k_113, l_113, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_47 = ATgetArgument(t, 0);
      if(match_cons(w_47, sym_Stream_1))
        {
          p_113 = ATgetArgument(w_47, 0);
        }
      else
        _fail(t);
      q_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(p_113, q_113, t);
  m_113 = t;
  t = term_g_23;
  n_113 = t;
  t = m_113;
  if(match_cons(t, sym_Stream_1))
    {
      o_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_23, m_113);
  t = q_9(n_113, o_113, t);
  return(t);
}
ATerm output_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  ATerm d_113 = NULL,e_113 = NULL;
  t = s_123(t);
  e_113 = t;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_113 = NULL,h_113 = NULL;
        t = term_q_47;
        f_113 = t;
        t = term_z_47;
        h_113 = t;
        t = term_a_48;
        t = d_10(f_113, h_113, t);
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
        t = term_b_48;
      }
  }
  d_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_113, e_113);
  {
    ATerm c_48 = t;
    int e_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_113 = NULL,j_113 = NULL;
        t = term_q_47;
        i_113 = t;
        t = term_f_48;
        j_113 = t;
        t = term_h_48;
        t = d_10(i_113, j_113, t);
        t = (ATerm) ATmakeAppl(sym__2, d_113, e_113);
        LocalPopChoice(e_48);
        if(match_cons(t, sym__2))
          {
            ATerm i_48 = ATgetArgument(t, 0);
            ATerm j_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_9(n_15, d_113, e_113, t);
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
        t = t_9(o_15, d_113, e_113, t);
      }
  }
  return(t);
}
static ATerm e_114 (ATerm y_113, ATerm t)
{
  t = SSL_fclose(y_113);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_114 = NULL,c_114 = NULL;
  c_114 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_114 = ATgetArgument(t, 0);
      {
        ATerm m_48 = t;
        int o_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_114);
            LocalPopChoice(o_48);
          }
        else
          {
            t = m_48;
            t = e_114(c_114, t);
          }
      }
    }
  else
    {
      t = e_114(c_114, t);
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
  ATerm f_114 = NULL;
  t = SSL_fopen(j_39, k_39);
  f_114 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_114);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_114 = NULL;
  t = SSL_stdin_stream();
  g_114 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_114);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_114 = NULL;
  t = SSL_stdout_stream();
  h_114 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_114);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_114 = NULL;
  t = SSL_stderr_stream();
  i_114 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_114);
  return(t);
}
static ATerm p_115 (ATerm o_114, ATerm t)
{
  ATerm p_114 = NULL;
  t = SSL_explode_term(o_114);
  if(match_cons(t, sym__2))
    {
      ATerm p_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_48 = ATgetArgument(t, 1);
        if(((ATgetType(s_48) == AT_LIST) && !(ATisEmpty(s_48))))
          {
            p_114 = ATgetFirst((ATermList) s_48);
            {
              ATerm u_48 = (ATerm) ATgetNext((ATermList) s_48);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_114;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_114;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_114;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_114;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_115 (ATerm s_114, ATerm t_114, ATerm u_114, ATerm t)
{
  ATerm v_114 = NULL,w_114 = NULL,x_114 = NULL,a_115 = NULL,o_25 = NULL;
  t = SSLgetAnnotations(u_114);
  x_114 = t;
  t = s_114;
  if(match_cons(t, sym_Path_1))
    {
      a_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_115, t_114);
  o_25 = t;
  t = SSLsetAnnotations(o_25, x_114);
  if(match_cons(t, sym__2))
    {
      v_114 = ATgetArgument(t, 0);
      w_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(v_114, w_114, t);
  return(t);
}
static ATerm r_115 (ATerm c_115, ATerm d_115, ATerm e_115, ATerm t)
{
  ATerm f_115 = NULL,g_115 = NULL,h_115 = NULL,k_115 = NULL,r_25 = NULL;
  t = SSLgetAnnotations(e_115);
  h_115 = t;
  t = SSL_is_string(c_115);
  k_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_115, d_115);
  r_25 = t;
  t = SSLsetAnnotations(r_25, h_115);
  if(match_cons(t, sym__2))
    {
      f_115 = ATgetArgument(t, 0);
      g_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(f_115, g_115, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL;
  m_115 = t;
  if(match_cons(t, sym__2))
    {
      n_115 = ATgetArgument(t, 0);
      o_115 = ATgetArgument(t, 1);
      {
        ATerm y_48 = t;
        int c_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_115(m_115, t);
            LocalPopChoice(c_49);
          }
        else
          {
            t = y_48;
            {
              ATerm d_49 = t;
              int e_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_115(n_115, o_115, m_115, t);
                  LocalPopChoice(e_49);
                }
              else
                {
                  t = d_49;
                  t = r_115(n_115, o_115, m_115, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_115(m_115, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_115 = NULL,u_115 = NULL,v_115 = NULL,a_116 = NULL;
  a_116 = t;
  {
    ATerm f_49 = t;
    int h_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_116, term_i_49);
        t = x_9(t);
        LocalPopChoice(h_49);
      }
    else
      {
        t = f_49;
        {
          ATerm c_46 = NULL,g_46 = NULL;
          t = term_j_49;
          g_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_49, a_116);
          t = v_9(g_46, a_116, t);
          c_46 = t;
          t = SSL_perror(c_46);
          _fail(t);
        }
      }
  }
  u_115 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(v_115, t);
  t_115 = t;
  t = u_115;
  t = fclose_0_0(t);
  t = t_115;
  return(t);
}
ATerm input_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_116 = NULL,e_116 = NULL;
      t = term_q_47;
      d_116 = t;
      t = term_n_49;
      e_116 = t;
      t = term_o_49;
      t = d_10(d_116, e_116, t);
      LocalPopChoice(l_49);
    }
  else
    {
      t = k_49;
      t = term_p_49;
    }
  t = ReadFromFile_0_0(t);
  t = t_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL,j_116 = NULL;
  f_116 = t;
  t = term_q_49;
  t = whoami_0_0(t);
  g_116 = t;
  t = term_q_32;
  i_116 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_49), g_116), term_r_49);
  j_116 = t;
  t = SSL_printnl(i_116, j_116);
  t = term_s_32;
  h_116 = t;
  t = SSL_exit(h_116);
  t = f_116;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm q_116 = NULL;
  q_116 = t;
  if(match_string(t, "-k"))
    {
      t = q_116;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_116;
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL;
  r_116 = t;
  t = SSL_string_to_int(r_116);
  s_116 = t;
  t = term_t_49;
  t_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_49, s_116);
  t = g_10(t_116, s_116, t);
  t = r_116;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_u_49;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_15, a_16, b_16, t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm v_116 = NULL;
  v_116 = t;
  if(match_string(t, "-S"))
    {
      t = v_116;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_116;
    }
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm w_116 = NULL,x_116 = NULL;
  t = term_w_49;
  w_116 = t;
  t = term_x_49;
  x_116 = t;
  t = term_y_49;
  t = g_10(w_116, x_116, t);
  t = term_z_49;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_a_50;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm y_116 = NULL,z_116 = NULL,a_117 = NULL;
  y_116 = t;
  t = SSL_string_to_int(y_116);
  z_116 = t;
  t = term_w_49;
  a_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_49, z_116);
  t = g_10(a_117, z_116, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_116);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_b_50;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm b_117 = NULL,c_117 = NULL;
  t = term_d_50;
  b_117 = t;
  t = term_q_49;
  c_117 = t;
  t = term_g_50;
  t = g_10(b_117, c_117, t);
  t = term_i_50;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_j_50;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_16, d_16, e_16, t);
      LocalPopChoice(l_50);
    }
  else
    {
      t = k_50;
      {
        ATerm m_50 = t;
        int n_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_16, g_16, h_16, t);
            LocalPopChoice(n_50);
          }
        else
          {
            t = m_50;
            t = Option_3_0(i_16, j_16, o_16, t);
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL;
  t = term_q_47;
  d_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_47, a_49, b_49);
  t = lookup_table_0_1(d_117, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(a_49, b_49, e_117, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_47, a_49, b_49);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_117 = NULL,j_117 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL;
      t = term_q_49;
      t = e_0(t);
      k_117 = t;
      t = term_o_50;
      l_117 = t;
      t = term_p_50;
      m_117 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, k_117);
      t = e_10(l_117, m_117, k_117, t);
      _fail(t);
    }
  else
    {
      ATerm p_117 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_117 = ATgetFirst((ATermList) t);
          j_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_117;
      t = c_0(t);
      t = term_q_49;
      t = d_0(t);
      p_117 = t;
      t = (ATerm) ATinsert(CheckATermList(j_117), p_117);
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm r_117 = NULL;
  r_117 = t;
  if(match_string(t, "-o"))
    {
      t = r_117;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_117;
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL;
  s_117 = t;
  t = term_z_47;
  t_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_47, s_117);
  t = g_10(t_117, s_117, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_117);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_q_50;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_16, w_16, x_16, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm v_117 = NULL;
  v_117 = t;
  if(match_string(t, "-i"))
    {
      t = v_117;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_117;
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm w_117 = NULL,x_117 = NULL;
  w_117 = t;
  t = term_n_49;
  x_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_49, w_117);
  t = g_10(x_117, w_117, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_117);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_16, z_16, a_17, t);
  return(t);
}
static ATerm e_10 (ATerm v_53, ATerm w_53, ATerm u_53, ATerm t)
{
  ATerm z_117 = NULL,a_118 = NULL,b_118 = NULL,c_118 = NULL,d_118 = NULL;
  z_117 = t;
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
  a_118 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, (ATerm) ATinsert(CheckATermList(a_118), u_53));
  t = lookup_table_0_1(v_53, t);
  d_118 = t;
  t = (ATerm) ATinsert(CheckATermList(a_118), u_53);
  b_118 = t;
  t = d_118;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(w_53, b_118, c_118, t);
  t = z_117;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL;
      t = term_q_49;
      t = n_0(t);
      u_118 = t;
      t = term_o_50;
      v_118 = t;
      t = term_p_50;
      w_118 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_50, term_p_50, u_118);
      t = e_10(v_118, w_118, u_118, t);
      _fail(t);
    }
  else
    {
      ATerm a_119 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_118 = ATgetFirst((ATermList) t);
          r_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_118;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_118 = ATgetFirst((ATermList) t);
          t_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_118;
      t = k_0(t);
      t = s_118;
      t = l_0(t);
      a_119 = t;
      t = (ATerm) ATinsert(CheckATermList(t_118), a_119);
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm c_119 = NULL,d_119 = NULL;
  c_119 = t;
  if(match_string(t, "old"))
    {
      t = c_119;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = c_119;
    }
  t = term_n_47;
  d_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_47, c_119);
  t = g_10(d_119, c_119, t);
  t = term_q_49;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_y_50;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_17, c_17, d_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_49;
  t = whoami_0_0(t);
  f_119 = t;
  t = term_q_32;
  h_119 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_50), f_119);
  i_119 = t;
  t = SSL_printnl(h_119, i_119);
  t = term_s_32;
  g_119 = t;
  t = SSL_exit(g_119);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_119 = NULL,k_119 = NULL;
  t = term_q_47;
  j_119 = t;
  t = term_a_51;
  k_119 = t;
  t = term_b_51;
  t = d_10(j_119, k_119, t);
  return(t);
}
static ATerm y_9 (ATerm d_42, ATerm e_42, ATerm t)
{
  ATerm c_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_42, e_42);
      LocalPopChoice(e_51);
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
  ATerm m_119 = NULL,n_119 = NULL,o_119 = NULL;
  m_119 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_119;
      t = c_112(t);
    }
  else
    {
      ATerm r_119 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_119 = ATgetFirst((ATermList) t);
          o_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_119;
      t = foldr_2_0(c_112, d_112, t);
      r_119 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_119, r_119);
      t = d_112(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_x_49;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm u_46 = NULL,z_46 = NULL;
  if(match_cons(t, sym__2))
    {
      u_46 = ATgetArgument(t, 0);
      z_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(u_46, z_46, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_119 = NULL,k_46 = NULL,l_46 = NULL;
  t = times_0_0(t);
  l_46 = t;
  t = SSL_explode_term(l_46);
  if(match_cons(t, sym__2))
    {
      ATerm f_51 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_46;
  t = foldr_2_0(e_17, g_17, t);
  u_119 = t;
  t = SSL_TicksToSeconds(u_119);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_120 = NULL,g_120 = NULL,h_120 = NULL;
  f_120 = t;
  if(match_cons(t, sym__2))
    {
      g_120 = ATgetArgument(t, 0);
      h_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_120;
        if((g_120 != t))
          {
            _fail(t);
          }
        t = f_120;
        LocalPopChoice(i_51);
      }
    else
      {
        t = h_51;
        t = (ATerm) ATmakeAppl(sym__2, g_120, h_120);
        {
          ATerm p_51 = t;
          int q_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_120, h_120);
              LocalPopChoice(q_51);
            }
          else
            {
              t = p_51;
              t = SSL_gtr(g_120, h_120);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_120, h_120);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_120 (ATerm), ATerm t)
{
  ATerm l_120 = NULL;
  l_120 = t;
  {
    ATerm v_51 = t;
    int y_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL;
        t = term_q_47;
        o_120 = t;
        t = term_w_49;
        p_120 = t;
        t = term_d_52;
        t = d_10(o_120, p_120, t);
        n_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_120, term_s_32);
        t = geq_0_0(t);
        t = l_120;
        t = t_120(t);
        LocalPopChoice(y_51);
      }
    else
      {
        t = v_51;
        t = l_120;
      }
  }
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL,v_120 = NULL,w_120 = NULL;
  t = run_time_0_0(t);
  r_120 = t;
  t = term_q_49;
  t = whoami_0_0(t);
  s_120 = t;
  t = term_q_32;
  v_120 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_52), r_120), term_h_52), s_120);
  w_120 = t;
  t = SSL_printnl(v_120, w_120);
  t = (ATerm) ATmakeAppl(sym__2, term_q_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_52), r_120), term_h_52), s_120));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_120 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_49;
  x_120 = t;
  t = SSL_exit(x_120);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm h_121 = NULL,i_121 = NULL;
  i_121 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_121;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_121 = ATgetArgument(t, 0);
          {
            ATerm d_48 = NULL,w_25 = NULL;
            t = SSLgetAnnotations(i_121);
            d_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_121);
            w_25 = t;
            t = SSLsetAnnotations(w_25, d_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_121;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_123 (ATerm), ATerm t)
{
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_121 = NULL,b_121 = NULL;
      t = term_q_47;
      a_121 = t;
      t = term_m_52;
      b_121 = t;
      t = term_n_52;
      t = d_10(a_121, b_121, t);
      LocalPopChoice(k_52);
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
  ATerm k_121 = NULL;
  t = SSL_hashtable_put(p_57, n_57, o_57);
  k_121 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_121);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_55, ATerm t)
{
  ATerm t_121 = NULL;
  t = table_hashtable_0_0(t);
  t_121 = t;
  {
    ATerm o_52 = t;
    int s_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_48 = NULL;
        t = t_121;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_10(h_55, t_48, t);
        LocalPopChoice(s_52);
      }
    else
      {
        t = o_52;
        {
          ATerm g_49 = NULL;
          t = h_55;
          t = table_create_0_0(t);
          t = t_121;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_10(h_55, g_49, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm w_121 = NULL;
  t = SSL_hashtable_create(v_57, w_57);
  w_121 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_121);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_121 = NULL,y_121 = NULL,z_121 = NULL,b_122 = NULL,c_122 = NULL;
  x_121 = t;
  t = term_t_52;
  b_122 = t;
  t = term_u_52;
  c_122 = t;
  t = x_121;
  t = new_hashtable_0_2(b_122, c_122, t);
  y_121 = t;
  t = x_121;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(x_121, y_121, z_121, t);
  t = x_121;
  return(t);
}
static ATerm a_10 (ATerm s_57, ATerm t_57, ATerm t)
{
  ATerm d_122 = NULL;
  t = SSL_hashtable_remove(t_57, s_57);
  d_122 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_122);
  return(t);
}
static ATerm b_10 (ATerm x_57, ATerm t)
{
  ATerm e_122 = NULL;
  t = SSL_hashtable_destroy(x_57);
  e_122 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_122);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_122 = NULL;
  t = SSL_table_hashtable();
  f_122 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_122);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_122 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL;
  g_122 = t;
  t = table_hashtable_0_0(t);
  h_122 = t;
  t = lookup_table_0_1(g_122, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(j_122, t);
  t = h_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(g_122, i_122, t);
  t = g_122;
  return(t);
}
ATerm map_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  static ATerm y_122 (ATerm t)
  {
    ATerm v_122 = NULL,w_122 = NULL,x_122 = NULL;
    v_122 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_122;
      }
    else
      {
        ATerm v_49 = NULL,e_50 = NULL,f_50 = NULL,y_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_122 = ATgetFirst((ATermList) t);
            x_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_122);
        v_49 = t;
        t = w_122;
        t = d_105(t);
        e_50 = t;
        t = x_122;
        t = y_122(t);
        f_50 = t;
        t = (ATerm) ATinsert(CheckATermList(f_50), e_50);
        y_25 = t;
        t = SSLsetAnnotations(y_25, v_49);
      }
    return(t);
  }
  t = y_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_123 = NULL,c_123 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_123 = ATgetFirst((ATermList) t);
      c_123 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_123 = NULL,h_123 = NULL;
        static ATerm j_17 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_123)), not_null(h_123));
          return(t);
        }
        t = c_123;
        t = i_0(t);
        if(((g_123 != NULL) && (g_123 != t)))
          _fail(t);
        else
          g_123 = t;
        t = b_123;
        t = g_0(t);
        if(((h_123 != NULL) && (h_123 != t)))
          _fail(t);
        else
          h_123 = t;
        t = c_123;
        t = reverse_acc_2_0(g_0, j_17, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_49;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm u_123 = NULL,v_123 = NULL,w_123 = NULL,h_26 = NULL;
  w_123 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_123);
  u_123 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_123);
  h_26 = t;
  t = SSLsetAnnotations(h_26, u_123);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm y_123 = NULL;
  y_123 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_123), term_w_52);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_123 = NULL,p_123 = NULL;
  ATerm x_52 = t;
  int y_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_123 = NULL,r_123 = NULL;
      t = term_q_47;
      q_123 = t;
      t = term_a_51;
      r_123 = t;
      t = term_b_51;
      t = d_10(q_123, r_123, t);
      LocalPopChoice(y_52);
    }
  else
    {
      t = x_52;
      t = fetch_1_0(k_17, t);
    }
  t = term_z_52;
  t = echo_0_0(t);
  t = term_o_50;
  k_123 = t;
  t = term_p_50;
  p_123 = t;
  t = term_a_53;
  t = d_10(k_123, p_123, t);
  t = reverse_acc_2_0(_id, l_17, t);
  t = map_1_0(m_17, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  static ATerm v_124 (ATerm t)
  {
    ATerm s_124 = NULL,t_124 = NULL,u_124 = NULL;
    s_124 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_124 = ATgetFirst((ATermList) t);
        u_124 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_53 = t;
      int c_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_50 = NULL,v_50 = NULL,n_26 = NULL;
          t = SSLgetAnnotations(s_124);
          s_50 = t;
          t = t_124;
          t = n_105(t);
          v_50 = t;
          t = (ATerm) ATinsert(CheckATermList(u_124), v_50);
          n_26 = t;
          t = SSLsetAnnotations(n_26, s_50);
          LocalPopChoice(c_53);
        }
      else
        {
          t = b_53;
          {
            ATerm d_51 = NULL,g_51 = NULL,o_26 = NULL;
            t = SSLgetAnnotations(s_124);
            d_51 = t;
            t = u_124;
            t = v_124(t);
            g_51 = t;
            t = (ATerm) ATinsert(CheckATermList(g_51), t_124);
            o_26 = t;
            t = SSLsetAnnotations(o_26, d_51);
          }
        }
    }
    return(t);
  }
  t = v_124(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_124 = NULL,a_125 = NULL,b_125 = NULL;
  z_124 = t;
  {
    ATerm d_53 = t;
    int e_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_124;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_53 = ATgetFirst((ATermList) t);
                ATerm g_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_124;
          }
        LocalPopChoice(e_53);
      }
    else
      {
        t = d_53;
        t = (ATerm) ATinsert(ATempty, z_124);
      }
  }
  a_125 = t;
  t = term_b_48;
  b_125 = t;
  t = SSL_printnl(b_125, a_125);
  t = z_124;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_125 = NULL,g_125 = NULL;
  t = term_q_47;
  f_125 = t;
  t = term_a_51;
  g_125 = t;
  t = term_b_51;
  t = d_10(f_125, g_125, t);
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
  ATerm h_125 = NULL;
  t = lookup_table_0_1(o_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_10(p_55, h_125, t);
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
  ATerm j_125 = NULL,k_125 = NULL;
  t = term_h_53;
  j_125 = t;
  t = term_q_49;
  k_125 = t;
  t = term_j_53;
  t = g_10(j_125, k_125, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_k_53;
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
  ATerm n_125 = NULL,o_125 = NULL,p_125 = NULL,q_125 = NULL;
  t = term_h_53;
  p_125 = t;
  t = term_q_49;
  q_125 = t;
  t = term_j_53;
  t = g_10(p_125, q_125, t);
  t = term_l_53;
  n_125 = t;
  t = term_q_49;
  o_125 = t;
  t = term_m_53;
  t = g_10(n_125, o_125, t);
  t = term_p_53;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_q_53;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_53 = t;
  int s_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_17, o_17, p_17, t);
      LocalPopChoice(s_53);
    }
  else
    {
      t = r_53;
      t = Option_3_0(q_17, r_17, s_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t)
{
  ATerm r_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL,w_125 = NULL,w_30 = NULL;
  w_125 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_125 = ATgetFirst((ATermList) t);
      t_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_125);
  r_125 = t;
  t = s_125;
  t = z_83(t);
  u_125 = t;
  t = t_125;
  t = a_84(t);
  v_125 = t;
  t = (ATerm) ATinsert(CheckATermList(v_125), u_125);
  w_30 = t;
  t = SSLsetAnnotations(w_30, r_125);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_125 (ATerm), ATerm t)
{
  ATerm b_126 = NULL,c_126 = NULL,d_126 = NULL,e_126 = NULL,g_126 = NULL,h_126 = NULL,y_30 = NULL;
  b_126 = t;
  {
    ATerm x_53 = t;
    int z_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_54;
        t = m_125(t);
        LocalPopChoice(z_53);
      }
    else
      {
        t = x_53;
      }
  }
  t = b_126;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_126 = ATgetFirst((ATermList) t);
      e_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_126);
  c_126 = t;
  t = term_a_51;
  h_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_51, d_126);
  t = g_10(h_126, d_126, t);
  t = e_126;
  {
    static ATerm r_126 (ATerm t)
    {
      ATerm d_54 = t;
      int e_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_54 = t;
          int i_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_126 = NULL;
              k_126 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_126;
              LocalPopChoice(i_54);
            }
          else
            {
              t = f_54;
              t = m_125(t);
              t = Cons_2_0(_id, r_126, t);
            }
          LocalPopChoice(e_54);
        }
      else
        {
          t = d_54;
          {
            ATerm n_126 = NULL,o_126 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_126 = ATgetFirst((ATermList) t);
                o_126 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_126), (ATerm) ATmakeAppl(sym_Undefined_1, n_126));
          }
        }
      return(t);
    }
    t = r_126(t);
  }
  g_126 = t;
  t = (ATerm) ATinsert(CheckATermList(g_126), (ATerm) ATmakeAppl(sym_Program_1, d_126));
  y_30 = t;
  t = SSLsetAnnotations(y_30, c_126);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm e_127 = NULL;
  e_127 = t;
  if(match_string(t, "--help"))
    {
      t = e_127;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_127;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_127;
        }
    }
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm f_127 = NULL,g_127 = NULL;
  t = term_m_52;
  f_127 = t;
  t = term_q_49;
  g_127 = t;
  t = term_j_54;
  t = g_10(f_127, g_127, t);
  t = term_k_54;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_l_54;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL;
  y_126 = t;
  t = term_o_50;
  z_126 = t;
  t = term_m_54;
  t = lookup_table_0_1(z_126, t);
  d_127 = t;
  t = term_p_50;
  a_127 = t;
  t = (ATerm) ATempty;
  b_127 = t;
  t = d_127;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(a_127, b_127, c_127, t);
  t = y_126;
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
        ATerm r_127 = NULL;
        r_127 = t;
        {
          ATerm t_54 = t;
          int u_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_51 = NULL;
              t = r_127;
              {
                ATerm v_54 = t;
                int w_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_52 = NULL,b_52 = NULL;
                    t = term_q_47;
                    a_52 = t;
                    t = term_m_52;
                    b_52 = t;
                    t = term_n_52;
                    t = d_10(a_52, b_52, t);
                    LocalPopChoice(w_54);
                  }
                else
                  {
                    t = v_54;
                    t = fetch_1_0(y_17, t);
                  }
              }
              t = r_127;
              t = default_system_usage_0_0(t);
              t = term_x_49;
              z_51 = t;
              t = SSL_exit(z_51);
              LocalPopChoice(u_54);
            }
          else
            {
              t = t_54;
              {
                ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
                t = term_q_47;
                q_52 = t;
                t = term_h_53;
                r_52 = t;
                t = term_x_54;
                t = d_10(q_52, r_52, t);
                t = r_127;
                t = default_system_about_0_0(t);
                t = term_x_49;
                p_52 = t;
                t = SSL_exit(p_52);
              }
            }
        }
        LocalPopChoice(s_54);
      }
    else
      {
        t = r_54;
        {
          ATerm y_54 = t;
          int z_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_127 = NULL,t_127 = NULL,u_127 = NULL;
              static ATerm z_17 (ATerm t)
              {
                ATerm v_127 = NULL,w_127 = NULL,x_127 = NULL,a_31 = NULL;
                x_127 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_127 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_127);
                v_127 = t;
                t = w_127;
                if(((w_126 != NULL) && (w_126 != t)))
                  _fail(t);
                else
                  w_126 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_127);
                a_31 = t;
                t = SSLsetAnnotations(a_31, v_127);
                return(t);
              }
              t = fetch_1_0(z_17, t);
              t = term_q_32;
              t_127 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_126)), term_b_55);
              u_127 = t;
              t = SSL_printnl(t_127, u_127);
              t = (ATerm) ATmakeAppl(sym__2, term_q_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_126)), term_b_55));
              t = default_system_usage_0_0(t);
              t = term_s_32;
              s_127 = t;
              t = SSL_exit(s_127);
              LocalPopChoice(z_54);
            }
          else
            {
              t = y_54;
            }
        }
      }
  }
  x_126 = t;
  t = term_o_50;
  t = table_destroy_0_0(t);
  t = x_126;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm t)
{
  ATerm g_128 = NULL,h_128 = NULL,i_128 = NULL,j_128 = NULL,k_128 = NULL;
  t = parse_options_1_0(l_123, t);
  g_128 = t;
  t = term_c_55;
  t = table_create_0_0(t);
  t = term_c_55;
  h_128 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_55, term_d_55, g_128);
  t = lookup_table_0_1(h_128, t);
  k_128 = t;
  t = term_d_55;
  i_128 = t;
  t = k_128;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(i_128, g_128, j_128, t);
  t = g_128;
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
  ATerm m_128 = NULL,n_128 = NULL;
  t = term_f_48;
  m_128 = t;
  t = term_q_49;
  n_128 = t;
  t = term_v_55;
  t = g_10(m_128, n_128, t);
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

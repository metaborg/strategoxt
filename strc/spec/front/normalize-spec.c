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
ATerm term_e_55;
ATerm term_d_55;
ATerm term_b_55;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_f_54;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_c_53;
ATerm term_x_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_z_51;
ATerm term_x_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_j_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_u_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_f_50;
ATerm term_d_50;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_l_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_a_49;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_m_48;
ATerm term_i_48;
ATerm term_g_48;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_x_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_q_46;
ATerm term_a_45;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_t_42;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_l_36;
ATerm term_h_36;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_z_31;
ATerm term_c_26;
ATerm term_r_25;
ATerm term_c_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_x_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Op_2, term_e_19, (ATerm) ATempty);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_19);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_18);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATempty);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Call_2, term_b_22, (ATerm) ATempty);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Call_2, term_w_23, (ATerm) ATempty);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Call_2, term_e_21, (ATerm) ATempty);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_RootApp_1, term_z_17);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_34);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_u_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_35);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_35);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_35);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_36);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_37);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_43);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_43);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(sym__2, term_q_46, term_t_46);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym__2, term_q_46, term_i_47);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym__2, term_q_46, term_n_47);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym__2, term_q_46, term_m_48);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym__2, term_d_49, term_e_49);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(sym__2, term_j_49, term_r_48);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(sym__2, term_q_46, term_h_50);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(sym__2, term_q_46, term_d_49);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(sym__2, term_q_46, term_a_51);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym__2, term_t_49, term_u_49);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym__2, term_n_52, term_r_48);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym__2, term_q_52, term_r_48);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym__2, term_a_51, term_r_48);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym__3, term_t_49, term_u_49, (ATerm) ATempty);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym__2, term_q_46, term_n_52);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(sym__2, term_n_47, term_r_48);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm g_98 (ATerm), ATerm t);
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
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm k_8 (ATerm o_130 (ATerm), ATerm p_75, ATerm n_75, ATerm o_75, ATerm s_75, ATerm q_75, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm o_130 (ATerm), ATerm t);
static ATerm z_18 (ATerm p_13, ATerm q_13, ATerm t);
static ATerm a_19 (ATerm y_13, ATerm z_13, ATerm t);
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
ATerm pat_td_1_0 (ATerm f_129 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_8 (ATerm u_65, ATerm v_65, ATerm w_65, ATerm t);
static ATerm e_30 (ATerm m_29, ATerm t);
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
static ATerm q_8 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t);
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
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm r_8 (ATerm n_130 (ATerm), ATerm w_74, ATerm t_74, ATerm u_74, ATerm d_75, ATerm h_75, ATerm i_75, ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
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
ATerm split_dynamic_rules_old_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm k_99 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm i_130 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm t_8 (ATerm g_73, ATerm f_73, ATerm t);
ATerm repeat_2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm c_106 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm z_8 (ATerm d_109 (ATerm), ATerm k_29, ATerm j_29, ATerm t);
static ATerm a_9 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm o_29, ATerm n_29, ATerm t);
static ATerm b_9 (ATerm y_108 (ATerm), ATerm i_29, ATerm h_29, ATerm t);
ATerm genzip_4_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm g_9 (ATerm l_640, ATerm q_640, ATerm h_60, ATerm t);
ATerm while_not_2_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t);
ATerm for_3_0 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm f_96 (ATerm q_94, ATerm r_94, ATerm s_94, ATerm t);
static ATerm c_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm free_vars_3_0 (ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm p_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm h_98 (ATerm), ATerm t);
static ATerm k_9 (ATerm b_54, ATerm c_54, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm y_99 (ATerm), ATerm t);
static ATerm l_9 (ATerm b_118 (ATerm), ATerm m_43, ATerm k_43, ATerm t);
static ATerm l_10 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm m_9 (ATerm v_53, ATerm w_53, ATerm t);
ATerm end_scope_1_0 (ATerm y_117 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm x_117 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm t);
static ATerm t_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm v_112 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_105 (ATerm), ATerm t);
static ATerm r_104 (ATerm h_104, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_9 (ATerm k_131, ATerm g_131, ATerm t);
ATerm foldr_3_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm t);
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
ATerm normalize_spec_0_0 (ATerm t);
static ATerm q_9 (ATerm c_39, ATerm d_39, ATerm t);
static ATerm r_9 (ATerm g_23, ATerm h_23, ATerm t);
static ATerm t_9 (ATerm j_104 (ATerm), ATerm e_171, ATerm m_23, ATerm t);
static ATerm s_9 (ATerm c_23, ATerm d_23, ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm output_1_0 (ATerm h_123 (ATerm), ATerm t);
static ATerm f_113 (ATerm z_112, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_9 (ATerm i_23, ATerm t);
static ATerm v_9 (ATerm v_37, ATerm w_37, ATerm t);
static ATerm w_9 (ATerm e_39, ATerm f_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_114 (ATerm p_113, ATerm t);
static ATerm r_114 (ATerm t_113, ATerm u_113, ATerm v_113, ATerm t);
static ATerm s_114 (ATerm d_114, ATerm e_114, ATerm f_114, ATerm t);
static ATerm x_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm i_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_10 (ATerm v_48, ATerm w_48, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm e_10 (ATerm q_53, ATerm r_53, ATerm p_53, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm j_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm v_16 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_9 (ATerm y_41, ATerm z_41, ATerm t);
ATerm foldr_2_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_120 (ATerm), ATerm t);
static ATerm y_16 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm need_help_1_0 (ATerm y_122 (ATerm), ATerm t);
static ATerm h_10 (ATerm i_57, ATerm j_57, ATerm k_57, ATerm t);
ATerm lookup_table_0_1 (ATerm c_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_57, ATerm r_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_10 (ATerm n_57, ATerm o_57, ATerm t);
static ATerm b_10 (ATerm s_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_105 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_10 (ATerm l_57, ATerm m_57, ATerm t);
static ATerm d_10 (ATerm j_55, ATerm k_55, ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_125 (ATerm), ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
ATerm parse_options_1_0 (ATerm a_125 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm x_17 (ATerm t);
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
              t = term_y_17;
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
                  t = term_y_17;
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
                      t = term_z_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
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
ATerm topdown_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(g_98, t);
    return(t);
  }
  t = g_98(t);
  t = SRTS_all(h_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm f_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_5);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            {
              ATerm k_5 = NULL,l_5 = NULL,q_5 = NULL,u_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_5 = ATgetArgument(t, 0);
                  l_5 = ATgetArgument(t, 1);
                  q_5 = ATgetArgument(t, 2);
                  u_5 = ATgetArgument(t, 3);
                  t = q_5;
                  t = map_1_0(s_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_5 = ATgetArgument(t, 0);
                      l_5 = ATgetArgument(t, 1);
                      q_5 = ATgetArgument(t, 2);
                      u_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_5;
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
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_6 = ATgetArgument(t, 0);
          {
            ATerm h_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_18);
      t = e_6;
    }
  else
    {
      t = f_18;
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
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_6 = ATgetArgument(t, 0);
          {
            ATerm k_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = p_6;
    }
  else
    {
      t = i_18;
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
  ATerm a_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_7);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
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
  ATerm q_7 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_7 = ATgetArgument(t, 0);
          {
            ATerm r_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_18);
      t = q_7;
    }
  else
    {
      t = p_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_7;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm n_8 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_8 = ATgetArgument(t, 0);
          {
            ATerm u_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_18);
      t = n_8;
    }
  else
    {
      t = s_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_8;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm f_9 = NULL;
  f_9 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 = NULL,q_0 = NULL,a_0 = NULL,w_0 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            q_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_9);
        q_0 = t;
        t = term_x_18;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_18, q_10);
        t = k_9(w_0, q_10, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_19) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, q_10);
        a_0 = t;
        t = SSLsetAnnotations(a_0, q_0);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        {
          ATerm x_1 = NULL;
          t = term_x_18;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_18, f_9);
          t = k_9(x_1, f_9, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_19) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = f_9;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, f_9);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm p_11 (ATerm y_3, ATerm z_3, ATerm a_4, ATerm b_4, ATerm c_4, ATerm d_4, ATerm e_4, ATerm t)
  {
    ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, c_4, term_f_19);
    {
      ATerm g_19 = t;
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
          t = g_19;
        }
    }
    t = new_0_0(t);
    o_4 = t;
    t = b_4;
    t = dummify_0_0(t);
    q_4 = t;
    {
      ATerm k_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_4;
          if((b_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, o_4);
          LocalPopChoice(l_19);
        }
      else
        {
          t = k_19;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, x_4, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_19, (ATerm) ATinsert(CheckATermList(v_4), (ATerm) ATmakeAppl(sym_Str_1, w_4)))), q_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, y_3, z_3, a_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_4), b_4), c_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_3)))), p_4), (ATerm) ATmakeAppl(sym_Op_2, term_n_19, (ATerm) ATinsert(CheckATermList(v_4), (ATerm) ATmakeAppl(sym_Str_1, w_4))))), d_4))));
    return(t);
  }
  ATerm r_10 = NULL,u_10 = NULL,y_10 = NULL,b_11 = NULL,c_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL,m_11 = NULL,n_11 = NULL;
  y_10 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      b_11 = ATgetArgument(t, 0);
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
      u_10 = ATgetArgument(t, 1);
      t = u_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_10;
          if(match_string(t, "Undefined"))
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
                  t = y_10;
                  t = new_0_0(t);
                  l_2 = t;
                  t = h_11;
                  t = dummify_0_0(t);
                  j_2 = t;
                  {
                    ATerm y_19 = t;
                    int a_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_2;
                        if((h_11 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                        LocalPopChoice(a_20);
                      }
                    else
                      {
                        t = y_19;
                        t = j_2;
                      }
                  }
                  m_2 = t;
                  t = b_11;
                  t = o_0(t);
                  n_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_2, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_f_19), j_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, b_11, c_11, e_11, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_2), h_11), term_f_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_11)))), m_2), term_f_19)), (ATerm) ATmakeAppl(sym_Seq_2, n_11, term_y_17)))));
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  t = p_11(b_11, c_11, e_11, h_11, m_11, n_11, y_10, t);
                }
            }
          else
            {
              t = p_11(b_11, c_11, e_11, h_11, m_11, n_11, y_10, t);
            }
        }
      else
        {
          t = r_10;
          t = p_11(b_11, c_11, e_11, h_11, m_11, n_11, y_10, t);
        }
    }
  else
    {
      t = p_11(b_11, c_11, e_11, h_11, m_11, n_11, y_10, t);
    }
  return(t);
}
static ATerm k_8 (ATerm o_130 (ATerm), ATerm p_75, ATerm n_75, ATerm o_75, ATerm s_75, ATerm q_75, ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t = new_0_0(t);
  t_11 = t;
  t = s_75;
  t = dummify_0_0(t);
  s_11 = t;
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_11;
        if((s_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, t_11);
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        t = s_11;
      }
  }
  u_11 = t;
  t = p_75;
  t = o_130(t);
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, v_11, s_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, p_75, n_75, o_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_11), s_75), term_f_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_75)))), u_11), term_i_20)), (ATerm) ATmakeAppl(sym_Seq_2, q_75, term_y_17))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      f_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
      h_12 = ATgetArgument(t, 2);
      {
        ATerm n_20 = ATgetArgument(t, 3);
        if(match_cons(n_20, sym_Rule_3))
          {
            i_12 = ATgetArgument(n_20, 0);
            {
              ATerm q_20 = ATgetArgument(n_20, 1);
              if(match_cons(q_20, sym_Op_2))
                {
                  ATerm u_20 = ATgetArgument(q_20, 0);
                  if((ATgetSymbol((ATermAppl) u_20) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm v_20 = ATgetArgument(q_20, 1);
                    if(((ATgetType(v_20) != AT_LIST) || !(ATisEmpty(v_20))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            j_12 = ATgetArgument(n_20, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_8(o_130, f_12, g_12, h_12, i_12, j_12, t);
  return(t);
}
static ATerm z_18 (ATerm p_13, ATerm q_13, ATerm t)
{
  t = p_13;
  {
    ATerm x_20 = t;
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
        t = x_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_18, p_13);
  return(t);
}
static ATerm a_19 (ATerm y_13, ATerm z_13, ATerm t)
{
  t = y_13;
  {
    ATerm b_21 = t;
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
        t = b_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_21, y_13);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_h_21;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,w_2 = NULL;
  t_14 = t;
  t = SSL_explode_term(t_14);
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_21 = ATgetArgument(t, 1);
        if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
          {
            u_14 = ATgetFirst((ATermList) k_21);
            {
              ATerm l_21 = (ATerm) ATgetNext((ATermList) k_21);
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
      ATerm m_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_21 = ATgetArgument(t, 1);
        if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
          {
            ATerm o_21 = ATgetFirst((ATermList) n_21);
            ATerm s_21 = (ATerm) ATgetNext((ATermList) n_21);
            if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
              {
                w_2 = ATgetFirst((ATermList) s_21);
                {
                  ATerm v_21 = (ATerm) ATgetNext((ATermList) s_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_21, (ATerm) ATinsert(ATinsert(ATempty, w_2), u_14));
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_21, (ATerm) ATinsert(ATinsert(ATempty, s_15), r_15));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_h_21;
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_21, (ATerm) ATinsert(ATinsert(ATempty, z_15), u_15));
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_21, (ATerm) ATinsert(ATinsert(ATempty, n_16), m_16));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_c_22;
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_21, (ATerm) ATinsert(ATinsert(ATempty, u_16), p_16));
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
                  ATerm e_22 = t;
                  int g_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_r_22;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_s_22;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_t_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_u_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_v_22;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(g_22);
                    }
                  else
                    {
                      t = e_22;
                      {
                        ATerm f_3 = NULL;
                        t = SSL_explode_string(m_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm w_22 = ATgetFirst((ATermList) t);
                            if(((ATgetType(w_22) != AT_INT) || (ATgetInt((ATermInt) w_22) != 39)))
                              _fail(t);
                            {
                              ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
                                {
                                  f_3 = ATgetFirst((ATermList) y_22);
                                  {
                                    ATerm z_22 = (ATerm) ATgetNext((ATermList) y_22);
                                    if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
                                      {
                                        ATerm a_23 = ATgetFirst((ATermList) z_22);
                                        if(((ATgetType(a_23) != AT_INT) || (ATgetInt((ATermInt) a_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm b_23 = (ATerm) ATgetNext((ATermList) z_22);
                                          if(((ATgetType(b_23) != AT_LIST) || !(ATisEmpty(b_23))))
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
              ATerm j_23 = t;
              int l_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      m_14 = ATgetArgument(t, 0);
                      {
                        ATerm n_23 = ATgetArgument(t, 1);
                      }
                      j_14 = ATgetArgument(t, 2);
                      f_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, m_14, j_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_14), (ATerm) ATempty));
                }
              else
                {
                  t = j_23;
                  {
                    ATerm p_23 = t;
                    int t_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            m_14 = ATgetArgument(t, 0);
                            {
                              ATerm u_23 = ATgetArgument(t, 1);
                            }
                            j_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, m_14, j_14, term_y_23);
                      }
                    else
                      {
                        t = p_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            m_14 = ATgetArgument(t, 0);
                            n_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, m_14, n_14, term_y_23);
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
                                                ATerm f_24 = t;
                                                int g_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = z_18(m_14, l_14, t);
                                                    LocalPopChoice(g_24);
                                                  }
                                                else
                                                  {
                                                    t = f_24;
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
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_e_21, (ATerm) ATinsert(CheckATermList(n_14), m_14));
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
                                                                                        ATerm h_24 = t;
                                                                                        int j_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = a_19(m_14, l_14, t);
                                                                                            LocalPopChoice(j_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = h_24;
                                                                                            t = g_14;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = a_19(m_14, l_14, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_19(m_14, l_14, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_l_24;
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
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_v_24, (ATerm) ATinsert(ATinsert(ATempty, i_14), m_14));
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
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, m_14, n_14, term_z_17);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    m_14 = ATgetArgument(t, 0);
                                                                                                    n_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, m_14, n_14, term_z_17);
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
                                                                                                                                                ATerm w_24 = ATgetArgument(t, 0);
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
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  i_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      j_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
      {
        ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
        t = i_19;
        t = new_0_0(t);
        q_19 = t;
        t = new_0_0(t);
        r_19 = t;
        t = new_0_0(t);
        s_19 = t;
        t = new_0_0(t);
        t_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_19), s_19), r_19), q_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Var_1, s_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, j_19, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Var_1, r_19)), (ATerm) ATmakeAppl(sym_BAM_3, h_19, (ATerm)ATmakeAppl(sym_Var_1, s_19), (ATerm) ATmakeAppl(sym_Var_1, t_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_19)), (ATerm) ATmakeAppl(sym_Var_1, r_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_19 = ATgetArgument(t, 0);
          {
            ATerm u_19 = NULL,v_19 = NULL,b_20 = NULL,c_20 = NULL;
            t = i_19;
            t = new_0_0(t);
            b_20 = t;
            t = j_19;
            {
              static ATerm q_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      u_19 = ATgetArgument(t, 0);
                    if(((v_19 != NULL) && (v_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, b_20);
                return(t);
              }
              t = oncetd_1_0(q_1, t);
            }
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_19)), not_null(u_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), (ATerm) ATmakeAppl(sym_Build_1, c_20))));
          }
        }
      else
        {
          ATerm e_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              j_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_19;
          t = new_0_0(t);
          k_20 = t;
          t = new_0_0(t);
          l_20 = t;
          t = j_19;
          {
            static ATerm r_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_20 = ATgetArgument(t, 0);
                  if(((j_20 != NULL) && (j_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    j_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, k_20);
              return(t);
            }
            t = oncetd_1_0(r_1, t);
          }
          m_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_20))))), (ATerm)ATmakeAppl(sym_Var_1, k_20), (ATerm) ATmakeAppl(sym_Op_2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_20)), not_null(e_20)))))));
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
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,w_20 = NULL;
        t = o_20;
        t = new_0_0(t);
        t_20 = t;
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
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_20), r_20);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_20))))));
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
              t = o_20;
              t = new_0_0(t);
              z_20 = t;
              t = p_20;
              {
                static ATerm t_1 (ATerm t)
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
                t = pat_td_1_0(t_1, t);
              }
              a_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_20)), not_null(y_20))));
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              {
                ATerm c_21 = NULL,d_21 = NULL,p_21 = NULL,q_21 = NULL;
                t = o_20;
                t = new_0_0(t);
                p_21 = t;
                t = p_20;
                {
                  static ATerm u_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          d_21 = ATgetArgument(t, 0);
                        if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_21);
                    return(t);
                  }
                  t = pat_td_1_0(u_1, t);
                }
                q_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_21)), not_null(d_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm f_129 (ATerm), ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_129(t);
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
        z_25 = t;
        if(match_cons(t, sym_Op_2))
          {
            a_26 = ATgetArgument(t, 0);
            b_26 = ATgetArgument(t, 1);
            {
              ATerm j_4 = NULL,a_5 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(z_25);
              j_4 = t;
              t = b_26;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = pat_td_1_0(f_129, t);
                  return(t);
                }
                t = fetch_1_0(w_1, t);
              }
              a_5 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, a_26, a_5);
              d_3 = t;
              t = SSLsetAnnotations(d_3, j_4);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                a_26 = ATgetArgument(t, 0);
                b_26 = ATgetArgument(t, 1);
                {
                  ATerm j_25 = t;
                  int k_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_5 = NULL,r_5 = NULL,g_3 = NULL;
                      t = SSLgetAnnotations(z_25);
                      n_5 = t;
                      t = b_26;
                      t = pat_td_1_0(f_129, t);
                      r_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, a_26, r_5);
                      g_3 = t;
                      t = SSLsetAnnotations(g_3, n_5);
                      LocalPopChoice(k_25);
                    }
                  else
                    {
                      t = j_25;
                      {
                        ATerm r_6 = NULL,u_6 = NULL,h_3 = NULL;
                        t = SSLgetAnnotations(z_25);
                        r_6 = t;
                        t = a_26;
                        t = pat_td_1_0(f_129, t);
                        u_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, u_6, b_26);
                        h_3 = t;
                        t = SSLsetAnnotations(h_3, r_6);
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
                      ATerm x_7 = NULL,d_8 = NULL,i_3 = NULL;
                      t = SSLgetAnnotations(z_25);
                      x_7 = t;
                      t = y_25;
                      {
                        static ATerm y_1 (ATerm t)
                        {
                          t = pat_td_1_0(f_129, t);
                          return(t);
                        }
                        t = fetch_1_0(y_1, t);
                      }
                      d_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, a_26, b_26, d_8);
                      i_3 = t;
                      t = SSLsetAnnotations(i_3, x_7);
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
                          ATerm v_8 = NULL,d_9 = NULL,j_3 = NULL;
                          t = SSLgetAnnotations(z_25);
                          v_8 = t;
                          t = y_25;
                          {
                            static ATerm z_1 (ATerm t)
                            {
                              t = pat_td_1_0(f_129, t);
                              return(t);
                            }
                            t = fetch_1_0(z_1, t);
                          }
                          d_9 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, a_26, b_26, d_9);
                          j_3 = t;
                          t = SSLsetAnnotations(j_3, v_8);
                        }
                      }
                    else
                      {
                        ATerm m_10 = NULL,p_10 = NULL,k_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            a_26 = ATgetArgument(t, 0);
                            b_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(z_25);
                        m_10 = t;
                        t = b_26;
                        t = pat_td_1_0(f_129, t);
                        p_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, a_26, p_10);
                        k_3 = t;
                        t = SSLsetAnnotations(k_3, m_10);
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
    ATerm m_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_26 = NULL,w_26 = NULL,y_26 = NULL,z_26 = NULL;
        t = q_26;
        t = new_0_0(t);
        y_26 = t;
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
                if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  w_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, y_26);
            return(t);
          }
          t = pat_td_1_0(a_2, t);
        }
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_26)), not_null(s_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_26)))), (ATerm) ATmakeAppl(sym_Build_1, z_26)));
        LocalPopChoice(p_25);
      }
    else
      {
        t = m_25;
        {
          ATerm s_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_27 = NULL,g_27 = NULL,h_27 = NULL;
              t = q_26;
              t = new_0_0(t);
              g_27 = t;
              t = r_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((c_27 != NULL) && (c_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        c_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, g_27);
                  return(t);
                }
                t = pat_td_1_0(b_2, t);
              }
              h_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_27)))), (ATerm) ATmakeAppl(sym_Build_1, h_27)));
              LocalPopChoice(u_25);
            }
          else
            {
              t = s_25;
              {
                ATerm o_27 = NULL,p_27 = NULL,r_27 = NULL,s_27 = NULL;
                t = q_26;
                t = new_0_0(t);
                r_27 = t;
                t = r_26;
                {
                  static ATerm c_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_27 = ATgetArgument(t, 0);
                        if(((p_27 != NULL) && (p_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_27);
                    return(t);
                  }
                  t = pat_td_1_0(c_2, t);
                }
                s_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_27), not_null(p_27), (ATerm) ATmakeAppl(sym_Var_1, r_27))), (ATerm) ATmakeAppl(sym_Build_1, s_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm x_25 = t;
  if((PushChoice() == 0))
    {
      ATerm f_28 = NULL,i_28 = NULL,j_28 = NULL,s_3 = NULL;
      j_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_28);
      f_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_28);
      s_3 = t;
      t = SSLsetAnnotations(s_3, f_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_25;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_26;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm k_28 = NULL,o_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_28, o_28);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,t_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym__2))
        {
          q_28 = ATgetArgument(d_26, 0);
          r_28 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym__2))
          {
            t_28 = ATgetArgument(e_26, 0);
            u_28 = ATgetArgument(e_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_28), q_28), (ATerm) ATinsert(CheckATermList(u_28), r_28));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_26;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_28 = ATgetFirst((ATermList) t);
      a_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if(match_cons(h_26, sym__2))
        {
          b_29 = ATgetArgument(h_26, 0);
          c_29 = ATgetArgument(h_26, 1);
        }
      else
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(match_cons(n_26, sym__2))
          {
            d_29 = ATgetArgument(n_26, 0);
            e_29 = ATgetArgument(n_26, 1);
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
static ATerm m_8 (ATerm u_65, ATerm v_65, ATerm w_65, ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,t_3 = NULL;
  t = w_65;
  t = fetch_1_0(d_2, t);
  t = w_65;
  t = genzip_4_0(e_2, f_2, g_2, LiftPrimArg_0_0, t);
  e_28 = t;
  if(match_cons(t, sym__2))
    {
      a_28 = ATgetArgument(t, 0);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  x_27 = t;
  t = a_28;
  t = concat_0_0(t);
  c_28 = t;
  t = b_28;
  t = genzip_4_0(h_2, i_2, k_2, _id, t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
  t_3 = t;
  t = SSLsetAnnotations(t_3, x_27);
  if(match_cons(t, sym__2))
    {
      u_27 = ATgetArgument(t, 0);
      {
        ATerm x_26 = ATgetArgument(t, 1);
        if(match_cons(x_26, sym__2))
          {
            v_27 = ATgetArgument(x_26, 0);
            w_27 = ATgetArgument(x_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_27), (ATerm) ATmakeAppl(sym_CallT_3, u_65, v_65, w_27)));
  return(t);
}
static ATerm e_30 (ATerm m_29, ATerm t)
{
  ATerm x_29 = NULL;
  t = m_29;
  {
    ATerm f_27 = t;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,i_9 = NULL;
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
        i_9 = t;
        t = SSLsetAnnotations(i_9, y_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_27;
      }
  }
  t = new_0_0(t);
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, x_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_29)))), (ATerm) ATmakeAppl(sym_Var_1, x_29)));
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
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_30(b_30, t);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATmakeAppl(sym_Var_1, c_30)));
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
  ATerm k_27 = t;
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
      t = k_27;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_26;
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
      ATerm l_27 = ATgetArgument(t, 0);
      if(match_cons(l_27, sym__2))
        {
          r_12 = ATgetArgument(l_27, 0);
          s_12 = ATgetArgument(l_27, 1);
        }
      else
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(match_cons(m_27, sym__2))
          {
            t_12 = ATgetArgument(m_27, 0);
            u_12 = ATgetArgument(m_27, 1);
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
  t = term_c_26;
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
      ATerm n_27 = ATgetArgument(t, 0);
      if(match_cons(n_27, sym__2))
        {
          x_12 = ATgetArgument(n_27, 0);
          y_12 = ATgetArgument(n_27, 1);
        }
      else
        _fail(t);
      {
        ATerm q_27 = ATgetArgument(t, 1);
        if(match_cons(q_27, sym__2))
          {
            z_12 = ATgetArgument(q_27, 0);
            a_13 = ATgetArgument(q_27, 1);
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
  ATerm p_28 = t;
  if((PushChoice() == 0))
    {
      ATerm k_15 = NULL,l_15 = NULL,p_15 = NULL,q_11 = NULL;
      p_15 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_15);
      k_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_15);
      q_11 = t;
      t = SSLsetAnnotations(q_11, k_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_26;
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
      ATerm s_28 = ATgetArgument(t, 0);
      if(match_cons(s_28, sym__2))
        {
          w_15 = ATgetArgument(s_28, 0);
          x_15 = ATgetArgument(s_28, 1);
        }
      else
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(match_cons(v_28, sym__2))
          {
            y_15 = ATgetArgument(v_28, 0);
            k_16 = ATgetArgument(v_28, 1);
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
  t = term_c_26;
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
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if(match_cons(w_28, sym__2))
        {
          r_16 = ATgetArgument(w_28, 0);
          s_16 = ATgetArgument(w_28, 1);
        }
      else
        _fail(t);
      {
        ATerm x_28 = ATgetArgument(t, 1);
        if(match_cons(x_28, sym__2))
          {
            t_16 = ATgetArgument(x_28, 0);
            e_17 = ATgetArgument(x_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_16), r_16), (ATerm) ATinsert(CheckATermList(e_17), s_16));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,d_35 = NULL;
  x_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      y_34 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
      w_34 = ATgetArgument(t, 2);
      {
        ATerm k_11 = NULL,l_11 = NULL,r_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,o_11 = NULL;
        t = w_34;
        t = fetch_1_0(o_2, t);
        t = w_34;
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
              ATerm y_28 = ATgetArgument(t, 1);
              if(match_cons(y_28, sym__2))
                {
                  l_11 = ATgetArgument(y_28, 0);
                  r_11 = ATgetArgument(y_28, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_11), (ATerm) ATmakeAppl(sym_PrimT_3, y_34, d_35, r_11)));
      }
    }
  else
    {
      ATerm k_14 = NULL,p_14 = NULL,b_15 = NULL,c_15 = NULL,e_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_12 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          y_34 = ATgetArgument(t, 0);
          d_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_35;
      t = fetch_1_0(v_2, t);
      t = d_35;
      t = genzip_4_0(x_2, y_2, z_2, LiftPrimArg_0_0, t);
      j_15 = t;
      if(match_cons(t, sym__2))
        {
          e_15 = ATgetArgument(t, 0);
          g_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_15);
      c_15 = t;
      t = e_15;
      t = concat_0_0(t);
      h_15 = t;
      t = g_15;
      t = genzip_4_0(a_3, c_3, e_3, _id, t);
      i_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_15, i_15);
      k_12 = t;
      t = SSLsetAnnotations(k_12, c_15);
      if(match_cons(t, sym__2))
        {
          k_14 = ATgetArgument(t, 0);
          {
            ATerm f_29 = ATgetArgument(t, 1);
            if(match_cons(f_29, sym__2))
              {
                p_14 = ATgetArgument(f_29, 0);
                b_15 = ATgetArgument(f_29, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_14), (ATerm) ATmakeAppl(sym_PrimT_3, y_34, (ATerm)ATempty, b_15)));
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
        ATerm w_17 = NULL,m_13 = NULL;
        t = SSLgetAnnotations(a_36);
        w_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, x_35, y_35, z_35);
        m_13 = t;
        t = SSLsetAnnotations(m_13, w_17);
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
  ATerm w_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_29;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm l_37 = NULL,o_37 = NULL,p_37 = NULL,u_37 = NULL;
  o_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
      l_37 = ATgetArgument(t, 2);
      {
        ATerm b_19 = NULL,o_13 = NULL;
        t = SSLgetAnnotations(o_37);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, p_37, u_37, l_37);
        o_13 = t;
        t = SSLsetAnnotations(o_13, b_19);
      }
    }
  else
    {
      ATerm z_19 = NULL,y_18 = NULL;
      if(match_cons(t, sym_App_2))
        {
          p_37 = ATgetArgument(t, 0);
          u_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_37);
      z_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, p_37, u_37);
      y_18 = t;
      t = SSLsetAnnotations(y_18, z_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm d_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(m_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_30;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      e_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_38;
  if(match_cons(t, sym_StratRule_3))
    {
      f_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
      h_38 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_38), (ATerm) ATmakeAppl(sym_Where_1, h_38)), f_38));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          f_38 = ATgetArgument(t, 0);
          g_38 = ATgetArgument(t, 1);
          h_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_38;
      t = pureterm_0_0(t);
      t = g_38;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, g_38)), (ATerm) ATmakeAppl(sym_Where_1, h_38)), (ATerm) ATmakeAppl(sym_Match_1, f_38)));
    }
  return(t);
}
static ATerm q_8 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,a_39 = NULL,b_39 = NULL,i_39 = NULL;
  t = new_0_0(t);
  a_39 = t;
  t = h_61;
  {
    static ATerm n_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm j_30 = ATgetArgument(t, 0);
          if(match_cons(j_30, sym_Var_1))
            {
              if(((x_38 != NULL) && (x_38 != ATgetArgument(j_30, 0))))
                _fail(ATgetArgument(j_30, 0));
              else
                x_38 = ATgetArgument(j_30, 0);
            }
          else
            _fail(t);
          if(((v_38 != NULL) && (v_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_38 = ATgetArgument(t, 1);
          {
            ATerm k_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, x_38);
      return(t);
    }
    t = oncetd_1_0(n_3, t);
  }
  b_39 = t;
  t = i_61;
  {
    static ATerm o_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm l_30 = ATgetArgument(t, 0);
          if(match_cons(l_30, sym_Var_1))
            {
              if(((x_38 != NULL) && (x_38 != ATgetArgument(l_30, 0))))
                _fail(ATgetArgument(l_30, 0));
              else
                x_38 = ATgetArgument(l_30, 0);
            }
          else
            _fail(t);
          if(((w_38 != NULL) && (w_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_38 = ATgetArgument(t, 1);
          {
            ATerm m_30 = ATgetArgument(t, 2);
            if(match_cons(m_30, sym_CallT_3))
              {
                if(((u_38 != NULL) && (u_38 != ATgetArgument(m_30, 0))))
                  _fail(ATgetArgument(m_30, 0));
                else
                  u_38 = ATgetArgument(m_30, 0);
                {
                  ATerm n_30 = ATgetArgument(m_30, 1);
                  if(((ATgetType(n_30) != AT_LIST) || !(ATisEmpty(n_30))))
                    _fail(t);
                }
                {
                  ATerm o_30 = ATgetArgument(m_30, 2);
                  if(((ATgetType(o_30) != AT_LIST) || !(ATisEmpty(o_30))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, a_39);
      return(t);
    }
    t = oncetd_1_0(o_3, t);
  }
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, b_39, i_39, (ATerm) ATmakeAppl(sym_Seq_2, j_61, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(u_38), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_38), not_null(w_38), term_z_17))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_38)), (ATerm) ATmakeAppl(sym_Var_1, a_39))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_30 = t;
      int y_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,a_42 = NULL;
          w_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              x_41 = ATgetArgument(t, 0);
              t = x_41;
              if(match_cons(t, sym_Rule_3))
                {
                  t_41 = ATgetArgument(t, 0);
                  u_41 = ATgetArgument(t, 1);
                  v_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_41;
              t = q_8(t_41, u_41, v_41, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm f_21 = NULL,i_21 = NULL,r_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  x_41 = ATgetArgument(t, 0);
                  a_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_41);
              f_21 = t;
              t = a_42;
              t = desugarRule_0_0(t);
              i_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, x_41, i_21);
              r_21 = t;
              t = SSLsetAnnotations(r_21, f_21);
            }
          LocalPopChoice(y_30);
        }
      else
        {
          t = x_30;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
    }
  t = repeat_2_0(q_3, _id, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm f_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_42 = NULL,r_43 = NULL,t_43 = NULL,u_43 = NULL;
            z_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                r_43 = ATgetArgument(t, 0);
                t_43 = ATgetArgument(t, 1);
                u_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = z_42;
            t = m_8(r_43, t_43, u_43, t);
            LocalPopChoice(g_31);
          }
        else
          {
            t = f_31;
            {
              ATerm h_31 = t;
              int i_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(i_31);
                }
              else
                {
                  t = h_31;
                  {
                    ATerm j_31 = t;
                    int k_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(k_31);
                      }
                    else
                      {
                        t = j_31;
                        {
                          ATerm l_31 = t;
                          int m_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_31 = t;
                              int o_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_44 = NULL,e_44 = NULL,i_44 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      c_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_44;
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
                                          i_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, e_44, i_44);
                                    }
                                  LocalPopChoice(o_31);
                                }
                              else
                                {
                                  t = n_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(m_31);
                            }
                          else
                            {
                              t = l_31;
                              {
                                ATerm p_31 = t;
                                int q_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(q_31);
                                  }
                                else
                                  {
                                    t = p_31;
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
  ATerm m_46 = NULL,r_46 = NULL,s_46 = NULL;
  m_46 = t;
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm t_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_31);
        t = m_46;
        {
          ATerm u_31 = t;
          if((PushChoice() == 0))
            {
              ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,n_22 = NULL,u_21 = NULL;
              n_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  i_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_22);
              h_22 = t;
              t = i_22;
              {
                ATerm v_31 = t;
                int w_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_23 = NULL;
                    t = term_x_18;
                    e_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_x_18, i_22);
                    t = k_9(e_23, i_22, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm x_31 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_31) != ATmakeSymbol("m_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = i_22;
                    LocalPopChoice(w_31);
                  }
                else
                  {
                    t = v_31;
                    {
                      ATerm x_22 = NULL,r_23 = NULL,t_21 = NULL,x_23 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          x_22 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(i_22);
                      r_23 = t;
                      t = term_x_18;
                      x_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_x_18, x_22);
                      t = k_9(x_23, x_22, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm y_31 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) y_31) != ATmakeSymbol("m_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, x_22);
                      t_21 = t;
                      t = SSLsetAnnotations(t_21, r_23);
                    }
                  }
              }
              j_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, j_22);
              u_21 = t;
              t = SSLsetAnnotations(u_21, h_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_31;
            }
        }
        t = term_h_21;
      }
    else
      {
        t = r_31;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_h_21;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                r_46 = ATgetArgument(t, 0);
                {
                  ATerm v_46 = NULL;
                  t = r_46;
                  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
                  t = map_1_0(f_4, t);
                  v_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_31, v_46);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    r_46 = ATgetArgument(t, 0);
                    s_46 = ATgetArgument(t, 1);
                    {
                      ATerm n_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, r_46, s_46);
                      t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
                      t = map_1_0(l_4, t);
                      n_48 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_z_31, n_48);
                    }
                  }
                else
                  {
                    ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm a_32 = ATgetArgument(t, 0);
                        ATerm b_32 = ATgetArgument(t, 1);
                        ATerm d_32 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_e_32;
                    c_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_f_32);
                    d_24 = t;
                    t = SSL_printnl(c_24, d_24);
                    t = term_g_32;
                    b_24 = t;
                    t = SSL_exit(b_24);
                    t = (ATerm) ATinsert(ATempty, term_f_32);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm w_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_46);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm j_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_32);
          }
        else
          {
            t = j_32;
            {
              ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,e_47 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_47 = ATgetArgument(t, 0);
                  b_47 = ATgetArgument(t, 1);
                  c_47 = ATgetArgument(t, 2);
                  e_47 = ATgetArgument(t, 3);
                  t = c_47;
                  t = map_1_0(w_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_47 = ATgetArgument(t, 0);
                      b_47 = ATgetArgument(t, 1);
                      c_47 = ATgetArgument(t, 2);
                      e_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_47;
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
  ATerm p_47 = NULL;
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_47 = ATgetArgument(t, 0);
          {
            ATerm o_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_32);
      t = p_47;
    }
  else
    {
      t = m_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_47;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm e_48 = NULL;
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_48 = ATgetArgument(t, 0);
          {
            ATerm r_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_32);
      t = e_48;
    }
  else
    {
      t = p_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_48;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_48);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm o_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_48);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm s_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = s_32;
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
              ATerm u_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_48 = ATgetArgument(t, 0);
                  x_48 = ATgetArgument(t, 1);
                  y_48 = ATgetArgument(t, 2);
                  z_48 = ATgetArgument(t, 3);
                  t = y_48;
                  t = map_1_0(i_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_48 = ATgetArgument(t, 0);
                      x_48 = ATgetArgument(t, 1);
                      y_48 = ATgetArgument(t, 2);
                      z_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_48;
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
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_49 = ATgetArgument(t, 0);
          {
            ATerm z_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_32);
      t = m_49;
    }
  else
    {
      t = x_32;
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
  ATerm z_49 = NULL;
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_49 = ATgetArgument(t, 0);
          {
            ATerm e_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_33);
      t = z_49;
    }
  else
    {
      t = c_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_49;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm g_50 = NULL;
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_50);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(r_3, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm j_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_52 = ATgetArgument(t, 0);
      t = j_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_52 = ATgetArgument(t, 0);
          {
            ATerm f_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_52;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_52), (ATerm) ATempty);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm r_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_52 = ATgetArgument(t, 0);
      t = r_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_52 = ATgetArgument(t, 0);
          {
            ATerm g_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_52;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, r_52);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm m_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_53);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            {
              ATerm s_53 = NULL,a_54 = NULL,g_54 = NULL,i_54 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_53 = ATgetArgument(t, 0);
                  a_54 = ATgetArgument(t, 1);
                  g_54 = ATgetArgument(t, 2);
                  i_54 = ATgetArgument(t, 3);
                  t = g_54;
                  t = map_1_0(z_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_53 = ATgetArgument(t, 0);
                      a_54 = ATgetArgument(t, 1);
                      g_54 = ATgetArgument(t, 2);
                      i_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_54;
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
  ATerm l_55 = NULL;
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_55 = ATgetArgument(t, 0);
          {
            ATerm n_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_33);
      t = l_55;
    }
  else
    {
      t = l_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_55;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm y_55 = NULL;
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_55 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_33);
      t = y_55;
    }
  else
    {
      t = o_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_55;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm f_56 = NULL;
  f_56 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_56);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm g_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_56);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm t_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_33);
          }
        else
          {
            t = t_33;
            {
              ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,n_56 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_56 = ATgetArgument(t, 0);
                  j_56 = ATgetArgument(t, 1);
                  k_56 = ATgetArgument(t, 2);
                  n_56 = ATgetArgument(t, 3);
                  t = k_56;
                  t = map_1_0(g_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_56 = ATgetArgument(t, 0);
                      j_56 = ATgetArgument(t, 1);
                      k_56 = ATgetArgument(t, 2);
                      n_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_56;
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
  ATerm u_56 = NULL;
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_56 = ATgetArgument(t, 0);
          {
            ATerm x_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_33);
      t = u_56;
    }
  else
    {
      t = v_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_56;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm x_57 = NULL;
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_57 = ATgetArgument(t, 0);
          {
            ATerm b_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_34);
      t = x_57;
    }
  else
    {
      t = z_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_57;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm a_58 = NULL;
  a_58 = t;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_58 = NULL,z_24 = NULL,x_21 = NULL,n_25 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            s_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_58);
        z_24 = t;
        t = term_x_18;
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_18, s_58);
        t = k_9(n_25, s_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm e_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_34) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, s_58);
        x_21 = t;
        t = SSLsetAnnotations(x_21, z_24);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm q_25 = NULL;
          t = term_x_18;
          q_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_18, a_58);
          t = k_9(q_25, a_58, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_34) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = a_58;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, a_58);
  return(t);
}
static ATerm r_8 (ATerm n_130 (ATerm), ATerm w_74, ATerm t_74, ATerm u_74, ATerm d_75, ATerm h_75, ATerm i_75, ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,k_51 = NULL,l_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,y_51 = NULL,a_52 = NULL,b_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_75, term_f_19);
  {
    ATerm g_34 = t;
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
        t = g_34;
      }
  }
  t = term_i_34;
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_34, w_74);
  t = v_9(b_52, w_74, t);
  f_51 = t;
  t = term_j_34;
  a_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, w_74);
  t = v_9(a_52, w_74, t);
  g_51 = t;
  t = new_0_0(t);
  h_51 = t;
  t = t_74;
  t = map_1_0(m_4, t);
  i_51 = t;
  t = u_74;
  t = map_1_0(n_4, t);
  k_51 = t;
  t = new_0_0(t);
  l_51 = t;
  t = d_75;
  t = dummify_0_0(t);
  r_51 = t;
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_51;
        if((d_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, l_51);
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        t = r_51;
      }
  }
  q_51 = t;
  t = r_51;
  t = free_vars_3_0(r_4, s_4, tboundin_3_0, t);
  t = map_1_0(c_5, t);
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_75, i_75);
  t = free_vars_3_0(d_5, e_5, tboundin_3_0, t);
  t = filter_1_0(i_5, t);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
  t = diff_0_0(t);
  u_51 = t;
  t = new_0_0(t);
  v_51 = t;
  t = w_74;
  t = n_130(t);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, y_51, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_19, (ATerm) ATinsert(CheckATermList(u_51), (ATerm) ATmakeAppl(sym_Str_1, v_51)))), r_51)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, g_51, t_74, u_74, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_19, (ATerm) ATinsert(CheckATermList(u_51), (ATerm) ATmakeAppl(sym_Str_1, v_51)))), d_75)), h_75, (ATerm) ATmakeAppl(sym_Seq_2, term_v_34, i_75)))), (ATerm) ATmakeAppl(sym_RDefT_4, f_51, t_74, u_74, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_51), d_75), (ATerm)ATmakeAppl(sym_Var_1, h_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_74)))), q_51), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_51), i_51, k_51), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_34), (ATerm) ATmakeAppl(sym_Var_1, l_51)))))), (ATerm) ATmakeAppl(sym_Var_1, h_51)))))), (ATerm) ATmakeAppl(sym_RDefT_4, w_74, t_74, u_74, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_51), d_75), h_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_74)))), q_51), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_19, (ATerm) ATinsert(CheckATermList(u_51), (ATerm) ATmakeAppl(sym_Str_1, v_51)))), term_m_34))), i_75)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,a_27 = NULL,b_27 = NULL,d_27 = NULL,e_27 = NULL;
      p_26 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          t_26 = ATgetArgument(t, 0);
          u_26 = ATgetArgument(t, 1);
          v_26 = ATgetArgument(t, 2);
          a_27 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_27;
      if(match_cons(t, sym_Rule_3))
        {
          b_27 = ATgetArgument(t, 0);
          d_27 = ATgetArgument(t, 1);
          e_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_26;
      t = r_8(m_5, t_26, u_26, v_26, b_27, d_27, e_27, t);
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(o_5, t);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_27))));
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm y_27 = NULL;
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_27))));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_26;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm z_27 = NULL,g_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_27 = ATgetFirst((ATermList) t);
      g_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_27, g_28);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm h_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_35 = ATgetArgument(t, 0);
      if(match_cons(g_35, sym__2))
        {
          h_28 = ATgetArgument(g_35, 0);
          l_28 = ATgetArgument(g_35, 1);
        }
      else
        _fail(t);
      {
        ATerm h_35 = ATgetArgument(t, 1);
        if(match_cons(h_35, sym__2))
          {
            m_28 = ATgetArgument(h_35, 0);
            n_28 = ATgetArgument(h_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_28), h_28), (ATerm) ATinsert(CheckATermList(n_28), l_28));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
      s_29 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          t_29 = ATgetArgument(t, 0);
          u_29 = ATgetArgument(t, 1);
          v_29 = ATgetArgument(t, 2);
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
      t = s_29;
      t = r_8(w_5, t_29, u_29, v_29, g_30, h_30, i_30, t);
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(x_5, t);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_30))));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_30))));
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_26;
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
  ATerm t_30 = NULL,u_30 = NULL,d_31 = NULL,e_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      if(match_cons(o_35, sym__2))
        {
          t_30 = ATgetArgument(o_35, 0);
          u_30 = ATgetArgument(o_35, 1);
        }
      else
        _fail(t);
      {
        ATerm p_35 = ATgetArgument(t, 1);
        if(match_cons(p_35, sym__2))
          {
            d_31 = ATgetArgument(p_35, 0);
            e_31 = ATgetArgument(p_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_31), t_30), (ATerm) ATinsert(CheckATermList(e_31), u_30));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(c_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm k_67 = NULL;
  k_67 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_67))));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_26;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_67 = ATgetFirst((ATermList) t);
      m_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_67, m_67);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_35 = ATgetArgument(t, 0);
      if(match_cons(s_35, sym__2))
        {
          n_67 = ATgetArgument(s_35, 0);
          o_67 = ATgetArgument(s_35, 1);
        }
      else
        _fail(t);
      {
        ATerm t_35 = ATgetArgument(t, 1);
        if(match_cons(t_35, sym__2))
          {
            p_67 = ATgetArgument(t_35, 0);
            q_67 = ATgetArgument(t_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_67), n_67), (ATerm) ATinsert(CheckATermList(q_67), o_67));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(i_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm t_67 = NULL;
  t_67 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_67))));
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_26;
  return(t);
}
static ATerm k_6 (ATerm t)
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
static ATerm l_6 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_36 = ATgetArgument(t, 0);
      if(match_cons(b_36, sym__2))
        {
          w_67 = ATgetArgument(b_36, 0);
          x_67 = ATgetArgument(b_36, 1);
        }
      else
        _fail(t);
      {
        ATerm c_36 = ATgetArgument(t, 1);
        if(match_cons(c_36, sym__2))
          {
            y_67 = ATgetArgument(c_36, 0);
            z_67 = ATgetArgument(c_36, 1);
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
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL;
  z_66 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      a_67 = ATgetArgument(t, 0);
      {
        ATerm f_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,z_21 = NULL;
        t = a_67;
        t = map_1_0(j_5, t);
        t = genzip_4_0(p_5, s_5, t_5, _id, t);
        l_26 = t;
        if(match_cons(t, sym__2))
          {
            i_26 = ATgetArgument(t, 0);
            j_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_26);
        f_26 = t;
        t = j_26;
        t = concat_0_0(t);
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_26, k_26);
        z_21 = t;
        t = SSLsetAnnotations(z_21, f_26);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          a_67 = ATgetArgument(t, 0);
          {
            ATerm g_29 = NULL,l_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,a_22 = NULL;
            t = a_67;
            t = map_1_0(v_5, t);
            t = genzip_4_0(y_5, z_5, a_6, _id, t);
            r_29 = t;
            if(match_cons(t, sym__2))
              {
                l_29 = ATgetArgument(t, 0);
                p_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_29);
            g_29 = t;
            t = p_29;
            t = concat_0_0(t);
            q_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_29, q_29);
            a_22 = t;
            t = SSLsetAnnotations(a_22, g_29);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              a_67 = ATgetArgument(t, 0);
              t = a_67;
              t = map_1_0(b_6, t);
              t = genzip_4_0(d_6, f_6, g_6, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_67 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = a_67;
              t = map_1_0(h_6, t);
              t = genzip_4_0(j_6, k_6, l_6, _id, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm k_99 (ATerm), ATerm t)
{
  static ATerm e_68 (ATerm t)
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_99(t);
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = SRTS_one(e_68, t);
      }
    return(t);
  }
  t = e_68(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_x_18;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm s_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL;
  w_68 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      v_68 = ATgetArgument(t, 0);
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_68;
            s_68 = t;
            t = w_68;
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            t = w_68;
            s_68 = t;
            t = w_68;
          }
      }
    }
  else
    {
      t = w_68;
      s_68 = t;
      t = w_68;
    }
  t = term_l_36;
  u_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_68, term_l_36);
  t = l_9(s_6, s_68, u_68, t);
  t = w_68;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm i_130 (ATerm), ATerm t)
{
  static ATerm x_68 (ATerm t)
  {
    static ATerm m_6 (ATerm t)
    {
      ATerm n_36 = t;
      int o_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_130(t);
          LocalPopChoice(o_36);
        }
      else
        {
          t = n_36;
          {
            ATerm j_68 = NULL,k_68 = NULL,n_68 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                j_68 = ATgetArgument(t, 0);
                k_68 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, j_68, k_68);
            {
              static ATerm o_6 (ATerm t)
              {
                t = j_68;
                t = map_1_0(q_6, t);
                t = k_68;
                t = x_68(t);
                if(((n_68 != NULL) && (n_68 != t)))
                  _fail(t);
                else
                  n_68 = t;
                return(t);
              }
              t = scope_2_0(n_6, o_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, j_68, not_null(n_68));
          }
        }
      return(t);
    }
    t = oncetd_1_0(m_6, t);
    return(t);
  }
  t = x_68(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm h_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_69);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(s_36);
          }
        else
          {
            t = r_36;
            {
              ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_69 = ATgetArgument(t, 0);
                  k_69 = ATgetArgument(t, 1);
                  l_69 = ATgetArgument(t, 2);
                  m_69 = ATgetArgument(t, 3);
                  t = l_69;
                  t = map_1_0(x_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_69 = ATgetArgument(t, 0);
                      k_69 = ATgetArgument(t, 1);
                      l_69 = ATgetArgument(t, 2);
                      m_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_69;
                  t = map_1_0(y_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm t_69 = NULL;
  ATerm t_36 = t;
  int u_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_69 = ATgetArgument(t, 0);
          {
            ATerm v_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_36);
      t = t_69;
    }
  else
    {
      t = t_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_69;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm h_72 = NULL;
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_72 = ATgetArgument(t, 0);
          {
            ATerm y_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_36);
      t = h_72;
    }
  else
    {
      t = w_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_72 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_72;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm n_73 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_73 = ATgetArgument(t, 0);
      t = n_73;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_73 = ATgetArgument(t, 0);
          {
            ATerm z_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_73;
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm v_75 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_75 = ATgetArgument(t, 0);
      t = v_75;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_75 = ATgetArgument(t, 0);
          {
            ATerm b_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_75;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm z_75 = NULL;
  if(match_cons(t, sym__2))
    {
      z_75 = ATgetArgument(t, 0);
      if((z_75 != ATgetArgument(t, 1)))
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
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  g_69 = t;
  t = free_vars_3_0(t_6, v_6, tboundin_3_0, t);
  e_69 = t;
  t = g_69;
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_73 = NULL;
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm h_37 = ATgetArgument(t, 0);
                ATerm i_37 = ATgetArgument(t, 1);
                a_73 = ATgetArgument(t, 2);
                {
                  ATerm j_37 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_37);
            t = a_73;
            t = map_1_0(z_6, t);
          }
        else
          {
            t = e_37;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm k_37 = ATgetArgument(t, 0);
                ATerm m_37 = ATgetArgument(t, 1);
                a_73 = ATgetArgument(t, 2);
                {
                  ATerm n_37 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = a_73;
            t = map_1_0(b_7, t);
          }
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = (ATerm) ATempty;
      }
  }
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_69, f_69);
  t = z_8(g_7, e_69, f_69, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_x_18;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm f_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL;
  j_76 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      i_76 = ATgetArgument(t, 0);
      {
        ATerm q_37 = t;
        int r_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_76;
            f_76 = t;
            t = j_76;
            LocalPopChoice(r_37);
          }
        else
          {
            t = q_37;
            t = j_76;
            f_76 = t;
            t = j_76;
          }
      }
    }
  else
    {
      t = j_76;
      f_76 = t;
      t = j_76;
    }
  t = term_l_36;
  h_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_76, term_l_36);
  t = l_9(k_7, f_76, h_76, t);
  t = j_76;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_x_18;
  return(t);
}
static ATerm t_8 (ATerm g_73, ATerm f_73, ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL;
  static ATerm i_7 (ATerm t)
  {
    t = g_73;
    t = def_tvars_0_0(t);
    t = map_1_0(j_7, t);
    t = g_73;
    {
      static ATerm l_7 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((c_76 != NULL) && (c_76 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              c_76 = ATgetArgument(t, 0);
            if(((b_76 != NULL) && (b_76 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              b_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, c_76);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(l_7, t);
    }
    if(((d_76 != NULL) && (d_76 != t)))
      _fail(t);
    else
      d_76 = t;
    return(t);
  }
  t = scope_2_0(h_7, i_7, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_76)), not_null(d_76)), f_73);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t)
{
  static ATerm k_76 (ATerm t)
  {
    ATerm t_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_97(t);
        t = k_76(t);
        LocalPopChoice(x_37);
      }
    else
      {
        t = t_37;
        t = h_97(t);
      }
    return(t);
  }
  t = k_76(t);
  return(t);
}
ATerm listtd_1_0 (ATerm c_106 (ATerm), ATerm t)
{
  static ATerm y_76 (ATerm t)
  {
    ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
    t = c_106(t);
    v_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_76;
      }
    else
      {
        ATerm c_32 = NULL,k_32 = NULL,d_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_76 = ATgetFirst((ATermList) t);
            x_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_76);
        c_32 = t;
        t = x_76;
        t = y_76(t);
        k_32 = t;
        t = (ATerm) ATinsert(CheckATermList(k_32), w_76);
        d_22 = t;
        t = SSLsetAnnotations(d_22, c_32);
      }
    return(t);
  }
  t = y_76(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,f_77 = NULL,g_77 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      f_77 = ATgetArgument(t, 0);
      g_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_77;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_77 = ATgetFirst((ATermList) t);
      d_77 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_a_38, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, d_77, g_77)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_77))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_77;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
  e_81 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_81 = ATgetArgument(t, 0);
      b_81 = ATgetArgument(t, 1);
      {
        ATerm t_32 = NULL,a_33 = NULL,b_33 = NULL,f_22 = NULL;
        t = SSLgetAnnotations(e_81);
        t_32 = t;
        t = f_81;
        t = c_130(t);
        a_33 = t;
        t = b_81;
        t = a_130(t);
        b_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_33, b_33);
        f_22 = t;
        t = SSLsetAnnotations(f_22, t_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          f_81 = ATgetArgument(t, 0);
          b_81 = ATgetArgument(t, 1);
          c_81 = ATgetArgument(t, 2);
          d_81 = ATgetArgument(t, 3);
          {
            ATerm y_33 = NULL,h_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,k_22 = NULL;
            t = SSLgetAnnotations(e_81);
            y_33 = t;
            t = f_81;
            t = c_130(t);
            h_34 = t;
            t = b_81;
            t = c_130(t);
            r_34 = t;
            t = c_81;
            t = c_130(t);
            s_34 = t;
            t = d_81;
            t = a_130(t);
            t_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, h_34, r_34, s_34, t_34);
            k_22 = t;
            t = SSLsetAnnotations(k_22, y_33);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              f_81 = ATgetArgument(t, 0);
              b_81 = ATgetArgument(t, 1);
              c_81 = ATgetArgument(t, 2);
              d_81 = ATgetArgument(t, 3);
              {
                ATerm u_35 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,m_36 = NULL,l_22 = NULL;
                t = SSLgetAnnotations(e_81);
                u_35 = t;
                t = f_81;
                t = c_130(t);
                i_36 = t;
                t = b_81;
                t = c_130(t);
                j_36 = t;
                t = c_81;
                t = c_130(t);
                k_36 = t;
                t = d_81;
                t = a_130(t);
                m_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, i_36, j_36, k_36, m_36);
                l_22 = t;
                t = SSLsetAnnotations(l_22, u_35);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  f_81 = ATgetArgument(t, 0);
                  {
                    ATerm a_37 = NULL,g_37 = NULL,m_22 = NULL;
                    t = SSLgetAnnotations(e_81);
                    a_37 = t;
                    t = f_81;
                    t = a_130(t);
                    g_37 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_37);
                    m_22 = t;
                    t = SSLsetAnnotations(m_22, a_37);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      f_81 = ATgetArgument(t, 0);
                      {
                        ATerm s_37 = NULL,y_37 = NULL,o_22 = NULL;
                        t = SSLgetAnnotations(e_81);
                        s_37 = t;
                        t = f_81;
                        t = a_130(t);
                        y_37 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, y_37);
                        o_22 = t;
                        t = SSLsetAnnotations(o_22, s_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          f_81 = ATgetArgument(t, 0);
                          {
                            ATerm k_38 = NULL,m_38 = NULL,p_22 = NULL;
                            t = SSLgetAnnotations(e_81);
                            k_38 = t;
                            t = f_81;
                            t = a_130(t);
                            m_38 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, m_38);
                            p_22 = t;
                            t = SSLsetAnnotations(p_22, k_38);
                          }
                        }
                      else
                        {
                          ATerm j_39 = NULL,l_39 = NULL,q_22 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              f_81 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(e_81);
                          j_39 = t;
                          t = f_81;
                          t = a_130(t);
                          l_39 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, l_39);
                          q_22 = t;
                          t = SSLsetAnnotations(q_22, j_39);
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
  ATerm m_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_82);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
      {
        ATerm d_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_38);
          }
        else
          {
            t = d_38;
            {
              ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_82 = ATgetArgument(t, 0);
                  q_82 = ATgetArgument(t, 1);
                  r_82 = ATgetArgument(t, 2);
                  s_82 = ATgetArgument(t, 3);
                  t = r_82;
                  t = map_1_0(o_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_82 = ATgetArgument(t, 0);
                      q_82 = ATgetArgument(t, 1);
                      r_82 = ATgetArgument(t, 2);
                      s_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_82;
                  t = map_1_0(p_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm e_83 = NULL;
  ATerm j_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_83 = ATgetArgument(t, 0);
          {
            ATerm n_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_38);
      t = e_83;
    }
  else
    {
      t = j_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_83;
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm r_83 = NULL;
  ATerm o_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_83 = ATgetArgument(t, 0);
          {
            ATerm q_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_38);
      t = r_83;
    }
  else
    {
      t = o_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_83;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm z_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_83);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm r_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_38);
    }
  else
    {
      t = r_38;
      {
        ATerm t_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_38);
          }
        else
          {
            t = t_38;
            {
              ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,g_84 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_84 = ATgetArgument(t, 0);
                  c_84 = ATgetArgument(t, 1);
                  d_84 = ATgetArgument(t, 2);
                  g_84 = ATgetArgument(t, 3);
                  t = d_84;
                  t = map_1_0(t_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_84 = ATgetArgument(t, 0);
                      c_84 = ATgetArgument(t, 1);
                      d_84 = ATgetArgument(t, 2);
                      g_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_84;
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
  ATerm q_84 = NULL;
  ATerm z_38 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_84 = ATgetArgument(t, 0);
          {
            ATerm h_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_39);
      t = q_84;
    }
  else
    {
      t = z_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_84;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm f_85 = NULL;
  ATerm k_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_85 = ATgetArgument(t, 0);
          {
            ATerm n_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_39);
      t = f_85;
    }
  else
    {
      t = k_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_85;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm n_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_85);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      {
        ATerm q_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_39);
          }
        else
          {
            t = q_39;
            {
              ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL,u_85 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_85 = ATgetArgument(t, 0);
                  q_85 = ATgetArgument(t, 1);
                  r_85 = ATgetArgument(t, 2);
                  u_85 = ATgetArgument(t, 3);
                  t = r_85;
                  t = map_1_0(y_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_85 = ATgetArgument(t, 0);
                      q_85 = ATgetArgument(t, 1);
                      r_85 = ATgetArgument(t, 2);
                      u_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_85;
                  t = map_1_0(z_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm d_86 = NULL;
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_86 = ATgetArgument(t, 0);
          {
            ATerm w_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_39);
      t = d_86;
    }
  else
    {
      t = t_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_86;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm p_86 = NULL;
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_86 = ATgetArgument(t, 0);
          {
            ATerm z_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_39);
      t = p_86;
    }
  else
    {
      t = x_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_86;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm v_86 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_86);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm a_40 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_40);
    }
  else
    {
      t = a_40;
      {
        ATerm c_40 = t;
        int d_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_40);
          }
        else
          {
            t = c_40;
            {
              ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_86 = ATgetArgument(t, 0);
                  y_86 = ATgetArgument(t, 1);
                  z_86 = ATgetArgument(t, 2);
                  a_87 = ATgetArgument(t, 3);
                  t = z_86;
                  t = map_1_0(c_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_86 = ATgetArgument(t, 0);
                      y_86 = ATgetArgument(t, 1);
                      z_86 = ATgetArgument(t, 2);
                      a_87 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_86;
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
  ATerm h_87 = NULL;
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_87 = ATgetArgument(t, 0);
          {
            ATerm i_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_40);
      t = h_87;
    }
  else
    {
      t = f_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_87;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm w_87 = NULL;
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_87 = ATgetArgument(t, 0);
          {
            ATerm l_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_40);
      t = w_87;
    }
  else
    {
      t = j_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_87;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm k_82 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      k_82 = ATgetArgument(t, 0);
      t = k_82;
      t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          k_82 = ATgetArgument(t, 0);
          t = k_82;
          t = free_vars_3_0(r_7, s_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              k_82 = ATgetArgument(t, 0);
              t = k_82;
              t = free_vars_3_0(v_7, w_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  k_82 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_82;
              t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm a_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_89);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm m_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_40);
    }
  else
    {
      t = m_40;
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
            {
              ATerm e_89 = NULL,g_89 = NULL,j_89 = NULL,l_89 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_89 = ATgetArgument(t, 0);
                  g_89 = ATgetArgument(t, 1);
                  j_89 = ATgetArgument(t, 2);
                  l_89 = ATgetArgument(t, 3);
                  t = j_89;
                  t = map_1_0(h_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_89 = ATgetArgument(t, 0);
                      g_89 = ATgetArgument(t, 1);
                      j_89 = ATgetArgument(t, 2);
                      l_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_89;
                  t = map_1_0(i_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm z_89 = NULL;
  ATerm v_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_89 = ATgetArgument(t, 0);
          {
            ATerm z_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_40);
      t = z_89;
    }
  else
    {
      t = v_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_89;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm l_90 = NULL;
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_90 = ATgetArgument(t, 0);
          {
            ATerm c_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_41);
      t = l_90;
    }
  else
    {
      t = a_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_90;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm l_88 = NULL,s_88 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      s_88 = ATgetArgument(t, 0);
      t = s_88;
      if(match_cons(t, sym_Rule_3))
        {
          l_88 = ATgetArgument(t, 0);
          {
            ATerm g_41 = ATgetArgument(t, 1);
          }
          {
            ATerm h_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_88;
      t = free_vars_3_0(f_8, g_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          s_88 = ATgetArgument(t, 0);
          {
            ATerm i_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_88;
    }
  return(t);
}
static ATerm z_8 (ATerm d_109 (ATerm), ATerm k_29, ATerm j_29, ATerm t)
{
  static ATerm q_91 (ATerm t)
  {
    ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL;
    j_91 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_91 = ATgetFirst((ATermList) t);
            l_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_41 = t;
          int k_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_91;
              {
                static ATerm j_8 (ATerm t)
                {
                  t = j_29;
                  return(t);
                }
                t = a_9(d_109, j_8, k_91, l_91, t);
              }
              t = q_91(t);
              LocalPopChoice(k_41);
            }
          else
            {
              t = j_41;
              {
                ATerm s_39 = NULL,v_39 = NULL,f_23 = NULL;
                t = SSLgetAnnotations(j_91);
                s_39 = t;
                t = l_91;
                t = q_91(t);
                v_39 = t;
                t = (ATerm) ATinsert(CheckATermList(v_39), k_91);
                f_23 = t;
                t = SSLsetAnnotations(f_23, s_39);
              }
            }
        }
      }
    return(t);
  }
  t = k_29;
  t = q_91(t);
  return(t);
}
static ATerm a_9 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm o_29, ATerm n_29, ATerm t)
{
  t = h_109(t);
  {
    static ATerm l_8 (ATerm t)
    {
      ATerm y_91 = NULL;
      y_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_29, y_91);
      t = g_109(t);
      return(t);
    }
    t = fetch_1_0(l_8, t);
  }
  t = n_29;
  return(t);
}
static ATerm b_9 (ATerm y_108 (ATerm), ATerm i_29, ATerm h_29, ATerm t)
{
  static ATerm s_92 (ATerm t)
  {
    ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL;
    m_92 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_92;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_92 = ATgetFirst((ATermList) t);
            o_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_41 = t;
          int m_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_92;
              {
                static ATerm o_8 (ATerm t)
                {
                  t = h_29;
                  return(t);
                }
                t = a_9(y_108, o_8, n_92, o_92, t);
              }
              t = s_92(t);
              LocalPopChoice(m_41);
            }
          else
            {
              t = l_41;
              {
                ATerm e_40 = NULL,h_40 = NULL,k_23 = NULL;
                t = SSLgetAnnotations(m_92);
                e_40 = t;
                t = o_92;
                t = s_92(t);
                h_40 = t;
                t = (ATerm) ATinsert(CheckATermList(h_40), n_92);
                k_23 = t;
                t = SSLsetAnnotations(k_23, e_40);
              }
            }
        }
      }
    return(t);
  }
  t = i_29;
  t = s_92(t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t)
{
  static ATerm d_93 (ATerm t)
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_106(t);
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        {
          ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL,b_93 = NULL,c_93 = NULL,o_23 = NULL;
          t = x_106(t);
          c_93 = t;
          if(match_cons(t, sym__2))
            {
              w_92 = ATgetArgument(t, 0);
              x_92 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_93);
          v_92 = t;
          t = w_92;
          t = z_106(t);
          y_92 = t;
          t = x_92;
          t = d_93(t);
          b_93 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_92, b_93);
          o_23 = t;
          t = SSLsetAnnotations(o_23, v_92);
          t = y_106(t);
        }
      }
    return(t);
  }
  t = d_93(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_41 = ATgetArgument(t, 0);
      if(((ATgetType(p_41) != AT_LIST) || !(ATisEmpty(p_41))))
        _fail(t);
      {
        ATerm q_41 = ATgetArgument(t, 1);
        if(((ATgetType(q_41) != AT_LIST) || !(ATisEmpty(q_41))))
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
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_41 = ATgetArgument(t, 0);
      if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
        {
          m_93 = ATgetFirst((ATermList) r_41);
          n_93 = (ATerm) ATgetNext((ATermList) r_41);
        }
      else
        _fail(t);
      {
        ATerm s_41 = ATgetArgument(t, 1);
        if(((ATgetType(s_41) == AT_LIST) && !(ATisEmpty(s_41))))
          {
            o_93 = ATgetFirst((ATermList) s_41);
            p_93 = (ATerm) ATgetNext((ATermList) s_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_93, o_93), (ATerm) ATmakeAppl(sym__2, n_93, p_93));
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL;
  if(match_cons(t, sym__2))
    {
      q_93 = ATgetArgument(t, 0);
      r_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_93), q_93);
  return(t);
}
static ATerm g_9 (ATerm l_640, ATerm q_640, ATerm h_60, ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL;
  t = SSL_explode_term(q_640);
  if(match_cons(t, sym__2))
    {
      h_93 = ATgetArgument(t, 0);
      j_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_640);
  if(match_cons(t, sym__2))
    {
      if((h_93 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_93, j_93);
  t = genzip_4_0(p_8, s_8, u_8, _id, t);
  k_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_93, h_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t)
{
  static ATerm t_93 (ATerm t)
  {
    ATerm b_42 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_97(t);
        LocalPopChoice(c_42);
      }
    else
      {
        t = b_42;
        t = y_97(t);
        t = t_93(t);
      }
    return(t);
  }
  t = t_93(t);
  return(t);
}
ATerm for_3_0 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t)
{
  t = a_98(t);
  t = while_not_2_0(b_98, c_98, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm b_94 = NULL;
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_94);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm c_94 = NULL,f_94 = NULL,g_94 = NULL,n_94 = NULL,q_23 = NULL;
  n_94 = t;
  if(match_cons(t, sym__2))
    {
      f_94 = ATgetArgument(t, 0);
      g_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_94);
  c_94 = t;
  t = g_94;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_94, g_94);
  q_23 = t;
  t = SSLsetAnnotations(q_23, c_94);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,t_95 = NULL;
  o_95 = t;
  if(match_cons(t, sym__2))
    {
      p_95 = ATgetArgument(t, 0);
      q_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_95 = ATgetFirst((ATermList) t);
      t_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_42 = t;
        int e_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_96(p_95, q_95, o_95, t);
            LocalPopChoice(e_42);
          }
        else
          {
            t = d_42;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_95), r_95), t_95);
          }
      }
    }
  else
    {
      t = f_96(p_95, q_95, o_95, t);
    }
  return(t);
}
static ATerm f_96 (ATerm q_94, ATerm r_94, ATerm s_94, ATerm t)
{
  ATerm t_94 = NULL,w_94 = NULL,s_23 = NULL,c_95 = NULL,d_95 = NULL,f_95 = NULL,g_95 = NULL;
  t = SSLgetAnnotations(s_94);
  t_94 = t;
  t = r_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_95 = ATgetFirst((ATermList) t);
      g_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_95;
  if(match_cons(t, sym__2))
    {
      d_95 = ATgetArgument(t, 0);
      f_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_95;
        if((d_95 != t))
          {
            _fail(t);
          }
        t = g_95;
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        t = r_94;
        t = g_9(d_95, f_95, g_95, t);
      }
  }
  w_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_94, w_94);
  s_23 = t;
  t = SSLsetAnnotations(s_23, t_94);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm e_96 = NULL;
  if(match_cons(t, sym__2))
    {
      e_96 = ATgetArgument(t, 0);
      if((e_96 != ATgetArgument(t, 1)))
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
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(w_8, x_8, y_8, t);
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
      {
        ATerm x_95 = NULL,a_96 = NULL,b_96 = NULL;
        x_95 = t;
        if(match_cons(t, sym__2))
          {
            a_96 = ATgetArgument(t, 0);
            b_96 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_95;
        t = b_9(c_9, a_96, b_96, t);
      }
    }
  return(t);
}
static ATerm h_9 (ATerm t)
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
  ATerm s_40 = NULL,t_40 = NULL;
  if(match_cons(t, sym__2))
    {
      s_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8(o_9, s_40, t_40, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm u_40 = NULL;
  if(match_cons(t, sym__2))
    {
      u_40 = ATgetArgument(t, 0);
      if((u_40 != ATgetArgument(t, 1)))
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
  ATerm d_41 = NULL,e_41 = NULL;
  if(match_cons(t, sym__2))
    {
      d_41 = ATgetArgument(t, 0);
      e_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8(j_10, d_41, e_41, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm f_41 = NULL;
  if(match_cons(t, sym__2))
    {
      f_41 = ATgetArgument(t, 0);
      if((f_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm p_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm e_97 (ATerm t)
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_127(t);
        LocalPopChoice(k_42);
      }
    else
      {
        t = j_42;
        {
          ATerm l_42 = t;
          int n_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_96 = NULL,i_96 = NULL,n_40 = NULL,o_40 = NULL;
              h_96 = t;
              t = o_127(t);
              i_96 = t;
              t = h_96;
              {
                static ATerm e_9 (ATerm t)
                {
                  ATerm p_96 = NULL;
                  t = e_97(t);
                  p_96 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_96, i_96);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_127(e_9, e_97, h_9, t);
              }
              o_40 = t;
              t = SSL_explode_term(o_40);
              if(match_cons(t, sym__2))
                {
                  ATerm o_42 = ATgetArgument(t, 0);
                  n_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_40;
              t = foldr_3_0(j_9, n_9, _id, t);
              LocalPopChoice(n_42);
            }
          else
            {
              t = l_42;
              {
                ATerm w_40 = NULL,y_40 = NULL;
                y_40 = t;
                t = SSL_explode_term(y_40);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_42 = ATgetArgument(t, 0);
                    w_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_40;
                t = foldr_3_0(z_9, c_10, e_97, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_97(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  static ATerm k_10 (ATerm t)
  {
    t = bottomup_1_0(h_98, t);
    return(t);
  }
  t = SRTS_all(k_10, t);
  t = h_98(t);
  return(t);
}
static ATerm k_9 (ATerm b_54, ATerm c_54, ATerm t)
{
  ATerm j_97 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_54, c_54);
  t = d_10(b_54, c_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_97 = ATgetFirst((ATermList) t);
      {
        ATerm q_42 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_97;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm q_98 = NULL,t_98 = NULL;
  q_98 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_42 = NULL;
        t = term_t_42;
        m_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_42, q_98);
        t = k_9(m_42, q_98, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm u_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_42) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, t_98, (ATerm) ATempty);
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        {
          ATerm v_42 = NULL;
          t = term_t_42;
          v_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_42, q_98);
          t = k_9(v_42, q_98, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm w_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_42) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, t_98, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm y_99 (ATerm), ATerm t)
{
  static ATerm a_99 (ATerm t)
  {
    ATerm x_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_99(t);
        LocalPopChoice(y_42);
      }
    else
      {
        t = x_42;
        t = SRTS_all(a_99, t);
      }
    return(t);
  }
  t = a_99(t);
  return(t);
}
static ATerm l_9 (ATerm b_118 (ATerm), ATerm m_43, ATerm k_43, ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,n_99 = NULL,p_99 = NULL;
  g_99 = t;
  t = b_118(t);
  b_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_99, m_43, k_43);
  t = e_10(b_99, m_43, k_43, t);
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_99 = NULL;
        t = term_c_43;
        q_99 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_99, term_c_43);
        t = d_10(b_99, q_99, t);
        LocalPopChoice(b_43);
      }
    else
      {
        t = a_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_99 = ATgetFirst((ATermList) t);
      d_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_99, term_c_43, (ATerm) ATinsert(CheckATermList(d_99), (ATerm) ATinsert(CheckATermList(c_99), m_43)));
  t = lookup_table_0_1(b_99, t);
  p_99 = t;
  t = term_c_43;
  h_99 = t;
  t = (ATerm) ATinsert(CheckATermList(d_99), (ATerm) ATinsert(CheckATermList(c_99), m_43));
  i_99 = t;
  t = p_99;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(h_99, i_99, n_99, t);
  t = g_99;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_t_42;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_t_42;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm x_99 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      b_100 = ATgetArgument(t, 0);
      c_100 = ATgetArgument(t, 1);
      x_99 = ATgetArgument(t, 2);
      {
        ATerm g_100 = NULL,h_100 = NULL;
        t = c_100;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, b_100);
        g_100 = t;
        t = term_e_43;
        h_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_100), term_e_43);
        t = l_9(l_10, g_100, h_100, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, b_100, (ATerm)ATempty, x_99);
      }
    }
  else
    {
      ATerm k_100 = NULL,l_100 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          b_100 = ATgetArgument(t, 0);
          c_100 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_100;
      if(match_cons(t, sym_ConstType_1))
        {
          d_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, b_100);
      k_100 = t;
      t = term_g_43;
      l_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_100), term_g_43);
      t = l_9(n_10, k_100, l_100, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, b_100, (ATerm) ATmakeAppl(sym_ConstType_1, d_100));
    }
  return(t);
}
static ATerm m_9 (ATerm v_53, ATerm w_53, ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL;
  q_100 = t;
  {
    ATerm h_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
        t = d_10(v_53, w_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_43 = ATgetFirst((ATermList) t);
            p_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_43);
        {
          ATerm r_100 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, p_100);
          t = lookup_table_0_1(v_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_10(w_53, p_100, r_100, t);
          t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, p_100);
        }
      }
    else
      {
        t = h_43;
        {
          ATerm v_100 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
          t = lookup_table_0_1(v_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_10(w_53, v_100, t);
          t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
        }
      }
  }
  t = q_100;
  return(t);
}
ATerm end_scope_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL;
  a_101 = t;
  t = y_117(t);
  z_100 = t;
  {
    ATerm o_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_101 = NULL;
        t = term_c_43;
        e_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_100, term_c_43);
        t = d_10(z_100, e_101, t);
        LocalPopChoice(p_43);
      }
    else
      {
        t = o_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_100 = ATgetFirst((ATermList) t);
      x_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_100, term_c_43, x_100);
  t = lookup_table_0_1(z_100, t);
  d_101 = t;
  t = term_c_43;
  b_101 = t;
  t = d_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(b_101, x_100, c_101, t);
  t = y_100;
  {
    static ATerm o_10 (ATerm t)
    {
      ATerm f_101 = NULL;
      f_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_100, f_101);
      t = m_9(z_100, f_101, t);
      return(t);
    }
    t = map_1_0(o_10, t);
  }
  t = a_101;
  return(t);
}
ATerm restore_always_2_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm t)
{
  ATerm q_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_97(t);
      t = d_97(t);
      LocalPopChoice(s_43);
    }
  else
    {
      t = q_43;
      t = d_97(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_117 (ATerm), ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL;
  i_101 = t;
  t = x_117(t);
  h_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_101, term_c_43);
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_101 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_43 = ATgetArgument(t, 0);
            ATerm y_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_43;
        r_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_101, term_c_43);
        t = d_10(h_101, r_101, t);
        LocalPopChoice(w_43);
      }
    else
      {
        t = v_43;
        t = (ATerm) ATempty;
      }
  }
  j_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_101, term_c_43, (ATerm) ATinsert(CheckATermList(j_101), (ATerm) ATempty));
  t = lookup_table_0_1(h_101, t);
  n_101 = t;
  t = term_c_43;
  k_101 = t;
  t = (ATerm) ATinsert(CheckATermList(j_101), (ATerm) ATempty);
  l_101 = t;
  t = n_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(k_101, l_101, m_101, t);
  t = i_101;
  return(t);
}
ATerm scope_2_0 (ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm t)
{
  static ATerm s_10 (ATerm t)
  {
    t = end_scope_1_0(z_117, t);
    return(t);
  }
  t = begin_scope_1_0(z_117, t);
  t = restore_always_2_0(a_118, s_10, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_t_42;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL,e_24 = NULL;
  z_101 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_101);
  w_101 = t;
  t = x_101;
  t = map_1_0(w_10, t);
  y_101 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_101);
  e_24 = t;
  t = SSLsetAnnotations(e_24, w_101);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm m_102 = NULL,n_102 = NULL;
  n_102 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      m_102 = ATgetArgument(t, 0);
      {
        ATerm z_43 = t;
        int a_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_43 = NULL,l_43 = NULL,z_23 = NULL;
            t = SSLgetAnnotations(n_102);
            i_43 = t;
            t = m_102;
            t = map_1_0(x_10, t);
            l_43 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, l_43);
            z_23 = t;
            t = SSLsetAnnotations(z_23, i_43);
            LocalPopChoice(a_44);
          }
        else
          {
            t = z_43;
            t = n_102;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          m_102 = ATgetArgument(t, 0);
          {
            ATerm b_44 = t;
            int f_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_44 = NULL,g_44 = NULL,a_24 = NULL;
                t = SSLgetAnnotations(n_102);
                d_44 = t;
                t = m_102;
                t = map_1_0(z_10, t);
                g_44 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, g_44);
                a_24 = t;
                t = SSLsetAnnotations(a_24, d_44);
                LocalPopChoice(f_44);
              }
            else
              {
                t = b_44;
                t = n_102;
              }
          }
        }
      else
        {
          t = n_102;
        }
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm h_44 = t;
  int j_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(j_44);
    }
  else
    {
      t = h_44;
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(t_10, v_10, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_102 = NULL,v_102 = NULL,w_102 = NULL;
  u_102 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_102;
    }
  else
    {
      static ATerm a_11 (ATerm t)
      {
        t = not_null(w_102);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_102 = ATgetFirst((ATermList) t);
          if(((w_102 != NULL) && (w_102 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_102;
      t = at_end_1_0(a_11, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL;
  l_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_103;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_103 = ATgetFirst((ATermList) t);
          n_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_44 = t;
        int n_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_44 = NULL,y_44 = NULL,z_44 = NULL,i_24 = NULL;
            t = SSLgetAnnotations(l_103);
            v_44 = t;
            t = m_103;
            t = v_112(t);
            y_44 = t;
            t = n_103;
            t = filter_1_0(v_112, t);
            z_44 = t;
            t = (ATerm) ATinsert(CheckATermList(z_44), y_44);
            i_24 = t;
            t = SSLsetAnnotations(i_24, v_44);
            LocalPopChoice(n_44);
          }
        else
          {
            t = m_44;
            t = n_103;
            t = filter_1_0(v_112, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  static ATerm d_104 (ATerm t)
  {
    ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL;
    c_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_104 = ATgetFirst((ATermList) t);
        b_104 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_45 = NULL,k_45 = NULL,k_24 = NULL;
          t = SSLgetAnnotations(c_104);
          h_45 = t;
          t = b_104;
          t = d_104(t);
          k_45 = t;
          t = (ATerm) ATinsert(CheckATermList(k_45), a_104);
          k_24 = t;
          t = SSLsetAnnotations(k_24, h_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_104;
        t = j_105(t);
      }
    return(t);
  }
  t = d_104(t);
  return(t);
}
static ATerm r_104 (ATerm h_104, ATerm t)
{
  ATerm i_104 = NULL;
  t = SSL_explode_term(h_104);
  if(match_cons(t, sym__2))
    {
      ATerm o_44 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_44) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_104;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL;
  n_104 = t;
  if(match_cons(t, sym__2))
    {
      l_104 = ATgetArgument(t, 0);
      m_104 = ATgetArgument(t, 1);
      {
        ATerm p_44 = t;
        int q_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_11 (ATerm t)
            {
              t = m_104;
              return(t);
            }
            t = l_104;
            t = at_end_1_0(d_11, t);
            LocalPopChoice(q_44);
          }
        else
          {
            t = p_44;
            t = r_104(n_104, t);
          }
      }
    }
  else
    {
      t = r_104(n_104, t);
    }
  return(t);
}
static ATerm p_9 (ATerm k_131, ATerm g_131, ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL;
  static ATerm f_11 (ATerm t)
  {
    ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL;
    z_104 = t;
    t = SSL_explode_term(z_104);
    if(match_cons(t, sym__2))
      {
        if(((u_104 != NULL) && (u_104 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_104 = ATgetArgument(t, 0);
        {
          ATerm r_44 = ATgetArgument(t, 1);
          if(((ATgetType(r_44) == AT_LIST) && !(ATisEmpty(r_44))))
            {
              w_104 = ATgetFirst((ATermList) r_44);
              {
                ATerm s_44 = (ATerm) ATgetNext((ATermList) r_44);
                if(((ATgetType(s_44) != AT_LIST) || !(ATisEmpty(s_44))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_104, not_null(v_104));
    t = conc_0_0(t);
    x_104 = t;
    t = (ATerm) ATinsert(ATempty, x_104);
    y_104 = t;
    t = SSL_mkterm(u_104, y_104);
    return(t);
  }
  t = SSL_explode_term(k_131);
  if(match_cons(t, sym__2))
    {
      if(((u_104 != NULL) && (u_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_104 = ATgetArgument(t, 0);
      {
        ATerm t_44 = ATgetArgument(t, 1);
        if(((ATgetType(t_44) == AT_LIST) && !(ATisEmpty(t_44))))
          {
            if(((v_104 != NULL) && (v_104 != ATgetFirst((ATermList) t_44))))
              _fail(ATgetFirst((ATermList) t_44));
            else
              v_104 = ATgetFirst((ATermList) t_44);
            {
              ATerm u_44 = (ATerm) ATgetNext((ATermList) t_44);
              if(((ATgetType(u_44) != AT_LIST) || !(ATisEmpty(u_44))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_131;
  t = fetch_1_0(f_11, t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm t)
{
  ATerm b_105 = NULL,e_105 = NULL,f_105 = NULL;
  b_105 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_105;
      t = t_111(t);
    }
  else
    {
      ATerm i_105 = NULL,l_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_105 = ATgetFirst((ATermList) t);
          f_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_105;
      t = v_111(t);
      i_105 = t;
      t = f_105;
      t = foldr_3_0(t_111, u_111, v_111, t);
      l_105 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_105, l_105);
      t = u_111(t);
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_45), term_x_44), term_w_44);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL;
  if(match_cons(t, sym__2))
    {
      s_105 = ATgetArgument(t, 0);
      t_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(s_105, t_105, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm u_105 = NULL,v_105 = NULL;
  v_105 = t;
  if(match_cons(t, sym_Signature_1))
    {
      u_105 = ATgetArgument(t, 0);
      {
        ATerm b_45 = t;
        int c_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_105 = NULL;
            t = u_105;
            t = filter_1_0(d_12, t);
            t = concat_0_0(t);
            x_105 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, x_105);
            LocalPopChoice(c_45);
          }
        else
          {
            t = b_45;
            t = v_105;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          u_105 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, u_105);
        }
      else
        {
          t = v_105;
        }
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm y_105 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      y_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_105;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL,r_105 = NULL,m_24 = NULL;
  r_105 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_105);
  o_105 = t;
  t = p_105;
  t = foldr_3_0(i_11, j_11, c_12, t);
  q_105 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_105);
  m_24 = t;
  t = SSLsetAnnotations(m_24, o_105);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(e_45);
    }
  else
    {
      t = d_45;
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL;
  n_107 = t;
  if(match_cons(t, sym_LRule_1))
    {
      m_107 = ATgetArgument(t, 0);
      t = m_107;
      if(match_cons(t, sym_Rule_3))
        {
          j_107 = ATgetArgument(t, 0);
          k_107 = ATgetArgument(t, 1);
          l_107 = ATgetArgument(t, 2);
          {
            ATerm f_45 = t;
            int g_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_107 = NULL;
                t = j_107;
                t = free_vars_3_0(b_13, c_13, tboundin_3_0, t);
                r_107 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, r_107, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, j_107, k_107, l_107)));
                LocalPopChoice(g_45);
              }
            else
              {
                t = f_45;
                t = n_107;
              }
          }
        }
      else
        {
          t = n_107;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          m_107 = ATgetArgument(t, 0);
          {
            ATerm i_45 = t;
            int j_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_108 = NULL;
                t = m_107;
                t = free_vars_3_0(f_13, g_13, tboundin_3_0, t);
                t_108 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, t_108, m_107);
                LocalPopChoice(j_45);
              }
            else
              {
                t = i_45;
                t = n_107;
              }
          }
        }
      else
        {
          t = n_107;
        }
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm s_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_107);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_45);
    }
  else
    {
      t = l_45;
      {
        ATerm n_45 = t;
        int o_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_45);
          }
        else
          {
            t = n_45;
            {
              ATerm u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_107 = ATgetArgument(t, 0);
                  v_107 = ATgetArgument(t, 1);
                  w_107 = ATgetArgument(t, 2);
                  x_107 = ATgetArgument(t, 3);
                  t = w_107;
                  t = map_1_0(d_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_107 = ATgetArgument(t, 0);
                      v_107 = ATgetArgument(t, 1);
                      w_107 = ATgetArgument(t, 2);
                      x_107 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_107;
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
  ATerm e_108 = NULL;
  ATerm p_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_108 = ATgetArgument(t, 0);
          {
            ATerm r_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_45);
      t = e_108;
    }
  else
    {
      t = p_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_108;
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm n_108 = NULL;
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_108 = ATgetArgument(t, 0);
          {
            ATerm u_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_45);
      t = n_108;
    }
  else
    {
      t = s_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_108;
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm u_108 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_108);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      {
        ATerm x_45 = t;
        int y_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_45);
          }
        else
          {
            t = x_45;
            {
              ATerm w_108 = NULL,x_108 = NULL,a_109 = NULL,b_109 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_108 = ATgetArgument(t, 0);
                  x_108 = ATgetArgument(t, 1);
                  a_109 = ATgetArgument(t, 2);
                  b_109 = ATgetArgument(t, 3);
                  t = a_109;
                  t = map_1_0(h_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_108 = ATgetArgument(t, 0);
                      x_108 = ATgetArgument(t, 1);
                      a_109 = ATgetArgument(t, 2);
                      b_109 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_109;
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
  ATerm m_109 = NULL;
  ATerm z_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_109 = ATgetArgument(t, 0);
          {
            ATerm b_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_46);
      t = m_109;
    }
  else
    {
      t = z_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_109;
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm v_109 = NULL;
  ATerm c_46 = t;
  int d_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_109 = ATgetArgument(t, 0);
          {
            ATerm e_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_46);
      t = v_109;
    }
  else
    {
      t = c_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_109;
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
  ATerm m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL,o_24 = NULL;
  p_110 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_110);
  m_110 = t;
  t = n_110;
  t = topdown_1_0(n_13, t);
  o_110 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_110);
  o_24 = t;
  t = SSLsetAnnotations(o_24, m_110);
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
  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL;
  s_110 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      q_110 = ATgetArgument(t, 0);
      r_110 = ATgetArgument(t, 1);
      t = q_110;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_110;
        }
      else
        {
          t = s_110;
        }
    }
  else
    {
      t = s_110;
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = Cons_2_0(v_13, w_13, t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm j_111 = NULL,k_111 = NULL,l_111 = NULL,m_111 = NULL,r_24 = NULL;
  m_111 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_111);
  j_111 = t;
  t = k_111;
  t = topdown_1_0(a_14, t);
  t = listtd_1_0(o_14, t);
  l_111 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_111);
  r_24 = t;
  t = SSLsetAnnotations(r_24, j_111);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm f_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(g_46);
    }
  else
    {
      t = f_46;
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = repeat_2_0(q_14, _id, t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm p_111 = NULL,q_111 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_111 = ATgetFirst((ATermList) t);
      q_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_8(p_111, q_111, t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(k_46);
    }
  else
    {
      t = j_46;
    }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm z_111 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      z_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, z_111)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL,g_107 = NULL,u_24 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(e_12, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(l_12, t);
  {
    ATerm l_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL;
        a_110 = t;
        t = term_q_46;
        b_110 = t;
        t = term_t_46;
        c_110 = t;
        t = term_u_46;
        t = d_10(b_110, c_110, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = a_110;
        LocalPopChoice(n_46);
        {
          ATerm d_110 = NULL,e_110 = NULL,f_110 = NULL,g_110 = NULL,h_110 = NULL,i_110 = NULL,j_110 = NULL,k_110 = NULL,q_24 = NULL,p_24 = NULL;
          k_110 = t;
          if(match_cons(t, sym_Specification_1))
            {
              e_110 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_110);
          d_110 = t;
          t = e_110;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_110 = ATgetFirst((ATermList) t);
              h_110 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_110);
          f_110 = t;
          t = h_110;
          t = Cons_2_0(_id, j_13, t);
          i_110 = t;
          t = (ATerm) ATinsert(CheckATermList(i_110), g_110);
          p_24 = t;
          t = SSLsetAnnotations(p_24, f_110);
          j_110 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, j_110);
          q_24 = t;
          t = SSLsetAnnotations(q_24, d_110);
        }
      }
    else
      {
        t = l_46;
        {
          ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL,h_111 = NULL,t_24 = NULL,s_24 = NULL;
          h_111 = t;
          if(match_cons(t, sym_Specification_1))
            {
              b_111 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_111);
          a_111 = t;
          t = b_111;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_111 = ATgetFirst((ATermList) t);
              e_111 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_111);
          c_111 = t;
          t = e_111;
          t = Cons_2_0(_id, r_13, t);
          f_111 = t;
          t = (ATerm) ATinsert(CheckATermList(f_111), d_111);
          s_24 = t;
          t = SSLsetAnnotations(s_24, c_111);
          g_111 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, g_111);
          t_24 = t;
          t = SSLsetAnnotations(t_24, a_111);
        }
      }
  }
  t = topdown_1_0(s_14, t);
  g_107 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_107);
  d_107 = t;
  t = e_107;
  t = fetch_1_0(v_14, t);
  f_107 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_107);
  u_24 = t;
  t = SSLsetAnnotations(u_24, d_107);
  return(t);
}
static ATerm q_9 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm a_112 = NULL;
  t = SSL_fputc(c_39, d_39);
  a_112 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_112);
  return(t);
}
static ATerm r_9 (ATerm g_23, ATerm h_23, ATerm t)
{
  ATerm b_112 = NULL;
  t = SSL_write_term_to_stream_text(g_23, h_23);
  b_112 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_112);
  return(t);
}
static ATerm t_9 (ATerm j_104 (ATerm), ATerm e_171, ATerm m_23, ATerm t)
{
  ATerm c_112 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_171, term_x_46);
  t = x_9(t);
  c_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_112, m_23);
  t = j_104(t);
  t = fclose_0_0(t);
  t = m_23;
  return(t);
}
static ATerm s_9 (ATerm c_23, ATerm d_23, ATerm t)
{
  ATerm d_112 = NULL;
  t = SSL_write_term_to_stream_baf(c_23, d_23);
  d_112 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_112);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm k_112 = NULL,l_112 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_46 = ATgetArgument(t, 0);
      if(match_cons(z_46, sym_Stream_1))
        {
          k_112 = ATgetArgument(z_46, 0);
        }
      else
        _fail(t);
      l_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(k_112, l_112, t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_47 = ATgetArgument(t, 0);
      if(match_cons(f_47, sym_Stream_1))
        {
          p_112 = ATgetArgument(f_47, 0);
        }
      else
        _fail(t);
      q_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(p_112, q_112, t);
  m_112 = t;
  t = term_u_22;
  n_112 = t;
  t = m_112;
  if(match_cons(t, sym_Stream_1))
    {
      o_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_22, m_112);
  t = q_9(n_112, o_112, t);
  return(t);
}
ATerm output_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL;
  t = h_123(t);
  f_112 = t;
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_112 = NULL,h_112 = NULL;
        t = term_q_46;
        g_112 = t;
        t = term_i_47;
        h_112 = t;
        t = term_j_47;
        t = d_10(g_112, h_112, t);
        LocalPopChoice(h_47);
      }
    else
      {
        t = g_47;
        t = term_k_47;
      }
  }
  e_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_112, f_112);
  {
    ATerm l_47 = t;
    int m_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_112 = NULL,j_112 = NULL;
        t = term_q_46;
        i_112 = t;
        t = term_n_47;
        j_112 = t;
        t = term_o_47;
        t = d_10(i_112, j_112, t);
        t = (ATerm) ATmakeAppl(sym__2, e_112, f_112);
        LocalPopChoice(m_47);
        if(match_cons(t, sym__2))
          {
            ATerm q_47 = ATgetArgument(t, 0);
            ATerm r_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_9(w_14, e_112, f_112, t);
      }
    else
      {
        t = l_47;
        if(match_cons(t, sym__2))
          {
            ATerm s_47 = ATgetArgument(t, 0);
            ATerm t_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_9(x_14, e_112, f_112, t);
      }
  }
  return(t);
}
static ATerm f_113 (ATerm z_112, ATerm t)
{
  t = SSL_fclose(z_112);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_113 = NULL,d_113 = NULL;
  d_113 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_113 = ATgetArgument(t, 0);
      {
        ATerm u_47 = t;
        int v_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_113);
            LocalPopChoice(v_47);
          }
        else
          {
            t = u_47;
            t = f_113(d_113, t);
          }
      }
    }
  else
    {
      t = f_113(d_113, t);
    }
  return(t);
}
static ATerm u_9 (ATerm i_23, ATerm t)
{
  t = SSL_read_term_from_stream(i_23);
  return(t);
}
static ATerm v_9 (ATerm v_37, ATerm w_37, ATerm t)
{
  t = SSL_strcat(v_37, w_37);
  return(t);
}
static ATerm w_9 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm g_113 = NULL;
  t = SSL_fopen(e_39, f_39);
  g_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_113);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_113 = NULL;
  t = SSL_stdin_stream();
  h_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_113);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_113 = NULL;
  t = SSL_stdout_stream();
  i_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_113);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_113 = NULL;
  t = SSL_stderr_stream();
  j_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_113);
  return(t);
}
static ATerm q_114 (ATerm p_113, ATerm t)
{
  ATerm q_113 = NULL;
  t = SSL_explode_term(p_113);
  if(match_cons(t, sym__2))
    {
      ATerm w_47 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_47) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_47 = ATgetArgument(t, 1);
        if(((ATgetType(x_47) == AT_LIST) && !(ATisEmpty(x_47))))
          {
            q_113 = ATgetFirst((ATermList) x_47);
            {
              ATerm y_47 = (ATerm) ATgetNext((ATermList) x_47);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_113;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_113;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_113;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_113;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_114 (ATerm t_113, ATerm u_113, ATerm v_113, ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL,b_114 = NULL,h_25 = NULL;
  t = SSLgetAnnotations(v_113);
  y_113 = t;
  t = t_113;
  if(match_cons(t, sym_Path_1))
    {
      b_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_114, u_113);
  h_25 = t;
  t = SSLsetAnnotations(h_25, y_113);
  if(match_cons(t, sym__2))
    {
      w_113 = ATgetArgument(t, 0);
      x_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(w_113, x_113, t);
  return(t);
}
static ATerm s_114 (ATerm d_114, ATerm e_114, ATerm f_114, ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL,l_114 = NULL,i_25 = NULL;
  t = SSLgetAnnotations(f_114);
  i_114 = t;
  t = SSL_is_string(d_114);
  l_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_114, e_114);
  i_25 = t;
  t = SSLsetAnnotations(i_25, i_114);
  if(match_cons(t, sym__2))
    {
      g_114 = ATgetArgument(t, 0);
      h_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(g_114, h_114, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm n_114 = NULL,o_114 = NULL,p_114 = NULL;
  n_114 = t;
  if(match_cons(t, sym__2))
    {
      o_114 = ATgetArgument(t, 0);
      p_114 = ATgetArgument(t, 1);
      {
        ATerm z_47 = t;
        int a_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_114(n_114, t);
            LocalPopChoice(a_48);
          }
        else
          {
            t = z_47;
            {
              ATerm b_48 = t;
              int c_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_114(o_114, p_114, n_114, t);
                  LocalPopChoice(c_48);
                }
              else
                {
                  t = b_48;
                  t = s_114(o_114, p_114, n_114, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_114(n_114, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL,b_115 = NULL;
  b_115 = t;
  {
    ATerm d_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_115, term_g_48);
        t = x_9(t);
        LocalPopChoice(f_48);
      }
    else
      {
        t = d_48;
        {
          ATerm h_46 = NULL,i_46 = NULL;
          t = term_i_48;
          i_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_48, b_115);
          t = v_9(i_46, b_115, t);
          h_46 = t;
          t = SSL_perror(h_46);
          _fail(t);
        }
      }
  }
  v_114 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(w_114, t);
  u_114 = t;
  t = v_114;
  t = fclose_0_0(t);
  t = u_114;
  return(t);
}
ATerm input_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm k_48 = t;
  int l_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_115 = NULL,f_115 = NULL;
      t = term_q_46;
      e_115 = t;
      t = term_m_48;
      f_115 = t;
      t = term_p_48;
      t = d_10(e_115, f_115, t);
      LocalPopChoice(l_48);
    }
  else
    {
      t = k_48;
      t = term_q_48;
    }
  t = ReadFromFile_0_0(t);
  t = i_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_115 = NULL,h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL;
  g_115 = t;
  t = term_r_48;
  t = whoami_0_0(t);
  h_115 = t;
  t = term_e_32;
  j_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_48), h_115), term_s_48);
  k_115 = t;
  t = SSL_printnl(j_115, k_115);
  t = term_g_32;
  i_115 = t;
  t = SSL_exit(i_115);
  t = g_115;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm m_115 = NULL;
  m_115 = t;
  if(match_string(t, "-k"))
    {
      t = m_115;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_115;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm n_115 = NULL,o_115 = NULL,p_115 = NULL;
  n_115 = t;
  t = SSL_string_to_int(n_115);
  o_115 = t;
  t = term_a_49;
  p_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_49, o_115);
  t = g_10(p_115, o_115, t);
  t = n_115;
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_c_49;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_14, z_14, a_15, t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm r_115 = NULL;
  r_115 = t;
  if(match_string(t, "-S"))
    {
      t = r_115;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_115;
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL;
  t = term_d_49;
  s_115 = t;
  t = term_e_49;
  t_115 = t;
  t = term_f_49;
  t = g_10(s_115, t_115, t);
  t = term_g_49;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = term_h_49;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm u_115 = NULL,v_115 = NULL,w_115 = NULL;
  u_115 = t;
  t = SSL_string_to_int(u_115);
  v_115 = t;
  t = term_d_49;
  w_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_49, v_115);
  t = g_10(w_115, v_115, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_115);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = term_i_49;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm x_115 = NULL,y_115 = NULL;
  t = term_j_49;
  x_115 = t;
  t = term_r_48;
  y_115 = t;
  t = term_l_49;
  t = g_10(x_115, y_115, t);
  t = term_n_49;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  t = term_o_49;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_15, f_15, m_15, t);
      LocalPopChoice(q_49);
    }
  else
    {
      t = p_49;
      {
        ATerm r_49 = t;
        int s_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_15, o_15, t_15, t);
            LocalPopChoice(s_49);
          }
        else
          {
            t = r_49;
            t = Option_3_0(a_16, b_16, c_16, t);
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm z_115 = NULL,f_116 = NULL;
  t = term_q_46;
  z_115 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_46, v_48, w_48);
  t = lookup_table_0_1(z_115, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(v_48, w_48, f_116, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_46, v_48, w_48);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_116 = NULL,m_116 = NULL,n_116 = NULL;
      t = term_r_48;
      t = e_0(t);
      l_116 = t;
      t = term_t_49;
      m_116 = t;
      t = term_u_49;
      n_116 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_49, term_u_49, l_116);
      t = e_10(m_116, n_116, l_116, t);
      _fail(t);
    }
  else
    {
      ATerm q_116 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_116 = ATgetFirst((ATermList) t);
          k_116 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_116;
      t = c_0(t);
      t = term_r_48;
      t = d_0(t);
      q_116 = t;
      t = (ATerm) ATinsert(CheckATermList(k_116), q_116);
    }
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm s_116 = NULL;
  s_116 = t;
  if(match_string(t, "-o"))
    {
      t = s_116;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_116;
    }
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm t_116 = NULL,u_116 = NULL;
  t_116 = t;
  t = term_i_47;
  u_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_47, t_116);
  t = g_10(u_116, t_116, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_116);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_16, e_16, f_16, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm w_116 = NULL;
  w_116 = t;
  if(match_string(t, "-i"))
    {
      t = w_116;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_116;
    }
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL;
  x_116 = t;
  t = term_m_48;
  y_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_48, x_116);
  t = g_10(y_116, x_116, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_116);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_16, h_16, i_16, t);
  return(t);
}
static ATerm e_10 (ATerm q_53, ATerm r_53, ATerm p_53, ATerm t)
{
  ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL,e_117 = NULL;
  a_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
  {
    ATerm x_49 = t;
    int y_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_50 = ATgetArgument(t, 0);
            ATerm c_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
        t = d_10(q_53, r_53, t);
        LocalPopChoice(y_49);
      }
    else
      {
        t = x_49;
        t = (ATerm) ATempty;
      }
  }
  b_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_53, r_53, (ATerm) ATinsert(CheckATermList(b_117), p_53));
  t = lookup_table_0_1(q_53, t);
  e_117 = t;
  t = (ATerm) ATinsert(CheckATermList(b_117), p_53);
  c_117 = t;
  t = e_117;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(r_53, c_117, d_117, t);
  t = a_117;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_117 = NULL,q_117 = NULL,r_117 = NULL;
      t = term_r_48;
      t = n_0(t);
      p_117 = t;
      t = term_t_49;
      q_117 = t;
      t = term_u_49;
      r_117 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_49, term_u_49, p_117);
      t = e_10(q_117, r_117, p_117, t);
      _fail(t);
    }
  else
    {
      ATerm v_117 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_117 = ATgetFirst((ATermList) t);
          m_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_117;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_117 = ATgetFirst((ATermList) t);
          o_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_117;
      t = k_0(t);
      t = n_117;
      t = l_0(t);
      v_117 = t;
      t = (ATerm) ATinsert(CheckATermList(o_117), v_117);
    }
  return(t);
}
static ATerm j_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm c_118 = NULL,e_118 = NULL;
  c_118 = t;
  if(match_string(t, "old"))
    {
      t = c_118;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = c_118;
    }
  t = term_t_46;
  e_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_46, c_118);
  t = g_10(e_118, c_118, t);
  t = term_r_48;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = term_d_50;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_16, o_16, v_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_48;
  t = whoami_0_0(t);
  g_118 = t;
  t = term_e_32;
  i_118 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_50), g_118);
  j_118 = t;
  t = SSL_printnl(i_118, j_118);
  t = term_g_32;
  h_118 = t;
  t = SSL_exit(h_118);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL;
  t = term_q_46;
  k_118 = t;
  t = term_h_50;
  l_118 = t;
  t = term_i_50;
  t = d_10(k_118, l_118, t);
  return(t);
}
static ATerm y_9 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm j_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_41, z_41);
      LocalPopChoice(l_50);
    }
  else
    {
      t = j_50;
      t = SSL_addr(y_41, z_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t)
{
  ATerm n_118 = NULL,o_118 = NULL,p_118 = NULL;
  n_118 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_118;
      t = r_111(t);
    }
  else
    {
      ATerm s_118 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_118 = ATgetFirst((ATermList) t);
          p_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_118;
      t = foldr_2_0(r_111, s_111, t);
      s_118 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_118, s_118);
      t = s_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_e_49;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm y_46 = NULL,d_47 = NULL;
  if(match_cons(t, sym__2))
    {
      y_46 = ATgetArgument(t, 0);
      d_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(y_46, d_47, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_118 = NULL,o_46 = NULL,p_46 = NULL;
  t = times_0_0(t);
  p_46 = t;
  t = SSL_explode_term(p_46);
  if(match_cons(t, sym__2))
    {
      ATerm m_50 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_46;
  t = foldr_2_0(w_16, x_16, t);
  v_118 = t;
  t = SSL_TicksToSeconds(v_118);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_119 = NULL,h_119 = NULL,i_119 = NULL;
  g_119 = t;
  if(match_cons(t, sym__2))
    {
      h_119 = ATgetArgument(t, 0);
      i_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_119;
        if((h_119 != t))
          {
            _fail(t);
          }
        t = g_119;
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        t = (ATerm) ATmakeAppl(sym__2, h_119, i_119);
        {
          ATerm p_50 = t;
          int q_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_119, i_119);
              LocalPopChoice(q_50);
            }
          else
            {
              t = p_50;
              t = SSL_gtr(h_119, i_119);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_119, i_119);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_120 (ATerm), ATerm t)
{
  ATerm m_119 = NULL;
  m_119 = t;
  {
    ATerm r_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_119 = NULL,p_119 = NULL,q_119 = NULL;
        t = term_q_46;
        p_119 = t;
        t = term_d_49;
        q_119 = t;
        t = term_u_50;
        t = d_10(p_119, q_119, t);
        o_119 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_119, term_g_32);
        t = geq_0_0(t);
        t = m_119;
        t = i_120(t);
        LocalPopChoice(t_50);
      }
    else
      {
        t = r_50;
        t = m_119;
      }
  }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL,v_119 = NULL,w_119 = NULL;
  t = run_time_0_0(t);
  s_119 = t;
  t = term_r_48;
  t = whoami_0_0(t);
  t_119 = t;
  t = term_e_32;
  v_119 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_50), s_119), term_w_50), t_119);
  w_119 = t;
  t = SSL_printnl(v_119, w_119);
  t = (ATerm) ATmakeAppl(sym__2, term_e_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_50), s_119), term_w_50), t_119));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_119 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_49;
  x_119 = t;
  t = SSL_exit(x_119);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm h_120 = NULL,j_120 = NULL;
  j_120 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_120;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_120 = ATgetArgument(t, 0);
          {
            ATerm h_48 = NULL,l_25 = NULL;
            t = SSLgetAnnotations(j_120);
            h_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_120);
            l_25 = t;
            t = SSLsetAnnotations(l_25, h_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_120;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_122 (ATerm), ATerm t)
{
  ATerm y_50 = t;
  int z_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_120 = NULL,b_120 = NULL;
      t = term_q_46;
      a_120 = t;
      t = term_a_51;
      b_120 = t;
      t = term_b_51;
      t = d_10(a_120, b_120, t);
      LocalPopChoice(z_50);
    }
  else
    {
      t = y_50;
      t = fetch_1_0(z_16, t);
    }
  t = y_122(t);
  return(t);
}
static ATerm h_10 (ATerm i_57, ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm l_120 = NULL;
  t = SSL_hashtable_put(k_57, i_57, j_57);
  l_120 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_120);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_55, ATerm t)
{
  ATerm u_120 = NULL;
  t = table_hashtable_0_0(t);
  u_120 = t;
  {
    ATerm c_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_49 = NULL;
        t = u_120;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_10(c_55, b_49, t);
        LocalPopChoice(e_51);
      }
    else
      {
        t = c_51;
        {
          ATerm k_49 = NULL;
          t = c_55;
          t = table_create_0_0(t);
          t = u_120;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_10(c_55, k_49, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_57, ATerm r_57, ATerm t)
{
  ATerm x_120 = NULL;
  t = SSL_hashtable_create(q_57, r_57);
  x_120 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_120);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_120 = NULL,z_120 = NULL,a_121 = NULL,c_121 = NULL,d_121 = NULL;
  y_120 = t;
  t = term_j_51;
  c_121 = t;
  t = term_n_51;
  d_121 = t;
  t = y_120;
  t = new_hashtable_0_2(c_121, d_121, t);
  z_120 = t;
  t = y_120;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(y_120, z_120, a_121, t);
  t = y_120;
  return(t);
}
static ATerm a_10 (ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm e_121 = NULL;
  t = SSL_hashtable_remove(o_57, n_57);
  e_121 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_121);
  return(t);
}
static ATerm b_10 (ATerm s_57, ATerm t)
{
  ATerm f_121 = NULL;
  t = SSL_hashtable_destroy(s_57);
  f_121 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_121);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_121 = NULL;
  t = SSL_table_hashtable();
  g_121 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_121);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_121 = NULL,i_121 = NULL,j_121 = NULL,k_121 = NULL;
  h_121 = t;
  t = table_hashtable_0_0(t);
  i_121 = t;
  t = lookup_table_0_1(h_121, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(k_121, t);
  t = i_121;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(h_121, j_121, t);
  t = h_121;
  return(t);
}
ATerm map_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  static ATerm z_121 (ATerm t)
  {
    ATerm w_121 = NULL,x_121 = NULL,y_121 = NULL;
    w_121 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_121;
      }
    else
      {
        ATerm b_50 = NULL,e_50 = NULL,k_50 = NULL,o_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_121 = ATgetFirst((ATermList) t);
            y_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_121);
        b_50 = t;
        t = x_121;
        t = s_104(t);
        e_50 = t;
        t = y_121;
        t = z_121(t);
        k_50 = t;
        t = (ATerm) ATinsert(CheckATermList(k_50), e_50);
        o_25 = t;
        t = SSLsetAnnotations(o_25, b_50);
      }
    return(t);
  }
  t = z_121(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm c_122 = NULL,d_122 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_122 = ATgetFirst((ATermList) t);
      d_122 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_122 = NULL,i_122 = NULL;
        static ATerm a_17 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_122)), not_null(i_122));
          return(t);
        }
        t = d_122;
        t = i_0(t);
        if(((h_122 != NULL) && (h_122 != t)))
          _fail(t);
        else
          h_122 = t;
        t = c_122;
        t = g_0(t);
        if(((i_122 != NULL) && (i_122 != t)))
          _fail(t);
        else
          i_122 = t;
        t = d_122;
        t = reverse_acc_2_0(g_0, a_17, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_48;
      t = i_0(t);
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm o_122 = NULL,p_122 = NULL,q_122 = NULL,t_25 = NULL;
  q_122 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_122);
  o_122 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_122);
  t_25 = t;
  t = SSLsetAnnotations(t_25, o_122);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm s_122 = NULL;
  s_122 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_122), term_o_51);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_122 = NULL,l_122 = NULL;
  ATerm p_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_122 = NULL,n_122 = NULL;
      t = term_q_46;
      m_122 = t;
      t = term_h_50;
      n_122 = t;
      t = term_i_50;
      t = d_10(m_122, n_122, t);
      LocalPopChoice(w_51);
    }
  else
    {
      t = p_51;
      t = fetch_1_0(b_17, t);
    }
  t = term_x_51;
  t = echo_0_0(t);
  t = term_t_49;
  k_122 = t;
  t = term_u_49;
  l_122 = t;
  t = term_z_51;
  t = d_10(k_122, l_122, t);
  t = reverse_acc_2_0(_id, c_17, t);
  t = map_1_0(d_17, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  static ATerm w_123 (ATerm t)
  {
    ATerm t_123 = NULL,u_123 = NULL,v_123 = NULL;
    t_123 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_123 = ATgetFirst((ATermList) t);
        v_123 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_52 = t;
      int h_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_50 = NULL,v_50 = NULL,v_25 = NULL;
          t = SSLgetAnnotations(t_123);
          s_50 = t;
          t = u_123;
          t = c_105(t);
          v_50 = t;
          t = (ATerm) ATinsert(CheckATermList(v_123), v_50);
          v_25 = t;
          t = SSLsetAnnotations(v_25, s_50);
          LocalPopChoice(h_52);
        }
      else
        {
          t = c_52;
          {
            ATerm d_51 = NULL,m_51 = NULL,w_25 = NULL;
            t = SSLgetAnnotations(t_123);
            d_51 = t;
            t = v_123;
            t = w_123(t);
            m_51 = t;
            t = (ATerm) ATinsert(CheckATermList(m_51), u_123);
            w_25 = t;
            t = SSLsetAnnotations(w_25, d_51);
          }
        }
    }
    return(t);
  }
  t = w_123(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_124 = NULL,b_124 = NULL,c_124 = NULL;
  a_124 = t;
  {
    ATerm i_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_124;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_52 = ATgetFirst((ATermList) t);
                ATerm m_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_124;
          }
        LocalPopChoice(k_52);
      }
    else
      {
        t = i_52;
        t = (ATerm) ATinsert(ATempty, a_124);
      }
  }
  b_124 = t;
  t = term_k_47;
  c_124 = t;
  t = SSL_printnl(c_124, b_124);
  t = a_124;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_124 = NULL,h_124 = NULL;
  t = term_q_46;
  g_124 = t;
  t = term_h_50;
  h_124 = t;
  t = term_i_50;
  t = d_10(g_124, h_124, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_10 (ATerm l_57, ATerm m_57, ATerm t)
{
  t = SSL_hashtable_get(m_57, l_57);
  return(t);
}
static ATerm d_10 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm i_124 = NULL;
  t = lookup_table_0_1(j_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_10(k_55, i_124, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm k_124 = NULL,l_124 = NULL;
  t = term_n_52;
  k_124 = t;
  t = term_r_48;
  l_124 = t;
  t = term_o_52;
  t = g_10(k_124, l_124, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_p_52;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL,o_124 = NULL,p_124 = NULL;
  t = term_n_52;
  o_124 = t;
  t = term_r_48;
  p_124 = t;
  t = term_o_52;
  t = g_10(o_124, p_124, t);
  t = term_q_52;
  m_124 = t;
  t = term_r_48;
  n_124 = t;
  t = term_s_52;
  t = g_10(m_124, n_124, t);
  t = term_t_52;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_x_52;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_52 = t;
  int z_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_17, g_17, h_17, t);
      LocalPopChoice(z_52);
    }
  else
    {
      t = y_52;
      t = Option_3_0(i_17, j_17, k_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL,g_26 = NULL;
  v_124 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_124 = ATgetFirst((ATermList) t);
      s_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_124);
  q_124 = t;
  t = r_124;
  t = o_83(t);
  t_124 = t;
  t = s_124;
  t = p_83(t);
  u_124 = t;
  t = (ATerm) ATinsert(CheckATermList(u_124), t_124);
  g_26 = t;
  t = SSLsetAnnotations(g_26, q_124);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_125 (ATerm), ATerm t)
{
  ATerm c_125 = NULL,d_125 = NULL,e_125 = NULL,f_125 = NULL,h_125 = NULL,i_125 = NULL,m_26 = NULL;
  c_125 = t;
  {
    ATerm a_53 = t;
    int b_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_53;
        t = b_125(t);
        LocalPopChoice(b_53);
      }
    else
      {
        t = a_53;
      }
  }
  t = c_125;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_125 = ATgetFirst((ATermList) t);
      f_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_125);
  d_125 = t;
  t = term_h_50;
  i_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_50, e_125);
  t = g_10(i_125, e_125, t);
  t = f_125;
  {
    static ATerm s_125 (ATerm t)
    {
      ATerm d_53 = t;
      int e_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_53 = t;
          int g_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_125 = NULL;
              l_125 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_125;
              LocalPopChoice(g_53);
            }
          else
            {
              t = f_53;
              t = b_125(t);
              t = Cons_2_0(_id, s_125, t);
            }
          LocalPopChoice(e_53);
        }
      else
        {
          t = d_53;
          {
            ATerm o_125 = NULL,p_125 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_125 = ATgetFirst((ATermList) t);
                p_125 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_125), (ATerm) ATmakeAppl(sym_Undefined_1, o_125));
          }
        }
      return(t);
    }
    t = s_125(t);
  }
  h_125 = t;
  t = (ATerm) ATinsert(CheckATermList(h_125), (ATerm) ATmakeAppl(sym_Program_1, e_125));
  m_26 = t;
  t = SSLsetAnnotations(m_26, d_125);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm f_126 = NULL;
  f_126 = t;
  if(match_string(t, "--help"))
    {
      t = f_126;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_126;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_126;
        }
    }
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm g_126 = NULL,h_126 = NULL;
  t = term_a_51;
  g_126 = t;
  t = term_r_48;
  h_126 = t;
  t = term_h_53;
  t = g_10(g_126, h_126, t);
  t = term_i_53;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = term_j_53;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_125 (ATerm), ATerm t)
{
  ATerm x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL,c_126 = NULL,d_126 = NULL,e_126 = NULL;
  z_125 = t;
  t = term_t_49;
  a_126 = t;
  t = term_k_53;
  t = lookup_table_0_1(a_126, t);
  e_126 = t;
  t = term_u_49;
  b_126 = t;
  t = (ATerm) ATempty;
  c_126 = t;
  t = e_126;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(b_126, c_126, d_126, t);
  t = z_125;
  {
    static ATerm l_17 (ATerm t)
    {
      ATerm l_53 = t;
      int n_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_125(t);
          LocalPopChoice(n_53);
        }
      else
        {
          t = l_53;
          {
            ATerm o_53 = t;
            int t_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_17, n_17, o_17, t);
                LocalPopChoice(t_53);
              }
            else
              {
                t = o_53;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_17, t);
  }
  {
    ATerm u_53 = t;
    int x_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_126 = NULL;
        s_126 = t;
        {
          ATerm y_53 = t;
          int z_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_52 = NULL;
              t = s_126;
              {
                ATerm d_54 = t;
                int e_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_52 = NULL,f_52 = NULL;
                    t = term_q_46;
                    e_52 = t;
                    t = term_a_51;
                    f_52 = t;
                    t = term_b_51;
                    t = d_10(e_52, f_52, t);
                    LocalPopChoice(e_54);
                  }
                else
                  {
                    t = d_54;
                    t = fetch_1_0(p_17, t);
                  }
              }
              t = s_126;
              t = default_system_usage_0_0(t);
              t = term_e_49;
              d_52 = t;
              t = SSL_exit(d_52);
              LocalPopChoice(z_53);
            }
          else
            {
              t = y_53;
              {
                ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
                t = term_q_46;
                v_52 = t;
                t = term_n_52;
                w_52 = t;
                t = term_f_54;
                t = d_10(v_52, w_52, t);
                t = s_126;
                t = default_system_about_0_0(t);
                t = term_e_49;
                u_52 = t;
                t = SSL_exit(u_52);
              }
            }
        }
        LocalPopChoice(x_53);
      }
    else
      {
        t = u_53;
        {
          ATerm h_54 = t;
          int j_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL;
              static ATerm q_17 (ATerm t)
              {
                ATerm w_126 = NULL,x_126 = NULL,y_126 = NULL,o_26 = NULL;
                y_126 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_126 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_126);
                w_126 = t;
                t = x_126;
                if(((x_125 != NULL) && (x_125 != t)))
                  _fail(t);
                else
                  x_125 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_126);
                o_26 = t;
                t = SSLsetAnnotations(o_26, w_126);
                return(t);
              }
              t = fetch_1_0(q_17, t);
              t = term_e_32;
              u_126 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_125)), term_k_54);
              v_126 = t;
              t = SSL_printnl(u_126, v_126);
              t = (ATerm) ATmakeAppl(sym__2, term_e_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_125)), term_k_54));
              t = default_system_usage_0_0(t);
              t = term_g_32;
              t_126 = t;
              t = SSL_exit(t_126);
              LocalPopChoice(j_54);
            }
          else
            {
              t = h_54;
            }
        }
      }
  }
  y_125 = t;
  t = term_t_49;
  t = table_destroy_0_0(t);
  t = y_125;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t)
{
  ATerm d_127 = NULL,e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL;
  t = parse_options_1_0(a_123, t);
  d_127 = t;
  t = term_l_54;
  t = table_create_0_0(t);
  t = term_l_54;
  e_127 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_54, term_m_54, d_127);
  t = lookup_table_0_1(e_127, t);
  h_127 = t;
  t = term_m_54;
  f_127 = t;
  t = h_127;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(f_127, d_127, g_127, t);
  t = d_127;
  t = c_123(t);
  {
    ATerm n_54 = t;
    int o_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_123, t);
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
              t = d_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_54);
            }
          else
            {
              t = p_54;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm r_54 = t;
  int s_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(s_54);
    }
  else
    {
      t = r_54;
      {
        ATerm t_54 = t;
        int u_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(u_54);
          }
        else
          {
            t = t_54;
            {
              ATerm v_54 = t;
              int w_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(w_54);
                }
              else
                {
                  t = v_54;
                  {
                    ATerm x_54 = t;
                    int y_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(t_17, u_17, v_17, t);
                        LocalPopChoice(y_54);
                      }
                    else
                      {
                        t = x_54;
                        {
                          ATerm z_54 = t;
                          int a_55 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(a_55);
                            }
                          else
                            {
                              t = z_54;
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
static ATerm s_17 (ATerm t)
{
  t = input_1_0(x_17, t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm j_127 = NULL,k_127 = NULL;
  t = term_n_47;
  j_127 = t;
  t = term_r_48;
  k_127 = t;
  t = term_b_55;
  t = g_10(j_127, k_127, t);
  t = term_d_55;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_e_55;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_17, default_usage_0_0, _id, s_17, t);
  return(t);
}

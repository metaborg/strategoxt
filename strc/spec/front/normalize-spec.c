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
ATerm term_f_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_l_52;
ATerm term_g_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_u_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_n_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_r_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_n_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_a_46;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_i_42;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_p_35;
ATerm term_l_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_r_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_m_31;
ATerm term_t_25;
ATerm term_h_25;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_k_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_i_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_t_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Op_2, term_y_18, (ATerm) ATempty);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_17);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, (ATerm) ATempty);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Call_2, term_n_23, (ATerm) ATempty);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Call_2, term_z_20, (ATerm) ATempty);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_34);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_RootApp_1, term_p_17);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_34);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_f_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_34);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_34);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_35);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_35);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_37);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_42);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_42);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym__2, term_d_48, term_e_48);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_48);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym__2, term_p_48, term_v_47);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym__2, term_z_48, term_a_49);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym__2, term_t_51, term_v_47);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(sym__2, term_x_51, term_v_47);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym__2, term_b_50, term_v_47);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(sym__2, term_n_46, term_v_47);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_94 (ATerm), ATerm t);
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
static ATerm d_8 (ATerm c_126 (ATerm), ATerm e_72, ATerm c_72, ATerm d_72, ATerm h_72, ATerm f_72, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_1_0 (ATerm c_126 (ATerm), ATerm t);
static ATerm l_18 (ATerm c_13, ATerm d_13, ATerm t);
static ATerm m_18 (ATerm l_13, ATerm m_13, ATerm t);
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
ATerm pat_td_1_0 (ATerm t_124 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm f_8 (ATerm u_62, ATerm v_62, ATerm w_62, ATerm t);
static ATerm t_29 (ATerm b_29, ATerm t);
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
static ATerm j_8 (ATerm h_58, ATerm i_58, ATerm j_58, ATerm t);
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
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm k_8 (ATerm b_126 (ATerm), ATerm l_71, ATerm i_71, ATerm j_71, ATerm s_71, ATerm w_71, ATerm x_71, ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
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
static ATerm c_6 (ATerm t);
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
ATerm oncetd_1_0 (ATerm z_95 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm w_125 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_8 (ATerm v_69, ATerm u_69, ATerm t);
ATerm repeat_2_0 (ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm q_102 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm r_8 (ATerm l_105 (ATerm), ATerm a_29, ATerm z_28, ATerm t);
static ATerm s_8 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm e_29, ATerm d_29, ATerm t);
static ATerm t_8 (ATerm g_105 (ATerm), ATerm y_28, ATerm x_28, ATerm t);
ATerm genzip_4_0 (ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm y_8 (ATerm r_610, ATerm w_610, ATerm x_57, ATerm t);
ATerm while_not_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t);
ATerm for_3_0 (ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm c_95 (ATerm r_92, ATerm v_92, ATerm y_92, ATerm t);
static ATerm v_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm free_vars_3_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm k_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm w_94 (ATerm), ATerm t);
static ATerm c_9 (ATerm w_53, ATerm x_53, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm n_96 (ATerm), ATerm t);
static ATerm d_9 (ATerm x_113 (ATerm), ATerm c_43, ATerm a_43, ATerm t);
static ATerm n_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm e_9 (ATerm q_53, ATerm r_53, ATerm t);
ATerm end_scope_1_0 (ATerm u_113 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_113 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_108 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_101 (ATerm), ATerm t);
static ATerm l_101 (ATerm a_101, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm h_9 (ATerm v_20, ATerm r_20, ATerm t);
ATerm foldr_3_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm i_9 (ATerm s_38, ATerm t_38, ATerm t);
static ATerm j_9 (ATerm h_23, ATerm i_23, ATerm t);
static ATerm l_9 (ATerm y_100 (ATerm), ATerm u_164, ATerm l_23, ATerm t);
static ATerm k_9 (ATerm d_23, ATerm e_23, ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm output_1_0 (ATerm d_119 (ATerm), ATerm t);
static ATerm n_108 (ATerm h_108, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_9 (ATerm j_23, ATerm t);
static ATerm n_9 (ATerm u_38, ATerm v_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_109 (ATerm y_108, ATerm t);
static ATerm a_110 (ATerm c_109, ATerm d_109, ATerm e_109, ATerm t);
static ATerm b_110 (ATerm m_109, ATerm n_109, ATerm o_109, ATerm t);
static ATerm o_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm e_119 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_9 (ATerm l_48, ATerm m_48, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm g_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_9 (ATerm l_53, ATerm m_53, ATerm k_53, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_9 (ATerm o_41, ATerm p_41, ATerm t);
ATerm foldr_2_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_116 (ATerm), ATerm t);
static ATerm u_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_15 (ATerm t);
ATerm need_help_1_0 (ATerm u_118 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm b_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_101 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_9 (ATerm l_37, ATerm m_37, ATerm t);
ATerm debug_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_101 (ATerm), ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm t_9 (ATerm c_55, ATerm d_55, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_120 (ATerm), ATerm t);
static ATerm t_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm parse_options_1_0 (ATerm w_120 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm n_17 (ATerm t);
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
              t = term_o_17;
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
                  t = term_o_17;
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
                      t = term_p_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      y_0 = ATgetArgument(t, 0);
                      z_0 = ATgetArgument(t, 1);
                      v_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, z_0, (ATerm) ATmakeAppl(sym_Op_2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, v_0), y_0)));
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
ATerm topdown_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(v_94, t);
    return(t);
  }
  t = v_94(t);
  t = SRTS_all(b_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
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
static ATerm m_0 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            {
              ATerm h_5 = NULL,i_5 = NULL,n_5 = NULL,r_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_5 = ATgetArgument(t, 0);
                  i_5 = ATgetArgument(t, 1);
                  n_5 = ATgetArgument(t, 2);
                  r_5 = ATgetArgument(t, 3);
                  t = n_5;
                  t = map_1_0(s_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_5 = ATgetArgument(t, 0);
                      i_5 = ATgetArgument(t, 1);
                      n_5 = ATgetArgument(t, 2);
                      r_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_5;
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
  ATerm b_6 = NULL;
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_6 = ATgetArgument(t, 0);
          {
            ATerm x_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_17);
      t = b_6;
    }
  else
    {
      t = v_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_6;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm m_6 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_6 = ATgetArgument(t, 0);
          {
            ATerm a_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_17);
      t = m_6;
    }
  else
    {
      t = y_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_6;
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm t_6 = NULL;
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_6);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm u_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_6);
  return(t);
}
static ATerm b_1 (ATerm t)
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
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_18);
          }
        else
          {
            t = d_18;
            {
              ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,a_7 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_6 = ATgetArgument(t, 0);
                  x_6 = ATgetArgument(t, 1);
                  y_6 = ATgetArgument(t, 2);
                  a_7 = ATgetArgument(t, 3);
                  t = y_6;
                  t = map_1_0(c_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_6 = ATgetArgument(t, 0);
                      x_6 = ATgetArgument(t, 1);
                      y_6 = ATgetArgument(t, 2);
                      a_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_6;
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
  ATerm k_7 = NULL;
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_7 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_18);
      t = k_7;
    }
  else
    {
      t = g_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_7;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm v_7 = NULL;
  ATerm j_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_7 = ATgetArgument(t, 0);
          {
            ATerm q_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_18);
      t = v_7;
    }
  else
    {
      t = j_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_7;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm h_8 = NULL;
  h_8 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_9 = NULL,j_0 = NULL,a_0 = NULL,u_1 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            x_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_8);
        j_0 = t;
        t = term_t_18;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_18, x_9);
        t = c_9(u_1, x_9, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm v_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_18) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, x_9);
        a_0 = t;
        t = SSLsetAnnotations(a_0, j_0);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm x_1 = NULL;
          t = term_t_18;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_18, h_8);
          t = c_9(x_1, h_8, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm w_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_18) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = h_8;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, h_8);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  static ATerm c_11 (ATerm w_3, ATerm y_3, ATerm z_3, ATerm a_4, ATerm b_4, ATerm c_4, ATerm d_4, ATerm t)
  {
    ATerm m_4 = NULL,o_4 = NULL,p_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, b_4, term_z_18);
    {
      ATerm a_19 = t;
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
          t = a_19;
        }
    }
    t = new_0_0(t);
    m_4 = t;
    t = a_4;
    t = dummify_0_0(t);
    p_4 = t;
    {
      ATerm b_19 = t;
      int h_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_4;
          if((a_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, m_4);
          LocalPopChoice(h_19);
        }
      else
        {
          t = b_19;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, w_4, (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(u_4), (ATerm) ATmakeAppl(sym_Str_1, v_4)))), p_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, w_3, y_3, z_3, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_4), a_4), b_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_3)))), o_4), (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(u_4), (ATerm) ATmakeAppl(sym_Str_1, v_4))))), c_4))));
    return(t);
  }
  ATerm y_9 = NULL,b_10 = NULL,g_10 = NULL,h_10 = NULL,k_10 = NULL,o_10 = NULL,s_10 = NULL,u_10 = NULL,v_10 = NULL,a_11 = NULL;
  g_10 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      h_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
      o_10 = ATgetArgument(t, 2);
      s_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = s_10;
  if(match_cons(t, sym_Rule_3))
    {
      u_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
      a_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_10;
  if(match_cons(t, sym_Op_2))
    {
      y_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
      t = b_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_9;
          if(match_string(t, "Undefined"))
            {
              ATerm p_19 = t;
              int q_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
                  t = g_10;
                  t = new_0_0(t);
                  l_2 = t;
                  t = u_10;
                  t = dummify_0_0(t);
                  j_2 = t;
                  {
                    ATerm u_19 = t;
                    int v_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_2;
                        if((u_10 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                        LocalPopChoice(v_19);
                      }
                    else
                      {
                        t = u_19;
                        t = j_2;
                      }
                  }
                  m_2 = t;
                  t = h_10;
                  t = t_0(t);
                  n_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_2, (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, term_z_18), j_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_10, k_10, o_10, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_2), u_10), term_z_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_10)))), m_2), term_z_18)), (ATerm) ATmakeAppl(sym_Seq_2, a_11, term_o_17)))));
                  LocalPopChoice(q_19);
                }
              else
                {
                  t = p_19;
                  t = c_11(h_10, k_10, o_10, u_10, v_10, a_11, g_10, t);
                }
            }
          else
            {
              t = c_11(h_10, k_10, o_10, u_10, v_10, a_11, g_10, t);
            }
        }
      else
        {
          t = y_9;
          t = c_11(h_10, k_10, o_10, u_10, v_10, a_11, g_10, t);
        }
    }
  else
    {
      t = c_11(h_10, k_10, o_10, u_10, v_10, a_11, g_10, t);
    }
  return(t);
}
static ATerm d_8 (ATerm c_126 (ATerm), ATerm e_72, ATerm c_72, ATerm d_72, ATerm h_72, ATerm f_72, ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  t = new_0_0(t);
  g_11 = t;
  t = h_72;
  t = dummify_0_0(t);
  f_11 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_11;
        if((h_72 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, g_11);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = f_11;
      }
  }
  h_11 = t;
  t = e_72;
  t = c_126(t);
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, i_11, f_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, e_72, c_72, d_72, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_11), h_72), term_z_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_72)))), h_11), term_i_20)), (ATerm) ATmakeAppl(sym_Seq_2, f_72, term_o_17))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      s_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
      u_11 = ATgetArgument(t, 2);
      {
        ATerm j_20 = ATgetArgument(t, 3);
        if(match_cons(j_20, sym_Rule_3))
          {
            v_11 = ATgetArgument(j_20, 0);
            {
              ATerm k_20 = ATgetArgument(j_20, 1);
              if(match_cons(k_20, sym_Op_2))
                {
                  ATerm o_20 = ATgetArgument(k_20, 0);
                  if((ATgetSymbol((ATermAppl) o_20) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm q_20 = ATgetArgument(k_20, 1);
                    if(((ATgetType(q_20) != AT_LIST) || !(ATisEmpty(q_20))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            w_11 = ATgetArgument(j_20, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_8(c_126, s_11, t_11, u_11, v_11, w_11, t);
  return(t);
}
static ATerm l_18 (ATerm c_13, ATerm d_13, ATerm t)
{
  t = c_13;
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,f_0 = NULL;
        i_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_13 = ATgetFirst((ATermList) t);
            h_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_13);
        f_13 = t;
        t = h_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_13), g_13);
        f_0 = t;
        t = SSLsetAnnotations(f_0, f_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_17, c_13);
  return(t);
}
static ATerm m_18 (ATerm l_13, ATerm m_13, ATerm t)
{
  t = l_13;
  {
    ATerm t_20 = t;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,v_1 = NULL;
        r_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_13 = ATgetFirst((ATermList) t);
            q_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_13);
        o_13 = t;
        t = q_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_13), p_13);
        v_1 = t;
        t = SSLsetAnnotations(v_1, o_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_20, l_13);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,w_2 = NULL;
  g_14 = t;
  t = SSL_explode_term(g_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            h_14 = ATgetFirst((ATermList) d_21);
            {
              ATerm e_21 = (ATerm) ATgetNext((ATermList) d_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(g_14);
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_21 = ATgetArgument(t, 1);
        if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
          {
            ATerm j_21 = ATgetFirst((ATermList) h_21);
            ATerm k_21 = (ATerm) ATgetNext((ATermList) h_21);
            if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
              {
                w_2 = ATgetFirst((ATermList) k_21);
                {
                  ATerm l_21 = (ATerm) ATgetNext((ATermList) k_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, w_2), h_14));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm c_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, f_15), c_15));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, i_15), h_15));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm x_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_21, (ATerm) ATinsert(ATinsert(ATempty, a_16), x_15));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_q_21;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_21, (ATerm) ATinsert(ATinsert(ATempty, d_16), c_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,z_13 = NULL,a_14 = NULL;
  x_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      z_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
      {
        ATerm e_14 = NULL;
        t = a_14;
        t = foldr_2_0(f_1, g_1, t);
        e_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, z_13, e_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          z_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, z_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              z_13 = ATgetArgument(t, 0);
              {
                ATerm e_3 = NULL;
                t = z_13;
                {
                  ATerm t_21 = t;
                  int u_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_w_21;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_z_21;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_a_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_c_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_k_22;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(u_21);
                    }
                  else
                    {
                      t = t_21;
                      {
                        ATerm r_3 = NULL;
                        t = SSL_explode_string(z_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm l_22 = ATgetFirst((ATermList) t);
                            if(((ATgetType(l_22) != AT_INT) || (ATgetInt((ATermInt) l_22) != 39)))
                              _fail(t);
                            {
                              ATerm m_22 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
                                {
                                  r_3 = ATgetFirst((ATermList) m_22);
                                  {
                                    ATerm n_22 = (ATerm) ATgetNext((ATermList) m_22);
                                    if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
                                      {
                                        ATerm o_22 = ATgetFirst((ATermList) n_22);
                                        if(((ATgetType(o_22) != AT_INT) || (ATgetInt((ATermInt) o_22) != 39)))
                                          _fail(t);
                                        {
                                          ATerm t_22 = (ATerm) ATgetNext((ATermList) n_22);
                                          if(((ATgetType(t_22) != AT_LIST) || !(ATisEmpty(t_22))))
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
              ATerm u_22 = t;
              int v_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      z_13 = ATgetArgument(t, 0);
                      {
                        ATerm x_22 = ATgetArgument(t, 1);
                      }
                      w_13 = ATgetArgument(t, 2);
                      s_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_22);
                  t = (ATerm) ATmakeAppl(sym_Con_3, z_13, w_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_13), (ATerm) ATempty));
                }
              else
                {
                  t = u_22;
                  {
                    ATerm y_22 = t;
                    int a_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            z_13 = ATgetArgument(t, 0);
                            {
                              ATerm f_23 = ATgetArgument(t, 1);
                            }
                            w_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(a_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, z_13, w_13, term_o_23);
                      }
                    else
                      {
                        t = y_22;
                        if(match_cons(t, sym_Con1_2))
                          {
                            z_13 = ATgetArgument(t, 0);
                            a_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, z_13, a_14, term_o_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                z_13 = ATgetArgument(t, 0);
                                a_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm h_1 (ATerm t)
                                  {
                                    t = a_14;
                                    return(t);
                                  }
                                  t = z_13;
                                  t = foldr_2_0(h_1, i_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    z_13 = ATgetArgument(t, 0);
                                    t = z_13;
                                    t = foldr_2_0(j_1, k_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        z_13 = ATgetArgument(t, 0);
                                        t = z_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            t_13 = ATgetFirst((ATermList) t);
                                            u_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = u_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm p_23 = t;
                                                int u_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = l_18(z_13, x_13, t);
                                                    LocalPopChoice(u_23);
                                                  }
                                                else
                                                  {
                                                    t = p_23;
                                                    t = t_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = l_18(z_13, x_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = l_18(z_13, x_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            z_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, z_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, z_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    z_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, z_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        z_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, z_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            z_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                z_13 = ATgetArgument(t, 0);
                                                                a_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_13), a_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    z_13 = ATgetArgument(t, 0);
                                                                    a_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm l_1 (ATerm t)
                                                                      {
                                                                        t = a_14;
                                                                        return(t);
                                                                      }
                                                                      t = z_13;
                                                                      t = foldr_2_0(l_1, m_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        z_13 = ATgetArgument(t, 0);
                                                                        t = z_13;
                                                                        t = foldr_2_0(n_1, o_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            z_13 = ATgetArgument(t, 0);
                                                                            a_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_z_20, (ATerm) ATinsert(CheckATermList(a_14), z_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                z_13 = ATgetArgument(t, 0);
                                                                                t = z_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    t_13 = ATgetFirst((ATermList) t);
                                                                                    u_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = u_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm v_23 = t;
                                                                                        int w_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = m_18(z_13, x_13, t);
                                                                                            LocalPopChoice(w_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_23;
                                                                                            t = t_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = m_18(z_13, x_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_18(z_13, x_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_x_23;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        z_13 = ATgetArgument(t, 0);
                                                                                        a_14 = ATgetArgument(t, 1);
                                                                                        t = a_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            v_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, v_13), z_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            z_13 = ATgetArgument(t, 0);
                                                                                            t = z_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                z_13 = ATgetArgument(t, 0);
                                                                                                a_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, z_13, a_14, term_p_17);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    z_13 = ATgetArgument(t, 0);
                                                                                                    a_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, z_13, a_14, term_p_17);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        z_13 = ATgetArgument(t, 0);
                                                                                                        a_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, z_13, (ATerm)ATempty, a_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            z_13 = ATgetArgument(t, 0);
                                                                                                            a_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, a_14, z_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                z_13 = ATgetArgument(t, 0);
                                                                                                                a_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, z_13, a_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    z_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, z_13, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        z_13 = ATgetArgument(t, 0);
                                                                                                                        a_14 = ATgetArgument(t, 1);
                                                                                                                        w_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_13, a_14, (ATerm)ATempty, w_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            z_13 = ATgetArgument(t, 0);
                                                                                                                            a_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, z_13, (ATerm)ATempty, (ATerm)ATempty, a_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                z_13 = ATgetArgument(t, 0);
                                                                                                                                a_14 = ATgetArgument(t, 1);
                                                                                                                                w_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, z_13, a_14, (ATerm)ATempty, w_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    z_13 = ATgetArgument(t, 0);
                                                                                                                                    a_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, z_13, (ATerm)ATempty, (ATerm)ATempty, a_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        z_13 = ATgetArgument(t, 0);
                                                                                                                                        a_14 = ATgetArgument(t, 1);
                                                                                                                                        w_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, z_13, a_14, (ATerm)ATempty, w_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            z_13 = ATgetArgument(t, 0);
                                                                                                                                            a_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, z_13, (ATerm)ATempty, (ATerm)ATempty, a_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm e_24 = ATgetArgument(t, 0);
                                                                                                                                                a_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, a_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm o_18 = NULL,p_18 = NULL,u_18 = NULL;
  p_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      u_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
      {
        ATerm x_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
        t = p_18;
        t = new_0_0(t);
        x_18 = t;
        t = new_0_0(t);
        c_19 = t;
        t = new_0_0(t);
        d_19 = t;
        t = new_0_0(t);
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_19), d_19), c_19), x_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, x_18), (ATerm) ATmakeAppl(sym_Var_1, d_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, u_18, (ATerm)ATmakeAppl(sym_Var_1, x_18), (ATerm) ATmakeAppl(sym_Var_1, c_19)), (ATerm) ATmakeAppl(sym_BAM_3, o_18, (ATerm)ATmakeAppl(sym_Var_1, d_19), (ATerm) ATmakeAppl(sym_Var_1, e_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_19)), (ATerm) ATmakeAppl(sym_Var_1, c_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_18 = ATgetArgument(t, 0);
          {
            ATerm f_19 = NULL,g_19 = NULL,j_19 = NULL,k_19 = NULL;
            t = p_18;
            t = new_0_0(t);
            j_19 = t;
            t = u_18;
            {
              static ATerm p_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((f_19 != NULL) && (f_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      f_19 = ATgetArgument(t, 0);
                    if(((g_19 != NULL) && (g_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      g_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, j_19);
                return(t);
              }
              t = oncetd_1_0(p_1, t);
            }
            k_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_19)), not_null(f_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_19)), (ATerm) ATmakeAppl(sym_Build_1, k_19))));
          }
        }
      else
        {
          ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,y_19 = NULL,z_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              u_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_18;
          t = new_0_0(t);
          t_19 = t;
          t = new_0_0(t);
          y_19 = t;
          t = u_18;
          {
            static ATerm q_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((r_19 != NULL) && (r_19 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_19 = ATgetArgument(t, 0);
                  if(((s_19 != NULL) && (s_19 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    s_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, t_19);
              return(t);
            }
            t = oncetd_1_0(q_1, t);
          }
          z_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_19))))), (ATerm)ATmakeAppl(sym_Var_1, t_19), (ATerm) ATmakeAppl(sym_Op_2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), not_null(r_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
        t = b_20;
        t = new_0_0(t);
        g_20 = t;
        t = c_20;
        {
          static ATerm r_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
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
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_20), e_20);
            return(t);
          }
          t = pat_td_1_0(r_1, t);
        }
        h_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_20))))));
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
              t = b_20;
              t = new_0_0(t);
              m_20 = t;
              t = c_20;
              {
                static ATerm s_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((l_20 != NULL) && (l_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        l_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_20);
                  return(t);
                }
                t = pat_td_1_0(s_1, t);
              }
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_20)), not_null(l_20))));
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
              {
                ATerm u_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
                t = b_20;
                t = new_0_0(t);
                x_20 = t;
                t = c_20;
                {
                  static ATerm t_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_20 = ATgetArgument(t, 0);
                        if(((u_20 != NULL) && (u_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_20);
                    return(t);
                  }
                  t = pat_td_1_0(t_1, t);
                }
                y_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_20)), not_null(w_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm t_124 (ATerm), ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_124(t);
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
        o_25 = t;
        if(match_cons(t, sym_Op_2))
          {
            p_25 = ATgetArgument(t, 0);
            q_25 = ATgetArgument(t, 1);
            {
              ATerm l_4 = NULL,b_5 = NULL,c_3 = NULL;
              t = SSLgetAnnotations(o_25);
              l_4 = t;
              t = q_25;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = pat_td_1_0(t_124, t);
                  return(t);
                }
                t = fetch_1_0(w_1, t);
              }
              b_5 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, p_25, b_5);
              c_3 = t;
              t = SSLsetAnnotations(c_3, l_4);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                p_25 = ATgetArgument(t, 0);
                q_25 = ATgetArgument(t, 1);
                {
                  ATerm y_24 = t;
                  int a_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_5 = NULL,s_5 = NULL,d_3 = NULL;
                      t = SSLgetAnnotations(o_25);
                      o_5 = t;
                      t = q_25;
                      t = pat_td_1_0(t_124, t);
                      s_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, p_25, s_5);
                      d_3 = t;
                      t = SSLsetAnnotations(d_3, o_5);
                      LocalPopChoice(a_25);
                    }
                  else
                    {
                      t = y_24;
                      {
                        ATerm r_6 = NULL,e_7 = NULL,g_3 = NULL;
                        t = SSLgetAnnotations(o_25);
                        r_6 = t;
                        t = p_25;
                        t = pat_td_1_0(t_124, t);
                        e_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, e_7, q_25);
                        g_3 = t;
                        t = SSLsetAnnotations(g_3, r_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    p_25 = ATgetArgument(t, 0);
                    q_25 = ATgetArgument(t, 1);
                    n_25 = ATgetArgument(t, 2);
                    {
                      ATerm e_8 = NULL,n_8 = NULL,h_3 = NULL;
                      t = SSLgetAnnotations(o_25);
                      e_8 = t;
                      t = n_25;
                      {
                        static ATerm y_1 (ATerm t)
                        {
                          t = pat_td_1_0(t_124, t);
                          return(t);
                        }
                        t = fetch_1_0(y_1, t);
                      }
                      n_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, p_25, q_25, n_8);
                      h_3 = t;
                      t = SSLsetAnnotations(h_3, e_8);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        p_25 = ATgetArgument(t, 0);
                        q_25 = ATgetArgument(t, 1);
                        n_25 = ATgetArgument(t, 2);
                        {
                          ATerm r_9 = NULL,c_10 = NULL,i_3 = NULL;
                          t = SSLgetAnnotations(o_25);
                          r_9 = t;
                          t = n_25;
                          {
                            static ATerm z_1 (ATerm t)
                            {
                              t = pat_td_1_0(t_124, t);
                              return(t);
                            }
                            t = fetch_1_0(z_1, t);
                          }
                          c_10 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, p_25, q_25, c_10);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, r_9);
                        }
                      }
                    else
                      {
                        ATerm p_10 = NULL,t_10 = NULL,j_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            p_25 = ATgetArgument(t, 0);
                            q_25 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(o_25);
                        p_10 = t;
                        t = q_25;
                        t = pat_td_1_0(t_124, t);
                        t_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, p_25, t_10);
                        j_3 = t;
                        t = SSLsetAnnotations(j_3, p_10);
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
  ATerm f_26 = NULL,g_26 = NULL;
  f_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL,i_26 = NULL,k_26 = NULL,l_26 = NULL;
        t = f_26;
        t = new_0_0(t);
        k_26 = t;
        t = g_26;
        {
          static ATerm a_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_26 != NULL) && (h_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_26 = ATgetArgument(t, 0);
                if(((i_26 != NULL) && (i_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_26);
            return(t);
          }
          t = pat_td_1_0(a_2, t);
        }
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_26)), not_null(h_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_26)))), (ATerm) ATmakeAppl(sym_Build_1, l_26)));
        LocalPopChoice(f_25);
      }
    else
      {
        t = d_25;
        {
          ATerm i_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_26 = NULL,q_26 = NULL,x_26 = NULL;
              t = f_26;
              t = new_0_0(t);
              q_26 = t;
              t = g_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_26);
                  return(t);
                }
                t = pat_td_1_0(b_2, t);
              }
              x_26 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_26)))), (ATerm) ATmakeAppl(sym_Build_1, x_26)));
              LocalPopChoice(l_25);
            }
          else
            {
              t = i_25;
              {
                ATerm y_26 = NULL,a_27 = NULL,e_27 = NULL,f_27 = NULL;
                t = f_26;
                t = new_0_0(t);
                e_27 = t;
                t = g_26;
                {
                  static ATerm c_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          y_26 = ATgetArgument(t, 0);
                        if(((a_27 != NULL) && (a_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_27);
                    return(t);
                  }
                  t = pat_td_1_0(c_2, t);
                }
                f_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(y_26), not_null(a_27), (ATerm) ATmakeAppl(sym_Var_1, e_27))), (ATerm) ATmakeAppl(sym_Build_1, f_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm r_25 = t;
  if((PushChoice() == 0))
    {
      ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,q_3 = NULL;
      v_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_27);
      t_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_27);
      q_3 = t;
      t = SSLsetAnnotations(q_3, t_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_25;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm w_27 = NULL,z_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_27 = ATgetFirst((ATermList) t);
      z_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_27, z_27);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,f_28 = NULL,h_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      if(match_cons(u_25, sym__2))
        {
          a_28 = ATgetArgument(u_25, 0);
          b_28 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      {
        ATerm v_25 = ATgetArgument(t, 1);
        if(match_cons(v_25, sym__2))
          {
            f_28 = ATgetArgument(v_25, 0);
            h_28 = ATgetArgument(v_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_28), a_28), (ATerm) ATinsert(CheckATermList(h_28), b_28));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_28 = ATgetFirst((ATermList) t);
      l_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_25 = ATgetArgument(t, 0);
      if(match_cons(w_25, sym__2))
        {
          q_28 = ATgetArgument(w_25, 0);
          r_28 = ATgetArgument(w_25, 1);
        }
      else
        _fail(t);
      {
        ATerm x_25 = ATgetArgument(t, 1);
        if(match_cons(x_25, sym__2))
          {
            s_28 = ATgetArgument(x_25, 0);
            t_28 = ATgetArgument(x_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_28), q_28), (ATerm) ATinsert(CheckATermList(t_28), r_28));
  return(t);
}
static ATerm f_8 (ATerm u_62, ATerm v_62, ATerm w_62, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,r_27 = NULL,s_27 = NULL,s_3 = NULL;
  t = w_62;
  t = fetch_1_0(d_2, t);
  t = w_62;
  t = genzip_4_0(e_2, f_2, g_2, LiftPrimArg_0_0, t);
  s_27 = t;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  l_27 = t;
  t = m_27;
  t = concat_0_0(t);
  o_27 = t;
  t = n_27;
  t = genzip_4_0(h_2, i_2, k_2, _id, t);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, r_27);
  s_3 = t;
  t = SSLsetAnnotations(s_3, l_27);
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(match_cons(y_25, sym__2))
          {
            j_27 = ATgetArgument(y_25, 0);
            k_27 = ATgetArgument(y_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, i_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_27), (ATerm) ATmakeAppl(sym_CallT_3, u_62, v_62, k_27)));
  return(t);
}
static ATerm t_29 (ATerm b_29, ATerm t)
{
  ATerm g_29 = NULL;
  t = b_29;
  {
    ATerm a_26 = t;
    if((PushChoice() == 0))
      {
        ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,o_8 = NULL;
        p_29 = t;
        if(match_cons(t, sym_Var_1))
          {
            o_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_29);
        n_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, o_29);
        o_8 = t;
        t = SSLsetAnnotations(o_8, n_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_26;
      }
  }
  t = new_0_0(t);
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, g_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_29)))), (ATerm) ATmakeAppl(sym_Var_1, g_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_29 = ATgetArgument(t, 0);
      {
        ATerm b_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_29(q_29, t);
            LocalPopChoice(d_26);
          }
        else
          {
            t = b_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATmakeAppl(sym_Var_1, r_29)));
          }
      }
    }
  else
    {
      t = t_29(q_29, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm e_26 = t;
  if((PushChoice() == 0))
    {
      ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,a_9 = NULL;
      k_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          j_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_12);
      i_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_12);
      a_9 = t;
      t = SSLsetAnnotations(a_9, i_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_26;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_12 = ATgetFirst((ATermList) t);
      m_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_12, m_12);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(match_cons(j_26, sym__2))
        {
          n_12 = ATgetArgument(j_26, 0);
          o_12 = ATgetArgument(j_26, 1);
        }
      else
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(match_cons(n_26, sym__2))
          {
            p_12 = ATgetArgument(n_26, 0);
            t_12 = ATgetArgument(n_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_12), n_12), (ATerm) ATinsert(CheckATermList(t_12), o_12));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm t_2 (ATerm t)
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
static ATerm u_2 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,j_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(match_cons(o_26, sym__2))
        {
          w_12 = ATgetArgument(o_26, 0);
          x_12 = ATgetArgument(o_26, 1);
        }
      else
        _fail(t);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(match_cons(p_26, sym__2))
          {
            y_12 = ATgetArgument(p_26, 0);
            j_13 = ATgetArgument(p_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_12), w_12), (ATerm) ATinsert(CheckATermList(j_13), x_12));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_26 = t;
  if((PushChoice() == 0))
    {
      ATerm z_15 = NULL,e_16 = NULL,f_16 = NULL,d_11 = NULL;
      f_16 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_16);
      z_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_16);
      d_11 = t;
      t = SSLsetAnnotations(d_11, z_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_26;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_16 = ATgetFirst((ATermList) t);
      h_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_16, h_16);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,x_16 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(match_cons(d_27, sym__2))
        {
          u_16 = ATgetArgument(d_27, 0);
          v_16 = ATgetArgument(d_27, 1);
        }
      else
        _fail(t);
      {
        ATerm y_27 = ATgetArgument(t, 1);
        if(match_cons(y_27, sym__2))
          {
            x_16 = ATgetArgument(y_27, 0);
            e_17 = ATgetArgument(y_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_16), u_16), (ATerm) ATinsert(CheckATermList(e_17), v_16));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm f_17 = NULL,h_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_17 = ATgetFirst((ATermList) t);
      h_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_17, h_17);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      if(match_cons(c_28, sym__2))
        {
          j_17 = ATgetArgument(c_28, 0);
          k_17 = ATgetArgument(c_28, 1);
        }
      else
        _fail(t);
      {
        ATerm d_28 = ATgetArgument(t, 1);
        if(match_cons(d_28, sym__2))
          {
            l_17 = ATgetArgument(d_28, 0);
            m_17 = ATgetArgument(d_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_17), j_17), (ATerm) ATinsert(CheckATermList(m_17), k_17));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,l_34 = NULL,m_34 = NULL;
  i_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      l_34 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
      h_34 = ATgetArgument(t, 2);
      {
        ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,b_11 = NULL;
        t = h_34;
        t = fetch_1_0(o_2, t);
        t = h_34;
        t = genzip_4_0(p_2, q_2, r_2, LiftPrimArg_0_0, t);
        h_12 = t;
        if(match_cons(t, sym__2))
          {
            d_12 = ATgetArgument(t, 0);
            e_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_12);
        c_12 = t;
        t = d_12;
        t = concat_0_0(t);
        f_12 = t;
        t = e_12;
        t = genzip_4_0(s_2, t_2, u_2, _id, t);
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_12, g_12);
        b_11 = t;
        t = SSLsetAnnotations(b_11, c_12);
        if(match_cons(t, sym__2))
          {
            z_11 = ATgetArgument(t, 0);
            {
              ATerm e_28 = ATgetArgument(t, 1);
              if(match_cons(e_28, sym__2))
                {
                  a_12 = ATgetArgument(e_28, 0);
                  b_12 = ATgetArgument(e_28, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_12), (ATerm) ATmakeAppl(sym_PrimT_3, l_34, m_34, b_12)));
      }
    }
  else
    {
      ATerm a_15 = NULL,b_15 = NULL,d_15 = NULL,e_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,y_15 = NULL,x_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          l_34 = ATgetArgument(t, 0);
          m_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_34;
      t = fetch_1_0(v_2, t);
      t = m_34;
      t = genzip_4_0(x_2, y_2, z_2, LiftPrimArg_0_0, t);
      y_15 = t;
      if(match_cons(t, sym__2))
        {
          j_15 = ATgetArgument(t, 0);
          k_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_15);
      e_15 = t;
      t = j_15;
      t = concat_0_0(t);
      l_15 = t;
      t = k_15;
      t = genzip_4_0(a_3, b_3, f_3, _id, t);
      m_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_15, m_15);
      x_11 = t;
      t = SSLsetAnnotations(x_11, e_15);
      if(match_cons(t, sym__2))
        {
          a_15 = ATgetArgument(t, 0);
          {
            ATerm g_28 = ATgetArgument(t, 1);
            if(match_cons(g_28, sym__2))
              {
                b_15 = ATgetArgument(g_28, 0);
                d_15 = ATgetArgument(g_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_15, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_15), (ATerm) ATmakeAppl(sym_PrimT_3, l_34, (ATerm)ATempty, d_15)));
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm h_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  o_35 = t;
  if(match_cons(t, sym_Con_3))
    {
      h_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
      n_35 = ATgetArgument(t, 2);
      {
        ATerm e_18 = NULL,z_12 = NULL;
        t = SSLgetAnnotations(o_35);
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, h_35, m_35, n_35);
        z_12 = t;
        t = SSLsetAnnotations(z_12, e_18);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = o_35;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm i_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_28;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,e_37 = NULL;
  b_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      c_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
      a_37 = ATgetArgument(t, 2);
      {
        ATerm l_19 = NULL,b_13 = NULL;
        t = SSLgetAnnotations(b_37);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, c_37, e_37, a_37);
        b_13 = t;
        t = SSLsetAnnotations(b_13, l_19);
      }
    }
  else
    {
      ATerm p_20 = NULL,k_18 = NULL;
      if(match_cons(t, sym_App_2))
        {
          c_37 = ATgetArgument(t, 0);
          e_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_37);
      p_20 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, c_37, e_37);
      k_18 = t;
      t = SSLsetAnnotations(k_18, p_20);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm u_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      r_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_37;
  if(match_cons(t, sym_StratRule_3))
    {
      s_37 = ATgetArgument(t, 0);
      t_37 = ATgetArgument(t, 1);
      u_37 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_37), (ATerm) ATmakeAppl(sym_Where_1, u_37)), s_37));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          s_37 = ATgetArgument(t, 0);
          t_37 = ATgetArgument(t, 1);
          u_37 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_37;
      t = pureterm_0_0(t);
      t = t_37;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, t_37)), (ATerm) ATmakeAppl(sym_Where_1, u_37)), (ATerm) ATmakeAppl(sym_Match_1, s_37)));
    }
  return(t);
}
static ATerm j_8 (ATerm h_58, ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  t = new_0_0(t);
  l_38 = t;
  t = h_58;
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm c_29 = ATgetArgument(t, 0);
          if(match_cons(c_29, sym_Var_1))
            {
              if(((k_38 != NULL) && (k_38 != ATgetArgument(c_29, 0))))
                _fail(ATgetArgument(c_29, 0));
              else
                k_38 = ATgetArgument(c_29, 0);
            }
          else
            _fail(t);
          if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_38 = ATgetArgument(t, 1);
          {
            ATerm h_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, k_38);
      return(t);
    }
    t = oncetd_1_0(m_3, t);
  }
  m_38 = t;
  t = i_58;
  {
    static ATerm n_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm i_29 = ATgetArgument(t, 0);
          if(match_cons(i_29, sym_Var_1))
            {
              if(((k_38 != NULL) && (k_38 != ATgetArgument(i_29, 0))))
                _fail(ATgetArgument(i_29, 0));
              else
                k_38 = ATgetArgument(i_29, 0);
            }
          else
            _fail(t);
          if(((j_38 != NULL) && (j_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_38 = ATgetArgument(t, 1);
          {
            ATerm j_29 = ATgetArgument(t, 2);
            if(match_cons(j_29, sym_CallT_3))
              {
                if(((h_38 != NULL) && (h_38 != ATgetArgument(j_29, 0))))
                  _fail(ATgetArgument(j_29, 0));
                else
                  h_38 = ATgetArgument(j_29, 0);
                {
                  ATerm k_29 = ATgetArgument(j_29, 1);
                  if(((ATgetType(k_29) != AT_LIST) || !(ATisEmpty(k_29))))
                    _fail(t);
                }
                {
                  ATerm l_29 = ATgetArgument(j_29, 2);
                  if(((ATgetType(l_29) != AT_LIST) || !(ATisEmpty(l_29))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, l_38);
      return(t);
    }
    t = oncetd_1_0(n_3, t);
  }
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, m_38, n_38, (ATerm) ATmakeAppl(sym_Seq_2, j_58, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(h_38), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_38), not_null(j_38), term_p_17))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_38)), (ATerm) ATmakeAppl(sym_Var_1, l_38))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
          l_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              m_41 = ATgetArgument(t, 0);
              t = m_41;
              if(match_cons(t, sym_Rule_3))
                {
                  e_41 = ATgetArgument(t, 0);
                  j_41 = ATgetArgument(t, 1);
                  k_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_41;
              t = j_8(e_41, j_41, k_41, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm f_21 = NULL,i_21 = NULL,p_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  m_41 = ATgetArgument(t, 0);
                  n_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_41);
              f_21 = t;
              t = n_41;
              t = desugarRule_0_0(t);
              i_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, m_41, i_21);
              p_21 = t;
              t = SSLsetAnnotations(p_21, f_21);
            }
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(s_29);
    }
  else
    {
      t = m_29;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
    }
  t = repeat_2_0(p_3, _id, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
            m_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                p_42 = ATgetArgument(t, 0);
                q_42 = ATgetArgument(t, 1);
                r_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_42;
            t = f_8(p_42, q_42, r_42, t);
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            {
              ATerm p_30 = t;
              int q_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(q_30);
                }
              else
                {
                  t = p_30;
                  {
                    ATerm r_30 = t;
                    int s_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(s_30);
                      }
                    else
                      {
                        t = r_30;
                        {
                          ATerm t_30 = t;
                          int u_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_30 = t;
                              int w_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm o_43 = NULL,p_43 = NULL,t_43 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      o_43 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = o_43;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      p_43 = ATgetArgument(t, 0);
                                      t = p_43;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          p_43 = ATgetArgument(t, 0);
                                          t_43 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, p_43, t_43);
                                    }
                                  LocalPopChoice(w_30);
                                }
                              else
                                {
                                  t = v_30;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(u_30);
                            }
                          else
                            {
                              t = t_30;
                              {
                                ATerm a_31 = t;
                                int b_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(b_31);
                                  }
                                else
                                  {
                                    t = a_31;
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
  ATerm z_45 = NULL,c_46 = NULL,d_46 = NULL;
  z_45 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_31);
        t = z_45;
        {
          ATerm f_31 = t;
          if((PushChoice() == 0))
            {
              ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,s_21 = NULL;
              s_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  q_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_22);
              p_22 = t;
              t = q_22;
              {
                ATerm g_31 = t;
                int h_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_23 = NULL;
                    t = term_t_18;
                    q_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_t_18, q_22);
                    t = c_9(q_23, q_22, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm i_31 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) i_31) != ATmakeSymbol("l_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = q_22;
                    LocalPopChoice(h_31);
                  }
                else
                  {
                    t = g_31;
                    {
                      ATerm c_23 = NULL,y_23 = NULL,r_21 = NULL,q_24 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          c_23 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(q_22);
                      y_23 = t;
                      t = term_t_18;
                      q_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_t_18, c_23);
                      t = c_9(q_24, c_23, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm j_31 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) j_31) != ATmakeSymbol("l_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, c_23);
                      r_21 = t;
                      t = SSLsetAnnotations(r_21, y_23);
                    }
                  }
              }
              r_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, r_22);
              s_21 = t;
              t = SSLsetAnnotations(s_21, p_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_31;
            }
        }
        t = term_b_21;
      }
    else
      {
        t = c_31;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_b_21;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                c_46 = ATgetArgument(t, 0);
                {
                  ATerm h_46 = NULL;
                  t = c_46;
                  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
                  t = map_1_0(f_4, t);
                  h_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_31, h_46);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    c_46 = ATgetArgument(t, 0);
                    d_46 = ATgetArgument(t, 1);
                    {
                      ATerm a_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
                      t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
                      t = map_1_0(k_4, t);
                      a_48 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_m_31, a_48);
                    }
                  }
                else
                  {
                    ATerm s_24 = NULL,t_24 = NULL,e_25 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm n_31 = ATgetArgument(t, 0);
                        ATerm o_31 = ATgetArgument(t, 1);
                        ATerm p_31 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_q_31;
                    t_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_r_31);
                    e_25 = t;
                    t = SSL_printnl(t_24, e_25);
                    t = term_s_31;
                    s_24 = t;
                    t = SSL_exit(s_24);
                    t = (ATerm) ATinsert(ATempty, term_r_31);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm i_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_46);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            {
              ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_46 = ATgetArgument(t, 0);
                  p_46 = ATgetArgument(t, 1);
                  q_46 = ATgetArgument(t, 2);
                  r_46 = ATgetArgument(t, 3);
                  t = q_46;
                  t = map_1_0(x_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_46 = ATgetArgument(t, 0);
                      p_46 = ATgetArgument(t, 1);
                      q_46 = ATgetArgument(t, 2);
                      r_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_46;
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
  ATerm e_47 = NULL;
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_47 = ATgetArgument(t, 0);
          {
            ATerm c_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_31);
      t = e_47;
    }
  else
    {
      t = y_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_47;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm q_47 = NULL;
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_47 = ATgetArgument(t, 0);
          {
            ATerm f_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_32);
      t = q_47;
    }
  else
    {
      t = d_32;
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
static ATerm f_4 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_47);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm b_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_48);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
      {
        ATerm i_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_32);
          }
        else
          {
            t = i_32;
            {
              ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,o_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_48 = ATgetArgument(t, 0);
                  g_48 = ATgetArgument(t, 1);
                  h_48 = ATgetArgument(t, 2);
                  o_48 = ATgetArgument(t, 3);
                  t = h_48;
                  t = map_1_0(i_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_48 = ATgetArgument(t, 0);
                      g_48 = ATgetArgument(t, 1);
                      h_48 = ATgetArgument(t, 2);
                      o_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_48;
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
  ATerm c_49 = NULL;
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_49 = ATgetArgument(t, 0);
          {
            ATerm n_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_32);
      t = c_49;
    }
  else
    {
      t = l_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_49;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm q_49 = NULL;
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_49 = ATgetArgument(t, 0);
          {
            ATerm r_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_32);
      t = q_49;
    }
  else
    {
      t = o_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_49;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_49);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(t_3, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm w_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_51 = ATgetArgument(t, 0);
      t = w_51;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_51 = ATgetArgument(t, 0);
          {
            ATerm s_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_51;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_51), (ATerm) ATempty);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm e_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_52 = ATgetArgument(t, 0);
      t = e_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_52 = ATgetArgument(t, 0);
          {
            ATerm t_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_52;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, e_52);
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
              ATerm j_53 = NULL,n_53 = NULL,o_53 = NULL,s_53 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_53 = ATgetArgument(t, 0);
                  n_53 = ATgetArgument(t, 1);
                  o_53 = ATgetArgument(t, 2);
                  s_53 = ATgetArgument(t, 3);
                  t = o_53;
                  t = map_1_0(z_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_53 = ATgetArgument(t, 0);
                      n_53 = ATgetArgument(t, 1);
                      o_53 = ATgetArgument(t, 2);
                      s_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_53;
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
  ATerm r_54 = NULL;
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_54 = ATgetArgument(t, 0);
          {
            ATerm a_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_32);
      t = r_54;
    }
  else
    {
      t = y_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_54;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm j_55 = NULL;
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_55 = ATgetArgument(t, 0);
          {
            ATerm d_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_33);
      t = j_55;
    }
  else
    {
      t = b_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_55;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_55);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm n_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_55);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
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
              ATerm p_55 = NULL,q_55 = NULL,t_55 = NULL,u_55 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_55 = ATgetArgument(t, 0);
                  q_55 = ATgetArgument(t, 1);
                  t_55 = ATgetArgument(t, 2);
                  u_55 = ATgetArgument(t, 3);
                  t = t_55;
                  t = map_1_0(g_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_55 = ATgetArgument(t, 0);
                      q_55 = ATgetArgument(t, 1);
                      t_55 = ATgetArgument(t, 2);
                      u_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_55;
                  t = map_1_0(j_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm i_56 = NULL;
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_56 = ATgetArgument(t, 0);
          {
            ATerm n_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_33);
      t = i_56;
    }
  else
    {
      t = k_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_56;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm c_57 = NULL;
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_57 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_33);
      t = c_57;
    }
  else
    {
      t = o_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_57;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm g_57 = NULL;
  g_57 = t;
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_57 = NULL,j_25 = NULL,v_21 = NULL,z_25 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            s_57 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_57);
        j_25 = t;
        t = term_t_18;
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_18, s_57);
        t = c_9(z_25, s_57, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm t_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_33) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, s_57);
        v_21 = t;
        t = SSLsetAnnotations(v_21, j_25);
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm c_26 = NULL;
          t = term_t_18;
          c_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_18, g_57);
          t = c_9(c_26, g_57, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm u_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_33) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = g_57;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, g_57);
  return(t);
}
static ATerm k_8 (ATerm b_126 (ATerm), ATerm l_71, ATerm i_71, ATerm j_71, ATerm s_71, ATerm w_71, ATerm x_71, ATerm t)
{
  ATerm q_50 = NULL,s_50 = NULL,t_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,p_51 = NULL,q_51 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_71, term_z_18);
  {
    ATerm v_33 = t;
    if((PushChoice() == 0))
      {
        ATerm r_51 = NULL;
        if(match_cons(t, sym__2))
          {
            r_51 = ATgetArgument(t, 0);
            if((r_51 != ATgetArgument(t, 1)))
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
        t = v_33;
      }
  }
  t = term_w_33;
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_33, l_71);
  t = s_9(q_51, l_71, t);
  q_50 = t;
  t = term_x_33;
  p_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_33, l_71);
  t = s_9(p_51, l_71, t);
  s_50 = t;
  t = new_0_0(t);
  t_50 = t;
  t = i_71;
  t = map_1_0(n_4, t);
  y_50 = t;
  t = j_71;
  t = map_1_0(q_4, t);
  z_50 = t;
  t = new_0_0(t);
  a_51 = t;
  t = s_71;
  t = dummify_0_0(t);
  c_51 = t;
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_51;
        if((s_71 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, a_51);
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = c_51;
      }
  }
  b_51 = t;
  t = c_51;
  t = free_vars_3_0(r_4, y_4, tboundin_3_0, t);
  t = map_1_0(d_5, t);
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_71, x_71);
  t = free_vars_3_0(e_5, f_5, tboundin_3_0, t);
  t = filter_1_0(k_5, t);
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_51, g_51);
  t = diff_0_0(t);
  h_51 = t;
  t = new_0_0(t);
  i_51 = t;
  t = l_71;
  t = b_126(t);
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, j_51, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(h_51), (ATerm) ATmakeAppl(sym_Str_1, i_51)))), c_51)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, s_50, i_71, j_71, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(h_51), (ATerm) ATmakeAppl(sym_Str_1, i_51)))), s_71)), w_71, (ATerm) ATmakeAppl(sym_Seq_2, term_g_34, x_71)))), (ATerm) ATmakeAppl(sym_RDefT_4, q_50, i_71, j_71, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_51), s_71), (ATerm)ATmakeAppl(sym_Var_1, t_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_71)))), b_51), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_50), y_50, z_50), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_34), (ATerm) ATmakeAppl(sym_Var_1, a_51)))))), (ATerm) ATmakeAppl(sym_Var_1, t_50)))))), (ATerm) ATmakeAppl(sym_RDefT_4, l_71, i_71, j_71, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_51), s_71), w_71, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_71)))), b_51), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(h_51), (ATerm) ATmakeAppl(sym_Str_1, i_51)))), term_a_34))), x_71)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_26 = NULL,b_27 = NULL,c_27 = NULL,g_27 = NULL,h_27 = NULL,p_27 = NULL,q_27 = NULL,x_27 = NULL;
      z_26 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          b_27 = ATgetArgument(t, 0);
          c_27 = ATgetArgument(t, 1);
          g_27 = ATgetArgument(t, 2);
          h_27 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = h_27;
      if(match_cons(t, sym_Rule_3))
        {
          p_27 = ATgetArgument(t, 0);
          q_27 = ATgetArgument(t, 1);
          x_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_26;
      t = k_8(m_5, b_27, c_27, g_27, p_27, q_27, x_27, t);
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      t = ExtendSplitDynamicRuleUndefined_1_0(p_5, t);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_28))));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_28))));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm p_28 = NULL,v_28 = NULL,w_28 = NULL,f_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_34 = ATgetArgument(t, 0);
      if(match_cons(s_34, sym__2))
        {
          p_28 = ATgetArgument(s_34, 0);
          v_28 = ATgetArgument(s_34, 1);
        }
      else
        _fail(t);
      {
        ATerm t_34 = ATgetArgument(t, 1);
        if(match_cons(t_34, sym__2))
          {
            w_28 = ATgetArgument(t_34, 0);
            f_29 = ATgetArgument(t_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_28), p_28), (ATerm) ATinsert(CheckATermList(f_29), v_28));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
      z_29 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          a_30 = ATgetArgument(t, 0);
          b_30 = ATgetArgument(t, 1);
          c_30 = ATgetArgument(t, 2);
          d_30 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_30;
      if(match_cons(t, sym_Rule_3))
        {
          e_30 = ATgetArgument(t, 0);
          f_30 = ATgetArgument(t, 1);
          g_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_29;
      t = k_8(w_5, a_30, b_30, c_30, e_30, f_30, g_30, t);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      t = ExtendSplitDynamicRuleUndefined_1_0(x_5, t);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, x_30))));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_30))));
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm z_30 = NULL,k_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_30 = ATgetFirst((ATermList) t);
      k_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_30, k_31);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm l_31 = NULL,v_31 = NULL,a_32 = NULL,b_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      if(match_cons(a_35, sym__2))
        {
          l_31 = ATgetArgument(a_35, 0);
          v_31 = ATgetArgument(a_35, 1);
        }
      else
        _fail(t);
      {
        ATerm e_35 = ATgetArgument(t, 1);
        if(match_cons(e_35, sym__2))
          {
            a_32 = ATgetArgument(e_35, 0);
            b_32 = ATgetArgument(e_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_32), l_31), (ATerm) ATinsert(CheckATermList(b_32), v_31));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = SplitDynamicRule_1_0(d_6, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm d_67 = NULL;
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_g_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_67))));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_67 = ATgetFirst((ATermList) t);
      f_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_67, f_67);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,u_68 = NULL,v_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if(match_cons(j_35, sym__2))
        {
          g_67 = ATgetArgument(j_35, 0);
          h_67 = ATgetArgument(j_35, 1);
        }
      else
        _fail(t);
      {
        ATerm k_35 = ATgetArgument(t, 1);
        if(match_cons(k_35, sym__2))
          {
            u_68 = ATgetArgument(k_35, 0);
            v_68 = ATgetArgument(k_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_68), g_67), (ATerm) ATinsert(CheckATermList(v_68), h_67));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = SplitDynamicRule_1_0(i_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm i_69 = NULL;
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_69))));
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_25;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_69 = ATgetFirst((ATermList) t);
      k_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_69, k_69);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm l_69 = NULL,p_69 = NULL,z_69 = NULL,a_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_35 = ATgetArgument(t, 0);
      if(match_cons(q_35, sym__2))
        {
          l_69 = ATgetArgument(q_35, 0);
          p_69 = ATgetArgument(q_35, 1);
        }
      else
        _fail(t);
      {
        ATerm r_35 = ATgetArgument(t, 1);
        if(match_cons(r_35, sym__2))
          {
            z_69 = ATgetArgument(r_35, 0);
            a_70 = ATgetArgument(r_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_69), l_69), (ATerm) ATinsert(CheckATermList(a_70), p_69));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL;
  h_66 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      i_66 = ATgetArgument(t, 0);
      {
        ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_21 = NULL;
        t = i_66;
        t = map_1_0(l_5, t);
        t = genzip_4_0(q_5, t_5, u_5, _id, t);
        w_26 = t;
        if(match_cons(t, sym__2))
          {
            t_26 = ATgetArgument(t, 0);
            u_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_26);
        s_26 = t;
        t = u_26;
        t = concat_0_0(t);
        v_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_26, v_26);
        x_21 = t;
        t = SSLsetAnnotations(x_21, s_26);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          i_66 = ATgetArgument(t, 0);
          {
            ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,y_21 = NULL;
            t = i_66;
            t = map_1_0(v_5, t);
            t = genzip_4_0(y_5, z_5, a_6, _id, t);
            y_29 = t;
            if(match_cons(t, sym__2))
              {
                v_29 = ATgetArgument(t, 0);
                w_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_29);
            u_29 = t;
            t = w_29;
            t = concat_0_0(t);
            x_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_29, x_29);
            y_21 = t;
            t = SSLsetAnnotations(y_21, u_29);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              i_66 = ATgetArgument(t, 0);
              t = i_66;
              t = map_1_0(c_6, t);
              t = genzip_4_0(e_6, f_6, g_6, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_66 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_66;
              t = map_1_0(h_6, t);
              t = genzip_4_0(j_6, k_6, l_6, _id, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  static ATerm e_70 (ATerm t)
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_95(t);
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        t = SRTS_one(e_70, t);
      }
    return(t);
  }
  t = e_70(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_t_18;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm p_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
  t_72 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      s_72 = ATgetArgument(t, 0);
      {
        ATerm u_35 = t;
        int v_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_72;
            p_72 = t;
            t = t_72;
            LocalPopChoice(v_35);
          }
        else
          {
            t = u_35;
            t = t_72;
            p_72 = t;
            t = t_72;
          }
      }
    }
  else
    {
      t = t_72;
      p_72 = t;
      t = t_72;
    }
  t = term_x_35;
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_72, term_x_35);
  t = d_9(s_6, p_72, r_72, t);
  t = t_72;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm w_125 (ATerm), ATerm t)
{
  static ATerm u_72 (ATerm t)
  {
    static ATerm n_6 (ATerm t)
    {
      ATerm y_35 = t;
      int z_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_125(t);
          LocalPopChoice(z_35);
        }
      else
        {
          t = y_35;
          {
            ATerm k_72 = NULL,l_72 = NULL,o_72 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                k_72 = ATgetArgument(t, 0);
                l_72 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, k_72, l_72);
            {
              static ATerm p_6 (ATerm t)
              {
                t = k_72;
                t = map_1_0(q_6, t);
                t = l_72;
                t = u_72(t);
                if(((o_72 != NULL) && (o_72 != t)))
                  _fail(t);
                else
                  o_72 = t;
                return(t);
              }
              t = scope_2_0(o_6, p_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, k_72, not_null(o_72));
          }
        }
      return(t);
    }
    t = oncetd_1_0(n_6, t);
    return(t);
  }
  t = u_72(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm e_73 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_73);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      {
        ATerm c_36 = t;
        int d_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_36);
          }
        else
          {
            t = c_36;
            {
              ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_73 = ATgetArgument(t, 0);
                  h_73 = ATgetArgument(t, 1);
                  i_73 = ATgetArgument(t, 2);
                  j_73 = ATgetArgument(t, 3);
                  t = i_73;
                  t = map_1_0(b_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_73 = ATgetArgument(t, 0);
                      h_73 = ATgetArgument(t, 1);
                      i_73 = ATgetArgument(t, 2);
                      j_73 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_73;
                  t = map_1_0(c_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm q_73 = NULL;
  ATerm e_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_73 = ATgetArgument(t, 0);
          {
            ATerm h_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_36);
      t = q_73;
    }
  else
    {
      t = e_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_73;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm z_73 = NULL;
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_73 = ATgetArgument(t, 0);
          {
            ATerm k_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_36);
      t = z_73;
    }
  else
    {
      t = i_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_73;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm j_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_74 = ATgetArgument(t, 0);
      t = j_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_74 = ATgetArgument(t, 0);
          {
            ATerm l_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_74;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm p_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_74 = ATgetArgument(t, 0);
      t = p_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_74 = ATgetArgument(t, 0);
          {
            ATerm o_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = p_74;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm t_74 = NULL;
  if(match_cons(t, sym__2))
    {
      t_74 = ATgetArgument(t, 0);
      if((t_74 != ATgetArgument(t, 1)))
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
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
  d_73 = t;
  t = free_vars_3_0(v_6, z_6, tboundin_3_0, t);
  b_73 = t;
  t = d_73;
  {
    ATerm p_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_74 = NULL;
        ATerm t_36 = t;
        int u_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm v_36 = ATgetArgument(t, 0);
                ATerm w_36 = ATgetArgument(t, 1);
                f_74 = ATgetArgument(t, 2);
                {
                  ATerm x_36 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_36);
            t = f_74;
            t = map_1_0(d_7, t);
          }
        else
          {
            t = t_36;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm y_36 = ATgetArgument(t, 0);
                ATerm z_36 = ATgetArgument(t, 1);
                f_74 = ATgetArgument(t, 2);
                {
                  ATerm d_37 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = f_74;
            t = map_1_0(f_7, t);
          }
        LocalPopChoice(r_36);
      }
    else
      {
        t = p_36;
        t = (ATerm) ATempty;
      }
  }
  c_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_73, c_73);
  t = r_8(g_7, b_73, c_73, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_t_18;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm z_74 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL;
  d_75 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      c_75 = ATgetArgument(t, 0);
      {
        ATerm f_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_75;
            z_74 = t;
            t = d_75;
            LocalPopChoice(g_37);
          }
        else
          {
            t = f_37;
            t = d_75;
            z_74 = t;
            t = d_75;
          }
      }
    }
  else
    {
      t = d_75;
      z_74 = t;
      t = d_75;
    }
  t = term_x_35;
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_74, term_x_35);
  t = d_9(l_7, z_74, b_75, t);
  t = d_75;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_t_18;
  return(t);
}
static ATerm m_8 (ATerm v_69, ATerm u_69, ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL;
  static ATerm i_7 (ATerm t)
  {
    t = v_69;
    t = def_tvars_0_0(t);
    t = map_1_0(j_7, t);
    t = v_69;
    {
      static ATerm m_7 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((w_74 != NULL) && (w_74 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              w_74 = ATgetArgument(t, 0);
            if(((v_74 != NULL) && (v_74 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              v_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, w_74);
        return(t);
      }
      t = split_dynamic_rule_1_0(m_7, t);
    }
    if(((x_74 != NULL) && (x_74 != t)))
      _fail(t);
    else
      x_74 = t;
    return(t);
  }
  t = scope_2_0(h_7, i_7, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_74)), not_null(x_74)), u_69);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm t)
{
  static ATerm e_75 (ATerm t)
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_93(t);
        t = e_75(t);
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = w_93(t);
      }
    return(t);
  }
  t = e_75(t);
  return(t);
}
ATerm listtd_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  static ATerm s_75 (ATerm t)
  {
    ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
    t = q_102(t);
    p_75 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_75;
      }
    else
      {
        ATerm j_32 = NULL,q_32 = NULL,b_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_75 = ATgetFirst((ATermList) t);
            r_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_75);
        j_32 = t;
        t = r_75;
        t = s_75(t);
        q_32 = t;
        t = (ATerm) ATinsert(CheckATermList(q_32), q_75);
        b_22 = t;
        t = SSLsetAnnotations(b_22, j_32);
      }
    return(t);
  }
  t = s_75(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,z_75 = NULL,a_76 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      z_75 = ATgetArgument(t, 0);
      a_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_75;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_75 = ATgetFirst((ATermList) t);
      x_75 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_k_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, x_75, a_76)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_75))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_76;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,r_79 = NULL;
  o_79 = t;
  if(match_cons(t, sym_Scope_2))
    {
      r_79 = ATgetArgument(t, 0);
      l_79 = ATgetArgument(t, 1);
      {
        ATerm g_33 = NULL,j_33 = NULL,m_33 = NULL,d_22 = NULL;
        t = SSLgetAnnotations(o_79);
        g_33 = t;
        t = r_79;
        t = q_125(t);
        j_33 = t;
        t = l_79;
        t = o_125(t);
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_33, m_33);
        d_22 = t;
        t = SSLsetAnnotations(d_22, g_33);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          r_79 = ATgetArgument(t, 0);
          l_79 = ATgetArgument(t, 1);
          m_79 = ATgetArgument(t, 2);
          n_79 = ATgetArgument(t, 3);
          {
            ATerm q_34 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,i_35 = NULL,e_22 = NULL;
            t = SSLgetAnnotations(o_79);
            q_34 = t;
            t = r_79;
            t = q_125(t);
            b_35 = t;
            t = l_79;
            t = q_125(t);
            c_35 = t;
            t = m_79;
            t = q_125(t);
            d_35 = t;
            t = n_79;
            t = o_125(t);
            i_35 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_35, c_35, d_35, i_35);
            e_22 = t;
            t = SSLsetAnnotations(e_22, q_34);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              r_79 = ATgetArgument(t, 0);
              l_79 = ATgetArgument(t, 1);
              m_79 = ATgetArgument(t, 2);
              n_79 = ATgetArgument(t, 3);
              {
                ATerm f_36 = NULL,m_36 = NULL,n_36 = NULL,q_36 = NULL,s_36 = NULL,f_22 = NULL;
                t = SSLgetAnnotations(o_79);
                f_36 = t;
                t = r_79;
                t = q_125(t);
                m_36 = t;
                t = l_79;
                t = q_125(t);
                n_36 = t;
                t = m_79;
                t = q_125(t);
                q_36 = t;
                t = n_79;
                t = o_125(t);
                s_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, m_36, n_36, q_36, s_36);
                f_22 = t;
                t = SSLsetAnnotations(f_22, f_36);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  r_79 = ATgetArgument(t, 0);
                  {
                    ATerm n_37 = NULL,q_37 = NULL,g_22 = NULL;
                    t = SSLgetAnnotations(o_79);
                    n_37 = t;
                    t = r_79;
                    t = o_125(t);
                    q_37 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, q_37);
                    g_22 = t;
                    t = SSLsetAnnotations(g_22, n_37);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      r_79 = ATgetArgument(t, 0);
                      {
                        ATerm d_38 = NULL,p_38 = NULL,h_22 = NULL;
                        t = SSLgetAnnotations(o_79);
                        d_38 = t;
                        t = r_79;
                        t = o_125(t);
                        p_38 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, p_38);
                        h_22 = t;
                        t = SSLsetAnnotations(h_22, d_38);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          r_79 = ATgetArgument(t, 0);
                          {
                            ATerm z_38 = NULL,b_39 = NULL,i_22 = NULL;
                            t = SSLgetAnnotations(o_79);
                            z_38 = t;
                            t = r_79;
                            t = o_125(t);
                            b_39 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, b_39);
                            i_22 = t;
                            t = SSLsetAnnotations(i_22, z_38);
                          }
                        }
                      else
                        {
                          ATerm h_39 = NULL,j_39 = NULL,j_22 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              r_79 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(o_79);
                          h_39 = t;
                          t = r_79;
                          t = o_125(t);
                          j_39 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, j_39);
                          j_22 = t;
                          t = SSLsetAnnotations(j_22, h_39);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm e_81 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_81);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      {
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_37);
          }
        else
          {
            t = v_37;
            {
              ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,l_81 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_81 = ATgetArgument(t, 0);
                  h_81 = ATgetArgument(t, 1);
                  i_81 = ATgetArgument(t, 2);
                  l_81 = ATgetArgument(t, 3);
                  t = i_81;
                  t = map_1_0(p_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_81 = ATgetArgument(t, 0);
                      h_81 = ATgetArgument(t, 1);
                      i_81 = ATgetArgument(t, 2);
                      l_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_81;
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
  ATerm w_81 = NULL;
  ATerm x_37 = t;
  int y_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_81 = ATgetArgument(t, 0);
          {
            ATerm z_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_37);
      t = w_81;
    }
  else
    {
      t = x_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_81;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm j_82 = NULL;
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_82 = ATgetArgument(t, 0);
          {
            ATerm c_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_38);
      t = j_82;
    }
  else
    {
      t = a_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_82;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_82);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      {
        ATerm g_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_38);
          }
        else
          {
            t = g_38;
            {
              ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL,z_82 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_82 = ATgetArgument(t, 0);
                  v_82 = ATgetArgument(t, 1);
                  w_82 = ATgetArgument(t, 2);
                  z_82 = ATgetArgument(t, 3);
                  t = w_82;
                  t = map_1_0(t_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_82 = ATgetArgument(t, 0);
                      v_82 = ATgetArgument(t, 1);
                      w_82 = ATgetArgument(t, 2);
                      z_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_82;
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
  ATerm k_83 = NULL;
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_83 = ATgetArgument(t, 0);
          {
            ATerm w_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_38);
      t = k_83;
    }
  else
    {
      t = q_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_83;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm v_83 = NULL;
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_83 = ATgetArgument(t, 0);
          {
            ATerm a_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_38);
      t = v_83;
    }
  else
    {
      t = x_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_83;
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm c_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_84);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm c_39 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_39);
    }
  else
    {
      t = c_39;
      {
        ATerm e_39 = t;
        int f_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_39);
          }
        else
          {
            t = e_39;
            {
              ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_84 = ATgetArgument(t, 0);
                  f_84 = ATgetArgument(t, 1);
                  g_84 = ATgetArgument(t, 2);
                  h_84 = ATgetArgument(t, 3);
                  t = g_84;
                  t = map_1_0(y_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_84 = ATgetArgument(t, 0);
                      f_84 = ATgetArgument(t, 1);
                      g_84 = ATgetArgument(t, 2);
                      h_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_84;
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
  ATerm o_84 = NULL;
  ATerm g_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_84 = ATgetArgument(t, 0);
          {
            ATerm k_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_39);
      t = o_84;
    }
  else
    {
      t = g_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_84;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm z_84 = NULL;
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_84 = ATgetArgument(t, 0);
          {
            ATerm n_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_39);
      t = z_84;
    }
  else
    {
      t = l_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_84;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm k_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_85);
  return(t);
}
static ATerm b_8 (ATerm t)
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
              ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL,v_85 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_85 = ATgetArgument(t, 0);
                  q_85 = ATgetArgument(t, 1);
                  r_85 = ATgetArgument(t, 2);
                  v_85 = ATgetArgument(t, 3);
                  t = r_85;
                  t = map_1_0(c_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_85 = ATgetArgument(t, 0);
                      q_85 = ATgetArgument(t, 1);
                      r_85 = ATgetArgument(t, 2);
                      v_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_85;
                  t = map_1_0(g_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm l_86 = NULL;
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_86 = ATgetArgument(t, 0);
          {
            ATerm v_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_39);
      t = l_86;
    }
  else
    {
      t = s_39;
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
static ATerm g_8 (ATerm t)
{
  ATerm y_86 = NULL;
  ATerm w_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_86 = ATgetArgument(t, 0);
          {
            ATerm z_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_39);
      t = y_86;
    }
  else
    {
      t = w_39;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm y_80 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      y_80 = ATgetArgument(t, 0);
      t = y_80;
      t = free_vars_3_0(n_7, o_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          y_80 = ATgetArgument(t, 0);
          t = y_80;
          t = free_vars_3_0(r_7, s_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              y_80 = ATgetArgument(t, 0);
              t = y_80;
              t = free_vars_3_0(w_7, x_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  y_80 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = y_80;
              t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm y_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_87);
  return(t);
}
static ATerm l_8 (ATerm t)
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
              ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL,f_88 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_88 = ATgetArgument(t, 0);
                  b_88 = ATgetArgument(t, 1);
                  c_88 = ATgetArgument(t, 2);
                  f_88 = ATgetArgument(t, 3);
                  t = c_88;
                  t = map_1_0(p_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_88 = ATgetArgument(t, 0);
                      b_88 = ATgetArgument(t, 1);
                      c_88 = ATgetArgument(t, 2);
                      f_88 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_88;
                  t = map_1_0(q_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm p_88 = NULL;
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_88 = ATgetArgument(t, 0);
          {
            ATerm h_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_40);
      t = p_88;
    }
  else
    {
      t = e_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_88;
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm y_88 = NULL;
  ATerm i_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_88 = ATgetArgument(t, 0);
          {
            ATerm l_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_40);
      t = y_88;
    }
  else
    {
      t = i_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_88;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm l_87 = NULL,t_87 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_87 = ATgetArgument(t, 0);
      t = t_87;
      if(match_cons(t, sym_Rule_3))
        {
          l_87 = ATgetArgument(t, 0);
          {
            ATerm m_40 = ATgetArgument(t, 1);
          }
          {
            ATerm n_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_87;
      t = free_vars_3_0(i_8, l_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_87 = ATgetArgument(t, 0);
          {
            ATerm p_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_87;
    }
  return(t);
}
static ATerm r_8 (ATerm l_105 (ATerm), ATerm a_29, ATerm z_28, ATerm t)
{
  static ATerm u_89 (ATerm t)
  {
    ATerm o_89 = NULL,p_89 = NULL,r_89 = NULL;
    o_89 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_89 = ATgetFirst((ATermList) t);
            r_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_40 = t;
          int s_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_89;
              {
                static ATerm u_8 (ATerm t)
                {
                  t = z_28;
                  return(t);
                }
                t = s_8(l_105, u_8, p_89, r_89, t);
              }
              t = u_89(t);
              LocalPopChoice(s_40);
            }
          else
            {
              t = r_40;
              {
                ATerm u_39 = NULL,x_39 = NULL,w_22 = NULL;
                t = SSLgetAnnotations(o_89);
                u_39 = t;
                t = r_89;
                t = u_89(t);
                x_39 = t;
                t = (ATerm) ATinsert(CheckATermList(x_39), p_89);
                w_22 = t;
                t = SSLsetAnnotations(w_22, u_39);
              }
            }
        }
      }
    return(t);
  }
  t = a_29;
  t = u_89(t);
  return(t);
}
static ATerm s_8 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm e_29, ATerm d_29, ATerm t)
{
  t = p_105(t);
  {
    static ATerm v_8 (ATerm t)
    {
      ATerm y_89 = NULL;
      y_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_29, y_89);
      t = o_105(t);
      return(t);
    }
    t = fetch_1_0(v_8, t);
  }
  t = d_29;
  return(t);
}
static ATerm t_8 (ATerm g_105 (ATerm), ATerm y_28, ATerm x_28, ATerm t)
{
  static ATerm a_91 (ATerm t)
  {
    ATerm o_90 = NULL,p_90 = NULL,r_90 = NULL;
    o_90 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_90;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_90 = ATgetFirst((ATermList) t);
            r_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_40 = t;
          int u_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_90;
              {
                static ATerm w_8 (ATerm t)
                {
                  t = x_28;
                  return(t);
                }
                t = s_8(g_105, w_8, p_90, r_90, t);
              }
              t = a_91(t);
              LocalPopChoice(u_40);
            }
          else
            {
              t = t_40;
              {
                ATerm g_40 = NULL,j_40 = NULL,z_22 = NULL;
                t = SSLgetAnnotations(o_90);
                g_40 = t;
                t = r_90;
                t = a_91(t);
                j_40 = t;
                t = (ATerm) ATinsert(CheckATermList(j_40), p_90);
                z_22 = t;
                t = SSLsetAnnotations(z_22, g_40);
              }
            }
        }
      }
    return(t);
  }
  t = y_28;
  t = a_91(t);
  return(t);
}
ATerm genzip_4_0 (ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t)
{
  static ATerm k_91 (ATerm t)
  {
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_103(t);
        LocalPopChoice(z_40);
      }
    else
      {
        t = y_40;
        {
          ATerm c_91 = NULL,d_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL,b_23 = NULL;
          t = l_103(t);
          i_91 = t;
          if(match_cons(t, sym__2))
            {
              d_91 = ATgetArgument(t, 0);
              f_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_91);
          c_91 = t;
          t = d_91;
          t = n_103(t);
          g_91 = t;
          t = f_91;
          t = k_91(t);
          h_91 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_91, h_91);
          b_23 = t;
          t = SSLsetAnnotations(b_23, c_91);
          t = m_103(t);
        }
      }
    return(t);
  }
  t = k_91(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_41 = ATgetArgument(t, 0);
      if(((ATgetType(c_41) != AT_LIST) || !(ATisEmpty(c_41))))
        _fail(t);
      {
        ATerm d_41 = ATgetArgument(t, 1);
        if(((ATgetType(d_41) != AT_LIST) || !(ATisEmpty(d_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm t_91 = NULL,u_91 = NULL,w_91 = NULL,x_91 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_41 = ATgetArgument(t, 0);
      if(((ATgetType(f_41) == AT_LIST) && !(ATisEmpty(f_41))))
        {
          t_91 = ATgetFirst((ATermList) f_41);
          u_91 = (ATerm) ATgetNext((ATermList) f_41);
        }
      else
        _fail(t);
      {
        ATerm q_41 = ATgetArgument(t, 1);
        if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
          {
            w_91 = ATgetFirst((ATermList) q_41);
            x_91 = (ATerm) ATgetNext((ATermList) q_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_91, w_91), (ATerm) ATmakeAppl(sym__2, u_91, x_91));
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL;
  if(match_cons(t, sym__2))
    {
      y_91 = ATgetArgument(t, 0);
      z_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_91), y_91);
  return(t);
}
static ATerm y_8 (ATerm r_610, ATerm w_610, ATerm x_57, ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL;
  t = SSL_explode_term(w_610);
  if(match_cons(t, sym__2))
    {
      o_91 = ATgetArgument(t, 0);
      q_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_610);
  if(match_cons(t, sym__2))
    {
      if((o_91 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_91, q_91);
  t = genzip_4_0(x_8, z_8, b_9, _id, t);
  r_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_91, x_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  static ATerm b_92 (ATerm t)
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_94(t);
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        t = n_94(t);
        t = b_92(t);
      }
    return(t);
  }
  t = b_92(t);
  return(t);
}
ATerm for_3_0 (ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm t)
{
  t = p_94(t);
  t = while_not_2_0(q_94, r_94, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm i_92 = NULL;
  i_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_92);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm l_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,g_23 = NULL;
  q_92 = t;
  if(match_cons(t, sym__2))
    {
      o_92 = ATgetArgument(t, 0);
      p_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_92);
  l_92 = t;
  t = p_92;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_92, p_92);
  g_23 = t;
  t = SSLsetAnnotations(g_23, l_92);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL;
  g_94 = t;
  if(match_cons(t, sym__2))
    {
      h_94 = ATgetArgument(t, 0);
      i_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_94 = ATgetFirst((ATermList) t);
      k_94 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_95(h_94, i_94, g_94, t);
            LocalPopChoice(u_41);
          }
        else
          {
            t = t_41;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_94), j_94), k_94);
          }
      }
    }
  else
    {
      t = c_95(h_94, i_94, g_94, t);
    }
  return(t);
}
static ATerm c_95 (ATerm r_92, ATerm v_92, ATerm y_92, ATerm t)
{
  ATerm b_93 = NULL,h_93 = NULL,k_23 = NULL,m_93 = NULL,n_93 = NULL,t_93 = NULL,y_93 = NULL;
  t = SSLgetAnnotations(y_92);
  b_93 = t;
  t = v_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_93 = ATgetFirst((ATermList) t);
      y_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_93;
  if(match_cons(t, sym__2))
    {
      n_93 = ATgetArgument(t, 0);
      t_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_93;
        if((n_93 != t))
          {
            _fail(t);
          }
        t = y_93;
        LocalPopChoice(w_41);
      }
    else
      {
        t = v_41;
        t = v_92;
        t = y_8(n_93, t_93, y_93, t);
      }
  }
  h_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_92, h_93);
  k_23 = t;
  t = SSLsetAnnotations(k_23, b_93);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm b_95 = NULL;
  if(match_cons(t, sym__2))
    {
      b_95 = ATgetArgument(t, 0);
      if((b_95 != ATgetArgument(t, 1)))
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
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_9, g_9, q_9, t);
      LocalPopChoice(y_41);
    }
  else
    {
      t = x_41;
      {
        ATerm u_94 = NULL,x_94 = NULL,y_94 = NULL;
        u_94 = t;
        if(match_cons(t, sym__2))
          {
            x_94 = ATgetArgument(t, 0);
            y_94 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_94;
        t = t_8(v_9, x_94, y_94, t);
      }
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  if(match_cons(t, sym__2))
    {
      v_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(f_10, v_40, w_40, t);
  return(t);
}
static ATerm f_10 (ATerm t)
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
static ATerm i_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  if(match_cons(t, sym__2))
    {
      g_41 = ATgetArgument(t, 0);
      h_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(l_10, g_41, h_41, t);
  return(t);
}
static ATerm l_10 (ATerm t)
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
ATerm free_vars_3_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm k_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_95 (ATerm t)
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_123(t);
        LocalPopChoice(a_42);
      }
    else
      {
        t = z_41;
        {
          ATerm b_42 = t;
          int c_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_95 = NULL,f_95 = NULL,o_40 = NULL,q_40 = NULL;
              e_95 = t;
              t = j_123(t);
              f_95 = t;
              t = e_95;
              {
                static ATerm z_9 (ATerm t)
                {
                  ATerm h_95 = NULL;
                  t = s_95(t);
                  h_95 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_95, f_95);
                  t = diff_0_0(t);
                  return(t);
                }
                t = k_123(z_9, s_95, a_10, t);
              }
              q_40 = t;
              t = SSL_explode_term(q_40);
              if(match_cons(t, sym__2))
                {
                  ATerm d_42 = ATgetArgument(t, 0);
                  o_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_40;
              t = foldr_3_0(d_10, e_10, _id, t);
              LocalPopChoice(c_42);
            }
          else
            {
              t = b_42;
              {
                ATerm a_41 = NULL,b_41 = NULL;
                b_41 = t;
                t = SSL_explode_term(b_41);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_42 = ATgetArgument(t, 0);
                    a_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_41;
                t = foldr_3_0(i_10, j_10, s_95, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_95(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  static ATerm m_10 (ATerm t)
  {
    t = bottomup_1_0(w_94, t);
    return(t);
  }
  t = SRTS_all(m_10, t);
  t = w_94(t);
  return(t);
}
static ATerm c_9 (ATerm w_53, ATerm x_53, ATerm t)
{
  ATerm t_95 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_53, x_53);
  t = t_9(w_53, x_53, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_95 = ATgetFirst((ATermList) t);
      {
        ATerm f_42 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_95;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL;
  j_96 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_42 = NULL;
        t = term_i_42;
        n_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_42, j_96);
        t = c_9(n_42, j_96, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm j_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_42) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, k_96, (ATerm) ATempty);
        LocalPopChoice(h_42);
      }
    else
      {
        t = g_42;
        {
          ATerm z_42 = NULL;
          t = term_i_42;
          z_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_42, j_96);
          t = c_9(z_42, j_96, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm k_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_42) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, k_96, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  static ATerm p_96 (ATerm t)
  {
    ATerm l_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_96(t);
        LocalPopChoice(o_42);
      }
    else
      {
        t = l_42;
        t = SRTS_all(p_96, t);
      }
    return(t);
  }
  t = p_96(t);
  return(t);
}
static ATerm d_9 (ATerm x_113 (ATerm), ATerm c_43, ATerm a_43, ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL;
  t_96 = t;
  t = x_113(t);
  q_96 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_96, c_43, a_43);
  t = u_9(q_96, c_43, a_43, t);
  {
    ATerm s_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_96 = NULL;
        t = term_u_42;
        w_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_96, term_u_42);
        t = t_9(q_96, w_96, t);
        LocalPopChoice(t_42);
      }
    else
      {
        t = s_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_96 = ATgetFirst((ATermList) t);
      s_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_u_42;
  u_96 = t;
  t = (ATerm) ATinsert(CheckATermList(s_96), (ATerm) ATinsert(CheckATermList(r_96), c_43));
  v_96 = t;
  t = SSL_table_put(q_96, u_96, v_96);
  t = t_96;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_i_42;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm a_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      c_97 = ATgetArgument(t, 0);
      d_97 = ATgetArgument(t, 1);
      a_97 = ATgetArgument(t, 2);
      {
        ATerm h_97 = NULL,i_97 = NULL;
        t = d_97;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, c_97);
        h_97 = t;
        t = term_w_42;
        i_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_97), term_w_42);
        t = d_9(n_10, h_97, i_97, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, c_97, (ATerm)ATempty, a_97);
      }
    }
  else
    {
      ATerm l_97 = NULL,m_97 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          c_97 = ATgetArgument(t, 0);
          d_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_97;
      if(match_cons(t, sym_ConstType_1))
        {
          e_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_97);
      l_97 = t;
      t = term_y_42;
      m_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_97), term_y_42);
      t = d_9(q_10, l_97, m_97, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_97, (ATerm) ATmakeAppl(sym_ConstType_1, e_97));
    }
  return(t);
}
static ATerm e_9 (ATerm q_53, ATerm r_53, ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL;
  r_97 = t;
  {
    ATerm b_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
        t = t_9(q_53, r_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_43 = ATgetFirst((ATermList) t);
            q_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_43);
        t = SSL_table_put(q_53, r_53, q_97);
        t = (ATerm) ATmakeAppl(sym__3, q_53, r_53, q_97);
      }
    else
      {
        t = b_43;
        t = SSL_table_remove(q_53, r_53);
        t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
      }
  }
  t = r_97;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_113 (ATerm), ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL;
  v_97 = t;
  t = u_113(t);
  u_97 = t;
  {
    ATerm f_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_97 = NULL;
        t = term_u_42;
        x_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_97, term_u_42);
        t = t_9(u_97, x_97, t);
        LocalPopChoice(g_43);
      }
    else
      {
        t = f_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_97 = ATgetFirst((ATermList) t);
      s_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_u_42;
  w_97 = t;
  t = SSL_table_put(u_97, w_97, s_97);
  t = t_97;
  {
    static ATerm r_10 (ATerm t)
    {
      ATerm y_97 = NULL;
      y_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_97, y_97);
      t = e_9(u_97, y_97, t);
      return(t);
    }
    t = map_1_0(r_10, t);
  }
  t = v_97;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t)
{
  ATerm h_43 = t;
  int i_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_93(t);
      t = s_93(t);
      LocalPopChoice(i_43);
    }
  else
    {
      t = h_43;
      t = s_93(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_113 (ATerm), ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL;
  b_98 = t;
  t = t_113(t);
  a_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_98, term_u_42);
  {
    ATerm j_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_98 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_43 = ATgetArgument(t, 0);
            ATerm m_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_42;
        i_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_98, term_u_42);
        t = t_9(a_98, i_98, t);
        LocalPopChoice(k_43);
      }
    else
      {
        t = j_43;
        t = (ATerm) ATempty;
      }
  }
  c_98 = t;
  t = term_u_42;
  d_98 = t;
  t = (ATerm) ATinsert(CheckATermList(c_98), (ATerm) ATempty);
  e_98 = t;
  t = SSL_table_put(a_98, d_98, e_98);
  t = b_98;
  return(t);
}
ATerm scope_2_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm t)
{
  static ATerm w_10 (ATerm t)
  {
    t = end_scope_1_0(v_113, t);
    return(t);
  }
  t = begin_scope_1_0(v_113, t);
  t = restore_always_2_0(w_113, w_10, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL,t_23 = NULL;
  q_98 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_98);
  n_98 = t;
  t = o_98;
  t = map_1_0(z_10, t);
  p_98 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_98);
  t_23 = t;
  t = SSLsetAnnotations(t_23, n_98);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL;
  e_99 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      d_99 = ATgetArgument(t, 0);
      {
        ATerm n_43 = t;
        int q_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_43 = NULL,v_43 = NULL,r_23 = NULL;
            t = SSLgetAnnotations(e_99);
            r_43 = t;
            t = d_99;
            t = map_1_0(e_11, t);
            v_43 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, v_43);
            r_23 = t;
            t = SSLsetAnnotations(r_23, r_43);
            LocalPopChoice(q_43);
          }
        else
          {
            t = n_43;
            t = e_99;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          d_99 = ATgetArgument(t, 0);
          {
            ATerm s_43 = t;
            int u_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_44 = NULL,j_44 = NULL,s_23 = NULL;
                t = SSLgetAnnotations(e_99);
                h_44 = t;
                t = d_99;
                t = map_1_0(j_11, t);
                j_44 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, j_44);
                s_23 = t;
                t = SSLsetAnnotations(s_23, h_44);
                LocalPopChoice(u_43);
              }
            else
              {
                t = s_43;
                t = e_99;
              }
          }
        }
      else
        {
          t = e_99;
        }
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm y_43 = t;
  int z_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(z_43);
    }
  else
    {
      t = y_43;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(x_10, y_10, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL;
  l_99 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_99;
    }
  else
    {
      static ATerm k_11 (ATerm t)
      {
        t = not_null(n_99);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_99 = ATgetFirst((ATermList) t);
          if(((n_99 != NULL) && (n_99 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_99;
      t = at_end_1_0(k_11, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL;
  c_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_100;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_100 = ATgetFirst((ATermList) t);
          e_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_44 = t;
        int b_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_44 = NULL,w_44 = NULL,x_44 = NULL,z_23 = NULL;
            t = SSLgetAnnotations(c_100);
            t_44 = t;
            t = d_100;
            t = r_108(t);
            w_44 = t;
            t = e_100;
            t = filter_1_0(r_108, t);
            x_44 = t;
            t = (ATerm) ATinsert(CheckATermList(x_44), w_44);
            z_23 = t;
            t = SSLsetAnnotations(z_23, t_44);
            LocalPopChoice(b_44);
          }
        else
          {
            t = a_44;
            t = e_100;
            t = filter_1_0(r_108, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  static ATerm u_100 (ATerm t)
  {
    ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL;
    t_100 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_100 = ATgetFirst((ATermList) t);
        s_100 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_45 = NULL,q_45 = NULL,b_24 = NULL;
          t = SSLgetAnnotations(t_100);
          f_45 = t;
          t = s_100;
          t = u_100(t);
          q_45 = t;
          t = (ATerm) ATinsert(CheckATermList(q_45), r_100);
          b_24 = t;
          t = SSLsetAnnotations(b_24, f_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_100;
        t = x_101(t);
      }
    return(t);
  }
  t = u_100(t);
  return(t);
}
static ATerm l_101 (ATerm a_101, ATerm t)
{
  ATerm b_101 = NULL;
  t = SSL_explode_term(a_101);
  if(match_cons(t, sym__2))
    {
      ATerm c_44 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_44) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_101;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,g_101 = NULL;
  g_101 = t;
  if(match_cons(t, sym__2))
    {
      d_101 = ATgetArgument(t, 0);
      e_101 = ATgetArgument(t, 1);
      {
        ATerm d_44 = t;
        int e_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_11 (ATerm t)
            {
              t = e_101;
              return(t);
            }
            t = d_101;
            t = at_end_1_0(l_11, t);
            LocalPopChoice(e_44);
          }
        else
          {
            t = d_44;
            t = l_101(g_101, t);
          }
      }
    }
  else
    {
      t = l_101(g_101, t);
    }
  return(t);
}
static ATerm h_9 (ATerm v_20, ATerm r_20, ATerm t)
{
  ATerm m_101 = NULL,n_101 = NULL;
  static ATerm m_11 (ATerm t)
  {
    ATerm o_101 = NULL,p_101 = NULL,q_101 = NULL,t_101 = NULL;
    t_101 = t;
    t = SSL_explode_term(t_101);
    if(match_cons(t, sym__2))
      {
        if(((m_101 != NULL) && (m_101 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_101 = ATgetArgument(t, 0);
        {
          ATerm f_44 = ATgetArgument(t, 1);
          if(((ATgetType(f_44) == AT_LIST) && !(ATisEmpty(f_44))))
            {
              o_101 = ATgetFirst((ATermList) f_44);
              {
                ATerm g_44 = (ATerm) ATgetNext((ATermList) f_44);
                if(((ATgetType(g_44) != AT_LIST) || !(ATisEmpty(g_44))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, o_101, not_null(n_101));
    t = conc_0_0(t);
    p_101 = t;
    t = (ATerm) ATinsert(ATempty, p_101);
    q_101 = t;
    t = SSL_mkterm(m_101, q_101);
    return(t);
  }
  t = SSL_explode_term(v_20);
  if(match_cons(t, sym__2))
    {
      if(((m_101 != NULL) && (m_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_101 = ATgetArgument(t, 0);
      {
        ATerm i_44 = ATgetArgument(t, 1);
        if(((ATgetType(i_44) == AT_LIST) && !(ATisEmpty(i_44))))
          {
            if(((n_101 != NULL) && (n_101 != ATgetFirst((ATermList) i_44))))
              _fail(ATgetFirst((ATermList) i_44));
            else
              n_101 = ATgetFirst((ATermList) i_44);
            {
              ATerm k_44 = (ATerm) ATgetNext((ATermList) i_44);
              if(((ATgetType(k_44) != AT_LIST) || !(ATisEmpty(k_44))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_20;
  t = fetch_1_0(m_11, t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL,z_101 = NULL;
  v_101 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_101;
      t = p_107(t);
    }
  else
    {
      ATerm c_102 = NULL,d_102 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_101 = ATgetFirst((ATermList) t);
          z_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_101;
      t = r_107(t);
      c_102 = t;
      t = z_101;
      t = foldr_3_0(p_107, q_107, r_107, t);
      d_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_102, d_102);
      t = q_107(t);
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_44), term_m_44), term_l_44);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm k_102 = NULL,l_102 = NULL;
  if(match_cons(t, sym__2))
    {
      k_102 = ATgetArgument(t, 0);
      l_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_9(k_102, l_102, t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm m_102 = NULL,n_102 = NULL;
  n_102 = t;
  if(match_cons(t, sym_Signature_1))
    {
      m_102 = ATgetArgument(t, 0);
      {
        ATerm o_44 = t;
        int p_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_102 = NULL;
            t = m_102;
            t = filter_1_0(q_11, t);
            t = concat_0_0(t);
            p_102 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, p_102);
            LocalPopChoice(p_44);
          }
        else
          {
            t = o_44;
            t = n_102;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          m_102 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, m_102);
        }
      else
        {
          t = n_102;
        }
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm s_102 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      s_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_102;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,d_24 = NULL;
  j_102 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_102);
  g_102 = t;
  t = h_102;
  t = foldr_3_0(n_11, o_11, p_11, t);
  i_102 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_102);
  d_24 = t;
  t = SSLsetAnnotations(d_24, g_102);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm q_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(r_44);
    }
  else
    {
      t = q_44;
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL;
  i_104 = t;
  if(match_cons(t, sym_LRule_1))
    {
      h_104 = ATgetArgument(t, 0);
      t = h_104;
      if(match_cons(t, sym_Rule_3))
        {
          e_104 = ATgetArgument(t, 0);
          f_104 = ATgetArgument(t, 1);
          g_104 = ATgetArgument(t, 2);
          {
            ATerm s_44 = t;
            int u_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_104 = NULL;
                t = e_104;
                t = free_vars_3_0(q_12, r_12, tboundin_3_0, t);
                m_104 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, m_104, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, e_104, f_104, g_104)));
                LocalPopChoice(u_44);
              }
            else
              {
                t = s_44;
                t = i_104;
              }
          }
        }
      else
        {
          t = i_104;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          h_104 = ATgetArgument(t, 0);
          {
            ATerm v_44 = t;
            int y_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_105 = NULL;
                t = h_104;
                t = free_vars_3_0(e_13, k_13, tboundin_3_0, t);
                u_105 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, u_105, h_104);
                LocalPopChoice(y_44);
              }
            else
              {
                t = v_44;
                t = i_104;
              }
          }
        }
      else
        {
          t = i_104;
        }
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm n_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_104);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_45);
    }
  else
    {
      t = z_44;
      {
        ATerm b_45 = t;
        int c_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_45);
          }
        else
          {
            t = b_45;
            {
              ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_104 = ATgetArgument(t, 0);
                  q_104 = ATgetArgument(t, 1);
                  r_104 = ATgetArgument(t, 2);
                  s_104 = ATgetArgument(t, 3);
                  t = r_104;
                  t = map_1_0(s_12, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_104 = ATgetArgument(t, 0);
                      q_104 = ATgetArgument(t, 1);
                      r_104 = ATgetArgument(t, 2);
                      s_104 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_104;
                  t = map_1_0(a_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm z_104 = NULL;
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_104 = ATgetArgument(t, 0);
          {
            ATerm g_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_45);
      t = z_104;
    }
  else
    {
      t = d_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_104;
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm k_105 = NULL;
  ATerm h_45 = t;
  int i_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_105 = ATgetArgument(t, 0);
          {
            ATerm j_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_45);
      t = k_105;
    }
  else
    {
      t = h_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_105;
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm v_105 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_105);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm k_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_45);
    }
  else
    {
      t = k_45;
      {
        ATerm m_45 = t;
        int n_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_45);
          }
        else
          {
            t = m_45;
            {
              ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL,a_106 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_105 = ATgetArgument(t, 0);
                  y_105 = ATgetArgument(t, 1);
                  z_105 = ATgetArgument(t, 2);
                  a_106 = ATgetArgument(t, 3);
                  t = z_105;
                  t = map_1_0(n_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_105 = ATgetArgument(t, 0);
                      y_105 = ATgetArgument(t, 1);
                      z_105 = ATgetArgument(t, 2);
                      a_106 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_105;
                  t = map_1_0(y_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm h_106 = NULL;
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_106 = ATgetArgument(t, 0);
          {
            ATerm r_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_45);
      t = h_106;
    }
  else
    {
      t = o_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_106;
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm q_106 = NULL;
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_106 = ATgetArgument(t, 0);
          {
            ATerm u_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_45);
      t = q_106;
    }
  else
    {
      t = s_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_106;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = Cons_2_0(c_14, d_14, t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL,f_24 = NULL;
  z_106 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_106);
  w_106 = t;
  t = x_106;
  t = topdown_1_0(f_14, t);
  t = listtd_1_0(i_14, t);
  y_106 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_106);
  f_24 = t;
  t = SSLsetAnnotations(f_24, w_106);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = repeat_2_0(j_14, _id, t);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm c_107 = NULL,d_107 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_107 = ATgetFirst((ATermList) t);
      d_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_8(c_107, d_107, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(y_45);
    }
  else
    {
      t = x_45;
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm h_107 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      h_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, h_107)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL,i_24 = NULL,h_24 = NULL,g_24 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(r_11, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(y_11, t);
  b_104 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_104);
  u_103 = t;
  t = v_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_103 = ATgetFirst((ATermList) t);
      y_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_103);
  w_103 = t;
  t = y_103;
  t = Cons_2_0(_id, b_14, t);
  z_103 = t;
  t = (ATerm) ATinsert(CheckATermList(z_103), x_103);
  g_24 = t;
  t = SSLsetAnnotations(g_24, w_103);
  a_104 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_104);
  h_24 = t;
  t = SSLsetAnnotations(h_24, u_103);
  t = topdown_1_0(k_14, t);
  t_103 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_103);
  q_103 = t;
  t = r_103;
  t = fetch_1_0(l_14, t);
  s_103 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_103);
  i_24 = t;
  t = SSLsetAnnotations(i_24, q_103);
  return(t);
}
static ATerm i_9 (ATerm s_38, ATerm t_38, ATerm t)
{
  ATerm i_107 = NULL;
  t = SSL_fputc(s_38, t_38);
  i_107 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_107);
  return(t);
}
static ATerm j_9 (ATerm h_23, ATerm i_23, ATerm t)
{
  ATerm j_107 = NULL;
  t = SSL_write_term_to_stream_text(h_23, i_23);
  j_107 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_107);
  return(t);
}
static ATerm l_9 (ATerm y_100 (ATerm), ATerm u_164, ATerm l_23, ATerm t)
{
  ATerm k_107 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_164, term_a_46);
  t = o_9(t);
  k_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_107, l_23);
  t = y_100(t);
  t = fclose_0_0(t);
  t = l_23;
  return(t);
}
static ATerm k_9 (ATerm d_23, ATerm e_23, ATerm t)
{
  ATerm l_107 = NULL;
  t = SSL_write_term_to_stream_baf(d_23, e_23);
  l_107 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_107);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_46 = ATgetArgument(t, 0);
      if(match_cons(b_46, sym_Stream_1))
        {
          t_107 = ATgetArgument(b_46, 0);
        }
      else
        _fail(t);
      u_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(t_107, u_107, t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_46 = ATgetArgument(t, 0);
      if(match_cons(e_46, sym_Stream_1))
        {
          y_107 = ATgetArgument(e_46, 0);
        }
      else
        _fail(t);
      z_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(y_107, z_107, t);
  v_107 = t;
  t = term_c_22;
  w_107 = t;
  t = v_107;
  if(match_cons(t, sym_Stream_1))
    {
      x_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, v_107);
  t = i_9(w_107, x_107, t);
  return(t);
}
ATerm output_1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm m_107 = NULL,s_107 = NULL;
  t = d_119(t);
  s_107 = t;
  {
    ATerm f_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_46;
        t = get_config_0_0(t);
        LocalPopChoice(g_46);
      }
    else
      {
        t = f_46;
        t = term_k_46;
      }
  }
  m_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_107, s_107);
  {
    ATerm l_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_46;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, m_107, s_107);
        LocalPopChoice(m_46);
        if(match_cons(t, sym__2))
          {
            ATerm s_46 = ATgetArgument(t, 0);
            ATerm t_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_9(m_14, m_107, s_107, t);
      }
    else
      {
        t = l_46;
        if(match_cons(t, sym__2))
          {
            ATerm u_46 = ATgetArgument(t, 0);
            ATerm v_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_9(n_14, m_107, s_107, t);
      }
  }
  return(t);
}
static ATerm n_108 (ATerm h_108, ATerm t)
{
  t = SSL_fclose(h_108);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL;
  l_108 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_108 = ATgetArgument(t, 0);
      {
        ATerm w_46 = t;
        int x_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_108);
            LocalPopChoice(x_46);
          }
        else
          {
            t = w_46;
            t = n_108(l_108, t);
          }
      }
    }
  else
    {
      t = n_108(l_108, t);
    }
  return(t);
}
static ATerm m_9 (ATerm j_23, ATerm t)
{
  t = SSL_read_term_from_stream(j_23);
  return(t);
}
static ATerm n_9 (ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm o_108 = NULL;
  t = SSL_fopen(u_38, v_38);
  o_108 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_108);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_108 = NULL;
  t = SSL_stdin_stream();
  p_108 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_108);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_108 = NULL;
  t = SSL_stdout_stream();
  q_108 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_108);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_108 = NULL;
  t = SSL_stderr_stream();
  s_108 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_108);
  return(t);
}
static ATerm z_109 (ATerm y_108, ATerm t)
{
  ATerm z_108 = NULL;
  t = SSL_explode_term(y_108);
  if(match_cons(t, sym__2))
    {
      ATerm y_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_47 = ATgetArgument(t, 1);
        if(((ATgetType(b_47) == AT_LIST) && !(ATisEmpty(b_47))))
          {
            z_108 = ATgetFirst((ATermList) b_47);
            {
              ATerm d_47 = (ATerm) ATgetNext((ATermList) b_47);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_108;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_108;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_108;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_108;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_110 (ATerm c_109, ATerm d_109, ATerm e_109, ATerm t)
{
  ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL,k_109 = NULL,r_24 = NULL;
  t = SSLgetAnnotations(e_109);
  h_109 = t;
  t = c_109;
  if(match_cons(t, sym_Path_1))
    {
      k_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_109, d_109);
  r_24 = t;
  t = SSLsetAnnotations(r_24, h_109);
  if(match_cons(t, sym__2))
    {
      f_109 = ATgetArgument(t, 0);
      g_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(f_109, g_109, t);
  return(t);
}
static ATerm b_110 (ATerm m_109, ATerm n_109, ATerm o_109, ATerm t)
{
  ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL,u_109 = NULL,u_24 = NULL;
  t = SSLgetAnnotations(o_109);
  r_109 = t;
  t = SSL_is_string(m_109);
  u_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_109, n_109);
  u_24 = t;
  t = SSLsetAnnotations(u_24, r_109);
  if(match_cons(t, sym__2))
    {
      p_109 = ATgetArgument(t, 0);
      q_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(p_109, q_109, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL;
  w_109 = t;
  if(match_cons(t, sym__2))
    {
      x_109 = ATgetArgument(t, 0);
      y_109 = ATgetArgument(t, 1);
      {
        ATerm f_47 = t;
        int g_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_109(w_109, t);
            LocalPopChoice(g_47);
          }
        else
          {
            t = f_47;
            {
              ATerm h_47 = t;
              int i_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_110(x_109, y_109, w_109, t);
                  LocalPopChoice(i_47);
                }
              else
                {
                  t = h_47;
                  t = b_110(x_109, y_109, w_109, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_109(w_109, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_110 = NULL,e_110 = NULL,f_110 = NULL,k_110 = NULL;
  k_110 = t;
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_110, term_m_47);
        t = o_9(t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
        {
          ATerm z_46 = NULL,a_47 = NULL;
          t = term_n_47;
          a_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_47, k_110);
          t = s_9(a_47, k_110, t);
          z_46 = t;
          t = SSL_perror(z_46);
          _fail(t);
        }
      }
  }
  e_110 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_9(f_110, t);
  d_110 = t;
  t = e_110;
  t = fclose_0_0(t);
  t = d_110;
  return(t);
}
ATerm input_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm o_47 = t;
  int p_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_47;
      t = get_config_0_0(t);
      LocalPopChoice(p_47);
    }
  else
    {
      t = o_47;
      t = term_u_47;
    }
  t = ReadFromFile_0_0(t);
  t = e_119(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL;
  n_110 = t;
  t = term_v_47;
  t = whoami_0_0(t);
  o_110 = t;
  t = term_q_31;
  q_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_47), o_110), term_w_47);
  r_110 = t;
  t = SSL_printnl(q_110, r_110);
  t = term_s_31;
  p_110 = t;
  t = SSL_exit(p_110);
  t = n_110;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm t_110 = NULL;
  t_110 = t;
  if(match_string(t, "-k"))
    {
      t = t_110;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_110;
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm u_110 = NULL,v_110 = NULL,w_110 = NULL;
  u_110 = t;
  t = SSL_string_to_int(u_110);
  v_110 = t;
  t = term_z_47;
  w_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_47, v_110);
  t = w_9(w_110, v_110, t);
  t = u_110;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_c_48;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_14, p_14, q_14, t);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm y_110 = NULL;
  y_110 = t;
  if(match_string(t, "-S"))
    {
      t = y_110;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_110;
    }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm z_110 = NULL,a_111 = NULL;
  t = term_d_48;
  z_110 = t;
  t = term_e_48;
  a_111 = t;
  t = term_i_48;
  t = w_9(z_110, a_111, t);
  t = term_j_48;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_k_48;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm b_111 = NULL,c_111 = NULL,d_111 = NULL;
  b_111 = t;
  t = SSL_string_to_int(b_111);
  c_111 = t;
  t = term_d_48;
  d_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_48, c_111);
  t = w_9(d_111, c_111, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_111);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_n_48;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL;
  t = term_p_48;
  e_111 = t;
  t = term_v_47;
  f_111 = t;
  t = term_q_48;
  t = w_9(e_111, f_111, t);
  t = term_r_48;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_s_48;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_48 = t;
  int u_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_14, s_14, t_14, t);
      LocalPopChoice(u_48);
    }
  else
    {
      t = t_48;
      {
        ATerm v_48 = t;
        int w_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_14, v_14, w_14, t);
            LocalPopChoice(w_48);
          }
        else
          {
            t = v_48;
            t = Option_3_0(x_14, y_14, z_14, t);
          }
      }
    }
  return(t);
}
static ATerm w_9 (ATerm l_48, ATerm m_48, ATerm t)
{
  ATerm g_111 = NULL;
  t = term_y_48;
  g_111 = t;
  t = SSL_table_put(g_111, l_48, m_48);
  t = (ATerm) ATmakeAppl(sym__3, term_y_48, l_48, m_48);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_111 = NULL,k_111 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_111 = NULL,m_111 = NULL,n_111 = NULL;
      t = term_v_47;
      t = i_0(t);
      l_111 = t;
      t = term_z_48;
      m_111 = t;
      t = term_a_49;
      n_111 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_48, term_a_49, l_111);
      t = u_9(m_111, n_111, l_111, t);
      _fail(t);
    }
  else
    {
      ATerm q_111 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_111 = ATgetFirst((ATermList) t);
          k_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_111;
      t = d_0(t);
      t = term_v_47;
      t = g_0(t);
      q_111 = t;
      t = (ATerm) ATinsert(CheckATermList(k_111), q_111);
    }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm s_111 = NULL;
  s_111 = t;
  if(match_string(t, "-o"))
    {
      t = s_111;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_111;
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm t_111 = NULL,u_111 = NULL;
  t_111 = t;
  t = term_j_46;
  u_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_46, t_111);
  t = w_9(u_111, t_111, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_111);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_b_49;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_15, n_15, o_15, t);
  return(t);
}
static ATerm u_9 (ATerm l_53, ATerm m_53, ATerm k_53, ATerm t)
{
  ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL;
  b_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_49 = ATgetArgument(t, 0);
            ATerm g_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
        t = t_9(l_53, m_53, t);
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
        t = (ATerm) ATempty;
      }
  }
  c_112 = t;
  t = (ATerm) ATinsert(CheckATermList(c_112), k_53);
  d_112 = t;
  t = SSL_table_put(l_53, m_53, d_112);
  t = b_112;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL;
      t = term_v_47;
      t = r_0(t);
      o_112 = t;
      t = term_z_48;
      p_112 = t;
      t = term_a_49;
      q_112 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_48, term_a_49, o_112);
      t = u_9(p_112, q_112, o_112, t);
      _fail(t);
    }
  else
    {
      ATerm u_112 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_112 = ATgetFirst((ATermList) t);
          l_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_112;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_112 = ATgetFirst((ATermList) t);
          n_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_112;
      t = o_0(t);
      t = m_112;
      t = p_0(t);
      u_112 = t;
      t = (ATerm) ATinsert(CheckATermList(n_112), u_112);
    }
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm w_112 = NULL;
  w_112 = t;
  if(match_string(t, "-i"))
    {
      t = w_112;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_112;
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm x_112 = NULL,y_112 = NULL;
  x_112 = t;
  t = term_r_47;
  y_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_47, x_112);
  t = w_9(y_112, x_112, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_112);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_h_49;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_15, q_15, r_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_47;
  t = whoami_0_0(t);
  z_112 = t;
  t = term_q_31;
  b_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_49), z_112);
  c_113 = t;
  t = SSL_printnl(b_113, c_113);
  t = term_s_31;
  a_113 = t;
  t = SSL_exit(a_113);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_49;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_9 (ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_41, p_41);
      LocalPopChoice(l_49);
    }
  else
    {
      t = k_49;
      t = SSL_addr(o_41, p_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL;
  e_113 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_113;
      t = n_107(t);
    }
  else
    {
      ATerm j_113 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_113 = ATgetFirst((ATermList) t);
          g_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_113;
      t = foldr_2_0(n_107, o_107, t);
      j_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_113, j_113);
      t = o_107(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_e_48;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  if(match_cons(t, sym__2))
    {
      s_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(s_47, t_47, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_113 = NULL,c_47 = NULL,j_47 = NULL;
  t = times_0_0(t);
  j_47 = t;
  t = SSL_explode_term(j_47);
  if(match_cons(t, sym__2))
    {
      ATerm n_49 = ATgetArgument(t, 0);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_47;
  t = foldr_2_0(s_15, t_15, t);
  m_113 = t;
  t = SSL_TicksToSeconds(m_113);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_114 = NULL,e_114 = NULL,f_114 = NULL;
  d_114 = t;
  if(match_cons(t, sym__2))
    {
      e_114 = ATgetArgument(t, 0);
      f_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_49 = t;
    int p_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_114;
        if((e_114 != t))
          {
            _fail(t);
          }
        t = d_114;
        LocalPopChoice(p_49);
      }
    else
      {
        t = o_49;
        t = (ATerm) ATmakeAppl(sym__2, e_114, f_114);
        {
          ATerm r_49 = t;
          int s_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_114, f_114);
              LocalPopChoice(s_49);
            }
          else
            {
              t = r_49;
              t = SSL_gtr(e_114, f_114);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_114, f_114);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_116 (ATerm), ATerm t)
{
  ATerm j_114 = NULL;
  j_114 = t;
  {
    ATerm t_49 = t;
    int u_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_114 = NULL;
        t = term_d_48;
        t = get_config_0_0(t);
        l_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_114, term_s_31);
        t = geq_0_0(t);
        t = j_114;
        t = e_116(t);
        LocalPopChoice(u_49);
      }
    else
      {
        t = t_49;
        t = j_114;
      }
  }
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm n_114 = NULL,o_114 = NULL,q_114 = NULL,r_114 = NULL;
  t = run_time_0_0(t);
  n_114 = t;
  t = term_v_47;
  t = whoami_0_0(t);
  o_114 = t;
  t = term_q_31;
  q_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_49), n_114), term_w_49), o_114);
  r_114 = t;
  t = SSL_printnl(q_114, r_114);
  t = (ATerm) ATmakeAppl(sym__2, term_q_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_49), n_114), term_w_49), o_114));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_114 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_48;
  s_114 = t;
  t = SSL_exit(s_114);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm a_115 = NULL,b_115 = NULL;
  b_115 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_115;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_115 = ATgetArgument(t, 0);
          {
            ATerm x_48 = NULL,x_24 = NULL;
            t = SSLgetAnnotations(b_115);
            x_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_115);
            x_24 = t;
            t = SSLsetAnnotations(x_24, x_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_115;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_118 (ATerm), ATerm t)
{
  ATerm y_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_50;
      t = get_config_0_0(t);
      LocalPopChoice(a_50);
    }
  else
    {
      t = y_49;
      t = fetch_1_0(v_15, t);
    }
  t = u_118(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_115 = ATgetFirst((ATermList) t);
      f_115 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_115 = NULL,k_115 = NULL;
        static ATerm w_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_115)), not_null(k_115));
          return(t);
        }
        t = f_115;
        t = n_0(t);
        if(((j_115 != NULL) && (j_115 != t)))
          _fail(t);
        else
          j_115 = t;
        t = e_115;
        t = k_0(t);
        if(((k_115 != NULL) && (k_115 != t)))
          _fail(t);
        else
          k_115 = t;
        t = f_115;
        t = reverse_acc_2_0(k_0, w_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_47;
      t = n_0(t);
    }
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL,z_24 = NULL;
  q_115 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_115);
  o_115 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_115);
  z_24 = t;
  t = SSLsetAnnotations(z_24, o_115);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm s_115 = NULL;
  s_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_115), term_c_50);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_115 = NULL,n_115 = NULL;
  ATerm d_50 = t;
  int e_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_49;
      t = get_config_0_0(t);
      LocalPopChoice(e_50);
    }
  else
    {
      t = d_50;
      t = fetch_1_0(b_16, t);
    }
  t = term_f_50;
  t = echo_0_0(t);
  t = term_z_48;
  m_115 = t;
  t = term_a_49;
  n_115 = t;
  t = term_g_50;
  t = t_9(m_115, n_115, t);
  t = reverse_acc_2_0(_id, i_16, t);
  t = map_1_0(j_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  static ATerm q_116 (ATerm t)
  {
    ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
    n_116 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_116 = ATgetFirst((ATermList) t);
        p_116 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_50 = t;
      int j_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_49 = NULL,z_49 = NULL,b_25 = NULL;
          t = SSLgetAnnotations(n_116);
          m_49 = t;
          t = o_116;
          t = r_101(t);
          z_49 = t;
          t = (ATerm) ATinsert(CheckATermList(p_116), z_49);
          b_25 = t;
          t = SSLsetAnnotations(b_25, m_49);
          LocalPopChoice(j_50);
        }
      else
        {
          t = i_50;
          {
            ATerm h_50 = NULL,k_50 = NULL,c_25 = NULL;
            t = SSLgetAnnotations(n_116);
            h_50 = t;
            t = p_116;
            t = q_116(t);
            k_50 = t;
            t = (ATerm) ATinsert(CheckATermList(k_50), o_116);
            c_25 = t;
            t = SSLsetAnnotations(c_25, h_50);
          }
        }
    }
    return(t);
  }
  t = q_116(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_116 = NULL,v_116 = NULL,w_116 = NULL;
  u_116 = t;
  {
    ATerm l_50 = t;
    int m_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_116;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_50 = ATgetFirst((ATermList) t);
                ATerm o_50 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_116;
          }
        LocalPopChoice(m_50);
      }
    else
      {
        t = l_50;
        t = (ATerm) ATinsert(ATempty, u_116);
      }
  }
  v_116 = t;
  t = term_k_46;
  w_116 = t;
  t = SSL_printnl(w_116, v_116);
  t = u_116;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_49;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_9 (ATerm l_37, ATerm m_37, ATerm t)
{
  t = SSL_strcat(l_37, m_37);
  return(t);
}
ATerm debug_1_0 (ATerm w_100 (ATerm), ATerm t)
{
  ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL;
  a_117 = t;
  t = w_100(t);
  b_117 = t;
  t = term_q_31;
  c_117 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_117), b_117);
  d_117 = t;
  t = SSL_printnl(c_117, d_117);
  t = a_117;
  return(t);
}
ATerm map_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  static ATerm s_117 (ATerm t)
  {
    ATerm p_117 = NULL,q_117 = NULL,r_117 = NULL;
    p_117 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_117;
      }
    else
      {
        ATerm v_50 = NULL,e_51 = NULL,f_51 = NULL,g_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_117 = ATgetFirst((ATermList) t);
            r_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_117);
        v_50 = t;
        t = q_117;
        t = h_101(t);
        e_51 = t;
        t = r_117;
        t = s_117(t);
        f_51 = t;
        t = (ATerm) ATinsert(CheckATermList(f_51), e_51);
        g_25 = t;
        t = SSLsetAnnotations(g_25, v_50);
      }
    return(t);
  }
  t = s_117(t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm p_50 = t;
  int r_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(r_50);
    }
  else
    {
      t = p_50;
    }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_u_50;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_118 = NULL;
      a_118 = t;
      t = SSL_is_string(a_118);
      LocalPopChoice(x_50);
    }
  else
    {
      t = w_50;
      {
        ATerm k_51 = t;
        int l_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_16, t);
            LocalPopChoice(l_51);
          }
        else
          {
            t = k_51;
            {
              ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL;
              g_118 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_118 = ATgetArgument(t, 0);
                  t = h_118;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_118 = ATgetArgument(t, 0);
                      t = h_118;
                      {
                        ATerm m_51 = t;
                        int n_51 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(n_51);
                          }
                        else
                          {
                            t = m_51;
                            t = debug_1_0(l_16, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_118 = NULL,n_118 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_118 = ATgetArgument(t, 0);
                          i_118 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_118;
                      t = eval_config_0_0(t);
                      m_118 = t;
                      t = i_118;
                      t = eval_config_0_0(t);
                      n_118 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_118, n_118);
                      t = s_9(m_118, n_118, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm c_55, ATerm d_55, ATerm t)
{
  t = SSL_table_get(c_55, d_55);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm r_118 = NULL,s_118 = NULL;
  r_118 = t;
  t = term_y_48;
  s_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_48, r_118);
  t = t_9(s_118, r_118, t);
  {
    ATerm o_51 = t;
    int s_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_118 = NULL,v_118 = NULL;
        t = eval_config_0_0(t);
        t_118 = t;
        t = term_y_48;
        v_118 = t;
        t = SSL_table_put(v_118, r_118, t_118);
        t = t_118;
        LocalPopChoice(s_51);
      }
    else
      {
        t = o_51;
      }
  }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm c_119 = NULL,f_119 = NULL;
  t = term_t_51;
  c_119 = t;
  t = term_v_47;
  f_119 = t;
  t = term_u_51;
  t = w_9(c_119, f_119, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_v_51;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL;
  t = term_t_51;
  i_119 = t;
  t = term_v_47;
  j_119 = t;
  t = term_u_51;
  t = w_9(i_119, j_119, t);
  t = term_x_51;
  g_119 = t;
  t = term_v_47;
  h_119 = t;
  t = term_y_51;
  t = w_9(g_119, h_119, t);
  t = term_z_51;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_a_52;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_52 = t;
  int c_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_16, n_16, o_16, t);
      LocalPopChoice(c_52);
    }
  else
    {
      t = b_52;
      t = Option_3_0(p_16, q_16, r_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm t)
{
  ATerm k_119 = NULL,l_119 = NULL,m_119 = NULL,n_119 = NULL,o_119 = NULL,p_119 = NULL,k_25 = NULL;
  p_119 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_119 = ATgetFirst((ATermList) t);
      m_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_119);
  k_119 = t;
  t = l_119;
  t = e_80(t);
  n_119 = t;
  t = m_119;
  t = f_80(t);
  o_119 = t;
  t = (ATerm) ATinsert(CheckATermList(o_119), n_119);
  k_25 = t;
  t = SSLsetAnnotations(k_25, k_119);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_120 (ATerm), ATerm t)
{
  ATerm u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL,z_119 = NULL,a_120 = NULL,m_25 = NULL;
  u_119 = t;
  {
    ATerm d_52 = t;
    int f_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_52;
        t = x_120(t);
        LocalPopChoice(f_52);
      }
    else
      {
        t = d_52;
      }
  }
  t = u_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_119 = ATgetFirst((ATermList) t);
      x_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_119);
  v_119 = t;
  t = term_j_49;
  a_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_49, w_119);
  t = w_9(a_120, w_119, t);
  t = x_119;
  {
    static ATerm k_120 (ATerm t)
    {
      ATerm h_52 = t;
      int i_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_52 = t;
          int k_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_120 = NULL;
              d_120 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_120;
              LocalPopChoice(k_52);
            }
          else
            {
              t = j_52;
              t = x_120(t);
              t = Cons_2_0(_id, k_120, t);
            }
          LocalPopChoice(i_52);
        }
      else
        {
          t = h_52;
          {
            ATerm g_120 = NULL,h_120 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_120 = ATgetFirst((ATermList) t);
                h_120 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_120), (ATerm) ATmakeAppl(sym_Undefined_1, g_120));
          }
        }
      return(t);
    }
    t = k_120(t);
  }
  z_119 = t;
  t = (ATerm) ATinsert(CheckATermList(z_119), (ATerm) ATmakeAppl(sym_Program_1, w_119));
  m_25 = t;
  t = SSLsetAnnotations(m_25, v_119);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm y_120 = NULL;
  y_120 = t;
  if(match_string(t, "--help"))
    {
      t = y_120;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_120;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_120;
        }
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm z_120 = NULL,a_121 = NULL;
  t = term_b_50;
  z_120 = t;
  t = term_v_47;
  a_121 = t;
  t = term_l_52;
  t = w_9(z_120, a_121, t);
  t = term_n_52;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_o_52;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_120 (ATerm), ATerm t)
{
  ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL,s_120 = NULL,t_120 = NULL,u_120 = NULL,v_120 = NULL;
  r_120 = t;
  t = term_z_48;
  t_120 = t;
  t = term_a_49;
  u_120 = t;
  t = (ATerm) ATempty;
  v_120 = t;
  t = SSL_table_put(t_120, u_120, v_120);
  t = r_120;
  {
    static ATerm s_16 (ATerm t)
    {
      ATerm p_52 = t;
      int q_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_120(t);
          LocalPopChoice(q_52);
        }
      else
        {
          t = p_52;
          {
            ATerm r_52 = t;
            int t_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_16, w_16, y_16, t);
                LocalPopChoice(t_52);
              }
            else
              {
                t = r_52;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_16, t);
  }
  {
    ATerm u_52 = t;
    int v_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_121 = NULL;
        h_121 = t;
        {
          ATerm w_52 = t;
          int x_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_52 = NULL;
              t = h_121;
              {
                ATerm y_52 = t;
                int z_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_50;
                    t = get_config_0_0(t);
                    LocalPopChoice(z_52);
                  }
                else
                  {
                    t = y_52;
                    t = fetch_1_0(z_16, t);
                  }
              }
              t = h_121;
              t = default_system_usage_0_0(t);
              t = term_e_48;
              m_52 = t;
              t = SSL_exit(m_52);
              LocalPopChoice(x_52);
            }
          else
            {
              t = w_52;
              {
                ATerm s_52 = NULL;
                t = term_t_51;
                t = get_config_0_0(t);
                t = h_121;
                t = default_system_about_0_0(t);
                t = term_e_48;
                s_52 = t;
                t = SSL_exit(s_52);
              }
            }
        }
        LocalPopChoice(v_52);
      }
    else
      {
        t = u_52;
        {
          ATerm a_53 = t;
          int b_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_121 = NULL,j_121 = NULL,k_121 = NULL;
              static ATerm a_17 (ATerm t)
              {
                ATerm l_121 = NULL,m_121 = NULL,n_121 = NULL,s_25 = NULL;
                n_121 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_121 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_121);
                l_121 = t;
                t = m_121;
                if(((p_120 != NULL) && (p_120 != t)))
                  _fail(t);
                else
                  p_120 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_121);
                s_25 = t;
                t = SSLsetAnnotations(s_25, l_121);
                return(t);
              }
              t = fetch_1_0(a_17, t);
              t = term_q_31;
              j_121 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_120)), term_d_53);
              k_121 = t;
              t = SSL_printnl(j_121, k_121);
              t = (ATerm) ATmakeAppl(sym__2, term_q_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_120)), term_d_53));
              t = default_system_usage_0_0(t);
              t = term_s_31;
              i_121 = t;
              t = SSL_exit(i_121);
              LocalPopChoice(b_53);
            }
          else
            {
              t = a_53;
            }
        }
      }
  }
  q_120 = t;
  t = term_z_48;
  s_120 = t;
  t = SSL_table_destroy(s_120);
  t = q_120;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm t)
{
  ATerm s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL;
  t = parse_options_1_0(w_118, t);
  s_121 = t;
  t = term_e_53;
  v_121 = t;
  t = SSL_table_create(v_121);
  t = term_e_53;
  t_121 = t;
  t = term_f_53;
  u_121 = t;
  t = SSL_table_put(t_121, u_121, s_121);
  t = s_121;
  t = y_118(t);
  {
    ATerm g_53 = t;
    int h_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_118, t);
        LocalPopChoice(h_53);
      }
    else
      {
        t = g_53;
        {
          ATerm i_53 = t;
          int p_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_118(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_53);
            }
          else
            {
              t = i_53;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm t_53 = t;
  int u_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_53);
    }
  else
    {
      t = t_53;
      {
        ATerm v_53 = t;
        int y_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(y_53);
          }
        else
          {
            t = v_53;
            {
              ATerm z_53 = t;
              int a_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_17, g_17, i_17, t);
                  LocalPopChoice(a_54);
                }
              else
                {
                  t = z_53;
                  {
                    ATerm b_54 = t;
                    int c_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_54);
                      }
                    else
                      {
                        t = b_54;
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
static ATerm c_17 (ATerm t)
{
  t = input_1_0(n_17, t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm x_121 = NULL,y_121 = NULL;
  t = term_n_46;
  x_121 = t;
  t = term_v_47;
  y_121 = t;
  t = term_d_54;
  t = w_9(x_121, y_121, t);
  t = term_e_54;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_f_54;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_17, default_usage_0_0, _id, c_17, t);
  return(t);
}

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
ATerm term_b_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_k_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_b_52;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_o_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_o_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_p_48;
ATerm term_l_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_e_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_l_47;
ATerm term_i_47;
ATerm term_j_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_x_45;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_i_44;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_g_42;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_n_31;
ATerm term_u_25;
ATerm term_j_25;
ATerm term_p_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Op_2, term_y_18, (ATerm) ATempty);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_17);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATempty);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Call_2, term_q_21, (ATerm) ATempty);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Call_2, term_o_23, (ATerm) ATempty);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Call_2, term_a_21, (ATerm) ATempty);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_34);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_RootApp_1, term_q_17);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_34);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_34);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_34);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_35);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_35);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_35);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_37);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_42);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_42);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym__2, term_w_47, term_y_47);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym__2, term_g_48, term_q_47);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(sym__2, term_v_48, term_w_48);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym__2, term_k_51, term_q_47);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(sym__2, term_s_51, term_q_47);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym__2, term_x_49, term_q_47);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym__2, term_j_46, term_q_47);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm t_94 (ATerm), ATerm t);
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
static ATerm c_8 (ATerm x_125 (ATerm), ATerm c_72, ATerm a_72, ATerm b_72, ATerm f_72, ATerm d_72, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_1_0 (ATerm x_125 (ATerm), ATerm t);
static ATerm l_18 (ATerm c_13, ATerm d_13, ATerm t);
static ATerm m_18 (ATerm l_13, ATerm m_13, ATerm t);
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
ATerm pat_td_1_0 (ATerm o_124 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm e_8 (ATerm s_62, ATerm t_62, ATerm u_62, ATerm t);
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
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm i_8 (ATerm f_58, ATerm g_58, ATerm h_58, ATerm t);
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
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm j_8 (ATerm w_125 (ATerm), ATerm j_71, ATerm g_71, ATerm h_71, ATerm q_71, ATerm u_71, ATerm v_71, ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
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
ATerm oncetd_1_0 (ATerm x_95 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm r_125 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm l_8 (ATerm t_69, ATerm s_69, ATerm t);
ATerm repeat_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm o_102 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm t);
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
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm q_8 (ATerm j_105 (ATerm), ATerm a_29, ATerm z_28, ATerm t);
static ATerm r_8 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm e_29, ATerm d_29, ATerm t);
static ATerm s_8 (ATerm e_105 (ATerm), ATerm y_28, ATerm x_28, ATerm t);
ATerm genzip_4_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm x_8 (ATerm v_607, ATerm a_608, ATerm v_57, ATerm t);
ATerm while_not_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t);
ATerm for_3_0 (ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm a_95 (ATerm w_92, ATerm z_92, ATerm b_93, ATerm t);
static ATerm w_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm free_vars_3_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm f_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm u_94 (ATerm), ATerm t);
static ATerm b_9 (ATerm u_53, ATerm v_53, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm l_96 (ATerm), ATerm t);
static ATerm c_9 (ATerm s_113 (ATerm), ATerm a_43, ATerm y_42, ATerm t);
static ATerm m_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm d_9 (ATerm o_53, ATerm p_53, ATerm t);
ATerm end_scope_1_0 (ATerm p_113 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_113 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm v_101 (ATerm), ATerm t);
static ATerm j_101 (ATerm y_100, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_9 (ATerm s_20, ATerm o_20, ATerm t);
ATerm foldr_3_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm h_9 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm i_9 (ATerm h_23, ATerm i_23, ATerm t);
static ATerm k_9 (ATerm w_100 (ATerm), ATerm i_164, ATerm l_23, ATerm t);
static ATerm j_9 (ATerm d_23, ATerm e_23, ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm output_1_0 (ATerm y_118 (ATerm), ATerm t);
static ATerm l_108 (ATerm f_108, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_9 (ATerm j_23, ATerm t);
static ATerm m_9 (ATerm t_38, ATerm u_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_109 (ATerm w_108, ATerm t);
static ATerm y_109 (ATerm a_109, ATerm b_109, ATerm c_109, ATerm t);
static ATerm z_109 (ATerm k_109, ATerm l_109, ATerm m_109, ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_118 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_9 (ATerm j_48, ATerm k_48, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_9 (ATerm j_53, ATerm k_53, ATerm i_53, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_9 (ATerm m_41, ATerm n_41, ATerm t);
ATerm foldr_2_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_115 (ATerm), ATerm t);
static ATerm v_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_15 (ATerm t);
ATerm need_help_1_0 (ATerm p_118 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_101 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_9 (ATerm l_37, ATerm m_37, ATerm t);
ATerm debug_1_0 (ATerm u_100 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_101 (ATerm), ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm s_9 (ATerm a_55, ATerm b_55, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_120 (ATerm), ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm parse_options_1_0 (ATerm r_120 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm t);
static ATerm c_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
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
              t = term_p_17;
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
                  t = term_p_17;
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
                      t = term_q_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_17, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
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
ATerm topdown_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(t_94, t);
    return(t);
  }
  t = t_94(t);
  t = SRTS_all(h_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm e_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_5);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            {
              ATerm i_5 = NULL,n_5 = NULL,q_5 = NULL,s_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_5 = ATgetArgument(t, 0);
                  n_5 = ATgetArgument(t, 1);
                  q_5 = ATgetArgument(t, 2);
                  s_5 = ATgetArgument(t, 3);
                  t = q_5;
                  t = map_1_0(s_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_5 = ATgetArgument(t, 0);
                      n_5 = ATgetArgument(t, 1);
                      q_5 = ATgetArgument(t, 2);
                      s_5 = ATgetArgument(t, 3);
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
  ATerm b_6 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_6 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_17);
      t = b_6;
    }
  else
    {
      t = w_17;
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
static ATerm t_0 (ATerm t)
{
  ATerm m_6 = NULL;
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_6 = ATgetArgument(t, 0);
          {
            ATerm b_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_18);
      t = m_6;
    }
  else
    {
      t = z_17;
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
static ATerm y_0 (ATerm t)
{
  ATerm t_6 = NULL;
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_6);
  return(t);
}
static ATerm b_1 (ATerm t)
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
static ATerm c_1 (ATerm t)
{
  ATerm c_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = c_18;
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            {
              ATerm w_6 = NULL,x_6 = NULL,z_6 = NULL,b_7 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_6 = ATgetArgument(t, 0);
                  x_6 = ATgetArgument(t, 1);
                  z_6 = ATgetArgument(t, 2);
                  b_7 = ATgetArgument(t, 3);
                  t = z_6;
                  t = map_1_0(d_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_6 = ATgetArgument(t, 0);
                      x_6 = ATgetArgument(t, 1);
                      z_6 = ATgetArgument(t, 2);
                      b_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_6;
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
  ATerm k_7 = NULL;
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_7 = ATgetArgument(t, 0);
          {
            ATerm j_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_18);
      t = k_7;
    }
  else
    {
      t = h_18;
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
static ATerm e_1 (ATerm t)
{
  ATerm v_7 = NULL;
  ATerm n_18 = t;
  int p_18 = stack_ptr;
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
      LocalPopChoice(p_18);
      t = v_7;
    }
  else
    {
      t = n_18;
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
static ATerm f_1 (ATerm t)
{
  ATerm n_8 = NULL;
  n_8 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_9 = NULL,q_0 = NULL,a_0 = NULL,w_0 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            x_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_8);
        q_0 = t;
        t = term_v_18;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_18, x_9);
        t = b_9(w_0, x_9, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_18) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, x_9);
        a_0 = t;
        t = SSLsetAnnotations(a_0, q_0);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm x_1 = NULL;
          t = term_v_18;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_18, n_8);
          t = b_9(x_1, n_8, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm x_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_18) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = n_8;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, n_8);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm c_11 (ATerm y_3, ATerm z_3, ATerm a_4, ATerm b_4, ATerm c_4, ATerm d_4, ATerm e_4, ATerm t)
  {
    ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, c_4, term_z_18);
    {
      ATerm a_19 = t;
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
          t = a_19;
        }
    }
    t = new_0_0(t);
    o_4 = t;
    t = b_4;
    t = dummify_0_0(t);
    q_4 = t;
    {
      ATerm f_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_4;
          if((b_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, o_4);
          LocalPopChoice(i_19);
        }
      else
        {
          t = f_19;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, x_4, (ATerm) ATmakeAppl(sym_Op_2, term_l_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(v_4), (ATerm) ATmakeAppl(sym_Str_1, w_4)))), q_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, y_3, z_3, a_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_4), b_4), c_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_3)))), p_4), (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(v_4), (ATerm) ATmakeAppl(sym_Str_1, w_4))))), d_4))));
    return(t);
  }
  ATerm a_10 = NULL,f_10 = NULL,g_10 = NULL,j_10 = NULL,n_10 = NULL,r_10 = NULL,t_10 = NULL,u_10 = NULL,z_10 = NULL,a_11 = NULL;
  g_10 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      j_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
      r_10 = ATgetArgument(t, 2);
      t_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_10;
  if(match_cons(t, sym_Rule_3))
    {
      u_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
      a_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_10;
  if(match_cons(t, sym_Op_2))
    {
      a_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      t = f_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_10;
          if(match_string(t, "Undefined"))
            {
              ATerm q_19 = t;
              int t_19 = stack_ptr;
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
                  t = j_10;
                  t = o_0(t);
                  n_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_2, (ATerm) ATmakeAppl(sym_Op_2, term_l_19, (ATerm) ATinsert(ATinsert(ATempty, term_z_18), j_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, j_10, n_10, r_10, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_2), u_10), term_z_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_10)))), m_2), term_z_18)), (ATerm) ATmakeAppl(sym_Seq_2, a_11, term_p_17)))));
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = q_19;
                  t = c_11(j_10, n_10, r_10, u_10, z_10, a_11, g_10, t);
                }
            }
          else
            {
              t = c_11(j_10, n_10, r_10, u_10, z_10, a_11, g_10, t);
            }
        }
      else
        {
          t = a_10;
          t = c_11(j_10, n_10, r_10, u_10, z_10, a_11, g_10, t);
        }
    }
  else
    {
      t = c_11(j_10, n_10, r_10, u_10, z_10, a_11, g_10, t);
    }
  return(t);
}
static ATerm c_8 (ATerm x_125 (ATerm), ATerm c_72, ATerm a_72, ATerm b_72, ATerm f_72, ATerm d_72, ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  t = new_0_0(t);
  g_11 = t;
  t = f_72;
  t = dummify_0_0(t);
  f_11 = t;
  {
    ATerm w_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_11;
        if((f_72 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, g_11);
        LocalPopChoice(a_20);
      }
    else
      {
        t = w_19;
        t = f_11;
      }
  }
  h_11 = t;
  t = c_72;
  t = x_125(t);
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, i_11, f_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, c_72, a_72, b_72, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_11), f_72), term_z_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_i_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_72)))), h_11), term_j_20)), (ATerm) ATmakeAppl(sym_Seq_2, d_72, term_p_17))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_1_0 (ATerm x_125 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      s_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
      u_11 = ATgetArgument(t, 2);
      {
        ATerm k_20 = ATgetArgument(t, 3);
        if(match_cons(k_20, sym_Rule_3))
          {
            v_11 = ATgetArgument(k_20, 0);
            {
              ATerm q_20 = ATgetArgument(k_20, 1);
              if(match_cons(q_20, sym_Op_2))
                {
                  ATerm r_20 = ATgetArgument(q_20, 0);
                  if((ATgetSymbol((ATermAppl) r_20) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm t_20 = ATgetArgument(q_20, 1);
                    if(((ATgetType(t_20) != AT_LIST) || !(ATisEmpty(t_20))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            w_11 = ATgetArgument(k_20, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_8(x_125, s_11, t_11, u_11, v_11, w_11, t);
  return(t);
}
static ATerm l_18 (ATerm c_13, ATerm d_13, ATerm t)
{
  t = c_13;
  {
    ATerm u_20 = t;
    if((PushChoice() == 0))
      {
        ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,k_13 = NULL,j_0 = NULL;
        k_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_13 = ATgetFirst((ATermList) t);
            h_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_13);
        f_13 = t;
        t = h_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_13), g_13);
        j_0 = t;
        t = SSLsetAnnotations(j_0, f_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_17, c_13);
  return(t);
}
static ATerm m_18 (ATerm l_13, ATerm m_13, ATerm t)
{
  t = l_13;
  {
    ATerm z_20 = t;
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
        t = z_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_21, l_13);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_c_21;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,w_2 = NULL;
  g_14 = t;
  t = SSL_explode_term(g_14);
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_21 = ATgetArgument(t, 1);
        if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
          {
            h_14 = ATgetFirst((ATermList) e_21);
            {
              ATerm g_21 = (ATerm) ATgetNext((ATermList) e_21);
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
      ATerm h_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_21 = ATgetArgument(t, 1);
        if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
          {
            ATerm k_21 = ATgetFirst((ATermList) j_21);
            ATerm l_21 = (ATerm) ATgetNext((ATermList) j_21);
            if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
              {
                w_2 = ATgetFirst((ATermList) l_21);
                {
                  ATerm m_21 = (ATerm) ATgetNext((ATermList) l_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_21, (ATerm) ATinsert(ATinsert(ATempty, w_2), h_14));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      e_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_21, (ATerm) ATinsert(ATinsert(ATempty, f_15), e_15));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_c_21;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm h_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_21, (ATerm) ATinsert(ATinsert(ATempty, m_15), h_15));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, (ATerm) ATinsert(ATinsert(ATempty, a_16), z_15));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm c_16 = NULL,h_16 = NULL;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, (ATerm) ATinsert(ATinsert(ATempty, h_16), c_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      z_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
      {
        ATerm e_14 = NULL;
        t = a_14;
        t = foldr_2_0(g_1, h_1, t);
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
                ATerm b_3 = NULL;
                t = z_13;
                {
                  ATerm u_21 = t;
                  int w_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_z_21;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_a_22;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_c_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_k_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_l_22;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(w_21);
                    }
                  else
                    {
                      t = u_21;
                      {
                        ATerm f_3 = NULL;
                        t = SSL_explode_string(z_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm m_22 = ATgetFirst((ATermList) t);
                            if(((ATgetType(m_22) != AT_INT) || (ATgetInt((ATermInt) m_22) != 39)))
                              _fail(t);
                            {
                              ATerm n_22 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
                                {
                                  f_3 = ATgetFirst((ATermList) n_22);
                                  {
                                    ATerm s_22 = (ATerm) ATgetNext((ATermList) n_22);
                                    if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
                                      {
                                        ATerm t_22 = ATgetFirst((ATermList) s_22);
                                        if(((ATgetType(t_22) != AT_INT) || (ATgetInt((ATermInt) t_22) != 39)))
                                          _fail(t);
                                        {
                                          ATerm u_22 = (ATerm) ATgetNext((ATermList) s_22);
                                          if(((ATgetType(u_22) != AT_LIST) || !(ATisEmpty(u_22))))
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
              ATerm v_22 = t;
              int x_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      z_13 = ATgetArgument(t, 0);
                      {
                        ATerm y_22 = ATgetArgument(t, 1);
                      }
                      w_13 = ATgetArgument(t, 2);
                      s_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_22);
                  t = (ATerm) ATmakeAppl(sym_Con_3, z_13, w_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_13), (ATerm) ATempty));
                }
              else
                {
                  t = v_22;
                  {
                    ATerm a_23 = t;
                    int f_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            z_13 = ATgetArgument(t, 0);
                            {
                              ATerm m_23 = ATgetArgument(t, 1);
                            }
                            w_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, z_13, w_13, term_q_23);
                      }
                    else
                      {
                        t = a_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            z_13 = ATgetArgument(t, 0);
                            a_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, z_13, a_14, term_q_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                z_13 = ATgetArgument(t, 0);
                                a_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm i_1 (ATerm t)
                                  {
                                    t = a_14;
                                    return(t);
                                  }
                                  t = z_13;
                                  t = foldr_2_0(i_1, j_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    z_13 = ATgetArgument(t, 0);
                                    t = z_13;
                                    t = foldr_2_0(k_1, l_1, t);
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
                                                ATerm u_23 = t;
                                                int v_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = l_18(z_13, y_13, t);
                                                    LocalPopChoice(v_23);
                                                  }
                                                else
                                                  {
                                                    t = u_23;
                                                    t = t_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = l_18(z_13, y_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = l_18(z_13, y_13, t);
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
                                                                      static ATerm m_1 (ATerm t)
                                                                      {
                                                                        t = a_14;
                                                                        return(t);
                                                                      }
                                                                      t = z_13;
                                                                      t = foldr_2_0(m_1, n_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        z_13 = ATgetArgument(t, 0);
                                                                        t = z_13;
                                                                        t = foldr_2_0(o_1, p_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            z_13 = ATgetArgument(t, 0);
                                                                            a_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_a_21, (ATerm) ATinsert(CheckATermList(a_14), z_13));
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
                                                                                        ATerm w_23 = t;
                                                                                        int y_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = m_18(z_13, y_13, t);
                                                                                            LocalPopChoice(y_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = w_23;
                                                                                            t = t_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = m_18(z_13, y_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_18(z_13, y_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_a_24;
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
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_e_24, (ATerm) ATinsert(ATinsert(ATempty, v_13), z_13));
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
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, z_13, a_14, term_q_17);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    z_13 = ATgetArgument(t, 0);
                                                                                                    a_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, z_13, a_14, term_q_17);
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
                                                                                                                                                ATerm i_24 = ATgetArgument(t, 0);
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
  ATerm o_18 = NULL,t_18 = NULL,u_18 = NULL;
  t_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      u_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
      {
        ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
        t = t_18;
        t = new_0_0(t);
        b_19 = t;
        t = new_0_0(t);
        c_19 = t;
        t = new_0_0(t);
        d_19 = t;
        t = new_0_0(t);
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_19), d_19), c_19), b_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, b_19), (ATerm) ATmakeAppl(sym_Var_1, d_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, u_18, (ATerm)ATmakeAppl(sym_Var_1, b_19), (ATerm) ATmakeAppl(sym_Var_1, c_19)), (ATerm) ATmakeAppl(sym_BAM_3, o_18, (ATerm)ATmakeAppl(sym_Var_1, d_19), (ATerm) ATmakeAppl(sym_Var_1, e_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_19)), (ATerm) ATmakeAppl(sym_Var_1, c_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_18 = ATgetArgument(t, 0);
          {
            ATerm g_19 = NULL,h_19 = NULL,j_19 = NULL,p_19 = NULL;
            t = t_18;
            t = new_0_0(t);
            j_19 = t;
            t = u_18;
            {
              static ATerm q_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((g_19 != NULL) && (g_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      g_19 = ATgetArgument(t, 0);
                    if(((h_19 != NULL) && (h_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      h_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, j_19);
                return(t);
              }
              t = oncetd_1_0(q_1, t);
            }
            p_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_19)), not_null(g_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_19)), (ATerm) ATmakeAppl(sym_Build_1, p_19))));
          }
        }
      else
        {
          ATerm r_19 = NULL,s_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              u_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_18;
          t = new_0_0(t);
          x_19 = t;
          t = new_0_0(t);
          y_19 = t;
          t = u_18;
          {
            static ATerm r_1 (ATerm t)
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
              t = (ATerm) ATmakeAppl(sym_Var_1, x_19);
              return(t);
            }
            t = oncetd_1_0(r_1, t);
          }
          z_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_19))))), (ATerm)ATmakeAppl(sym_Var_1, x_19), (ATerm) ATmakeAppl(sym_Op_2, term_r_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), not_null(r_19)))))));
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
    ATerm m_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
        t = b_20;
        t = new_0_0(t);
        g_20 = t;
        t = c_20;
        {
          static ATerm s_1 (ATerm t)
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
          t = pat_td_1_0(s_1, t);
        }
        h_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_20))))));
        LocalPopChoice(o_24);
      }
    else
      {
        t = m_24;
        {
          ATerm q_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
              t = b_20;
              t = new_0_0(t);
              m_20 = t;
              t = c_20;
              {
                static ATerm t_1 (ATerm t)
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
                t = pat_td_1_0(t_1, t);
              }
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_20)), not_null(l_20))));
              LocalPopChoice(v_24);
            }
          else
            {
              t = q_24;
              {
                ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
                t = b_20;
                t = new_0_0(t);
                x_20 = t;
                t = c_20;
                {
                  static ATerm u_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_20 = ATgetArgument(t, 0);
                        if(((v_20 != NULL) && (v_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_20);
                    return(t);
                  }
                  t = pat_td_1_0(u_1, t);
                }
                y_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_20)), not_null(w_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm o_124 (ATerm), ATerm t)
{
  ATerm w_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_124(t);
      LocalPopChoice(y_24);
    }
  else
    {
      t = w_24;
      {
        ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
        o_25 = t;
        if(match_cons(t, sym_Op_2))
          {
            p_25 = ATgetArgument(t, 0);
            q_25 = ATgetArgument(t, 1);
            {
              ATerm j_4 = NULL,a_5 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(o_25);
              j_4 = t;
              t = q_25;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = pat_td_1_0(o_124, t);
                  return(t);
                }
                t = fetch_1_0(w_1, t);
              }
              a_5 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, p_25, a_5);
              d_3 = t;
              t = SSLsetAnnotations(d_3, j_4);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                p_25 = ATgetArgument(t, 0);
                q_25 = ATgetArgument(t, 1);
                {
                  ATerm a_25 = t;
                  int e_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_5 = NULL,r_5 = NULL,g_3 = NULL;
                      t = SSLgetAnnotations(o_25);
                      m_5 = t;
                      t = q_25;
                      t = pat_td_1_0(o_124, t);
                      r_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, p_25, r_5);
                      g_3 = t;
                      t = SSLsetAnnotations(g_3, m_5);
                      LocalPopChoice(e_25);
                    }
                  else
                    {
                      t = a_25;
                      {
                        ATerm q_6 = NULL,d_7 = NULL,h_3 = NULL;
                        t = SSLgetAnnotations(o_25);
                        q_6 = t;
                        t = p_25;
                        t = pat_td_1_0(o_124, t);
                        d_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, d_7, q_25);
                        h_3 = t;
                        t = SSLsetAnnotations(h_3, q_6);
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
                      ATerm d_8 = NULL,m_8 = NULL,i_3 = NULL;
                      t = SSLgetAnnotations(o_25);
                      d_8 = t;
                      t = n_25;
                      {
                        static ATerm y_1 (ATerm t)
                        {
                          t = pat_td_1_0(o_124, t);
                          return(t);
                        }
                        t = fetch_1_0(y_1, t);
                      }
                      m_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, p_25, q_25, m_8);
                      i_3 = t;
                      t = SSLsetAnnotations(i_3, d_8);
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
                          ATerm q_9 = NULL,b_10 = NULL,j_3 = NULL;
                          t = SSLgetAnnotations(o_25);
                          q_9 = t;
                          t = n_25;
                          {
                            static ATerm z_1 (ATerm t)
                            {
                              t = pat_td_1_0(o_124, t);
                              return(t);
                            }
                            t = fetch_1_0(z_1, t);
                          }
                          b_10 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, p_25, q_25, b_10);
                          j_3 = t;
                          t = SSLsetAnnotations(j_3, q_9);
                        }
                      }
                    else
                      {
                        ATerm o_10 = NULL,s_10 = NULL,k_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            p_25 = ATgetArgument(t, 0);
                            q_25 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(o_25);
                        o_10 = t;
                        t = q_25;
                        t = pat_td_1_0(o_124, t);
                        s_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, p_25, s_10);
                        k_3 = t;
                        t = SSLsetAnnotations(k_3, o_10);
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
    ATerm f_25 = t;
    int h_25 = stack_ptr;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_26)), not_null(h_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_26)))), (ATerm) ATmakeAppl(sym_Build_1, l_26)));
        LocalPopChoice(h_25);
      }
    else
      {
        t = f_25;
        {
          ATerm l_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_26 = NULL,w_26 = NULL,x_26 = NULL;
              t = f_26;
              t = new_0_0(t);
              w_26 = t;
              t = g_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((p_26 != NULL) && (p_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, w_26);
                  return(t);
                }
                t = pat_td_1_0(b_2, t);
              }
              x_26 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_26)))), (ATerm) ATmakeAppl(sym_Build_1, x_26)));
              LocalPopChoice(r_25);
            }
          else
            {
              t = l_25;
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
  ATerm t_25 = t;
  if((PushChoice() == 0))
    {
      ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,s_3 = NULL;
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
      s_3 = t;
      t = SSLsetAnnotations(s_3, t_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_25;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_27 = ATgetFirst((ATermList) t);
      z_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_27, z_27);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_28 = NULL,e_28 = NULL,g_28 = NULL,j_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if(match_cons(v_25, sym__2))
        {
          a_28 = ATgetArgument(v_25, 0);
          e_28 = ATgetArgument(v_25, 1);
        }
      else
        _fail(t);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(match_cons(w_25, sym__2))
          {
            g_28 = ATgetArgument(w_25, 0);
            j_28 = ATgetArgument(w_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_28), a_28), (ATerm) ATinsert(CheckATermList(j_28), e_28));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm k_28 = NULL,p_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_28 = ATgetFirst((ATermList) t);
      p_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_28, p_28);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      if(match_cons(x_25, sym__2))
        {
          q_28 = ATgetArgument(x_25, 0);
          r_28 = ATgetArgument(x_25, 1);
        }
      else
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(match_cons(z_25, sym__2))
          {
            s_28 = ATgetArgument(z_25, 0);
            t_28 = ATgetArgument(z_25, 1);
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
static ATerm e_8 (ATerm s_62, ATerm t_62, ATerm u_62, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_3 = NULL;
  t = u_62;
  t = fetch_1_0(d_2, t);
  t = u_62;
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
  q_27 = t;
  t = n_27;
  t = genzip_4_0(h_2, i_2, k_2, _id, t);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
  t_3 = t;
  t = SSLsetAnnotations(t_3, l_27);
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      {
        ATerm a_26 = ATgetArgument(t, 1);
        if(match_cons(a_26, sym__2))
          {
            j_27 = ATgetArgument(a_26, 0);
            k_27 = ATgetArgument(a_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, i_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_27), (ATerm) ATmakeAppl(sym_CallT_3, s_62, t_62, k_27)));
  return(t);
}
static ATerm t_29 (ATerm b_29, ATerm t)
{
  ATerm m_29 = NULL;
  t = b_29;
  {
    ATerm c_26 = t;
    if((PushChoice() == 0))
      {
        ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,t_8 = NULL;
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
        t_8 = t;
        t = SSLsetAnnotations(t_8, n_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_26;
      }
  }
  t = new_0_0(t);
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, m_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_29)))), (ATerm) ATmakeAppl(sym_Var_1, m_29)));
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
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_29(q_29, t);
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATmakeAppl(sym_Var_1, r_29)));
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
  ATerm j_26 = t;
  if((PushChoice() == 0))
    {
      ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,e_9 = NULL;
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
      e_9 = t;
      t = SSLsetAnnotations(e_9, i_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_26;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
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
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if(match_cons(m_26, sym__2))
        {
          n_12 = ATgetArgument(m_26, 0);
          o_12 = ATgetArgument(m_26, 1);
        }
      else
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(match_cons(n_26, sym__2))
          {
            p_12 = ATgetArgument(n_26, 0);
            s_12 = ATgetArgument(n_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_12), n_12), (ATerm) ATinsert(CheckATermList(s_12), o_12));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_12 = ATgetFirst((ATermList) t);
      u_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_12, u_12);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,i_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(match_cons(o_26, sym__2))
        {
          v_12 = ATgetArgument(o_26, 0);
          w_12 = ATgetArgument(o_26, 1);
        }
      else
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(match_cons(q_26, sym__2))
          {
            x_12 = ATgetArgument(q_26, 0);
            i_13 = ATgetArgument(q_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_12), v_12), (ATerm) ATinsert(CheckATermList(i_13), w_12));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm d_27 = t;
  if((PushChoice() == 0))
    {
      ATerm y_15 = NULL,d_16 = NULL,e_16 = NULL,d_11 = NULL;
      e_16 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_16);
      y_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_16);
      d_11 = t;
      t = SSLsetAnnotations(d_11, y_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_27;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_16 = ATgetFirst((ATermList) t);
      g_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_16, g_16);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,w_16 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_27 = ATgetArgument(t, 0);
      if(match_cons(x_27, sym__2))
        {
          t_16 = ATgetArgument(x_27, 0);
          u_16 = ATgetArgument(x_27, 1);
        }
      else
        _fail(t);
      {
        ATerm b_28 = ATgetArgument(t, 1);
        if(match_cons(b_28, sym__2))
          {
            w_16 = ATgetArgument(b_28, 0);
            d_17 = ATgetArgument(b_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_16), t_16), (ATerm) ATinsert(CheckATermList(d_17), u_16));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm e_17 = NULL,g_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_17 = ATgetFirst((ATermList) t);
      g_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_17, g_17);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      if(match_cons(c_28, sym__2))
        {
          i_17 = ATgetArgument(c_28, 0);
          j_17 = ATgetArgument(c_28, 1);
        }
      else
        _fail(t);
      {
        ATerm d_28 = ATgetArgument(t, 1);
        if(match_cons(d_28, sym__2))
          {
            k_17 = ATgetArgument(d_28, 0);
            l_17 = ATgetArgument(d_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_17), i_17), (ATerm) ATinsert(CheckATermList(l_17), j_17));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm h_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
  k_34 = t;
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
              ATerm f_28 = ATgetArgument(t, 1);
              if(match_cons(f_28, sym__2))
                {
                  a_12 = ATgetArgument(f_28, 0);
                  b_12 = ATgetArgument(f_28, 1);
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
      ATerm z_14 = NULL,a_15 = NULL,c_15 = NULL,d_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,x_15 = NULL,x_11 = NULL;
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
      x_15 = t;
      if(match_cons(t, sym__2))
        {
          i_15 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_15);
      d_15 = t;
      t = i_15;
      t = concat_0_0(t);
      k_15 = t;
      t = j_15;
      t = genzip_4_0(a_3, c_3, e_3, _id, t);
      l_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_15, l_15);
      x_11 = t;
      t = SSLsetAnnotations(x_11, d_15);
      if(match_cons(t, sym__2))
        {
          z_14 = ATgetArgument(t, 0);
          {
            ATerm h_28 = ATgetArgument(t, 1);
            if(match_cons(h_28, sym__2))
              {
                a_15 = ATgetArgument(h_28, 0);
                c_15 = ATgetArgument(h_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, z_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_15), (ATerm) ATmakeAppl(sym_PrimT_3, l_34, (ATerm)ATempty, c_15)));
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  o_35 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
      n_35 = ATgetArgument(t, 2);
      {
        ATerm d_18 = NULL,z_12 = NULL;
        t = SSLgetAnnotations(o_35);
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_35, m_35, n_35);
        z_12 = t;
        t = SSLsetAnnotations(z_12, d_18);
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
static ATerm m_3 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,d_37 = NULL,e_37 = NULL;
  b_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
      a_37 = ATgetArgument(t, 2);
      {
        ATerm k_19 = NULL,b_13 = NULL;
        t = SSLgetAnnotations(b_37);
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, d_37, e_37, a_37);
        b_13 = t;
        t = SSLsetAnnotations(b_13, k_19);
      }
    }
  else
    {
      ATerm p_20 = NULL,k_18 = NULL;
      if(match_cons(t, sym_App_2))
        {
          d_37 = ATgetArgument(t, 0);
          e_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_37);
      p_20 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, d_37, e_37);
      k_18 = t;
      t = SSLsetAnnotations(k_18, p_20);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm c_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(m_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_29;
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
static ATerm i_8 (ATerm f_58, ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,p_38 = NULL;
  t = new_0_0(t);
  l_38 = t;
  t = f_58;
  {
    static ATerm n_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm g_29 = ATgetArgument(t, 0);
          if(match_cons(g_29, sym_Var_1))
            {
              if(((k_38 != NULL) && (k_38 != ATgetArgument(g_29, 0))))
                _fail(ATgetArgument(g_29, 0));
              else
                k_38 = ATgetArgument(g_29, 0);
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
    t = oncetd_1_0(n_3, t);
  }
  m_38 = t;
  t = g_58;
  {
    static ATerm o_3 (ATerm t)
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
    t = oncetd_1_0(o_3, t);
  }
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, m_38, p_38, (ATerm) ATmakeAppl(sym_Seq_2, h_58, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(h_38), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_38), not_null(j_38), term_q_17))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_38)), (ATerm) ATmakeAppl(sym_Var_1, l_38))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm s_29 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,o_41 = NULL,p_41 = NULL;
          l_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              o_41 = ATgetArgument(t, 0);
              t = o_41;
              if(match_cons(t, sym_Rule_3))
                {
                  i_41 = ATgetArgument(t, 0);
                  j_41 = ATgetArgument(t, 1);
                  k_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_41;
              t = i_8(i_41, j_41, k_41, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm f_21 = NULL,i_21 = NULL,p_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  o_41 = ATgetArgument(t, 0);
                  p_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_41);
              f_21 = t;
              t = p_41;
              t = desugarRule_0_0(t);
              i_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, o_41, i_21);
              p_21 = t;
              t = SSLsetAnnotations(p_21, f_21);
            }
          LocalPopChoice(j_30);
        }
      else
        {
          t = i_30;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(h_30);
    }
  else
    {
      t = s_29;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
    }
  t = repeat_2_0(q_3, _id, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,j_43 = NULL;
            o_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                p_42 = ATgetArgument(t, 0);
                q_42 = ATgetArgument(t, 1);
                j_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = o_42;
            t = e_8(p_42, q_42, j_43, t);
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            {
              ATerm q_30 = t;
              int r_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(r_30);
                }
              else
                {
                  t = q_30;
                  {
                    ATerm s_30 = t;
                    int t_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(t_30);
                      }
                    else
                      {
                        t = s_30;
                        {
                          ATerm u_30 = t;
                          int v_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_30 = t;
                              int a_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm o_43 = NULL,s_43 = NULL,t_43 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      o_43 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = o_43;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      s_43 = ATgetArgument(t, 0);
                                      t = s_43;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          s_43 = ATgetArgument(t, 0);
                                          t_43 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, s_43, t_43);
                                    }
                                  LocalPopChoice(a_31);
                                }
                              else
                                {
                                  t = z_30;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(v_30);
                            }
                          else
                            {
                              t = u_30;
                              {
                                ATerm b_31 = t;
                                int c_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(c_31);
                                  }
                                else
                                  {
                                    t = b_31;
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
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_31);
        t = b_46;
        {
          ATerm g_31 = t;
          if((PushChoice() == 0))
            {
              ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_21 = NULL;
              r_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  p_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_22);
              o_22 = t;
              t = p_22;
              {
                ATerm h_31 = t;
                int i_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_23 = NULL;
                    t = term_v_18;
                    p_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_v_18, p_22);
                    t = b_9(p_23, p_22, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm l_31 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) l_31) != ATmakeSymbol("m_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = p_22;
                    LocalPopChoice(i_31);
                  }
                else
                  {
                    t = h_31;
                    {
                      ATerm b_23 = NULL,x_23 = NULL,r_21 = NULL,n_24 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          b_23 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(p_22);
                      x_23 = t;
                      t = term_v_18;
                      n_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_v_18, b_23);
                      t = b_9(n_24, b_23, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm m_31 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) m_31) != ATmakeSymbol("m_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, b_23);
                      r_21 = t;
                      t = SSLsetAnnotations(r_21, x_23);
                    }
                  }
              }
              q_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, q_22);
              s_21 = t;
              t = SSLsetAnnotations(s_21, o_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_31;
            }
        }
        t = term_c_21;
      }
    else
      {
        t = d_31;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_c_21;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                c_46 = ATgetArgument(t, 0);
                {
                  ATerm l_46 = NULL;
                  t = c_46;
                  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
                  t = map_1_0(f_4, t);
                  l_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_31, l_46);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    c_46 = ATgetArgument(t, 0);
                    d_46 = ATgetArgument(t, 1);
                    {
                      ATerm c_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
                      t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
                      t = map_1_0(l_4, t);
                      c_48 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_n_31, c_48);
                    }
                  }
                else
                  {
                    ATerm r_24 = NULL,s_24 = NULL,d_25 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm o_31 = ATgetArgument(t, 0);
                        ATerm p_31 = ATgetArgument(t, 1);
                        ATerm q_31 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_r_31;
                    s_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_s_31);
                    d_25 = t;
                    t = SSL_printnl(s_24, d_25);
                    t = term_t_31;
                    r_24 = t;
                    t = SSL_exit(r_24);
                    t = (ATerm) ATinsert(ATempty, term_s_31);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm m_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_46);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm u_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_31);
    }
  else
    {
      t = u_31;
      {
        ATerm x_31 = t;
        int y_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_31);
          }
        else
          {
            t = x_31;
            {
              ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,t_46 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_46 = ATgetArgument(t, 0);
                  p_46 = ATgetArgument(t, 1);
                  q_46 = ATgetArgument(t, 2);
                  t_46 = ATgetArgument(t, 3);
                  t = q_46;
                  t = map_1_0(w_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_46 = ATgetArgument(t, 0);
                      p_46 = ATgetArgument(t, 1);
                      q_46 = ATgetArgument(t, 2);
                      t_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_46;
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
  ATerm e_47 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_47 = ATgetArgument(t, 0);
          {
            ATerm d_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_32);
      t = e_47;
    }
  else
    {
      t = b_32;
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
static ATerm x_3 (ATerm t)
{
  ATerm u_47 = NULL;
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_47 = ATgetArgument(t, 0);
          {
            ATerm g_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_32);
      t = u_47;
    }
  else
    {
      t = e_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_47;
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
  ATerm d_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_48);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm h_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_32);
    }
  else
    {
      t = h_32;
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            {
              ATerm f_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_48 = ATgetArgument(t, 0);
                  m_48 = ATgetArgument(t, 1);
                  n_48 = ATgetArgument(t, 2);
                  o_48 = ATgetArgument(t, 3);
                  t = n_48;
                  t = map_1_0(i_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_48 = ATgetArgument(t, 0);
                      m_48 = ATgetArgument(t, 1);
                      n_48 = ATgetArgument(t, 2);
                      o_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_48;
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
  ATerm c_49 = NULL;
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_49 = ATgetArgument(t, 0);
          {
            ATerm o_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_32);
      t = c_49;
    }
  else
    {
      t = m_32;
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
static ATerm k_4 (ATerm t)
{
  ATerm q_49 = NULL;
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_49 = ATgetArgument(t, 0);
          {
            ATerm s_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_32);
      t = q_49;
    }
  else
    {
      t = q_32;
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
static ATerm l_4 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_49);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(r_3, t);
  return(t);
}
static ATerm m_4 (ATerm t)
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
            ATerm t_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_51;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_51), (ATerm) ATempty);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_52 = ATgetArgument(t, 0);
      t = m_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_52 = ATgetArgument(t, 0);
          {
            ATerm u_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_52;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, m_52);
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
static ATerm s_4 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            {
              ATerm m_53 = NULL,q_53 = NULL,r_53 = NULL,y_53 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_53 = ATgetArgument(t, 0);
                  q_53 = ATgetArgument(t, 1);
                  r_53 = ATgetArgument(t, 2);
                  y_53 = ATgetArgument(t, 3);
                  t = r_53;
                  t = map_1_0(z_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_53 = ATgetArgument(t, 0);
                      q_53 = ATgetArgument(t, 1);
                      r_53 = ATgetArgument(t, 2);
                      y_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_53;
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
  ATerm r_54 = NULL;
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_54 = ATgetArgument(t, 0);
          {
            ATerm b_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_33);
      t = r_54;
    }
  else
    {
      t = z_32;
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
static ATerm b_5 (ATerm t)
{
  ATerm j_55 = NULL;
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_55 = ATgetArgument(t, 0);
          {
            ATerm e_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_33);
      t = j_55;
    }
  else
    {
      t = c_33;
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
static ATerm c_5 (ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_55);
  return(t);
}
static ATerm d_5 (ATerm t)
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
              ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_55 = ATgetArgument(t, 0);
                  s_55 = ATgetArgument(t, 1);
                  t_55 = ATgetArgument(t, 2);
                  u_55 = ATgetArgument(t, 3);
                  t = t_55;
                  t = map_1_0(g_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_55 = ATgetArgument(t, 0);
                      s_55 = ATgetArgument(t, 1);
                      t_55 = ATgetArgument(t, 2);
                      u_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_55;
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
  ATerm i_56 = NULL;
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_56 = ATgetArgument(t, 0);
          {
            ATerm o_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_33);
      t = i_56;
    }
  else
    {
      t = m_33;
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
static ATerm h_5 (ATerm t)
{
  ATerm b_57 = NULL;
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_57 = ATgetArgument(t, 0);
          {
            ATerm r_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_33);
      t = b_57;
    }
  else
    {
      t = p_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_57;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm m_57 = NULL;
  m_57 = t;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_57 = NULL,i_25 = NULL,v_21 = NULL,y_25 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            w_57 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_57);
        i_25 = t;
        t = term_v_18;
        y_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_18, w_57);
        t = b_9(y_25, w_57, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm u_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_33) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, w_57);
        v_21 = t;
        t = SSLsetAnnotations(v_21, i_25);
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        {
          ATerm b_26 = NULL;
          t = term_v_18;
          b_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_18, m_57);
          t = b_9(b_26, m_57, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm v_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_33) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = m_57;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, m_57);
  return(t);
}
static ATerm j_8 (ATerm w_125 (ATerm), ATerm j_71, ATerm g_71, ATerm h_71, ATerm q_71, ATerm u_71, ATerm v_71, ATerm t)
{
  ATerm r_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,m_51 = NULL,n_51 = NULL,p_51 = NULL,q_51 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_71, term_z_18);
  {
    ATerm w_33 = t;
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
        t = w_33;
      }
  }
  t = term_x_33;
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_33, j_71);
  t = r_9(q_51, j_71, t);
  r_50 = t;
  t = term_y_33;
  p_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_33, j_71);
  t = r_9(p_51, j_71, t);
  w_50 = t;
  t = new_0_0(t);
  x_50 = t;
  t = g_71;
  t = map_1_0(m_4, t);
  y_50 = t;
  t = h_71;
  t = map_1_0(n_4, t);
  z_50 = t;
  t = new_0_0(t);
  a_51 = t;
  t = q_71;
  t = dummify_0_0(t);
  e_51 = t;
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_51;
        if((q_71 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, a_51);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = e_51;
      }
  }
  b_51 = t;
  t = e_51;
  t = free_vars_3_0(r_4, s_4, tboundin_3_0, t);
  t = map_1_0(c_5, t);
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_71, v_71);
  t = free_vars_3_0(d_5, f_5, tboundin_3_0, t);
  t = filter_1_0(j_5, t);
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_51, g_51);
  t = diff_0_0(t);
  h_51 = t;
  t = new_0_0(t);
  m_51 = t;
  t = j_71;
  t = w_125(t);
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_51, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(h_51), (ATerm) ATmakeAppl(sym_Str_1, m_51)))), e_51)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, w_50, g_71, h_71, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(h_51), (ATerm) ATmakeAppl(sym_Str_1, m_51)))), q_71)), u_71, v_71))), (ATerm) ATmakeAppl(sym_RDefT_4, r_50, g_71, h_71, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_51), q_71), (ATerm)ATmakeAppl(sym_Var_1, x_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_i_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_71)))), b_51), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_50), y_50, z_50), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_e_34), (ATerm) ATmakeAppl(sym_Var_1, a_51)))))), (ATerm) ATmakeAppl(sym_Var_1, x_50)))))), (ATerm) ATmakeAppl(sym_RDefT_4, j_71, g_71, h_71, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_51), q_71), u_71, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_i_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_71)))), b_51), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(CheckATermList(h_51), (ATerm) ATmakeAppl(sym_Str_1, m_51)))), term_b_34))), v_71)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_26 = NULL,b_27 = NULL,c_27 = NULL,g_27 = NULL,h_27 = NULL,o_27 = NULL,p_27 = NULL,w_27 = NULL;
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
          o_27 = ATgetArgument(t, 0);
          p_27 = ATgetArgument(t, 1);
          w_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_26;
      t = j_8(l_5, b_27, c_27, g_27, o_27, p_27, w_27, t);
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      t = ExtendSplitDynamicRuleUndefined_1_0(o_5, t);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_28))));
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_28))));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_28 = ATgetFirst((ATermList) t);
      n_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm o_28 = NULL,v_28 = NULL,w_28 = NULL,f_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if(match_cons(q_34, sym__2))
        {
          o_28 = ATgetArgument(q_34, 0);
          v_28 = ATgetArgument(q_34, 1);
        }
      else
        _fail(t);
      {
        ATerm r_34 = ATgetArgument(t, 1);
        if(match_cons(r_34, sym__2))
          {
            w_28 = ATgetArgument(r_34, 0);
            f_29 = ATgetArgument(r_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_28), o_28), (ATerm) ATinsert(CheckATermList(f_29), v_28));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
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
      t = j_8(w_5, a_30, b_30, c_30, e_30, f_30, g_30, t);
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      t = ExtendSplitDynamicRuleUndefined_1_0(x_5, t);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_30))));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, x_30))));
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm y_30 = NULL,j_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_30 = ATgetFirst((ATermList) t);
      j_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_30, j_31);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm k_31 = NULL,v_31 = NULL,z_31 = NULL,a_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_34 = ATgetArgument(t, 0);
      if(match_cons(y_34, sym__2))
        {
          k_31 = ATgetArgument(y_34, 0);
          v_31 = ATgetArgument(y_34, 1);
        }
      else
        _fail(t);
      {
        ATerm z_34 = ATgetArgument(t, 1);
        if(match_cons(z_34, sym__2))
          {
            z_31 = ATgetArgument(z_34, 0);
            a_32 = ATgetArgument(z_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_31), k_31), (ATerm) ATinsert(CheckATermList(a_32), v_31));
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_67))));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
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
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,f_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      if(match_cons(f_35, sym__2))
        {
          s_68 = ATgetArgument(f_35, 0);
          t_68 = ATgetArgument(f_35, 1);
        }
      else
        _fail(t);
      {
        ATerm g_35 = ATgetArgument(t, 1);
        if(match_cons(g_35, sym__2))
          {
            u_68 = ATgetArgument(g_35, 0);
            f_69 = ATgetArgument(g_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_68), s_68), (ATerm) ATinsert(CheckATermList(f_69), t_68));
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_69))));
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm j_69 = NULL,n_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_69 = ATgetFirst((ATermList) t);
      n_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_69, n_69);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_35 = ATgetArgument(t, 0);
      if(match_cons(k_35, sym__2))
        {
          x_69 = ATgetArgument(k_35, 0);
          y_69 = ATgetArgument(k_35, 1);
        }
      else
        _fail(t);
      {
        ATerm p_35 = ATgetArgument(t, 1);
        if(match_cons(p_35, sym__2))
          {
            z_69 = ATgetArgument(p_35, 0);
            a_70 = ATgetArgument(p_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_69), x_69), (ATerm) ATinsert(CheckATermList(a_70), y_69));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL;
  a_67 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      b_67 = ATgetArgument(t, 0);
      {
        ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,x_21 = NULL;
        t = b_67;
        t = map_1_0(k_5, t);
        t = genzip_4_0(p_5, t_5, u_5, _id, t);
        v_26 = t;
        if(match_cons(t, sym__2))
          {
            s_26 = ATgetArgument(t, 0);
            t_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_26);
        r_26 = t;
        t = t_26;
        t = concat_0_0(t);
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_26, u_26);
        x_21 = t;
        t = SSLsetAnnotations(x_21, r_26);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          b_67 = ATgetArgument(t, 0);
          {
            ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,y_21 = NULL;
            t = b_67;
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
              b_67 = ATgetArgument(t, 0);
              t = b_67;
              t = map_1_0(c_6, t);
              t = genzip_4_0(e_6, f_6, g_6, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_67 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_67;
              t = map_1_0(h_6, t);
              t = genzip_4_0(j_6, k_6, l_6, _id, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm x_95 (ATerm), ATerm t)
{
  static ATerm m_71 (ATerm t)
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_95(t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        t = SRTS_one(m_71, t);
      }
    return(t);
  }
  t = m_71(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm p_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
  t_72 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      s_72 = ATgetArgument(t, 0);
      {
        ATerm s_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_72;
            p_72 = t;
            t = t_72;
            LocalPopChoice(t_35);
          }
        else
          {
            t = s_35;
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
  t = term_v_35;
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_72, term_v_35);
  t = c_9(s_6, p_72, r_72, t);
  t = t_72;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_v_18;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm r_125 (ATerm), ATerm t)
{
  static ATerm u_72 (ATerm t)
  {
    static ATerm n_6 (ATerm t)
    {
      ATerm w_35 = t;
      int x_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_125(t);
          LocalPopChoice(x_35);
        }
      else
        {
          t = w_35;
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
                t = map_1_0(r_6, t);
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
static ATerm y_6 (ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_36);
          }
        else
          {
            t = a_36;
            {
              ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_73 = ATgetArgument(t, 0);
                  h_73 = ATgetArgument(t, 1);
                  i_73 = ATgetArgument(t, 2);
                  j_73 = ATgetArgument(t, 3);
                  t = i_73;
                  t = map_1_0(a_7, t);
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
static ATerm a_7 (ATerm t)
{
  ATerm q_73 = NULL;
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_73 = ATgetArgument(t, 0);
          {
            ATerm f_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_36);
      t = q_73;
    }
  else
    {
      t = c_36;
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
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_73 = ATgetArgument(t, 0);
          {
            ATerm i_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_36);
      t = z_73;
    }
  else
    {
      t = g_36;
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
static ATerm e_7 (ATerm t)
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
            ATerm j_36 = ATgetArgument(t, 1);
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
            ATerm k_36 = ATgetArgument(t, 1);
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
  t = free_vars_3_0(v_6, y_6, tboundin_3_0, t);
  b_73 = t;
  t = d_73;
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_74 = NULL;
        ATerm q_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm t_36 = ATgetArgument(t, 0);
                ATerm u_36 = ATgetArgument(t, 1);
                f_74 = ATgetArgument(t, 2);
                {
                  ATerm v_36 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_36);
            t = f_74;
            t = map_1_0(e_7, t);
          }
        else
          {
            t = q_36;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm w_36 = ATgetArgument(t, 0);
                ATerm x_36 = ATgetArgument(t, 1);
                f_74 = ATgetArgument(t, 2);
                {
                  ATerm y_36 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = f_74;
            t = map_1_0(f_7, t);
          }
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        t = (ATerm) ATempty;
      }
  }
  c_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_73, c_73);
  t = q_8(g_7, b_73, c_73, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_v_18;
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
        ATerm z_36 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_75;
            z_74 = t;
            t = d_75;
            LocalPopChoice(c_37);
          }
        else
          {
            t = z_36;
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
  t = term_v_35;
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_74, term_v_35);
  t = c_9(l_7, z_74, b_75, t);
  t = d_75;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm l_8 (ATerm t_69, ATerm s_69, ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL;
  static ATerm i_7 (ATerm t)
  {
    t = t_69;
    t = def_tvars_0_0(t);
    t = map_1_0(j_7, t);
    t = t_69;
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_74)), not_null(x_74)), s_69);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t)
{
  static ATerm e_75 (ATerm t)
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_93(t);
        t = e_75(t);
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        t = u_93(t);
      }
    return(t);
  }
  t = e_75(t);
  return(t);
}
ATerm listtd_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  static ATerm s_75 (ATerm t)
  {
    ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
    t = o_102(t);
    p_75 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_75;
      }
    else
      {
        ATerm i_32 = NULL,p_32 = NULL,b_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_75 = ATgetFirst((ATermList) t);
            r_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_75);
        i_32 = t;
        t = r_75;
        t = s_75(t);
        p_32 = t;
        t = (ATerm) ATinsert(CheckATermList(p_32), q_75);
        b_22 = t;
        t = SSLsetAnnotations(b_22, i_32);
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
      t = (ATerm) ATmakeAppl(sym_Call_2, term_i_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, x_75, a_76)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_75))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_76;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL,p_79 = NULL,r_79 = NULL,s_79 = NULL;
  r_79 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_79 = ATgetArgument(t, 0);
      l_79 = ATgetArgument(t, 1);
      {
        ATerm f_33 = NULL,i_33 = NULL,l_33 = NULL,d_22 = NULL;
        t = SSLgetAnnotations(r_79);
        f_33 = t;
        t = s_79;
        t = l_125(t);
        i_33 = t;
        t = l_79;
        t = j_125(t);
        l_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_33, l_33);
        d_22 = t;
        t = SSLsetAnnotations(d_22, f_33);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          s_79 = ATgetArgument(t, 0);
          l_79 = ATgetArgument(t, 1);
          m_79 = ATgetArgument(t, 2);
          p_79 = ATgetArgument(t, 3);
          {
            ATerm p_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,h_35 = NULL,e_22 = NULL;
            t = SSLgetAnnotations(r_79);
            p_34 = t;
            t = s_79;
            t = l_125(t);
            a_35 = t;
            t = l_79;
            t = l_125(t);
            b_35 = t;
            t = m_79;
            t = l_125(t);
            c_35 = t;
            t = p_79;
            t = j_125(t);
            h_35 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_35, b_35, c_35, h_35);
            e_22 = t;
            t = SSLsetAnnotations(e_22, p_34);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              s_79 = ATgetArgument(t, 0);
              l_79 = ATgetArgument(t, 1);
              m_79 = ATgetArgument(t, 2);
              p_79 = ATgetArgument(t, 3);
              {
                ATerm e_36 = NULL,l_36 = NULL,m_36 = NULL,p_36 = NULL,r_36 = NULL,f_22 = NULL;
                t = SSLgetAnnotations(r_79);
                e_36 = t;
                t = s_79;
                t = l_125(t);
                l_36 = t;
                t = l_79;
                t = l_125(t);
                m_36 = t;
                t = m_79;
                t = l_125(t);
                p_36 = t;
                t = p_79;
                t = j_125(t);
                r_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, l_36, m_36, p_36, r_36);
                f_22 = t;
                t = SSLsetAnnotations(f_22, e_36);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  s_79 = ATgetArgument(t, 0);
                  {
                    ATerm n_37 = NULL,q_37 = NULL,g_22 = NULL;
                    t = SSLgetAnnotations(r_79);
                    n_37 = t;
                    t = s_79;
                    t = j_125(t);
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
                      s_79 = ATgetArgument(t, 0);
                      {
                        ATerm c_38 = NULL,o_38 = NULL,h_22 = NULL;
                        t = SSLgetAnnotations(r_79);
                        c_38 = t;
                        t = s_79;
                        t = j_125(t);
                        o_38 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, o_38);
                        h_22 = t;
                        t = SSLsetAnnotations(h_22, c_38);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          s_79 = ATgetArgument(t, 0);
                          {
                            ATerm z_38 = NULL,b_39 = NULL,i_22 = NULL;
                            t = SSLgetAnnotations(r_79);
                            z_38 = t;
                            t = s_79;
                            t = j_125(t);
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
                              s_79 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(r_79);
                          h_39 = t;
                          t = s_79;
                          t = j_125(t);
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
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            {
              ATerm g_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_81 = ATgetArgument(t, 0);
                  j_81 = ATgetArgument(t, 1);
                  k_81 = ATgetArgument(t, 2);
                  l_81 = ATgetArgument(t, 3);
                  t = k_81;
                  t = map_1_0(p_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_81 = ATgetArgument(t, 0);
                      j_81 = ATgetArgument(t, 1);
                      k_81 = ATgetArgument(t, 2);
                      l_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_81;
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
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_81 = ATgetArgument(t, 0);
          {
            ATerm x_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_37);
      t = w_81;
    }
  else
    {
      t = v_37;
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
  ATerm k_82 = NULL;
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_82 = ATgetArgument(t, 0);
          {
            ATerm a_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_37);
      t = k_82;
    }
  else
    {
      t = y_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_82;
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
  ATerm b_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_38);
    }
  else
    {
      t = b_38;
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            {
              ATerm u_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_82 = ATgetArgument(t, 0);
                  x_82 = ATgetArgument(t, 1);
                  y_82 = ATgetArgument(t, 2);
                  z_82 = ATgetArgument(t, 3);
                  t = y_82;
                  t = map_1_0(t_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_82 = ATgetArgument(t, 0);
                      x_82 = ATgetArgument(t, 1);
                      y_82 = ATgetArgument(t, 2);
                      z_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_82;
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
  ATerm g_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_83 = ATgetArgument(t, 0);
          {
            ATerm q_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_38);
      t = k_83;
    }
  else
    {
      t = g_38;
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
  ATerm x_83 = NULL;
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_83 = ATgetArgument(t, 0);
          {
            ATerm x_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_38);
      t = x_83;
    }
  else
    {
      t = v_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_83;
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
  ATerm y_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_39);
    }
  else
    {
      t = y_38;
      {
        ATerm c_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_39);
          }
        else
          {
            t = c_39;
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
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_84 = ATgetArgument(t, 0);
          {
            ATerm g_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_39);
      t = o_84;
    }
  else
    {
      t = e_39;
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
  ATerm g_85 = NULL;
  ATerm i_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_85 = ATgetArgument(t, 0);
          {
            ATerm l_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_39);
      t = g_85;
    }
  else
    {
      t = i_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_85;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
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
static ATerm b_8 (ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      {
        ATerm o_39 = t;
        int p_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_39);
          }
        else
          {
            t = o_39;
            {
              ATerm p_85 = NULL,t_85 = NULL,v_85 = NULL,y_85 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_85 = ATgetArgument(t, 0);
                  t_85 = ATgetArgument(t, 1);
                  v_85 = ATgetArgument(t, 2);
                  y_85 = ATgetArgument(t, 3);
                  t = v_85;
                  t = map_1_0(f_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_85 = ATgetArgument(t, 0);
                      t_85 = ATgetArgument(t, 1);
                      v_85 = ATgetArgument(t, 2);
                      y_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_85;
                  t = map_1_0(g_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm m_86 = NULL;
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_86 = ATgetArgument(t, 0);
          {
            ATerm s_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_39);
      t = m_86;
    }
  else
    {
      t = q_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_86;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm y_86 = NULL;
  ATerm u_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_86 = ATgetArgument(t, 0);
          {
            ATerm x_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_39);
      t = y_86;
    }
  else
    {
      t = u_39;
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
  ATerm c_81 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      c_81 = ATgetArgument(t, 0);
      t = c_81;
      t = free_vars_3_0(n_7, o_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          c_81 = ATgetArgument(t, 0);
          t = c_81;
          t = free_vars_3_0(r_7, s_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              c_81 = ATgetArgument(t, 0);
              t = c_81;
              t = free_vars_3_0(w_7, x_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  c_81 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_81;
              t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm w_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_87);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      {
        ATerm a_40 = t;
        int b_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            {
              ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL,f_88 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_88 = ATgetArgument(t, 0);
                  b_88 = ATgetArgument(t, 1);
                  c_88 = ATgetArgument(t, 2);
                  f_88 = ATgetArgument(t, 3);
                  t = c_88;
                  t = map_1_0(o_8, t);
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
  ATerm n_88 = NULL;
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_88 = ATgetArgument(t, 0);
          {
            ATerm e_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_40);
      t = n_88;
    }
  else
    {
      t = c_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_88;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm y_88 = NULL;
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_88 = ATgetArgument(t, 0);
          {
            ATerm j_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_40);
      t = y_88;
    }
  else
    {
      t = g_40;
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
  ATerm n_87 = NULL,t_87 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_87 = ATgetArgument(t, 0);
      t = t_87;
      if(match_cons(t, sym_Rule_3))
        {
          n_87 = ATgetArgument(t, 0);
          {
            ATerm k_40 = ATgetArgument(t, 1);
          }
          {
            ATerm l_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_87;
      t = free_vars_3_0(h_8, k_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_87 = ATgetArgument(t, 0);
          {
            ATerm m_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_87;
    }
  return(t);
}
static ATerm q_8 (ATerm j_105 (ATerm), ATerm a_29, ATerm z_28, ATerm t)
{
  static ATerm s_89 (ATerm t)
  {
    ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
    n_89 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_89 = ATgetFirst((ATermList) t);
            p_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_40 = t;
          int q_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_89;
              {
                static ATerm u_8 (ATerm t)
                {
                  t = z_28;
                  return(t);
                }
                t = r_8(j_105, u_8, o_89, p_89, t);
              }
              t = s_89(t);
              LocalPopChoice(q_40);
            }
          else
            {
              t = o_40;
              {
                ATerm t_39 = NULL,w_39 = NULL,w_22 = NULL;
                t = SSLgetAnnotations(n_89);
                t_39 = t;
                t = p_89;
                t = s_89(t);
                w_39 = t;
                t = (ATerm) ATinsert(CheckATermList(w_39), o_89);
                w_22 = t;
                t = SSLsetAnnotations(w_22, t_39);
              }
            }
        }
      }
    return(t);
  }
  t = a_29;
  t = s_89(t);
  return(t);
}
static ATerm r_8 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm e_29, ATerm d_29, ATerm t)
{
  t = n_105(t);
  {
    static ATerm v_8 (ATerm t)
    {
      ATerm y_89 = NULL;
      y_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_29, y_89);
      t = m_105(t);
      return(t);
    }
    t = fetch_1_0(v_8, t);
  }
  t = d_29;
  return(t);
}
static ATerm s_8 (ATerm e_105 (ATerm), ATerm y_28, ATerm x_28, ATerm t)
{
  static ATerm y_90 (ATerm t)
  {
    ATerm n_90 = NULL,o_90 = NULL,v_90 = NULL;
    n_90 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_90;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_90 = ATgetFirst((ATermList) t);
            v_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_40 = t;
          int s_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_90;
              {
                static ATerm w_8 (ATerm t)
                {
                  t = x_28;
                  return(t);
                }
                t = r_8(e_105, w_8, o_90, v_90, t);
              }
              t = y_90(t);
              LocalPopChoice(s_40);
            }
          else
            {
              t = r_40;
              {
                ATerm f_40 = NULL,i_40 = NULL,z_22 = NULL;
                t = SSLgetAnnotations(n_90);
                f_40 = t;
                t = v_90;
                t = y_90(t);
                i_40 = t;
                t = (ATerm) ATinsert(CheckATermList(i_40), o_90);
                z_22 = t;
                t = SSLsetAnnotations(z_22, f_40);
              }
            }
        }
      }
    return(t);
  }
  t = y_28;
  t = y_90(t);
  return(t);
}
ATerm genzip_4_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm t)
{
  static ATerm k_91 (ATerm t)
  {
    ATerm t_40 = t;
    int x_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_103(t);
        LocalPopChoice(x_40);
      }
    else
      {
        t = t_40;
        {
          ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,f_91 = NULL,g_91 = NULL,j_91 = NULL,c_23 = NULL;
          t = j_103(t);
          j_91 = t;
          if(match_cons(t, sym__2))
            {
              c_91 = ATgetArgument(t, 0);
              d_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_91);
          b_91 = t;
          t = c_91;
          t = l_103(t);
          f_91 = t;
          t = d_91;
          t = k_91(t);
          g_91 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_91, g_91);
          c_23 = t;
          t = SSLsetAnnotations(c_23, b_91);
          t = k_103(t);
        }
      }
    return(t);
  }
  t = k_91(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_40 = ATgetArgument(t, 0);
      if(((ATgetType(y_40) != AT_LIST) || !(ATisEmpty(y_40))))
        _fail(t);
      {
        ATerm b_41 = ATgetArgument(t, 1);
        if(((ATgetType(b_41) != AT_LIST) || !(ATisEmpty(b_41))))
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
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_41 = ATgetArgument(t, 0);
      if(((ATgetType(c_41) == AT_LIST) && !(ATisEmpty(c_41))))
        {
          s_91 = ATgetFirst((ATermList) c_41);
          t_91 = (ATerm) ATgetNext((ATermList) c_41);
        }
      else
        _fail(t);
      {
        ATerm d_41 = ATgetArgument(t, 1);
        if(((ATgetType(d_41) == AT_LIST) && !(ATisEmpty(d_41))))
          {
            u_91 = ATgetFirst((ATermList) d_41);
            v_91 = (ATerm) ATgetNext((ATermList) d_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_91, u_91), (ATerm) ATmakeAppl(sym__2, t_91, v_91));
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL;
  if(match_cons(t, sym__2))
    {
      w_91 = ATgetArgument(t, 0);
      x_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_91), w_91);
  return(t);
}
static ATerm x_8 (ATerm v_607, ATerm a_608, ATerm v_57, ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL;
  t = SSL_explode_term(a_608);
  if(match_cons(t, sym__2))
    {
      m_91 = ATgetArgument(t, 0);
      o_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_607);
  if(match_cons(t, sym__2))
    {
      if((m_91 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_91, o_91);
  t = genzip_4_0(y_8, z_8, a_9, _id, t);
  p_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_91, v_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t)
{
  static ATerm z_91 (ATerm t)
  {
    ATerm e_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_94(t);
        LocalPopChoice(q_41);
      }
    else
      {
        t = e_41;
        t = l_94(t);
        t = z_91(t);
      }
    return(t);
  }
  t = z_91(t);
  return(t);
}
ATerm for_3_0 (ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm t)
{
  t = n_94(t);
  t = while_not_2_0(o_94, p_94, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm k_92 = NULL;
  k_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_92);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,q_92 = NULL,t_92 = NULL,g_23 = NULL;
  t_92 = t;
  if(match_cons(t, sym__2))
    {
      m_92 = ATgetArgument(t, 0);
      q_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_92);
  l_92 = t;
  t = q_92;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_92, q_92);
  g_23 = t;
  t = SSLsetAnnotations(g_23, l_92);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL;
  e_94 = t;
  if(match_cons(t, sym__2))
    {
      f_94 = ATgetArgument(t, 0);
      g_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_94 = ATgetFirst((ATermList) t);
      i_94 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_95(f_94, g_94, e_94, t);
            LocalPopChoice(s_41);
          }
        else
          {
            t = r_41;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_94), h_94), i_94);
          }
      }
    }
  else
    {
      t = a_95(f_94, g_94, e_94, t);
    }
  return(t);
}
static ATerm a_95 (ATerm w_92, ATerm z_92, ATerm b_93, ATerm t)
{
  ATerm c_93 = NULL,h_93 = NULL,k_23 = NULL,s_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL;
  t = SSLgetAnnotations(b_93);
  c_93 = t;
  t = z_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_93 = ATgetFirst((ATermList) t);
      y_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_93;
  if(match_cons(t, sym__2))
    {
      w_93 = ATgetArgument(t, 0);
      x_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_93;
        if((w_93 != t))
          {
            _fail(t);
          }
        t = y_93;
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = z_92;
        t = x_8(w_93, x_93, y_93, t);
      }
  }
  h_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_92, h_93);
  k_23 = t;
  t = SSLsetAnnotations(k_23, c_93);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm z_94 = NULL;
  if(match_cons(t, sym__2))
    {
      z_94 = ATgetArgument(t, 0);
      if((z_94 != ATgetArgument(t, 1)))
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
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_9, p_9, u_9, t);
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
      {
        ATerm s_94 = NULL,v_94 = NULL,w_94 = NULL;
        s_94 = t;
        if(match_cons(t, sym__2))
          {
            v_94 = ATgetArgument(t, 0);
            w_94 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_94;
        t = s_8(w_9, v_94, w_94, t);
      }
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  if(match_cons(t, sym__2))
    {
      u_40 = ATgetArgument(t, 0);
      v_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(e_10, u_40, v_40, t);
  return(t);
}
static ATerm e_10 (ATerm t)
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
static ATerm h_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      f_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(k_10, f_41, g_41, t);
  return(t);
}
static ATerm k_10 (ATerm t)
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
ATerm free_vars_3_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm f_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm q_95 (ATerm t)
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_123(t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        {
          ATerm z_41 = t;
          int a_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_95 = NULL,d_95 = NULL,n_40 = NULL,p_40 = NULL;
              c_95 = t;
              t = e_123(t);
              d_95 = t;
              t = c_95;
              {
                static ATerm y_9 (ATerm t)
                {
                  ATerm f_95 = NULL;
                  t = q_95(t);
                  f_95 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_95, d_95);
                  t = diff_0_0(t);
                  return(t);
                }
                t = f_123(y_9, q_95, z_9, t);
              }
              p_40 = t;
              t = SSL_explode_term(p_40);
              if(match_cons(t, sym__2))
                {
                  ATerm b_42 = ATgetArgument(t, 0);
                  n_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_40;
              t = foldr_3_0(c_10, d_10, _id, t);
              LocalPopChoice(a_42);
            }
          else
            {
              t = z_41;
              {
                ATerm z_40 = NULL,a_41 = NULL;
                a_41 = t;
                t = SSL_explode_term(a_41);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_42 = ATgetArgument(t, 0);
                    z_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_40;
                t = foldr_3_0(h_10, i_10, q_95, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_95(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm u_94 (ATerm), ATerm t)
{
  static ATerm l_10 (ATerm t)
  {
    t = bottomup_1_0(u_94, t);
    return(t);
  }
  t = SRTS_all(l_10, t);
  t = u_94(t);
  return(t);
}
static ATerm b_9 (ATerm u_53, ATerm v_53, ATerm t)
{
  ATerm r_95 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_53, v_53);
  t = s_9(u_53, v_53, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_95 = ATgetFirst((ATermList) t);
      {
        ATerm d_42 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_95;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL;
  h_96 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_42 = NULL;
        t = term_g_42;
        m_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_42, h_96);
        t = b_9(m_42, h_96, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm h_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_42) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, i_96, (ATerm) ATempty);
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        {
          ATerm z_42 = NULL;
          t = term_g_42;
          z_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_42, h_96);
          t = b_9(z_42, h_96, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm i_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_42) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, i_96, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  static ATerm n_96 (ATerm t)
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_96(t);
        LocalPopChoice(k_42);
      }
    else
      {
        t = j_42;
        t = SRTS_all(n_96, t);
      }
    return(t);
  }
  t = n_96(t);
  return(t);
}
static ATerm c_9 (ATerm s_113 (ATerm), ATerm a_43, ATerm y_42, ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL;
  r_96 = t;
  t = s_113(t);
  o_96 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_96, a_43, y_42);
  t = t_9(o_96, a_43, y_42, t);
  {
    ATerm l_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_96 = NULL;
        t = term_r_42;
        u_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_96, term_r_42);
        t = s_9(o_96, u_96, t);
        LocalPopChoice(n_42);
      }
    else
      {
        t = l_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_96 = ATgetFirst((ATermList) t);
      q_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_42;
  s_96 = t;
  t = (ATerm) ATinsert(CheckATermList(q_96), (ATerm) ATinsert(CheckATermList(p_96), a_43));
  t_96 = t;
  t = SSL_table_put(o_96, s_96, t_96);
  t = r_96;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm y_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      a_97 = ATgetArgument(t, 0);
      b_97 = ATgetArgument(t, 1);
      y_96 = ATgetArgument(t, 2);
      {
        ATerm f_97 = NULL,g_97 = NULL;
        t = b_97;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, a_97);
        f_97 = t;
        t = term_t_42;
        g_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_97), term_t_42);
        t = c_9(m_10, f_97, g_97, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, a_97, (ATerm)ATempty, y_96);
      }
    }
  else
    {
      ATerm j_97 = NULL,k_97 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          a_97 = ATgetArgument(t, 0);
          b_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_97;
      if(match_cons(t, sym_ConstType_1))
        {
          c_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, a_97);
      j_97 = t;
      t = term_v_42;
      k_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_97), term_v_42);
      t = c_9(p_10, j_97, k_97, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, a_97, (ATerm) ATmakeAppl(sym_ConstType_1, c_97));
    }
  return(t);
}
static ATerm d_9 (ATerm o_53, ATerm p_53, ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL;
  p_97 = t;
  {
    ATerm w_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_53, p_53);
        t = s_9(o_53, p_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_43 = ATgetFirst((ATermList) t);
            o_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_42);
        t = SSL_table_put(o_53, p_53, o_97);
        t = (ATerm) ATmakeAppl(sym__3, o_53, p_53, o_97);
      }
    else
      {
        t = w_42;
        t = SSL_table_remove(o_53, p_53);
        t = (ATerm) ATmakeAppl(sym__2, o_53, p_53);
      }
  }
  t = p_97;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL;
  t_97 = t;
  t = p_113(t);
  s_97 = t;
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_97 = NULL;
        t = term_r_42;
        v_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_97, term_r_42);
        t = s_9(s_97, v_97, t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_97 = ATgetFirst((ATermList) t);
      q_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_42;
  u_97 = t;
  t = SSL_table_put(s_97, u_97, q_97);
  t = r_97;
  {
    static ATerm q_10 (ATerm t)
    {
      ATerm w_97 = NULL;
      w_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_97, w_97);
      t = d_9(s_97, w_97, t);
      return(t);
    }
    t = map_1_0(q_10, t);
  }
  t = t_97;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm t)
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_93(t);
      t = q_93(t);
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      t = q_93(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL;
  z_97 = t;
  t = o_113(t);
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_97, term_r_42);
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_98 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_43 = ATgetArgument(t, 0);
            ATerm k_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_42;
        g_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_97, term_r_42);
        t = s_9(y_97, g_98, t);
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = (ATerm) ATempty;
      }
  }
  a_98 = t;
  t = term_r_42;
  b_98 = t;
  t = (ATerm) ATinsert(CheckATermList(a_98), (ATerm) ATempty);
  c_98 = t;
  t = SSL_table_put(y_97, b_98, c_98);
  t = z_97;
  return(t);
}
ATerm scope_2_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t)
{
  static ATerm v_10 (ATerm t)
  {
    t = end_scope_1_0(q_113, t);
    return(t);
  }
  t = begin_scope_1_0(q_113, t);
  t = restore_always_2_0(r_113, v_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL,t_23 = NULL;
  o_98 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_98);
  l_98 = t;
  t = m_98;
  t = map_1_0(y_10, t);
  n_98 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_98);
  t_23 = t;
  t = SSLsetAnnotations(t_23, l_98);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  c_99 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      b_99 = ATgetArgument(t, 0);
      {
        ATerm l_43 = t;
        int m_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_43 = NULL,u_43 = NULL,r_23 = NULL;
            t = SSLgetAnnotations(c_99);
            q_43 = t;
            t = b_99;
            t = map_1_0(e_11, t);
            u_43 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, u_43);
            r_23 = t;
            t = SSLsetAnnotations(r_23, q_43);
            LocalPopChoice(m_43);
          }
        else
          {
            t = l_43;
            t = c_99;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          b_99 = ATgetArgument(t, 0);
          {
            ATerm n_43 = t;
            int p_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_44 = NULL,j_44 = NULL,s_23 = NULL;
                t = SSLgetAnnotations(c_99);
                h_44 = t;
                t = b_99;
                t = map_1_0(j_11, t);
                j_44 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, j_44);
                s_23 = t;
                t = SSLsetAnnotations(s_23, h_44);
                LocalPopChoice(p_43);
              }
            else
              {
                t = n_43;
                t = c_99;
              }
          }
        }
      else
        {
          t = c_99;
        }
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm r_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(v_43);
    }
  else
    {
      t = r_43;
    }
  return(t);
}
static ATerm j_11 (ATerm t)
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
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(w_10, x_10, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL;
  j_99 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_99;
    }
  else
    {
      static ATerm k_11 (ATerm t)
      {
        t = not_null(l_99);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_99 = ATgetFirst((ATermList) t);
          if(((l_99 != NULL) && (l_99 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_99;
      t = at_end_1_0(k_11, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL;
  a_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_100;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_100 = ATgetFirst((ATermList) t);
          c_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_43 = t;
        int z_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_44 = NULL,w_44 = NULL,x_44 = NULL,z_23 = NULL;
            t = SSLgetAnnotations(a_100);
            t_44 = t;
            t = b_100;
            t = m_108(t);
            w_44 = t;
            t = c_100;
            t = filter_1_0(m_108, t);
            x_44 = t;
            t = (ATerm) ATinsert(CheckATermList(x_44), w_44);
            z_23 = t;
            t = SSLsetAnnotations(z_23, t_44);
            LocalPopChoice(z_43);
          }
        else
          {
            t = y_43;
            t = c_100;
            t = filter_1_0(m_108, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  static ATerm s_100 (ATerm t)
  {
    ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL;
    r_100 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_100 = ATgetFirst((ATermList) t);
        q_100 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_45 = NULL,o_45 = NULL,b_24 = NULL;
          t = SSLgetAnnotations(r_100);
          f_45 = t;
          t = q_100;
          t = s_100(t);
          o_45 = t;
          t = (ATerm) ATinsert(CheckATermList(o_45), p_100);
          b_24 = t;
          t = SSLsetAnnotations(b_24, f_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_100;
        t = v_101(t);
      }
    return(t);
  }
  t = s_100(t);
  return(t);
}
static ATerm j_101 (ATerm y_100, ATerm t)
{
  ATerm z_100 = NULL;
  t = SSL_explode_term(y_100);
  if(match_cons(t, sym__2))
    {
      ATerm a_44 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_44) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_100;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL,e_101 = NULL;
  e_101 = t;
  if(match_cons(t, sym__2))
    {
      b_101 = ATgetArgument(t, 0);
      c_101 = ATgetArgument(t, 1);
      {
        ATerm b_44 = t;
        int c_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_11 (ATerm t)
            {
              t = c_101;
              return(t);
            }
            t = b_101;
            t = at_end_1_0(l_11, t);
            LocalPopChoice(c_44);
          }
        else
          {
            t = b_44;
            t = j_101(e_101, t);
          }
      }
    }
  else
    {
      t = j_101(e_101, t);
    }
  return(t);
}
static ATerm g_9 (ATerm s_20, ATerm o_20, ATerm t)
{
  ATerm k_101 = NULL,l_101 = NULL;
  static ATerm m_11 (ATerm t)
  {
    ATerm m_101 = NULL,n_101 = NULL,o_101 = NULL,r_101 = NULL;
    r_101 = t;
    t = SSL_explode_term(r_101);
    if(match_cons(t, sym__2))
      {
        if(((k_101 != NULL) && (k_101 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          k_101 = ATgetArgument(t, 0);
        {
          ATerm d_44 = ATgetArgument(t, 1);
          if(((ATgetType(d_44) == AT_LIST) && !(ATisEmpty(d_44))))
            {
              m_101 = ATgetFirst((ATermList) d_44);
              {
                ATerm e_44 = (ATerm) ATgetNext((ATermList) d_44);
                if(((ATgetType(e_44) != AT_LIST) || !(ATisEmpty(e_44))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, m_101, not_null(l_101));
    t = conc_0_0(t);
    n_101 = t;
    t = (ATerm) ATinsert(ATempty, n_101);
    o_101 = t;
    t = SSL_mkterm(k_101, o_101);
    return(t);
  }
  t = SSL_explode_term(s_20);
  if(match_cons(t, sym__2))
    {
      if(((k_101 != NULL) && (k_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_101 = ATgetArgument(t, 0);
      {
        ATerm f_44 = ATgetArgument(t, 1);
        if(((ATgetType(f_44) == AT_LIST) && !(ATisEmpty(f_44))))
          {
            if(((l_101 != NULL) && (l_101 != ATgetFirst((ATermList) f_44))))
              _fail(ATgetFirst((ATermList) f_44));
            else
              l_101 = ATgetFirst((ATermList) f_44);
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
  t = o_20;
  t = fetch_1_0(m_11, t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t)
{
  ATerm t_101 = NULL,u_101 = NULL,x_101 = NULL;
  t_101 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_101;
      t = k_107(t);
    }
  else
    {
      ATerm a_102 = NULL,b_102 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_101 = ATgetFirst((ATermList) t);
          x_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_101;
      t = m_107(t);
      a_102 = t;
      t = x_101;
      t = foldr_3_0(k_107, l_107, m_107, t);
      b_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_102, b_102);
      t = l_107(t);
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_44), term_k_44), term_i_44);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm i_102 = NULL,j_102 = NULL;
  if(match_cons(t, sym__2))
    {
      i_102 = ATgetArgument(t, 0);
      j_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(i_102, j_102, t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm k_102 = NULL,l_102 = NULL;
  l_102 = t;
  if(match_cons(t, sym_Signature_1))
    {
      k_102 = ATgetArgument(t, 0);
      {
        ATerm m_44 = t;
        int n_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_102 = NULL;
            t = k_102;
            t = filter_1_0(q_11, t);
            t = concat_0_0(t);
            n_102 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, n_102);
            LocalPopChoice(n_44);
          }
        else
          {
            t = m_44;
            t = l_102;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          k_102 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, k_102);
        }
      else
        {
          t = l_102;
        }
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm q_102 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      q_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_102;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL,h_102 = NULL,d_24 = NULL;
  h_102 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_102);
  e_102 = t;
  t = f_102;
  t = foldr_3_0(n_11, o_11, p_11, t);
  g_102 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, g_102);
  d_24 = t;
  t = SSLsetAnnotations(d_24, e_102);
  return(t);
}
static ATerm r_11 (ATerm t)
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
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL;
  g_104 = t;
  if(match_cons(t, sym_LRule_1))
    {
      f_104 = ATgetArgument(t, 0);
      t = f_104;
      if(match_cons(t, sym_Rule_3))
        {
          c_104 = ATgetArgument(t, 0);
          d_104 = ATgetArgument(t, 1);
          e_104 = ATgetArgument(t, 2);
          {
            ATerm q_44 = t;
            int r_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_104 = NULL;
                t = c_104;
                t = free_vars_3_0(q_12, r_12, tboundin_3_0, t);
                k_104 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, k_104, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, c_104, d_104, e_104)));
                LocalPopChoice(r_44);
              }
            else
              {
                t = q_44;
                t = g_104;
              }
          }
        }
      else
        {
          t = g_104;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          f_104 = ATgetArgument(t, 0);
          {
            ATerm s_44 = t;
            int u_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_105 = NULL;
                t = f_104;
                t = free_vars_3_0(e_13, j_13, tboundin_3_0, t);
                s_105 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, s_105, f_104);
                LocalPopChoice(u_44);
              }
            else
              {
                t = s_44;
                t = g_104;
              }
          }
        }
      else
        {
          t = g_104;
        }
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm l_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_104);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm v_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_44);
    }
  else
    {
      t = v_44;
      {
        ATerm z_44 = t;
        int a_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_45);
          }
        else
          {
            t = z_44;
            {
              ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_104 = ATgetArgument(t, 0);
                  o_104 = ATgetArgument(t, 1);
                  p_104 = ATgetArgument(t, 2);
                  q_104 = ATgetArgument(t, 3);
                  t = p_104;
                  t = map_1_0(y_12, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_104 = ATgetArgument(t, 0);
                      o_104 = ATgetArgument(t, 1);
                      p_104 = ATgetArgument(t, 2);
                      q_104 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_104;
                  t = map_1_0(a_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm x_104 = NULL;
  ATerm b_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_104 = ATgetArgument(t, 0);
          {
            ATerm d_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_45);
      t = x_104;
    }
  else
    {
      t = b_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_104;
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm i_105 = NULL;
  ATerm e_45 = t;
  int g_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_105 = ATgetArgument(t, 0);
          {
            ATerm h_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_45);
      t = i_105;
    }
  else
    {
      t = e_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_105;
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm t_105 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_105);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm i_45 = t;
  int j_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_45);
    }
  else
    {
      t = i_45;
      {
        ATerm k_45 = t;
        int l_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_45);
          }
        else
          {
            t = k_45;
            {
              ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL,y_105 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  v_105 = ATgetArgument(t, 0);
                  w_105 = ATgetArgument(t, 1);
                  x_105 = ATgetArgument(t, 2);
                  y_105 = ATgetArgument(t, 3);
                  t = x_105;
                  t = map_1_0(n_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_105 = ATgetArgument(t, 0);
                      w_105 = ATgetArgument(t, 1);
                      x_105 = ATgetArgument(t, 2);
                      y_105 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_105;
                  t = map_1_0(x_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm f_106 = NULL;
  ATerm m_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_106 = ATgetArgument(t, 0);
          {
            ATerm p_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_45);
      t = f_106;
    }
  else
    {
      t = m_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_106;
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm o_106 = NULL;
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_106 = ATgetArgument(t, 0);
          {
            ATerm s_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_45);
      t = o_106;
    }
  else
    {
      t = q_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_106;
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
  ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,f_24 = NULL;
  x_106 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_106);
  u_106 = t;
  t = v_106;
  t = topdown_1_0(f_14, t);
  t = listtd_1_0(i_14, t);
  w_106 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_106);
  f_24 = t;
  t = SSLsetAnnotations(f_24, u_106);
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
  ATerm t_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(u_45);
    }
  else
    {
      t = t_45;
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
  ATerm a_107 = NULL,b_107 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_107 = ATgetFirst((ATermList) t);
      b_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_8(a_107, b_107, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm f_107 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      f_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, f_107)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL,j_24 = NULL,h_24 = NULL,g_24 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(r_11, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(y_11, t);
  z_103 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_103);
  s_103 = t;
  t = t_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_103 = ATgetFirst((ATermList) t);
      w_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_103);
  u_103 = t;
  t = w_103;
  t = Cons_2_0(_id, b_14, t);
  x_103 = t;
  t = (ATerm) ATinsert(CheckATermList(x_103), v_103);
  g_24 = t;
  t = SSLsetAnnotations(g_24, u_103);
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_103);
  h_24 = t;
  t = SSLsetAnnotations(h_24, s_103);
  t = topdown_1_0(k_14, t);
  r_103 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_103);
  o_103 = t;
  t = p_103;
  t = fetch_1_0(l_14, t);
  q_103 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_103);
  j_24 = t;
  t = SSLsetAnnotations(j_24, o_103);
  return(t);
}
static ATerm h_9 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm g_107 = NULL;
  t = SSL_fputc(r_38, s_38);
  g_107 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_107);
  return(t);
}
static ATerm i_9 (ATerm h_23, ATerm i_23, ATerm t)
{
  ATerm h_107 = NULL;
  t = SSL_write_term_to_stream_text(h_23, i_23);
  h_107 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_107);
  return(t);
}
static ATerm k_9 (ATerm w_100 (ATerm), ATerm i_164, ATerm l_23, ATerm t)
{
  ATerm n_107 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_164, term_x_45);
  t = n_9(t);
  n_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_107, l_23);
  t = w_100(t);
  t = fclose_0_0(t);
  t = l_23;
  return(t);
}
static ATerm j_9 (ATerm d_23, ATerm e_23, ATerm t)
{
  ATerm o_107 = NULL;
  t = SSL_write_term_to_stream_baf(d_23, e_23);
  o_107 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_107);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_45 = ATgetArgument(t, 0);
      if(match_cons(y_45, sym_Stream_1))
        {
          r_107 = ATgetArgument(y_45, 0);
        }
      else
        _fail(t);
      s_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(r_107, s_107, t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_45 = ATgetArgument(t, 0);
      if(match_cons(z_45, sym_Stream_1))
        {
          w_107 = ATgetArgument(z_45, 0);
        }
      else
        _fail(t);
      x_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9(w_107, x_107, t);
  t_107 = t;
  t = term_k_22;
  u_107 = t;
  t = t_107;
  if(match_cons(t, sym_Stream_1))
    {
      v_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_22, t_107);
  t = h_9(u_107, v_107, t);
  return(t);
}
ATerm output_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL;
  t = y_118(t);
  q_107 = t;
  {
    ATerm a_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_46;
        t = get_config_0_0(t);
        LocalPopChoice(e_46);
      }
    else
      {
        t = a_46;
        t = term_g_46;
      }
  }
  p_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_107, q_107);
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_46;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, p_107, q_107);
        LocalPopChoice(i_46);
        if(match_cons(t, sym__2))
          {
            ATerm k_46 = ATgetArgument(t, 0);
            ATerm n_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_9(m_14, p_107, q_107, t);
      }
    else
      {
        t = h_46;
        if(match_cons(t, sym__2))
          {
            ATerm u_46 = ATgetArgument(t, 0);
            ATerm v_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_9(n_14, p_107, q_107, t);
      }
  }
  return(t);
}
static ATerm l_108 (ATerm f_108, ATerm t)
{
  t = SSL_fclose(f_108);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_108 = NULL,j_108 = NULL;
  j_108 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_108 = ATgetArgument(t, 0);
      {
        ATerm w_46 = t;
        int x_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_108);
            LocalPopChoice(x_46);
          }
        else
          {
            t = w_46;
            t = l_108(j_108, t);
          }
      }
    }
  else
    {
      t = l_108(j_108, t);
    }
  return(t);
}
static ATerm l_9 (ATerm j_23, ATerm t)
{
  t = SSL_read_term_from_stream(j_23);
  return(t);
}
static ATerm m_9 (ATerm t_38, ATerm u_38, ATerm t)
{
  ATerm n_108 = NULL;
  t = SSL_fopen(t_38, u_38);
  n_108 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_108);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_108 = NULL;
  t = SSL_stdin_stream();
  o_108 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_108);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_108 = NULL;
  t = SSL_stdout_stream();
  p_108 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_108);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_108 = NULL;
  t = SSL_stderr_stream();
  q_108 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_108);
  return(t);
}
static ATerm x_109 (ATerm w_108, ATerm t)
{
  ATerm x_108 = NULL;
  t = SSL_explode_term(w_108);
  if(match_cons(t, sym__2))
    {
      ATerm y_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_47 = ATgetArgument(t, 1);
        if(((ATgetType(b_47) == AT_LIST) && !(ATisEmpty(b_47))))
          {
            x_108 = ATgetFirst((ATermList) b_47);
            {
              ATerm c_47 = (ATerm) ATgetNext((ATermList) b_47);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_108;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_108;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_108;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_108;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_109 (ATerm a_109, ATerm b_109, ATerm c_109, ATerm t)
{
  ATerm d_109 = NULL,e_109 = NULL,f_109 = NULL,i_109 = NULL,t_24 = NULL;
  t = SSLgetAnnotations(c_109);
  f_109 = t;
  t = a_109;
  if(match_cons(t, sym_Path_1))
    {
      i_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_109, b_109);
  t_24 = t;
  t = SSLsetAnnotations(t_24, f_109);
  if(match_cons(t, sym__2))
    {
      d_109 = ATgetArgument(t, 0);
      e_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(d_109, e_109, t);
  return(t);
}
static ATerm z_109 (ATerm k_109, ATerm l_109, ATerm m_109, ATerm t)
{
  ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL,s_109 = NULL,u_24 = NULL;
  t = SSLgetAnnotations(m_109);
  p_109 = t;
  t = SSL_is_string(k_109);
  s_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_109, l_109);
  u_24 = t;
  t = SSLsetAnnotations(u_24, p_109);
  if(match_cons(t, sym__2))
    {
      n_109 = ATgetArgument(t, 0);
      o_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(n_109, o_109, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
  u_109 = t;
  if(match_cons(t, sym__2))
    {
      v_109 = ATgetArgument(t, 0);
      w_109 = ATgetArgument(t, 1);
      {
        ATerm d_47 = t;
        int f_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_109(u_109, t);
            LocalPopChoice(f_47);
          }
        else
          {
            t = d_47;
            {
              ATerm g_47 = t;
              int h_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_109(v_109, w_109, u_109, t);
                  LocalPopChoice(h_47);
                }
              else
                {
                  t = g_47;
                  t = z_109(v_109, w_109, u_109, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_109(u_109, t);
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_i_47;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL;
  ATerm j_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_110 = NULL;
      d_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_110, term_l_47);
      t = n_9(t);
      LocalPopChoice(k_47);
    }
  else
    {
      t = j_47;
      t = debug_1_0(o_14, t);
      _fail(t);
    }
  b_110 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_9(c_110, t);
  a_110 = t;
  t = b_110;
  t = fclose_0_0(t);
  t = a_110;
  return(t);
}
ATerm input_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm m_47 = t;
  int n_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_47;
      t = get_config_0_0(t);
      LocalPopChoice(n_47);
    }
  else
    {
      t = m_47;
      t = term_p_47;
    }
  t = ReadFromFile_0_0(t);
  t = z_118(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_110 = NULL,g_110 = NULL,h_110 = NULL,i_110 = NULL,j_110 = NULL;
  f_110 = t;
  t = term_q_47;
  t = whoami_0_0(t);
  g_110 = t;
  t = term_r_31;
  i_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_47), g_110), term_r_47);
  j_110 = t;
  t = SSL_printnl(i_110, j_110);
  t = term_t_31;
  h_110 = t;
  t = SSL_exit(h_110);
  t = f_110;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm l_110 = NULL;
  l_110 = t;
  if(match_string(t, "-k"))
    {
      t = l_110;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_110;
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm m_110 = NULL,n_110 = NULL,o_110 = NULL;
  m_110 = t;
  t = SSL_string_to_int(m_110);
  n_110 = t;
  t = term_t_47;
  o_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_47, n_110);
  t = v_9(o_110, n_110, t);
  t = m_110;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_v_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_14, q_14, r_14, t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm q_110 = NULL;
  q_110 = t;
  if(match_string(t, "-S"))
    {
      t = q_110;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_110;
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL;
  t = term_w_47;
  r_110 = t;
  t = term_y_47;
  s_110 = t;
  t = term_z_47;
  t = v_9(r_110, s_110, t);
  t = term_a_48;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm t_110 = NULL,u_110 = NULL,v_110 = NULL;
  t_110 = t;
  t = SSL_string_to_int(t_110);
  u_110 = t;
  t = term_w_47;
  v_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_47, u_110);
  t = v_9(v_110, u_110, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_110);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_e_48;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm w_110 = NULL,x_110 = NULL;
  t = term_g_48;
  w_110 = t;
  t = term_q_47;
  x_110 = t;
  t = term_h_48;
  t = v_9(w_110, x_110, t);
  t = term_l_48;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_p_48;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_48 = t;
  int r_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_14, t_14, u_14, t);
      LocalPopChoice(r_48);
    }
  else
    {
      t = q_48;
      {
        ATerm s_48 = t;
        int t_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_14, w_14, x_14, t);
            LocalPopChoice(t_48);
          }
        else
          {
            t = s_48;
            t = Option_3_0(y_14, b_15, g_15, t);
          }
      }
    }
  return(t);
}
static ATerm v_9 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm y_110 = NULL;
  t = term_u_48;
  y_110 = t;
  t = SSL_table_put(y_110, j_48, k_48);
  t = (ATerm) ATmakeAppl(sym__3, term_u_48, j_48, k_48);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_111 = NULL,c_111 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_111 = NULL,e_111 = NULL,f_111 = NULL;
      t = term_q_47;
      t = e_0(t);
      d_111 = t;
      t = term_v_48;
      e_111 = t;
      t = term_w_48;
      f_111 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_48, term_w_48, d_111);
      t = t_9(e_111, f_111, d_111, t);
      _fail(t);
    }
  else
    {
      ATerm i_111 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_111 = ATgetFirst((ATermList) t);
          c_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_111;
      t = c_0(t);
      t = term_q_47;
      t = d_0(t);
      i_111 = t;
      t = (ATerm) ATinsert(CheckATermList(c_111), i_111);
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm k_111 = NULL;
  k_111 = t;
  if(match_string(t, "-o"))
    {
      t = k_111;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_111;
    }
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL;
  l_111 = t;
  t = term_f_46;
  m_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_46, l_111);
  t = v_9(m_111, l_111, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_111);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = term_x_48;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_15, o_15, p_15, t);
  return(t);
}
static ATerm t_9 (ATerm j_53, ATerm k_53, ATerm i_53, ATerm t)
{
  ATerm o_111 = NULL,p_111 = NULL,q_111 = NULL;
  o_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
  {
    ATerm z_48 = t;
    int a_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_49 = ATgetArgument(t, 0);
            ATerm d_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
        t = s_9(j_53, k_53, t);
        LocalPopChoice(a_49);
      }
    else
      {
        t = z_48;
        t = (ATerm) ATempty;
      }
  }
  p_111 = t;
  t = (ATerm) ATinsert(CheckATermList(p_111), i_53);
  q_111 = t;
  t = SSL_table_put(j_53, k_53, q_111);
  t = o_111;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL;
      t = term_q_47;
      t = n_0(t);
      g_112 = t;
      t = term_v_48;
      h_112 = t;
      t = term_w_48;
      i_112 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_48, term_w_48, g_112);
      t = t_9(h_112, i_112, g_112, t);
      _fail(t);
    }
  else
    {
      ATerm m_112 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_112 = ATgetFirst((ATermList) t);
          d_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_112;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_112 = ATgetFirst((ATermList) t);
          f_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_112;
      t = k_0(t);
      t = e_112;
      t = l_0(t);
      m_112 = t;
      t = (ATerm) ATinsert(CheckATermList(f_112), m_112);
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm o_112 = NULL;
  o_112 = t;
  if(match_string(t, "-i"))
    {
      t = o_112;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_112;
    }
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm p_112 = NULL,q_112 = NULL;
  p_112 = t;
  t = term_o_47;
  q_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_47, p_112);
  t = v_9(q_112, p_112, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_112);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_e_49;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_15, r_15, s_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_47;
  t = whoami_0_0(t);
  r_112 = t;
  t = term_r_31;
  t_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_49), r_112);
  u_112 = t;
  t = SSL_printnl(t_112, u_112);
  t = term_t_31;
  s_112 = t;
  t = SSL_exit(s_112);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_49;
  t = get_config_0_0(t);
  return(t);
}
static ATerm o_9 (ATerm m_41, ATerm n_41, ATerm t)
{
  ATerm i_49 = t;
  int j_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_41, n_41);
      LocalPopChoice(j_49);
    }
  else
    {
      t = i_49;
      t = SSL_addr(m_41, n_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL;
  w_112 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_112;
      t = i_107(t);
    }
  else
    {
      ATerm b_113 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_112 = ATgetFirst((ATermList) t);
          y_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_112;
      t = foldr_2_0(i_107, j_107, t);
      b_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_112, b_113);
      t = j_107(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  if(match_cons(t, sym__2))
    {
      z_46 = ATgetArgument(t, 0);
      a_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(z_46, a_47, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_113 = NULL,r_46 = NULL,s_46 = NULL;
  t = times_0_0(t);
  s_46 = t;
  t = SSL_explode_term(s_46);
  if(match_cons(t, sym__2))
    {
      ATerm k_49 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_46;
  t = foldr_2_0(t_15, u_15, t);
  e_113 = t;
  t = SSL_TicksToSeconds(e_113);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL;
  v_113 = t;
  if(match_cons(t, sym__2))
    {
      w_113 = ATgetArgument(t, 0);
      x_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_113;
        if((w_113 != t))
          {
            _fail(t);
          }
        t = v_113;
        LocalPopChoice(m_49);
      }
    else
      {
        t = l_49;
        t = (ATerm) ATmakeAppl(sym__2, w_113, x_113);
        {
          ATerm n_49 = t;
          int o_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_113, x_113);
              LocalPopChoice(o_49);
            }
          else
            {
              t = n_49;
              t = SSL_gtr(w_113, x_113);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_113, x_113);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_115 (ATerm), ATerm t)
{
  ATerm b_114 = NULL;
  b_114 = t;
  {
    ATerm p_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_114 = NULL;
        t = term_w_47;
        t = get_config_0_0(t);
        d_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_114, term_t_31);
        t = geq_0_0(t);
        t = b_114;
        t = z_115(t);
        LocalPopChoice(r_49);
      }
    else
      {
        t = p_49;
        t = b_114;
      }
  }
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm f_114 = NULL,g_114 = NULL,i_114 = NULL,j_114 = NULL;
  t = run_time_0_0(t);
  f_114 = t;
  t = term_q_47;
  t = whoami_0_0(t);
  g_114 = t;
  t = term_r_31;
  i_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_49), f_114), term_s_49), g_114);
  j_114 = t;
  t = SSL_printnl(i_114, j_114);
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_49), f_114), term_s_49), g_114));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_114 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_47;
  k_114 = t;
  t = SSL_exit(k_114);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm s_114 = NULL,t_114 = NULL;
  t_114 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_114;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_114 = ATgetArgument(t, 0);
          {
            ATerm i_48 = NULL,x_24 = NULL;
            t = SSLgetAnnotations(t_114);
            i_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_114);
            x_24 = t;
            t = SSLsetAnnotations(x_24, i_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_114;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_118 (ATerm), ATerm t)
{
  ATerm u_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_49;
      t = get_config_0_0(t);
      LocalPopChoice(w_49);
    }
  else
    {
      t = u_49;
      t = fetch_1_0(w_15, t);
    }
  t = p_118(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_114 = NULL,x_114 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_114 = ATgetFirst((ATermList) t);
      x_114 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_115 = NULL,c_115 = NULL;
        static ATerm b_16 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_115)), not_null(c_115));
          return(t);
        }
        t = x_114;
        t = i_0(t);
        if(((b_115 != NULL) && (b_115 != t)))
          _fail(t);
        else
          b_115 = t;
        t = w_114;
        t = g_0(t);
        if(((c_115 != NULL) && (c_115 != t)))
          _fail(t);
        else
          c_115 = t;
        t = x_114;
        t = reverse_acc_2_0(g_0, b_16, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_47;
      t = i_0(t);
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm g_115 = NULL,h_115 = NULL,i_115 = NULL,z_24 = NULL;
  i_115 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_115);
  g_115 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_115);
  z_24 = t;
  t = SSLsetAnnotations(z_24, g_115);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm k_115 = NULL;
  k_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_115), term_y_49);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL;
  ATerm z_49 = t;
  int b_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_49;
      t = get_config_0_0(t);
      LocalPopChoice(b_50);
    }
  else
    {
      t = z_49;
      t = fetch_1_0(i_16, t);
    }
  t = term_c_50;
  t = echo_0_0(t);
  t = term_v_48;
  e_115 = t;
  t = term_w_48;
  f_115 = t;
  t = term_d_50;
  t = s_9(e_115, f_115, t);
  t = reverse_acc_2_0(_id, j_16, t);
  t = map_1_0(k_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  static ATerm i_116 (ATerm t)
  {
    ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL;
    f_116 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_116 = ATgetFirst((ATermList) t);
        h_116 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_50 = t;
      int g_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_48 = NULL,h_49 = NULL,b_25 = NULL;
          t = SSLgetAnnotations(f_116);
          y_48 = t;
          t = g_116;
          t = p_101(t);
          h_49 = t;
          t = (ATerm) ATinsert(CheckATermList(h_116), h_49);
          b_25 = t;
          t = SSLsetAnnotations(b_25, y_48);
          LocalPopChoice(g_50);
        }
      else
        {
          t = e_50;
          {
            ATerm a_50 = NULL,f_50 = NULL,c_25 = NULL;
            t = SSLgetAnnotations(f_116);
            a_50 = t;
            t = h_116;
            t = i_116(t);
            f_50 = t;
            t = (ATerm) ATinsert(CheckATermList(f_50), g_116);
            c_25 = t;
            t = SSLsetAnnotations(c_25, a_50);
          }
        }
    }
    return(t);
  }
  t = i_116(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_116 = NULL,n_116 = NULL,o_116 = NULL;
  m_116 = t;
  {
    ATerm h_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_116;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_50 = ATgetFirst((ATermList) t);
                ATerm k_50 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_116;
          }
        LocalPopChoice(i_50);
      }
    else
      {
        t = h_50;
        t = (ATerm) ATinsert(ATempty, m_116);
      }
  }
  n_116 = t;
  t = term_g_46;
  o_116 = t;
  t = SSL_printnl(o_116, n_116);
  t = m_116;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_49;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_9 (ATerm l_37, ATerm m_37, ATerm t)
{
  t = SSL_strcat(l_37, m_37);
  return(t);
}
ATerm debug_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL;
  s_116 = t;
  t = u_100(t);
  t_116 = t;
  t = term_r_31;
  u_116 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_116), t_116);
  v_116 = t;
  t = SSL_printnl(u_116, v_116);
  t = s_116;
  return(t);
}
ATerm map_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  static ATerm k_117 (ATerm t)
  {
    ATerm h_117 = NULL,i_117 = NULL,j_117 = NULL;
    h_117 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_117;
      }
    else
      {
        ATerm n_50 = NULL,q_50 = NULL,s_50 = NULL,g_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_117 = ATgetFirst((ATermList) t);
            j_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_117);
        n_50 = t;
        t = i_117;
        t = f_101(t);
        q_50 = t;
        t = j_117;
        t = k_117(t);
        s_50 = t;
        t = (ATerm) ATinsert(CheckATermList(s_50), q_50);
        g_25 = t;
        t = SSLsetAnnotations(g_25, n_50);
      }
    return(t);
  }
  t = k_117(t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm l_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_50);
    }
  else
    {
      t = l_50;
    }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_o_50;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_50 = t;
  int t_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_117 = NULL;
      s_117 = t;
      t = SSL_is_string(s_117);
      LocalPopChoice(t_50);
    }
  else
    {
      t = p_50;
      {
        ATerm u_50 = t;
        int v_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_16, t);
            LocalPopChoice(v_50);
          }
        else
          {
            t = u_50;
            {
              ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL;
              y_117 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_117 = ATgetArgument(t, 0);
                  t = z_117;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_117 = ATgetArgument(t, 0);
                      t = z_117;
                      {
                        ATerm c_51 = t;
                        int d_51 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(d_51);
                          }
                        else
                          {
                            t = c_51;
                            t = debug_1_0(m_16, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_118 = NULL,f_118 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_117 = ATgetArgument(t, 0);
                          a_118 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_117;
                      t = eval_config_0_0(t);
                      e_118 = t;
                      t = a_118;
                      t = eval_config_0_0(t);
                      f_118 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_118, f_118);
                      t = r_9(e_118, f_118, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm a_55, ATerm b_55, ATerm t)
{
  t = SSL_table_get(a_55, b_55);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL;
  j_118 = t;
  t = term_u_48;
  k_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_48, j_118);
  t = s_9(k_118, j_118, t);
  {
    ATerm i_51 = t;
    int j_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_118 = NULL,m_118 = NULL;
        t = eval_config_0_0(t);
        l_118 = t;
        t = term_u_48;
        m_118 = t;
        t = SSL_table_put(m_118, j_118, l_118);
        t = l_118;
        LocalPopChoice(j_51);
      }
    else
      {
        t = i_51;
      }
  }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm q_118 = NULL,v_118 = NULL;
  t = term_k_51;
  q_118 = t;
  t = term_q_47;
  v_118 = t;
  t = term_l_51;
  t = v_9(q_118, v_118, t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_o_51;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm w_118 = NULL,x_118 = NULL,a_119 = NULL,b_119 = NULL;
  t = term_k_51;
  a_119 = t;
  t = term_q_47;
  b_119 = t;
  t = term_l_51;
  t = v_9(a_119, b_119, t);
  t = term_s_51;
  w_118 = t;
  t = term_q_47;
  x_118 = t;
  t = term_t_51;
  t = v_9(w_118, x_118, t);
  t = term_u_51;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_v_51;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_16, o_16, p_16, t);
      LocalPopChoice(y_51);
    }
  else
    {
      t = x_51;
      t = Option_3_0(q_16, r_16, s_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm t)
{
  ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL,k_25 = NULL;
  h_119 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_119 = ATgetFirst((ATermList) t);
      e_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_119);
  c_119 = t;
  t = d_119;
  t = c_80(t);
  f_119 = t;
  t = e_119;
  t = d_80(t);
  g_119 = t;
  t = (ATerm) ATinsert(CheckATermList(g_119), f_119);
  k_25 = t;
  t = SSLsetAnnotations(k_25, c_119);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_120 (ATerm), ATerm t)
{
  ATerm m_119 = NULL,n_119 = NULL,o_119 = NULL,p_119 = NULL,r_119 = NULL,s_119 = NULL,m_25 = NULL;
  m_119 = t;
  {
    ATerm z_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_52;
        t = s_120(t);
        LocalPopChoice(a_52);
      }
    else
      {
        t = z_51;
      }
  }
  t = m_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_119 = ATgetFirst((ATermList) t);
      p_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_119);
  n_119 = t;
  t = term_g_49;
  s_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_49, o_119);
  t = v_9(s_119, o_119, t);
  t = p_119;
  {
    static ATerm c_120 (ATerm t)
    {
      ATerm c_52 = t;
      int d_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_52 = t;
          int g_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_119 = NULL;
              v_119 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_119;
              LocalPopChoice(g_52);
            }
          else
            {
              t = e_52;
              t = s_120(t);
              t = Cons_2_0(_id, c_120, t);
            }
          LocalPopChoice(d_52);
        }
      else
        {
          t = c_52;
          {
            ATerm y_119 = NULL,z_119 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_119 = ATgetFirst((ATermList) t);
                z_119 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_119), (ATerm) ATmakeAppl(sym_Undefined_1, y_119));
          }
        }
      return(t);
    }
    t = c_120(t);
  }
  r_119 = t;
  t = (ATerm) ATinsert(CheckATermList(r_119), (ATerm) ATmakeAppl(sym_Program_1, o_119));
  m_25 = t;
  t = SSLsetAnnotations(m_25, n_119);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm o_120 = NULL;
  o_120 = t;
  if(match_string(t, "--help"))
    {
      t = o_120;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_120;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_120;
        }
    }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm p_120 = NULL,q_120 = NULL;
  t = term_x_49;
  p_120 = t;
  t = term_q_47;
  q_120 = t;
  t = term_h_52;
  t = v_9(p_120, q_120, t);
  t = term_i_52;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_k_52;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_120 (ATerm), ATerm t)
{
  ATerm h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL;
  j_120 = t;
  t = term_v_48;
  l_120 = t;
  t = term_w_48;
  m_120 = t;
  t = (ATerm) ATempty;
  n_120 = t;
  t = SSL_table_put(l_120, m_120, n_120);
  t = j_120;
  {
    static ATerm v_16 (ATerm t)
    {
      ATerm l_52 = t;
      int n_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_120(t);
          LocalPopChoice(n_52);
        }
      else
        {
          t = l_52;
          {
            ATerm o_52 = t;
            int p_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_16, y_16, z_16, t);
                LocalPopChoice(p_52);
              }
            else
              {
                t = o_52;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_16, t);
  }
  {
    ATerm q_52 = t;
    int r_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_120 = NULL;
        z_120 = t;
        {
          ATerm s_52 = t;
          int t_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_52 = NULL;
              t = z_120;
              {
                ATerm u_52 = t;
                int v_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_49;
                    t = get_config_0_0(t);
                    LocalPopChoice(v_52);
                  }
                else
                  {
                    t = u_52;
                    t = fetch_1_0(a_17, t);
                  }
              }
              t = z_120;
              t = default_system_usage_0_0(t);
              t = term_y_47;
              f_52 = t;
              t = SSL_exit(f_52);
              LocalPopChoice(t_52);
            }
          else
            {
              t = s_52;
              {
                ATerm j_52 = NULL;
                t = term_k_51;
                t = get_config_0_0(t);
                t = z_120;
                t = default_system_about_0_0(t);
                t = term_y_47;
                j_52 = t;
                t = SSL_exit(j_52);
              }
            }
        }
        LocalPopChoice(r_52);
      }
    else
      {
        t = q_52;
        {
          ATerm w_52 = t;
          int x_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL;
              static ATerm b_17 (ATerm t)
              {
                ATerm d_121 = NULL,e_121 = NULL,f_121 = NULL,s_25 = NULL;
                f_121 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_121 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_121);
                d_121 = t;
                t = e_121;
                if(((h_120 != NULL) && (h_120 != t)))
                  _fail(t);
                else
                  h_120 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_121);
                s_25 = t;
                t = SSLsetAnnotations(s_25, d_121);
                return(t);
              }
              t = fetch_1_0(b_17, t);
              t = term_r_31;
              b_121 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_120)), term_y_52);
              c_121 = t;
              t = SSL_printnl(b_121, c_121);
              t = (ATerm) ATmakeAppl(sym__2, term_r_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_120)), term_y_52));
              t = default_system_usage_0_0(t);
              t = term_t_31;
              a_121 = t;
              t = SSL_exit(a_121);
              LocalPopChoice(x_52);
            }
          else
            {
              t = w_52;
            }
        }
      }
  }
  i_120 = t;
  t = term_v_48;
  k_120 = t;
  t = SSL_table_destroy(k_120);
  t = i_120;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm t)
{
  ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL,n_121 = NULL;
  t = parse_options_1_0(r_118, t);
  k_121 = t;
  t = term_z_52;
  n_121 = t;
  t = SSL_table_create(n_121);
  t = term_z_52;
  l_121 = t;
  t = term_a_53;
  m_121 = t;
  t = SSL_table_put(l_121, m_121, k_121);
  t = k_121;
  t = t_118(t);
  {
    ATerm b_53 = t;
    int d_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_118, t);
        LocalPopChoice(d_53);
      }
    else
      {
        t = b_53;
        {
          ATerm e_53 = t;
          int f_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_118(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_53);
            }
          else
            {
              t = e_53;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm g_53 = t;
  int h_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(h_53);
    }
  else
    {
      t = g_53;
      {
        ATerm l_53 = t;
        int n_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(n_53);
          }
        else
          {
            t = l_53;
            {
              ATerm s_53 = t;
              int t_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_17, m_17, n_17, t);
                  LocalPopChoice(t_53);
                }
              else
                {
                  t = s_53;
                  {
                    ATerm w_53 = t;
                    int x_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(x_53);
                      }
                    else
                      {
                        t = w_53;
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
static ATerm f_17 (ATerm t)
{
  t = input_1_0(o_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm p_121 = NULL,q_121 = NULL;
  t = term_j_46;
  p_121 = t;
  t = term_q_47;
  q_121 = t;
  t = term_z_53;
  t = v_9(p_121, q_121, t);
  t = term_a_54;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_b_54;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_17, default_usage_0_0, _id, f_17, t);
  return(t);
}

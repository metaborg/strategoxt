#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Constructors_1;
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
Symbol sym_CallNoArgs_1;
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
Symbol sym_Rec_2;
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
Symbol sym_Mod_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Anno_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
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
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
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
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
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
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
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
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
}
ATerm term_t_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_u_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_i_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_h_44;
ATerm term_f_44;
ATerm term_r_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_g_43;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_g_42;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_r_40;
ATerm term_k_40;
ATerm term_e_40;
ATerm term_a_40;
ATerm term_n_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_v_37;
ATerm term_r_37;
ATerm term_p_37;
ATerm term_j_37;
ATerm term_h_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_i_25;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_p_23;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_n_19;
ATerm term_o_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Op_2, term_i_20, (ATerm) ATempty);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Call_2, term_i_23, (ATerm) ATempty);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Call_2, term_h_20, (ATerm) ATempty);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_g_30, (ATerm) ATempty);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym__2, term_n_19, term_n_19);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__2, term_e_39, term_f_39);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_i_41, term_n_19);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_19);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym__2, term_t_41, term_b_17);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym__2, term_s_42, term_t_42);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym__2, term_v_44, term_b_17);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym__2, term_y_44, term_b_17);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(sym__2, term_l_44, term_b_17);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_b_17);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm b_121 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_9 (ATerm z_79, ATerm y_79, ATerm t);
static ATerm c_9 (ATerm j_59, ATerm k_59, ATerm l_59, ATerm t);
static ATerm z_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm j_9 (ATerm y_25, ATerm x_25, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm k_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_123 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm n_33 (ATerm q_26, ATerm r_26, ATerm t);
static ATerm u_33 (ATerm f_27, ATerm i_27, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm u_134 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm q_9 (ATerm g_75, ATerm h_75, ATerm i_75, ATerm t);
static ATerm v_47 (ATerm m_47, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm d_104 (ATerm), ATerm t);
static ATerm u_9 (ATerm t_70, ATerm u_70, ATerm v_70, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm z_102 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm b_107 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm v_9 (ATerm c_41, ATerm d_41, ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm copy_1_0 (ATerm n_120 (ATerm), ATerm t);
static ATerm w_9 (ATerm m_58, ATerm n_58, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm v_67 (ATerm z_64, ATerm a_65, ATerm b_65, ATerm c_65, ATerm t);
static ATerm w_67 (ATerm o_66, ATerm p_66, ATerm q_66, ATerm r_66, ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm t_115 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm r_104 (ATerm), ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm u_69 (ATerm k_68, ATerm l_68, ATerm m_68, ATerm n_68, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm x_115 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_73 (ATerm x_72, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm c_10 (ATerm e_117 (ATerm), ATerm z_46, ATerm y_46, ATerm t);
ATerm genzip_4_0 (ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm h_10 (ATerm e_706, ATerm j_706, ATerm a_69, ATerm t);
static ATerm p_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm r_82 (ATerm j_81, ATerm k_81, ATerm l_81, ATerm t);
static ATerm b_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm j_10 (ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm b_70, ATerm y_69, ATerm g_70, ATerm c_70, ATerm z_69, ATerm a_70, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm a_35 (ATerm m_33, ATerm s_33, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm m_10 (ATerm s_114 (ATerm), ATerm k_42, ATerm i_42, ATerm t);
static ATerm n_10 (ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm f_47, ATerm e_47, ATerm t);
static ATerm o_10 (ATerm j_117 (ATerm), ATerm b_47, ATerm a_47, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm q_10 (ATerm z_43, ATerm a_44, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t);
static ATerm t_10 (ATerm o_33, ATerm p_33, ATerm t);
static ATerm u_10 (ATerm j_32, ATerm k_32, ATerm t);
static ATerm w_10 (ATerm j_110 (ATerm), ATerm o_245, ATerm n_32, ATerm t);
static ATerm v_10 (ATerm f_32, ATerm g_32, ATerm t);
static ATerm v_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm i_129 (ATerm), ATerm t);
static ATerm q_93 (ATerm k_93, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_10 (ATerm l_32, ATerm t);
static ATerm y_10 (ATerm q_33, ATerm r_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_95 (ATerm a_94, ATerm t);
static ATerm c_95 (ATerm e_94, ATerm f_94, ATerm g_94, ATerm t);
static ATerm d_95 (ATerm o_94, ATerm p_94, ATerm q_94, ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_115 (ATerm), ATerm t);
static ATerm s_10 (ATerm e_56, ATerm f_56, ATerm t);
ATerm debug_1_0 (ATerm h_110 (ATerm), ATerm t);
static ATerm b_14 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm a_112 (ATerm), ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_11 (ATerm q_37, ATerm s_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_11 (ATerm o_43, ATerm p_43, ATerm n_43, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_11 (ATerm w_40, ATerm x_40, ATerm t);
ATerm foldr_2_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_111 (ATerm), ATerm t);
static ATerm k_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_15 (ATerm t);
ATerm need_help_1_0 (ATerm g_130 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_115 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_11 (ATerm f_45, ATerm g_45, ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm j_132 (ATerm), ATerm t);
static ATerm e_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
ATerm parse_options_1_0 (ATerm i_132 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm t);
static ATerm p_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm w_16 (ATerm t);
ATerm iowrap_3_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,j_0 = NULL;
  a_0 = t;
  t = term_b_17;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_c_17;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_17), b_0), term_d_17);
  j_0 = t;
  t = SSL_printnl(e_0, j_0);
  t = term_f_17;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      t_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL,z_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty);
        x_1 = t;
        t = term_i_17;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty));
        t = q_10(z_1, x_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm j_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_17) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, u_1);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        {
          ATerm x_3 = NULL,y_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty);
          x_3 = t;
          t = term_i_17;
          y_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty));
          t = q_10(y_3, x_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm k_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("e_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, u_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm b_121 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  m_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_2 = ATgetFirst((ATermList) t);
          o_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 = NULL,q_4 = NULL,y_4 = NULL,f_0 = NULL;
            t = SSLgetAnnotations(m_2);
            d_4 = t;
            t = n_2;
            t = b_121(t);
            q_4 = t;
            t = o_2;
            t = filter_1_0(b_121, t);
            y_4 = t;
            t = (ATerm) ATinsert(CheckATermList(y_4), q_4);
            f_0 = t;
            t = SSLsetAnnotations(f_0, d_4);
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            t = o_2;
            t = filter_1_0(b_121, t);
          }
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_i_17;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  s_2 = t;
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            t_2 = ATgetArgument(t, 0);
            {
              ATerm p_17 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_17);
        {
          ATerm x_2 = NULL,y_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty);
          x_2 = t;
          t = term_r_17;
          y_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty), term_r_17);
          t = m_10(h_0, x_2, y_2, t);
          t = s_2;
        }
      }
    else
      {
        t = n_17;
        {
          ATerm b_3 = NULL,d_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              t_2 = ATgetArgument(t, 0);
              {
                ATerm s_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty);
          b_3 = t;
          t = term_v_17;
          d_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty), term_v_17);
          t = m_10(v_0, b_3, d_3, t);
          t = s_2;
        }
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
    }
  return(t);
}
static ATerm a_9 (ATerm z_79, ATerm y_79, ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,o_0 = NULL,m_0 = NULL,l_0 = NULL;
  t = y_79;
  t = topdown_1_0(x_0, t);
  t = z_79;
  if(match_cons(t, sym_Signature_1))
    {
      h_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_79);
  g_3 = t;
  t = h_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_3 = ATgetFirst((ATermList) t);
      l_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  j_3 = t;
  t = k_3;
  if(match_cons(t, sym_Constructors_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  n_3 = t;
  t = o_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, p_3);
  l_0 = t;
  t = SSLsetAnnotations(l_0, n_3);
  q_3 = t;
  t = l_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_3), q_3);
  m_0 = t;
  t = SSLsetAnnotations(m_0, j_3);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, m_3);
  o_0 = t;
  t = SSLsetAnnotations(o_0, g_3);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, y_79)), i_3));
  return(t);
}
static ATerm c_9 (ATerm j_59, ATerm k_59, ATerm l_59, ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  t = term_c_17;
  u_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_18), l_59), term_b_18), k_59), term_a_18), j_59), term_z_17);
  v_3 = t;
  t = SSL_printnl(u_3, v_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_18), l_59), term_b_18), k_59), term_a_18), j_59), term_z_17);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_18 = ATgetArgument(t, 0);
      if(((ATgetType(d_18) != AT_INT) || (ATgetInt((ATermInt) d_18) != 0)))
        _fail(t);
      {
        ATerm e_18 = ATgetArgument(t, 1);
        if(((ATgetType(e_18) != AT_INT) || (ATgetInt((ATermInt) e_18) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  r_4 = t;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = v_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL,a_6 = NULL;
        t = s_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_18 = ATgetFirst((ATermList) t);
            ATerm j_18 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(j_18) == AT_LIST) && !(ATisEmpty(j_18))))
              {
                ATerm k_18 = ATgetFirst((ATermList) j_18);
                ATerm l_18 = (ATerm) ATgetNext((ATermList) j_18);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm n_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_18;
            }
        }
        t = term_c_17;
        z_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_o_18);
        a_6 = t;
        t = SSL_printnl(z_5, a_6);
        t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_o_18);
        t = giving_up_0_0(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm h_6 = NULL,i_6 = NULL;
          t = s_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_18 = ATgetFirst((ATermList) t);
              if(match_cons(p_18, sym__2))
                {
                  h_6 = ATgetArgument(p_18, 0);
                  i_6 = ATgetArgument(p_18, 1);
                }
              else
                _fail(t);
              {
                ATerm q_18 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(q_18) != AT_LIST) || !(ATisEmpty(q_18))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATmakeAppl(sym__2, h_6, i_6));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATmakeAppl(sym__2, h_6, i_6));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,f_8 = NULL;
  c_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      {
        ATerm q_6 = NULL,u_6 = NULL,v_6 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(c_8);
        q_6 = t;
        t = d_8;
        t = e_102(t);
        u_6 = t;
        t = f_8;
        t = e_102(t);
        v_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_6, v_6);
        i_1 = t;
        t = SSLsetAnnotations(i_1, q_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          d_8 = ATgetArgument(t, 0);
          f_8 = ATgetArgument(t, 1);
          a_8 = ATgetArgument(t, 2);
          {
            ATerm e_8 = NULL,n_8 = NULL,p_8 = NULL,u_8 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(c_8);
            e_8 = t;
            t = d_8;
            t = g_102(t);
            n_8 = t;
            t = f_8;
            t = g_102(t);
            p_8 = t;
            t = a_8;
            t = e_102(t);
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_8, p_8, u_8);
            j_1 = t;
            t = SSLsetAnnotations(j_1, e_8);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              d_8 = ATgetArgument(t, 0);
              f_8 = ATgetArgument(t, 1);
              a_8 = ATgetArgument(t, 2);
              b_8 = ATgetArgument(t, 3);
              {
                ATerm l_9 = NULL,s_9 = NULL,t_9 = NULL,x_9 = NULL,y_9 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(c_8);
                l_9 = t;
                t = d_8;
                t = g_102(t);
                s_9 = t;
                t = f_8;
                t = g_102(t);
                t_9 = t;
                t = a_8;
                t = g_102(t);
                x_9 = t;
                t = b_8;
                t = e_102(t);
                y_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_9, t_9, x_9, y_9);
                k_1 = t;
                t = SSLsetAnnotations(k_1, l_9);
              }
            }
          else
            {
              ATerm p_10 = NULL,h_11 = NULL,i_11 = NULL,l_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  d_8 = ATgetArgument(t, 0);
                  f_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_8);
              p_10 = t;
              t = d_8;
              t = g_102(t);
              h_11 = t;
              t = f_8;
              t = e_102(t);
              i_11 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, h_11, i_11);
              l_1 = t;
              t = SSLsetAnnotations(l_1, p_10);
            }
        }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm q_8 = NULL;
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_8 = ATgetArgument(t, 0);
          {
            ATerm t_18 = ATgetArgument(t, 1);
          }
          {
            ATerm u_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_18);
      t = q_8;
    }
  else
    {
      t = r_18;
      if(match_cons(t, sym_SDefT_4))
        {
          q_8 = ATgetArgument(t, 0);
          {
            ATerm v_18 = ATgetArgument(t, 1);
          }
          {
            ATerm w_18 = ATgetArgument(t, 2);
          }
          {
            ATerm x_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_8;
    }
  return(t);
}
static ATerm j_9 (ATerm y_25, ATerm x_25, ATerm t)
{
  t = y_25;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(m_1, m_12, n_12, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      if((o_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(p_1, h_13, i_13, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm j_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      if((j_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      if((j_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm k_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_123 (ATerm), ATerm t)
{
  static ATerm k_12 (ATerm t)
  {
    ATerm k_11 = NULL,n_11 = NULL,o_11 = NULL;
    o_11 = t;
    {
      ATerm z_18 = t;
      int b_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_123(t);
          LocalPopChoice(b_19);
        }
      else
        {
          t = z_18;
          t = (ATerm) ATempty;
        }
    }
    k_11 = t;
    t = o_11;
    {
      ATerm c_19 = t;
      int f_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_11 = NULL,a_12 = NULL,b_12 = NULL;
          t = j_123(t);
          p_11 = t;
          t = o_11;
          {
            static ATerm c_1 (ATerm t)
            {
              ATerm t_11 = NULL;
              t = k_12(t);
              t_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_11, p_11);
              t = c_10(l_123, t_11, p_11, t);
              return(t);
            }
            t = k_123(c_1, k_12, d_1, t);
          }
          b_12 = t;
          t = SSL_explode_term(b_12);
          if(match_cons(t, sym__2))
            {
              ATerm g_19 = ATgetArgument(t, 0);
              a_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_12;
          t = foldr_3_0(f_1, h_1, _id, t);
          LocalPopChoice(f_19);
        }
      else
        {
          t = c_19;
          {
            ATerm q_12 = NULL;
            t = SSL_explode_term(o_11);
            if(match_cons(t, sym__2))
              {
                ATerm i_19 = ATgetArgument(t, 0);
                q_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_12;
            t = foldr_3_0(n_1, o_1, k_12, t);
          }
        }
    }
    n_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_11, n_11);
    t = o_10(q_1, k_11, n_11, t);
    return(t);
  }
  t = k_12(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(match_cons(j_19, sym_SVar_1))
        {
          t_12 = ATgetArgument(j_19, 0);
        }
      else
        _fail(t);
      u_12 = ATgetArgument(t, 1);
      v_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_12;
  t = foldr_3_0(b_2, c_2, d_2, t);
  w_12 = t;
  t = v_12;
  t = foldr_3_0(k_2, l_2, p_2, t);
  x_12 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_12, (ATerm) ATmakeAppl(sym__2, w_12, x_12)));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,k_13 = NULL,l_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
      t = e_13;
      t = j_9(f_13, g_13, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_13 = ATgetArgument(t, 0);
          g_13 = ATgetArgument(t, 1);
          k_13 = ATgetArgument(t, 2);
          t = g_13;
          t = map_1_0(q_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              f_13 = ATgetArgument(t, 0);
              g_13 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, f_13);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  f_13 = ATgetArgument(t, 0);
                  g_13 = ATgetArgument(t, 1);
                  k_13 = ATgetArgument(t, 2);
                  l_13 = ATgetArgument(t, 3);
                  t = g_13;
                  t = map_1_0(r_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_13 = ATgetArgument(t, 0);
                      g_13 = ATgetArgument(t, 1);
                      k_13 = ATgetArgument(t, 2);
                      l_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_13;
                  t = map_1_0(u_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if(match_cons(l_19, sym__2))
        {
          z_15 = ATgetArgument(l_19, 0);
          {
            ATerm m_19 = ATgetArgument(l_19, 1);
          }
        }
      else
        _fail(t);
      if((z_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(a_13, b_13, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(c_13, d_13, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm c_14 = NULL;
  ATerm o_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_14 = ATgetArgument(t, 0);
          {
            ATerm w_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_19);
      t = c_14;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_14;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm e_15 = NULL;
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_15 = ATgetArgument(t, 0);
          {
            ATerm z_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = e_15;
    }
  else
    {
      t = x_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_15;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_15 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_20);
      t = w_15;
    }
  else
    {
      t = a_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_15;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(r_1, w_1, sboundin_3_0, a_2, t);
  return(t);
}
static ATerm n_33 (ATerm q_26, ATerm r_26, ATerm t)
{
  t = q_26;
  {
    ATerm e_20 = t;
    if((PushChoice() == 0))
      {
        ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,c_27 = NULL,v_1 = NULL;
        c_27 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_26 = ATgetFirst((ATermList) t);
            y_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_27);
        w_26 = t;
        t = y_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_26), x_26);
        v_1 = t;
        t = SSLsetAnnotations(v_1, w_26);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_f_20, q_26);
  return(t);
}
static ATerm u_33 (ATerm f_27, ATerm i_27, ATerm t)
{
  t = f_27;
  {
    ATerm g_20 = t;
    if((PushChoice() == 0))
      {
        ATerm o_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,y_1 = NULL;
        v_27 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_27 = ATgetFirst((ATermList) t);
            u_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_27);
        o_27 = t;
        t = u_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(u_27), t_27);
        y_1 = t;
        t = SSLsetAnnotations(y_1, o_27);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_20, f_27);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm q_28 = NULL,u_28 = NULL,q_15 = NULL;
  q_28 = t;
  t = SSL_explode_term(q_28);
  if(match_cons(t, sym__2))
    {
      ATerm k_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_20 = ATgetArgument(t, 1);
        if(((ATgetType(l_20) == AT_LIST) && !(ATisEmpty(l_20))))
          {
            u_28 = ATgetFirst((ATermList) l_20);
            {
              ATerm n_20 = (ATerm) ATgetNext((ATermList) l_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(q_28);
  if(match_cons(t, sym__2))
    {
      ATerm o_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_20 = ATgetArgument(t, 1);
        if(((ATgetType(p_20) == AT_LIST) && !(ATisEmpty(p_20))))
          {
            ATerm r_20 = ATgetFirst((ATermList) p_20);
            ATerm s_20 = (ATerm) ATgetNext((ATermList) p_20);
            if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
              {
                q_15 = ATgetFirst((ATermList) s_20);
                {
                  ATerm t_20 = (ATerm) ATgetNext((ATermList) s_20);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, q_15), u_28));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm l_29 = NULL,n_29 = NULL;
  if(match_cons(t, sym__2))
    {
      l_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, n_29), l_29));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm p_29 = NULL,w_29 = NULL;
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, w_29), p_29));
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  if(match_cons(t, sym__2))
    {
      q_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_20, (ATerm) ATinsert(ATinsert(ATempty, r_30), q_30));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm t_30 = NULL,z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      t_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_20, (ATerm) ATinsert(ATinsert(ATempty, z_30), t_30));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  if(match_cons(t, sym_Anno_2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      {
        ATerm n_28 = NULL;
        t = h_28;
        t = foldr_2_0(v_2, w_2, t);
        n_28 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, g_28, n_28);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          g_28 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, g_28, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              g_28 = ATgetArgument(t, 0);
              {
                ATerm f_16 = NULL;
                t = g_28;
                {
                  ATerm a_21 = t;
                  int e_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_f_21;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_h_21;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_i_21;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_j_21;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_k_21;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(e_21);
                    }
                  else
                    {
                      t = a_21;
                      {
                        ATerm h_16 = NULL;
                        t = SSL_explode_string(g_28);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm l_21 = ATgetFirst((ATermList) t);
                            if(((ATgetType(l_21) != AT_INT) || (ATgetInt((ATermInt) l_21) != 39)))
                              _fail(t);
                            {
                              ATerm p_21 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(p_21) == AT_LIST) && !(ATisEmpty(p_21))))
                                {
                                  h_16 = ATgetFirst((ATermList) p_21);
                                  {
                                    ATerm q_21 = (ATerm) ATgetNext((ATermList) p_21);
                                    if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
                                      {
                                        ATerm u_21 = ATgetFirst((ATermList) q_21);
                                        if(((ATgetType(u_21) != AT_INT) || (ATgetInt((ATermInt) u_21) != 39)))
                                          _fail(t);
                                        {
                                          ATerm v_21 = (ATerm) ATgetNext((ATermList) q_21);
                                          if(((ATgetType(v_21) != AT_LIST) || !(ATisEmpty(v_21))))
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
                        t = h_16;
                      }
                    }
                }
                f_16 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, f_16);
              }
            }
          else
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      g_28 = ATgetArgument(t, 0);
                      {
                        ATerm y_21 = ATgetArgument(t, 1);
                      }
                      e_28 = ATgetArgument(t, 2);
                      w_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_21);
                  t = (ATerm) ATmakeAppl(sym_Con_3, g_28, e_28, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_27), (ATerm) ATempty));
                }
              else
                {
                  t = w_21;
                  {
                    ATerm z_21 = t;
                    int a_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            g_28 = ATgetArgument(t, 0);
                            {
                              ATerm f_22 = ATgetArgument(t, 1);
                            }
                            e_28 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(a_22);
                        t = (ATerm) ATmakeAppl(sym_Con_3, g_28, e_28, term_p_23);
                      }
                    else
                      {
                        t = z_21;
                        if(match_cons(t, sym_Con1_2))
                          {
                            g_28 = ATgetArgument(t, 0);
                            h_28 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, g_28, h_28, term_p_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                g_28 = ATgetArgument(t, 0);
                                h_28 = ATgetArgument(t, 1);
                                {
                                  static ATerm z_2 (ATerm t)
                                  {
                                    t = h_28;
                                    return(t);
                                  }
                                  t = g_28;
                                  t = foldr_2_0(z_2, a_3, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    g_28 = ATgetArgument(t, 0);
                                    t = g_28;
                                    t = foldr_2_0(c_3, e_3, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        g_28 = ATgetArgument(t, 0);
                                        t = g_28;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            x_27 = ATgetFirst((ATermList) t);
                                            c_28 = (ATerm) ATgetNext((ATermList) t);
                                            t = c_28;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm y_23 = t;
                                                int z_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = n_33(g_28, f_28, t);
                                                    LocalPopChoice(z_23);
                                                  }
                                                else
                                                  {
                                                    t = y_23;
                                                    t = x_27;
                                                  }
                                              }
                                            else
                                              {
                                                t = n_33(g_28, f_28, t);
                                              }
                                          }
                                        else
                                          {
                                            t = n_33(g_28, f_28, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            g_28 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, g_28));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                g_28 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, g_28));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    g_28 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, g_28));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        g_28 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, g_28));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            g_28 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_28), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                g_28 = ATgetArgument(t, 0);
                                                                h_28 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_28), h_28);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    g_28 = ATgetArgument(t, 0);
                                                                    h_28 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm f_3 (ATerm t)
                                                                      {
                                                                        t = h_28;
                                                                        return(t);
                                                                      }
                                                                      t = g_28;
                                                                      t = foldr_2_0(f_3, r_3, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        g_28 = ATgetArgument(t, 0);
                                                                        t = g_28;
                                                                        t = foldr_2_0(s_3, t_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            g_28 = ATgetArgument(t, 0);
                                                                            h_28 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_h_20, (ATerm) ATinsert(CheckATermList(h_28), g_28));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                g_28 = ATgetArgument(t, 0);
                                                                                t = g_28;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    x_27 = ATgetFirst((ATermList) t);
                                                                                    c_28 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = c_28;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm e_24 = t;
                                                                                        int f_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = u_33(g_28, f_28, t);
                                                                                            LocalPopChoice(f_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = e_24;
                                                                                            t = x_27;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_33(g_28, f_28, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_33(g_28, f_28, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_i_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        g_28 = ATgetArgument(t, 0);
                                                                                        h_28 = ATgetArgument(t, 1);
                                                                                        t = h_28;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            d_28 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, d_28), g_28));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            g_28 = ATgetArgument(t, 0);
                                                                                            t = g_28;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                g_28 = ATgetArgument(t, 0);
                                                                                                h_28 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, g_28, h_28, term_m_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    g_28 = ATgetArgument(t, 0);
                                                                                                    h_28 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, g_28, h_28, term_m_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        g_28 = ATgetArgument(t, 0);
                                                                                                        h_28 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, g_28, (ATerm)ATempty, h_28);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            g_28 = ATgetArgument(t, 0);
                                                                                                            h_28 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, h_28, g_28);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                g_28 = ATgetArgument(t, 0);
                                                                                                                h_28 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, g_28, h_28, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    g_28 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, g_28, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        g_28 = ATgetArgument(t, 0);
                                                                                                                        h_28 = ATgetArgument(t, 1);
                                                                                                                        e_28 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_28, h_28, (ATerm)ATempty, e_28);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            g_28 = ATgetArgument(t, 0);
                                                                                                                            h_28 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_28, (ATerm)ATempty, (ATerm)ATempty, h_28);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                g_28 = ATgetArgument(t, 0);
                                                                                                                                h_28 = ATgetArgument(t, 1);
                                                                                                                                e_28 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_28, h_28, (ATerm)ATempty, e_28);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    g_28 = ATgetArgument(t, 0);
                                                                                                                                    h_28 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_28, (ATerm)ATempty, (ATerm)ATempty, h_28);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        g_28 = ATgetArgument(t, 0);
                                                                                                                                        h_28 = ATgetArgument(t, 1);
                                                                                                                                        e_28 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, g_28, h_28, (ATerm)ATempty, e_28);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            g_28 = ATgetArgument(t, 0);
                                                                                                                                            h_28 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, g_28, (ATerm)ATempty, (ATerm)ATempty, h_28);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm n_24 = ATgetArgument(t, 0);
                                                                                                                                                h_28 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, h_28);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  x_33 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      y_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
      {
        ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
        t = x_33;
        t = new_0_0(t);
        g_34 = t;
        t = new_0_0(t);
        h_34 = t;
        t = new_0_0(t);
        i_34 = t;
        t = new_0_0(t);
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_34), i_34), h_34), g_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, g_34), (ATerm) ATmakeAppl(sym_Var_1, i_34))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, y_33, (ATerm)ATmakeAppl(sym_Var_1, g_34), (ATerm) ATmakeAppl(sym_Var_1, h_34)), (ATerm) ATmakeAppl(sym_BAM_3, w_33, (ATerm)ATmakeAppl(sym_Var_1, i_34), (ATerm) ATmakeAppl(sym_Var_1, j_34)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_t_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_34)), (ATerm) ATmakeAppl(sym_Var_1, h_34))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_33 = ATgetArgument(t, 0);
          {
            ATerm o_34 = NULL,p_34 = NULL,r_34 = NULL,s_34 = NULL;
            t = x_33;
            t = new_0_0(t);
            r_34 = t;
            t = y_33;
            {
              static ATerm w_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((o_34 != NULL) && (o_34 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_34 = ATgetArgument(t, 0);
                    if(((p_34 != NULL) && (p_34 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_34 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_34);
                return(t);
              }
              t = oncetd_1_0(w_3, t);
            }
            s_34 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_34)), not_null(o_34))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_34)), (ATerm) ATmakeAppl(sym_Build_1, s_34))));
          }
        }
      else
        {
          ATerm u_34 = NULL,v_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              y_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_33;
          t = new_0_0(t);
          x_34 = t;
          t = new_0_0(t);
          y_34 = t;
          t = y_33;
          {
            static ATerm z_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((u_34 != NULL) && (u_34 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_34 = ATgetArgument(t, 0);
                  if(((v_34 != NULL) && (v_34 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    v_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, x_34);
              return(t);
            }
            t = oncetd_1_0(z_3, t);
          }
          z_34 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_34), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_34)), (ATerm) ATmakeAppl(sym_PrimT_3, term_v_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_34))))), (ATerm)ATmakeAppl(sym_Var_1, x_34), (ATerm) ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_34)), not_null(u_34)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm i_35 = NULL,v_35 = NULL;
  i_35 = t;
  if(match_cons(t, sym_Match_1))
    {
      v_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
        t = i_35;
        t = new_0_0(t);
        b_36 = t;
        t = v_35;
        {
          static ATerm a_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((x_35 != NULL) && (x_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_35 = ATgetArgument(t, 0);
                if(((a_36 != NULL) && (a_36 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_36 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, b_36), x_35);
            return(t);
          }
          t = pat_td_1_0(a_4, t);
        }
        c_36 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_36), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_36))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_36))))));
        LocalPopChoice(h_25);
      }
    else
      {
        t = b_25;
        {
          ATerm l_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
              t = i_35;
              t = new_0_0(t);
              k_36 = t;
              t = v_35;
              {
                static ATerm b_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((j_36 != NULL) && (j_36 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_36);
                  return(t);
                }
                t = pat_td_1_0(b_4, t);
              }
              l_36 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_36)), not_null(j_36))));
              LocalPopChoice(m_25);
            }
          else
            {
              t = l_25;
              {
                ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
                t = i_35;
                t = new_0_0(t);
                p_36 = t;
                t = v_35;
                {
                  static ATerm c_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_36 != NULL) && (o_36 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_36 = ATgetArgument(t, 0);
                        if(((n_36 != NULL) && (n_36 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_36);
                    return(t);
                  }
                  t = pat_td_1_0(c_4, t);
                }
                q_36 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_36)), not_null(o_36)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm u_134 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_134(t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = n_25;
      {
        ATerm a_41 = NULL,b_41 = NULL,k_41 = NULL,l_41 = NULL;
        b_41 = t;
        if(match_cons(t, sym_Op_2))
          {
            k_41 = ATgetArgument(t, 0);
            l_41 = ATgetArgument(t, 1);
            {
              ATerm s_16 = NULL,v_16 = NULL,e_2 = NULL;
              t = SSLgetAnnotations(b_41);
              s_16 = t;
              t = l_41;
              {
                static ATerm e_4 (ATerm t)
                {
                  t = pat_td_1_0(u_134, t);
                  return(t);
                }
                t = fetch_1_0(e_4, t);
              }
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, k_41, v_16);
              e_2 = t;
              t = SSLsetAnnotations(e_2, s_16);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                k_41 = ATgetArgument(t, 0);
                l_41 = ATgetArgument(t, 1);
                {
                  ATerm g_26 = t;
                  int h_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_17 = NULL,y_17 = NULL,f_2 = NULL;
                      t = SSLgetAnnotations(b_41);
                      t_17 = t;
                      t = l_41;
                      t = pat_td_1_0(u_134, t);
                      y_17 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, k_41, y_17);
                      f_2 = t;
                      t = SSLsetAnnotations(f_2, t_17);
                      LocalPopChoice(h_26);
                    }
                  else
                    {
                      t = g_26;
                      {
                        ATerm h_18 = NULL,m_18 = NULL,g_2 = NULL;
                        t = SSLgetAnnotations(b_41);
                        h_18 = t;
                        t = k_41;
                        t = pat_td_1_0(u_134, t);
                        m_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, m_18, l_41);
                        g_2 = t;
                        t = SSLsetAnnotations(g_2, h_18);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    k_41 = ATgetArgument(t, 0);
                    l_41 = ATgetArgument(t, 1);
                    a_41 = ATgetArgument(t, 2);
                    {
                      ATerm a_19 = NULL,h_19 = NULL,h_2 = NULL;
                      t = SSLgetAnnotations(b_41);
                      a_19 = t;
                      t = a_41;
                      {
                        static ATerm f_4 (ATerm t)
                        {
                          t = pat_td_1_0(u_134, t);
                          return(t);
                        }
                        t = fetch_1_0(f_4, t);
                      }
                      h_19 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, k_41, l_41, h_19);
                      h_2 = t;
                      t = SSLsetAnnotations(h_2, a_19);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        k_41 = ATgetArgument(t, 0);
                        l_41 = ATgetArgument(t, 1);
                        a_41 = ATgetArgument(t, 2);
                        {
                          ATerm c_20 = NULL,m_20 = NULL,i_2 = NULL;
                          t = SSLgetAnnotations(b_41);
                          c_20 = t;
                          t = a_41;
                          {
                            static ATerm i_4 (ATerm t)
                            {
                              t = pat_td_1_0(u_134, t);
                              return(t);
                            }
                            t = fetch_1_0(i_4, t);
                          }
                          m_20 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, k_41, l_41, m_20);
                          i_2 = t;
                          t = SSLsetAnnotations(i_2, c_20);
                        }
                      }
                    else
                      {
                        ATerm c_21 = NULL,g_21 = NULL,j_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            k_41 = ATgetArgument(t, 0);
                            l_41 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(b_41);
                        c_21 = t;
                        t = l_41;
                        t = pat_td_1_0(u_134, t);
                        g_21 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, k_41, g_21);
                        j_2 = t;
                        t = SSLsetAnnotations(j_2, c_21);
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
  ATerm w_41 = NULL,d_42 = NULL;
  w_41 = t;
  if(match_cons(t, sym_Build_1))
    {
      d_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_42 = NULL,f_42 = NULL,h_42 = NULL,n_42 = NULL;
        t = w_41;
        t = new_0_0(t);
        h_42 = t;
        t = d_42;
        {
          static ATerm j_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((e_42 != NULL) && (e_42 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_42 = ATgetArgument(t, 0);
                if(((f_42 != NULL) && (f_42 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  f_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, h_42);
            return(t);
          }
          t = pat_td_1_0(j_4, t);
        }
        n_42 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_42)), not_null(e_42))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_42)))), (ATerm) ATmakeAppl(sym_Build_1, n_42)));
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_42 = NULL,y_42 = NULL,z_42 = NULL;
              t = w_41;
              t = new_0_0(t);
              y_42 = t;
              t = d_42;
              {
                static ATerm k_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_42 != NULL) && (o_42 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_42 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, y_42);
                  return(t);
                }
                t = pat_td_1_0(k_4, t);
              }
              z_42 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_42)))), (ATerm) ATmakeAppl(sym_Build_1, z_42)));
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              {
                ATerm a_43 = NULL,b_43 = NULL,d_43 = NULL,e_43 = NULL;
                t = w_41;
                t = new_0_0(t);
                d_43 = t;
                t = d_42;
                {
                  static ATerm m_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((a_43 != NULL) && (a_43 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          a_43 = ATgetArgument(t, 0);
                        if(((b_43 != NULL) && (b_43 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_43 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_43);
                    return(t);
                  }
                  t = pat_td_1_0(m_4, t);
                }
                e_43 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_43), not_null(b_43), (ATerm) ATmakeAppl(sym_Var_1, d_43))), (ATerm) ATmakeAppl(sym_Build_1, e_43)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,q_43 = NULL,w_43 = NULL,b_44 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      w_43 = ATgetArgument(t, 0);
      b_44 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, w_43, b_44);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          w_43 = ATgetArgument(t, 0);
          t = w_43;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_43 = ATgetFirst((ATermList) t);
              m_43 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_43, (ATerm) ATmakeAppl(sym_LChoices_1, m_43));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_n_26;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              w_43 = ATgetArgument(t, 0);
              t = w_43;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_43 = ATgetFirst((ATermList) t);
                  m_43 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_43, (ATerm) ATmakeAppl(sym_Choices_1, m_43));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_n_26;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  w_43 = ATgetArgument(t, 0);
                  t = w_43;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_43 = ATgetFirst((ATermList) t);
                      m_43 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_43, (ATerm) ATmakeAppl(sym_Seqs_1, m_43));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_m_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      w_43 = ATgetArgument(t, 0);
                      b_44 = ATgetArgument(t, 1);
                      q_43 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, b_44, (ATerm) ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, q_43), w_43)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          w_43 = ATgetArgument(t, 0);
                          b_44 = ATgetArgument(t, 1);
                          q_43 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_43)), w_43), (ATerm) ATmakeAppl(sym_Build_1, b_44)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              w_43 = ATgetArgument(t, 0);
                              b_44 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_43, (ATerm) ATmakeAppl(sym_Match_1, b_44));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  w_43 = ATgetArgument(t, 0);
                                  b_44 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_43), b_44);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      w_43 = ATgetArgument(t, 0);
                                      b_44 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_44), w_43);
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
static ATerm p_4 (ATerm t)
{
  ATerm o_26 = t;
  if((PushChoice() == 0))
    {
      ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,g_4 = NULL;
      l_46 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_46);
      j_46 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_46);
      g_4 = t;
      t = SSLsetAnnotations(g_4, j_46);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_26;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_p_26;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_46 = ATgetFirst((ATermList) t);
      p_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_46, p_46);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if(match_cons(s_26, sym__2))
        {
          q_46 = ATgetArgument(s_26, 0);
          r_46 = ATgetArgument(s_26, 1);
        }
      else
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(match_cons(t_26, sym__2))
          {
            s_46 = ATgetArgument(t_26, 0);
            t_46 = ATgetArgument(t_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_46), q_46), (ATerm) ATinsert(CheckATermList(t_46), r_46));
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_p_26;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_46 = ATgetFirst((ATermList) t);
      v_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_46, v_46);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,c_47 = NULL,d_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(match_cons(u_26, sym__2))
        {
          w_46 = ATgetArgument(u_26, 0);
          x_46 = ATgetArgument(u_26, 1);
        }
      else
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(match_cons(v_26, sym__2))
          {
            c_47 = ATgetArgument(v_26, 0);
            d_47 = ATgetArgument(v_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_47), w_46), (ATerm) ATinsert(CheckATermList(d_47), x_46));
  return(t);
}
static ATerm q_9 (ATerm g_75, ATerm h_75, ATerm i_75, ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,h_4 = NULL;
  t = i_75;
  t = fetch_1_0(p_4, t);
  t = i_75;
  t = genzip_4_0(z_4, a_5, b_5, LiftPrimArg_0_0, t);
  i_46 = t;
  if(match_cons(t, sym__2))
    {
      d_46 = ATgetArgument(t, 0);
      f_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_46);
  c_46 = t;
  t = d_46;
  t = concat_0_0(t);
  g_46 = t;
  t = f_46;
  t = genzip_4_0(c_5, d_5, e_5, _id, t);
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_46, h_46);
  h_4 = t;
  t = SSLsetAnnotations(h_4, c_46);
  if(match_cons(t, sym__2))
    {
      z_45 = ATgetArgument(t, 0);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(match_cons(a_27, sym__2))
          {
            a_46 = ATgetArgument(a_27, 0);
            b_46 = ATgetArgument(a_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, z_45, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_46), (ATerm) ATmakeAppl(sym_CallT_3, g_75, h_75, b_46)));
  return(t);
}
static ATerm v_47 (ATerm m_47, ATerm t)
{
  ATerm o_47 = NULL;
  t = m_47;
  {
    ATerm b_27 = t;
    if((PushChoice() == 0))
      {
        ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,l_4 = NULL;
        r_47 = t;
        if(match_cons(t, sym_Var_1))
          {
            q_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_47);
        p_47 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, q_47);
        l_4 = t;
        t = SSLsetAnnotations(l_4, p_47);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_27;
      }
  }
  t = new_0_0(t);
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, o_47), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_47), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_47)))), (ATerm) ATmakeAppl(sym_Var_1, o_47)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  s_47 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_47 = ATgetArgument(t, 0);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_47(s_47, t);
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_m_24, (ATerm) ATmakeAppl(sym_Var_1, t_47)));
          }
      }
    }
  else
    {
      t = v_47(s_47, t);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm g_27 = t;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,n_4 = NULL;
      q_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_22);
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_22);
      n_4 = t;
      t = SSLsetAnnotations(n_4, o_22);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_27;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_p_26;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm r_22 = NULL,y_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_22 = ATgetFirst((ATermList) t);
      y_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_22, y_22);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,d_23 = NULL,f_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(match_cons(h_27, sym__2))
        {
          z_22 = ATgetArgument(h_27, 0);
          a_23 = ATgetArgument(h_27, 1);
        }
      else
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(match_cons(j_27, sym__2))
          {
            d_23 = ATgetArgument(j_27, 0);
            f_23 = ATgetArgument(j_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_23), z_22), (ATerm) ATinsert(CheckATermList(f_23), a_23));
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_p_26;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm g_23 = NULL,j_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_23 = ATgetFirst((ATermList) t);
      j_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_23, j_23);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(match_cons(k_27, sym__2))
        {
          l_23 = ATgetArgument(k_27, 0);
          m_23 = ATgetArgument(k_27, 1);
        }
      else
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(match_cons(l_27, sym__2))
          {
            n_23 = ATgetArgument(l_27, 0);
            o_23 = ATgetArgument(l_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_23), l_23), (ATerm) ATinsert(CheckATermList(o_23), m_23));
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm m_27 = t;
  if((PushChoice() == 0))
    {
      ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,w_4 = NULL;
      q_25 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_25);
      o_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_25);
      w_4 = t;
      t = SSLsetAnnotations(w_4, o_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_27;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_p_26;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_25 = ATgetFirst((ATermList) t);
      s_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_25, s_25);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if(match_cons(n_27, sym__2))
        {
          t_25 = ATgetArgument(n_27, 0);
          u_25 = ATgetArgument(n_27, 1);
        }
      else
        _fail(t);
      {
        ATerm p_27 = ATgetArgument(t, 1);
        if(match_cons(p_27, sym__2))
          {
            v_25 = ATgetArgument(p_27, 0);
            w_25 = ATgetArgument(p_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_25), t_25), (ATerm) ATinsert(CheckATermList(w_25), u_25));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_p_26;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_25 = ATgetFirst((ATermList) t);
      a_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_25, a_26);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_27 = ATgetArgument(t, 0);
      if(match_cons(q_27, sym__2))
        {
          b_26 = ATgetArgument(q_27, 0);
          c_26 = ATgetArgument(q_27, 1);
        }
      else
        _fail(t);
      {
        ATerm s_27 = ATgetArgument(t, 1);
        if(match_cons(s_27, sym__2))
          {
            d_26 = ATgetArgument(s_27, 0);
            e_26 = ATgetArgument(s_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_26), b_26), (ATerm) ATinsert(CheckATermList(e_26), c_26));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm k_52 = NULL,o_52 = NULL,p_52 = NULL,r_52 = NULL;
  o_52 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_52 = ATgetArgument(t, 0);
      r_52 = ATgetArgument(t, 1);
      k_52 = ATgetArgument(t, 2);
      {
        ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,h_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_4 = NULL;
        t = k_52;
        t = fetch_1_0(f_5, t);
        t = k_52;
        t = genzip_4_0(g_5, i_5, l_5, LiftPrimArg_0_0, t);
        n_22 = t;
        if(match_cons(t, sym__2))
          {
            j_22 = ATgetArgument(t, 0);
            k_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_22);
        h_22 = t;
        t = j_22;
        t = concat_0_0(t);
        l_22 = t;
        t = k_22;
        t = genzip_4_0(m_5, o_5, p_5, _id, t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_22, m_22);
        o_4 = t;
        t = SSLsetAnnotations(o_4, h_22);
        if(match_cons(t, sym__2))
          {
            b_22 = ATgetArgument(t, 0);
            {
              ATerm y_27 = ATgetArgument(t, 1);
              if(match_cons(y_27, sym__2))
                {
                  c_22 = ATgetArgument(y_27, 0);
                  d_22 = ATgetArgument(y_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_22), (ATerm) ATmakeAppl(sym_PrimT_3, p_52, r_52, d_22)));
      }
    }
  else
    {
      ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,k_25 = NULL,x_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          p_52 = ATgetArgument(t, 0);
          r_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_52;
      t = fetch_1_0(s_5, t);
      t = r_52;
      t = genzip_4_0(t_5, u_5, v_5, LiftPrimArg_0_0, t);
      k_25 = t;
      if(match_cons(t, sym__2))
        {
          d_25 = ATgetArgument(t, 0);
          e_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_25);
      c_25 = t;
      t = d_25;
      t = concat_0_0(t);
      f_25 = t;
      t = e_25;
      t = genzip_4_0(x_5, b_6, c_6, _id, t);
      g_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_25, g_25);
      x_4 = t;
      t = SSLsetAnnotations(x_4, c_25);
      if(match_cons(t, sym__2))
        {
          w_24 = ATgetArgument(t, 0);
          {
            ATerm z_27 = ATgetArgument(t, 1);
            if(match_cons(z_27, sym__2))
              {
                x_24 = ATgetArgument(z_27, 0);
                y_24 = ATgetArgument(z_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, w_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_24), (ATerm) ATmakeAppl(sym_PrimT_3, p_52, (ATerm)ATempty, y_24)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm t)
{
  static ATerm u_52 (ATerm t)
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_108(t);
        t = u_52(t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = v_108(t);
      }
    return(t);
  }
  t = u_52(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  o_53 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_53 = ATgetArgument(t, 0);
      m_53 = ATgetArgument(t, 1);
      n_53 = ATgetArgument(t, 2);
      {
        ATerm z_26 = NULL,h_5 = NULL;
        t = SSLgetAnnotations(o_53);
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_53, m_53, n_53);
        h_5 = t;
        t = SSLsetAnnotations(h_5, z_26);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = o_53;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm i_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_28;
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,z_54 = NULL,a_55 = NULL;
  x_54 = t;
  if(match_cons(t, sym_Con_3))
    {
      z_54 = ATgetArgument(t, 0);
      a_55 = ATgetArgument(t, 1);
      w_54 = ATgetArgument(t, 2);
      {
        ATerm r_27 = NULL,j_5 = NULL;
        t = SSLgetAnnotations(x_54);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, z_54, a_55, w_54);
        j_5 = t;
        t = SSLsetAnnotations(j_5, r_27);
      }
    }
  else
    {
      ATerm t_28 = NULL,k_5 = NULL;
      if(match_cons(t, sym_App_2))
        {
          z_54 = ATgetArgument(t, 0);
          a_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_54);
      t_28 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, z_54, a_55);
      k_5 = t;
      t = SSLsetAnnotations(k_5, t_28);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm j_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(e_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      j_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_55;
  if(match_cons(t, sym_StratRule_3))
    {
      k_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
      m_55 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_55), (ATerm) ATmakeAppl(sym_Where_1, m_55)), k_55));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          k_55 = ATgetArgument(t, 0);
          l_55 = ATgetArgument(t, 1);
          m_55 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_55;
      t = pureterm_0_0(t);
      t = l_55;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, l_55)), (ATerm) ATmakeAppl(sym_Where_1, m_55)), (ATerm) ATmakeAppl(sym_Match_1, k_55)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm d_104 (ATerm), ATerm t)
{
  static ATerm v_55 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_104(t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = SRTS_one(v_55, t);
      }
    return(t);
  }
  t = v_55(t);
  return(t);
}
static ATerm u_9 (ATerm t_70, ATerm u_70, ATerm v_70, ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL;
  t = new_0_0(t);
  a_56 = t;
  t = t_70;
  {
    static ATerm f_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm m_28 = ATgetArgument(t, 0);
          if(match_cons(m_28, sym_Var_1))
            {
              if(((z_55 != NULL) && (z_55 != ATgetArgument(m_28, 0))))
                _fail(ATgetArgument(m_28, 0));
              else
                z_55 = ATgetArgument(m_28, 0);
            }
          else
            _fail(t);
          if(((x_55 != NULL) && (x_55 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_55 = ATgetArgument(t, 1);
          {
            ATerm o_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, z_55);
      return(t);
    }
    t = oncetd_1_0(f_6, t);
  }
  b_56 = t;
  t = u_70;
  {
    static ATerm g_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_28 = ATgetArgument(t, 0);
          if(match_cons(p_28, sym_Var_1))
            {
              if(((z_55 != NULL) && (z_55 != ATgetArgument(p_28, 0))))
                _fail(ATgetArgument(p_28, 0));
              else
                z_55 = ATgetArgument(p_28, 0);
            }
          else
            _fail(t);
          if(((y_55 != NULL) && (y_55 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_55 = ATgetArgument(t, 1);
          {
            ATerm r_28 = ATgetArgument(t, 2);
            if(match_cons(r_28, sym_CallT_3))
              {
                if(((w_55 != NULL) && (w_55 != ATgetArgument(r_28, 0))))
                  _fail(ATgetArgument(r_28, 0));
                else
                  w_55 = ATgetArgument(r_28, 0);
                {
                  ATerm s_28 = ATgetArgument(r_28, 1);
                  if(((ATgetType(s_28) != AT_LIST) || !(ATisEmpty(s_28))))
                    _fail(t);
                }
                {
                  ATerm v_28 = ATgetArgument(r_28, 2);
                  if(((ATgetType(v_28) != AT_LIST) || !(ATisEmpty(v_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, a_56);
      return(t);
    }
    t = oncetd_1_0(g_6, t);
  }
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_56), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, b_56, c_56, (ATerm) ATmakeAppl(sym_Seq_2, v_70, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(w_55), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_55), not_null(y_55), term_m_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_55)), (ATerm) ATmakeAppl(sym_Var_1, a_56))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_28 = t;
      int z_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,a_57 = NULL;
          u_56 = t;
          if(match_cons(t, sym_SRule_1))
            {
              v_56 = ATgetArgument(t, 0);
              t = v_56;
              if(match_cons(t, sym_Rule_3))
                {
                  r_56 = ATgetArgument(t, 0);
                  s_56 = ATgetArgument(t, 1);
                  t_56 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_56;
              t = u_9(r_56, s_56, t_56, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm t_29 = NULL,c_30 = NULL,n_5 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  v_56 = ATgetArgument(t, 0);
                  a_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_56);
              t_29 = t;
              t = a_57;
              t = desugarRule_0_0(t);
              c_30 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, v_56, c_30);
              n_5 = t;
              t = SSLsetAnnotations(n_5, t_29);
            }
          LocalPopChoice(z_28);
        }
      else
        {
          t = y_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  static ATerm j_6 (ATerm t)
  {
    t = topdown_1_0(z_102, t);
    return(t);
  }
  t = z_102(t);
  t = SRTS_all(j_6, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
    }
  t = repeat_2_0(m_6, _id, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
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
            ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
            f_59 = t;
            if(match_cons(t, sym_CallT_3))
              {
                g_59 = ATgetArgument(t, 0);
                h_59 = ATgetArgument(t, 1);
                i_59 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_59;
            t = q_9(g_59, h_59, i_59, t);
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            {
              ATerm g_29 = t;
              int h_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(h_29);
                }
              else
                {
                  t = g_29;
                  {
                    ATerm i_29 = t;
                    int j_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(j_29);
                      }
                    else
                      {
                        t = i_29;
                        {
                          ATerm k_29 = t;
                          int m_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_29 = t;
                              int q_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      w_59 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_59;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      x_59 = ATgetArgument(t, 0);
                                      t = x_59;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          x_59 = ATgetArgument(t, 0);
                                          y_59 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, x_59, y_59);
                                    }
                                  LocalPopChoice(q_29);
                                }
                              else
                                {
                                  t = o_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(m_29);
                            }
                          else
                            {
                              t = k_29;
                              {
                                ATerm r_29 = t;
                                int s_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(s_29);
                                  }
                                else
                                  {
                                    t = r_29;
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
  t = topdown_1_0(k_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL;
  w_61 = t;
  t = SSL_explode_term(w_61);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_29 = ATgetArgument(t, 1);
        if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
          {
            v_61 = ATgetFirst((ATermList) v_29);
            {
              ATerm x_29 = (ATerm) ATgetNext((ATermList) v_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_61;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,n_30 = NULL;
  n_30 = t;
  t = SSL_explode_term(n_30);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_29 = ATgetArgument(t, 1);
        if(((ATgetType(z_29) == AT_LIST) && !(ATisEmpty(z_29))))
          {
            ATerm a_30 = ATgetFirst((ATermList) z_29);
            k_30 = (ATerm) ATgetNext((ATermList) z_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_f_20;
  l_30 = t;
  t = SSL_mkterm(l_30, k_30);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm c_61 = NULL,f_61 = NULL;
  static ATerm x_61 (ATerm t)
  {
    ATerm b_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_61 = NULL,h_61 = NULL,k_61 = NULL;
        g_61 = t;
        t = map_1_0(n_6, t);
        t = b_107(t);
        h_61 = t;
        t = g_61;
        t = map_1_0(o_6, t);
        t = x_61(t);
        k_61 = t;
        t = (ATerm) ATinsert(CheckATermList(k_61), h_61);
        LocalPopChoice(d_30);
      }
    else
      {
        t = b_30;
        t = map_1_0(p_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = x_61(t);
  f_61 = t;
  t = term_f_20;
  c_61 = t;
  t = SSL_mkterm(c_61, f_61);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm a_62 = NULL;
  a_62 = t;
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_62 = NULL,m_62 = NULL,n_62 = NULL;
        t = a_62;
        t = new_0_0(t);
        j_62 = t;
        t = new_0_0(t);
        m_62 = t;
        t = new_0_0(t);
        n_62 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_62), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, a_62), (ATerm) ATmakeAppl(sym_Var_1, m_62))), (ATerm) ATmakeAppl(sym_Var_1, n_62)), (ATerm)ATmakeAppl(sym_VarDec_2, j_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_30), term_i_30)), m_62, (ATerm)ATmakeAppl(sym_Var_1, m_62), n_62, (ATerm) ATmakeAppl(sym_Var_1, n_62));
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm r_62 = NULL,u_62 = NULL,x_62 = NULL;
          t = a_62;
          t = new_0_0(t);
          r_62 = t;
          t = new_0_0(t);
          u_62 = t;
          t = new_0_0(t);
          x_62 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_62), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, a_62), (ATerm) ATmakeAppl(sym_Var_1, u_62))), (ATerm) ATmakeAppl(sym_Var_1, x_62)), (ATerm)ATmakeAppl(sym_VarDec_2, r_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_30), term_i_30)), u_62, (ATerm)ATmakeAppl(sym_Var_1, u_62), x_62, (ATerm) ATmakeAppl(sym_Var_1, x_62));
        }
      }
  }
  return(t);
}
static ATerm v_9 (ATerm c_41, ATerm d_41, ATerm t)
{
  ATerm j_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_41, d_41);
      LocalPopChoice(m_30);
    }
  else
    {
      t = j_30;
      t = SSL_subtr(c_41, d_41);
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL;
  if(match_cons(t, sym__2))
    {
      y_62 = ATgetArgument(t, 0);
      z_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_62, z_62, (ATerm) ATempty);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm a_63 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      if(((ATgetType(o_30) != AT_INT) || (ATgetInt((ATermInt) o_30) != 0)))
        _fail(t);
      {
        ATerm p_30 = ATgetArgument(t, 1);
      }
      a_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_63;
  return(t);
}
ATerm copy_1_0 (ATerm n_120 (ATerm), ATerm t)
{
  static ATerm w_6 (ATerm t)
  {
    ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,k_63 = NULL,l_63 = NULL;
    if(match_cons(t, sym__3))
      {
        d_63 = ATgetArgument(t, 0);
        e_63 = ATgetArgument(t, 1);
        f_63 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, d_63, term_f_17);
    t = geq_0_0(t);
    t = term_f_17;
    l_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_63, term_f_17);
    t = v_9(d_63, l_63, t);
    g_63 = t;
    t = e_63;
    t = n_120(t);
    k_63 = t;
    t = (ATerm) ATmakeAppl(sym__3, g_63, e_63, (ATerm) ATinsert(CheckATermList(f_63), k_63));
    return(t);
  }
  t = for_3_0(r_6, t_6, w_6, t);
  return(t);
}
static ATerm w_9 (ATerm m_58, ATerm n_58, ATerm t)
{
  ATerm m_63 = NULL,q_63 = NULL,r_63 = NULL;
  t = new_0_0(t);
  m_63 = t;
  t = new_0_0(t);
  q_63 = t;
  t = new_0_0(t);
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_63), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_58)), (ATerm) ATmakeAppl(sym_Var_1, q_63))), (ATerm) ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_58)), (ATerm) ATmakeAppl(sym_Var_1, r_63)))), (ATerm)ATmakeAppl(sym_VarDec_2, m_63, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_30), term_i_30)), q_63, (ATerm)ATmakeAppl(sym_Var_1, q_63), r_63, (ATerm) ATmakeAppl(sym_Var_1, r_63));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_63 = ATgetFirst((ATermList) t);
      w_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_63;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_63;
    }
  else
    {
      t = w_63;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm v_67 (ATerm z_64, ATerm a_65, ATerm b_65, ATerm c_65, ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  t = term_f_17;
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_65, term_f_17);
  t = a_11(a_65, z_65, t);
  y_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_65, term_b_17);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_65 = ATgetFirst((ATermList) t);
      o_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_65;
  t = last_0_0(t);
  i_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_65), j_65), o_65);
  t = genzip_4_0(z_6, a_7, b_7, c_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      p_65 = ATgetArgument(t, 0);
      q_65 = ATgetArgument(t, 1);
      r_65 = ATgetArgument(t, 2);
      s_65 = ATgetArgument(t, 3);
      v_65 = ATgetArgument(t, 4);
      w_65 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_65), r_65), o_65);
  t = concat_0_0(t);
  x_65 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, z_64, term_s_30), q_65, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(x_65), j_65), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_65)), (ATerm) ATmakeAppl(sym_Op_2, z_64, s_65))), (ATerm)ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_65)), (ATerm) ATmakeAppl(sym_Op_2, z_64, w_65))), (ATerm) ATmakeAppl(sym_Seqs_1, p_65)))));
  return(t);
}
static ATerm w_67 (ATerm o_66, ATerm p_66, ATerm q_66, ATerm r_66, ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
  t = r_66;
  t = new_0_0(t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_66, (ATerm) ATmakeAppl(sym_Var_1, v_66));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      w_66 = ATgetArgument(t, 0);
      x_66 = ATgetArgument(t, 1);
      y_66 = ATgetArgument(t, 2);
      b_67 = ATgetArgument(t, 3);
      c_67 = ATgetArgument(t, 4);
      d_67 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_66, c_67);
  t = conc_0_0(t);
  e_67 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, o_66, term_u_30), x_66, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(e_67), v_66), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_66)), (ATerm) ATmakeAppl(sym_Op_2, o_66, b_67))), (ATerm)ATmakeAppl(sym_Op_2, o_66, d_67), (ATerm) ATmakeAppl(sym_Seqs_1, w_66)))));
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_30 = ATgetArgument(t, 0);
      ATerm x_30 = ATgetArgument(t, 1);
      if(((ATgetType(x_30) != AT_LIST) || !(ATisEmpty(x_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm a_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_30 = ATgetArgument(t, 0);
      if(((ATgetType(y_30) == AT_LIST) && !(ATisEmpty(y_30))))
        {
          a_66 = ATgetFirst((ATermList) y_30);
          d_66 = (ATerm) ATgetNext((ATermList) y_30);
        }
      else
        _fail(t);
      {
        ATerm b_31 = ATgetArgument(t, 1);
        if(((ATgetType(b_31) == AT_LIST) && !(ATisEmpty(b_31))))
          {
            e_66 = ATgetFirst((ATermList) b_31);
            f_66 = (ATerm) ATgetNext((ATermList) b_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_66, e_66), (ATerm) ATmakeAppl(sym__2, d_66, f_66));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL;
  if(match_cons(t, sym__2))
    {
      i_66 = ATgetArgument(t, 0);
      j_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_66), i_66);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm k_66 = NULL,m_66 = NULL;
  if(match_cons(t, sym__2))
    {
      k_66 = ATgetArgument(t, 0);
      m_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(k_66, m_66, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,r_67 = NULL;
  l_67 = t;
  if(match_cons(t, sym__3))
    {
      m_67 = ATgetArgument(t, 0);
      n_67 = ATgetArgument(t, 1);
      o_67 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_67;
  if(match_string(t, "T"))
    {
      t = o_67;
      if(match_cons(t, sym__2))
        {
          p_67 = ATgetArgument(t, 0);
          r_67 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_67;
      if(match_int(t, 0))
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_67(m_67, p_67, r_67, l_67, t);
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              {
                ATerm t_67 = NULL;
                t = l_67;
                t = new_0_0(t);
                t_67 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, m_67, term_s_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_67), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_67)), (ATerm) ATmakeAppl(sym_Op_2, m_67, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_67)), (ATerm) ATmakeAppl(sym_Op_2, m_67, (ATerm) ATempty))), term_m_24))));
              }
            }
        }
      else
        {
          t = v_67(m_67, p_67, r_67, l_67, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = o_67;
      if(match_cons(t, sym__2))
        {
          p_67 = ATgetArgument(t, 0);
          r_67 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_67(m_67, p_67, r_67, l_67, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  ATerm a_16 = NULL;
  static ATerm e_7 (ATerm t)
  {
    t = t_115(t);
    if(((a_16 != NULL) && (a_16 != t)))
      _fail(t);
    else
      a_16 = t;
    return(t);
  }
  t = fetch_1_0(e_7, t);
  t = not_null(a_16);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  t = term_c_17;
  c_16 = t;
  t = (ATerm) ATinsert(ATempty, term_e_31);
  d_16 = t;
  t = SSL_printnl(c_16, d_16);
  t = term_f_17;
  b_16 = t;
  t = SSL_exit(b_16);
  t = (ATerm) ATinsert(ATempty, term_e_31);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_f_31;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm i_31 = ATgetArgument(t, 0);
          w_13 = ATgetArgument(t, 1);
          x_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(h_31);
      t = x_13;
      t = foldr_3_0(o_7, p_7, q_7, t);
      t = w_13;
      t = foldr_3_0(t_7, u_7, v_7, t);
    }
  else
    {
      t = g_31;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm j_31 = ATgetArgument(t, 0);
          w_13 = ATgetArgument(t, 1);
          x_13 = ATgetArgument(t, 2);
          {
            ATerm k_31 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_13;
      t = foldr_3_0(w_7, x_7, y_7, t);
      t = w_13;
      t = foldr_3_0(h_8, i_8, j_8, t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(d_14, e_14, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(g_14, h_14, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm l_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym__2))
    {
      l_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(l_14, n_14, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  if(match_cons(t, sym__2))
    {
      o_14 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(o_14, p_14, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      ATerm m_31 = ATgetArgument(t, 1);
      ATerm n_31 = ATgetArgument(t, 2);
      ATerm o_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_16 = NULL;
      static ATerm g_7 (ATerm t)
      {
        ATerm j_16 = NULL,k_16 = NULL;
        j_16 = t;
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  k_16 = ATgetArgument(t, 0);
                  {
                    ATerm t_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm u_31 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(s_31);
              t = k_16;
              if(((i_16 != NULL) && (i_16 != t)))
                _fail(t);
              else
                i_16 = t;
              t = j_16;
            }
          else
            {
              t = r_31;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  k_16 = ATgetArgument(t, 0);
                  {
                    ATerm v_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm w_31 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm y_31 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = k_16;
              if(((i_16 != NULL) && (i_16 != t)))
                _fail(t);
              else
                i_16 = t;
              t = j_16;
            }
        }
        return(t);
      }
      t = fetch_1_0(g_7, t);
      {
        static ATerm h_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((i_16 != NULL) && (i_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_16 = ATgetArgument(t, 0);
              {
                ATerm z_31 = ATgetArgument(t, 1);
              }
              {
                ATerm b_32 = ATgetArgument(t, 2);
              }
              {
                ATerm c_32 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_7, t);
      }
      t = not_null(i_16);
      t = debug_1_0(m_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm y_18 = NULL;
        y_18 = t;
        t = map_1_0(n_7, t);
        t = y_18;
        {
          ATerm d_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(l_8, t);
              LocalPopChoice(e_32);
            }
          else
            {
              t = d_32;
              {
                ATerm t_14 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_14 = ATgetFirst((ATermList) t);
                    {
                      ATerm h_32 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = t_14;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,y_14 = NULL;
  d_19 = t;
  t = SSL_explode_term(d_19);
  if(match_cons(t, sym__2))
    {
      ATerm i_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_32 = ATgetArgument(t, 1);
        if(((ATgetType(m_32) == AT_LIST) && !(ATisEmpty(m_32))))
          {
            e_19 = ATgetFirst((ATermList) m_32);
            {
              ATerm o_32 = (ATerm) ATgetNext((ATermList) m_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(d_19);
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_32 = ATgetArgument(t, 1);
        if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
          {
            ATerm r_32 = ATgetFirst((ATermList) q_32);
            ATerm s_32 = (ATerm) ATgetNext((ATermList) q_32);
            if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
              {
                y_14 = ATgetFirst((ATermList) s_32);
                {
                  ATerm t_32 = (ATerm) ATgetNext((ATermList) s_32);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, e_19, y_14);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(m_8, o_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  q_19 = t;
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_19 = ATgetFirst((ATermList) t);
      u_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_19;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_19;
            if((r_19 != t))
              {
                _fail(t);
              }
            t = p_19;
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            t = (ATerm) ATmakeAppl(sym__2, r_19, u_19);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, r_19, u_19);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  static ATerm q_20 (ATerm t)
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_104(t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = SRTS_all(q_20, t);
      }
    return(t);
  }
  t = q_20(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if(((ATgetType(y_32) != AT_LIST) || !(ATisEmpty(y_32))))
        _fail(t);
      {
        ATerm z_32 = ATgetArgument(t, 1);
        if(((ATgetType(z_32) != AT_LIST) || !(ATisEmpty(z_32))))
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
  ATerm n_21 = NULL,o_21 = NULL,r_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_33 = ATgetArgument(t, 0);
      if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
        {
          n_21 = ATgetFirst((ATermList) a_33);
          o_21 = (ATerm) ATgetNext((ATermList) a_33);
        }
      else
        _fail(t);
      {
        ATerm b_33 = ATgetArgument(t, 1);
        if(((ATgetType(b_33) == AT_LIST) && !(ATisEmpty(b_33))))
          {
            r_21 = ATgetFirst((ATermList) b_33);
            s_21 = (ATerm) ATgetNext((ATermList) b_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_21, r_21), (ATerm) ATmakeAppl(sym__2, o_21, s_21));
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm t_21 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_22), t_21);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,b_21 = NULL,d_21 = NULL;
  x_20 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_33 = ATgetArgument(t, 0);
            ATerm g_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(d_33);
        t = x_20;
      }
    else
      {
        t = c_33;
        {
          ATerm m_21 = NULL;
          if(match_cons(t, sym__3))
            {
              y_20 = ATgetArgument(t, 0);
              b_21 = ATgetArgument(t, 1);
              d_21 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, y_20, b_21);
          t = genzip_4_0(r_8, s_8, t_8, _id, t);
          m_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_21, d_21);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,i_22 = NULL;
  static ATerm v_8 (ATerm t)
  {
    ATerm i_15 = NULL;
    t = i_102(t);
    i_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_15, not_null(i_22));
    t = lookup_0_0(t);
    t = j_102(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((i_22 != NULL) && (i_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_22;
  t = alltd_1_0(v_8, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm k_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,q_5 = NULL;
  t_23 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_23);
  k_23 = t;
  t = q_23;
  t = new_0_0(t);
  s_23 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_23, r_23);
  q_5 = t;
  t = SSLsetAnnotations(q_5, k_23);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,a_24 = NULL,r_5 = NULL;
  a_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_24);
  u_23 = t;
  t = v_23;
  t = new_0_0(t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_23, w_23);
  r_5 = t;
  t = SSLsetAnnotations(r_5, u_23);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm b_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      b_24 = ATgetArgument(t, 0);
      {
        ATerm h_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_24), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm c_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      c_24 = ATgetArgument(t, 0);
      {
        ATerm i_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, c_24);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm q_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_24 = ATgetArgument(t, 0);
      {
        ATerm j_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_24;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm r_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_24 = ATgetArgument(t, 0);
      {
        ATerm k_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_24;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm s_24 = NULL,u_24 = NULL,z_24 = NULL,a_25 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      u_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
      s_24 = ATgetArgument(t, 2);
      t = u_24;
      if(match_cons(t, sym_SVar_1))
        {
          z_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_24;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_24;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          u_24 = ATgetArgument(t, 0);
          a_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_24;
      if(match_cons(t, sym_SVar_1))
        {
          z_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_24;
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm j_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_25;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,b_23 = NULL,c_23 = NULL,h_23 = NULL;
  x_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_33 = ATgetFirst((ATermList) t);
      if(match_cons(l_33, sym_SDefT_4))
        {
          s_22 = ATgetArgument(l_33, 0);
          t_22 = ATgetArgument(l_33, 1);
          u_22 = ATgetArgument(l_33, 2);
          {
            ATerm v_33 = ATgetArgument(l_33, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm t_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_22;
  t = map_1_0(w_8, t);
  v_22 = t;
  t = u_22;
  t = map_1_0(x_8, t);
  w_22 = t;
  t = v_22;
  t = map_1_0(y_8, t);
  c_23 = t;
  t = w_22;
  t = map_1_0(z_8, t);
  b_23 = t;
  t = x_22;
  {
    static ATerm b_9 (ATerm t)
    {
      ATerm d_24 = NULL,g_24 = NULL,h_24 = NULL,k_24 = NULL,o_24 = NULL,p_24 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm z_33 = ATgetArgument(t, 0);
          d_24 = ATgetArgument(t, 1);
          g_24 = ATgetArgument(t, 2);
          h_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = g_24;
      t = map_1_0(d_9, t);
      k_24 = t;
      t = d_24;
      t = map_1_0(e_9, t);
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, p_24, c_23, h_24);
      t = substitute_2_0(f_9, _id, t);
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, k_24, b_23, o_24);
      t = substitute_2_0(g_9, _id, t);
      return(t);
    }
    t = map_1_0(b_9, t);
  }
  t = choices_0_0(t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_22, v_22, w_22, h_23);
  return(t);
}
static ATerm u_69 (ATerm k_68, ATerm l_68, ATerm m_68, ATerm n_68, ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,v_68 = NULL,w_68 = NULL,w_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_68, l_68);
  t = Definitions_0_0(t);
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_68, m_68);
  w_68 = t;
  if(match_cons(t, sym__2))
    {
      ATerm a_34 = ATgetArgument(t, 0);
      ATerm m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_68);
  t_68 = t;
  t = s_68;
  {
    ATerm n_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_69 = NULL,f_69 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_69 = ATgetFirst((ATermList) t);
            f_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_69;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_69;
        LocalPopChoice(q_34);
      }
    else
      {
        t = n_34;
        {
          ATerm t_34 = t;
          int w_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(w_34);
            }
          else
            {
              t = t_34;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  v_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_68, m_68);
  w_5 = t;
  t = SSLsetAnnotations(w_5, t_68);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  j_69 = t;
  if(match_cons(t, sym__2))
    {
      l_69 = ATgetArgument(t, 0);
      o_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_69;
  if(match_cons(t, sym__2))
    {
      m_69 = ATgetArgument(t, 0);
      n_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_69;
  if(match_cons(t, sym_Mod_2))
    {
      h_69 = ATgetArgument(t, 0);
      i_69 = ATgetArgument(t, 1);
      {
        ATerm b_35 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_69 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, h_69, i_69, n_69);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            t_69 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_69, o_69);
            LocalPopChoice(c_35);
          }
        else
          {
            t = b_35;
            t = u_69(m_69, n_69, o_69, j_69, t);
          }
      }
    }
  else
    {
      t = u_69(m_69, n_69, o_69, j_69, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  static ATerm q_71 (ATerm t)
  {
    ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL;
    m_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_71 = ATgetFirst((ATermList) t);
        l_71 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_30 = NULL,a_31 = NULL,y_5 = NULL;
          t = SSLgetAnnotations(m_71);
          w_30 = t;
          t = l_71;
          t = q_71(t);
          a_31 = t;
          t = (ATerm) ATinsert(CheckATermList(a_31), k_71);
          y_5 = t;
          t = SSLsetAnnotations(y_5, w_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_71;
        t = x_115(t);
      }
    return(t);
  }
  t = q_71(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,i_70 = NULL;
  w_69 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_69;
    }
  else
    {
      static ATerm h_9 (ATerm t)
      {
        t = not_null(i_70);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_69 = ATgetFirst((ATermList) t);
          if(((i_70 != NULL) && (i_70 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_69;
      t = at_end_1_0(h_9, t);
    }
  return(t);
}
static ATerm n_73 (ATerm x_72, ATerm t)
{
  ATerm y_72 = NULL;
  t = SSL_explode_term(x_72);
  if(match_cons(t, sym__2))
    {
      ATerm d_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_72;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL;
  e_73 = t;
  if(match_cons(t, sym__2))
    {
      c_73 = ATgetArgument(t, 0);
      d_73 = ATgetArgument(t, 1);
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_9 (ATerm t)
            {
              t = d_73;
              return(t);
            }
            t = c_73;
            t = at_end_1_0(i_9, t);
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            t = n_73(e_73, t);
          }
      }
    }
  else
    {
      t = n_73(e_73, t);
    }
  return(t);
}
static ATerm c_10 (ATerm e_117 (ATerm), ATerm z_46, ATerm y_46, ATerm t)
{
  static ATerm m_77 (ATerm t)
  {
    ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
    o_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_76;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_76 = ATgetFirst((ATermList) t);
            q_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_76;
              {
                static ATerm k_9 (ATerm t)
                {
                  t = y_46;
                  return(t);
                }
                t = n_10(e_117, k_9, p_76, q_76, t);
              }
              t = m_77(t);
              LocalPopChoice(h_35);
            }
          else
            {
              t = g_35;
              {
                ATerm x_31 = NULL,a_32 = NULL,l_6 = NULL;
                t = SSLgetAnnotations(o_76);
                x_31 = t;
                t = q_76;
                t = m_77(t);
                a_32 = t;
                t = (ATerm) ATinsert(CheckATermList(a_32), p_76);
                l_6 = t;
                t = SSLsetAnnotations(l_6, x_31);
              }
            }
        }
      }
    return(t);
  }
  t = z_46;
  t = m_77(t);
  return(t);
}
ATerm genzip_4_0 (ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t)
{
  static ATerm x_79 (ATerm t)
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_107(t);
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        {
          ATerm o_77 = NULL,p_77 = NULL,c_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_6 = NULL;
          t = m_107(t);
          r_79 = t;
          if(match_cons(t, sym__2))
            {
              p_77 = ATgetArgument(t, 0);
              c_79 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_79);
          o_77 = t;
          t = p_77;
          t = o_107(t);
          p_79 = t;
          t = c_79;
          t = x_79(t);
          q_79 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_79, q_79);
          s_6 = t;
          t = SSLsetAnnotations(s_6, o_77);
          t = n_107(t);
        }
      }
    return(t);
  }
  t = x_79(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_35 = ATgetArgument(t, 0);
      if(((ATgetType(n_35) != AT_LIST) || !(ATisEmpty(n_35))))
        _fail(t);
      {
        ATerm o_35 = ATgetArgument(t, 1);
        if(((ATgetType(o_35) != AT_LIST) || !(ATisEmpty(o_35))))
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
  ATerm o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(((ATgetType(p_35) == AT_LIST) && !(ATisEmpty(p_35))))
        {
          o_80 = ATgetFirst((ATermList) p_35);
          p_80 = (ATerm) ATgetNext((ATermList) p_35);
        }
      else
        _fail(t);
      {
        ATerm q_35 = ATgetArgument(t, 1);
        if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
          {
            q_80 = ATgetFirst((ATermList) q_35);
            r_80 = (ATerm) ATgetNext((ATermList) q_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_80, q_80), (ATerm) ATmakeAppl(sym__2, p_80, r_80));
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL;
  if(match_cons(t, sym__2))
    {
      u_80 = ATgetArgument(t, 0);
      v_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_80), u_80);
  return(t);
}
static ATerm h_10 (ATerm e_706, ATerm j_706, ATerm a_69, ATerm t)
{
  ATerm c_80 = NULL,g_80 = NULL,j_80 = NULL,l_80 = NULL;
  t = SSL_explode_term(j_706);
  if(match_cons(t, sym__2))
    {
      c_80 = ATgetArgument(t, 0);
      j_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_706);
  if(match_cons(t, sym__2))
    {
      if((c_80 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_80, j_80);
  t = genzip_4_0(m_9, n_9, o_9, _id, t);
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_80, a_69);
  t = conc_0_0(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm e_81 = NULL;
  e_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_81);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,x_6 = NULL;
  i_81 = t;
  if(match_cons(t, sym__2))
    {
      g_81 = ATgetArgument(t, 0);
      h_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_81);
  f_81 = t;
  t = h_81;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_81, h_81);
  x_6 = t;
  t = SSLsetAnnotations(x_6, f_81);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL;
  d_82 = t;
  if(match_cons(t, sym__2))
    {
      e_82 = ATgetArgument(t, 0);
      f_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_82 = ATgetFirst((ATermList) t);
      h_82 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_82(e_82, f_82, d_82, t);
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_82), g_82), h_82);
          }
      }
    }
  else
    {
      t = r_82(e_82, f_82, d_82, t);
    }
  return(t);
}
static ATerm r_82 (ATerm j_81, ATerm k_81, ATerm l_81, ATerm t)
{
  ATerm m_81 = NULL,p_81 = NULL,y_6 = NULL,s_81 = NULL,u_81 = NULL,v_81 = NULL,x_81 = NULL;
  t = SSLgetAnnotations(l_81);
  m_81 = t;
  t = k_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_81 = ATgetFirst((ATermList) t);
      x_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_81;
  if(match_cons(t, sym__2))
    {
      u_81 = ATgetArgument(t, 0);
      v_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_81;
        if((u_81 != t))
          {
            _fail(t);
          }
        t = x_81;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = k_81;
        t = h_10(u_81, v_81, x_81, t);
      }
  }
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_81, p_81);
  y_6 = t;
  t = SSLsetAnnotations(y_6, m_81);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm q_82 = NULL;
  if(match_cons(t, sym__2))
    {
      q_82 = ATgetArgument(t, 0);
      if((q_82 != ATgetArgument(t, 1)))
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
  ATerm w_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_9, z_9, a_10, t);
      LocalPopChoice(y_35);
    }
  else
    {
      t = w_35;
      {
        ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
        l_82 = t;
        if(match_cons(t, sym__2))
          {
            m_82 = ATgetArgument(t, 0);
            n_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_82;
        t = c_10(b_10, m_82, n_82, t);
      }
    }
  return(t);
}
static ATerm j_10 (ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm b_70, ATerm y_69, ATerm g_70, ATerm c_70, ATerm z_69, ATerm a_70, ATerm t)
{
  ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_70, c_70);
  t = q_134(t);
  if(match_cons(t, sym__2))
    {
      t_82 = ATgetArgument(t, 0);
      s_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_82;
  t = r_134(t);
  u_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_82, g_70);
  t = diff_0_0(t);
  v_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_82, y_69);
  t = conc_0_0(t);
  w_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_82, g_70);
  t = conc_0_0(t);
  x_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_70, t_82, z_69);
  t = s_134(t);
  y_82 = t;
  t = (ATerm) ATmakeAppl(sym__5, w_82, x_82, s_82, y_82, a_70);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm z_35 = ATgetArgument(t, 0);
      if(((ATgetType(z_35) == AT_LIST) && !(ATisEmpty(z_35))))
        {
          a_83 = ATgetFirst((ATermList) z_35);
          b_83 = (ATerm) ATgetNext((ATermList) z_35);
        }
      else
        _fail(t);
      c_83 = ATgetArgument(t, 1);
      d_83 = ATgetArgument(t, 2);
      e_83 = ATgetArgument(t, 3);
      f_83 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = j_10(q_134, r_134, s_134, a_83, b_83, c_83, d_83, e_83, f_83, t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm t)
{
  static ATerm g_83 (ATerm t)
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_109(t);
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = m_109(t);
        t = g_83(t);
      }
    return(t);
  }
  t = g_83(t);
  return(t);
}
ATerm for_3_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm t)
{
  t = o_109(t);
  t = while_not_2_0(p_109, q_109, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL;
  if(match_cons(t, sym__3))
    {
      q_83 = ATgetArgument(t, 0);
      r_83 = ATgetArgument(t, 1);
      s_83 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, q_83, q_83, r_83, s_83, (ATerm) ATempty);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(((ATgetType(f_36) != AT_LIST) || !(ATisEmpty(f_36))))
        _fail(t);
      {
        ATerm g_36 = ATgetArgument(t, 1);
      }
      {
        ATerm h_36 = ATgetArgument(t, 2);
      }
      v_83 = ATgetArgument(t, 3);
      w_83 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_83, w_83);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm i_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, g_10, i_10, t);
      LocalPopChoice(m_36);
    }
  else
    {
      t = i_36;
      {
        ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
        if(match_cons(t, sym__5))
          {
            c_84 = ATgetArgument(t, 0);
            f_84 = ATgetArgument(t, 1);
            g_84 = ATgetArgument(t, 2);
            h_84 = ATgetArgument(t, 3);
            i_84 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = c_84;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_84 = ATgetFirst((ATermList) t);
            e_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, e_84, f_84, g_84, h_84, (ATerm) ATinsert(CheckATermList(i_84), d_84));
      }
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(k_10, t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      z_83 = ATgetArgument(t, 1);
      a_84 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_84), z_83);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm t_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(v_36);
    }
  else
    {
      t = t_36;
    }
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,k_34 = NULL,l_34 = NULL;
  f_34 = t;
  if(match_cons(t, sym__2))
    {
      k_34 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_34;
  if(match_cons(t, sym_Mod_2))
    {
      d_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_34;
            t = c_9(d_34, e_34, l_34, t);
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            t = a_35(k_34, l_34, t);
          }
      }
    }
  else
    {
      t = a_35(k_34, l_34, t);
    }
  return(t);
}
static ATerm a_35 (ATerm m_33, ATerm s_33, ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  t = term_c_17;
  b_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_18), s_33), term_b_18), m_33), term_z_17);
  c_34 = t;
  t = SSL_printnl(b_34, c_34);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_18), s_33), term_b_18), m_33), term_z_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL,p_85 = NULL;
  t = for_3_0(d_10, e_10, f_10, t);
  l_85 = t;
  if(match_cons(t, sym__2))
    {
      m_85 = ATgetArgument(t, 0);
      n_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_85;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_85;
    }
  else
    {
      ATerm e_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_85 = ATgetFirst((ATermList) t);
          p_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(p_85), o_85);
      t = map_1_0(l_10, t);
      t = term_f_17;
      e_33 = t;
      t = SSL_exit(e_33);
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL;
  if(match_cons(t, sym__2))
    {
      h_86 = ATgetArgument(t, 0);
      i_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(h_86, i_86, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL;
  if(match_cons(t, sym__2))
    {
      j_86 = ATgetArgument(t, 0);
      k_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(j_86, k_86, t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm l_86 = NULL;
  if(match_cons(t, sym__2))
    {
      l_86 = ATgetArgument(t, 0);
      if((l_86 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_z_36;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL;
  v_85 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      y_85 = ATgetArgument(t, 0);
      t_85 = ATgetArgument(t, 1);
      u_85 = ATgetArgument(t, 2);
      {
        ATerm c_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_86 = t;
  t = t_85;
  t = foldr_3_0(r_10, b_11, g_11, t);
  w_85 = t;
  t = u_85;
  t = foldr_3_0(j_11, l_11, m_11, t);
  x_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_85, (ATerm) ATmakeAppl(sym__2, w_85, x_85));
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = (ATerm) ATempty;
      }
  }
  c_86 = t;
  t = y_85;
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        t = (ATerm) ATempty;
      }
  }
  b_86 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_85, x_85));
  g_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_85, x_85)), b_86);
  t = o_10(q_11, g_86, b_86, t);
  z_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_85, (ATerm) ATmakeAppl(sym__2, w_85, x_85));
  e_86 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_37, (ATerm) ATinsert(CheckATermList(c_86), v_85));
  f_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_85, (ATerm) ATmakeAppl(sym__2, w_85, x_85)), (ATerm) ATmakeAppl(sym_Defined_2, term_h_37, (ATerm) ATinsert(CheckATermList(c_86), v_85)));
  t = m_10(r_11, e_86, f_86, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_37, z_85);
  d_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_85, (ATerm) ATmakeAppl(sym_Defined_2, term_j_37, z_85));
  t = m_10(s_11, y_85, d_86, t);
  t = a_86;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL;
  if(match_cons(t, sym__2))
    {
      a_87 = ATgetArgument(t, 0);
      b_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(a_87, b_87, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL;
  if(match_cons(t, sym__2))
    {
      c_87 = ATgetArgument(t, 0);
      d_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(c_87, d_87, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm e_87 = NULL;
  if(match_cons(t, sym__2))
    {
      e_87 = ATgetArgument(t, 0);
      if((e_87 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_z_36;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL;
  o_86 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      r_86 = ATgetArgument(t, 0);
      m_86 = ATgetArgument(t, 1);
      n_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t_86 = t;
  t = m_86;
  t = foldr_3_0(u_11, v_11, x_11, t);
  p_86 = t;
  t = n_86;
  t = foldr_3_0(z_11, g_12, h_12, t);
  q_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_86, (ATerm) ATmakeAppl(sym__2, p_86, q_86));
  {
    ATerm k_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(m_37);
      }
    else
      {
        t = k_37;
        t = (ATerm) ATempty;
      }
  }
  v_86 = t;
  t = r_86;
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        t = (ATerm) ATempty;
      }
  }
  u_86 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_86, q_86));
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_86, q_86)), u_86);
  t = o_10(i_12, z_86, u_86, t);
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_86, (ATerm) ATmakeAppl(sym__2, p_86, q_86));
  x_86 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_37, (ATerm) ATinsert(CheckATermList(v_86), o_86));
  y_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_86, (ATerm) ATmakeAppl(sym__2, p_86, q_86)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_37, (ATerm) ATinsert(CheckATermList(v_86), o_86)));
  t = m_10(l_12, x_86, y_86, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_37, s_86);
  w_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_86, (ATerm) ATmakeAppl(sym_Defined_2, term_r_37, s_86));
  t = m_10(p_12, r_86, w_86, t);
  t = t_86;
  return(t);
}
static ATerm m_10 (ATerm s_114 (ATerm), ATerm k_42, ATerm i_42, ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL;
  i_87 = t;
  t = s_114(t);
  f_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_87, k_42, i_42);
  t = d_11(f_87, k_42, i_42, t);
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_87 = NULL;
        t = term_v_37;
        l_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_87, term_v_37);
        t = c_11(f_87, l_87, t);
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_87 = ATgetFirst((ATermList) t);
      h_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_37;
  j_87 = t;
  t = (ATerm) ATinsert(CheckATermList(h_87), (ATerm) ATinsert(CheckATermList(g_87), k_42));
  k_87 = t;
  t = SSL_table_put(f_87, j_87, k_87);
  t = i_87;
  return(t);
}
static ATerm n_10 (ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm f_47, ATerm e_47, ATerm t)
{
  t = n_117(t);
  {
    static ATerm r_12 (ATerm t)
    {
      ATerm m_87 = NULL;
      m_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_47, m_87);
      t = m_117(t);
      return(t);
    }
    t = fetch_1_0(r_12, t);
  }
  t = e_47;
  return(t);
}
static ATerm o_10 (ATerm j_117 (ATerm), ATerm b_47, ATerm a_47, ATerm t)
{
  static ATerm c_88 (ATerm t)
  {
    ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
    x_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_47;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_87 = ATgetFirst((ATermList) t);
            z_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_37 = t;
          int x_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_87;
              {
                static ATerm s_12 (ATerm t)
                {
                  t = a_47;
                  return(t);
                }
                t = n_10(j_117, s_12, y_87, z_87, t);
              }
              t = c_88(t);
              LocalPopChoice(x_37);
            }
          else
            {
              t = w_37;
              {
                ATerm j_35 = NULL,m_35 = NULL,d_7 = NULL;
                t = SSLgetAnnotations(x_87);
                j_35 = t;
                t = z_87;
                t = c_88(t);
                m_35 = t;
                t = (ATerm) ATinsert(CheckATermList(m_35), y_87);
                d_7 = t;
                t = SSLsetAnnotations(d_7, j_35);
              }
            }
        }
      }
    return(t);
  }
  t = b_47;
  t = c_88(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm s_88 = NULL;
  s_88 = t;
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_36 = NULL,u_36 = NULL;
        t = term_a_37;
        u_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_37, s_88);
        t = q_10(u_36, s_88, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm a_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_38) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            r_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_36;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        {
          ATerm b_38 = t;
          int c_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_36 = NULL,b_37 = NULL;
              t = term_a_37;
              b_37 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_37, s_88);
              t = q_10(b_37, s_88, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_38 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_38) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  y_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_36;
              LocalPopChoice(c_38);
            }
          else
            {
              t = b_38;
              {
                ATerm i_37 = NULL,l_37 = NULL;
                t = term_a_37;
                l_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_37, s_88);
                t = q_10(l_37, s_88, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm e_38 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_38) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    i_37 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_37;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm q_10 (ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm w_88 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_43, a_44);
  t = c_11(z_43, a_44, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_88 = ATgetFirst((ATermList) t);
      {
        ATerm f_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_88;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm n_89 = NULL,p_89 = NULL;
  n_89 = t;
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      p_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_89;
  if(match_cons(t, sym__2))
    {
      ATerm h_38 = ATgetArgument(t, 0);
      ATerm i_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_38 = NULL,v_38 = NULL;
        t = term_z_36;
        v_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_36, n_89);
        t = q_10(v_38, n_89, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_38) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            m_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_38;
        LocalPopChoice(k_38);
      }
    else
      {
        t = j_38;
        {
          ATerm n_38 = t;
          int o_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_39 = NULL,l_39 = NULL;
              t = term_z_36;
              l_39 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_36, n_89);
              t = q_10(l_39, n_89, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_38 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_38) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  d_39 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_39;
              LocalPopChoice(o_38);
            }
          else
            {
              t = n_38;
              {
                ATerm w_39 = NULL,d_40 = NULL;
                t = term_z_36;
                d_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_36, n_89);
                t = q_10(d_40, n_89, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm q_38 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_38) != ATmakeSymbol("q_0", 0, ATtrue)))
                      _fail(t);
                    w_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_39;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  w_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_89;
      t = z_119(t);
    }
  else
    {
      ATerm b_90 = NULL,c_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_89 = ATgetFirst((ATermList) t);
          y_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_89;
      t = b_120(t);
      b_90 = t;
      t = y_89;
      t = foldr_3_0(z_119, a_120, b_120, t);
      c_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_90, c_90);
      t = a_120(t);
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL;
  if(match_cons(t, sym__2))
    {
      r_90 = ATgetArgument(t, 0);
      s_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(r_90, s_90, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL;
  if(match_cons(t, sym__2))
    {
      t_90 = ATgetArgument(t, 0);
      u_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(t_90, u_90, t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm v_90 = NULL;
  if(match_cons(t, sym__2))
    {
      v_90 = ATgetArgument(t, 0);
      if((v_90 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_z_36;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL;
  f_90 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_90 = ATgetArgument(t, 0);
      d_90 = ATgetArgument(t, 1);
      e_90 = ATgetArgument(t, 2);
      {
        ATerm r_38 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  k_90 = t;
  t = d_90;
  t = foldr_3_0(y_12, z_12, m_13, t);
  g_90 = t;
  t = e_90;
  t = foldr_3_0(n_13, o_13, p_13, t);
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_90, (ATerm) ATmakeAppl(sym__2, g_90, h_90));
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        t = (ATerm) ATempty;
      }
  }
  m_90 = t;
  t = i_90;
  {
    ATerm u_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(w_38);
      }
    else
      {
        t = u_38;
        t = (ATerm) ATempty;
      }
  }
  l_90 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_90, h_90));
  q_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_90, h_90)), l_90);
  t = o_10(q_13, q_90, l_90, t);
  j_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_90, (ATerm) ATmakeAppl(sym__2, g_90, h_90));
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_38, (ATerm) ATinsert(CheckATermList(m_90), f_90));
  p_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_90, (ATerm) ATmakeAppl(sym__2, g_90, h_90)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_38, (ATerm) ATinsert(CheckATermList(m_90), f_90)));
  t = m_10(r_13, o_90, p_90, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_38, j_90);
  n_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_90, (ATerm) ATmakeAppl(sym_Defined_2, term_y_38, j_90));
  t = m_10(s_13, i_90, n_90, t);
  t = k_90;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm z_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(a_39);
    }
  else
    {
      t = z_38;
      {
        ATerm b_39 = t;
        int c_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(c_39);
          }
        else
          {
            t = b_39;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm w_90 = NULL;
  t = map_1_0(t_13, t);
  w_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_g_39), w_90, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,f_7 = NULL;
  c_91 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_90 = ATgetFirst((ATermList) t);
      z_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_91);
  x_90 = t;
  t = y_90;
  t = d_88(t);
  a_91 = t;
  t = z_90;
  t = e_88(t);
  b_91 = t;
  t = (ATerm) ATinsert(CheckATermList(b_91), a_91);
  f_7 = t;
  t = SSLsetAnnotations(f_7, x_90);
  return(t);
}
static ATerm t_10 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm d_91 = NULL;
  t = SSL_fputc(o_33, p_33);
  d_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_91);
  return(t);
}
static ATerm u_10 (ATerm j_32, ATerm k_32, ATerm t)
{
  ATerm e_91 = NULL;
  t = SSL_write_term_to_stream_text(j_32, k_32);
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_91);
  return(t);
}
static ATerm w_10 (ATerm j_110 (ATerm), ATerm o_245, ATerm n_32, ATerm t)
{
  ATerm f_91 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_245, term_h_39);
  t = z_10(t);
  f_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_91, n_32);
  t = j_110(t);
  t = fclose_0_0(t);
  t = n_32;
  return(t);
}
static ATerm v_10 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm g_91 = NULL;
  t = SSL_write_term_to_stream_baf(f_32, g_32);
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_91);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_39 = ATgetArgument(t, 0);
      if(match_cons(i_39, sym_Stream_1))
        {
          f_41 = ATgetArgument(i_39, 0);
        }
      else
        _fail(t);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(f_41, g_41, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,j_42 = NULL,l_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      if(match_cons(j_39, sym_Stream_1))
        {
          j_42 = ATgetArgument(j_39, 0);
        }
      else
        _fail(t);
      l_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(j_42, l_42, t);
  a_42 = t;
  t = term_j_21;
  b_42 = t;
  t = a_42;
  if(match_cons(t, sym_Stream_1))
    {
      c_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_21, a_42);
  t = t_10(b_42, c_42, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL,u_92 = NULL,v_92 = NULL,j_7 = NULL,i_7 = NULL;
  l_91 = t;
  if(match_cons(t, sym__2))
    {
      s_91 = ATgetArgument(t, 0);
      t_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_91);
  r_91 = t;
  t = s_91;
  {
    ATerm k_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_91 != NULL) && (k_91 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_91 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_13, t);
        LocalPopChoice(m_39);
      }
    else
      {
        t = k_39;
        t = term_n_39;
        k_91 = t;
      }
  }
  u_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_91, t_91);
  i_7 = t;
  t = SSLsetAnnotations(i_7, r_91);
  t = l_91;
  if(match_cons(t, sym__2))
    {
      n_91 = ATgetArgument(t, 0);
      o_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_91);
  m_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_91, (ATerm) ATmakeAppl(sym__2, not_null(k_91), o_91));
  j_7 = t;
  t = SSLsetAnnotations(j_7, m_91);
  q_91 = t;
  if(match_cons(t, sym__2))
    {
      u_92 = ATgetArgument(t, 0);
      v_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_40 = NULL,t_40 = NULL,u_40 = NULL,y_40 = NULL,e_41 = NULL,k_7 = NULL;
        t = SSLgetAnnotations(q_91);
        i_40 = t;
        t = u_92;
        t = fetch_1_0(v_13, t);
        t_40 = t;
        t = v_92;
        if(match_cons(t, sym__2))
          {
            y_40 = ATgetArgument(t, 0);
            e_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_10(y_13, y_40, e_41, t);
        u_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_40, u_40);
        k_7 = t;
        t = SSLsetAnnotations(k_7, i_40);
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        {
          ATerm r_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,l_7 = NULL;
          t = SSLgetAnnotations(q_91);
          r_41 = t;
          t = v_92;
          if(match_cons(t, sym__2))
            {
              y_41 = ATgetArgument(t, 0);
              z_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_10(z_13, y_41, z_41, t);
          x_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_92, x_41);
          l_7 = t;
          t = SSLsetAnnotations(l_7, r_41);
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
ATerm apply_strategy_1_0 (ATerm i_129 (ATerm), ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  c_93 = t;
  t = dtime_0_0(t);
  t = c_93;
  t = i_129(t);
  b_93 = t;
  t = dtime_0_0(t);
  y_92 = t;
  t = b_93;
  if(match_cons(t, sym__2))
    {
      z_92 = ATgetArgument(t, 0);
      a_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_92), (ATerm) ATmakeAppl(sym_Runtime_1, y_92)), a_93);
  return(t);
}
static ATerm q_93 (ATerm k_93, ATerm t)
{
  t = SSL_fclose(k_93);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_93 = NULL,o_93 = NULL;
  o_93 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_93 = ATgetArgument(t, 0);
      {
        ATerm q_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_93);
            LocalPopChoice(r_39);
          }
        else
          {
            t = q_39;
            t = q_93(o_93, t);
          }
      }
    }
  else
    {
      t = q_93(o_93, t);
    }
  return(t);
}
static ATerm x_10 (ATerm l_32, ATerm t)
{
  t = SSL_read_term_from_stream(l_32);
  return(t);
}
static ATerm y_10 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm r_93 = NULL;
  t = SSL_fopen(q_33, r_33);
  r_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_93);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_93 = NULL;
  t = SSL_stdin_stream();
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_93);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_93 = NULL;
  t = SSL_stdout_stream();
  t_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_93);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_93 = NULL;
  t = SSL_stderr_stream();
  u_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_93);
  return(t);
}
static ATerm b_95 (ATerm a_94, ATerm t)
{
  ATerm b_94 = NULL;
  t = SSL_explode_term(a_94);
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_39 = ATgetArgument(t, 1);
        if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
          {
            b_94 = ATgetFirst((ATermList) t_39);
            {
              ATerm u_39 = (ATerm) ATgetNext((ATermList) t_39);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_94;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_94;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_94;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_94;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_95 (ATerm e_94, ATerm f_94, ATerm g_94, ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL,m_94 = NULL,r_7 = NULL;
  t = SSLgetAnnotations(g_94);
  j_94 = t;
  t = e_94;
  if(match_cons(t, sym_Path_1))
    {
      m_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_94, f_94);
  r_7 = t;
  t = SSLsetAnnotations(r_7, j_94);
  if(match_cons(t, sym__2))
    {
      h_94 = ATgetArgument(t, 0);
      i_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(h_94, i_94, t);
  return(t);
}
static ATerm d_95 (ATerm o_94, ATerm p_94, ATerm q_94, ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL,w_94 = NULL,s_7 = NULL;
  t = SSLgetAnnotations(q_94);
  t_94 = t;
  t = SSL_is_string(o_94);
  w_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_94, p_94);
  s_7 = t;
  t = SSLsetAnnotations(s_7, t_94);
  if(match_cons(t, sym__2))
    {
      r_94 = ATgetArgument(t, 0);
      s_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(r_94, s_94, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  y_94 = t;
  if(match_cons(t, sym__2))
    {
      z_94 = ATgetArgument(t, 0);
      a_95 = ATgetArgument(t, 1);
      {
        ATerm v_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_95(y_94, t);
            LocalPopChoice(x_39);
          }
        else
          {
            t = v_39;
            {
              ATerm y_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_95(z_94, a_95, y_94, t);
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = y_39;
                  t = d_95(z_94, a_95, y_94, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_95(y_94, t);
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL;
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_95 = NULL;
      h_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_95, term_e_40);
      t = z_10(t);
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      t = debug_1_0(a_14, t);
      _fail(t);
    }
  f_95 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(g_95, t);
  e_95 = t;
  t = f_95;
  t = fclose_0_0(t);
  t = e_95;
  return(t);
}
ATerm fetch_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  static ATerm f_96 (ATerm t)
  {
    ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL;
    c_96 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_96 = ATgetFirst((ATermList) t);
        e_96 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_40 = t;
      int g_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_43 = NULL,k_43 = NULL,z_7 = NULL;
          t = SSLgetAnnotations(c_96);
          h_43 = t;
          t = d_96;
          t = r_115(t);
          k_43 = t;
          t = (ATerm) ATinsert(CheckATermList(e_96), k_43);
          z_7 = t;
          t = SSLsetAnnotations(z_7, h_43);
          LocalPopChoice(g_40);
        }
      else
        {
          t = f_40;
          {
            ATerm g_44 = NULL,j_44 = NULL,g_8 = NULL;
            t = SSLgetAnnotations(c_96);
            g_44 = t;
            t = e_96;
            t = f_96(t);
            j_44 = t;
            t = (ATerm) ATinsert(CheckATermList(j_44), d_96);
            g_8 = t;
            t = SSLsetAnnotations(g_8, g_44);
          }
        }
    }
    return(t);
  }
  t = f_96(t);
  return(t);
}
static ATerm s_10 (ATerm e_56, ATerm f_56, ATerm t)
{
  t = SSL_strcat(e_56, f_56);
  return(t);
}
ATerm debug_1_0 (ATerm h_110 (ATerm), ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL;
  i_96 = t;
  t = h_110(t);
  j_96 = t;
  t = term_c_17;
  k_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_96), j_96);
  l_96 = t;
  t = SSL_printnl(k_96, l_96);
  t = i_96;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm h_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(j_40);
    }
  else
    {
      t = h_40;
    }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_k_40;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_96 = NULL;
      s_96 = t;
      t = SSL_is_string(s_96);
      LocalPopChoice(m_40);
    }
  else
    {
      t = l_40;
      {
        ATerm n_40 = t;
        int o_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_14, t);
            LocalPopChoice(o_40);
          }
        else
          {
            t = n_40;
            {
              ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
              y_96 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_96 = ATgetArgument(t, 0);
                  t = z_96;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_96 = ATgetArgument(t, 0);
                      t = z_96;
                      {
                        ATerm p_40 = t;
                        int q_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(q_40);
                          }
                        else
                          {
                            t = p_40;
                            t = debug_1_0(f_14, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_97 = NULL,f_97 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_96 = ATgetArgument(t, 0);
                          a_97 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_96;
                      t = eval_config_0_0(t);
                      e_97 = t;
                      t = a_97;
                      t = eval_config_0_0(t);
                      f_97 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_97, f_97);
                      t = s_10(e_97, f_97, t);
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
  ATerm j_97 = NULL,k_97 = NULL;
  j_97 = t;
  t = term_r_40;
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_40, j_97);
  t = c_11(k_97, j_97, t);
  {
    ATerm s_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_97 = NULL,m_97 = NULL;
        t = eval_config_0_0(t);
        l_97 = t;
        t = term_r_40;
        m_97 = t;
        t = SSL_table_put(m_97, j_97, l_97);
        t = l_97;
        LocalPopChoice(v_40);
      }
    else
      {
        t = s_40;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm q_97 = NULL;
  q_97 = t;
  {
    ATerm z_40 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_97 = NULL;
        t = term_i_41;
        t = get_config_0_0(t);
        s_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_97, term_j_41);
        t = geq_0_0(t);
        t = q_97;
        t = a_112(t);
        LocalPopChoice(h_41);
      }
    else
      {
        t = z_40;
        t = q_97;
      }
  }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm v_97 = NULL;
  v_97 = t;
  if(match_string(t, "-k"))
    {
      t = v_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_97;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm w_97 = NULL,x_97 = NULL,y_97 = NULL;
  w_97 = t;
  t = SSL_string_to_int(w_97);
  x_97 = t;
  t = term_m_41;
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_41, x_97);
  t = f_11(y_97, x_97, t);
  t = w_97;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_n_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_14, j_14, k_14, t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm a_98 = NULL;
  a_98 = t;
  if(match_string(t, "-S"))
    {
      t = a_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_98;
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL;
  t = term_i_41;
  b_98 = t;
  t = term_n_19;
  c_98 = t;
  t = term_o_41;
  t = f_11(b_98, c_98, t);
  t = term_p_41;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL;
  d_98 = t;
  t = SSL_string_to_int(d_98);
  e_98 = t;
  t = term_i_41;
  f_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_41, e_98);
  t = f_11(f_98, e_98, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_98);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_s_41;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL;
  t = term_t_41;
  g_98 = t;
  t = term_b_17;
  h_98 = t;
  t = term_u_41;
  t = f_11(g_98, h_98, t);
  t = term_v_41;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_14, q_14, r_14, t);
      LocalPopChoice(p_42);
    }
  else
    {
      t = m_42;
      {
        ATerm q_42 = t;
        int r_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_14, u_14, v_14, t);
            LocalPopChoice(r_42);
          }
        else
          {
            t = q_42;
            t = Option_3_0(w_14, x_14, z_14, t);
          }
      }
    }
  return(t);
}
static ATerm f_11 (ATerm q_37, ATerm s_37, ATerm t)
{
  ATerm i_98 = NULL;
  t = term_r_40;
  i_98 = t;
  t = SSL_table_put(i_98, q_37, s_37);
  t = (ATerm) ATmakeAppl(sym__3, term_r_40, q_37, s_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm l_98 = NULL,m_98 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL;
      t = term_b_17;
      t = i_0(t);
      n_98 = t;
      t = term_s_42;
      o_98 = t;
      t = term_t_42;
      p_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_42, term_t_42, n_98);
      t = d_11(o_98, p_98, n_98, t);
      _fail(t);
    }
  else
    {
      ATerm s_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_98 = ATgetFirst((ATermList) t);
          m_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_98;
      t = d_0(t);
      t = term_b_17;
      t = g_0(t);
      s_98 = t;
      t = (ATerm) ATinsert(CheckATermList(m_98), s_98);
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm u_98 = NULL;
  u_98 = t;
  if(match_string(t, "-o"))
    {
      t = u_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_98;
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm v_98 = NULL,w_98 = NULL;
  v_98 = t;
  t = term_u_42;
  w_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_42, v_98);
  t = f_11(w_98, v_98, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_98);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_v_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_15, b_15, c_15, t);
  return(t);
}
static ATerm d_11 (ATerm o_43, ATerm p_43, ATerm n_43, ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL;
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_43, p_43);
  {
    ATerm w_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_43 = ATgetArgument(t, 0);
            ATerm f_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_43, p_43);
        t = c_11(o_43, p_43, t);
        LocalPopChoice(x_42);
      }
    else
      {
        t = w_42;
        t = (ATerm) ATempty;
      }
  }
  z_98 = t;
  t = (ATerm) ATinsert(CheckATermList(z_98), n_43);
  a_99 = t;
  t = SSL_table_put(o_43, p_43, a_99);
  t = y_98;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL;
      t = term_b_17;
      t = t_0(t);
      l_99 = t;
      t = term_s_42;
      m_99 = t;
      t = term_t_42;
      n_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_42, term_t_42, l_99);
      t = d_11(m_99, n_99, l_99, t);
      _fail(t);
    }
  else
    {
      ATerm r_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_99 = ATgetFirst((ATermList) t);
          i_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_99 = ATgetFirst((ATermList) t);
          k_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_99;
      t = p_0(t);
      t = j_99;
      t = r_0(t);
      r_99 = t;
      t = (ATerm) ATinsert(CheckATermList(k_99), r_99);
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm t_99 = NULL;
  t_99 = t;
  if(match_string(t, "-i"))
    {
      t = t_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_99;
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm u_99 = NULL,v_99 = NULL;
  u_99 = t;
  t = term_g_43;
  v_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_43, u_99);
  t = f_11(v_99, u_99, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_99);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_i_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_15, f_15, g_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_17;
  t = whoami_0_0(t);
  w_99 = t;
  t = term_c_17;
  y_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_43), w_99);
  z_99 = t;
  t = SSL_printnl(y_99, z_99);
  t = term_f_17;
  x_99 = t;
  t = SSL_exit(x_99);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_43;
  t = get_config_0_0(t);
  return(t);
}
static ATerm a_11 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm s_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_40, x_40);
      LocalPopChoice(t_43);
    }
  else
    {
      t = s_43;
      t = SSL_addr(w_40, x_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
  b_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_100;
      t = x_119(t);
    }
  else
    {
      ATerm g_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_100 = ATgetFirst((ATermList) t);
          d_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_100;
      t = foldr_2_0(x_119, y_119, t);
      g_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_100, g_100);
      t = y_119(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  if(match_cons(t, sym__2))
    {
      t_45 = ATgetArgument(t, 0);
      u_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(t_45, u_45, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_100 = NULL,j_45 = NULL,k_45 = NULL;
  t = times_0_0(t);
  k_45 = t;
  t = SSL_explode_term(k_45);
  if(match_cons(t, sym__2))
    {
      ATerm u_43 = ATgetArgument(t, 0);
      j_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_45;
  t = foldr_2_0(h_15, j_15, t);
  j_100 = t;
  t = SSL_TicksToSeconds(j_100);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_100 = NULL,v_100 = NULL,w_100 = NULL;
  u_100 = t;
  if(match_cons(t, sym__2))
    {
      v_100 = ATgetArgument(t, 0);
      w_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_100;
        if((v_100 != t))
          {
            _fail(t);
          }
        t = u_100;
        LocalPopChoice(x_43);
      }
    else
      {
        t = v_43;
        t = (ATerm) ATmakeAppl(sym__2, v_100, w_100);
        {
          ATerm y_43 = t;
          int c_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_100, w_100);
              LocalPopChoice(c_44);
            }
          else
            {
              t = y_43;
              t = SSL_gtr(v_100, w_100);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_100, w_100);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm a_101 = NULL;
  a_101 = t;
  {
    ATerm d_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_101 = NULL;
        t = term_i_41;
        t = get_config_0_0(t);
        c_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_101, term_f_17);
        t = geq_0_0(t);
        t = a_101;
        t = z_111(t);
        LocalPopChoice(e_44);
      }
    else
      {
        t = d_44;
        t = a_101;
      }
  }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm e_101 = NULL,f_101 = NULL,h_101 = NULL,i_101 = NULL;
  t = run_time_0_0(t);
  e_101 = t;
  t = term_b_17;
  t = whoami_0_0(t);
  f_101 = t;
  t = term_c_17;
  h_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_44), e_101), term_f_44), f_101);
  i_101 = t;
  t = SSL_printnl(h_101, i_101);
  t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_44), e_101), term_f_44), f_101));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_101 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_19;
  j_101 = t;
  t = SSL_exit(j_101);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL;
  s_101 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_101;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_101 = ATgetArgument(t, 0);
          {
            ATerm l_47 = NULL,k_8 = NULL;
            t = SSLgetAnnotations(s_101);
            l_47 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_101);
            k_8 = t;
            t = SSLsetAnnotations(k_8, l_47);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_101;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_130 (ATerm), ATerm t)
{
  ATerm i_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_44;
      t = get_config_0_0(t);
      LocalPopChoice(k_44);
    }
  else
    {
      t = i_44;
      t = fetch_1_0(l_15, t);
    }
  t = g_130(t);
  return(t);
}
ATerm map_1_0 (ATerm h_115 (ATerm), ATerm t)
{
  static ATerm n_102 (ATerm t)
  {
    ATerm k_102 = NULL,l_102 = NULL,m_102 = NULL;
    k_102 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_102;
      }
    else
      {
        ATerm h_48 = NULL,k_48 = NULL,l_48 = NULL,r_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_102 = ATgetFirst((ATermList) t);
            m_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_102);
        h_48 = t;
        t = l_102;
        t = h_115(t);
        k_48 = t;
        t = m_102;
        t = n_102(t);
        l_48 = t;
        t = (ATerm) ATinsert(CheckATermList(l_48), k_48);
        r_9 = t;
        t = SSLsetAnnotations(r_9, h_48);
      }
    return(t);
  }
  t = n_102(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_102 = NULL,r_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_102 = ATgetFirst((ATermList) t);
      r_102 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_102 = NULL,w_102 = NULL;
        static ATerm m_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_102)), not_null(w_102));
          return(t);
        }
        t = r_102;
        t = n_0(t);
        if(((v_102 != NULL) && (v_102 != t)))
          _fail(t);
        else
          v_102 = t;
        t = q_102;
        t = k_0(t);
        if(((w_102 != NULL) && (w_102 != t)))
          _fail(t);
        else
          w_102 = t;
        t = r_102;
        t = reverse_acc_2_0(k_0, m_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_17;
      t = n_0(t);
    }
  return(t);
}
static ATerm c_11 (ATerm f_45, ATerm g_45, ATerm t)
{
  t = SSL_table_get(f_45, g_45);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL,f_103 = NULL,e_11 = NULL;
  f_103 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_103);
  d_103 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_103);
  e_11 = t;
  t = SSLsetAnnotations(e_11, d_103);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm h_103 = NULL;
  h_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_103), term_m_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL;
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_43;
      t = get_config_0_0(t);
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      t = fetch_1_0(n_15, t);
    }
  t = term_p_44;
  t = echo_0_0(t);
  t = term_s_42;
  b_103 = t;
  t = term_t_42;
  c_103 = t;
  t = term_q_44;
  t = c_11(b_103, c_103, t);
  t = reverse_acc_2_0(_id, o_15, t);
  t = map_1_0(p_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL;
  j_103 = t;
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_103;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_44 = ATgetFirst((ATermList) t);
                ATerm u_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_103;
          }
        LocalPopChoice(s_44);
      }
    else
      {
        t = r_44;
        t = (ATerm) ATinsert(ATempty, j_103);
      }
  }
  k_103 = t;
  t = term_n_39;
  l_103 = t;
  t = SSL_printnl(l_103, k_103);
  t = j_103;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_43;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm p_103 = NULL,q_103 = NULL;
  t = term_v_44;
  p_103 = t;
  t = term_b_17;
  q_103 = t;
  t = term_w_44;
  t = f_11(p_103, q_103, t);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL;
  t = term_v_44;
  t_103 = t;
  t = term_b_17;
  u_103 = t;
  t = term_w_44;
  t = f_11(t_103, u_103, t);
  t = term_y_44;
  r_103 = t;
  t = term_b_17;
  s_103 = t;
  t = term_z_44;
  t = f_11(r_103, s_103, t);
  t = term_a_45;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = term_b_45;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_15, s_15, t_15, t);
      LocalPopChoice(d_45);
    }
  else
    {
      t = c_45;
      t = Option_3_0(u_15, v_15, x_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_132 (ATerm), ATerm t)
{
  ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,g_104 = NULL,h_104 = NULL,w_11 = NULL;
  z_103 = t;
  {
    ATerm e_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_45;
        t = j_132(t);
        LocalPopChoice(h_45);
      }
    else
      {
        t = e_45;
      }
  }
  t = z_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_104 = ATgetFirst((ATermList) t);
      c_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_103);
  a_104 = t;
  t = term_r_43;
  h_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_43, b_104);
  t = f_11(h_104, b_104, t);
  t = c_104;
  {
    static ATerm t_104 (ATerm t)
    {
      ATerm l_45 = t;
      int m_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_45 = t;
          int o_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_104 = NULL;
              k_104 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_104;
              LocalPopChoice(o_45);
            }
          else
            {
              t = n_45;
              t = j_132(t);
              t = Cons_2_0(_id, t_104, t);
            }
          LocalPopChoice(m_45);
        }
      else
        {
          t = l_45;
          {
            ATerm n_104 = NULL,o_104 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_104 = ATgetFirst((ATermList) t);
                o_104 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_104), (ATerm) ATmakeAppl(sym_Undefined_1, n_104));
          }
        }
      return(t);
    }
    t = t_104(t);
  }
  g_104 = t;
  t = (ATerm) ATinsert(CheckATermList(g_104), (ATerm) ATmakeAppl(sym_Program_1, b_104));
  w_11 = t;
  t = SSLsetAnnotations(w_11, a_104);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm f_105 = NULL;
  f_105 = t;
  if(match_string(t, "--help"))
    {
      t = f_105;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_105;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_105;
        }
    }
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL;
  t = term_l_44;
  g_105 = t;
  t = term_b_17;
  h_105 = t;
  t = term_p_45;
  t = f_11(g_105, h_105, t);
  t = term_q_45;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_r_45;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_132 (ATerm), ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL;
  a_105 = t;
  t = term_s_42;
  c_105 = t;
  t = term_t_42;
  d_105 = t;
  t = (ATerm) ATempty;
  e_105 = t;
  t = SSL_table_put(c_105, d_105, e_105);
  t = a_105;
  {
    static ATerm y_15 (ATerm t)
    {
      ATerm s_45 = t;
      int v_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_132(t);
          LocalPopChoice(v_45);
        }
      else
        {
          t = s_45;
          {
            ATerm w_45 = t;
            int x_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_16, g_16, l_16, t);
                LocalPopChoice(x_45);
              }
            else
              {
                t = w_45;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_15, t);
  }
  {
    ATerm y_45 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_105 = NULL;
        o_105 = t;
        {
          ATerm m_46 = t;
          int n_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_48 = NULL;
              t = o_105;
              {
                ATerm g_47 = t;
                int h_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_44;
                    t = get_config_0_0(t);
                    LocalPopChoice(h_47);
                  }
                else
                  {
                    t = g_47;
                    t = fetch_1_0(m_16, t);
                  }
              }
              t = o_105;
              t = default_system_usage_0_0(t);
              t = term_n_19;
              z_48 = t;
              t = SSL_exit(z_48);
              LocalPopChoice(n_46);
            }
          else
            {
              t = m_46;
              {
                ATerm e_49 = NULL;
                t = term_v_44;
                t = get_config_0_0(t);
                t = o_105;
                t = default_system_about_0_0(t);
                t = term_n_19;
                e_49 = t;
                t = SSL_exit(e_49);
              }
            }
        }
        LocalPopChoice(e_46);
      }
    else
      {
        t = y_45;
        {
          ATerm i_47 = t;
          int j_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL;
              static ATerm n_16 (ATerm t)
              {
                ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL,y_11 = NULL;
                u_105 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_105 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_105);
                s_105 = t;
                t = t_105;
                if(((y_104 != NULL) && (y_104 != t)))
                  _fail(t);
                else
                  y_104 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_105);
                y_11 = t;
                t = SSLsetAnnotations(y_11, s_105);
                return(t);
              }
              t = fetch_1_0(n_16, t);
              t = term_c_17;
              q_105 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_104)), term_k_47);
              r_105 = t;
              t = SSL_printnl(q_105, r_105);
              t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_104)), term_k_47));
              t = default_system_usage_0_0(t);
              t = term_f_17;
              p_105 = t;
              t = SSL_exit(p_105);
              LocalPopChoice(j_47);
            }
          else
            {
              t = i_47;
            }
        }
      }
  }
  z_104 = t;
  t = term_s_42;
  b_105 = t;
  t = SSL_table_destroy(b_105);
  t = z_104;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm t)
{
  ATerm z_105 = NULL,a_106 = NULL,b_106 = NULL,c_106 = NULL;
  t = parse_options_1_0(i_130, t);
  z_105 = t;
  t = term_n_47;
  c_106 = t;
  t = SSL_table_create(c_106);
  t = term_n_47;
  a_106 = t;
  t = term_u_47;
  b_106 = t;
  t = SSL_table_put(a_106, b_106, z_105);
  t = z_105;
  t = k_130(t);
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_130, t);
        LocalPopChoice(x_47);
      }
    else
      {
        t = w_47;
        {
          ATerm y_47 = t;
          int z_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_47);
            }
          else
            {
              t = y_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = if_verbose2_1_0(w_16, t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm d_106 = NULL,e_106 = NULL;
  t = term_a_48;
  d_106 = t;
  t = term_b_17;
  e_106 = t;
  t = term_b_48;
  t = f_11(d_106, e_106, t);
  t = term_c_48;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_d_48;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL;
  f_106 = t;
  t = term_r_43;
  t = get_config_0_0(t);
  g_106 = t;
  t = term_c_17;
  h_106 = t;
  t = (ATerm) ATinsert(ATempty, g_106);
  i_106 = t;
  t = SSL_printnl(h_106, i_106);
  t = f_106;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t)
{
  static ATerm o_16 (ATerm t)
  {
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_129(t);
        LocalPopChoice(f_48);
      }
    else
      {
        t = e_48;
        {
          ATerm g_48 = t;
          int i_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(i_48);
            }
          else
            {
              t = g_48;
              {
                ATerm j_48 = t;
                int m_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(m_48);
                  }
                else
                  {
                    t = j_48;
                    {
                      ATerm n_48 = t;
                      int o_48 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_16, t_16, u_16, t);
                          LocalPopChoice(o_48);
                        }
                      else
                        {
                          t = n_48;
                          {
                            ATerm p_48 = t;
                            int q_48 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(q_48);
                              }
                            else
                              {
                                t = p_48;
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
  static ATerm q_16 (ATerm t)
  {
    ATerm j_106 = NULL,k_106 = NULL,n_106 = NULL;
    k_106 = t;
    {
      ATerm r_48 = t;
      int s_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_106 != NULL) && (j_106 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_106 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_16, t);
          LocalPopChoice(s_48);
        }
      else
        {
          t = r_48;
          t = term_t_48;
          j_106 = t;
        }
    }
    t = not_null(j_106);
    t = ReadFromFile_0_0(t);
    n_106 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_106, n_106);
    t = apply_strategy_1_0(r_129, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_16, t_129, p_16, q_16, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm o_106 = NULL,p_106 = NULL,q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL,a_107 = NULL,d_107 = NULL,f_12 = NULL,e_12 = NULL,d_12 = NULL;
  d_107 = t;
  if(match_cons(t, sym__2))
    {
      p_106 = ATgetArgument(t, 0);
      q_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_107);
  o_106 = t;
  t = q_106;
  if(match_cons(t, sym_Specification_1))
    {
      v_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_106);
  u_106 = t;
  t = v_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_106 = ATgetFirst((ATermList) t);
      y_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_106);
  w_106 = t;
  t = y_106;
  t = Cons_2_0(z_16, a_17, t);
  z_106 = t;
  t = (ATerm) ATinsert(CheckATermList(z_106), x_106);
  d_12 = t;
  t = SSLsetAnnotations(d_12, w_106);
  a_107 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_107);
  e_12 = t;
  t = SSLsetAnnotations(e_12, u_106);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm u_48 = ATgetArgument(t, 0);
      if(((ATgetType(u_48) == AT_LIST) && !(ATisEmpty(u_48))))
        {
          s_106 = ATgetFirst((ATermList) u_48);
          {
            ATerm v_48 = (ATerm) ATgetNext((ATermList) u_48);
            if(((ATgetType(v_48) == AT_LIST) && !(ATisEmpty(v_48))))
              {
                ATerm w_48 = ATgetFirst((ATermList) v_48);
                if(match_cons(w_48, sym_Strategies_1))
                  {
                    t_106 = ATgetArgument(w_48, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm x_48 = (ATerm) ATgetNext((ATermList) v_48);
                  if(((ATgetType(x_48) != AT_LIST) || !(ATisEmpty(x_48))))
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
  t = a_9(s_106, t_106, t);
  r_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_106, r_106);
  f_12 = t;
  t = SSLsetAnnotations(f_12, o_106);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,c_12 = NULL;
  h_107 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_107);
  e_107 = t;
  t = f_107;
  t = needed_defs_0_0(t);
  g_107 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_107);
  c_12 = t;
  t = SSLsetAnnotations(c_12, e_107);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(y_16, _fail, default_usage_0_0, t);
  return(t);
}

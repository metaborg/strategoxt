#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_Anno_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
}
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_a_42;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_g_41;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_p_40;
ATerm term_n_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_j_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_d_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_t_37;
ATerm term_o_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_r_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_f_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_e_30;
ATerm term_c_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_h_25;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_t_19;
ATerm term_u_18;
ATerm term_o_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Op_2, term_e_21, (ATerm) ATempty);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_21);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Call_2, term_p_22, (ATerm) ATempty);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Call_2, term_t_23, (ATerm) ATempty);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Call_2, term_d_21, (ATerm) ATempty);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Sort_2, term_e_29, (ATerm) ATempty);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_g_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_g_38, term_u_18);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_18);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym__2, term_m_38, term_o_29);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_c_39);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym__2, term_p_41, term_o_29);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym__2, term_s_41, term_o_29);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__2, term_n_40, term_o_29);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym__2, term_a_37, term_o_29);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm u_8 (ATerm x_23, ATerm y_23, ATerm a_24, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm b_9 (ATerm q_37, ATerm p_37, ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm h_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_115 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm b_38 (ATerm j_23, ATerm k_23, ATerm t);
static ATerm c_38 (ATerm u_23, ATerm v_23, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm z_96 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm i_9 (ATerm c_32, ATerm d_32, ATerm e_32, ATerm t);
static ATerm c_52 (ATerm o_51, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm x_99 (ATerm), ATerm t);
static ATerm m_9 (ATerm p_27, ATerm q_27, ATerm r_27, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm t_98 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm v_102 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm n_9 (ATerm d_52, ATerm e_52, ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm copy_1_0 (ATerm l_120 (ATerm), ATerm t);
static ATerm o_9 (ATerm t_22, ATerm u_22, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm z_68 (ATerm w_65, ATerm x_65, ATerm y_65, ATerm z_65, ATerm t);
static ATerm c_69 (ATerm d_67, ATerm j_67, ATerm m_67, ATerm n_67, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm y_110 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm l_100 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm j_71 (ATerm r_69, ATerm v_69, ATerm w_69, ATerm y_69, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_111 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_72 (ATerm n_72, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_9 (ATerm i_117 (ATerm), ATerm m_62, ATerm l_62, ATerm t);
ATerm genzip_4_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm z_9 (ATerm a_718, ATerm f_718, ATerm c_73, ATerm t);
static ATerm a_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm y_77 (ATerm d_76, ATerm f_76, ATerm g_76, ATerm t);
static ATerm f_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm b_10 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm d_74, ATerm a_74, ATerm i_74, ATerm e_74, ATerm b_74, ATerm c_74, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t);
ATerm for_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm j_28 (ATerm j_27, ATerm k_27, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm e_10 (ATerm f_130 (ATerm), ATerm b_75, ATerm z_74, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm g_10 (ATerm l_70, ATerm m_70, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm h_10 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm s_62, ATerm r_62, ATerm t);
static ATerm i_10 (ATerm n_117 (ATerm), ATerm o_62, ATerm n_62, ATerm t);
ATerm foldr_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t);
static ATerm j_10 (ATerm g_45, ATerm h_45, ATerm t);
static ATerm k_10 (ATerm b_44, ATerm c_44, ATerm t);
static ATerm m_10 (ATerm d_106 (ATerm), ATerm r_312, ATerm f_44, ATerm t);
static ATerm l_10 (ATerm x_43, ATerm y_43, ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
ATerm output_1_0 (ATerm u_125 (ATerm), ATerm t);
static ATerm h_89 (ATerm b_89, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_10 (ATerm d_44, ATerm t);
static ATerm o_10 (ATerm i_45, ATerm j_45, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_90 (ATerm r_89, ATerm t);
static ATerm t_90 (ATerm v_89, ATerm w_89, ATerm x_89, ATerm t);
static ATerm u_90 (ATerm f_90, ATerm g_90, ATerm h_90, ATerm t);
static ATerm p_10 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm v_125 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_10 (ATerm a_49, ATerm b_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_10 (ATerm a_70, ATerm b_70, ATerm z_69, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm w_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_10 (ATerm x_51, ATerm y_51, ATerm t);
ATerm foldr_2_0 (ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_107 (ATerm), ATerm t);
static ATerm d_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_15 (ATerm t);
ATerm need_help_1_0 (ATerm l_125 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_110 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_10 (ATerm d_62, ATerm e_62, ATerm t);
ATerm debug_1_0 (ATerm b_106 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_110 (ATerm), ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm u_10 (ATerm r_71, ATerm s_71, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm o_127 (ATerm), ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
ATerm parse_options_1_0 (ATerm n_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_8 (ATerm x_23, ATerm y_23, ATerm a_24, ATerm t)
{
  ATerm b_0 = NULL,m_0 = NULL;
  t = term_x_14;
  b_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_17), a_24), term_b_17), y_23), term_a_17), x_23), term_z_16);
  m_0 = t;
  t = SSL_printnl(b_0, m_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_17), a_24), term_b_17), y_23), term_a_17), x_23), term_z_16);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if(((ATgetType(d_17) != AT_INT) || (ATgetInt((ATermInt) d_17) != 0)))
        _fail(t);
      {
        ATerm e_17 = ATgetArgument(t, 1);
        if(((ATgetType(e_17) != AT_INT) || (ATgetInt((ATermInt) e_17) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_1;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = z_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm f_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL,u_0 = NULL;
        t = w_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_17 = ATgetFirst((ATermList) t);
            ATerm j_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
              {
                ATerm l_17 = ATgetFirst((ATermList) j_17);
                ATerm m_17 = (ATerm) ATgetNext((ATermList) j_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm n_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_17;
            }
        }
        t = term_x_14;
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_o_17);
        u_0 = t;
        t = SSL_printnl(s_0, u_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_o_17);
        t = giving_up_0_0(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = f_17;
        {
          ATerm a_1 = NULL,b_1 = NULL;
          t = w_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_17 = ATgetFirst((ATermList) t);
              if(match_cons(p_17, sym__2))
                {
                  a_1 = ATgetArgument(p_17, 0);
                  b_1 = ATgetArgument(p_17, 1);
                }
              else
                _fail(t);
              {
                ATerm q_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(q_17) != AT_LIST) || !(ATisEmpty(q_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_1, (ATerm) ATmakeAppl(sym__2, a_1, b_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, w_1, (ATerm) ATmakeAppl(sym__2, a_1, b_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
      {
        ATerm p_1 = NULL,u_1 = NULL,c_2 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(k_4);
        p_1 = t;
        t = l_4;
        t = y_97(t);
        u_1 = t;
        t = m_4;
        t = y_97(t);
        c_2 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_1, c_2);
        d_1 = t;
        t = SSLsetAnnotations(d_1, p_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_4 = ATgetArgument(t, 0);
          m_4 = ATgetArgument(t, 1);
          g_4 = ATgetArgument(t, 2);
          {
            ATerm v_3 = NULL,r_4 = NULL,c_5 = NULL,d_5 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(k_4);
            v_3 = t;
            t = l_4;
            t = a_98(t);
            r_4 = t;
            t = m_4;
            t = a_98(t);
            c_5 = t;
            t = g_4;
            t = y_97(t);
            d_5 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, r_4, c_5, d_5);
            i_1 = t;
            t = SSLsetAnnotations(i_1, v_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_4 = ATgetArgument(t, 0);
              m_4 = ATgetArgument(t, 1);
              g_4 = ATgetArgument(t, 2);
              h_4 = ATgetArgument(t, 3);
              {
                ATerm b_6 = NULL,g_6 = NULL,i_6 = NULL,l_6 = NULL,n_6 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(k_4);
                b_6 = t;
                t = l_4;
                t = a_98(t);
                g_6 = t;
                t = m_4;
                t = a_98(t);
                i_6 = t;
                t = g_4;
                t = a_98(t);
                l_6 = t;
                t = h_4;
                t = y_97(t);
                n_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_6, i_6, l_6, n_6);
                j_1 = t;
                t = SSLsetAnnotations(j_1, b_6);
              }
            }
          else
            {
              ATerm h_7 = NULL,q_7 = NULL,r_7 = NULL,k_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  l_4 = ATgetArgument(t, 0);
                  m_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_4);
              h_7 = t;
              t = l_4;
              t = a_98(t);
              q_7 = t;
              t = m_4;
              t = y_97(t);
              r_7 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, q_7, r_7);
              k_1 = t;
              t = SSLsetAnnotations(k_1, h_7);
            }
        }
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm t_4 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_4 = ATgetArgument(t, 0);
          {
            ATerm u_17 = ATgetArgument(t, 1);
          }
          {
            ATerm v_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_17);
      t = t_4;
    }
  else
    {
      t = r_17;
      if(match_cons(t, sym_SDefT_4))
        {
          t_4 = ATgetArgument(t, 0);
          {
            ATerm x_17 = ATgetArgument(t, 1);
          }
          {
            ATerm y_17 = ATgetArgument(t, 2);
          }
          {
            ATerm z_17 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = t_4;
    }
  return(t);
}
static ATerm b_9 (ATerm q_37, ATerm p_37, ATerm t)
{
  t = q_37;
  t = map_1_0(f_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm t_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(y_0, t_8, v_8, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      if((w_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm t_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(e_1, t_9, v_9, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      w_9 = ATgetArgument(t, 0);
      if((w_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      if((k_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm h_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_115 (ATerm), ATerm t)
{
  static ATerm m_6 (ATerm t)
  {
    ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
    k_5 = t;
    {
      ATerm a_18 = t;
      int b_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_115(t);
          LocalPopChoice(b_18);
        }
      else
        {
          t = a_18;
          t = (ATerm) ATempty;
        }
    }
    i_5 = t;
    t = k_5;
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_5 = NULL,n_8 = NULL,p_8 = NULL;
          t = g_115(t);
          l_5 = t;
          t = k_5;
          {
            static ATerm q_0 (ATerm t)
            {
              ATerm g_8 = NULL;
              t = m_6(t);
              g_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_8, l_5);
              t = u_9(i_115, g_8, l_5, t);
              return(t);
            }
            t = h_115(q_0, m_6, v_0, t);
          }
          p_8 = t;
          t = SSL_explode_term(p_8);
          if(match_cons(t, sym__2))
            {
              ATerm k_18 = ATgetArgument(t, 0);
              n_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_8;
          t = foldr_3_0(w_0, x_0, _id, t);
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          {
            ATerm j_9 = NULL;
            t = SSL_explode_term(k_5);
            if(match_cons(t, sym__2))
              {
                ATerm l_18 = ATgetArgument(t, 0);
                j_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_9;
            t = foldr_3_0(z_0, c_1, m_6, t);
          }
        }
    }
    j_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_5, j_5);
    t = i_10(f_1, i_5, j_5, t);
    return(t);
  }
  t = m_6(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,w_6 = NULL,x_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm o_18 = ATgetArgument(t, 0);
      if(match_cons(o_18, sym_SVar_1))
        {
          t_6 = ATgetArgument(o_18, 0);
        }
      else
        _fail(t);
      u_6 = ATgetArgument(t, 1);
      w_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_6;
  t = foldr_3_0(m_1, n_1, o_1, t);
  x_6 = t;
  t = w_6;
  t = foldr_3_0(q_1, s_1, a_2, t);
  z_6 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_6, (ATerm) ATmakeAppl(sym__2, x_6, z_6)));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm f_7 = NULL,i_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
      t = f_7;
      t = b_9(i_7, k_7, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_7 = ATgetArgument(t, 0);
          k_7 = ATgetArgument(t, 1);
          l_7 = ATgetArgument(t, 2);
          t = k_7;
          t = map_1_0(b_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              i_7 = ATgetArgument(t, 0);
              k_7 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, i_7);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  i_7 = ATgetArgument(t, 0);
                  k_7 = ATgetArgument(t, 1);
                  l_7 = ATgetArgument(t, 2);
                  m_7 = ATgetArgument(t, 3);
                  t = k_7;
                  t = map_1_0(d_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_7 = ATgetArgument(t, 0);
                      k_7 = ATgetArgument(t, 1);
                      l_7 = ATgetArgument(t, 2);
                      m_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_7;
                  t = map_1_0(e_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(match_cons(q_18, sym__2))
        {
          r_10 = ATgetArgument(q_18, 0);
          {
            ATerm r_18 = ATgetArgument(q_18, 1);
          }
        }
      else
        _fail(t);
      if((r_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      a_7 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(a_7, b_7, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(c_7, d_7, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_7 = NULL;
  ATerm b_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_7 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_20);
      t = z_7;
    }
  else
    {
      t = b_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_7;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm c_9 = NULL;
  ATerm h_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_9 = ATgetArgument(t, 0);
          {
            ATerm o_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = c_9;
    }
  else
    {
      t = h_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_9;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm c_10 = NULL;
  ATerm p_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_10 = ATgetArgument(t, 0);
          {
            ATerm z_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_20);
      t = c_10;
    }
  else
    {
      t = p_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_10;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(g_1, h_1, sboundin_3_0, l_1, t);
  return(t);
}
static ATerm b_38 (ATerm j_23, ATerm k_23, ATerm t)
{
  t = j_23;
  {
    ATerm a_21 = t;
    if((PushChoice() == 0))
      {
        ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,r_1 = NULL;
        p_23 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_23 = ATgetFirst((ATermList) t);
            o_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_23);
        m_23 = t;
        t = o_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(o_23), n_23);
        r_1 = t;
        t = SSLsetAnnotations(r_1, m_23);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_21, j_23);
  return(t);
}
static ATerm c_38 (ATerm u_23, ATerm v_23, ATerm t)
{
  t = u_23;
  {
    ATerm c_21 = t;
    if((PushChoice() == 0))
      {
        ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,g_24 = NULL,t_1 = NULL;
        g_24 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_24 = ATgetFirst((ATermList) t);
            d_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_24);
        b_24 = t;
        t = d_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_24), c_24);
        t_1 = t;
        t = SSLsetAnnotations(t_1, b_24);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_21, u_23);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_f_21;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm b_26 = NULL,e_26 = NULL,a_13 = NULL;
  b_26 = t;
  t = SSL_explode_term(b_26);
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_21 = ATgetArgument(t, 1);
        if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
          {
            e_26 = ATgetFirst((ATermList) h_21);
            {
              ATerm g_22 = (ATerm) ATgetNext((ATermList) h_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(b_26);
  if(match_cons(t, sym__2))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_22 = ATgetArgument(t, 1);
        if(((ATgetType(i_22) == AT_LIST) && !(ATisEmpty(i_22))))
          {
            ATerm j_22 = ATgetFirst((ATermList) i_22);
            ATerm k_22 = (ATerm) ATgetNext((ATermList) i_22);
            if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
              {
                a_13 = ATgetFirst((ATermList) k_22);
                {
                  ATerm l_22 = (ATerm) ATgetNext((ATermList) k_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, a_13), e_26));
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm o_27 = NULL,z_27 = NULL;
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, z_27), o_27));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_f_21;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, d_28), c_28));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, w_29), v_29));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, z_29), y_29));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,d_25 = NULL,f_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  if(match_cons(t, sym_Anno_2))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
      {
        ATerm z_25 = NULL;
        t = o_25;
        t = foldr_2_0(f_2, g_2, t);
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, n_25, z_25);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          n_25 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, n_25, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              n_25 = ATgetArgument(t, 0);
              {
                ATerm h_13 = NULL;
                t = n_25;
                {
                  ATerm r_22 = t;
                  int s_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_v_22;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_w_22;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_x_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_y_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_z_22;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(s_22);
                    }
                  else
                    {
                      t = r_22;
                      {
                        ATerm k_13 = NULL;
                        t = SSL_explode_string(n_25);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm a_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(a_23) != AT_INT) || (ATgetInt((ATermInt) a_23) != 39)))
                              _fail(t);
                            {
                              ATerm b_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
                                {
                                  k_13 = ATgetFirst((ATermList) b_23);
                                  {
                                    ATerm c_23 = (ATerm) ATgetNext((ATermList) b_23);
                                    if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
                                      {
                                        ATerm d_23 = ATgetFirst((ATermList) c_23);
                                        if(((ATgetType(d_23) != AT_INT) || (ATgetInt((ATermInt) d_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm e_23 = (ATerm) ATgetNext((ATermList) c_23);
                                          if(((ATgetType(e_23) != AT_LIST) || !(ATisEmpty(e_23))))
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
                        t = k_13;
                      }
                    }
                }
                h_13 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, h_13);
              }
            }
          else
            {
              ATerm f_23 = t;
              int g_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      n_25 = ATgetArgument(t, 0);
                      {
                        ATerm h_23 = ATgetArgument(t, 1);
                      }
                      l_25 = ATgetArgument(t, 2);
                      r_24 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, n_25, l_25, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_24), (ATerm) ATempty));
                }
              else
                {
                  t = f_23;
                  {
                    ATerm i_23 = t;
                    int l_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            n_25 = ATgetArgument(t, 0);
                            {
                              ATerm r_23 = ATgetArgument(t, 1);
                            }
                            l_25 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, n_25, l_25, term_w_23);
                      }
                    else
                      {
                        t = i_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            n_25 = ATgetArgument(t, 0);
                            o_25 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, n_25, o_25, term_w_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                n_25 = ATgetArgument(t, 0);
                                o_25 = ATgetArgument(t, 1);
                                {
                                  static ATerm n_2 (ATerm t)
                                  {
                                    t = o_25;
                                    return(t);
                                  }
                                  t = n_25;
                                  t = foldr_2_0(n_2, o_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    n_25 = ATgetArgument(t, 0);
                                    t = n_25;
                                    t = foldr_2_0(p_2, q_2, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        n_25 = ATgetArgument(t, 0);
                                        t = n_25;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            s_24 = ATgetFirst((ATermList) t);
                                            d_25 = (ATerm) ATgetNext((ATermList) t);
                                            t = d_25;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm z_23 = t;
                                                int e_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = b_38(n_25, m_25, t);
                                                    LocalPopChoice(e_24);
                                                  }
                                                else
                                                  {
                                                    t = z_23;
                                                    t = s_24;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_38(n_25, m_25, t);
                                              }
                                          }
                                        else
                                          {
                                            t = b_38(n_25, m_25, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            n_25 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, n_25));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                n_25 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, n_25));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    n_25 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, n_25));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        n_25 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, n_25));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            n_25 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_25), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                n_25 = ATgetArgument(t, 0);
                                                                o_25 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_25), o_25);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    n_25 = ATgetArgument(t, 0);
                                                                    o_25 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm r_2 (ATerm t)
                                                                      {
                                                                        t = o_25;
                                                                        return(t);
                                                                      }
                                                                      t = n_25;
                                                                      t = foldr_2_0(r_2, s_2, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        n_25 = ATgetArgument(t, 0);
                                                                        t = n_25;
                                                                        t = foldr_2_0(v_2, w_2, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            n_25 = ATgetArgument(t, 0);
                                                                            o_25 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_d_21, (ATerm) ATinsert(CheckATermList(o_25), n_25));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                n_25 = ATgetArgument(t, 0);
                                                                                t = n_25;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    s_24 = ATgetFirst((ATermList) t);
                                                                                    d_25 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = d_25;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm f_24 = t;
                                                                                        int h_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = c_38(n_25, m_25, t);
                                                                                            LocalPopChoice(h_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_24;
                                                                                            t = s_24;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = c_38(n_25, m_25, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_38(n_25, m_25, t);
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
                                                                                        n_25 = ATgetArgument(t, 0);
                                                                                        o_25 = ATgetArgument(t, 1);
                                                                                        t = o_25;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            f_25 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, f_25), n_25));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            n_25 = ATgetArgument(t, 0);
                                                                                            t = n_25;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                n_25 = ATgetArgument(t, 0);
                                                                                                o_25 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, n_25, o_25, term_l_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    n_25 = ATgetArgument(t, 0);
                                                                                                    o_25 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, n_25, o_25, term_l_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        n_25 = ATgetArgument(t, 0);
                                                                                                        o_25 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, n_25, (ATerm)ATempty, o_25);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            n_25 = ATgetArgument(t, 0);
                                                                                                            o_25 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, o_25, n_25);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                n_25 = ATgetArgument(t, 0);
                                                                                                                o_25 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, n_25, o_25, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    n_25 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, n_25, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        n_25 = ATgetArgument(t, 0);
                                                                                                                        o_25 = ATgetArgument(t, 1);
                                                                                                                        l_25 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_25, o_25, (ATerm)ATempty, l_25);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            n_25 = ATgetArgument(t, 0);
                                                                                                                            o_25 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_25, (ATerm)ATempty, (ATerm)ATempty, o_25);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                n_25 = ATgetArgument(t, 0);
                                                                                                                                o_25 = ATgetArgument(t, 1);
                                                                                                                                l_25 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, n_25, o_25, (ATerm)ATempty, l_25);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    n_25 = ATgetArgument(t, 0);
                                                                                                                                    o_25 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, n_25, (ATerm)ATempty, (ATerm)ATempty, o_25);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        n_25 = ATgetArgument(t, 0);
                                                                                                                                        o_25 = ATgetArgument(t, 1);
                                                                                                                                        l_25 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, n_25, o_25, (ATerm)ATempty, l_25);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            n_25 = ATgetArgument(t, 0);
                                                                                                                                            o_25 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, n_25, (ATerm)ATempty, (ATerm)ATempty, o_25);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm n_24 = ATgetArgument(t, 0);
                                                                                                                                                o_25 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, o_25);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm e_38 = NULL,f_38 = NULL,j_38 = NULL;
  f_38 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      j_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
      {
        ATerm q_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
        t = f_38;
        t = new_0_0(t);
        q_38 = t;
        t = new_0_0(t);
        t_38 = t;
        t = new_0_0(t);
        u_38 = t;
        t = new_0_0(t);
        v_38 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_38), u_38), t_38), q_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, q_38), (ATerm) ATmakeAppl(sym_Var_1, u_38))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, j_38, (ATerm)ATmakeAppl(sym_Var_1, q_38), (ATerm) ATmakeAppl(sym_Var_1, t_38)), (ATerm) ATmakeAppl(sym_BAM_3, e_38, (ATerm)ATmakeAppl(sym_Var_1, u_38), (ATerm) ATmakeAppl(sym_Var_1, v_38)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_o_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_38)), (ATerm) ATmakeAppl(sym_Var_1, t_38))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_38 = ATgetArgument(t, 0);
          {
            ATerm w_38 = NULL,b_39 = NULL,g_39 = NULL,k_39 = NULL;
            t = f_38;
            t = new_0_0(t);
            g_39 = t;
            t = j_38;
            {
              static ATerm x_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((w_38 != NULL) && (w_38 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      w_38 = ATgetArgument(t, 0);
                    if(((b_39 != NULL) && (b_39 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      b_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, g_39);
                return(t);
              }
              t = oncetd_1_0(x_2, t);
            }
            k_39 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_39)), not_null(w_38))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_39)), (ATerm) ATmakeAppl(sym_Build_1, k_39))));
          }
        }
      else
        {
          ATerm m_39 = NULL,n_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              j_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_38;
          t = new_0_0(t);
          s_39 = t;
          t = new_0_0(t);
          t_39 = t;
          t = j_38;
          {
            static ATerm y_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((m_39 != NULL) && (m_39 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    m_39 = ATgetArgument(t, 0);
                  if(((n_39 != NULL) && (n_39 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    n_39 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, s_39);
              return(t);
            }
            t = oncetd_1_0(y_2, t);
          }
          u_39 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_39), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_39)), (ATerm) ATmakeAppl(sym_PrimT_3, term_p_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_39))))), (ATerm)ATmakeAppl(sym_Var_1, s_39), (ATerm) ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_39)), not_null(m_39)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  w_39 = t;
  if(match_cons(t, sym_Match_1))
    {
      x_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_39 = NULL,c_40 = NULL,d_40 = NULL,g_40 = NULL;
        t = w_39;
        t = new_0_0(t);
        d_40 = t;
        t = x_39;
        {
          static ATerm a_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((z_39 != NULL) && (z_39 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_39 = ATgetArgument(t, 0);
                if(((c_40 != NULL) && (c_40 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_40), z_39);
            return(t);
          }
          t = pat_td_1_0(a_3, t);
        }
        g_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_40), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_40))), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_40))))));
        LocalPopChoice(t_24);
      }
    else
      {
        t = q_24;
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_40 = NULL,m_40 = NULL,o_40 = NULL;
              t = w_39;
              t = new_0_0(t);
              m_40 = t;
              t = x_39;
              {
                static ATerm f_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((l_40 != NULL) && (l_40 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        l_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_40);
                  return(t);
                }
                t = pat_td_1_0(f_3, t);
              }
              o_40 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_40)), not_null(l_40))));
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              {
                ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
                t = w_39;
                t = new_0_0(t);
                w_40 = t;
                t = x_39;
                {
                  static ATerm g_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_40 = ATgetArgument(t, 0);
                        if(((u_40 != NULL) && (u_40 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_40 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_40);
                    return(t);
                  }
                  t = pat_td_1_0(g_3, t);
                }
                x_40 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_40)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_40)), not_null(v_40)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm x_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_96(t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = x_24;
      {
        ATerm x_44 = NULL,y_44 = NULL,d_45 = NULL,e_45 = NULL;
        y_44 = t;
        if(match_cons(t, sym_Op_2))
          {
            d_45 = ATgetArgument(t, 0);
            e_45 = ATgetArgument(t, 1);
            {
              ATerm t_13 = NULL,x_13 = NULL,h_2 = NULL;
              t = SSLgetAnnotations(y_44);
              t_13 = t;
              t = e_45;
              {
                static ATerm h_3 (ATerm t)
                {
                  t = pat_td_1_0(z_96, t);
                  return(t);
                }
                t = fetch_1_0(h_3, t);
              }
              x_13 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, d_45, x_13);
              h_2 = t;
              t = SSLsetAnnotations(h_2, t_13);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                d_45 = ATgetArgument(t, 0);
                e_45 = ATgetArgument(t, 1);
                {
                  ATerm a_25 = t;
                  int c_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_15 = NULL,f_15 = NULL,i_2 = NULL;
                      t = SSLgetAnnotations(y_44);
                      b_15 = t;
                      t = e_45;
                      t = pat_td_1_0(z_96, t);
                      f_15 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, d_45, f_15);
                      i_2 = t;
                      t = SSLsetAnnotations(i_2, b_15);
                      LocalPopChoice(c_25);
                    }
                  else
                    {
                      t = a_25;
                      {
                        ATerm u_15 = NULL,e_16 = NULL,j_2 = NULL;
                        t = SSLgetAnnotations(y_44);
                        u_15 = t;
                        t = d_45;
                        t = pat_td_1_0(z_96, t);
                        e_16 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, e_16, e_45);
                        j_2 = t;
                        t = SSLsetAnnotations(j_2, u_15);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    d_45 = ATgetArgument(t, 0);
                    e_45 = ATgetArgument(t, 1);
                    x_44 = ATgetArgument(t, 2);
                    {
                      ATerm s_16 = NULL,w_16 = NULL,k_2 = NULL;
                      t = SSLgetAnnotations(y_44);
                      s_16 = t;
                      t = x_44;
                      {
                        static ATerm i_3 (ATerm t)
                        {
                          t = pat_td_1_0(z_96, t);
                          return(t);
                        }
                        t = fetch_1_0(i_3, t);
                      }
                      w_16 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, d_45, e_45, w_16);
                      k_2 = t;
                      t = SSLsetAnnotations(k_2, s_16);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        d_45 = ATgetArgument(t, 0);
                        e_45 = ATgetArgument(t, 1);
                        x_44 = ATgetArgument(t, 2);
                        {
                          ATerm g_17 = NULL,k_17 = NULL,l_2 = NULL;
                          t = SSLgetAnnotations(y_44);
                          g_17 = t;
                          t = x_44;
                          {
                            static ATerm k_3 (ATerm t)
                            {
                              t = pat_td_1_0(z_96, t);
                              return(t);
                            }
                            t = fetch_1_0(k_3, t);
                          }
                          k_17 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, d_45, e_45, k_17);
                          l_2 = t;
                          t = SSLsetAnnotations(l_2, g_17);
                        }
                      }
                    else
                      {
                        ATerm t_17 = NULL,w_17 = NULL,m_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            d_45 = ATgetArgument(t, 0);
                            e_45 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(y_44);
                        t_17 = t;
                        t = e_45;
                        t = pat_td_1_0(z_96, t);
                        w_17 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, d_45, w_17);
                        m_2 = t;
                        t = SSLsetAnnotations(m_2, t_17);
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
  ATerm x_45 = NULL,y_45 = NULL;
  x_45 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_45 = NULL,e_46 = NULL,g_46 = NULL,h_46 = NULL;
        t = x_45;
        t = new_0_0(t);
        g_46 = t;
        t = y_45;
        {
          static ATerm l_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((z_45 != NULL) && (z_45 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_45 = ATgetArgument(t, 0);
                if(((e_46 != NULL) && (e_46 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_46 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, g_46);
            return(t);
          }
          t = pat_td_1_0(l_3, t);
        }
        h_46 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_46)), not_null(z_45))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_46)))), (ATerm) ATmakeAppl(sym_Build_1, h_46)));
        LocalPopChoice(g_25);
      }
    else
      {
        t = e_25;
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_46 = NULL,k_46 = NULL,l_46 = NULL;
              t = x_45;
              t = new_0_0(t);
              k_46 = t;
              t = y_45;
              {
                static ATerm o_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_46 != NULL) && (i_46 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_46);
                  return(t);
                }
                t = pat_td_1_0(o_3, t);
              }
              l_46 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_46)))), (ATerm) ATmakeAppl(sym_Build_1, l_46)));
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              {
                ATerm m_46 = NULL,o_46 = NULL,y_46 = NULL,z_46 = NULL;
                t = x_45;
                t = new_0_0(t);
                y_46 = t;
                t = y_45;
                {
                  static ATerm p_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((m_46 != NULL) && (m_46 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_46 = ATgetArgument(t, 0);
                        if(((o_46 != NULL) && (o_46 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          o_46 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_46);
                    return(t);
                  }
                  t = pat_td_1_0(p_3, t);
                }
                z_46 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_46), not_null(o_46), (ATerm) ATmakeAppl(sym_Var_1, y_46))), (ATerm) ATmakeAppl(sym_Build_1, z_46)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,x_47 = NULL,y_47 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      x_47 = ATgetArgument(t, 0);
      y_47 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, x_47, y_47);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          x_47 = ATgetArgument(t, 0);
          t = x_47;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_47 = ATgetFirst((ATermList) t);
              r_47 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, q_47, (ATerm) ATmakeAppl(sym_LChoices_1, r_47));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_r_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              x_47 = ATgetArgument(t, 0);
              t = x_47;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_47 = ATgetFirst((ATermList) t);
                  r_47 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, q_47, (ATerm) ATmakeAppl(sym_Choices_1, r_47));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_r_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  x_47 = ATgetArgument(t, 0);
                  t = x_47;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_47 = ATgetFirst((ATermList) t);
                      r_47 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_47, (ATerm) ATmakeAppl(sym_Seqs_1, r_47));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_l_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      x_47 = ATgetArgument(t, 0);
                      y_47 = ATgetArgument(t, 1);
                      s_47 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, y_47, (ATerm) ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, s_47), x_47)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          x_47 = ATgetArgument(t, 0);
                          y_47 = ATgetArgument(t, 1);
                          s_47 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, s_47)), x_47), (ATerm) ATmakeAppl(sym_Build_1, y_47)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              x_47 = ATgetArgument(t, 0);
                              y_47 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_47, (ATerm) ATmakeAppl(sym_Match_1, y_47));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  x_47 = ATgetArgument(t, 0);
                                  y_47 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_47), y_47);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      x_47 = ATgetArgument(t, 0);
                                      y_47 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_47), x_47);
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
static ATerm r_3 (ATerm t)
{
  ATerm s_25 = t;
  if((PushChoice() == 0))
    {
      ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,t_2 = NULL;
      r_50 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_50);
      p_50 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_50);
      t_2 = t;
      t = SSLsetAnnotations(t_2, p_50);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_25;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm s_50 = NULL,u_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_50 = ATgetFirst((ATermList) t);
      u_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_50, u_50);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if(match_cons(v_25, sym__2))
        {
          v_50 = ATgetArgument(v_25, 0);
          w_50 = ATgetArgument(v_25, 1);
        }
      else
        _fail(t);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(match_cons(w_25, sym__2))
          {
            x_50 = ATgetArgument(w_25, 0);
            y_50 = ATgetArgument(w_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_50), v_50), (ATerm) ATinsert(CheckATermList(y_50), w_50));
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_51 = ATgetFirst((ATermList) t);
      d_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_51, d_51);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm e_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_25 = ATgetArgument(t, 0);
      if(match_cons(y_25, sym__2))
        {
          e_51 = ATgetArgument(y_25, 0);
          g_51 = ATgetArgument(y_25, 1);
        }
      else
        _fail(t);
      {
        ATerm a_26 = ATgetArgument(t, 1);
        if(match_cons(a_26, sym__2))
          {
            h_51 = ATgetArgument(a_26, 0);
            i_51 = ATgetArgument(a_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_51), e_51), (ATerm) ATinsert(CheckATermList(i_51), g_51));
  return(t);
}
static ATerm i_9 (ATerm c_32, ATerm d_32, ATerm e_32, ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,f_50 = NULL,j_50 = NULL,u_2 = NULL;
  t = e_32;
  t = fetch_1_0(r_3, t);
  t = e_32;
  t = genzip_4_0(s_3, w_3, x_3, LiftPrimArg_0_0, t);
  j_50 = t;
  if(match_cons(t, sym__2))
    {
      w_49 = ATgetArgument(t, 0);
      x_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_50);
  v_49 = t;
  t = w_49;
  t = concat_0_0(t);
  y_49 = t;
  t = x_49;
  t = genzip_4_0(z_3, b_4, d_4, _id, t);
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_49, f_50);
  u_2 = t;
  t = SSLsetAnnotations(u_2, v_49);
  if(match_cons(t, sym__2))
    {
      q_49 = ATgetArgument(t, 0);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            r_49 = ATgetArgument(c_26, 0);
            s_49 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, q_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_49), (ATerm) ATmakeAppl(sym_CallT_3, c_32, d_32, s_49)));
  return(t);
}
static ATerm c_52 (ATerm o_51, ATerm t)
{
  ATerm t_51 = NULL;
  t = o_51;
  {
    ATerm d_26 = t;
    if((PushChoice() == 0))
      {
        ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,z_2 = NULL;
        w_51 = t;
        if(match_cons(t, sym_Var_1))
          {
            v_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_51);
        u_51 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, v_51);
        z_2 = t;
        t = SSLsetAnnotations(z_2, u_51);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_26;
      }
  }
  t = new_0_0(t);
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, t_51), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_51), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_51)))), (ATerm) ATmakeAppl(sym_Var_1, t_51)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL;
  z_51 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_52 = ATgetArgument(t, 0);
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_52(z_51, t);
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATmakeAppl(sym_Var_1, a_52)));
          }
      }
    }
  else
    {
      t = c_52(z_51, t);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm h_26 = t;
  if((PushChoice() == 0))
    {
      ATerm r_19 = NULL,s_19 = NULL,x_19 = NULL,b_3 = NULL;
      x_19 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_19);
      r_19 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_19);
      b_3 = t;
      t = SSLsetAnnotations(b_3, r_19);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_26;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_20 = ATgetFirst((ATermList) t);
      l_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_20, l_20);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(match_cons(i_26, sym__2))
        {
          m_20 = ATgetArgument(i_26, 0);
          n_20 = ATgetArgument(i_26, 1);
        }
      else
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(match_cons(k_26, sym__2))
          {
            q_20 = ATgetArgument(k_26, 0);
            r_20 = ATgetArgument(k_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_20), m_20), (ATerm) ATinsert(CheckATermList(r_20), n_20));
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_20 = ATgetFirst((ATermList) t);
      t_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_20, t_20);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(match_cons(l_26, sym__2))
        {
          u_20 = ATgetArgument(l_26, 0);
          v_20 = ATgetArgument(l_26, 1);
        }
      else
        _fail(t);
      {
        ATerm m_26 = ATgetArgument(t, 1);
        if(match_cons(m_26, sym__2))
          {
            w_20 = ATgetArgument(m_26, 0);
            x_20 = ATgetArgument(m_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_20), u_20), (ATerm) ATinsert(CheckATermList(x_20), v_20));
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm o_26 = t;
  if((PushChoice() == 0))
    {
      ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,d_3 = NULL;
      t_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_21);
      r_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_21);
      d_3 = t;
      t = SSLsetAnnotations(d_3, r_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_26;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_21 = ATgetFirst((ATermList) t);
      v_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_21, v_21);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if(match_cons(p_26, sym__2))
        {
          w_21 = ATgetArgument(p_26, 0);
          x_21 = ATgetArgument(p_26, 1);
        }
      else
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(match_cons(q_26, sym__2))
          {
            y_21 = ATgetArgument(q_26, 0);
            z_21 = ATgetArgument(q_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_21), w_21), (ATerm) ATinsert(CheckATermList(z_21), x_21));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_25;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_22 = ATgetFirst((ATermList) t);
      b_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(match_cons(r_26, sym__2))
        {
          c_22 = ATgetArgument(r_26, 0);
          d_22 = ATgetArgument(r_26, 1);
        }
      else
        _fail(t);
      {
        ATerm s_26 = ATgetArgument(t, 1);
        if(match_cons(s_26, sym__2))
          {
            e_22 = ATgetArgument(s_26, 0);
            f_22 = ATgetArgument(s_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_22), c_22), (ATerm) ATinsert(CheckATermList(f_22), d_22));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL;
  m_55 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_55 = ATgetArgument(t, 0);
      o_55 = ATgetArgument(t, 1);
      l_55 = ATgetArgument(t, 2);
      {
        ATerm s_18 = NULL,t_18 = NULL,a_19 = NULL,b_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,q_19 = NULL,c_3 = NULL;
        t = l_55;
        t = fetch_1_0(e_4, t);
        t = l_55;
        t = genzip_4_0(i_4, j_4, n_4, LiftPrimArg_0_0, t);
        q_19 = t;
        if(match_cons(t, sym__2))
          {
            g_19 = ATgetArgument(t, 0);
            h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_19);
        b_19 = t;
        t = g_19;
        t = concat_0_0(t);
        i_19 = t;
        t = h_19;
        t = genzip_4_0(q_4, s_4, u_4, _id, t);
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_19, j_19);
        c_3 = t;
        t = SSLsetAnnotations(c_3, b_19);
        if(match_cons(t, sym__2))
          {
            s_18 = ATgetArgument(t, 0);
            {
              ATerm t_26 = ATgetArgument(t, 1);
              if(match_cons(t_26, sym__2))
                {
                  t_18 = ATgetArgument(t_26, 0);
                  a_19 = ATgetArgument(t_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_18), (ATerm) ATmakeAppl(sym_PrimT_3, n_55, o_55, a_19)));
      }
    }
  else
    {
      ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,e_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          n_55 = ATgetArgument(t, 0);
          o_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_55;
      t = fetch_1_0(v_4, t);
      t = o_55;
      t = genzip_4_0(w_4, x_4, y_4, LiftPrimArg_0_0, t);
      q_21 = t;
      if(match_cons(t, sym__2))
        {
          m_21 = ATgetArgument(t, 0);
          n_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_21);
      l_21 = t;
      t = m_21;
      t = concat_0_0(t);
      o_21 = t;
      t = n_21;
      t = genzip_4_0(z_4, b_5, f_5, _id, t);
      p_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_21, p_21);
      e_3 = t;
      t = SSLsetAnnotations(e_3, l_21);
      if(match_cons(t, sym__2))
        {
          i_21 = ATgetArgument(t, 0);
          {
            ATerm u_26 = ATgetArgument(t, 1);
            if(match_cons(u_26, sym__2))
              {
                j_21 = ATgetArgument(u_26, 0);
                k_21 = ATgetArgument(u_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, i_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_21), (ATerm) ATmakeAppl(sym_PrimT_3, n_55, (ATerm)ATempty, k_21)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t)
{
  static ATerm r_55 (ATerm t)
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_104(t);
        t = r_55(t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = p_104(t);
      }
    return(t);
  }
  t = r_55(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm l_56 = NULL,o_56 = NULL,q_56 = NULL,r_56 = NULL;
  r_56 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_56 = ATgetArgument(t, 0);
      o_56 = ATgetArgument(t, 1);
      q_56 = ATgetArgument(t, 2);
      {
        ATerm o_22 = NULL,j_3 = NULL;
        t = SSLgetAnnotations(r_56);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_56, o_56, q_56);
        j_3 = t;
        t = SSLsetAnnotations(j_3, o_22);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = r_56;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm x_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(g_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_26;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
  n_57 = t;
  if(match_cons(t, sym_Con_3))
    {
      o_57 = ATgetArgument(t, 0);
      p_57 = ATgetArgument(t, 1);
      m_57 = ATgetArgument(t, 2);
      {
        ATerm q_23 = NULL,m_3 = NULL;
        t = SSLgetAnnotations(n_57);
        q_23 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, o_57, p_57, m_57);
        m_3 = t;
        t = SSLsetAnnotations(m_3, q_23);
      }
    }
  else
    {
      ATerm m_24 = NULL,n_3 = NULL;
      if(match_cons(t, sym_App_2))
        {
          o_57 = ATgetArgument(t, 0);
          p_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_57);
      m_24 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, o_57, p_57);
      n_3 = t;
      t = SSLsetAnnotations(n_3, m_24);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm y_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_26;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      v_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_57;
  if(match_cons(t, sym_StratRule_3))
    {
      w_57 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
      y_57 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_57), (ATerm) ATmakeAppl(sym_Where_1, y_57)), w_57));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          w_57 = ATgetArgument(t, 0);
          x_57 = ATgetArgument(t, 1);
          y_57 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_57;
      t = pureterm_0_0(t);
      t = x_57;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, x_57)), (ATerm) ATmakeAppl(sym_Where_1, y_57)), (ATerm) ATmakeAppl(sym_Match_1, w_57)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm x_99 (ATerm), ATerm t)
{
  static ATerm f_58 (ATerm t)
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_99(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = SRTS_one(f_58, t);
      }
    return(t);
  }
  t = f_58(t);
  return(t);
}
static ATerm m_9 (ATerm p_27, ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  t = new_0_0(t);
  k_58 = t;
  t = p_27;
  {
    static ATerm m_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm c_27 = ATgetArgument(t, 0);
          if(match_cons(c_27, sym_Var_1))
            {
              if(((j_58 != NULL) && (j_58 != ATgetArgument(c_27, 0))))
                _fail(ATgetArgument(c_27, 0));
              else
                j_58 = ATgetArgument(c_27, 0);
            }
          else
            _fail(t);
          if(((h_58 != NULL) && (h_58 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_58 = ATgetArgument(t, 1);
          {
            ATerm d_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_58);
      return(t);
    }
    t = oncetd_1_0(m_5, t);
  }
  l_58 = t;
  t = q_27;
  {
    static ATerm n_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm e_27 = ATgetArgument(t, 0);
          if(match_cons(e_27, sym_Var_1))
            {
              if(((j_58 != NULL) && (j_58 != ATgetArgument(e_27, 0))))
                _fail(ATgetArgument(e_27, 0));
              else
                j_58 = ATgetArgument(e_27, 0);
            }
          else
            _fail(t);
          if(((i_58 != NULL) && (i_58 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_58 = ATgetArgument(t, 1);
          {
            ATerm f_27 = ATgetArgument(t, 2);
            if(match_cons(f_27, sym_CallT_3))
              {
                if(((g_58 != NULL) && (g_58 != ATgetArgument(f_27, 0))))
                  _fail(ATgetArgument(f_27, 0));
                else
                  g_58 = ATgetArgument(f_27, 0);
                {
                  ATerm g_27 = ATgetArgument(f_27, 1);
                  if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
                    _fail(t);
                }
                {
                  ATerm h_27 = ATgetArgument(f_27, 2);
                  if(((ATgetType(h_27) != AT_LIST) || !(ATisEmpty(h_27))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, k_58);
      return(t);
    }
    t = oncetd_1_0(n_5, t);
  }
  m_58 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_58), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, l_58, m_58, (ATerm) ATmakeAppl(sym_Seq_2, r_27, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(g_58), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_58), not_null(i_58), term_l_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_58)), (ATerm) ATmakeAppl(sym_Var_1, k_58))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm i_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_59 = NULL,f_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL;
          l_59 = t;
          if(match_cons(t, sym_SRule_1))
            {
              m_59 = ATgetArgument(t, 0);
              t = m_59;
              if(match_cons(t, sym_Rule_3))
                {
                  e_59 = ATgetArgument(t, 0);
                  f_59 = ATgetArgument(t, 1);
                  k_59 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_59;
              t = m_9(e_59, f_59, k_59, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm y_24 = NULL,b_25 = NULL,q_3 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  m_59 = ATgetArgument(t, 0);
                  n_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_59);
              y_24 = t;
              t = n_59;
              t = desugarRule_0_0(t);
              b_25 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, m_59, b_25);
              q_3 = t;
              t = SSLsetAnnotations(q_3, y_24);
            }
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(l_27);
    }
  else
    {
      t = i_27;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  static ATerm p_5 (ATerm t)
  {
    t = topdown_1_0(t_98, t);
    return(t);
  }
  t = t_98(t);
  t = SRTS_all(p_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
    }
  t = repeat_2_0(s_5, _id, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,m_60 = NULL;
            i_60 = t;
            if(match_cons(t, sym_CallT_3))
              {
                j_60 = ATgetArgument(t, 0);
                k_60 = ATgetArgument(t, 1);
                m_60 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = i_60;
            t = i_9(j_60, k_60, m_60, t);
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            {
              ATerm i_28 = t;
              int k_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(k_28);
                }
              else
                {
                  t = i_28;
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
                          int o_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_28 = t;
                              int q_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      u_60 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = u_60;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      v_60 = ATgetArgument(t, 0);
                                      t = v_60;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          v_60 = ATgetArgument(t, 0);
                                          w_60 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, v_60, w_60);
                                    }
                                  LocalPopChoice(q_28);
                                }
                              else
                                {
                                  t = p_28;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(o_28);
                            }
                          else
                            {
                              t = n_28;
                              {
                                ATerm r_28 = t;
                                int s_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(s_28);
                                  }
                                else
                                  {
                                    t = r_28;
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
  t = topdown_1_0(r_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL;
  s_61 = t;
  t = SSL_explode_term(s_61);
  if(match_cons(t, sym__2))
    {
      ATerm t_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_28 = ATgetArgument(t, 1);
        if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
          {
            r_61 = ATgetFirst((ATermList) u_28);
            {
              ATerm v_28 = (ATerm) ATgetNext((ATermList) u_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_61;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  k_25 = t;
  t = SSL_explode_term(k_25);
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_28 = ATgetArgument(t, 1);
        if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
          {
            ATerm y_28 = ATgetFirst((ATermList) x_28);
            i_25 = (ATerm) ATgetNext((ATermList) x_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_b_21;
  j_25 = t;
  t = SSL_mkterm(j_25, i_25);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL;
  static ATerm z_61 (ATerm t)
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
        l_61 = t;
        t = map_1_0(t_5, t);
        t = v_102(t);
        m_61 = t;
        t = l_61;
        t = map_1_0(u_5, t);
        t = z_61(t);
        n_61 = t;
        t = (ATerm) ATinsert(CheckATermList(n_61), m_61);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = map_1_0(v_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = z_61(t);
  k_61 = t;
  t = term_b_21;
  j_61 = t;
  t = SSL_mkterm(j_61, k_61);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm a_62 = NULL;
  a_62 = t;
  {
    ATerm b_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
        t = a_62;
        t = new_0_0(t);
        h_62 = t;
        t = new_0_0(t);
        i_62 = t;
        t = new_0_0(t);
        j_62 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_62), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, a_62), (ATerm) ATmakeAppl(sym_Var_1, i_62))), (ATerm) ATmakeAppl(sym_Var_1, j_62)), (ATerm)ATmakeAppl(sym_VarDec_2, h_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_29), term_h_29)), i_62, (ATerm)ATmakeAppl(sym_Var_1, i_62), j_62, (ATerm) ATmakeAppl(sym_Var_1, j_62));
        LocalPopChoice(d_29);
      }
    else
      {
        t = b_29;
        {
          ATerm a_63 = NULL,b_63 = NULL,f_63 = NULL;
          t = a_62;
          t = new_0_0(t);
          a_63 = t;
          t = new_0_0(t);
          b_63 = t;
          t = new_0_0(t);
          f_63 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_63), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, a_62), (ATerm) ATmakeAppl(sym_Var_1, b_63))), (ATerm) ATmakeAppl(sym_Var_1, f_63)), (ATerm)ATmakeAppl(sym_VarDec_2, a_63, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_29), term_h_29)), b_63, (ATerm)ATmakeAppl(sym_Var_1, b_63), f_63, (ATerm) ATmakeAppl(sym_Var_1, f_63));
        }
      }
  }
  return(t);
}
static ATerm n_9 (ATerm d_52, ATerm e_52, ATerm t)
{
  ATerm i_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_52, e_52);
      LocalPopChoice(k_29);
    }
  else
    {
      t = i_29;
      t = SSL_subtr(d_52, e_52);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm g_63 = NULL,i_63 = NULL;
  if(match_cons(t, sym__2))
    {
      g_63 = ATgetArgument(t, 0);
      i_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_63, i_63, (ATerm) ATempty);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm j_63 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if(((ATgetType(l_29) != AT_INT) || (ATgetInt((ATermInt) l_29) != 0)))
        _fail(t);
      {
        ATerm n_29 = ATgetArgument(t, 1);
      }
      j_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_63;
  return(t);
}
ATerm copy_1_0 (ATerm l_120 (ATerm), ATerm t)
{
  static ATerm y_5 (ATerm t)
  {
    ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,s_63 = NULL,v_63 = NULL,w_63 = NULL;
    if(match_cons(t, sym__3))
      {
        k_63 = ATgetArgument(t, 0);
        l_63 = ATgetArgument(t, 1);
        m_63 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, k_63, term_t_19);
    t = geq_0_0(t);
    t = term_t_19;
    w_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_63, term_t_19);
    t = n_9(k_63, w_63, t);
    s_63 = t;
    t = l_63;
    t = l_120(t);
    v_63 = t;
    t = (ATerm) ATmakeAppl(sym__3, s_63, l_63, (ATerm) ATinsert(CheckATermList(m_63), v_63));
    return(t);
  }
  t = for_3_0(w_5, x_5, y_5, t);
  return(t);
}
static ATerm o_9 (ATerm t_22, ATerm u_22, ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL;
  t = new_0_0(t);
  x_63 = t;
  t = new_0_0(t);
  y_63 = t;
  t = new_0_0(t);
  z_63 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_63), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_22)), (ATerm) ATmakeAppl(sym_Var_1, y_63))), (ATerm) ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_22)), (ATerm) ATmakeAppl(sym_Var_1, z_63)))), (ATerm)ATmakeAppl(sym_VarDec_2, x_63, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_29), term_h_29)), y_63, (ATerm)ATmakeAppl(sym_Var_1, y_63), z_63, (ATerm) ATmakeAppl(sym_Var_1, z_63));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_64 = ATgetFirst((ATermList) t);
      l_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_64;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_64;
    }
  else
    {
      t = l_64;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm z_68 (ATerm w_65, ATerm x_65, ATerm y_65, ATerm z_65, ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  t = term_t_19;
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_65, term_t_19);
  t = q_10(x_65, r_66, t);
  q_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_66, term_o_29);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_66 = ATgetFirst((ATermList) t);
      i_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_66;
  t = last_0_0(t);
  g_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_66), h_66), i_66);
  t = genzip_4_0(a_6, c_6, d_6, e_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      j_66 = ATgetArgument(t, 0);
      k_66 = ATgetArgument(t, 1);
      l_66 = ATgetArgument(t, 2);
      m_66 = ATgetArgument(t, 3);
      n_66 = ATgetArgument(t, 4);
      o_66 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_66), l_66), i_66);
  t = concat_0_0(t);
  p_66 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, w_65, term_p_29), k_66, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(p_66), h_66), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_66)), (ATerm) ATmakeAppl(sym_Op_2, w_65, m_66))), (ATerm)ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_66)), (ATerm) ATmakeAppl(sym_Op_2, w_65, o_66))), (ATerm) ATmakeAppl(sym_Seqs_1, j_66)))));
  return(t);
}
static ATerm c_69 (ATerm d_67, ATerm j_67, ATerm m_67, ATerm n_67, ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,z_67 = NULL,b_68 = NULL,e_68 = NULL,g_68 = NULL,k_68 = NULL,l_68 = NULL;
  t = n_67;
  t = new_0_0(t);
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_67, (ATerm) ATmakeAppl(sym_Var_1, u_67));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      v_67 = ATgetArgument(t, 0);
      z_67 = ATgetArgument(t, 1);
      b_68 = ATgetArgument(t, 2);
      e_68 = ATgetArgument(t, 3);
      g_68 = ATgetArgument(t, 4);
      k_68 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_68, g_68);
  t = conc_0_0(t);
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, d_67, term_q_29), z_67, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(l_68), u_67), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_67)), (ATerm) ATmakeAppl(sym_Op_2, d_67, e_68))), (ATerm)ATmakeAppl(sym_Op_2, d_67, k_68), (ATerm) ATmakeAppl(sym_Seqs_1, v_67)))));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      ATerm t_29 = ATgetArgument(t, 1);
      if(((ATgetType(t_29) != AT_LIST) || !(ATisEmpty(t_29))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,w_66 = NULL,x_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
        {
          s_66 = ATgetFirst((ATermList) u_29);
          t_66 = (ATerm) ATgetNext((ATermList) u_29);
        }
      else
        _fail(t);
      {
        ATerm x_29 = ATgetArgument(t, 1);
        if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
          {
            w_66 = ATgetFirst((ATermList) x_29);
            x_66 = (ATerm) ATgetNext((ATermList) x_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_66, w_66), (ATerm) ATmakeAppl(sym__2, t_66, x_66));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL;
  if(match_cons(t, sym__2))
    {
      y_66 = ATgetArgument(t, 0);
      z_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_66), y_66);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL;
  if(match_cons(t, sym__2))
    {
      a_67 = ATgetArgument(t, 0);
      b_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(a_67, b_67, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,s_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL;
  o_68 = t;
  if(match_cons(t, sym__3))
    {
      p_68 = ATgetArgument(t, 0);
      s_68 = ATgetArgument(t, 1);
      u_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_68;
  if(match_string(t, "T"))
    {
      t = u_68;
      if(match_cons(t, sym__2))
        {
          v_68 = ATgetArgument(t, 0);
          w_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_68;
      if(match_int(t, 0))
        {
          ATerm a_30 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_68(p_68, v_68, w_68, o_68, t);
              LocalPopChoice(b_30);
            }
          else
            {
              t = a_30;
              {
                ATerm y_68 = NULL;
                t = o_68;
                t = new_0_0(t);
                y_68 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, p_68, term_p_29), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_68), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_68)), (ATerm) ATmakeAppl(sym_Op_2, p_68, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_68)), (ATerm) ATmakeAppl(sym_Op_2, p_68, (ATerm) ATempty))), term_l_24))));
              }
            }
        }
      else
        {
          t = z_68(p_68, v_68, w_68, o_68, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = u_68;
      if(match_cons(t, sym__2))
        {
          v_68 = ATgetArgument(t, 0);
          w_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_69(p_68, v_68, w_68, o_68, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm s_10 = NULL;
  static ATerm f_6 (ATerm t)
  {
    t = y_110(t);
    if(((s_10 != NULL) && (s_10 != t)))
      _fail(t);
    else
      s_10 = t;
    return(t);
  }
  t = fetch_1_0(f_6, t);
  t = not_null(s_10);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm w_10 = NULL,y_10 = NULL,z_10 = NULL;
  t = term_x_14;
  y_10 = t;
  t = (ATerm) ATinsert(ATempty, term_c_30);
  z_10 = t;
  t = SSL_printnl(y_10, z_10);
  t = term_t_19;
  w_10 = t;
  t = SSL_exit(w_10);
  t = (ATerm) ATinsert(ATempty, term_c_30);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL;
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm h_30 = ATgetArgument(t, 0);
          c_11 = ATgetArgument(t, 1);
          d_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(g_30);
      t = d_11;
      t = foldr_3_0(r_6, s_6, v_6, t);
      t = c_11;
      t = foldr_3_0(y_6, e_7, g_7, t);
    }
  else
    {
      t = f_30;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm i_30 = ATgetArgument(t, 0);
          c_11 = ATgetArgument(t, 1);
          d_11 = ATgetArgument(t, 2);
          {
            ATerm j_30 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_11;
      t = foldr_3_0(j_7, n_7, o_7, t);
      t = c_11;
      t = foldr_3_0(p_7, s_7, t_7, t);
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm h_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(h_11, k_11, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(l_11, m_11, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(w_11, x_11, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(d_12, e_12, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm k_30 = ATgetArgument(t, 0);
      ATerm l_30 = ATgetArgument(t, 1);
      ATerm m_30 = ATgetArgument(t, 2);
      ATerm n_30 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL;
      static ATerm h_6 (ATerm t)
      {
        ATerm j_11 = NULL,n_11 = NULL;
        j_11 = t;
        {
          ATerm r_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  n_11 = ATgetArgument(t, 0);
                  {
                    ATerm u_30 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm v_30 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(s_30);
              t = n_11;
              if(((i_11 != NULL) && (i_11 != t)))
                _fail(t);
              else
                i_11 = t;
              t = j_11;
            }
          else
            {
              t = r_30;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  n_11 = ATgetArgument(t, 0);
                  {
                    ATerm w_30 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm x_30 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm y_30 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = n_11;
              if(((i_11 != NULL) && (i_11 != t)))
                _fail(t);
              else
                i_11 = t;
              t = j_11;
            }
        }
        return(t);
      }
      t = fetch_1_0(h_6, t);
      {
        static ATerm o_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((i_11 != NULL) && (i_11 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_11 = ATgetArgument(t, 0);
              {
                ATerm z_30 = ATgetArgument(t, 1);
              }
              {
                ATerm a_31 = ATgetArgument(t, 2);
              }
              {
                ATerm b_31 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_6, t);
      }
      t = not_null(i_11);
      t = debug_1_0(p_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
        ATerm v_13 = NULL;
        v_13 = t;
        t = map_1_0(q_6, t);
        t = v_13;
        {
          ATerm d_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(u_7, t);
              LocalPopChoice(e_31);
            }
          else
            {
              t = d_31;
              {
                ATerm k_12 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    k_12 = ATgetFirst((ATermList) t);
                    {
                      ATerm g_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = k_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_r_25;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,q_12 = NULL;
  a_14 = t;
  t = SSL_explode_term(a_14);
  if(match_cons(t, sym__2))
    {
      ATerm h_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_31 = ATgetArgument(t, 1);
        if(((ATgetType(i_31) == AT_LIST) && !(ATisEmpty(i_31))))
          {
            b_14 = ATgetFirst((ATermList) i_31);
            {
              ATerm j_31 = (ATerm) ATgetNext((ATermList) i_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_14);
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_31 = ATgetArgument(t, 1);
        if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
          {
            ATerm n_31 = ATgetFirst((ATermList) m_31);
            ATerm p_31 = (ATerm) ATgetNext((ATermList) m_31);
            if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
              {
                q_12 = ATgetFirst((ATermList) p_31);
                {
                  ATerm q_31 = (ATerm) ATgetNext((ATermList) p_31);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, b_14, q_12);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(v_7, w_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  h_14 = t;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_14;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_14 = ATgetFirst((ATermList) t);
      l_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_14;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_14;
            if((i_14 != t))
              {
                _fail(t);
              }
            t = g_14;
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            t = (ATerm) ATmakeAppl(sym__2, i_14, l_14);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, i_14, l_14);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  static ATerm k_15 (ATerm t)
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_100(t);
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        t = SRTS_all(k_15, t);
      }
    return(t);
  }
  t = k_15(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      if(((ATgetType(x_31) != AT_LIST) || !(ATisEmpty(x_31))))
        _fail(t);
      {
        ATerm y_31 = ATgetArgument(t, 1);
        if(((ATgetType(y_31) != AT_LIST) || !(ATisEmpty(y_31))))
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
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_31 = ATgetArgument(t, 0);
      if(((ATgetType(z_31) == AT_LIST) && !(ATisEmpty(z_31))))
        {
          y_15 = ATgetFirst((ATermList) z_31);
          z_15 = (ATerm) ATgetNext((ATermList) z_31);
        }
      else
        _fail(t);
      {
        ATerm a_32 = ATgetArgument(t, 1);
        if(((ATgetType(a_32) == AT_LIST) && !(ATisEmpty(a_32))))
          {
            a_16 = ATgetFirst((ATermList) a_32);
            d_16 = (ATerm) ATgetNext((ATermList) a_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_15, a_16), (ATerm) ATmakeAppl(sym__2, z_15, d_16));
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm f_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_16), f_16);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  n_15 = t;
  {
    ATerm b_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_32 = ATgetArgument(t, 0);
            ATerm h_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(f_32);
        t = n_15;
      }
    else
      {
        t = b_32;
        {
          ATerm x_15 = NULL;
          if(match_cons(t, sym__3))
            {
              o_15 = ATgetArgument(t, 0);
              p_15 = ATgetArgument(t, 1);
              q_15 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
          t = genzip_4_0(x_7, y_7, a_8, _id, t);
          x_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_15, q_15);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  static ATerm b_8 (ATerm t)
  {
    ATerm u_12 = NULL;
    t = c_98(t);
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_12, not_null(p_16));
    t = lookup_0_0(t);
    t = d_98(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((p_16 != NULL) && (p_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_16;
  t = alltd_1_0(b_8, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,t_3 = NULL;
  z_18 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  v_18 = t;
  t = w_18;
  t = new_0_0(t);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_18, x_18);
  t_3 = t;
  t = SSLsetAnnotations(t_3, v_18);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,k_19 = NULL,u_3 = NULL;
  k_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_19);
  c_19 = t;
  t = d_19;
  t = new_0_0(t);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_19, e_19);
  u_3 = t;
  t = SSLsetAnnotations(u_3, c_19);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_19 = ATgetArgument(t, 0);
      {
        ATerm i_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_19), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm m_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_19 = ATgetArgument(t, 0);
      {
        ATerm j_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, m_19);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm y_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_19 = ATgetArgument(t, 0);
      {
        ATerm m_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_19;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm z_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_19 = ATgetArgument(t, 0);
      {
        ATerm n_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_19;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm a_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      c_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
      a_20 = ATgetArgument(t, 2);
      t = c_20;
      if(match_cons(t, sym_SVar_1))
        {
          d_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_20;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          c_20 = ATgetArgument(t, 0);
          e_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_20;
      if(match_cons(t, sym_SVar_1))
        {
          d_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_20;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm i_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_20;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,m_18 = NULL,n_18 = NULL,p_18 = NULL;
  j_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_32 = ATgetFirst((ATermList) t);
      if(match_cons(q_32, sym_SDefT_4))
        {
          c_18 = ATgetArgument(q_32, 0);
          d_18 = ATgetArgument(q_32, 1);
          e_18 = ATgetArgument(q_32, 2);
          {
            ATerm s_32 = ATgetArgument(q_32, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm r_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_18;
  t = map_1_0(c_8, t);
  h_18 = t;
  t = e_18;
  t = map_1_0(d_8, t);
  i_18 = t;
  t = h_18;
  t = map_1_0(e_8, t);
  n_18 = t;
  t = i_18;
  t = map_1_0(f_8, t);
  m_18 = t;
  t = j_18;
  {
    static ATerm h_8 (ATerm t)
    {
      ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm t_32 = ATgetArgument(t, 0);
          n_19 = ATgetArgument(t, 1);
          o_19 = ATgetArgument(t, 2);
          p_19 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = o_19;
      t = map_1_0(i_8, t);
      u_19 = t;
      t = n_19;
      t = map_1_0(j_8, t);
      w_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, w_19, n_18, p_19);
      t = substitute_2_0(k_8, _id, t);
      v_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_19, m_18, v_19);
      t = substitute_2_0(l_8, _id, t);
      return(t);
    }
    t = map_1_0(h_8, t);
  }
  t = choices_0_0(t);
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_18, h_18, i_18, p_18);
  return(t);
}
static ATerm j_71 (ATerm r_69, ATerm v_69, ATerm w_69, ATerm y_69, ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,k_70 = NULL,n_70 = NULL,y_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_69, v_69);
  t = Definitions_0_0(t);
  g_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_70, w_69);
  n_70 = t;
  if(match_cons(t, sym__2))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      ATerm v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_70);
  h_70 = t;
  t = g_70;
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_70 = NULL,q_70 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_70 = ATgetFirst((ATermList) t);
            q_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_70;
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        {
          ATerm y_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(z_32);
            }
          else
            {
              t = y_32;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  k_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_70, w_69);
  y_3 = t;
  t = SSLsetAnnotations(y_3, h_70);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,d_71 = NULL;
  w_70 = t;
  if(match_cons(t, sym__2))
    {
      z_70 = ATgetArgument(t, 0);
      d_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_70;
  if(match_cons(t, sym__2))
    {
      a_71 = ATgetArgument(t, 0);
      b_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_71;
  if(match_cons(t, sym_Mod_2))
    {
      u_70 = ATgetArgument(t, 0);
      v_70 = ATgetArgument(t, 1);
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_71 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, u_70, v_70, b_71);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            i_71 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_71, d_71);
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            t = j_71(a_71, b_71, d_71, w_70, t);
          }
      }
    }
  else
    {
      t = j_71(a_71, b_71, d_71, w_70, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  static ATerm i_72 (ATerm t)
  {
    ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL;
    h_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_72 = ATgetFirst((ATermList) t);
        g_72 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_25 = NULL,x_25 = NULL,a_4 = NULL;
          t = SSLgetAnnotations(h_72);
          t_25 = t;
          t = g_72;
          t = i_72(t);
          x_25 = t;
          t = (ATerm) ATinsert(CheckATermList(x_25), f_72);
          a_4 = t;
          t = SSLsetAnnotations(a_4, t_25);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_72;
        t = c_111(t);
      }
    return(t);
  }
  t = i_72(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  l_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_71;
    }
  else
    {
      static ATerm o_8 (ATerm t)
      {
        t = not_null(n_71);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_71 = ATgetFirst((ATermList) t);
          if(((n_71 != NULL) && (n_71 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_71;
      t = at_end_1_0(o_8, t);
    }
  return(t);
}
static ATerm v_72 (ATerm n_72, ATerm t)
{
  ATerm o_72 = NULL;
  t = SSL_explode_term(n_72);
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_72;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
  s_72 = t;
  if(match_cons(t, sym__2))
    {
      q_72 = ATgetArgument(t, 0);
      r_72 = ATgetArgument(t, 1);
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_8 (ATerm t)
            {
              t = r_72;
              return(t);
            }
            t = q_72;
            t = at_end_1_0(r_8, t);
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            t = v_72(s_72, t);
          }
      }
    }
  else
    {
      t = v_72(s_72, t);
    }
  return(t);
}
static ATerm u_9 (ATerm i_117 (ATerm), ATerm m_62, ATerm l_62, ATerm t)
{
  static ATerm u_73 (ATerm t)
  {
    ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
    o_73 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_73;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_73 = ATgetFirst((ATermList) t);
            q_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_33 = t;
          int h_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_73;
              {
                static ATerm s_8 (ATerm t)
                {
                  t = l_62;
                  return(t);
                }
                t = h_10(i_117, s_8, p_73, q_73, t);
              }
              t = u_73(t);
              LocalPopChoice(h_33);
            }
          else
            {
              t = g_33;
              {
                ATerm j_26 = NULL,n_26 = NULL,c_4 = NULL;
                t = SSLgetAnnotations(o_73);
                j_26 = t;
                t = q_73;
                t = u_73(t);
                n_26 = t;
                t = (ATerm) ATinsert(CheckATermList(n_26), p_73);
                c_4 = t;
                t = SSLsetAnnotations(c_4, j_26);
              }
            }
        }
      }
    return(t);
  }
  t = m_62;
  t = u_73(t);
  return(t);
}
ATerm genzip_4_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  static ATerm o_74 (ATerm t)
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_103(t);
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        {
          ATerm x_73 = NULL,y_73 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,f_4 = NULL;
          t = g_103(t);
          n_74 = t;
          if(match_cons(t, sym__2))
            {
              y_73 = ATgetArgument(t, 0);
              k_74 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_74);
          x_73 = t;
          t = y_73;
          t = i_103(t);
          l_74 = t;
          t = k_74;
          t = o_74(t);
          m_74 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_74, m_74);
          f_4 = t;
          t = SSLsetAnnotations(f_4, x_73);
          t = h_103(t);
        }
      }
    return(t);
  }
  t = o_74(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      if(((ATgetType(k_33) != AT_LIST) || !(ATisEmpty(k_33))))
        _fail(t);
      {
        ATerm l_33 = ATgetArgument(t, 1);
        if(((ATgetType(l_33) != AT_LIST) || !(ATisEmpty(l_33))))
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
  ATerm v_74 = NULL,w_74 = NULL,j_75 = NULL,k_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_33 = ATgetArgument(t, 0);
      if(((ATgetType(m_33) == AT_LIST) && !(ATisEmpty(m_33))))
        {
          v_74 = ATgetFirst((ATermList) m_33);
          w_74 = (ATerm) ATgetNext((ATermList) m_33);
        }
      else
        _fail(t);
      {
        ATerm n_33 = ATgetArgument(t, 1);
        if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
          {
            j_75 = ATgetFirst((ATermList) n_33);
            k_75 = (ATerm) ATgetNext((ATermList) n_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_74, j_75), (ATerm) ATmakeAppl(sym__2, w_74, k_75));
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL;
  if(match_cons(t, sym__2))
    {
      l_75 = ATgetArgument(t, 0);
      m_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_75), l_75);
  return(t);
}
static ATerm z_9 (ATerm a_718, ATerm f_718, ATerm c_73, ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL;
  t = SSL_explode_term(f_718);
  if(match_cons(t, sym__2))
    {
      q_74 = ATgetArgument(t, 0);
      s_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_718);
  if(match_cons(t, sym__2))
    {
      if((q_74 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      r_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_74, s_74);
  t = genzip_4_0(x_8, y_8, z_8, _id, t);
  t_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_74, c_73);
  t = conc_0_0(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm y_75 = NULL;
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_75);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,o_4 = NULL;
  c_76 = t;
  if(match_cons(t, sym__2))
    {
      a_76 = ATgetArgument(t, 0);
      b_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_76);
  z_75 = t;
  t = b_76;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_76, b_76);
  o_4 = t;
  t = SSLsetAnnotations(o_4, z_75);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm a_77 = NULL,e_77 = NULL,h_77 = NULL,j_77 = NULL,l_77 = NULL;
  a_77 = t;
  if(match_cons(t, sym__2))
    {
      e_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_77;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_77 = ATgetFirst((ATermList) t);
      l_77 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_77(e_77, h_77, a_77, t);
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_77), j_77), l_77);
          }
      }
    }
  else
    {
      t = y_77(e_77, h_77, a_77, t);
    }
  return(t);
}
static ATerm y_77 (ATerm d_76, ATerm f_76, ATerm g_76, ATerm t)
{
  ATerm h_76 = NULL,k_76 = NULL,p_4 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  t = SSLgetAnnotations(g_76);
  h_76 = t;
  t = f_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_76 = ATgetFirst((ATermList) t);
      q_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_76;
  if(match_cons(t, sym__2))
    {
      o_76 = ATgetArgument(t, 0);
      p_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_76;
        if((o_76 != t))
          {
            _fail(t);
          }
        t = q_76;
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        t = f_76;
        t = z_9(o_76, p_76, q_76, t);
      }
  }
  k_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_76, k_76);
  p_4 = t;
  t = SSLsetAnnotations(p_4, h_76);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm x_77 = NULL;
  if(match_cons(t, sym__2))
    {
      x_77 = ATgetArgument(t, 0);
      if((x_77 != ATgetArgument(t, 1)))
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
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_9, d_9, e_9, t);
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL;
        r_77 = t;
        if(match_cons(t, sym__2))
          {
            s_77 = ATgetArgument(t, 0);
            t_77 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_77;
        t = u_9(f_9, s_77, t_77, t);
      }
    }
  return(t);
}
static ATerm b_10 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm d_74, ATerm a_74, ATerm i_74, ATerm e_74, ATerm b_74, ATerm c_74, ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,i_78 = NULL,j_78 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_74, e_74);
  t = w_129(t);
  if(match_cons(t, sym__2))
    {
      b_78 = ATgetArgument(t, 0);
      a_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_78;
  t = x_129(t);
  c_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_78, i_74);
  t = diff_0_0(t);
  d_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_78, a_74);
  t = conc_0_0(t);
  e_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_78, i_74);
  t = conc_0_0(t);
  i_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_74, b_78, b_74);
  t = y_129(t);
  j_78 = t;
  t = (ATerm) ATmakeAppl(sym__5, e_78, i_78, a_78, j_78, c_74);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t)
{
  ATerm l_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
        {
          l_78 = ATgetFirst((ATermList) w_33);
          p_78 = (ATerm) ATgetNext((ATermList) w_33);
        }
      else
        _fail(t);
      q_78 = ATgetArgument(t, 1);
      r_78 = ATgetArgument(t, 2);
      s_78 = ATgetArgument(t, 3);
      t_78 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = b_10(w_129, x_129, y_129, l_78, p_78, q_78, r_78, s_78, t_78, t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t)
{
  static ATerm u_78 (ATerm t)
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_105(t);
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = g_105(t);
        t = u_78(t);
      }
    return(t);
  }
  t = u_78(t);
  return(t);
}
ATerm for_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  t = i_105(t);
  t = while_not_2_0(j_105, k_105, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
  if(match_cons(t, sym__3))
    {
      e_79 = ATgetArgument(t, 0);
      f_79 = ATgetArgument(t, 1);
      g_79 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, e_79, e_79, f_79, g_79, (ATerm) ATempty);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm a_34 = ATgetArgument(t, 0);
      if(((ATgetType(a_34) != AT_LIST) || !(ATisEmpty(a_34))))
        _fail(t);
      {
        ATerm b_34 = ATgetArgument(t, 1);
      }
      {
        ATerm d_34 = ATgetArgument(t, 2);
      }
      j_79 = ATgetArgument(t, 3);
      k_79 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_79, k_79);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, p_9, q_9, t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL;
        if(match_cons(t, sym__5))
          {
            q_79 = ATgetArgument(t, 0);
            t_79 = ATgetArgument(t, 1);
            u_79 = ATgetArgument(t, 2);
            v_79 = ATgetArgument(t, 3);
            w_79 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = q_79;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_79 = ATgetFirst((ATermList) t);
            s_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, s_79, t_79, u_79, v_79, (ATerm) ATinsert(CheckATermList(w_79), r_79));
      }
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(s_9, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      n_79 = ATgetArgument(t, 1);
      o_79 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_79), n_79);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_27;
  if(match_cons(t, sym_Mod_2))
    {
      u_27 = ATgetArgument(t, 0);
      v_27 = ATgetArgument(t, 1);
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_27;
            t = u_8(u_27, v_27, y_27, t);
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
            t = j_28(x_27, y_27, t);
          }
      }
    }
  else
    {
      t = j_28(x_27, y_27, t);
    }
  return(t);
}
static ATerm j_28 (ATerm j_27, ATerm k_27, ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  t = term_x_14;
  s_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_17), k_27), term_b_17), j_27), term_z_16);
  t_27 = t;
  t = SSL_printnl(s_27, t_27);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_17), k_27), term_b_17), j_27), term_z_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
  t = for_3_0(g_9, h_9, k_9, t);
  b_81 = t;
  if(match_cons(t, sym__2))
    {
      c_81 = ATgetArgument(t, 0);
      d_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_81;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_81;
    }
  else
    {
      ATerm b_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_81 = ATgetFirst((ATermList) t);
          f_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(f_81), e_81);
      t = map_1_0(x_9, t);
      t = term_t_19;
      b_27 = t;
      t = SSL_exit(b_27);
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL;
  if(match_cons(t, sym__2))
    {
      x_81 = ATgetArgument(t, 0);
      y_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(x_81, y_81, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm z_81 = NULL,a_82 = NULL;
  if(match_cons(t, sym__2))
    {
      z_81 = ATgetArgument(t, 0);
      a_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(z_81, a_82, t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm b_82 = NULL;
  if(match_cons(t, sym__2))
    {
      b_82 = ATgetArgument(t, 0);
      if((b_82 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL;
  l_81 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      o_81 = ATgetArgument(t, 0);
      j_81 = ATgetArgument(t, 1);
      k_81 = ATgetArgument(t, 2);
      {
        ATerm o_34 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  q_81 = t;
  t = j_81;
  t = foldr_3_0(y_9, a_10, d_10, t);
  m_81 = t;
  t = k_81;
  t = foldr_3_0(f_10, a_11, b_11, t);
  n_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_81, (ATerm) ATmakeAppl(sym__2, m_81, n_81));
  {
    ATerm p_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(s_34);
      }
    else
      {
        t = p_34;
        t = (ATerm) ATempty;
      }
  }
  s_81 = t;
  t = o_81;
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        t = (ATerm) ATempty;
      }
  }
  r_81 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_81, n_81));
  w_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_81, n_81)), r_81);
  t = i_10(e_11, w_81, r_81, t);
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_81, (ATerm) ATmakeAppl(sym__2, m_81, n_81));
  u_81 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_34, (ATerm) ATinsert(CheckATermList(s_81), l_81));
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_81, (ATerm) ATmakeAppl(sym__2, m_81, n_81)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_34, (ATerm) ATinsert(CheckATermList(s_81), l_81)));
  t = e_10(f_11, u_81, v_81, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_34, p_81);
  t_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_81, (ATerm) ATmakeAppl(sym_Defined_2, term_w_34, p_81));
  t = e_10(g_11, o_81, t_81, t);
  t = q_81;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL;
  if(match_cons(t, sym__2))
    {
      q_82 = ATgetArgument(t, 0);
      r_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(q_82, r_82, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm s_82 = NULL,t_82 = NULL;
  if(match_cons(t, sym__2))
    {
      s_82 = ATgetArgument(t, 0);
      t_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(s_82, t_82, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm u_82 = NULL;
  if(match_cons(t, sym__2))
    {
      u_82 = ATgetArgument(t, 0);
      if((u_82 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  e_82 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      h_82 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
      d_82 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  j_82 = t;
  t = c_82;
  t = foldr_3_0(o_11, p_11, q_11, t);
  f_82 = t;
  t = d_82;
  t = foldr_3_0(r_11, s_11, u_11, t);
  g_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_82, (ATerm) ATmakeAppl(sym__2, f_82, g_82));
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = (ATerm) ATempty;
      }
  }
  l_82 = t;
  t = h_82;
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        t = (ATerm) ATempty;
      }
  }
  k_82 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_82, g_82));
  p_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_82, g_82)), k_82);
  t = i_10(v_11, p_82, k_82, t);
  i_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_82, (ATerm) ATmakeAppl(sym__2, f_82, g_82));
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_35, (ATerm) ATinsert(CheckATermList(l_82), e_82));
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_82, (ATerm) ATmakeAppl(sym__2, f_82, g_82)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_35, (ATerm) ATinsert(CheckATermList(l_82), e_82)));
  t = e_10(b_12, n_82, o_82, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_35, i_82);
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_82, (ATerm) ATmakeAppl(sym_Defined_2, term_c_35, i_82));
  t = e_10(c_12, h_82, m_82, t);
  t = j_82;
  return(t);
}
static ATerm e_10 (ATerm f_130 (ATerm), ATerm b_75, ATerm z_74, ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
  y_82 = t;
  t = f_130(t);
  v_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_82, b_75, z_74);
  t = v_10(v_82, b_75, z_74, t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_83 = NULL;
        t = term_f_35;
        b_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_82, term_f_35);
        t = u_10(v_82, b_83, t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_82 = ATgetFirst((ATermList) t);
      x_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_35;
  z_82 = t;
  t = (ATerm) ATinsert(CheckATermList(x_82), (ATerm) ATinsert(CheckATermList(w_82), b_75));
  a_83 = t;
  t = SSL_table_put(v_82, z_82, a_83);
  t = y_82;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm o_83 = NULL;
  o_83 = t;
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_29 = NULL,f_29 = NULL;
        t = term_m_34;
        f_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_34, o_83);
        t = g_10(f_29, o_83, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_35) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            c_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_29;
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        {
          ATerm l_35 = t;
          int m_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_29 = NULL,m_29 = NULL;
              t = term_m_34;
              m_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_m_34, o_83);
              t = g_10(m_29, o_83, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm n_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_35) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  j_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_29;
              LocalPopChoice(m_35);
            }
          else
            {
              t = l_35;
              {
                ATerm s_29 = NULL,d_30 = NULL;
                t = term_m_34;
                d_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_34, o_83);
                t = g_10(d_30, o_83, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm o_35 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_35) != ATmakeSymbol("e_0", 0, ATtrue)))
                      _fail(t);
                    s_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_29;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm g_10 (ATerm l_70, ATerm m_70, ATerm t)
{
  ATerm s_83 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_70, m_70);
  t = u_10(l_70, m_70, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_83 = ATgetFirst((ATermList) t);
      {
        ATerm p_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_83;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm j_84 = NULL,l_84 = NULL;
  j_84 = t;
  if(match_cons(t, sym__2))
    {
      ATerm q_35 = ATgetArgument(t, 0);
      l_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_84;
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      ATerm s_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_30 = NULL,t_30 = NULL;
        t = term_l_34;
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_34, j_84);
        t = g_10(t_30, j_84, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_35) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
            q_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_30;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        {
          ATerm w_35 = t;
          int x_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_31 = NULL,f_31 = NULL;
              t = term_l_34;
              f_31 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_l_34, j_84);
              t = g_10(f_31, j_84, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm y_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_35) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  c_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_31;
              LocalPopChoice(x_35);
            }
          else
            {
              t = w_35;
              {
                ATerm l_31 = NULL,o_31 = NULL;
                t = term_l_34;
                o_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_34, j_84);
                t = g_10(o_31, j_84, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm z_35 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_35) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    l_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_31;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL;
  if(match_cons(t, sym__2))
    {
      h_85 = ATgetArgument(t, 0);
      i_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(h_85, i_85, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL;
  if(match_cons(t, sym__2))
    {
      j_85 = ATgetArgument(t, 0);
      k_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(j_85, k_85, t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm l_85 = NULL;
  if(match_cons(t, sym__2))
    {
      l_85 = ATgetArgument(t, 0);
      if((l_85 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
  v_84 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_84 = ATgetArgument(t, 0);
      t_84 = ATgetArgument(t, 1);
      u_84 = ATgetArgument(t, 2);
      {
        ATerm a_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_85 = t;
  t = t_84;
  t = foldr_3_0(f_12, g_12, h_12, t);
  w_84 = t;
  t = u_84;
  t = foldr_3_0(i_12, j_12, l_12, t);
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_84, (ATerm) ATmakeAppl(sym__2, w_84, x_84));
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = (ATerm) ATempty;
      }
  }
  c_85 = t;
  t = y_84;
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = (ATerm) ATempty;
      }
  }
  b_85 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_84, x_84));
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_84, x_84)), b_85);
  t = i_10(m_12, g_85, b_85, t);
  z_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_84, (ATerm) ATmakeAppl(sym__2, w_84, x_84));
  e_85 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_36, (ATerm) ATinsert(CheckATermList(c_85), v_84));
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_84, (ATerm) ATmakeAppl(sym__2, w_84, x_84)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_36, (ATerm) ATinsert(CheckATermList(c_85), v_84)));
  t = e_10(n_12, e_85, f_85, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_36, z_84);
  d_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_84, (ATerm) ATmakeAppl(sym_Defined_2, term_g_36, z_84));
  t = e_10(o_12, y_84, d_85, t);
  t = a_85;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL;
  if(match_cons(t, sym__2))
    {
      y_85 = ATgetArgument(t, 0);
      z_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(y_85, z_85, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL;
  if(match_cons(t, sym__2))
    {
      a_86 = ATgetArgument(t, 0);
      b_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(a_86, b_86, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL;
  if(match_cons(t, sym__2))
    {
      h_86 = ATgetArgument(t, 0);
      i_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(h_86, i_86, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL;
  if(match_cons(t, sym__2))
    {
      j_86 = ATgetArgument(t, 0);
      k_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(j_86, k_86, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL;
  if(match_cons(t, sym__2))
    {
      r_86 = ATgetArgument(t, 0);
      s_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(r_86, s_86, t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL;
  if(match_cons(t, sym__2))
    {
      t_86 = ATgetArgument(t, 0);
      u_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(t_86, u_86, t);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL;
  n_85 = t;
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            o_85 = ATgetArgument(t, 0);
            p_85 = ATgetArgument(t, 1);
            q_85 = ATgetArgument(t, 2);
            {
              ATerm j_36 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_36);
        {
          ATerm v_85 = NULL,w_85 = NULL;
          t = p_85;
          t = foldr_3_0(p_12, r_12, s_12, t);
          v_85 = t;
          t = q_85;
          t = foldr_3_0(t_12, v_12, w_12, t);
          w_85 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_85, (ATerm) ATmakeAppl(sym__2, v_85, w_85)));
        }
      }
    else
      {
        t = h_36;
        if(match_cons(t, sym_ExtSDef_3))
          {
            o_85 = ATgetArgument(t, 0);
            p_85 = ATgetArgument(t, 1);
            q_85 = ATgetArgument(t, 2);
            {
              ATerm f_86 = NULL,g_86 = NULL;
              t = p_85;
              t = foldr_3_0(x_12, y_12, z_12, t);
              f_86 = t;
              t = q_85;
              t = foldr_3_0(b_13, c_13, d_13, t);
              g_86 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_85, (ATerm) ATmakeAppl(sym__2, f_86, g_86)));
            }
          }
        else
          {
            ATerm o_86 = NULL,p_86 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                o_85 = ATgetArgument(t, 0);
                p_85 = ATgetArgument(t, 1);
                q_85 = ATgetArgument(t, 2);
                {
                  ATerm k_36 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = p_85;
            t = foldr_3_0(e_13, f_13, g_13, t);
            o_86 = t;
            t = q_85;
            t = foldr_3_0(i_13, j_13, l_13, t);
            p_86 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_85, (ATerm) ATmakeAppl(sym__2, o_86, p_86)));
          }
      }
  }
  return(t);
}
static ATerm h_10 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm s_62, ATerm r_62, ATerm t)
{
  t = r_117(t);
  {
    static ATerm m_13 (ATerm t)
    {
      ATerm v_86 = NULL;
      v_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_62, v_86);
      t = q_117(t);
      return(t);
    }
    t = fetch_1_0(m_13, t);
  }
  t = r_62;
  return(t);
}
static ATerm i_10 (ATerm n_117 (ATerm), ATerm o_62, ATerm n_62, ATerm t)
{
  static ATerm l_87 (ATerm t)
  {
    ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL;
    g_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_62;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_87 = ATgetFirst((ATermList) t);
            i_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_36 = t;
          int m_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_87;
              {
                static ATerm n_13 (ATerm t)
                {
                  t = n_62;
                  return(t);
                }
                t = h_10(n_117, n_13, h_87, i_87, t);
              }
              t = l_87(t);
              LocalPopChoice(m_36);
            }
          else
            {
              t = l_36;
              {
                ATerm t_31 = NULL,w_31 = NULL,a_5 = NULL;
                t = SSLgetAnnotations(g_87);
                t_31 = t;
                t = i_87;
                t = l_87(t);
                w_31 = t;
                t = (ATerm) ATinsert(CheckATermList(w_31), h_87);
                a_5 = t;
                t = SSLsetAnnotations(a_5, t_31);
              }
            }
        }
      }
    return(t);
  }
  t = o_62;
  t = l_87(t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
  o_87 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_87;
      t = x_119(t);
    }
  else
    {
      ATerm t_87 = NULL,u_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_87 = ATgetFirst((ATermList) t);
          q_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_87;
      t = z_119(t);
      t_87 = t;
      t = q_87;
      t = foldr_3_0(x_119, y_119, z_119, t);
      u_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_87, u_87);
      t = y_119(t);
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL;
  if(match_cons(t, sym__2))
    {
      y_87 = ATgetArgument(t, 0);
      z_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(q_13, y_87, z_87, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm a_88 = NULL;
  if(match_cons(t, sym__2))
    {
      a_88 = ATgetArgument(t, 0);
      if((a_88 != ATgetArgument(t, 1)))
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
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL;
  x_87 = t;
  t = foldr_3_0(o_13, p_13, DefinitionName_0_0, t);
  v_87 = t;
  t = x_87;
  t = map_1_0(r_13, t);
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_87, w_87, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,e_5 = NULL;
  g_88 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_88 = ATgetFirst((ATermList) t);
      d_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_88);
  b_88 = t;
  t = c_88;
  t = o_84(t);
  e_88 = t;
  t = d_88;
  t = p_84(t);
  f_88 = t;
  t = (ATerm) ATinsert(CheckATermList(f_88), e_88);
  e_5 = t;
  t = SSLsetAnnotations(e_5, b_88);
  return(t);
}
static ATerm j_10 (ATerm g_45, ATerm h_45, ATerm t)
{
  ATerm h_88 = NULL;
  t = SSL_fputc(g_45, h_45);
  h_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_88);
  return(t);
}
static ATerm k_10 (ATerm b_44, ATerm c_44, ATerm t)
{
  ATerm i_88 = NULL;
  t = SSL_write_term_to_stream_text(b_44, c_44);
  i_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_88);
  return(t);
}
static ATerm m_10 (ATerm d_106 (ATerm), ATerm r_312, ATerm f_44, ATerm t)
{
  ATerm j_88 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_312, term_r_36);
  t = p_10(t);
  j_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_88, f_44);
  t = d_106(t);
  t = fclose_0_0(t);
  t = f_44;
  return(t);
}
static ATerm l_10 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm k_88 = NULL;
  t = SSL_write_term_to_stream_baf(x_43, y_43);
  k_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_88);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if(match_cons(s_36, sym_Stream_1))
        {
          n_88 = ATgetArgument(s_36, 0);
        }
      else
        _fail(t);
      o_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(n_88, o_88, t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_36 = ATgetArgument(t, 0);
      if(match_cons(t_36, sym_Stream_1))
        {
          s_88 = ATgetArgument(t_36, 0);
        }
      else
        _fail(t);
      t_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(s_88, t_88, t);
  p_88 = t;
  t = term_y_22;
  q_88 = t;
  t = p_88;
  if(match_cons(t, sym_Stream_1))
    {
      r_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_22, p_88);
  t = j_10(q_88, r_88, t);
  return(t);
}
ATerm output_1_0 (ATerm u_125 (ATerm), ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL;
  t = u_125(t);
  m_88 = t;
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_36;
        t = get_config_0_0(t);
        LocalPopChoice(v_36);
      }
    else
      {
        t = u_36;
        t = term_x_36;
      }
  }
  l_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_88, m_88);
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_37;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, l_88, m_88);
        LocalPopChoice(z_36);
        if(match_cons(t, sym__2))
          {
            ATerm b_37 = ATgetArgument(t, 0);
            ATerm c_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_10(s_13, l_88, m_88, t);
      }
    else
      {
        t = y_36;
        if(match_cons(t, sym__2))
          {
            ATerm d_37 = ATgetArgument(t, 0);
            ATerm e_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_10(u_13, l_88, m_88, t);
      }
  }
  return(t);
}
static ATerm h_89 (ATerm b_89, ATerm t)
{
  t = SSL_fclose(b_89);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_89 = NULL,f_89 = NULL;
  f_89 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_89 = ATgetArgument(t, 0);
      {
        ATerm f_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_89);
            LocalPopChoice(g_37);
          }
        else
          {
            t = f_37;
            t = h_89(f_89, t);
          }
      }
    }
  else
    {
      t = h_89(f_89, t);
    }
  return(t);
}
static ATerm n_10 (ATerm d_44, ATerm t)
{
  t = SSL_read_term_from_stream(d_44);
  return(t);
}
static ATerm o_10 (ATerm i_45, ATerm j_45, ATerm t)
{
  ATerm i_89 = NULL;
  t = SSL_fopen(i_45, j_45);
  i_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_89);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_89 = NULL;
  t = SSL_stdin_stream();
  j_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_89);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_89 = NULL;
  t = SSL_stdout_stream();
  k_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_89);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_89 = NULL;
  t = SSL_stderr_stream();
  l_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_89);
  return(t);
}
static ATerm s_90 (ATerm r_89, ATerm t)
{
  ATerm s_89 = NULL;
  t = SSL_explode_term(r_89);
  if(match_cons(t, sym__2))
    {
      ATerm h_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_37 = ATgetArgument(t, 1);
        if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
          {
            s_89 = ATgetFirst((ATermList) i_37);
            {
              ATerm j_37 = (ATerm) ATgetNext((ATermList) i_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_89;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_89;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_89;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_89;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_90 (ATerm v_89, ATerm w_89, ATerm x_89, ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL,d_90 = NULL,o_5 = NULL;
  t = SSLgetAnnotations(x_89);
  a_90 = t;
  t = v_89;
  if(match_cons(t, sym_Path_1))
    {
      d_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_90, w_89);
  o_5 = t;
  t = SSLsetAnnotations(o_5, a_90);
  if(match_cons(t, sym__2))
    {
      y_89 = ATgetArgument(t, 0);
      z_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(y_89, z_89, t);
  return(t);
}
static ATerm u_90 (ATerm f_90, ATerm g_90, ATerm h_90, ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,n_90 = NULL,q_5 = NULL;
  t = SSLgetAnnotations(h_90);
  k_90 = t;
  t = SSL_is_string(f_90);
  n_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_90, g_90);
  q_5 = t;
  t = SSLsetAnnotations(q_5, k_90);
  if(match_cons(t, sym__2))
    {
      i_90 = ATgetArgument(t, 0);
      j_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(i_90, j_90, t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
  p_90 = t;
  if(match_cons(t, sym__2))
    {
      q_90 = ATgetArgument(t, 0);
      r_90 = ATgetArgument(t, 1);
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_90(p_90, t);
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            {
              ATerm m_37 = t;
              int n_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_90(q_90, r_90, p_90, t);
                  LocalPopChoice(n_37);
                }
              else
                {
                  t = m_37;
                  t = u_90(q_90, r_90, p_90, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_90(p_90, t);
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_o_37;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL;
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_90 = NULL;
      y_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_90, term_t_37);
      t = p_10(t);
      LocalPopChoice(s_37);
    }
  else
    {
      t = r_37;
      t = debug_1_0(w_13, t);
      _fail(t);
    }
  w_90 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_10(x_90, t);
  v_90 = t;
  t = w_90;
  t = fclose_0_0(t);
  t = v_90;
  return(t);
}
ATerm input_1_0 (ATerm v_125 (ATerm), ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_37;
      t = get_config_0_0(t);
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      t = term_x_37;
    }
  t = ReadFromFile_0_0(t);
  t = v_125(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
  a_91 = t;
  t = term_o_29;
  t = whoami_0_0(t);
  b_91 = t;
  t = term_x_14;
  d_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_37), b_91), term_y_37);
  e_91 = t;
  t = SSL_printnl(d_91, e_91);
  t = term_t_19;
  c_91 = t;
  t = SSL_exit(c_91);
  t = a_91;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm g_91 = NULL;
  g_91 = t;
  if(match_string(t, "-k"))
    {
      t = g_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_91;
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL;
  h_91 = t;
  t = SSL_string_to_int(h_91);
  i_91 = t;
  t = term_a_38;
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_38, i_91);
  t = x_10(j_91, i_91, t);
  t = h_91;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_13, z_13, c_14, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm l_91 = NULL;
  l_91 = t;
  if(match_string(t, "-S"))
    {
      t = l_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_91;
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL;
  t = term_g_38;
  m_91 = t;
  t = term_u_18;
  n_91 = t;
  t = term_h_38;
  t = x_10(m_91, n_91, t);
  t = term_i_38;
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL;
  o_91 = t;
  t = SSL_string_to_int(o_91);
  p_91 = t;
  t = term_g_38;
  q_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_38, p_91);
  t = x_10(q_91, p_91, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_91);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm r_91 = NULL,s_91 = NULL;
  t = term_m_38;
  r_91 = t;
  t = term_o_29;
  s_91 = t;
  t = term_n_38;
  t = x_10(r_91, s_91, t);
  t = term_o_38;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_14, e_14, m_14, t);
      LocalPopChoice(s_38);
    }
  else
    {
      t = r_38;
      {
        ATerm x_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_14, o_14, p_14, t);
            LocalPopChoice(y_38);
          }
        else
          {
            t = x_38;
            t = Option_3_0(q_14, r_14, s_14, t);
          }
      }
    }
  return(t);
}
static ATerm x_10 (ATerm a_49, ATerm b_49, ATerm t)
{
  ATerm t_91 = NULL;
  t = term_z_38;
  t_91 = t;
  t = SSL_table_put(t_91, a_49, b_49);
  t = (ATerm) ATmakeAppl(sym__3, term_z_38, a_49, b_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL;
      t = term_o_29;
      t = i_0(t);
      y_91 = t;
      t = term_a_39;
      z_91 = t;
      t = term_c_39;
      a_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_39, term_c_39, y_91);
      t = v_10(z_91, a_92, y_91, t);
      _fail(t);
    }
  else
    {
      ATerm d_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_91 = ATgetFirst((ATermList) t);
          x_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_91;
      t = d_0(t);
      t = term_o_29;
      t = g_0(t);
      d_92 = t;
      t = (ATerm) ATinsert(CheckATermList(x_91), d_92);
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm f_92 = NULL;
  f_92 = t;
  if(match_string(t, "-o"))
    {
      t = f_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_92;
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL;
  g_92 = t;
  t = term_w_36;
  h_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_36, g_92);
  t = x_10(h_92, g_92, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_92);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_14, u_14, v_14, t);
  return(t);
}
static ATerm v_10 (ATerm a_70, ATerm b_70, ATerm z_69, ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
  j_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_70, b_70);
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_39 = ATgetArgument(t, 0);
            ATerm i_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_70, b_70);
        t = u_10(a_70, b_70, t);
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        t = (ATerm) ATempty;
      }
  }
  k_92 = t;
  t = (ATerm) ATinsert(CheckATermList(k_92), z_69);
  l_92 = t;
  t = SSL_table_put(a_70, b_70, l_92);
  t = j_92;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL;
      t = term_o_29;
      t = t_0(t);
      w_92 = t;
      t = term_a_39;
      x_92 = t;
      t = term_c_39;
      y_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_39, term_c_39, w_92);
      t = v_10(x_92, y_92, w_92, t);
      _fail(t);
    }
  else
    {
      ATerm c_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_92 = ATgetFirst((ATermList) t);
          t_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_92;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_92 = ATgetFirst((ATermList) t);
          v_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_92;
      t = p_0(t);
      t = u_92;
      t = r_0(t);
      c_93 = t;
      t = (ATerm) ATinsert(CheckATermList(v_92), c_93);
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm e_93 = NULL;
  e_93 = t;
  if(match_string(t, "-i"))
    {
      t = e_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_93;
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL;
  f_93 = t;
  t = term_w_37;
  g_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_37, f_93);
  t = x_10(g_93, f_93, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_93);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_j_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_14, y_14, z_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_29;
  t = whoami_0_0(t);
  h_93 = t;
  t = term_x_14;
  j_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_39), h_93);
  k_93 = t;
  t = SSL_printnl(j_93, k_93);
  t = term_t_19;
  i_93 = t;
  t = SSL_exit(i_93);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_39;
  t = get_config_0_0(t);
  return(t);
}
static ATerm q_10 (ATerm x_51, ATerm y_51, ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_51, y_51);
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
      t = SSL_addr(x_51, y_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm t)
{
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL;
  m_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_93;
      t = v_119(t);
    }
  else
    {
      ATerm r_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_93 = ATgetFirst((ATermList) t);
          o_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_93;
      t = foldr_2_0(v_119, w_119, t);
      r_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_93, r_93);
      t = w_119(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL;
  if(match_cons(t, sym__2))
    {
      o_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(o_32, p_32, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_93 = NULL,k_32 = NULL,l_32 = NULL;
  t = times_0_0(t);
  l_32 = t;
  t = SSL_explode_term(l_32);
  if(match_cons(t, sym__2))
    {
      ATerm r_39 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_32;
  t = foldr_2_0(a_15, c_15, t);
  u_93 = t;
  t = SSL_TicksToSeconds(u_93);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL;
  f_94 = t;
  if(match_cons(t, sym__2))
    {
      g_94 = ATgetArgument(t, 0);
      h_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_94;
        if((g_94 != t))
          {
            _fail(t);
          }
        t = f_94;
        LocalPopChoice(y_39);
      }
    else
      {
        t = v_39;
        t = (ATerm) ATmakeAppl(sym__2, g_94, h_94);
        {
          ATerm a_40 = t;
          int b_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_94, h_94);
              LocalPopChoice(b_40);
            }
          else
            {
              t = a_40;
              t = SSL_gtr(g_94, h_94);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_94, h_94);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  ATerm l_94 = NULL;
  l_94 = t;
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_94 = NULL;
        t = term_g_38;
        t = get_config_0_0(t);
        n_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_94, term_t_19);
        t = geq_0_0(t);
        t = l_94;
        t = t_107(t);
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
        t = l_94;
      }
  }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,s_94 = NULL,t_94 = NULL;
  t = run_time_0_0(t);
  p_94 = t;
  t = term_o_29;
  t = whoami_0_0(t);
  q_94 = t;
  t = term_x_14;
  s_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_40), p_94), term_h_40), q_94);
  t_94 = t;
  t = SSL_printnl(s_94, t_94);
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_40), p_94), term_h_40), q_94));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_94 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_18;
  u_94 = t;
  t = SSL_exit(u_94);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL;
  d_95 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_95;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_95 = ATgetArgument(t, 0);
          {
            ATerm d_33 = NULL,z_5 = NULL;
            t = SSLgetAnnotations(d_95);
            d_33 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_95);
            z_5 = t;
            t = SSLsetAnnotations(z_5, d_33);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_95;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_40;
      t = get_config_0_0(t);
      LocalPopChoice(k_40);
    }
  else
    {
      t = j_40;
      t = fetch_1_0(e_15, t);
    }
  t = l_125(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_95 = ATgetFirst((ATermList) t);
      h_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_95 = NULL,m_95 = NULL;
        static ATerm g_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_95)), not_null(m_95));
          return(t);
        }
        t = h_95;
        t = n_0(t);
        if(((l_95 != NULL) && (l_95 != t)))
          _fail(t);
        else
          l_95 = t;
        t = g_95;
        t = k_0(t);
        if(((m_95 != NULL) && (m_95 != t)))
          _fail(t);
        else
          m_95 = t;
        t = h_95;
        t = reverse_acc_2_0(k_0, g_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_29;
      t = n_0(t);
    }
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,j_6 = NULL;
  s_95 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_95);
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_95);
  j_6 = t;
  t = SSLsetAnnotations(j_6, q_95);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm u_95 = NULL;
  u_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_95), term_p_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL;
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_39;
      t = get_config_0_0(t);
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      t = fetch_1_0(h_15, t);
    }
  t = term_s_40;
  t = echo_0_0(t);
  t = term_a_39;
  o_95 = t;
  t = term_c_39;
  p_95 = t;
  t = term_t_40;
  t = u_10(o_95, p_95, t);
  t = reverse_acc_2_0(_id, i_15, t);
  t = map_1_0(j_15, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  static ATerm r_96 (ATerm t)
  {
    ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL;
    o_96 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_96 = ATgetFirst((ATermList) t);
        q_96 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_40 = t;
      int z_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_33 = NULL,r_33 = NULL,m_8 = NULL;
          t = SSLgetAnnotations(o_96);
          o_33 = t;
          t = p_96;
          t = w_110(t);
          r_33 = t;
          t = (ATerm) ATinsert(CheckATermList(q_96), r_33);
          m_8 = t;
          t = SSLsetAnnotations(m_8, o_33);
          LocalPopChoice(z_40);
        }
      else
        {
          t = y_40;
          {
            ATerm z_33 = NULL,c_34 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(o_96);
            z_33 = t;
            t = q_96;
            t = r_96(t);
            c_34 = t;
            t = (ATerm) ATinsert(CheckATermList(c_34), p_96);
            q_8 = t;
            t = SSLsetAnnotations(q_8, z_33);
          }
        }
    }
    return(t);
  }
  t = r_96(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL;
  v_96 = t;
  {
    ATerm a_41 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_96;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_41 = ATgetFirst((ATermList) t);
                ATerm d_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_96;
          }
        LocalPopChoice(b_41);
      }
    else
      {
        t = a_41;
        t = (ATerm) ATinsert(ATempty, v_96);
      }
  }
  w_96 = t;
  t = term_x_36;
  x_96 = t;
  t = SSL_printnl(x_96, w_96);
  t = v_96;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_39;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_10 (ATerm d_62, ATerm e_62, ATerm t)
{
  t = SSL_strcat(d_62, e_62);
  return(t);
}
ATerm debug_1_0 (ATerm b_106 (ATerm), ATerm t)
{
  ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL;
  d_97 = t;
  t = b_106(t);
  e_97 = t;
  t = term_x_14;
  f_97 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_97), e_97);
  g_97 = t;
  t = SSL_printnl(f_97, g_97);
  t = d_97;
  return(t);
}
ATerm map_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  static ATerm v_97 (ATerm t)
  {
    ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL;
    s_97 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_97;
      }
    else
      {
        ATerm n_34 = NULL,q_34 = NULL,r_34 = NULL,l_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_97 = ATgetFirst((ATermList) t);
            u_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_97);
        n_34 = t;
        t = t_97;
        t = m_110(t);
        q_34 = t;
        t = u_97;
        t = v_97(t);
        r_34 = t;
        t = (ATerm) ATinsert(CheckATermList(r_34), q_34);
        l_9 = t;
        t = SSLsetAnnotations(l_9, n_34);
      }
    return(t);
  }
  t = v_97(t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
    }
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_98 = NULL;
      i_98 = t;
      t = SSL_is_string(i_98);
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
      {
        ATerm j_41 = t;
        int k_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_15, t);
            LocalPopChoice(k_41);
          }
        else
          {
            t = j_41;
            {
              ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
              o_98 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_98 = ATgetArgument(t, 0);
                  t = p_98;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_98 = ATgetArgument(t, 0);
                      t = p_98;
                      {
                        ATerm l_41 = t;
                        int m_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(m_41);
                          }
                        else
                          {
                            t = l_41;
                            t = debug_1_0(m_15, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_98 = NULL,y_98 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_98 = ATgetArgument(t, 0);
                          q_98 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_98;
                      t = eval_config_0_0(t);
                      x_98 = t;
                      t = q_98;
                      t = eval_config_0_0(t);
                      y_98 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_98, y_98);
                      t = t_10(x_98, y_98, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_10 (ATerm r_71, ATerm s_71, ATerm t)
{
  t = SSL_table_get(r_71, s_71);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm c_99 = NULL,d_99 = NULL;
  c_99 = t;
  t = term_z_38;
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, c_99);
  t = u_10(d_99, c_99, t);
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_99 = NULL,f_99 = NULL;
        t = eval_config_0_0(t);
        e_99 = t;
        t = term_z_38;
        f_99 = t;
        t = SSL_table_put(f_99, c_99, e_99);
        t = e_99;
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
      }
  }
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
  ATerm i_99 = NULL,j_99 = NULL;
  t = term_p_41;
  i_99 = t;
  t = term_o_29;
  j_99 = t;
  t = term_q_41;
  t = x_10(i_99, j_99, t);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = term_r_41;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm k_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL;
  t = term_p_41;
  m_99 = t;
  t = term_o_29;
  n_99 = t;
  t = term_q_41;
  t = x_10(m_99, n_99, t);
  t = term_s_41;
  k_99 = t;
  t = term_o_29;
  l_99 = t;
  t = term_t_41;
  t = x_10(k_99, l_99, t);
  t = term_u_41;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_v_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_15, s_15, t_15, t);
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      t = Option_3_0(v_15, w_15, b_16, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,z_99 = NULL,a_100 = NULL,r_9 = NULL;
  s_99 = t;
  {
    ATerm y_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_42;
        t = o_127(t);
        LocalPopChoice(z_41);
      }
    else
      {
        t = y_41;
      }
  }
  t = s_99;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_99 = ATgetFirst((ATermList) t);
      v_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_99);
  t_99 = t;
  t = term_o_39;
  a_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_39, u_99);
  t = x_10(a_100, u_99, t);
  t = v_99;
  {
    static ATerm k_100 (ATerm t)
    {
      ATerm b_42 = t;
      int c_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_42 = t;
          int e_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_100 = NULL;
              d_100 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_100;
              LocalPopChoice(e_42);
            }
          else
            {
              t = d_42;
              t = o_127(t);
              t = Cons_2_0(_id, k_100, t);
            }
          LocalPopChoice(c_42);
        }
      else
        {
          t = b_42;
          {
            ATerm g_100 = NULL,h_100 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_100 = ATgetFirst((ATermList) t);
                h_100 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_100), (ATerm) ATmakeAppl(sym_Undefined_1, g_100));
          }
        }
      return(t);
    }
    t = k_100(t);
  }
  z_99 = t;
  t = (ATerm) ATinsert(CheckATermList(z_99), (ATerm) ATmakeAppl(sym_Program_1, u_99));
  r_9 = t;
  t = SSLsetAnnotations(r_9, t_99);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm y_100 = NULL;
  y_100 = t;
  if(match_string(t, "--help"))
    {
      t = y_100;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_100;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_100;
        }
    }
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm z_100 = NULL,a_101 = NULL;
  t = term_n_40;
  z_100 = t;
  t = term_o_29;
  a_101 = t;
  t = term_f_42;
  t = x_10(z_100, a_101, t);
  t = term_g_42;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL,w_100 = NULL,x_100 = NULL;
  t_100 = t;
  t = term_a_39;
  v_100 = t;
  t = term_c_39;
  w_100 = t;
  t = (ATerm) ATempty;
  x_100 = t;
  t = SSL_table_put(v_100, w_100, x_100);
  t = t_100;
  {
    static ATerm c_16 (ATerm t)
    {
      ATerm i_42 = t;
      int j_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_127(t);
          LocalPopChoice(j_42);
        }
      else
        {
          t = i_42;
          {
            ATerm k_42 = t;
            int l_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_16, h_16, i_16, t);
                LocalPopChoice(l_42);
              }
            else
              {
                t = k_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_16, t);
  }
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_101 = NULL;
        h_101 = t;
        {
          ATerm o_42 = t;
          int p_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_35 = NULL;
              t = h_101;
              {
                ATerm q_42 = t;
                int r_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_n_40;
                    t = get_config_0_0(t);
                    LocalPopChoice(r_42);
                  }
                else
                  {
                    t = q_42;
                    t = fetch_1_0(j_16, t);
                  }
              }
              t = h_101;
              t = default_system_usage_0_0(t);
              t = term_u_18;
              g_35 = t;
              t = SSL_exit(g_35);
              LocalPopChoice(p_42);
            }
          else
            {
              t = o_42;
              {
                ATerm k_35 = NULL;
                t = term_p_41;
                t = get_config_0_0(t);
                t = h_101;
                t = default_system_about_0_0(t);
                t = term_u_18;
                k_35 = t;
                t = SSL_exit(k_35);
              }
            }
        }
        LocalPopChoice(n_42);
      }
    else
      {
        t = m_42;
        {
          ATerm s_42 = t;
          int t_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_101 = NULL,j_101 = NULL,k_101 = NULL;
              static ATerm k_16 (ATerm t)
              {
                ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL,t_11 = NULL;
                n_101 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_101 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_101);
                l_101 = t;
                t = m_101;
                if(((r_100 != NULL) && (r_100 != t)))
                  _fail(t);
                else
                  r_100 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_101);
                t_11 = t;
                t = SSLsetAnnotations(t_11, l_101);
                return(t);
              }
              t = fetch_1_0(k_16, t);
              t = term_x_14;
              j_101 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_100)), term_u_42);
              k_101 = t;
              t = SSL_printnl(j_101, k_101);
              t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_100)), term_u_42));
              t = default_system_usage_0_0(t);
              t = term_t_19;
              i_101 = t;
              t = SSL_exit(i_101);
              LocalPopChoice(t_42);
            }
          else
            {
              t = s_42;
            }
        }
      }
  }
  s_100 = t;
  t = term_a_39;
  u_100 = t;
  t = SSL_table_destroy(u_100);
  t = s_100;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL;
  t = parse_options_1_0(n_125, t);
  s_101 = t;
  t = term_v_42;
  v_101 = t;
  t = SSL_table_create(v_101);
  t = term_v_42;
  t_101 = t;
  t = term_w_42;
  u_101 = t;
  t = SSL_table_put(t_101, u_101, s_101);
  t = s_101;
  t = p_125(t);
  {
    ATerm x_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_125, t);
        LocalPopChoice(y_42);
      }
    else
      {
        t = x_42;
        {
          ATerm z_42 = t;
          int a_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_125(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_43);
            }
          else
            {
              t = z_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm b_43 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_43);
    }
  else
    {
      t = b_43;
      {
        ATerm d_43 = t;
        int e_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(e_43);
          }
        else
          {
            t = d_43;
            {
              ATerm f_43 = t;
              int g_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_16, r_16, t_16, t);
                  LocalPopChoice(g_43);
                }
              else
                {
                  t = f_43;
                  {
                    ATerm h_43 = t;
                    int i_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(i_43);
                      }
                    else
                      {
                        t = h_43;
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
static ATerm n_16 (ATerm t)
{
  t = input_1_0(u_16, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm x_101 = NULL,y_101 = NULL;
  t = term_a_37;
  x_101 = t;
  t = term_o_29;
  y_101 = t;
  t = term_j_43;
  t = x_10(x_101, y_101, t);
  t = term_k_43;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_l_43;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = output_1_0(v_16, t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,a_12 = NULL,z_11 = NULL;
  j_102 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_102);
  a_102 = t;
  t = b_102;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_102 = ATgetFirst((ATermList) t);
      e_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_102);
  c_102 = t;
  t = e_102;
  t = Cons_2_0(x_16, y_16, t);
  h_102 = t;
  t = (ATerm) ATinsert(CheckATermList(h_102), d_102);
  z_11 = t;
  t = SSLsetAnnotations(z_11, c_102);
  i_102 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_102);
  a_12 = t;
  t = SSLsetAnnotations(a_12, a_102);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm k_102 = NULL,l_102 = NULL,m_102 = NULL,n_102 = NULL,y_11 = NULL;
  n_102 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_102);
  k_102 = t;
  t = l_102;
  t = all_defs_0_0(t);
  m_102 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_102);
  y_11 = t;
  t = SSLsetAnnotations(y_11, k_102);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_16, default_usage_0_0, _id, n_16, t);
  return(t);
}

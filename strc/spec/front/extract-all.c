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
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_u_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_c_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_c_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_n_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_p_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_d_38;
ATerm term_a_38;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_y_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_y_34;
ATerm term_w_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_q_25;
ATerm term_h_25;
ATerm term_c_25;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_x_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_n_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_l_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Op_2, term_f_21, (ATerm) ATempty);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_21);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Call_2, term_p_22, (ATerm) ATempty);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Call_2, term_o_23, (ATerm) ATempty);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Call_2, term_e_21, (ATerm) ATempty);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Sort_2, term_g_29, (ATerm) ATempty);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_e_37);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_j_37);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_g_38);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym__2, term_r_38, term_m_18);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_18);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_x_38, term_p_29);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_w_39);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_r_38);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_e_41);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym__2, term_k_39, term_l_39);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym__2, term_r_41, term_p_29);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_u_41, term_p_29);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym__2, term_e_41, term_p_29);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_r_41);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_p_29);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm q_8 (ATerm z_23, ATerm b_24, ATerm c_24, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm x_8 (ATerm c_38, ATerm b_38, ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_117 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm i_38 (ATerm q_23, ATerm r_23, ATerm t);
static ATerm j_38 (ATerm f_24, ATerm h_24, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm v_98 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_9 (ATerm d_32, ATerm e_32, ATerm f_32, ATerm t);
static ATerm d_52 (ATerm t_51, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm t_101 (ATerm), ATerm t);
static ATerm i_9 (ATerm q_27, ATerm r_27, ATerm s_27, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_100 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm r_104 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm j_9 (ATerm o_52, ATerm p_52, ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm copy_1_0 (ATerm v_122 (ATerm), ATerm t);
static ATerm k_9 (ATerm v_22, ATerm w_22, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm i_69 (ATerm y_65, ATerm z_65, ATerm d_66, ATerm e_66, ATerm t);
static ATerm k_69 (ATerm o_67, ATerm p_67, ATerm q_67, ATerm r_67, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm u_112 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm x_107 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm h_102 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm u_71 (ATerm t_69, ATerm u_69, ATerm w_69, ATerm x_69, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_112 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_73 (ATerm c_73, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_9 (ATerm l_119 (ATerm), ATerm g_63, ATerm f_63, ATerm t);
ATerm genzip_4_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm v_9 (ATerm l_728, ATerm q_728, ATerm h_74, ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm r_78 (ATerm m_76, ATerm n_76, ATerm o_76, ATerm t);
static ATerm l_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm x_9 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm y_75, ATerm v_75, ATerm d_76, ATerm z_75, ATerm w_75, ATerm x_75, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t);
ATerm for_3_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm e_28 (ATerm g_27, ATerm k_27, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm h_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm a_10 (ATerm w_132 (ATerm), ATerm w_76, ATerm u_76, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm c_10 (ATerm f_71, ATerm g_71, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm q_13 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm d_10 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm m_63, ATerm l_63, ATerm t);
static ATerm e_10 (ATerm q_119 (ATerm), ATerm i_63, ATerm h_63, ATerm t);
ATerm foldr_3_0 (ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t);
static ATerm f_10 (ATerm v_45, ATerm w_45, ATerm t);
static ATerm g_10 (ATerm n_44, ATerm o_44, ATerm t);
static ATerm i_10 (ATerm z_107 (ATerm), ATerm w_317, ATerm t_44, ATerm t);
static ATerm h_10 (ATerm j_44, ATerm k_44, ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
ATerm output_1_0 (ATerm e_128 (ATerm), ATerm t);
static ATerm d_90 (ATerm x_89, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_10 (ATerm p_44, ATerm t);
static ATerm k_10 (ATerm q_62, ATerm r_62, ATerm t);
static ATerm l_10 (ATerm x_45, ATerm y_45, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_91 (ATerm n_90, ATerm t);
static ATerm p_91 (ATerm r_90, ATerm s_90, ATerm t_90, ATerm t);
static ATerm q_91 (ATerm b_91, ATerm c_91, ATerm d_91, ATerm t);
static ATerm m_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm f_128 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_10 (ATerm q_49, ATerm r_49, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_10 (ATerm u_70, ATerm v_70, ATerm t_70, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_10 (ATerm i_52, ATerm j_52, ATerm t);
ATerm foldr_2_0 (ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_109 (ATerm), ATerm t);
static ATerm g_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm need_help_1_0 (ATerm v_127 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_112 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm m_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_112 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_10 (ATerm l_72, ATerm m_72, ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm y_129 (ATerm), ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm parse_options_1_0 (ATerm x_129 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm t_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm q_8 (ATerm z_23, ATerm b_24, ATerm c_24, ATerm t)
{
  ATerm p_0 = NULL,r_0 = NULL;
  t = term_l_15;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_17), c_24), term_z_16), b_24), term_y_16), z_23), term_w_16);
  r_0 = t;
  t = SSL_printnl(p_0, r_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_17), c_24), term_z_16), b_24), term_y_16), z_23), term_w_16);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      if(((ATgetType(b_17) != AT_INT) || (ATgetInt((ATermInt) b_17) != 0)))
        _fail(t);
      {
        ATerm c_17 = ATgetArgument(t, 1);
        if(((ATgetType(c_17) != AT_INT) || (ATgetInt((ATermInt) c_17) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm u_1 = NULL,w_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
  u_1 = t;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_1;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = a_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL,u_0 = NULL;
        t = w_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_17 = ATgetFirst((ATermList) t);
            ATerm h_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(h_17) == AT_LIST) && !(ATisEmpty(h_17))))
              {
                ATerm i_17 = ATgetFirst((ATermList) h_17);
                ATerm k_17 = (ATerm) ATgetNext((ATermList) h_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm l_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_17;
            }
        }
        t = term_l_15;
        t_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_n_17);
        u_0 = t;
        t = SSL_printnl(t_0, u_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_n_17);
        t = giving_up_0_0(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        {
          ATerm a_1 = NULL,b_1 = NULL;
          t = w_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_17 = ATgetFirst((ATermList) t);
              if(match_cons(o_17, sym__2))
                {
                  a_1 = ATgetArgument(o_17, 0);
                  b_1 = ATgetArgument(o_17, 1);
                }
              else
                _fail(t);
              {
                ATerm p_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(p_17) != AT_LIST) || !(ATisEmpty(p_17))))
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
ATerm sboundin_3_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,n_4 = NULL;
  j_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
      {
        ATerm k_1 = NULL,v_1 = NULL,x_1 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(j_4);
        k_1 = t;
        t = k_4;
        t = u_99(t);
        v_1 = t;
        t = n_4;
        t = u_99(t);
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_1, x_1);
        d_1 = t;
        t = SSLsetAnnotations(d_1, k_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_4 = ATgetArgument(t, 0);
          n_4 = ATgetArgument(t, 1);
          h_4 = ATgetArgument(t, 2);
          {
            ATerm u_3 = NULL,m_4 = NULL,s_4 = NULL,f_5 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(j_4);
            u_3 = t;
            t = k_4;
            t = w_99(t);
            m_4 = t;
            t = n_4;
            t = w_99(t);
            s_4 = t;
            t = h_4;
            t = u_99(t);
            f_5 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, m_4, s_4, f_5);
            g_1 = t;
            t = SSLsetAnnotations(g_1, u_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              k_4 = ATgetArgument(t, 0);
              n_4 = ATgetArgument(t, 1);
              h_4 = ATgetArgument(t, 2);
              i_4 = ATgetArgument(t, 3);
              {
                ATerm d_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,m_6 = NULL,h_1 = NULL;
                t = SSLgetAnnotations(j_4);
                d_6 = t;
                t = k_4;
                t = w_99(t);
                i_6 = t;
                t = n_4;
                t = w_99(t);
                j_6 = t;
                t = h_4;
                t = w_99(t);
                k_6 = t;
                t = i_4;
                t = u_99(t);
                m_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_6, j_6, k_6, m_6);
                h_1 = t;
                t = SSLsetAnnotations(h_1, d_6);
              }
            }
          else
            {
              ATerm i_7 = NULL,n_7 = NULL,t_7 = NULL,l_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  k_4 = ATgetArgument(t, 0);
                  n_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_4);
              i_7 = t;
              t = k_4;
              t = w_99(t);
              n_7 = t;
              t = n_4;
              t = u_99(t);
              t_7 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, n_7, t_7);
              l_1 = t;
              t = SSLsetAnnotations(l_1, i_7);
            }
        }
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm u_4 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_4 = ATgetArgument(t, 0);
          {
            ATerm s_17 = ATgetArgument(t, 1);
          }
          {
            ATerm t_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_17);
      t = u_4;
    }
  else
    {
      t = q_17;
      if(match_cons(t, sym_SDefT_4))
        {
          u_4 = ATgetArgument(t, 0);
          {
            ATerm u_17 = ATgetArgument(t, 1);
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
      t = u_4;
    }
  return(t);
}
static ATerm x_8 (ATerm c_38, ATerm b_38, ATerm t)
{
  t = c_38;
  t = map_1_0(q_0, t);
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
  ATerm p_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(y_0, p_8, r_8, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm s_8 = NULL;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      if((s_8 != ATgetArgument(t, 1)))
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
  ATerm o_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(e_1, o_9, r_9, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      if((s_9 != ATgetArgument(t, 1)))
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
  ATerm l_6 = NULL;
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      if((l_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_117 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm i_5 = NULL,j_5 = NULL,l_5 = NULL;
    l_5 = t;
    {
      ATerm b_18 = t;
      int c_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_117(t);
          LocalPopChoice(c_18);
        }
      else
        {
          t = b_18;
          t = (ATerm) ATempty;
        }
    }
    i_5 = t;
    t = l_5;
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_5 = NULL,j_8 = NULL,k_8 = NULL;
          t = d_117(t);
          m_5 = t;
          t = l_5;
          {
            static ATerm s_0 (ATerm t)
            {
              ATerm c_8 = NULL;
              t = n_6(t);
              c_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_8, m_5);
              t = q_9(f_117, c_8, m_5, t);
              return(t);
            }
            t = e_117(s_0, n_6, v_0, t);
          }
          k_8 = t;
          t = SSL_explode_term(k_8);
          if(match_cons(t, sym__2))
            {
              ATerm f_18 = ATgetArgument(t, 0);
              j_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_8;
          t = foldr_3_0(w_0, x_0, _id, t);
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          {
            ATerm u_8 = NULL;
            t = SSL_explode_term(l_5);
            if(match_cons(t, sym__2))
              {
                ATerm g_18 = ATgetArgument(t, 0);
                u_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_8;
            t = foldr_3_0(z_0, c_1, n_6, t);
          }
        }
    }
    j_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_5, j_5);
    t = e_10(f_1, i_5, j_5, t);
    return(t);
  }
  t = n_6(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm u_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if(match_cons(h_18, sym_SVar_1))
        {
          u_6 = ATgetArgument(h_18, 0);
        }
      else
        _fail(t);
      w_6 = ATgetArgument(t, 1);
      x_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_6;
  t = foldr_3_0(n_1, o_1, p_1, t);
  y_6 = t;
  t = x_6;
  t = foldr_3_0(s_1, t_1, b_2, t);
  a_7 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_6, (ATerm) ATmakeAppl(sym__2, y_6, a_7)));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,j_7 = NULL,m_7 = NULL,o_7 = NULL;
  g_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
      t = g_7;
      t = x_8(h_7, j_7, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_7 = ATgetArgument(t, 0);
          j_7 = ATgetArgument(t, 1);
          m_7 = ATgetArgument(t, 2);
          t = j_7;
          t = map_1_0(c_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              h_7 = ATgetArgument(t, 0);
              j_7 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, h_7);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  h_7 = ATgetArgument(t, 0);
                  j_7 = ATgetArgument(t, 1);
                  m_7 = ATgetArgument(t, 2);
                  o_7 = ATgetArgument(t, 3);
                  t = j_7;
                  t = map_1_0(d_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_7 = ATgetArgument(t, 0);
                      j_7 = ATgetArgument(t, 1);
                      m_7 = ATgetArgument(t, 2);
                      o_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_7;
                  t = map_1_0(e_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm w_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_18 = ATgetArgument(t, 0);
      if(match_cons(i_18, sym__2))
        {
          w_10 = ATgetArgument(i_18, 0);
          {
            ATerm j_18 = ATgetArgument(i_18, 1);
          }
        }
      else
        _fail(t);
      if((w_10 != ATgetArgument(t, 1)))
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
  t = term_m_18;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm b_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(b_7, d_7, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(e_7, f_7, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm b_8 = NULL;
  ATerm y_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_8 = ATgetArgument(t, 0);
          {
            ATerm z_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_19);
      t = b_8;
    }
  else
    {
      t = y_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_8;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm d_9 = NULL;
  ATerm g_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_9 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_20);
      t = d_9;
    }
  else
    {
      t = g_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_9;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm s_10 = NULL;
  ATerm q_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_10 = ATgetArgument(t, 0);
          {
            ATerm v_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_20);
      t = s_10;
    }
  else
    {
      t = q_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_10;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(i_1, j_1, sboundin_3_0, m_1, t);
  return(t);
}
static ATerm i_38 (ATerm q_23, ATerm r_23, ATerm t)
{
  t = q_23;
  {
    ATerm x_20 = t;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL,y_23 = NULL,a_24 = NULL,d_24 = NULL,q_1 = NULL;
        d_24 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_23 = ATgetFirst((ATermList) t);
            a_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_24);
        u_23 = t;
        t = a_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(a_24), y_23);
        q_1 = t;
        t = SSLsetAnnotations(q_1, u_23);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_21, q_23);
  return(t);
}
static ATerm j_38 (ATerm f_24, ATerm h_24, ATerm t)
{
  t = f_24;
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL,t_24 = NULL,e_25 = NULL,g_25 = NULL,r_1 = NULL;
        g_25 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_24 = ATgetFirst((ATermList) t);
            e_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_25);
        o_24 = t;
        t = e_25;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_25), t_24);
        r_1 = t;
        t = SSLsetAnnotations(r_1, o_24);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_21, f_24);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,v_12 = NULL;
  r_26 = t;
  t = SSL_explode_term(r_26);
  if(match_cons(t, sym__2))
    {
      ATerm h_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
          {
            s_26 = ATgetFirst((ATermList) i_21);
            {
              ATerm j_21 = (ATerm) ATgetNext((ATermList) i_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(r_26);
  if(match_cons(t, sym__2))
    {
      ATerm k_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_21 = ATgetArgument(t, 1);
        if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
          {
            ATerm k_22 = ATgetFirst((ATermList) l_21);
            ATerm l_22 = (ATerm) ATgetNext((ATermList) l_21);
            if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
              {
                v_12 = ATgetFirst((ATermList) l_22);
                {
                  ATerm m_22 = (ATerm) ATgetNext((ATermList) l_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, v_12), s_26));
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, h_28), g_28));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm l_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, n_28), l_28));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  if(match_cons(t, sym__2))
    {
      c_30 = ATgetArgument(t, 0);
      d_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_22, (ATerm) ATinsert(ATinsert(ATempty, d_30), c_30));
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  if(match_cons(t, sym__2))
    {
      x_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_22, (ATerm) ATinsert(ATinsert(ATempty, y_30), x_30));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,r_25 = NULL,x_25 = NULL,a_26 = NULL,b_26 = NULL;
  x_25 = t;
  if(match_cons(t, sym_Anno_2))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
      {
        ATerm n_26 = NULL;
        t = b_26;
        t = foldr_2_0(f_2, g_2, t);
        n_26 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, a_26, n_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          a_26 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, a_26, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              a_26 = ATgetArgument(t, 0);
              {
                ATerm d_13 = NULL;
                t = a_26;
                {
                  ATerm r_22 = t;
                  int t_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_u_22;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_x_22;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_y_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_z_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_a_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(t_22);
                    }
                  else
                    {
                      t = r_22;
                      {
                        ATerm g_13 = NULL;
                        t = SSL_explode_string(a_26);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm b_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(b_23) != AT_INT) || (ATgetInt((ATermInt) b_23) != 39)))
                              _fail(t);
                            {
                              ATerm c_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
                                {
                                  g_13 = ATgetFirst((ATermList) c_23);
                                  {
                                    ATerm d_23 = (ATerm) ATgetNext((ATermList) c_23);
                                    if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
                                      {
                                        ATerm e_23 = ATgetFirst((ATermList) d_23);
                                        if(((ATgetType(e_23) != AT_INT) || (ATgetInt((ATermInt) e_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm f_23 = (ATerm) ATgetNext((ATermList) d_23);
                                          if(((ATgetType(f_23) != AT_LIST) || !(ATisEmpty(f_23))))
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
                        t = g_13;
                      }
                    }
                }
                d_13 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, d_13);
              }
            }
          else
            {
              ATerm g_23 = t;
              int i_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      a_26 = ATgetArgument(t, 0);
                      {
                        ATerm j_23 = ATgetArgument(t, 1);
                      }
                      r_25 = ATgetArgument(t, 2);
                      m_25 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, a_26, r_25, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_25), (ATerm) ATempty));
                }
              else
                {
                  t = g_23;
                  {
                    ATerm k_23 = t;
                    int l_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            a_26 = ATgetArgument(t, 0);
                            {
                              ATerm m_23 = ATgetArgument(t, 1);
                            }
                            r_25 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, a_26, r_25, term_p_23);
                      }
                    else
                      {
                        t = k_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            a_26 = ATgetArgument(t, 0);
                            b_26 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, a_26, b_26, term_p_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                a_26 = ATgetArgument(t, 0);
                                b_26 = ATgetArgument(t, 1);
                                {
                                  static ATerm h_2 (ATerm t)
                                  {
                                    t = b_26;
                                    return(t);
                                  }
                                  t = a_26;
                                  t = foldr_2_0(h_2, o_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    a_26 = ATgetArgument(t, 0);
                                    t = a_26;
                                    t = foldr_2_0(p_2, q_2, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        a_26 = ATgetArgument(t, 0);
                                        t = a_26;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            n_25 = ATgetFirst((ATermList) t);
                                            o_25 = (ATerm) ATgetNext((ATermList) t);
                                            t = o_25;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm s_23 = t;
                                                int t_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = i_38(a_26, x_25, t);
                                                    LocalPopChoice(t_23);
                                                  }
                                                else
                                                  {
                                                    t = s_23;
                                                    t = n_25;
                                                  }
                                              }
                                            else
                                              {
                                                t = i_38(a_26, x_25, t);
                                              }
                                          }
                                        else
                                          {
                                            t = i_38(a_26, x_25, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            a_26 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, a_26));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                a_26 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, a_26));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    a_26 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, a_26));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        a_26 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_26));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            a_26 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_26), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                a_26 = ATgetArgument(t, 0);
                                                                b_26 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_26), b_26);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    a_26 = ATgetArgument(t, 0);
                                                                    b_26 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm r_2 (ATerm t)
                                                                      {
                                                                        t = b_26;
                                                                        return(t);
                                                                      }
                                                                      t = a_26;
                                                                      t = foldr_2_0(r_2, s_2, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        a_26 = ATgetArgument(t, 0);
                                                                        t = a_26;
                                                                        t = foldr_2_0(t_2, w_2, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            a_26 = ATgetArgument(t, 0);
                                                                            b_26 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_e_21, (ATerm) ATinsert(CheckATermList(b_26), a_26));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                a_26 = ATgetArgument(t, 0);
                                                                                t = a_26;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    n_25 = ATgetFirst((ATermList) t);
                                                                                    o_25 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = o_25;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm v_23 = t;
                                                                                        int w_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = j_38(a_26, x_25, t);
                                                                                            LocalPopChoice(w_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_23;
                                                                                            t = n_25;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = j_38(a_26, x_25, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_38(a_26, x_25, t);
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
                                                                                        a_26 = ATgetArgument(t, 0);
                                                                                        b_26 = ATgetArgument(t, 1);
                                                                                        t = b_26;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            p_25 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_g_24, (ATerm) ATinsert(ATinsert(ATempty, p_25), a_26));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            a_26 = ATgetArgument(t, 0);
                                                                                            t = a_26;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                a_26 = ATgetArgument(t, 0);
                                                                                                b_26 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, a_26, b_26, term_i_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    a_26 = ATgetArgument(t, 0);
                                                                                                    b_26 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, a_26, b_26, term_i_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        a_26 = ATgetArgument(t, 0);
                                                                                                        b_26 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, a_26, (ATerm)ATempty, b_26);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            a_26 = ATgetArgument(t, 0);
                                                                                                            b_26 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, b_26, a_26);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                a_26 = ATgetArgument(t, 0);
                                                                                                                b_26 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, a_26, b_26, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    a_26 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, a_26, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        a_26 = ATgetArgument(t, 0);
                                                                                                                        b_26 = ATgetArgument(t, 1);
                                                                                                                        r_25 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, a_26, b_26, (ATerm)ATempty, r_25);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            a_26 = ATgetArgument(t, 0);
                                                                                                                            b_26 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_26, (ATerm)ATempty, (ATerm)ATempty, b_26);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                a_26 = ATgetArgument(t, 0);
                                                                                                                                b_26 = ATgetArgument(t, 1);
                                                                                                                                r_25 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_26, b_26, (ATerm)ATempty, r_25);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    a_26 = ATgetArgument(t, 0);
                                                                                                                                    b_26 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_26, (ATerm)ATempty, (ATerm)ATempty, b_26);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        a_26 = ATgetArgument(t, 0);
                                                                                                                                        b_26 = ATgetArgument(t, 1);
                                                                                                                                        r_25 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_26, b_26, (ATerm)ATempty, r_25);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            a_26 = ATgetArgument(t, 0);
                                                                                                                                            b_26 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_26, (ATerm)ATempty, (ATerm)ATempty, b_26);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm j_24 = ATgetArgument(t, 0);
                                                                                                                                                b_26 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, b_26);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm o_38 = NULL,q_38 = NULL,v_38 = NULL;
  q_38 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      v_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
      {
        ATerm b_39 = NULL,c_39 = NULL,e_39 = NULL,f_39 = NULL;
        t = q_38;
        t = new_0_0(t);
        b_39 = t;
        t = new_0_0(t);
        c_39 = t;
        t = new_0_0(t);
        e_39 = t;
        t = new_0_0(t);
        f_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_39), e_39), c_39), b_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, b_39), (ATerm) ATmakeAppl(sym_Var_1, e_39))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, v_38, (ATerm)ATmakeAppl(sym_Var_1, b_39), (ATerm) ATmakeAppl(sym_Var_1, c_39)), (ATerm) ATmakeAppl(sym_BAM_3, o_38, (ATerm)ATmakeAppl(sym_Var_1, e_39), (ATerm) ATmakeAppl(sym_Var_1, f_39)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_39)), (ATerm) ATmakeAppl(sym_Var_1, c_39))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          v_38 = ATgetArgument(t, 0);
          {
            ATerm g_39 = NULL,m_39 = NULL,r_39 = NULL,s_39 = NULL;
            t = q_38;
            t = new_0_0(t);
            r_39 = t;
            t = v_38;
            {
              static ATerm x_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((g_39 != NULL) && (g_39 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      g_39 = ATgetArgument(t, 0);
                    if(((m_39 != NULL) && (m_39 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      m_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_39);
                return(t);
              }
              t = oncetd_1_0(x_2, t);
            }
            s_39 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_39)), not_null(g_39))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_39)), (ATerm) ATmakeAppl(sym_Build_1, s_39))));
          }
        }
      else
        {
          ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              v_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_38;
          t = new_0_0(t);
          z_39 = t;
          t = new_0_0(t);
          a_40 = t;
          t = v_38;
          {
            static ATerm y_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((x_39 != NULL) && (x_39 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_39 = ATgetArgument(t, 0);
                  if(((y_39 != NULL) && (y_39 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    y_39 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, z_39);
              return(t);
            }
            t = oncetd_1_0(y_2, t);
          }
          b_40 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_40), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_40)), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_40))))), (ATerm)ATmakeAppl(sym_Var_1, z_39), (ATerm) ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_39)), not_null(x_39)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_40 = NULL,i_40 = NULL;
  d_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_40 = NULL,l_40 = NULL,n_40 = NULL,o_40 = NULL;
        t = d_40;
        t = new_0_0(t);
        n_40 = t;
        t = i_40;
        {
          static ATerm a_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_40 != NULL) && (k_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_40 = ATgetArgument(t, 0);
                if(((l_40 != NULL) && (l_40 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_40), k_40);
            return(t);
          }
          t = pat_td_1_0(a_3, t);
        }
        o_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_40), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_q_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_40))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_40))))));
        LocalPopChoice(p_24);
      }
    else
      {
        t = n_24;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
              t = d_40;
              t = new_0_0(t);
              w_40 = t;
              t = i_40;
              {
                static ATerm b_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, w_40);
                  return(t);
                }
                t = pat_td_1_0(b_3, t);
              }
              x_40 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_40)), not_null(v_40))));
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              {
                ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
                t = d_40;
                t = new_0_0(t);
                c_41 = t;
                t = i_40;
                {
                  static ATerm g_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((b_41 != NULL) && (b_41 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_41 = ATgetArgument(t, 0);
                        if(((a_41 != NULL) && (a_41 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_41 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_41);
                    return(t);
                  }
                  t = pat_td_1_0(g_3, t);
                }
                d_41 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_41)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_41)), not_null(b_41)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_98(t);
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
        l_45 = t;
        if(match_cons(t, sym_Op_2))
          {
            m_45 = ATgetArgument(t, 0);
            n_45 = ATgetArgument(t, 1);
            {
              ATerm p_13 = NULL,t_13 = NULL,i_2 = NULL;
              t = SSLgetAnnotations(l_45);
              p_13 = t;
              t = n_45;
              {
                static ATerm h_3 (ATerm t)
                {
                  t = pat_td_1_0(v_98, t);
                  return(t);
                }
                t = fetch_1_0(h_3, t);
              }
              t_13 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, m_45, t_13);
              i_2 = t;
              t = SSLsetAnnotations(i_2, p_13);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                m_45 = ATgetArgument(t, 0);
                n_45 = ATgetArgument(t, 1);
                {
                  ATerm w_24 = t;
                  int x_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_14 = NULL,b_15 = NULL,j_2 = NULL;
                      t = SSLgetAnnotations(l_45);
                      w_14 = t;
                      t = n_45;
                      t = pat_td_1_0(v_98, t);
                      b_15 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, m_45, b_15);
                      j_2 = t;
                      t = SSLsetAnnotations(j_2, w_14);
                      LocalPopChoice(x_24);
                    }
                  else
                    {
                      t = w_24;
                      {
                        ATerm t_15 = NULL,z_15 = NULL,k_2 = NULL;
                        t = SSLgetAnnotations(l_45);
                        t_15 = t;
                        t = m_45;
                        t = pat_td_1_0(v_98, t);
                        z_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, z_15, n_45);
                        k_2 = t;
                        t = SSLsetAnnotations(k_2, t_15);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    m_45 = ATgetArgument(t, 0);
                    n_45 = ATgetArgument(t, 1);
                    k_45 = ATgetArgument(t, 2);
                    {
                      ATerm o_16 = NULL,u_16 = NULL,l_2 = NULL;
                      t = SSLgetAnnotations(l_45);
                      o_16 = t;
                      t = k_45;
                      {
                        static ATerm i_3 (ATerm t)
                        {
                          t = pat_td_1_0(v_98, t);
                          return(t);
                        }
                        t = fetch_1_0(i_3, t);
                      }
                      u_16 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, m_45, n_45, u_16);
                      l_2 = t;
                      t = SSLsetAnnotations(l_2, o_16);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        m_45 = ATgetArgument(t, 0);
                        n_45 = ATgetArgument(t, 1);
                        k_45 = ATgetArgument(t, 2);
                        {
                          ATerm g_17 = NULL,m_17 = NULL,m_2 = NULL;
                          t = SSLgetAnnotations(l_45);
                          g_17 = t;
                          t = k_45;
                          {
                            static ATerm j_3 (ATerm t)
                            {
                              t = pat_td_1_0(v_98, t);
                              return(t);
                            }
                            t = fetch_1_0(j_3, t);
                          }
                          m_17 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, m_45, n_45, m_17);
                          m_2 = t;
                          t = SSLsetAnnotations(m_2, g_17);
                        }
                      }
                    else
                      {
                        ATerm v_17 = NULL,a_18 = NULL,n_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            m_45 = ATgetArgument(t, 0);
                            n_45 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(l_45);
                        v_17 = t;
                        t = n_45;
                        t = pat_td_1_0(v_98, t);
                        a_18 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, m_45, a_18);
                        n_2 = t;
                        t = SSLsetAnnotations(n_2, v_17);
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
  ATerm i_46 = NULL,j_46 = NULL;
  i_46 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL,l_46 = NULL,n_46 = NULL,o_46 = NULL;
        t = i_46;
        t = new_0_0(t);
        n_46 = t;
        t = j_46;
        {
          static ATerm l_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_46 != NULL) && (k_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_46 = ATgetArgument(t, 0);
                if(((l_46 != NULL) && (l_46 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_46 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, n_46);
            return(t);
          }
          t = pat_td_1_0(l_3, t);
        }
        o_46 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_46)), not_null(k_46))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_46)))), (ATerm) ATmakeAppl(sym_Build_1, o_46)));
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm d_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_46 = NULL,t_46 = NULL,u_46 = NULL;
              t = i_46;
              t = new_0_0(t);
              t_46 = t;
              t = j_46;
              {
                static ATerm o_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_46 != NULL) && (q_46 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, t_46);
                  return(t);
                }
                t = pat_td_1_0(o_3, t);
              }
              u_46 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_46)))), (ATerm) ATmakeAppl(sym_Build_1, u_46)));
              LocalPopChoice(f_25);
            }
          else
            {
              t = d_25;
              {
                ATerm c_47 = NULL,e_47 = NULL,r_47 = NULL,u_47 = NULL;
                t = i_46;
                t = new_0_0(t);
                r_47 = t;
                t = j_46;
                {
                  static ATerm p_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((c_47 != NULL) && (c_47 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          c_47 = ATgetArgument(t, 0);
                        if(((e_47 != NULL) && (e_47 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_47 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_47);
                    return(t);
                  }
                  t = pat_td_1_0(p_3, t);
                }
                u_47 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_47), not_null(e_47), (ATerm) ATmakeAppl(sym_Var_1, r_47))), (ATerm) ATmakeAppl(sym_Build_1, u_47)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,j_48 = NULL,k_48 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      j_48 = ATgetArgument(t, 0);
      k_48 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, j_48, k_48);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          j_48 = ATgetArgument(t, 0);
          t = j_48;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_48 = ATgetFirst((ATermList) t);
              b_48 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, a_48, (ATerm) ATmakeAppl(sym_LChoices_1, b_48));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_h_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              j_48 = ATgetArgument(t, 0);
              t = j_48;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_48 = ATgetFirst((ATermList) t);
                  b_48 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, a_48, (ATerm) ATmakeAppl(sym_Choices_1, b_48));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_h_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  j_48 = ATgetArgument(t, 0);
                  t = j_48;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_48 = ATgetFirst((ATermList) t);
                      b_48 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_48, (ATerm) ATmakeAppl(sym_Seqs_1, b_48));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_i_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      j_48 = ATgetArgument(t, 0);
                      k_48 = ATgetArgument(t, 1);
                      c_48 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, k_48, (ATerm) ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, c_48), j_48)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          j_48 = ATgetArgument(t, 0);
                          k_48 = ATgetArgument(t, 1);
                          c_48 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, c_48)), j_48), (ATerm) ATmakeAppl(sym_Build_1, k_48)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              j_48 = ATgetArgument(t, 0);
                              k_48 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_48, (ATerm) ATmakeAppl(sym_Match_1, k_48));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  j_48 = ATgetArgument(t, 0);
                                  k_48 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_48), k_48);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      j_48 = ATgetArgument(t, 0);
                                      k_48 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_48), j_48);
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
static ATerm q_3 (ATerm t)
{
  ATerm l_25 = t;
  if((PushChoice() == 0))
    {
      ATerm r_50 = NULL,t_50 = NULL,u_50 = NULL,u_2 = NULL;
      u_50 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_50);
      r_50 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_50);
      u_2 = t;
      t = SSLsetAnnotations(u_2, r_50);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_25;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_50 = ATgetFirst((ATermList) t);
      w_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_50, w_50);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm x_50 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      if(match_cons(s_25, sym__2))
        {
          x_50 = ATgetArgument(s_25, 0);
          b_51 = ATgetArgument(s_25, 1);
        }
      else
        _fail(t);
      {
        ATerm u_25 = ATgetArgument(t, 1);
        if(match_cons(u_25, sym__2))
          {
            c_51 = ATgetArgument(u_25, 0);
            d_51 = ATgetArgument(u_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_51), x_50), (ATerm) ATinsert(CheckATermList(d_51), b_51));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_51 = ATgetFirst((ATermList) t);
      g_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_51, g_51);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,m_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if(match_cons(v_25, sym__2))
        {
          h_51 = ATgetArgument(v_25, 0);
          i_51 = ATgetArgument(v_25, 1);
        }
      else
        _fail(t);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(match_cons(y_25, sym__2))
          {
            j_51 = ATgetArgument(y_25, 0);
            m_51 = ATgetArgument(y_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_51), h_51), (ATerm) ATinsert(CheckATermList(m_51), i_51));
  return(t);
}
static ATerm e_9 (ATerm d_32, ATerm e_32, ATerm f_32, ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,e_50 = NULL,i_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,v_2 = NULL;
  t = f_32;
  t = fetch_1_0(q_3, t);
  t = f_32;
  t = genzip_4_0(s_3, w_3, x_3, LiftPrimArg_0_0, t);
  q_50 = t;
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      i_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_50);
  x_49 = t;
  t = e_50;
  t = concat_0_0(t);
  o_50 = t;
  t = i_50;
  t = genzip_4_0(y_3, a_4, c_4, _id, t);
  p_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_50, p_50);
  v_2 = t;
  t = SSLsetAnnotations(v_2, x_49);
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(match_cons(z_25, sym__2))
          {
            v_49 = ATgetArgument(z_25, 0);
            w_49 = ATgetArgument(z_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_49), (ATerm) ATmakeAppl(sym_CallT_3, d_32, e_32, w_49)));
  return(t);
}
static ATerm d_52 (ATerm t_51, ATerm t)
{
  ATerm v_51 = NULL;
  t = t_51;
  {
    ATerm c_26 = t;
    if((PushChoice() == 0))
      {
        ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_2 = NULL;
        y_51 = t;
        if(match_cons(t, sym_Var_1))
          {
            x_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_51);
        w_51 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, x_51);
        z_2 = t;
        t = SSLsetAnnotations(z_2, w_51);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_26;
      }
  }
  t = new_0_0(t);
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, v_51), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_51), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_51)))), (ATerm) ATmakeAppl(sym_Var_1, v_51)));
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
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_52(z_51, t);
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_i_24, (ATerm) ATmakeAppl(sym_Var_1, a_52)));
          }
      }
    }
  else
    {
      t = d_52(z_51, t);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm f_26 = t;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL,o_19 = NULL,t_19 = NULL,c_3 = NULL;
      t_19 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_19);
      n_19 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_19);
      c_3 = t;
      t = SSLsetAnnotations(c_3, n_19);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_26;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm u_19 = NULL,h_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_19 = ATgetFirst((ATermList) t);
      h_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_19, h_20);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if(match_cons(g_26, sym__2))
        {
          i_20 = ATgetArgument(g_26, 0);
          j_20 = ATgetArgument(g_26, 1);
        }
      else
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(match_cons(h_26, sym__2))
          {
            k_20 = ATgetArgument(h_26, 0);
            r_20 = ATgetArgument(h_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_20), i_20), (ATerm) ATinsert(CheckATermList(r_20), j_20));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm s_20 = NULL,w_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_20 = ATgetFirst((ATermList) t);
      w_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_20, w_20);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(match_cons(i_26, sym__2))
        {
          y_20 = ATgetArgument(i_26, 0);
          z_20 = ATgetArgument(i_26, 1);
        }
      else
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(match_cons(k_26, sym__2))
          {
            a_21 = ATgetArgument(k_26, 0);
            b_21 = ATgetArgument(k_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_21), y_20), (ATerm) ATinsert(CheckATermList(b_21), z_20));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm l_26 = t;
  if((PushChoice() == 0))
    {
      ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,e_3 = NULL;
      x_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_21);
      v_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_21);
      e_3 = t;
      t = SSLsetAnnotations(e_3, v_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_26;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_21 = ATgetFirst((ATermList) t);
      z_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(match_cons(o_26, sym__2))
        {
          a_22 = ATgetArgument(o_26, 0);
          b_22 = ATgetArgument(o_26, 1);
        }
      else
        _fail(t);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(match_cons(p_26, sym__2))
          {
            c_22 = ATgetArgument(p_26, 0);
            d_22 = ATgetArgument(p_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_22), a_22), (ATerm) ATinsert(CheckATermList(d_22), b_22));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_22 = ATgetFirst((ATermList) t);
      f_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_22, f_22);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if(match_cons(q_26, sym__2))
        {
          g_22 = ATgetArgument(q_26, 0);
          h_22 = ATgetArgument(q_26, 1);
        }
      else
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(match_cons(t_26, sym__2))
          {
            i_22 = ATgetArgument(t_26, 0);
            j_22 = ATgetArgument(t_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_22), g_22), (ATerm) ATinsert(CheckATermList(j_22), h_22));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,r_55 = NULL,s_55 = NULL;
  o_55 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
      n_55 = ATgetArgument(t, 2);
      {
        ATerm o_18 = NULL,p_18 = NULL,w_18 = NULL,x_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,m_19 = NULL,d_3 = NULL;
        t = n_55;
        t = fetch_1_0(e_4, t);
        t = n_55;
        t = genzip_4_0(g_4, l_4, o_4, LiftPrimArg_0_0, t);
        m_19 = t;
        if(match_cons(t, sym__2))
          {
            c_19 = ATgetArgument(t, 0);
            d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_19);
        x_18 = t;
        t = c_19;
        t = concat_0_0(t);
        e_19 = t;
        t = d_19;
        t = genzip_4_0(r_4, t_4, v_4, _id, t);
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
        d_3 = t;
        t = SSLsetAnnotations(d_3, x_18);
        if(match_cons(t, sym__2))
          {
            o_18 = ATgetArgument(t, 0);
            {
              ATerm u_26 = ATgetArgument(t, 1);
              if(match_cons(u_26, sym__2))
                {
                  p_18 = ATgetArgument(u_26, 0);
                  w_18 = ATgetArgument(u_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_18), (ATerm) ATmakeAppl(sym_PrimT_3, r_55, s_55, w_18)));
      }
    }
  else
    {
      ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,f_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          r_55 = ATgetArgument(t, 0);
          s_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_55;
      t = fetch_1_0(w_4, t);
      t = s_55;
      t = genzip_4_0(x_4, y_4, z_4, LiftPrimArg_0_0, t);
      u_21 = t;
      if(match_cons(t, sym__2))
        {
          q_21 = ATgetArgument(t, 0);
          r_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_21);
      p_21 = t;
      t = q_21;
      t = concat_0_0(t);
      s_21 = t;
      t = r_21;
      t = genzip_4_0(a_5, c_5, e_5, _id, t);
      t_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
      f_3 = t;
      t = SSLsetAnnotations(f_3, p_21);
      if(match_cons(t, sym__2))
        {
          m_21 = ATgetArgument(t, 0);
          {
            ATerm v_26 = ATgetArgument(t, 1);
            if(match_cons(v_26, sym__2))
              {
                n_21 = ATgetArgument(v_26, 0);
                o_21 = ATgetArgument(v_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, m_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_21), (ATerm) ATmakeAppl(sym_PrimT_3, r_55, (ATerm)ATempty, o_21)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm t)
{
  static ATerm w_55 (ATerm t)
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_106(t);
        t = w_55(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = l_106(t);
      }
    return(t);
  }
  t = w_55(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL;
  t_56 = t;
  if(match_cons(t, sym_Con_3))
    {
      q_56 = ATgetArgument(t, 0);
      r_56 = ATgetArgument(t, 1);
      s_56 = ATgetArgument(t, 2);
      {
        ATerm s_22 = NULL,k_3 = NULL;
        t = SSLgetAnnotations(t_56);
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, q_56, r_56, s_56);
        k_3 = t;
        t = SSLsetAnnotations(k_3, s_22);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = t_56;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm y_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(g_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_26;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL;
  p_57 = t;
  if(match_cons(t, sym_Con_3))
    {
      q_57 = ATgetArgument(t, 0);
      r_57 = ATgetArgument(t, 1);
      o_57 = ATgetArgument(t, 2);
      {
        ATerm h_23 = NULL,m_3 = NULL;
        t = SSLgetAnnotations(p_57);
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, q_57, r_57, o_57);
        m_3 = t;
        t = SSLsetAnnotations(m_3, h_23);
      }
    }
  else
    {
      ATerm m_24 = NULL,n_3 = NULL;
      if(match_cons(t, sym_App_2))
        {
          q_57 = ATgetArgument(t, 0);
          r_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_57);
      m_24 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, q_57, r_57);
      n_3 = t;
      t = SSLsetAnnotations(n_3, m_24);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm z_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_26;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      x_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_57;
  if(match_cons(t, sym_StratRule_3))
    {
      y_57 = ATgetArgument(t, 0);
      z_57 = ATgetArgument(t, 1);
      a_58 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_57), (ATerm) ATmakeAppl(sym_Where_1, a_58)), y_57));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          y_57 = ATgetArgument(t, 0);
          z_57 = ATgetArgument(t, 1);
          a_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_57;
      t = pureterm_0_0(t);
      t = z_57;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, z_57)), (ATerm) ATmakeAppl(sym_Where_1, a_58)), (ATerm) ATmakeAppl(sym_Match_1, y_57)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm t_101 (ATerm), ATerm t)
{
  static ATerm h_58 (ATerm t)
  {
    ATerm a_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_101(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = a_27;
        t = SRTS_one(h_58, t);
      }
    return(t);
  }
  t = h_58(t);
  return(t);
}
static ATerm i_9 (ATerm q_27, ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  t = new_0_0(t);
  m_58 = t;
  t = q_27;
  {
    static ATerm k_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm d_27 = ATgetArgument(t, 0);
          if(match_cons(d_27, sym_Var_1))
            {
              if(((l_58 != NULL) && (l_58 != ATgetArgument(d_27, 0))))
                _fail(ATgetArgument(d_27, 0));
              else
                l_58 = ATgetArgument(d_27, 0);
            }
          else
            _fail(t);
          if(((j_58 != NULL) && (j_58 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_58 = ATgetArgument(t, 1);
          {
            ATerm e_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, l_58);
      return(t);
    }
    t = oncetd_1_0(k_5, t);
  }
  n_58 = t;
  t = r_27;
  {
    static ATerm n_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm f_27 = ATgetArgument(t, 0);
          if(match_cons(f_27, sym_Var_1))
            {
              if(((l_58 != NULL) && (l_58 != ATgetArgument(f_27, 0))))
                _fail(ATgetArgument(f_27, 0));
              else
                l_58 = ATgetArgument(f_27, 0);
            }
          else
            _fail(t);
          if(((k_58 != NULL) && (k_58 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_58 = ATgetArgument(t, 1);
          {
            ATerm h_27 = ATgetArgument(t, 2);
            if(match_cons(h_27, sym_CallT_3))
              {
                if(((i_58 != NULL) && (i_58 != ATgetArgument(h_27, 0))))
                  _fail(ATgetArgument(h_27, 0));
                else
                  i_58 = ATgetArgument(h_27, 0);
                {
                  ATerm i_27 = ATgetArgument(h_27, 1);
                  if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
                    _fail(t);
                }
                {
                  ATerm j_27 = ATgetArgument(h_27, 2);
                  if(((ATgetType(j_27) != AT_LIST) || !(ATisEmpty(j_27))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, m_58);
      return(t);
    }
    t = oncetd_1_0(n_5, t);
  }
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_58), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, n_58, o_58, (ATerm) ATmakeAppl(sym_Seq_2, s_27, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(i_58), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_58), not_null(k_58), term_i_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_58)), (ATerm) ATmakeAppl(sym_Var_1, m_58))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
          n_59 = t;
          if(match_cons(t, sym_SRule_1))
            {
              o_59 = ATgetArgument(t, 0);
              t = o_59;
              if(match_cons(t, sym_Rule_3))
                {
                  k_59 = ATgetArgument(t, 0);
                  l_59 = ATgetArgument(t, 1);
                  m_59 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_59;
              t = i_9(k_59, l_59, m_59, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm y_24 = NULL,b_25 = NULL,r_3 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  o_59 = ATgetArgument(t, 0);
                  p_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_59);
              y_24 = t;
              t = p_59;
              t = desugarRule_0_0(t);
              b_25 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, o_59, b_25);
              r_3 = t;
              t = SSLsetAnnotations(r_3, y_24);
            }
          LocalPopChoice(p_27);
        }
      else
        {
          t = n_27;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    t = topdown_1_0(p_100, t);
    return(t);
  }
  t = p_100(t);
  t = SRTS_all(o_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
    }
  t = repeat_2_0(s_5, _id, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm d_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_60 = NULL,m_60 = NULL,q_60 = NULL,r_60 = NULL;
            l_60 = t;
            if(match_cons(t, sym_CallT_3))
              {
                m_60 = ATgetArgument(t, 0);
                q_60 = ATgetArgument(t, 1);
                r_60 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = l_60;
            t = e_9(m_60, q_60, r_60, t);
            LocalPopChoice(f_28);
          }
        else
          {
            t = d_28;
            {
              ATerm i_28 = t;
              int j_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(j_28);
                }
              else
                {
                  t = i_28;
                  {
                    ATerm k_28 = t;
                    int m_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(m_28);
                      }
                    else
                      {
                        t = k_28;
                        {
                          ATerm o_28 = t;
                          int p_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_28 = t;
                              int r_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_60 = NULL,c_61 = NULL,d_61 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      w_60 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_60;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      c_61 = ATgetArgument(t, 0);
                                      t = c_61;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          c_61 = ATgetArgument(t, 0);
                                          d_61 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, c_61, d_61);
                                    }
                                  LocalPopChoice(r_28);
                                }
                              else
                                {
                                  t = q_28;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(p_28);
                            }
                          else
                            {
                              t = o_28;
                              {
                                ATerm s_28 = t;
                                int t_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(t_28);
                                  }
                                else
                                  {
                                    t = s_28;
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
  ATerm z_61 = NULL,d_62 = NULL;
  d_62 = t;
  t = SSL_explode_term(d_62);
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
          {
            z_61 = ATgetFirst((ATermList) v_28);
            {
              ATerm w_28 = (ATerm) ATgetNext((ATermList) v_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_61;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  k_25 = t;
  t = SSL_explode_term(k_25);
  if(match_cons(t, sym__2))
    {
      ATerm x_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_28 = ATgetArgument(t, 1);
        if(((ATgetType(y_28) == AT_LIST) && !(ATisEmpty(y_28))))
          {
            ATerm z_28 = ATgetFirst((ATermList) y_28);
            i_25 = (ATerm) ATgetNext((ATermList) y_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_c_21;
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
ATerm tuple_unzip_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL;
  static ATerm e_62 (ATerm t)
  {
    ATerm a_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
        p_61 = t;
        t = map_1_0(t_5, t);
        t = r_104(t);
        q_61 = t;
        t = p_61;
        t = map_1_0(u_5, t);
        t = e_62(t);
        r_61 = t;
        t = (ATerm) ATinsert(CheckATermList(r_61), q_61);
        LocalPopChoice(c_29);
      }
    else
      {
        t = a_29;
        t = map_1_0(v_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = e_62(t);
  m_61 = t;
  t = term_c_21;
  l_61 = t;
  t = SSL_mkterm(l_61, m_61);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm g_62 = NULL;
  g_62 = t;
  {
    ATerm d_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_62 = NULL,t_62 = NULL,u_62 = NULL;
        t = g_62;
        t = new_0_0(t);
        n_62 = t;
        t = new_0_0(t);
        t_62 = t;
        t = new_0_0(t);
        u_62 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_62), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, g_62), (ATerm) ATmakeAppl(sym_Var_1, t_62))), (ATerm) ATmakeAppl(sym_Var_1, u_62)), (ATerm)ATmakeAppl(sym_VarDec_2, n_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_29), term_j_29)), t_62, (ATerm)ATmakeAppl(sym_Var_1, t_62), u_62, (ATerm) ATmakeAppl(sym_Var_1, u_62));
        LocalPopChoice(f_29);
      }
    else
      {
        t = d_29;
        {
          ATerm w_62 = NULL,y_62 = NULL,z_62 = NULL;
          t = g_62;
          t = new_0_0(t);
          w_62 = t;
          t = new_0_0(t);
          y_62 = t;
          t = new_0_0(t);
          z_62 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_62), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, g_62), (ATerm) ATmakeAppl(sym_Var_1, y_62))), (ATerm) ATmakeAppl(sym_Var_1, z_62)), (ATerm)ATmakeAppl(sym_VarDec_2, w_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_29), term_j_29)), y_62, (ATerm)ATmakeAppl(sym_Var_1, y_62), z_62, (ATerm) ATmakeAppl(sym_Var_1, z_62));
        }
      }
  }
  return(t);
}
static ATerm j_9 (ATerm o_52, ATerm p_52, ATerm t)
{
  ATerm k_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_52, p_52);
      LocalPopChoice(m_29);
    }
  else
    {
      t = k_29;
      t = SSL_subtr(o_52, p_52);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  if(match_cons(t, sym__2))
    {
      a_63 = ATgetArgument(t, 0);
      b_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_63, b_63, (ATerm) ATempty);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm c_63 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if(((ATgetType(n_29) != AT_INT) || (ATgetInt((ATermInt) n_29) != 0)))
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
      }
      c_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_63;
  return(t);
}
ATerm copy_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  static ATerm z_5 (ATerm t)
  {
    ATerm e_63 = NULL,o_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
    if(match_cons(t, sym__3))
      {
        e_63 = ATgetArgument(t, 0);
        o_63 = ATgetArgument(t, 1);
        r_63 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, e_63, term_n_18);
    t = geq_0_0(t);
    t = term_n_18;
    u_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_63, term_n_18);
    t = j_9(e_63, u_63, t);
    s_63 = t;
    t = o_63;
    t = v_122(t);
    t_63 = t;
    t = (ATerm) ATmakeAppl(sym__3, s_63, o_63, (ATerm) ATinsert(CheckATermList(r_63), t_63));
    return(t);
  }
  t = for_3_0(w_5, x_5, z_5, t);
  return(t);
}
static ATerm k_9 (ATerm v_22, ATerm w_22, ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  t = new_0_0(t);
  w_63 = t;
  t = new_0_0(t);
  x_63 = t;
  t = new_0_0(t);
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_63), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_22)), (ATerm) ATmakeAppl(sym_Var_1, x_63))), (ATerm) ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_22)), (ATerm) ATmakeAppl(sym_Var_1, y_63)))), (ATerm)ATmakeAppl(sym_VarDec_2, w_63, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_29), term_j_29)), x_63, (ATerm)ATmakeAppl(sym_Var_1, x_63), y_63, (ATerm) ATmakeAppl(sym_Var_1, y_63));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_64 = ATgetFirst((ATermList) t);
      p_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_64;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_64;
    }
  else
    {
      t = p_64;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm i_69 (ATerm y_65, ATerm z_65, ATerm d_66, ATerm e_66, ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,v_66 = NULL;
  t = term_n_18;
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_65, term_n_18);
  t = n_10(z_65, v_66, t);
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_66, term_p_29);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_66 = ATgetFirst((ATermList) t);
      k_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_66;
  t = last_0_0(t);
  i_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_66), j_66), k_66);
  t = genzip_4_0(a_6, b_6, e_6, f_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      l_66 = ATgetArgument(t, 0);
      m_66 = ATgetArgument(t, 1);
      n_66 = ATgetArgument(t, 2);
      o_66 = ATgetArgument(t, 3);
      p_66 = ATgetArgument(t, 4);
      q_66 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_66), n_66), k_66);
  t = concat_0_0(t);
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, y_65, term_q_29), m_66, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(r_66), j_66), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_66)), (ATerm) ATmakeAppl(sym_Op_2, y_65, o_66))), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_66)), (ATerm) ATmakeAppl(sym_Op_2, y_65, q_66))), (ATerm) ATmakeAppl(sym_Seqs_1, l_66)))));
  return(t);
}
static ATerm k_69 (ATerm o_67, ATerm p_67, ATerm q_67, ATerm r_67, ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,i_68 = NULL,l_68 = NULL,m_68 = NULL;
  t = r_67;
  t = new_0_0(t);
  x_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_67, (ATerm) ATmakeAppl(sym_Var_1, x_67));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      y_67 = ATgetArgument(t, 0);
      c_68 = ATgetArgument(t, 1);
      d_68 = ATgetArgument(t, 2);
      e_68 = ATgetArgument(t, 3);
      i_68 = ATgetArgument(t, 4);
      l_68 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_68, i_68);
  t = conc_0_0(t);
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, o_67, term_r_29), c_68, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(m_68), x_67), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_67)), (ATerm) ATmakeAppl(sym_Op_2, o_67, e_68))), (ATerm)ATmakeAppl(sym_Op_2, o_67, l_68), (ATerm) ATmakeAppl(sym_Seqs_1, y_67)))));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      ATerm u_29 = ATgetArgument(t, 1);
      if(((ATgetType(u_29) != AT_LIST) || !(ATisEmpty(u_29))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm w_66 = NULL,z_66 = NULL,a_67 = NULL,d_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_29 = ATgetArgument(t, 0);
      if(((ATgetType(w_29) == AT_LIST) && !(ATisEmpty(w_29))))
        {
          w_66 = ATgetFirst((ATermList) w_29);
          z_66 = (ATerm) ATgetNext((ATermList) w_29);
        }
      else
        _fail(t);
      {
        ATerm x_29 = ATgetArgument(t, 1);
        if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
          {
            a_67 = ATgetFirst((ATermList) x_29);
            d_67 = (ATerm) ATgetNext((ATermList) x_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_66, a_67), (ATerm) ATmakeAppl(sym__2, z_66, d_67));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  if(match_cons(t, sym__2))
    {
      e_67 = ATgetArgument(t, 0);
      f_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_67), e_67);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL;
  if(match_cons(t, sym__2))
    {
      g_67 = ATgetArgument(t, 0);
      h_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(g_67, h_67, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm r_68 = NULL,u_68 = NULL,w_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  r_68 = t;
  if(match_cons(t, sym__3))
    {
      u_68 = ATgetArgument(t, 0);
      w_68 = ATgetArgument(t, 1);
      a_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_68;
  if(match_string(t, "T"))
    {
      t = a_69;
      if(match_cons(t, sym__2))
        {
          b_69 = ATgetArgument(t, 0);
          c_69 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_69;
      if(match_int(t, 0))
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_69(u_68, b_69, c_69, r_68, t);
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              {
                ATerm f_69 = NULL;
                t = r_68;
                t = new_0_0(t);
                f_69 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, u_68, term_q_29), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_69), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_69)), (ATerm) ATmakeAppl(sym_Op_2, u_68, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_69)), (ATerm) ATmakeAppl(sym_Op_2, u_68, (ATerm) ATempty))), term_i_24))));
              }
            }
        }
      else
        {
          t = i_69(u_68, b_69, c_69, r_68, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = a_69;
      if(match_cons(t, sym__2))
        {
          b_69 = ATgetArgument(t, 0);
          c_69 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_69(u_68, b_69, c_69, r_68, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm a_11 = NULL;
  static ATerm g_6 (ATerm t)
  {
    t = u_112(t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    return(t);
  }
  t = fetch_1_0(g_6, t);
  t = not_null(a_11);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm b_11 = NULL,d_11 = NULL,e_11 = NULL;
  t = term_l_15;
  d_11 = t;
  t = (ATerm) ATinsert(ATempty, term_a_30);
  e_11 = t;
  t = SSL_printnl(d_11, e_11);
  t = term_n_18;
  b_11 = t;
  t = SSL_exit(b_11);
  t = (ATerm) ATinsert(ATempty, term_a_30);
  return(t);
}
ATerm debug_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,k_11 = NULL,l_11 = NULL;
  f_11 = t;
  t = x_107(t);
  g_11 = t;
  t = term_l_15;
  k_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_11), g_11);
  l_11 = t;
  t = SSL_printnl(k_11, l_11);
  t = f_11;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_b_30;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm g_30 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
          z_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(f_30);
      t = z_10;
      t = foldr_3_0(r_6, s_6, t_6, t);
      t = y_10;
      t = foldr_3_0(v_6, z_6, c_7, t);
    }
  else
    {
      t = e_30;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm h_30 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
          z_10 = ATgetArgument(t, 2);
          {
            ATerm i_30 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = z_10;
      t = foldr_3_0(k_7, l_7, p_7, t);
      t = y_10;
      t = foldr_3_0(q_7, r_7, s_7, t);
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm j_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(j_11, m_11, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(n_11, o_11, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      s_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(s_11, t_11, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(z_11, a_12, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm j_30 = ATgetArgument(t, 0);
      ATerm k_30 = ATgetArgument(t, 1);
      ATerm l_30 = ATgetArgument(t, 2);
      ATerm m_30 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_11 = NULL;
      static ATerm h_6 (ATerm t)
      {
        ATerm u_11 = NULL,v_11 = NULL;
        u_11 = t;
        {
          ATerm p_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  v_11 = ATgetArgument(t, 0);
                  {
                    ATerm s_30 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm u_30 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(r_30);
              t = v_11;
              if(((r_11 != NULL) && (r_11 != t)))
                _fail(t);
              else
                r_11 = t;
              t = u_11;
            }
          else
            {
              t = p_30;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  v_11 = ATgetArgument(t, 0);
                  {
                    ATerm v_30 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm w_30 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm z_30 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = v_11;
              if(((r_11 != NULL) && (r_11 != t)))
                _fail(t);
              else
                r_11 = t;
              t = u_11;
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
              if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_11 = ATgetArgument(t, 0);
              {
                ATerm a_31 = ATgetArgument(t, 1);
              }
              {
                ATerm c_31 = ATgetArgument(t, 2);
              }
              {
                ATerm d_31 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_6, t);
      }
      t = not_null(r_11);
      t = debug_1_0(p_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      {
        ATerm c_14 = NULL;
        c_14 = t;
        t = map_1_0(q_6, t);
        t = c_14;
        {
          ATerm f_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(u_7, t);
              LocalPopChoice(g_31);
            }
          else
            {
              t = f_31;
              {
                ATerm g_12 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_12 = ATgetFirst((ATermList) t);
                    {
                      ATerm h_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = g_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,l_12 = NULL;
  f_14 = t;
  t = SSL_explode_term(f_14);
  if(match_cons(t, sym__2))
    {
      ATerm i_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_31 = ATgetArgument(t, 1);
        if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
          {
            g_14 = ATgetFirst((ATermList) j_31);
            {
              ATerm l_31 = (ATerm) ATgetNext((ATermList) j_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(f_14);
  if(match_cons(t, sym__2))
    {
      ATerm m_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_31 = ATgetArgument(t, 1);
        if(((ATgetType(o_31) == AT_LIST) && !(ATisEmpty(o_31))))
          {
            ATerm p_31 = ATgetFirst((ATermList) o_31);
            ATerm q_31 = (ATerm) ATgetNext((ATermList) o_31);
            if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
              {
                l_12 = ATgetFirst((ATermList) q_31);
                {
                  ATerm r_31 = (ATerm) ATgetNext((ATermList) q_31);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, g_14, l_12);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(v_7, w_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  o_14 = t;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_14;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_14 = ATgetFirst((ATermList) t);
      s_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_14;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_14;
            if((p_14 != t))
              {
                _fail(t);
              }
            t = n_14;
            LocalPopChoice(u_31);
          }
        else
          {
            t = t_31;
            t = (ATerm) ATmakeAppl(sym__2, p_14, s_14);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_14, s_14);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  static ATerm s_15 (ATerm t)
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_102(t);
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = SRTS_all(s_15, t);
      }
    return(t);
  }
  t = s_15(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_31 = ATgetArgument(t, 0);
      if(((ATgetType(y_31) != AT_LIST) || !(ATisEmpty(y_31))))
        _fail(t);
      {
        ATerm z_31 = ATgetArgument(t, 1);
        if(((ATgetType(z_31) != AT_LIST) || !(ATisEmpty(z_31))))
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
  ATerm m_16 = NULL,p_16 = NULL,s_16 = NULL,v_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_32 = ATgetArgument(t, 0);
      if(((ATgetType(a_32) == AT_LIST) && !(ATisEmpty(a_32))))
        {
          m_16 = ATgetFirst((ATermList) a_32);
          p_16 = (ATerm) ATgetNext((ATermList) a_32);
        }
      else
        _fail(t);
      {
        ATerm b_32 = ATgetArgument(t, 1);
        if(((ATgetType(b_32) == AT_LIST) && !(ATisEmpty(b_32))))
          {
            s_16 = ATgetFirst((ATermList) b_32);
            v_16 = (ATerm) ATgetNext((ATermList) b_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_16, s_16), (ATerm) ATmakeAppl(sym__2, p_16, v_16));
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm x_16 = NULL,j_17 = NULL;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_17), x_16);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,a_16 = NULL;
  v_15 = t;
  {
    ATerm c_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_32 = ATgetArgument(t, 0);
            ATerm i_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(g_32);
        t = v_15;
      }
    else
      {
        t = c_32;
        {
          ATerm l_16 = NULL;
          if(match_cons(t, sym__3))
            {
              w_15 = ATgetArgument(t, 0);
              x_15 = ATgetArgument(t, 1);
              a_16 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_15, x_15);
          t = genzip_4_0(x_7, y_7, z_7, _id, t);
          l_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_16, a_16);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL;
  static ATerm a_8 (ATerm t)
  {
    ATerm q_12 = NULL;
    t = y_99(t);
    q_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_12, not_null(x_17));
    t = lookup_0_0(t);
    t = z_99(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_17;
  t = alltd_1_0(a_8, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm b_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,t_3 = NULL;
  j_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_19);
  b_19 = t;
  t = g_19;
  t = new_0_0(t);
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_19, h_19);
  t_3 = t;
  t = SSLsetAnnotations(t_3, b_19);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,v_3 = NULL;
  r_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_19);
  k_19 = t;
  t = l_19;
  t = new_0_0(t);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_19, p_19);
  v_3 = t;
  t = SSLsetAnnotations(v_3, k_19);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm s_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_19 = ATgetArgument(t, 0);
      {
        ATerm j_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_19), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm v_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_19 = ATgetArgument(t, 0);
      {
        ATerm k_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, v_19);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm d_20 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      d_20 = ATgetArgument(t, 0);
      {
        ATerm n_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_20;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm e_20 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_20 = ATgetArgument(t, 0);
      {
        ATerm q_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_20;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm f_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      l_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
      f_20 = ATgetArgument(t, 2);
      t = l_20;
      if(match_cons(t, sym_SVar_1))
        {
          m_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_20;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          l_20 = ATgetArgument(t, 0);
          n_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_20;
      if(match_cons(t, sym_SVar_1))
        {
          m_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_20;
    }
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm t_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_20;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,z_18 = NULL;
  t_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_32 = ATgetFirst((ATermList) t);
      if(match_cons(r_32, sym_SDefT_4))
        {
          k_18 = ATgetArgument(r_32, 0);
          l_18 = ATgetArgument(r_32, 1);
          q_18 = ATgetArgument(r_32, 2);
          {
            ATerm v_32 = ATgetArgument(r_32, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm u_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_18;
  t = map_1_0(d_8, t);
  r_18 = t;
  t = q_18;
  t = map_1_0(e_8, t);
  s_18 = t;
  t = r_18;
  t = map_1_0(f_8, t);
  v_18 = t;
  t = s_18;
  t = map_1_0(g_8, t);
  u_18 = t;
  t = t_18;
  {
    static ATerm h_8 (ATerm t)
    {
      ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm w_32 = ATgetArgument(t, 0);
          w_19 = ATgetArgument(t, 1);
          x_19 = ATgetArgument(t, 2);
          y_19 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = x_19;
      t = map_1_0(l_8, t);
      a_20 = t;
      t = w_19;
      t = map_1_0(m_8, t);
      c_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, c_20, v_18, y_19);
      t = substitute_2_0(t_8, _id, t);
      b_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, a_20, u_18, b_20);
      t = substitute_2_0(v_8, _id, t);
      return(t);
    }
    t = map_1_0(h_8, t);
  }
  t = choices_0_0(t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, k_18, r_18, s_18, z_18);
  return(t);
}
static ATerm u_71 (ATerm t_69, ATerm u_69, ATerm w_69, ATerm x_69, ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,p_70 = NULL,q_70 = NULL,z_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_69, u_69);
  t = Definitions_0_0(t);
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_70, w_69);
  q_70 = t;
  if(match_cons(t, sym__2))
    {
      ATerm x_32 = ATgetArgument(t, 0);
      ATerm y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_70);
  k_70 = t;
  t = j_70;
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_70 = NULL,y_70 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_70 = ATgetFirst((ATermList) t);
            y_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_70;
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  p_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_70, w_69);
  z_3 = t;
  t = SSLsetAnnotations(z_3, k_70);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,e_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
  e_71 = t;
  if(match_cons(t, sym__2))
    {
      h_71 = ATgetArgument(t, 0);
      k_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_71;
  if(match_cons(t, sym__2))
    {
      i_71 = ATgetArgument(t, 0);
      j_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_71;
  if(match_cons(t, sym_Mod_2))
    {
      a_71 = ATgetArgument(t, 0);
      b_71 = ATgetArgument(t, 1);
      {
        ATerm d_33 = t;
        int e_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_71 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, a_71, b_71, j_71);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            t_71 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_71, k_71);
            LocalPopChoice(e_33);
          }
        else
          {
            t = d_33;
            t = u_71(i_71, j_71, k_71, e_71, t);
          }
      }
    }
  else
    {
      t = u_71(i_71, j_71, k_71, e_71, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  static ATerm w_72 (ATerm t)
  {
    ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL;
    v_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_72 = ATgetFirst((ATermList) t);
        u_72 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_25 = NULL,w_25 = NULL,b_4 = NULL;
          t = SSLgetAnnotations(v_72);
          t_25 = t;
          t = u_72;
          t = w_72(t);
          w_25 = t;
          t = (ATerm) ATinsert(CheckATermList(w_25), t_72);
          b_4 = t;
          t = SSLsetAnnotations(b_4, t_25);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_72;
        t = z_112(t);
      }
    return(t);
  }
  t = w_72(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,b_72 = NULL;
  y_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_71;
    }
  else
    {
      static ATerm w_8 (ATerm t)
      {
        t = not_null(b_72);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_71 = ATgetFirst((ATermList) t);
          if(((b_72 != NULL) && (b_72 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_71;
      t = at_end_1_0(w_8, t);
    }
  return(t);
}
static ATerm m_73 (ATerm c_73, ATerm t)
{
  ATerm f_73 = NULL;
  t = SSL_explode_term(c_73);
  if(match_cons(t, sym__2))
    {
      ATerm f_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_73;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  j_73 = t;
  if(match_cons(t, sym__2))
    {
      h_73 = ATgetArgument(t, 0);
      i_73 = ATgetArgument(t, 1);
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_8 (ATerm t)
            {
              t = i_73;
              return(t);
            }
            t = h_73;
            t = at_end_1_0(y_8, t);
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            t = m_73(j_73, t);
          }
      }
    }
  else
    {
      t = m_73(j_73, t);
    }
  return(t);
}
static ATerm q_9 (ATerm l_119 (ATerm), ATerm g_63, ATerm f_63, ATerm t)
{
  static ATerm i_74 (ATerm t)
  {
    ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
    y_73 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_73;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_73 = ATgetFirst((ATermList) t);
            a_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_73;
              {
                static ATerm z_8 (ATerm t)
                {
                  t = f_63;
                  return(t);
                }
                t = d_10(l_119, z_8, z_73, a_74, t);
              }
              t = i_74(t);
              LocalPopChoice(j_33);
            }
          else
            {
              t = i_33;
              {
                ATerm j_26 = NULL,m_26 = NULL,d_4 = NULL;
                t = SSLgetAnnotations(y_73);
                j_26 = t;
                t = a_74;
                t = i_74(t);
                m_26 = t;
                t = (ATerm) ATinsert(CheckATermList(m_26), z_73);
                d_4 = t;
                t = SSLsetAnnotations(d_4, j_26);
              }
            }
        }
      }
    return(t);
  }
  t = g_63;
  t = i_74(t);
  return(t);
}
ATerm genzip_4_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t)
{
  static ATerm y_74 (ATerm t)
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_105(t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        {
          ATerm k_74 = NULL,n_74 = NULL,o_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,f_4 = NULL;
          t = c_105(t);
          x_74 = t;
          if(match_cons(t, sym__2))
            {
              n_74 = ATgetArgument(t, 0);
              o_74 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_74);
          k_74 = t;
          t = n_74;
          t = e_105(t);
          v_74 = t;
          t = o_74;
          t = y_74(t);
          w_74 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_74, w_74);
          f_4 = t;
          t = SSLsetAnnotations(f_4, k_74);
          t = d_105(t);
        }
      }
    return(t);
  }
  t = y_74(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_33 = ATgetArgument(t, 0);
      if(((ATgetType(n_33) != AT_LIST) || !(ATisEmpty(n_33))))
        _fail(t);
      {
        ATerm o_33 = ATgetArgument(t, 1);
        if(((ATgetType(o_33) != AT_LIST) || !(ATisEmpty(o_33))))
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
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_33 = ATgetArgument(t, 0);
      if(((ATgetType(p_33) == AT_LIST) && !(ATisEmpty(p_33))))
        {
          j_75 = ATgetFirst((ATermList) p_33);
          k_75 = (ATerm) ATgetNext((ATermList) p_33);
        }
      else
        _fail(t);
      {
        ATerm q_33 = ATgetArgument(t, 1);
        if(((ATgetType(q_33) == AT_LIST) && !(ATisEmpty(q_33))))
          {
            l_75 = ATgetFirst((ATermList) q_33);
            m_75 = (ATerm) ATgetNext((ATermList) q_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_75, l_75), (ATerm) ATmakeAppl(sym__2, k_75, m_75));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL;
  if(match_cons(t, sym__2))
    {
      n_75 = ATgetArgument(t, 0);
      o_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_75), n_75);
  return(t);
}
static ATerm v_9 (ATerm l_728, ATerm q_728, ATerm h_74, ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,f_75 = NULL;
  t = SSL_explode_term(q_728);
  if(match_cons(t, sym__2))
    {
      b_75 = ATgetArgument(t, 0);
      d_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_728);
  if(match_cons(t, sym__2))
    {
      if((b_75 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_75, d_75);
  t = genzip_4_0(a_9, b_9, c_9, _id, t);
  f_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_75, h_74);
  t = conc_0_0(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm h_76 = NULL;
  h_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_76);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,p_4 = NULL;
  l_76 = t;
  if(match_cons(t, sym__2))
    {
      j_76 = ATgetArgument(t, 0);
      k_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_76);
  i_76 = t;
  t = k_76;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_76, k_76);
  p_4 = t;
  t = SSLsetAnnotations(p_4, i_76);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm r_77 = NULL,u_77 = NULL,x_77 = NULL,y_77 = NULL,b_78 = NULL;
  r_77 = t;
  if(match_cons(t, sym__2))
    {
      u_77 = ATgetArgument(t, 0);
      x_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_77;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_77 = ATgetFirst((ATermList) t);
      b_78 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_33 = t;
        int s_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_78(u_77, x_77, r_77, t);
            LocalPopChoice(s_33);
          }
        else
          {
            t = r_33;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_77), y_77), b_78);
          }
      }
    }
  else
    {
      t = r_78(u_77, x_77, r_77, t);
    }
  return(t);
}
static ATerm r_78 (ATerm m_76, ATerm n_76, ATerm o_76, ATerm t)
{
  ATerm p_76 = NULL,s_76 = NULL,q_4 = NULL,a_77 = NULL,b_77 = NULL,d_77 = NULL,e_77 = NULL;
  t = SSLgetAnnotations(o_76);
  p_76 = t;
  t = n_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_77 = ATgetFirst((ATermList) t);
      e_77 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_77;
  if(match_cons(t, sym__2))
    {
      b_77 = ATgetArgument(t, 0);
      d_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_77;
        if((b_77 != t))
          {
            _fail(t);
          }
        t = e_77;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = n_76;
        t = v_9(b_77, d_77, e_77, t);
      }
  }
  s_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_76, s_76);
  q_4 = t;
  t = SSLsetAnnotations(q_4, p_76);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm q_78 = NULL;
  if(match_cons(t, sym__2))
    {
      q_78 = ATgetArgument(t, 0);
      if((q_78 != ATgetArgument(t, 1)))
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
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_9, g_9, h_9, t);
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      {
        ATerm g_78 = NULL,k_78 = NULL,l_78 = NULL;
        g_78 = t;
        if(match_cons(t, sym__2))
          {
            k_78 = ATgetArgument(t, 0);
            l_78 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_78;
        t = q_9(l_9, k_78, l_78, t);
      }
    }
  return(t);
}
static ATerm x_9 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm y_75, ATerm v_75, ATerm d_76, ATerm z_75, ATerm w_75, ATerm x_75, ATerm t)
{
  ATerm s_78 = NULL,w_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_75, z_75);
  t = n_132(t);
  if(match_cons(t, sym__2))
    {
      w_78 = ATgetArgument(t, 0);
      s_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_78;
  t = o_132(t);
  a_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_79, d_76);
  t = diff_0_0(t);
  b_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_79, v_75);
  t = conc_0_0(t);
  c_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_79, d_76);
  t = conc_0_0(t);
  d_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_75, w_78, w_75);
  t = p_132(t);
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__5, c_79, d_79, s_78, e_79, x_75);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
        {
          g_79 = ATgetFirst((ATermList) x_33);
          h_79 = (ATerm) ATgetNext((ATermList) x_33);
        }
      else
        _fail(t);
      i_79 = ATgetArgument(t, 1);
      j_79 = ATgetArgument(t, 2);
      k_79 = ATgetArgument(t, 3);
      l_79 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = x_9(n_132, o_132, p_132, g_79, h_79, i_79, j_79, k_79, l_79, t);
  return(t);
}
ATerm while_not_2_0 (ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t)
{
  static ATerm m_79 (ATerm t)
  {
    ATerm y_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_107(t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = y_33;
        t = c_107(t);
        t = m_79(t);
      }
    return(t);
  }
  t = m_79(t);
  return(t);
}
ATerm for_3_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t)
{
  t = e_107(t);
  t = while_not_2_0(f_107, g_107, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
  if(match_cons(t, sym__3))
    {
      w_79 = ATgetArgument(t, 0);
      x_79 = ATgetArgument(t, 1);
      y_79 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, w_79, w_79, x_79, y_79, (ATerm) ATempty);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm b_34 = ATgetArgument(t, 0);
      if(((ATgetType(b_34) != AT_LIST) || !(ATisEmpty(b_34))))
        _fail(t);
      {
        ATerm e_34 = ATgetArgument(t, 1);
      }
      {
        ATerm f_34 = ATgetArgument(t, 2);
      }
      b_80 = ATgetArgument(t, 3);
      c_80 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_80, c_80);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, u_9, w_9, t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
        if(match_cons(t, sym__5))
          {
            i_80 = ATgetArgument(t, 0);
            l_80 = ATgetArgument(t, 1);
            m_80 = ATgetArgument(t, 2);
            n_80 = ATgetArgument(t, 3);
            o_80 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = i_80;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_80 = ATgetFirst((ATermList) t);
            k_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, k_80, l_80, m_80, n_80, (ATerm) ATinsert(CheckATermList(o_80), j_80));
      }
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(y_9, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      f_80 = ATgetArgument(t, 1);
      g_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_80), f_80);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
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
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_27;
            t = q_8(u_27, v_27, y_27, t);
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            t = e_28(x_27, y_27, t);
          }
      }
    }
  else
    {
      t = e_28(x_27, y_27, t);
    }
  return(t);
}
static ATerm e_28 (ATerm g_27, ATerm k_27, ATerm t)
{
  ATerm o_27 = NULL,t_27 = NULL;
  t = term_l_15;
  o_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_17), k_27), term_z_16), g_27), term_w_16);
  t_27 = t;
  t = SSL_printnl(o_27, t_27);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_17), k_27), term_z_16), g_27), term_w_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL;
  t = for_3_0(n_9, p_9, t_9, t);
  t_81 = t;
  if(match_cons(t, sym__2))
    {
      u_81 = ATgetArgument(t, 0);
      v_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_81;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_81;
    }
  else
    {
      ATerm b_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_81 = ATgetFirst((ATermList) t);
          x_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(x_81), w_81);
      t = map_1_0(z_9, t);
      t = term_n_18;
      b_27 = t;
      t = SSL_exit(b_27);
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL;
  if(match_cons(t, sym__2))
    {
      p_82 = ATgetArgument(t, 0);
      q_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(p_82, q_82, t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL;
  if(match_cons(t, sym__2))
    {
      r_82 = ATgetArgument(t, 0);
      s_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(r_82, s_82, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm t_82 = NULL;
  if(match_cons(t, sym__2))
    {
      t_82 = ATgetArgument(t, 0);
      if((t_82 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  d_82 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      g_82 = ATgetArgument(t, 0);
      b_82 = ATgetArgument(t, 1);
      c_82 = ATgetArgument(t, 2);
      {
        ATerm r_34 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  i_82 = t;
  t = b_82;
  t = foldr_3_0(b_10, o_10, p_10, t);
  e_82 = t;
  t = c_82;
  t = foldr_3_0(u_10, v_10, x_10, t);
  f_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_82, (ATerm) ATmakeAppl(sym__2, e_82, f_82));
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = (ATerm) ATempty;
      }
  }
  k_82 = t;
  t = g_82;
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = (ATerm) ATempty;
      }
  }
  j_82 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_82, f_82));
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_82, f_82)), j_82);
  t = e_10(c_11, o_82, j_82, t);
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_82, (ATerm) ATmakeAppl(sym__2, e_82, f_82));
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_34, (ATerm) ATinsert(CheckATermList(k_82), d_82));
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_82, (ATerm) ATmakeAppl(sym__2, e_82, f_82)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_34, (ATerm) ATinsert(CheckATermList(k_82), d_82)));
  t = a_10(h_11, m_82, n_82, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_34, h_82);
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_82, (ATerm) ATmakeAppl(sym_Defined_2, term_y_34, h_82));
  t = a_10(i_11, g_82, l_82, t);
  t = i_82;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL;
  if(match_cons(t, sym__2))
    {
      i_83 = ATgetArgument(t, 0);
      j_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(i_83, j_83, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL;
  if(match_cons(t, sym__2))
    {
      k_83 = ATgetArgument(t, 0);
      l_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(k_83, l_83, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm m_83 = NULL;
  if(match_cons(t, sym__2))
    {
      m_83 = ATgetArgument(t, 0);
      if((m_83 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL;
  w_82 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      z_82 = ATgetArgument(t, 0);
      u_82 = ATgetArgument(t, 1);
      v_82 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  b_83 = t;
  t = u_82;
  t = foldr_3_0(p_11, q_11, w_11, t);
  x_82 = t;
  t = v_82;
  t = foldr_3_0(x_11, y_11, b_12, t);
  y_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_82, (ATerm) ATmakeAppl(sym__2, x_82, y_82));
  {
    ATerm z_34 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(b_35);
      }
    else
      {
        t = z_34;
        t = (ATerm) ATempty;
      }
  }
  d_83 = t;
  t = z_82;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = (ATerm) ATempty;
      }
  }
  c_83 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_82, y_82));
  h_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_82, y_82)), c_83);
  t = e_10(d_12, h_83, c_83, t);
  a_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_82, (ATerm) ATmakeAppl(sym__2, x_82, y_82));
  f_83 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_35, (ATerm) ATinsert(CheckATermList(d_83), w_82));
  g_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_82, (ATerm) ATmakeAppl(sym__2, x_82, y_82)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_35, (ATerm) ATinsert(CheckATermList(d_83), w_82)));
  t = a_10(e_12, f_83, g_83, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_35, a_83);
  e_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_82, (ATerm) ATmakeAppl(sym_Defined_2, term_f_35, a_83));
  t = a_10(h_12, z_82, e_83, t);
  t = b_83;
  return(t);
}
static ATerm a_10 (ATerm w_132 (ATerm), ATerm w_76, ATerm u_76, ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL;
  q_83 = t;
  t = w_132(t);
  n_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_83, w_76, u_76);
  t = r_10(n_83, w_76, u_76, t);
  {
    ATerm g_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_83 = NULL;
        t = term_l_35;
        t_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_83, term_l_35);
        t = q_10(n_83, t_83, t);
        LocalPopChoice(k_35);
      }
    else
      {
        t = g_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_83 = ATgetFirst((ATermList) t);
      p_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_35;
  r_83 = t;
  t = (ATerm) ATinsert(CheckATermList(p_83), (ATerm) ATinsert(CheckATermList(o_83), w_76));
  s_83 = t;
  t = SSL_table_put(n_83, r_83, s_83);
  t = q_83;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm g_84 = NULL;
  g_84 = t;
  {
    ATerm m_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_29 = NULL,e_29 = NULL;
        t = term_q_34;
        e_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_34, g_84);
        t = c_10(e_29, g_84, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_35) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            b_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_29;
        LocalPopChoice(q_35);
      }
    else
      {
        t = m_35;
        {
          ATerm s_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_29 = NULL,l_29 = NULL;
              t = term_q_34;
              l_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_q_34, g_84);
              t = c_10(l_29, g_84, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm u_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_35) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  i_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_29;
              LocalPopChoice(t_35);
            }
          else
            {
              t = s_35;
              {
                ATerm s_29 = NULL,v_29 = NULL;
                t = term_q_34;
                v_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_q_34, g_84);
                t = c_10(v_29, g_84, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm v_35 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_35) != ATmakeSymbol("f_0", 0, ATtrue)))
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
static ATerm c_10 (ATerm f_71, ATerm g_71, ATerm t)
{
  ATerm k_84 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_71, g_71);
  t = q_10(f_71, g_71, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_84 = ATgetFirst((ATermList) t);
      {
        ATerm w_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_84;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm b_85 = NULL,d_85 = NULL;
  b_85 = t;
  if(match_cons(t, sym__2))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      d_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_85;
  if(match_cons(t, sym__2))
    {
      ATerm y_35 = ATgetArgument(t, 0);
      ATerm z_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_30 = NULL,t_30 = NULL;
        t = term_p_34;
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_34, b_85);
        t = c_10(t_30, b_85, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_36) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
            q_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_30;
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
              ATerm b_31 = NULL,e_31 = NULL;
              t = term_p_34;
              e_31 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_34, b_85);
              t = c_10(e_31, b_85, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm f_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_36) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  b_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_31;
              LocalPopChoice(e_36);
            }
          else
            {
              t = d_36;
              {
                ATerm k_31 = NULL,n_31 = NULL;
                t = term_p_34;
                n_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_34, b_85);
                t = c_10(n_31, b_85, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm g_36 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) g_36) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    k_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_31;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL;
  if(match_cons(t, sym__2))
    {
      x_85 = ATgetArgument(t, 0);
      y_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(x_85, y_85, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL;
  if(match_cons(t, sym__2))
    {
      z_85 = ATgetArgument(t, 0);
      a_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(z_85, a_86, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm b_86 = NULL;
  if(match_cons(t, sym__2))
    {
      b_86 = ATgetArgument(t, 0);
      if((b_86 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL;
  l_85 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_85 = ATgetArgument(t, 0);
      j_85 = ATgetArgument(t, 1);
      k_85 = ATgetArgument(t, 2);
      {
        ATerm h_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  q_85 = t;
  t = j_85;
  t = foldr_3_0(j_12, k_12, n_12, t);
  m_85 = t;
  t = k_85;
  t = foldr_3_0(o_12, p_12, r_12, t);
  n_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_85, (ATerm) ATmakeAppl(sym__2, m_85, n_85));
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        t = (ATerm) ATempty;
      }
  }
  s_85 = t;
  t = o_85;
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = (ATerm) ATempty;
      }
  }
  r_85 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_85, n_85));
  w_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_85, n_85)), r_85);
  t = e_10(s_12, w_85, r_85, t);
  p_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_85, (ATerm) ATmakeAppl(sym__2, m_85, n_85));
  u_85 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_36, (ATerm) ATinsert(CheckATermList(s_85), l_85));
  v_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_85, (ATerm) ATmakeAppl(sym__2, m_85, n_85)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_36, (ATerm) ATinsert(CheckATermList(s_85), l_85)));
  t = a_10(t_12, u_85, v_85, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_36, p_85);
  t_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_85, (ATerm) ATmakeAppl(sym_Defined_2, term_n_36, p_85));
  t = a_10(u_12, o_85, t_85, t);
  t = q_85;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL;
  if(match_cons(t, sym__2))
    {
      q_86 = ATgetArgument(t, 0);
      r_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(q_86, r_86, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL;
  if(match_cons(t, sym__2))
    {
      s_86 = ATgetArgument(t, 0);
      t_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(s_86, t_86, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL;
  if(match_cons(t, sym__2))
    {
      z_86 = ATgetArgument(t, 0);
      a_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(z_86, a_87, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL;
  if(match_cons(t, sym__2))
    {
      b_87 = ATgetArgument(t, 0);
      c_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(b_87, c_87, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL;
  if(match_cons(t, sym__2))
    {
      j_87 = ATgetArgument(t, 0);
      k_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(j_87, k_87, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_n_18;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL;
  if(match_cons(t, sym__2))
    {
      l_87 = ATgetArgument(t, 0);
      m_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(l_87, m_87, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_n_18;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL;
  d_86 = t;
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            e_86 = ATgetArgument(t, 0);
            f_86 = ATgetArgument(t, 1);
            g_86 = ATgetArgument(t, 2);
            {
              ATerm q_36 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_36);
        {
          ATerm n_86 = NULL,o_86 = NULL;
          t = f_86;
          t = foldr_3_0(w_12, x_12, y_12, t);
          n_86 = t;
          t = g_86;
          t = foldr_3_0(z_12, a_13, b_13, t);
          o_86 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_86, (ATerm) ATmakeAppl(sym__2, n_86, o_86)));
        }
      }
    else
      {
        t = o_36;
        if(match_cons(t, sym_ExtSDef_3))
          {
            e_86 = ATgetArgument(t, 0);
            f_86 = ATgetArgument(t, 1);
            g_86 = ATgetArgument(t, 2);
            {
              ATerm x_86 = NULL,y_86 = NULL;
              t = f_86;
              t = foldr_3_0(c_13, e_13, f_13, t);
              x_86 = t;
              t = g_86;
              t = foldr_3_0(h_13, i_13, j_13, t);
              y_86 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_86, (ATerm) ATmakeAppl(sym__2, x_86, y_86)));
            }
          }
        else
          {
            ATerm g_87 = NULL,h_87 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                e_86 = ATgetArgument(t, 0);
                f_86 = ATgetArgument(t, 1);
                g_86 = ATgetArgument(t, 2);
                {
                  ATerm r_36 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = f_86;
            t = foldr_3_0(k_13, l_13, m_13, t);
            g_87 = t;
            t = g_86;
            t = foldr_3_0(n_13, o_13, q_13, t);
            h_87 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_86, (ATerm) ATmakeAppl(sym__2, g_87, h_87)));
          }
      }
  }
  return(t);
}
static ATerm d_10 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm m_63, ATerm l_63, ATerm t)
{
  t = u_119(t);
  {
    static ATerm r_13 (ATerm t)
    {
      ATerm n_87 = NULL;
      n_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_63, n_87);
      t = t_119(t);
      return(t);
    }
    t = fetch_1_0(r_13, t);
  }
  t = l_63;
  return(t);
}
static ATerm e_10 (ATerm q_119 (ATerm), ATerm i_63, ATerm h_63, ATerm t)
{
  static ATerm d_88 (ATerm t)
  {
    ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
    y_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_63;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_87 = ATgetFirst((ATermList) t);
            a_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_36 = t;
          int t_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_87;
              {
                static ATerm s_13 (ATerm t)
                {
                  t = h_63;
                  return(t);
                }
                t = d_10(q_119, s_13, z_87, a_88, t);
              }
              t = d_88(t);
              LocalPopChoice(t_36);
            }
          else
            {
              t = s_36;
              {
                ATerm s_31 = NULL,v_31 = NULL,b_5 = NULL;
                t = SSLgetAnnotations(y_87);
                s_31 = t;
                t = a_88;
                t = d_88(t);
                v_31 = t;
                t = (ATerm) ATinsert(CheckATermList(v_31), z_87);
                b_5 = t;
                t = SSLsetAnnotations(b_5, s_31);
              }
            }
        }
      }
    return(t);
  }
  t = i_63;
  t = d_88(t);
  return(t);
}
ATerm foldr_3_0 (ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL;
  g_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_88;
      t = h_122(t);
    }
  else
    {
      ATerm l_88 = NULL,m_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_88 = ATgetFirst((ATermList) t);
          i_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_88;
      t = j_122(t);
      l_88 = t;
      t = i_88;
      t = foldr_3_0(h_122, i_122, j_122, t);
      m_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_88, m_88);
      t = i_122(t);
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL;
  if(match_cons(t, sym__2))
    {
      q_88 = ATgetArgument(t, 0);
      r_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(w_13, q_88, r_88, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm s_88 = NULL;
  if(match_cons(t, sym__2))
    {
      s_88 = ATgetArgument(t, 0);
      if((s_88 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
  p_88 = t;
  t = foldr_3_0(u_13, v_13, DefinitionName_0_0, t);
  n_88 = t;
  t = p_88;
  t = map_1_0(x_13, t);
  o_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_88, o_88, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL,d_5 = NULL;
  y_88 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_88 = ATgetFirst((ATermList) t);
      v_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_88);
  t_88 = t;
  t = u_88;
  t = j_86(t);
  w_88 = t;
  t = v_88;
  t = k_86(t);
  x_88 = t;
  t = (ATerm) ATinsert(CheckATermList(x_88), w_88);
  d_5 = t;
  t = SSLsetAnnotations(d_5, t_88);
  return(t);
}
static ATerm f_10 (ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm z_88 = NULL;
  t = SSL_fputc(v_45, w_45);
  z_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_88);
  return(t);
}
static ATerm g_10 (ATerm n_44, ATerm o_44, ATerm t)
{
  ATerm a_89 = NULL;
  t = SSL_write_term_to_stream_text(n_44, o_44);
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_89);
  return(t);
}
static ATerm i_10 (ATerm z_107 (ATerm), ATerm w_317, ATerm t_44, ATerm t)
{
  ATerm b_89 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_317, term_y_36);
  t = m_10(t);
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_89, t_44);
  t = z_107(t);
  t = fclose_0_0(t);
  t = t_44;
  return(t);
}
static ATerm h_10 (ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm c_89 = NULL;
  t = SSL_write_term_to_stream_baf(j_44, k_44);
  c_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_89);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_36 = ATgetArgument(t, 0);
      if(match_cons(z_36, sym_Stream_1))
        {
          j_89 = ATgetArgument(z_36, 0);
        }
      else
        _fail(t);
      k_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(j_89, k_89, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_37 = ATgetArgument(t, 0);
      if(match_cons(a_37, sym_Stream_1))
        {
          o_89 = ATgetArgument(a_37, 0);
        }
      else
        _fail(t);
      p_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(o_89, p_89, t);
  l_89 = t;
  t = term_z_22;
  m_89 = t;
  t = l_89;
  if(match_cons(t, sym_Stream_1))
    {
      n_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_22, l_89);
  t = f_10(m_89, n_89, t);
  return(t);
}
ATerm output_1_0 (ATerm e_128 (ATerm), ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL;
  t = e_128(t);
  e_89 = t;
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_89 = NULL,g_89 = NULL;
        t = term_d_37;
        f_89 = t;
        t = term_e_37;
        g_89 = t;
        t = term_f_37;
        t = q_10(f_89, g_89, t);
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        t = term_g_37;
      }
  }
  d_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_89, e_89);
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_89 = NULL,i_89 = NULL;
        t = term_d_37;
        h_89 = t;
        t = term_j_37;
        i_89 = t;
        t = term_k_37;
        t = q_10(h_89, i_89, t);
        t = (ATerm) ATmakeAppl(sym__2, d_89, e_89);
        LocalPopChoice(i_37);
        if(match_cons(t, sym__2))
          {
            ATerm l_37 = ATgetArgument(t, 0);
            ATerm m_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_10(y_13, d_89, e_89, t);
      }
    else
      {
        t = h_37;
        if(match_cons(t, sym__2))
          {
            ATerm n_37 = ATgetArgument(t, 0);
            ATerm o_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_10(z_13, d_89, e_89, t);
      }
  }
  return(t);
}
static ATerm d_90 (ATerm x_89, ATerm t)
{
  t = SSL_fclose(x_89);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_90 = NULL,b_90 = NULL;
  b_90 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_90 = ATgetArgument(t, 0);
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_90);
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            t = d_90(b_90, t);
          }
      }
    }
  else
    {
      t = d_90(b_90, t);
    }
  return(t);
}
static ATerm j_10 (ATerm p_44, ATerm t)
{
  t = SSL_read_term_from_stream(p_44);
  return(t);
}
static ATerm k_10 (ATerm q_62, ATerm r_62, ATerm t)
{
  t = SSL_strcat(q_62, r_62);
  return(t);
}
static ATerm l_10 (ATerm x_45, ATerm y_45, ATerm t)
{
  ATerm e_90 = NULL;
  t = SSL_fopen(x_45, y_45);
  e_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_90);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_90 = NULL;
  t = SSL_stdin_stream();
  f_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_90);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_90 = NULL;
  t = SSL_stdout_stream();
  g_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_90);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_90 = NULL;
  t = SSL_stderr_stream();
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_90);
  return(t);
}
static ATerm o_91 (ATerm n_90, ATerm t)
{
  ATerm o_90 = NULL;
  t = SSL_explode_term(n_90);
  if(match_cons(t, sym__2))
    {
      ATerm r_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_37 = ATgetArgument(t, 1);
        if(((ATgetType(s_37) == AT_LIST) && !(ATisEmpty(s_37))))
          {
            o_90 = ATgetFirst((ATermList) s_37);
            {
              ATerm t_37 = (ATerm) ATgetNext((ATermList) s_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_90;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_90;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_90;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_90;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_91 (ATerm r_90, ATerm s_90, ATerm t_90, ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,z_90 = NULL,p_5 = NULL;
  t = SSLgetAnnotations(t_90);
  w_90 = t;
  t = r_90;
  if(match_cons(t, sym_Path_1))
    {
      z_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_90, s_90);
  p_5 = t;
  t = SSLsetAnnotations(p_5, w_90);
  if(match_cons(t, sym__2))
    {
      u_90 = ATgetArgument(t, 0);
      v_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(u_90, v_90, t);
  return(t);
}
static ATerm q_91 (ATerm b_91, ATerm c_91, ATerm d_91, ATerm t)
{
  ATerm e_91 = NULL,f_91 = NULL,g_91 = NULL,j_91 = NULL,q_5 = NULL;
  t = SSLgetAnnotations(d_91);
  g_91 = t;
  t = SSL_is_string(b_91);
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_91, c_91);
  q_5 = t;
  t = SSLsetAnnotations(q_5, g_91);
  if(match_cons(t, sym__2))
    {
      e_91 = ATgetArgument(t, 0);
      f_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(e_91, f_91, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL;
  l_91 = t;
  if(match_cons(t, sym__2))
    {
      m_91 = ATgetArgument(t, 0);
      n_91 = ATgetArgument(t, 1);
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_91(l_91, t);
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            {
              ATerm w_37 = t;
              int x_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_91(m_91, n_91, l_91, t);
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = w_37;
                  t = q_91(m_91, n_91, l_91, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_91(l_91, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL,z_91 = NULL;
  z_91 = t;
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_91, term_a_38);
        t = m_10(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        {
          ATerm l_32 = NULL,m_32 = NULL;
          t = term_d_38;
          m_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_38, z_91);
          t = k_10(m_32, z_91, t);
          l_32 = t;
          t = SSL_perror(l_32);
          _fail(t);
        }
      }
  }
  t_91 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_10(u_91, t);
  s_91 = t;
  t = t_91;
  t = fclose_0_0(t);
  t = s_91;
  return(t);
}
ATerm input_1_0 (ATerm f_128 (ATerm), ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_92 = NULL,d_92 = NULL;
      t = term_d_37;
      c_92 = t;
      t = term_g_38;
      d_92 = t;
      t = term_h_38;
      t = q_10(c_92, d_92, t);
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      t = term_k_38;
    }
  t = ReadFromFile_0_0(t);
  t = f_128(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL;
  e_92 = t;
  t = term_p_29;
  t = whoami_0_0(t);
  f_92 = t;
  t = term_l_15;
  h_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_38), f_92), term_l_38);
  i_92 = t;
  t = SSL_printnl(h_92, i_92);
  t = term_n_18;
  g_92 = t;
  t = SSL_exit(g_92);
  t = e_92;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm k_92 = NULL;
  k_92 = t;
  if(match_string(t, "-k"))
    {
      t = k_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_92;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
  l_92 = t;
  t = SSL_string_to_int(l_92);
  m_92 = t;
  t = term_n_38;
  n_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, m_92);
  t = t_10(n_92, m_92, t);
  t = l_92;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_14, b_14, d_14, t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm p_92 = NULL;
  p_92 = t;
  if(match_string(t, "-S"))
    {
      t = p_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_92;
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL;
  t = term_r_38;
  q_92 = t;
  t = term_m_18;
  r_92 = t;
  t = term_s_38;
  t = t_10(q_92, r_92, t);
  t = term_t_38;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL;
  s_92 = t;
  t = SSL_string_to_int(s_92);
  t_92 = t;
  t = term_r_38;
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_38, t_92);
  t = t_10(u_92, t_92, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_92);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL;
  t = term_x_38;
  v_92 = t;
  t = term_p_29;
  w_92 = t;
  t = term_y_38;
  t = t_10(v_92, w_92, t);
  t = term_z_38;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_14, h_14, i_14, t);
      LocalPopChoice(h_39);
    }
  else
    {
      t = d_39;
      {
        ATerm i_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_14, k_14, l_14, t);
            LocalPopChoice(j_39);
          }
        else
          {
            t = i_39;
            t = Option_3_0(t_14, u_14, v_14, t);
          }
      }
    }
  return(t);
}
static ATerm t_10 (ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm x_92 = NULL;
  t = term_d_37;
  x_92 = t;
  t = SSL_table_put(x_92, q_49, r_49);
  t = (ATerm) ATmakeAppl(sym__3, term_d_37, q_49, r_49);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL;
      t = term_p_29;
      t = e_0(t);
      c_93 = t;
      t = term_k_39;
      d_93 = t;
      t = term_l_39;
      e_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_39, term_l_39, c_93);
      t = r_10(d_93, e_93, c_93, t);
      _fail(t);
    }
  else
    {
      ATerm h_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_93 = ATgetFirst((ATermList) t);
          b_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_93;
      t = c_0(t);
      t = term_p_29;
      t = d_0(t);
      h_93 = t;
      t = (ATerm) ATinsert(CheckATermList(b_93), h_93);
    }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm j_93 = NULL;
  j_93 = t;
  if(match_string(t, "-o"))
    {
      t = j_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_93;
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm k_93 = NULL,l_93 = NULL;
  k_93 = t;
  t = term_e_37;
  l_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_37, k_93);
  t = t_10(l_93, k_93, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_93);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_n_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_14, y_14, z_14, t);
  return(t);
}
static ATerm r_10 (ATerm u_70, ATerm v_70, ATerm t_70, ATerm t)
{
  ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL;
  n_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_70, v_70);
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_39 = ATgetArgument(t, 0);
            ATerm t_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_70, v_70);
        t = q_10(u_70, v_70, t);
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = (ATerm) ATempty;
      }
  }
  o_93 = t;
  t = (ATerm) ATinsert(CheckATermList(o_93), t_70);
  p_93 = t;
  t = SSL_table_put(u_70, v_70, p_93);
  t = n_93;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
      t = term_p_29;
      t = n_0(t);
      a_94 = t;
      t = term_k_39;
      b_94 = t;
      t = term_l_39;
      c_94 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_39, term_l_39, a_94);
      t = r_10(b_94, c_94, a_94, t);
      _fail(t);
    }
  else
    {
      ATerm g_94 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_93 = ATgetFirst((ATermList) t);
          x_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_93;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_93 = ATgetFirst((ATermList) t);
          z_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_93;
      t = k_0(t);
      t = y_93;
      t = l_0(t);
      g_94 = t;
      t = (ATerm) ATinsert(CheckATermList(z_93), g_94);
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm i_94 = NULL;
  i_94 = t;
  if(match_string(t, "-i"))
    {
      t = i_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_94;
    }
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  j_94 = t;
  t = term_g_38;
  k_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_38, j_94);
  t = t_10(k_94, j_94, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_94);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_u_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_15, c_15, d_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_29;
  t = whoami_0_0(t);
  l_94 = t;
  t = term_l_15;
  n_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_39), l_94);
  o_94 = t;
  t = SSL_printnl(n_94, o_94);
  t = term_n_18;
  m_94 = t;
  t = SSL_exit(m_94);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL;
  t = term_d_37;
  p_94 = t;
  t = term_w_39;
  q_94 = t;
  t = term_c_40;
  t = q_10(p_94, q_94, t);
  return(t);
}
static ATerm n_10 (ATerm i_52, ATerm j_52, ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_52, j_52);
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
      t = SSL_addr(i_52, j_52);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
  s_94 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_94;
      t = f_122(t);
    }
  else
    {
      ATerm x_94 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_94 = ATgetFirst((ATermList) t);
          u_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_94;
      t = foldr_2_0(f_122, g_122, t);
      x_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_94, x_94);
      t = g_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL;
  if(match_cons(t, sym__2))
    {
      s_32 = ATgetArgument(t, 0);
      t_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(s_32, t_32, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_95 = NULL,o_32 = NULL,p_32 = NULL;
  t = times_0_0(t);
  p_32 = t;
  t = SSL_explode_term(p_32);
  if(match_cons(t, sym__2))
    {
      ATerm g_40 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_32;
  t = foldr_2_0(e_15, f_15, t);
  a_95 = t;
  t = SSL_TicksToSeconds(a_95);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL;
  l_95 = t;
  if(match_cons(t, sym__2))
    {
      m_95 = ATgetArgument(t, 0);
      n_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_95;
        if((m_95 != t))
          {
            _fail(t);
          }
        t = l_95;
        LocalPopChoice(j_40);
      }
    else
      {
        t = h_40;
        t = (ATerm) ATmakeAppl(sym__2, m_95, n_95);
        {
          ATerm m_40 = t;
          int p_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_95, n_95);
              LocalPopChoice(p_40);
            }
          else
            {
              t = m_40;
              t = SSL_gtr(m_95, n_95);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_95, n_95);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm r_95 = NULL;
  r_95 = t;
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_95 = NULL,u_95 = NULL,v_95 = NULL;
        t = term_d_37;
        u_95 = t;
        t = term_r_38;
        v_95 = t;
        t = term_s_40;
        t = q_10(u_95, v_95, t);
        t_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_95, term_n_18);
        t = geq_0_0(t);
        t = r_95;
        t = p_109(t);
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
        t = r_95;
      }
  }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,a_96 = NULL,b_96 = NULL;
  t = run_time_0_0(t);
  x_95 = t;
  t = term_p_29;
  t = whoami_0_0(t);
  y_95 = t;
  t = term_l_15;
  a_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_40), x_95), term_t_40), y_95);
  b_96 = t;
  t = SSL_printnl(a_96, b_96);
  t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_40), x_95), term_t_40), y_95));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_96 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_18;
  c_96 = t;
  t = SSL_exit(c_96);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL;
  n_96 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_96;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_96 = ATgetArgument(t, 0);
          {
            ATerm m_33 = NULL,y_5 = NULL;
            t = SSLgetAnnotations(n_96);
            m_33 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_96);
            y_5 = t;
            t = SSLsetAnnotations(y_5, m_33);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_96;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_96 = NULL,g_96 = NULL;
      t = term_d_37;
      f_96 = t;
      t = term_e_41;
      g_96 = t;
      t = term_f_41;
      t = q_10(f_96, g_96, t);
      LocalPopChoice(z_40);
    }
  else
    {
      t = y_40;
      t = fetch_1_0(h_15, t);
    }
  t = v_127(t);
  return(t);
}
ATerm map_1_0 (ATerm i_112 (ATerm), ATerm t)
{
  static ATerm d_97 (ATerm t)
  {
    ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL;
    a_97 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_97;
      }
    else
      {
        ATerm z_33 = NULL,c_34 = NULL,d_34 = NULL,c_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_97 = ATgetFirst((ATermList) t);
            c_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_97);
        z_33 = t;
        t = b_97;
        t = i_112(t);
        c_34 = t;
        t = c_97;
        t = d_97(t);
        d_34 = t;
        t = (ATerm) ATinsert(CheckATermList(d_34), c_34);
        c_6 = t;
        t = SSLsetAnnotations(c_6, z_33);
      }
    return(t);
  }
  t = d_97(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_97 = NULL,h_97 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_97 = ATgetFirst((ATermList) t);
      h_97 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_97 = NULL,m_97 = NULL;
        static ATerm i_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_97)), not_null(m_97));
          return(t);
        }
        t = h_97;
        t = i_0(t);
        if(((l_97 != NULL) && (l_97 != t)))
          _fail(t);
        else
          l_97 = t;
        t = g_97;
        t = g_0(t);
        if(((m_97 != NULL) && (m_97 != t)))
          _fail(t);
        else
          m_97 = t;
        t = h_97;
        t = reverse_acc_2_0(g_0, i_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_29;
      t = i_0(t);
    }
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL,i_8 = NULL;
  u_97 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_97);
  s_97 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_97);
  i_8 = t;
  t = SSLsetAnnotations(i_8, s_97);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm w_97 = NULL;
  w_97 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_97), term_g_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL;
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_97 = NULL,r_97 = NULL;
      t = term_d_37;
      q_97 = t;
      t = term_w_39;
      r_97 = t;
      t = term_c_40;
      t = q_10(q_97, r_97, t);
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
      t = fetch_1_0(j_15, t);
    }
  t = term_j_41;
  t = echo_0_0(t);
  t = term_k_39;
  o_97 = t;
  t = term_l_39;
  p_97 = t;
  t = term_k_41;
  t = q_10(o_97, p_97, t);
  t = reverse_acc_2_0(_id, k_15, t);
  t = map_1_0(m_15, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  static ATerm t_98 (ATerm t)
  {
    ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL;
    q_98 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_98 = ATgetFirst((ATermList) t);
        s_98 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_41 = t;
      int m_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_34 = NULL,o_34 = NULL,n_8 = NULL;
          t = SSLgetAnnotations(q_98);
          l_34 = t;
          t = r_98;
          t = s_112(t);
          o_34 = t;
          t = (ATerm) ATinsert(CheckATermList(s_98), o_34);
          n_8 = t;
          t = SSLsetAnnotations(n_8, l_34);
          LocalPopChoice(m_41);
        }
      else
        {
          t = l_41;
          {
            ATerm x_34 = NULL,a_35 = NULL,o_8 = NULL;
            t = SSLgetAnnotations(q_98);
            x_34 = t;
            t = s_98;
            t = t_98(t);
            a_35 = t;
            t = (ATerm) ATinsert(CheckATermList(a_35), r_98);
            o_8 = t;
            t = SSLsetAnnotations(o_8, x_34);
          }
        }
    }
    return(t);
  }
  t = t_98(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
  z_98 = t;
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_98;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_41 = ATgetFirst((ATermList) t);
                ATerm q_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_98;
          }
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        t = (ATerm) ATinsert(ATempty, z_98);
      }
  }
  a_99 = t;
  t = term_g_37;
  b_99 = t;
  t = SSL_printnl(b_99, a_99);
  t = z_98;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL;
  t = term_d_37;
  f_99 = t;
  t = term_w_39;
  g_99 = t;
  t = term_c_40;
  t = q_10(f_99, g_99, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_10 (ATerm l_72, ATerm m_72, ATerm t)
{
  t = SSL_table_get(l_72, m_72);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL;
  t = term_r_41;
  h_99 = t;
  t = term_p_29;
  i_99 = t;
  t = term_s_41;
  t = t_10(h_99, i_99, t);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = term_t_41;
  return(t);
}
static ATerm q_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL;
  t = term_r_41;
  l_99 = t;
  t = term_p_29;
  m_99 = t;
  t = term_s_41;
  t = t_10(l_99, m_99, t);
  t = term_u_41;
  j_99 = t;
  t = term_p_29;
  k_99 = t;
  t = term_v_41;
  t = t_10(j_99, k_99, t);
  t = term_w_41;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_15, o_15, p_15, t);
      LocalPopChoice(z_41);
    }
  else
    {
      t = y_41;
      t = Option_3_0(q_15, r_15, u_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_129 (ATerm), ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL,x_99 = NULL,b_100 = NULL,c_100 = NULL,m_9 = NULL;
  r_99 = t;
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_42;
        t = y_129(t);
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
      }
  }
  t = r_99;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_99 = ATgetFirst((ATermList) t);
      x_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_99);
  s_99 = t;
  t = term_w_39;
  c_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_39, t_99);
  t = t_10(c_100, t_99, t);
  t = x_99;
  {
    static ATerm m_100 (ATerm t)
    {
      ATerm d_42 = t;
      int e_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_42 = t;
          int g_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_100 = NULL;
              f_100 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_100;
              LocalPopChoice(g_42);
            }
          else
            {
              t = f_42;
              t = y_129(t);
              t = Cons_2_0(_id, m_100, t);
            }
          LocalPopChoice(e_42);
        }
      else
        {
          t = d_42;
          {
            ATerm i_100 = NULL,j_100 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_100 = ATgetFirst((ATermList) t);
                j_100 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_100), (ATerm) ATmakeAppl(sym_Undefined_1, i_100));
          }
        }
      return(t);
    }
    t = m_100(t);
  }
  b_100 = t;
  t = (ATerm) ATinsert(CheckATermList(b_100), (ATerm) ATmakeAppl(sym_Program_1, t_99));
  m_9 = t;
  t = SSLsetAnnotations(m_9, s_99);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm b_101 = NULL;
  b_101 = t;
  if(match_string(t, "--help"))
    {
      t = b_101;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_101;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_101;
        }
    }
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL;
  t = term_e_41;
  c_101 = t;
  t = term_p_29;
  d_101 = t;
  t = term_h_42;
  t = t_10(c_101, d_101, t);
  t = term_i_42;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_j_42;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_129 (ATerm), ATerm t)
{
  ATerm u_100 = NULL,v_100 = NULL,w_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL;
  w_100 = t;
  t = term_k_39;
  y_100 = t;
  t = term_l_39;
  z_100 = t;
  t = (ATerm) ATempty;
  a_101 = t;
  t = SSL_table_put(y_100, z_100, a_101);
  t = w_100;
  {
    static ATerm y_15 (ATerm t)
    {
      ATerm k_42 = t;
      int l_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_129(t);
          LocalPopChoice(l_42);
        }
      else
        {
          t = k_42;
          {
            ATerm m_42 = t;
            int n_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_16, c_16, d_16, t);
                LocalPopChoice(n_42);
              }
            else
              {
                t = m_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_15, t);
  }
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_101 = NULL;
        o_101 = t;
        {
          ATerm q_42 = t;
          int r_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_35 = NULL;
              t = o_101;
              {
                ATerm s_42 = t;
                int t_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_35 = NULL,j_35 = NULL;
                    t = term_d_37;
                    i_35 = t;
                    t = term_e_41;
                    j_35 = t;
                    t = term_f_41;
                    t = q_10(i_35, j_35, t);
                    LocalPopChoice(t_42);
                  }
                else
                  {
                    t = s_42;
                    t = fetch_1_0(e_16, t);
                  }
              }
              t = o_101;
              t = default_system_usage_0_0(t);
              t = term_m_18;
              h_35 = t;
              t = SSL_exit(h_35);
              LocalPopChoice(r_42);
            }
          else
            {
              t = q_42;
              {
                ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
                t = term_d_37;
                o_35 = t;
                t = term_r_41;
                p_35 = t;
                t = term_u_42;
                t = q_10(o_35, p_35, t);
                t = o_101;
                t = default_system_about_0_0(t);
                t = term_m_18;
                n_35 = t;
                t = SSL_exit(n_35);
              }
            }
        }
        LocalPopChoice(p_42);
      }
    else
      {
        t = o_42;
        {
          ATerm v_42 = t;
          int w_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL;
              static ATerm f_16 (ATerm t)
              {
                ATerm s_101 = NULL,v_101 = NULL,w_101 = NULL,c_12 = NULL;
                w_101 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_101 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_101);
                s_101 = t;
                t = v_101;
                if(((u_100 != NULL) && (u_100 != t)))
                  _fail(t);
                else
                  u_100 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_101);
                c_12 = t;
                t = SSLsetAnnotations(c_12, s_101);
                return(t);
              }
              t = fetch_1_0(f_16, t);
              t = term_l_15;
              q_101 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_100)), term_x_42);
              r_101 = t;
              t = SSL_printnl(q_101, r_101);
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_100)), term_x_42));
              t = default_system_usage_0_0(t);
              t = term_n_18;
              p_101 = t;
              t = SSL_exit(p_101);
              LocalPopChoice(w_42);
            }
          else
            {
              t = v_42;
            }
        }
      }
  }
  v_100 = t;
  t = term_k_39;
  x_100 = t;
  t = SSL_table_destroy(x_100);
  t = v_100;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL;
  t = parse_options_1_0(x_127, t);
  b_102 = t;
  t = term_y_42;
  e_102 = t;
  t = SSL_table_create(e_102);
  t = term_y_42;
  c_102 = t;
  t = term_z_42;
  d_102 = t;
  t = SSL_table_put(c_102, d_102, b_102);
  t = b_102;
  t = z_127(t);
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_127, t);
        LocalPopChoice(b_43);
      }
    else
      {
        t = a_43;
        {
          ATerm c_43 = t;
          int d_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_128(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_43);
            }
          else
            {
              t = c_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      {
        ATerm g_43 = t;
        int h_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(h_43);
          }
        else
          {
            t = g_43;
            {
              ATerm i_43 = t;
              int j_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_16, j_16, k_16, t);
                  LocalPopChoice(j_43);
                }
              else
                {
                  t = i_43;
                  {
                    ATerm k_43 = t;
                    int l_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(l_43);
                      }
                    else
                      {
                        t = k_43;
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
static ATerm h_16 (ATerm t)
{
  t = input_1_0(n_16, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm g_102 = NULL,j_102 = NULL;
  t = term_j_37;
  g_102 = t;
  t = term_p_29;
  j_102 = t;
  t = term_m_43;
  t = t_10(g_102, j_102, t);
  t = term_n_43;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = output_1_0(q_16, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,m_12 = NULL,i_12 = NULL;
  s_102 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_102);
  l_102 = t;
  t = m_102;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_102 = ATgetFirst((ATermList) t);
      p_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_102);
  n_102 = t;
  t = p_102;
  t = Cons_2_0(r_16, t_16, t);
  q_102 = t;
  t = (ATerm) ATinsert(CheckATermList(q_102), o_102);
  i_12 = t;
  t = SSLsetAnnotations(i_12, n_102);
  r_102 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_102);
  m_12 = t;
  t = SSLsetAnnotations(m_12, l_102);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL,f_12 = NULL;
  w_102 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_102);
  t_102 = t;
  t = u_102;
  t = all_defs_0_0(t);
  v_102 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_102);
  f_12 = t;
  t = SSLsetAnnotations(f_12, t_102);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_16, default_usage_0_0, _id, h_16, t);
  return(t);
}

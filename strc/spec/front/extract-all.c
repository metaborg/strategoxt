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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_z_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_g_45;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_j_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_u_42;
ATerm term_r_42;
ATerm term_o_42;
ATerm term_h_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_k_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_u_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_j_35;
ATerm term_z_34;
ATerm term_e_34;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_k_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_m_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_s_22;
ATerm term_o_20;
ATerm term_z_19;
ATerm term_o_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_22);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Op_2, term_n_23, (ATerm) ATempty);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_23);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Call_2, term_o_24, (ATerm) ATempty);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Call_2, term_q_25, (ATerm) ATempty);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Call_2, term_i_23, (ATerm) ATempty);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Sort_2, term_e_31, (ATerm) ATempty);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_ConstType_1, term_f_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_a_40);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_f_40);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_k_41);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_t_41, term_z_19);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_19);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym__2, term_z_41, term_l_31);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_e_43);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_t_41);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_y_43);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym__2, term_o_42, term_r_42);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym__2, term_p_44, term_l_31);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym__2, term_s_44, term_l_31);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym__2, term_y_43, term_l_31);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym__3, term_o_42, term_r_42, (ATerm) ATempty);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_p_44);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(sym__2, term_f_40, term_l_31);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm j_9 (ATerm b_24, ATerm d_24, ATerm e_24, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm q_9 (ATerm n_38, ATerm m_38, ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm y_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_118 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm s_40 (ATerm c_27, ATerm d_27, ATerm t);
static ATerm t_40 (ATerm u_27, ATerm x_27, ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm p_100 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm z_9 (ATerm o_32, ATerm p_32, ATerm q_32, ATerm t);
static ATerm x_54 (ATerm d_54, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm n_103 (ATerm), ATerm t);
static ATerm d_10 (ATerm b_28, ATerm c_28, ATerm d_28, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm j_102 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm l_106 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm e_10 (ATerm z_52, ATerm a_53, ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm copy_1_0 (ATerm p_124 (ATerm), ATerm t);
static ATerm f_10 (ATerm x_22, ATerm y_22, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm d_71 (ATerm i_67, ATerm o_67, ATerm p_67, ATerm t_67, ATerm t);
static ATerm h_71 (ATerm h_69, ATerm j_69, ATerm k_69, ATerm l_69, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm o_114 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm r_109 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm b_104 (ATerm), ATerm t);
static ATerm r_9 (ATerm k_71, ATerm l_71, ATerm t);
ATerm end_scope_1_0 (ATerm n_134 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_134 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm v_9 (ATerm j_25, ATerm k_25, ATerm o_25, ATerm l_25, ATerm n_25, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm t_73 (ATerm t_71, ATerm u_71, ATerm x_71, ATerm y_71, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm t_114 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_76 (ATerm u_75, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_10 (ATerm f_121 (ATerm), ATerm r_63, ATerm q_63, ATerm t);
ATerm genzip_4_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_10 (ATerm x_745, ATerm c_746, ATerm b_76, ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm f_81 (ATerm u_79, ATerm v_79, ATerm w_79, ATerm t);
static ATerm y_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm s_10 (ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm s_77, ATerm p_77, ATerm x_77, ATerm t_77, ATerm q_77, ATerm r_77, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm t);
ATerm for_3_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm c_29 (ATerm h_28, ATerm i_28, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm v_10 (ATerm q_134 (ATerm), ATerm q_78, ATerm o_78, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm x_10 (ATerm q_71, ATerm r_71, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm y_10 (ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm x_63, ATerm w_63, ATerm t);
static ATerm z_10 (ATerm k_121 (ATerm), ATerm t_63, ATerm s_63, ATerm t);
ATerm foldr_3_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t);
static ATerm a_11 (ATerm g_46, ATerm h_46, ATerm t);
static ATerm b_11 (ATerm y_44, ATerm z_44, ATerm t);
static ATerm d_11 (ATerm t_109 (ATerm), ATerm c_320, ATerm e_45, ATerm t);
static ATerm c_11 (ATerm u_44, ATerm v_44, ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm output_1_0 (ATerm y_129 (ATerm), ATerm t);
static ATerm o_94 (ATerm i_94, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_11 (ATerm a_45, ATerm t);
static ATerm f_11 (ATerm b_63, ATerm c_63, ATerm t);
static ATerm g_11 (ATerm i_46, ATerm j_46, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_95 (ATerm y_94, ATerm t);
static ATerm a_96 (ATerm c_95, ATerm d_95, ATerm e_95, ATerm t);
static ATerm b_96 (ATerm m_95, ATerm n_95, ATerm o_95, ATerm t);
static ATerm h_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_129 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm t_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_11 (ATerm b_50, ATerm c_50, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_11 (ATerm f_71, ATerm g_71, ATerm e_71, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_11 (ATerm t_52, ATerm u_52, ATerm t);
ATerm foldr_2_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm l_16 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_111 (ATerm), ATerm t);
static ATerm n_16 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_16 (ATerm t);
ATerm need_help_1_0 (ATerm p_129 (ATerm), ATerm t);
static ATerm r_11 (ATerm m_74, ATerm n_74, ATerm o_74, ATerm t);
ATerm lookup_table_0_1 (ATerm r_72, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_74, ATerm v_74, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_11 (ATerm r_74, ATerm s_74, ATerm t);
static ATerm l_11 (ATerm w_74, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_114 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm u_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_114 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_11 (ATerm p_74, ATerm q_74, ATerm t);
static ATerm n_11 (ATerm y_72, ATerm z_72, ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm h_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm s_131 (ATerm), ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
ATerm parse_options_1_0 (ATerm r_131 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm j_9 (ATerm b_24, ATerm d_24, ATerm e_24, ATerm t)
{
  ATerm p_0 = NULL,s_0 = NULL;
  t = term_z_17;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_18), e_24), term_c_18), d_24), term_b_18), b_24), term_a_18);
  s_0 = t;
  t = SSL_printnl(p_0, s_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_18), e_24), term_c_18), d_24), term_b_18), b_24), term_a_18);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if(((ATgetType(e_18) != AT_INT) || (ATgetInt((ATermInt) e_18) != 0)))
        _fail(t);
      {
        ATerm f_18 = ATgetArgument(t, 1);
        if(((ATgetType(f_18) != AT_INT) || (ATgetInt((ATermInt) f_18) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm b_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2;
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = h_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,v_0 = NULL;
        t = d_2;
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
          ATerm m_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_18;
            }
        }
        t = term_z_17;
        u_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_2), term_o_18);
        v_0 = t;
        t = SSL_printnl(u_0, v_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, d_2), term_o_18);
        t = giving_up_0_0(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          ATerm b_1 = NULL,c_1 = NULL;
          t = d_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_18 = ATgetFirst((ATermList) t);
              if(match_cons(p_18, sym__2))
                {
                  b_1 = ATgetArgument(p_18, 0);
                  c_1 = ATgetArgument(p_18, 1);
                }
              else
                _fail(t);
              {
                ATerm r_18 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(r_18) != AT_LIST) || !(ATisEmpty(r_18))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATmakeAppl(sym__2, b_1, c_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATmakeAppl(sym__2, b_1, c_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,u_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
      {
        ATerm l_1 = NULL,p_1 = NULL,q_1 = NULL,e_1 = NULL;
        t = SSLgetAnnotations(q_4);
        l_1 = t;
        t = r_4;
        t = o_101(t);
        p_1 = t;
        t = u_4;
        t = o_101(t);
        q_1 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_1, q_1);
        e_1 = t;
        t = SSLsetAnnotations(e_1, l_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_4 = ATgetArgument(t, 0);
          u_4 = ATgetArgument(t, 1);
          o_4 = ATgetArgument(t, 2);
          {
            ATerm m_2 = NULL,h_3 = NULL,v_3 = NULL,b_4 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(q_4);
            m_2 = t;
            t = r_4;
            t = q_101(t);
            h_3 = t;
            t = u_4;
            t = q_101(t);
            v_3 = t;
            t = o_4;
            t = o_101(t);
            b_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, h_3, v_3, b_4);
            h_1 = t;
            t = SSLsetAnnotations(h_1, m_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              r_4 = ATgetArgument(t, 0);
              u_4 = ATgetArgument(t, 1);
              o_4 = ATgetArgument(t, 2);
              p_4 = ATgetArgument(t, 3);
              {
                ATerm b_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,i_1 = NULL;
                t = SSLgetAnnotations(q_4);
                b_6 = t;
                t = r_4;
                t = q_101(t);
                k_6 = t;
                t = u_4;
                t = q_101(t);
                l_6 = t;
                t = o_4;
                t = q_101(t);
                m_6 = t;
                t = p_4;
                t = o_101(t);
                n_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_6, l_6, m_6, n_6);
                i_1 = t;
                t = SSLsetAnnotations(i_1, b_6);
              }
            }
          else
            {
              ATerm y_6 = NULL,g_7 = NULL,j_7 = NULL,m_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  r_4 = ATgetArgument(t, 0);
                  u_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_4);
              y_6 = t;
              t = r_4;
              t = q_101(t);
              g_7 = t;
              t = u_4;
              t = o_101(t);
              j_7 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, g_7, j_7);
              m_1 = t;
              t = SSLsetAnnotations(m_1, y_6);
            }
        }
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm b_5 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_5 = ATgetArgument(t, 0);
          {
            ATerm u_18 = ATgetArgument(t, 1);
          }
          {
            ATerm v_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_18);
      t = b_5;
    }
  else
    {
      t = s_18;
      if(match_cons(t, sym_SDefT_4))
        {
          b_5 = ATgetArgument(t, 0);
          {
            ATerm w_18 = ATgetArgument(t, 1);
          }
          {
            ATerm x_18 = ATgetArgument(t, 2);
          }
          {
            ATerm y_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = b_5;
    }
  return(t);
}
static ATerm q_9 (ATerm n_38, ATerm m_38, ATerm t)
{
  t = n_38;
  t = map_1_0(r_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm o_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(z_0, o_8, r_8, t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      if((t_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(f_1, c_9, d_9, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      if((e_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      if((j_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm y_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_118 (ATerm), ATerm t)
{
  static ATerm s_6 (ATerm t)
  {
    ATerm p_5 = NULL,q_5 = NULL,s_5 = NULL;
    s_5 = t;
    {
      ATerm z_18 = t;
      int a_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_118(t);
          LocalPopChoice(a_19);
        }
      else
        {
          t = z_18;
          t = (ATerm) ATempty;
        }
    }
    p_5 = t;
    t = s_5;
    {
      ATerm b_19 = t;
      int f_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_5 = NULL,f_8 = NULL,g_8 = NULL;
          t = x_118(t);
          t_5 = t;
          t = s_5;
          {
            static ATerm t_0 (ATerm t)
            {
              ATerm u_7 = NULL;
              t = s_6(t);
              u_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_7, t_5);
              t = l_10(z_118, u_7, t_5, t);
              return(t);
            }
            t = y_118(t_0, s_6, w_0, t);
          }
          g_8 = t;
          t = SSL_explode_term(g_8);
          if(match_cons(t, sym__2))
            {
              ATerm g_19 = ATgetArgument(t, 0);
              f_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_8;
          t = foldr_3_0(x_0, y_0, _id, t);
          LocalPopChoice(f_19);
        }
      else
        {
          t = b_19;
          {
            ATerm v_8 = NULL;
            t = SSL_explode_term(s_5);
            if(match_cons(t, sym__2))
              {
                ATerm i_19 = ATgetArgument(t, 0);
                v_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_8;
            t = foldr_3_0(a_1, d_1, s_6, t);
          }
        }
    }
    q_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_5, q_5);
    t = z_10(g_1, p_5, q_5, t);
    return(t);
  }
  t = s_6(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm z_6 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(match_cons(j_19, sym_SVar_1))
        {
          z_6 = ATgetArgument(j_19, 0);
        }
      else
        _fail(t);
      b_7 = ATgetArgument(t, 1);
      d_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_7;
  t = foldr_3_0(o_1, r_1, s_1, t);
  e_7 = t;
  t = d_7;
  t = foldr_3_0(t_1, u_1, v_1, t);
  f_7 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_6, (ATerm) ATmakeAppl(sym__2, e_7, f_7)));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,t_7 = NULL,y_7 = NULL;
  m_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
      t = m_7;
      t = q_9(n_7, o_7, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_7 = ATgetArgument(t, 0);
          o_7 = ATgetArgument(t, 1);
          t_7 = ATgetArgument(t, 2);
          t = o_7;
          t = map_1_0(w_1, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              n_7 = ATgetArgument(t, 0);
              o_7 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, n_7);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  n_7 = ATgetArgument(t, 0);
                  o_7 = ATgetArgument(t, 1);
                  t_7 = ATgetArgument(t, 2);
                  y_7 = ATgetArgument(t, 3);
                  t = o_7;
                  t = map_1_0(y_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_7 = ATgetArgument(t, 0);
                      o_7 = ATgetArgument(t, 1);
                      t_7 = ATgetArgument(t, 2);
                      y_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_7;
                  t = map_1_0(a_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if(match_cons(k_19, sym__2))
        {
          r_10 = ATgetArgument(k_19, 0);
          {
            ATerm l_19 = ATgetArgument(k_19, 1);
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
static ATerm o_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(h_7, i_7, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(k_7, l_7, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm l_8 = NULL;
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_8 = ATgetArgument(t, 0);
          {
            ATerm t_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_21);
      t = l_8;
    }
  else
    {
      t = r_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_8;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm m_9 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_9 = ATgetArgument(t, 0);
          {
            ATerm w_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      t = m_9;
    }
  else
    {
      t = u_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_9;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_10 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = n_10;
    }
  else
    {
      t = x_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_10;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(j_1, k_1, sboundin_3_0, n_1, t);
  return(t);
}
static ATerm s_40 (ATerm c_27, ATerm d_27, ATerm t)
{
  t = c_27;
  {
    ATerm a_22 = t;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL,p_27 = NULL,s_27 = NULL,t_27 = NULL,x_1 = NULL;
        t_27 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_27 = ATgetFirst((ATermList) t);
            s_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_27);
        j_27 = t;
        t = s_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(s_27), p_27);
        x_1 = t;
        t = SSLsetAnnotations(x_1, j_27);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_22;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_22, c_27);
  return(t);
}
static ATerm t_40 (ATerm u_27, ATerm x_27, ATerm t)
{
  t = u_27;
  {
    ATerm h_23 = t;
    if((PushChoice() == 0))
      {
        ATerm l_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,z_1 = NULL;
        x_28 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_28 = ATgetFirst((ATermList) t);
            w_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_28);
        l_28 = t;
        t = w_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(w_28), v_28);
        z_1 = t;
        t = SSLsetAnnotations(z_1, l_28);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_23;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_23, u_27);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_p_23;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,g_13 = NULL;
  i_30 = t;
  t = SSL_explode_term(i_30);
  if(match_cons(t, sym__2))
    {
      ATerm q_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_23 = ATgetArgument(t, 1);
        if(((ATgetType(r_23) == AT_LIST) && !(ATisEmpty(r_23))))
          {
            j_30 = ATgetFirst((ATermList) r_23);
            {
              ATerm w_23 = (ATerm) ATgetNext((ATermList) r_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(i_30);
  if(match_cons(t, sym__2))
    {
      ATerm x_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_24 = ATgetArgument(t, 1);
        if(((ATgetType(g_24) == AT_LIST) && !(ATisEmpty(g_24))))
          {
            ATerm j_24 = ATgetFirst((ATermList) g_24);
            ATerm k_24 = (ATerm) ATgetNext((ATermList) g_24);
            if(((ATgetType(k_24) == AT_LIST) && !(ATisEmpty(k_24))))
              {
                g_13 = ATgetFirst((ATermList) k_24);
                {
                  ATerm l_24 = (ATerm) ATgetNext((ATermList) k_24);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, g_13), j_30));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm j_33 = NULL,l_33 = NULL;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, l_33), j_33));
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_p_23;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL;
  if(match_cons(t, sym__2))
    {
      p_33 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, q_33), p_33));
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm x_36 = NULL,i_37 = NULL;
  if(match_cons(t, sym__2))
    {
      x_36 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATinsert(ATempty, i_37), x_36));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm q_37 = NULL,v_37 = NULL;
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATinsert(ATempty, v_37), q_37));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  if(match_cons(t, sym_Anno_2))
    {
      c_30 = ATgetArgument(t, 0);
      d_30 = ATgetArgument(t, 1);
      {
        ATerm g_30 = NULL;
        t = d_30;
        t = foldr_2_0(c_2, e_2, t);
        g_30 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, c_30, g_30);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          c_30 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, c_30, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              c_30 = ATgetArgument(t, 0);
              {
                ATerm m_13 = NULL;
                t = c_30;
                {
                  ATerm q_24 = t;
                  int r_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_s_24;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_t_24;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_u_24;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_v_24;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_w_24;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(r_24);
                    }
                  else
                    {
                      t = q_24;
                      {
                        ATerm q_13 = NULL;
                        t = SSL_explode_string(c_30);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm x_24 = ATgetFirst((ATermList) t);
                            if(((ATgetType(x_24) != AT_INT) || (ATgetInt((ATermInt) x_24) != 39)))
                              _fail(t);
                            {
                              ATerm z_24 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
                                {
                                  q_13 = ATgetFirst((ATermList) z_24);
                                  {
                                    ATerm a_25 = (ATerm) ATgetNext((ATermList) z_24);
                                    if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
                                      {
                                        ATerm b_25 = ATgetFirst((ATermList) a_25);
                                        if(((ATgetType(b_25) != AT_INT) || (ATgetInt((ATermInt) b_25) != 39)))
                                          _fail(t);
                                        {
                                          ATerm c_25 = (ATerm) ATgetNext((ATermList) a_25);
                                          if(((ATgetType(c_25) != AT_LIST) || !(ATisEmpty(c_25))))
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
                        t = q_13;
                      }
                    }
                }
                m_13 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, m_13);
              }
            }
          else
            {
              ATerm d_25 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      c_30 = ATgetArgument(t, 0);
                      {
                        ATerm f_25 = ATgetArgument(t, 1);
                      }
                      a_30 = ATgetArgument(t, 2);
                      z_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_25);
                  t = (ATerm) ATmakeAppl(sym_Con_3, c_30, a_30, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_28), (ATerm) ATempty));
                }
              else
                {
                  t = d_25;
                  {
                    ATerm g_25 = t;
                    int h_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            c_30 = ATgetArgument(t, 0);
                            {
                              ATerm i_25 = ATgetArgument(t, 1);
                            }
                            a_30 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_25);
                        t = (ATerm) ATmakeAppl(sym_Con_3, c_30, a_30, term_r_25);
                      }
                    else
                      {
                        t = g_25;
                        if(match_cons(t, sym_Con1_2))
                          {
                            c_30 = ATgetArgument(t, 0);
                            d_30 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, c_30, d_30, term_r_25);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                c_30 = ATgetArgument(t, 0);
                                d_30 = ATgetArgument(t, 1);
                                {
                                  static ATerm i_2 (ATerm t)
                                  {
                                    t = d_30;
                                    return(t);
                                  }
                                  t = c_30;
                                  t = foldr_2_0(i_2, j_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    c_30 = ATgetArgument(t, 0);
                                    t = c_30;
                                    t = foldr_2_0(k_2, l_2, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        c_30 = ATgetArgument(t, 0);
                                        t = c_30;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            a_29 = ATgetFirst((ATermList) t);
                                            b_29 = (ATerm) ATgetNext((ATermList) t);
                                            t = b_29;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm s_25 = t;
                                                int t_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = s_40(c_30, b_30, t);
                                                    LocalPopChoice(t_25);
                                                  }
                                                else
                                                  {
                                                    t = s_25;
                                                    t = a_29;
                                                  }
                                              }
                                            else
                                              {
                                                t = s_40(c_30, b_30, t);
                                              }
                                          }
                                        else
                                          {
                                            t = s_40(c_30, b_30, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            c_30 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, c_30));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                c_30 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, c_30));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    c_30 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, c_30));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        c_30 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, c_30));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            c_30 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_30), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                c_30 = ATgetArgument(t, 0);
                                                                d_30 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_30), d_30);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    c_30 = ATgetArgument(t, 0);
                                                                    d_30 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm n_2 (ATerm t)
                                                                      {
                                                                        t = d_30;
                                                                        return(t);
                                                                      }
                                                                      t = c_30;
                                                                      t = foldr_2_0(n_2, o_2, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        c_30 = ATgetArgument(t, 0);
                                                                        t = c_30;
                                                                        t = foldr_2_0(v_2, w_2, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            c_30 = ATgetArgument(t, 0);
                                                                            d_30 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_i_23, (ATerm) ATinsert(CheckATermList(d_30), c_30));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                c_30 = ATgetArgument(t, 0);
                                                                                t = c_30;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    a_29 = ATgetFirst((ATermList) t);
                                                                                    b_29 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = b_29;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm u_25 = t;
                                                                                        int v_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = t_40(c_30, b_30, t);
                                                                                            LocalPopChoice(v_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_25;
                                                                                            t = a_29;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = t_40(c_30, b_30, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_40(c_30, b_30, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_w_25;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        c_30 = ATgetArgument(t, 0);
                                                                                        d_30 = ATgetArgument(t, 1);
                                                                                        t = d_30;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            z_29 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_y_25, (ATerm) ATinsert(ATinsert(ATempty, z_29), c_30));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            c_30 = ATgetArgument(t, 0);
                                                                                            t = c_30;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                c_30 = ATgetArgument(t, 0);
                                                                                                d_30 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, c_30, d_30, term_a_26);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    c_30 = ATgetArgument(t, 0);
                                                                                                    d_30 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, c_30, d_30, term_a_26);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        c_30 = ATgetArgument(t, 0);
                                                                                                        d_30 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, c_30, (ATerm)ATempty, d_30);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            c_30 = ATgetArgument(t, 0);
                                                                                                            d_30 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, d_30, c_30);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                c_30 = ATgetArgument(t, 0);
                                                                                                                d_30 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, c_30, d_30, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    c_30 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, c_30, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        c_30 = ATgetArgument(t, 0);
                                                                                                                        d_30 = ATgetArgument(t, 1);
                                                                                                                        a_30 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, c_30, d_30, (ATerm)ATempty, a_30);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            c_30 = ATgetArgument(t, 0);
                                                                                                                            d_30 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, c_30, (ATerm)ATempty, (ATerm)ATempty, d_30);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                c_30 = ATgetArgument(t, 0);
                                                                                                                                d_30 = ATgetArgument(t, 1);
                                                                                                                                a_30 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, c_30, d_30, (ATerm)ATempty, a_30);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    c_30 = ATgetArgument(t, 0);
                                                                                                                                    d_30 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, c_30, (ATerm)ATempty, (ATerm)ATempty, d_30);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        c_30 = ATgetArgument(t, 0);
                                                                                                                                        d_30 = ATgetArgument(t, 1);
                                                                                                                                        a_30 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, c_30, d_30, (ATerm)ATempty, a_30);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            c_30 = ATgetArgument(t, 0);
                                                                                                                                            d_30 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, c_30, (ATerm)ATempty, (ATerm)ATempty, d_30);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm b_26 = ATgetArgument(t, 0);
                                                                                                                                                d_30 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, d_30);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  y_40 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      z_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
      {
        ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,i_41 = NULL;
        t = y_40;
        t = new_0_0(t);
        d_41 = t;
        t = new_0_0(t);
        e_41 = t;
        t = new_0_0(t);
        f_41 = t;
        t = new_0_0(t);
        i_41 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_41), f_41), e_41), d_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, d_41), (ATerm) ATmakeAppl(sym_Var_1, f_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, z_40, (ATerm)ATmakeAppl(sym_Var_1, d_41), (ATerm) ATmakeAppl(sym_Var_1, e_41)), (ATerm) ATmakeAppl(sym_BAM_3, x_40, (ATerm)ATmakeAppl(sym_Var_1, f_41), (ATerm) ATmakeAppl(sym_Var_1, i_41)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_41)), (ATerm) ATmakeAppl(sym_Var_1, e_41))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_40 = ATgetArgument(t, 0);
          {
            ATerm j_41 = NULL,l_41 = NULL,p_41 = NULL,u_41 = NULL;
            t = y_40;
            t = new_0_0(t);
            p_41 = t;
            t = z_40;
            {
              static ATerm x_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((j_41 != NULL) && (j_41 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      j_41 = ATgetArgument(t, 0);
                    if(((l_41 != NULL) && (l_41 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      l_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_41);
                return(t);
              }
              t = oncetd_1_0(x_2, t);
            }
            u_41 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_41)), not_null(j_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_41)), (ATerm) ATmakeAppl(sym_Build_1, u_41))));
          }
        }
      else
        {
          ATerm a_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              z_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_40;
          t = new_0_0(t);
          e_42 = t;
          t = new_0_0(t);
          f_42 = t;
          t = z_40;
          {
            static ATerm y_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((a_42 != NULL) && (a_42 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_42 = ATgetArgument(t, 0);
                  if(((d_42 != NULL) && (d_42 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    d_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, e_42);
              return(t);
            }
            t = oncetd_1_0(y_2, t);
          }
          g_42 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_42), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_42)), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_26, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_42))))), (ATerm)ATmakeAppl(sym_Var_1, e_42), (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_42)), not_null(a_42)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm i_42 = NULL,m_42 = NULL;
  i_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      m_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_42 = NULL,q_42 = NULL,s_42 = NULL,t_42 = NULL;
        t = i_42;
        t = new_0_0(t);
        s_42 = t;
        t = m_42;
        {
          static ATerm z_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((p_42 != NULL) && (p_42 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_42 = ATgetArgument(t, 0);
                if(((q_42 != NULL) && (q_42 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_42), p_42);
            return(t);
          }
          t = pat_td_1_0(z_2, t);
        }
        t_42 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_42), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_26, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_42))), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_42))))));
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_42 = NULL,x_42 = NULL,y_42 = NULL;
              t = i_42;
              t = new_0_0(t);
              x_42 = t;
              t = m_42;
              {
                static ATerm a_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((v_42 != NULL) && (v_42 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_42 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, x_42);
                  return(t);
                }
                t = pat_td_1_0(a_3, t);
              }
              y_42 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_42)), not_null(v_42))));
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              {
                ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
                t = i_42;
                t = new_0_0(t);
                h_43 = t;
                t = m_42;
                {
                  static ATerm d_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((g_43 != NULL) && (g_43 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_43 = ATgetArgument(t, 0);
                        if(((f_43 != NULL) && (f_43 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_43 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, h_43);
                    return(t);
                  }
                  t = pat_td_1_0(d_3, t);
                }
                i_43 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, h_43)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_43)), not_null(g_43)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_100(t);
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm x_47 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL;
        c_48 = t;
        if(match_cons(t, sym_Op_2))
          {
            d_48 = ATgetArgument(t, 0);
            e_48 = ATgetArgument(t, 1);
            {
              ATerm z_13 = NULL,c_14 = NULL,p_2 = NULL;
              t = SSLgetAnnotations(c_48);
              z_13 = t;
              t = e_48;
              {
                static ATerm e_3 (ATerm t)
                {
                  t = pat_td_1_0(p_100, t);
                  return(t);
                }
                t = fetch_1_0(e_3, t);
              }
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, d_48, c_14);
              p_2 = t;
              t = SSLsetAnnotations(p_2, z_13);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                d_48 = ATgetArgument(t, 0);
                e_48 = ATgetArgument(t, 1);
                {
                  ATerm p_26 = t;
                  int q_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_15 = NULL,p_15 = NULL,q_2 = NULL;
                      t = SSLgetAnnotations(c_48);
                      h_15 = t;
                      t = e_48;
                      t = pat_td_1_0(p_100, t);
                      p_15 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, d_48, p_15);
                      q_2 = t;
                      t = SSLsetAnnotations(q_2, h_15);
                      LocalPopChoice(q_26);
                    }
                  else
                    {
                      t = p_26;
                      {
                        ATerm y_15 = NULL,k_16 = NULL,r_2 = NULL;
                        t = SSLgetAnnotations(c_48);
                        y_15 = t;
                        t = d_48;
                        t = pat_td_1_0(p_100, t);
                        k_16 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, k_16, e_48);
                        r_2 = t;
                        t = SSLsetAnnotations(r_2, y_15);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    d_48 = ATgetArgument(t, 0);
                    e_48 = ATgetArgument(t, 1);
                    x_47 = ATgetArgument(t, 2);
                    {
                      ATerm y_16 = NULL,g_17 = NULL,s_2 = NULL;
                      t = SSLgetAnnotations(c_48);
                      y_16 = t;
                      t = x_47;
                      {
                        static ATerm f_3 (ATerm t)
                        {
                          t = pat_td_1_0(p_100, t);
                          return(t);
                        }
                        t = fetch_1_0(f_3, t);
                      }
                      g_17 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, d_48, e_48, g_17);
                      s_2 = t;
                      t = SSLsetAnnotations(s_2, y_16);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        d_48 = ATgetArgument(t, 0);
                        e_48 = ATgetArgument(t, 1);
                        x_47 = ATgetArgument(t, 2);
                        {
                          ATerm t_17 = NULL,y_17 = NULL,t_2 = NULL;
                          t = SSLgetAnnotations(c_48);
                          t_17 = t;
                          t = x_47;
                          {
                            static ATerm i_3 (ATerm t)
                            {
                              t = pat_td_1_0(p_100, t);
                              return(t);
                            }
                            t = fetch_1_0(i_3, t);
                          }
                          y_17 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, d_48, e_48, y_17);
                          t_2 = t;
                          t = SSLsetAnnotations(t_2, t_17);
                        }
                      }
                    else
                      {
                        ATerm n_18 = NULL,q_18 = NULL,u_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            d_48 = ATgetArgument(t, 0);
                            e_48 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(c_48);
                        n_18 = t;
                        t = e_48;
                        t = pat_td_1_0(p_100, t);
                        q_18 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, d_48, q_18);
                        u_2 = t;
                        t = SSLsetAnnotations(u_2, n_18);
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
  ATerm p_48 = NULL,q_48 = NULL;
  p_48 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_48 = NULL,s_48 = NULL,y_48 = NULL,z_48 = NULL;
        t = p_48;
        t = new_0_0(t);
        y_48 = t;
        t = q_48;
        {
          static ATerm n_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((r_48 != NULL) && (r_48 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_48 = ATgetArgument(t, 0);
                if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, y_48);
            return(t);
          }
          t = pat_td_1_0(n_3, t);
        }
        z_48 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_48), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_v_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_48)), not_null(r_48))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_48)))), (ATerm) ATmakeAppl(sym_Build_1, z_48)));
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_49 = NULL,c_49 = NULL,d_49 = NULL;
              t = p_48;
              t = new_0_0(t);
              c_49 = t;
              t = q_48;
              {
                static ATerm o_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((a_49 != NULL) && (a_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_49);
                  return(t);
                }
                t = pat_td_1_0(o_3, t);
              }
              d_49 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_49), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_49)))), (ATerm) ATmakeAppl(sym_Build_1, d_49)));
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              {
                ATerm e_49 = NULL,j_49 = NULL,l_49 = NULL,m_49 = NULL;
                t = p_48;
                t = new_0_0(t);
                l_49 = t;
                t = q_48;
                {
                  static ATerm p_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          e_49 = ATgetArgument(t, 0);
                        if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_49 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, l_49);
                    return(t);
                  }
                  t = pat_td_1_0(p_3, t);
                }
                m_49 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_49), not_null(j_49), (ATerm) ATmakeAppl(sym_Var_1, l_49))), (ATerm) ATmakeAppl(sym_Build_1, m_49)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,a_50 = NULL,e_50 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      a_50 = ATgetArgument(t, 0);
      e_50 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, a_50, e_50);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          a_50 = ATgetArgument(t, 0);
          t = a_50;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_49 = ATgetFirst((ATermList) t);
              x_49 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_49, (ATerm) ATmakeAppl(sym_LChoices_1, x_49));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_y_26;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              a_50 = ATgetArgument(t, 0);
              t = a_50;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_49 = ATgetFirst((ATermList) t);
                  x_49 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_49, (ATerm) ATmakeAppl(sym_Choices_1, x_49));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_y_26;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  a_50 = ATgetArgument(t, 0);
                  t = a_50;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_49 = ATgetFirst((ATermList) t);
                      x_49 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_49, (ATerm) ATmakeAppl(sym_Seqs_1, x_49));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_a_26;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      a_50 = ATgetArgument(t, 0);
                      e_50 = ATgetArgument(t, 1);
                      y_49 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, e_50, (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, y_49), a_50)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          a_50 = ATgetArgument(t, 0);
                          e_50 = ATgetArgument(t, 1);
                          y_49 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, y_49)), a_50), (ATerm) ATmakeAppl(sym_Build_1, e_50)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              a_50 = ATgetArgument(t, 0);
                              e_50 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_50, (ATerm) ATmakeAppl(sym_Match_1, e_50));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  a_50 = ATgetArgument(t, 0);
                                  e_50 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_50), e_50);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      a_50 = ATgetArgument(t, 0);
                                      e_50 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_50), a_50);
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
  ATerm z_26 = t;
  if((PushChoice() == 0))
    {
      ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,b_3 = NULL;
      q_52 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_52);
      o_52 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_52);
      b_3 = t;
      t = SSLsetAnnotations(b_3, o_52);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_26;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_27;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm x_52 = NULL,d_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_52 = ATgetFirst((ATermList) t);
      d_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_52, d_53);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm f_53 = NULL,h_53 = NULL,i_53 = NULL,k_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if(match_cons(b_27, sym__2))
        {
          f_53 = ATgetArgument(b_27, 0);
          h_53 = ATgetArgument(b_27, 1);
        }
      else
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(match_cons(e_27, sym__2))
          {
            i_53 = ATgetArgument(e_27, 0);
            k_53 = ATgetArgument(e_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_53), f_53), (ATerm) ATinsert(CheckATermList(k_53), h_53));
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_27;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_53 = ATgetFirst((ATermList) t);
      m_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(match_cons(f_27, sym__2))
        {
          v_53 = ATgetArgument(f_27, 0);
          w_53 = ATgetArgument(f_27, 1);
        }
      else
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(match_cons(g_27, sym__2))
          {
            x_53 = ATgetArgument(g_27, 0);
            y_53 = ATgetArgument(g_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_53), v_53), (ATerm) ATinsert(CheckATermList(y_53), w_53));
  return(t);
}
static ATerm z_9 (ATerm o_32, ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,m_52 = NULL,c_3 = NULL;
  t = q_32;
  t = fetch_1_0(q_3, t);
  t = q_32;
  t = genzip_4_0(s_3, w_3, x_3, LiftPrimArg_0_0, t);
  m_52 = t;
  if(match_cons(t, sym__2))
    {
      g_52 = ATgetArgument(t, 0);
      h_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_52);
  f_52 = t;
  t = g_52;
  t = concat_0_0(t);
  i_52 = t;
  t = h_52;
  t = genzip_4_0(z_3, d_4, e_4, _id, t);
  j_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_52, j_52);
  c_3 = t;
  t = SSLsetAnnotations(c_3, f_52);
  if(match_cons(t, sym__2))
    {
      b_52 = ATgetArgument(t, 0);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(match_cons(i_27, sym__2))
          {
            c_52 = ATgetArgument(i_27, 0);
            d_52 = ATgetArgument(i_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, b_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_52), (ATerm) ATmakeAppl(sym_CallT_3, o_32, p_32, d_52)));
  return(t);
}
static ATerm x_54 (ATerm d_54, ATerm t)
{
  ATerm m_54 = NULL;
  t = d_54;
  {
    ATerm k_27 = t;
    if((PushChoice() == 0))
      {
        ATerm n_54 = NULL,o_54 = NULL,r_54 = NULL,g_3 = NULL;
        r_54 = t;
        if(match_cons(t, sym_Var_1))
          {
            o_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_54);
        n_54 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, o_54);
        g_3 = t;
        t = SSLsetAnnotations(g_3, n_54);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_27;
      }
  }
  t = new_0_0(t);
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, m_54), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_54)))), (ATerm) ATmakeAppl(sym_Var_1, m_54)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  u_54 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_54 = ATgetArgument(t, 0);
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_54(u_54, t);
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_a_26, (ATerm) ATmakeAppl(sym_Var_1, v_54)));
          }
      }
    }
  else
    {
      t = x_54(u_54, t);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm o_27 = t;
  if((PushChoice() == 0))
    {
      ATerm f_20 = NULL,g_20 = NULL,m_20 = NULL,j_3 = NULL;
      m_20 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_20);
      f_20 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_20);
      j_3 = t;
      t = SSLsetAnnotations(j_3, f_20);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_27;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_27;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm n_20 = NULL,a_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_20 = ATgetFirst((ATermList) t);
      a_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_20, a_21);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_27 = ATgetArgument(t, 0);
      if(match_cons(q_27, sym__2))
        {
          b_21 = ATgetArgument(q_27, 0);
          c_21 = ATgetArgument(q_27, 1);
        }
      else
        _fail(t);
      {
        ATerm r_27 = ATgetArgument(t, 1);
        if(match_cons(r_27, sym__2))
          {
            d_21 = ATgetArgument(r_27, 0);
            h_21 = ATgetArgument(r_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_21), b_21), (ATerm) ATinsert(CheckATermList(h_21), c_21));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_27;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_21 = ATgetFirst((ATermList) t);
      m_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if(match_cons(v_27, sym__2))
        {
          n_21 = ATgetArgument(v_27, 0);
          o_21 = ATgetArgument(v_27, 1);
        }
      else
        _fail(t);
      {
        ATerm w_27 = ATgetArgument(t, 1);
        if(match_cons(w_27, sym__2))
          {
            p_21 = ATgetArgument(w_27, 0);
            q_21 = ATgetArgument(w_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_21), n_21), (ATerm) ATinsert(CheckATermList(q_21), o_21));
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm y_27 = t;
  if((PushChoice() == 0))
    {
      ATerm l_22 = NULL,o_22 = NULL,p_22 = NULL,l_3 = NULL;
      p_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_22);
      l_22 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_22);
      l_3 = t;
      t = SSLsetAnnotations(l_3, l_22);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_27;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_27;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm q_22 = NULL,t_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_22 = ATgetFirst((ATermList) t);
      t_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_22, t_22);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,z_22 = NULL,a_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if(match_cons(a_28, sym__2))
        {
          u_22 = ATgetArgument(a_28, 0);
          v_22 = ATgetArgument(a_28, 1);
        }
      else
        _fail(t);
      {
        ATerm e_28 = ATgetArgument(t, 1);
        if(match_cons(e_28, sym__2))
          {
            z_22 = ATgetArgument(e_28, 0);
            a_23 = ATgetArgument(e_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_22), u_22), (ATerm) ATinsert(CheckATermList(a_23), v_22));
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_27;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_23 = ATgetFirst((ATermList) t);
      c_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_23, c_23);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      if(match_cons(f_28, sym__2))
        {
          d_23 = ATgetArgument(f_28, 0);
          e_23 = ATgetArgument(f_28, 1);
        }
      else
        _fail(t);
      {
        ATerm g_28 = ATgetArgument(t, 1);
        if(match_cons(g_28, sym__2))
          {
            f_23 = ATgetArgument(g_28, 0);
            g_23 = ATgetArgument(g_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_23), d_23), (ATerm) ATinsert(CheckATermList(g_23), e_23));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
  c_58 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_58 = ATgetArgument(t, 0);
      e_58 = ATgetArgument(t, 1);
      b_58 = ATgetArgument(t, 2);
      {
        ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,w_19 = NULL,x_19 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,k_3 = NULL;
        t = b_58;
        t = fetch_1_0(f_4, t);
        t = b_58;
        t = genzip_4_0(h_4, j_4, l_4, LiftPrimArg_0_0, t);
        e_20 = t;
        if(match_cons(t, sym__2))
          {
            w_19 = ATgetArgument(t, 0);
            x_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_20);
        p_19 = t;
        t = w_19;
        t = concat_0_0(t);
        c_20 = t;
        t = x_19;
        t = genzip_4_0(n_4, s_4, t_4, _id, t);
        d_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_20, d_20);
        k_3 = t;
        t = SSLsetAnnotations(k_3, p_19);
        if(match_cons(t, sym__2))
          {
            m_19 = ATgetArgument(t, 0);
            {
              ATerm j_28 = ATgetArgument(t, 1);
              if(match_cons(j_28, sym__2))
                {
                  n_19 = ATgetArgument(j_28, 0);
                  o_19 = ATgetArgument(j_28, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_19), (ATerm) ATmakeAppl(sym_PrimT_3, d_58, e_58, o_19)));
      }
    }
  else
    {
      ATerm b_22 = NULL,c_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,m_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          d_58 = ATgetArgument(t, 0);
          e_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_58;
      t = fetch_1_0(v_4, t);
      t = e_58;
      t = genzip_4_0(y_4, z_4, a_5, LiftPrimArg_0_0, t);
      k_22 = t;
      if(match_cons(t, sym__2))
        {
          g_22 = ATgetArgument(t, 0);
          h_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_22);
      f_22 = t;
      t = g_22;
      t = concat_0_0(t);
      i_22 = t;
      t = h_22;
      t = genzip_4_0(c_5, d_5, e_5, _id, t);
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_22, j_22);
      m_3 = t;
      t = SSLsetAnnotations(m_3, f_22);
      if(match_cons(t, sym__2))
        {
          b_22 = ATgetArgument(t, 0);
          {
            ATerm k_28 = ATgetArgument(t, 1);
            if(match_cons(k_28, sym__2))
              {
                c_22 = ATgetArgument(k_28, 0);
                e_22 = ATgetArgument(k_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, b_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_22), (ATerm) ATmakeAppl(sym_PrimT_3, d_58, (ATerm)ATempty, e_22)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm t)
{
  static ATerm h_58 (ATerm t)
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_108(t);
        t = h_58(t);
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
        t = f_108(t);
      }
    return(t);
  }
  t = h_58(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL;
  w_58 = t;
  if(match_cons(t, sym_Con_3))
    {
      t_58 = ATgetArgument(t, 0);
      u_58 = ATgetArgument(t, 1);
      v_58 = ATgetArgument(t, 2);
      {
        ATerm i_24 = NULL,r_3 = NULL;
        t = SSLgetAnnotations(w_58);
        i_24 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, t_58, u_58, v_58);
        r_3 = t;
        t = SSLsetAnnotations(r_3, i_24);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = w_58;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm y_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(f_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_28;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm x_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  a_60 = t;
  if(match_cons(t, sym_Con_3))
    {
      b_60 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
      x_59 = ATgetArgument(t, 2);
      {
        ATerm y_24 = NULL,t_3 = NULL;
        t = SSLgetAnnotations(a_60);
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, b_60, c_60, x_59);
        t_3 = t;
        t = SSLsetAnnotations(t_3, y_24);
      }
    }
  else
    {
      ATerm p_25 = NULL,u_3 = NULL;
      if(match_cons(t, sym_App_2))
        {
          b_60 = ATgetArgument(t, 0);
          c_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_60);
      p_25 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, b_60, c_60);
      u_3 = t;
      t = SSLsetAnnotations(u_3, p_25);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm d_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(g_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_29;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,s_60 = NULL,u_60 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      o_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_60;
  if(match_cons(t, sym_StratRule_3))
    {
      p_60 = ATgetArgument(t, 0);
      s_60 = ATgetArgument(t, 1);
      u_60 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_60), (ATerm) ATmakeAppl(sym_Where_1, u_60)), p_60));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          p_60 = ATgetArgument(t, 0);
          s_60 = ATgetArgument(t, 1);
          u_60 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_60;
      t = pureterm_0_0(t);
      t = s_60;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, s_60)), (ATerm) ATmakeAppl(sym_Where_1, u_60)), (ATerm) ATmakeAppl(sym_Match_1, p_60)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_103 (ATerm), ATerm t)
{
  static ATerm b_61 (ATerm t)
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_103(t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = SRTS_one(b_61, t);
      }
    return(t);
  }
  t = b_61(t);
  return(t);
}
static ATerm d_10 (ATerm b_28, ATerm c_28, ATerm d_28, ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL;
  t = new_0_0(t);
  g_61 = t;
  t = b_28;
  {
    static ATerm h_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm g_29 = ATgetArgument(t, 0);
          if(match_cons(g_29, sym_Var_1))
            {
              if(((f_61 != NULL) && (f_61 != ATgetArgument(g_29, 0))))
                _fail(ATgetArgument(g_29, 0));
              else
                f_61 = ATgetArgument(g_29, 0);
            }
          else
            _fail(t);
          if(((d_61 != NULL) && (d_61 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_61 = ATgetArgument(t, 1);
          {
            ATerm h_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_61);
      return(t);
    }
    t = oncetd_1_0(h_5, t);
  }
  h_61 = t;
  t = c_28;
  {
    static ATerm j_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm i_29 = ATgetArgument(t, 0);
          if(match_cons(i_29, sym_Var_1))
            {
              if(((f_61 != NULL) && (f_61 != ATgetArgument(i_29, 0))))
                _fail(ATgetArgument(i_29, 0));
              else
                f_61 = ATgetArgument(i_29, 0);
            }
          else
            _fail(t);
          if(((e_61 != NULL) && (e_61 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_61 = ATgetArgument(t, 1);
          {
            ATerm j_29 = ATgetArgument(t, 2);
            if(match_cons(j_29, sym_CallT_3))
              {
                if(((c_61 != NULL) && (c_61 != ATgetArgument(j_29, 0))))
                  _fail(ATgetArgument(j_29, 0));
                else
                  c_61 = ATgetArgument(j_29, 0);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, g_61);
      return(t);
    }
    t = oncetd_1_0(j_5, t);
  }
  i_61 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_61), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, h_61, i_61, (ATerm) ATmakeAppl(sym_Seq_2, d_28, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(c_61), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_61), not_null(e_61), term_a_26))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_61)), (ATerm) ATmakeAppl(sym_Var_1, g_61))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
          y_61 = t;
          if(match_cons(t, sym_SRule_1))
            {
              z_61 = ATgetArgument(t, 0);
              t = z_61;
              if(match_cons(t, sym_Rule_3))
                {
                  v_61 = ATgetArgument(t, 0);
                  w_61 = ATgetArgument(t, 1);
                  x_61 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_61;
              t = d_10(v_61, w_61, x_61, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm z_25 = NULL,c_26 = NULL,y_3 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  z_61 = ATgetArgument(t, 0);
                  a_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_61);
              z_25 = t;
              t = a_62;
              t = desugarRule_0_0(t);
              c_26 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, z_61, c_26);
              y_3 = t;
              t = SSLsetAnnotations(y_3, z_25);
            }
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  static ATerm l_5 (ATerm t)
  {
    t = topdown_1_0(j_102, t);
    return(t);
  }
  t = j_102(t);
  t = SRTS_all(l_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
    }
  t = repeat_2_0(n_5, _id, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
            p_62 = t;
            if(match_cons(t, sym_CallT_3))
              {
                q_62 = ATgetArgument(t, 0);
                r_62 = ATgetArgument(t, 1);
                s_62 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_62;
            t = z_9(q_62, r_62, s_62, t);
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            {
              ATerm y_29 = t;
              int e_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(e_30);
                }
              else
                {
                  t = y_29;
                  {
                    ATerm f_30 = t;
                    int h_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(h_30);
                      }
                    else
                      {
                        t = f_30;
                        {
                          ATerm l_30 = t;
                          int m_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_30 = t;
                              int o_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_62 = NULL,e_63 = NULL,g_63 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      x_62 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_62;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      e_63 = ATgetArgument(t, 0);
                                      t = e_63;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          e_63 = ATgetArgument(t, 0);
                                          g_63 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, e_63, g_63);
                                    }
                                  LocalPopChoice(o_30);
                                }
                              else
                                {
                                  t = n_30;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(m_30);
                            }
                          else
                            {
                              t = l_30;
                              {
                                ATerm p_30 = t;
                                int q_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(q_30);
                                  }
                                else
                                  {
                                    t = p_30;
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
  t = topdown_1_0(m_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL;
  i_64 = t;
  t = SSL_explode_term(i_64);
  if(match_cons(t, sym__2))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_30 = ATgetArgument(t, 1);
        if(((ATgetType(t_30) == AT_LIST) && !(ATisEmpty(t_30))))
          {
            h_64 = ATgetFirst((ATermList) t_30);
            {
              ATerm u_30 = (ATerm) ATgetNext((ATermList) t_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_64;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  j_26 = t;
  t = SSL_explode_term(j_26);
  if(match_cons(t, sym__2))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_30 = ATgetArgument(t, 1);
        if(((ATgetType(x_30) == AT_LIST) && !(ATisEmpty(x_30))))
          {
            ATerm z_30 = ATgetFirst((ATermList) x_30);
            h_26 = (ATerm) ATgetNext((ATermList) x_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_s_22;
  i_26 = t;
  t = SSL_mkterm(i_26, h_26);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm z_63 = NULL,c_64 = NULL;
  static ATerm p_64 (ATerm t)
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
        d_64 = t;
        t = map_1_0(o_5, t);
        t = l_106(t);
        e_64 = t;
        t = d_64;
        t = map_1_0(r_5, t);
        t = p_64(t);
        f_64 = t;
        t = (ATerm) ATinsert(CheckATermList(f_64), e_64);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = map_1_0(u_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = p_64(t);
  c_64 = t;
  t = term_s_22;
  z_63 = t;
  t = SSL_mkterm(z_63, c_64);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm q_64 = NULL;
  q_64 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_64 = NULL,x_64 = NULL,y_64 = NULL;
        t = q_64;
        t = new_0_0(t);
        s_64 = t;
        t = new_0_0(t);
        x_64 = t;
        t = new_0_0(t);
        y_64 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_64), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, q_64), (ATerm) ATmakeAppl(sym_Var_1, x_64))), (ATerm) ATmakeAppl(sym_Var_1, y_64)), (ATerm)ATmakeAppl(sym_VarDec_2, s_64, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_31), term_g_31)), x_64, (ATerm)ATmakeAppl(sym_Var_1, x_64), y_64, (ATerm) ATmakeAppl(sym_Var_1, y_64));
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        {
          ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL;
          t = q_64;
          t = new_0_0(t);
          a_65 = t;
          t = new_0_0(t);
          b_65 = t;
          t = new_0_0(t);
          c_65 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_65), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, q_64), (ATerm) ATmakeAppl(sym_Var_1, b_65))), (ATerm) ATmakeAppl(sym_Var_1, c_65)), (ATerm)ATmakeAppl(sym_VarDec_2, a_65, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_31), term_g_31)), b_65, (ATerm)ATmakeAppl(sym_Var_1, b_65), c_65, (ATerm) ATmakeAppl(sym_Var_1, c_65));
        }
      }
  }
  return(t);
}
static ATerm e_10 (ATerm z_52, ATerm a_53, ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_52, a_53);
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      t = SSL_subtr(z_52, a_53);
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL;
  if(match_cons(t, sym__2))
    {
      d_65 = ATgetArgument(t, 0);
      e_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_65, e_65, (ATerm) ATempty);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm g_65 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm j_31 = ATgetArgument(t, 0);
      if(((ATgetType(j_31) != AT_INT) || (ATgetInt((ATermInt) j_31) != 0)))
        _fail(t);
      {
        ATerm k_31 = ATgetArgument(t, 1);
      }
      g_65 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_65;
  return(t);
}
ATerm copy_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  static ATerm z_5 (ATerm t)
  {
    ATerm h_65 = NULL,k_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL;
    if(match_cons(t, sym__3))
      {
        h_65 = ATgetArgument(t, 0);
        k_65 = ATgetArgument(t, 1);
        s_65 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, h_65, term_o_20);
    t = geq_0_0(t);
    t = term_o_20;
    v_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_65, term_o_20);
    t = e_10(h_65, v_65, t);
    t_65 = t;
    t = k_65;
    t = p_124(t);
    u_65 = t;
    t = (ATerm) ATmakeAppl(sym__3, t_65, k_65, (ATerm) ATinsert(CheckATermList(s_65), u_65));
    return(t);
  }
  t = for_3_0(v_5, y_5, z_5, t);
  return(t);
}
static ATerm f_10 (ATerm x_22, ATerm y_22, ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL;
  t = new_0_0(t);
  w_65 = t;
  t = new_0_0(t);
  x_65 = t;
  t = new_0_0(t);
  y_65 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_65), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_22)), (ATerm) ATmakeAppl(sym_Var_1, x_65))), (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_22)), (ATerm) ATmakeAppl(sym_Var_1, y_65)))), (ATerm)ATmakeAppl(sym_VarDec_2, w_65, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_31), term_g_31)), x_65, (ATerm)ATmakeAppl(sym_Var_1, x_65), y_65, (ATerm) ATmakeAppl(sym_Var_1, y_65));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_66 = ATgetFirst((ATermList) t);
      i_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_66;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_66;
    }
  else
    {
      t = i_66;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm d_71 (ATerm i_67, ATerm o_67, ATerm p_67, ATerm t_67, ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL;
  t = term_o_20;
  o_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_67, term_o_20);
  t = i_11(o_67, o_68, t);
  n_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_68, term_l_31);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_67 = ATgetFirst((ATermList) t);
      a_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_68;
  t = last_0_0(t);
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_68), z_67), a_68);
  t = genzip_4_0(a_6, c_6, e_6, f_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      c_68 = ATgetArgument(t, 0);
      d_68 = ATgetArgument(t, 1);
      e_68 = ATgetArgument(t, 2);
      f_68 = ATgetArgument(t, 3);
      g_68 = ATgetArgument(t, 4);
      h_68 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_68), e_68), a_68);
  t = concat_0_0(t);
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, i_67, term_m_31), d_68, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(m_68), z_67), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_67)), (ATerm) ATmakeAppl(sym_Op_2, i_67, f_68))), (ATerm)ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_67)), (ATerm) ATmakeAppl(sym_Op_2, i_67, h_68))), (ATerm) ATmakeAppl(sym_Seqs_1, c_68)))));
  return(t);
}
static ATerm h_71 (ATerm h_69, ATerm j_69, ATerm k_69, ATerm l_69, ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL;
  t = l_69;
  t = new_0_0(t);
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_69, (ATerm) ATmakeAppl(sym_Var_1, d_70));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      e_70 = ATgetArgument(t, 0);
      f_70 = ATgetArgument(t, 1);
      g_70 = ATgetArgument(t, 2);
      h_70 = ATgetArgument(t, 3);
      i_70 = ATgetArgument(t, 4);
      j_70 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_70, i_70);
  t = conc_0_0(t);
  k_70 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, h_69, term_n_31), f_70, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(k_70), d_70), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_70)), (ATerm) ATmakeAppl(sym_Op_2, h_69, h_70))), (ATerm)ATmakeAppl(sym_Op_2, h_69, j_70), (ATerm) ATmakeAppl(sym_Seqs_1, e_70)))));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      ATerm q_31 = ATgetArgument(t, 1);
      if(((ATgetType(q_31) != AT_LIST) || !(ATisEmpty(q_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,s_68 = NULL,t_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
        {
          p_68 = ATgetFirst((ATermList) r_31);
          q_68 = (ATerm) ATgetNext((ATermList) r_31);
        }
      else
        _fail(t);
      {
        ATerm s_31 = ATgetArgument(t, 1);
        if(((ATgetType(s_31) == AT_LIST) && !(ATisEmpty(s_31))))
          {
            s_68 = ATgetFirst((ATermList) s_31);
            t_68 = (ATerm) ATgetNext((ATermList) s_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_68, s_68), (ATerm) ATmakeAppl(sym__2, q_68, t_68));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL;
  if(match_cons(t, sym__2))
    {
      u_68 = ATgetArgument(t, 0);
      v_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_68), u_68);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL;
  if(match_cons(t, sym__2))
    {
      b_69 = ATgetArgument(t, 0);
      c_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(b_69, c_69, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  u_70 = t;
  if(match_cons(t, sym__3))
    {
      v_70 = ATgetArgument(t, 0);
      w_70 = ATgetArgument(t, 1);
      x_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_70;
  if(match_string(t, "T"))
    {
      t = x_70;
      if(match_cons(t, sym__2))
        {
          y_70 = ATgetArgument(t, 0);
          z_70 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_70;
      if(match_int(t, 0))
        {
          ATerm t_31 = t;
          int u_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_71(v_70, y_70, z_70, u_70, t);
              LocalPopChoice(u_31);
            }
          else
            {
              t = t_31;
              {
                ATerm b_71 = NULL;
                t = u_70;
                t = new_0_0(t);
                b_71 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, v_70, term_m_31), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_71), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_71)), (ATerm) ATmakeAppl(sym_Op_2, v_70, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_71)), (ATerm) ATmakeAppl(sym_Op_2, v_70, (ATerm) ATempty))), term_a_26))));
              }
            }
        }
      else
        {
          t = d_71(v_70, y_70, z_70, u_70, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = x_70;
      if(match_cons(t, sym__2))
        {
          y_70 = ATgetArgument(t, 0);
          z_70 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_71(v_70, y_70, z_70, u_70, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm t_10 = NULL;
  static ATerm g_6 (ATerm t)
  {
    t = o_114(t);
    if(((t_10 != NULL) && (t_10 != t)))
      _fail(t);
    else
      t_10 = t;
    return(t);
  }
  t = fetch_1_0(g_6, t);
  t = not_null(t_10);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm u_10 = NULL,w_10 = NULL,t_11 = NULL;
  t = term_z_17;
  w_10 = t;
  t = (ATerm) ATinsert(ATempty, term_w_31);
  t_11 = t;
  t = SSL_printnl(w_10, t_11);
  t = term_o_20;
  u_10 = t;
  t = SSL_exit(u_10);
  t = (ATerm) ATinsert(ATempty, term_w_31);
  return(t);
}
ATerm debug_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  u_11 = t;
  t = r_109(t);
  w_11 = t;
  t = term_z_17;
  x_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_11), w_11);
  y_11 = t;
  t = SSL_printnl(x_11, y_11);
  t = u_11;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_x_31;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  ATerm y_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm b_32 = ATgetArgument(t, 0);
          w_9 = ATgetArgument(t, 1);
          x_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(a_32);
      t = x_9;
      t = foldr_3_0(r_6, t_6, u_6, t);
      t = w_9;
      t = foldr_3_0(v_6, w_6, x_6, t);
    }
  else
    {
      t = y_31;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm d_32 = ATgetArgument(t, 0);
          w_9 = ATgetArgument(t, 1);
          x_9 = ATgetArgument(t, 2);
          {
            ATerm e_32 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_9;
      t = foldr_3_0(a_7, c_7, p_7, t);
      t = w_9;
      t = foldr_3_0(q_7, r_7, s_7, t);
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL;
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(h_10, i_10, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm k_10 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      k_10 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(k_10, j_11, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm v_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(v_11, z_11, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(a_12, b_12, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm f_32 = ATgetArgument(t, 0);
      ATerm h_32 = ATgetArgument(t, 1);
      ATerm i_32 = ATgetArgument(t, 2);
      ATerm k_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_12 = NULL;
      static ATerm h_6 (ATerm t)
      {
        ATerm i_12 = NULL,j_12 = NULL;
        i_12 = t;
        {
          ATerm n_32 = t;
          int s_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  j_12 = ATgetArgument(t, 0);
                  {
                    ATerm t_32 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm v_32 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(s_32);
              t = j_12;
              if(((h_12 != NULL) && (h_12 != t)))
                _fail(t);
              else
                h_12 = t;
              t = i_12;
            }
          else
            {
              t = n_32;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  j_12 = ATgetArgument(t, 0);
                  {
                    ATerm w_32 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm x_32 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm y_32 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = j_12;
              if(((h_12 != NULL) && (h_12 != t)))
                _fail(t);
              else
                h_12 = t;
              t = i_12;
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
              if(((h_12 != NULL) && (h_12 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_12 = ATgetArgument(t, 0);
              {
                ATerm z_32 = ATgetArgument(t, 1);
              }
              {
                ATerm a_33 = ATgetArgument(t, 2);
              }
              {
                ATerm b_33 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_6, t);
      }
      t = not_null(h_12);
      t = debug_1_0(p_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm s_14 = NULL;
        s_14 = t;
        t = map_1_0(q_6, t);
        t = s_14;
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(v_7, t);
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              {
                ATerm d_12 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_12 = ATgetFirst((ATermList) t);
                    {
                      ATerm e_33 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = d_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,l_12 = NULL;
  v_14 = t;
  t = SSL_explode_term(v_14);
  if(match_cons(t, sym__2))
    {
      ATerm f_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_33 = ATgetArgument(t, 1);
        if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
          {
            w_14 = ATgetFirst((ATermList) g_33);
            {
              ATerm k_33 = (ATerm) ATgetNext((ATermList) g_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_14);
  if(match_cons(t, sym__2))
    {
      ATerm o_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_33 = ATgetArgument(t, 1);
        if(((ATgetType(r_33) == AT_LIST) && !(ATisEmpty(r_33))))
          {
            ATerm s_33 = ATgetFirst((ATermList) r_33);
            ATerm t_33 = (ATerm) ATgetNext((ATermList) r_33);
            if(((ATgetType(t_33) == AT_LIST) && !(ATisEmpty(t_33))))
              {
                l_12 = ATgetFirst((ATermList) t_33);
                {
                  ATerm u_33 = (ATerm) ATgetNext((ATermList) t_33);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, w_14, l_12);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(w_7, x_7, t);
  return(t);
}
ATerm alltd_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  static ATerm x_14 (ATerm t)
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_104(t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = SRTS_all(x_14, t);
      }
    return(t);
  }
  t = x_14(t);
  return(t);
}
static ATerm r_9 (ATerm k_71, ATerm l_71, ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  z_14 = t;
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_71, l_71);
        t = n_11(k_71, l_71, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_34 = ATgetFirst((ATermList) t);
            y_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_34);
        {
          ATerm a_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, k_71, l_71, y_14);
          t = lookup_table_0_1(k_71, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_11(l_71, y_14, a_15, t);
          t = (ATerm) ATmakeAppl(sym__3, k_71, l_71, y_14);
        }
      }
    else
      {
        t = z_33;
        {
          ATerm c_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, k_71, l_71);
          t = lookup_table_0_1(k_71, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_11(l_71, c_15, t);
          t = (ATerm) ATmakeAppl(sym__2, k_71, l_71);
        }
      }
  }
  t = z_14;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_134 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
  j_15 = t;
  t = n_134(t);
  g_15 = t;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_15 = NULL;
        t = term_e_34;
        n_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_15, term_e_34);
        t = n_11(g_15, n_15, t);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_15 = ATgetFirst((ATermList) t);
      e_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_15, term_e_34, e_15);
  t = lookup_table_0_1(g_15, t);
  m_15 = t;
  t = term_e_34;
  k_15 = t;
  t = m_15;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(k_15, e_15, l_15, t);
  t = f_15;
  {
    static ATerm z_7 (ATerm t)
    {
      ATerm q_15 = NULL;
      q_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_15, q_15);
      t = r_9(g_15, q_15, t);
      return(t);
    }
    t = map_1_0(z_7, t);
  }
  t = j_15;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_105(t);
      t = r_105(t);
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      t = r_105(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_134 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  a_16 = t;
  t = m_134(t);
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_15, term_e_34);
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_16 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_34 = ATgetArgument(t, 0);
            ATerm k_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_34;
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_15, term_e_34);
        t = n_11(z_15, m_16, t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        t = (ATerm) ATempty;
      }
  }
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_15, term_e_34, (ATerm) ATinsert(CheckATermList(b_16), (ATerm) ATempty));
  t = lookup_table_0_1(z_15, t);
  f_16 = t;
  t = term_e_34;
  c_16 = t;
  t = (ATerm) ATinsert(CheckATermList(b_16), (ATerm) ATempty);
  d_16 = t;
  t = f_16;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(c_16, d_16, e_16, t);
  t = a_16;
  return(t);
}
ATerm scope_2_0 (ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm t)
{
  static ATerm a_8 (ATerm t)
  {
    t = end_scope_1_0(o_134, t);
    return(t);
  }
  t = begin_scope_1_0(o_134, t);
  t = restore_always_2_0(p_134, a_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm q_16 = NULL,t_16 = NULL,v_16 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  v_16 = t;
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_17 = ATgetFirst((ATermList) t);
      f_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_17;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
      {
        ATerm l_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_16;
            if((c_17 != t))
              {
                _fail(t);
              }
            t = t_16;
            LocalPopChoice(n_34);
          }
        else
          {
            t = l_34;
            t = (ATerm) ATmakeAppl(sym__2, c_17, f_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, c_17, f_17);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      if(((ATgetType(o_34) != AT_LIST) || !(ATisEmpty(o_34))))
        _fail(t);
      {
        ATerm p_34 = ATgetArgument(t, 1);
        if(((ATgetType(p_34) != AT_LIST) || !(ATisEmpty(p_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
        {
          r_19 = ATgetFirst((ATermList) q_34);
          s_19 = (ATerm) ATgetNext((ATermList) q_34);
        }
      else
        _fail(t);
      {
        ATerm r_34 = ATgetArgument(t, 1);
        if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
          {
            t_19 = ATgetFirst((ATermList) r_34);
            u_19 = (ATerm) ATgetNext((ATermList) r_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_19, t_19), (ATerm) ATmakeAppl(sym__2, s_19, u_19));
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm v_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_19), v_19);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,h_19 = NULL;
  c_19 = t;
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_34 = ATgetArgument(t, 0);
            ATerm w_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(u_34);
        t = c_19;
      }
    else
      {
        t = t_34;
        {
          ATerm q_19 = NULL;
          if(match_cons(t, sym__3))
            {
              d_19 = ATgetArgument(t, 0);
              e_19 = ATgetArgument(t, 1);
              h_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_19, e_19);
          t = genzip_4_0(b_8, c_8, d_8, _id, t);
          q_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_19, h_19);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  static ATerm h_8 (ATerm t)
  {
    ATerm p_12 = NULL;
    t = s_101(t);
    p_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_12, not_null(b_20));
    t = lookup_0_0(t);
    t = t_101(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((b_20 != NULL) && (b_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_20 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_20;
  t = alltd_1_0(h_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm k_20 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      k_20 = ATgetArgument(t, 0);
      {
        ATerm y_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_20;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm l_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_20;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_z_34;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      if(((ATgetType(a_35) != AT_LIST) || !(ATisEmpty(a_35))))
        _fail(t);
      {
        ATerm b_35 = ATgetArgument(t, 1);
        if(((ATgetType(b_35) != AT_LIST) || !(ATisEmpty(b_35))))
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
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_35 = ATgetArgument(t, 0);
      if(((ATgetType(d_35) == AT_LIST) && !(ATisEmpty(d_35))))
        {
          p_20 = ATgetFirst((ATermList) d_35);
          q_20 = (ATerm) ATgetNext((ATermList) d_35);
        }
      else
        _fail(t);
      {
        ATerm e_35 = ATgetArgument(t, 1);
        if(((ATgetType(e_35) == AT_LIST) && !(ATisEmpty(e_35))))
          {
            r_20 = ATgetFirst((ATermList) e_35);
            s_20 = (ATerm) ATgetNext((ATermList) e_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_20, r_20), (ATerm) ATmakeAppl(sym__2, q_20, s_20));
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      t_20 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_20), t_20);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      if(match_cons(f_35, sym_VarDec_2))
        {
          v_20 = ATgetArgument(f_35, 0);
          {
            ATerm g_35 = ATgetArgument(f_35, 1);
          }
        }
      else
        _fail(t);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, v_20);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_35, w_20);
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, v_20), (ATerm) ATmakeAppl(sym_Defined_2, term_j_35, w_20));
  t = v_10(x_8, y_20, z_20, t);
  t = x_20;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_z_34;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,d_13 = NULL;
  e_21 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_z_34;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_34, e_21);
  t = x_10(d_13, e_21, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_35) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_21;
  return(t);
}
static ATerm v_9 (ATerm j_25, ATerm k_25, ATerm o_25, ATerm l_25, ATerm n_25, ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  t = l_25;
  t = map_1_0(i_8, t);
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_20, k_25, n_25);
  t = substitute_2_0(j_8, _id, t);
  i_20 = t;
  {
    static ATerm p_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, o_25, j_25);
      t = genzip_4_0(q_8, s_8, u_8, w_8, t);
      t = i_20;
      t = alltd_1_0(y_8, t);
      if(((j_20 != NULL) && (j_20 != t)))
        _fail(t);
      else
        j_20 = t;
      return(t);
    }
    t = scope_2_0(m_8, p_8, t);
  }
  t = not_null(j_20);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,o_23 = NULL,a_4 = NULL;
  o_23 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_23);
  j_23 = t;
  t = k_23;
  t = new_0_0(t);
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_23, l_23);
  a_4 = t;
  t = SSLsetAnnotations(a_4, j_23);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,y_23 = NULL,c_4 = NULL;
  y_23 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_23);
  s_23 = t;
  t = t_23;
  t = new_0_0(t);
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_23, u_23);
  c_4 = t;
  t = SSLsetAnnotations(c_4, s_23);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm z_23 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_23 = ATgetArgument(t, 0);
      {
        ATerm m_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, z_23);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm a_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_24 = ATgetArgument(t, 0);
      {
        ATerm n_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, a_24);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm g_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,d_22 = NULL,m_22 = NULL,n_22 = NULL,r_22 = NULL,w_22 = NULL;
  m_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_35 = ATgetFirst((ATermList) t);
      if(match_cons(o_35, sym_SDefT_4))
        {
          g_21 = ATgetArgument(o_35, 0);
          i_21 = ATgetArgument(o_35, 1);
          j_21 = ATgetArgument(o_35, 2);
          {
            ATerm r_35 = ATgetArgument(o_35, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm p_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_21;
  t = map_1_0(z_8, t);
  k_21 = t;
  t = j_21;
  t = map_1_0(a_9, t);
  d_22 = t;
  t = k_21;
  t = map_1_0(f_9, t);
  n_22 = t;
  t = d_22;
  t = map_1_0(g_9, t);
  r_22 = t;
  t = m_22;
  {
    static ATerm h_9 (ATerm t)
    {
      ATerm c_24 = NULL,f_24 = NULL,h_24 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm s_35 = ATgetArgument(t, 0);
          c_24 = ATgetArgument(t, 1);
          f_24 = ATgetArgument(t, 2);
          h_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_9(n_22, r_22, c_24, f_24, h_24, t);
      return(t);
    }
    t = map_1_0(h_9, t);
  }
  t = choices_0_0(t);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_21, k_21, d_22, w_22);
  return(t);
}
static ATerm t_73 (ATerm t_71, ATerm u_71, ATerm x_71, ATerm y_71, ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,g_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_71, u_71);
  t = Definitions_0_0(t);
  g_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_72, x_71);
  j_72 = t;
  if(match_cons(t, sym__2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      ATerm v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_72);
  h_72 = t;
  t = g_72;
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_72 = NULL,v_72 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_72 = ATgetFirst((ATermList) t);
            v_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_72;
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        {
          ATerm y_35 = t;
          int z_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(z_35);
            }
          else
            {
              t = y_35;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  i_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_72, x_71);
  g_4 = t;
  t = SSLsetAnnotations(g_4, h_72);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm x_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,g_73 = NULL,h_73 = NULL;
  b_73 = t;
  if(match_cons(t, sym__2))
    {
      c_73 = ATgetArgument(t, 0);
      h_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_73;
  if(match_cons(t, sym__2))
    {
      d_73 = ATgetArgument(t, 0);
      g_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_73;
  if(match_cons(t, sym_Mod_2))
    {
      x_72 = ATgetArgument(t, 0);
      a_73 = ATgetArgument(t, 1);
      {
        ATerm a_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_73 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, x_72, a_73, g_73);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            p_73 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_73, h_73);
            LocalPopChoice(c_36);
          }
        else
          {
            t = a_36;
            t = t_73(d_73, g_73, h_73, b_73, t);
          }
      }
    }
  else
    {
      t = t_73(d_73, g_73, h_73, b_73, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  static ATerm p_75 (ATerm t)
  {
    ATerm k_75 = NULL,n_75 = NULL,o_75 = NULL;
    o_75 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_75 = ATgetFirst((ATermList) t);
        n_75 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_26 = NULL,u_26 = NULL,i_4 = NULL;
          t = SSLgetAnnotations(o_75);
          r_26 = t;
          t = n_75;
          t = p_75(t);
          u_26 = t;
          t = (ATerm) ATinsert(CheckATermList(u_26), k_75);
          i_4 = t;
          t = SSLsetAnnotations(i_4, r_26);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_75;
        t = t_114(t);
      }
    return(t);
  }
  t = p_75(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_73 = NULL,a_74 = NULL,c_74 = NULL;
  x_73 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_73;
    }
  else
    {
      static ATerm i_9 (ATerm t)
      {
        t = not_null(c_74);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_74 = ATgetFirst((ATermList) t);
          if(((c_74 != NULL) && (c_74 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_74;
      t = at_end_1_0(i_9, t);
    }
  return(t);
}
static ATerm k_76 (ATerm u_75, ATerm t)
{
  ATerm w_75 = NULL;
  t = SSL_explode_term(u_75);
  if(match_cons(t, sym__2))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_75;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_76 = NULL,f_76 = NULL,g_76 = NULL;
  g_76 = t;
  if(match_cons(t, sym__2))
    {
      c_76 = ATgetArgument(t, 0);
      f_76 = ATgetArgument(t, 1);
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_9 (ATerm t)
            {
              t = f_76;
              return(t);
            }
            t = c_76;
            t = at_end_1_0(k_9, t);
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            t = k_76(g_76, t);
          }
      }
    }
  else
    {
      t = k_76(g_76, t);
    }
  return(t);
}
static ATerm l_10 (ATerm f_121 (ATerm), ATerm r_63, ATerm q_63, ATerm t)
{
  static ATerm j_77 (ATerm t)
  {
    ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
    c_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_77;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_77 = ATgetFirst((ATermList) t);
            e_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_77;
              {
                static ATerm l_9 (ATerm t)
                {
                  t = q_63;
                  return(t);
                }
                t = y_10(f_121, l_9, d_77, e_77, t);
              }
              t = j_77(t);
              LocalPopChoice(i_36);
            }
          else
            {
              t = h_36;
              {
                ATerm h_27 = NULL,l_27 = NULL,k_4 = NULL;
                t = SSLgetAnnotations(c_77);
                h_27 = t;
                t = e_77;
                t = j_77(t);
                l_27 = t;
                t = (ATerm) ATinsert(CheckATermList(l_27), d_77);
                k_4 = t;
                t = SSLsetAnnotations(k_4, h_27);
              }
            }
        }
      }
    return(t);
  }
  t = r_63;
  t = j_77(t);
  return(t);
}
ATerm genzip_4_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm t)
{
  static ATerm d_78 (ATerm t)
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_106(t);
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        {
          ATerm n_77 = NULL,o_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,m_4 = NULL;
          t = w_106(t);
          c_78 = t;
          if(match_cons(t, sym__2))
            {
              o_77 = ATgetArgument(t, 0);
              z_77 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_78);
          n_77 = t;
          t = o_77;
          t = y_106(t);
          a_78 = t;
          t = z_77;
          t = d_78(t);
          b_78 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_78, b_78);
          m_4 = t;
          t = SSLsetAnnotations(m_4, n_77);
          t = x_106(t);
        }
      }
    return(t);
  }
  t = d_78(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_36 = ATgetArgument(t, 0);
      if(((ATgetType(o_36) != AT_LIST) || !(ATisEmpty(o_36))))
        _fail(t);
      {
        ATerm p_36 = ATgetArgument(t, 1);
        if(((ATgetType(p_36) != AT_LIST) || !(ATisEmpty(p_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL,a_79 = NULL,b_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      if(((ATgetType(q_36) == AT_LIST) && !(ATisEmpty(q_36))))
        {
          x_78 = ATgetFirst((ATermList) q_36);
          y_78 = (ATerm) ATgetNext((ATermList) q_36);
        }
      else
        _fail(t);
      {
        ATerm u_36 = ATgetArgument(t, 1);
        if(((ATgetType(u_36) == AT_LIST) && !(ATisEmpty(u_36))))
          {
            a_79 = ATgetFirst((ATermList) u_36);
            b_79 = (ATerm) ATgetNext((ATermList) u_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_78, a_79), (ATerm) ATmakeAppl(sym__2, y_78, b_79));
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL;
  if(match_cons(t, sym__2))
    {
      e_79 = ATgetArgument(t, 0);
      f_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_79), e_79);
  return(t);
}
static ATerm q_10 (ATerm x_745, ATerm c_746, ATerm b_76, ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL;
  t = SSL_explode_term(c_746);
  if(match_cons(t, sym__2))
    {
      f_78 = ATgetArgument(t, 0);
      h_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_745);
  if(match_cons(t, sym__2))
    {
      if((f_78 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_78, h_78);
  t = genzip_4_0(n_9, o_9, p_9, _id, t);
  i_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_78, b_76);
  t = conc_0_0(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm n_79 = NULL;
  n_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_79);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm o_79 = NULL,q_79 = NULL,s_79 = NULL,t_79 = NULL,w_4 = NULL;
  t_79 = t;
  if(match_cons(t, sym__2))
    {
      q_79 = ATgetArgument(t, 0);
      s_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_79);
  o_79 = t;
  t = s_79;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_79, s_79);
  w_4 = t;
  t = SSLsetAnnotations(w_4, o_79);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL;
  q_80 = t;
  if(match_cons(t, sym__2))
    {
      r_80 = ATgetArgument(t, 0);
      s_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_80 = ATgetFirst((ATermList) t);
      u_80 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_81(r_80, s_80, q_80, t);
            LocalPopChoice(w_36);
          }
        else
          {
            t = v_36;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_80), t_80), u_80);
          }
      }
    }
  else
    {
      t = f_81(r_80, s_80, q_80, t);
    }
  return(t);
}
static ATerm f_81 (ATerm u_79, ATerm v_79, ATerm w_79, ATerm t)
{
  ATerm x_79 = NULL,c_80 = NULL,x_4 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
  t = SSLgetAnnotations(w_79);
  x_79 = t;
  t = v_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_80 = ATgetFirst((ATermList) t);
      k_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_80;
  if(match_cons(t, sym__2))
    {
      i_80 = ATgetArgument(t, 0);
      j_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_80;
        if((i_80 != t))
          {
            _fail(t);
          }
        t = k_80;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        t = v_79;
        t = q_10(i_80, j_80, k_80, t);
      }
  }
  c_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_79, c_80);
  x_4 = t;
  t = SSLsetAnnotations(x_4, x_79);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm e_81 = NULL;
  if(match_cons(t, sym__2))
    {
      e_81 = ATgetArgument(t, 0);
      if((e_81 != ATgetArgument(t, 1)))
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
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_9, t_9, u_9, t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      {
        ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
        z_80 = t;
        if(match_cons(t, sym__2))
          {
            a_81 = ATgetArgument(t, 0);
            b_81 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_80;
        t = l_10(y_9, a_81, b_81, t);
      }
    }
  return(t);
}
static ATerm s_10 (ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm s_77, ATerm p_77, ATerm x_77, ATerm t_77, ATerm q_77, ATerm r_77, ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,p_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_77, t_77);
  t = h_134(t);
  if(match_cons(t, sym__2))
    {
      j_81 = ATgetArgument(t, 0);
      i_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_81;
  t = i_134(t);
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_81, x_77);
  t = diff_0_0(t);
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_81, p_77);
  t = conc_0_0(t);
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_81, x_77);
  t = conc_0_0(t);
  n_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_77, j_81, q_77);
  t = j_134(t);
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__5, m_81, n_81, i_81, p_81, r_77);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm t)
{
  ATerm w_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,c_82 = NULL,d_82 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
        {
          w_81 = ATgetFirst((ATermList) c_37);
          y_81 = (ATerm) ATgetNext((ATermList) c_37);
        }
      else
        _fail(t);
      z_81 = ATgetArgument(t, 1);
      a_82 = ATgetArgument(t, 2);
      c_82 = ATgetArgument(t, 3);
      d_82 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = s_10(h_134, i_134, j_134, w_81, y_81, z_81, a_82, c_82, d_82, t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm t)
{
  static ATerm e_82 (ATerm t)
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_108(t);
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = w_108(t);
        t = e_82(t);
      }
    return(t);
  }
  t = e_82(t);
  return(t);
}
ATerm for_3_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm t)
{
  t = y_108(t);
  t = while_not_2_0(z_108, a_109, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm s_82 = NULL,v_82 = NULL,w_82 = NULL;
  if(match_cons(t, sym__3))
    {
      s_82 = ATgetArgument(t, 0);
      v_82 = ATgetArgument(t, 1);
      w_82 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, s_82, s_82, v_82, w_82, (ATerm) ATempty);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm f_37 = ATgetArgument(t, 0);
      if(((ATgetType(f_37) != AT_LIST) || !(ATisEmpty(f_37))))
        _fail(t);
      {
        ATerm g_37 = ATgetArgument(t, 1);
      }
      {
        ATerm h_37 = ATgetArgument(t, 2);
      }
      z_82 = ATgetArgument(t, 3);
      a_83 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_82, a_83);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, g_10, j_10, t);
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
      {
        ATerm h_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL;
        if(match_cons(t, sym__5))
          {
            h_83 = ATgetArgument(t, 0);
            m_83 = ATgetArgument(t, 1);
            n_83 = ATgetArgument(t, 2);
            o_83 = ATgetArgument(t, 3);
            p_83 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = h_83;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_83 = ATgetFirst((ATermList) t);
            l_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, l_83, m_83, n_83, o_83, (ATerm) ATinsert(CheckATermList(p_83), k_83));
      }
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(m_10, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      e_83 = ATgetArgument(t, 1);
      f_83 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_83), e_83);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  if(match_cons(t, sym__2))
    {
      r_28 = ATgetArgument(t, 0);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_28;
  if(match_cons(t, sym_Mod_2))
    {
      o_28 = ATgetArgument(t, 0);
      p_28 = ATgetArgument(t, 1);
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_28;
            t = j_9(o_28, p_28, s_28, t);
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            t = c_29(r_28, s_28, t);
          }
      }
    }
  else
    {
      t = c_29(r_28, s_28, t);
    }
  return(t);
}
static ATerm c_29 (ATerm h_28, ATerm i_28, ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  t = term_z_17;
  m_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_18), i_28), term_c_18), h_28), term_a_18);
  n_28 = t;
  t = SSL_printnl(m_28, n_28);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_18), i_28), term_c_18), h_28), term_a_18);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL;
  t = for_3_0(a_10, b_10, c_10, t);
  e_85 = t;
  if(match_cons(t, sym__2))
    {
      f_85 = ATgetArgument(t, 0);
      g_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_85;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_85;
    }
  else
    {
      ATerm z_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_85 = ATgetFirst((ATermList) t);
          i_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(i_85), h_85);
      t = map_1_0(o_10, t);
      t = term_o_20;
      z_27 = t;
      t = SSL_exit(z_27);
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm s_86 = NULL,u_86 = NULL;
  if(match_cons(t, sym__2))
    {
      s_86 = ATgetArgument(t, 0);
      u_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(s_86, u_86, t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL;
  if(match_cons(t, sym__2))
    {
      v_86 = ATgetArgument(t, 0);
      w_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(v_86, w_86, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm x_86 = NULL;
  if(match_cons(t, sym__2))
    {
      x_86 = ATgetArgument(t, 0);
      if((x_86 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_r_37;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL,w_85 = NULL,x_85 = NULL,a_86 = NULL,c_86 = NULL,d_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL;
  w_85 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      c_86 = ATgetArgument(t, 0);
      s_85 = ATgetArgument(t, 1);
      t_85 = ATgetArgument(t, 2);
      {
        ATerm t_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  h_86 = t;
  t = s_85;
  t = foldr_3_0(p_10, m_11, p_11, t);
  x_85 = t;
  t = t_85;
  t = foldr_3_0(c_12, e_12, f_12, t);
  a_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_86, (ATerm) ATmakeAppl(sym__2, x_85, a_86));
  {
    ATerm u_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(w_37);
      }
    else
      {
        t = u_37;
        t = (ATerm) ATempty;
      }
  }
  j_86 = t;
  t = c_86;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        t = (ATerm) ATempty;
      }
  }
  i_86 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_85, a_86));
  p_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_85, a_86)), i_86);
  t = z_10(g_12, p_86, i_86, t);
  d_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_86, (ATerm) ATmakeAppl(sym__2, x_85, a_86));
  n_86 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_37, (ATerm) ATinsert(CheckATermList(j_86), w_85));
  o_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_86, (ATerm) ATmakeAppl(sym__2, x_85, a_86)), (ATerm) ATmakeAppl(sym_Defined_2, term_z_37, (ATerm) ATinsert(CheckATermList(j_86), w_85)));
  t = v_10(k_12, n_86, o_86, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_38, d_86);
  k_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_86, (ATerm) ATmakeAppl(sym_Defined_2, term_a_38, d_86));
  t = v_10(m_12, c_86, k_86, t);
  t = h_86;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm p_87 = NULL,q_87 = NULL;
  if(match_cons(t, sym__2))
    {
      p_87 = ATgetArgument(t, 0);
      q_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(p_87, q_87, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  if(match_cons(t, sym__2))
    {
      r_87 = ATgetArgument(t, 0);
      s_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(r_87, s_87, t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm t_87 = NULL;
  if(match_cons(t, sym__2))
    {
      t_87 = ATgetArgument(t, 0);
      if((t_87 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_r_37;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,h_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL;
  a_87 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      d_87 = ATgetArgument(t, 0);
      y_86 = ATgetArgument(t, 1);
      z_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  f_87 = t;
  t = y_86;
  t = foldr_3_0(n_12, o_12, q_12, t);
  b_87 = t;
  t = z_86;
  t = foldr_3_0(r_12, s_12, u_12, t);
  c_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_87, (ATerm) ATmakeAppl(sym__2, b_87, c_87));
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        t = (ATerm) ATempty;
      }
  }
  k_87 = t;
  t = d_87;
  {
    ATerm d_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(e_38);
      }
    else
      {
        t = d_38;
        t = (ATerm) ATempty;
      }
  }
  h_87 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_87, c_87));
  o_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_87, c_87)), h_87);
  t = z_10(y_12, o_87, h_87, t);
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_87, (ATerm) ATmakeAppl(sym__2, b_87, c_87));
  m_87 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_38, (ATerm) ATinsert(CheckATermList(k_87), a_87));
  n_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_87, (ATerm) ATmakeAppl(sym__2, b_87, c_87)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_38, (ATerm) ATinsert(CheckATermList(k_87), a_87)));
  t = v_10(z_12, m_87, n_87, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_38, e_87);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_87, (ATerm) ATmakeAppl(sym_Defined_2, term_g_38, e_87));
  t = v_10(a_13, d_87, l_87, t);
  t = f_87;
  return(t);
}
static ATerm v_10 (ATerm q_134 (ATerm), ATerm q_78, ATerm o_78, ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL;
  x_87 = t;
  t = q_134(t);
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_87, q_78, o_78);
  t = o_11(u_87, q_78, o_78, t);
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_88 = NULL;
        t = term_e_34;
        c_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_87, term_e_34);
        t = n_11(u_87, c_88, t);
        LocalPopChoice(i_38);
      }
    else
      {
        t = h_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_87 = ATgetFirst((ATermList) t);
      w_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_87, term_e_34, (ATerm) ATinsert(CheckATermList(w_87), (ATerm) ATinsert(CheckATermList(v_87), q_78)));
  t = lookup_table_0_1(u_87, t);
  b_88 = t;
  t = term_e_34;
  y_87 = t;
  t = (ATerm) ATinsert(CheckATermList(w_87), (ATerm) ATinsert(CheckATermList(v_87), q_78));
  z_87 = t;
  t = b_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(y_87, z_87, a_88, t);
  t = x_87;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm r_88 = NULL;
  r_88 = t;
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_29 = NULL,v_29 = NULL;
        t = term_s_37;
        v_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_37, r_88);
        t = x_10(v_29, r_88, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_38) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            s_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_29;
        LocalPopChoice(k_38);
      }
    else
      {
        t = j_38;
        {
          ATerm o_38 = t;
          int p_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_30 = NULL,r_30 = NULL;
              t = term_s_37;
              r_30 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_37, r_88);
              t = x_10(r_30, r_88, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_38 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_38) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  k_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_30;
              LocalPopChoice(p_38);
            }
          else
            {
              t = o_38;
              {
                ATerm v_30 = NULL,y_30 = NULL;
                t = term_s_37;
                y_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_37, r_88);
                t = x_10(y_30, r_88, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm r_38 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("h_0", 0, ATtrue)))
                      _fail(t);
                    v_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_30;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm x_10 (ATerm q_71, ATerm r_71, ATerm t)
{
  ATerm v_88 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_71, r_71);
  t = n_11(q_71, r_71, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_88 = ATgetFirst((ATermList) t);
      {
        ATerm s_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_88;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm o_89 = NULL,q_89 = NULL;
  o_89 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      q_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_89;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      ATerm v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_31 = NULL,v_31 = NULL;
        t = term_r_37;
        v_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_37, o_89);
        t = x_10(v_31, o_89, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_38) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            p_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_31;
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        {
          ATerm z_38 = t;
          int a_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_31 = NULL,c_32 = NULL;
              t = term_r_37;
              c_32 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_r_37, o_89);
              t = x_10(c_32, o_89, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm b_39 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_39) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  z_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_31;
              LocalPopChoice(a_39);
            }
          else
            {
              t = z_38;
              {
                ATerm g_32 = NULL,j_32 = NULL;
                t = term_r_37;
                j_32 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_37, o_89);
                t = x_10(j_32, o_89, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm c_39 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_39) != ATmakeSymbol("f_0", 0, ATtrue)))
                      _fail(t);
                    g_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_32;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL;
  if(match_cons(t, sym__2))
    {
      k_90 = ATgetArgument(t, 0);
      l_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(k_90, l_90, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL;
  if(match_cons(t, sym__2))
    {
      m_90 = ATgetArgument(t, 0);
      n_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(m_90, n_90, t);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm o_90 = NULL;
  if(match_cons(t, sym__2))
    {
      o_90 = ATgetArgument(t, 0);
      if((o_90 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = term_r_37;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL;
  y_89 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_90 = ATgetArgument(t, 0);
      w_89 = ATgetArgument(t, 1);
      x_89 = ATgetArgument(t, 2);
      {
        ATerm d_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  d_90 = t;
  t = w_89;
  t = foldr_3_0(b_13, c_13, e_13, t);
  z_89 = t;
  t = x_89;
  t = foldr_3_0(f_13, h_13, i_13, t);
  a_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_90, (ATerm) ATmakeAppl(sym__2, z_89, a_90));
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        t = (ATerm) ATempty;
      }
  }
  f_90 = t;
  t = b_90;
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        t = (ATerm) ATempty;
      }
  }
  e_90 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_89, a_90));
  j_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_89, a_90)), e_90);
  t = z_10(j_13, j_90, e_90, t);
  c_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_90, (ATerm) ATmakeAppl(sym__2, z_89, a_90));
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_39, (ATerm) ATinsert(CheckATermList(f_90), y_89));
  i_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_90, (ATerm) ATmakeAppl(sym__2, z_89, a_90)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_39, (ATerm) ATinsert(CheckATermList(f_90), y_89)));
  t = v_10(k_13, h_90, i_90, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_39, c_90);
  g_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_90, (ATerm) ATmakeAppl(sym_Defined_2, term_j_39, c_90));
  t = v_10(l_13, b_90, g_90, t);
  t = d_90;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL;
  if(match_cons(t, sym__2))
    {
      b_91 = ATgetArgument(t, 0);
      c_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(b_91, c_91, t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL;
  if(match_cons(t, sym__2))
    {
      d_91 = ATgetArgument(t, 0);
      e_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(d_91, e_91, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL;
  if(match_cons(t, sym__2))
    {
      k_91 = ATgetArgument(t, 0);
      l_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(k_91, l_91, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL;
  if(match_cons(t, sym__2))
    {
      m_91 = ATgetArgument(t, 0);
      n_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(m_91, n_91, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL;
  if(match_cons(t, sym__2))
    {
      u_91 = ATgetArgument(t, 0);
      v_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(u_91, v_91, t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL;
  if(match_cons(t, sym__2))
    {
      w_91 = ATgetArgument(t, 0);
      x_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(w_91, x_91, t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  q_90 = t;
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            r_90 = ATgetArgument(t, 0);
            s_90 = ATgetArgument(t, 1);
            t_90 = ATgetArgument(t, 2);
            {
              ATerm m_39 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_39);
        {
          ATerm y_90 = NULL,z_90 = NULL;
          t = s_90;
          t = foldr_3_0(n_13, o_13, p_13, t);
          y_90 = t;
          t = t_90;
          t = foldr_3_0(r_13, s_13, t_13, t);
          z_90 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_90, (ATerm) ATmakeAppl(sym__2, y_90, z_90)));
        }
      }
    else
      {
        t = k_39;
        if(match_cons(t, sym_ExtSDef_3))
          {
            r_90 = ATgetArgument(t, 0);
            s_90 = ATgetArgument(t, 1);
            t_90 = ATgetArgument(t, 2);
            {
              ATerm i_91 = NULL,j_91 = NULL;
              t = s_90;
              t = foldr_3_0(u_13, v_13, w_13, t);
              i_91 = t;
              t = t_90;
              t = foldr_3_0(x_13, y_13, a_14, t);
              j_91 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_90, (ATerm) ATmakeAppl(sym__2, i_91, j_91)));
            }
          }
        else
          {
            ATerm r_91 = NULL,s_91 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                r_90 = ATgetArgument(t, 0);
                s_90 = ATgetArgument(t, 1);
                t_90 = ATgetArgument(t, 2);
                {
                  ATerm n_39 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = s_90;
            t = foldr_3_0(b_14, d_14, e_14, t);
            r_91 = t;
            t = t_90;
            t = foldr_3_0(f_14, g_14, h_14, t);
            s_91 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_90, (ATerm) ATmakeAppl(sym__2, r_91, s_91)));
          }
      }
  }
  return(t);
}
static ATerm y_10 (ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm x_63, ATerm w_63, ATerm t)
{
  t = o_121(t);
  {
    static ATerm i_14 (ATerm t)
    {
      ATerm y_91 = NULL;
      y_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_63, y_91);
      t = n_121(t);
      return(t);
    }
    t = fetch_1_0(i_14, t);
  }
  t = w_63;
  return(t);
}
static ATerm z_10 (ATerm k_121 (ATerm), ATerm t_63, ATerm s_63, ATerm t)
{
  static ATerm o_92 (ATerm t)
  {
    ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
    j_92 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_63;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_92 = ATgetFirst((ATermList) t);
            l_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_39 = t;
          int p_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_92;
              {
                static ATerm j_14 (ATerm t)
                {
                  t = s_63;
                  return(t);
                }
                t = y_10(k_121, j_14, k_92, l_92, t);
              }
              t = o_92(t);
              LocalPopChoice(p_39);
            }
          else
            {
              t = o_39;
              {
                ATerm r_32 = NULL,u_32 = NULL,i_5 = NULL;
                t = SSLgetAnnotations(j_92);
                r_32 = t;
                t = l_92;
                t = o_92(t);
                u_32 = t;
                t = (ATerm) ATinsert(CheckATermList(u_32), k_92);
                i_5 = t;
                t = SSLsetAnnotations(i_5, r_32);
              }
            }
        }
      }
    return(t);
  }
  t = t_63;
  t = o_92(t);
  return(t);
}
ATerm foldr_3_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL;
  r_92 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_92;
      t = b_124(t);
    }
  else
    {
      ATerm w_92 = NULL,x_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_92 = ATgetFirst((ATermList) t);
          t_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_92;
      t = d_124(t);
      w_92 = t;
      t = t_92;
      t = foldr_3_0(b_124, c_124, d_124, t);
      x_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_92, x_92);
      t = c_124(t);
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL;
  if(match_cons(t, sym__2))
    {
      b_93 = ATgetArgument(t, 0);
      c_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(m_14, b_93, c_93, t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm d_93 = NULL;
  if(match_cons(t, sym__2))
    {
      d_93 = ATgetArgument(t, 0);
      if((d_93 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      {
        ATerm s_39 = t;
        int t_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(t_39);
          }
        else
          {
            t = s_39;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL;
  a_93 = t;
  t = foldr_3_0(k_14, l_14, DefinitionName_0_0, t);
  y_92 = t;
  t = a_93;
  t = map_1_0(n_14, t);
  z_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_92, z_92, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t)
{
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_5 = NULL;
  j_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_93 = ATgetFirst((ATermList) t);
      g_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_93);
  e_93 = t;
  t = f_93;
  t = d_88(t);
  h_93 = t;
  t = g_93;
  t = e_88(t);
  i_93 = t;
  t = (ATerm) ATinsert(CheckATermList(i_93), h_93);
  k_5 = t;
  t = SSLsetAnnotations(k_5, e_93);
  return(t);
}
static ATerm a_11 (ATerm g_46, ATerm h_46, ATerm t)
{
  ATerm k_93 = NULL;
  t = SSL_fputc(g_46, h_46);
  k_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_93);
  return(t);
}
static ATerm b_11 (ATerm y_44, ATerm z_44, ATerm t)
{
  ATerm l_93 = NULL;
  t = SSL_write_term_to_stream_text(y_44, z_44);
  l_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_93);
  return(t);
}
static ATerm d_11 (ATerm t_109 (ATerm), ATerm c_320, ATerm e_45, ATerm t)
{
  ATerm m_93 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_320, term_u_39);
  t = h_11(t);
  m_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_93, e_45);
  t = t_109(t);
  t = fclose_0_0(t);
  t = e_45;
  return(t);
}
static ATerm c_11 (ATerm u_44, ATerm v_44, ATerm t)
{
  ATerm n_93 = NULL;
  t = SSL_write_term_to_stream_baf(u_44, v_44);
  n_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_93);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      if(match_cons(v_39, sym_Stream_1))
        {
          u_93 = ATgetArgument(v_39, 0);
        }
      else
        _fail(t);
      v_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(u_93, v_93, t);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_39 = ATgetArgument(t, 0);
      if(match_cons(w_39, sym_Stream_1))
        {
          z_93 = ATgetArgument(w_39, 0);
        }
      else
        _fail(t);
      a_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(z_93, a_94, t);
  w_93 = t;
  t = term_v_24;
  x_93 = t;
  t = w_93;
  if(match_cons(t, sym_Stream_1))
    {
      y_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, w_93);
  t = a_11(x_93, y_93, t);
  return(t);
}
ATerm output_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  ATerm o_93 = NULL,p_93 = NULL;
  t = y_129(t);
  p_93 = t;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_93 = NULL,r_93 = NULL;
        t = term_z_39;
        q_93 = t;
        t = term_a_40;
        r_93 = t;
        t = term_b_40;
        t = n_11(q_93, r_93, t);
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        t = term_c_40;
      }
  }
  o_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_93, p_93);
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_93 = NULL,t_93 = NULL;
        t = term_z_39;
        s_93 = t;
        t = term_f_40;
        t_93 = t;
        t = term_g_40;
        t = n_11(s_93, t_93, t);
        t = (ATerm) ATmakeAppl(sym__2, o_93, p_93);
        LocalPopChoice(e_40);
        if(match_cons(t, sym__2))
          {
            ATerm h_40 = ATgetArgument(t, 0);
            ATerm i_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_11(o_14, o_93, p_93, t);
      }
    else
      {
        t = d_40;
        if(match_cons(t, sym__2))
          {
            ATerm j_40 = ATgetArgument(t, 0);
            ATerm k_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_11(p_14, o_93, p_93, t);
      }
  }
  return(t);
}
static ATerm o_94 (ATerm i_94, ATerm t)
{
  t = SSL_fclose(i_94);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL;
  m_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_94 = ATgetArgument(t, 0);
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_94);
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            t = o_94(m_94, t);
          }
      }
    }
  else
    {
      t = o_94(m_94, t);
    }
  return(t);
}
static ATerm e_11 (ATerm a_45, ATerm t)
{
  t = SSL_read_term_from_stream(a_45);
  return(t);
}
static ATerm f_11 (ATerm b_63, ATerm c_63, ATerm t)
{
  t = SSL_strcat(b_63, c_63);
  return(t);
}
static ATerm g_11 (ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm p_94 = NULL;
  t = SSL_fopen(i_46, j_46);
  p_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_94);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_94 = NULL;
  t = SSL_stdin_stream();
  q_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_94);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_94 = NULL;
  t = SSL_stdout_stream();
  r_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_94);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_94 = NULL;
  t = SSL_stderr_stream();
  s_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_94);
  return(t);
}
static ATerm z_95 (ATerm y_94, ATerm t)
{
  ATerm z_94 = NULL;
  t = SSL_explode_term(y_94);
  if(match_cons(t, sym__2))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_40) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_40 = ATgetArgument(t, 1);
        if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
          {
            z_94 = ATgetFirst((ATermList) o_40);
            {
              ATerm p_40 = (ATerm) ATgetNext((ATermList) o_40);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_94;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_94;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_94;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_94;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_96 (ATerm c_95, ATerm d_95, ATerm e_95, ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,k_95 = NULL,w_5 = NULL;
  t = SSLgetAnnotations(e_95);
  h_95 = t;
  t = c_95;
  if(match_cons(t, sym_Path_1))
    {
      k_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_95, d_95);
  w_5 = t;
  t = SSLsetAnnotations(w_5, h_95);
  if(match_cons(t, sym__2))
    {
      f_95 = ATgetArgument(t, 0);
      g_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(f_95, g_95, t);
  return(t);
}
static ATerm b_96 (ATerm m_95, ATerm n_95, ATerm o_95, ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL,u_95 = NULL,x_5 = NULL;
  t = SSLgetAnnotations(o_95);
  r_95 = t;
  t = SSL_is_string(m_95);
  u_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_95, n_95);
  x_5 = t;
  t = SSLsetAnnotations(x_5, r_95);
  if(match_cons(t, sym__2))
    {
      p_95 = ATgetArgument(t, 0);
      q_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(p_95, q_95, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL;
  w_95 = t;
  if(match_cons(t, sym__2))
    {
      x_95 = ATgetArgument(t, 0);
      y_95 = ATgetArgument(t, 1);
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_95(w_95, t);
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
            {
              ATerm u_40 = t;
              int v_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_96(x_95, y_95, w_95, t);
                  LocalPopChoice(v_40);
                }
              else
                {
                  t = u_40;
                  t = b_96(x_95, y_95, w_95, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_95(w_95, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL,k_96 = NULL;
  k_96 = t;
  {
    ATerm w_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_96, term_b_41);
        t = h_11(t);
        LocalPopChoice(a_41);
      }
    else
      {
        t = w_40;
        {
          ATerm h_33 = NULL,i_33 = NULL;
          t = term_c_41;
          i_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_41, k_96);
          t = f_11(i_33, k_96, t);
          h_33 = t;
          t = SSL_perror(h_33);
          _fail(t);
        }
      }
  }
  e_96 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(f_96, t);
  d_96 = t;
  t = e_96;
  t = fclose_0_0(t);
  t = d_96;
  return(t);
}
ATerm input_1_0 (ATerm z_129 (ATerm), ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_96 = NULL,o_96 = NULL;
      t = term_z_39;
      n_96 = t;
      t = term_k_41;
      o_96 = t;
      t = term_m_41;
      t = n_11(n_96, o_96, t);
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      t = term_n_41;
    }
  t = ReadFromFile_0_0(t);
  t = z_129(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL;
  p_96 = t;
  t = term_l_31;
  t = whoami_0_0(t);
  q_96 = t;
  t = term_z_17;
  s_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_41), q_96), term_o_41);
  t_96 = t;
  t = SSL_printnl(s_96, t_96);
  t = term_o_20;
  r_96 = t;
  t = SSL_exit(r_96);
  t = p_96;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm v_96 = NULL;
  v_96 = t;
  if(match_string(t, "-k"))
    {
      t = v_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_96;
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL;
  w_96 = t;
  t = SSL_string_to_int(w_96);
  x_96 = t;
  t = term_r_41;
  y_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_41, x_96);
  t = q_11(y_96, x_96, t);
  t = w_96;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_s_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_14, r_14, t_14, t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm a_97 = NULL;
  a_97 = t;
  if(match_string(t, "-S"))
    {
      t = a_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_97;
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL;
  t = term_t_41;
  b_97 = t;
  t = term_z_19;
  c_97 = t;
  t = term_v_41;
  t = q_11(b_97, c_97, t);
  t = term_w_41;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_x_41;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL;
  d_97 = t;
  t = SSL_string_to_int(d_97);
  e_97 = t;
  t = term_t_41;
  f_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_41, e_97);
  t = q_11(f_97, e_97, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_97);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_y_41;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm g_97 = NULL,h_97 = NULL;
  t = term_z_41;
  g_97 = t;
  t = term_l_31;
  h_97 = t;
  t = term_b_42;
  t = q_11(g_97, h_97, t);
  t = term_c_42;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_h_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_14, b_15, d_15, t);
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
            t = ArgOption_3_0(i_15, o_15, r_15, t);
            LocalPopChoice(n_42);
          }
        else
          {
            t = l_42;
            t = Option_3_0(s_15, t_15, u_15, t);
          }
      }
    }
  return(t);
}
static ATerm q_11 (ATerm b_50, ATerm c_50, ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL;
  t = term_z_39;
  i_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_39, b_50, c_50);
  t = lookup_table_0_1(i_97, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(b_50, c_50, j_97, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_39, b_50, c_50);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_97 = NULL,o_97 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_97 = NULL,q_97 = NULL,r_97 = NULL;
      t = term_l_31;
      t = e_0(t);
      p_97 = t;
      t = term_o_42;
      q_97 = t;
      t = term_r_42;
      r_97 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_42, term_r_42, p_97);
      t = o_11(q_97, r_97, p_97, t);
      _fail(t);
    }
  else
    {
      ATerm u_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_97 = ATgetFirst((ATermList) t);
          o_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_97;
      t = c_0(t);
      t = term_l_31;
      t = d_0(t);
      u_97 = t;
      t = (ATerm) ATinsert(CheckATermList(o_97), u_97);
    }
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm w_97 = NULL;
  w_97 = t;
  if(match_string(t, "-o"))
    {
      t = w_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_97;
    }
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL;
  x_97 = t;
  t = term_a_40;
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_40, x_97);
  t = q_11(y_97, x_97, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_97);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = term_u_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_15, w_15, x_15, t);
  return(t);
}
static ATerm o_11 (ATerm f_71, ATerm g_71, ATerm e_71, ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL;
  a_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_71, g_71);
  {
    ATerm w_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_43 = ATgetArgument(t, 0);
            ATerm b_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_71, g_71);
        t = n_11(f_71, g_71, t);
        LocalPopChoice(z_42);
      }
    else
      {
        t = w_42;
        t = (ATerm) ATempty;
      }
  }
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_71, g_71, (ATerm) ATinsert(CheckATermList(b_98), e_71));
  t = lookup_table_0_1(f_71, t);
  e_98 = t;
  t = (ATerm) ATinsert(CheckATermList(b_98), e_71);
  c_98 = t;
  t = e_98;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(g_71, c_98, d_98, t);
  t = a_98;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL;
      t = term_l_31;
      t = n_0(t);
      p_98 = t;
      t = term_o_42;
      q_98 = t;
      t = term_r_42;
      r_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_42, term_r_42, p_98);
      t = o_11(q_98, r_98, p_98, t);
      _fail(t);
    }
  else
    {
      ATerm v_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_98 = ATgetFirst((ATermList) t);
          m_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_98;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_98 = ATgetFirst((ATermList) t);
          o_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_98;
      t = k_0(t);
      t = n_98;
      t = l_0(t);
      v_98 = t;
      t = (ATerm) ATinsert(CheckATermList(o_98), v_98);
    }
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm x_98 = NULL;
  x_98 = t;
  if(match_string(t, "-i"))
    {
      t = x_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_98;
    }
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL;
  y_98 = t;
  t = term_k_41;
  z_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_41, y_98);
  t = q_11(z_98, y_98, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_98);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_c_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_16, h_16, i_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_31;
  t = whoami_0_0(t);
  a_99 = t;
  t = term_z_17;
  c_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_43), a_99);
  d_99 = t;
  t = SSL_printnl(c_99, d_99);
  t = term_o_20;
  b_99 = t;
  t = SSL_exit(b_99);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL;
  t = term_z_39;
  e_99 = t;
  t = term_e_43;
  f_99 = t;
  t = term_j_43;
  t = n_11(e_99, f_99, t);
  return(t);
}
static ATerm i_11 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm k_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_52, u_52);
      LocalPopChoice(l_43);
    }
  else
    {
      t = k_43;
      t = SSL_addr(t_52, u_52);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL;
  h_99 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_99;
      t = z_123(t);
    }
  else
    {
      ATerm m_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_99 = ATgetFirst((ATermList) t);
          j_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_99;
      t = foldr_2_0(z_123, a_124, t);
      m_99 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_99, m_99);
      t = a_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  if(match_cons(t, sym__2))
    {
      x_33 = ATgetArgument(t, 0);
      y_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(x_33, y_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_99 = NULL,m_33 = NULL,n_33 = NULL;
  t = times_0_0(t);
  n_33 = t;
  t = SSL_explode_term(n_33);
  if(match_cons(t, sym__2))
    {
      ATerm m_43 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_33;
  t = foldr_2_0(j_16, l_16, t);
  p_99 = t;
  t = SSL_TicksToSeconds(p_99);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL;
  a_100 = t;
  if(match_cons(t, sym__2))
    {
      b_100 = ATgetArgument(t, 0);
      c_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_100;
        if((b_100 != t))
          {
            _fail(t);
          }
        t = a_100;
        LocalPopChoice(o_43);
      }
    else
      {
        t = n_43;
        t = (ATerm) ATmakeAppl(sym__2, b_100, c_100);
        {
          ATerm p_43 = t;
          int q_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_100, c_100);
              LocalPopChoice(q_43);
            }
          else
            {
              t = p_43;
              t = SSL_gtr(b_100, c_100);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_100, c_100);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_111 (ATerm), ATerm t)
{
  ATerm g_100 = NULL;
  g_100 = t;
  {
    ATerm r_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL;
        t = term_z_39;
        j_100 = t;
        t = term_t_41;
        k_100 = t;
        t = term_t_43;
        t = n_11(j_100, k_100, t);
        i_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_100, term_o_20);
        t = geq_0_0(t);
        t = g_100;
        t = j_111(t);
        LocalPopChoice(s_43);
      }
    else
      {
        t = r_43;
        t = g_100;
      }
  }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,r_100 = NULL,s_100 = NULL;
  t = run_time_0_0(t);
  m_100 = t;
  t = term_l_31;
  t = whoami_0_0(t);
  n_100 = t;
  t = term_z_17;
  r_100 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_43), m_100), term_u_43), n_100);
  s_100 = t;
  t = SSL_printnl(r_100, s_100);
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_43), m_100), term_u_43), n_100));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_100 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_19;
  t_100 = t;
  t = SSL_exit(t_100);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL;
  e_101 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_101;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_101 = ATgetArgument(t, 0);
          {
            ATerm m_34 = NULL,d_6 = NULL;
            t = SSLgetAnnotations(e_101);
            m_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_101);
            d_6 = t;
            t = SSLsetAnnotations(d_6, m_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_101;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_129 (ATerm), ATerm t)
{
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_100 = NULL,x_100 = NULL;
      t = term_z_39;
      w_100 = t;
      t = term_y_43;
      x_100 = t;
      t = term_z_43;
      t = n_11(w_100, x_100, t);
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
      t = fetch_1_0(o_16, t);
    }
  t = p_129(t);
  return(t);
}
static ATerm r_11 (ATerm m_74, ATerm n_74, ATerm o_74, ATerm t)
{
  ATerm g_101 = NULL;
  t = SSL_hashtable_put(o_74, m_74, n_74);
  g_101 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_101);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_72, ATerm t)
{
  ATerm u_101 = NULL;
  t = table_hashtable_0_0(t);
  u_101 = t;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_34 = NULL;
        t = u_101;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_11(r_72, s_34, t);
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        {
          ATerm x_34 = NULL;
          t = r_72;
          t = table_create_0_0(t);
          t = u_101;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_11(r_72, x_34, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_74, ATerm v_74, ATerm t)
{
  ATerm x_101 = NULL;
  t = SSL_hashtable_create(u_74, v_74);
  x_101 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_101);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_101 = NULL,z_101 = NULL,a_102 = NULL,c_102 = NULL,d_102 = NULL;
  y_101 = t;
  t = term_c_44;
  c_102 = t;
  t = term_d_44;
  d_102 = t;
  t = y_101;
  t = new_hashtable_0_2(c_102, d_102, t);
  z_101 = t;
  t = y_101;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(y_101, z_101, a_102, t);
  t = y_101;
  return(t);
}
static ATerm k_11 (ATerm r_74, ATerm s_74, ATerm t)
{
  ATerm e_102 = NULL;
  t = SSL_hashtable_remove(s_74, r_74);
  e_102 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_102);
  return(t);
}
static ATerm l_11 (ATerm w_74, ATerm t)
{
  ATerm f_102 = NULL;
  t = SSL_hashtable_destroy(w_74);
  f_102 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_102);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_102 = NULL;
  t = SSL_table_hashtable();
  g_102 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_102);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_102 = NULL,l_102 = NULL,m_102 = NULL,n_102 = NULL;
  k_102 = t;
  t = table_hashtable_0_0(t);
  l_102 = t;
  t = lookup_table_0_1(k_102, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_11(n_102, t);
  t = l_102;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_11(k_102, m_102, t);
  t = k_102;
  return(t);
}
ATerm map_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  static ATerm c_103 (ATerm t)
  {
    ATerm z_102 = NULL,a_103 = NULL,b_103 = NULL;
    z_102 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_102;
      }
    else
      {
        ATerm c_35 = NULL,h_35 = NULL,i_35 = NULL,i_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_103 = ATgetFirst((ATermList) t);
            b_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_102);
        c_35 = t;
        t = a_103;
        t = c_114(t);
        h_35 = t;
        t = b_103;
        t = c_103(t);
        i_35 = t;
        t = (ATerm) ATinsert(CheckATermList(i_35), h_35);
        i_6 = t;
        t = SSLsetAnnotations(i_6, c_35);
      }
    return(t);
  }
  t = c_103(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm f_103 = NULL,g_103 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_103 = ATgetFirst((ATermList) t);
      g_103 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_103 = NULL,l_103 = NULL;
        static ATerm p_16 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_103)), not_null(l_103));
          return(t);
        }
        t = g_103;
        t = i_0(t);
        if(((k_103 != NULL) && (k_103 != t)))
          _fail(t);
        else
          k_103 = t;
        t = f_103;
        t = g_0(t);
        if(((l_103 != NULL) && (l_103 != t)))
          _fail(t);
        else
          l_103 = t;
        t = g_103;
        t = reverse_acc_2_0(g_0, p_16, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_31;
      t = i_0(t);
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL,v_103 = NULL,e_8 = NULL;
  v_103 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_103);
  t_103 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_103);
  e_8 = t;
  t = SSLsetAnnotations(e_8, t_103);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm x_103 = NULL;
  x_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_103), term_e_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_103 = NULL,q_103 = NULL;
  ATerm f_44 = t;
  int g_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_103 = NULL,s_103 = NULL;
      t = term_z_39;
      r_103 = t;
      t = term_e_43;
      s_103 = t;
      t = term_j_43;
      t = n_11(r_103, s_103, t);
      LocalPopChoice(g_44);
    }
  else
    {
      t = f_44;
      t = fetch_1_0(r_16, t);
    }
  t = term_h_44;
  t = echo_0_0(t);
  t = term_o_42;
  p_103 = t;
  t = term_r_42;
  q_103 = t;
  t = term_i_44;
  t = n_11(p_103, q_103, t);
  t = reverse_acc_2_0(_id, s_16, t);
  t = map_1_0(u_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  static ATerm w_104 (ATerm t)
  {
    ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL;
    t_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_104 = ATgetFirst((ATermList) t);
        v_104 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_44 = t;
      int k_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_35 = NULL,t_35 = NULL,k_8 = NULL;
          t = SSLgetAnnotations(t_104);
          q_35 = t;
          t = u_104;
          t = m_114(t);
          t_35 = t;
          t = (ATerm) ATinsert(CheckATermList(v_104), t_35);
          k_8 = t;
          t = SSLsetAnnotations(k_8, q_35);
          LocalPopChoice(k_44);
        }
      else
        {
          t = j_44;
          {
            ATerm b_36 = NULL,e_36 = NULL,n_8 = NULL;
            t = SSLgetAnnotations(t_104);
            b_36 = t;
            t = v_104;
            t = w_104(t);
            e_36 = t;
            t = (ATerm) ATinsert(CheckATermList(e_36), u_104);
            n_8 = t;
            t = SSLsetAnnotations(n_8, b_36);
          }
        }
    }
    return(t);
  }
  t = w_104(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL;
  a_105 = t;
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_105;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_44 = ATgetFirst((ATermList) t);
                ATerm o_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_105;
          }
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = (ATerm) ATinsert(ATempty, a_105);
      }
  }
  b_105 = t;
  t = term_c_40;
  c_105 = t;
  t = SSL_printnl(c_105, b_105);
  t = a_105;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL;
  t = term_z_39;
  g_105 = t;
  t = term_e_43;
  h_105 = t;
  t = term_j_43;
  t = n_11(g_105, h_105, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_11 (ATerm p_74, ATerm q_74, ATerm t)
{
  t = SSL_hashtable_get(q_74, p_74);
  return(t);
}
static ATerm n_11 (ATerm y_72, ATerm z_72, ATerm t)
{
  ATerm i_105 = NULL;
  t = lookup_table_0_1(y_72, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(z_72, i_105, t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm k_105 = NULL,l_105 = NULL;
  t = term_p_44;
  k_105 = t;
  t = term_l_31;
  l_105 = t;
  t = term_q_44;
  t = q_11(k_105, l_105, t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL,p_105 = NULL;
  t = term_p_44;
  o_105 = t;
  t = term_l_31;
  p_105 = t;
  t = term_q_44;
  t = q_11(o_105, p_105, t);
  t = term_s_44;
  m_105 = t;
  t = term_l_31;
  n_105 = t;
  t = term_t_44;
  t = q_11(m_105, n_105, t);
  t = term_w_44;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_x_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_16, x_16, z_16, t);
      LocalPopChoice(c_45);
    }
  else
    {
      t = b_45;
      t = Option_3_0(a_17, b_17, h_17, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL,b_106 = NULL,d_106 = NULL,e_106 = NULL,b_9 = NULL;
  y_105 = t;
  {
    ATerm d_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_45;
        t = s_131(t);
        LocalPopChoice(f_45);
      }
    else
      {
        t = d_45;
      }
  }
  t = y_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_106 = ATgetFirst((ATermList) t);
      b_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_105);
  z_105 = t;
  t = term_e_43;
  e_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_43, a_106);
  t = q_11(e_106, a_106, t);
  t = b_106;
  {
    static ATerm q_106 (ATerm t)
    {
      ATerm h_45 = t;
      int i_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_45 = t;
          int k_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_106 = NULL;
              h_106 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_106;
              LocalPopChoice(k_45);
            }
          else
            {
              t = j_45;
              t = s_131(t);
              t = Cons_2_0(_id, q_106, t);
            }
          LocalPopChoice(i_45);
        }
      else
        {
          t = h_45;
          {
            ATerm k_106 = NULL,n_106 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_106 = ATgetFirst((ATermList) t);
                n_106 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_106), (ATerm) ATmakeAppl(sym_Undefined_1, k_106));
          }
        }
      return(t);
    }
    t = q_106(t);
  }
  d_106 = t;
  t = (ATerm) ATinsert(CheckATermList(d_106), (ATerm) ATmakeAppl(sym_Program_1, a_106));
  b_9 = t;
  t = SSLsetAnnotations(b_9, z_105);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm i_107 = NULL;
  i_107 = t;
  if(match_string(t, "--help"))
    {
      t = i_107;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_107;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_107;
        }
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL;
  t = term_y_43;
  j_107 = t;
  t = term_l_31;
  k_107 = t;
  t = term_l_45;
  t = q_11(j_107, k_107, t);
  t = term_m_45;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_131 (ATerm), ATerm t)
{
  ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL;
  c_107 = t;
  t = term_o_42;
  d_107 = t;
  t = term_o_45;
  t = lookup_table_0_1(d_107, t);
  h_107 = t;
  t = term_r_42;
  e_107 = t;
  t = (ATerm) ATempty;
  f_107 = t;
  t = h_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(e_107, f_107, g_107, t);
  t = c_107;
  {
    static ATerm i_17 (ATerm t)
    {
      ATerm p_45 = t;
      int q_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_131(t);
          LocalPopChoice(q_45);
        }
      else
        {
          t = p_45;
          {
            ATerm r_45 = t;
            int s_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_17, k_17, l_17, t);
                LocalPopChoice(s_45);
              }
            else
              {
                t = r_45;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_17, t);
  }
  {
    ATerm t_45 = t;
    int u_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_107 = NULL;
        v_107 = t;
        {
          ATerm v_45 = t;
          int w_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_36 = NULL;
              t = v_107;
              {
                ATerm x_45 = t;
                int y_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_36 = NULL,n_36 = NULL;
                    t = term_z_39;
                    m_36 = t;
                    t = term_y_43;
                    n_36 = t;
                    t = term_z_43;
                    t = n_11(m_36, n_36, t);
                    LocalPopChoice(y_45);
                  }
                else
                  {
                    t = x_45;
                    t = fetch_1_0(m_17, t);
                  }
              }
              t = v_107;
              t = default_system_usage_0_0(t);
              t = term_z_19;
              l_36 = t;
              t = SSL_exit(l_36);
              LocalPopChoice(w_45);
            }
          else
            {
              t = v_45;
              {
                ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
                t = term_z_39;
                s_36 = t;
                t = term_p_44;
                t_36 = t;
                t = term_z_45;
                t = n_11(s_36, t_36, t);
                t = v_107;
                t = default_system_about_0_0(t);
                t = term_z_19;
                r_36 = t;
                t = SSL_exit(r_36);
              }
            }
        }
        LocalPopChoice(u_45);
      }
    else
      {
        t = t_45;
        {
          ATerm a_46 = t;
          int b_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_107 = NULL,x_107 = NULL,y_107 = NULL;
              static ATerm n_17 (ATerm t)
              {
                ATerm z_107 = NULL,a_108 = NULL,b_108 = NULL,t_12 = NULL;
                b_108 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_108 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_108);
                z_107 = t;
                t = a_108;
                if(((a_107 != NULL) && (a_107 != t)))
                  _fail(t);
                else
                  a_107 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_108);
                t_12 = t;
                t = SSLsetAnnotations(t_12, z_107);
                return(t);
              }
              t = fetch_1_0(n_17, t);
              t = term_z_17;
              x_107 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_107)), term_c_46);
              y_107 = t;
              t = SSL_printnl(x_107, y_107);
              t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_107)), term_c_46));
              t = default_system_usage_0_0(t);
              t = term_o_20;
              w_107 = t;
              t = SSL_exit(w_107);
              LocalPopChoice(b_46);
            }
          else
            {
              t = a_46;
            }
        }
      }
  }
  b_107 = t;
  t = term_o_42;
  t = table_destroy_0_0(t);
  t = b_107;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t)
{
  ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL;
  t = parse_options_1_0(r_129, t);
  j_108 = t;
  t = term_d_46;
  t = table_create_0_0(t);
  t = term_d_46;
  k_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_46, term_e_46, j_108);
  t = lookup_table_0_1(k_108, t);
  n_108 = t;
  t = term_e_46;
  l_108 = t;
  t = n_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(l_108, j_108, m_108, t);
  t = j_108;
  t = t_129(t);
  {
    ATerm f_46 = t;
    int k_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_129, t);
        LocalPopChoice(k_46);
      }
    else
      {
        t = f_46;
        {
          ATerm l_46 = t;
          int m_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_129(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_46);
            }
          else
            {
              t = l_46;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(o_46);
    }
  else
    {
      t = n_46;
      {
        ATerm p_46 = t;
        int q_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(q_46);
          }
        else
          {
            t = p_46;
            {
              ATerm r_46 = t;
              int s_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_17, r_17, s_17, t);
                  LocalPopChoice(s_46);
                }
              else
                {
                  t = r_46;
                  {
                    ATerm t_46 = t;
                    int u_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(u_46);
                      }
                    else
                      {
                        t = t_46;
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
static ATerm p_17 (ATerm t)
{
  t = input_1_0(u_17, t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL;
  t = term_f_40;
  p_108 = t;
  t = term_l_31;
  q_108 = t;
  t = term_v_46;
  t = q_11(p_108, q_108, t);
  t = term_w_46;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = output_1_0(v_17, t);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL,x_12 = NULL,w_12 = NULL;
  f_109 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_109);
  s_108 = t;
  t = t_108;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_109 = ATgetFirst((ATermList) t);
      c_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_108);
  u_108 = t;
  t = c_109;
  t = Cons_2_0(w_17, x_17, t);
  d_109 = t;
  t = (ATerm) ATinsert(CheckATermList(d_109), b_109);
  w_12 = t;
  t = SSLsetAnnotations(w_12, u_108);
  e_109 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_109);
  x_12 = t;
  t = SSLsetAnnotations(x_12, s_108);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL,v_12 = NULL;
  j_109 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_109);
  g_109 = t;
  t = h_109;
  t = all_defs_0_0(t);
  i_109 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_109);
  v_12 = t;
  t = SSLsetAnnotations(v_12, g_109);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(o_17, default_usage_0_0, _id, p_17, t);
  return(t);
}

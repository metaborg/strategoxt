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
Symbol sym_RDecT_3;
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
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
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
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
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
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
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
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_w_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_d_46;
ATerm term_p_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_b_45;
ATerm term_y_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_t_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_b_44;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_q_40;
ATerm term_c_40;
ATerm term_a_40;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_x_37;
ATerm term_t_37;
ATerm term_j_35;
ATerm term_s_34;
ATerm term_v_33;
ATerm term_u_31;
ATerm term_s_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_x_25;
ATerm term_m_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_q_24;
ATerm term_u_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_b_20;
ATerm term_t_19;
ATerm term_p_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Op_2, term_o_20, (ATerm) ATempty);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_20);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Call_2, term_j_21, (ATerm) ATempty);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Call_2, term_d_23, (ATerm) ATempty);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Call_2, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_23);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Sort_2, term_b_31, (ATerm) ATempty);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_ConstType_1, term_c_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym__2, term_v_40, term_w_40);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym__2, term_v_40, term_b_41);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym__2, term_v_40, term_a_42);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym__2, term_h_42, term_t_19);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_19);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym__2, term_m_42, term_i_31);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym__2, term_v_40, term_d_43);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_v_40, term_h_42);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym__2, term_v_40, term_t_43);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym__2, term_u_42, term_v_42);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym__2, term_t_44, term_i_31);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym__2, term_y_44, term_i_31);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym__2, term_t_43, term_i_31);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym__3, term_u_42, term_v_42, (ATerm) ATempty);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym__2, term_v_40, term_t_44);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym__2, term_b_41, term_i_31);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm k_9 (ATerm u_24, ATerm w_24, ATerm x_24, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm q_9 (ATerm g_39, ATerm f_39, ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm c_121 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_121 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm z_43 (ATerm l_34, ATerm m_34, ATerm t);
static ATerm a_44 (ATerm c_35, ATerm w_35, ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm t_102 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm z_9 (ATerm h_33, ATerm i_33, ATerm j_33, ATerm t);
static ATerm s_57 (ATerm j_57, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm r_105 (ATerm), ATerm t);
static ATerm d_10 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm n_104 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm p_108 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm e_10 (ATerm z_53, ATerm a_54, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm copy_1_0 (ATerm b_127 (ATerm), ATerm t);
static ATerm f_10 (ATerm q_23, ATerm r_23, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm v_75 (ATerm w_71, ATerm a_72, ATerm b_72, ATerm d_72, ATerm t);
static ATerm w_75 (ATerm i_74, ATerm j_74, ATerm k_74, ATerm n_74, ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm s_116 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm v_111 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm f_106 (ATerm), ATerm t);
static ATerm r_9 (ATerm k_72, ATerm l_72, ATerm t);
ATerm end_scope_1_0 (ATerm a_137 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_136 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm b_137 (ATerm), ATerm c_137 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm v_9 (ATerm c_26, ATerm d_26, ATerm h_26, ATerm e_26, ATerm g_26, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm e_78 (ATerm s_76, ATerm t_76, ATerm w_76, ATerm x_76, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm x_116 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_80 (ATerm q_79, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_10 (ATerm j_123 (ATerm), ATerm r_64, ATerm q_64, ATerm t);
ATerm genzip_4_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm q_10 (ATerm k_755, ATerm p_755, ATerm m_77, ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm x_84 (ATerm z_82, ATerm c_83, ATerm e_83, ATerm t);
static ATerm a_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm s_10 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm d_79, ATerm a_79, ATerm i_79, ATerm e_79, ATerm b_79, ATerm c_79, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t);
ATerm for_3_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm a_31 (ATerm k_30, ATerm l_30, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm v_10 (ATerm d_137 (ATerm), ATerm b_80, ATerm z_79, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm x_10 (ATerm q_72, ATerm r_72, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm y_10 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm x_64, ATerm w_64, ATerm t);
static ATerm z_10 (ATerm o_123 (ATerm), ATerm t_64, ATerm s_64, ATerm t);
ATerm foldr_3_0 (ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm t);
static ATerm a_11 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm b_11 (ATerm y_45, ATerm z_45, ATerm t);
static ATerm d_11 (ATerm x_111 (ATerm), ATerm h_324, ATerm e_46, ATerm t);
static ATerm c_11 (ATerm u_45, ATerm v_45, ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
ATerm output_1_0 (ATerm k_132 (ATerm), ATerm t);
static ATerm v_96 (ATerm p_96, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_11 (ATerm a_46, ATerm t);
static ATerm f_11 (ATerm b_64, ATerm c_64, ATerm t);
static ATerm g_11 (ATerm i_47, ATerm j_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_98 (ATerm f_97, ATerm t);
static ATerm h_98 (ATerm j_97, ATerm k_97, ATerm l_97, ATerm t);
static ATerm i_98 (ATerm t_97, ATerm u_97, ATerm v_97, ATerm t);
static ATerm h_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm l_132 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_11 (ATerm b_51, ATerm c_51, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_11 (ATerm f_72, ATerm g_72, ATerm e_72, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm i_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_11 (ATerm t_53, ATerm u_53, ATerm t);
ATerm foldr_2_0 (ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_113 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm need_help_1_0 (ATerm b_132 (ATerm), ATerm t);
static ATerm r_11 (ATerm x_75, ATerm y_75, ATerm z_75, ATerm t);
ATerm lookup_table_0_1 (ATerm r_73, ATerm t);
ATerm new_hashtable_0_2 (ATerm f_76, ATerm g_76, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_11 (ATerm c_76, ATerm d_76, ATerm t);
static ATerm l_11 (ATerm h_76, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_116 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_116 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_11 (ATerm a_76, ATerm b_76, ATerm t);
static ATerm n_11 (ATerm y_73, ATerm z_73, ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm e_134 (ATerm), ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
ATerm parse_options_1_0 (ATerm d_134 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm f_132 (ATerm), ATerm g_132 (ATerm), ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm k_9 (ATerm u_24, ATerm w_24, ATerm x_24, ATerm t)
{
  ATerm p_0 = NULL,s_0 = NULL;
  t = term_z_16;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_17), x_24), term_d_17), w_24), term_b_17), u_24), term_a_17);
  s_0 = t;
  t = SSL_printnl(p_0, s_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_17), x_24), term_d_17), w_24), term_b_17), u_24), term_a_17);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if(((ATgetType(f_17) != AT_INT) || (ATgetInt((ATermInt) f_17) != 0)))
        _fail(t);
      {
        ATerm g_17 = ATgetArgument(t, 1);
        if(((ATgetType(g_17) != AT_INT) || (ATgetInt((ATermInt) g_17) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL,c_2 = NULL,e_2 = NULL,g_2 = NULL;
  y_1 = t;
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_2;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = g_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,v_0 = NULL;
        t = a_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_17 = ATgetFirst((ATermList) t);
            ATerm k_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
              {
                ATerm l_17 = ATgetFirst((ATermList) k_17);
                ATerm m_17 = (ATerm) ATgetNext((ATermList) k_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm o_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_17;
            }
        }
        t = term_z_16;
        u_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_p_17);
        v_0 = t;
        t = SSL_printnl(u_0, v_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_p_17);
        t = giving_up_0_0(t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        {
          ATerm b_1 = NULL,c_1 = NULL;
          t = a_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_17 = ATgetFirst((ATermList) t);
              if(match_cons(q_17, sym__2))
                {
                  b_1 = ATgetArgument(q_17, 0);
                  c_1 = ATgetArgument(q_17, 1);
                }
              else
                _fail(t);
              {
                ATerm r_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(r_17) != AT_LIST) || !(ATisEmpty(r_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, a_2, (ATerm) ATmakeAppl(sym__2, b_1, c_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, a_2, (ATerm) ATmakeAppl(sym__2, b_1, c_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
      {
        ATerm o_1 = NULL,r_1 = NULL,t_1 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(x_5);
        o_1 = t;
        t = y_5;
        t = s_103(t);
        r_1 = t;
        t = z_5;
        t = s_103(t);
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_1, t_1);
        d_1 = t;
        t = SSLsetAnnotations(d_1, o_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_5 = ATgetArgument(t, 0);
          z_5 = ATgetArgument(t, 1);
          w_5 = ATgetArgument(t, 2);
          {
            ATerm m_2 = NULL,g_3 = NULL,i_3 = NULL,w_3 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(x_5);
            m_2 = t;
            t = y_5;
            t = u_103(t);
            g_3 = t;
            t = z_5;
            t = u_103(t);
            i_3 = t;
            t = w_5;
            t = s_103(t);
            w_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, g_3, i_3, w_3);
            e_1 = t;
            t = SSLsetAnnotations(e_1, m_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              y_5 = ATgetArgument(t, 0);
              z_5 = ATgetArgument(t, 1);
              w_5 = ATgetArgument(t, 2);
              v_5 = ATgetArgument(t, 3);
              {
                ATerm d_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(x_5);
                d_6 = t;
                t = y_5;
                t = u_103(t);
                l_6 = t;
                t = z_5;
                t = u_103(t);
                m_6 = t;
                t = w_5;
                t = u_103(t);
                n_6 = t;
                t = v_5;
                t = s_103(t);
                o_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_6, m_6, n_6, o_6);
                g_1 = t;
                t = SSLsetAnnotations(g_1, d_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  y_5 = ATgetArgument(t, 0);
                  z_5 = ATgetArgument(t, 1);
                  w_5 = ATgetArgument(t, 2);
                  v_5 = ATgetArgument(t, 3);
                  {
                    ATerm k_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,i_1 = NULL;
                    t = SSLgetAnnotations(x_5);
                    k_7 = t;
                    t = y_5;
                    t = u_103(t);
                    v_7 = t;
                    t = z_5;
                    t = u_103(t);
                    w_7 = t;
                    t = w_5;
                    t = u_103(t);
                    x_7 = t;
                    t = v_5;
                    t = s_103(t);
                    y_7 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, v_7, w_7, x_7, y_7);
                    i_1 = t;
                    t = SSLsetAnnotations(i_1, k_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      y_5 = ATgetArgument(t, 0);
                      z_5 = ATgetArgument(t, 1);
                      w_5 = ATgetArgument(t, 2);
                      {
                        ATerm v_8 = NULL,z_8 = NULL,c_9 = NULL,d_9 = NULL,j_1 = NULL;
                        t = SSLgetAnnotations(x_5);
                        v_8 = t;
                        t = y_5;
                        t = u_103(t);
                        z_8 = t;
                        t = z_5;
                        t = u_103(t);
                        c_9 = t;
                        t = w_5;
                        t = u_103(t);
                        d_9 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, z_8, c_9, d_9);
                        j_1 = t;
                        t = SSLsetAnnotations(j_1, v_8);
                      }
                    }
                  else
                    {
                      ATerm n_9 = NULL,t_9 = NULL,u_9 = NULL,n_1 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          y_5 = ATgetArgument(t, 0);
                          z_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(x_5);
                      n_9 = t;
                      t = y_5;
                      t = u_103(t);
                      t_9 = t;
                      t = z_5;
                      t = s_103(t);
                      u_9 = t;
                      t = (ATerm) ATmakeAppl(sym_Rec_2, t_9, u_9);
                      n_1 = t;
                      t = SSLsetAnnotations(n_1, n_9);
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm l_7 = NULL;
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_7 = ATgetArgument(t, 0);
          {
            ATerm u_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_17);
      t = l_7;
    }
  else
    {
      t = s_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_7;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm z_7 = NULL;
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_7 = ATgetArgument(t, 0);
          {
            ATerm x_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_17);
      t = z_7;
    }
  else
    {
      t = v_17;
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
ATerm Bind7_0_0 (ATerm t)
{
  ATerm c_7 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm d_18 = ATgetArgument(t, 0);
          c_7 = ATgetArgument(t, 1);
          {
            ATerm e_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_18);
      t = c_7;
      t = map_1_0(r_0, t);
    }
  else
    {
      t = a_18;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm f_18 = ATgetArgument(t, 0);
          c_7 = ATgetArgument(t, 1);
          {
            ATerm i_18 = ATgetArgument(t, 2);
          }
          {
            ATerm j_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = c_7;
      t = map_1_0(t_0, t);
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm e_8 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_8 = ATgetArgument(t, 0);
          {
            ATerm m_18 = ATgetArgument(t, 1);
          }
          {
            ATerm n_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_18);
      t = e_8;
    }
  else
    {
      t = k_18;
      if(match_cons(t, sym_SDefT_4))
        {
          e_8 = ATgetArgument(t, 0);
          {
            ATerm o_18 = ATgetArgument(t, 1);
          }
          {
            ATerm q_18 = ATgetArgument(t, 2);
          }
          {
            ATerm r_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = e_8;
    }
  return(t);
}
static ATerm q_9 (ATerm g_39, ATerm f_39, ATerm t)
{
  t = g_39;
  t = map_1_0(w_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm y_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(f_1, y_11, a_12, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      if((c_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm j_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(l_1, j_12, q_12, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm r_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      if((r_12 != ATgetArgument(t, 1)))
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
  ATerm z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      if((z_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm c_121 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_121 (ATerm), ATerm t)
{
  static ATerm b_12 (ATerm t)
  {
    ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
    o_10 = t;
    {
      ATerm w_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_121(t);
          LocalPopChoice(x_18);
        }
      else
        {
          t = w_18;
          t = (ATerm) ATempty;
        }
    }
    m_10 = t;
    t = o_10;
    {
      ATerm a_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_10 = NULL,j_10 = NULL,k_10 = NULL;
          t = b_121(t);
          p_10 = t;
          t = o_10;
          {
            static ATerm x_0 (ATerm t)
            {
              ATerm b_10 = NULL;
              t = b_12(t);
              b_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_10, p_10);
              t = l_10(d_121, b_10, p_10, t);
              return(t);
            }
            t = c_121(x_0, b_12, y_0, t);
          }
          k_10 = t;
          t = SSL_explode_term(k_10);
          if(match_cons(t, sym__2))
            {
              ATerm d_19 = ATgetArgument(t, 0);
              j_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_10;
          t = foldr_3_0(z_0, a_1, _id, t);
          LocalPopChoice(c_19);
        }
      else
        {
          t = a_19;
          {
            ATerm e_12 = NULL;
            t = SSL_explode_term(o_10);
            if(match_cons(t, sym__2))
              {
                ATerm i_19 = ATgetArgument(t, 0);
                e_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_12;
            t = foldr_3_0(h_1, k_1, b_12, t);
          }
        }
    }
    n_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_10, n_10);
    t = z_10(m_1, m_10, n_10, t);
    return(t);
  }
  t = b_12(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(match_cons(j_19, sym_SVar_1))
        {
          k_12 = ATgetArgument(j_19, 0);
        }
      else
        _fail(t);
      l_12 = ATgetArgument(t, 1);
      m_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_12;
  t = foldr_3_0(u_1, v_1, w_1, t);
  n_12 = t;
  t = m_12;
  t = foldr_3_0(x_1, z_1, b_2, t);
  o_12 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_12, (ATerm) ATmakeAppl(sym__2, n_12, o_12)));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_12 = NULL,x_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
      w_12 = t;
      if(match_cons(t, sym_Let_2))
        {
          x_12 = ATgetArgument(t, 0);
          a_13 = ATgetArgument(t, 1);
          t = w_12;
          t = q_9(x_12, a_13, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              x_12 = ATgetArgument(t, 0);
              a_13 = ATgetArgument(t, 1);
              b_13 = ATgetArgument(t, 2);
              t = a_13;
              t = map_1_0(d_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  x_12 = ATgetArgument(t, 0);
                  a_13 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, x_12);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_12 = ATgetArgument(t, 0);
                      a_13 = ATgetArgument(t, 1);
                      b_13 = ATgetArgument(t, 2);
                      c_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_13;
                  t = map_1_0(f_2, t);
                }
            }
        }
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      t = Bind7_0_0(t);
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_19 = ATgetArgument(t, 0);
      if(match_cons(p_19, sym__2))
        {
          y_14 = ATgetArgument(p_19, 0);
          {
            ATerm r_19 = ATgetArgument(p_19, 1);
          }
        }
      else
        _fail(t);
      if((y_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm p_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(p_12, t_12, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(u_12, v_12, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm o_13 = NULL;
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_13 = ATgetArgument(t, 0);
          {
            ATerm e_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_20);
      t = o_13;
    }
  else
    {
      t = c_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_13;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm p_14 = NULL;
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_14 = ATgetArgument(t, 0);
          {
            ATerm i_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_20);
      t = p_14;
    }
  else
    {
      t = f_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_14;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(p_1, q_1, sboundin_3_0, s_1, t);
  return(t);
}
static ATerm z_43 (ATerm l_34, ATerm m_34, ATerm t)
{
  t = l_34;
  {
    ATerm j_20 = t;
    if((PushChoice() == 0))
      {
        ATerm o_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,q_2 = NULL;
        z_34 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_34 = ATgetFirst((ATermList) t);
            y_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_34);
        o_34 = t;
        t = y_34;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_34), x_34);
        q_2 = t;
        t = SSLsetAnnotations(q_2, o_34);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_20, l_34);
  return(t);
}
static ATerm a_44 (ATerm c_35, ATerm w_35, ATerm t)
{
  t = c_35;
  {
    ATerm l_20 = t;
    if((PushChoice() == 0))
      {
        ATerm y_35 = NULL,z_35 = NULL,o_37 = NULL,p_37 = NULL,r_2 = NULL;
        p_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_35 = ATgetFirst((ATermList) t);
            o_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_37);
        y_35 = t;
        t = o_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(o_37), z_35);
        r_2 = t;
        t = SSLsetAnnotations(r_2, y_35);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_20, c_35);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm e_39 = NULL,h_39 = NULL,m_15 = NULL;
  e_39 = t;
  t = SSL_explode_term(e_39);
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_20 = ATgetArgument(t, 1);
        if(((ATgetType(y_20) == AT_LIST) && !(ATisEmpty(y_20))))
          {
            h_39 = ATgetFirst((ATermList) y_20);
            {
              ATerm a_21 = (ATerm) ATgetNext((ATermList) y_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(e_39);
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_21 = ATgetArgument(t, 1);
        if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
          {
            ATerm d_21 = ATgetFirst((ATermList) c_21);
            ATerm e_21 = (ATerm) ATgetNext((ATermList) c_21);
            if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
              {
                m_15 = ATgetFirst((ATermList) e_21);
                {
                  ATerm g_21 = (ATerm) ATgetNext((ATermList) e_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, m_15), h_39));
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm b_40 = NULL,d_40 = NULL;
  if(match_cons(t, sym__2))
    {
      b_40 = ATgetArgument(t, 0);
      d_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, d_40), b_40));
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, h_40), g_40));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL;
  if(match_cons(t, sym__2))
    {
      j_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, k_41), j_41));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_k_21;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  if(match_cons(t, sym__2))
    {
      m_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, n_41), m_41));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  v_38 = t;
  if(match_cons(t, sym_Anno_2))
    {
      w_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
      {
        ATerm a_39 = NULL;
        t = x_38;
        t = foldr_2_0(h_2, i_2, t);
        a_39 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, w_38, a_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          w_38 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, w_38, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              w_38 = ATgetArgument(t, 0);
              {
                ATerm r_15 = NULL;
                t = w_38;
                {
                  ATerm l_21 = t;
                  int m_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_n_21;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_o_21;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_p_21;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_q_21;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_r_21;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(m_21);
                    }
                  else
                    {
                      t = l_21;
                      {
                        ATerm t_15 = NULL;
                        t = SSL_explode_string(w_38);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_21 = ATgetFirst((ATermList) t);
                            if(((ATgetType(s_21) != AT_INT) || (ATgetInt((ATermInt) s_21) != 39)))
                              _fail(t);
                            {
                              ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
                                {
                                  t_15 = ATgetFirst((ATermList) t_21);
                                  {
                                    ATerm u_21 = (ATerm) ATgetNext((ATermList) t_21);
                                    if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
                                      {
                                        ATerm v_21 = ATgetFirst((ATermList) u_21);
                                        if(((ATgetType(v_21) != AT_INT) || (ATgetInt((ATermInt) v_21) != 39)))
                                          _fail(t);
                                        {
                                          ATerm w_21 = (ATerm) ATgetNext((ATermList) u_21);
                                          if(((ATgetType(w_21) != AT_LIST) || !(ATisEmpty(w_21))))
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
                        t = t_15;
                      }
                    }
                }
                r_15 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, r_15);
              }
            }
          else
            {
              ATerm x_21 = t;
              int y_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      w_38 = ATgetArgument(t, 0);
                      {
                        ATerm z_21 = ATgetArgument(t, 1);
                      }
                      u_38 = ATgetArgument(t, 2);
                      b_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(y_21);
                  t = (ATerm) ATmakeAppl(sym_Con_3, w_38, u_38, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_38), (ATerm) ATempty));
                }
              else
                {
                  t = x_21;
                  {
                    ATerm z_22 = t;
                    int a_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            w_38 = ATgetArgument(t, 0);
                            {
                              ATerm b_23 = ATgetArgument(t, 1);
                            }
                            u_38 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(a_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, w_38, u_38, term_e_23);
                      }
                    else
                      {
                        t = z_22;
                        if(match_cons(t, sym_Con1_2))
                          {
                            w_38 = ATgetArgument(t, 0);
                            x_38 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, w_38, x_38, term_e_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                w_38 = ATgetArgument(t, 0);
                                x_38 = ATgetArgument(t, 1);
                                {
                                  static ATerm j_2 (ATerm t)
                                  {
                                    t = x_38;
                                    return(t);
                                  }
                                  t = w_38;
                                  t = foldr_2_0(j_2, k_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    w_38 = ATgetArgument(t, 0);
                                    t = w_38;
                                    t = foldr_2_0(l_2, n_2, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        w_38 = ATgetArgument(t, 0);
                                        t = w_38;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            c_38 = ATgetFirst((ATermList) t);
                                            d_38 = (ATerm) ATgetNext((ATermList) t);
                                            t = d_38;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm h_23 = t;
                                                int i_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = z_43(w_38, v_38, t);
                                                    LocalPopChoice(i_23);
                                                  }
                                                else
                                                  {
                                                    t = h_23;
                                                    t = c_38;
                                                  }
                                              }
                                            else
                                              {
                                                t = z_43(w_38, v_38, t);
                                              }
                                          }
                                        else
                                          {
                                            t = z_43(w_38, v_38, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            w_38 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, w_38));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                w_38 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, w_38));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    w_38 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, w_38));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        w_38 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, w_38));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            w_38 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_38), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                w_38 = ATgetArgument(t, 0);
                                                                x_38 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_38), x_38);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    w_38 = ATgetArgument(t, 0);
                                                                    x_38 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm o_2 (ATerm t)
                                                                      {
                                                                        t = x_38;
                                                                        return(t);
                                                                      }
                                                                      t = w_38;
                                                                      t = foldr_2_0(o_2, p_2, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        w_38 = ATgetArgument(t, 0);
                                                                        t = w_38;
                                                                        t = foldr_2_0(s_2, t_2, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            w_38 = ATgetArgument(t, 0);
                                                                            x_38 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_m_20, (ATerm) ATinsert(CheckATermList(x_38), w_38));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                w_38 = ATgetArgument(t, 0);
                                                                                t = w_38;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    c_38 = ATgetFirst((ATermList) t);
                                                                                    d_38 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = d_38;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm j_23 = t;
                                                                                        int l_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = a_44(w_38, v_38, t);
                                                                                            LocalPopChoice(l_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = j_23;
                                                                                            t = c_38;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = a_44(w_38, v_38, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_44(w_38, v_38, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_m_23;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        w_38 = ATgetArgument(t, 0);
                                                                                        x_38 = ATgetArgument(t, 1);
                                                                                        t = x_38;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            t_38 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_u_23, (ATerm) ATinsert(ATinsert(ATempty, t_38), w_38));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            w_38 = ATgetArgument(t, 0);
                                                                                            t = w_38;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                w_38 = ATgetArgument(t, 0);
                                                                                                x_38 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, w_38, x_38, term_q_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    w_38 = ATgetArgument(t, 0);
                                                                                                    x_38 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, w_38, x_38, term_q_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        w_38 = ATgetArgument(t, 0);
                                                                                                        x_38 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, w_38, (ATerm)ATempty, x_38);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            w_38 = ATgetArgument(t, 0);
                                                                                                            x_38 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, x_38, w_38);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                w_38 = ATgetArgument(t, 0);
                                                                                                                x_38 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, w_38, x_38, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    w_38 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, w_38, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        w_38 = ATgetArgument(t, 0);
                                                                                                                        x_38 = ATgetArgument(t, 1);
                                                                                                                        u_38 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, w_38, x_38, (ATerm)ATempty, u_38);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            w_38 = ATgetArgument(t, 0);
                                                                                                                            x_38 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_38, (ATerm)ATempty, (ATerm)ATempty, x_38);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                w_38 = ATgetArgument(t, 0);
                                                                                                                                x_38 = ATgetArgument(t, 1);
                                                                                                                                u_38 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, w_38, x_38, (ATerm)ATempty, u_38);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    w_38 = ATgetArgument(t, 0);
                                                                                                                                    x_38 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, w_38, (ATerm)ATempty, (ATerm)ATempty, x_38);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        w_38 = ATgetArgument(t, 0);
                                                                                                                                        x_38 = ATgetArgument(t, 1);
                                                                                                                                        u_38 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, w_38, x_38, (ATerm)ATempty, u_38);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            w_38 = ATgetArgument(t, 0);
                                                                                                                                            x_38 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, w_38, (ATerm)ATempty, (ATerm)ATempty, x_38);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm g_25 = ATgetArgument(t, 0);
                                                                                                                                                x_38 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, x_38);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  f_44 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      g_44 = ATgetArgument(t, 0);
      e_44 = ATgetArgument(t, 1);
      {
        ATerm j_44 = NULL,k_44 = NULL,r_44 = NULL,s_44 = NULL;
        t = f_44;
        t = new_0_0(t);
        j_44 = t;
        t = new_0_0(t);
        k_44 = t;
        t = new_0_0(t);
        r_44 = t;
        t = new_0_0(t);
        s_44 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_44), r_44), k_44), j_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, j_44), (ATerm) ATmakeAppl(sym_Var_1, r_44))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, g_44, (ATerm)ATmakeAppl(sym_Var_1, j_44), (ATerm) ATmakeAppl(sym_Var_1, k_44)), (ATerm) ATmakeAppl(sym_BAM_3, e_44, (ATerm)ATmakeAppl(sym_Var_1, r_44), (ATerm) ATmakeAppl(sym_Var_1, s_44)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_44)), (ATerm) ATmakeAppl(sym_Var_1, k_44))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          g_44 = ATgetArgument(t, 0);
          {
            ATerm u_44 = NULL,x_44 = NULL,z_44 = NULL,a_45 = NULL;
            t = f_44;
            t = new_0_0(t);
            z_44 = t;
            t = g_44;
            {
              static ATerm a_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((u_44 != NULL) && (u_44 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      u_44 = ATgetArgument(t, 0);
                    if(((x_44 != NULL) && (x_44 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      x_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_44);
                return(t);
              }
              t = oncetd_1_0(a_3, t);
            }
            a_45 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_44)), not_null(u_44))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_44)), (ATerm) ATmakeAppl(sym_Build_1, a_45))));
          }
        }
      else
        {
          ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,h_45 = NULL,k_45 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              g_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_44;
          t = new_0_0(t);
          e_45 = t;
          t = new_0_0(t);
          h_45 = t;
          t = g_44;
          {
            static ATerm b_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((c_45 != NULL) && (c_45 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    c_45 = ATgetArgument(t, 0);
                  if(((d_45 != NULL) && (d_45 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    d_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, e_45);
              return(t);
            }
            t = oncetd_1_0(b_3, t);
          }
          k_45 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_45), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_45)), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_45))))), (ATerm)ATmakeAppl(sym_Var_1, e_45), (ATerm) ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_45)), not_null(c_45)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL;
  m_45 = t;
  if(match_cons(t, sym_Match_1))
    {
      n_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_45 = NULL,x_45 = NULL,b_46 = NULL,c_46 = NULL;
        t = m_45;
        t = new_0_0(t);
        b_46 = t;
        t = n_45;
        {
          static ATerm c_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_45 != NULL) && (s_45 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_45 = ATgetArgument(t, 0);
                if(((x_45 != NULL) && (x_45 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, b_46), s_45);
            return(t);
          }
          t = pat_td_1_0(c_3, t);
        }
        c_46 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_46), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_46))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_45))))));
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        {
          ATerm n_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_46 = NULL,n_46 = NULL,r_46 = NULL;
              t = m_45;
              t = new_0_0(t);
              n_46 = t;
              t = n_45;
              {
                static ATerm d_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_46 != NULL) && (m_46 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_46);
                  return(t);
                }
                t = pat_td_1_0(d_3, t);
              }
              r_46 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_46)), not_null(m_46))));
              LocalPopChoice(p_25);
            }
          else
            {
              t = n_25;
              {
                ATerm u_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
                t = m_45;
                t = new_0_0(t);
                y_46 = t;
                t = n_45;
                {
                  static ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((x_46 != NULL) && (x_46 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          x_46 = ATgetArgument(t, 0);
                        if(((u_46 != NULL) && (u_46 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_46 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_46);
                    return(t);
                  }
                  t = pat_td_1_0(e_3, t);
                }
                z_46 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_46)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_46)), not_null(x_46)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm q_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_102(t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = q_25;
      {
        ATerm i_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
        l_51 = t;
        if(match_cons(t, sym_Op_2))
          {
            m_51 = ATgetArgument(t, 0);
            n_51 = ATgetArgument(t, 1);
            {
              ATerm f_16 = NULL,s_16 = NULL,u_2 = NULL;
              t = SSLgetAnnotations(l_51);
              f_16 = t;
              t = n_51;
              {
                static ATerm f_3 (ATerm t)
                {
                  t = pat_td_1_0(t_102, t);
                  return(t);
                }
                t = fetch_1_0(f_3, t);
              }
              s_16 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, m_51, s_16);
              u_2 = t;
              t = SSLsetAnnotations(u_2, f_16);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                m_51 = ATgetArgument(t, 0);
                n_51 = ATgetArgument(t, 1);
                {
                  ATerm t_25 = t;
                  int u_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_17 = NULL,n_17 = NULL,v_2 = NULL;
                      t = SSLgetAnnotations(l_51);
                      c_17 = t;
                      t = n_51;
                      t = pat_td_1_0(t_102, t);
                      n_17 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, m_51, n_17);
                      v_2 = t;
                      t = SSLsetAnnotations(v_2, c_17);
                      LocalPopChoice(u_25);
                    }
                  else
                    {
                      t = t_25;
                      {
                        ATerm y_17 = NULL,c_18 = NULL,w_2 = NULL;
                        t = SSLgetAnnotations(l_51);
                        y_17 = t;
                        t = m_51;
                        t = pat_td_1_0(t_102, t);
                        c_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, c_18, n_51);
                        w_2 = t;
                        t = SSLsetAnnotations(w_2, y_17);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    m_51 = ATgetArgument(t, 0);
                    n_51 = ATgetArgument(t, 1);
                    i_51 = ATgetArgument(t, 2);
                    {
                      ATerm p_18 = NULL,y_18 = NULL,x_2 = NULL;
                      t = SSLgetAnnotations(l_51);
                      p_18 = t;
                      t = i_51;
                      {
                        static ATerm k_3 (ATerm t)
                        {
                          t = pat_td_1_0(t_102, t);
                          return(t);
                        }
                        t = fetch_1_0(k_3, t);
                      }
                      y_18 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, m_51, n_51, y_18);
                      x_2 = t;
                      t = SSLsetAnnotations(x_2, p_18);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        m_51 = ATgetArgument(t, 0);
                        n_51 = ATgetArgument(t, 1);
                        i_51 = ATgetArgument(t, 2);
                        {
                          ATerm u_19 = NULL,h_20 = NULL,y_2 = NULL;
                          t = SSLgetAnnotations(l_51);
                          u_19 = t;
                          t = i_51;
                          {
                            static ATerm l_3 (ATerm t)
                            {
                              t = pat_td_1_0(t_102, t);
                              return(t);
                            }
                            t = fetch_1_0(l_3, t);
                          }
                          h_20 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, m_51, n_51, h_20);
                          y_2 = t;
                          t = SSLsetAnnotations(y_2, u_19);
                        }
                      }
                    else
                      {
                        ATerm x_20 = NULL,f_21 = NULL,z_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            m_51 = ATgetArgument(t, 0);
                            n_51 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(l_51);
                        x_20 = t;
                        t = n_51;
                        t = pat_td_1_0(t_102, t);
                        f_21 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, m_51, f_21);
                        z_2 = t;
                        t = SSLsetAnnotations(z_2, x_20);
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
  ATerm z_51 = NULL,a_52 = NULL;
  z_51 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_52 = NULL,h_52 = NULL,n_52 = NULL,p_52 = NULL;
        t = z_51;
        t = new_0_0(t);
        n_52 = t;
        t = a_52;
        {
          static ATerm n_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((f_52 != NULL) && (f_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_52 = ATgetArgument(t, 0);
                if(((h_52 != NULL) && (h_52 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_52 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, n_52);
            return(t);
          }
          t = pat_td_1_0(n_3, t);
        }
        p_52 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_52)), not_null(f_52))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_52)))), (ATerm) ATmakeAppl(sym_Build_1, p_52)));
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm y_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_52 = NULL,t_52 = NULL,y_52 = NULL;
              t = z_51;
              t = new_0_0(t);
              t_52 = t;
              t = a_52;
              {
                static ATerm s_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_52 != NULL) && (q_52 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_52 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, t_52);
                  return(t);
                }
                t = pat_td_1_0(s_3, t);
              }
              y_52 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_52)))), (ATerm) ATmakeAppl(sym_Build_1, y_52)));
              LocalPopChoice(a_26);
            }
          else
            {
              t = y_25;
              {
                ATerm z_52 = NULL,a_53 = NULL,c_53 = NULL,d_53 = NULL;
                t = z_51;
                t = new_0_0(t);
                c_53 = t;
                t = a_52;
                {
                  static ATerm t_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((z_52 != NULL) && (z_52 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          z_52 = ATgetArgument(t, 0);
                        if(((a_53 != NULL) && (a_53 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_53 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_53);
                    return(t);
                  }
                  t = pat_td_1_0(t_3, t);
                }
                d_53 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(z_52), not_null(a_53), (ATerm) ATmakeAppl(sym_Var_1, c_53))), (ATerm) ATmakeAppl(sym_Build_1, d_53)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,q_53 = NULL,s_53 = NULL,v_53 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_53 = ATgetArgument(t, 0);
      v_53 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_53, v_53);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_53 = ATgetArgument(t, 0);
          t = s_53;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_53 = ATgetFirst((ATermList) t);
              l_53 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, k_53, (ATerm) ATmakeAppl(sym_LChoices_1, l_53));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_26;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              s_53 = ATgetArgument(t, 0);
              t = s_53;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_53 = ATgetFirst((ATermList) t);
                  l_53 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, k_53, (ATerm) ATmakeAppl(sym_Choices_1, l_53));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_f_26;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  s_53 = ATgetArgument(t, 0);
                  t = s_53;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_53 = ATgetFirst((ATermList) t);
                      l_53 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_53, (ATerm) ATmakeAppl(sym_Seqs_1, l_53));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_q_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      s_53 = ATgetArgument(t, 0);
                      v_53 = ATgetArgument(t, 1);
                      q_53 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, v_53, (ATerm) ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, q_53), s_53)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          s_53 = ATgetArgument(t, 0);
                          v_53 = ATgetArgument(t, 1);
                          q_53 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_53)), s_53), (ATerm) ATmakeAppl(sym_Build_1, v_53)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              s_53 = ATgetArgument(t, 0);
                              v_53 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_53, (ATerm) ATmakeAppl(sym_Match_1, v_53));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  s_53 = ATgetArgument(t, 0);
                                  v_53 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_53), v_53);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      s_53 = ATgetArgument(t, 0);
                                      v_53 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_53), s_53);
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
static ATerm u_3 (ATerm t)
{
  ATerm i_26 = t;
  if((PushChoice() == 0))
    {
      ATerm e_56 = NULL,i_56 = NULL,o_56 = NULL,h_3 = NULL;
      o_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_56);
      e_56 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_56);
      h_3 = t;
      t = SSLsetAnnotations(h_3, e_56);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_26;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm q_56 = NULL,u_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_56 = ATgetFirst((ATermList) t);
      u_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_56, u_56);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if(match_cons(k_26, sym__2))
        {
          w_56 = ATgetArgument(k_26, 0);
          x_56 = ATgetArgument(k_26, 1);
        }
      else
        _fail(t);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(match_cons(p_26, sym__2))
          {
            y_56 = ATgetArgument(p_26, 0);
            z_56 = ATgetArgument(p_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_56), w_56), (ATerm) ATinsert(CheckATermList(z_56), x_56));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_57 = ATgetFirst((ATermList) t);
      b_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_57, b_57);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(match_cons(u_26, sym__2))
        {
          c_57 = ATgetArgument(u_26, 0);
          d_57 = ATgetArgument(u_26, 1);
        }
      else
        _fail(t);
      {
        ATerm w_26 = ATgetArgument(t, 1);
        if(match_cons(w_26, sym__2))
          {
            e_57 = ATgetArgument(w_26, 0);
            f_57 = ATgetArgument(w_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_57), c_57), (ATerm) ATinsert(CheckATermList(f_57), d_57));
  return(t);
}
static ATerm z_9 (ATerm h_33, ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,t_55 = NULL,w_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,j_3 = NULL;
  t = j_33;
  t = fetch_1_0(u_3, t);
  t = j_33;
  t = genzip_4_0(v_3, y_3, b_4, LiftPrimArg_0_0, t);
  a_56 = t;
  if(match_cons(t, sym__2))
    {
      t_55 = ATgetArgument(t, 0);
      w_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_56);
  r_55 = t;
  t = t_55;
  t = concat_0_0(t);
  y_55 = t;
  t = w_55;
  t = genzip_4_0(c_4, d_4, f_4, _id, t);
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_55, z_55);
  j_3 = t;
  t = SSLsetAnnotations(j_3, r_55);
  if(match_cons(t, sym__2))
    {
      o_55 = ATgetArgument(t, 0);
      {
        ATerm x_26 = ATgetArgument(t, 1);
        if(match_cons(x_26, sym__2))
          {
            p_55 = ATgetArgument(x_26, 0);
            q_55 = ATgetArgument(x_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, o_55, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_55), (ATerm) ATmakeAppl(sym_CallT_3, h_33, i_33, q_55)));
  return(t);
}
static ATerm s_57 (ATerm j_57, ATerm t)
{
  ATerm l_57 = NULL;
  t = j_57;
  {
    ATerm y_26 = t;
    if((PushChoice() == 0))
      {
        ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,m_3 = NULL;
        o_57 = t;
        if(match_cons(t, sym_Var_1))
          {
            n_57 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_57);
        m_57 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, n_57);
        m_3 = t;
        t = SSLsetAnnotations(m_3, m_57);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_26;
      }
  }
  t = new_0_0(t);
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, l_57), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_57), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_57)))), (ATerm) ATmakeAppl(sym_Var_1, l_57)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  p_57 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_57 = ATgetArgument(t, 0);
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_57(p_57, t);
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_24, (ATerm) ATmakeAppl(sym_Var_1, q_57)));
          }
      }
    }
  else
    {
      t = s_57(p_57, t);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm c_27 = t;
  if((PushChoice() == 0))
    {
      ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,o_3 = NULL;
      l_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_22);
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_22);
      o_3 = t;
      t = SSLsetAnnotations(o_3, j_22);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_27;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_22 = ATgetFirst((ATermList) t);
      n_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(match_cons(d_27, sym__2))
        {
          o_22 = ATgetArgument(d_27, 0);
          p_22 = ATgetArgument(d_27, 1);
        }
      else
        _fail(t);
      {
        ATerm h_27 = ATgetArgument(t, 1);
        if(match_cons(h_27, sym__2))
          {
            q_22 = ATgetArgument(h_27, 0);
            r_22 = ATgetArgument(h_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_22), o_22), (ATerm) ATinsert(CheckATermList(r_22), p_22));
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_22 = ATgetFirst((ATermList) t);
      t_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_22, t_22);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,x_22 = NULL,y_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if(match_cons(i_27, sym__2))
        {
          u_22 = ATgetArgument(i_27, 0);
          v_22 = ATgetArgument(i_27, 1);
        }
      else
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(match_cons(l_27, sym__2))
          {
            x_22 = ATgetArgument(l_27, 0);
            y_22 = ATgetArgument(l_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_22), u_22), (ATerm) ATinsert(CheckATermList(y_22), v_22));
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm m_27 = t;
  if((PushChoice() == 0))
    {
      ATerm b_24 = NULL,d_24 = NULL,e_24 = NULL,q_3 = NULL;
      e_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_24);
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_24);
      q_3 = t;
      t = SSLsetAnnotations(q_3, b_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_27;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_24 = ATgetFirst((ATermList) t);
      g_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_24, g_24);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if(match_cons(n_27, sym__2))
        {
          h_24 = ATgetArgument(n_27, 0);
          i_24 = ATgetArgument(n_27, 1);
        }
      else
        _fail(t);
      {
        ATerm o_27 = ATgetArgument(t, 1);
        if(match_cons(o_27, sym__2))
          {
            j_24 = ATgetArgument(o_27, 0);
            k_24 = ATgetArgument(o_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_24), h_24), (ATerm) ATinsert(CheckATermList(k_24), i_24));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_24 = NULL,b_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_24 = ATgetFirst((ATermList) t);
      b_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_24, b_25);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if(match_cons(p_27, sym__2))
        {
          c_25 = ATgetArgument(p_27, 0);
          d_25 = ATgetArgument(p_27, 1);
        }
      else
        _fail(t);
      {
        ATerm q_27 = ATgetArgument(t, 1);
        if(match_cons(q_27, sym__2))
          {
            e_25 = ATgetArgument(q_27, 0);
            f_25 = ATgetArgument(q_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_25), c_25), (ATerm) ATinsert(CheckATermList(f_25), d_25));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  a_61 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      b_61 = ATgetArgument(t, 0);
      c_61 = ATgetArgument(t, 1);
      z_60 = ATgetArgument(t, 2);
      {
        ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,p_3 = NULL;
        t = z_60;
        t = fetch_1_0(g_4, t);
        t = z_60;
        t = genzip_4_0(j_4, k_4, m_4, LiftPrimArg_0_0, t);
        i_22 = t;
        if(match_cons(t, sym__2))
          {
            e_22 = ATgetArgument(t, 0);
            f_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_22);
        d_22 = t;
        t = e_22;
        t = concat_0_0(t);
        g_22 = t;
        t = f_22;
        t = genzip_4_0(o_4, p_4, r_4, _id, t);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_22, h_22);
        p_3 = t;
        t = SSLsetAnnotations(p_3, d_22);
        if(match_cons(t, sym__2))
          {
            a_22 = ATgetArgument(t, 0);
            {
              ATerm s_27 = ATgetArgument(t, 1);
              if(match_cons(s_27, sym__2))
                {
                  b_22 = ATgetArgument(s_27, 0);
                  c_22 = ATgetArgument(s_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_22), (ATerm) ATmakeAppl(sym_PrimT_3, b_61, c_61, c_22)));
      }
    }
  else
    {
      ATerm n_23 = NULL,o_23 = NULL,s_23 = NULL,t_23 = NULL,v_23 = NULL,w_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,r_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          b_61 = ATgetArgument(t, 0);
          c_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_61;
      t = fetch_1_0(t_4, t);
      t = c_61;
      t = genzip_4_0(u_4, v_4, y_4, LiftPrimArg_0_0, t);
      a_24 = t;
      if(match_cons(t, sym__2))
        {
          v_23 = ATgetArgument(t, 0);
          w_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_24);
      t_23 = t;
      t = v_23;
      t = concat_0_0(t);
      y_23 = t;
      t = w_23;
      t = genzip_4_0(z_4, b_5, d_5, _id, t);
      z_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_23, z_23);
      r_3 = t;
      t = SSLsetAnnotations(r_3, t_23);
      if(match_cons(t, sym__2))
        {
          n_23 = ATgetArgument(t, 0);
          {
            ATerm t_27 = ATgetArgument(t, 1);
            if(match_cons(t_27, sym__2))
              {
                o_23 = ATgetArgument(t_27, 0);
                s_23 = ATgetArgument(t_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_23), (ATerm) ATmakeAppl(sym_PrimT_3, b_61, (ATerm)ATempty, s_23)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm t)
{
  static ATerm f_61 (ATerm t)
  {
    ATerm x_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_110(t);
        t = f_61(t);
        LocalPopChoice(a_28);
      }
    else
      {
        t = x_27;
        t = j_110(t);
      }
    return(t);
  }
  t = f_61(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  u_61 = t;
  if(match_cons(t, sym_Con_3))
    {
      r_61 = ATgetArgument(t, 0);
      s_61 = ATgetArgument(t, 1);
      t_61 = ATgetArgument(t, 2);
      {
        ATerm r_25 = NULL,x_3 = NULL;
        t = SSLgetAnnotations(u_61);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, r_61, s_61, t_61);
        x_3 = t;
        t = SSLsetAnnotations(x_3, r_25);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = u_61;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm b_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(g_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_28;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL;
  z_62 = t;
  if(match_cons(t, sym_Con_3))
    {
      a_63 = ATgetArgument(t, 0);
      b_63 = ATgetArgument(t, 1);
      y_62 = ATgetArgument(t, 2);
      {
        ATerm o_26 = NULL,z_3 = NULL;
        t = SSLgetAnnotations(z_62);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, a_63, b_63, y_62);
        z_3 = t;
        t = SSLsetAnnotations(z_3, o_26);
      }
    }
  else
    {
      ATerm k_27 = NULL,a_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          a_63 = ATgetArgument(t, 0);
          b_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_62);
      k_27 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, a_63, b_63);
      a_4 = t;
      t = SSLsetAnnotations(a_4, k_27);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm c_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      n_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_63;
  if(match_cons(t, sym_StratRule_3))
    {
      o_63 = ATgetArgument(t, 0);
      p_63 = ATgetArgument(t, 1);
      q_63 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_63), (ATerm) ATmakeAppl(sym_Where_1, q_63)), o_63));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          o_63 = ATgetArgument(t, 0);
          p_63 = ATgetArgument(t, 1);
          q_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_63;
      t = pureterm_0_0(t);
      t = p_63;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, p_63)), (ATerm) ATmakeAppl(sym_Where_1, q_63)), (ATerm) ATmakeAppl(sym_Match_1, o_63)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  static ATerm x_63 (ATerm t)
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_105(t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = SRTS_one(x_63, t);
      }
    return(t);
  }
  t = x_63(t);
  return(t);
}
static ATerm d_10 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,e_64 = NULL,g_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
  t = new_0_0(t);
  i_64 = t;
  t = u_28;
  {
    static ATerm j_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm g_28 = ATgetArgument(t, 0);
          if(match_cons(g_28, sym_Var_1))
            {
              if(((g_64 != NULL) && (g_64 != ATgetArgument(g_28, 0))))
                _fail(ATgetArgument(g_28, 0));
              else
                g_64 = ATgetArgument(g_28, 0);
            }
          else
            _fail(t);
          if(((a_64 != NULL) && (a_64 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_64 = ATgetArgument(t, 1);
          {
            ATerm h_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, g_64);
      return(t);
    }
    t = oncetd_1_0(j_5, t);
  }
  j_64 = t;
  t = v_28;
  {
    static ATerm l_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm l_28 = ATgetArgument(t, 0);
          if(match_cons(l_28, sym_Var_1))
            {
              if(((g_64 != NULL) && (g_64 != ATgetArgument(l_28, 0))))
                _fail(ATgetArgument(l_28, 0));
              else
                g_64 = ATgetArgument(l_28, 0);
            }
          else
            _fail(t);
          if(((e_64 != NULL) && (e_64 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_64 = ATgetArgument(t, 1);
          {
            ATerm p_28 = ATgetArgument(t, 2);
            if(match_cons(p_28, sym_CallT_3))
              {
                if(((z_63 != NULL) && (z_63 != ATgetArgument(p_28, 0))))
                  _fail(ATgetArgument(p_28, 0));
                else
                  z_63 = ATgetArgument(p_28, 0);
                {
                  ATerm r_28 = ATgetArgument(p_28, 1);
                  if(((ATgetType(r_28) != AT_LIST) || !(ATisEmpty(r_28))))
                    _fail(t);
                }
                {
                  ATerm s_28 = ATgetArgument(p_28, 2);
                  if(((ATgetType(s_28) != AT_LIST) || !(ATisEmpty(s_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, i_64);
      return(t);
    }
    t = oncetd_1_0(l_5, t);
  }
  k_64 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_64), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, j_64, k_64, (ATerm) ATmakeAppl(sym_Seq_2, w_28, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(z_63), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_64), not_null(e_64), term_q_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_64)), (ATerm) ATmakeAppl(sym_Var_1, i_64))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
          q_65 = t;
          if(match_cons(t, sym_SRule_1))
            {
              r_65 = ATgetArgument(t, 0);
              t = r_65;
              if(match_cons(t, sym_Rule_3))
                {
                  l_65 = ATgetArgument(t, 0);
                  m_65 = ATgetArgument(t, 1);
                  n_65 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_65;
              t = d_10(l_65, m_65, n_65, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm y_27 = NULL,d_28 = NULL,e_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  r_65 = ATgetArgument(t, 0);
                  s_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_65);
              y_27 = t;
              t = s_65;
              t = desugarRule_0_0(t);
              d_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, r_65, d_28);
              e_4 = t;
              t = SSLsetAnnotations(e_4, y_27);
            }
          LocalPopChoice(c_29);
        }
      else
        {
          t = b_29;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  static ATerm n_5 (ATerm t)
  {
    t = topdown_1_0(n_104, t);
    return(t);
  }
  t = n_104(t);
  t = SRTS_all(n_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
    }
  t = repeat_2_0(p_5, _id, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm j_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(l_29);
    }
  else
    {
      t = j_29;
      {
        ATerm m_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL;
            k_67 = t;
            if(match_cons(t, sym_CallT_3))
              {
                m_67 = ATgetArgument(t, 0);
                n_67 = ATgetArgument(t, 1);
                o_67 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_67;
            t = z_9(m_67, n_67, o_67, t);
            LocalPopChoice(u_29);
          }
        else
          {
            t = m_29;
            {
              ATerm v_29 = t;
              int w_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(w_29);
                }
              else
                {
                  t = v_29;
                  {
                    ATerm y_29 = t;
                    int z_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(z_29);
                      }
                    else
                      {
                        t = y_29;
                        {
                          ATerm a_30 = t;
                          int b_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_30 = t;
                              int d_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_67 = NULL,y_67 = NULL,a_68 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      x_67 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_67;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      y_67 = ATgetArgument(t, 0);
                                      t = y_67;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          y_67 = ATgetArgument(t, 0);
                                          a_68 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, y_67, a_68);
                                    }
                                  LocalPopChoice(d_30);
                                }
                              else
                                {
                                  t = c_30;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(b_30);
                            }
                          else
                            {
                              t = a_30;
                              {
                                ATerm e_30 = t;
                                int f_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(f_30);
                                  }
                                else
                                  {
                                    t = e_30;
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
  t = topdown_1_0(o_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL;
  m_69 = t;
  t = SSL_explode_term(m_69);
  if(match_cons(t, sym__2))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_30 = ATgetArgument(t, 1);
        if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
          {
            l_69 = ATgetFirst((ATermList) i_30);
            {
              ATerm j_30 = (ATerm) ATgetNext((ATermList) i_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_69;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,o_28 = NULL;
  o_28 = t;
  t = SSL_explode_term(o_28);
  if(match_cons(t, sym__2))
    {
      ATerm m_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_30 = ATgetArgument(t, 1);
        if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
          {
            ATerm s_30 = ATgetFirst((ATermList) n_30);
            j_28 = (ATerm) ATgetNext((ATermList) n_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_k_20;
  k_28 = t;
  t = SSL_mkterm(k_28, j_28);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL;
  static ATerm n_69 (ATerm t)
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_68 = NULL,c_69 = NULL,g_69 = NULL;
        t_68 = t;
        t = map_1_0(s_5, t);
        t = p_108(t);
        c_69 = t;
        t = t_68;
        t = map_1_0(t_5, t);
        t = n_69(t);
        g_69 = t;
        t = (ATerm) ATinsert(CheckATermList(g_69), c_69);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = map_1_0(u_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = n_69(t);
  s_68 = t;
  t = term_k_20;
  r_68 = t;
  t = SSL_mkterm(r_68, s_68);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm o_69 = NULL;
  o_69 = t;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL;
        t = o_69;
        t = new_0_0(t);
        q_69 = t;
        t = new_0_0(t);
        r_69 = t;
        t = new_0_0(t);
        s_69 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_69), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, o_69), (ATerm) ATmakeAppl(sym_Var_1, r_69))), (ATerm) ATmakeAppl(sym_Var_1, s_69)), (ATerm)ATmakeAppl(sym_VarDec_2, q_69, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_31), term_d_31)), r_69, (ATerm)ATmakeAppl(sym_Var_1, r_69), s_69, (ATerm) ATmakeAppl(sym_Var_1, s_69));
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm u_69 = NULL,y_69 = NULL,z_69 = NULL;
          t = o_69;
          t = new_0_0(t);
          u_69 = t;
          t = new_0_0(t);
          y_69 = t;
          t = new_0_0(t);
          z_69 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_69), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, o_69), (ATerm) ATmakeAppl(sym_Var_1, y_69))), (ATerm) ATmakeAppl(sym_Var_1, z_69)), (ATerm)ATmakeAppl(sym_VarDec_2, u_69, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_31), term_d_31)), y_69, (ATerm)ATmakeAppl(sym_Var_1, y_69), z_69, (ATerm) ATmakeAppl(sym_Var_1, z_69));
        }
      }
  }
  return(t);
}
static ATerm e_10 (ATerm z_53, ATerm a_54, ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_53, a_54);
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      t = SSL_subtr(z_53, a_54);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL;
  if(match_cons(t, sym__2))
    {
      a_70 = ATgetArgument(t, 0);
      b_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_70, b_70, (ATerm) ATempty);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm c_70 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if(((ATgetType(g_31) != AT_INT) || (ATgetInt((ATermInt) g_31) != 0)))
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
      }
      c_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_70;
  return(t);
}
ATerm copy_1_0 (ATerm b_127 (ATerm), ATerm t)
{
  static ATerm e_6 (ATerm t)
  {
    ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
    if(match_cons(t, sym__3))
      {
        d_70 = ATgetArgument(t, 0);
        e_70 = ATgetArgument(t, 1);
        f_70 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, d_70, term_b_20);
    t = geq_0_0(t);
    t = term_b_20;
    i_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_70, term_b_20);
    t = e_10(d_70, i_70, t);
    g_70 = t;
    t = e_70;
    t = b_127(t);
    h_70 = t;
    t = (ATerm) ATmakeAppl(sym__3, g_70, e_70, (ATerm) ATinsert(CheckATermList(f_70), h_70));
    return(t);
  }
  t = for_3_0(a_6, c_6, e_6, t);
  return(t);
}
static ATerm f_10 (ATerm q_23, ATerm r_23, ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
  t = new_0_0(t);
  j_70 = t;
  t = new_0_0(t);
  k_70 = t;
  t = new_0_0(t);
  l_70 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_70), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_23)), (ATerm) ATmakeAppl(sym_Var_1, k_70))), (ATerm) ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_23)), (ATerm) ATmakeAppl(sym_Var_1, l_70)))), (ATerm)ATmakeAppl(sym_VarDec_2, j_70, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_31), term_d_31)), k_70, (ATerm)ATmakeAppl(sym_Var_1, k_70), l_70, (ATerm) ATmakeAppl(sym_Var_1, l_70));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm r_70 = NULL,u_70 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_70 = ATgetFirst((ATermList) t);
      u_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_70;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_70;
    }
  else
    {
      t = u_70;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm v_75 (ATerm w_71, ATerm a_72, ATerm b_72, ATerm d_72, ATerm t)
{
  ATerm s_72 = NULL,v_72 = NULL,w_72 = NULL,z_72 = NULL,b_73 = NULL,e_73 = NULL,g_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,o_73 = NULL,p_73 = NULL;
  t = term_b_20;
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_72, term_b_20);
  t = i_11(a_72, p_73, t);
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_73, term_i_31);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_72 = ATgetFirst((ATermList) t);
      w_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_72;
  t = last_0_0(t);
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_72), v_72), w_72);
  t = genzip_4_0(f_6, g_6, h_6, i_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      z_72 = ATgetArgument(t, 0);
      b_73 = ATgetArgument(t, 1);
      e_73 = ATgetArgument(t, 2);
      g_73 = ATgetArgument(t, 3);
      k_73 = ATgetArgument(t, 4);
      l_73 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_73), e_73), w_72);
  t = concat_0_0(t);
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, w_71, term_j_31), b_73, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(m_73), v_72), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_72)), (ATerm) ATmakeAppl(sym_Op_2, w_71, g_73))), (ATerm)ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_72)), (ATerm) ATmakeAppl(sym_Op_2, w_71, l_73))), (ATerm) ATmakeAppl(sym_Seqs_1, z_72)))));
  return(t);
}
static ATerm w_75 (ATerm i_74, ATerm j_74, ATerm k_74, ATerm n_74, ATerm t)
{
  ATerm s_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,z_74 = NULL,a_75 = NULL,g_75 = NULL,h_75 = NULL;
  t = n_74;
  t = new_0_0(t);
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_74, (ATerm) ATmakeAppl(sym_Var_1, s_74));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      v_74 = ATgetArgument(t, 0);
      w_74 = ATgetArgument(t, 1);
      x_74 = ATgetArgument(t, 2);
      z_74 = ATgetArgument(t, 3);
      a_75 = ATgetArgument(t, 4);
      g_75 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_74, a_75);
  t = conc_0_0(t);
  h_75 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, i_74, term_k_31), w_74, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_75), s_74), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_74)), (ATerm) ATmakeAppl(sym_Op_2, i_74, z_74))), (ATerm)ATmakeAppl(sym_Op_2, i_74, g_75), (ATerm) ATmakeAppl(sym_Seqs_1, v_74)))));
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      ATerm m_31 = ATgetArgument(t, 1);
      if(((ATgetType(m_31) != AT_LIST) || !(ATisEmpty(m_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,a_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      if(((ATgetType(n_31) == AT_LIST) && !(ATisEmpty(n_31))))
        {
          v_73 = ATgetFirst((ATermList) n_31);
          w_73 = (ATerm) ATgetNext((ATermList) n_31);
        }
      else
        _fail(t);
      {
        ATerm o_31 = ATgetArgument(t, 1);
        if(((ATgetType(o_31) == AT_LIST) && !(ATisEmpty(o_31))))
          {
            x_73 = ATgetFirst((ATermList) o_31);
            a_74 = (ATerm) ATgetNext((ATermList) o_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_73, x_73), (ATerm) ATmakeAppl(sym__2, w_73, a_74));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm b_74 = NULL,d_74 = NULL;
  if(match_cons(t, sym__2))
    {
      b_74 = ATgetArgument(t, 0);
      d_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_74), b_74);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  if(match_cons(t, sym__2))
    {
      f_74 = ATgetArgument(t, 0);
      g_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(f_74, g_74, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL;
  j_75 = t;
  if(match_cons(t, sym__3))
    {
      k_75 = ATgetArgument(t, 0);
      n_75 = ATgetArgument(t, 1);
      o_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_75;
  if(match_string(t, "T"))
    {
      t = o_75;
      if(match_cons(t, sym__2))
        {
          p_75 = ATgetArgument(t, 0);
          q_75 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_75;
      if(match_int(t, 0))
        {
          ATerm p_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_75(k_75, p_75, q_75, j_75, t);
              LocalPopChoice(r_31);
            }
          else
            {
              t = p_31;
              {
                ATerm s_75 = NULL;
                t = j_75;
                t = new_0_0(t);
                s_75 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, k_75, term_j_31), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_75), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_75)), (ATerm) ATmakeAppl(sym_Op_2, k_75, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_75)), (ATerm) ATmakeAppl(sym_Op_2, k_75, (ATerm) ATempty))), term_q_24))));
              }
            }
        }
      else
        {
          t = v_75(k_75, p_75, q_75, j_75, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = o_75;
      if(match_cons(t, sym__2))
        {
          p_75 = ATgetArgument(t, 0);
          q_75 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_75(k_75, p_75, q_75, j_75, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_116 (ATerm), ATerm t)
{
  ATerm c_15 = NULL;
  static ATerm k_6 (ATerm t)
  {
    t = s_116(t);
    if(((c_15 != NULL) && (c_15 != t)))
      _fail(t);
    else
      c_15 = t;
    return(t);
  }
  t = fetch_1_0(k_6, t);
  t = not_null(c_15);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  t = term_z_16;
  e_15 = t;
  t = (ATerm) ATinsert(ATempty, term_s_31);
  f_15 = t;
  t = SSL_printnl(e_15, f_15);
  t = term_b_20;
  d_15 = t;
  t = SSL_exit(d_15);
  t = (ATerm) ATinsert(ATempty, term_s_31);
  return(t);
}
ATerm debug_1_0 (ATerm v_111 (ATerm), ATerm t)
{
  ATerm g_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  g_15 = t;
  t = v_111(t);
  j_15 = t;
  t = term_z_16;
  k_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_15), j_15);
  l_15 = t;
  t = SSL_printnl(k_15, l_15);
  t = g_15;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm y_31 = ATgetArgument(t, 0);
          k_13 = ATgetArgument(t, 1);
          l_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(w_31);
      t = l_13;
      t = foldr_3_0(v_6, w_6, x_6, t);
      t = k_13;
      t = foldr_3_0(y_6, z_6, a_7, t);
    }
  else
    {
      t = v_31;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm z_31 = ATgetArgument(t, 0);
          k_13 = ATgetArgument(t, 1);
          l_13 = ATgetArgument(t, 2);
          {
            ATerm b_32 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_13;
      t = foldr_3_0(b_7, d_7, e_7, t);
      t = k_13;
      t = foldr_3_0(f_7, g_7, h_7, t);
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  if(match_cons(t, sym__2))
    {
      w_13 = ATgetArgument(t, 0);
      x_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(w_13, x_13, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(z_13, a_14, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm e_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(e_14, g_14, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm h_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      h_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(h_14, j_14, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      ATerm d_32 = ATgetArgument(t, 1);
      ATerm e_32 = ATgetArgument(t, 2);
      ATerm g_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm h_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_15 = NULL;
      static ATerm q_6 (ATerm t)
      {
        ATerm z_15 = NULL,a_16 = NULL;
        z_15 = t;
        {
          ATerm k_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  a_16 = ATgetArgument(t, 0);
                  {
                    ATerm m_32 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm n_32 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(l_32);
              t = a_16;
              if(((y_15 != NULL) && (y_15 != t)))
                _fail(t);
              else
                y_15 = t;
              t = z_15;
            }
          else
            {
              t = k_32;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  a_16 = ATgetArgument(t, 0);
                  {
                    ATerm o_32 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm p_32 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm q_32 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = a_16;
              if(((y_15 != NULL) && (y_15 != t)))
                _fail(t);
              else
                y_15 = t;
              t = z_15;
            }
        }
        return(t);
      }
      t = fetch_1_0(q_6, t);
      {
        static ATerm r_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((y_15 != NULL) && (y_15 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_15 = ATgetArgument(t, 0);
              {
                ATerm r_32 = ATgetArgument(t, 1);
              }
              {
                ATerm s_32 = ATgetArgument(t, 2);
              }
              {
                ATerm t_32 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_6, t);
      }
      t = not_null(y_15);
      t = debug_1_0(s_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(j_32);
    }
  else
    {
      t = h_32;
      {
        ATerm z_17 = NULL;
        z_17 = t;
        t = map_1_0(u_6, t);
        t = z_17;
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(i_7, t);
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              {
                ATerm l_14 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_14 = ATgetFirst((ATermList) t);
                    {
                      ATerm w_32 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = l_14;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,r_14 = NULL;
  g_18 = t;
  t = SSL_explode_term(g_18);
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_32 = ATgetArgument(t, 1);
        if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
          {
            h_18 = ATgetFirst((ATermList) z_32);
            {
              ATerm b_33 = (ATerm) ATgetNext((ATermList) z_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(g_18);
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_33 = ATgetArgument(t, 1);
        if(((ATgetType(d_33) == AT_LIST) && !(ATisEmpty(d_33))))
          {
            ATerm f_33 = ATgetFirst((ATermList) d_33);
            ATerm g_33 = (ATerm) ATgetNext((ATermList) d_33);
            if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
              {
                r_14 = ATgetFirst((ATermList) g_33);
                {
                  ATerm l_33 = (ATerm) ATgetNext((ATermList) g_33);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, h_18, r_14);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(j_7, m_7, t);
  return(t);
}
ATerm alltd_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  static ATerm s_18 (ATerm t)
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_106(t);
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        t = SRTS_all(s_18, t);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
static ATerm r_9 (ATerm k_72, ATerm l_72, ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  u_18 = t;
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_72, l_72);
        t = n_11(k_72, l_72, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_33 = ATgetFirst((ATermList) t);
            t_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_33);
        {
          ATerm v_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, k_72, l_72, t_18);
          t = lookup_table_0_1(k_72, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_11(l_72, t_18, v_18, t);
          t = (ATerm) ATmakeAppl(sym__3, k_72, l_72, t_18);
        }
      }
    else
      {
        t = p_33;
        {
          ATerm z_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, k_72, l_72);
          t = lookup_table_0_1(k_72, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_11(l_72, z_18, t);
          t = (ATerm) ATmakeAppl(sym__2, k_72, l_72);
        }
      }
  }
  t = u_18;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_137 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,m_19 = NULL,n_19 = NULL;
  g_19 = t;
  t = a_137(t);
  f_19 = t;
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL;
        t = term_v_33;
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_19, term_v_33);
        t = n_11(f_19, o_19, t);
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_19 = ATgetFirst((ATermList) t);
      b_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_19, term_v_33, b_19);
  t = lookup_table_0_1(f_19, t);
  n_19 = t;
  t = term_v_33;
  h_19 = t;
  t = n_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(h_19, b_19, m_19, t);
  t = e_19;
  {
    static ATerm n_7 (ATerm t)
    {
      ATerm q_19 = NULL;
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_19, q_19);
      t = r_9(f_19, q_19, t);
      return(t);
    }
    t = map_1_0(n_7, t);
  }
  t = g_19;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_107(t);
      t = v_107(t);
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      t = v_107(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_136 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  v_19 = t;
  t = z_136(t);
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_19, term_v_33);
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_20 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_34 = ATgetArgument(t, 0);
            ATerm d_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_33;
        n_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_19, term_v_33);
        t = n_11(s_19, n_20, t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = (ATerm) ATempty;
      }
  }
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_19, term_v_33, (ATerm) ATinsert(CheckATermList(w_19), (ATerm) ATempty));
  t = lookup_table_0_1(s_19, t);
  a_20 = t;
  t = term_v_33;
  x_19 = t;
  t = (ATerm) ATinsert(CheckATermList(w_19), (ATerm) ATempty);
  y_19 = t;
  t = a_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(x_19, y_19, z_19, t);
  t = v_19;
  return(t);
}
ATerm scope_2_0 (ATerm b_137 (ATerm), ATerm c_137 (ATerm), ATerm t)
{
  static ATerm o_7 (ATerm t)
  {
    t = end_scope_1_0(b_137, t);
    return(t);
  }
  t = begin_scope_1_0(b_137, t);
  t = restore_always_2_0(c_137, o_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,z_20 = NULL;
  t_20 = t;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_20 = ATgetFirst((ATermList) t);
      z_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_20;
  if(match_cons(t, sym__2))
    {
      r_20 = ATgetArgument(t, 0);
      s_20 = ATgetArgument(t, 1);
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_20;
            if((u_20 != t))
              {
                _fail(t);
              }
            t = s_20;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            t = (ATerm) ATmakeAppl(sym__2, u_20, z_20);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, u_20, z_20);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      if(((ATgetType(g_34) != AT_LIST) || !(ATisEmpty(g_34))))
        _fail(t);
      {
        ATerm h_34 = ATgetArgument(t, 1);
        if(((ATgetType(h_34) != AT_LIST) || !(ATisEmpty(h_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm c_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
        {
          c_24 = ATgetFirst((ATermList) i_34);
          l_24 = (ATerm) ATgetNext((ATermList) i_34);
        }
      else
        _fail(t);
      {
        ATerm j_34 = ATgetArgument(t, 1);
        if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
          {
            m_24 = ATgetFirst((ATermList) j_34);
            n_24 = (ATerm) ATgetNext((ATermList) j_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_24, m_24), (ATerm) ATmakeAppl(sym__2, l_24, n_24));
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_24), o_24);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm w_22 = NULL,f_23 = NULL,g_23 = NULL,k_23 = NULL;
  w_22 = t;
  {
    ATerm k_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_34 = ATgetArgument(t, 0);
            ATerm q_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(n_34);
        t = w_22;
      }
    else
      {
        t = k_34;
        {
          ATerm x_23 = NULL;
          if(match_cons(t, sym__3))
            {
              f_23 = ATgetArgument(t, 0);
              g_23 = ATgetArgument(t, 1);
              k_23 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, f_23, g_23);
          t = genzip_4_0(p_7, q_7, r_7, _id, t);
          x_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_23, k_23);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  static ATerm s_7 (ATerm t)
  {
    ATerm w_14 = NULL;
    t = w_103(t);
    w_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_14, not_null(s_24));
    t = lookup_0_0(t);
    t = x_103(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((s_24 != NULL) && (s_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_24;
  t = alltd_1_0(s_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm a_25 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_25 = ATgetArgument(t, 0);
      {
        ATerm r_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_25;
  return(t);
}
static ATerm u_7 (ATerm t)
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
static ATerm a_8 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if(((ATgetType(v_34) != AT_LIST) || !(ATisEmpty(v_34))))
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
static ATerm d_8 (ATerm t)
{
  ATerm o_25 = NULL,z_25 = NULL,b_26 = NULL,l_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_35 = ATgetArgument(t, 0);
      if(((ATgetType(d_35) == AT_LIST) && !(ATisEmpty(d_35))))
        {
          o_25 = ATgetFirst((ATermList) d_35);
          z_25 = (ATerm) ATgetNext((ATermList) d_35);
        }
      else
        _fail(t);
      {
        ATerm g_35 = ATgetArgument(t, 1);
        if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
          {
            b_26 = ATgetFirst((ATermList) g_35);
            l_26 = (ATerm) ATgetNext((ATermList) g_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_25, b_26), (ATerm) ATmakeAppl(sym__2, z_25, l_26));
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym__2))
    {
      m_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_26), m_26);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,v_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_35 = ATgetArgument(t, 0);
      if(match_cons(h_35, sym_VarDec_2))
        {
          q_26 = ATgetArgument(h_35, 0);
          {
            ATerm i_35 = ATgetArgument(h_35, 1);
          }
        }
      else
        _fail(t);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, q_26);
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_35, r_26);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, q_26), (ATerm) ATmakeAppl(sym_Defined_2, term_j_35, r_26));
  t = v_10(h_8, t_26, v_26, t);
  t = s_26;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm b_27 = NULL,e_27 = NULL,h_15 = NULL;
  b_27 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_s_34;
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_34, b_27);
  t = x_10(h_15, b_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_35) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_27;
  return(t);
}
static ATerm v_9 (ATerm c_26, ATerm d_26, ATerm h_26, ATerm e_26, ATerm g_26, ATerm t)
{
  ATerm v_24 = NULL,y_24 = NULL,z_24 = NULL;
  t = e_26;
  t = map_1_0(t_7, t);
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_24, d_26, g_26);
  t = substitute_2_0(u_7, _id, t);
  y_24 = t;
  {
    static ATerm b_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, h_26, c_26);
      t = genzip_4_0(c_8, d_8, f_8, g_8, t);
      t = y_24;
      t = alltd_1_0(i_8, t);
      if(((z_24 != NULL) && (z_24 != t)))
        _fail(t);
      else
        z_24 = t;
      return(t);
    }
    t = scope_2_0(a_8, b_8, t);
  }
  t = not_null(z_24);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,q_28 = NULL,t_28 = NULL,f_29 = NULL,h_4 = NULL;
  f_29 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_29);
  m_28 = t;
  t = n_28;
  t = new_0_0(t);
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_28, q_28);
  h_4 = t;
  t = SSLsetAnnotations(h_4, m_28);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,k_29 = NULL,n_29 = NULL,i_4 = NULL;
  n_29 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_29 = ATgetArgument(t, 0);
      i_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_29);
  g_29 = t;
  t = h_29;
  t = new_0_0(t);
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_29, i_29);
  i_4 = t;
  t = SSLsetAnnotations(i_4, g_29);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm o_29 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_29 = ATgetArgument(t, 0);
      {
        ATerm m_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, o_29);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm p_29 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_29 = ATgetArgument(t, 0);
      {
        ATerm n_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, p_29);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,j_27 = NULL,r_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,z_27 = NULL,i_28 = NULL;
  v_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_35 = ATgetFirst((ATermList) t);
      if(match_cons(o_35, sym_SDefT_4))
        {
          f_27 = ATgetArgument(o_35, 0);
          g_27 = ATgetArgument(o_35, 1);
          j_27 = ATgetArgument(o_35, 2);
          {
            ATerm q_35 = ATgetArgument(o_35, 3);
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
  t = g_27;
  t = map_1_0(j_8, t);
  r_27 = t;
  t = j_27;
  t = map_1_0(k_8, t);
  u_27 = t;
  t = r_27;
  t = map_1_0(l_8, t);
  w_27 = t;
  t = u_27;
  t = map_1_0(m_8, t);
  z_27 = t;
  t = v_27;
  {
    static ATerm n_8 (ATerm t)
    {
      ATerm q_29 = NULL,s_29 = NULL,t_29 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm s_35 = ATgetArgument(t, 0);
          q_29 = ATgetArgument(t, 1);
          s_29 = ATgetArgument(t, 2);
          t_29 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_9(w_27, z_27, q_29, s_29, t_29, t);
      return(t);
    }
    t = map_1_0(n_8, t);
  }
  t = choices_0_0(t);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_27, r_27, u_27, i_28);
  return(t);
}
static ATerm e_78 (ATerm s_76, ATerm t_76, ATerm w_76, ATerm x_76, ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,l_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_76, t_76);
  t = Definitions_0_0(t);
  b_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_77, w_76);
  e_77 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      ATerm u_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_77);
  c_77 = t;
  t = b_77;
  {
    ATerm v_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_77 = NULL,i_77 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_77 = ATgetFirst((ATermList) t);
            i_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_77;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_77;
        LocalPopChoice(x_35);
      }
    else
      {
        t = v_35;
        {
          ATerm a_36 = t;
          int c_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(c_36);
            }
          else
            {
              t = a_36;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  d_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_77, w_76);
  l_4 = t;
  t = SSLsetAnnotations(l_4, c_77);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,s_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
  q_77 = t;
  if(match_cons(t, sym__2))
    {
      s_77 = ATgetArgument(t, 0);
      w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_77;
  if(match_cons(t, sym__2))
    {
      u_77 = ATgetArgument(t, 0);
      v_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_77;
  if(match_cons(t, sym_Mod_2))
    {
      o_77 = ATgetArgument(t, 0);
      p_77 = ATgetArgument(t, 1);
      {
        ATerm d_36 = t;
        int e_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_78 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, o_77, p_77, v_77);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            d_78 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_78, w_77);
            LocalPopChoice(e_36);
          }
        else
          {
            t = d_36;
            t = e_78(u_77, v_77, w_77, q_77, t);
          }
      }
    }
  else
    {
      t = e_78(u_77, v_77, w_77, q_77, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_116 (ATerm), ATerm t)
{
  static ATerm m_79 (ATerm t)
  {
    ATerm y_78 = NULL,k_79 = NULL,l_79 = NULL;
    l_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_78 = ATgetFirst((ATermList) t);
        k_79 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_28 = NULL,a_29 = NULL,n_4 = NULL;
          t = SSLgetAnnotations(l_79);
          x_28 = t;
          t = k_79;
          t = m_79(t);
          a_29 = t;
          t = (ATerm) ATinsert(CheckATermList(a_29), y_78);
          n_4 = t;
          t = SSLsetAnnotations(n_4, x_28);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_79;
        t = x_116(t);
      }
    return(t);
  }
  t = m_79(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
  i_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_78;
    }
  else
    {
      static ATerm o_8 (ATerm t)
      {
        t = not_null(k_78);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_78 = ATgetFirst((ATermList) t);
          if(((k_78 != NULL) && (k_78 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_78;
      t = at_end_1_0(o_8, t);
    }
  return(t);
}
static ATerm j_80 (ATerm q_79, ATerm t)
{
  ATerm r_79 = NULL;
  t = SSL_explode_term(q_79);
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_79;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_79 = NULL,e_80 = NULL,f_80 = NULL;
  f_80 = t;
  if(match_cons(t, sym__2))
    {
      t_79 = ATgetArgument(t, 0);
      e_80 = ATgetArgument(t, 1);
      {
        ATerm h_36 = t;
        int i_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_8 (ATerm t)
            {
              t = e_80;
              return(t);
            }
            t = t_79;
            t = at_end_1_0(p_8, t);
            LocalPopChoice(i_36);
          }
        else
          {
            t = h_36;
            t = j_80(f_80, t);
          }
      }
    }
  else
    {
      t = j_80(f_80, t);
    }
  return(t);
}
static ATerm l_10 (ATerm j_123 (ATerm), ATerm r_64, ATerm q_64, ATerm t)
{
  static ATerm m_81 (ATerm t)
  {
    ATerm e_81 = NULL,g_81 = NULL,j_81 = NULL;
    e_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_81;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_81 = ATgetFirst((ATermList) t);
            j_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_81;
              {
                static ATerm q_8 (ATerm t)
                {
                  t = q_64;
                  return(t);
                }
                t = y_10(j_123, q_8, g_81, j_81, t);
              }
              t = m_81(t);
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              {
                ATerm r_29 = NULL,x_29 = NULL,q_4 = NULL;
                t = SSLgetAnnotations(e_81);
                r_29 = t;
                t = j_81;
                t = m_81(t);
                x_29 = t;
                t = (ATerm) ATinsert(CheckATermList(x_29), g_81);
                q_4 = t;
                t = SSLsetAnnotations(q_4, r_29);
              }
            }
        }
      }
    return(t);
  }
  t = r_64;
  t = m_81(t);
  return(t);
}
ATerm genzip_4_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm t)
{
  static ATerm x_81 (ATerm t)
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_108(t);
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        {
          ATerm p_81 = NULL,q_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,s_4 = NULL;
          t = a_109(t);
          w_81 = t;
          if(match_cons(t, sym__2))
            {
              q_81 = ATgetArgument(t, 0);
              t_81 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_81);
          p_81 = t;
          t = q_81;
          t = c_109(t);
          u_81 = t;
          t = t_81;
          t = x_81(t);
          v_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_81, v_81);
          s_4 = t;
          t = SSLsetAnnotations(s_4, p_81);
          t = b_109(t);
        }
      }
    return(t);
  }
  t = x_81(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      if(((ATgetType(q_36) != AT_LIST) || !(ATisEmpty(q_36))))
        _fail(t);
      {
        ATerm r_36 = ATgetArgument(t, 1);
        if(((ATgetType(r_36) != AT_LIST) || !(ATisEmpty(r_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL,j_82 = NULL,k_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
        {
          f_82 = ATgetFirst((ATermList) s_36);
          g_82 = (ATerm) ATgetNext((ATermList) s_36);
        }
      else
        _fail(t);
      {
        ATerm t_36 = ATgetArgument(t, 1);
        if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
          {
            j_82 = ATgetFirst((ATermList) t_36);
            k_82 = (ATerm) ATgetNext((ATermList) t_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_82, j_82), (ATerm) ATmakeAppl(sym__2, g_82, k_82));
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL;
  if(match_cons(t, sym__2))
    {
      l_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_82), l_82);
  return(t);
}
static ATerm q_10 (ATerm k_755, ATerm p_755, ATerm m_77, ATerm t)
{
  ATerm z_81 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL;
  t = SSL_explode_term(p_755);
  if(match_cons(t, sym__2))
    {
      z_81 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_755);
  if(match_cons(t, sym__2))
    {
      if((z_81 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_82, c_82);
  t = genzip_4_0(s_8, t_8, u_8, _id, t);
  d_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_82, m_77);
  t = conc_0_0(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm u_82 = NULL;
  u_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_82);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,w_4 = NULL;
  y_82 = t;
  if(match_cons(t, sym__2))
    {
      w_82 = ATgetArgument(t, 0);
      x_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_82);
  v_82 = t;
  t = x_82;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_82, x_82);
  w_4 = t;
  t = SSLsetAnnotations(w_4, v_82);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,h_84 = NULL;
  c_84 = t;
  if(match_cons(t, sym__2))
    {
      d_84 = ATgetArgument(t, 0);
      e_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_84 = ATgetFirst((ATermList) t);
      h_84 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_84(d_84, e_84, c_84, t);
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_84), f_84), h_84);
          }
      }
    }
  else
    {
      t = x_84(d_84, e_84, c_84, t);
    }
  return(t);
}
static ATerm x_84 (ATerm z_82, ATerm c_83, ATerm e_83, ATerm t)
{
  ATerm f_83 = NULL,j_83 = NULL,x_4 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL;
  t = SSLgetAnnotations(e_83);
  f_83 = t;
  t = c_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_83 = ATgetFirst((ATermList) t);
      r_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_83;
  if(match_cons(t, sym__2))
    {
      p_83 = ATgetArgument(t, 0);
      q_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_83;
        if((p_83 != t))
          {
            _fail(t);
          }
        t = r_83;
        LocalPopChoice(y_36);
      }
    else
      {
        t = w_36;
        t = c_83;
        t = q_10(p_83, q_83, r_83, t);
      }
  }
  j_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_82, j_83);
  x_4 = t;
  t = SSLsetAnnotations(x_4, f_83);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm w_84 = NULL;
  if(match_cons(t, sym__2))
    {
      w_84 = ATgetArgument(t, 0);
      if((w_84 != ATgetArgument(t, 1)))
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
  ATerm z_36 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(w_8, x_8, y_8, t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = z_36;
      {
        ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL;
        n_84 = t;
        if(match_cons(t, sym__2))
          {
            o_84 = ATgetArgument(t, 0);
            p_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_84;
        t = l_10(a_9, o_84, p_84, t);
      }
    }
  return(t);
}
static ATerm s_10 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm d_79, ATerm a_79, ATerm i_79, ATerm e_79, ATerm b_79, ATerm c_79, ATerm t)
{
  ATerm y_84 = NULL,b_85 = NULL,c_85 = NULL,f_85 = NULL,h_85 = NULL,i_85 = NULL,m_85 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_79, e_79);
  t = u_136(t);
  if(match_cons(t, sym__2))
    {
      b_85 = ATgetArgument(t, 0);
      y_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_85;
  t = v_136(t);
  c_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_85, i_79);
  t = diff_0_0(t);
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_85, a_79);
  t = conc_0_0(t);
  h_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_85, i_79);
  t = conc_0_0(t);
  i_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_79, b_85, b_79);
  t = w_136(t);
  m_85 = t;
  t = (ATerm) ATmakeAppl(sym__5, h_85, i_85, y_84, m_85, c_79);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,x_85 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
        {
          o_85 = ATgetFirst((ATermList) c_37);
          p_85 = (ATerm) ATgetNext((ATermList) c_37);
        }
      else
        _fail(t);
      s_85 = ATgetArgument(t, 1);
      t_85 = ATgetArgument(t, 2);
      u_85 = ATgetArgument(t, 3);
      x_85 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = s_10(u_136, v_136, w_136, o_85, p_85, s_85, t_85, u_85, x_85, t);
  return(t);
}
ATerm while_not_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t)
{
  static ATerm z_85 (ATerm t)
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_110(t);
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = a_111(t);
        t = z_85(t);
      }
    return(t);
  }
  t = z_85(t);
  return(t);
}
ATerm for_3_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm t)
{
  t = c_111(t);
  t = while_not_2_0(d_111, e_111, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
  if(match_cons(t, sym__3))
    {
      m_86 = ATgetArgument(t, 0);
      n_86 = ATgetArgument(t, 1);
      o_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, m_86, m_86, n_86, o_86, (ATerm) ATempty);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL;
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
      r_86 = ATgetArgument(t, 3);
      s_86 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_86, s_86);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, g_9, h_9, t);
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
      {
        ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL;
        if(match_cons(t, sym__5))
          {
            y_86 = ATgetArgument(t, 0);
            b_87 = ATgetArgument(t, 1);
            c_87 = ATgetArgument(t, 2);
            d_87 = ATgetArgument(t, 3);
            e_87 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = y_86;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_86 = ATgetFirst((ATermList) t);
            a_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, a_87, b_87, c_87, d_87, (ATerm) ATinsert(CheckATermList(e_87), z_86));
      }
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(i_9, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm m_37 = ATgetArgument(t, 0);
      v_86 = ATgetArgument(t, 1);
      w_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_86), v_86);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm n_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(q_37);
    }
  else
    {
      t = n_37;
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_30;
  if(match_cons(t, sym_Mod_2))
    {
      q_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
      {
        ATerm r_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_30;
            t = k_9(q_30, r_30, v_30, t);
            LocalPopChoice(s_37);
          }
        else
          {
            t = r_37;
            t = a_31(u_30, v_30, t);
          }
      }
    }
  else
    {
      t = a_31(u_30, v_30, t);
    }
  return(t);
}
static ATerm a_31 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  t = term_z_16;
  o_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_17), l_30), term_d_17), k_30), term_a_17);
  p_30 = t;
  t = SSL_printnl(o_30, p_30);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_17), l_30), term_d_17), k_30), term_a_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL;
  t = for_3_0(b_9, e_9, f_9, t);
  j_88 = t;
  if(match_cons(t, sym__2))
    {
      k_88 = ATgetArgument(t, 0);
      l_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_88;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_88;
    }
  else
    {
      ATerm g_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_88 = ATgetFirst((ATermList) t);
          n_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(n_88), m_88);
      t = map_1_0(j_9, t);
      t = term_b_20;
      g_30 = t;
      t = SSL_exit(g_30);
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL;
  if(match_cons(t, sym__2))
    {
      f_89 = ATgetArgument(t, 0);
      g_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(f_89, g_89, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm h_89 = NULL,i_89 = NULL;
  if(match_cons(t, sym__2))
    {
      h_89 = ATgetArgument(t, 0);
      i_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(h_89, i_89, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm j_89 = NULL;
  if(match_cons(t, sym__2))
    {
      j_89 = ATgetArgument(t, 0);
      if((j_89 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_t_37;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL;
  t_88 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      w_88 = ATgetArgument(t, 0);
      r_88 = ATgetArgument(t, 1);
      s_88 = ATgetArgument(t, 2);
      {
        ATerm y_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  y_88 = t;
  t = r_88;
  t = foldr_3_0(l_9, m_9, o_9, t);
  u_88 = t;
  t = s_88;
  t = foldr_3_0(p_9, s_9, w_9, t);
  v_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_88, (ATerm) ATmakeAppl(sym__2, u_88, v_88));
  {
    ATerm z_37 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = z_37;
        t = (ATerm) ATempty;
      }
  }
  a_89 = t;
  t = w_88;
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(i_38);
      }
    else
      {
        t = h_38;
        t = (ATerm) ATempty;
      }
  }
  z_88 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_88, v_88));
  e_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_88, v_88)), z_88);
  t = z_10(x_9, e_89, z_88, t);
  x_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_88, (ATerm) ATmakeAppl(sym__2, u_88, v_88));
  c_89 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_38, (ATerm) ATinsert(CheckATermList(a_89), t_88));
  d_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_88, (ATerm) ATmakeAppl(sym__2, u_88, v_88)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_38, (ATerm) ATinsert(CheckATermList(a_89), t_88)));
  t = v_10(y_9, c_89, d_89, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_38, x_88);
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_88, (ATerm) ATmakeAppl(sym_Defined_2, term_k_38, x_88));
  t = v_10(a_10, w_88, b_89, t);
  t = y_88;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL;
  if(match_cons(t, sym__2))
    {
      y_89 = ATgetArgument(t, 0);
      z_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(y_89, z_89, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm a_90 = NULL,b_90 = NULL;
  if(match_cons(t, sym__2))
    {
      a_90 = ATgetArgument(t, 0);
      b_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(a_90, b_90, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm c_90 = NULL;
  if(match_cons(t, sym__2))
    {
      c_90 = ATgetArgument(t, 0);
      if((c_90 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_t_37;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  m_89 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      p_89 = ATgetArgument(t, 0);
      k_89 = ATgetArgument(t, 1);
      l_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  r_89 = t;
  t = k_89;
  t = foldr_3_0(c_10, g_10, h_10, t);
  n_89 = t;
  t = l_89;
  t = foldr_3_0(i_10, r_10, t_10, t);
  o_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_89, (ATerm) ATmakeAppl(sym__2, n_89, o_89));
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = (ATerm) ATempty;
      }
  }
  t_89 = t;
  t = p_89;
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = (ATerm) ATempty;
      }
  }
  s_89 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_89, o_89));
  x_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_89, o_89)), s_89);
  t = z_10(u_10, x_89, s_89, t);
  q_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_89, (ATerm) ATmakeAppl(sym__2, n_89, o_89));
  v_89 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_38, (ATerm) ATinsert(CheckATermList(t_89), m_89));
  w_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_89, (ATerm) ATmakeAppl(sym__2, n_89, o_89)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_38, (ATerm) ATinsert(CheckATermList(t_89), m_89)));
  t = v_10(w_10, v_89, w_89, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_38, q_89);
  u_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_89, (ATerm) ATmakeAppl(sym_Defined_2, term_q_38, q_89));
  t = v_10(j_11, p_89, u_89, t);
  t = r_89;
  return(t);
}
static ATerm v_10 (ATerm d_137 (ATerm), ATerm b_80, ATerm z_79, ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL;
  g_90 = t;
  t = d_137(t);
  d_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_90, b_80, z_79);
  t = o_11(d_90, b_80, z_79, t);
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_90 = NULL;
        t = term_v_33;
        n_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_90, term_v_33);
        t = n_11(d_90, n_90, t);
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_90 = ATgetFirst((ATermList) t);
      f_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_90, term_v_33, (ATerm) ATinsert(CheckATermList(f_90), (ATerm) ATinsert(CheckATermList(e_90), b_80)));
  t = lookup_table_0_1(d_90, t);
  m_90 = t;
  t = term_v_33;
  j_90 = t;
  t = (ATerm) ATinsert(CheckATermList(f_90), (ATerm) ATinsert(CheckATermList(e_90), b_80));
  k_90 = t;
  t = m_90;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(j_90, k_90, l_90, t);
  t = g_90;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm a_91 = NULL;
  a_91 = t;
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_31 = NULL,t_31 = NULL;
        t = term_x_37;
        t_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_37, a_91);
        t = x_10(t_31, a_91, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_39 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_39) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            q_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_31;
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
        {
          ATerm c_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_31 = NULL,a_32 = NULL;
              t = term_x_37;
              a_32 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_37, a_91);
              t = x_10(a_32, a_91, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm i_39 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_39) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  x_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_31;
              LocalPopChoice(d_39);
            }
          else
            {
              t = c_39;
              {
                ATerm f_32 = NULL,i_32 = NULL;
                t = term_x_37;
                i_32 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_37, a_91);
                t = x_10(i_32, a_91, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm j_39 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_39) != ATmakeSymbol("h_0", 0, ATtrue)))
                      _fail(t);
                    f_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_32;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm x_10 (ATerm q_72, ATerm r_72, ATerm t)
{
  ATerm e_91 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_72, r_72);
  t = n_11(q_72, r_72, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_91 = ATgetFirst((ATermList) t);
      {
        ATerm k_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_91;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm v_91 = NULL,x_91 = NULL;
  v_91 = t;
  if(match_cons(t, sym__2))
    {
      ATerm l_39 = ATgetArgument(t, 0);
      x_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_91;
  if(match_cons(t, sym__2))
    {
      ATerm m_39 = ATgetArgument(t, 0);
      ATerm n_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_32 = NULL,a_33 = NULL;
        t = term_t_37;
        a_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_37, v_91);
        t = x_10(a_33, v_91, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_39 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_39) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            x_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_32;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        {
          ATerm r_39 = t;
          int s_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_33 = NULL,k_33 = NULL;
              t = term_t_37;
              k_33 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_t_37, v_91);
              t = x_10(k_33, v_91, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm t_39 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_39) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  e_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_33;
              LocalPopChoice(s_39);
            }
          else
            {
              t = r_39;
              {
                ATerm o_33 = NULL,r_33 = NULL;
                t = term_t_37;
                r_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_37, v_91);
                t = x_10(r_33, v_91, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm u_39 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_39) != ATmakeSymbol("f_0", 0, ATtrue)))
                      _fail(t);
                    o_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_33;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL;
  if(match_cons(t, sym__2))
    {
      r_92 = ATgetArgument(t, 0);
      s_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(r_92, s_92, t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL;
  if(match_cons(t, sym__2))
    {
      t_92 = ATgetArgument(t, 0);
      u_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(t_92, u_92, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm v_92 = NULL;
  if(match_cons(t, sym__2))
    {
      v_92 = ATgetArgument(t, 0);
      if((v_92 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_t_37;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL;
  f_92 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_92 = ATgetArgument(t, 0);
      d_92 = ATgetArgument(t, 1);
      e_92 = ATgetArgument(t, 2);
      {
        ATerm v_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  k_92 = t;
  t = d_92;
  t = foldr_3_0(m_11, p_11, t_11, t);
  g_92 = t;
  t = e_92;
  t = foldr_3_0(u_11, v_11, w_11, t);
  h_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_92, (ATerm) ATmakeAppl(sym__2, g_92, h_92));
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        t = (ATerm) ATempty;
      }
  }
  m_92 = t;
  t = i_92;
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        t = (ATerm) ATempty;
      }
  }
  l_92 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_92, h_92));
  q_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_92, h_92)), l_92);
  t = z_10(x_11, q_92, l_92, t);
  j_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_92, (ATerm) ATmakeAppl(sym__2, g_92, h_92));
  o_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_40, (ATerm) ATinsert(CheckATermList(m_92), f_92));
  p_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_92, (ATerm) ATmakeAppl(sym__2, g_92, h_92)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_40, (ATerm) ATinsert(CheckATermList(m_92), f_92)));
  t = v_10(d_12, o_92, p_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_40, j_92);
  n_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_92, (ATerm) ATmakeAppl(sym_Defined_2, term_c_40, j_92));
  t = v_10(f_12, i_92, n_92, t);
  t = k_92;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm i_93 = NULL,j_93 = NULL;
  if(match_cons(t, sym__2))
    {
      i_93 = ATgetArgument(t, 0);
      j_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(i_93, j_93, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm k_93 = NULL,l_93 = NULL;
  if(match_cons(t, sym__2))
    {
      k_93 = ATgetArgument(t, 0);
      l_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(k_93, l_93, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL;
  if(match_cons(t, sym__2))
    {
      r_93 = ATgetArgument(t, 0);
      s_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(r_93, s_93, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL;
  if(match_cons(t, sym__2))
    {
      t_93 = ATgetArgument(t, 0);
      u_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(t_93, u_93, t);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL;
  if(match_cons(t, sym__2))
    {
      b_94 = ATgetArgument(t, 0);
      c_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(b_94, c_94, t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL;
  if(match_cons(t, sym__2))
    {
      d_94 = ATgetArgument(t, 0);
      e_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(d_94, e_94, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL;
  x_92 = t;
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            y_92 = ATgetArgument(t, 0);
            z_92 = ATgetArgument(t, 1);
            a_93 = ATgetArgument(t, 2);
            {
              ATerm i_40 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_40);
        {
          ATerm f_93 = NULL,g_93 = NULL;
          t = z_92;
          t = foldr_3_0(g_12, h_12, i_12, t);
          f_93 = t;
          t = a_93;
          t = foldr_3_0(s_12, y_12, z_12, t);
          g_93 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_92, (ATerm) ATmakeAppl(sym__2, f_93, g_93)));
        }
      }
    else
      {
        t = e_40;
        if(match_cons(t, sym_ExtSDef_3))
          {
            y_92 = ATgetArgument(t, 0);
            z_92 = ATgetArgument(t, 1);
            a_93 = ATgetArgument(t, 2);
            {
              ATerm p_93 = NULL,q_93 = NULL;
              t = z_92;
              t = foldr_3_0(d_13, e_13, f_13, t);
              p_93 = t;
              t = a_93;
              t = foldr_3_0(g_13, h_13, i_13, t);
              q_93 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_92, (ATerm) ATmakeAppl(sym__2, p_93, q_93)));
            }
          }
        else
          {
            ATerm y_93 = NULL,z_93 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                y_92 = ATgetArgument(t, 0);
                z_92 = ATgetArgument(t, 1);
                a_93 = ATgetArgument(t, 2);
                {
                  ATerm j_40 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = z_92;
            t = foldr_3_0(j_13, m_13, n_13, t);
            y_93 = t;
            t = a_93;
            t = foldr_3_0(p_13, q_13, r_13, t);
            z_93 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_92, (ATerm) ATmakeAppl(sym__2, y_93, z_93)));
          }
      }
  }
  return(t);
}
static ATerm y_10 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm x_64, ATerm w_64, ATerm t)
{
  t = s_123(t);
  {
    static ATerm s_13 (ATerm t)
    {
      ATerm f_94 = NULL;
      f_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_64, f_94);
      t = r_123(t);
      return(t);
    }
    t = fetch_1_0(s_13, t);
  }
  t = w_64;
  return(t);
}
static ATerm z_10 (ATerm o_123 (ATerm), ATerm t_64, ATerm s_64, ATerm t)
{
  static ATerm v_94 (ATerm t)
  {
    ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
    q_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_64;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_94 = ATgetFirst((ATermList) t);
            s_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_40 = t;
          int l_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_94;
              {
                static ATerm t_13 (ATerm t)
                {
                  t = s_64;
                  return(t);
                }
                t = y_10(o_123, t_13, r_94, s_94, t);
              }
              t = v_94(t);
              LocalPopChoice(l_40);
            }
          else
            {
              t = k_40;
              {
                ATerm w_33 = NULL,z_33 = NULL,a_5 = NULL;
                t = SSLgetAnnotations(q_94);
                w_33 = t;
                t = s_94;
                t = v_94(t);
                z_33 = t;
                t = (ATerm) ATinsert(CheckATermList(z_33), r_94);
                a_5 = t;
                t = SSLsetAnnotations(a_5, w_33);
              }
            }
        }
      }
    return(t);
  }
  t = t_64;
  t = v_94(t);
  return(t);
}
ATerm foldr_3_0 (ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  y_94 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_94;
      t = n_126(t);
    }
  else
    {
      ATerm d_95 = NULL,e_95 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_94 = ATgetFirst((ATermList) t);
          a_95 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_94;
      t = p_126(t);
      d_95 = t;
      t = a_95;
      t = foldr_3_0(n_126, o_126, p_126, t);
      e_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_95, e_95);
      t = o_126(t);
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
  ATerm i_95 = NULL,j_95 = NULL;
  if(match_cons(t, sym__2))
    {
      i_95 = ATgetArgument(t, 0);
      j_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(y_13, i_95, j_95, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm k_95 = NULL;
  if(match_cons(t, sym__2))
    {
      k_95 = ATgetArgument(t, 0);
      if((k_95 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm m_40 = t;
  int n_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(n_40);
    }
  else
    {
      t = m_40;
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL;
  h_95 = t;
  t = foldr_3_0(u_13, v_13, DefinitionName_0_0, t);
  f_95 = t;
  t = h_95;
  t = map_1_0(b_14, t);
  g_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_95, g_95, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,c_5 = NULL;
  q_95 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_95 = ATgetFirst((ATermList) t);
      n_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_95);
  l_95 = t;
  t = m_95;
  t = h_90(t);
  o_95 = t;
  t = n_95;
  t = i_90(t);
  p_95 = t;
  t = (ATerm) ATinsert(CheckATermList(p_95), o_95);
  c_5 = t;
  t = SSLsetAnnotations(c_5, l_95);
  return(t);
}
static ATerm a_11 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm r_95 = NULL;
  t = SSL_fputc(g_47, h_47);
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_95);
  return(t);
}
static ATerm b_11 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm s_95 = NULL;
  t = SSL_write_term_to_stream_text(y_45, z_45);
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_95);
  return(t);
}
static ATerm d_11 (ATerm x_111 (ATerm), ATerm h_324, ATerm e_46, ATerm t)
{
  ATerm t_95 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_324, term_q_40);
  t = h_11(t);
  t_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_95, e_46);
  t = x_111(t);
  t = fclose_0_0(t);
  t = e_46;
  return(t);
}
static ATerm c_11 (ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm u_95 = NULL;
  t = SSL_write_term_to_stream_baf(u_45, v_45);
  u_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_95);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_40 = ATgetArgument(t, 0);
      if(match_cons(r_40, sym_Stream_1))
        {
          b_96 = ATgetArgument(r_40, 0);
        }
      else
        _fail(t);
      c_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(b_96, c_96, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_40 = ATgetArgument(t, 0);
      if(match_cons(s_40, sym_Stream_1))
        {
          g_96 = ATgetArgument(s_40, 0);
        }
      else
        _fail(t);
      h_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(g_96, h_96, t);
  d_96 = t;
  t = term_q_21;
  e_96 = t;
  t = d_96;
  if(match_cons(t, sym_Stream_1))
    {
      f_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, d_96);
  t = a_11(e_96, f_96, t);
  return(t);
}
ATerm output_1_0 (ATerm k_132 (ATerm), ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL;
  t = k_132(t);
  w_95 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_95 = NULL,y_95 = NULL;
        t = term_v_40;
        x_95 = t;
        t = term_w_40;
        y_95 = t;
        t = term_x_40;
        t = n_11(x_95, y_95, t);
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        t = term_y_40;
      }
  }
  v_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_95, w_95);
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_95 = NULL,a_96 = NULL;
        t = term_v_40;
        z_95 = t;
        t = term_b_41;
        a_96 = t;
        t = term_c_41;
        t = n_11(z_95, a_96, t);
        t = (ATerm) ATmakeAppl(sym__2, v_95, w_95);
        LocalPopChoice(a_41);
        if(match_cons(t, sym__2))
          {
            ATerm d_41 = ATgetArgument(t, 0);
            ATerm e_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_11(c_14, v_95, w_95, t);
      }
    else
      {
        t = z_40;
        if(match_cons(t, sym__2))
          {
            ATerm f_41 = ATgetArgument(t, 0);
            ATerm g_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_11(d_14, v_95, w_95, t);
      }
  }
  return(t);
}
static ATerm v_96 (ATerm p_96, ATerm t)
{
  t = SSL_fclose(p_96);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL;
  t_96 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_96 = ATgetArgument(t, 0);
      {
        ATerm h_41 = t;
        int i_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_96);
            LocalPopChoice(i_41);
          }
        else
          {
            t = h_41;
            t = v_96(t_96, t);
          }
      }
    }
  else
    {
      t = v_96(t_96, t);
    }
  return(t);
}
static ATerm e_11 (ATerm a_46, ATerm t)
{
  t = SSL_read_term_from_stream(a_46);
  return(t);
}
static ATerm f_11 (ATerm b_64, ATerm c_64, ATerm t)
{
  t = SSL_strcat(b_64, c_64);
  return(t);
}
static ATerm g_11 (ATerm i_47, ATerm j_47, ATerm t)
{
  ATerm w_96 = NULL;
  t = SSL_fopen(i_47, j_47);
  w_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_96);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_96 = NULL;
  t = SSL_stdin_stream();
  x_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_96);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_96 = NULL;
  t = SSL_stdout_stream();
  y_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_96);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_96 = NULL;
  t = SSL_stderr_stream();
  z_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_96);
  return(t);
}
static ATerm g_98 (ATerm f_97, ATerm t)
{
  ATerm g_97 = NULL;
  t = SSL_explode_term(f_97);
  if(match_cons(t, sym__2))
    {
      ATerm l_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_41 = ATgetArgument(t, 1);
        if(((ATgetType(o_41) == AT_LIST) && !(ATisEmpty(o_41))))
          {
            g_97 = ATgetFirst((ATermList) o_41);
            {
              ATerm p_41 = (ATerm) ATgetNext((ATermList) o_41);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_97;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_97;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_97;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_97;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_98 (ATerm j_97, ATerm k_97, ATerm l_97, ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,r_97 = NULL,e_5 = NULL;
  t = SSLgetAnnotations(l_97);
  o_97 = t;
  t = j_97;
  if(match_cons(t, sym_Path_1))
    {
      r_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_97, k_97);
  e_5 = t;
  t = SSLsetAnnotations(e_5, o_97);
  if(match_cons(t, sym__2))
    {
      m_97 = ATgetArgument(t, 0);
      n_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(m_97, n_97, t);
  return(t);
}
static ATerm i_98 (ATerm t_97, ATerm u_97, ATerm v_97, ATerm t)
{
  ATerm w_97 = NULL,x_97 = NULL,y_97 = NULL,b_98 = NULL,f_5 = NULL;
  t = SSLgetAnnotations(v_97);
  y_97 = t;
  t = SSL_is_string(t_97);
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_98, u_97);
  f_5 = t;
  t = SSLsetAnnotations(f_5, y_97);
  if(match_cons(t, sym__2))
    {
      w_97 = ATgetArgument(t, 0);
      x_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(w_97, x_97, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL;
  d_98 = t;
  if(match_cons(t, sym__2))
    {
      e_98 = ATgetArgument(t, 0);
      f_98 = ATgetArgument(t, 1);
      {
        ATerm q_41 = t;
        int r_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_98(d_98, t);
            LocalPopChoice(r_41);
          }
        else
          {
            t = q_41;
            {
              ATerm s_41 = t;
              int t_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_98(e_98, f_98, d_98, t);
                  LocalPopChoice(t_41);
                }
              else
                {
                  t = s_41;
                  t = i_98(e_98, f_98, d_98, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_98(d_98, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL,r_98 = NULL;
  r_98 = t;
  {
    ATerm u_41 = t;
    int v_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_98, term_w_41);
        t = h_11(t);
        LocalPopChoice(v_41);
      }
    else
      {
        t = u_41;
        {
          ATerm t_34 = NULL,u_34 = NULL;
          t = term_x_41;
          u_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_41, r_98);
          t = f_11(u_34, r_98, t);
          t_34 = t;
          t = SSL_perror(t_34);
          _fail(t);
        }
      }
  }
  l_98 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(m_98, t);
  k_98 = t;
  t = l_98;
  t = fclose_0_0(t);
  t = k_98;
  return(t);
}
ATerm input_1_0 (ATerm l_132 (ATerm), ATerm t)
{
  ATerm y_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_98 = NULL,v_98 = NULL;
      t = term_v_40;
      u_98 = t;
      t = term_a_42;
      v_98 = t;
      t = term_b_42;
      t = n_11(u_98, v_98, t);
      LocalPopChoice(z_41);
    }
  else
    {
      t = y_41;
      t = term_c_42;
    }
  t = ReadFromFile_0_0(t);
  t = l_132(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL;
  w_98 = t;
  t = term_i_31;
  t = whoami_0_0(t);
  x_98 = t;
  t = term_z_16;
  z_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_42), x_98), term_d_42);
  a_99 = t;
  t = SSL_printnl(z_98, a_99);
  t = term_b_20;
  y_98 = t;
  t = SSL_exit(y_98);
  t = w_98;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm c_99 = NULL;
  c_99 = t;
  if(match_string(t, "-k"))
    {
      t = c_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_99;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL,f_99 = NULL;
  d_99 = t;
  t = SSL_string_to_int(d_99);
  e_99 = t;
  t = term_f_42;
  f_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_42, e_99);
  t = q_11(f_99, e_99, t);
  t = d_99;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_14, i_14, k_14, t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm h_99 = NULL;
  h_99 = t;
  if(match_string(t, "-S"))
    {
      t = h_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_99;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm i_99 = NULL,j_99 = NULL;
  t = term_h_42;
  i_99 = t;
  t = term_t_19;
  j_99 = t;
  t = term_i_42;
  t = q_11(i_99, j_99, t);
  t = term_j_42;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_k_42;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm k_99 = NULL,l_99 = NULL,m_99 = NULL;
  k_99 = t;
  t = SSL_string_to_int(k_99);
  l_99 = t;
  t = term_h_42;
  m_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_42, l_99);
  t = q_11(m_99, l_99, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_99);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_l_42;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL;
  t = term_m_42;
  n_99 = t;
  t = term_i_31;
  o_99 = t;
  t = term_n_42;
  t = q_11(n_99, o_99, t);
  t = term_o_42;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_p_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_14, n_14, o_14, t);
      LocalPopChoice(r_42);
    }
  else
    {
      t = q_42;
      {
        ATerm s_42 = t;
        int t_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_14, s_14, t_14, t);
            LocalPopChoice(t_42);
          }
        else
          {
            t = s_42;
            t = Option_3_0(u_14, v_14, x_14, t);
          }
      }
    }
  return(t);
}
static ATerm q_11 (ATerm b_51, ATerm c_51, ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL;
  t = term_v_40;
  p_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_40, b_51, c_51);
  t = lookup_table_0_1(p_99, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(b_51, c_51, q_99, t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_40, b_51, c_51);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm u_99 = NULL,v_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL;
      t = term_i_31;
      t = e_0(t);
      w_99 = t;
      t = term_u_42;
      x_99 = t;
      t = term_v_42;
      y_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_42, term_v_42, w_99);
      t = o_11(x_99, y_99, w_99, t);
      _fail(t);
    }
  else
    {
      ATerm b_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_99 = ATgetFirst((ATermList) t);
          v_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_99;
      t = c_0(t);
      t = term_i_31;
      t = d_0(t);
      b_100 = t;
      t = (ATerm) ATinsert(CheckATermList(v_99), b_100);
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm d_100 = NULL;
  d_100 = t;
  if(match_string(t, "-o"))
    {
      t = d_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_100;
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL;
  e_100 = t;
  t = term_w_40;
  f_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_40, e_100);
  t = q_11(f_100, e_100, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_100);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_w_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_14, a_15, b_15, t);
  return(t);
}
static ATerm o_11 (ATerm f_72, ATerm g_72, ATerm e_72, ATerm t)
{
  ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL;
  h_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_72, g_72);
  {
    ATerm x_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_42 = ATgetArgument(t, 0);
            ATerm a_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_72, g_72);
        t = n_11(f_72, g_72, t);
        LocalPopChoice(y_42);
      }
    else
      {
        t = x_42;
        t = (ATerm) ATempty;
      }
  }
  i_100 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_72, g_72, (ATerm) ATinsert(CheckATermList(i_100), e_72));
  t = lookup_table_0_1(f_72, t);
  l_100 = t;
  t = (ATerm) ATinsert(CheckATermList(i_100), e_72);
  j_100 = t;
  t = l_100;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(g_72, j_100, k_100, t);
  t = h_100;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL;
      t = term_i_31;
      t = n_0(t);
      w_100 = t;
      t = term_u_42;
      x_100 = t;
      t = term_v_42;
      y_100 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_42, term_v_42, w_100);
      t = o_11(x_100, y_100, w_100, t);
      _fail(t);
    }
  else
    {
      ATerm c_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_100 = ATgetFirst((ATermList) t);
          t_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_100;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_100 = ATgetFirst((ATermList) t);
          v_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_100;
      t = k_0(t);
      t = u_100;
      t = l_0(t);
      c_101 = t;
      t = (ATerm) ATinsert(CheckATermList(v_100), c_101);
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm e_101 = NULL;
  e_101 = t;
  if(match_string(t, "-i"))
    {
      t = e_101;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_101;
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL;
  f_101 = t;
  t = term_a_42;
  g_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_42, f_101);
  t = q_11(g_101, f_101, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_101);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_15, n_15, o_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_31;
  t = whoami_0_0(t);
  h_101 = t;
  t = term_z_16;
  j_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_43), h_101);
  k_101 = t;
  t = SSL_printnl(j_101, k_101);
  t = term_b_20;
  i_101 = t;
  t = SSL_exit(i_101);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL;
  t = term_v_40;
  l_101 = t;
  t = term_d_43;
  m_101 = t;
  t = term_e_43;
  t = n_11(l_101, m_101, t);
  return(t);
}
static ATerm i_11 (ATerm t_53, ATerm u_53, ATerm t)
{
  ATerm f_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_53, u_53);
      LocalPopChoice(g_43);
    }
  else
    {
      t = f_43;
      t = SSL_addr(t_53, u_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm t)
{
  ATerm o_101 = NULL,p_101 = NULL,q_101 = NULL;
  o_101 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_101;
      t = l_126(t);
    }
  else
    {
      ATerm t_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_101 = ATgetFirst((ATermList) t);
          q_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_101;
      t = foldr_2_0(l_126, m_126, t);
      t_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_101, t_101);
      t = m_126(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  if(match_cons(t, sym__2))
    {
      e_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(e_35, f_35, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_101 = NULL,w_34 = NULL,a_35 = NULL;
  t = times_0_0(t);
  a_35 = t;
  t = SSL_explode_term(a_35);
  if(match_cons(t, sym__2))
    {
      ATerm h_43 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_34;
  t = foldr_2_0(p_15, q_15, t);
  w_101 = t;
  t = SSL_TicksToSeconds(w_101);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_102 = NULL,i_102 = NULL,j_102 = NULL;
  h_102 = t;
  if(match_cons(t, sym__2))
    {
      i_102 = ATgetArgument(t, 0);
      j_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_102;
        if((i_102 != t))
          {
            _fail(t);
          }
        t = h_102;
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        t = (ATerm) ATmakeAppl(sym__2, i_102, j_102);
        {
          ATerm k_43 = t;
          int l_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_102, j_102);
              LocalPopChoice(l_43);
            }
          else
            {
              t = k_43;
              t = SSL_gtr(i_102, j_102);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_102, j_102);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  ATerm n_102 = NULL;
  n_102 = t;
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL;
        t = term_v_40;
        q_102 = t;
        t = term_h_42;
        r_102 = t;
        t = term_o_43;
        t = n_11(q_102, r_102, t);
        p_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_102, term_b_20);
        t = geq_0_0(t);
        t = n_102;
        t = n_113(t);
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        t = n_102;
      }
  }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL,y_102 = NULL,z_102 = NULL;
  t = run_time_0_0(t);
  v_102 = t;
  t = term_i_31;
  t = whoami_0_0(t);
  w_102 = t;
  t = term_z_16;
  y_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_43), v_102), term_p_43), w_102);
  z_102 = t;
  t = SSL_printnl(y_102, z_102);
  t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_43), v_102), term_p_43), w_102));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_103 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_19;
  a_103 = t;
  t = SSL_exit(a_103);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm k_103 = NULL,l_103 = NULL;
  l_103 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_103;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_103 = ATgetArgument(t, 0);
          {
            ATerm r_35 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(l_103);
            r_35 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_103);
            i_5 = t;
            t = SSLsetAnnotations(i_5, r_35);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_103;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_132 (ATerm), ATerm t)
{
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_103 = NULL,e_103 = NULL;
      t = term_v_40;
      d_103 = t;
      t = term_t_43;
      e_103 = t;
      t = term_u_43;
      t = n_11(d_103, e_103, t);
      LocalPopChoice(s_43);
    }
  else
    {
      t = r_43;
      t = fetch_1_0(u_15, t);
    }
  t = b_132(t);
  return(t);
}
static ATerm r_11 (ATerm x_75, ATerm y_75, ATerm z_75, ATerm t)
{
  ATerm n_103 = NULL;
  t = SSL_hashtable_put(z_75, x_75, y_75);
  n_103 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_103);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_73, ATerm t)
{
  ATerm b_104 = NULL;
  t = table_hashtable_0_0(t);
  b_104 = t;
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_36 = NULL;
        t = b_104;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_11(r_73, b_36, t);
        LocalPopChoice(w_43);
      }
    else
      {
        t = v_43;
        {
          ATerm g_36 = NULL;
          t = r_73;
          t = table_create_0_0(t);
          t = b_104;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_11(r_73, g_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm f_76, ATerm g_76, ATerm t)
{
  ATerm e_104 = NULL;
  t = SSL_hashtable_create(f_76, g_76);
  e_104 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_104);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL,j_104 = NULL,k_104 = NULL;
  f_104 = t;
  t = term_x_43;
  j_104 = t;
  t = term_y_43;
  k_104 = t;
  t = f_104;
  t = new_hashtable_0_2(j_104, k_104, t);
  g_104 = t;
  t = f_104;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(f_104, g_104, h_104, t);
  t = f_104;
  return(t);
}
static ATerm k_11 (ATerm c_76, ATerm d_76, ATerm t)
{
  ATerm o_104 = NULL;
  t = SSL_hashtable_remove(d_76, c_76);
  o_104 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_104);
  return(t);
}
static ATerm l_11 (ATerm h_76, ATerm t)
{
  ATerm p_104 = NULL;
  t = SSL_hashtable_destroy(h_76);
  p_104 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_104);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_104 = NULL;
  t = SSL_table_hashtable();
  q_104 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_104);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL;
  r_104 = t;
  t = table_hashtable_0_0(t);
  s_104 = t;
  t = lookup_table_0_1(r_104, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_11(u_104, t);
  t = s_104;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_11(r_104, t_104, t);
  t = r_104;
  return(t);
}
ATerm map_1_0 (ATerm g_116 (ATerm), ATerm t)
{
  static ATerm j_105 (ATerm t)
  {
    ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
    g_105 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_105;
      }
    else
      {
        ATerm l_36 = NULL,o_36 = NULL,p_36 = NULL,k_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_105 = ATgetFirst((ATermList) t);
            i_105 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_105);
        l_36 = t;
        t = h_105;
        t = g_116(t);
        o_36 = t;
        t = i_105;
        t = j_105(t);
        p_36 = t;
        t = (ATerm) ATinsert(CheckATermList(p_36), o_36);
        k_5 = t;
        t = SSLsetAnnotations(k_5, l_36);
      }
    return(t);
  }
  t = j_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_105 = NULL,n_105 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_105 = ATgetFirst((ATermList) t);
      n_105 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_105 = NULL,u_105 = NULL;
        static ATerm v_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_105)), not_null(u_105));
          return(t);
        }
        t = n_105;
        t = i_0(t);
        if(((t_105 != NULL) && (t_105 != t)))
          _fail(t);
        else
          t_105 = t;
        t = m_105;
        t = g_0(t);
        if(((u_105 != NULL) && (u_105 != t)))
          _fail(t);
        else
          u_105 = t;
        t = n_105;
        t = reverse_acc_2_0(g_0, v_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_31;
      t = i_0(t);
    }
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL,m_5 = NULL;
  c_106 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_106);
  a_106 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_106);
  m_5 = t;
  t = SSLsetAnnotations(m_5, a_106);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm e_106 = NULL;
  e_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_106), term_b_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL;
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_105 = NULL,z_105 = NULL;
      t = term_v_40;
      y_105 = t;
      t = term_d_43;
      z_105 = t;
      t = term_e_43;
      t = n_11(y_105, z_105, t);
      LocalPopChoice(d_44);
    }
  else
    {
      t = c_44;
      t = fetch_1_0(w_15, t);
    }
  t = term_h_44;
  t = echo_0_0(t);
  t = term_u_42;
  w_105 = t;
  t = term_v_42;
  x_105 = t;
  t = term_i_44;
  t = n_11(w_105, x_105, t);
  t = reverse_acc_2_0(_id, x_15, t);
  t = map_1_0(b_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_116 (ATerm), ATerm t)
{
  static ATerm d_107 (ATerm t)
  {
    ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL;
    a_107 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_107 = ATgetFirst((ATermList) t);
        c_107 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_44 = t;
      int m_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_36 = NULL,a_37 = NULL,q_5 = NULL;
          t = SSLgetAnnotations(a_107);
          x_36 = t;
          t = b_107;
          t = q_116(t);
          a_37 = t;
          t = (ATerm) ATinsert(CheckATermList(c_107), a_37);
          q_5 = t;
          t = SSLsetAnnotations(q_5, x_36);
          LocalPopChoice(m_44);
        }
      else
        {
          t = l_44;
          {
            ATerm i_37 = NULL,l_37 = NULL,r_5 = NULL;
            t = SSLgetAnnotations(a_107);
            i_37 = t;
            t = c_107;
            t = d_107(t);
            l_37 = t;
            t = (ATerm) ATinsert(CheckATermList(l_37), b_107);
            r_5 = t;
            t = SSLsetAnnotations(r_5, i_37);
          }
        }
    }
    return(t);
  }
  t = d_107(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL;
  h_107 = t;
  {
    ATerm n_44 = t;
    int o_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_107;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_44 = ATgetFirst((ATermList) t);
                ATerm q_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_107;
          }
        LocalPopChoice(o_44);
      }
    else
      {
        t = n_44;
        t = (ATerm) ATinsert(ATempty, h_107);
      }
  }
  i_107 = t;
  t = term_y_40;
  j_107 = t;
  t = SSL_printnl(j_107, i_107);
  t = h_107;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_107 = NULL,o_107 = NULL;
  t = term_v_40;
  n_107 = t;
  t = term_d_43;
  o_107 = t;
  t = term_e_43;
  t = n_11(n_107, o_107, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_11 (ATerm a_76, ATerm b_76, ATerm t)
{
  t = SSL_hashtable_get(b_76, a_76);
  return(t);
}
static ATerm n_11 (ATerm y_73, ATerm z_73, ATerm t)
{
  ATerm p_107 = NULL;
  t = lookup_table_0_1(y_73, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(z_73, p_107, t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL;
  t = term_t_44;
  r_107 = t;
  t = term_i_31;
  s_107 = t;
  t = term_v_44;
  t = q_11(r_107, s_107, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_w_44;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm t_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL;
  t = term_t_44;
  x_107 = t;
  t = term_i_31;
  y_107 = t;
  t = term_v_44;
  t = q_11(x_107, y_107, t);
  t = term_y_44;
  t_107 = t;
  t = term_i_31;
  w_107 = t;
  t = term_b_45;
  t = q_11(t_107, w_107, t);
  t = term_f_45;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_g_45;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_45 = t;
  int j_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_16, d_16, e_16, t);
      LocalPopChoice(j_45);
    }
  else
    {
      t = i_45;
      t = Option_3_0(g_16, h_16, i_16, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_134 (ATerm), ATerm t)
{
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,k_108 = NULL,l_108 = NULL,b_6 = NULL;
  f_108 = t;
  {
    ATerm l_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_45;
        t = e_134(t);
        LocalPopChoice(o_45);
      }
    else
      {
        t = l_45;
      }
  }
  t = f_108;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_108 = ATgetFirst((ATermList) t);
      i_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_108);
  g_108 = t;
  t = term_d_43;
  l_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_43, h_108);
  t = q_11(l_108, h_108, t);
  t = i_108;
  {
    static ATerm x_108 (ATerm t)
    {
      ATerm q_45 = t;
      int r_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_45 = t;
          int w_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_108 = NULL;
              o_108 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_108;
              LocalPopChoice(w_45);
            }
          else
            {
              t = t_45;
              t = e_134(t);
              t = Cons_2_0(_id, x_108, t);
            }
          LocalPopChoice(r_45);
        }
      else
        {
          t = q_45;
          {
            ATerm t_108 = NULL,u_108 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_108 = ATgetFirst((ATermList) t);
                u_108 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_108), (ATerm) ATmakeAppl(sym_Undefined_1, t_108));
          }
        }
      return(t);
    }
    t = x_108(t);
  }
  k_108 = t;
  t = (ATerm) ATinsert(CheckATermList(k_108), (ATerm) ATmakeAppl(sym_Program_1, h_108));
  b_6 = t;
  t = SSLsetAnnotations(b_6, g_108);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm p_109 = NULL;
  p_109 = t;
  if(match_string(t, "--help"))
    {
      t = p_109;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_109;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_109;
        }
    }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm q_109 = NULL,r_109 = NULL;
  t = term_t_43;
  q_109 = t;
  t = term_i_31;
  r_109 = t;
  t = term_d_46;
  t = q_11(q_109, r_109, t);
  t = term_f_46;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_134 (ATerm), ATerm t)
{
  ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL;
  j_109 = t;
  t = term_u_42;
  k_109 = t;
  t = term_h_46;
  t = lookup_table_0_1(k_109, t);
  o_109 = t;
  t = term_v_42;
  l_109 = t;
  t = (ATerm) ATempty;
  m_109 = t;
  t = o_109;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(l_109, m_109, n_109, t);
  t = j_109;
  {
    static ATerm j_16 (ATerm t)
    {
      ATerm i_46 = t;
      int j_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_134(t);
          LocalPopChoice(j_46);
        }
      else
        {
          t = i_46;
          {
            ATerm k_46 = t;
            int l_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_16, l_16, m_16, t);
                LocalPopChoice(l_46);
              }
            else
              {
                t = k_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_16, t);
  }
  {
    ATerm o_46 = t;
    int p_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_110 = NULL;
        c_110 = t;
        {
          ATerm q_46 = t;
          int s_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_37 = NULL;
              t = c_110;
              {
                ATerm t_46 = t;
                int v_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_37 = NULL,w_37 = NULL;
                    t = term_v_40;
                    v_37 = t;
                    t = term_t_43;
                    w_37 = t;
                    t = term_u_43;
                    t = n_11(v_37, w_37, t);
                    LocalPopChoice(v_46);
                  }
                else
                  {
                    t = t_46;
                    t = fetch_1_0(n_16, t);
                  }
              }
              t = c_110;
              t = default_system_usage_0_0(t);
              t = term_t_19;
              u_37 = t;
              t = SSL_exit(u_37);
              LocalPopChoice(s_46);
            }
          else
            {
              t = q_46;
              {
                ATerm a_38 = NULL,e_38 = NULL,f_38 = NULL;
                t = term_v_40;
                e_38 = t;
                t = term_t_44;
                f_38 = t;
                t = term_w_46;
                t = n_11(e_38, f_38, t);
                t = c_110;
                t = default_system_about_0_0(t);
                t = term_t_19;
                a_38 = t;
                t = SSL_exit(a_38);
              }
            }
        }
        LocalPopChoice(p_46);
      }
    else
      {
        t = o_46;
        {
          ATerm a_47 = t;
          int b_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_110 = NULL,e_110 = NULL,f_110 = NULL;
              static ATerm o_16 (ATerm t)
              {
                ATerm g_110 = NULL,h_110 = NULL,l_110 = NULL,j_6 = NULL;
                l_110 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_110 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_110);
                g_110 = t;
                t = h_110;
                if(((h_109 != NULL) && (h_109 != t)))
                  _fail(t);
                else
                  h_109 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_110);
                j_6 = t;
                t = SSLsetAnnotations(j_6, g_110);
                return(t);
              }
              t = fetch_1_0(o_16, t);
              t = term_z_16;
              e_110 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_109)), term_c_47);
              f_110 = t;
              t = SSL_printnl(e_110, f_110);
              t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_109)), term_c_47));
              t = default_system_usage_0_0(t);
              t = term_b_20;
              d_110 = t;
              t = SSL_exit(d_110);
              LocalPopChoice(b_47);
            }
          else
            {
              t = a_47;
            }
        }
      }
  }
  i_109 = t;
  t = term_u_42;
  t = table_destroy_0_0(t);
  t = i_109;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm f_132 (ATerm), ATerm g_132 (ATerm), ATerm t)
{
  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
  t = parse_options_1_0(d_132, t);
  q_110 = t;
  t = term_d_47;
  t = table_create_0_0(t);
  t = term_d_47;
  r_110 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_47, term_e_47, q_110);
  t = lookup_table_0_1(r_110, t);
  u_110 = t;
  t = term_e_47;
  s_110 = t;
  t = u_110;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(s_110, q_110, t_110, t);
  t = q_110;
  t = f_132(t);
  {
    ATerm f_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_132, t);
        LocalPopChoice(k_47);
      }
    else
      {
        t = f_47;
        {
          ATerm l_47 = t;
          int m_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_47);
            }
          else
            {
              t = l_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm n_47 = t;
  int o_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(o_47);
    }
  else
    {
      t = n_47;
      {
        ATerm p_47 = t;
        int q_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(q_47);
          }
        else
          {
            t = p_47;
            {
              ATerm r_47 = t;
              int s_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_16, t_16, u_16, t);
                  LocalPopChoice(s_47);
                }
              else
                {
                  t = r_47;
                  {
                    ATerm t_47 = t;
                    int u_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(u_47);
                      }
                    else
                      {
                        t = t_47;
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
static ATerm q_16 (ATerm t)
{
  t = input_1_0(v_16, t);
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
  ATerm w_110 = NULL,x_110 = NULL;
  t = term_b_41;
  w_110 = t;
  t = term_i_31;
  x_110 = t;
  t = term_v_47;
  t = q_11(w_110, x_110, t);
  t = term_w_47;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = output_1_0(w_16, t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm f_111 = NULL,g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL,m_111 = NULL,r_8 = NULL,t_6 = NULL;
  m_111 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_111);
  f_111 = t;
  t = g_111;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_111 = ATgetFirst((ATermList) t);
      j_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_111);
  h_111 = t;
  t = j_111;
  t = Cons_2_0(x_16, y_16, t);
  k_111 = t;
  t = (ATerm) ATinsert(CheckATermList(k_111), i_111);
  t_6 = t;
  t = SSLsetAnnotations(t_6, h_111);
  l_111 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_111);
  r_8 = t;
  t = SSLsetAnnotations(r_8, f_111);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL,p_6 = NULL;
  q_111 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_111);
  n_111 = t;
  t = o_111;
  t = all_defs_0_0(t);
  p_111 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_111);
  p_6 = t;
  t = SSLsetAnnotations(p_6, n_111);
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
  t = option_wrap_4_0(p_16, default_usage_0_0, _id, q_16, t);
  return(t);
}

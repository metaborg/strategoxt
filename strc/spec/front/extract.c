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
ATerm term_p_48;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_r_47;
ATerm term_o_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_p_46;
ATerm term_g_46;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_k_45;
ATerm term_c_45;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_e_44;
ATerm term_c_44;
ATerm term_w_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_r_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_u_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_n_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_u_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_m_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_q_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_j_25;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_n_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_k_19;
ATerm term_p_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Op_2, term_k_20, (ATerm) ATempty);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_21);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Call_2, term_a_22, (ATerm) ATempty);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Call_2, term_j_20, (ATerm) ATempty);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_23);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_j_30, (ATerm) ATempty);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_k_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_k_19);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__2, term_e_39, term_f_39);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym__2, term_k_40, term_l_40);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_k_19);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_19);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(sym__2, term_z_40, term_c_17);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_k_40, term_r_42);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym__2, term_k_40, term_w_43);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym__2, term_r_41, term_t_41);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym__2, term_o_44, term_c_17);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym__2, term_s_44, term_c_17);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym__2, term_w_43, term_c_17);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_k_40, term_o_44);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym__2, term_o_47, term_c_17);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_123 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm w_8 (ATerm u_81, ATerm t_81, ATerm t);
static ATerm y_8 (ATerm d_60, ATerm e_60, ATerm f_60, ATerm t);
static ATerm z_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm f_9 (ATerm z_25, ATerm y_25, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_125 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm b_34 (ATerm b_27, ATerm c_27, ATerm t);
static ATerm c_34 (ATerm x_27, ATerm y_27, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm l_137 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm m_9 (ATerm q_76, ATerm r_76, ATerm s_76, ATerm t);
static ATerm p_47 (ATerm g_47, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm z_105 (ATerm), ATerm t);
static ATerm q_9 (ATerm d_72, ATerm e_72, ATerm f_72, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_104 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm r_9 (ATerm c_41, ATerm d_41, ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm copy_1_0 (ATerm x_122 (ATerm), ATerm t);
static ATerm s_9 (ATerm g_59, ATerm h_59, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm l_68 (ATerm g_65, ATerm h_65, ATerm i_65, ATerm j_65, ATerm t);
static ATerm m_68 (ATerm v_66, ATerm y_66, ATerm z_66, ATerm a_67, ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm p_117 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm d_112 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm n_106 (ATerm), ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm j_70 (ATerm w_68, ATerm x_68, ATerm a_69, ATerm b_69, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_74 (ATerm p_72, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm y_9 (ATerm h_119 (ATerm), ATerm t_47, ATerm s_47, ATerm t);
ATerm genzip_4_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm d_10 (ATerm n_714, ATerm s_714, ATerm u_69, ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm i_83 (ATerm s_81, ATerm v_81, ATerm x_81, ATerm t);
static ATerm b_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm f_10 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm l_71, ATerm i_71, ATerm q_71, ATerm m_71, ATerm j_71, ATerm k_71, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm t);
ATerm for_3_0 (ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm p_34 (ATerm h_33, ATerm m_33, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm i_10 (ATerm o_116 (ATerm), ATerm k_42, ATerm i_42, ATerm t);
static ATerm j_10 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm z_47, ATerm y_47, ATerm t);
static ATerm k_10 (ATerm m_119 (ATerm), ATerm v_47, ATerm u_47, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm m_10 (ATerm z_43, ATerm a_44, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t);
static ATerm o_10 (ATerm s_33, ATerm t_33, ATerm t);
static ATerm p_10 (ATerm k_32, ATerm l_32, ATerm t);
static ATerm r_10 (ATerm f_112 (ATerm), ATerm r_248, ATerm q_32, ATerm t);
static ATerm q_10 (ATerm g_32, ATerm h_32, ATerm t);
static ATerm z_13 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm s_131 (ATerm), ATerm t);
static ATerm h_94 (ATerm b_94, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_10 (ATerm m_32, ATerm t);
static ATerm t_10 (ATerm y_56, ATerm z_56, ATerm t);
static ATerm u_10 (ATerm u_33, ATerm v_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_95 (ATerm r_94, ATerm t);
static ATerm t_95 (ATerm v_94, ATerm w_94, ATerm x_94, ATerm t);
static ATerm u_95 (ATerm f_95, ATerm g_95, ATerm h_95, ATerm t);
static ATerm v_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_117 (ATerm), ATerm t);
static ATerm y_10 (ATerm f_45, ATerm g_45, ATerm t);
ATerm if_verbose2_1_0 (ATerm w_113 (ATerm), ATerm t);
static ATerm e_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_11 (ATerm z_37, ATerm a_38, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_10 (ATerm o_43, ATerm p_43, ATerm n_43, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_10 (ATerm w_40, ATerm x_40, ATerm t);
ATerm foldr_2_0 (ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_113 (ATerm), ATerm t);
static ATerm g_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm need_help_1_0 (ATerm q_132 (ATerm), ATerm t);
ATerm map_1_0 (ATerm d_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm t_134 (ATerm), ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm parse_options_1_0 (ATerm s_134 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_132 (ATerm), ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm t);
static ATerm n_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
ATerm iowrap_3_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm t);
static ATerm w_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,o_0 = NULL,r_0 = NULL;
  a_0 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_d_17;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_17), b_0), term_e_17);
  r_0 = t;
  t = SSL_printnl(o_0, r_0);
  t = term_g_17;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      v_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,z_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty);
        r_1 = t;
        t = term_j_17;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty));
        t = m_10(z_1, r_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm k_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, w_1);
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        {
          ATerm v_3 = NULL,y_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty);
          v_3 = t;
          t = term_j_17;
          y_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty));
          t = m_10(y_3, v_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm l_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_17) != ATmakeSymbol("e_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, w_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
  o_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_2 = ATgetFirst((ATermList) t);
          q_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 = NULL,n_4 = NULL,s_4 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(o_2);
            d_4 = t;
            t = p_2;
            t = l_123(t);
            n_4 = t;
            t = q_2;
            t = filter_1_0(l_123, t);
            s_4 = t;
            t = (ATerm) ATinsert(CheckATermList(s_4), n_4);
            h_0 = t;
            t = SSLsetAnnotations(h_0, d_4);
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            t = q_2;
            t = filter_1_0(l_123, t);
          }
      }
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_j_17;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  u_2 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            v_2 = ATgetArgument(t, 0);
            {
              ATerm s_17 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_17);
        {
          ATerm z_2 = NULL,a_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty);
          z_2 = t;
          t = term_u_17;
          a_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty), term_u_17);
          t = i_10(j_0, z_2, a_3, t);
          t = u_2;
        }
      }
    else
      {
        t = p_17;
        {
          ATerm d_3 = NULL,e_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              v_2 = ATgetArgument(t, 0);
              {
                ATerm v_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty);
          d_3 = t;
          t = term_x_17;
          e_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty), term_x_17);
          t = i_10(v_0, d_3, e_3, t);
          t = u_2;
        }
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
    }
  return(t);
}
static ATerm w_8 (ATerm u_81, ATerm t_81, ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_0 = NULL,p_0 = NULL,m_0 = NULL;
  t = t_81;
  t = topdown_1_0(x_0, t);
  t = u_81;
  if(match_cons(t, sym_Signature_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_81);
  i_3 = t;
  t = j_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_3 = ATgetFirst((ATermList) t);
      n_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_3);
  l_3 = t;
  t = m_3;
  if(match_cons(t, sym_Constructors_1))
    {
      q_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  p_3 = t;
  t = q_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, r_3);
  m_0 = t;
  t = SSLsetAnnotations(m_0, p_3);
  s_3 = t;
  t = n_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_3), s_3);
  p_0 = t;
  t = SSLsetAnnotations(p_0, l_3);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, o_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, i_3);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, t_81)), k_3));
  return(t);
}
static ATerm y_8 (ATerm d_60, ATerm e_60, ATerm f_60, ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  t = term_d_17;
  w_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), f_60), term_d_18), e_60), term_c_18), d_60), term_a_18);
  x_3 = t;
  t = SSL_printnl(w_3, x_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), f_60), term_d_18), e_60), term_c_18), d_60), term_a_18);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if(((ATgetType(f_18) != AT_INT) || (ATgetInt((ATermInt) f_18) != 0)))
        _fail(t);
      {
        ATerm g_18 = ATgetArgument(t, 1);
        if(((ATgetType(g_18) != AT_INT) || (ATgetInt((ATermInt) g_18) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm r_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  r_4 = t;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4;
  if(match_cons(t, sym__2))
    {
      w_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = x_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_5 = NULL,w_5 = NULL;
        t = u_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_18 = ATgetFirst((ATermList) t);
            ATerm l_18 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(l_18) == AT_LIST) && !(ATisEmpty(l_18))))
              {
                ATerm m_18 = ATgetFirst((ATermList) l_18);
                ATerm n_18 = (ATerm) ATgetNext((ATermList) l_18);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm o_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_18;
            }
        }
        t = term_d_17;
        v_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, u_4), term_p_18);
        w_5 = t;
        t = SSL_printnl(v_5, w_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, u_4), term_p_18);
        t = giving_up_0_0(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        {
          ATerm d_6 = NULL,f_6 = NULL;
          t = u_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_18 = ATgetFirst((ATermList) t);
              if(match_cons(r_18, sym__2))
                {
                  d_6 = ATgetArgument(r_18, 0);
                  f_6 = ATgetArgument(r_18, 1);
                }
              else
                _fail(t);
              {
                ATerm s_18 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(s_18) != AT_LIST) || !(ATisEmpty(s_18))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_4, (ATerm) ATmakeAppl(sym__2, d_6, f_6));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, u_4, (ATerm) ATmakeAppl(sym__2, d_6, f_6));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,f_8 = NULL,g_8 = NULL,i_8 = NULL,j_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
      {
        ATerm l_6 = NULL,o_6 = NULL,p_6 = NULL,j_1 = NULL;
        t = SSLgetAnnotations(g_8);
        l_6 = t;
        t = i_8;
        t = a_104(t);
        o_6 = t;
        t = j_8;
        t = a_104(t);
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, o_6, p_6);
        j_1 = t;
        t = SSLsetAnnotations(j_1, l_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_8 = ATgetArgument(t, 0);
          j_8 = ATgetArgument(t, 1);
          d_8 = ATgetArgument(t, 2);
          {
            ATerm s_7 = NULL,h_8 = NULL,l_8 = NULL,m_8 = NULL,k_1 = NULL;
            t = SSLgetAnnotations(g_8);
            s_7 = t;
            t = i_8;
            t = c_104(t);
            h_8 = t;
            t = j_8;
            t = c_104(t);
            l_8 = t;
            t = d_8;
            t = a_104(t);
            m_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, h_8, l_8, m_8);
            k_1 = t;
            t = SSLsetAnnotations(k_1, s_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_8 = ATgetArgument(t, 0);
              j_8 = ATgetArgument(t, 1);
              d_8 = ATgetArgument(t, 2);
              f_8 = ATgetArgument(t, 3);
              {
                ATerm g_9 = NULL,l_9 = NULL,n_9 = NULL,p_9 = NULL,t_9 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(g_8);
                g_9 = t;
                t = i_8;
                t = c_104(t);
                l_9 = t;
                t = j_8;
                t = c_104(t);
                n_9 = t;
                t = d_8;
                t = c_104(t);
                p_9 = t;
                t = f_8;
                t = a_104(t);
                t_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_9, n_9, p_9, t_9);
                l_1 = t;
                t = SSLsetAnnotations(l_1, g_9);
              }
            }
          else
            {
              ATerm h_10 = NULL,x_10 = NULL,a_11 = NULL,m_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  i_8 = ATgetArgument(t, 0);
                  j_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_8);
              h_10 = t;
              t = i_8;
              t = c_104(t);
              x_10 = t;
              t = j_8;
              t = a_104(t);
              a_11 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, x_10, a_11);
              m_1 = t;
              t = SSLsetAnnotations(m_1, h_10);
            }
        }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm u_8 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_8 = ATgetArgument(t, 0);
          {
            ATerm v_18 = ATgetArgument(t, 1);
          }
          {
            ATerm w_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_18);
      t = u_8;
    }
  else
    {
      t = t_18;
      if(match_cons(t, sym_SDefT_4))
        {
          u_8 = ATgetArgument(t, 0);
          {
            ATerm x_18 = ATgetArgument(t, 1);
          }
          {
            ATerm y_18 = ATgetArgument(t, 2);
          }
          {
            ATerm z_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_8;
    }
  return(t);
}
static ATerm f_9 (ATerm z_25, ATerm y_25, ATerm t)
{
  t = z_25;
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
  ATerm b_12 = NULL,k_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(i_1, b_12, k_12, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      if((l_12 != ATgetArgument(t, 1)))
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
  ATerm v_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(p_1, v_12, z_12, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      if((e_13 != ATgetArgument(t, 1)))
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
ATerm free_vars2_4_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_125 (ATerm), ATerm t)
{
  static ATerm p_12 (ATerm t)
  {
    ATerm o_11 = NULL,t_11 = NULL,v_11 = NULL;
    v_11 = t;
    {
      ATerm a_19 = t;
      int b_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_125(t);
          LocalPopChoice(b_19);
        }
      else
        {
          t = a_19;
          t = (ATerm) ATempty;
        }
    }
    o_11 = t;
    t = v_11;
    {
      ATerm d_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_12 = NULL,u_11 = NULL,w_11 = NULL;
          t = t_125(t);
          a_12 = t;
          t = v_11;
          {
            static ATerm c_1 (ATerm t)
            {
              ATerm n_11 = NULL;
              t = p_12(t);
              n_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_11, a_12);
              t = y_9(v_125, n_11, a_12, t);
              return(t);
            }
            t = u_125(c_1, p_12, d_1, t);
          }
          w_11 = t;
          t = SSL_explode_term(w_11);
          if(match_cons(t, sym__2))
            {
              ATerm f_19 = ATgetArgument(t, 0);
              u_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_11;
          t = foldr_3_0(f_1, h_1, _id, t);
          LocalPopChoice(e_19);
        }
      else
        {
          t = d_19;
          {
            ATerm q_12 = NULL;
            t = SSL_explode_term(v_11);
            if(match_cons(t, sym__2))
              {
                ATerm g_19 = ATgetArgument(t, 0);
                q_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_12;
            t = foldr_3_0(n_1, o_1, p_12, t);
          }
        }
    }
    t_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_11, t_11);
    t = k_10(q_1, o_11, t_11, t);
    return(t);
  }
  t = p_12(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,a_13 = NULL,b_13 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if(match_cons(h_19, sym_SVar_1))
        {
          w_12 = ATgetArgument(h_19, 0);
        }
      else
        _fail(t);
      x_12 = ATgetArgument(t, 1);
      y_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_12;
  t = foldr_3_0(b_2, c_2, d_2, t);
  a_13 = t;
  t = y_12;
  t = foldr_3_0(e_2, f_2, m_2, t);
  b_13 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_12, (ATerm) ATmakeAppl(sym__2, a_13, b_13)));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
      t = k_13;
      t = f_9(l_13, m_13, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_13 = ATgetArgument(t, 0);
          m_13 = ATgetArgument(t, 1);
          n_13 = ATgetArgument(t, 2);
          t = m_13;
          t = map_1_0(n_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              l_13 = ATgetArgument(t, 0);
              m_13 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, l_13);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  l_13 = ATgetArgument(t, 0);
                  m_13 = ATgetArgument(t, 1);
                  n_13 = ATgetArgument(t, 2);
                  o_13 = ATgetArgument(t, 3);
                  t = m_13;
                  t = map_1_0(r_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_13 = ATgetArgument(t, 0);
                      m_13 = ATgetArgument(t, 1);
                      n_13 = ATgetArgument(t, 2);
                      o_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_13;
                  t = map_1_0(s_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if(match_cons(i_19, sym__2))
        {
          b_16 = ATgetArgument(i_19, 0);
          {
            ATerm j_19 = ATgetArgument(i_19, 1);
          }
        }
      else
        _fail(t);
      if((b_16 != ATgetArgument(t, 1)))
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
  t = term_k_19;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(c_13, d_13, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(h_13, i_13, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm p_14 = NULL;
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_14 = ATgetArgument(t, 0);
          {
            ATerm q_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_19);
      t = p_14;
    }
  else
    {
      t = m_19;
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
static ATerm r_2 (ATerm t)
{
  ATerm i_15 = NULL;
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_15 = ATgetArgument(t, 0);
          {
            ATerm t_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_19);
      t = i_15;
    }
  else
    {
      t = r_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_15;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm y_15 = NULL;
  ATerm u_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_15 = ATgetArgument(t, 0);
          {
            ATerm z_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = y_15;
    }
  else
    {
      t = u_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_15;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(s_1, t_1, sboundin_3_0, a_2, t);
  return(t);
}
static ATerm b_34 (ATerm b_27, ATerm c_27, ATerm t)
{
  t = b_27;
  {
    ATerm a_20 = t;
    if((PushChoice() == 0))
      {
        ATerm o_27 = NULL,p_27 = NULL,t_27 = NULL,u_27 = NULL,x_1 = NULL;
        u_27 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_27 = ATgetFirst((ATermList) t);
            t_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_27);
        o_27 = t;
        t = t_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(t_27), p_27);
        x_1 = t;
        t = SSLsetAnnotations(x_1, o_27);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_20, b_27);
  return(t);
}
static ATerm c_34 (ATerm x_27, ATerm y_27, ATerm t)
{
  t = x_27;
  {
    ATerm i_20 = t;
    if((PushChoice() == 0))
      {
        ATerm a_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,y_1 = NULL;
        h_28 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_28 = ATgetFirst((ATermList) t);
            g_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_28);
        a_28 = t;
        t = g_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_28), f_28);
        y_1 = t;
        t = SSLsetAnnotations(y_1, a_28);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_20, x_27);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,k_15 = NULL;
  b_29 = t;
  t = SSL_explode_term(b_29);
  if(match_cons(t, sym__2))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_20 = ATgetArgument(t, 1);
        if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
          {
            c_29 = ATgetFirst((ATermList) n_20);
            {
              ATerm o_20 = (ATerm) ATgetNext((ATermList) n_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(b_29);
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(((ATgetType(q_20) == AT_LIST) && !(ATisEmpty(q_20))))
          {
            ATerm r_20 = ATgetFirst((ATermList) q_20);
            ATerm s_20 = (ATerm) ATgetNext((ATermList) q_20);
            if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
              {
                k_15 = ATgetFirst((ATermList) s_20);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, k_15), c_29));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  if(match_cons(t, sym__2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, b_30), a_30));
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  if(match_cons(t, sym__2))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, e_30), d_30));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm b_31 = NULL,e_31 = NULL;
  if(match_cons(t, sym__2))
    {
      b_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_20, (ATerm) ATinsert(ATinsert(ATempty, e_31), b_31));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm g_31 = NULL,k_31 = NULL;
  if(match_cons(t, sym__2))
    {
      g_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_20, (ATerm) ATinsert(ATinsert(ATempty, k_31), g_31));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,l_28 = NULL,m_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  if(match_cons(t, sym_Anno_2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
      {
        ATerm z_28 = NULL;
        t = r_28;
        t = foldr_2_0(t_2, w_2, t);
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_28, z_28);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          q_28 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, q_28, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              q_28 = ATgetArgument(t, 0);
              {
                ATerm r_15 = NULL;
                t = q_28;
                {
                  ATerm y_20 = t;
                  int a_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_b_21;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_c_21;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_e_21;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_f_21;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_g_21;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(a_21);
                    }
                  else
                    {
                      t = y_20;
                      {
                        ATerm j_16 = NULL;
                        t = SSL_explode_string(q_28);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm i_21 = ATgetFirst((ATermList) t);
                            if(((ATgetType(i_21) != AT_INT) || (ATgetInt((ATermInt) i_21) != 39)))
                              _fail(t);
                            {
                              ATerm j_21 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
                                {
                                  j_16 = ATgetFirst((ATermList) j_21);
                                  {
                                    ATerm l_21 = (ATerm) ATgetNext((ATermList) j_21);
                                    if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
                                      {
                                        ATerm m_21 = ATgetFirst((ATermList) l_21);
                                        if(((ATgetType(m_21) != AT_INT) || (ATgetInt((ATermInt) m_21) != 39)))
                                          _fail(t);
                                        {
                                          ATerm q_21 = (ATerm) ATgetNext((ATermList) l_21);
                                          if(((ATgetType(q_21) != AT_LIST) || !(ATisEmpty(q_21))))
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
                        t = j_16;
                      }
                    }
                }
                r_15 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, r_15);
              }
            }
          else
            {
              ATerm r_21 = t;
              int s_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      q_28 = ATgetArgument(t, 0);
                      {
                        ATerm t_21 = ATgetArgument(t, 1);
                      }
                      o_28 = ATgetArgument(t, 2);
                      i_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_21);
                  t = (ATerm) ATmakeAppl(sym_Con_3, q_28, o_28, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_28), (ATerm) ATempty));
                }
              else
                {
                  t = r_21;
                  {
                    ATerm u_21 = t;
                    int v_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            q_28 = ATgetArgument(t, 0);
                            {
                              ATerm y_21 = ATgetArgument(t, 1);
                            }
                            o_28 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_21);
                        t = (ATerm) ATmakeAppl(sym_Con_3, q_28, o_28, term_n_22);
                      }
                    else
                      {
                        t = u_21;
                        if(match_cons(t, sym_Con1_2))
                          {
                            q_28 = ATgetArgument(t, 0);
                            r_28 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, q_28, r_28, term_n_22);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                q_28 = ATgetArgument(t, 0);
                                r_28 = ATgetArgument(t, 1);
                                {
                                  static ATerm x_2 (ATerm t)
                                  {
                                    t = r_28;
                                    return(t);
                                  }
                                  t = q_28;
                                  t = foldr_2_0(x_2, y_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    q_28 = ATgetArgument(t, 0);
                                    t = q_28;
                                    t = foldr_2_0(b_3, c_3, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        q_28 = ATgetArgument(t, 0);
                                        t = q_28;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            j_28 = ATgetFirst((ATermList) t);
                                            l_28 = (ATerm) ATgetNext((ATermList) t);
                                            t = l_28;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm p_23 = t;
                                                int q_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = b_34(q_28, p_28, t);
                                                    LocalPopChoice(q_23);
                                                  }
                                                else
                                                  {
                                                    t = p_23;
                                                    t = j_28;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_34(q_28, p_28, t);
                                              }
                                          }
                                        else
                                          {
                                            t = b_34(q_28, p_28, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            q_28 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, q_28));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                q_28 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, q_28));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    q_28 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, q_28));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        q_28 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, q_28));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            q_28 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_28), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                q_28 = ATgetArgument(t, 0);
                                                                r_28 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_28), r_28);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    q_28 = ATgetArgument(t, 0);
                                                                    r_28 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm f_3 (ATerm t)
                                                                      {
                                                                        t = r_28;
                                                                        return(t);
                                                                      }
                                                                      t = q_28;
                                                                      t = foldr_2_0(f_3, g_3, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        q_28 = ATgetArgument(t, 0);
                                                                        t = q_28;
                                                                        t = foldr_2_0(h_3, t_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            q_28 = ATgetArgument(t, 0);
                                                                            r_28 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_j_20, (ATerm) ATinsert(CheckATermList(r_28), q_28));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                q_28 = ATgetArgument(t, 0);
                                                                                t = q_28;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    j_28 = ATgetFirst((ATermList) t);
                                                                                    l_28 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = l_28;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm r_23 = t;
                                                                                        int s_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = c_34(q_28, p_28, t);
                                                                                            LocalPopChoice(s_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = r_23;
                                                                                            t = j_28;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = c_34(q_28, p_28, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_34(q_28, p_28, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_t_23;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        q_28 = ATgetArgument(t, 0);
                                                                                        r_28 = ATgetArgument(t, 1);
                                                                                        t = r_28;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            m_28 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_b_24, (ATerm) ATinsert(ATinsert(ATempty, m_28), q_28));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            q_28 = ATgetArgument(t, 0);
                                                                                            t = q_28;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                q_28 = ATgetArgument(t, 0);
                                                                                                r_28 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, q_28, r_28, term_c_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    q_28 = ATgetArgument(t, 0);
                                                                                                    r_28 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, q_28, r_28, term_c_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        q_28 = ATgetArgument(t, 0);
                                                                                                        r_28 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, q_28, (ATerm)ATempty, r_28);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            q_28 = ATgetArgument(t, 0);
                                                                                                            r_28 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, r_28, q_28);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                q_28 = ATgetArgument(t, 0);
                                                                                                                r_28 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, q_28, r_28, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    q_28 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, q_28, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        q_28 = ATgetArgument(t, 0);
                                                                                                                        r_28 = ATgetArgument(t, 1);
                                                                                                                        o_28 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_28, r_28, (ATerm)ATempty, o_28);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            q_28 = ATgetArgument(t, 0);
                                                                                                                            r_28 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_28, (ATerm)ATempty, (ATerm)ATempty, r_28);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                q_28 = ATgetArgument(t, 0);
                                                                                                                                r_28 = ATgetArgument(t, 1);
                                                                                                                                o_28 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_28, r_28, (ATerm)ATempty, o_28);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    q_28 = ATgetArgument(t, 0);
                                                                                                                                    r_28 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_28, (ATerm)ATempty, (ATerm)ATempty, r_28);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        q_28 = ATgetArgument(t, 0);
                                                                                                                                        r_28 = ATgetArgument(t, 1);
                                                                                                                                        o_28 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_28, r_28, (ATerm)ATempty, o_28);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            q_28 = ATgetArgument(t, 0);
                                                                                                                                            r_28 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, q_28, (ATerm)ATempty, (ATerm)ATempty, r_28);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm h_24 = ATgetArgument(t, 0);
                                                                                                                                                r_28 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, r_28);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm e_34 = NULL,j_34 = NULL,k_34 = NULL;
  j_34 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      k_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
      {
        ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
        t = j_34;
        t = new_0_0(t);
        s_34 = t;
        t = new_0_0(t);
        t_34 = t;
        t = new_0_0(t);
        u_34 = t;
        t = new_0_0(t);
        v_34 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_34), u_34), t_34), s_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, s_34), (ATerm) ATmakeAppl(sym_Var_1, u_34))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, k_34, (ATerm)ATmakeAppl(sym_Var_1, s_34), (ATerm) ATmakeAppl(sym_Var_1, t_34)), (ATerm) ATmakeAppl(sym_BAM_3, e_34, (ATerm)ATmakeAppl(sym_Var_1, u_34), (ATerm) ATmakeAppl(sym_Var_1, v_34)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_34)), (ATerm) ATmakeAppl(sym_Var_1, t_34))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          k_34 = ATgetArgument(t, 0);
          {
            ATerm w_34 = NULL,x_34 = NULL,z_34 = NULL,b_35 = NULL;
            t = j_34;
            t = new_0_0(t);
            z_34 = t;
            t = k_34;
            {
              static ATerm u_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((w_34 != NULL) && (w_34 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      w_34 = ATgetArgument(t, 0);
                    if(((x_34 != NULL) && (x_34 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      x_34 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_34);
                return(t);
              }
              t = oncetd_1_0(u_3, t);
            }
            b_35 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_34)), not_null(w_34))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_34)), (ATerm) ATmakeAppl(sym_Build_1, b_35))));
          }
        }
      else
        {
          ATerm d_35 = NULL,h_35 = NULL,m_35 = NULL,z_35 = NULL,a_36 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              k_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_34;
          t = new_0_0(t);
          m_35 = t;
          t = new_0_0(t);
          z_35 = t;
          t = k_34;
          {
            static ATerm z_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((d_35 != NULL) && (d_35 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_35 = ATgetArgument(t, 0);
                  if(((h_35 != NULL) && (h_35 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    h_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, m_35);
              return(t);
            }
            t = oncetd_1_0(z_3, t);
          }
          a_36 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_36), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_35)), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_35))))), (ATerm)ATmakeAppl(sym_Var_1, m_35), (ATerm) ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_35)), not_null(d_35)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  e_36 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
        t = e_36;
        t = new_0_0(t);
        o_36 = t;
        t = f_36;
        {
          static ATerm a_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_36 != NULL) && (l_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_36 = ATgetArgument(t, 0);
                if(((n_36 != NULL) && (n_36 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_36 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_36), l_36);
            return(t);
          }
          t = pat_td_1_0(a_4, t);
        }
        p_36 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_36), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_36))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_36))))));
        LocalPopChoice(u_24);
      }
    else
      {
        t = n_24;
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
              t = e_36;
              t = new_0_0(t);
              s_36 = t;
              t = f_36;
              {
                static ATerm b_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_36 != NULL) && (r_36 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_36);
                  return(t);
                }
                t = pat_td_1_0(b_4, t);
              }
              t_36 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_36)), not_null(r_36))));
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              {
                ATerm v_36 = NULL,w_36 = NULL,a_37 = NULL,b_37 = NULL;
                t = e_36;
                t = new_0_0(t);
                a_37 = t;
                t = f_36;
                {
                  static ATerm c_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_36 != NULL) && (w_36 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_36 = ATgetArgument(t, 0);
                        if(((v_36 != NULL) && (v_36 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_37);
                    return(t);
                  }
                  t = pat_td_1_0(c_4, t);
                }
                b_37 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_36)), not_null(w_36)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm l_137 (ATerm), ATerm t)
{
  ATerm r_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_137(t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = r_25;
      {
        ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL;
        m_41 = t;
        if(match_cons(t, sym_Op_2))
          {
            n_41 = ATgetArgument(t, 0);
            o_41 = ATgetArgument(t, 1);
            {
              ATerm r_16 = NULL,u_16 = NULL,g_2 = NULL;
              t = SSLgetAnnotations(m_41);
              r_16 = t;
              t = o_41;
              {
                static ATerm e_4 (ATerm t)
                {
                  t = pat_td_1_0(l_137, t);
                  return(t);
                }
                t = fetch_1_0(e_4, t);
              }
              u_16 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, n_41, u_16);
              g_2 = t;
              t = SSLsetAnnotations(g_2, r_16);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                n_41 = ATgetArgument(t, 0);
                o_41 = ATgetArgument(t, 1);
                {
                  ATerm v_25 = t;
                  int w_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_17 = NULL,r_17 = NULL,h_2 = NULL;
                      t = SSLgetAnnotations(m_41);
                      o_17 = t;
                      t = o_41;
                      t = pat_td_1_0(l_137, t);
                      r_17 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, n_41, r_17);
                      h_2 = t;
                      t = SSLsetAnnotations(h_2, o_17);
                      LocalPopChoice(w_25);
                    }
                  else
                    {
                      t = v_25;
                      {
                        ATerm b_18 = NULL,h_18 = NULL,i_2 = NULL;
                        t = SSLgetAnnotations(m_41);
                        b_18 = t;
                        t = n_41;
                        t = pat_td_1_0(l_137, t);
                        h_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, h_18, o_41);
                        i_2 = t;
                        t = SSLsetAnnotations(i_2, b_18);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    n_41 = ATgetArgument(t, 0);
                    o_41 = ATgetArgument(t, 1);
                    l_41 = ATgetArgument(t, 2);
                    {
                      ATerm q_18 = NULL,c_19 = NULL,j_2 = NULL;
                      t = SSLgetAnnotations(m_41);
                      q_18 = t;
                      t = l_41;
                      {
                        static ATerm f_4 (ATerm t)
                        {
                          t = pat_td_1_0(l_137, t);
                          return(t);
                        }
                        t = fetch_1_0(f_4, t);
                      }
                      c_19 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, n_41, o_41, c_19);
                      j_2 = t;
                      t = SSLsetAnnotations(j_2, q_18);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        n_41 = ATgetArgument(t, 0);
                        o_41 = ATgetArgument(t, 1);
                        l_41 = ATgetArgument(t, 2);
                        {
                          ATerm x_19 = NULL,h_20 = NULL,k_2 = NULL;
                          t = SSLgetAnnotations(m_41);
                          x_19 = t;
                          t = l_41;
                          {
                            static ATerm g_4 (ATerm t)
                            {
                              t = pat_td_1_0(l_137, t);
                              return(t);
                            }
                            t = fetch_1_0(g_4, t);
                          }
                          h_20 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, n_41, o_41, h_20);
                          k_2 = t;
                          t = SSLsetAnnotations(k_2, x_19);
                        }
                      }
                    else
                      {
                        ATerm z_20 = NULL,d_21 = NULL,l_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            n_41 = ATgetArgument(t, 0);
                            o_41 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(m_41);
                        z_20 = t;
                        t = o_41;
                        t = pat_td_1_0(l_137, t);
                        d_21 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, n_41, d_21);
                        l_2 = t;
                        t = SSLsetAnnotations(l_2, z_20);
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
  ATerm f_42 = NULL,g_42 = NULL;
  f_42 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_42 = NULL,n_42 = NULL,x_42 = NULL,y_42 = NULL;
        t = f_42;
        t = new_0_0(t);
        x_42 = t;
        t = g_42;
        {
          static ATerm h_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_42 != NULL) && (h_42 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_42 = ATgetArgument(t, 0);
                if(((n_42 != NULL) && (n_42 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, x_42);
            return(t);
          }
          t = pat_td_1_0(h_4, t);
        }
        y_42 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_42)), not_null(h_42))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_42)))), (ATerm) ATmakeAppl(sym_Build_1, y_42)));
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_42 = NULL,b_43 = NULL,c_43 = NULL;
              t = f_42;
              t = new_0_0(t);
              b_43 = t;
              t = g_42;
              {
                static ATerm k_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((z_42 != NULL) && (z_42 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_42 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, b_43);
                  return(t);
                }
                t = pat_td_1_0(k_4, t);
              }
              c_43 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_43)))), (ATerm) ATmakeAppl(sym_Build_1, c_43)));
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              {
                ATerm d_43 = NULL,e_43 = NULL,i_43 = NULL,j_43 = NULL;
                t = f_42;
                t = new_0_0(t);
                i_43 = t;
                t = g_42;
                {
                  static ATerm l_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((d_43 != NULL) && (d_43 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          d_43 = ATgetArgument(t, 0);
                        if(((e_43 != NULL) && (e_43 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_43 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_43);
                    return(t);
                  }
                  t = pat_td_1_0(l_4, t);
                }
                j_43 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_43), not_null(e_43), (ATerm) ATmakeAppl(sym_Var_1, i_43))), (ATerm) ATmakeAppl(sym_Build_1, j_43)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_43 = NULL,y_43 = NULL,b_44 = NULL,d_44 = NULL,k_44 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_44, k_44);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_44 = ATgetArgument(t, 0);
          t = d_44;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_43 = ATgetFirst((ATermList) t);
              y_43 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_43, (ATerm) ATmakeAppl(sym_LChoices_1, y_43));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_o_26;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_44 = ATgetArgument(t, 0);
              t = d_44;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_43 = ATgetFirst((ATermList) t);
                  y_43 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_43, (ATerm) ATmakeAppl(sym_Choices_1, y_43));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_o_26;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_44 = ATgetArgument(t, 0);
                  t = d_44;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_43 = ATgetFirst((ATermList) t);
                      y_43 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_43, (ATerm) ATmakeAppl(sym_Seqs_1, y_43));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_c_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      d_44 = ATgetArgument(t, 0);
                      k_44 = ATgetArgument(t, 1);
                      b_44 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, k_44, (ATerm) ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, b_44), d_44)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          d_44 = ATgetArgument(t, 0);
                          k_44 = ATgetArgument(t, 1);
                          b_44 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_44)), d_44), (ATerm) ATmakeAppl(sym_Build_1, k_44)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              d_44 = ATgetArgument(t, 0);
                              k_44 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_44, (ATerm) ATmakeAppl(sym_Match_1, k_44));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  d_44 = ATgetArgument(t, 0);
                                  k_44 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_44), k_44);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      d_44 = ATgetArgument(t, 0);
                                      k_44 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_44), d_44);
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
static ATerm o_4 (ATerm t)
{
  ATerm p_26 = t;
  if((PushChoice() == 0))
    {
      ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,i_4 = NULL;
      n_46 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_46);
      l_46 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_46);
      i_4 = t;
      t = SSLsetAnnotations(i_4, l_46);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_26;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_26;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm o_46 = NULL,q_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_46 = ATgetFirst((ATermList) t);
      q_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_46, q_46);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if(match_cons(s_26, sym__2))
        {
          r_46 = ATgetArgument(s_26, 0);
          s_46 = ATgetArgument(s_26, 1);
        }
      else
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(match_cons(t_26, sym__2))
          {
            t_46 = ATgetArgument(t_26, 0);
            u_46 = ATgetArgument(t_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_46), r_46), (ATerm) ATinsert(CheckATermList(u_46), s_46));
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_26;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_46 = ATgetFirst((ATermList) t);
      w_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_46, w_46);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,b_47 = NULL,c_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(match_cons(u_26, sym__2))
        {
          x_46 = ATgetArgument(u_26, 0);
          y_46 = ATgetArgument(u_26, 1);
        }
      else
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(match_cons(v_26, sym__2))
          {
            b_47 = ATgetArgument(v_26, 0);
            c_47 = ATgetArgument(v_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_47), x_46), (ATerm) ATinsert(CheckATermList(c_47), y_46));
  return(t);
}
static ATerm m_9 (ATerm q_76, ATerm r_76, ATerm s_76, ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,j_46 = NULL,k_46 = NULL,j_4 = NULL;
  t = s_76;
  t = fetch_1_0(o_4, t);
  t = s_76;
  t = genzip_4_0(t_4, a_5, b_5, LiftPrimArg_0_0, t);
  k_46 = t;
  if(match_cons(t, sym__2))
    {
      b_46 = ATgetArgument(t, 0);
      c_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_46);
  a_46 = t;
  t = b_46;
  t = concat_0_0(t);
  d_46 = t;
  t = c_46;
  t = genzip_4_0(c_5, d_5, e_5, _id, t);
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_46, j_46);
  j_4 = t;
  t = SSLsetAnnotations(j_4, a_46);
  if(match_cons(t, sym__2))
    {
      x_45 = ATgetArgument(t, 0);
      {
        ATerm w_26 = ATgetArgument(t, 1);
        if(match_cons(w_26, sym__2))
          {
            y_45 = ATgetArgument(w_26, 0);
            z_45 = ATgetArgument(w_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, x_45, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_45), (ATerm) ATmakeAppl(sym_CallT_3, q_76, r_76, z_45)));
  return(t);
}
static ATerm p_47 (ATerm g_47, ATerm t)
{
  ATerm i_47 = NULL;
  t = g_47;
  {
    ATerm x_26 = t;
    if((PushChoice() == 0))
      {
        ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_4 = NULL;
        l_47 = t;
        if(match_cons(t, sym_Var_1))
          {
            k_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_47);
        j_47 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, k_47);
        m_4 = t;
        t = SSLsetAnnotations(m_4, j_47);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_26;
      }
  }
  t = new_0_0(t);
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, i_47), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_47), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_47)))), (ATerm) ATmakeAppl(sym_Var_1, i_47)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL;
  m_47 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_47 = ATgetArgument(t, 0);
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_47(m_47, t);
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATmakeAppl(sym_Var_1, n_47)));
          }
      }
    }
  else
    {
      t = p_47(m_47, t);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm a_27 = t;
  if((PushChoice() == 0))
    {
      ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,p_4 = NULL;
      u_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_22);
      s_22 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_22);
      p_4 = t;
      t = SSLsetAnnotations(p_4, s_22);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_27;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_26;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_22 = ATgetFirst((ATermList) t);
      w_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_22, w_22);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,c_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(match_cons(d_27, sym__2))
        {
          x_22 = ATgetArgument(d_27, 0);
          y_22 = ATgetArgument(d_27, 1);
        }
      else
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(match_cons(e_27, sym__2))
          {
            z_22 = ATgetArgument(e_27, 0);
            c_23 = ATgetArgument(e_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_22), x_22), (ATerm) ATinsert(CheckATermList(c_23), y_22));
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_26;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm d_23 = NULL,g_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_23 = ATgetFirst((ATermList) t);
      g_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_23, g_23);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,m_23 = NULL,o_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(match_cons(f_27, sym__2))
        {
          i_23 = ATgetArgument(f_27, 0);
          j_23 = ATgetArgument(f_27, 1);
        }
      else
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(match_cons(g_27, sym__2))
          {
            m_23 = ATgetArgument(g_27, 0);
            o_23 = ATgetArgument(g_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_23), i_23), (ATerm) ATinsert(CheckATermList(o_23), j_23));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm h_27 = t;
  if((PushChoice() == 0))
    {
      ATerm f_25 = NULL,g_25 = NULL,k_25 = NULL,y_4 = NULL;
      k_25 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_25);
      f_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_25);
      y_4 = t;
      t = SSLsetAnnotations(y_4, f_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_27;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_26;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_25 = NULL,s_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_25 = ATgetFirst((ATermList) t);
      s_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_25, s_25);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm x_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if(match_cons(i_27, sym__2))
        {
          x_25 = ATgetArgument(i_27, 0);
          a_26 = ATgetArgument(i_27, 1);
        }
      else
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(match_cons(j_27, sym__2))
          {
            b_26 = ATgetArgument(j_27, 0);
            c_26 = ATgetArgument(j_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_26), x_25), (ATerm) ATinsert(CheckATermList(c_26), a_26));
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_26;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_26 = ATgetFirst((ATermList) t);
      e_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_26, e_26);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(match_cons(k_27, sym__2))
        {
          f_26 = ATgetArgument(k_27, 0);
          g_26 = ATgetArgument(k_27, 1);
        }
      else
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(match_cons(l_27, sym__2))
          {
            h_26 = ATgetArgument(l_27, 0);
            i_26 = ATgetArgument(l_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_26), f_26), (ATerm) ATinsert(CheckATermList(i_26), g_26));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      t_52 = ATgetArgument(t, 0);
      u_52 = ATgetArgument(t, 1);
      r_52 = ATgetArgument(t, 2);
      {
        ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,k_22 = NULL,o_22 = NULL,p_22 = NULL,q_4 = NULL;
        t = r_52;
        t = fetch_1_0(f_5, t);
        t = r_52;
        t = genzip_4_0(g_5, h_5, i_5, LiftPrimArg_0_0, t);
        p_22 = t;
        if(match_cons(t, sym__2))
          {
            f_22 = ATgetArgument(t, 0);
            g_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_22);
        e_22 = t;
        t = f_22;
        t = concat_0_0(t);
        k_22 = t;
        t = g_22;
        t = genzip_4_0(k_5, n_5, o_5, _id, t);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_22, o_22);
        q_4 = t;
        t = SSLsetAnnotations(q_4, e_22);
        if(match_cons(t, sym__2))
          {
            b_22 = ATgetArgument(t, 0);
            {
              ATerm m_27 = ATgetArgument(t, 1);
              if(match_cons(m_27, sym__2))
                {
                  c_22 = ATgetArgument(m_27, 0);
                  d_22 = ATgetArgument(m_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_22), (ATerm) ATmakeAppl(sym_PrimT_3, t_52, u_52, d_22)));
      }
    }
  else
    {
      ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,z_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          t_52 = ATgetArgument(t, 0);
          u_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_52;
      t = fetch_1_0(q_5, t);
      t = u_52;
      t = genzip_4_0(s_5, u_5, x_5, LiftPrimArg_0_0, t);
      e_25 = t;
      if(match_cons(t, sym__2))
        {
          a_25 = ATgetArgument(t, 0);
          b_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_25);
      z_24 = t;
      t = a_25;
      t = concat_0_0(t);
      c_25 = t;
      t = b_25;
      t = genzip_4_0(y_5, z_5, a_6, _id, t);
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, d_25);
      z_4 = t;
      t = SSLsetAnnotations(z_4, z_24);
      if(match_cons(t, sym__2))
        {
          o_24 = ATgetArgument(t, 0);
          {
            ATerm q_27 = ATgetArgument(t, 1);
            if(match_cons(q_27, sym__2))
              {
                p_24 = ATgetArgument(q_27, 0);
                q_24 = ATgetArgument(q_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, o_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_24), (ATerm) ATmakeAppl(sym_PrimT_3, t_52, (ATerm)ATempty, q_24)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  static ATerm c_53 (ATerm t)
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_110(t);
        t = c_53(t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = r_110(t);
      }
    return(t);
  }
  t = c_53(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
  s_53 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_53 = ATgetArgument(t, 0);
      q_53 = ATgetArgument(t, 1);
      r_53 = ATgetArgument(t, 2);
      {
        ATerm r_26 = NULL,j_5 = NULL;
        t = SSLgetAnnotations(s_53);
        r_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, p_53, q_53, r_53);
        j_5 = t;
        t = SSLsetAnnotations(j_5, r_26);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = s_53;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm v_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_27;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,f_55 = NULL,g_55 = NULL;
  c_55 = t;
  if(match_cons(t, sym_Con_3))
    {
      f_55 = ATgetArgument(t, 0);
      g_55 = ATgetArgument(t, 1);
      b_55 = ATgetArgument(t, 2);
      {
        ATerm n_27 = NULL,l_5 = NULL;
        t = SSLgetAnnotations(c_55);
        n_27 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_55, g_55, b_55);
        l_5 = t;
        t = SSLsetAnnotations(l_5, n_27);
      }
    }
  else
    {
      ATerm s_28 = NULL,m_5 = NULL;
      if(match_cons(t, sym_App_2))
        {
          f_55 = ATgetArgument(t, 0);
          g_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_55);
      s_28 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, f_55, g_55);
      m_5 = t;
      t = SSLsetAnnotations(m_5, s_28);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm w_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(c_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      m_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_55;
  if(match_cons(t, sym_StratRule_3))
    {
      n_55 = ATgetArgument(t, 0);
      o_55 = ATgetArgument(t, 1);
      p_55 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_55), (ATerm) ATmakeAppl(sym_Where_1, p_55)), n_55));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          n_55 = ATgetArgument(t, 0);
          o_55 = ATgetArgument(t, 1);
          p_55 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_55;
      t = pureterm_0_0(t);
      t = o_55;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, o_55)), (ATerm) ATmakeAppl(sym_Where_1, p_55)), (ATerm) ATmakeAppl(sym_Match_1, n_55)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  static ATerm w_55 (ATerm t)
  {
    ATerm z_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_105(t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = z_27;
        t = SRTS_one(w_55, t);
      }
    return(t);
  }
  t = w_55(t);
  return(t);
}
static ATerm q_9 (ATerm d_72, ATerm e_72, ATerm f_72, ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
  t = new_0_0(t);
  b_56 = t;
  t = d_72;
  {
    static ATerm g_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm c_28 = ATgetArgument(t, 0);
          if(match_cons(c_28, sym_Var_1))
            {
              if(((a_56 != NULL) && (a_56 != ATgetArgument(c_28, 0))))
                _fail(ATgetArgument(c_28, 0));
              else
                a_56 = ATgetArgument(c_28, 0);
            }
          else
            _fail(t);
          if(((y_55 != NULL) && (y_55 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_55 = ATgetArgument(t, 1);
          {
            ATerm d_28 = ATgetArgument(t, 2);
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
  t = e_72;
  {
    static ATerm h_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm e_28 = ATgetArgument(t, 0);
          if(match_cons(e_28, sym_Var_1))
            {
              if(((a_56 != NULL) && (a_56 != ATgetArgument(e_28, 0))))
                _fail(ATgetArgument(e_28, 0));
              else
                a_56 = ATgetArgument(e_28, 0);
            }
          else
            _fail(t);
          if(((z_55 != NULL) && (z_55 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_55 = ATgetArgument(t, 1);
          {
            ATerm k_28 = ATgetArgument(t, 2);
            if(match_cons(k_28, sym_CallT_3))
              {
                if(((x_55 != NULL) && (x_55 != ATgetArgument(k_28, 0))))
                  _fail(ATgetArgument(k_28, 0));
                else
                  x_55 = ATgetArgument(k_28, 0);
                {
                  ATerm n_28 = ATgetArgument(k_28, 1);
                  if(((ATgetType(n_28) != AT_LIST) || !(ATisEmpty(n_28))))
                    _fail(t);
                }
                {
                  ATerm t_28 = ATgetArgument(k_28, 2);
                  if(((ATgetType(t_28) != AT_LIST) || !(ATisEmpty(t_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, b_56);
      return(t);
    }
    t = oncetd_1_0(h_6, t);
  }
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_56), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, c_56, d_56, (ATerm) ATmakeAppl(sym_Seq_2, f_72, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(x_55), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_55), not_null(z_55), term_c_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_56)), (ATerm) ATmakeAppl(sym_Var_1, b_56))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_57 = NULL,e_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
          i_57 = t;
          if(match_cons(t, sym_SRule_1))
            {
              j_57 = ATgetArgument(t, 0);
              t = j_57;
              if(match_cons(t, sym_Rule_3))
                {
                  d_57 = ATgetArgument(t, 0);
                  e_57 = ATgetArgument(t, 1);
                  h_57 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = i_57;
              t = q_9(d_57, e_57, h_57, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm q_29 = NULL,w_29 = NULL,p_5 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  j_57 = ATgetArgument(t, 0);
                  k_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_57);
              q_29 = t;
              t = k_57;
              t = desugarRule_0_0(t);
              w_29 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, j_57, w_29);
              p_5 = t;
              t = SSLsetAnnotations(p_5, q_29);
            }
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  static ATerm i_6 (ATerm t)
  {
    t = topdown_1_0(v_104, t);
    return(t);
  }
  t = v_104(t);
  t = SRTS_all(i_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm y_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = y_28;
    }
  t = repeat_2_0(k_6, _id, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
            w_59 = t;
            if(match_cons(t, sym_CallT_3))
              {
                x_59 = ATgetArgument(t, 0);
                y_59 = ATgetArgument(t, 1);
                z_59 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_59;
            t = m_9(x_59, y_59, z_59, t);
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            {
              ATerm h_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(i_29);
                }
              else
                {
                  t = h_29;
                  {
                    ATerm j_29 = t;
                    int k_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(k_29);
                      }
                    else
                      {
                        t = j_29;
                        {
                          ATerm l_29 = t;
                          int m_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_29 = t;
                              int o_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      h_60 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = h_60;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      i_60 = ATgetArgument(t, 0);
                                      t = i_60;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          i_60 = ATgetArgument(t, 0);
                                          j_60 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, i_60, j_60);
                                    }
                                  LocalPopChoice(o_29);
                                }
                              else
                                {
                                  t = n_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(m_29);
                            }
                          else
                            {
                              t = l_29;
                              {
                                ATerm p_29 = t;
                                int r_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(r_29);
                                  }
                                else
                                  {
                                    t = p_29;
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
  t = topdown_1_0(j_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm q_61 = NULL,w_61 = NULL;
  w_61 = t;
  t = SSL_explode_term(w_61);
  if(match_cons(t, sym__2))
    {
      ATerm s_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_29 = ATgetArgument(t, 1);
        if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
          {
            q_61 = ATgetFirst((ATermList) t_29);
            {
              ATerm u_29 = (ATerm) ATgetNext((ATermList) t_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_61;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,l_30 = NULL;
  l_30 = t;
  t = SSL_explode_term(l_30);
  if(match_cons(t, sym__2))
    {
      ATerm v_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_29 = ATgetArgument(t, 1);
        if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
          {
            ATerm y_29 = ATgetFirst((ATermList) x_29);
            h_30 = (ATerm) ATgetNext((ATermList) x_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_g_20;
  i_30 = t;
  t = SSL_mkterm(i_30, h_30);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm d_61 = NULL,f_61 = NULL;
  static ATerm z_61 (ATerm t)
  {
    ATerm z_29 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
        l_61 = t;
        t = map_1_0(m_6, t);
        t = x_108(t);
        m_61 = t;
        t = l_61;
        t = map_1_0(n_6, t);
        t = z_61(t);
        n_61 = t;
        t = (ATerm) ATinsert(CheckATermList(n_61), m_61);
        LocalPopChoice(c_30);
      }
    else
      {
        t = z_29;
        t = map_1_0(q_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = z_61(t);
  f_61 = t;
  t = term_g_20;
  d_61 = t;
  t = SSL_mkterm(d_61, f_61);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm a_62 = NULL;
  a_62 = t;
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_62 = NULL,m_62 = NULL,p_62 = NULL;
        t = a_62;
        t = new_0_0(t);
        e_62 = t;
        t = new_0_0(t);
        m_62 = t;
        t = new_0_0(t);
        p_62 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_62), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, a_62), (ATerm) ATmakeAppl(sym_Var_1, m_62))), (ATerm) ATmakeAppl(sym_Var_1, p_62)), (ATerm)ATmakeAppl(sym_VarDec_2, e_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_30), term_m_30)), m_62, (ATerm)ATmakeAppl(sym_Var_1, m_62), p_62, (ATerm) ATmakeAppl(sym_Var_1, p_62));
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        {
          ATerm r_62 = NULL,u_62 = NULL,x_62 = NULL;
          t = a_62;
          t = new_0_0(t);
          r_62 = t;
          t = new_0_0(t);
          u_62 = t;
          t = new_0_0(t);
          x_62 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_62), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, a_62), (ATerm) ATmakeAppl(sym_Var_1, u_62))), (ATerm) ATmakeAppl(sym_Var_1, x_62)), (ATerm)ATmakeAppl(sym_VarDec_2, r_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_30), term_m_30)), u_62, (ATerm)ATmakeAppl(sym_Var_1, u_62), x_62, (ATerm) ATmakeAppl(sym_Var_1, x_62));
        }
      }
  }
  return(t);
}
static ATerm r_9 (ATerm c_41, ATerm d_41, ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_41, d_41);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      t = SSL_subtr(c_41, d_41);
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm d_63 = NULL,g_63 = NULL;
  if(match_cons(t, sym__2))
    {
      d_63 = ATgetArgument(t, 0);
      g_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_63, g_63, (ATerm) ATempty);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm h_63 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm p_30 = ATgetArgument(t, 0);
      if(((ATgetType(p_30) != AT_INT) || (ATgetInt((ATermInt) p_30) != 0)))
        _fail(t);
      {
        ATerm q_30 = ATgetArgument(t, 1);
      }
      h_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_63;
  return(t);
}
ATerm copy_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  static ATerm u_6 (ATerm t)
  {
    ATerm i_63 = NULL,l_63 = NULL,p_63 = NULL,r_63 = NULL,v_63 = NULL,w_63 = NULL;
    if(match_cons(t, sym__3))
      {
        i_63 = ATgetArgument(t, 0);
        l_63 = ATgetArgument(t, 1);
        p_63 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, i_63, term_g_17);
    t = geq_0_0(t);
    t = term_g_17;
    w_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_63, term_g_17);
    t = r_9(i_63, w_63, t);
    r_63 = t;
    t = l_63;
    t = x_122(t);
    v_63 = t;
    t = (ATerm) ATmakeAppl(sym__3, r_63, l_63, (ATerm) ATinsert(CheckATermList(p_63), v_63));
    return(t);
  }
  t = for_3_0(r_6, s_6, u_6, t);
  return(t);
}
static ATerm s_9 (ATerm g_59, ATerm h_59, ATerm t)
{
  ATerm x_63 = NULL,z_63 = NULL,a_64 = NULL;
  t = new_0_0(t);
  x_63 = t;
  t = new_0_0(t);
  z_63 = t;
  t = new_0_0(t);
  a_64 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_63), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_59)), (ATerm) ATmakeAppl(sym_Var_1, z_63))), (ATerm) ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_59)), (ATerm) ATmakeAppl(sym_Var_1, a_64)))), (ATerm)ATmakeAppl(sym_VarDec_2, x_63, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_30), term_m_30)), z_63, (ATerm)ATmakeAppl(sym_Var_1, z_63), a_64, (ATerm) ATmakeAppl(sym_Var_1, a_64));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_64 = ATgetFirst((ATermList) t);
      i_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_64;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_64;
    }
  else
    {
      t = i_64;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm l_68 (ATerm g_65, ATerm h_65, ATerm i_65, ATerm j_65, ATerm t)
{
  ATerm s_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,z_65 = NULL,a_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,h_66 = NULL,i_66 = NULL,l_66 = NULL;
  t = term_g_17;
  l_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_65, term_g_17);
  t = w_10(h_65, l_66, t);
  i_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_66, term_c_17);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_65 = ATgetFirst((ATermList) t);
      v_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_65;
  t = last_0_0(t);
  s_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_65), u_65), v_65);
  t = genzip_4_0(v_6, x_6, y_6, a_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      w_65 = ATgetArgument(t, 0);
      z_65 = ATgetArgument(t, 1);
      a_66 = ATgetArgument(t, 2);
      d_66 = ATgetArgument(t, 3);
      e_66 = ATgetArgument(t, 4);
      f_66 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_66), a_66), v_65);
  t = concat_0_0(t);
  h_66 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, g_65, term_s_30), z_65, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_66), u_65), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_65)), (ATerm) ATmakeAppl(sym_Op_2, g_65, d_66))), (ATerm)ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_65)), (ATerm) ATmakeAppl(sym_Op_2, g_65, f_66))), (ATerm) ATmakeAppl(sym_Seqs_1, w_65)))));
  return(t);
}
static ATerm m_68 (ATerm v_66, ATerm y_66, ATerm z_66, ATerm a_67, ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL;
  t = a_67;
  t = new_0_0(t);
  g_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_66, (ATerm) ATmakeAppl(sym_Var_1, g_67));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      h_67 = ATgetArgument(t, 0);
      i_67 = ATgetArgument(t, 1);
      j_67 = ATgetArgument(t, 2);
      k_67 = ATgetArgument(t, 3);
      l_67 = ATgetArgument(t, 4);
      m_67 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_67, l_67);
  t = conc_0_0(t);
  n_67 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, v_66, term_t_30), i_67, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(n_67), g_67), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_67)), (ATerm) ATmakeAppl(sym_Op_2, v_66, k_67))), (ATerm)ATmakeAppl(sym_Op_2, v_66, m_67), (ATerm) ATmakeAppl(sym_Seqs_1, h_67)))));
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_30 = ATgetArgument(t, 0);
      ATerm v_30 = ATgetArgument(t, 1);
      if(((ATgetType(v_30) != AT_LIST) || !(ATisEmpty(v_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      if(((ATgetType(w_30) == AT_LIST) && !(ATisEmpty(w_30))))
        {
          m_66 = ATgetFirst((ATermList) w_30);
          n_66 = (ATerm) ATgetNext((ATermList) w_30);
        }
      else
        _fail(t);
      {
        ATerm x_30 = ATgetArgument(t, 1);
        if(((ATgetType(x_30) == AT_LIST) && !(ATisEmpty(x_30))))
          {
            o_66 = ATgetFirst((ATermList) x_30);
            p_66 = (ATerm) ATgetNext((ATermList) x_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_66, o_66), (ATerm) ATmakeAppl(sym__2, n_66, p_66));
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL;
  if(match_cons(t, sym__2))
    {
      q_66 = ATgetArgument(t, 0);
      r_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_66), q_66);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL;
  if(match_cons(t, sym__2))
    {
      s_66 = ATgetArgument(t, 0);
      t_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(s_66, t_66, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,i_68 = NULL;
  q_67 = t;
  if(match_cons(t, sym__3))
    {
      r_67 = ATgetArgument(t, 0);
      s_67 = ATgetArgument(t, 1);
      t_67 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_67;
  if(match_string(t, "T"))
    {
      t = t_67;
      if(match_cons(t, sym__2))
        {
          u_67 = ATgetArgument(t, 0);
          i_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_67;
      if(match_int(t, 0))
        {
          ATerm y_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_68(r_67, u_67, i_68, q_67, t);
              LocalPopChoice(a_31);
            }
          else
            {
              t = y_30;
              {
                ATerm k_68 = NULL;
                t = q_67;
                t = new_0_0(t);
                k_68 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, r_67, term_s_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_68), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_68)), (ATerm) ATmakeAppl(sym_Op_2, r_67, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_68)), (ATerm) ATmakeAppl(sym_Op_2, r_67, (ATerm) ATempty))), term_c_24))));
              }
            }
        }
      else
        {
          t = l_68(r_67, u_67, i_68, q_67, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = t_67;
      if(match_cons(t, sym__2))
        {
          u_67 = ATgetArgument(t, 0);
          i_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_68(r_67, u_67, i_68, q_67, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_117 (ATerm), ATerm t)
{
  ATerm c_16 = NULL;
  static ATerm c_7 (ATerm t)
  {
    t = p_117(t);
    if(((c_16 != NULL) && (c_16 != t)))
      _fail(t);
    else
      c_16 = t;
    return(t);
  }
  t = fetch_1_0(c_7, t);
  t = not_null(c_16);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  t = term_d_17;
  e_16 = t;
  t = (ATerm) ATinsert(ATempty, term_c_31);
  f_16 = t;
  t = SSL_printnl(e_16, f_16);
  t = term_g_17;
  d_16 = t;
  t = SSL_exit(d_16);
  t = (ATerm) ATinsert(ATempty, term_c_31);
  return(t);
}
ATerm debug_1_0 (ATerm d_112 (ATerm), ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,k_16 = NULL,m_16 = NULL;
  g_16 = t;
  t = d_112(t);
  h_16 = t;
  t = term_d_17;
  k_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_16), h_16);
  m_16 = t;
  t = SSL_printnl(k_16, m_16);
  t = g_16;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_d_31;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  ATerm f_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm i_31 = ATgetArgument(t, 0);
          q_13 = ATgetArgument(t, 1);
          r_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(h_31);
      t = r_13;
      t = foldr_3_0(k_7, p_7, q_7, t);
      t = q_13;
      t = foldr_3_0(r_7, t_7, u_7, t);
    }
  else
    {
      t = f_31;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm j_31 = ATgetArgument(t, 0);
          q_13 = ATgetArgument(t, 1);
          r_13 = ATgetArgument(t, 2);
          {
            ATerm l_31 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_13;
      t = foldr_3_0(v_7, w_7, z_7, t);
      t = q_13;
      t = foldr_3_0(a_8, b_8, e_8, t);
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL;
  if(match_cons(t, sym__2))
    {
      x_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(x_13, y_13, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  if(match_cons(t, sym__2))
    {
      a_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(a_14, b_14, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(f_14, g_14, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm i_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(i_14, k_14, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm m_31 = ATgetArgument(t, 0);
      ATerm n_31 = ATgetArgument(t, 1);
      ATerm o_31 = ATgetArgument(t, 2);
      ATerm q_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_16 = NULL;
      static ATerm e_7 (ATerm t)
      {
        ATerm y_16 = NULL,z_16 = NULL;
        y_16 = t;
        {
          ATerm t_31 = t;
          int u_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  z_16 = ATgetArgument(t, 0);
                  {
                    ATerm v_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm w_31 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(u_31);
              t = z_16;
              if(((x_16 != NULL) && (x_16 != t)))
                _fail(t);
              else
                x_16 = t;
              t = y_16;
            }
          else
            {
              t = t_31;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  z_16 = ATgetArgument(t, 0);
                  {
                    ATerm x_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm y_31 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm z_31 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = z_16;
              if(((x_16 != NULL) && (x_16 != t)))
                _fail(t);
              else
                x_16 = t;
              t = y_16;
            }
        }
        return(t);
      }
      t = fetch_1_0(e_7, t);
      {
        static ATerm f_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((x_16 != NULL) && (x_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_16 = ATgetArgument(t, 0);
              {
                ATerm b_32 = ATgetArgument(t, 1);
              }
              {
                ATerm c_32 = ATgetArgument(t, 2);
              }
              {
                ATerm d_32 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_7, t);
      }
      t = not_null(x_16);
      t = debug_1_0(h_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm l_19 = NULL;
        l_19 = t;
        t = map_1_0(i_7, t);
        t = l_19;
        {
          ATerm e_32 = t;
          int f_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(n_8, t);
              LocalPopChoice(f_32);
            }
          else
            {
              t = e_32;
              {
                ATerm m_14 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_14 = ATgetFirst((ATermList) t);
                    {
                      ATerm i_32 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = m_14;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_o_26;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,t_14 = NULL;
  o_19 = t;
  t = SSL_explode_term(o_19);
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_32 = ATgetArgument(t, 1);
        if(((ATgetType(n_32) == AT_LIST) && !(ATisEmpty(n_32))))
          {
            p_19 = ATgetFirst((ATermList) n_32);
            {
              ATerm o_32 = (ATerm) ATgetNext((ATermList) n_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(o_19);
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_32 = ATgetArgument(t, 1);
        if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
          {
            ATerm s_32 = ATgetFirst((ATermList) r_32);
            ATerm u_32 = (ATerm) ATgetNext((ATermList) r_32);
            if(((ATgetType(u_32) == AT_LIST) && !(ATisEmpty(u_32))))
              {
                t_14 = ATgetFirst((ATermList) u_32);
                {
                  ATerm v_32 = (ATerm) ATgetNext((ATermList) u_32);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, p_19, t_14);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(o_8, q_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  b_20 = t;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_20 = ATgetFirst((ATermList) t);
      f_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_20;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_19;
            if((c_20 != t))
              {
                _fail(t);
              }
            t = w_19;
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            t = (ATerm) ATmakeAppl(sym__2, c_20, f_20);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, c_20, f_20);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  static ATerm h_21 (ATerm t)
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_106(t);
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = SRTS_all(h_21, t);
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_33 = ATgetArgument(t, 0);
      if(((ATgetType(a_33) != AT_LIST) || !(ATisEmpty(a_33))))
        _fail(t);
      {
        ATerm b_33 = ATgetArgument(t, 1);
        if(((ATgetType(b_33) != AT_LIST) || !(ATisEmpty(b_33))))
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
  ATerm x_21 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
        {
          x_21 = ATgetFirst((ATermList) c_33);
          h_22 = (ATerm) ATgetNext((ATermList) c_33);
        }
      else
        _fail(t);
      {
        ATerm d_33 = ATgetArgument(t, 1);
        if(((ATgetType(d_33) == AT_LIST) && !(ATisEmpty(d_33))))
          {
            i_22 = ATgetFirst((ATermList) d_33);
            j_22 = (ATerm) ATgetNext((ATermList) d_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_21, i_22), (ATerm) ATmakeAppl(sym__2, h_22, j_22));
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_22), l_22);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm k_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  k_21 = t;
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_33 = ATgetArgument(t, 0);
            ATerm i_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(f_33);
        t = k_21;
      }
    else
      {
        t = e_33;
        {
          ATerm w_21 = NULL;
          if(match_cons(t, sym__3))
            {
              n_21 = ATgetArgument(t, 0);
              o_21 = ATgetArgument(t, 1);
              p_21 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
          t = genzip_4_0(r_8, s_8, t_8, _id, t);
          w_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_21, p_21);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  static ATerm v_8 (ATerm t)
  {
    ATerm w_14 = NULL;
    t = e_104(t);
    w_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_14, not_null(r_22));
    t = lookup_0_0(t);
    t = f_104(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((r_22 != NULL) && (r_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_22;
  t = alltd_1_0(v_8, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,r_5 = NULL;
  a_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_24);
  w_23 = t;
  t = x_23;
  t = new_0_0(t);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_23, y_23);
  r_5 = t;
  t = SSLsetAnnotations(r_5, w_23);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,k_24 = NULL,t_5 = NULL;
  k_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_24);
  d_24 = t;
  t = e_24;
  t = new_0_0(t);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_24, f_24);
  t_5 = t;
  t = SSLsetAnnotations(t_5, d_24);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm l_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_24 = ATgetArgument(t, 0);
      {
        ATerm j_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_24), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm m_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_24 = ATgetArgument(t, 0);
      {
        ATerm k_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, m_24);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm y_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_24 = ATgetArgument(t, 0);
      {
        ATerm l_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_24;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm h_25 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_25 = ATgetArgument(t, 0);
      {
        ATerm n_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_25;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm i_25 = NULL,l_25 = NULL,m_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      l_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
      i_25 = ATgetArgument(t, 2);
      t = l_25;
      if(match_cons(t, sym_SVar_1))
        {
          m_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_25;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          l_25 = ATgetArgument(t, 0);
          o_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_25;
      if(match_cons(t, sym_SVar_1))
        {
          m_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_25;
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm t_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_25;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,e_23 = NULL,f_23 = NULL,h_23 = NULL,k_23 = NULL,l_23 = NULL,n_23 = NULL,u_23 = NULL;
  k_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_33 = ATgetFirst((ATermList) t);
      if(match_cons(o_33, sym_SDefT_4))
        {
          a_23 = ATgetArgument(o_33, 0);
          b_23 = ATgetArgument(o_33, 1);
          e_23 = ATgetArgument(o_33, 2);
          {
            ATerm r_33 = ATgetArgument(o_33, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm q_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_23;
  t = map_1_0(x_8, t);
  f_23 = t;
  t = e_23;
  t = map_1_0(z_8, t);
  h_23 = t;
  t = f_23;
  t = map_1_0(a_9, t);
  n_23 = t;
  t = h_23;
  t = map_1_0(b_9, t);
  l_23 = t;
  t = k_23;
  {
    static ATerm c_9 (ATerm t)
    {
      ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm y_33 = ATgetArgument(t, 0);
          r_24 = ATgetArgument(t, 1);
          s_24 = ATgetArgument(t, 2);
          t_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = s_24;
      t = map_1_0(d_9, t);
      v_24 = t;
      t = r_24;
      t = map_1_0(e_9, t);
      x_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, x_24, n_23, t_24);
      t = substitute_2_0(h_9, _id, t);
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, v_24, l_23, w_24);
      t = substitute_2_0(i_9, _id, t);
      return(t);
    }
    t = map_1_0(c_9, t);
  }
  t = choices_0_0(t);
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_23, f_23, h_23, u_23);
  return(t);
}
static ATerm j_70 (ATerm w_68, ATerm x_68, ATerm a_69, ATerm b_69, ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,i_69 = NULL,j_69 = NULL,e_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_68, x_68);
  t = Definitions_0_0(t);
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_69, a_69);
  j_69 = t;
  if(match_cons(t, sym__2))
    {
      ATerm z_33 = ATgetArgument(t, 0);
      ATerm a_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_69);
  g_69 = t;
  t = f_69;
  {
    ATerm i_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_69 = NULL,m_69 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_69 = ATgetFirst((ATermList) t);
            m_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_69;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_69;
        LocalPopChoice(l_34);
      }
    else
      {
        t = i_34;
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(n_34);
            }
          else
            {
              t = m_34;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_69, a_69);
  e_6 = t;
  t = SSLsetAnnotations(e_6, g_69);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL;
  v_69 = t;
  if(match_cons(t, sym__2))
    {
      w_69 = ATgetArgument(t, 0);
      z_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_69;
  if(match_cons(t, sym__2))
    {
      x_69 = ATgetArgument(t, 0);
      y_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_69;
  if(match_cons(t, sym_Mod_2))
    {
      p_69 = ATgetArgument(t, 0);
      q_69 = ATgetArgument(t, 1);
      {
        ATerm o_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_70 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, p_69, q_69, y_69);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            i_70 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_70, z_69);
            LocalPopChoice(q_34);
          }
        else
          {
            t = o_34;
            t = j_70(x_69, y_69, z_69, v_69, t);
          }
      }
    }
  else
    {
      t = j_70(x_69, y_69, z_69, v_69, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_117 (ATerm), ATerm t)
{
  static ATerm a_72 (ATerm t)
  {
    ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
    z_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_71 = ATgetFirst((ATermList) t);
        y_71 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_30 = NULL,z_30 = NULL,t_6 = NULL;
          t = SSLgetAnnotations(z_71);
          r_30 = t;
          t = y_71;
          t = a_72(t);
          z_30 = t;
          t = (ATerm) ATinsert(CheckATermList(z_30), x_71);
          t_6 = t;
          t = SSLsetAnnotations(t_6, r_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_71;
        t = u_117(t);
      }
    return(t);
  }
  t = a_72(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_70 = NULL,p_70 = NULL,s_70 = NULL;
  l_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_70;
    }
  else
    {
      static ATerm j_9 (ATerm t)
      {
        t = not_null(s_70);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_70 = ATgetFirst((ATermList) t);
          if(((s_70 != NULL) && (s_70 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_70;
      t = at_end_1_0(j_9, t);
    }
  return(t);
}
static ATerm c_74 (ATerm p_72, ATerm t)
{
  ATerm q_72 = NULL;
  t = SSL_explode_term(p_72);
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_72;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL;
  w_72 = t;
  if(match_cons(t, sym__2))
    {
      u_72 = ATgetArgument(t, 0);
      v_72 = ATgetArgument(t, 1);
      {
        ATerm y_34 = t;
        int a_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_9 (ATerm t)
            {
              t = v_72;
              return(t);
            }
            t = u_72;
            t = at_end_1_0(k_9, t);
            LocalPopChoice(a_35);
          }
        else
          {
            t = y_34;
            t = c_74(w_72, t);
          }
      }
    }
  else
    {
      t = c_74(w_72, t);
    }
  return(t);
}
static ATerm y_9 (ATerm h_119 (ATerm), ATerm t_47, ATerm s_47, ATerm t)
{
  static ATerm x_74 (ATerm t)
  {
    ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
    n_74 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_74;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_74 = ATgetFirst((ATermList) t);
            p_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_74;
              {
                static ATerm o_9 (ATerm t)
                {
                  t = s_47;
                  return(t);
                }
                t = j_10(h_119, o_9, o_74, p_74, t);
              }
              t = x_74(t);
              LocalPopChoice(e_35);
            }
          else
            {
              t = c_35;
              {
                ATerm p_31 = NULL,a_32 = NULL,w_6 = NULL;
                t = SSLgetAnnotations(n_74);
                p_31 = t;
                t = p_74;
                t = x_74(t);
                a_32 = t;
                t = (ATerm) ATinsert(CheckATermList(a_32), o_74);
                w_6 = t;
                t = SSLsetAnnotations(w_6, p_31);
              }
            }
        }
      }
    return(t);
  }
  t = t_47;
  t = x_74(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  static ATerm o_77 (ATerm t)
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_109(t);
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        {
          ATerm i_75 = NULL,j_75 = NULL,m_75 = NULL,s_75 = NULL,v_75 = NULL,l_77 = NULL,z_6 = NULL;
          t = i_109(t);
          l_77 = t;
          if(match_cons(t, sym__2))
            {
              j_75 = ATgetArgument(t, 0);
              m_75 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_77);
          i_75 = t;
          t = j_75;
          t = k_109(t);
          s_75 = t;
          t = m_75;
          t = o_77(t);
          v_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_75, v_75);
          z_6 = t;
          t = SSLsetAnnotations(z_6, i_75);
          t = j_109(t);
        }
      }
    return(t);
  }
  t = o_77(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_35 = ATgetArgument(t, 0);
      if(((ATgetType(i_35) != AT_LIST) || !(ATisEmpty(i_35))))
        _fail(t);
      {
        ATerm k_35 = ATgetArgument(t, 1);
        if(((ATgetType(k_35) != AT_LIST) || !(ATisEmpty(k_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if(((ATgetType(l_35) == AT_LIST) && !(ATisEmpty(l_35))))
        {
          i_78 = ATgetFirst((ATermList) l_35);
          j_78 = (ATerm) ATgetNext((ATermList) l_35);
        }
      else
        _fail(t);
      {
        ATerm o_35 = ATgetArgument(t, 1);
        if(((ATgetType(o_35) == AT_LIST) && !(ATisEmpty(o_35))))
          {
            k_78 = ATgetFirst((ATermList) o_35);
            l_78 = (ATerm) ATgetNext((ATermList) o_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_78, k_78), (ATerm) ATmakeAppl(sym__2, j_78, l_78));
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL;
  if(match_cons(t, sym__2))
    {
      f_79 = ATgetArgument(t, 0);
      g_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_79), f_79);
  return(t);
}
static ATerm d_10 (ATerm n_714, ATerm s_714, ATerm u_69, ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,x_77 = NULL;
  t = SSL_explode_term(s_714);
  if(match_cons(t, sym__2))
    {
      s_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_714);
  if(match_cons(t, sym__2))
    {
      if((s_77 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_77, u_77);
  t = genzip_4_0(u_9, v_9, w_9, _id, t);
  x_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_77, u_69);
  t = conc_0_0(t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm k_81 = NULL;
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_81);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,b_7 = NULL;
  o_81 = t;
  if(match_cons(t, sym__2))
    {
      m_81 = ATgetArgument(t, 0);
      n_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_81);
  l_81 = t;
  t = n_81;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_81, n_81);
  b_7 = t;
  t = SSLsetAnnotations(b_7, l_81);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL;
  u_82 = t;
  if(match_cons(t, sym__2))
    {
      v_82 = ATgetArgument(t, 0);
      w_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_82 = ATgetFirst((ATermList) t);
      y_82 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_83(v_82, w_82, u_82, t);
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_82), x_82), y_82);
          }
      }
    }
  else
    {
      t = i_83(v_82, w_82, u_82, t);
    }
  return(t);
}
static ATerm i_83 (ATerm s_81, ATerm v_81, ATerm x_81, ATerm t)
{
  ATerm b_82 = NULL,g_82 = NULL,d_7 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  t = SSLgetAnnotations(x_81);
  b_82 = t;
  t = v_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_82 = ATgetFirst((ATermList) t);
      o_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_82;
  if(match_cons(t, sym__2))
    {
      m_82 = ATgetArgument(t, 0);
      n_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_82;
        if((m_82 != t))
          {
            _fail(t);
          }
        t = o_82;
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = v_81;
        t = d_10(m_82, n_82, o_82, t);
      }
  }
  g_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_81, g_82);
  d_7 = t;
  t = SSLsetAnnotations(d_7, b_82);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm h_83 = NULL;
  if(match_cons(t, sym__2))
    {
      h_83 = ATgetArgument(t, 0);
      if((h_83 != ATgetArgument(t, 1)))
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
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(x_9, z_9, a_10, t);
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      {
        ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
        c_83 = t;
        if(match_cons(t, sym__2))
          {
            d_83 = ATgetArgument(t, 0);
            e_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_83;
        t = y_9(b_10, d_83, e_83, t);
      }
    }
  return(t);
}
static ATerm f_10 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm l_71, ATerm i_71, ATerm q_71, ATerm m_71, ATerm j_71, ATerm k_71, ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_71, m_71);
  t = h_137(t);
  if(match_cons(t, sym__2))
    {
      k_83 = ATgetArgument(t, 0);
      j_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_83;
  t = i_137(t);
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_83, q_71);
  t = diff_0_0(t);
  m_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_83, i_71);
  t = conc_0_0(t);
  n_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_83, q_71);
  t = conc_0_0(t);
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_71, k_83, j_71);
  t = j_137(t);
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym__5, n_83, o_83, j_83, p_83, k_71);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
        {
          r_83 = ATgetFirst((ATermList) v_35);
          s_83 = (ATerm) ATgetNext((ATermList) v_35);
        }
      else
        _fail(t);
      t_83 = ATgetArgument(t, 1);
      u_83 = ATgetArgument(t, 2);
      v_83 = ATgetArgument(t, 3);
      w_83 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = f_10(h_137, i_137, j_137, r_83, s_83, t_83, u_83, v_83, w_83, t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm t)
{
  static ATerm x_83 (ATerm t)
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_111(t);
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        t = i_111(t);
        t = x_83(t);
      }
    return(t);
  }
  t = x_83(t);
  return(t);
}
ATerm for_3_0 (ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm t)
{
  t = k_111(t);
  t = while_not_2_0(l_111, m_111, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL;
  if(match_cons(t, sym__3))
    {
      h_84 = ATgetArgument(t, 0);
      i_84 = ATgetArgument(t, 1);
      j_84 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, h_84, h_84, i_84, j_84, (ATerm) ATempty);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm y_35 = ATgetArgument(t, 0);
      if(((ATgetType(y_35) != AT_LIST) || !(ATisEmpty(y_35))))
        _fail(t);
      {
        ATerm b_36 = ATgetArgument(t, 1);
      }
      {
        ATerm c_36 = ATgetArgument(t, 2);
      }
      m_84 = ATgetArgument(t, 3);
      n_84 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_84, n_84);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm d_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, l_10, n_10, t);
      LocalPopChoice(g_36);
    }
  else
    {
      t = d_36;
      {
        ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL;
        if(match_cons(t, sym__5))
          {
            t_84 = ATgetArgument(t, 0);
            w_84 = ATgetArgument(t, 1);
            x_84 = ATgetArgument(t, 2);
            y_84 = ATgetArgument(t, 3);
            z_84 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = t_84;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_84 = ATgetFirst((ATermList) t);
            v_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, v_84, w_84, x_84, y_84, (ATerm) ATinsert(CheckATermList(z_84), u_84));
      }
    }
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(c_11, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      q_84 = ATgetArgument(t, 1);
      r_84 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_84), q_84);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(k_36);
    }
  else
    {
      t = j_36;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm x_33 = NULL,d_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  if(match_cons(t, sym__2))
    {
      g_34 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_34;
  if(match_cons(t, sym_Mod_2))
    {
      x_33 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
      {
        ATerm q_36 = t;
        int u_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_34;
            t = y_8(x_33, d_34, h_34, t);
            LocalPopChoice(u_36);
          }
        else
          {
            t = q_36;
            t = p_34(g_34, h_34, t);
          }
      }
    }
  else
    {
      t = p_34(g_34, h_34, t);
    }
  return(t);
}
static ATerm p_34 (ATerm h_33, ATerm m_33, ATerm t)
{
  ATerm p_33 = NULL,w_33 = NULL;
  t = term_d_17;
  p_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), m_33), term_d_18), h_33), term_a_18);
  w_33 = t;
  t = SSL_printnl(p_33, w_33);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), m_33), term_d_18), h_33), term_a_18);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL;
  t = for_3_0(c_10, e_10, g_10, t);
  c_86 = t;
  if(match_cons(t, sym__2))
    {
      d_86 = ATgetArgument(t, 0);
      e_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_86;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_86;
    }
  else
    {
      ATerm t_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_86 = ATgetFirst((ATermList) t);
          g_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(g_86), f_86);
      t = map_1_0(d_11, t);
      t = term_g_17;
      t_32 = t;
      t = SSL_exit(t_32);
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL;
  if(match_cons(t, sym__2))
    {
      y_86 = ATgetArgument(t, 0);
      z_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(y_86, z_86, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL;
  if(match_cons(t, sym__2))
    {
      a_87 = ATgetArgument(t, 0);
      b_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(a_87, b_87, t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm c_87 = NULL;
  if(match_cons(t, sym__2))
    {
      c_87 = ATgetArgument(t, 0);
      if((c_87 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_x_36;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL;
  m_86 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      p_86 = ATgetArgument(t, 0);
      k_86 = ATgetArgument(t, 1);
      l_86 = ATgetArgument(t, 2);
      {
        ATerm z_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  r_86 = t;
  t = k_86;
  t = foldr_3_0(e_11, f_11, g_11, t);
  n_86 = t;
  t = l_86;
  t = foldr_3_0(h_11, i_11, k_11, t);
  o_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_86, (ATerm) ATmakeAppl(sym__2, n_86, o_86));
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
  t_86 = t;
  t = p_86;
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        t = (ATerm) ATempty;
      }
  }
  s_86 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_86, o_86));
  x_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_86, o_86)), s_86);
  t = k_10(m_11, x_86, s_86, t);
  q_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_86, (ATerm) ATmakeAppl(sym__2, n_86, o_86));
  v_86 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_37, (ATerm) ATinsert(CheckATermList(t_86), m_86));
  w_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_86, (ATerm) ATmakeAppl(sym__2, n_86, o_86)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_37, (ATerm) ATinsert(CheckATermList(t_86), m_86)));
  t = i_10(p_11, v_86, w_86, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_37, q_86);
  u_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_86, (ATerm) ATmakeAppl(sym_Defined_2, term_k_37, q_86));
  t = i_10(q_11, p_86, u_86, t);
  t = r_86;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  if(match_cons(t, sym__2))
    {
      r_87 = ATgetArgument(t, 0);
      s_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(r_87, s_87, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL;
  if(match_cons(t, sym__2))
    {
      t_87 = ATgetArgument(t, 0);
      u_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(t_87, u_87, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm v_87 = NULL;
  if(match_cons(t, sym__2))
    {
      v_87 = ATgetArgument(t, 0);
      if((v_87 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_x_36;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
  f_87 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      i_87 = ATgetArgument(t, 0);
      d_87 = ATgetArgument(t, 1);
      e_87 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  k_87 = t;
  t = d_87;
  t = foldr_3_0(s_11, y_11, c_12, t);
  g_87 = t;
  t = e_87;
  t = foldr_3_0(d_12, h_12, i_12, t);
  h_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_87, (ATerm) ATmakeAppl(sym__2, g_87, h_87));
  {
    ATerm l_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(n_37);
      }
    else
      {
        t = l_37;
        t = (ATerm) ATempty;
      }
  }
  m_87 = t;
  t = i_87;
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        t = (ATerm) ATempty;
      }
  }
  l_87 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_87, h_87));
  q_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_87, h_87)), l_87);
  t = k_10(j_12, q_87, l_87, t);
  j_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_87, (ATerm) ATmakeAppl(sym__2, g_87, h_87));
  o_87 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_37, (ATerm) ATinsert(CheckATermList(m_87), f_87));
  p_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_87, (ATerm) ATmakeAppl(sym__2, g_87, h_87)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_37, (ATerm) ATinsert(CheckATermList(m_87), f_87)));
  t = i_10(m_12, o_87, p_87, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_37, j_87);
  n_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_87, (ATerm) ATmakeAppl(sym_Defined_2, term_r_37, j_87));
  t = i_10(n_12, i_87, n_87, t);
  t = k_87;
  return(t);
}
static ATerm i_10 (ATerm o_116 (ATerm), ATerm k_42, ATerm i_42, ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL;
  z_87 = t;
  t = o_116(t);
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_87, k_42, i_42);
  t = z_10(w_87, k_42, i_42, t);
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_88 = NULL;
        t = term_u_37;
        c_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_87, term_u_37);
        t = y_10(w_87, c_88, t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_87 = ATgetFirst((ATermList) t);
      y_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_u_37;
  a_88 = t;
  t = (ATerm) ATinsert(CheckATermList(y_87), (ATerm) ATinsert(CheckATermList(x_87), k_42));
  b_88 = t;
  t = SSL_table_put(w_87, a_88, b_88);
  t = z_87;
  return(t);
}
static ATerm j_10 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm z_47, ATerm y_47, ATerm t)
{
  t = q_119(t);
  {
    static ATerm r_12 (ATerm t)
    {
      ATerm d_88 = NULL;
      d_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_47, d_88);
      t = p_119(t);
      return(t);
    }
    t = fetch_1_0(r_12, t);
  }
  t = y_47;
  return(t);
}
static ATerm k_10 (ATerm m_119 (ATerm), ATerm v_47, ATerm u_47, ATerm t)
{
  static ATerm t_88 (ATerm t)
  {
    ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
    o_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_47;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_88 = ATgetFirst((ATermList) t);
            q_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_88;
              {
                static ATerm s_12 (ATerm t)
                {
                  t = u_47;
                  return(t);
                }
                t = j_10(m_119, s_12, p_88, q_88, t);
              }
              t = t_88(t);
              LocalPopChoice(w_37);
            }
          else
            {
              t = v_37;
              {
                ATerm j_35 = NULL,n_35 = NULL,g_7 = NULL;
                t = SSLgetAnnotations(o_88);
                j_35 = t;
                t = q_88;
                t = t_88(t);
                n_35 = t;
                t = (ATerm) ATinsert(CheckATermList(n_35), p_88);
                g_7 = t;
                t = SSLsetAnnotations(g_7, j_35);
              }
            }
        }
      }
    return(t);
  }
  t = v_47;
  t = t_88(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm h_89 = NULL;
  h_89 = t;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_36 = NULL,m_36 = NULL;
        t = term_y_36;
        m_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_36, h_89);
        t = m_10(m_36, h_89, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_38) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            i_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_36;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        {
          ATerm c_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_37 = NULL,f_37 = NULL;
              t = term_y_36;
              f_37 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_36, h_89);
              t = m_10(f_37, h_89, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_38 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_38) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  c_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_37;
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              {
                ATerm j_37 = NULL,m_37 = NULL;
                t = term_y_36;
                m_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_36, h_89);
                t = m_10(m_37, h_89, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm f_38 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_38) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    j_37 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_37;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm m_10 (ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm l_89 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_43, a_44);
  t = y_10(z_43, a_44, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_89 = ATgetFirst((ATermList) t);
      {
        ATerm g_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_89;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm e_90 = NULL,g_90 = NULL;
  e_90 = t;
  if(match_cons(t, sym__2))
    {
      ATerm h_38 = ATgetArgument(t, 0);
      g_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_90;
  if(match_cons(t, sym__2))
    {
      ATerm i_38 = ATgetArgument(t, 0);
      ATerm j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_38 = NULL,v_38 = NULL;
        t = term_x_36;
        v_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_36, e_90);
        t = m_10(v_38, e_90, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_38) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            n_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_38;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
        {
          ATerm o_38 = t;
          int p_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_39 = NULL,o_39 = NULL;
              t = term_x_36;
              o_39 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_36, e_90);
              t = m_10(o_39, e_90, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_38 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_38) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  i_39 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_39;
              LocalPopChoice(p_38);
            }
          else
            {
              t = o_38;
              {
                ATerm y_39 = NULL,d_40 = NULL;
                t = term_x_36;
                d_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_36, e_90);
                t = m_10(d_40, e_90, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm r_38 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("q_0", 0, ATtrue)))
                      _fail(t);
                    y_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_39;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
  n_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_90;
      t = j_122(t);
    }
  else
    {
      ATerm s_90 = NULL,t_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_90 = ATgetFirst((ATermList) t);
          p_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_90;
      t = l_122(t);
      s_90 = t;
      t = p_90;
      t = foldr_3_0(j_122, k_122, l_122, t);
      t_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_90, t_90);
      t = k_122(t);
    }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL;
  if(match_cons(t, sym__2))
    {
      i_91 = ATgetArgument(t, 0);
      j_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(i_91, j_91, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL;
  if(match_cons(t, sym__2))
    {
      k_91 = ATgetArgument(t, 0);
      l_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(k_91, l_91, t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm m_91 = NULL;
  if(match_cons(t, sym__2))
    {
      m_91 = ATgetArgument(t, 0);
      if((m_91 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_x_36;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL;
  w_90 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_90 = ATgetArgument(t, 0);
      u_90 = ATgetArgument(t, 1);
      v_90 = ATgetArgument(t, 2);
      {
        ATerm s_38 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  b_91 = t;
  t = u_90;
  t = foldr_3_0(t_12, u_12, f_13, t);
  x_90 = t;
  t = v_90;
  t = foldr_3_0(g_13, j_13, p_13, t);
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_90, (ATerm) ATmakeAppl(sym__2, x_90, y_90));
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        t = (ATerm) ATempty;
      }
  }
  d_91 = t;
  t = z_90;
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        t = (ATerm) ATempty;
      }
  }
  c_91 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_90, y_90));
  h_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_90, y_90)), c_91);
  t = k_10(s_13, h_91, c_91, t);
  a_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_90, (ATerm) ATmakeAppl(sym__2, x_90, y_90));
  f_91 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_38, (ATerm) ATinsert(CheckATermList(d_91), w_90));
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_90, (ATerm) ATmakeAppl(sym__2, x_90, y_90)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_38, (ATerm) ATinsert(CheckATermList(d_91), w_90)));
  t = i_10(t_13, f_91, g_91, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_38, a_91);
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_90, (ATerm) ATmakeAppl(sym_Defined_2, term_z_38, a_91));
  t = i_10(u_13, z_90, e_91, t);
  t = b_91;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm a_39 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(b_39);
    }
  else
    {
      t = a_39;
      {
        ATerm c_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(d_39);
          }
        else
          {
            t = c_39;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm n_91 = NULL;
  t = map_1_0(v_13, t);
  n_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_g_39), n_91, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,j_7 = NULL;
  t_91 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_91 = ATgetFirst((ATermList) t);
      q_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_91);
  o_91 = t;
  t = p_91;
  t = y_89(t);
  r_91 = t;
  t = q_91;
  t = z_89(t);
  s_91 = t;
  t = (ATerm) ATinsert(CheckATermList(s_91), r_91);
  j_7 = t;
  t = SSLsetAnnotations(j_7, o_91);
  return(t);
}
static ATerm o_10 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm u_91 = NULL;
  t = SSL_fputc(s_33, t_33);
  u_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_91);
  return(t);
}
static ATerm p_10 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm v_91 = NULL;
  t = SSL_write_term_to_stream_text(k_32, l_32);
  v_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_91);
  return(t);
}
static ATerm r_10 (ATerm f_112 (ATerm), ATerm r_248, ATerm q_32, ATerm t)
{
  ATerm w_91 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_248, term_h_39);
  t = v_10(t);
  w_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_91, q_32);
  t = f_112(t);
  t = fclose_0_0(t);
  t = q_32;
  return(t);
}
static ATerm q_10 (ATerm g_32, ATerm h_32, ATerm t)
{
  ATerm x_91 = NULL;
  t = SSL_write_term_to_stream_baf(g_32, h_32);
  x_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_91);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      if(match_cons(j_39, sym_Stream_1))
        {
          f_41 = ATgetArgument(j_39, 0);
        }
      else
        _fail(t);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(f_41, g_41, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm c_42 = NULL,e_42 = NULL,j_42 = NULL,l_42 = NULL,m_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_39 = ATgetArgument(t, 0);
      if(match_cons(k_39, sym_Stream_1))
        {
          l_42 = ATgetArgument(k_39, 0);
        }
      else
        _fail(t);
      m_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(l_42, m_42, t);
  c_42 = t;
  t = term_f_21;
  e_42 = t;
  t = c_42;
  if(match_cons(t, sym_Stream_1))
    {
      j_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, c_42);
  t = o_10(e_42, j_42, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,l_93 = NULL,m_93 = NULL,m_7 = NULL,l_7 = NULL;
  c_92 = t;
  if(match_cons(t, sym__2))
    {
      j_92 = ATgetArgument(t, 0);
      k_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_92);
  i_92 = t;
  t = j_92;
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_92 != NULL) && (b_92 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_92 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_13, t);
        LocalPopChoice(m_39);
      }
    else
      {
        t = l_39;
        t = term_n_39;
        b_92 = t;
      }
  }
  l_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_92, k_92);
  l_7 = t;
  t = SSLsetAnnotations(l_7, i_92);
  t = c_92;
  if(match_cons(t, sym__2))
    {
      e_92 = ATgetArgument(t, 0);
      f_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_92);
  d_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_92, (ATerm) ATmakeAppl(sym__2, not_null(b_92), f_92));
  m_7 = t;
  t = SSLsetAnnotations(m_7, d_92);
  h_92 = t;
  if(match_cons(t, sym__2))
    {
      l_93 = ATgetArgument(t, 0);
      m_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL,t_40 = NULL,v_40 = NULL,b_41 = NULL,e_41 = NULL,n_7 = NULL;
        t = SSLgetAnnotations(h_92);
        m_40 = t;
        t = l_93;
        t = fetch_1_0(z_13, t);
        t_40 = t;
        t = m_93;
        if(match_cons(t, sym__2))
          {
            b_41 = ATgetArgument(t, 0);
            e_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_10(c_14, b_41, e_41, t);
        v_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_40, v_40);
        n_7 = t;
        t = SSLsetAnnotations(n_7, m_40);
        LocalPopChoice(q_39);
      }
    else
      {
        t = p_39;
        {
          ATerm s_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,o_7 = NULL;
          t = SSLgetAnnotations(h_92);
          s_41 = t;
          t = m_93;
          if(match_cons(t, sym__2))
            {
              z_41 = ATgetArgument(t, 0);
              a_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_10(d_14, z_41, a_42, t);
          y_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_93, y_41);
          o_7 = t;
          t = SSLsetAnnotations(o_7, s_41);
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
ATerm apply_strategy_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL;
  t_93 = t;
  t = dtime_0_0(t);
  t = t_93;
  t = s_131(t);
  s_93 = t;
  t = dtime_0_0(t);
  p_93 = t;
  t = s_93;
  if(match_cons(t, sym__2))
    {
      q_93 = ATgetArgument(t, 0);
      r_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_93), (ATerm) ATmakeAppl(sym_Runtime_1, p_93)), r_93);
  return(t);
}
static ATerm h_94 (ATerm b_94, ATerm t)
{
  t = SSL_fclose(b_94);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL;
  f_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_94 = ATgetArgument(t, 0);
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_94);
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
            t = h_94(f_94, t);
          }
      }
    }
  else
    {
      t = h_94(f_94, t);
    }
  return(t);
}
static ATerm s_10 (ATerm m_32, ATerm t)
{
  t = SSL_read_term_from_stream(m_32);
  return(t);
}
static ATerm t_10 (ATerm y_56, ATerm z_56, ATerm t)
{
  t = SSL_strcat(y_56, z_56);
  return(t);
}
static ATerm u_10 (ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm i_94 = NULL;
  t = SSL_fopen(u_33, v_33);
  i_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_94);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_94 = NULL;
  t = SSL_stdin_stream();
  j_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_94);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_94 = NULL;
  t = SSL_stdout_stream();
  k_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_94);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_94 = NULL;
  t = SSL_stderr_stream();
  l_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_94);
  return(t);
}
static ATerm s_95 (ATerm r_94, ATerm t)
{
  ATerm s_94 = NULL;
  t = SSL_explode_term(r_94);
  if(match_cons(t, sym__2))
    {
      ATerm t_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_39 = ATgetArgument(t, 1);
        if(((ATgetType(u_39) == AT_LIST) && !(ATisEmpty(u_39))))
          {
            s_94 = ATgetFirst((ATermList) u_39);
            {
              ATerm v_39 = (ATerm) ATgetNext((ATermList) u_39);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_94;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_94;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_94;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_94;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_95 (ATerm v_94, ATerm w_94, ATerm x_94, ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,d_95 = NULL,x_7 = NULL;
  t = SSLgetAnnotations(x_94);
  a_95 = t;
  t = v_94;
  if(match_cons(t, sym_Path_1))
    {
      d_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_95, w_94);
  x_7 = t;
  t = SSLsetAnnotations(x_7, a_95);
  if(match_cons(t, sym__2))
    {
      y_94 = ATgetArgument(t, 0);
      z_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(y_94, z_94, t);
  return(t);
}
static ATerm u_95 (ATerm f_95, ATerm g_95, ATerm h_95, ATerm t)
{
  ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL,n_95 = NULL,y_7 = NULL;
  t = SSLgetAnnotations(h_95);
  k_95 = t;
  t = SSL_is_string(f_95);
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_95, g_95);
  y_7 = t;
  t = SSLsetAnnotations(y_7, k_95);
  if(match_cons(t, sym__2))
    {
      i_95 = ATgetArgument(t, 0);
      j_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(i_95, j_95, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL;
  p_95 = t;
  if(match_cons(t, sym__2))
    {
      q_95 = ATgetArgument(t, 0);
      r_95 = ATgetArgument(t, 1);
      {
        ATerm w_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_95(p_95, t);
            LocalPopChoice(x_39);
          }
        else
          {
            t = w_39;
            {
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_95(q_95, r_95, p_95, t);
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = z_39;
                  t = u_95(q_95, r_95, p_95, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_95(p_95, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL,d_96 = NULL;
  d_96 = t;
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_96, term_e_40);
        t = v_10(t);
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        {
          ATerm k_43 = NULL,l_43 = NULL;
          t = term_f_40;
          l_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_40, d_96);
          t = t_10(l_43, d_96, t);
          k_43 = t;
          t = SSL_perror(k_43);
          _fail(t);
        }
      }
  }
  x_95 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(y_95, t);
  w_95 = t;
  t = x_95;
  t = fclose_0_0(t);
  t = w_95;
  return(t);
}
ATerm fetch_1_0 (ATerm n_117 (ATerm), ATerm t)
{
  static ATerm c_97 (ATerm t)
  {
    ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL;
    z_96 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_97 = ATgetFirst((ATermList) t);
        b_97 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_40 = t;
      int h_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_43 = NULL,x_43 = NULL,c_8 = NULL;
          t = SSLgetAnnotations(z_96);
          t_43 = t;
          t = a_97;
          t = n_117(t);
          x_43 = t;
          t = (ATerm) ATinsert(CheckATermList(b_97), x_43);
          c_8 = t;
          t = SSLsetAnnotations(c_8, t_43);
          LocalPopChoice(h_40);
        }
      else
        {
          t = g_40;
          {
            ATerm r_44 = NULL,u_44 = NULL,k_8 = NULL;
            t = SSLgetAnnotations(z_96);
            r_44 = t;
            t = b_97;
            t = c_97(t);
            u_44 = t;
            t = (ATerm) ATinsert(CheckATermList(u_44), a_97);
            k_8 = t;
            t = SSLsetAnnotations(k_8, r_44);
          }
        }
    }
    return(t);
  }
  t = c_97(t);
  return(t);
}
static ATerm y_10 (ATerm f_45, ATerm g_45, ATerm t)
{
  t = SSL_table_get(f_45, g_45);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_113 (ATerm), ATerm t)
{
  ATerm g_97 = NULL;
  g_97 = t;
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL;
        t = term_k_40;
        j_97 = t;
        t = term_l_40;
        k_97 = t;
        t = term_n_40;
        t = y_10(j_97, k_97, t);
        i_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_97, term_o_40);
        t = geq_0_0(t);
        t = g_97;
        t = w_113(t);
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = g_97;
      }
  }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm n_97 = NULL;
  n_97 = t;
  if(match_string(t, "-k"))
    {
      t = n_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_97;
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL;
  o_97 = t;
  t = SSL_string_to_int(o_97);
  p_97 = t;
  t = term_p_40;
  q_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_40, p_97);
  t = b_11(q_97, p_97, t);
  t = o_97;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_q_40;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_14, h_14, j_14, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm s_97 = NULL;
  s_97 = t;
  if(match_string(t, "-S"))
    {
      t = s_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_97;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL;
  t = term_l_40;
  t_97 = t;
  t = term_k_19;
  u_97 = t;
  t = term_r_40;
  t = b_11(t_97, u_97, t);
  t = term_s_40;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_u_40;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL;
  v_97 = t;
  t = SSL_string_to_int(v_97);
  w_97 = t;
  t = term_l_40;
  x_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_40, w_97);
  t = b_11(x_97, w_97, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_97);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_y_40;
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
  ATerm y_97 = NULL,z_97 = NULL;
  t = term_z_40;
  y_97 = t;
  t = term_c_17;
  z_97 = t;
  t = term_a_41;
  t = b_11(y_97, z_97, t);
  t = term_h_41;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_i_41;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_14, n_14, o_14, t);
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      {
        ATerm p_41 = t;
        int q_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_14, r_14, s_14, t);
            LocalPopChoice(q_41);
          }
        else
          {
            t = p_41;
            t = Option_3_0(u_14, v_14, x_14, t);
          }
      }
    }
  return(t);
}
static ATerm b_11 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm a_98 = NULL;
  t = term_k_40;
  a_98 = t;
  t = SSL_table_put(a_98, z_37, a_38);
  t = (ATerm) ATmakeAppl(sym__3, term_k_40, z_37, a_38);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_98 = NULL,e_98 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_98 = NULL,g_98 = NULL,h_98 = NULL;
      t = term_c_17;
      t = e_0(t);
      f_98 = t;
      t = term_r_41;
      g_98 = t;
      t = term_t_41;
      h_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_41, term_t_41, f_98);
      t = z_10(g_98, h_98, f_98, t);
      _fail(t);
    }
  else
    {
      ATerm k_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_98 = ATgetFirst((ATermList) t);
          e_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_98;
      t = c_0(t);
      t = term_c_17;
      t = d_0(t);
      k_98 = t;
      t = (ATerm) ATinsert(CheckATermList(e_98), k_98);
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm m_98 = NULL;
  m_98 = t;
  if(match_string(t, "-o"))
    {
      t = m_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_98;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm n_98 = NULL,o_98 = NULL;
  n_98 = t;
  t = term_u_41;
  o_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_41, n_98);
  t = b_11(o_98, n_98, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_98);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_v_41;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_14, z_14, a_15, t);
  return(t);
}
static ATerm z_10 (ATerm o_43, ATerm p_43, ATerm n_43, ATerm t)
{
  ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL;
  q_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_43, p_43);
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_42 = ATgetArgument(t, 0);
            ATerm d_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_43, p_43);
        t = y_10(o_43, p_43, t);
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
        t = (ATerm) ATempty;
      }
  }
  r_98 = t;
  t = (ATerm) ATinsert(CheckATermList(r_98), n_43);
  s_98 = t;
  t = SSL_table_put(o_43, p_43, s_98);
  t = q_98;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_99 = NULL,e_99 = NULL,f_99 = NULL;
      t = term_c_17;
      t = n_0(t);
      d_99 = t;
      t = term_r_41;
      e_99 = t;
      t = term_t_41;
      f_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_41, term_t_41, d_99);
      t = z_10(e_99, f_99, d_99, t);
      _fail(t);
    }
  else
    {
      ATerm j_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_98 = ATgetFirst((ATermList) t);
          a_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_99 = ATgetFirst((ATermList) t);
          c_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_98;
      t = k_0(t);
      t = b_99;
      t = l_0(t);
      j_99 = t;
      t = (ATerm) ATinsert(CheckATermList(c_99), j_99);
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm l_99 = NULL;
  l_99 = t;
  if(match_string(t, "-i"))
    {
      t = l_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_99;
    }
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm m_99 = NULL,n_99 = NULL;
  m_99 = t;
  t = term_o_42;
  n_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_42, m_99);
  t = b_11(n_99, m_99, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_99);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_p_42;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_15, c_15, d_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_17;
  t = whoami_0_0(t);
  o_99 = t;
  t = term_d_17;
  q_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_42), o_99);
  r_99 = t;
  t = SSL_printnl(q_99, r_99);
  t = term_g_17;
  p_99 = t;
  t = SSL_exit(p_99);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL;
  t = term_k_40;
  s_99 = t;
  t = term_r_42;
  t_99 = t;
  t = term_s_42;
  t = y_10(s_99, t_99, t);
  return(t);
}
static ATerm w_10 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_40, x_40);
      LocalPopChoice(u_42);
    }
  else
    {
      t = t_42;
      t = SSL_addr(w_40, x_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm t)
{
  ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL;
  v_99 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_99;
      t = h_122(t);
    }
  else
    {
      ATerm a_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_99 = ATgetFirst((ATermList) t);
          x_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_99;
      t = foldr_2_0(h_122, i_122, t);
      a_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_99, a_100);
      t = i_122(t);
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
  t = term_k_19;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_10(l_45, m_45, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_100 = NULL,b_45 = NULL,h_45 = NULL;
  t = times_0_0(t);
  h_45 = t;
  t = SSL_explode_term(h_45);
  if(match_cons(t, sym__2))
    {
      ATerm v_42 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_45;
  t = foldr_2_0(e_15, f_15, t);
  d_100 = t;
  t = SSL_TicksToSeconds(d_100);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL;
  o_100 = t;
  if(match_cons(t, sym__2))
    {
      p_100 = ATgetArgument(t, 0);
      q_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_100;
        if((p_100 != t))
          {
            _fail(t);
          }
        t = o_100;
        LocalPopChoice(a_43);
      }
    else
      {
        t = w_42;
        t = (ATerm) ATmakeAppl(sym__2, p_100, q_100);
        {
          ATerm f_43 = t;
          int g_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_100, q_100);
              LocalPopChoice(g_43);
            }
          else
            {
              t = f_43;
              t = SSL_gtr(p_100, q_100);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_100, q_100);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_113 (ATerm), ATerm t)
{
  ATerm u_100 = NULL;
  u_100 = t;
  {
    ATerm h_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL;
        t = term_k_40;
        x_100 = t;
        t = term_l_40;
        y_100 = t;
        t = term_n_40;
        t = y_10(x_100, y_100, t);
        w_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_100, term_g_17);
        t = geq_0_0(t);
        t = u_100;
        t = v_113(t);
        LocalPopChoice(m_43);
      }
    else
      {
        t = h_43;
        t = u_100;
      }
  }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm a_101 = NULL,b_101 = NULL,d_101 = NULL,e_101 = NULL;
  t = run_time_0_0(t);
  a_101 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  b_101 = t;
  t = term_d_17;
  d_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_43), a_101), term_q_43), b_101);
  e_101 = t;
  t = SSL_printnl(d_101, e_101);
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_43), a_101), term_q_43), b_101));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_101 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_19;
  f_101 = t;
  t = SSL_exit(f_101);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL;
  q_101 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_101;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_101 = ATgetArgument(t, 0);
          {
            ATerm q_47 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(q_101);
            q_47 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_101);
            p_8 = t;
            t = SSLsetAnnotations(p_8, q_47);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_101;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  ATerm s_43 = t;
  int u_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_101 = NULL,j_101 = NULL;
      t = term_k_40;
      i_101 = t;
      t = term_w_43;
      j_101 = t;
      t = term_c_44;
      t = y_10(i_101, j_101, t);
      LocalPopChoice(u_43);
    }
  else
    {
      t = s_43;
      t = fetch_1_0(h_15, t);
    }
  t = q_132(t);
  return(t);
}
ATerm map_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  static ATerm g_102 (ATerm t)
  {
    ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
    d_102 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_102;
      }
    else
      {
        ATerm e_48 = NULL,h_48 = NULL,i_48 = NULL,j_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_102 = ATgetFirst((ATermList) t);
            f_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_102);
        e_48 = t;
        t = e_102;
        t = d_117(t);
        h_48 = t;
        t = f_102;
        t = g_102(t);
        i_48 = t;
        t = (ATerm) ATinsert(CheckATermList(i_48), h_48);
        j_11 = t;
        t = SSLsetAnnotations(j_11, e_48);
      }
    return(t);
  }
  t = g_102(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_102 = ATgetFirst((ATermList) t);
      k_102 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_102 = NULL,p_102 = NULL;
        static ATerm j_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_102)), not_null(p_102));
          return(t);
        }
        t = k_102;
        t = i_0(t);
        if(((o_102 != NULL) && (o_102 != t)))
          _fail(t);
        else
          o_102 = t;
        t = j_102;
        t = g_0(t);
        if(((p_102 != NULL) && (p_102 != t)))
          _fail(t);
        else
          p_102 = t;
        t = k_102;
        t = reverse_acc_2_0(g_0, j_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL,l_11 = NULL;
  x_102 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_102);
  v_102 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_102);
  l_11 = t;
  t = SSLsetAnnotations(l_11, v_102);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm z_102 = NULL;
  z_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_102), term_e_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_102 = NULL,s_102 = NULL;
  ATerm f_44 = t;
  int g_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_102 = NULL,u_102 = NULL;
      t = term_k_40;
      t_102 = t;
      t = term_r_42;
      u_102 = t;
      t = term_s_42;
      t = y_10(t_102, u_102, t);
      LocalPopChoice(g_44);
    }
  else
    {
      t = f_44;
      t = fetch_1_0(l_15, t);
    }
  t = term_h_44;
  t = echo_0_0(t);
  t = term_r_41;
  r_102 = t;
  t = term_t_41;
  s_102 = t;
  t = term_i_44;
  t = y_10(r_102, s_102, t);
  t = reverse_acc_2_0(_id, m_15, t);
  t = map_1_0(n_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL;
  b_103 = t;
  {
    ATerm j_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_103;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_44 = ATgetFirst((ATermList) t);
                ATerm n_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_103;
          }
        LocalPopChoice(l_44);
      }
    else
      {
        t = j_44;
        t = (ATerm) ATinsert(ATempty, b_103);
      }
  }
  c_103 = t;
  t = term_n_39;
  d_103 = t;
  t = SSL_printnl(d_103, c_103);
  t = b_103;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_103 = NULL,i_103 = NULL;
  t = term_k_40;
  h_103 = t;
  t = term_r_42;
  i_103 = t;
  t = term_s_42;
  t = y_10(h_103, i_103, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL;
  t = term_o_44;
  j_103 = t;
  t = term_c_17;
  k_103 = t;
  t = term_p_44;
  t = b_11(j_103, k_103, t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL;
  t = term_o_44;
  n_103 = t;
  t = term_c_17;
  o_103 = t;
  t = term_p_44;
  t = b_11(n_103, o_103, t);
  t = term_s_44;
  l_103 = t;
  t = term_c_17;
  m_103 = t;
  t = term_t_44;
  t = b_11(l_103, m_103, t);
  t = term_v_44;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_w_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_15, p_15, q_15, t);
      LocalPopChoice(y_44);
    }
  else
    {
      t = x_44;
      t = Option_3_0(s_15, t_15, u_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_134 (ATerm), ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL,y_103 = NULL,z_103 = NULL,r_11 = NULL;
  t_103 = t;
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_45;
        t = t_134(t);
        LocalPopChoice(a_45);
      }
    else
      {
        t = z_44;
      }
  }
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
  t = term_r_42;
  z_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_42, v_103);
  t = b_11(z_103, v_103, t);
  t = w_103;
  {
    static ATerm o_104 (ATerm t)
    {
      ATerm d_45 = t;
      int e_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_45 = t;
          int j_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_104 = NULL;
              h_104 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_104;
              LocalPopChoice(j_45);
            }
          else
            {
              t = i_45;
              t = t_134(t);
              t = Cons_2_0(_id, o_104, t);
            }
          LocalPopChoice(e_45);
        }
      else
        {
          t = d_45;
          {
            ATerm k_104 = NULL,l_104 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_104 = ATgetFirst((ATermList) t);
                l_104 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_104), (ATerm) ATmakeAppl(sym_Undefined_1, k_104));
          }
        }
      return(t);
    }
    t = o_104(t);
  }
  y_103 = t;
  t = (ATerm) ATinsert(CheckATermList(y_103), (ATerm) ATmakeAppl(sym_Program_1, v_103));
  r_11 = t;
  t = SSLsetAnnotations(r_11, u_103);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm d_105 = NULL;
  d_105 = t;
  if(match_string(t, "--help"))
    {
      t = d_105;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_105;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_105;
        }
    }
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm e_105 = NULL,f_105 = NULL;
  t = term_w_43;
  e_105 = t;
  t = term_c_17;
  f_105 = t;
  t = term_k_45;
  t = b_11(e_105, f_105, t);
  t = term_n_45;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_134 (ATerm), ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL;
  y_104 = t;
  t = term_r_41;
  a_105 = t;
  t = term_t_41;
  b_105 = t;
  t = (ATerm) ATempty;
  c_105 = t;
  t = SSL_table_put(a_105, b_105, c_105);
  t = y_104;
  {
    static ATerm v_15 (ATerm t)
    {
      ATerm p_45 = t;
      int q_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_134(t);
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
                t = Option_3_0(w_15, x_15, z_15, t);
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
    t = parse_options_p__1_0(v_15, t);
  }
  {
    ATerm t_45 = t;
    int u_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_105 = NULL;
        q_105 = t;
        {
          ATerm v_45 = t;
          int w_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_49 = NULL;
              t = q_105;
              {
                ATerm e_46 = t;
                int f_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_49 = NULL,g_49 = NULL;
                    t = term_k_40;
                    f_49 = t;
                    t = term_w_43;
                    g_49 = t;
                    t = term_c_44;
                    t = y_10(f_49, g_49, t);
                    LocalPopChoice(f_46);
                  }
                else
                  {
                    t = e_46;
                    t = fetch_1_0(a_16, t);
                  }
              }
              t = q_105;
              t = default_system_usage_0_0(t);
              t = term_k_19;
              e_49 = t;
              t = SSL_exit(e_49);
              LocalPopChoice(w_45);
            }
          else
            {
              t = v_45;
              {
                ATerm k_49 = NULL,l_49 = NULL,t_49 = NULL;
                t = term_k_40;
                l_49 = t;
                t = term_o_44;
                t_49 = t;
                t = term_g_46;
                t = y_10(l_49, t_49, t);
                t = q_105;
                t = default_system_about_0_0(t);
                t = term_k_19;
                k_49 = t;
                t = SSL_exit(k_49);
              }
            }
        }
        LocalPopChoice(u_45);
      }
    else
      {
        t = t_45;
        {
          ATerm h_46 = t;
          int i_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL;
              static ATerm i_16 (ATerm t)
              {
                ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL,x_11 = NULL;
                w_105 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_105 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_105);
                u_105 = t;
                t = v_105;
                if(((w_104 != NULL) && (w_104 != t)))
                  _fail(t);
                else
                  w_104 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_105);
                x_11 = t;
                t = SSLsetAnnotations(x_11, u_105);
                return(t);
              }
              t = fetch_1_0(i_16, t);
              t = term_d_17;
              s_105 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_104)), term_p_46);
              t_105 = t;
              t = SSL_printnl(s_105, t_105);
              t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_104)), term_p_46));
              t = default_system_usage_0_0(t);
              t = term_g_17;
              r_105 = t;
              t = SSL_exit(r_105);
              LocalPopChoice(i_46);
            }
          else
            {
              t = h_46;
            }
        }
      }
  }
  x_104 = t;
  t = term_r_41;
  z_104 = t;
  t = SSL_table_destroy(z_104);
  t = x_104;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_132 (ATerm), ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm t)
{
  ATerm d_106 = NULL,e_106 = NULL,f_106 = NULL,g_106 = NULL;
  t = parse_options_1_0(s_132, t);
  d_106 = t;
  t = term_z_46;
  g_106 = t;
  t = SSL_table_create(g_106);
  t = term_z_46;
  e_106 = t;
  t = term_a_47;
  f_106 = t;
  t = SSL_table_put(e_106, f_106, d_106);
  t = d_106;
  t = u_132(t);
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_132, t);
        LocalPopChoice(e_47);
      }
    else
      {
        t = d_47;
        {
          ATerm f_47 = t;
          int h_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_47);
            }
          else
            {
              t = f_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = if_verbose2_1_0(t_16, t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm h_106 = NULL,i_106 = NULL;
  t = term_o_47;
  h_106 = t;
  t = term_c_17;
  i_106 = t;
  t = term_r_47;
  t = b_11(h_106, i_106, t);
  t = term_w_47;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,p_106 = NULL,q_106 = NULL;
  j_106 = t;
  t = term_k_40;
  p_106 = t;
  t = term_r_42;
  q_106 = t;
  t = term_s_42;
  t = y_10(p_106, q_106, t);
  k_106 = t;
  t = term_d_17;
  l_106 = t;
  t = (ATerm) ATinsert(ATempty, k_106);
  m_106 = t;
  t = SSL_printnl(l_106, m_106);
  t = j_106;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm t)
{
  static ATerm l_16 (ATerm t)
  {
    ATerm a_48 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_132(t);
        LocalPopChoice(b_48);
      }
    else
      {
        t = a_48;
        {
          ATerm c_48 = t;
          int d_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(d_48);
            }
          else
            {
              t = c_48;
              {
                ATerm f_48 = t;
                int g_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(g_48);
                  }
                else
                  {
                    t = f_48;
                    {
                      ATerm j_48 = t;
                      int k_48 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_16, q_16, s_16, t);
                          LocalPopChoice(k_48);
                        }
                      else
                        {
                          t = j_48;
                          {
                            ATerm l_48 = t;
                            int m_48 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(m_48);
                              }
                            else
                              {
                                t = l_48;
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
  static ATerm o_16 (ATerm t)
  {
    ATerm r_106 = NULL,s_106 = NULL,t_106 = NULL;
    s_106 = t;
    {
      ATerm n_48 = t;
      int o_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_106 != NULL) && (r_106 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_106 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_16, t);
          LocalPopChoice(o_48);
        }
      else
        {
          t = n_48;
          t = term_p_48;
          r_106 = t;
        }
    }
    t = not_null(r_106);
    t = ReadFromFile_0_0(t);
    t_106 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_106, t_106);
    t = apply_strategy_1_0(b_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_16, d_132, n_16, o_16, t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL,a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,g_12 = NULL,f_12 = NULL,e_12 = NULL;
  h_107 = t;
  if(match_cons(t, sym__2))
    {
      v_106 = ATgetArgument(t, 0);
      w_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_107);
  u_106 = t;
  t = w_106;
  if(match_cons(t, sym_Specification_1))
    {
      b_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_106);
  a_107 = t;
  t = b_107;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_107 = ATgetFirst((ATermList) t);
      e_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_107);
  c_107 = t;
  t = e_107;
  t = Cons_2_0(a_17, b_17, t);
  f_107 = t;
  t = (ATerm) ATinsert(CheckATermList(f_107), d_107);
  e_12 = t;
  t = SSLsetAnnotations(e_12, c_107);
  g_107 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, g_107);
  f_12 = t;
  t = SSLsetAnnotations(f_12, a_107);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm q_48 = ATgetArgument(t, 0);
      if(((ATgetType(q_48) == AT_LIST) && !(ATisEmpty(q_48))))
        {
          y_106 = ATgetFirst((ATermList) q_48);
          {
            ATerm r_48 = (ATerm) ATgetNext((ATermList) q_48);
            if(((ATgetType(r_48) == AT_LIST) && !(ATisEmpty(r_48))))
              {
                ATerm s_48 = ATgetFirst((ATermList) r_48);
                if(match_cons(s_48, sym_Strategies_1))
                  {
                    z_106 = ATgetArgument(s_48, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm t_48 = (ATerm) ATgetNext((ATermList) r_48);
                  if(((ATgetType(t_48) != AT_LIST) || !(ATisEmpty(t_48))))
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
  t = w_8(y_106, z_106, t);
  x_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_106, x_106);
  g_12 = t;
  t = SSLsetAnnotations(g_12, u_106);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm i_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL,z_11 = NULL;
  l_107 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_107);
  i_107 = t;
  t = j_107;
  t = needed_defs_0_0(t);
  k_107 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, k_107);
  z_11 = t;
  t = SSLsetAnnotations(z_11, i_107);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_16, _fail, default_usage_0_0, t);
  return(t);
}

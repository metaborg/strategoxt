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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_c_52;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_c_50;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_o_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_b_48;
ATerm term_w_47;
ATerm term_u_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_i_47;
ATerm term_e_47;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_z_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_q_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_i_45;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_r_42;
ATerm term_j_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_p_36;
ATerm term_d_36;
ATerm term_j_35;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_u_32;
ATerm term_r_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_e_28;
ATerm term_p_27;
ATerm term_p_26;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_r_24;
ATerm term_l_24;
ATerm term_a_24;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_b_20;
ATerm term_g_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATempty);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Call_2, term_c_22, (ATerm) ATempty);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Call_2, term_l_24, (ATerm) ATempty);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Call_2, term_z_20, (ATerm) ATempty);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_25);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Sort_2, term_c_32, (ATerm) ATempty);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_32);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_b_20);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym__2, term_b_42, term_c_42);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym__2, term_y_43, term_z_43);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym__2, term_z_43, term_b_20);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_20);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym__2, term_q_44, term_t_17);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym__2, term_y_43, term_d_46);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym__2, term_y_43, term_l_47);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_l_45);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__2, term_b_48, term_t_17);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__2, term_f_48, term_t_17);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym__2, term_l_47, term_t_17);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym__3, term_i_45, term_l_45, (ATerm) ATempty);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(sym__2, term_y_43, term_b_48);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(sym__2, term_e_51, term_t_17);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm f_125 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm p_9 (ATerm o_83, ATerm n_83, ATerm t);
static ATerm r_9 (ATerm o_61, ATerm p_61, ATerm q_61, ATerm t);
static ATerm z_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm y_9 (ATerm b_26, ATerm a_26, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_127 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm g_36 (ATerm h_29, ATerm i_29, ATerm t);
static ATerm h_36 (ATerm u_29, ATerm v_29, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm f_139 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm h_10 (ATerm k_78, ATerm l_78, ATerm m_78, ATerm t);
static ATerm u_51 (ATerm l_51, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm t_107 (ATerm), ATerm t);
static ATerm l_10 (ATerm x_73, ATerm y_73, ATerm z_73, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_106 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm r_110 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm m_10 (ATerm e_41, ATerm f_41, ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm copy_1_0 (ATerm r_124 (ATerm), ATerm t);
static ATerm n_10 (ATerm r_60, ATerm s_60, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm j_71 (ATerm z_67, ATerm a_68, ATerm b_68, ATerm c_68, ATerm t);
static ATerm k_71 (ATerm z_69, ATerm a_70, ATerm b_70, ATerm e_70, ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm j_119 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm x_113 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm h_108 (ATerm), ATerm t);
static ATerm z_9 (ATerm v_43, ATerm w_43, ATerm t);
ATerm end_scope_1_0 (ATerm f_118 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_118 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm d_10 (ATerm r_62, ATerm s_62, ATerm w_62, ATerm t_62, ATerm v_62, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm r_73 (ATerm b_72, ATerm c_72, ATerm d_72, ATerm f_72, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm o_119 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_77 (ATerm c_76, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_10 (ATerm b_121 (ATerm), ATerm e_49, ATerm d_49, ATerm t);
ATerm genzip_4_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm y_10 (ATerm z_731, ATerm e_732, ATerm o_71, ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm t_86 (ATerm w_84, ATerm x_84, ATerm a_85, ATerm t);
static ATerm o_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_11 (ATerm b_139 (ATerm), ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm f_73, ATerm c_73, ATerm k_73, ATerm g_73, ATerm d_73, ATerm e_73, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm b_139 (ATerm), ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm t);
ATerm for_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm m_35 (ATerm n_34, ATerm p_34, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm d_11 (ATerm i_118 (ATerm), ATerm m_42, ATerm k_42, ATerm t);
static ATerm e_11 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm k_49, ATerm j_49, ATerm t);
static ATerm f_11 (ATerm g_121 (ATerm), ATerm g_49, ATerm f_49, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm h_11 (ATerm b_44, ATerm c_44, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t);
static ATerm j_11 (ATerm u_33, ATerm v_33, ATerm t);
static ATerm k_11 (ATerm m_32, ATerm n_32, ATerm t);
static ATerm m_11 (ATerm z_113 (ATerm), ATerm k_250, ATerm s_32, ATerm t);
static ATerm l_11 (ATerm i_32, ATerm j_32, ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_133 (ATerm), ATerm t);
static ATerm s_98 (ATerm m_98, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_11 (ATerm o_32, ATerm t);
static ATerm o_11 (ATerm j_58, ATerm k_58, ATerm t);
static ATerm p_11 (ATerm w_33, ATerm x_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_100 (ATerm c_99, ATerm t);
static ATerm e_100 (ATerm g_99, ATerm h_99, ATerm i_99, ATerm t);
static ATerm f_100 (ATerm q_99, ATerm r_99, ATerm s_99, ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_119 (ATerm), ATerm t);
static ATerm v_11 (ATerm j_45, ATerm k_45, ATerm t);
ATerm if_verbose2_1_0 (ATerm q_115 (ATerm), ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm o_15 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_11 (ATerm a_38, ATerm b_38, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_11 (ATerm q_43, ATerm r_43, ATerm p_43, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_11 (ATerm y_40, ATerm z_40, ATerm t);
ATerm foldr_2_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_115 (ATerm), ATerm t);
static ATerm y_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_15 (ATerm t);
ATerm need_help_1_0 (ATerm k_134 (ATerm), ATerm t);
static ATerm z_11 (ATerm x_46, ATerm y_46, ATerm z_46, ATerm t);
static ATerm a_12 (ATerm a_47, ATerm b_47, ATerm t);
ATerm lookup_table_0_1 (ATerm c_45, ATerm t);
ATerm new_hashtable_0_2 (ATerm f_47, ATerm g_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_11 (ATerm c_47, ATerm d_47, ATerm t);
static ATerm u_11 (ATerm h_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_118 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm n_136 (ATerm), ATerm t);
static ATerm n_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm parse_options_1_0 (ATerm m_136 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm t);
static ATerm f_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
ATerm iowrap_3_0 (ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
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
  t = term_t_17;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_u_17;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_17), b_0), term_v_17);
  r_0 = t;
  t = SSL_printnl(o_0, r_0);
  t = term_y_17;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      c_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,u_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_2, (ATerm) ATempty);
        s_1 = t;
        t = term_b_18;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_18, (ATerm) ATmakeAppl(sym_OpDecl_2, c_2, (ATerm) ATempty));
        t = h_11(u_1, s_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_18) != ATmakeSymbol("i_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_2, d_2);
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm l_2 = NULL,z_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_2, (ATerm) ATempty);
          l_2 = t;
          t = term_b_18;
          z_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_18, (ATerm) ATmakeAppl(sym_OpDecl_2, c_2, (ATerm) ATempty));
          t = h_11(z_2, l_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_18) != ATmakeSymbol("g_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_2, d_2);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm f_125 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_2 = ATgetFirst((ATermList) t);
          w_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 = NULL,h_4 = NULL,i_4 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(u_2);
            e_4 = t;
            t = v_2;
            t = f_125(t);
            h_4 = t;
            t = w_2;
            t = filter_1_0(f_125, t);
            i_4 = t;
            t = (ATerm) ATinsert(CheckATermList(i_4), h_4);
            h_0 = t;
            t = SSLsetAnnotations(h_0, e_4);
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            t = w_2;
            t = filter_1_0(f_125, t);
          }
      }
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_b_18;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL;
  a_3 = t;
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            b_3 = ATgetArgument(t, 0);
            {
              ATerm i_18 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_18);
        {
          ATerm f_3 = NULL,g_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, b_3, (ATerm) ATempty);
          f_3 = t;
          t = term_k_18;
          g_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, b_3, (ATerm) ATempty), term_k_18);
          t = d_11(j_0, f_3, g_3, t);
          t = a_3;
        }
      }
    else
      {
        t = g_18;
        {
          ATerm j_3 = NULL,k_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              b_3 = ATgetArgument(t, 0);
              {
                ATerm l_18 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, b_3, (ATerm) ATempty);
          j_3 = t;
          t = term_n_18;
          k_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, b_3, (ATerm) ATempty), term_n_18);
          t = d_11(v_0, j_3, k_3, t);
          t = a_3;
        }
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
static ATerm p_9 (ATerm o_83, ATerm n_83, ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,t_0 = NULL,p_0 = NULL,m_0 = NULL;
  t = n_83;
  t = topdown_1_0(x_0, t);
  t = o_83;
  if(match_cons(t, sym_Signature_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_83);
  n_3 = t;
  t = p_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_3 = ATgetFirst((ATermList) t);
      t_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  r_3 = t;
  t = s_3;
  if(match_cons(t, sym_Constructors_1))
    {
      w_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_3);
  v_3 = t;
  t = w_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, x_3);
  m_0 = t;
  t = SSLsetAnnotations(m_0, v_3);
  y_3 = t;
  t = t_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_3), y_3);
  p_0 = t;
  t = SSLsetAnnotations(p_0, r_3);
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, u_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, n_3);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, n_83)), q_3));
  return(t);
}
static ATerm r_9 (ATerm o_61, ATerm p_61, ATerm q_61, ATerm t)
{
  ATerm b_4 = NULL,d_4 = NULL;
  t = term_u_17;
  b_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_18), q_61), term_u_18), p_61), term_t_18), o_61), term_r_18);
  d_4 = t;
  t = SSL_printnl(b_4, d_4);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_18), q_61), term_u_18), p_61), term_t_18), o_61), term_r_18);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_18 = ATgetArgument(t, 0);
      if(((ATgetType(w_18) != AT_INT) || (ATgetInt((ATermInt) w_18) != 0)))
        _fail(t);
      {
        ATerm x_18 = ATgetArgument(t, 1);
        if(((ATgetType(x_18) != AT_INT) || (ATgetInt((ATermInt) x_18) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
  x_4 = t;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = d_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL,i_5 = NULL;
        t = y_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_19 = ATgetFirst((ATermList) t);
            ATerm c_19 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(c_19) == AT_LIST) && !(ATisEmpty(c_19))))
              {
                ATerm d_19 = ATgetFirst((ATermList) c_19);
                ATerm e_19 = (ATerm) ATgetNext((ATermList) c_19);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm f_19 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_19;
            }
        }
        t = term_u_17;
        h_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, y_4), term_g_19);
        i_5 = t;
        t = SSL_printnl(h_5, i_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, y_4), term_g_19);
        t = giving_up_0_0(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        {
          ATerm e_6 = NULL,h_6 = NULL;
          t = y_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_19 = ATgetFirst((ATermList) t);
              if(match_cons(h_19, sym__2))
                {
                  e_6 = ATgetArgument(h_19, 0);
                  h_6 = ATgetArgument(h_19, 1);
                }
              else
                _fail(t);
              {
                ATerm j_19 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(j_19) != AT_LIST) || !(ATisEmpty(j_19))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, y_4, (ATerm) ATmakeAppl(sym__2, e_6, h_6));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, y_4, (ATerm) ATmakeAppl(sym__2, e_6, h_6));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
      {
        ATerm p_6 = NULL,s_6 = NULL,t_6 = NULL,k_1 = NULL;
        t = SSLgetAnnotations(m_8);
        p_6 = t;
        t = n_8;
        t = u_105(t);
        s_6 = t;
        t = o_8;
        t = u_105(t);
        t_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, s_6, t_6);
        k_1 = t;
        t = SSLsetAnnotations(k_1, p_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_8 = ATgetArgument(t, 0);
          o_8 = ATgetArgument(t, 1);
          j_8 = ATgetArgument(t, 2);
          {
            ATerm j_7 = NULL,z_7 = NULL,c_8 = NULL,d_8 = NULL,l_1 = NULL;
            t = SSLgetAnnotations(m_8);
            j_7 = t;
            t = n_8;
            t = w_105(t);
            z_7 = t;
            t = o_8;
            t = w_105(t);
            c_8 = t;
            t = j_8;
            t = u_105(t);
            d_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, z_7, c_8, d_8);
            l_1 = t;
            t = SSLsetAnnotations(l_1, j_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_8 = ATgetArgument(t, 0);
              o_8 = ATgetArgument(t, 1);
              j_8 = ATgetArgument(t, 2);
              k_8 = ATgetArgument(t, 3);
              {
                ATerm g_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,q_9 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(m_8);
                g_9 = t;
                t = n_8;
                t = w_105(t);
                l_9 = t;
                t = o_8;
                t = w_105(t);
                m_9 = t;
                t = j_8;
                t = w_105(t);
                n_9 = t;
                t = k_8;
                t = u_105(t);
                q_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_9, m_9, n_9, q_9);
                m_1 = t;
                t = SSLsetAnnotations(m_1, g_9);
              }
            }
          else
            {
              ATerm f_10 = NULL,j_10 = NULL,k_10 = NULL,n_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  n_8 = ATgetArgument(t, 0);
                  o_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_8);
              f_10 = t;
              t = n_8;
              t = w_105(t);
              j_10 = t;
              t = o_8;
              t = u_105(t);
              k_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, j_10, k_10);
              n_1 = t;
              t = SSLsetAnnotations(n_1, f_10);
            }
        }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm y_8 = NULL;
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_8 = ATgetArgument(t, 0);
          {
            ATerm m_19 = ATgetArgument(t, 1);
          }
          {
            ATerm n_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_19);
      t = y_8;
    }
  else
    {
      t = k_19;
      if(match_cons(t, sym_SDefT_4))
        {
          y_8 = ATgetArgument(t, 0);
          {
            ATerm o_19 = ATgetArgument(t, 1);
          }
          {
            ATerm p_19 = ATgetArgument(t, 2);
          }
          {
            ATerm q_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_8;
    }
  return(t);
}
static ATerm y_9 (ATerm b_26, ATerm a_26, ATerm t)
{
  t = b_26;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
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
  ATerm i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(j_1, i_12, j_12, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm k_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      if((k_12 != ATgetArgument(t, 1)))
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
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm u_12 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(q_1, u_12, d_13, t);
  return(t);
}
static ATerm q_1 (ATerm t)
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
static ATerm r_1 (ATerm t)
{
  ATerm b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      if((b_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_127 (ATerm), ATerm t)
{
  static ATerm c_13 (ATerm t)
  {
    ATerm x_11 = NULL,b_12 = NULL,c_12 = NULL;
    c_12 = t;
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_127(t);
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          t = (ATerm) ATempty;
        }
    }
    x_11 = t;
    t = c_12;
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_12 = NULL,s_11 = NULL,d_12 = NULL;
          t = n_127(t);
          f_12 = t;
          t = c_12;
          {
            static ATerm d_1 (ATerm t)
            {
              ATerm u_10 = NULL;
              t = c_13(t);
              u_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_10, f_12);
              t = t_10(p_127, u_10, f_12, t);
              return(t);
            }
            t = o_127(d_1, c_13, e_1, t);
          }
          d_12 = t;
          t = SSL_explode_term(d_12);
          if(match_cons(t, sym__2))
            {
              ATerm v_19 = ATgetArgument(t, 0);
              s_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_11;
          t = foldr_3_0(f_1, h_1, _id, t);
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm n_12 = NULL;
            t = SSL_explode_term(c_12);
            if(match_cons(t, sym__2))
              {
                ATerm w_19 = ATgetArgument(t, 0);
                n_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_12;
            t = foldr_3_0(o_1, p_1, c_13, t);
          }
        }
    }
    b_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_11, b_12);
    t = f_11(r_1, x_11, b_12, t);
    return(t);
  }
  t = c_13(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      if(match_cons(x_19, sym_SVar_1))
        {
          l_13 = ATgetArgument(x_19, 0);
        }
      else
        _fail(t);
      m_13 = ATgetArgument(t, 1);
      o_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_13;
  t = foldr_3_0(x_1, z_1, b_2, t);
  p_13 = t;
  t = o_13;
  t = foldr_3_0(f_2, g_2, h_2, t);
  q_13 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_13, (ATerm) ATmakeAppl(sym__2, p_13, q_13)));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm x_13 = NULL,a_14 = NULL,b_14 = NULL,d_14 = NULL,e_14 = NULL;
  x_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
      t = x_13;
      t = y_9(a_14, b_14, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_14 = ATgetArgument(t, 0);
          b_14 = ATgetArgument(t, 1);
          d_14 = ATgetArgument(t, 2);
          t = b_14;
          t = map_1_0(i_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              a_14 = ATgetArgument(t, 0);
              b_14 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, a_14);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  a_14 = ATgetArgument(t, 0);
                  b_14 = ATgetArgument(t, 1);
                  d_14 = ATgetArgument(t, 2);
                  e_14 = ATgetArgument(t, 3);
                  t = b_14;
                  t = map_1_0(j_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_14 = ATgetArgument(t, 0);
                      b_14 = ATgetArgument(t, 1);
                      d_14 = ATgetArgument(t, 2);
                      e_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_14;
                  t = map_1_0(k_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      if(match_cons(y_19, sym__2))
        {
          r_16 = ATgetArgument(y_19, 0);
          {
            ATerm z_19 = ATgetArgument(y_19, 1);
          }
        }
      else
        _fail(t);
      if((r_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(r_13, s_13, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym__2))
    {
      v_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(v_13, w_13, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm a_15 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_15 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_20);
      t = a_15;
    }
  else
    {
      t = d_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_15;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm h_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_16 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = a_16;
    }
  else
    {
      t = h_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_16;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm o_16 = NULL;
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_16 = ATgetArgument(t, 0);
          {
            ATerm t_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_20);
      t = o_16;
    }
  else
    {
      t = q_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_16;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(t_1, v_1, sboundin_3_0, w_1, t);
  return(t);
}
static ATerm g_36 (ATerm h_29, ATerm i_29, ATerm t)
{
  t = h_29;
  {
    ATerm w_20 = t;
    if((PushChoice() == 0))
      {
        ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,y_1 = NULL;
        s_29 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_29 = ATgetFirst((ATermList) t);
            r_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_29);
        p_29 = t;
        t = r_29;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(r_29), q_29);
        y_1 = t;
        t = SSLsetAnnotations(y_1, p_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_x_20, h_29);
  return(t);
}
static ATerm h_36 (ATerm u_29, ATerm v_29, ATerm t)
{
  t = u_29;
  {
    ATerm y_20 = t;
    if((PushChoice() == 0))
      {
        ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,e_2 = NULL;
        e_30 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_30 = ATgetFirst((ATermList) t);
            d_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_30);
        b_30 = t;
        t = d_30;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_30), c_30);
        e_2 = t;
        t = SSLsetAnnotations(e_2, b_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_20, u_29);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_j_21;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_31 = NULL,c_31 = NULL,n_15 = NULL;
  a_31 = t;
  t = SSL_explode_term(a_31);
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_21 = ATgetArgument(t, 1);
        if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
          {
            c_31 = ATgetFirst((ATermList) s_21);
            {
              ATerm u_21 = (ATerm) ATgetNext((ATermList) s_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_31);
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_21 = ATgetArgument(t, 1);
        if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
          {
            ATerm x_21 = ATgetFirst((ATermList) w_21);
            ATerm y_21 = (ATerm) ATgetNext((ATermList) w_21);
            if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
              {
                n_15 = ATgetFirst((ATermList) y_21);
                {
                  ATerm z_21 = (ATerm) ATgetNext((ATermList) y_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, n_15), c_31));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm y_31 = NULL,f_32 = NULL;
  if(match_cons(t, sym__2))
    {
      y_31 = ATgetArgument(t, 0);
      f_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, f_32), y_31));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_j_21;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm h_32 = NULL,k_32 = NULL;
  if(match_cons(t, sym__2))
    {
      h_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, k_32), h_32));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, h_33), g_33));
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_33 = NULL,p_33 = NULL;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, p_33), j_33));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm f_30 = NULL,j_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  if(match_cons(t, sym_Anno_2))
    {
      q_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
      {
        ATerm y_30 = NULL;
        t = r_30;
        t = foldr_2_0(s_2, t_2, t);
        y_30 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_30, y_30);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          q_30 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, q_30, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              q_30 = ATgetArgument(t, 0);
              {
                ATerm v_15 = NULL;
                t = q_30;
                {
                  ATerm f_22 = t;
                  int g_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_k_22;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_r_22;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_u_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_v_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_w_22;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(g_22);
                    }
                  else
                    {
                      t = f_22;
                      {
                        ATerm c_16 = NULL;
                        t = SSL_explode_string(q_30);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm g_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(g_23) != AT_INT) || (ATgetInt((ATermInt) g_23) != 39)))
                              _fail(t);
                            {
                              ATerm h_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
                                {
                                  c_16 = ATgetFirst((ATermList) h_23);
                                  {
                                    ATerm i_23 = (ATerm) ATgetNext((ATermList) h_23);
                                    if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
                                      {
                                        ATerm k_23 = ATgetFirst((ATermList) i_23);
                                        if(((ATgetType(k_23) != AT_INT) || (ATgetInt((ATermInt) k_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm l_23 = (ATerm) ATgetNext((ATermList) i_23);
                                          if(((ATgetType(l_23) != AT_LIST) || !(ATisEmpty(l_23))))
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
                        t = c_16;
                      }
                    }
                }
                v_15 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, v_15);
              }
            }
          else
            {
              ATerm m_23 = t;
              int n_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      q_30 = ATgetArgument(t, 0);
                      {
                        ATerm o_23 = ATgetArgument(t, 1);
                      }
                      o_30 = ATgetArgument(t, 2);
                      f_30 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, q_30, o_30, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_30), (ATerm) ATempty));
                }
              else
                {
                  t = m_23;
                  {
                    ATerm p_23 = t;
                    int w_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            q_30 = ATgetArgument(t, 0);
                            {
                              ATerm x_23 = ATgetArgument(t, 1);
                            }
                            o_30 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, q_30, o_30, term_r_24);
                      }
                    else
                      {
                        t = p_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            q_30 = ATgetArgument(t, 0);
                            r_30 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, q_30, r_30, term_r_24);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                q_30 = ATgetArgument(t, 0);
                                r_30 = ATgetArgument(t, 1);
                                {
                                  static ATerm x_2 (ATerm t)
                                  {
                                    t = r_30;
                                    return(t);
                                  }
                                  t = q_30;
                                  t = foldr_2_0(x_2, y_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    q_30 = ATgetArgument(t, 0);
                                    t = q_30;
                                    t = foldr_2_0(c_3, d_3, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        q_30 = ATgetArgument(t, 0);
                                        t = q_30;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            j_30 = ATgetFirst((ATermList) t);
                                            m_30 = (ATerm) ATgetNext((ATermList) t);
                                            t = m_30;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm v_24 = t;
                                                int y_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_36(q_30, p_30, t);
                                                    LocalPopChoice(y_24);
                                                  }
                                                else
                                                  {
                                                    t = v_24;
                                                    t = j_30;
                                                  }
                                              }
                                            else
                                              {
                                                t = g_36(q_30, p_30, t);
                                              }
                                          }
                                        else
                                          {
                                            t = g_36(q_30, p_30, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            q_30 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, q_30));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                q_30 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, q_30));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    q_30 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, q_30));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        q_30 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, q_30));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            q_30 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_30), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                q_30 = ATgetArgument(t, 0);
                                                                r_30 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_30), r_30);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    q_30 = ATgetArgument(t, 0);
                                                                    r_30 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm e_3 (ATerm t)
                                                                      {
                                                                        t = r_30;
                                                                        return(t);
                                                                      }
                                                                      t = q_30;
                                                                      t = foldr_2_0(e_3, h_3, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        q_30 = ATgetArgument(t, 0);
                                                                        t = q_30;
                                                                        t = foldr_2_0(i_3, l_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            q_30 = ATgetArgument(t, 0);
                                                                            r_30 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_z_20, (ATerm) ATinsert(CheckATermList(r_30), q_30));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                q_30 = ATgetArgument(t, 0);
                                                                                t = q_30;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    j_30 = ATgetFirst((ATermList) t);
                                                                                    m_30 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = m_30;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm a_25 = t;
                                                                                        int b_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = h_36(q_30, p_30, t);
                                                                                            LocalPopChoice(b_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = a_25;
                                                                                            t = j_30;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_36(q_30, p_30, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_36(q_30, p_30, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_c_25;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        q_30 = ATgetArgument(t, 0);
                                                                                        r_30 = ATgetArgument(t, 1);
                                                                                        t = r_30;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            n_30 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, n_30), q_30));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            q_30 = ATgetArgument(t, 0);
                                                                                            t = q_30;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                q_30 = ATgetArgument(t, 0);
                                                                                                r_30 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, q_30, r_30, term_g_25);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    q_30 = ATgetArgument(t, 0);
                                                                                                    r_30 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, q_30, r_30, term_g_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        q_30 = ATgetArgument(t, 0);
                                                                                                        r_30 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, q_30, (ATerm)ATempty, r_30);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            q_30 = ATgetArgument(t, 0);
                                                                                                            r_30 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, r_30, q_30);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                q_30 = ATgetArgument(t, 0);
                                                                                                                r_30 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, q_30, r_30, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    q_30 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, q_30, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        q_30 = ATgetArgument(t, 0);
                                                                                                                        r_30 = ATgetArgument(t, 1);
                                                                                                                        o_30 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_30, r_30, (ATerm)ATempty, o_30);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            q_30 = ATgetArgument(t, 0);
                                                                                                                            r_30 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_30, (ATerm)ATempty, (ATerm)ATempty, r_30);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                q_30 = ATgetArgument(t, 0);
                                                                                                                                r_30 = ATgetArgument(t, 1);
                                                                                                                                o_30 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_30, r_30, (ATerm)ATempty, o_30);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    q_30 = ATgetArgument(t, 0);
                                                                                                                                    r_30 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_30, (ATerm)ATempty, (ATerm)ATempty, r_30);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        q_30 = ATgetArgument(t, 0);
                                                                                                                                        r_30 = ATgetArgument(t, 1);
                                                                                                                                        o_30 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_30, r_30, (ATerm)ATempty, o_30);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            q_30 = ATgetArgument(t, 0);
                                                                                                                                            r_30 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, q_30, (ATerm)ATempty, (ATerm)ATempty, r_30);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm h_25 = ATgetArgument(t, 0);
                                                                                                                                                r_30 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, r_30);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm j_36 = NULL,k_36 = NULL,q_36 = NULL;
  k_36 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      q_36 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
      {
        ATerm t_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
        t = k_36;
        t = new_0_0(t);
        t_36 = t;
        t = new_0_0(t);
        y_36 = t;
        t = new_0_0(t);
        z_36 = t;
        t = new_0_0(t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_37), z_36), y_36), t_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, t_36), (ATerm) ATmakeAppl(sym_Var_1, z_36))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, q_36, (ATerm)ATmakeAppl(sym_Var_1, t_36), (ATerm) ATmakeAppl(sym_Var_1, y_36)), (ATerm) ATmakeAppl(sym_BAM_3, j_36, (ATerm)ATmakeAppl(sym_Var_1, z_36), (ATerm) ATmakeAppl(sym_Var_1, a_37)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_37)), (ATerm) ATmakeAppl(sym_Var_1, y_36))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          q_36 = ATgetArgument(t, 0);
          {
            ATerm b_37 = NULL,c_37 = NULL,e_37 = NULL,f_37 = NULL;
            t = k_36;
            t = new_0_0(t);
            e_37 = t;
            t = q_36;
            {
              static ATerm m_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((b_37 != NULL) && (b_37 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      b_37 = ATgetArgument(t, 0);
                    if(((c_37 != NULL) && (c_37 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      c_37 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, e_37);
                return(t);
              }
              t = oncetd_1_0(m_3, t);
            }
            f_37 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_37)), not_null(b_37))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_37)), (ATerm) ATmakeAppl(sym_Build_1, f_37))));
          }
        }
      else
        {
          ATerm h_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              q_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_36;
          t = new_0_0(t);
          l_37 = t;
          t = new_0_0(t);
          m_37 = t;
          t = q_36;
          {
            static ATerm o_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((h_37 != NULL) && (h_37 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    h_37 = ATgetArgument(t, 0);
                  if(((k_37 != NULL) && (k_37 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    k_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, l_37);
              return(t);
            }
            t = oncetd_1_0(o_3, t);
          }
          n_37 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_37), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_37)), (ATerm) ATmakeAppl(sym_PrimT_3, term_p_26, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_37))))), (ATerm)ATmakeAppl(sym_Var_1, l_37), (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_37)), not_null(h_37)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL;
  t_37 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_26 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
        t = t_37;
        t = new_0_0(t);
        y_37 = t;
        t = u_37;
        {
          static ATerm z_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_37 != NULL) && (w_37 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_37 = ATgetArgument(t, 0);
                if(((x_37 != NULL) && (x_37 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_37), w_37);
            return(t);
          }
          t = pat_td_1_0(z_3, t);
        }
        z_37 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_37), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_27, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_37))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_37))))));
        LocalPopChoice(o_27);
      }
    else
      {
        t = z_26;
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
              t = t_37;
              t = new_0_0(t);
              j_38 = t;
              t = u_37;
              {
                static ATerm a_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_38 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_38);
                  return(t);
                }
                t = pat_td_1_0(a_4, t);
              }
              k_38 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_38)), not_null(i_38))));
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
              {
                ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
                t = t_37;
                t = new_0_0(t);
                s_38 = t;
                t = u_37;
                {
                  static ATerm c_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((r_38 != NULL) && (r_38 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          r_38 = ATgetArgument(t, 0);
                        if(((q_38 != NULL) && (q_38 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_38 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_38);
                    return(t);
                  }
                  t = pat_td_1_0(c_4, t);
                }
                t_38 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_38)), not_null(r_38)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm f_139 (ATerm), ATerm t)
{
  ATerm u_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_139(t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = u_27;
      {
        ATerm d_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
        h_44 = t;
        if(match_cons(t, sym_Op_2))
          {
            i_44 = ATgetArgument(t, 0);
            j_44 = ATgetArgument(t, 1);
            {
              ATerm b_17 = NULL,e_17 = NULL,m_2 = NULL;
              t = SSLgetAnnotations(h_44);
              b_17 = t;
              t = j_44;
              {
                static ATerm f_4 (ATerm t)
                {
                  t = pat_td_1_0(f_139, t);
                  return(t);
                }
                t = fetch_1_0(f_4, t);
              }
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, i_44, e_17);
              m_2 = t;
              t = SSLsetAnnotations(m_2, b_17);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                i_44 = ATgetArgument(t, 0);
                j_44 = ATgetArgument(t, 1);
                {
                  ATerm a_28 = t;
                  int b_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_17 = NULL,x_17 = NULL,n_2 = NULL;
                      t = SSLgetAnnotations(h_44);
                      m_17 = t;
                      t = j_44;
                      t = pat_td_1_0(f_139, t);
                      x_17 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, i_44, x_17);
                      n_2 = t;
                      t = SSLsetAnnotations(n_2, m_17);
                      LocalPopChoice(b_28);
                    }
                  else
                    {
                      t = a_28;
                      {
                        ATerm o_18 = NULL,s_18 = NULL,o_2 = NULL;
                        t = SSLgetAnnotations(h_44);
                        o_18 = t;
                        t = i_44;
                        t = pat_td_1_0(f_139, t);
                        s_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, s_18, j_44);
                        o_2 = t;
                        t = SSLsetAnnotations(o_2, o_18);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    i_44 = ATgetArgument(t, 0);
                    j_44 = ATgetArgument(t, 1);
                    d_44 = ATgetArgument(t, 2);
                    {
                      ATerm b_19 = NULL,i_19 = NULL,p_2 = NULL;
                      t = SSLgetAnnotations(h_44);
                      b_19 = t;
                      t = d_44;
                      {
                        static ATerm g_4 (ATerm t)
                        {
                          t = pat_td_1_0(f_139, t);
                          return(t);
                        }
                        t = fetch_1_0(g_4, t);
                      }
                      i_19 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_44, j_44, i_19);
                      p_2 = t;
                      t = SSLsetAnnotations(p_2, b_19);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        i_44 = ATgetArgument(t, 0);
                        j_44 = ATgetArgument(t, 1);
                        d_44 = ATgetArgument(t, 2);
                        {
                          ATerm a_20 = NULL,i_20 = NULL,q_2 = NULL;
                          t = SSLgetAnnotations(h_44);
                          a_20 = t;
                          t = d_44;
                          {
                            static ATerm j_4 (ATerm t)
                            {
                              t = pat_td_1_0(f_139, t);
                              return(t);
                            }
                            t = fetch_1_0(j_4, t);
                          }
                          i_20 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, i_44, j_44, i_20);
                          q_2 = t;
                          t = SSLsetAnnotations(q_2, a_20);
                        }
                      }
                    else
                      {
                        ATerm h_21 = NULL,q_21 = NULL,r_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            i_44 = ATgetArgument(t, 0);
                            j_44 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_44);
                        h_21 = t;
                        t = j_44;
                        t = pat_td_1_0(f_139, t);
                        q_21 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, i_44, q_21);
                        r_2 = t;
                        t = SSLsetAnnotations(r_2, h_21);
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
  ATerm v_44 = NULL,w_44 = NULL;
  v_44 = t;
  if(match_cons(t, sym_Build_1))
    {
      w_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_44 = NULL,y_44 = NULL,a_45 = NULL,b_45 = NULL;
        t = v_44;
        t = new_0_0(t);
        a_45 = t;
        t = w_44;
        {
          static ATerm k_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((x_44 != NULL) && (x_44 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_44 = ATgetArgument(t, 0);
                if(((y_44 != NULL) && (y_44 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, a_45);
            return(t);
          }
          t = pat_td_1_0(k_4, t);
        }
        b_45 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_44)), not_null(x_44))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_45)))), (ATerm) ATmakeAppl(sym_Build_1, b_45)));
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_45 = NULL,n_45 = NULL,o_45 = NULL;
              t = v_44;
              t = new_0_0(t);
              n_45 = t;
              t = w_44;
              {
                static ATerm l_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((g_45 != NULL) && (g_45 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_45);
                  return(t);
                }
                t = pat_td_1_0(l_4, t);
              }
              o_45 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_45), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_45)))), (ATerm) ATmakeAppl(sym_Build_1, o_45)));
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              {
                ATerm p_45 = NULL,y_45 = NULL,a_46 = NULL,b_46 = NULL;
                t = v_44;
                t = new_0_0(t);
                a_46 = t;
                t = w_44;
                {
                  static ATerm m_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((p_45 != NULL) && (p_45 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          p_45 = ATgetArgument(t, 0);
                        if(((y_45 != NULL) && (y_45 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_45 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_46);
                    return(t);
                  }
                  t = pat_td_1_0(m_4, t);
                }
                b_46 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_45), not_null(y_45), (ATerm) ATmakeAppl(sym_Var_1, a_46))), (ATerm) ATmakeAppl(sym_Build_1, b_46)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,q_46 = NULL,s_46 = NULL,t_46 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_46 = ATgetArgument(t, 0);
      t_46 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_46, t_46);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_46 = ATgetArgument(t, 0);
          t = s_46;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_46 = ATgetFirst((ATermList) t);
              k_46 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, j_46, (ATerm) ATmakeAppl(sym_LChoices_1, k_46));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_i_28;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              s_46 = ATgetArgument(t, 0);
              t = s_46;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_46 = ATgetFirst((ATermList) t);
                  k_46 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, j_46, (ATerm) ATmakeAppl(sym_Choices_1, k_46));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_i_28;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  s_46 = ATgetArgument(t, 0);
                  t = s_46;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_46 = ATgetFirst((ATermList) t);
                      k_46 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_46, (ATerm) ATmakeAppl(sym_Seqs_1, k_46));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_g_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      s_46 = ATgetArgument(t, 0);
                      t_46 = ATgetArgument(t, 1);
                      q_46 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, t_46, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, q_46), s_46)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          s_46 = ATgetArgument(t, 0);
                          t_46 = ATgetArgument(t, 1);
                          q_46 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_46)), s_46), (ATerm) ATmakeAppl(sym_Build_1, t_46)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              s_46 = ATgetArgument(t, 0);
                              t_46 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_46, (ATerm) ATmakeAppl(sym_Match_1, t_46));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  s_46 = ATgetArgument(t, 0);
                                  t_46 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_46), t_46);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      s_46 = ATgetArgument(t, 0);
                                      t_46 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_46), s_46);
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
static ATerm n_4 (ATerm t)
{
  ATerm j_28 = t;
  if((PushChoice() == 0))
    {
      ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,o_4 = NULL;
      f_50 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_50);
      d_50 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_50);
      o_4 = t;
      t = SSLsetAnnotations(o_4, d_50);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_28;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_28;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm h_50 = NULL,k_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_50 = ATgetFirst((ATermList) t);
      k_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_50, k_50);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,t_50 = NULL,v_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(match_cons(l_28, sym__2))
        {
          l_50 = ATgetArgument(l_28, 0);
          m_50 = ATgetArgument(l_28, 1);
        }
      else
        _fail(t);
      {
        ATerm m_28 = ATgetArgument(t, 1);
        if(match_cons(m_28, sym__2))
          {
            t_50 = ATgetArgument(m_28, 0);
            v_50 = ATgetArgument(m_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_50), l_50), (ATerm) ATinsert(CheckATermList(v_50), m_50));
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_28;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_50 = ATgetFirst((ATermList) t);
      x_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_50, x_50);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(match_cons(n_28, sym__2))
        {
          y_50 = ATgetArgument(n_28, 0);
          z_50 = ATgetArgument(n_28, 1);
        }
      else
        _fail(t);
      {
        ATerm o_28 = ATgetArgument(t, 1);
        if(match_cons(o_28, sym__2))
          {
            a_51 = ATgetArgument(o_28, 0);
            b_51 = ATgetArgument(o_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_51), y_50), (ATerm) ATinsert(CheckATermList(b_51), z_50));
  return(t);
}
static ATerm h_10 (ATerm k_78, ATerm l_78, ATerm m_78, ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,h_49 = NULL,i_49 = NULL,m_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,p_4 = NULL;
  t = m_78;
  t = fetch_1_0(n_4, t);
  t = m_78;
  t = genzip_4_0(q_4, r_4, t_4, LiftPrimArg_0_0, t);
  w_49 = t;
  if(match_cons(t, sym__2))
    {
      m_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_49);
  i_49 = t;
  t = m_49;
  t = concat_0_0(t);
  u_49 = t;
  t = t_49;
  t = genzip_4_0(u_4, z_4, a_5, _id, t);
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_49, v_49);
  p_4 = t;
  t = SSLsetAnnotations(p_4, i_49);
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      {
        ATerm p_28 = ATgetArgument(t, 1);
        if(match_cons(p_28, sym__2))
          {
            z_48 = ATgetArgument(p_28, 0);
            h_49 = ATgetArgument(p_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, y_48, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_48), (ATerm) ATmakeAppl(sym_CallT_3, k_78, l_78, h_49)));
  return(t);
}
static ATerm u_51 (ATerm l_51, ATerm t)
{
  ATerm n_51 = NULL;
  t = l_51;
  {
    ATerm q_28 = t;
    if((PushChoice() == 0))
      {
        ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,s_4 = NULL;
        q_51 = t;
        if(match_cons(t, sym_Var_1))
          {
            p_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_51);
        o_51 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, p_51);
        s_4 = t;
        t = SSLsetAnnotations(s_4, o_51);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_28;
      }
  }
  t = new_0_0(t);
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_51), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_51), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_51)))), (ATerm) ATmakeAppl(sym_Var_1, n_51)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  r_51 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_51 = ATgetArgument(t, 0);
      {
        ATerm r_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_51(r_51, t);
            LocalPopChoice(t_28);
          }
        else
          {
            t = r_28;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_g_25, (ATerm) ATmakeAppl(sym_Var_1, s_51)));
          }
      }
    }
  else
    {
      t = u_51(r_51, t);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm u_28 = t;
  if((PushChoice() == 0))
    {
      ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,v_4 = NULL;
      e_23 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_23);
      c_23 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_23);
      v_4 = t;
      t = SSLsetAnnotations(v_4, c_23);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_28;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_28;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm f_23 = NULL,j_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_23 = ATgetFirst((ATermList) t);
      j_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_23, j_23);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,y_23 = NULL,z_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      if(match_cons(v_28, sym__2))
        {
          q_23 = ATgetArgument(v_28, 0);
          r_23 = ATgetArgument(v_28, 1);
        }
      else
        _fail(t);
      {
        ATerm w_28 = ATgetArgument(t, 1);
        if(match_cons(w_28, sym__2))
          {
            y_23 = ATgetArgument(w_28, 0);
            z_23 = ATgetArgument(w_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_23), q_23), (ATerm) ATinsert(CheckATermList(z_23), r_23));
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_28;
  return(t);
}
static ATerm n_5 (ATerm t)
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
static ATerm o_5 (ATerm t)
{
  ATerm i_24 = NULL,n_24 = NULL,p_24 = NULL,q_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_28 = ATgetArgument(t, 0);
      if(match_cons(x_28, sym__2))
        {
          i_24 = ATgetArgument(x_28, 0);
          n_24 = ATgetArgument(x_28, 1);
        }
      else
        _fail(t);
      {
        ATerm y_28 = ATgetArgument(t, 1);
        if(match_cons(y_28, sym__2))
          {
            p_24 = ATgetArgument(y_28, 0);
            q_24 = ATgetArgument(y_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_24), i_24), (ATerm) ATinsert(CheckATermList(q_24), n_24));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm z_28 = t;
  if((PushChoice() == 0))
    {
      ATerm h_26 = NULL,k_26 = NULL,q_26 = NULL,e_5 = NULL;
      q_26 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_26);
      h_26 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_26);
      e_5 = t;
      t = SSLsetAnnotations(e_5, h_26);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_28;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_28;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_26 = ATgetFirst((ATermList) t);
      s_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_26, s_26);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,x_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      if(match_cons(a_29, sym__2))
        {
          t_26 = ATgetArgument(a_29, 0);
          u_26 = ATgetArgument(a_29, 1);
        }
      else
        _fail(t);
      {
        ATerm b_29 = ATgetArgument(t, 1);
        if(match_cons(b_29, sym__2))
          {
            v_26 = ATgetArgument(b_29, 0);
            x_26 = ATgetArgument(b_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_26), t_26), (ATerm) ATinsert(CheckATermList(x_26), u_26));
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_28;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_26 = NULL,i_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_26 = ATgetFirst((ATermList) t);
      i_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_26, i_27);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,n_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_29 = ATgetArgument(t, 0);
      if(match_cons(c_29, sym__2))
        {
          j_27 = ATgetArgument(c_29, 0);
          k_27 = ATgetArgument(c_29, 1);
        }
      else
        _fail(t);
      {
        ATerm d_29 = ATgetArgument(t, 1);
        if(match_cons(d_29, sym__2))
          {
            l_27 = ATgetArgument(d_29, 0);
            n_27 = ATgetArgument(d_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_27), j_27), (ATerm) ATinsert(CheckATermList(n_27), k_27));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_55 = ATgetArgument(t, 0);
      g_55 = ATgetArgument(t, 1);
      d_55 = ATgetArgument(t, 2);
      {
        ATerm l_22 = NULL,p_22 = NULL,s_22 = NULL,t_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,w_4 = NULL;
        t = d_55;
        t = fetch_1_0(g_5, t);
        t = d_55;
        t = genzip_4_0(j_5, k_5, l_5, LiftPrimArg_0_0, t);
        b_23 = t;
        if(match_cons(t, sym__2))
          {
            x_22 = ATgetArgument(t, 0);
            y_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_23);
        t_22 = t;
        t = x_22;
        t = concat_0_0(t);
        z_22 = t;
        t = y_22;
        t = genzip_4_0(m_5, n_5, o_5, _id, t);
        a_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_22, a_23);
        w_4 = t;
        t = SSLsetAnnotations(w_4, t_22);
        if(match_cons(t, sym__2))
          {
            l_22 = ATgetArgument(t, 0);
            {
              ATerm e_29 = ATgetArgument(t, 1);
              if(match_cons(e_29, sym__2))
                {
                  p_22 = ATgetArgument(e_29, 0);
                  s_22 = ATgetArgument(e_29, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, l_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_22), (ATerm) ATmakeAppl(sym_PrimT_3, f_55, g_55, s_22)));
      }
    }
  else
    {
      ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,t_25 = NULL,u_25 = NULL,x_25 = NULL,z_25 = NULL,e_26 = NULL,f_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          f_55 = ATgetArgument(t, 0);
          g_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_55;
      t = fetch_1_0(q_5, t);
      t = g_55;
      t = genzip_4_0(t_5, u_5, w_5, LiftPrimArg_0_0, t);
      e_26 = t;
      if(match_cons(t, sym__2))
        {
          t_25 = ATgetArgument(t, 0);
          u_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_26);
      r_25 = t;
      t = t_25;
      t = concat_0_0(t);
      x_25 = t;
      t = u_25;
      t = genzip_4_0(z_5, a_6, b_6, _id, t);
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_25, z_25);
      f_5 = t;
      t = SSLsetAnnotations(f_5, r_25);
      if(match_cons(t, sym__2))
        {
          o_25 = ATgetArgument(t, 0);
          {
            ATerm f_29 = ATgetArgument(t, 1);
            if(match_cons(f_29, sym__2))
              {
                p_25 = ATgetArgument(f_29, 0);
                q_25 = ATgetArgument(f_29, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, o_25, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_25), (ATerm) ATmakeAppl(sym_PrimT_3, f_55, (ATerm)ATempty, q_25)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t)
{
  static ATerm j_55 (ATerm t)
  {
    ATerm g_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_112(t);
        t = j_55(t);
        LocalPopChoice(j_29);
      }
    else
      {
        t = g_29;
        t = l_112(t);
      }
    return(t);
  }
  t = j_55(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,l_56 = NULL;
  l_56 = t;
  if(match_cons(t, sym_Con_3))
    {
      c_56 = ATgetArgument(t, 0);
      d_56 = ATgetArgument(t, 1);
      e_56 = ATgetArgument(t, 2);
      {
        ATerm f_28 = NULL,p_5 = NULL;
        t = SSLgetAnnotations(l_56);
        f_28 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, c_56, d_56, e_56);
        p_5 = t;
        t = SSLsetAnnotations(p_5, f_28);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = l_56;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm k_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(c_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_29;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  b_58 = t;
  if(match_cons(t, sym_Con_3))
    {
      c_58 = ATgetArgument(t, 0);
      d_58 = ATgetArgument(t, 1);
      a_58 = ATgetArgument(t, 2);
      {
        ATerm s_28 = NULL,r_5 = NULL;
        t = SSLgetAnnotations(b_58);
        s_28 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, c_58, d_58, a_58);
        r_5 = t;
        t = SSLsetAnnotations(r_5, s_28);
      }
    }
  else
    {
      ATerm n_29 = NULL,s_5 = NULL;
      if(match_cons(t, sym_App_2))
        {
          c_58 = ATgetArgument(t, 0);
          d_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_58);
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, c_58, d_58);
      s_5 = t;
      t = SSLsetAnnotations(s_5, n_29);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm l_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_29;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,o_58 = NULL,p_58 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      l_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_58;
  if(match_cons(t, sym_StratRule_3))
    {
      m_58 = ATgetArgument(t, 0);
      o_58 = ATgetArgument(t, 1);
      p_58 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_58), (ATerm) ATmakeAppl(sym_Where_1, p_58)), m_58));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          m_58 = ATgetArgument(t, 0);
          o_58 = ATgetArgument(t, 1);
          p_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_58;
      t = pureterm_0_0(t);
      t = o_58;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, o_58)), (ATerm) ATmakeAppl(sym_Where_1, p_58)), (ATerm) ATmakeAppl(sym_Match_1, m_58)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  static ATerm e_59 (ATerm t)
  {
    ATerm m_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_107(t);
        LocalPopChoice(o_29);
      }
    else
      {
        t = m_29;
        t = SRTS_one(e_59, t);
      }
    return(t);
  }
  t = e_59(t);
  return(t);
}
static ATerm l_10 (ATerm x_73, ATerm y_73, ATerm z_73, ATerm t)
{
  ATerm f_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,c_60 = NULL,a_61 = NULL,b_61 = NULL;
  t = new_0_0(t);
  c_60 = t;
  t = x_73;
  {
    static ATerm g_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm t_29 = ATgetArgument(t, 0);
          if(match_cons(t_29, sym_Var_1))
            {
              if(((j_59 != NULL) && (j_59 != ATgetArgument(t_29, 0))))
                _fail(ATgetArgument(t_29, 0));
              else
                j_59 = ATgetArgument(t_29, 0);
            }
          else
            _fail(t);
          if(((h_59 != NULL) && (h_59 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_59 = ATgetArgument(t, 1);
          {
            ATerm w_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_59);
      return(t);
    }
    t = oncetd_1_0(g_6, t);
  }
  a_61 = t;
  t = y_73;
  {
    static ATerm i_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm x_29 = ATgetArgument(t, 0);
          if(match_cons(x_29, sym_Var_1))
            {
              if(((j_59 != NULL) && (j_59 != ATgetArgument(x_29, 0))))
                _fail(ATgetArgument(x_29, 0));
              else
                j_59 = ATgetArgument(x_29, 0);
            }
          else
            _fail(t);
          if(((i_59 != NULL) && (i_59 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_59 = ATgetArgument(t, 1);
          {
            ATerm y_29 = ATgetArgument(t, 2);
            if(match_cons(y_29, sym_CallT_3))
              {
                if(((f_59 != NULL) && (f_59 != ATgetArgument(y_29, 0))))
                  _fail(ATgetArgument(y_29, 0));
                else
                  f_59 = ATgetArgument(y_29, 0);
                {
                  ATerm z_29 = ATgetArgument(y_29, 1);
                  if(((ATgetType(z_29) != AT_LIST) || !(ATisEmpty(z_29))))
                    _fail(t);
                }
                {
                  ATerm a_30 = ATgetArgument(y_29, 2);
                  if(((ATgetType(a_30) != AT_LIST) || !(ATisEmpty(a_30))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_60);
      return(t);
    }
    t = oncetd_1_0(i_6, t);
  }
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_60), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, a_61, b_61, (ATerm) ATmakeAppl(sym_Seq_2, z_73, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(f_59), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_59), not_null(i_59), term_g_25))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_59)), (ATerm) ATmakeAppl(sym_Var_1, c_60))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_30 = t;
      int l_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_61 = NULL,s_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,z_61 = NULL;
          w_61 = t;
          if(match_cons(t, sym_SRule_1))
            {
              x_61 = ATgetArgument(t, 0);
              t = x_61;
              if(match_cons(t, sym_Rule_3))
                {
                  r_61 = ATgetArgument(t, 0);
                  s_61 = ATgetArgument(t, 1);
                  v_61 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_61;
              t = l_10(r_61, s_61, v_61, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm k_30 = NULL,t_30 = NULL,v_5 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  x_61 = ATgetArgument(t, 0);
                  z_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_61);
              k_30 = t;
              t = z_61;
              t = desugarRule_0_0(t);
              t_30 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, x_61, t_30);
              v_5 = t;
              t = SSLsetAnnotations(v_5, k_30);
            }
          LocalPopChoice(l_30);
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
      t = g_30;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  static ATerm k_6 (ATerm t)
  {
    t = topdown_1_0(p_106, t);
    return(t);
  }
  t = p_106(t);
  t = SRTS_all(k_6, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm s_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(u_30);
    }
  else
    {
      t = s_30;
    }
  t = repeat_2_0(m_6, _id, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm x_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_63 = NULL,k_63 = NULL,q_63 = NULL,t_63 = NULL;
            i_63 = t;
            if(match_cons(t, sym_CallT_3))
              {
                k_63 = ATgetArgument(t, 0);
                q_63 = ATgetArgument(t, 1);
                t_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = i_63;
            t = h_10(k_63, q_63, t_63, t);
            LocalPopChoice(z_30);
          }
        else
          {
            t = x_30;
            {
              ATerm b_31 = t;
              int d_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(d_31);
                }
              else
                {
                  t = b_31;
                  {
                    ATerm e_31 = t;
                    int f_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(f_31);
                      }
                    else
                      {
                        t = e_31;
                        {
                          ATerm i_31 = t;
                          int k_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_31 = t;
                              int m_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_64 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_64;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      k_64 = ATgetArgument(t, 0);
                                      t = k_64;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          k_64 = ATgetArgument(t, 0);
                                          l_64 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, k_64, l_64);
                                    }
                                  LocalPopChoice(m_31);
                                }
                              else
                                {
                                  t = l_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(k_31);
                            }
                          else
                            {
                              t = i_31;
                              {
                                ATerm n_31 = t;
                                int o_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(o_31);
                                  }
                                else
                                  {
                                    t = n_31;
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
  t = topdown_1_0(l_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL;
  r_65 = t;
  t = SSL_explode_term(r_65);
  if(match_cons(t, sym__2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_31 = ATgetArgument(t, 1);
        if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
          {
            q_65 = ATgetFirst((ATermList) q_31);
            {
              ATerm r_31 = (ATerm) ATgetNext((ATermList) q_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_65;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,j_31 = NULL;
  j_31 = t;
  t = SSL_explode_term(j_31);
  if(match_cons(t, sym__2))
    {
      ATerm t_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_31 = ATgetArgument(t, 1);
        if(((ATgetType(u_31) == AT_LIST) && !(ATisEmpty(u_31))))
          {
            ATerm v_31 = ATgetFirst((ATermList) u_31);
            g_31 = (ATerm) ATgetNext((ATermList) u_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_x_20;
  h_31 = t;
  t = SSL_mkterm(h_31, g_31);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL;
  static ATerm u_65 (ATerm t)
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
        k_65 = t;
        t = map_1_0(n_6, t);
        t = r_110(t);
        l_65 = t;
        t = k_65;
        t = map_1_0(o_6, t);
        t = u_65(t);
        m_65 = t;
        t = (ATerm) ATinsert(CheckATermList(m_65), l_65);
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = map_1_0(q_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = u_65(t);
  j_65 = t;
  t = term_x_20;
  i_65 = t;
  t = SSL_mkterm(i_65, j_65);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm v_65 = NULL;
  v_65 = t;
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
        t = v_65;
        t = new_0_0(t);
        x_65 = t;
        t = new_0_0(t);
        y_65 = t;
        t = new_0_0(t);
        z_65 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_65), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, v_65), (ATerm) ATmakeAppl(sym_Var_1, y_65))), (ATerm) ATmakeAppl(sym_Var_1, z_65)), (ATerm)ATmakeAppl(sym_VarDec_2, x_65, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_32), term_e_32)), y_65, (ATerm)ATmakeAppl(sym_Var_1, y_65), z_65, (ATerm) ATmakeAppl(sym_Var_1, z_65));
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        {
          ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
          t = v_65;
          t = new_0_0(t);
          b_66 = t;
          t = new_0_0(t);
          c_66 = t;
          t = new_0_0(t);
          d_66 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_66), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, v_65), (ATerm) ATmakeAppl(sym_Var_1, c_66))), (ATerm) ATmakeAppl(sym_Var_1, d_66)), (ATerm)ATmakeAppl(sym_VarDec_2, b_66, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_32), term_e_32)), c_66, (ATerm)ATmakeAppl(sym_Var_1, c_66), d_66, (ATerm) ATmakeAppl(sym_Var_1, d_66));
        }
      }
  }
  return(t);
}
static ATerm m_10 (ATerm e_41, ATerm f_41, ATerm t)
{
  ATerm g_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_41, f_41);
      LocalPopChoice(l_32);
    }
  else
    {
      t = g_32;
      t = SSL_subtr(e_41, f_41);
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  if(match_cons(t, sym__2))
    {
      e_66 = ATgetArgument(t, 0);
      f_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_66, f_66, (ATerm) ATempty);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm g_66 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if(((ATgetType(p_32) != AT_INT) || (ATgetInt((ATermInt) p_32) != 0)))
        _fail(t);
      {
        ATerm q_32 = ATgetArgument(t, 1);
      }
      g_66 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_66;
  return(t);
}
ATerm copy_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  static ATerm v_6 (ATerm t)
  {
    ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL;
    if(match_cons(t, sym__3))
      {
        h_66 = ATgetArgument(t, 0);
        i_66 = ATgetArgument(t, 1);
        j_66 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, h_66, term_y_17);
    t = geq_0_0(t);
    t = term_y_17;
    m_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_66, term_y_17);
    t = m_10(h_66, m_66, t);
    k_66 = t;
    t = i_66;
    t = r_124(t);
    l_66 = t;
    t = (ATerm) ATmakeAppl(sym__3, k_66, i_66, (ATerm) ATinsert(CheckATermList(j_66), l_66));
    return(t);
  }
  t = for_3_0(r_6, u_6, v_6, t);
  return(t);
}
static ATerm n_10 (ATerm r_60, ATerm s_60, ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  t = new_0_0(t);
  n_66 = t;
  t = new_0_0(t);
  o_66 = t;
  t = new_0_0(t);
  p_66 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_66), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_60)), (ATerm) ATmakeAppl(sym_Var_1, o_66))), (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_60)), (ATerm) ATmakeAppl(sym_Var_1, p_66)))), (ATerm)ATmakeAppl(sym_VarDec_2, n_66, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_32), term_e_32)), o_66, (ATerm)ATmakeAppl(sym_Var_1, o_66), p_66, (ATerm) ATmakeAppl(sym_Var_1, p_66));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_66 = ATgetFirst((ATermList) t);
      u_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_66;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_66;
    }
  else
    {
      t = u_66;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm j_71 (ATerm z_67, ATerm a_68, ATerm b_68, ATerm c_68, ATerm t)
{
  ATerm m_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,y_68 = NULL,b_69 = NULL,d_69 = NULL;
  t = term_y_17;
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_68, term_y_17);
  t = r_11(a_68, d_69, t);
  b_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_69, term_t_17);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_68 = ATgetFirst((ATermList) t);
      q_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_68;
  t = last_0_0(t);
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_68), p_68), q_68);
  t = genzip_4_0(w_6, x_6, y_6, a_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      r_68 = ATgetArgument(t, 0);
      s_68 = ATgetArgument(t, 1);
      t_68 = ATgetArgument(t, 2);
      u_68 = ATgetArgument(t, 3);
      v_68 = ATgetArgument(t, 4);
      w_68 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_68), t_68), q_68);
  t = concat_0_0(t);
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, z_67, term_r_32), s_68, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(y_68), p_68), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_68)), (ATerm) ATmakeAppl(sym_Op_2, z_67, u_68))), (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_68)), (ATerm) ATmakeAppl(sym_Op_2, z_67, w_68))), (ATerm) ATmakeAppl(sym_Seqs_1, r_68)))));
  return(t);
}
static ATerm k_71 (ATerm z_69, ATerm a_70, ATerm b_70, ATerm e_70, ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,m_70 = NULL,n_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL;
  t = e_70;
  t = new_0_0(t);
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_70, (ATerm) ATmakeAppl(sym_Var_1, j_70));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      k_70 = ATgetArgument(t, 0);
      m_70 = ATgetArgument(t, 1);
      n_70 = ATgetArgument(t, 2);
      t_70 = ATgetArgument(t, 3);
      u_70 = ATgetArgument(t, 4);
      v_70 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_70, u_70);
  t = conc_0_0(t);
  w_70 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, z_69, term_u_32), m_70, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(w_70), j_70), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_70)), (ATerm) ATmakeAppl(sym_Op_2, z_69, t_70))), (ATerm)ATmakeAppl(sym_Op_2, z_69, v_70), (ATerm) ATmakeAppl(sym_Seqs_1, k_70)))));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_32 = ATgetArgument(t, 0);
      ATerm w_32 = ATgetArgument(t, 1);
      if(((ATgetType(w_32) != AT_LIST) || !(ATisEmpty(w_32))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,l_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_32 = ATgetArgument(t, 0);
      if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
        {
          h_69 = ATgetFirst((ATermList) x_32);
          i_69 = (ATerm) ATgetNext((ATermList) x_32);
        }
      else
        _fail(t);
      {
        ATerm y_32 = ATgetArgument(t, 1);
        if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
          {
            j_69 = ATgetFirst((ATermList) y_32);
            l_69 = (ATerm) ATgetNext((ATermList) y_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_69, j_69), (ATerm) ATmakeAppl(sym__2, i_69, l_69));
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm m_69 = NULL,p_69 = NULL;
  if(match_cons(t, sym__2))
    {
      m_69 = ATgetArgument(t, 0);
      p_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_69), m_69);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL;
  if(match_cons(t, sym__2))
    {
      r_69 = ATgetArgument(t, 0);
      s_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(r_69, s_69, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL;
  a_71 = t;
  if(match_cons(t, sym__3))
    {
      b_71 = ATgetArgument(t, 0);
      c_71 = ATgetArgument(t, 1);
      d_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_71;
  if(match_string(t, "T"))
    {
      t = d_71;
      if(match_cons(t, sym__2))
        {
          e_71 = ATgetArgument(t, 0);
          f_71 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_71;
      if(match_int(t, 0))
        {
          ATerm z_32 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_71(b_71, e_71, f_71, a_71, t);
              LocalPopChoice(b_33);
            }
          else
            {
              t = z_32;
              {
                ATerm h_71 = NULL;
                t = a_71;
                t = new_0_0(t);
                h_71 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, b_71, term_r_32), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_71), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_71)), (ATerm) ATmakeAppl(sym_Op_2, b_71, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_71)), (ATerm) ATmakeAppl(sym_Op_2, b_71, (ATerm) ATempty))), term_g_25))));
              }
            }
        }
      else
        {
          t = j_71(b_71, e_71, f_71, a_71, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = d_71;
      if(match_cons(t, sym__2))
        {
          e_71 = ATgetArgument(t, 0);
          f_71 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_71(b_71, e_71, f_71, a_71, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_119 (ATerm), ATerm t)
{
  ATerm s_16 = NULL;
  static ATerm b_7 (ATerm t)
  {
    t = j_119(t);
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    return(t);
  }
  t = fetch_1_0(b_7, t);
  t = not_null(s_16);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t = term_u_17;
  u_16 = t;
  t = (ATerm) ATinsert(ATempty, term_c_33);
  v_16 = t;
  t = SSL_printnl(u_16, v_16);
  t = term_y_17;
  t_16 = t;
  t = SSL_exit(t_16);
  t = (ATerm) ATinsert(ATempty, term_c_33);
  return(t);
}
ATerm debug_1_0 (ATerm x_113 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  w_16 = t;
  t = x_113(t);
  x_16 = t;
  t = term_u_17;
  y_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_16), x_16);
  z_16 = t;
  t = SSL_printnl(y_16, z_16);
  t = w_16;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_d_33;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm i_33 = ATgetArgument(t, 0);
          j_13 = ATgetArgument(t, 1);
          k_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(f_33);
      t = k_13;
      t = foldr_3_0(k_7, l_7, n_7, t);
      t = j_13;
      t = foldr_3_0(p_7, q_7, v_7, t);
    }
  else
    {
      t = e_33;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm k_33 = ATgetArgument(t, 0);
          j_13 = ATgetArgument(t, 1);
          k_13 = ATgetArgument(t, 2);
          {
            ATerm l_33 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_13;
      t = foldr_3_0(w_7, x_7, y_7, t);
      t = j_13;
      t = foldr_3_0(a_8, e_8, g_8, t);
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(y_13, z_13, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm c_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(c_14, i_14, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(m_14, n_14, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(p_14, q_14, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm m_33 = ATgetArgument(t, 0);
      ATerm n_33 = ATgetArgument(t, 1);
      ATerm o_33 = ATgetArgument(t, 2);
      ATerm q_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17 = NULL;
      static ATerm c_7 (ATerm t)
      {
        ATerm o_17 = NULL,p_17 = NULL;
        o_17 = t;
        {
          ATerm t_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  p_17 = ATgetArgument(t, 0);
                  {
                    ATerm a_34 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm b_34 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_33);
              t = p_17;
              if(((n_17 != NULL) && (n_17 != t)))
                _fail(t);
              else
                n_17 = t;
              t = o_17;
            }
          else
            {
              t = t_33;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  p_17 = ATgetArgument(t, 0);
                  {
                    ATerm c_34 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm d_34 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm e_34 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = p_17;
              if(((n_17 != NULL) && (n_17 != t)))
                _fail(t);
              else
                n_17 = t;
              t = o_17;
            }
        }
        return(t);
      }
      t = fetch_1_0(c_7, t);
      {
        static ATerm e_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((n_17 != NULL) && (n_17 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_17 = ATgetArgument(t, 0);
              {
                ATerm f_34 = ATgetArgument(t, 1);
              }
              {
                ATerm g_34 = ATgetArgument(t, 2);
              }
              {
                ATerm h_34 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_7, t);
      }
      t = not_null(n_17);
      t = debug_1_0(f_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm c_20 = NULL;
        c_20 = t;
        t = map_1_0(i_7, t);
        t = c_20;
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(h_8, t);
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
              {
                ATerm t_14 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_14 = ATgetFirst((ATermList) t);
                    {
                      ATerm k_34 = (ATerm) ATgetNext((ATermList) t);
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
static ATerm l_8 (ATerm t)
{
  t = term_i_28;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm f_20 = NULL,k_20 = NULL,y_14 = NULL;
  f_20 = t;
  t = SSL_explode_term(f_20);
  if(match_cons(t, sym__2))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_34 = ATgetArgument(t, 1);
        if(((ATgetType(m_34) == AT_LIST) && !(ATisEmpty(m_34))))
          {
            k_20 = ATgetFirst((ATermList) m_34);
            {
              ATerm o_34 = (ATerm) ATgetNext((ATermList) m_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(f_20);
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_34 = ATgetArgument(t, 1);
        if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
          {
            ATerm s_34 = ATgetFirst((ATermList) r_34);
            ATerm v_34 = (ATerm) ATgetNext((ATermList) r_34);
            if(((ATgetType(v_34) == AT_LIST) && !(ATisEmpty(v_34))))
              {
                y_14 = ATgetFirst((ATermList) v_34);
                {
                  ATerm w_34 = (ATerm) ATgetNext((ATermList) v_34);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, k_20, y_14);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(l_8, p_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm h_108 (ATerm), ATerm t)
{
  static ATerm l_20 (ATerm t)
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_108(t);
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = SRTS_all(l_20, t);
      }
    return(t);
  }
  t = l_20(t);
  return(t);
}
static ATerm z_9 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  n_20 = t;
  {
    ATerm z_34 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_43, w_43);
        t = v_11(v_43, w_43, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_35 = ATgetFirst((ATermList) t);
            m_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_35);
        {
          ATerm o_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_43, w_43, m_20);
          t = lookup_table_0_1(v_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_11(w_43, m_20, o_20, t);
          t = (ATerm) ATmakeAppl(sym__3, v_43, w_43, m_20);
        }
      }
    else
      {
        t = z_34;
        {
          ATerm s_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_43, w_43);
          t = lookup_table_0_1(v_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(w_43, s_20, t);
          t = (ATerm) ATmakeAppl(sym__2, v_43, w_43);
        }
      }
  }
  t = n_20;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
  b_21 = t;
  t = f_118(t);
  a_21 = t;
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_21 = NULL;
        t = term_j_35;
        f_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_21, term_j_35);
        t = v_11(a_21, f_21, t);
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_20 = ATgetFirst((ATermList) t);
      u_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_21, term_j_35, u_20);
  t = lookup_table_0_1(a_21, t);
  e_21 = t;
  t = term_j_35;
  c_21 = t;
  t = e_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(c_21, u_20, d_21, t);
  t = v_20;
  {
    static ATerm r_8 (ATerm t)
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_21, i_21);
      t = z_9(a_21, i_21, t);
      return(t);
    }
    t = map_1_0(r_8, t);
  }
  t = b_21;
  return(t);
}
ATerm restore_always_2_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_109(t);
      t = x_109(t);
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = x_109(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,r_21 = NULL,t_21 = NULL;
  l_21 = t;
  t = e_118(t);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_21, term_j_35);
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_35 = ATgetArgument(t, 0);
            ATerm q_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_35;
        d_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_21, term_j_35);
        t = v_11(k_21, d_22, t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = (ATerm) ATempty;
      }
  }
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_21, term_j_35, (ATerm) ATinsert(CheckATermList(m_21), (ATerm) ATempty));
  t = lookup_table_0_1(k_21, t);
  t_21 = t;
  t = term_j_35;
  n_21 = t;
  t = (ATerm) ATinsert(CheckATermList(m_21), (ATerm) ATempty);
  o_21 = t;
  t = t_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(n_21, o_21, r_21, t);
  t = l_21;
  return(t);
}
ATerm scope_2_0 (ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm t)
{
  static ATerm s_8 (ATerm t)
  {
    t = end_scope_1_0(g_118, t);
    return(t);
  }
  t = begin_scope_1_0(g_118, t);
  t = restore_always_2_0(h_118, s_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,q_22 = NULL;
  j_22 = t;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_22 = ATgetFirst((ATermList) t);
      q_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_22;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_22;
            if((m_22 != t))
              {
                _fail(t);
              }
            t = i_22;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            t = (ATerm) ATmakeAppl(sym__2, m_22, q_22);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_22, q_22);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      if(((ATgetType(t_35) != AT_LIST) || !(ATisEmpty(t_35))))
        _fail(t);
      {
        ATerm u_35 = ATgetArgument(t, 1);
        if(((ATgetType(u_35) != AT_LIST) || !(ATisEmpty(u_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,h_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
        {
          c_24 = ATgetFirst((ATermList) v_35);
          d_24 = (ATerm) ATgetNext((ATermList) v_35);
        }
      else
        _fail(t);
      {
        ATerm w_35 = ATgetArgument(t, 1);
        if(((ATgetType(w_35) == AT_LIST) && !(ATisEmpty(w_35))))
          {
            e_24 = ATgetFirst((ATermList) w_35);
            h_24 = (ATerm) ATgetNext((ATermList) w_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_24, e_24), (ATerm) ATmakeAppl(sym__2, d_24, h_24));
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_24), j_24);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  s_23 = t;
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_35 = ATgetArgument(t, 0);
            ATerm a_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(y_35);
        t = s_23;
      }
    else
      {
        t = x_35;
        {
          ATerm b_24 = NULL;
          if(match_cons(t, sym__3))
            {
              t_23 = ATgetArgument(t, 0);
              u_23 = ATgetArgument(t, 1);
              v_23 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_23, u_23);
          t = genzip_4_0(t_8, v_8, w_8, _id, t);
          b_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_24, v_23);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,o_24 = NULL;
  static ATerm x_8 (ATerm t)
  {
    ATerm d_15 = NULL;
    t = y_105(t);
    d_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_15, not_null(o_24));
    t = lookup_0_0(t);
    t = z_105(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((o_24 != NULL) && (o_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_24;
  t = alltd_1_0(x_8, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm w_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_24 = ATgetArgument(t, 0);
      {
        ATerm c_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_24;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm x_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_24;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_d_36;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(((ATgetType(e_36) != AT_LIST) || !(ATisEmpty(e_36))))
        _fail(t);
      {
        ATerm f_36 = ATgetArgument(t, 1);
        if(((ATgetType(f_36) != AT_LIST) || !(ATisEmpty(f_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm z_24 = NULL,e_25 = NULL,j_25 = NULL,k_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
        {
          z_24 = ATgetFirst((ATermList) i_36);
          e_25 = (ATerm) ATgetNext((ATermList) i_36);
        }
      else
        _fail(t);
      {
        ATerm m_36 = ATgetArgument(t, 1);
        if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
          {
            j_25 = ATgetFirst((ATermList) m_36);
            k_25 = (ATerm) ATgetNext((ATermList) m_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_24, j_25), (ATerm) ATmakeAppl(sym__2, e_25, k_25));
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_25), l_25);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm n_25 = NULL,s_25 = NULL,v_25 = NULL,w_25 = NULL,y_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      if(match_cons(n_36, sym_VarDec_2))
        {
          n_25 = ATgetArgument(n_36, 0);
          {
            ATerm o_36 = ATgetArgument(n_36, 1);
          }
        }
      else
        _fail(t);
      s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, n_25);
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_36, s_25);
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, n_25), (ATerm) ATmakeAppl(sym_Defined_2, term_p_36, s_25));
  t = d_11(i_9, w_25, y_25, t);
  t = v_25;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_d_36;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,k_15 = NULL;
  c_26 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_d_36;
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_36, c_26);
  t = h_11(k_15, c_26, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_36) != ATmakeSymbol("q_0", 0, ATtrue)))
        _fail(t);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_26;
  return(t);
}
static ATerm d_10 (ATerm r_62, ATerm s_62, ATerm w_62, ATerm t_62, ATerm v_62, ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  t = t_62;
  t = map_1_0(z_8, t);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_24, s_62, v_62);
  t = substitute_2_0(a_9, _id, t);
  t_24 = t;
  {
    static ATerm c_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, w_62, r_62);
      t = genzip_4_0(d_9, e_9, f_9, h_9, t);
      t = t_24;
      t = alltd_1_0(j_9, t);
      if(((u_24 != NULL) && (u_24 != t)))
        _fail(t);
      else
        u_24 = t;
      return(t);
    }
    t = scope_2_0(b_9, c_9, t);
  }
  t = not_null(u_24);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,x_5 = NULL;
  e_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_27 = ATgetArgument(t, 0);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_27);
  a_27 = t;
  t = b_27;
  t = new_0_0(t);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_27, c_27);
  x_5 = t;
  t = SSLsetAnnotations(x_5, a_27);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,m_27 = NULL,q_27 = NULL,y_5 = NULL;
  q_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  f_27 = t;
  t = g_27;
  t = new_0_0(t);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_27, h_27);
  y_5 = t;
  t = SSLsetAnnotations(y_5, f_27);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm r_27 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_27 = ATgetArgument(t, 0);
      {
        ATerm u_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, r_27);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm v_27 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_27 = ATgetArgument(t, 0);
      {
        ATerm v_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, v_27);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,w_26 = NULL;
  m_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_36 = ATgetFirst((ATermList) t);
      if(match_cons(w_36, sym_SDefT_4))
        {
          f_26 = ATgetArgument(w_36, 0);
          g_26 = ATgetArgument(w_36, 1);
          i_26 = ATgetArgument(w_36, 2);
          {
            ATerm d_37 = ATgetArgument(w_36, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm x_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_26;
  t = map_1_0(k_9, t);
  j_26 = t;
  t = i_26;
  t = map_1_0(o_9, t);
  l_26 = t;
  t = j_26;
  t = map_1_0(s_9, t);
  n_26 = t;
  t = l_26;
  t = map_1_0(t_9, t);
  o_26 = t;
  t = m_26;
  {
    static ATerm u_9 (ATerm t)
    {
      ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm g_37 = ATgetArgument(t, 0);
          w_27 = ATgetArgument(t, 1);
          x_27 = ATgetArgument(t, 2);
          y_27 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_10(n_26, o_26, w_27, x_27, y_27, t);
      return(t);
    }
    t = map_1_0(u_9, t);
  }
  t = choices_0_0(t);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_26, j_26, l_26, w_26);
  return(t);
}
static ATerm r_73 (ATerm b_72, ATerm c_72, ATerm d_72, ATerm f_72, ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,f_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_72, c_72);
  t = Definitions_0_0(t);
  l_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_72, d_72);
  o_72 = t;
  if(match_cons(t, sym__2))
    {
      ATerm i_37 = ATgetArgument(t, 0);
      ATerm j_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_72);
  m_72 = t;
  t = l_72;
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_72 = NULL,r_72 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_72 = ATgetFirst((ATermList) t);
            r_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_72;
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        {
          ATerm q_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(r_37);
            }
          else
            {
              t = q_37;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  n_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_72, d_72);
  f_6 = t;
  t = SSLsetAnnotations(f_6, m_72);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,y_72 = NULL,a_73 = NULL,b_73 = NULL;
  v_72 = t;
  if(match_cons(t, sym__2))
    {
      w_72 = ATgetArgument(t, 0);
      b_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_72;
  if(match_cons(t, sym__2))
    {
      y_72 = ATgetArgument(t, 0);
      a_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_72;
  if(match_cons(t, sym_Mod_2))
    {
      t_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
      {
        ATerm s_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_73 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, t_72, u_72, a_73);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            q_73 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_73, b_73);
            LocalPopChoice(v_37);
          }
        else
          {
            t = s_37;
            t = r_73(y_72, a_73, b_73, v_72, t);
          }
      }
    }
  else
    {
      t = r_73(y_72, a_73, b_73, v_72, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_119 (ATerm), ATerm t)
{
  static ATerm x_75 (ATerm t)
  {
    ATerm x_74 = NULL,v_75 = NULL,w_75 = NULL;
    w_75 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_74 = ATgetFirst((ATermList) t);
        v_75 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_31 = NULL,z_31 = NULL,j_6 = NULL;
          t = SSLgetAnnotations(w_75);
          s_31 = t;
          t = v_75;
          t = x_75(t);
          z_31 = t;
          t = (ATerm) ATinsert(CheckATermList(z_31), x_74);
          j_6 = t;
          t = SSLsetAnnotations(j_6, s_31);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_75;
        t = o_119(t);
      }
    return(t);
  }
  t = x_75(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t_73 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_73;
    }
  else
    {
      static ATerm v_9 (ATerm t)
      {
        t = not_null(v_73);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_73 = ATgetFirst((ATermList) t);
          if(((v_73 != NULL) && (v_73 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_73;
      t = at_end_1_0(v_9, t);
    }
  return(t);
}
static ATerm n_77 (ATerm c_76, ATerm t)
{
  ATerm d_76 = NULL;
  t = SSL_explode_term(c_76);
  if(match_cons(t, sym__2))
    {
      ATerm c_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_76;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_76 = NULL,k_76 = NULL,l_76 = NULL;
  l_76 = t;
  if(match_cons(t, sym__2))
    {
      f_76 = ATgetArgument(t, 0);
      k_76 = ATgetArgument(t, 1);
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_9 (ATerm t)
            {
              t = k_76;
              return(t);
            }
            t = f_76;
            t = at_end_1_0(w_9, t);
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            t = n_77(l_76, t);
          }
      }
    }
  else
    {
      t = n_77(l_76, t);
    }
  return(t);
}
static ATerm t_10 (ATerm b_121 (ATerm), ATerm e_49, ATerm d_49, ATerm t)
{
  static ATerm z_80 (ATerm t)
  {
    ATerm r_79 = NULL,a_80 = NULL,d_80 = NULL;
    r_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_79;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_80 = ATgetFirst((ATermList) t);
            d_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_38 = t;
          int l_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_79;
              {
                static ATerm x_9 (ATerm t)
                {
                  t = d_49;
                  return(t);
                }
                t = e_11(b_121, x_9, a_80, d_80, t);
              }
              t = z_80(t);
              LocalPopChoice(l_38);
            }
          else
            {
              t = h_38;
              {
                ATerm t_32 = NULL,a_33 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(r_79);
                t_32 = t;
                t = d_80;
                t = z_80(t);
                a_33 = t;
                t = (ATerm) ATinsert(CheckATermList(a_33), a_80);
                z_6 = t;
                t = SSLsetAnnotations(z_6, t_32);
              }
            }
        }
      }
    return(t);
  }
  t = e_49;
  t = z_80(t);
  return(t);
}
ATerm genzip_4_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm t)
{
  static ATerm e_83 (ATerm t)
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_111(t);
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        {
          ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,d_7 = NULL;
          t = c_111(t);
          t_82 = t;
          if(match_cons(t, sym__2))
            {
              c_81 = ATgetArgument(t, 0);
              d_81 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_82);
          b_81 = t;
          t = c_81;
          t = e_111(t);
          r_82 = t;
          t = d_81;
          t = e_83(t);
          s_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_82, s_82);
          d_7 = t;
          t = SSLsetAnnotations(d_7, b_81);
          t = d_111(t);
        }
      }
    return(t);
  }
  t = e_83(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_38 = ATgetArgument(t, 0);
      if(((ATgetType(p_38) != AT_LIST) || !(ATisEmpty(p_38))))
        _fail(t);
      {
        ATerm u_38 = ATgetArgument(t, 1);
        if(((ATgetType(u_38) != AT_LIST) || !(ATisEmpty(u_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
        {
          y_83 = ATgetFirst((ATermList) w_38);
          z_83 = (ATerm) ATgetNext((ATermList) w_38);
        }
      else
        _fail(t);
      {
        ATerm x_38 = ATgetArgument(t, 1);
        if(((ATgetType(x_38) == AT_LIST) && !(ATisEmpty(x_38))))
          {
            a_84 = ATgetFirst((ATermList) x_38);
            b_84 = (ATerm) ATgetNext((ATermList) x_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_83, a_84), (ATerm) ATmakeAppl(sym__2, z_83, b_84));
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL;
  if(match_cons(t, sym__2))
    {
      c_84 = ATgetArgument(t, 0);
      d_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_84), c_84);
  return(t);
}
static ATerm y_10 (ATerm z_731, ATerm e_732, ATerm o_71, ATerm t)
{
  ATerm g_83 = NULL,m_83 = NULL,p_83 = NULL,r_83 = NULL;
  t = SSL_explode_term(e_732);
  if(match_cons(t, sym__2))
    {
      g_83 = ATgetArgument(t, 0);
      p_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_731);
  if(match_cons(t, sym__2))
    {
      if((g_83 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_83, p_83);
  t = genzip_4_0(a_10, b_10, c_10, _id, t);
  r_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_83, o_71);
  t = conc_0_0(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm p_84 = NULL;
  p_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_84);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,u_84 = NULL,v_84 = NULL,g_7 = NULL;
  v_84 = t;
  if(match_cons(t, sym__2))
    {
      r_84 = ATgetArgument(t, 0);
      u_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_84);
  q_84 = t;
  t = u_84;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_84, u_84);
  g_7 = t;
  t = SSLsetAnnotations(g_7, q_84);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,x_85 = NULL,y_85 = NULL;
  t_85 = t;
  if(match_cons(t, sym__2))
    {
      u_85 = ATgetArgument(t, 0);
      v_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_85 = ATgetFirst((ATermList) t);
      y_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_86(u_85, v_85, t_85, t);
            LocalPopChoice(a_39);
          }
        else
          {
            t = y_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_85), x_85), y_85);
          }
      }
    }
  else
    {
      t = t_86(u_85, v_85, t_85, t);
    }
  return(t);
}
static ATerm t_86 (ATerm w_84, ATerm x_84, ATerm a_85, ATerm t)
{
  ATerm b_85 = NULL,g_85 = NULL,h_7 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL;
  t = SSLgetAnnotations(a_85);
  b_85 = t;
  t = x_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_85 = ATgetFirst((ATermList) t);
      n_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_85;
  if(match_cons(t, sym__2))
    {
      l_85 = ATgetArgument(t, 0);
      m_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_85;
        if((l_85 != t))
          {
            _fail(t);
          }
        t = n_85;
        LocalPopChoice(d_39);
      }
    else
      {
        t = b_39;
        t = x_84;
        t = y_10(l_85, m_85, n_85, t);
      }
  }
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_84, g_85);
  h_7 = t;
  t = SSLsetAnnotations(h_7, b_85);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm r_86 = NULL;
  if(match_cons(t, sym__2))
    {
      r_86 = ATgetArgument(t, 0);
      if((r_86 != ATgetArgument(t, 1)))
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
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_10, g_10, i_10, t);
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      {
        ATerm f_86 = NULL,h_86 = NULL,k_86 = NULL;
        f_86 = t;
        if(match_cons(t, sym__2))
          {
            h_86 = ATgetArgument(t, 0);
            k_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_86;
        t = t_10(o_10, h_86, k_86, t);
      }
    }
  return(t);
}
static ATerm a_11 (ATerm b_139 (ATerm), ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm f_73, ATerm c_73, ATerm k_73, ATerm g_73, ATerm d_73, ATerm e_73, ATerm t)
{
  ATerm u_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,e_87 = NULL,f_87 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_73, g_73);
  t = b_139(t);
  if(match_cons(t, sym__2))
    {
      y_86 = ATgetArgument(t, 0);
      u_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_86;
  t = c_139(t);
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_86, k_73);
  t = diff_0_0(t);
  a_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_87, c_73);
  t = conc_0_0(t);
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_87, k_73);
  t = conc_0_0(t);
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_73, y_86, d_73);
  t = d_139(t);
  f_87 = t;
  t = (ATerm) ATmakeAppl(sym__5, b_87, e_87, u_86, f_87, e_73);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm b_139 (ATerm), ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm t)
{
  ATerm j_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,p_87 = NULL,s_87 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
        {
          j_87 = ATgetFirst((ATermList) g_39);
          l_87 = (ATerm) ATgetNext((ATermList) g_39);
        }
      else
        _fail(t);
      m_87 = ATgetArgument(t, 1);
      n_87 = ATgetArgument(t, 2);
      p_87 = ATgetArgument(t, 3);
      s_87 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = a_11(b_139, c_139, d_139, j_87, l_87, m_87, n_87, p_87, s_87, t);
  return(t);
}
ATerm while_not_2_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm t)
{
  static ATerm t_87 (ATerm t)
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_113(t);
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = c_113(t);
        t = t_87(t);
      }
    return(t);
  }
  t = t_87(t);
  return(t);
}
ATerm for_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t)
{
  t = e_113(t);
  t = while_not_2_0(f_113, g_113, t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
  if(match_cons(t, sym__3))
    {
      d_88 = ATgetArgument(t, 0);
      e_88 = ATgetArgument(t, 1);
      f_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, d_88, d_88, e_88, f_88, (ATerm) ATempty);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm i_88 = NULL,l_88 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      if(((ATgetType(j_39) != AT_LIST) || !(ATisEmpty(j_39))))
        _fail(t);
      {
        ATerm k_39 = ATgetArgument(t, 1);
      }
      {
        ATerm l_39 = ATgetArgument(t, 2);
      }
      i_88 = ATgetArgument(t, 3);
      l_88 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_88, l_88);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, s_10, v_10, t);
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      {
        ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL;
        if(match_cons(t, sym__5))
          {
            t_88 = ATgetArgument(t, 0);
            y_88 = ATgetArgument(t, 1);
            z_88 = ATgetArgument(t, 2);
            a_89 = ATgetArgument(t, 3);
            b_89 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = t_88;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_88 = ATgetFirst((ATermList) t);
            v_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, v_88, y_88, z_88, a_89, (ATerm) ATinsert(CheckATermList(b_89), u_88));
      }
    }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(w_10, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm o_39 = ATgetArgument(t, 0);
      q_88 = ATgetArgument(t, 1);
      r_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_88), q_88);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm p_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(r_39);
    }
  else
    {
      t = p_39;
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,e_35 = NULL,f_35 = NULL;
  c_35 = t;
  if(match_cons(t, sym__2))
    {
      e_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_35;
  if(match_cons(t, sym_Mod_2))
    {
      a_35 = ATgetArgument(t, 0);
      b_35 = ATgetArgument(t, 1);
      {
        ATerm s_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_35;
            t = r_9(a_35, b_35, f_35, t);
            LocalPopChoice(u_39);
          }
        else
          {
            t = s_39;
            t = m_35(e_35, f_35, t);
          }
      }
    }
  else
    {
      t = m_35(e_35, f_35, t);
    }
  return(t);
}
static ATerm m_35 (ATerm n_34, ATerm p_34, ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t = term_u_17;
  t_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_18), p_34), term_u_18), n_34), term_r_18);
  u_34 = t;
  t = SSL_printnl(t_34, u_34);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_18), p_34), term_u_18), n_34), term_r_18);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL;
  t = for_3_0(p_10, q_10, r_10, t);
  j_90 = t;
  if(match_cons(t, sym__2))
    {
      k_90 = ATgetArgument(t, 0);
      n_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_90;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_90;
    }
  else
    {
      ATerm z_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_90 = ATgetFirst((ATermList) t);
          p_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(p_90), o_90);
      t = map_1_0(z_10, t);
      t = term_y_17;
      z_33 = t;
      t = SSL_exit(z_33);
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL;
  if(match_cons(t, sym__2))
    {
      h_91 = ATgetArgument(t, 0);
      i_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(h_91, i_91, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm j_91 = NULL,k_91 = NULL;
  if(match_cons(t, sym__2))
    {
      j_91 = ATgetArgument(t, 0);
      k_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(j_91, k_91, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm l_91 = NULL;
  if(match_cons(t, sym__2))
    {
      l_91 = ATgetArgument(t, 0);
      if((l_91 != ATgetArgument(t, 1)))
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
  t = term_v_39;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL;
  v_90 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      y_90 = ATgetArgument(t, 0);
      t_90 = ATgetArgument(t, 1);
      u_90 = ATgetArgument(t, 2);
      {
        ATerm x_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_91 = t;
  t = t_90;
  t = foldr_3_0(c_11, i_11, g_12, t);
  w_90 = t;
  t = u_90;
  t = foldr_3_0(l_12, m_12, o_12, t);
  x_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_90, (ATerm) ATmakeAppl(sym__2, w_90, x_90));
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        t = (ATerm) ATempty;
      }
  }
  c_91 = t;
  t = y_90;
  {
    ATerm a_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(c_40);
      }
    else
      {
        t = a_40;
        t = (ATerm) ATempty;
      }
  }
  b_91 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_90, x_90));
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_90, x_90)), b_91);
  t = f_11(p_12, g_91, b_91, t);
  z_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_90, (ATerm) ATmakeAppl(sym__2, w_90, x_90));
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_40, (ATerm) ATinsert(CheckATermList(c_91), v_90));
  f_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_90, (ATerm) ATmakeAppl(sym__2, w_90, x_90)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_40, (ATerm) ATinsert(CheckATermList(c_91), v_90)));
  t = d_11(t_12, e_91, f_91, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_40, z_90);
  d_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_90, (ATerm) ATmakeAppl(sym_Defined_2, term_e_40, z_90));
  t = d_11(v_12, y_90, d_91, t);
  t = a_91;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL;
  if(match_cons(t, sym__2))
    {
      c_92 = ATgetArgument(t, 0);
      d_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(c_92, d_92, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL;
  if(match_cons(t, sym__2))
    {
      e_92 = ATgetArgument(t, 0);
      f_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(e_92, f_92, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm g_92 = NULL;
  if(match_cons(t, sym__2))
    {
      g_92 = ATgetArgument(t, 0);
      if((g_92 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL;
  o_91 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      r_91 = ATgetArgument(t, 0);
      m_91 = ATgetArgument(t, 1);
      n_91 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  v_91 = t;
  t = m_91;
  t = foldr_3_0(w_12, x_12, y_12, t);
  p_91 = t;
  t = n_91;
  t = foldr_3_0(z_12, a_13, f_13, t);
  q_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_91, (ATerm) ATmakeAppl(sym__2, p_91, q_91));
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = (ATerm) ATempty;
      }
  }
  x_91 = t;
  t = r_91;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
        t = (ATerm) ATempty;
      }
  }
  w_91 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_91, q_91));
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_91, q_91)), w_91);
  t = f_11(g_13, b_92, w_91, t);
  u_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_91, (ATerm) ATmakeAppl(sym__2, p_91, q_91));
  z_91 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_40, (ATerm) ATinsert(CheckATermList(x_91), o_91));
  a_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_91, (ATerm) ATmakeAppl(sym__2, p_91, q_91)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_40, (ATerm) ATinsert(CheckATermList(x_91), o_91)));
  t = d_11(h_13, z_91, a_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_40, u_91);
  y_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_91, (ATerm) ATmakeAppl(sym_Defined_2, term_k_40, u_91));
  t = d_11(i_13, r_91, y_91, t);
  t = v_91;
  return(t);
}
static ATerm d_11 (ATerm i_118 (ATerm), ATerm m_42, ATerm k_42, ATerm t)
{
  ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL;
  k_92 = t;
  t = i_118(t);
  h_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_92, m_42, k_42);
  t = w_11(h_92, m_42, k_42, t);
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_92 = NULL;
        t = term_j_35;
        p_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_92, term_j_35);
        t = v_11(h_92, p_92, t);
        LocalPopChoice(m_40);
      }
    else
      {
        t = l_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_92 = ATgetFirst((ATermList) t);
      j_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_92, term_j_35, (ATerm) ATinsert(CheckATermList(j_92), (ATerm) ATinsert(CheckATermList(i_92), m_42)));
  t = lookup_table_0_1(h_92, t);
  o_92 = t;
  t = term_j_35;
  l_92 = t;
  t = (ATerm) ATinsert(CheckATermList(j_92), (ATerm) ATinsert(CheckATermList(i_92), m_42));
  m_92 = t;
  t = o_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(l_92, m_92, n_92, t);
  t = k_92;
  return(t);
}
static ATerm e_11 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm k_49, ATerm j_49, ATerm t)
{
  t = k_121(t);
  {
    static ATerm n_13 (ATerm t)
    {
      ATerm q_92 = NULL;
      q_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_49, q_92);
      t = j_121(t);
      return(t);
    }
    t = fetch_1_0(n_13, t);
  }
  t = j_49;
  return(t);
}
static ATerm f_11 (ATerm g_121 (ATerm), ATerm g_49, ATerm f_49, ATerm t)
{
  static ATerm g_93 (ATerm t)
  {
    ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL;
    b_93 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_49;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_93 = ATgetFirst((ATermList) t);
            d_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_40 = t;
          int o_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_93;
              {
                static ATerm t_13 (ATerm t)
                {
                  t = f_49;
                  return(t);
                }
                t = e_11(g_121, t_13, c_93, d_93, t);
              }
              t = g_93(t);
              LocalPopChoice(o_40);
            }
          else
            {
              t = n_40;
              {
                ATerm b_36 = NULL,l_36 = NULL,m_7 = NULL;
                t = SSLgetAnnotations(b_93);
                b_36 = t;
                t = d_93;
                t = g_93(t);
                l_36 = t;
                t = (ATerm) ATinsert(CheckATermList(l_36), c_93);
                m_7 = t;
                t = SSLsetAnnotations(m_7, b_36);
              }
            }
        }
      }
    return(t);
  }
  t = g_49;
  t = g_93(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm u_93 = NULL;
  u_93 = t;
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_38 = NULL,g_38 = NULL;
        t = term_w_39;
        g_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_39, u_93);
        t = h_11(g_38, u_93, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_40) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
            d_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_38;
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
        {
          ATerm t_40 = t;
          int u_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_38 = NULL,v_38 = NULL;
              t = term_w_39;
              v_38 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_39, u_93);
              t = h_11(v_38, u_93, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_40 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_40) != ATmakeSymbol("y_0", 0, ATtrue)))
                    _fail(t);
                  o_38 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_38;
              LocalPopChoice(u_40);
            }
          else
            {
              t = t_40;
              {
                ATerm z_38 = NULL,c_39 = NULL;
                t = term_w_39;
                c_39 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_39, u_93);
                t = h_11(c_39, u_93, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm x_40 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_40) != ATmakeSymbol("u_0", 0, ATtrue)))
                      _fail(t);
                    z_38 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_38;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm h_11 (ATerm b_44, ATerm c_44, ATerm t)
{
  ATerm y_93 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_44, c_44);
  t = v_11(b_44, c_44, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_93 = ATgetFirst((ATermList) t);
      {
        ATerm a_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_93;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm p_94 = NULL,r_94 = NULL;
  p_94 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      r_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_94;
  if(match_cons(t, sym__2))
    {
      ATerm d_41 = ATgetArgument(t, 0);
      ATerm g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_39 = NULL,t_39 = NULL;
        t = term_v_39;
        t_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_39, p_94);
        t = h_11(t_39, p_94, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_41) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            q_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_39;
        LocalPopChoice(i_41);
      }
    else
      {
        t = h_41;
        {
          ATerm k_41 = t;
          int l_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_40 = NULL,p_40 = NULL;
              t = term_v_39;
              p_40 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_39, p_94);
              t = h_11(p_40, p_94, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_41) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  b_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_40;
              LocalPopChoice(l_41);
            }
          else
            {
              t = k_41;
              {
                ATerm w_40 = NULL,c_41 = NULL;
                t = term_v_39;
                c_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_39, p_94);
                t = h_11(c_41, p_94, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm n_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_41) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    w_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_40;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  y_94 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_94;
      t = d_124(t);
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
      t = f_124(t);
      d_95 = t;
      t = a_95;
      t = foldr_3_0(d_124, e_124, f_124, t);
      e_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_95, e_95);
      t = e_124(t);
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm t_95 = NULL,u_95 = NULL;
  if(match_cons(t, sym__2))
    {
      t_95 = ATgetArgument(t, 0);
      u_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(t_95, u_95, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL;
  if(match_cons(t, sym__2))
    {
      v_95 = ATgetArgument(t, 0);
      w_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(v_95, w_95, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm x_95 = NULL;
  if(match_cons(t, sym__2))
    {
      x_95 = ATgetArgument(t, 0);
      if((x_95 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL;
  h_95 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_95 = ATgetArgument(t, 0);
      f_95 = ATgetArgument(t, 1);
      g_95 = ATgetArgument(t, 2);
      {
        ATerm o_41 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  m_95 = t;
  t = f_95;
  t = foldr_3_0(u_13, f_14, g_14, t);
  i_95 = t;
  t = g_95;
  t = foldr_3_0(h_14, j_14, k_14, t);
  j_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_95, (ATerm) ATmakeAppl(sym__2, i_95, j_95));
  {
    ATerm p_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(r_41);
      }
    else
      {
        t = p_41;
        t = (ATerm) ATempty;
      }
  }
  o_95 = t;
  t = k_95;
  {
    ATerm s_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(u_41);
      }
    else
      {
        t = s_41;
        t = (ATerm) ATempty;
      }
  }
  n_95 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_95, j_95));
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_95, j_95)), n_95);
  t = f_11(l_14, s_95, n_95, t);
  l_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_95, (ATerm) ATmakeAppl(sym__2, i_95, j_95));
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_41, (ATerm) ATinsert(CheckATermList(o_95), h_95));
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_95, (ATerm) ATmakeAppl(sym__2, i_95, j_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_41, (ATerm) ATinsert(CheckATermList(o_95), h_95)));
  t = d_11(o_14, q_95, r_95, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_41, l_95);
  p_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_95, (ATerm) ATmakeAppl(sym_Defined_2, term_w_41, l_95));
  t = d_11(r_14, k_95, p_95, t);
  t = m_95;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
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
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm y_95 = NULL;
  t = map_1_0(s_14, t);
  y_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_d_42), y_95, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,o_7 = NULL;
  e_96 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_96 = ATgetFirst((ATermList) t);
      b_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_96);
  z_95 = t;
  t = a_96;
  t = s_91(t);
  c_96 = t;
  t = b_96;
  t = t_91(t);
  d_96 = t;
  t = (ATerm) ATinsert(CheckATermList(d_96), c_96);
  o_7 = t;
  t = SSLsetAnnotations(o_7, z_95);
  return(t);
}
static ATerm j_11 (ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm f_96 = NULL;
  t = SSL_fputc(u_33, v_33);
  f_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_96);
  return(t);
}
static ATerm k_11 (ATerm m_32, ATerm n_32, ATerm t)
{
  ATerm g_96 = NULL;
  t = SSL_write_term_to_stream_text(m_32, n_32);
  g_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_96);
  return(t);
}
static ATerm m_11 (ATerm z_113 (ATerm), ATerm k_250, ATerm s_32, ATerm t)
{
  ATerm h_96 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_250, term_j_42);
  t = q_11(t);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_96, s_32);
  t = z_113(t);
  t = fclose_0_0(t);
  t = s_32;
  return(t);
}
static ATerm l_11 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm i_96 = NULL;
  t = SSL_write_term_to_stream_baf(i_32, j_32);
  i_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_96);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_42 = ATgetArgument(t, 0);
      if(match_cons(l_42, sym_Stream_1))
        {
          h_42 = ATgetArgument(l_42, 0);
        }
      else
        _fail(t);
      i_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(h_42, i_42, t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,d_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_42 = ATgetArgument(t, 0);
      if(match_cons(n_42, sym_Stream_1))
        {
          d_43 = ATgetArgument(n_42, 0);
        }
      else
        _fail(t);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(d_43, f_43, t);
  z_42 = t;
  t = term_v_22;
  a_43 = t;
  t = z_42;
  if(match_cons(t, sym_Stream_1))
    {
      b_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, z_42);
  t = j_11(a_43, b_43, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,w_97 = NULL,x_97 = NULL,s_7 = NULL,r_7 = NULL;
  n_96 = t;
  if(match_cons(t, sym__2))
    {
      u_96 = ATgetArgument(t, 0);
      v_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_96);
  t_96 = t;
  t = u_96;
  {
    ATerm o_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_14 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((m_96 != NULL) && (m_96 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_14, t);
        LocalPopChoice(q_42);
      }
    else
      {
        t = o_42;
        t = term_r_42;
        m_96 = t;
      }
  }
  w_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_96, v_96);
  r_7 = t;
  t = SSLsetAnnotations(r_7, t_96);
  t = n_96;
  if(match_cons(t, sym__2))
    {
      p_96 = ATgetArgument(t, 0);
      q_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_96);
  o_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_96, (ATerm) ATmakeAppl(sym__2, not_null(m_96), q_96));
  s_7 = t;
  t = SSLsetAnnotations(s_7, o_96);
  s_96 = t;
  if(match_cons(t, sym__2))
    {
      w_97 = ATgetArgument(t, 0);
      x_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_41 = NULL,t_41 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,t_7 = NULL;
        t = SSLgetAnnotations(s_96);
        q_41 = t;
        t = w_97;
        t = fetch_1_0(v_14, t);
        t_41 = t;
        t = x_97;
        if(match_cons(t, sym__2))
          {
            f_42 = ATgetArgument(t, 0);
            g_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(w_14, f_42, g_42, t);
        e_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_41, e_42);
        t_7 = t;
        t = SSLsetAnnotations(t_7, q_41);
        LocalPopChoice(t_42);
      }
    else
      {
        t = s_42;
        {
          ATerm p_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,u_7 = NULL;
          t = SSLgetAnnotations(s_96);
          p_42 = t;
          t = x_97;
          if(match_cons(t, sym__2))
            {
              x_42 = ATgetArgument(t, 0);
              y_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_11(x_14, x_42, y_42, t);
          w_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_97, w_42);
          u_7 = t;
          t = SSLsetAnnotations(u_7, p_42);
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
ATerm apply_strategy_1_0 (ATerm m_133 (ATerm), ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL;
  e_98 = t;
  t = dtime_0_0(t);
  t = e_98;
  t = m_133(t);
  d_98 = t;
  t = dtime_0_0(t);
  a_98 = t;
  t = d_98;
  if(match_cons(t, sym__2))
    {
      b_98 = ATgetArgument(t, 0);
      c_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_98), (ATerm) ATmakeAppl(sym_Runtime_1, a_98)), c_98);
  return(t);
}
static ATerm s_98 (ATerm m_98, ATerm t)
{
  t = SSL_fclose(m_98);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL;
  q_98 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_98 = ATgetArgument(t, 0);
      {
        ATerm u_42 = t;
        int v_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_98);
            LocalPopChoice(v_42);
          }
        else
          {
            t = u_42;
            t = s_98(q_98, t);
          }
      }
    }
  else
    {
      t = s_98(q_98, t);
    }
  return(t);
}
static ATerm n_11 (ATerm o_32, ATerm t)
{
  t = SSL_read_term_from_stream(o_32);
  return(t);
}
static ATerm o_11 (ATerm j_58, ATerm k_58, ATerm t)
{
  t = SSL_strcat(j_58, k_58);
  return(t);
}
static ATerm p_11 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm t_98 = NULL;
  t = SSL_fopen(w_33, x_33);
  t_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_98);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_98 = NULL;
  t = SSL_stdin_stream();
  u_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_98);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_98 = NULL;
  t = SSL_stdout_stream();
  v_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_98);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_98 = NULL;
  t = SSL_stderr_stream();
  w_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_98);
  return(t);
}
static ATerm d_100 (ATerm c_99, ATerm t)
{
  ATerm d_99 = NULL;
  t = SSL_explode_term(c_99);
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_43 = ATgetArgument(t, 1);
        if(((ATgetType(e_43) == AT_LIST) && !(ATisEmpty(e_43))))
          {
            d_99 = ATgetFirst((ATermList) e_43);
            {
              ATerm g_43 = (ATerm) ATgetNext((ATermList) e_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_99;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_99;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_99;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_99;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_100 (ATerm g_99, ATerm h_99, ATerm i_99, ATerm t)
{
  ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL,o_99 = NULL,b_8 = NULL;
  t = SSLgetAnnotations(i_99);
  l_99 = t;
  t = g_99;
  if(match_cons(t, sym_Path_1))
    {
      o_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_99, h_99);
  b_8 = t;
  t = SSLsetAnnotations(b_8, l_99);
  if(match_cons(t, sym__2))
    {
      j_99 = ATgetArgument(t, 0);
      k_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(j_99, k_99, t);
  return(t);
}
static ATerm f_100 (ATerm q_99, ATerm r_99, ATerm s_99, ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL,y_99 = NULL,f_8 = NULL;
  t = SSLgetAnnotations(s_99);
  v_99 = t;
  t = SSL_is_string(q_99);
  y_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_99, r_99);
  f_8 = t;
  t = SSLsetAnnotations(f_8, v_99);
  if(match_cons(t, sym__2))
    {
      t_99 = ATgetArgument(t, 0);
      u_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(t_99, u_99, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL;
  a_100 = t;
  if(match_cons(t, sym__2))
    {
      b_100 = ATgetArgument(t, 0);
      c_100 = ATgetArgument(t, 1);
      {
        ATerm h_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_100(a_100, t);
            LocalPopChoice(i_43);
          }
        else
          {
            t = h_43;
            {
              ATerm j_43 = t;
              int k_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_100(b_100, c_100, a_100, t);
                  LocalPopChoice(k_43);
                }
              else
                {
                  t = j_43;
                  t = f_100(b_100, c_100, a_100, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_100(a_100, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL,o_100 = NULL;
  o_100 = t;
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_100, term_n_43);
        t = q_11(t);
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        {
          ATerm g_44 = NULL,k_44 = NULL;
          t = term_o_43;
          k_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_43, o_100);
          t = o_11(k_44, o_100, t);
          g_44 = t;
          t = SSL_perror(g_44);
          _fail(t);
        }
      }
  }
  i_100 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(j_100, t);
  h_100 = t;
  t = i_100;
  t = fclose_0_0(t);
  t = h_100;
  return(t);
}
ATerm fetch_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  static ATerm n_101 (ATerm t)
  {
    ATerm k_101 = NULL,l_101 = NULL,m_101 = NULL;
    k_101 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_101 = ATgetFirst((ATermList) t);
        m_101 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_43 = t;
      int t_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_45 = NULL,h_45 = NULL,i_8 = NULL;
          t = SSLgetAnnotations(k_101);
          d_45 = t;
          t = l_101;
          t = h_119(t);
          h_45 = t;
          t = (ATerm) ATinsert(CheckATermList(m_101), h_45);
          i_8 = t;
          t = SSLsetAnnotations(i_8, d_45);
          LocalPopChoice(t_43);
        }
      else
        {
          t = s_43;
          {
            ATerm v_45 = NULL,c_46 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(k_101);
            v_45 = t;
            t = m_101;
            t = n_101(t);
            c_46 = t;
            t = (ATerm) ATinsert(CheckATermList(c_46), l_101);
            q_8 = t;
            t = SSLsetAnnotations(q_8, v_45);
          }
        }
    }
    return(t);
  }
  t = n_101(t);
  return(t);
}
static ATerm v_11 (ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm q_101 = NULL;
  t = lookup_table_0_1(j_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(k_45, q_101, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  ATerm t_101 = NULL;
  t_101 = t;
  {
    ATerm u_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL;
        t = term_y_43;
        w_101 = t;
        t = term_z_43;
        x_101 = t;
        t = term_a_44;
        t = v_11(w_101, x_101, t);
        v_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_101, term_e_44);
        t = geq_0_0(t);
        t = t_101;
        t = q_115(t);
        LocalPopChoice(x_43);
      }
    else
      {
        t = u_43;
        t = t_101;
      }
  }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm a_102 = NULL;
  a_102 = t;
  if(match_string(t, "-k"))
    {
      t = a_102;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_102;
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL,d_102 = NULL;
  b_102 = t;
  t = SSL_string_to_int(b_102);
  c_102 = t;
  t = term_f_44;
  d_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_44, c_102);
  t = y_11(d_102, c_102, t);
  t = b_102;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_l_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_14, b_15, c_15, t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm f_102 = NULL;
  f_102 = t;
  if(match_string(t, "-S"))
    {
      t = f_102;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_102;
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm g_102 = NULL,h_102 = NULL;
  t = term_z_43;
  g_102 = t;
  t = term_b_20;
  h_102 = t;
  t = term_m_44;
  t = y_11(g_102, h_102, t);
  t = term_n_44;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_o_44;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm i_102 = NULL,j_102 = NULL,k_102 = NULL;
  i_102 = t;
  t = SSL_string_to_int(i_102);
  j_102 = t;
  t = term_z_43;
  k_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_43, j_102);
  t = y_11(k_102, j_102, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_102);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_p_44;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL;
  t = term_q_44;
  l_102 = t;
  t = term_t_17;
  m_102 = t;
  t = term_r_44;
  t = y_11(l_102, m_102, t);
  t = term_s_44;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_t_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_15, f_15, g_15, t);
      LocalPopChoice(z_44);
    }
  else
    {
      t = u_44;
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_15, i_15, j_15, t);
            LocalPopChoice(f_45);
          }
        else
          {
            t = e_45;
            t = Option_3_0(l_15, m_15, o_15, t);
          }
      }
    }
  return(t);
}
static ATerm y_11 (ATerm a_38, ATerm b_38, ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL;
  t = term_y_43;
  n_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_43, a_38, b_38);
  t = lookup_table_0_1(n_102, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(a_38, b_38, o_102, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_43, a_38, b_38);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_102 = NULL,v_102 = NULL,w_102 = NULL;
      t = term_t_17;
      t = e_0(t);
      u_102 = t;
      t = term_i_45;
      v_102 = t;
      t = term_l_45;
      w_102 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_45, term_l_45, u_102);
      t = w_11(v_102, w_102, u_102, t);
      _fail(t);
    }
  else
    {
      ATerm z_102 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_102 = ATgetFirst((ATermList) t);
          t_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_102;
      t = c_0(t);
      t = term_t_17;
      t = d_0(t);
      z_102 = t;
      t = (ATerm) ATinsert(CheckATermList(t_102), z_102);
    }
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm b_103 = NULL;
  b_103 = t;
  if(match_string(t, "-o"))
    {
      t = b_103;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_103;
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL;
  c_103 = t;
  t = term_m_45;
  d_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_45, c_103);
  t = y_11(d_103, c_103, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_103);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_q_45;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_15, q_15, r_15, t);
  return(t);
}
static ATerm w_11 (ATerm q_43, ATerm r_43, ATerm p_43, ATerm t)
{
  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL;
  f_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_45 = ATgetArgument(t, 0);
            ATerm u_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
        t = v_11(q_43, r_43, t);
        LocalPopChoice(s_45);
      }
    else
      {
        t = r_45;
        t = (ATerm) ATempty;
      }
  }
  g_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_43, r_43, (ATerm) ATinsert(CheckATermList(g_103), p_43));
  t = lookup_table_0_1(q_43, t);
  j_103 = t;
  t = (ATerm) ATinsert(CheckATermList(g_103), p_43);
  h_103 = t;
  t = j_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(r_43, h_103, i_103, t);
  t = f_103;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL;
      t = term_t_17;
      t = n_0(t);
      u_103 = t;
      t = term_i_45;
      v_103 = t;
      t = term_l_45;
      w_103 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_45, term_l_45, u_103);
      t = w_11(v_103, w_103, u_103, t);
      _fail(t);
    }
  else
    {
      ATerm a_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_103 = ATgetFirst((ATermList) t);
          r_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_103;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_103 = ATgetFirst((ATermList) t);
          t_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_103;
      t = k_0(t);
      t = s_103;
      t = l_0(t);
      a_104 = t;
      t = (ATerm) ATinsert(CheckATermList(t_103), a_104);
    }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm c_104 = NULL;
  c_104 = t;
  if(match_string(t, "-i"))
    {
      t = c_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_104;
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL;
  d_104 = t;
  t = term_w_45;
  e_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_45, d_104);
  t = y_11(e_104, d_104, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_104);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_x_45;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_15, t_15, u_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_17;
  t = whoami_0_0(t);
  f_104 = t;
  t = term_u_17;
  h_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_45), f_104);
  i_104 = t;
  t = SSL_printnl(h_104, i_104);
  t = term_y_17;
  g_104 = t;
  t = SSL_exit(g_104);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_104 = NULL,k_104 = NULL;
  t = term_y_43;
  j_104 = t;
  t = term_d_46;
  k_104 = t;
  t = term_e_46;
  t = v_11(j_104, k_104, t);
  return(t);
}
static ATerm r_11 (ATerm y_40, ATerm z_40, ATerm t)
{
  ATerm f_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_40, z_40);
      LocalPopChoice(g_46);
    }
  else
    {
      t = f_46;
      t = SSL_addr(y_40, z_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm t)
{
  ATerm m_104 = NULL,n_104 = NULL,o_104 = NULL;
  m_104 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_104;
      t = b_124(t);
    }
  else
    {
      ATerm r_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_104 = ATgetFirst((ATermList) t);
          o_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_104;
      t = foldr_2_0(b_124, c_124, t);
      r_104 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_104, r_104);
      t = c_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      n_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(n_46, o_46, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_104 = NULL,h_46 = NULL,i_46 = NULL;
  t = times_0_0(t);
  i_46 = t;
  t = SSL_explode_term(i_46);
  if(match_cons(t, sym__2))
    {
      ATerm l_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_46;
  t = foldr_2_0(w_15, x_15, t);
  u_104 = t;
  t = SSL_TicksToSeconds(u_104);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL;
  f_105 = t;
  if(match_cons(t, sym__2))
    {
      g_105 = ATgetArgument(t, 0);
      h_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_46 = t;
    int p_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_105;
        if((g_105 != t))
          {
            _fail(t);
          }
        t = f_105;
        LocalPopChoice(p_46);
      }
    else
      {
        t = m_46;
        t = (ATerm) ATmakeAppl(sym__2, g_105, h_105);
        {
          ATerm r_46 = t;
          int u_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_105, h_105);
              LocalPopChoice(u_46);
            }
          else
            {
              t = r_46;
              t = SSL_gtr(g_105, h_105);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_105, h_105);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm l_105 = NULL;
  l_105 = t;
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_105 = NULL,o_105 = NULL,p_105 = NULL;
        t = term_y_43;
        o_105 = t;
        t = term_z_43;
        p_105 = t;
        t = term_a_44;
        t = v_11(o_105, p_105, t);
        n_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_105, term_y_17);
        t = geq_0_0(t);
        t = l_105;
        t = p_115(t);
        LocalPopChoice(w_46);
      }
    else
      {
        t = v_46;
        t = l_105;
      }
  }
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm r_105 = NULL,s_105 = NULL,x_105 = NULL,a_106 = NULL;
  t = run_time_0_0(t);
  r_105 = t;
  t = term_t_17;
  t = whoami_0_0(t);
  s_105 = t;
  t = term_u_17;
  x_105 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_47), r_105), term_e_47), s_105);
  a_106 = t;
  t = SSL_printnl(x_105, a_106);
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_47), r_105), term_e_47), s_105));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_106 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_20;
  b_106 = t;
  t = SSL_exit(b_106);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL;
  m_106 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_106;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_106 = ATgetArgument(t, 0);
          {
            ATerm v_47 = NULL,u_8 = NULL;
            t = SSLgetAnnotations(m_106);
            v_47 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_106);
            u_8 = t;
            t = SSLsetAnnotations(u_8, v_47);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_106;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  ATerm j_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_106 = NULL,f_106 = NULL;
      t = term_y_43;
      e_106 = t;
      t = term_l_47;
      f_106 = t;
      t = term_m_47;
      t = v_11(e_106, f_106, t);
      LocalPopChoice(k_47);
    }
  else
    {
      t = j_47;
      t = fetch_1_0(z_15, t);
    }
  t = k_134(t);
  return(t);
}
static ATerm z_11 (ATerm x_46, ATerm y_46, ATerm z_46, ATerm t)
{
  ATerm r_106 = NULL;
  t = SSL_hashtable_put(z_46, x_46, y_46);
  r_106 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_106);
  return(t);
}
static ATerm a_12 (ATerm a_47, ATerm b_47, ATerm t)
{
  t = SSL_hashtable_get(b_47, a_47);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_45, ATerm t)
{
  ATerm a_107 = NULL;
  t = table_hashtable_0_0(t);
  a_107 = t;
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_48 = NULL;
        t = a_107;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_12(c_45, c_48, t);
        LocalPopChoice(o_47);
      }
    else
      {
        t = n_47;
        {
          ATerm l_48 = NULL;
          t = c_45;
          t = table_create_0_0(t);
          t = a_107;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(c_45, l_48, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm d_107 = NULL;
  t = SSL_hashtable_create(f_47, g_47);
  d_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_107);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,i_107 = NULL,j_107 = NULL;
  e_107 = t;
  t = term_p_47;
  i_107 = t;
  t = term_q_47;
  j_107 = t;
  t = e_107;
  t = new_hashtable_0_2(i_107, j_107, t);
  f_107 = t;
  t = e_107;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(e_107, f_107, g_107, t);
  t = e_107;
  return(t);
}
static ATerm t_11 (ATerm c_47, ATerm d_47, ATerm t)
{
  ATerm k_107 = NULL;
  t = SSL_hashtable_remove(d_47, c_47);
  k_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_107);
  return(t);
}
static ATerm u_11 (ATerm h_47, ATerm t)
{
  ATerm l_107 = NULL;
  t = SSL_hashtable_destroy(h_47);
  l_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_107);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_107 = NULL;
  t = SSL_table_hashtable();
  m_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_107);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL;
  n_107 = t;
  t = table_hashtable_0_0(t);
  o_107 = t;
  t = lookup_table_0_1(n_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(q_107, t);
  t = o_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(n_107, p_107, t);
  t = n_107;
  return(t);
}
ATerm map_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  static ATerm j_108 (ATerm t)
  {
    ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL;
    e_108 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_108;
      }
    else
      {
        ATerm a_49 = NULL,l_49 = NULL,n_49 = NULL,x_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_108 = ATgetFirst((ATermList) t);
            g_108 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_108);
        a_49 = t;
        t = f_108;
        t = x_118(t);
        l_49 = t;
        t = g_108;
        t = j_108(t);
        n_49 = t;
        t = (ATerm) ATinsert(CheckATermList(n_49), l_49);
        x_10 = t;
        t = SSLsetAnnotations(x_10, a_49);
      }
    return(t);
  }
  t = j_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_108 = NULL,n_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_108 = ATgetFirst((ATermList) t);
      n_108 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_108 = NULL,s_108 = NULL;
        static ATerm b_16 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_108)), not_null(s_108));
          return(t);
        }
        t = n_108;
        t = i_0(t);
        if(((r_108 != NULL) && (r_108 != t)))
          _fail(t);
        else
          r_108 = t;
        t = m_108;
        t = g_0(t);
        if(((s_108 != NULL) && (s_108 != t)))
          _fail(t);
        else
          s_108 = t;
        t = n_108;
        t = reverse_acc_2_0(g_0, b_16, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL,b_11 = NULL;
  a_109 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_109);
  y_108 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_108);
  b_11 = t;
  t = SSLsetAnnotations(b_11, y_108);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm c_109 = NULL;
  c_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_109), term_r_47);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_108 = NULL,v_108 = NULL;
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_108 = NULL,x_108 = NULL;
      t = term_y_43;
      w_108 = t;
      t = term_d_46;
      x_108 = t;
      t = term_e_46;
      t = v_11(w_108, x_108, t);
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
      t = fetch_1_0(d_16, t);
    }
  t = term_u_47;
  t = echo_0_0(t);
  t = term_i_45;
  u_108 = t;
  t = term_l_45;
  v_108 = t;
  t = term_w_47;
  t = v_11(u_108, v_108, t);
  t = reverse_acc_2_0(_id, e_16, t);
  t = map_1_0(f_16, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL;
  e_109 = t;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_109;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_47 = ATgetFirst((ATermList) t);
                ATerm a_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_109;
          }
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
        t = (ATerm) ATinsert(ATempty, e_109);
      }
  }
  f_109 = t;
  t = term_r_42;
  g_109 = t;
  t = SSL_printnl(g_109, f_109);
  t = e_109;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL;
  t = term_y_43;
  k_109 = t;
  t = term_d_46;
  l_109 = t;
  t = term_e_46;
  t = v_11(k_109, l_109, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm m_109 = NULL,n_109 = NULL;
  t = term_b_48;
  m_109 = t;
  t = term_t_17;
  n_109 = t;
  t = term_d_48;
  t = y_11(m_109, n_109, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_e_48;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL;
  t = term_b_48;
  q_109 = t;
  t = term_t_17;
  r_109 = t;
  t = term_d_48;
  t = y_11(q_109, r_109, t);
  t = term_f_48;
  o_109 = t;
  t = term_t_17;
  p_109 = t;
  t = term_g_48;
  t = y_11(o_109, p_109, t);
  t = term_h_48;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_48 = t;
  int k_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_16, h_16, i_16, t);
      LocalPopChoice(k_48);
    }
  else
    {
      t = j_48;
      t = Option_3_0(j_16, k_16, l_16, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL,a_110 = NULL,d_110 = NULL,f_110 = NULL,g_110 = NULL,g_11 = NULL;
  y_109 = t;
  {
    ATerm m_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_48;
        t = n_136(t);
        LocalPopChoice(n_48);
      }
    else
      {
        t = m_48;
      }
  }
  t = y_109;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_110 = ATgetFirst((ATermList) t);
      d_110 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_109);
  z_109 = t;
  t = term_d_46;
  g_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_46, a_110);
  t = y_11(g_110, a_110, t);
  t = d_110;
  {
    static ATerm q_110 (ATerm t)
    {
      ATerm p_48 = t;
      int q_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_48 = t;
          int s_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_110 = NULL;
              j_110 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_110;
              LocalPopChoice(s_48);
            }
          else
            {
              t = r_48;
              t = n_136(t);
              t = Cons_2_0(_id, q_110, t);
            }
          LocalPopChoice(q_48);
        }
      else
        {
          t = p_48;
          {
            ATerm m_110 = NULL,n_110 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_110 = ATgetFirst((ATermList) t);
                n_110 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_110), (ATerm) ATmakeAppl(sym_Undefined_1, m_110));
          }
        }
      return(t);
    }
    t = q_110(t);
  }
  f_110 = t;
  t = (ATerm) ATinsert(CheckATermList(f_110), (ATerm) ATmakeAppl(sym_Program_1, a_110));
  g_11 = t;
  t = SSLsetAnnotations(g_11, z_109);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm k_111 = NULL;
  k_111 = t;
  if(match_string(t, "--help"))
    {
      t = k_111;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_111;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_111;
        }
    }
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL;
  t = term_l_47;
  l_111 = t;
  t = term_t_17;
  m_111 = t;
  t = term_t_48;
  t = y_11(l_111, m_111, t);
  t = term_u_48;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_v_48;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_136 (ATerm), ATerm t)
{
  ATerm x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL,g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL;
  z_110 = t;
  t = term_i_45;
  a_111 = t;
  t = term_w_48;
  t = lookup_table_0_1(a_111, t);
  j_111 = t;
  t = term_l_45;
  g_111 = t;
  t = (ATerm) ATempty;
  h_111 = t;
  t = j_111;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(g_111, h_111, i_111, t);
  t = z_110;
  {
    static ATerm m_16 (ATerm t)
    {
      ATerm x_48 = t;
      int b_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_136(t);
          LocalPopChoice(b_49);
        }
      else
        {
          t = x_48;
          {
            ATerm c_49 = t;
            int o_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_16, p_16, q_16, t);
                LocalPopChoice(o_49);
              }
            else
              {
                t = c_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_16, t);
  }
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_111 = NULL;
        x_111 = t;
        {
          ATerm r_49 = t;
          int s_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_49 = NULL;
              t = x_111;
              {
                ATerm x_49 = t;
                int b_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_49 = NULL,a_50 = NULL;
                    t = term_y_43;
                    z_49 = t;
                    t = term_l_47;
                    a_50 = t;
                    t = term_m_47;
                    t = v_11(z_49, a_50, t);
                    LocalPopChoice(b_50);
                  }
                else
                  {
                    t = x_49;
                    t = fetch_1_0(a_17, t);
                  }
              }
              t = x_111;
              t = default_system_usage_0_0(t);
              t = term_b_20;
              y_49 = t;
              t = SSL_exit(y_49);
              LocalPopChoice(s_49);
            }
          else
            {
              t = r_49;
              {
                ATerm i_50 = NULL,j_50 = NULL,n_50 = NULL;
                t = term_y_43;
                j_50 = t;
                t = term_b_48;
                n_50 = t;
                t = term_c_50;
                t = v_11(j_50, n_50, t);
                t = x_111;
                t = default_system_about_0_0(t);
                t = term_b_20;
                i_50 = t;
                t = SSL_exit(i_50);
              }
            }
        }
        LocalPopChoice(q_49);
      }
    else
      {
        t = p_49;
        {
          ATerm g_50 = t;
          int o_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_111 = NULL,z_111 = NULL,a_112 = NULL;
              static ATerm c_17 (ATerm t)
              {
                ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL,e_12 = NULL;
                d_112 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_112 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_112);
                b_112 = t;
                t = c_112;
                if(((x_110 != NULL) && (x_110 != t)))
                  _fail(t);
                else
                  x_110 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_112);
                e_12 = t;
                t = SSLsetAnnotations(e_12, b_112);
                return(t);
              }
              t = fetch_1_0(c_17, t);
              t = term_u_17;
              z_111 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_110)), term_p_50);
              a_112 = t;
              t = SSL_printnl(z_111, a_112);
              t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_110)), term_p_50));
              t = default_system_usage_0_0(t);
              t = term_y_17;
              y_111 = t;
              t = SSL_exit(y_111);
              LocalPopChoice(o_50);
            }
          else
            {
              t = g_50;
            }
        }
      }
  }
  y_110 = t;
  t = term_i_45;
  t = table_destroy_0_0(t);
  t = y_110;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL;
  t = parse_options_1_0(m_134, t);
  i_112 = t;
  t = term_q_50;
  t = table_create_0_0(t);
  t = term_q_50;
  j_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_50, term_r_50, i_112);
  t = lookup_table_0_1(j_112, t);
  p_112 = t;
  t = term_r_50;
  n_112 = t;
  t = p_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(n_112, i_112, o_112, t);
  t = i_112;
  t = o_134(t);
  {
    ATerm s_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_134, t);
        LocalPopChoice(u_50);
      }
    else
      {
        t = s_50;
        {
          ATerm c_51 = t;
          int d_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_134(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_51);
            }
          else
            {
              t = c_51;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = if_verbose2_1_0(k_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm q_112 = NULL,r_112 = NULL;
  t = term_e_51;
  q_112 = t;
  t = term_t_17;
  r_112 = t;
  t = term_f_51;
  t = y_11(q_112, r_112, t);
  t = term_g_51;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_h_51;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL,x_112 = NULL;
  s_112 = t;
  t = term_y_43;
  w_112 = t;
  t = term_d_46;
  x_112 = t;
  t = term_e_46;
  t = v_11(w_112, x_112, t);
  t_112 = t;
  t = term_u_17;
  u_112 = t;
  t = (ATerm) ATinsert(ATempty, t_112);
  v_112 = t;
  t = SSL_printnl(u_112, v_112);
  t = s_112;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm t)
{
  static ATerm d_17 (ATerm t)
  {
    ATerm i_51 = t;
    int j_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_133(t);
        LocalPopChoice(j_51);
      }
    else
      {
        t = i_51;
        {
          ATerm k_51 = t;
          int m_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(m_51);
            }
          else
            {
              t = k_51;
              {
                ATerm t_51 = t;
                int v_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(v_51);
                  }
                else
                  {
                    t = t_51;
                    {
                      ATerm w_51 = t;
                      int x_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_17, i_17, j_17, t);
                          LocalPopChoice(x_51);
                        }
                      else
                        {
                          t = w_51;
                          {
                            ATerm y_51 = t;
                            int z_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(z_51);
                              }
                            else
                              {
                                t = y_51;
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
  static ATerm g_17 (ATerm t)
  {
    ATerm y_112 = NULL,z_112 = NULL,a_113 = NULL;
    z_112 = t;
    {
      ATerm a_52 = t;
      int b_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm l_17 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_112 != NULL) && (y_112 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_112 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_17, t);
          LocalPopChoice(b_52);
        }
      else
        {
          t = a_52;
          t = term_c_52;
          y_112 = t;
        }
    }
    t = not_null(y_112);
    t = ReadFromFile_0_0(t);
    a_113 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_112, a_113);
    t = apply_strategy_1_0(v_133, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(d_17, x_133, f_17, g_17, t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL,s_12 = NULL,r_12 = NULL,q_12 = NULL;
  u_113 = t;
  if(match_cons(t, sym__2))
    {
      i_113 = ATgetArgument(t, 0);
      j_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_113);
  h_113 = t;
  t = j_113;
  if(match_cons(t, sym_Specification_1))
    {
      o_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_113);
  n_113 = t;
  t = o_113;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_113 = ATgetFirst((ATermList) t);
      r_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_113);
  p_113 = t;
  t = r_113;
  t = Cons_2_0(r_17, s_17, t);
  s_113 = t;
  t = (ATerm) ATinsert(CheckATermList(s_113), q_113);
  q_12 = t;
  t = SSLsetAnnotations(q_12, p_113);
  t_113 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_113);
  r_12 = t;
  t = SSLsetAnnotations(r_12, n_113);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm d_52 = ATgetArgument(t, 0);
      if(((ATgetType(d_52) == AT_LIST) && !(ATisEmpty(d_52))))
        {
          l_113 = ATgetFirst((ATermList) d_52);
          {
            ATerm e_52 = (ATerm) ATgetNext((ATermList) d_52);
            if(((ATgetType(e_52) == AT_LIST) && !(ATisEmpty(e_52))))
              {
                ATerm f_52 = ATgetFirst((ATermList) e_52);
                if(match_cons(f_52, sym_Strategies_1))
                  {
                    m_113 = ATgetArgument(f_52, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm g_52 = (ATerm) ATgetNext((ATermList) e_52);
                  if(((ATgetType(g_52) != AT_LIST) || !(ATisEmpty(g_52))))
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
  t = p_9(l_113, m_113, t);
  k_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_113, k_113);
  s_12 = t;
  t = SSLsetAnnotations(s_12, h_113);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm v_113 = NULL,w_113 = NULL,y_113 = NULL,a_114 = NULL,h_12 = NULL;
  a_114 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_114);
  v_113 = t;
  t = w_113;
  t = needed_defs_0_0(t);
  y_113 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_113);
  h_12 = t;
  t = SSLsetAnnotations(h_12, v_113);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_17, _fail, default_usage_0_0, t);
  return(t);
}

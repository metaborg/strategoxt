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
Symbol sym_UndefineDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_AddDynRule_2;
Symbol sym_DynRuleId_1;
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
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
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
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_j_47;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_u_46;
ATerm term_k_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_s_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_b_43;
ATerm term_y_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_e_41;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_l_38;
ATerm term_j_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_s_37;
ATerm term_q_37;
ATerm term_t_34;
ATerm term_j_34;
ATerm term_i_33;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_b_24;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_m_17;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATempty);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
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
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Call_2, term_g_22, (ATerm) ATempty);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Sort_2, term_v_29, (ATerm) ATempty);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_29);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_k_41);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_p_41);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_s_42);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__2, term_h_43, term_v_19);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_19);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym__2, term_q_43, term_d_30);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_k_44);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_h_43);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_e_45);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym__2, term_b_44, term_c_44);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym__2, term_z_45, term_d_30);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym__2, term_c_46, term_d_30);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(sym__2, term_e_45, term_d_30);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym__3, term_b_44, term_c_44, (ATerm) ATempty);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_z_45);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym__2, term_p_41, term_d_30);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm l_9 (ATerm l_25, ATerm n_25, ATerm o_25, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm o_114 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm r_9 (ATerm x_39, ATerm w_39, ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_132 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm w_48 (ATerm g_42, ATerm h_42, ATerm t);
static ATerm b_49 (ATerm o_42, ATerm q_42, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm l_113 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm a_10 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t);
static ATerm o_61 (ATerm f_61, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm u_116 (ATerm), ATerm t);
static ATerm e_10 (ATerm l_29, ATerm m_29, ATerm n_29, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm q_115 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm w_119 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm f_10 (ATerm q_54, ATerm r_54, ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm copy_1_0 (ATerm k_138 (ATerm), ATerm t);
static ATerm g_10 (ATerm h_24, ATerm i_24, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm n_80 (ATerm h_77, ATerm i_77, ATerm j_77, ATerm k_77, ATerm t);
static ATerm o_80 (ATerm e_79, ATerm f_79, ATerm g_79, ATerm h_79, ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm z_127 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm c_123 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm i_117 (ATerm), ATerm t);
static ATerm s_9 (ATerm b_73, ATerm c_73, ATerm t);
ATerm end_scope_1_0 (ATerm j_148 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_148 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm k_148 (ATerm), ATerm l_148 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm w_9 (ATerm t_26, ATerm u_26, ATerm y_26, ATerm v_26, ATerm x_26, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm a_83 (ATerm f_81, ATerm g_81, ATerm h_81, ATerm i_81, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm e_128 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_85 (ATerm k_84, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_10 (ATerm s_134 (ATerm), ATerm i_65, ATerm h_65, ATerm t);
ATerm genzip_4_0 (ATerm g_120 (ATerm), ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm r_10 (ATerm x_779, ATerm c_780, ATerm d_79, ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm u_88 (ATerm m_87, ATerm p_87, ATerm q_87, ATerm t);
static ATerm a_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm t_10 (ATerm d_148 (ATerm), ATerm e_148 (ATerm), ATerm f_148 (ATerm), ATerm u_80, ATerm r_80, ATerm z_80, ATerm v_80, ATerm s_80, ATerm t_80, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm d_148 (ATerm), ATerm e_148 (ATerm), ATerm f_148 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm h_32 (ATerm i_31, ATerm n_31, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm w_10 (ATerm m_148 (ATerm), ATerm s_81, ATerm q_81, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm y_10 (ATerm h_73, ATerm i_73, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm z_10 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm o_65, ATerm n_65, ATerm t);
static ATerm a_11 (ATerm x_134 (ATerm), ATerm k_65, ATerm j_65, ATerm t);
ATerm foldr_3_0 (ATerm w_137 (ATerm), ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
static ATerm b_11 (ATerm x_47, ATerm y_47, ATerm t);
static ATerm c_11 (ATerm p_46, ATerm q_46, ATerm t);
static ATerm e_11 (ATerm e_123 (ATerm), ATerm x_339, ATerm v_46, ATerm t);
static ATerm d_11 (ATerm l_46, ATerm m_46, ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm output_1_0 (ATerm t_143 (ATerm), ATerm t);
static ATerm y_99 (ATerm s_99, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_11 (ATerm r_46, ATerm t);
static ATerm g_11 (ATerm s_64, ATerm t_64, ATerm t);
static ATerm h_11 (ATerm z_47, ATerm a_48, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_101 (ATerm i_100, ATerm t);
static ATerm m_101 (ATerm m_100, ATerm n_100, ATerm o_100, ATerm t);
static ATerm n_101 (ATerm y_100, ATerm z_100, ATerm a_101, ATerm t);
static ATerm i_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm u_143 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_11 (ATerm s_51, ATerm t_51, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_11 (ATerm w_72, ATerm x_72, ATerm v_72, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_11 (ATerm k_54, ATerm l_54, ATerm t);
ATerm foldr_2_0 (ATerm u_137 (ATerm), ATerm v_137 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_124 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm need_help_1_0 (ATerm k_143 (ATerm), ATerm t);
static ATerm s_11 (ATerm o_77, ATerm p_77, ATerm q_77, ATerm t);
ATerm lookup_table_0_1 (ATerm i_74, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_77, ATerm x_77, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_11 (ATerm t_77, ATerm u_77, ATerm t);
static ATerm m_11 (ATerm y_77, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_127 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_127 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_11 (ATerm r_77, ATerm s_77, ATerm t);
static ATerm o_11 (ATerm p_74, ATerm q_74, ATerm t);
static ATerm r_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm n_145 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
ATerm parse_options_1_0 (ATerm m_145 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm f_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm l_9 (ATerm l_25, ATerm n_25, ATerm o_25, ATerm t)
{
  ATerm o_0 = NULL,r_0 = NULL;
  t = term_i_16;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_16), o_25), term_n_16), n_25), term_m_16), l_25), term_j_16);
  r_0 = t;
  t = SSL_printnl(o_0, r_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_16), o_25), term_n_16), n_25), term_m_16), l_25), term_j_16);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if(((ATgetType(q_16) != AT_INT) || (ATgetInt((ATermInt) q_16) != 0)))
        _fail(t);
      {
        ATerm r_16 = ATgetArgument(t, 1);
        if(((ATgetType(r_16) != AT_INT) || (ATgetInt((ATermInt) r_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,d_2 = NULL,f_2 = NULL;
  y_1 = t;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_2;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = f_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm s_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,v_0 = NULL;
        t = z_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_16 = ATgetFirst((ATermList) t);
            ATerm a_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(a_17) == AT_LIST) && !(ATisEmpty(a_17))))
              {
                ATerm c_17 = ATgetFirst((ATermList) a_17);
                ATerm d_17 = (ATerm) ATgetNext((ATermList) a_17);
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
        t = term_i_16;
        u_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, z_1), term_m_17);
        v_0 = t;
        t = SSL_printnl(u_0, v_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, z_1), term_m_17);
        t = giving_up_0_0(t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = s_16;
        {
          ATerm b_1 = NULL,c_1 = NULL;
          t = z_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_17 = ATgetFirst((ATermList) t);
              if(match_cons(n_17, sym__2))
                {
                  b_1 = ATgetArgument(n_17, 0);
                  c_1 = ATgetArgument(n_17, 1);
                }
              else
                _fail(t);
              {
                ATerm o_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(o_17) != AT_LIST) || !(ATisEmpty(o_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATmakeAppl(sym__2, b_1, c_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATmakeAppl(sym__2, b_1, c_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      {
        ATerm o_1 = NULL,r_1 = NULL,u_1 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(d_8);
        o_1 = t;
        t = e_8;
        t = k_114(t);
        r_1 = t;
        t = f_8;
        t = k_114(t);
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_1, u_1);
        d_1 = t;
        t = SSLsetAnnotations(d_1, o_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_8 = ATgetArgument(t, 0);
          f_8 = ATgetArgument(t, 1);
          c_8 = ATgetArgument(t, 2);
          {
            ATerm m_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(d_8);
            m_2 = t;
            t = e_8;
            t = m_114(t);
            q_2 = t;
            t = f_8;
            t = m_114(t);
            r_2 = t;
            t = c_8;
            t = k_114(t);
            s_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, q_2, r_2, s_2);
            e_1 = t;
            t = SSLsetAnnotations(e_1, m_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              e_8 = ATgetArgument(t, 0);
              f_8 = ATgetArgument(t, 1);
              c_8 = ATgetArgument(t, 2);
              b_8 = ATgetArgument(t, 3);
              {
                ATerm t_5 = NULL,g_6 = NULL,i_6 = NULL,j_6 = NULL,m_6 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(d_8);
                t_5 = t;
                t = e_8;
                t = m_114(t);
                g_6 = t;
                t = f_8;
                t = m_114(t);
                i_6 = t;
                t = c_8;
                t = m_114(t);
                j_6 = t;
                t = b_8;
                t = k_114(t);
                m_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_6, i_6, j_6, m_6);
                g_1 = t;
                t = SSLsetAnnotations(g_1, t_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  e_8 = ATgetArgument(t, 0);
                  f_8 = ATgetArgument(t, 1);
                  c_8 = ATgetArgument(t, 2);
                  b_8 = ATgetArgument(t, 3);
                  {
                    ATerm l_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,i_1 = NULL;
                    t = SSLgetAnnotations(d_8);
                    l_7 = t;
                    t = e_8;
                    t = m_114(t);
                    w_7 = t;
                    t = f_8;
                    t = m_114(t);
                    x_7 = t;
                    t = c_8;
                    t = m_114(t);
                    y_7 = t;
                    t = b_8;
                    t = k_114(t);
                    z_7 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, w_7, x_7, y_7, z_7);
                    i_1 = t;
                    t = SSLsetAnnotations(i_1, l_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      e_8 = ATgetArgument(t, 0);
                      f_8 = ATgetArgument(t, 1);
                      c_8 = ATgetArgument(t, 2);
                      {
                        ATerm x_8 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,j_1 = NULL;
                        t = SSLgetAnnotations(d_8);
                        x_8 = t;
                        t = e_8;
                        t = m_114(t);
                        d_9 = t;
                        t = f_8;
                        t = m_114(t);
                        e_9 = t;
                        t = c_8;
                        t = m_114(t);
                        f_9 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, d_9, e_9, f_9);
                        j_1 = t;
                        t = SSLsetAnnotations(j_1, x_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          e_8 = ATgetArgument(t, 0);
                          f_8 = ATgetArgument(t, 1);
                          {
                            ATerm p_9 = NULL,u_9 = NULL,v_9 = NULL,n_1 = NULL;
                            t = SSLgetAnnotations(d_8);
                            p_9 = t;
                            t = e_8;
                            t = m_114(t);
                            u_9 = t;
                            t = f_8;
                            t = k_114(t);
                            v_9 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, u_9, v_9);
                            n_1 = t;
                            t = SSLsetAnnotations(n_1, p_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              e_8 = ATgetArgument(t, 0);
                              f_8 = ATgetArgument(t, 1);
                              {
                                ATerm i_10 = NULL,l_10 = NULL,n_10 = NULL,s_1 = NULL;
                                t = SSLgetAnnotations(d_8);
                                i_10 = t;
                                t = e_8;
                                t = m_114(t);
                                l_10 = t;
                                t = f_8;
                                t = k_114(t);
                                n_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, l_10, n_10);
                                s_1 = t;
                                t = SSLsetAnnotations(s_1, i_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  e_8 = ATgetArgument(t, 0);
                                  f_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_11 = NULL,u_11 = NULL,v_11 = NULL,t_1 = NULL;
                                    t = SSLgetAnnotations(d_8);
                                    k_11 = t;
                                    t = e_8;
                                    t = m_114(t);
                                    u_11 = t;
                                    t = f_8;
                                    t = k_114(t);
                                    v_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_11, v_11);
                                    t_1 = t;
                                    t = SSLsetAnnotations(t_1, k_11);
                                  }
                                }
                              else
                                {
                                  ATerm d_12 = NULL,q_12 = NULL,r_12 = NULL,v_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      e_8 = ATgetArgument(t, 0);
                                      f_8 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(d_8);
                                  d_12 = t;
                                  t = e_8;
                                  t = m_114(t);
                                  q_12 = t;
                                  t = f_8;
                                  t = k_114(t);
                                  r_12 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, q_12, r_12);
                                  v_1 = t;
                                  t = SSLsetAnnotations(v_1, d_12);
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
ATerm dynrule_sargs_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,k_12 = NULL;
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          h_12 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_17);
      t = h_12;
      if(match_cons(t, sym_DynRuleId_1))
        {
          i_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_12;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_17 = ATgetArgument(t, 0);
          k_12 = ATgetArgument(t, 1);
          {
            ATerm v_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_12;
    }
  else
    {
      t = p_17;
      {
        ATerm w_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                h_12 = ATgetArgument(t, 0);
                {
                  ATerm z_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_17);
            t = h_12;
            if(match_cons(t, sym_DynRuleId_1))
              {
                i_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_12;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_18 = ATgetArgument(t, 0);
                k_12 = ATgetArgument(t, 1);
                {
                  ATerm b_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = k_12;
          }
        else
          {
            t = w_17;
            if(match_cons(t, sym_AddDynRule_2))
              {
                h_12 = ATgetArgument(t, 0);
                {
                  ATerm c_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = h_12;
            if(match_cons(t, sym_DynRuleId_1))
              {
                i_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_12;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm d_18 = ATgetArgument(t, 0);
                k_12 = ATgetArgument(t, 1);
                {
                  ATerm e_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = k_12;
          }
      }
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm d_13 = NULL;
  ATerm f_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_13 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_18);
      t = d_13;
    }
  else
    {
      t = f_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_13;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_13 = ATgetArgument(t, 0);
          {
            ATerm m_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_18);
      t = s_13;
    }
  else
    {
      t = k_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_13;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_18 = ATgetArgument(t, 0);
          v_12 = ATgetArgument(t, 1);
          {
            ATerm q_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = v_12;
      t = map_1_0(p_0, t);
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm r_18 = ATgetArgument(t, 0);
          v_12 = ATgetArgument(t, 1);
          {
            ATerm s_18 = ATgetArgument(t, 2);
          }
          {
            ATerm u_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_12;
      t = map_1_0(s_0, t);
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm y_13 = NULL;
  ATerm v_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_13 = ATgetArgument(t, 0);
          {
            ATerm y_18 = ATgetArgument(t, 1);
          }
          {
            ATerm z_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_18);
      t = y_13;
    }
  else
    {
      t = v_18;
      if(match_cons(t, sym_SDefT_4))
        {
          y_13 = ATgetArgument(t, 0);
          {
            ATerm a_19 = ATgetArgument(t, 1);
          }
          {
            ATerm b_19 = ATgetArgument(t, 2);
          }
          {
            ATerm c_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_13;
    }
  return(t);
}
static ATerm r_9 (ATerm x_39, ATerm w_39, ATerm t)
{
  t = x_39;
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
  ATerm c_14 = NULL,d_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(f_1, c_14, d_14, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm e_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      if((e_14 != ATgetArgument(t, 1)))
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
  ATerm x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(l_1, x_14, y_14, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm z_14 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      if((z_14 != ATgetArgument(t, 1)))
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
  ATerm m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      if((m_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_132 (ATerm), ATerm t)
{
  static ATerm n_15 (ATerm t)
  {
    ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
    u_14 = t;
    {
      ATerm d_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_132(t);
          LocalPopChoice(e_19);
        }
      else
        {
          t = d_19;
          t = (ATerm) ATempty;
        }
    }
    s_14 = t;
    t = u_14;
    {
      ATerm f_19 = t;
      int h_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_14 = NULL,p_13 = NULL,q_13 = NULL;
          t = j_132(t);
          v_14 = t;
          t = u_14;
          {
            static ATerm x_0 (ATerm t)
            {
              ATerm i_13 = NULL;
              t = n_15(t);
              i_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_13, v_14);
              t = m_10(l_132, i_13, v_14, t);
              return(t);
            }
            t = k_132(x_0, n_15, y_0, t);
          }
          q_13 = t;
          t = SSL_explode_term(q_13);
          if(match_cons(t, sym__2))
            {
              ATerm i_19 = ATgetArgument(t, 0);
              p_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_13;
          t = foldr_3_0(z_0, a_1, _id, t);
          LocalPopChoice(h_19);
        }
      else
        {
          t = f_19;
          {
            ATerm m_14 = NULL;
            t = SSL_explode_term(u_14);
            if(match_cons(t, sym__2))
              {
                ATerm k_19 = ATgetArgument(t, 0);
                m_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_14;
            t = foldr_3_0(h_1, k_1, n_15, t);
          }
        }
    }
    t_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_14, t_14);
    t = a_11(m_1, s_14, t_14, t);
    return(t);
  }
  t = n_15(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,k_16 = NULL,t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if(match_cons(l_19, sym_SVar_1))
        {
          g_16 = ATgetArgument(l_19, 0);
        }
      else
        _fail(t);
      h_16 = ATgetArgument(t, 1);
      k_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_16;
  t = foldr_3_0(x_1, a_2, c_2, t);
  t_16 = t;
  t = k_16;
  t = foldr_3_0(e_2, g_2, h_2, t);
  u_16 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_16, (ATerm) ATmakeAppl(sym__2, t_16, u_16)));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
      g_17 = t;
      if(match_cons(t, sym_Let_2))
        {
          h_17 = ATgetArgument(t, 0);
          i_17 = ATgetArgument(t, 1);
          t = g_17;
          t = r_9(h_17, i_17, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              h_17 = ATgetArgument(t, 0);
              i_17 = ATgetArgument(t, 1);
              j_17 = ATgetArgument(t, 2);
              t = i_17;
              t = map_1_0(i_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  h_17 = ATgetArgument(t, 0);
                  i_17 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, h_17);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_17 = ATgetArgument(t, 0);
                      i_17 = ATgetArgument(t, 1);
                      j_17 = ATgetArgument(t, 2);
                      k_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_17;
                  t = map_1_0(j_2, t);
                }
            }
        }
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm o_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = o_19;
            t = dynrule_sargs_1_0(k_2, t);
          }
      }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_19 = ATgetArgument(t, 0);
      if(match_cons(s_19, sym__2))
        {
          t_19 = ATgetArgument(s_19, 0);
          {
            ATerm u_19 = ATgetArgument(s_19, 1);
          }
        }
      else
        _fail(t);
      if((t_19 != ATgetArgument(t, 1)))
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
  t = term_v_19;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm x_16 = NULL,b_17 = NULL;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(x_16, b_17, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(e_17, f_17, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm s_17 = NULL;
  ATerm x_19 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_17 = ATgetArgument(t, 0);
          {
            ATerm f_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_20);
      t = s_17;
    }
  else
    {
      t = x_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_17;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm g_19 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_19 = ATgetArgument(t, 0);
          {
            ATerm l_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = g_19;
    }
  else
    {
      t = i_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_19;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = map_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm q_19 = NULL;
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_19 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_20);
      t = q_19;
    }
  else
    {
      t = m_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_19;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(p_1, q_1, sboundin_3_0, w_1, t);
  return(t);
}
static ATerm w_48 (ATerm g_42, ATerm h_42, ATerm t)
{
  t = g_42;
  {
    ATerm t_20 = t;
    if((PushChoice() == 0))
      {
        ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,z_2 = NULL;
        n_42 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_42 = ATgetFirst((ATermList) t);
            m_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_42);
        k_42 = t;
        t = m_42;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_42), l_42);
        z_2 = t;
        t = SSLsetAnnotations(z_2, k_42);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_20, g_42);
  return(t);
}
static ATerm b_49 (ATerm o_42, ATerm q_42, ATerm t)
{
  t = o_42;
  {
    ATerm v_20 = t;
    if((PushChoice() == 0))
      {
        ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,a_3 = NULL;
        x_42 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_42 = ATgetFirst((ATermList) t);
            w_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_42);
        u_42 = t;
        t = w_42;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(w_42), v_42);
        a_3 = t;
        t = SSLsetAnnotations(a_3, u_42);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, o_42);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm t_43 = NULL,x_43 = NULL,y_16 = NULL;
  t_43 = t;
  t = SSL_explode_term(t_43);
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            x_43 = ATgetFirst((ATermList) a_21);
            {
              ATerm b_21 = (ATerm) ATgetNext((ATermList) a_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(t_43);
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            ATerm e_21 = ATgetFirst((ATermList) d_21);
            ATerm f_21 = (ATerm) ATgetNext((ATermList) d_21);
            if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
              {
                y_16 = ATgetFirst((ATermList) f_21);
                {
                  ATerm g_21 = (ATerm) ATgetNext((ATermList) f_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, y_16), x_43));
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  if(match_cons(t, sym__2))
    {
      r_44 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, s_44), r_44));
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm u_44 = NULL,y_44 = NULL;
  if(match_cons(t, sym__2))
    {
      u_44 = ATgetArgument(t, 0);
      y_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, y_44), u_44));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, v_45), u_45));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_k_21;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  if(match_cons(t, sym__2))
    {
      x_45 = ATgetArgument(t, 0);
      y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, y_45), x_45));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,c_43 = NULL,f_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  j_43 = t;
  if(match_cons(t, sym_Anno_2))
    {
      k_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
      {
        ATerm r_43 = NULL;
        t = l_43;
        t = foldr_2_0(n_2, o_2, t);
        r_43 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, k_43, r_43);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          k_43 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, k_43, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              k_43 = ATgetArgument(t, 0);
              {
                ATerm u_17 = NULL;
                t = k_43;
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
                        ATerm x_17 = NULL;
                        t = SSL_explode_string(k_43);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_21 = ATgetFirst((ATermList) t);
                            if(((ATgetType(s_21) != AT_INT) || (ATgetInt((ATermInt) s_21) != 39)))
                              _fail(t);
                            {
                              ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
                                {
                                  x_17 = ATgetFirst((ATermList) t_21);
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
                        t = x_17;
                      }
                    }
                }
                u_17 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, u_17);
              }
            }
          else
            {
              ATerm y_21 = t;
              int z_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      k_43 = ATgetArgument(t, 0);
                      {
                        ATerm a_22 = ATgetArgument(t, 1);
                      }
                      i_43 = ATgetArgument(t, 2);
                      z_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_21);
                  t = (ATerm) ATmakeAppl(sym_Con_3, k_43, i_43, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_42), (ATerm) ATempty));
                }
              else
                {
                  t = y_21;
                  {
                    ATerm c_22 = t;
                    int d_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            k_43 = ATgetArgument(t, 0);
                            {
                              ATerm e_22 = ATgetArgument(t, 1);
                            }
                            i_43 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_22);
                        t = (ATerm) ATmakeAppl(sym_Con_3, k_43, i_43, term_h_22);
                      }
                    else
                      {
                        t = c_22;
                        if(match_cons(t, sym_Con1_2))
                          {
                            k_43 = ATgetArgument(t, 0);
                            l_43 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, k_43, l_43, term_h_22);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                k_43 = ATgetArgument(t, 0);
                                l_43 = ATgetArgument(t, 1);
                                {
                                  static ATerm p_2 (ATerm t)
                                  {
                                    t = l_43;
                                    return(t);
                                  }
                                  t = k_43;
                                  t = foldr_2_0(p_2, t_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    k_43 = ATgetArgument(t, 0);
                                    t = k_43;
                                    t = foldr_2_0(u_2, v_2, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        k_43 = ATgetArgument(t, 0);
                                        t = k_43;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            a_43 = ATgetFirst((ATermList) t);
                                            c_43 = (ATerm) ATgetNext((ATermList) t);
                                            t = c_43;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm i_22 = t;
                                                int j_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = w_48(k_43, j_43, t);
                                                    LocalPopChoice(j_22);
                                                  }
                                                else
                                                  {
                                                    t = i_22;
                                                    t = a_43;
                                                  }
                                              }
                                            else
                                              {
                                                t = w_48(k_43, j_43, t);
                                              }
                                          }
                                        else
                                          {
                                            t = w_48(k_43, j_43, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            k_43 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, k_43));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                k_43 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, k_43));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    k_43 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, k_43));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        k_43 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, k_43));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            k_43 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_43), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                k_43 = ATgetArgument(t, 0);
                                                                l_43 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_43), l_43);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    k_43 = ATgetArgument(t, 0);
                                                                    l_43 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm w_2 (ATerm t)
                                                                      {
                                                                        t = l_43;
                                                                        return(t);
                                                                      }
                                                                      t = k_43;
                                                                      t = foldr_2_0(w_2, x_2, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        k_43 = ATgetArgument(t, 0);
                                                                        t = k_43;
                                                                        t = foldr_2_0(y_2, b_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            k_43 = ATgetArgument(t, 0);
                                                                            l_43 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, (ATerm) ATinsert(CheckATermList(l_43), k_43));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                k_43 = ATgetArgument(t, 0);
                                                                                t = k_43;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    a_43 = ATgetFirst((ATermList) t);
                                                                                    c_43 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = c_43;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm k_22 = t;
                                                                                        int m_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = b_49(k_43, j_43, t);
                                                                                            LocalPopChoice(m_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = k_22;
                                                                                            t = a_43;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = b_49(k_43, j_43, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_49(k_43, j_43, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_n_22;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        k_43 = ATgetArgument(t, 0);
                                                                                        l_43 = ATgetArgument(t, 1);
                                                                                        t = l_43;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            f_43 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, f_43), k_43));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            k_43 = ATgetArgument(t, 0);
                                                                                            t = k_43;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                k_43 = ATgetArgument(t, 0);
                                                                                                l_43 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, k_43, l_43, term_w_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    k_43 = ATgetArgument(t, 0);
                                                                                                    l_43 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, k_43, l_43, term_w_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        k_43 = ATgetArgument(t, 0);
                                                                                                        l_43 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, k_43, (ATerm)ATempty, l_43);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            k_43 = ATgetArgument(t, 0);
                                                                                                            l_43 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, l_43, k_43);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                k_43 = ATgetArgument(t, 0);
                                                                                                                l_43 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, k_43, l_43, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    k_43 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, k_43, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        k_43 = ATgetArgument(t, 0);
                                                                                                                        l_43 = ATgetArgument(t, 1);
                                                                                                                        i_43 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_43, l_43, (ATerm)ATempty, i_43);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            k_43 = ATgetArgument(t, 0);
                                                                                                                            l_43 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_43, (ATerm)ATempty, (ATerm)ATempty, l_43);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                k_43 = ATgetArgument(t, 0);
                                                                                                                                l_43 = ATgetArgument(t, 1);
                                                                                                                                i_43 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, k_43, l_43, (ATerm)ATempty, i_43);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    k_43 = ATgetArgument(t, 0);
                                                                                                                                    l_43 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, k_43, (ATerm)ATempty, (ATerm)ATempty, l_43);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        k_43 = ATgetArgument(t, 0);
                                                                                                                                        l_43 = ATgetArgument(t, 1);
                                                                                                                                        i_43 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_43, l_43, (ATerm)ATempty, i_43);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            k_43 = ATgetArgument(t, 0);
                                                                                                                                            l_43 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, k_43, (ATerm)ATempty, (ATerm)ATempty, l_43);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm x_22 = ATgetArgument(t, 0);
                                                                                                                                                l_43 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, l_43);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  e_49 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      f_49 = ATgetArgument(t, 0);
      d_49 = ATgetArgument(t, 1);
      {
        ATerm i_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
        t = e_49;
        t = new_0_0(t);
        i_49 = t;
        t = new_0_0(t);
        n_49 = t;
        t = new_0_0(t);
        o_49 = t;
        t = new_0_0(t);
        p_49 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_49), o_49), n_49), i_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_49), (ATerm) ATmakeAppl(sym_Var_1, o_49))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_49, (ATerm)ATmakeAppl(sym_Var_1, i_49), (ATerm) ATmakeAppl(sym_Var_1, n_49)), (ATerm) ATmakeAppl(sym_BAM_3, d_49, (ATerm)ATmakeAppl(sym_Var_1, o_49), (ATerm) ATmakeAppl(sym_Var_1, p_49)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_49)), (ATerm) ATmakeAppl(sym_Var_1, n_49))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_49 = ATgetArgument(t, 0);
          {
            ATerm q_49 = NULL,v_49 = NULL,x_49 = NULL,y_49 = NULL;
            t = e_49;
            t = new_0_0(t);
            x_49 = t;
            t = f_49;
            {
              static ATerm c_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((q_49 != NULL) && (q_49 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      q_49 = ATgetArgument(t, 0);
                    if(((v_49 != NULL) && (v_49 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, x_49);
                return(t);
              }
              t = oncetd_1_0(c_3, t);
            }
            y_49 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_49)), not_null(q_49))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_49)), (ATerm) ATmakeAppl(sym_Build_1, y_49))));
          }
        }
      else
        {
          ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,e_50 = NULL,f_50 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              f_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_49;
          t = new_0_0(t);
          c_50 = t;
          t = new_0_0(t);
          e_50 = t;
          t = f_49;
          {
            static ATerm h_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((a_50 != NULL) && (a_50 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_50 = ATgetArgument(t, 0);
                  if(((b_50 != NULL) && (b_50 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    b_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, c_50);
              return(t);
            }
            t = oncetd_1_0(h_3, t);
          }
          f_50 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_50)), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_50))))), (ATerm)ATmakeAppl(sym_Var_1, c_50), (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_50)), not_null(a_50)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL;
  j_50 = t;
  if(match_cons(t, sym_Match_1))
    {
      k_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
        t = j_50;
        t = new_0_0(t);
        s_50 = t;
        t = k_50;
        {
          static ATerm j_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((q_50 != NULL) && (q_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_50 = ATgetArgument(t, 0);
                if(((r_50 != NULL) && (r_50 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  r_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_50), q_50);
            return(t);
          }
          t = pat_td_1_0(j_3, t);
        }
        t_50 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_50))), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_50))))));
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
              t = j_50;
              t = new_0_0(t);
              w_50 = t;
              t = k_50;
              {
                static ATerm l_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((v_50 != NULL) && (v_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, w_50);
                  return(t);
                }
                t = pat_td_1_0(l_3, t);
              }
              x_50 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_50)), not_null(v_50))));
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              {
                ATerm c_51 = NULL,d_51 = NULL,f_51 = NULL,n_51 = NULL;
                t = j_50;
                t = new_0_0(t);
                f_51 = t;
                t = k_50;
                {
                  static ATerm m_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((d_51 != NULL) && (d_51 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          d_51 = ATgetArgument(t, 0);
                        if(((c_51 != NULL) && (c_51 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_51 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_51);
                    return(t);
                  }
                  t = pat_td_1_0(m_3, t);
                }
                n_51 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, f_51)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_51)), not_null(d_51)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm l_113 (ATerm), ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_113(t);
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm x_55 = NULL,d_56 = NULL,h_56 = NULL,i_56 = NULL;
        d_56 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_56 = ATgetArgument(t, 0);
            i_56 = ATgetArgument(t, 1);
            {
              ATerm g_18 = NULL,j_18 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(d_56);
              g_18 = t;
              t = i_56;
              {
                static ATerm n_3 (ATerm t)
                {
                  t = pat_td_1_0(l_113, t);
                  return(t);
                }
                t = fetch_1_0(n_3, t);
              }
              j_18 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, h_56, j_18);
              d_3 = t;
              t = SSLsetAnnotations(d_3, g_18);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_56 = ATgetArgument(t, 0);
                i_56 = ATgetArgument(t, 1);
                {
                  ATerm j_23 = t;
                  int k_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_18 = NULL,w_18 = NULL,e_3 = NULL;
                      t = SSLgetAnnotations(d_56);
                      t_18 = t;
                      t = i_56;
                      t = pat_td_1_0(l_113, t);
                      w_18 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_56, w_18);
                      e_3 = t;
                      t = SSLsetAnnotations(e_3, t_18);
                      LocalPopChoice(k_23);
                    }
                  else
                    {
                      t = j_23;
                      {
                        ATerm j_19 = NULL,p_19 = NULL,f_3 = NULL;
                        t = SSLgetAnnotations(d_56);
                        j_19 = t;
                        t = h_56;
                        t = pat_td_1_0(l_113, t);
                        p_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, p_19, i_56);
                        f_3 = t;
                        t = SSLsetAnnotations(f_3, j_19);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    h_56 = ATgetArgument(t, 0);
                    i_56 = ATgetArgument(t, 1);
                    x_55 = ATgetArgument(t, 2);
                    {
                      ATerm k_20 = NULL,o_20 = NULL,g_3 = NULL;
                      t = SSLgetAnnotations(d_56);
                      k_20 = t;
                      t = x_55;
                      {
                        static ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1_0(l_113, t);
                          return(t);
                        }
                        t = fetch_1_0(o_3, t);
                      }
                      o_20 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, h_56, i_56, o_20);
                      g_3 = t;
                      t = SSLsetAnnotations(g_3, k_20);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_56 = ATgetArgument(t, 0);
                        i_56 = ATgetArgument(t, 1);
                        x_55 = ATgetArgument(t, 2);
                        {
                          ATerm x_21 = NULL,b_22 = NULL,i_3 = NULL;
                          t = SSLgetAnnotations(d_56);
                          x_21 = t;
                          t = x_55;
                          {
                            static ATerm p_3 (ATerm t)
                            {
                              t = pat_td_1_0(l_113, t);
                              return(t);
                            }
                            t = fetch_1_0(p_3, t);
                          }
                          b_22 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, h_56, i_56, b_22);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, x_21);
                        }
                      }
                    else
                      {
                        ATerm y_22 = NULL,b_23 = NULL,k_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            h_56 = ATgetArgument(t, 0);
                            i_56 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_56);
                        y_22 = t;
                        t = i_56;
                        t = pat_td_1_0(l_113, t);
                        b_23 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, h_56, b_23);
                        k_3 = t;
                        t = SSLsetAnnotations(k_3, y_22);
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
  ATerm b_57 = NULL,c_57 = NULL;
  b_57 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_57 = NULL,g_57 = NULL,i_57 = NULL,j_57 = NULL;
        t = b_57;
        t = new_0_0(t);
        i_57 = t;
        t = c_57;
        {
          static ATerm q_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((d_57 != NULL) && (d_57 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_57 = ATgetArgument(t, 0);
                if(((g_57 != NULL) && (g_57 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  g_57 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_57);
            return(t);
          }
          t = pat_td_1_0(q_3, t);
        }
        j_57 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_57), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_57)), not_null(d_57))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_57)))), (ATerm) ATmakeAppl(sym_Build_1, j_57)));
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm u_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_57 = NULL,p_57 = NULL,q_57 = NULL;
              t = b_57;
              t = new_0_0(t);
              p_57 = t;
              t = c_57;
              {
                static ATerm t_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_57 != NULL) && (m_57 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_57 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, p_57);
                  return(t);
                }
                t = pat_td_1_0(t_3, t);
              }
              q_57 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_57), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_57), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_57)))), (ATerm) ATmakeAppl(sym_Build_1, q_57)));
              LocalPopChoice(w_24);
            }
          else
            {
              t = u_24;
              {
                ATerm v_57 = NULL,z_57 = NULL,f_58 = NULL,h_58 = NULL;
                t = b_57;
                t = new_0_0(t);
                f_58 = t;
                t = c_57;
                {
                  static ATerm u_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_57 != NULL) && (v_57 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_57 = ATgetArgument(t, 0);
                        if(((z_57 != NULL) && (z_57 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_57 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_58);
                    return(t);
                  }
                  t = pat_td_1_0(u_3, t);
                }
                h_58 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_58), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_57), not_null(z_57), (ATerm) ATmakeAppl(sym_Var_1, f_58))), (ATerm) ATmakeAppl(sym_Build_1, h_58)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,q_58 = NULL,r_58 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      q_58 = ATgetArgument(t, 0);
      r_58 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, q_58, r_58);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          q_58 = ATgetArgument(t, 0);
          t = q_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_58 = ATgetFirst((ATermList) t);
              n_58 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_58, (ATerm) ATmakeAppl(sym_LChoices_1, n_58));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_y_24;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              q_58 = ATgetArgument(t, 0);
              t = q_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_58 = ATgetFirst((ATermList) t);
                  n_58 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_58, (ATerm) ATmakeAppl(sym_Choices_1, n_58));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_y_24;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  q_58 = ATgetArgument(t, 0);
                  t = q_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_58 = ATgetFirst((ATermList) t);
                      n_58 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_58, (ATerm) ATmakeAppl(sym_Seqs_1, n_58));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      q_58 = ATgetArgument(t, 0);
                      r_58 = ATgetArgument(t, 1);
                      o_58 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, r_58, (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, o_58), q_58)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          q_58 = ATgetArgument(t, 0);
                          r_58 = ATgetArgument(t, 1);
                          o_58 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, o_58)), q_58), (ATerm) ATmakeAppl(sym_Build_1, r_58)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              q_58 = ATgetArgument(t, 0);
                              r_58 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_58, (ATerm) ATmakeAppl(sym_Match_1, r_58));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  q_58 = ATgetArgument(t, 0);
                                  r_58 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_58), r_58);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      q_58 = ATgetArgument(t, 0);
                                      r_58 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_58), q_58);
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
static ATerm w_3 (ATerm t)
{
  ATerm z_24 = t;
  if((PushChoice() == 0))
    {
      ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,r_3 = NULL;
      g_60 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_60);
      e_60 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_60);
      r_3 = t;
      t = SSLsetAnnotations(r_3, e_60);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_24;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm h_60 = NULL,o_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_60 = ATgetFirst((ATermList) t);
      o_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_60, o_60);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      if(match_cons(c_25, sym__2))
        {
          p_60 = ATgetArgument(c_25, 0);
          q_60 = ATgetArgument(c_25, 1);
        }
      else
        _fail(t);
      {
        ATerm d_25 = ATgetArgument(t, 1);
        if(match_cons(d_25, sym__2))
          {
            r_60 = ATgetArgument(d_25, 0);
            s_60 = ATgetArgument(d_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_60), p_60), (ATerm) ATinsert(CheckATermList(s_60), q_60));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm t_60 = NULL,w_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_60 = ATgetFirst((ATermList) t);
      w_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_60, w_60);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if(match_cons(e_25, sym__2))
        {
          y_60 = ATgetArgument(e_25, 0);
          z_60 = ATgetArgument(e_25, 1);
        }
      else
        _fail(t);
      {
        ATerm f_25 = ATgetArgument(t, 1);
        if(match_cons(f_25, sym__2))
          {
            a_61 = ATgetArgument(f_25, 0);
            b_61 = ATgetArgument(f_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_61), y_60), (ATerm) ATinsert(CheckATermList(b_61), z_60));
  return(t);
}
static ATerm a_10 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,s_3 = NULL;
  t = a_34;
  t = fetch_1_0(w_3, t);
  t = a_34;
  t = genzip_4_0(x_3, c_4, d_4, LiftPrimArg_0_0, t);
  b_60 = t;
  if(match_cons(t, sym__2))
    {
      x_59 = ATgetArgument(t, 0);
      y_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_60);
  w_59 = t;
  t = x_59;
  t = concat_0_0(t);
  z_59 = t;
  t = y_59;
  t = genzip_4_0(e_4, f_4, g_4, _id, t);
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_59, a_60);
  s_3 = t;
  t = SSLsetAnnotations(s_3, w_59);
  if(match_cons(t, sym__2))
    {
      t_59 = ATgetArgument(t, 0);
      {
        ATerm g_25 = ATgetArgument(t, 1);
        if(match_cons(g_25, sym__2))
          {
            u_59 = ATgetArgument(g_25, 0);
            v_59 = ATgetArgument(g_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_59, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_59), (ATerm) ATmakeAppl(sym_CallT_3, y_33, z_33, v_59)));
  return(t);
}
static ATerm o_61 (ATerm f_61, ATerm t)
{
  ATerm h_61 = NULL;
  t = f_61;
  {
    ATerm r_26 = t;
    if((PushChoice() == 0))
      {
        ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,v_3 = NULL;
        k_61 = t;
        if(match_cons(t, sym_Var_1))
          {
            j_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_61);
        i_61 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, j_61);
        v_3 = t;
        t = SSLsetAnnotations(v_3, i_61);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_26;
      }
  }
  t = new_0_0(t);
  h_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_61), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_61), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_61)))), (ATerm) ATmakeAppl(sym_Var_1, h_61)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL;
  l_61 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_61 = ATgetArgument(t, 0);
      {
        ATerm w_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_61(l_61, t);
            LocalPopChoice(z_26);
          }
        else
          {
            t = w_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_22, (ATerm) ATmakeAppl(sym_Var_1, m_61)));
          }
      }
    }
  else
    {
      t = o_61(l_61, t);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm a_27 = t;
  if((PushChoice() == 0))
    {
      ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,y_3 = NULL;
      z_23 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_23);
      x_23 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_23);
      y_3 = t;
      t = SSLsetAnnotations(y_3, x_23);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_27;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm a_24 = NULL,c_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_24 = ATgetFirst((ATermList) t);
      c_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_24, c_24);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if(match_cons(b_27, sym__2))
        {
          d_24 = ATgetArgument(b_27, 0);
          e_24 = ATgetArgument(b_27, 1);
        }
      else
        _fail(t);
      {
        ATerm c_27 = ATgetArgument(t, 1);
        if(match_cons(c_27, sym__2))
          {
            f_24 = ATgetArgument(c_27, 0);
            j_24 = ATgetArgument(c_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_24), d_24), (ATerm) ATinsert(CheckATermList(j_24), e_24));
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm k_24 = NULL,m_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_24 = ATgetFirst((ATermList) t);
      m_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_24, m_24);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm n_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if(match_cons(e_27, sym__2))
        {
          n_24 = ATgetArgument(e_27, 0);
          p_24 = ATgetArgument(e_27, 1);
        }
      else
        _fail(t);
      {
        ATerm f_27 = ATgetArgument(t, 1);
        if(match_cons(f_27, sym__2))
          {
            q_24 = ATgetArgument(f_27, 0);
            r_24 = ATgetArgument(f_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_24), n_24), (ATerm) ATinsert(CheckATermList(r_24), p_24));
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm h_27 = t;
  if((PushChoice() == 0))
    {
      ATerm y_25 = NULL,z_25 = NULL,b_26 = NULL,a_4 = NULL;
      b_26 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_26);
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_25);
      a_4 = t;
      t = SSLsetAnnotations(a_4, y_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_27;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_26 = ATgetFirst((ATermList) t);
      d_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if(match_cons(i_27, sym__2))
        {
          g_26 = ATgetArgument(i_27, 0);
          h_26 = ATgetArgument(i_27, 1);
        }
      else
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(match_cons(j_27, sym__2))
          {
            i_26 = ATgetArgument(j_27, 0);
            j_26 = ATgetArgument(j_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_26), g_26), (ATerm) ATinsert(CheckATermList(j_26), h_26));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_26 = ATgetFirst((ATermList) t);
      l_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_26, l_26);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(match_cons(l_27, sym__2))
        {
          m_26 = ATgetArgument(l_27, 0);
          n_26 = ATgetArgument(l_27, 1);
        }
      else
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(match_cons(m_27, sym__2))
          {
            o_26 = ATgetArgument(m_27, 0);
            p_26 = ATgetArgument(m_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_26), m_26), (ATerm) ATinsert(CheckATermList(p_26), n_26));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,c_65 = NULL;
  x_64 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      y_64 = ATgetArgument(t, 0);
      c_65 = ATgetArgument(t, 1);
      w_64 = ATgetArgument(t, 2);
      {
        ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,z_3 = NULL;
        t = w_64;
        t = fetch_1_0(h_4, t);
        t = w_64;
        t = genzip_4_0(j_4, m_4, n_4, LiftPrimArg_0_0, t);
        w_23 = t;
        if(match_cons(t, sym__2))
          {
            s_23 = ATgetArgument(t, 0);
            t_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_23);
        r_23 = t;
        t = s_23;
        t = concat_0_0(t);
        u_23 = t;
        t = t_23;
        t = genzip_4_0(p_4, q_4, t_4, _id, t);
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_23, v_23);
        z_3 = t;
        t = SSLsetAnnotations(z_3, r_23);
        if(match_cons(t, sym__2))
          {
            o_23 = ATgetArgument(t, 0);
            {
              ATerm n_27 = ATgetArgument(t, 1);
              if(match_cons(n_27, sym__2))
                {
                  p_23 = ATgetArgument(n_27, 0);
                  q_23 = ATgetArgument(n_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_23), (ATerm) ATmakeAppl(sym_PrimT_3, y_64, c_65, q_23)));
      }
    }
  else
    {
      ATerm h_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,b_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          y_64 = ATgetArgument(t, 0);
          c_65 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_65;
      t = fetch_1_0(u_4, t);
      t = c_65;
      t = genzip_4_0(v_4, w_4, y_4, LiftPrimArg_0_0, t);
      w_25 = t;
      if(match_cons(t, sym__2))
        {
          s_25 = ATgetArgument(t, 0);
          t_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_25);
      r_25 = t;
      t = s_25;
      t = concat_0_0(t);
      u_25 = t;
      t = t_25;
      t = genzip_4_0(a_5, c_5, e_5, _id, t);
      v_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
      b_4 = t;
      t = SSLsetAnnotations(b_4, r_25);
      if(match_cons(t, sym__2))
        {
          h_25 = ATgetArgument(t, 0);
          {
            ATerm o_27 = ATgetArgument(t, 1);
            if(match_cons(o_27, sym__2))
              {
                p_25 = ATgetArgument(o_27, 0);
                q_25 = ATgetArgument(o_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, h_25, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_25), (ATerm) ATmakeAppl(sym_PrimT_3, y_64, (ATerm)ATempty, q_25)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm t)
{
  static ATerm f_65 (ATerm t)
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_121(t);
        t = f_65(t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = q_121(t);
      }
    return(t);
  }
  t = f_65(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,o_66 = NULL;
  o_66 = t;
  if(match_cons(t, sym_Con_3))
    {
      f_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
      h_66 = ATgetArgument(t, 2);
      {
        ATerm g_27 = NULL,i_4 = NULL;
        t = SSLgetAnnotations(o_66);
        g_27 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_66, g_66, h_66);
        i_4 = t;
        t = SSLsetAnnotations(i_4, g_27);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = o_66;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm r_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_27;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm j_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
  o_68 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_68 = ATgetArgument(t, 0);
      q_68 = ATgetArgument(t, 1);
      j_68 = ATgetArgument(t, 2);
      {
        ATerm z_27 = NULL,k_4 = NULL;
        t = SSLgetAnnotations(o_68);
        z_27 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, p_68, q_68, j_68);
        k_4 = t;
        t = SSLsetAnnotations(k_4, z_27);
      }
    }
  else
    {
      ATerm r_28 = NULL,l_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          p_68 = ATgetArgument(t, 0);
          q_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_68);
      r_28 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, p_68, q_68);
      l_4 = t;
      t = SSLsetAnnotations(l_4, r_28);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm s_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm x_68 = NULL,d_69 = NULL,e_69 = NULL,i_69 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      x_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_68;
  if(match_cons(t, sym_StratRule_3))
    {
      d_69 = ATgetArgument(t, 0);
      e_69 = ATgetArgument(t, 1);
      i_69 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_69), (ATerm) ATmakeAppl(sym_Where_1, i_69)), d_69));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          d_69 = ATgetArgument(t, 0);
          e_69 = ATgetArgument(t, 1);
          i_69 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_69;
      t = pureterm_0_0(t);
      t = e_69;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, e_69)), (ATerm) ATmakeAppl(sym_Where_1, i_69)), (ATerm) ATmakeAppl(sym_Match_1, d_69)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  static ATerm e_70 (ATerm t)
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_116(t);
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = SRTS_one(e_70, t);
      }
    return(t);
  }
  t = e_70(t);
  return(t);
}
static ATerm e_10 (ATerm l_29, ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
  t = new_0_0(t);
  j_70 = t;
  t = l_29;
  {
    static ATerm k_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm v_27 = ATgetArgument(t, 0);
          if(match_cons(v_27, sym_Var_1))
            {
              if(((i_70 != NULL) && (i_70 != ATgetArgument(v_27, 0))))
                _fail(ATgetArgument(v_27, 0));
              else
                i_70 = ATgetArgument(v_27, 0);
            }
          else
            _fail(t);
          if(((g_70 != NULL) && (g_70 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_70 = ATgetArgument(t, 1);
          {
            ATerm y_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, i_70);
      return(t);
    }
    t = oncetd_1_0(k_5, t);
  }
  k_70 = t;
  t = m_29;
  {
    static ATerm m_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm b_28 = ATgetArgument(t, 0);
          if(match_cons(b_28, sym_Var_1))
            {
              if(((i_70 != NULL) && (i_70 != ATgetArgument(b_28, 0))))
                _fail(ATgetArgument(b_28, 0));
              else
                i_70 = ATgetArgument(b_28, 0);
            }
          else
            _fail(t);
          if(((h_70 != NULL) && (h_70 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_70 = ATgetArgument(t, 1);
          {
            ATerm c_28 = ATgetArgument(t, 2);
            if(match_cons(c_28, sym_CallT_3))
              {
                if(((f_70 != NULL) && (f_70 != ATgetArgument(c_28, 0))))
                  _fail(ATgetArgument(c_28, 0));
                else
                  f_70 = ATgetArgument(c_28, 0);
                {
                  ATerm d_28 = ATgetArgument(c_28, 1);
                  if(((ATgetType(d_28) != AT_LIST) || !(ATisEmpty(d_28))))
                    _fail(t);
                }
                {
                  ATerm e_28 = ATgetArgument(c_28, 2);
                  if(((ATgetType(e_28) != AT_LIST) || !(ATisEmpty(e_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_70);
      return(t);
    }
    t = oncetd_1_0(m_5, t);
  }
  l_70 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_70), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, k_70, l_70, (ATerm) ATmakeAppl(sym_Seq_2, n_29, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(f_70), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_70), not_null(h_70), term_w_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_70)), (ATerm) ATmakeAppl(sym_Var_1, j_70))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
          e_71 = t;
          if(match_cons(t, sym_SRule_1))
            {
              f_71 = ATgetArgument(t, 0);
              t = f_71;
              if(match_cons(t, sym_Rule_3))
                {
                  b_71 = ATgetArgument(t, 0);
                  c_71 = ATgetArgument(t, 1);
                  d_71 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = e_71;
              t = e_10(b_71, c_71, d_71, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm g_29 = NULL,o_29 = NULL,o_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  f_71 = ATgetArgument(t, 0);
                  g_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_71);
              g_29 = t;
              t = g_71;
              t = desugarRule_0_0(t);
              o_29 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, f_71, o_29);
              o_4 = t;
              t = SSLsetAnnotations(o_4, g_29);
            }
          LocalPopChoice(j_28);
        }
      else
        {
          t = h_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    t = topdown_1_0(q_115, t);
    return(t);
  }
  t = q_115(t);
  t = SRTS_all(o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm k_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(o_28);
    }
  else
    {
      t = k_28;
    }
  t = repeat_2_0(r_5, _id, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
            n_72 = t;
            if(match_cons(t, sym_CallT_3))
              {
                o_72 = ATgetArgument(t, 0);
                p_72 = ATgetArgument(t, 1);
                q_72 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_72;
            t = a_10(o_72, p_72, q_72, t);
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            {
              ATerm u_28 = t;
              int v_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(v_28);
                }
              else
                {
                  t = u_28;
                  {
                    ATerm w_28 = t;
                    int x_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(x_28);
                      }
                    else
                      {
                        t = w_28;
                        {
                          ATerm y_28 = t;
                          int z_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_29 = t;
                              int b_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_73 = NULL,g_73 = NULL,m_73 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      f_73 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_73;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      g_73 = ATgetArgument(t, 0);
                                      t = g_73;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          g_73 = ATgetArgument(t, 0);
                                          m_73 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, g_73, m_73);
                                    }
                                  LocalPopChoice(b_29);
                                }
                              else
                                {
                                  t = a_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(z_28);
                            }
                          else
                            {
                              t = y_28;
                              {
                                ATerm c_29 = t;
                                int d_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(d_29);
                                  }
                                else
                                  {
                                    t = c_29;
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
  t = topdown_1_0(p_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL;
  t_74 = t;
  t = SSL_explode_term(t_74);
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_29 = ATgetArgument(t, 1);
        if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
          {
            s_74 = ATgetFirst((ATermList) f_29);
            {
              ATerm h_29 = (ATerm) ATgetNext((ATermList) f_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_74;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,w_29 = NULL;
  w_29 = t;
  t = SSL_explode_term(w_29);
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            ATerm k_29 = ATgetFirst((ATermList) j_29);
            t_29 = (ATerm) ATgetNext((ATermList) j_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_u_20;
  u_29 = t;
  t = SSL_mkterm(u_29, t_29);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm w_119 (ATerm), ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  static ATerm u_74 (ATerm t)
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
        m_74 = t;
        t = map_1_0(s_5, t);
        t = w_119(t);
        n_74 = t;
        t = m_74;
        t = map_1_0(v_5, t);
        t = u_74(t);
        o_74 = t;
        t = (ATerm) ATinsert(CheckATermList(o_74), n_74);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = map_1_0(x_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = u_74(t);
  g_74 = t;
  t = term_u_20;
  f_74 = t;
  t = SSL_mkterm(f_74, g_74);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm x_74 = NULL;
  x_74 = t;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
        t = x_74;
        t = new_0_0(t);
        a_75 = t;
        t = new_0_0(t);
        b_75 = t;
        t = new_0_0(t);
        c_75 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_75), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, x_74), (ATerm) ATmakeAppl(sym_Var_1, b_75))), (ATerm) ATmakeAppl(sym_Var_1, c_75)), (ATerm)ATmakeAppl(sym_VarDec_2, a_75, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_29), term_y_29)), b_75, (ATerm)ATmakeAppl(sym_Var_1, b_75), c_75, (ATerm) ATmakeAppl(sym_Var_1, c_75));
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        {
          ATerm e_75 = NULL,h_75 = NULL,i_75 = NULL;
          t = x_74;
          t = new_0_0(t);
          e_75 = t;
          t = new_0_0(t);
          h_75 = t;
          t = new_0_0(t);
          i_75 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_75), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, x_74), (ATerm) ATmakeAppl(sym_Var_1, h_75))), (ATerm) ATmakeAppl(sym_Var_1, i_75)), (ATerm)ATmakeAppl(sym_VarDec_2, e_75, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_29), term_y_29)), h_75, (ATerm)ATmakeAppl(sym_Var_1, h_75), i_75, (ATerm) ATmakeAppl(sym_Var_1, i_75));
        }
      }
  }
  return(t);
}
static ATerm f_10 (ATerm q_54, ATerm r_54, ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(q_54, r_54);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      t = SSL_subtr(q_54, r_54);
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm j_75 = NULL,l_75 = NULL;
  if(match_cons(t, sym__2))
    {
      j_75 = ATgetArgument(t, 0);
      l_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_75, l_75, (ATerm) ATempty);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm m_75 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      if(((ATgetType(b_30) != AT_INT) || (ATgetInt((ATermInt) b_30) != 0)))
        _fail(t);
      {
        ATerm c_30 = ATgetArgument(t, 1);
      }
      m_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_75;
  return(t);
}
ATerm copy_1_0 (ATerm k_138 (ATerm), ATerm t)
{
  static ATerm d_6 (ATerm t)
  {
    ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,t_75 = NULL,u_75 = NULL,a_76 = NULL;
    if(match_cons(t, sym__3))
      {
        p_75 = ATgetArgument(t, 0);
        q_75 = ATgetArgument(t, 1);
        r_75 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_75, term_w_19);
    t = geq_0_0(t);
    t = term_w_19;
    a_76 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_75, term_w_19);
    t = f_10(p_75, a_76, t);
    t_75 = t;
    t = q_75;
    t = k_138(t);
    u_75 = t;
    t = (ATerm) ATmakeAppl(sym__3, t_75, q_75, (ATerm) ATinsert(CheckATermList(r_75), u_75));
    return(t);
  }
  t = for_3_0(z_5, b_6, d_6, t);
  return(t);
}
static ATerm g_10 (ATerm h_24, ATerm i_24, ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL;
  t = new_0_0(t);
  b_76 = t;
  t = new_0_0(t);
  c_76 = t;
  t = new_0_0(t);
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_76), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_24)), (ATerm) ATmakeAppl(sym_Var_1, c_76))), (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_24)), (ATerm) ATmakeAppl(sym_Var_1, d_76)))), (ATerm)ATmakeAppl(sym_VarDec_2, b_76, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_29), term_y_29)), c_76, (ATerm)ATmakeAppl(sym_Var_1, c_76), d_76, (ATerm) ATmakeAppl(sym_Var_1, d_76));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_76 = ATgetFirst((ATermList) t);
      k_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_76;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_76;
    }
  else
    {
      t = k_76;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm n_80 (ATerm h_77, ATerm i_77, ATerm j_77, ATerm k_77, ATerm t)
{
  ATerm v_77 = NULL,z_77 = NULL,a_78 = NULL,c_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL;
  t = term_w_19;
  n_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_77, term_w_19);
  t = j_11(i_77, n_78, t);
  m_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_78, term_d_30);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_77 = ATgetFirst((ATermList) t);
      a_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_78;
  t = last_0_0(t);
  v_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_78), z_77), a_78);
  t = genzip_4_0(e_6, f_6, h_6, k_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      c_78 = ATgetArgument(t, 0);
      e_78 = ATgetArgument(t, 1);
      f_78 = ATgetArgument(t, 2);
      g_78 = ATgetArgument(t, 3);
      h_78 = ATgetArgument(t, 4);
      i_78 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_78), f_78), a_78);
  t = concat_0_0(t);
  l_78 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, h_77, term_f_30), e_78, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(l_78), z_77), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_77)), (ATerm) ATmakeAppl(sym_Op_2, h_77, g_78))), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_77)), (ATerm) ATmakeAppl(sym_Op_2, h_77, i_78))), (ATerm) ATmakeAppl(sym_Seqs_1, c_78)))));
  return(t);
}
static ATerm o_80 (ATerm e_79, ATerm f_79, ATerm g_79, ATerm h_79, ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL;
  t = h_79;
  t = new_0_0(t);
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_79, (ATerm) ATmakeAppl(sym_Var_1, l_79));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      m_79 = ATgetArgument(t, 0);
      n_79 = ATgetArgument(t, 1);
      o_79 = ATgetArgument(t, 2);
      p_79 = ATgetArgument(t, 3);
      r_79 = ATgetArgument(t, 4);
      s_79 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_79, r_79);
  t = conc_0_0(t);
  t_79 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, e_79, term_g_30), n_79, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(t_79), l_79), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_79)), (ATerm) ATmakeAppl(sym_Op_2, e_79, p_79))), (ATerm)ATmakeAppl(sym_Op_2, e_79, s_79), (ATerm) ATmakeAppl(sym_Seqs_1, m_79)))));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      ATerm m_30 = ATgetArgument(t, 1);
      if(((ATgetType(m_30) != AT_LIST) || !(ATisEmpty(m_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm o_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_30 = ATgetArgument(t, 0);
      if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
        {
          o_78 = ATgetFirst((ATermList) n_30);
          r_78 = (ATerm) ATgetNext((ATermList) n_30);
        }
      else
        _fail(t);
      {
        ATerm o_30 = ATgetArgument(t, 1);
        if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
          {
            s_78 = ATgetFirst((ATermList) o_30);
            t_78 = (ATerm) ATgetNext((ATermList) o_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_78, s_78), (ATerm) ATmakeAppl(sym__2, r_78, t_78));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL;
  if(match_cons(t, sym__2))
    {
      u_78 = ATgetArgument(t, 0);
      v_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_78), u_78);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm w_78 = NULL,y_78 = NULL;
  if(match_cons(t, sym__2))
    {
      w_78 = ATgetArgument(t, 0);
      y_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(w_78, y_78, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,z_79 = NULL,a_80 = NULL,f_80 = NULL,g_80 = NULL;
  v_79 = t;
  if(match_cons(t, sym__3))
    {
      w_79 = ATgetArgument(t, 0);
      z_79 = ATgetArgument(t, 1);
      a_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_79;
  if(match_string(t, "T"))
    {
      t = a_80;
      if(match_cons(t, sym__2))
        {
          f_80 = ATgetArgument(t, 0);
          g_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_80;
      if(match_int(t, 0))
        {
          ATerm p_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_80(w_79, f_80, g_80, v_79, t);
              LocalPopChoice(q_30);
            }
          else
            {
              t = p_30;
              {
                ATerm k_80 = NULL;
                t = v_79;
                t = new_0_0(t);
                k_80 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, w_79, term_f_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_80), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_80)), (ATerm) ATmakeAppl(sym_Op_2, w_79, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_80)), (ATerm) ATmakeAppl(sym_Op_2, w_79, (ATerm) ATempty))), term_w_22))));
              }
            }
        }
      else
        {
          t = n_80(w_79, f_80, g_80, v_79, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = a_80;
      if(match_cons(t, sym__2))
        {
          f_80 = ATgetArgument(t, 0);
          g_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_80(w_79, f_80, g_80, v_79, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_127 (ATerm), ATerm t)
{
  ATerm y_19 = NULL;
  static ATerm n_6 (ATerm t)
  {
    t = z_127(t);
    if(((y_19 != NULL) && (y_19 != t)))
      _fail(t);
    else
      y_19 = t;
    return(t);
  }
  t = fetch_1_0(n_6, t);
  t = not_null(y_19);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  t = term_i_16;
  a_20 = t;
  t = (ATerm) ATinsert(ATempty, term_r_30);
  b_20 = t;
  t = SSL_printnl(a_20, b_20);
  t = term_w_19;
  z_19 = t;
  t = SSL_exit(z_19);
  t = (ATerm) ATinsert(ATempty, term_r_30);
  return(t);
}
ATerm debug_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,g_20 = NULL,h_20 = NULL;
  c_20 = t;
  t = c_123(t);
  d_20 = t;
  t = term_i_16;
  g_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_20), d_20);
  h_20 = t;
  t = SSL_printnl(g_20, h_20);
  t = c_20;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_t_30;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  ATerm u_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm x_30 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
          p_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(w_30);
      t = p_15;
      t = foldr_3_0(s_6, t_6, v_6, t);
      t = o_15;
      t = foldr_3_0(w_6, y_6, b_7, t);
    }
  else
    {
      t = u_30;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm y_30 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
          p_15 = ATgetArgument(t, 2);
          {
            ATerm z_30 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = p_15;
      t = foldr_3_0(c_7, d_7, e_7, t);
      t = o_15;
      t = foldr_3_0(f_7, g_7, h_7, t);
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(t_15, u_15, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(v_15, w_15, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(z_15, a_16, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(b_16, c_16, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      ATerm b_31 = ATgetArgument(t, 1);
      ATerm c_31 = ATgetArgument(t, 2);
      ATerm d_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_20 = NULL;
      static ATerm o_6 (ATerm t)
      {
        ATerm r_20 = NULL,s_20 = NULL;
        r_20 = t;
        {
          ATerm h_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  s_20 = ATgetArgument(t, 0);
                  {
                    ATerm l_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm m_31 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(k_31);
              t = s_20;
              if(((q_20 != NULL) && (q_20 != t)))
                _fail(t);
              else
                q_20 = t;
              t = r_20;
            }
          else
            {
              t = h_31;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  s_20 = ATgetArgument(t, 0);
                  {
                    ATerm o_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm p_31 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm d_32 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = s_20;
              if(((q_20 != NULL) && (q_20 != t)))
                _fail(t);
              else
                q_20 = t;
              t = r_20;
            }
        }
        return(t);
      }
      t = fetch_1_0(o_6, t);
      {
        static ATerm p_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_20 = ATgetArgument(t, 0);
              {
                ATerm e_32 = ATgetArgument(t, 1);
              }
              {
                ATerm g_32 = ATgetArgument(t, 2);
              }
              {
                ATerm i_32 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_6, t);
      }
      t = not_null(q_20);
      t = debug_1_0(q_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm l_22 = NULL;
        l_22 = t;
        t = map_1_0(r_6, t);
        t = l_22;
        {
          ATerm j_32 = t;
          int k_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(i_7, t);
              LocalPopChoice(k_32);
            }
          else
            {
              t = j_32;
              {
                ATerm e_16 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_16 = ATgetFirst((ATermList) t);
                    {
                      ATerm l_32 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = e_16;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,l_16 = NULL;
  o_22 = t;
  t = SSL_explode_term(o_22);
  if(match_cons(t, sym__2))
    {
      ATerm m_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_32 = ATgetArgument(t, 1);
        if(((ATgetType(n_32) == AT_LIST) && !(ATisEmpty(n_32))))
          {
            p_22 = ATgetFirst((ATermList) n_32);
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
  t = SSL_explode_term(o_22);
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_32 = ATgetArgument(t, 1);
        if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
          {
            ATerm t_32 = ATgetFirst((ATermList) s_32);
            ATerm u_32 = (ATerm) ATgetNext((ATermList) s_32);
            if(((ATgetType(u_32) == AT_LIST) && !(ATisEmpty(u_32))))
              {
                l_16 = ATgetFirst((ATermList) u_32);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, p_22, l_16);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(j_7, k_7, t);
  return(t);
}
ATerm alltd_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  static ATerm q_22 (ATerm t)
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_117(t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = SRTS_all(q_22, t);
      }
    return(t);
  }
  t = q_22(t);
  return(t);
}
static ATerm s_9 (ATerm b_73, ATerm c_73, ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  s_22 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_73, c_73);
        t = o_11(b_73, c_73, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_33 = ATgetFirst((ATermList) t);
            r_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_32);
        {
          ATerm t_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_73, c_73, r_22);
          t = lookup_table_0_1(b_73, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_11(c_73, r_22, t_22, t);
          t = (ATerm) ATmakeAppl(sym__3, b_73, c_73, r_22);
        }
      }
    else
      {
        t = y_32;
        {
          ATerm n_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_73, c_73);
          t = lookup_table_0_1(b_73, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_11(c_73, n_23, t);
          t = (ATerm) ATmakeAppl(sym__2, b_73, c_73);
        }
      }
  }
  t = s_22;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_148 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,l_24 = NULL,o_24 = NULL,s_24 = NULL;
  s_24 = t;
  t = j_148(t);
  o_24 = t;
  {
    ATerm f_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_24 = NULL;
        t = term_i_33;
        t_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_24, term_i_33);
        t = o_11(o_24, t_24, t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = f_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_24 = ATgetFirst((ATermList) t);
      g_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm j_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_24), l_24);
        LocalPopChoice(l_33);
        {
          ATerm v_24 = NULL,x_24 = NULL,a_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_24, term_i_33);
          t = lookup_table_0_1(o_24, t);
          a_25 = t;
          t = term_i_33;
          v_24 = t;
          t = a_25;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_11(v_24, x_24, t);
          t = (ATerm) ATmakeAppl(sym__2, o_24, term_i_33);
        }
      }
    else
      {
        t = j_33;
        {
          ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_24, term_i_33, g_24);
          t = lookup_table_0_1(o_24, t);
          k_25 = t;
          t = term_i_33;
          i_25 = t;
          t = k_25;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_11(i_25, g_24, j_25, t);
          t = (ATerm) ATmakeAppl(sym__3, o_24, term_i_33, g_24);
        }
      }
  }
  t = l_24;
  {
    static ATerm m_7 (ATerm t)
    {
      ATerm m_25 = NULL;
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, m_25);
      t = s_9(o_24, m_25, t);
      return(t);
    }
    t = map_1_0(m_7, t);
  }
  t = s_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t)
{
  ATerm m_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_119(t);
      t = c_119(t);
      LocalPopChoice(o_33);
    }
  else
    {
      t = m_33;
      t = c_119(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_148 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,a_26 = NULL,e_26 = NULL,f_26 = NULL,q_26 = NULL,s_26 = NULL,d_27 = NULL;
  a_26 = t;
  t = i_148(t);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, term_i_33);
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_33 = ATgetArgument(t, 0);
            ATerm t_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_33;
        k_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_25, term_i_33);
        t = o_11(x_25, k_27, t);
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        t = (ATerm) ATempty;
      }
  }
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_25, term_i_33, (ATerm) ATinsert(CheckATermList(e_26), (ATerm) ATempty));
  t = lookup_table_0_1(x_25, t);
  d_27 = t;
  t = term_i_33;
  f_26 = t;
  t = (ATerm) ATinsert(CheckATermList(e_26), (ATerm) ATempty);
  q_26 = t;
  t = d_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(f_26, q_26, s_26, t);
  t = a_26;
  return(t);
}
ATerm scope_2_0 (ATerm k_148 (ATerm), ATerm l_148 (ATerm), ATerm t)
{
  static ATerm n_7 (ATerm t)
  {
    t = end_scope_1_0(k_148, t);
    return(t);
  }
  t = begin_scope_1_0(k_148, t);
  t = restore_always_2_0(l_148, n_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,a_28 = NULL,i_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  a_28 = t;
  if(match_cons(t, sym__2))
    {
      i_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_28 = ATgetFirst((ATermList) t);
      n_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_28;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_27;
            if((i_28 != t))
              {
                _fail(t);
              }
            t = x_27;
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            t = (ATerm) ATmakeAppl(sym__2, i_28, n_28);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, i_28, n_28);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      if(((ATgetType(x_33) != AT_LIST) || !(ATisEmpty(x_33))))
        _fail(t);
      {
        ATerm b_34 = ATgetArgument(t, 1);
        if(((ATgetType(b_34) != AT_LIST) || !(ATisEmpty(b_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_34 = ATgetArgument(t, 0);
      if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
        {
          v_31 = ATgetFirst((ATermList) c_34);
          w_31 = (ATerm) ATgetNext((ATermList) c_34);
        }
      else
        _fail(t);
      {
        ATerm d_34 = ATgetArgument(t, 1);
        if(((ATgetType(d_34) == AT_LIST) && !(ATisEmpty(d_34))))
          {
            x_31 = ATgetFirst((ATermList) d_34);
            y_31 = (ATerm) ATgetNext((ATermList) d_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_31, x_31), (ATerm) ATmakeAppl(sym__2, w_31, y_31));
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm z_31 = NULL,f_32 = NULL;
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      f_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_32), z_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,j_31 = NULL;
  i_30 = t;
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_34 = ATgetArgument(t, 0);
            ATerm h_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(f_34);
        t = i_30;
      }
    else
      {
        t = e_34;
        {
          ATerm r_31 = NULL;
          if(match_cons(t, sym__3))
            {
              j_30 = ATgetArgument(t, 0);
              k_30 = ATgetArgument(t, 1);
              j_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, j_30, k_30);
          t = genzip_4_0(o_7, p_7, q_7, _id, t);
          r_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_31, j_31);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL;
  static ATerm r_7 (ATerm t)
  {
    ATerm o_16 = NULL;
    t = z_114(t);
    o_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_16, not_null(r_32));
    t = lookup_0_0(t);
    t = a_115(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((r_32 != NULL) && (r_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_32;
  t = alltd_1_0(r_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm v_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_34 = ATgetArgument(t, 0);
      {
        ATerm i_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_34;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm w_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_34;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_j_34;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      if(((ATgetType(l_34) != AT_LIST) || !(ATisEmpty(l_34))))
        _fail(t);
      {
        ATerm m_34 = ATgetArgument(t, 1);
        if(((ATgetType(m_34) != AT_LIST) || !(ATisEmpty(m_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm z_34 = NULL,e_35 = NULL,f_35 = NULL,o_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      if(((ATgetType(o_34) == AT_LIST) && !(ATisEmpty(o_34))))
        {
          z_34 = ATgetFirst((ATermList) o_34);
          e_35 = (ATerm) ATgetNext((ATermList) o_34);
        }
      else
        _fail(t);
      {
        ATerm p_34 = ATgetArgument(t, 1);
        if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
          {
            f_35 = ATgetFirst((ATermList) p_34);
            o_35 = (ATerm) ATgetNext((ATermList) p_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_34, f_35), (ATerm) ATmakeAppl(sym__2, e_35, o_35));
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  if(match_cons(t, sym__2))
    {
      p_35 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_35), p_35);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,n_36 = NULL,q_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if(match_cons(q_34, sym_VarDec_2))
        {
          r_35 = ATgetArgument(q_34, 0);
          {
            ATerm s_34 = ATgetArgument(q_34, 1);
          }
        }
      else
        _fail(t);
      s_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, r_35);
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_34, s_35);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, r_35), (ATerm) ATmakeAppl(sym_Defined_2, term_t_34, s_35));
  t = w_10(j_8, n_36, q_36, t);
  t = t_35;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_j_34;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,v_16 = NULL;
  r_36 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm x_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_j_34;
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, r_36);
  t = y_10(v_16, r_36, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm y_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_34) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      s_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_36;
  return(t);
}
static ATerm w_9 (ATerm t_26, ATerm u_26, ATerm y_26, ATerm v_26, ATerm x_26, ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,d_33 = NULL;
  t = v_26;
  t = map_1_0(s_7, t);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_33, u_26, x_26);
  t = substitute_2_0(t_7, _id, t);
  b_33 = t;
  {
    static ATerm v_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, y_26, t_26);
      t = genzip_4_0(a_8, g_8, h_8, i_8, t);
      t = b_33;
      t = alltd_1_0(k_8, t);
      if(((d_33 != NULL) && (d_33 != t)))
        _fail(t);
      else
        d_33 = t;
      return(t);
    }
    t = scope_2_0(u_7, v_7, t);
  }
  t = not_null(d_33);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,y_39 = NULL,z_39 = NULL,b_40 = NULL,r_4 = NULL;
  b_40 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_40);
  t_39 = t;
  t = u_39;
  t = new_0_0(t);
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_39, y_39);
  r_4 = t;
  t = SSLsetAnnotations(r_4, t_39);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm c_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,s_4 = NULL;
  h_40 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_40 = ATgetArgument(t, 0);
      f_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_40);
  c_40 = t;
  t = e_40;
  t = new_0_0(t);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_40, f_40);
  s_4 = t;
  t = SSLsetAnnotations(s_4, c_40);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm i_40 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_40 = ATgetArgument(t, 0);
      {
        ATerm a_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, i_40);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm j_40 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_40 = ATgetArgument(t, 0);
      {
        ATerm b_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, j_40);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,w_38 = NULL,a_39 = NULL,f_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,r_39 = NULL;
  n_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_35 = ATgetFirst((ATermList) t);
      if(match_cons(d_35, sym_SDefT_4))
        {
          f_38 = ATgetArgument(d_35, 0);
          g_38 = ATgetArgument(d_35, 1);
          w_38 = ATgetArgument(d_35, 2);
          {
            ATerm i_35 = ATgetArgument(d_35, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm g_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_38;
  t = map_1_0(l_8, t);
  a_39 = t;
  t = w_38;
  t = map_1_0(m_8, t);
  f_39 = t;
  t = a_39;
  t = map_1_0(n_8, t);
  o_39 = t;
  t = f_39;
  t = map_1_0(o_8, t);
  p_39 = t;
  t = n_39;
  {
    static ATerm p_8 (ATerm t)
    {
      ATerm k_40 = NULL,l_40 = NULL,p_40 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm j_35 = ATgetArgument(t, 0);
          k_40 = ATgetArgument(t, 1);
          l_40 = ATgetArgument(t, 2);
          p_40 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = w_9(o_39, p_39, k_40, l_40, p_40, t);
      return(t);
    }
    t = map_1_0(p_8, t);
  }
  t = choices_0_0(t);
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_38, a_39, f_39, r_39);
  return(t);
}
static ATerm a_83 (ATerm f_81, ATerm g_81, ATerm h_81, ATerm i_81, ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,c_82 = NULL,d_82 = NULL,x_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_81, g_81);
  t = Definitions_0_0(t);
  w_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_81, h_81);
  d_82 = t;
  if(match_cons(t, sym__2))
    {
      ATerm k_35 = ATgetArgument(t, 0);
      ATerm l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_82);
  x_81 = t;
  t = w_81;
  {
    ATerm n_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_82 = NULL,h_82 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_82 = ATgetFirst((ATermList) t);
            h_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_82;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_82;
        LocalPopChoice(u_35);
      }
    else
      {
        t = n_35;
        {
          ATerm w_35 = t;
          int x_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(x_35);
            }
          else
            {
              t = w_35;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  c_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_82, h_81);
  x_4 = t;
  t = SSLsetAnnotations(x_4, x_81);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL;
  n_82 = t;
  if(match_cons(t, sym__2))
    {
      o_82 = ATgetArgument(t, 0);
      r_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_82;
  if(match_cons(t, sym__2))
    {
      p_82 = ATgetArgument(t, 0);
      q_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_82;
  if(match_cons(t, sym_Mod_2))
    {
      l_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
      {
        ATerm y_35 = t;
        int z_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_82 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, l_82, m_82, q_82);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            x_82 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_82, r_82);
            LocalPopChoice(z_35);
          }
        else
          {
            t = y_35;
            t = a_83(p_82, q_82, r_82, n_82, t);
          }
      }
    }
  else
    {
      t = a_83(p_82, q_82, r_82, n_82, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_128 (ATerm), ATerm t)
{
  static ATerm g_84 (ATerm t)
  {
    ATerm a_84 = NULL,b_84 = NULL,e_84 = NULL;
    e_84 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_84 = ATgetFirst((ATermList) t);
        b_84 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_30 = NULL,h_30 = NULL,z_4 = NULL;
          t = SSLgetAnnotations(e_84);
          e_30 = t;
          t = b_84;
          t = g_84(t);
          h_30 = t;
          t = (ATerm) ATinsert(CheckATermList(h_30), a_84);
          z_4 = t;
          t = SSLsetAnnotations(z_4, e_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_84;
        t = e_128(t);
      }
    return(t);
  }
  t = g_84(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
  c_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_83;
    }
  else
    {
      static ATerm q_8 (ATerm t)
      {
        t = not_null(e_83);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_83 = ATgetFirst((ATermList) t);
          if(((e_83 != NULL) && (e_83 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_83;
      t = at_end_1_0(q_8, t);
    }
  return(t);
}
static ATerm b_85 (ATerm k_84, ATerm t)
{
  ATerm l_84 = NULL;
  t = SSL_explode_term(k_84);
  if(match_cons(t, sym__2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_84;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,u_84 = NULL;
  u_84 = t;
  if(match_cons(t, sym__2))
    {
      o_84 = ATgetArgument(t, 0);
      p_84 = ATgetArgument(t, 1);
      {
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_8 (ATerm t)
            {
              t = p_84;
              return(t);
            }
            t = o_84;
            t = at_end_1_0(r_8, t);
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            t = b_85(u_84, t);
          }
      }
    }
  else
    {
      t = b_85(u_84, t);
    }
  return(t);
}
static ATerm m_10 (ATerm s_134 (ATerm), ATerm i_65, ATerm h_65, ATerm t)
{
  static ATerm f_86 (ATerm t)
  {
    ATerm w_85 = NULL,y_85 = NULL,z_85 = NULL;
    w_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_85;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_85 = ATgetFirst((ATermList) t);
            z_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_36 = t;
          int e_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_85;
              {
                static ATerm s_8 (ATerm t)
                {
                  t = h_65;
                  return(t);
                }
                t = z_10(s_134, s_8, y_85, z_85, t);
              }
              t = f_86(t);
              LocalPopChoice(e_36);
            }
          else
            {
              t = d_36;
              {
                ATerm s_30 = NULL,v_30 = NULL,b_5 = NULL;
                t = SSLgetAnnotations(w_85);
                s_30 = t;
                t = z_85;
                t = f_86(t);
                v_30 = t;
                t = (ATerm) ATinsert(CheckATermList(v_30), y_85);
                b_5 = t;
                t = SSLsetAnnotations(b_5, s_30);
              }
            }
        }
      }
    return(t);
  }
  t = i_65;
  t = f_86(t);
  return(t);
}
ATerm genzip_4_0 (ATerm g_120 (ATerm), ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm t)
{
  static ATerm n_86 (ATerm t)
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_120(t);
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        {
          ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,d_5 = NULL;
          t = h_120(t);
          m_86 = t;
          if(match_cons(t, sym__2))
            {
              i_86 = ATgetArgument(t, 0);
              j_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_86);
          h_86 = t;
          t = i_86;
          t = j_120(t);
          k_86 = t;
          t = j_86;
          t = n_86(t);
          l_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_86, l_86);
          d_5 = t;
          t = SSLsetAnnotations(d_5, h_86);
          t = i_120(t);
        }
      }
    return(t);
  }
  t = n_86(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      if(((ATgetType(h_36) != AT_LIST) || !(ATisEmpty(h_36))))
        _fail(t);
      {
        ATerm k_36 = ATgetArgument(t, 1);
        if(((ATgetType(k_36) != AT_LIST) || !(ATisEmpty(k_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_36 = ATgetArgument(t, 0);
      if(((ATgetType(o_36) == AT_LIST) && !(ATisEmpty(o_36))))
        {
          u_86 = ATgetFirst((ATermList) o_36);
          v_86 = (ATerm) ATgetNext((ATermList) o_36);
        }
      else
        _fail(t);
      {
        ATerm p_36 = ATgetArgument(t, 1);
        if(((ATgetType(p_36) == AT_LIST) && !(ATisEmpty(p_36))))
          {
            w_86 = ATgetFirst((ATermList) p_36);
            x_86 = (ATerm) ATgetNext((ATermList) p_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_86, w_86), (ATerm) ATmakeAppl(sym__2, v_86, x_86));
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL;
  if(match_cons(t, sym__2))
    {
      y_86 = ATgetArgument(t, 0);
      z_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_86), y_86);
  return(t);
}
static ATerm r_10 (ATerm x_779, ATerm c_780, ATerm d_79, ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL;
  t = SSL_explode_term(c_780);
  if(match_cons(t, sym__2))
    {
      p_86 = ATgetArgument(t, 0);
      r_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_779);
  if(match_cons(t, sym__2))
    {
      if((p_86 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_86, r_86);
  t = genzip_4_0(t_8, u_8, v_8, _id, t);
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_86, d_79);
  t = conc_0_0(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm h_87 = NULL;
  h_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_87);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,f_5 = NULL;
  l_87 = t;
  if(match_cons(t, sym__2))
    {
      j_87 = ATgetArgument(t, 0);
      k_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_87);
  i_87 = t;
  t = k_87;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_87, k_87);
  f_5 = t;
  t = SSLsetAnnotations(f_5, i_87);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
  g_88 = t;
  if(match_cons(t, sym__2))
    {
      h_88 = ATgetArgument(t, 0);
      i_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_88 = ATgetFirst((ATermList) t);
      k_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_88(h_88, i_88, g_88, t);
            LocalPopChoice(w_36);
          }
        else
          {
            t = v_36;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_88), j_88), k_88);
          }
      }
    }
  else
    {
      t = u_88(h_88, i_88, g_88, t);
    }
  return(t);
}
static ATerm u_88 (ATerm m_87, ATerm p_87, ATerm q_87, ATerm t)
{
  ATerm r_87 = NULL,u_87 = NULL,g_5 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  t = SSLgetAnnotations(q_87);
  r_87 = t;
  t = p_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_87 = ATgetFirst((ATermList) t);
      a_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_87;
  if(match_cons(t, sym__2))
    {
      y_87 = ATgetArgument(t, 0);
      z_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_87;
        if((y_87 != t))
          {
            _fail(t);
          }
        t = a_88;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = p_87;
        t = r_10(y_87, z_87, a_88, t);
      }
  }
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_87, u_87);
  g_5 = t;
  t = SSLsetAnnotations(g_5, r_87);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm t_88 = NULL;
  if(match_cons(t, sym__2))
    {
      t_88 = ATgetArgument(t, 0);
      if((t_88 != ATgetArgument(t, 1)))
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
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(w_8, y_8, z_8, t);
      LocalPopChoice(a_37);
    }
  else
    {
      t = z_36;
      {
        ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
        o_88 = t;
        if(match_cons(t, sym__2))
          {
            p_88 = ATgetArgument(t, 0);
            q_88 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_88;
        t = m_10(a_9, p_88, q_88, t);
      }
    }
  return(t);
}
static ATerm t_10 (ATerm d_148 (ATerm), ATerm e_148 (ATerm), ATerm f_148 (ATerm), ATerm u_80, ATerm r_80, ATerm z_80, ATerm v_80, ATerm s_80, ATerm t_80, ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_80, v_80);
  t = d_148(t);
  if(match_cons(t, sym__2))
    {
      w_88 = ATgetArgument(t, 0);
      v_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_88;
  t = e_148(t);
  x_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_88, z_80);
  t = diff_0_0(t);
  y_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_88, r_80);
  t = conc_0_0(t);
  z_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_88, z_80);
  t = conc_0_0(t);
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_80, w_88, s_80);
  t = f_148(t);
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym__5, z_88, a_89, v_88, b_89, t_80);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm d_148 (ATerm), ATerm e_148 (ATerm), ATerm f_148 (ATerm), ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      if(((ATgetType(b_37) == AT_LIST) && !(ATisEmpty(b_37))))
        {
          d_89 = ATgetFirst((ATermList) b_37);
          e_89 = (ATerm) ATgetNext((ATermList) b_37);
        }
      else
        _fail(t);
      f_89 = ATgetArgument(t, 1);
      g_89 = ATgetArgument(t, 2);
      h_89 = ATgetArgument(t, 3);
      i_89 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = t_10(d_148, e_148, f_148, d_89, e_89, f_89, g_89, h_89, i_89, t);
  return(t);
}
ATerm while_not_2_0 (ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm t)
{
  static ATerm j_89 (ATerm t)
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_122(t);
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = h_122(t);
        t = j_89(t);
      }
    return(t);
  }
  t = j_89(t);
  return(t);
}
ATerm for_3_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t)
{
  t = j_122(t);
  t = while_not_2_0(k_122, l_122, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
  if(match_cons(t, sym__3))
    {
      t_89 = ATgetArgument(t, 0);
      u_89 = ATgetArgument(t, 1);
      v_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, t_89, t_89, u_89, v_89, (ATerm) ATempty);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm e_37 = ATgetArgument(t, 0);
      if(((ATgetType(e_37) != AT_LIST) || !(ATisEmpty(e_37))))
        _fail(t);
      {
        ATerm f_37 = ATgetArgument(t, 1);
      }
      {
        ATerm h_37 = ATgetArgument(t, 2);
      }
      y_89 = ATgetArgument(t, 3);
      z_89 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_89, z_89);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, h_9, i_9, t);
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
        ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
        if(match_cons(t, sym__5))
          {
            f_90 = ATgetArgument(t, 0);
            i_90 = ATgetArgument(t, 1);
            j_90 = ATgetArgument(t, 2);
            k_90 = ATgetArgument(t, 3);
            l_90 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = f_90;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_90 = ATgetFirst((ATermList) t);
            h_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, h_90, i_90, j_90, k_90, (ATerm) ATinsert(CheckATermList(l_90), g_90));
      }
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(j_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      c_90 = ATgetArgument(t, 1);
      d_90 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_90), c_90);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm l_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(n_37);
    }
  else
    {
      t = l_37;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  if(match_cons(t, sym__2))
    {
      b_32 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_32;
  if(match_cons(t, sym_Mod_2))
    {
      t_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_32;
            t = l_9(t_31, u_31, c_32, t);
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            t = h_32(b_32, c_32, t);
          }
      }
    }
  else
    {
      t = h_32(b_32, c_32, t);
    }
  return(t);
}
static ATerm h_32 (ATerm i_31, ATerm n_31, ATerm t)
{
  ATerm q_31 = NULL,s_31 = NULL;
  t = term_i_16;
  q_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_16), n_31), term_n_16), i_31), term_j_16);
  s_31 = t;
  t = SSL_printnl(q_31, s_31);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_16), n_31), term_n_16), i_31), term_j_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL;
  t = for_3_0(b_9, c_9, g_9, t);
  o_91 = t;
  if(match_cons(t, sym__2))
    {
      p_91 = ATgetArgument(t, 0);
      q_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_91;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_91;
    }
  else
    {
      ATerm e_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_91 = ATgetFirst((ATermList) t);
          s_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(s_91), r_91);
      t = map_1_0(k_9, t);
      t = term_w_19;
      e_31 = t;
      t = SSL_exit(e_31);
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL;
  if(match_cons(t, sym__2))
    {
      k_92 = ATgetArgument(t, 0);
      l_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(k_92, l_92, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL;
  if(match_cons(t, sym__2))
    {
      m_92 = ATgetArgument(t, 0);
      n_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(m_92, n_92, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm o_92 = NULL;
  if(match_cons(t, sym__2))
    {
      o_92 = ATgetArgument(t, 0);
      if((o_92 != ATgetArgument(t, 1)))
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
  t = term_q_37;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL;
  y_91 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      b_92 = ATgetArgument(t, 0);
      w_91 = ATgetArgument(t, 1);
      x_91 = ATgetArgument(t, 2);
      {
        ATerm t_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  d_92 = t;
  t = w_91;
  t = foldr_3_0(m_9, n_9, o_9, t);
  z_91 = t;
  t = x_91;
  t = foldr_3_0(q_9, t_9, x_9, t);
  a_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_92, (ATerm) ATmakeAppl(sym__2, z_91, a_92));
  {
    ATerm u_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(v_37);
      }
    else
      {
        t = u_37;
        t = (ATerm) ATempty;
      }
  }
  f_92 = t;
  t = b_92;
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
  e_92 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_91, a_92));
  j_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_91, a_92)), e_92);
  t = a_11(y_9, j_92, e_92, t);
  c_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_92, (ATerm) ATmakeAppl(sym__2, z_91, a_92));
  h_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_38, (ATerm) ATinsert(CheckATermList(f_92), y_91));
  i_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_92, (ATerm) ATmakeAppl(sym__2, z_91, a_92)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_38, (ATerm) ATinsert(CheckATermList(f_92), y_91)));
  t = w_10(z_9, h_92, i_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_38, c_92);
  g_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_92, (ATerm) ATmakeAppl(sym_Defined_2, term_c_38, c_92));
  t = w_10(b_10, b_92, g_92, t);
  t = d_92;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL;
  if(match_cons(t, sym__2))
    {
      d_93 = ATgetArgument(t, 0);
      e_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(d_93, e_93, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL;
  if(match_cons(t, sym__2))
    {
      f_93 = ATgetArgument(t, 0);
      g_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(f_93, g_93, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm h_93 = NULL;
  if(match_cons(t, sym__2))
    {
      h_93 = ATgetArgument(t, 0);
      if((h_93 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_q_37;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  r_92 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      u_92 = ATgetArgument(t, 0);
      p_92 = ATgetArgument(t, 1);
      q_92 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  w_92 = t;
  t = p_92;
  t = foldr_3_0(c_10, d_10, h_10, t);
  s_92 = t;
  t = q_92;
  t = foldr_3_0(j_10, k_10, o_10, t);
  t_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_92, (ATerm) ATmakeAppl(sym__2, s_92, t_92));
  {
    ATerm d_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(e_38);
      }
    else
      {
        t = d_38;
        t = (ATerm) ATempty;
      }
  }
  y_92 = t;
  t = u_92;
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
  x_92 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_92, t_92));
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_92, t_92)), x_92);
  t = a_11(p_10, c_93, x_92, t);
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_92, (ATerm) ATmakeAppl(sym__2, s_92, t_92));
  a_93 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_38, (ATerm) ATinsert(CheckATermList(y_92), r_92));
  b_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_92, (ATerm) ATmakeAppl(sym__2, s_92, t_92)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_38, (ATerm) ATinsert(CheckATermList(y_92), r_92)));
  t = w_10(q_10, a_93, b_93, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_38, v_92);
  z_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_92, (ATerm) ATmakeAppl(sym_Defined_2, term_l_38, v_92));
  t = w_10(s_10, u_92, z_92, t);
  t = w_92;
  return(t);
}
static ATerm w_10 (ATerm m_148 (ATerm), ATerm s_81, ATerm q_81, ATerm t)
{
  ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL;
  l_93 = t;
  t = m_148(t);
  i_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_93, s_81, q_81);
  t = p_11(i_93, s_81, q_81, t);
  {
    ATerm m_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_93 = NULL;
        t = term_i_33;
        q_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_93, term_i_33);
        t = o_11(i_93, q_93, t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = m_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_93 = ATgetFirst((ATermList) t);
      k_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, i_93, term_i_33, (ATerm) ATinsert(CheckATermList(k_93), (ATerm) ATinsert(CheckATermList(j_93), s_81)));
  t = lookup_table_0_1(i_93, t);
  p_93 = t;
  t = term_i_33;
  m_93 = t;
  t = (ATerm) ATinsert(CheckATermList(k_93), (ATerm) ATinsert(CheckATermList(j_93), s_81));
  n_93 = t;
  t = p_93;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(m_93, n_93, o_93, t);
  t = l_93;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm d_94 = NULL;
  d_94 = t;
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_33 = NULL,g_33 = NULL;
        t = term_s_37;
        g_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_37, d_94);
        t = y_10(g_33, d_94, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("t_0", 0, ATtrue)))
              _fail(t);
            c_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_33;
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        {
          ATerm s_38 = t;
          int t_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_33 = NULL,n_33 = NULL;
              t = term_s_37;
              n_33 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_37, d_94);
              t = y_10(n_33, d_94, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm u_38 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_38) != ATmakeSymbol("n_0", 0, ATtrue)))
                    _fail(t);
                  k_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_33;
              LocalPopChoice(t_38);
            }
          else
            {
              t = s_38;
              {
                ATerm r_33 = NULL,u_33 = NULL;
                t = term_s_37;
                u_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_37, d_94);
                t = y_10(u_33, d_94, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm x_38 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_38) != ATmakeSymbol("i_0", 0, ATtrue)))
                      _fail(t);
                    r_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_33;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_10 (ATerm h_73, ATerm i_73, ATerm t)
{
  ATerm h_94 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_73, i_73);
  t = o_11(h_73, i_73, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_94 = ATgetFirst((ATermList) t);
      {
        ATerm y_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_94;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm y_94 = NULL,a_95 = NULL;
  y_94 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      a_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_95;
  if(match_cons(t, sym__2))
    {
      ATerm c_39 = ATgetArgument(t, 0);
      ATerm d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL,n_34 = NULL;
        t = term_q_37;
        n_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_37, y_94);
        t = y_10(n_34, y_94, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm h_39 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_39) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            k_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_34;
        LocalPopChoice(g_39);
      }
    else
      {
        t = e_39;
        {
          ATerm l_39 = t;
          int m_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_34 = NULL,u_34 = NULL;
              t = term_q_37;
              u_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_q_37, y_94);
              t = y_10(u_34, y_94, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_39 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_39) != ATmakeSymbol("k_0", 0, ATtrue)))
                    _fail(t);
                  r_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_34;
              LocalPopChoice(m_39);
            }
          else
            {
              t = l_39;
              {
                ATerm c_35 = NULL,h_35 = NULL;
                t = term_q_37;
                h_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_q_37, y_94);
                t = y_10(h_35, y_94, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm s_39 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) s_39) != ATmakeSymbol("e_0", 0, ATtrue)))
                      _fail(t);
                    c_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_35;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL;
  if(match_cons(t, sym__2))
    {
      u_95 = ATgetArgument(t, 0);
      v_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(u_95, v_95, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL;
  if(match_cons(t, sym__2))
    {
      w_95 = ATgetArgument(t, 0);
      x_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(w_95, x_95, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm y_95 = NULL;
  if(match_cons(t, sym__2))
    {
      y_95 = ATgetArgument(t, 0);
      if((y_95 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_q_37;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
  i_95 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_95 = ATgetArgument(t, 0);
      g_95 = ATgetArgument(t, 1);
      h_95 = ATgetArgument(t, 2);
      {
        ATerm v_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  n_95 = t;
  t = g_95;
  t = foldr_3_0(u_10, v_10, x_10, t);
  j_95 = t;
  t = h_95;
  t = foldr_3_0(n_11, q_11, w_11, t);
  k_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_95, (ATerm) ATmakeAppl(sym__2, j_95, k_95));
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(o_40);
      }
    else
      {
        t = n_40;
        t = (ATerm) ATempty;
      }
  }
  p_95 = t;
  t = l_95;
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
        t = (ATerm) ATempty;
      }
  }
  o_95 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_95, k_95));
  t_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_95, k_95)), o_95);
  t = a_11(x_11, t_95, o_95, t);
  m_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_95, (ATerm) ATmakeAppl(sym__2, j_95, k_95));
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_40, (ATerm) ATinsert(CheckATermList(p_95), i_95));
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_95, (ATerm) ATmakeAppl(sym__2, j_95, k_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_40, (ATerm) ATinsert(CheckATermList(p_95), i_95)));
  t = w_10(y_11, r_95, s_95, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_40, m_95);
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_95, (ATerm) ATmakeAppl(sym_Defined_2, term_t_40, m_95));
  t = w_10(z_11, l_95, q_95, t);
  t = n_95;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL;
  if(match_cons(t, sym__2))
    {
      l_96 = ATgetArgument(t, 0);
      m_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(l_96, m_96, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm n_96 = NULL,o_96 = NULL;
  if(match_cons(t, sym__2))
    {
      n_96 = ATgetArgument(t, 0);
      o_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(n_96, o_96, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm u_96 = NULL,v_96 = NULL;
  if(match_cons(t, sym__2))
    {
      u_96 = ATgetArgument(t, 0);
      v_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(u_96, v_96, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL;
  if(match_cons(t, sym__2))
    {
      w_96 = ATgetArgument(t, 0);
      x_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(w_96, x_96, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm e_97 = NULL,f_97 = NULL;
  if(match_cons(t, sym__2))
    {
      e_97 = ATgetArgument(t, 0);
      f_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(e_97, f_97, t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm g_97 = NULL,h_97 = NULL;
  if(match_cons(t, sym__2))
    {
      g_97 = ATgetArgument(t, 0);
      h_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(g_97, h_97, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL;
  a_96 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            b_96 = ATgetArgument(t, 0);
            c_96 = ATgetArgument(t, 1);
            d_96 = ATgetArgument(t, 2);
            {
              ATerm w_40 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_40);
        {
          ATerm i_96 = NULL,j_96 = NULL;
          t = c_96;
          t = foldr_3_0(a_12, b_12, c_12, t);
          i_96 = t;
          t = d_96;
          t = foldr_3_0(e_12, f_12, g_12, t);
          j_96 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_96, (ATerm) ATmakeAppl(sym__2, i_96, j_96)));
        }
      }
    else
      {
        t = u_40;
        if(match_cons(t, sym_ExtSDef_3))
          {
            b_96 = ATgetArgument(t, 0);
            c_96 = ATgetArgument(t, 1);
            d_96 = ATgetArgument(t, 2);
            {
              ATerm s_96 = NULL,t_96 = NULL;
              t = c_96;
              t = foldr_3_0(j_12, l_12, m_12, t);
              s_96 = t;
              t = d_96;
              t = foldr_3_0(n_12, o_12, p_12, t);
              t_96 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_96, (ATerm) ATmakeAppl(sym__2, s_96, t_96)));
            }
          }
        else
          {
            ATerm b_97 = NULL,c_97 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                b_96 = ATgetArgument(t, 0);
                c_96 = ATgetArgument(t, 1);
                d_96 = ATgetArgument(t, 2);
                {
                  ATerm x_40 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = c_96;
            t = foldr_3_0(s_12, t_12, u_12, t);
            b_97 = t;
            t = d_96;
            t = foldr_3_0(w_12, x_12, y_12, t);
            c_97 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_96, (ATerm) ATmakeAppl(sym__2, b_97, c_97)));
          }
      }
  }
  return(t);
}
static ATerm z_10 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm o_65, ATerm n_65, ATerm t)
{
  t = b_135(t);
  {
    static ATerm z_12 (ATerm t)
    {
      ATerm i_97 = NULL;
      i_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_65, i_97);
      t = a_135(t);
      return(t);
    }
    t = fetch_1_0(z_12, t);
  }
  t = n_65;
  return(t);
}
static ATerm a_11 (ATerm x_134 (ATerm), ATerm k_65, ATerm j_65, ATerm t)
{
  static ATerm y_97 (ATerm t)
  {
    ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL;
    t_97 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_65;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_97 = ATgetFirst((ATermList) t);
            v_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_40 = t;
          int z_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_97;
              {
                static ATerm a_13 (ATerm t)
                {
                  t = j_65;
                  return(t);
                }
                t = z_10(x_134, a_13, u_97, v_97, t);
              }
              t = y_97(t);
              LocalPopChoice(z_40);
            }
          else
            {
              t = y_40;
              {
                ATerm m_35 = NULL,v_35 = NULL,j_5 = NULL;
                t = SSLgetAnnotations(t_97);
                m_35 = t;
                t = v_97;
                t = y_97(t);
                v_35 = t;
                t = (ATerm) ATinsert(CheckATermList(v_35), u_97);
                j_5 = t;
                t = SSLsetAnnotations(j_5, m_35);
              }
            }
        }
      }
    return(t);
  }
  t = k_65;
  t = y_97(t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_137 (ATerm), ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL;
  b_98 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_98;
      t = w_137(t);
    }
  else
    {
      ATerm g_98 = NULL,h_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_98 = ATgetFirst((ATermList) t);
          d_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_98;
      t = y_137(t);
      g_98 = t;
      t = d_98;
      t = foldr_3_0(w_137, x_137, y_137, t);
      h_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_98, h_98);
      t = x_137(t);
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm l_98 = NULL,m_98 = NULL;
  if(match_cons(t, sym__2))
    {
      l_98 = ATgetArgument(t, 0);
      m_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(e_13, l_98, m_98, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm n_98 = NULL;
  if(match_cons(t, sym__2))
    {
      n_98 = ATgetArgument(t, 0);
      if((n_98 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      {
        ATerm c_41 = t;
        int d_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(d_41);
          }
        else
          {
            t = c_41;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL;
  k_98 = t;
  t = foldr_3_0(b_13, c_13, DefinitionName_0_0, t);
  i_98 = t;
  t = k_98;
  t = map_1_0(f_13, t);
  j_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_98, j_98, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,l_5 = NULL;
  t_98 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_98 = ATgetFirst((ATermList) t);
      q_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_98);
  o_98 = t;
  t = p_98;
  t = w_100(t);
  r_98 = t;
  t = q_98;
  t = x_100(t);
  s_98 = t;
  t = (ATerm) ATinsert(CheckATermList(s_98), r_98);
  l_5 = t;
  t = SSLsetAnnotations(l_5, o_98);
  return(t);
}
static ATerm b_11 (ATerm x_47, ATerm y_47, ATerm t)
{
  ATerm u_98 = NULL;
  t = SSL_fputc(x_47, y_47);
  u_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_98);
  return(t);
}
static ATerm c_11 (ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm v_98 = NULL;
  t = SSL_write_term_to_stream_text(p_46, q_46);
  v_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_98);
  return(t);
}
static ATerm e_11 (ATerm e_123 (ATerm), ATerm x_339, ATerm v_46, ATerm t)
{
  ATerm w_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_339, term_e_41);
  t = i_11(t);
  w_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_98, v_46);
  t = e_123(t);
  t = fclose_0_0(t);
  t = v_46;
  return(t);
}
static ATerm d_11 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm x_98 = NULL;
  t = SSL_write_term_to_stream_baf(l_46, m_46);
  x_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_98);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_41 = ATgetArgument(t, 0);
      if(match_cons(f_41, sym_Stream_1))
        {
          e_99 = ATgetArgument(f_41, 0);
        }
      else
        _fail(t);
      f_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(e_99, f_99, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_41 = ATgetArgument(t, 0);
      if(match_cons(g_41, sym_Stream_1))
        {
          j_99 = ATgetArgument(g_41, 0);
        }
      else
        _fail(t);
      k_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(j_99, k_99, t);
  g_99 = t;
  t = term_q_21;
  h_99 = t;
  t = g_99;
  if(match_cons(t, sym_Stream_1))
    {
      i_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, g_99);
  t = b_11(h_99, i_99, t);
  return(t);
}
ATerm output_1_0 (ATerm t_143 (ATerm), ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL;
  t = t_143(t);
  z_98 = t;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_99 = NULL,b_99 = NULL;
        t = term_j_41;
        a_99 = t;
        t = term_k_41;
        b_99 = t;
        t = term_l_41;
        t = o_11(a_99, b_99, t);
        LocalPopChoice(i_41);
      }
    else
      {
        t = h_41;
        t = term_m_41;
      }
  }
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_98, z_98);
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_99 = NULL,d_99 = NULL;
        t = term_j_41;
        c_99 = t;
        t = term_p_41;
        d_99 = t;
        t = term_q_41;
        t = o_11(c_99, d_99, t);
        t = (ATerm) ATmakeAppl(sym__2, y_98, z_98);
        LocalPopChoice(o_41);
        if(match_cons(t, sym__2))
          {
            ATerm r_41 = ATgetArgument(t, 0);
            ATerm s_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_11(g_13, y_98, z_98, t);
      }
    else
      {
        t = n_41;
        if(match_cons(t, sym__2))
          {
            ATerm t_41 = ATgetArgument(t, 0);
            ATerm u_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_11(h_13, y_98, z_98, t);
      }
  }
  return(t);
}
static ATerm y_99 (ATerm s_99, ATerm t)
{
  t = SSL_fclose(s_99);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_99 = NULL,w_99 = NULL;
  w_99 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_99 = ATgetArgument(t, 0);
      {
        ATerm v_41 = t;
        int w_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_99);
            LocalPopChoice(w_41);
          }
        else
          {
            t = v_41;
            t = y_99(w_99, t);
          }
      }
    }
  else
    {
      t = y_99(w_99, t);
    }
  return(t);
}
static ATerm f_11 (ATerm r_46, ATerm t)
{
  t = SSL_read_term_from_stream(r_46);
  return(t);
}
static ATerm g_11 (ATerm s_64, ATerm t_64, ATerm t)
{
  t = SSL_strcat(s_64, t_64);
  return(t);
}
static ATerm h_11 (ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm z_99 = NULL;
  t = SSL_fopen(z_47, a_48);
  z_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_99);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_100 = NULL;
  t = SSL_stdin_stream();
  a_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_100);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_100 = NULL;
  t = SSL_stdout_stream();
  b_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_100);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_100 = NULL;
  t = SSL_stderr_stream();
  c_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_100);
  return(t);
}
static ATerm l_101 (ATerm i_100, ATerm t)
{
  ATerm j_100 = NULL;
  t = SSL_explode_term(i_100);
  if(match_cons(t, sym__2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_41 = ATgetArgument(t, 1);
        if(((ATgetType(y_41) == AT_LIST) && !(ATisEmpty(y_41))))
          {
            j_100 = ATgetFirst((ATermList) y_41);
            {
              ATerm z_41 = (ATerm) ATgetNext((ATermList) y_41);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_100;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_100;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_100;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_100;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_101 (ATerm m_100, ATerm n_100, ATerm o_100, ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL,u_100 = NULL,n_5 = NULL;
  t = SSLgetAnnotations(o_100);
  r_100 = t;
  t = m_100;
  if(match_cons(t, sym_Path_1))
    {
      u_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_100, n_100);
  n_5 = t;
  t = SSLsetAnnotations(n_5, r_100);
  if(match_cons(t, sym__2))
    {
      p_100 = ATgetArgument(t, 0);
      q_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(p_100, q_100, t);
  return(t);
}
static ATerm n_101 (ATerm y_100, ATerm z_100, ATerm a_101, ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL,d_101 = NULL,g_101 = NULL,q_5 = NULL;
  t = SSLgetAnnotations(a_101);
  d_101 = t;
  t = SSL_is_string(y_100);
  g_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_101, z_100);
  q_5 = t;
  t = SSLsetAnnotations(q_5, d_101);
  if(match_cons(t, sym__2))
    {
      b_101 = ATgetArgument(t, 0);
      c_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(b_101, c_101, t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL,k_101 = NULL;
  i_101 = t;
  if(match_cons(t, sym__2))
    {
      j_101 = ATgetArgument(t, 0);
      k_101 = ATgetArgument(t, 1);
      {
        ATerm a_42 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_101(i_101, t);
            LocalPopChoice(b_42);
          }
        else
          {
            t = a_42;
            {
              ATerm c_42 = t;
              int d_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_101(j_101, k_101, i_101, t);
                  LocalPopChoice(d_42);
                }
              else
                {
                  t = c_42;
                  t = n_101(j_101, k_101, i_101, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_101(i_101, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL,w_101 = NULL;
  w_101 = t;
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_101, term_i_42);
        t = i_11(t);
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        {
          ATerm i_36 = NULL,j_36 = NULL;
          t = term_j_42;
          j_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_42, w_101);
          t = g_11(j_36, w_101, t);
          i_36 = t;
          t = SSL_perror(i_36);
          _fail(t);
        }
      }
  }
  q_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(r_101, t);
  p_101 = t;
  t = q_101;
  t = fclose_0_0(t);
  t = p_101;
  return(t);
}
ATerm input_1_0 (ATerm u_143 (ATerm), ATerm t)
{
  ATerm p_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_101 = NULL,a_102 = NULL;
      t = term_j_41;
      z_101 = t;
      t = term_s_42;
      a_102 = t;
      t = term_t_42;
      t = o_11(z_101, a_102, t);
      LocalPopChoice(r_42);
    }
  else
    {
      t = p_42;
      t = term_y_42;
    }
  t = ReadFromFile_0_0(t);
  t = u_143(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL;
  b_102 = t;
  t = term_d_30;
  t = whoami_0_0(t);
  c_102 = t;
  t = term_i_16;
  e_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_43), c_102), term_b_43);
  f_102 = t;
  t = SSL_printnl(e_102, f_102);
  t = term_w_19;
  d_102 = t;
  t = SSL_exit(d_102);
  t = b_102;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm h_102 = NULL;
  h_102 = t;
  if(match_string(t, "-k"))
    {
      t = h_102;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_102;
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm i_102 = NULL,j_102 = NULL,k_102 = NULL;
  i_102 = t;
  t = SSL_string_to_int(i_102);
  j_102 = t;
  t = term_e_43;
  k_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_43, j_102);
  t = r_11(k_102, j_102, t);
  t = i_102;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_g_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_13, k_13, l_13, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm m_102 = NULL;
  m_102 = t;
  if(match_string(t, "-S"))
    {
      t = m_102;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_102;
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL;
  t = term_h_43;
  n_102 = t;
  t = term_v_19;
  o_102 = t;
  t = term_m_43;
  t = r_11(n_102, o_102, t);
  t = term_n_43;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL;
  p_102 = t;
  t = SSL_string_to_int(p_102);
  q_102 = t;
  t = term_h_43;
  r_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_43, q_102);
  t = r_11(r_102, q_102, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_102);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_p_43;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL;
  t = term_q_43;
  s_102 = t;
  t = term_d_30;
  t_102 = t;
  t = term_s_43;
  t = r_11(s_102, t_102, t);
  t = term_u_43;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_v_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_43 = t;
  int y_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_13, n_13, o_13, t);
      LocalPopChoice(y_43);
    }
  else
    {
      t = w_43;
      {
        ATerm z_43 = t;
        int a_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_13, t_13, u_13, t);
            LocalPopChoice(a_44);
          }
        else
          {
            t = z_43;
            t = Option_3_0(v_13, w_13, x_13, t);
          }
      }
    }
  return(t);
}
static ATerm r_11 (ATerm s_51, ATerm t_51, ATerm t)
{
  ATerm u_102 = NULL,v_102 = NULL;
  t = term_j_41;
  u_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_41, s_51, t_51);
  t = lookup_table_0_1(u_102, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(s_51, t_51, v_102, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_41, s_51, t_51);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL;
      t = term_d_30;
      t = f_0(t);
      b_103 = t;
      t = term_b_44;
      c_103 = t;
      t = term_c_44;
      d_103 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_44, term_c_44, b_103);
      t = p_11(c_103, d_103, b_103, t);
      _fail(t);
    }
  else
    {
      ATerm g_103 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_102 = ATgetFirst((ATermList) t);
          a_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_102;
      t = b_0(t);
      t = term_d_30;
      t = d_0(t);
      g_103 = t;
      t = (ATerm) ATinsert(CheckATermList(a_103), g_103);
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm i_103 = NULL;
  i_103 = t;
  if(match_string(t, "-o"))
    {
      t = i_103;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_103;
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL;
  j_103 = t;
  t = term_k_41;
  k_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_41, j_103);
  t = r_11(k_103, j_103, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_103);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_d_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_13, a_14, b_14, t);
  return(t);
}
static ATerm p_11 (ATerm w_72, ATerm x_72, ATerm v_72, ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL;
  m_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_44 = ATgetArgument(t, 0);
            ATerm h_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
        t = o_11(w_72, x_72, t);
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        t = (ATerm) ATempty;
      }
  }
  n_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_72, x_72, (ATerm) ATinsert(CheckATermList(n_103), v_72));
  t = lookup_table_0_1(w_72, t);
  q_103 = t;
  t = (ATerm) ATinsert(CheckATermList(n_103), v_72);
  o_103 = t;
  t = q_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(x_72, o_103, p_103, t);
  t = m_103;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL;
      t = term_d_30;
      t = m_0(t);
      b_104 = t;
      t = term_b_44;
      c_104 = t;
      t = term_c_44;
      d_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_44, term_c_44, b_104);
      t = p_11(c_104, d_104, b_104, t);
      _fail(t);
    }
  else
    {
      ATerm h_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_103 = ATgetFirst((ATermList) t);
          y_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_103;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_103 = ATgetFirst((ATermList) t);
          a_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_103;
      t = j_0(t);
      t = z_103;
      t = l_0(t);
      h_104 = t;
      t = (ATerm) ATinsert(CheckATermList(a_104), h_104);
    }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm j_104 = NULL;
  j_104 = t;
  if(match_string(t, "-i"))
    {
      t = j_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_104;
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL;
  k_104 = t;
  t = term_s_42;
  l_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_42, k_104);
  t = r_11(l_104, k_104, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_104);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_i_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_14, g_14, h_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_104 = NULL,n_104 = NULL,o_104 = NULL,p_104 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_30;
  t = whoami_0_0(t);
  m_104 = t;
  t = term_i_16;
  o_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_44), m_104);
  p_104 = t;
  t = SSL_printnl(o_104, p_104);
  t = term_w_19;
  n_104 = t;
  t = SSL_exit(n_104);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_104 = NULL,r_104 = NULL;
  t = term_j_41;
  q_104 = t;
  t = term_k_44;
  r_104 = t;
  t = term_l_44;
  t = o_11(q_104, r_104, t);
  return(t);
}
static ATerm j_11 (ATerm k_54, ATerm l_54, ATerm t)
{
  ATerm m_44 = t;
  int n_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_54, l_54);
      LocalPopChoice(n_44);
    }
  else
    {
      t = m_44;
      t = SSL_addr(k_54, l_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_137 (ATerm), ATerm v_137 (ATerm), ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL;
  t_104 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_104;
      t = u_137(t);
    }
  else
    {
      ATerm y_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_104 = ATgetFirst((ATermList) t);
          v_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_104;
      t = foldr_2_0(u_137, v_137, t);
      y_104 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_104, y_104);
      t = v_137(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  if(match_cons(t, sym__2))
    {
      t_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(t_36, u_36, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_105 = NULL,l_36 = NULL,m_36 = NULL;
  t = times_0_0(t);
  m_36 = t;
  t = SSL_explode_term(m_36);
  if(match_cons(t, sym__2))
    {
      ATerm o_44 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_36;
  t = foldr_2_0(i_14, j_14, t);
  b_105 = t;
  t = SSL_TicksToSeconds(b_105);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL;
  m_105 = t;
  if(match_cons(t, sym__2))
    {
      n_105 = ATgetArgument(t, 0);
      o_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_105;
        if((n_105 != t))
          {
            _fail(t);
          }
        t = m_105;
        LocalPopChoice(q_44);
      }
    else
      {
        t = p_44;
        t = (ATerm) ATmakeAppl(sym__2, n_105, o_105);
        {
          ATerm t_44 = t;
          int v_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_105, o_105);
              LocalPopChoice(v_44);
            }
          else
            {
              t = t_44;
              t = SSL_gtr(n_105, o_105);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_105, o_105);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_124 (ATerm), ATerm t)
{
  ATerm s_105 = NULL;
  s_105 = t;
  {
    ATerm w_44 = t;
    int x_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL;
        t = term_j_41;
        v_105 = t;
        t = term_h_43;
        w_105 = t;
        t = term_z_44;
        t = o_11(v_105, w_105, t);
        u_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_105, term_w_19);
        t = geq_0_0(t);
        t = s_105;
        t = u_124(t);
        LocalPopChoice(x_44);
      }
    else
      {
        t = w_44;
        t = s_105;
      }
  }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm y_105 = NULL,z_105 = NULL,b_106 = NULL,c_106 = NULL;
  t = run_time_0_0(t);
  y_105 = t;
  t = term_d_30;
  t = whoami_0_0(t);
  z_105 = t;
  t = term_i_16;
  b_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_45), y_105), term_a_45), z_105);
  c_106 = t;
  t = SSL_printnl(b_106, c_106);
  t = (ATerm) ATmakeAppl(sym__2, term_i_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_45), y_105), term_a_45), z_105));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_106 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_19;
  d_106 = t;
  t = SSL_exit(d_106);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm n_106 = NULL,o_106 = NULL;
  o_106 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_106;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_106 = ATgetArgument(t, 0);
          {
            ATerm g_37 = NULL,u_5 = NULL;
            t = SSLgetAnnotations(o_106);
            g_37 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_106);
            u_5 = t;
            t = SSLsetAnnotations(u_5, g_37);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_106;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_143 (ATerm), ATerm t)
{
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_106 = NULL,h_106 = NULL;
      t = term_j_41;
      g_106 = t;
      t = term_e_45;
      h_106 = t;
      t = term_f_45;
      t = o_11(g_106, h_106, t);
      LocalPopChoice(d_45);
    }
  else
    {
      t = c_45;
      t = fetch_1_0(l_14, t);
    }
  t = k_143(t);
  return(t);
}
static ATerm s_11 (ATerm o_77, ATerm p_77, ATerm q_77, ATerm t)
{
  ATerm q_106 = NULL;
  t = SSL_hashtable_put(q_77, o_77, p_77);
  q_106 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_106);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_74, ATerm t)
{
  ATerm z_106 = NULL;
  t = table_hashtable_0_0(t);
  z_106 = t;
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_37 = NULL;
        t = z_106;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_11(i_74, m_37, t);
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        {
          ATerm r_37 = NULL;
          t = i_74;
          t = table_create_0_0(t);
          t = z_106;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(i_74, r_37, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_77, ATerm x_77, ATerm t)
{
  ATerm c_107 = NULL;
  t = SSL_hashtable_create(w_77, x_77);
  c_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_107);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL,h_107 = NULL,i_107 = NULL;
  d_107 = t;
  t = term_i_45;
  h_107 = t;
  t = term_j_45;
  i_107 = t;
  t = d_107;
  t = new_hashtable_0_2(h_107, i_107, t);
  e_107 = t;
  t = d_107;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(d_107, e_107, f_107, t);
  t = d_107;
  return(t);
}
static ATerm l_11 (ATerm t_77, ATerm u_77, ATerm t)
{
  ATerm j_107 = NULL;
  t = SSL_hashtable_remove(u_77, t_77);
  j_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_107);
  return(t);
}
static ATerm m_11 (ATerm y_77, ATerm t)
{
  ATerm k_107 = NULL;
  t = SSL_hashtable_destroy(y_77);
  k_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_107);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_107 = NULL;
  t = SSL_table_hashtable();
  l_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_107);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL;
  m_107 = t;
  t = table_hashtable_0_0(t);
  n_107 = t;
  t = lookup_table_0_1(m_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(p_107, t);
  t = n_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_11(m_107, o_107, t);
  t = m_107;
  return(t);
}
ATerm map_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  static ATerm e_108 (ATerm t)
  {
    ATerm b_108 = NULL,c_108 = NULL,d_108 = NULL;
    b_108 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_108;
      }
    else
      {
        ATerm w_37 = NULL,z_37 = NULL,a_38 = NULL,w_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_108 = ATgetFirst((ATermList) t);
            d_108 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_108);
        w_37 = t;
        t = c_108;
        t = n_127(t);
        z_37 = t;
        t = d_108;
        t = e_108(t);
        a_38 = t;
        t = (ATerm) ATinsert(CheckATermList(a_38), z_37);
        w_5 = t;
        t = SSLsetAnnotations(w_5, w_37);
      }
    return(t);
  }
  t = e_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_108 = ATgetFirst((ATermList) t);
      i_108 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_108 = NULL,n_108 = NULL;
        static ATerm n_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_108)), not_null(n_108));
          return(t);
        }
        t = i_108;
        t = h_0(t);
        if(((m_108 != NULL) && (m_108 != t)))
          _fail(t);
        else
          m_108 = t;
        t = h_108;
        t = g_0(t);
        if(((n_108 != NULL) && (n_108 != t)))
          _fail(t);
        else
          n_108 = t;
        t = i_108;
        t = reverse_acc_2_0(g_0, n_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_30;
      t = h_0(t);
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm t_108 = NULL,u_108 = NULL,v_108 = NULL,y_5 = NULL;
  v_108 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_108);
  t_108 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_108);
  y_5 = t;
  t = SSLsetAnnotations(y_5, t_108);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm x_108 = NULL;
  x_108 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_108), term_k_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL;
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_108 = NULL,s_108 = NULL;
      t = term_j_41;
      r_108 = t;
      t = term_k_44;
      s_108 = t;
      t = term_l_44;
      t = o_11(r_108, s_108, t);
      LocalPopChoice(m_45);
    }
  else
    {
      t = l_45;
      t = fetch_1_0(o_14, t);
    }
  t = term_n_45;
  t = echo_0_0(t);
  t = term_b_44;
  p_108 = t;
  t = term_c_44;
  q_108 = t;
  t = term_o_45;
  t = o_11(p_108, q_108, t);
  t = reverse_acc_2_0(_id, p_14, t);
  t = map_1_0(q_14, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_127 (ATerm), ATerm t)
{
  static ATerm u_109 (ATerm t)
  {
    ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL;
    r_109 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_109 = ATgetFirst((ATermList) t);
        t_109 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_45 = t;
      int q_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_38 = NULL,n_38 = NULL,a_6 = NULL;
          t = SSLgetAnnotations(r_109);
          k_38 = t;
          t = s_109;
          t = x_127(t);
          n_38 = t;
          t = (ATerm) ATinsert(CheckATermList(t_109), n_38);
          a_6 = t;
          t = SSLsetAnnotations(a_6, k_38);
          LocalPopChoice(q_45);
        }
      else
        {
          t = p_45;
          {
            ATerm v_38 = NULL,z_38 = NULL,c_6 = NULL;
            t = SSLgetAnnotations(r_109);
            v_38 = t;
            t = t_109;
            t = u_109(t);
            z_38 = t;
            t = (ATerm) ATinsert(CheckATermList(z_38), s_109);
            c_6 = t;
            t = SSLsetAnnotations(c_6, v_38);
          }
        }
    }
    return(t);
  }
  t = u_109(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL,a_110 = NULL;
  y_109 = t;
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_109;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_45 = ATgetFirst((ATermList) t);
                ATerm w_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_109;
          }
        LocalPopChoice(s_45);
      }
    else
      {
        t = r_45;
        t = (ATerm) ATinsert(ATempty, y_109);
      }
  }
  z_109 = t;
  t = term_m_41;
  a_110 = t;
  t = SSL_printnl(a_110, z_109);
  t = y_109;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_110 = NULL,f_110 = NULL;
  t = term_j_41;
  e_110 = t;
  t = term_k_44;
  f_110 = t;
  t = term_l_44;
  t = o_11(e_110, f_110, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_11 (ATerm r_77, ATerm s_77, ATerm t)
{
  t = SSL_hashtable_get(s_77, r_77);
  return(t);
}
static ATerm o_11 (ATerm p_74, ATerm q_74, ATerm t)
{
  ATerm g_110 = NULL;
  t = lookup_table_0_1(p_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(q_74, g_110, t);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm i_110 = NULL,j_110 = NULL;
  t = term_z_45;
  i_110 = t;
  t = term_d_30;
  j_110 = t;
  t = term_a_46;
  t = r_11(i_110, j_110, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL,n_110 = NULL;
  t = term_z_45;
  m_110 = t;
  t = term_d_30;
  n_110 = t;
  t = term_a_46;
  t = r_11(m_110, n_110, t);
  t = term_c_46;
  k_110 = t;
  t = term_d_30;
  l_110 = t;
  t = term_d_46;
  t = r_11(k_110, l_110, t);
  t = term_e_46;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_46 = t;
  int h_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_14, w_14, a_15, t);
      LocalPopChoice(h_46);
    }
  else
    {
      t = g_46;
      t = Option_3_0(b_15, c_15, d_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_145 (ATerm), ATerm t)
{
  ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL,x_110 = NULL,y_110 = NULL,l_6 = NULL;
  s_110 = t;
  {
    ATerm i_46 = t;
    int j_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_46;
        t = n_145(t);
        LocalPopChoice(j_46);
      }
    else
      {
        t = i_46;
      }
  }
  t = s_110;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_110 = ATgetFirst((ATermList) t);
      v_110 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_110);
  t_110 = t;
  t = term_k_44;
  y_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_44, u_110);
  t = r_11(y_110, u_110, t);
  t = v_110;
  {
    static ATerm i_111 (ATerm t)
    {
      ATerm n_46 = t;
      int o_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_46 = t;
          int t_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_111 = NULL;
              b_111 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_111;
              LocalPopChoice(t_46);
            }
          else
            {
              t = s_46;
              t = n_145(t);
              t = Cons_2_0(_id, i_111, t);
            }
          LocalPopChoice(o_46);
        }
      else
        {
          t = n_46;
          {
            ATerm e_111 = NULL,f_111 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_111 = ATgetFirst((ATermList) t);
                f_111 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_111), (ATerm) ATmakeAppl(sym_Undefined_1, e_111));
          }
        }
      return(t);
    }
    t = i_111(t);
  }
  x_110 = t;
  t = (ATerm) ATinsert(CheckATermList(x_110), (ATerm) ATmakeAppl(sym_Program_1, u_110));
  l_6 = t;
  t = SSLsetAnnotations(l_6, t_110);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm v_111 = NULL;
  v_111 = t;
  if(match_string(t, "--help"))
    {
      t = v_111;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_111;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_111;
        }
    }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL;
  t = term_e_45;
  w_111 = t;
  t = term_d_30;
  x_111 = t;
  t = term_u_46;
  t = r_11(w_111, x_111, t);
  t = term_w_46;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_145 (ATerm), ATerm t)
{
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL,t_111 = NULL,u_111 = NULL;
  p_111 = t;
  t = term_b_44;
  q_111 = t;
  t = term_y_46;
  t = lookup_table_0_1(q_111, t);
  u_111 = t;
  t = term_c_44;
  r_111 = t;
  t = (ATerm) ATempty;
  s_111 = t;
  t = u_111;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(r_111, s_111, t_111, t);
  t = p_111;
  {
    static ATerm e_15 (ATerm t)
    {
      ATerm z_46 = t;
      int a_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_145(t);
          LocalPopChoice(a_47);
        }
      else
        {
          t = z_46;
          {
            ATerm b_47 = t;
            int c_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_15, g_15, h_15, t);
                LocalPopChoice(c_47);
              }
            else
              {
                t = b_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_15, t);
  }
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_112 = NULL;
        i_112 = t;
        {
          ATerm f_47 = t;
          int g_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_39 = NULL;
              t = i_112;
              {
                ATerm h_47 = t;
                int i_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_39 = NULL,k_39 = NULL;
                    t = term_j_41;
                    j_39 = t;
                    t = term_e_45;
                    k_39 = t;
                    t = term_f_45;
                    t = o_11(j_39, k_39, t);
                    LocalPopChoice(i_47);
                  }
                else
                  {
                    t = h_47;
                    t = fetch_1_0(i_15, t);
                  }
              }
              t = i_112;
              t = default_system_usage_0_0(t);
              t = term_v_19;
              i_39 = t;
              t = SSL_exit(i_39);
              LocalPopChoice(g_47);
            }
          else
            {
              t = f_47;
              {
                ATerm a_40 = NULL,d_40 = NULL,m_40 = NULL;
                t = term_j_41;
                d_40 = t;
                t = term_z_45;
                m_40 = t;
                t = term_j_47;
                t = o_11(d_40, m_40, t);
                t = i_112;
                t = default_system_about_0_0(t);
                t = term_v_19;
                a_40 = t;
                t = SSL_exit(a_40);
              }
            }
        }
        LocalPopChoice(e_47);
      }
    else
      {
        t = d_47;
        {
          ATerm k_47 = t;
          int l_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL;
              static ATerm j_15 (ATerm t)
              {
                ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL,u_6 = NULL;
                o_112 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_112 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_112);
                m_112 = t;
                t = n_112;
                if(((n_111 != NULL) && (n_111 != t)))
                  _fail(t);
                else
                  n_111 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_112);
                u_6 = t;
                t = SSLsetAnnotations(u_6, m_112);
                return(t);
              }
              t = fetch_1_0(j_15, t);
              t = term_i_16;
              k_112 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_111)), term_m_47);
              l_112 = t;
              t = SSL_printnl(k_112, l_112);
              t = (ATerm) ATmakeAppl(sym__2, term_i_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_111)), term_m_47));
              t = default_system_usage_0_0(t);
              t = term_w_19;
              j_112 = t;
              t = SSL_exit(j_112);
              LocalPopChoice(l_47);
            }
          else
            {
              t = k_47;
            }
        }
      }
  }
  o_111 = t;
  t = term_b_44;
  t = table_destroy_0_0(t);
  t = o_111;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm t)
{
  ATerm t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL,x_112 = NULL;
  t = parse_options_1_0(m_143, t);
  t_112 = t;
  t = term_n_47;
  t = table_create_0_0(t);
  t = term_n_47;
  u_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_47, term_o_47, t_112);
  t = lookup_table_0_1(u_112, t);
  x_112 = t;
  t = term_o_47;
  v_112 = t;
  t = x_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(v_112, t_112, w_112, t);
  t = t_112;
  t = o_143(t);
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_143, t);
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
              t = p_143(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_47);
            }
          else
            {
              t = r_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_47);
    }
  else
    {
      t = t_47;
      {
        ATerm v_47 = t;
        int w_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_47);
          }
        else
          {
            t = v_47;
            {
              ATerm b_48 = t;
              int c_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_15, r_15, s_15, t);
                  LocalPopChoice(c_48);
                }
              else
                {
                  t = b_48;
                  {
                    ATerm d_48 = t;
                    int e_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_48);
                      }
                    else
                      {
                        t = d_48;
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
static ATerm l_15 (ATerm t)
{
  t = input_1_0(x_15, t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL;
  t = term_p_41;
  z_112 = t;
  t = term_d_30;
  a_113 = t;
  t = term_f_48;
  t = r_11(z_112, a_113, t);
  t = term_g_48;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_h_48;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = output_1_0(y_15, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm c_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,a_7 = NULL,z_6 = NULL;
  j_113 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_113);
  c_113 = t;
  t = d_113;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_113 = ATgetFirst((ATermList) t);
      g_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_113);
  e_113 = t;
  t = g_113;
  t = Cons_2_0(d_16, f_16, t);
  h_113 = t;
  t = (ATerm) ATinsert(CheckATermList(h_113), f_113);
  z_6 = t;
  t = SSLsetAnnotations(z_6, e_113);
  i_113 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_113);
  a_7 = t;
  t = SSLsetAnnotations(a_7, c_113);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,x_6 = NULL;
  p_113 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_113);
  m_113 = t;
  t = n_113;
  t = all_defs_0_0(t);
  o_113 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_113);
  x_6 = t;
  t = SSLsetAnnotations(x_6, m_113);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_15, default_usage_0_0, _id, l_15, t);
  return(t);
}

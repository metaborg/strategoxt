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
ATerm term_q_51;
ATerm term_w_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_b_50;
ATerm term_x_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_e_48;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_j_47;
ATerm term_h_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_l_45;
ATerm term_j_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_h_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_l_42;
ATerm term_h_42;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_k_39;
ATerm term_i_39;
ATerm term_b_37;
ATerm term_q_36;
ATerm term_v_35;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_h_24;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_k_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_u_20;
ATerm term_b_19;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_f_18;
ATerm term_s_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_b_17;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_17);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Op_2, term_n_21, (ATerm) ATempty);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Call_2, term_a_22, (ATerm) ATempty);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Call_2, term_w_22, (ATerm) ATempty);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, (ATerm) ATempty);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Sort_2, term_w_31, (ATerm) ATempty);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_u_20);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym__2, term_w_42, term_x_42);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym__2, term_k_44, term_l_44);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(sym__2, term_l_44, term_u_20);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_20);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym__2, term_d_45, term_p_16);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_k_44, term_e_46);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym__2, term_k_44, term_y_46);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym__2, term_s_45, term_t_45);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym__2, term_r_47, term_p_16);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_p_16);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym__2, term_y_46, term_p_16);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym__3, term_s_45, term_t_45, (ATerm) ATempty);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(sym__2, term_k_44, term_r_47);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym__2, term_l_50, term_p_16);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm s_127 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm q_9 (ATerm z_84, ATerm y_84, ATerm t);
static ATerm s_9 (ATerm z_62, ATerm a_63, ATerm b_63, ATerm t);
static ATerm z_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm y_9 (ATerm u_26, ATerm t_26, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_130 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm j_39 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm m_39 (ATerm z_32, ATerm a_33, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm s_141 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_10 (ATerm v_79, ATerm w_79, ATerm x_79, ATerm t);
static ATerm z_54 (ATerm i_54, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm x_109 (ATerm), ATerm t);
static ATerm l_10 (ATerm i_75, ATerm j_75, ATerm k_75, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm t_108 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm v_112 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm m_10 (ATerm e_42, ATerm f_42, ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm copy_1_0 (ATerm e_127 (ATerm), ATerm t);
static ATerm n_10 (ATerm c_62, ATerm d_62, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm h_75 (ATerm a_72, ATerm b_72, ATerm e_72, ATerm f_72, ATerm t);
static ATerm t_75 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm z_73, ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm o_121 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm b_116 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm l_110 (ATerm), ATerm t);
static ATerm z_9 (ATerm v_44, ATerm w_44, ATerm t);
ATerm end_scope_1_0 (ATerm j_120 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_120 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm d_10 (ATerm c_64, ATerm d_64, ATerm h_64, ATerm e_64, ATerm g_64, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm r_80 (ATerm c_76, ATerm d_76, ATerm f_76, ATerm g_76, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm t_121 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_86 (ATerm p_85, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_10 (ATerm g_123 (ATerm), ATerm p_50, ATerm o_50, ATerm t);
ATerm genzip_4_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm y_10 (ATerm m_741, ATerm r_741, ATerm z_72, ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm y_89 (ATerm q_88, ATerm r_88, ATerm s_88, ATerm t);
static ATerm k_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_11 (ATerm o_141 (ATerm), ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm q_74, ATerm n_74, ATerm v_74, ATerm r_74, ATerm o_74, ATerm p_74, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm o_141 (ATerm), ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm t);
ATerm for_3_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm i_38 (ATerm y_36, ATerm z_36, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm w_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm d_11 (ATerm m_120 (ATerm), ATerm m_43, ATerm k_43, ATerm t);
static ATerm e_11 (ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm v_50, ATerm u_50, ATerm t);
static ATerm f_11 (ATerm l_123 (ATerm), ATerm r_50, ATerm q_50, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm h_11 (ATerm b_45, ATerm c_45, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm q_126 (ATerm), ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm p_13 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t);
static ATerm j_11 (ATerm u_34, ATerm v_34, ATerm t);
static ATerm k_11 (ATerm m_33, ATerm n_33, ATerm t);
static ATerm m_11 (ATerm d_116 (ATerm), ATerm p_254, ATerm s_33, ATerm t);
static ATerm l_11 (ATerm i_33, ATerm j_33, ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm z_135 (ATerm), ATerm t);
static ATerm z_100 (ATerm t_100, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_11 (ATerm o_33, ATerm t);
static ATerm o_11 (ATerm u_59, ATerm v_59, ATerm t);
static ATerm p_11 (ATerm w_34, ATerm x_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_102 (ATerm j_101, ATerm t);
static ATerm l_102 (ATerm n_101, ATerm o_101, ATerm p_101, ATerm t);
static ATerm m_102 (ATerm x_101, ATerm y_101, ATerm z_101, ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_121 (ATerm), ATerm t);
static ATerm v_11 (ATerm j_46, ATerm k_46, ATerm t);
ATerm if_verbose2_1_0 (ATerm u_117 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_11 (ATerm b_39, ATerm d_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_11 (ATerm q_44, ATerm r_44, ATerm p_44, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_11 (ATerm y_41, ATerm z_41, ATerm t);
ATerm foldr_2_0 (ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm t_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_117 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_14 (ATerm t);
ATerm need_help_1_0 (ATerm x_136 (ATerm), ATerm t);
static ATerm z_11 (ATerm i_48, ATerm j_48, ATerm k_48, ATerm t);
static ATerm a_12 (ATerm l_48, ATerm m_48, ATerm t);
ATerm lookup_table_0_1 (ATerm c_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_48, ATerm r_48, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_11 (ATerm n_48, ATerm o_48, ATerm t);
static ATerm u_11 (ATerm s_48, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_121 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm e_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm a_139 (ATerm), ATerm t);
static ATerm o_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
ATerm parse_options_1_0 (ATerm z_138 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm c_137 (ATerm), ATerm t);
static ATerm v_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm g_16 (ATerm t);
ATerm iowrap_3_0 (ATerm i_136 (ATerm), ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm t);
static ATerm k_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm o_16 (ATerm t);
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
  t = term_p_16;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_r_16;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_16), b_0), term_s_16);
  r_0 = t;
  t = SSL_printnl(o_0, r_0);
  t = term_x_16;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm v_1 = NULL,z_1 = NULL,b_2 = NULL;
  v_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      z_1 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL,w_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, (ATerm) ATempty);
        t_1 = t;
        t = term_b_17;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, (ATerm) ATempty));
        t = h_11(w_1, t_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("i_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, b_2);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        {
          ATerm y_2 = NULL,k_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, (ATerm) ATempty);
          y_2 = t;
          t = term_b_17;
          k_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, (ATerm) ATempty));
          t = h_11(k_3, y_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm e_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_17) != ATmakeSymbol("g_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, b_2);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
  t_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_2 = ATgetFirst((ATermList) t);
          v_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 = NULL,h_4 = NULL,i_4 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(t_2);
            e_4 = t;
            t = u_2;
            t = s_127(t);
            h_4 = t;
            t = v_2;
            t = filter_1_0(s_127, t);
            i_4 = t;
            t = (ATerm) ATinsert(CheckATermList(i_4), h_4);
            h_0 = t;
            t = SSLsetAnnotations(h_0, e_4);
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            t = v_2;
            t = filter_1_0(s_127, t);
          }
      }
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_b_17;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  z_2 = t;
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            a_3 = ATgetArgument(t, 0);
            {
              ATerm k_17 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_17);
        {
          ATerm e_3 = NULL,f_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, a_3, (ATerm) ATempty);
          e_3 = t;
          t = term_n_17;
          f_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, a_3, (ATerm) ATempty), term_n_17);
          t = d_11(j_0, e_3, f_3, t);
          t = z_2;
        }
      }
    else
      {
        t = i_17;
        {
          ATerm i_3 = NULL,j_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              a_3 = ATgetArgument(t, 0);
              {
                ATerm q_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, a_3, (ATerm) ATempty);
          i_3 = t;
          t = term_f_18;
          j_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, a_3, (ATerm) ATempty), term_f_18);
          t = d_11(v_0, i_3, j_3, t);
          t = z_2;
        }
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
    }
  return(t);
}
static ATerm q_9 (ATerm z_84, ATerm y_84, ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,t_0 = NULL,p_0 = NULL,m_0 = NULL;
  t = y_84;
  t = topdown_1_0(x_0, t);
  t = z_84;
  if(match_cons(t, sym_Signature_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_84);
  l_3 = t;
  t = m_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_3 = ATgetFirst((ATermList) t);
      s_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  q_3 = t;
  t = r_3;
  if(match_cons(t, sym_Constructors_1))
    {
      v_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_3);
  u_3 = t;
  t = v_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, w_3);
  m_0 = t;
  t = SSLsetAnnotations(m_0, u_3);
  x_3 = t;
  t = s_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_3), x_3);
  p_0 = t;
  t = SSLsetAnnotations(p_0, q_3);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, t_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, l_3);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, y_84)), o_3));
  return(t);
}
static ATerm s_9 (ATerm z_62, ATerm a_63, ATerm b_63, ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  t = term_r_16;
  a_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_18), b_63), term_o_18), a_63), term_n_18), z_62), term_k_18);
  b_4 = t;
  t = SSL_printnl(a_4, b_4);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_18), b_63), term_o_18), a_63), term_n_18), z_62), term_k_18);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(((ATgetType(q_18) != AT_INT) || (ATgetInt((ATermInt) q_18) != 0)))
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(((ATgetType(r_18) != AT_INT) || (ATgetInt((ATermInt) r_18) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,c_5 = NULL;
  w_4 = t;
  if(match_cons(t, sym__2))
    {
      x_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4;
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      c_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = c_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL,i_5 = NULL;
        t = x_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_18 = ATgetFirst((ATermList) t);
            ATerm w_18 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(w_18) == AT_LIST) && !(ATisEmpty(w_18))))
              {
                ATerm y_18 = ATgetFirst((ATermList) w_18);
                ATerm z_18 = (ATerm) ATgetNext((ATermList) w_18);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm a_19 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_19;
            }
        }
        t = term_r_16;
        h_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_b_19);
        i_5 = t;
        t = SSL_printnl(h_5, i_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_b_19);
        t = giving_up_0_0(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          ATerm e_6 = NULL,f_6 = NULL;
          t = x_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_19 = ATgetFirst((ATermList) t);
              if(match_cons(c_19, sym__2))
                {
                  e_6 = ATgetArgument(c_19, 0);
                  f_6 = ATgetArgument(c_19, 1);
                }
              else
                _fail(t);
              {
                ATerm d_19 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(d_19) != AT_LIST) || !(ATisEmpty(d_19))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATmakeAppl(sym__2, e_6, f_6));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATmakeAppl(sym__2, e_6, f_6));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
      {
        ATerm o_6 = NULL,r_6 = NULL,s_6 = NULL,h_1 = NULL;
        t = SSLgetAnnotations(e_13);
        o_6 = t;
        t = f_13;
        t = y_107(t);
        r_6 = t;
        t = g_13;
        t = y_107(t);
        s_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_6, s_6);
        h_1 = t;
        t = SSLsetAnnotations(h_1, o_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_13 = ATgetArgument(t, 0);
          g_13 = ATgetArgument(t, 1);
          d_13 = ATgetArgument(t, 2);
          {
            ATerm g_7 = NULL,x_7 = NULL,a_8 = NULL,c_8 = NULL,k_1 = NULL;
            t = SSLgetAnnotations(e_13);
            g_7 = t;
            t = f_13;
            t = a_108(t);
            x_7 = t;
            t = g_13;
            t = a_108(t);
            a_8 = t;
            t = d_13;
            t = y_107(t);
            c_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, x_7, a_8, c_8);
            k_1 = t;
            t = SSLsetAnnotations(k_1, g_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_13 = ATgetArgument(t, 0);
              g_13 = ATgetArgument(t, 1);
              d_13 = ATgetArgument(t, 2);
              c_13 = ATgetArgument(t, 3);
              {
                ATerm h_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(e_13);
                h_9 = t;
                t = f_13;
                t = a_108(t);
                m_9 = t;
                t = g_13;
                t = a_108(t);
                n_9 = t;
                t = d_13;
                t = a_108(t);
                o_9 = t;
                t = c_13;
                t = y_107(t);
                p_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_9, n_9, o_9, p_9);
                l_1 = t;
                t = SSLsetAnnotations(l_1, h_9);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_13 = ATgetArgument(t, 0);
                  g_13 = ATgetArgument(t, 1);
                  d_13 = ATgetArgument(t, 2);
                  c_13 = ATgetArgument(t, 3);
                  {
                    ATerm j_10 = NULL,r_10 = NULL,s_10 = NULL,v_10 = NULL,w_10 = NULL,n_1 = NULL;
                    t = SSLgetAnnotations(e_13);
                    j_10 = t;
                    t = f_13;
                    t = a_108(t);
                    r_10 = t;
                    t = g_13;
                    t = a_108(t);
                    s_10 = t;
                    t = d_13;
                    t = a_108(t);
                    v_10 = t;
                    t = c_13;
                    t = y_107(t);
                    w_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, r_10, s_10, v_10, w_10);
                    n_1 = t;
                    t = SSLsetAnnotations(n_1, j_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      f_13 = ATgetArgument(t, 0);
                      g_13 = ATgetArgument(t, 1);
                      d_13 = ATgetArgument(t, 2);
                      {
                        ATerm e_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,o_1 = NULL;
                        t = SSLgetAnnotations(e_13);
                        e_12 = t;
                        t = f_13;
                        t = a_108(t);
                        i_12 = t;
                        t = g_13;
                        t = a_108(t);
                        j_12 = t;
                        t = d_13;
                        t = a_108(t);
                        k_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, i_12, j_12, k_12);
                        o_1 = t;
                        t = SSLsetAnnotations(o_1, e_12);
                      }
                    }
                  else
                    {
                      ATerm u_12 = NULL,k_13 = NULL,l_13 = NULL,p_1 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          f_13 = ATgetArgument(t, 0);
                          g_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(e_13);
                      u_12 = t;
                      t = f_13;
                      t = a_108(t);
                      k_13 = t;
                      t = g_13;
                      t = y_107(t);
                      l_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Rec_2, k_13, l_13);
                      p_1 = t;
                      t = SSLsetAnnotations(p_1, u_12);
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm k_14 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_14 = ATgetArgument(t, 0);
          {
            ATerm g_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_19);
      t = k_14;
    }
  else
    {
      t = e_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_14;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm u_14 = NULL;
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_14 = ATgetArgument(t, 0);
          {
            ATerm l_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_19);
      t = u_14;
    }
  else
    {
      t = i_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_14;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm o_19 = ATgetArgument(t, 0);
          d_14 = ATgetArgument(t, 1);
          {
            ATerm p_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_19);
      t = d_14;
      t = map_1_0(b_1, t);
    }
  else
    {
      t = m_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm r_19 = ATgetArgument(t, 0);
          d_14 = ATgetArgument(t, 1);
          {
            ATerm s_19 = ATgetArgument(t, 2);
          }
          {
            ATerm t_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_14;
      t = map_1_0(d_1, t);
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm d_15 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          d_15 = ATgetArgument(t, 0);
          {
            ATerm w_19 = ATgetArgument(t, 1);
          }
          {
            ATerm x_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_19);
      t = d_15;
    }
  else
    {
      t = u_19;
      if(match_cons(t, sym_SDefT_4))
        {
          d_15 = ATgetArgument(t, 0);
          {
            ATerm y_19 = ATgetArgument(t, 1);
          }
          {
            ATerm z_19 = ATgetArgument(t, 2);
          }
          {
            ATerm a_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_15;
    }
  return(t);
}
static ATerm y_9 (ATerm u_26, ATerm t_26, ATerm t)
{
  t = u_26;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm s_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      s_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(r_1, s_14, x_14, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      if((y_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(x_1, m_15, n_15, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      p_15 = ATgetArgument(t, 0);
      if((p_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      m_17 = ATgetArgument(t, 0);
      if((m_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_130 (ATerm), ATerm t)
{
  static ATerm p_17 (ATerm t)
  {
    ATerm a_16 = NULL,b_16 = NULL,e_16 = NULL;
    e_16 = t;
    {
      ATerm b_20 = t;
      int c_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_129(t);
          LocalPopChoice(c_20);
        }
      else
        {
          t = b_20;
          t = (ATerm) ATempty;
        }
    }
    a_16 = t;
    t = e_16;
    {
      ATerm d_20 = t;
      int f_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_16 = NULL,c_14 = NULL,e_14 = NULL;
          t = a_130(t);
          f_16 = t;
          t = e_16;
          {
            static ATerm f_1 (ATerm t)
            {
              ATerm v_13 = NULL;
              t = p_17(t);
              v_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_13, f_16);
              t = t_10(c_130, v_13, f_16, t);
              return(t);
            }
            t = b_130(f_1, p_17, j_1, t);
          }
          e_14 = t;
          t = SSL_explode_term(e_14);
          if(match_cons(t, sym__2))
            {
              ATerm g_20 = ATgetArgument(t, 0);
              c_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_14;
          t = foldr_3_0(m_1, q_1, _id, t);
          LocalPopChoice(f_20);
        }
      else
        {
          t = d_20;
          {
            ATerm a_15 = NULL;
            t = SSL_explode_term(e_16);
            if(match_cons(t, sym__2))
              {
                ATerm h_20 = ATgetArgument(t, 0);
                a_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_15;
            t = foldr_3_0(s_1, u_1, p_17, t);
          }
        }
    }
    b_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, b_16);
    t = f_11(y_1, a_16, b_16, t);
    return(t);
  }
  t = p_17(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm i_20 = ATgetArgument(t, 0);
      if(match_cons(i_20, sym_SVar_1))
        {
          t_17 = ATgetArgument(i_20, 0);
        }
      else
        _fail(t);
      u_17 = ATgetArgument(t, 1);
      v_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_17;
  t = foldr_3_0(e_2, f_2, g_2, t);
  w_17 = t;
  t = v_17;
  t = foldr_3_0(h_2, i_2, j_2, t);
  x_17 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_17, (ATerm) ATmakeAppl(sym__2, w_17, x_17)));
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,j_18 = NULL,l_18 = NULL;
      c_18 = t;
      if(match_cons(t, sym_Let_2))
        {
          d_18 = ATgetArgument(t, 0);
          e_18 = ATgetArgument(t, 1);
          t = c_18;
          t = y_9(d_18, e_18, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              d_18 = ATgetArgument(t, 0);
              e_18 = ATgetArgument(t, 1);
              j_18 = ATgetArgument(t, 2);
              t = e_18;
              t = map_1_0(m_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  d_18 = ATgetArgument(t, 0);
                  e_18 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, d_18);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_18 = ATgetArgument(t, 0);
                      e_18 = ATgetArgument(t, 1);
                      j_18 = ATgetArgument(t, 2);
                      l_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_18;
                  t = map_1_0(n_2, t);
                }
            }
        }
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      t = Bind7_0_0(t);
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm m_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_20 = ATgetArgument(t, 0);
      if(match_cons(o_20, sym__2))
        {
          m_20 = ATgetArgument(o_20, 0);
          {
            ATerm t_20 = ATgetArgument(o_20, 1);
          }
        }
      else
        _fail(t);
      if((m_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(y_17, z_17, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      a_18 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(a_18, b_18, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm q_19 = NULL;
  ATerm v_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_19 = ATgetArgument(t, 0);
          {
            ATerm b_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_21);
      t = q_19;
    }
  else
    {
      t = v_20;
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
static ATerm n_2 (ATerm t)
{
  ATerm j_20 = NULL;
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_20 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_21);
      t = j_20;
    }
  else
    {
      t = c_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_20;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(a_2, c_2, sboundin_3_0, d_2, t);
  return(t);
}
static ATerm j_39 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = l_32;
  {
    ATerm h_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,y_32 = NULL,k_2 = NULL;
        y_32 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_32 = ATgetFirst((ATermList) t);
            t_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_32);
        r_32 = t;
        t = t_32;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(t_32), s_32);
        k_2 = t;
        t = SSLsetAnnotations(k_2, r_32);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_21, l_32);
  return(t);
}
static ATerm m_39 (ATerm z_32, ATerm a_33, ATerm t)
{
  t = z_32;
  {
    ATerm l_21 = t;
    if((PushChoice() == 0))
      {
        ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,l_2 = NULL;
        f_33 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_33 = ATgetFirst((ATermList) t);
            e_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_33);
        c_33 = t;
        t = e_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_33), d_33);
        l_2 = t;
        t = SSLsetAnnotations(l_2, c_33);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, z_32);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,r_17 = NULL;
  r_34 = t;
  t = SSL_explode_term(r_34);
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_21 = ATgetArgument(t, 1);
        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
          {
            s_34 = ATgetFirst((ATermList) q_21);
            {
              ATerm r_21 = (ATerm) ATgetNext((ATermList) q_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(r_34);
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_21 = ATgetArgument(t, 1);
        if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
          {
            ATerm v_21 = ATgetFirst((ATermList) u_21);
            ATerm w_21 = (ATerm) ATgetNext((ATermList) u_21);
            if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
              {
                r_17 = ATgetFirst((ATermList) w_21);
                {
                  ATerm x_21 = (ATerm) ATgetNext((ATermList) w_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_21, (ATerm) ATinsert(ATinsert(ATempty, r_17), s_34));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  if(match_cons(t, sym__2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_21, (ATerm) ATinsert(ATinsert(ATempty, r_35), q_35));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  if(match_cons(t, sym__2))
    {
      t_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_21, (ATerm) ATinsert(ATinsert(ATempty, u_35), t_35));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, p_36), o_36));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm r_36 = NULL,u_36 = NULL;
  if(match_cons(t, sym__2))
    {
      r_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, u_36), r_36));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm h_33 = NULL,l_33 = NULL,p_33 = NULL,q_33 = NULL,w_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  z_33 = t;
  if(match_cons(t, sym_Anno_2))
    {
      a_34 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
      {
        ATerm j_34 = NULL;
        t = b_34;
        t = foldr_2_0(o_2, w_2, t);
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, a_34, j_34);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          a_34 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, a_34, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              a_34 = ATgetArgument(t, 0);
              {
                ATerm i_18 = NULL;
                t = a_34;
                {
                  ATerm c_22 = t;
                  int d_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_e_22;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_f_22;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_g_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_h_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_i_22;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(d_22);
                    }
                  else
                    {
                      t = c_22;
                      {
                        ATerm m_18 = NULL;
                        t = SSL_explode_string(a_34);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm j_22 = ATgetFirst((ATermList) t);
                            if(((ATgetType(j_22) != AT_INT) || (ATgetInt((ATermInt) j_22) != 39)))
                              _fail(t);
                            {
                              ATerm l_22 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
                                {
                                  m_18 = ATgetFirst((ATermList) l_22);
                                  {
                                    ATerm m_22 = (ATerm) ATgetNext((ATermList) l_22);
                                    if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
                                      {
                                        ATerm n_22 = ATgetFirst((ATermList) m_22);
                                        if(((ATgetType(n_22) != AT_INT) || (ATgetInt((ATermInt) n_22) != 39)))
                                          _fail(t);
                                        {
                                          ATerm o_22 = (ATerm) ATgetNext((ATermList) m_22);
                                          if(((ATgetType(o_22) != AT_LIST) || !(ATisEmpty(o_22))))
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
                        t = m_18;
                      }
                    }
                }
                i_18 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, i_18);
              }
            }
          else
            {
              ATerm p_22 = t;
              int q_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      a_34 = ATgetArgument(t, 0);
                      {
                        ATerm r_22 = ATgetArgument(t, 1);
                      }
                      w_33 = ATgetArgument(t, 2);
                      h_33 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_22);
                  t = (ATerm) ATmakeAppl(sym_Con_3, a_34, w_33, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_33), (ATerm) ATempty));
                }
              else
                {
                  t = p_22;
                  {
                    ATerm s_22 = t;
                    int t_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            a_34 = ATgetArgument(t, 0);
                            {
                              ATerm u_22 = ATgetArgument(t, 1);
                            }
                            w_33 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_22);
                        t = (ATerm) ATmakeAppl(sym_Con_3, a_34, w_33, term_x_22);
                      }
                    else
                      {
                        t = s_22;
                        if(match_cons(t, sym_Con1_2))
                          {
                            a_34 = ATgetArgument(t, 0);
                            b_34 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, a_34, b_34, term_x_22);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                a_34 = ATgetArgument(t, 0);
                                b_34 = ATgetArgument(t, 1);
                                {
                                  static ATerm b_3 (ATerm t)
                                  {
                                    t = b_34;
                                    return(t);
                                  }
                                  t = a_34;
                                  t = foldr_2_0(b_3, c_3, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    a_34 = ATgetArgument(t, 0);
                                    t = a_34;
                                    t = foldr_2_0(d_3, g_3, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        a_34 = ATgetArgument(t, 0);
                                        t = a_34;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            l_33 = ATgetFirst((ATermList) t);
                                            p_33 = (ATerm) ATgetNext((ATermList) t);
                                            t = p_33;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm y_22 = t;
                                                int a_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = j_39(a_34, z_33, t);
                                                    LocalPopChoice(a_23);
                                                  }
                                                else
                                                  {
                                                    t = y_22;
                                                    t = l_33;
                                                  }
                                              }
                                            else
                                              {
                                                t = j_39(a_34, z_33, t);
                                              }
                                          }
                                        else
                                          {
                                            t = j_39(a_34, z_33, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            a_34 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, a_34));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                a_34 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, a_34));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    a_34 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, a_34));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        a_34 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_34));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            a_34 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_34), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                a_34 = ATgetArgument(t, 0);
                                                                b_34 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_34), b_34);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    a_34 = ATgetArgument(t, 0);
                                                                    b_34 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm h_3 (ATerm t)
                                                                      {
                                                                        t = b_34;
                                                                        return(t);
                                                                      }
                                                                      t = a_34;
                                                                      t = foldr_2_0(h_3, p_3, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        a_34 = ATgetArgument(t, 0);
                                                                        t = a_34;
                                                                        t = foldr_2_0(y_3, z_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            a_34 = ATgetArgument(t, 0);
                                                                            b_34 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, (ATerm) ATinsert(CheckATermList(b_34), a_34));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                a_34 = ATgetArgument(t, 0);
                                                                                t = a_34;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    l_33 = ATgetFirst((ATermList) t);
                                                                                    p_33 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = p_33;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm b_23 = t;
                                                                                        int g_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = m_39(a_34, z_33, t);
                                                                                            LocalPopChoice(g_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_23;
                                                                                            t = l_33;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = m_39(a_34, z_33, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_39(a_34, z_33, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_k_23;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        a_34 = ATgetArgument(t, 0);
                                                                                        b_34 = ATgetArgument(t, 1);
                                                                                        t = b_34;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            q_33 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_n_23, (ATerm) ATinsert(ATinsert(ATempty, q_33), a_34));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            a_34 = ATgetArgument(t, 0);
                                                                                            t = a_34;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                a_34 = ATgetArgument(t, 0);
                                                                                                b_34 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, a_34, b_34, term_o_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    a_34 = ATgetArgument(t, 0);
                                                                                                    b_34 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, a_34, b_34, term_o_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        a_34 = ATgetArgument(t, 0);
                                                                                                        b_34 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, a_34, (ATerm)ATempty, b_34);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            a_34 = ATgetArgument(t, 0);
                                                                                                            b_34 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, b_34, a_34);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                a_34 = ATgetArgument(t, 0);
                                                                                                                b_34 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, a_34, b_34, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    a_34 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, a_34, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        a_34 = ATgetArgument(t, 0);
                                                                                                                        b_34 = ATgetArgument(t, 1);
                                                                                                                        w_33 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, a_34, b_34, (ATerm)ATempty, w_33);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            a_34 = ATgetArgument(t, 0);
                                                                                                                            b_34 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_34, (ATerm)ATempty, (ATerm)ATempty, b_34);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                a_34 = ATgetArgument(t, 0);
                                                                                                                                b_34 = ATgetArgument(t, 1);
                                                                                                                                w_33 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_34, b_34, (ATerm)ATempty, w_33);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    a_34 = ATgetArgument(t, 0);
                                                                                                                                    b_34 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_34, (ATerm)ATempty, (ATerm)ATempty, b_34);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        a_34 = ATgetArgument(t, 0);
                                                                                                                                        b_34 = ATgetArgument(t, 1);
                                                                                                                                        w_33 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_34, b_34, (ATerm)ATempty, w_33);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            a_34 = ATgetArgument(t, 0);
                                                                                                                                            b_34 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_34, (ATerm)ATempty, (ATerm)ATempty, b_34);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm p_23 = ATgetArgument(t, 0);
                                                                                                                                                b_34 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, b_34);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm o_39 = NULL,w_39 = NULL,x_39 = NULL;
  w_39 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      x_39 = ATgetArgument(t, 0);
      o_39 = ATgetArgument(t, 1);
      {
        ATerm e_40 = NULL,f_40 = NULL,j_40 = NULL,l_40 = NULL;
        t = w_39;
        t = new_0_0(t);
        e_40 = t;
        t = new_0_0(t);
        f_40 = t;
        t = new_0_0(t);
        j_40 = t;
        t = new_0_0(t);
        l_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_40), j_40), f_40), e_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, e_40), (ATerm) ATmakeAppl(sym_Var_1, j_40))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, x_39, (ATerm)ATmakeAppl(sym_Var_1, e_40), (ATerm) ATmakeAppl(sym_Var_1, f_40)), (ATerm) ATmakeAppl(sym_BAM_3, o_39, (ATerm)ATmakeAppl(sym_Var_1, j_40), (ATerm) ATmakeAppl(sym_Var_1, l_40)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_40)), (ATerm) ATmakeAppl(sym_Var_1, f_40))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          x_39 = ATgetArgument(t, 0);
          {
            ATerm n_40 = NULL,o_40 = NULL,r_40 = NULL,s_40 = NULL;
            t = w_39;
            t = new_0_0(t);
            r_40 = t;
            t = x_39;
            {
              static ATerm c_4 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((n_40 != NULL) && (n_40 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      n_40 = ATgetArgument(t, 0);
                    if(((o_40 != NULL) && (o_40 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      o_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_40);
                return(t);
              }
              t = oncetd_1_0(c_4, t);
            }
            s_40 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_40)), not_null(n_40))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_40)), (ATerm) ATmakeAppl(sym_Build_1, s_40))));
          }
        }
      else
        {
          ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              x_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_39;
          t = new_0_0(t);
          c_41 = t;
          t = new_0_0(t);
          d_41 = t;
          t = x_39;
          {
            static ATerm d_4 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((a_41 != NULL) && (a_41 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_41 = ATgetArgument(t, 0);
                  if(((b_41 != NULL) && (b_41 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    b_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, c_41);
              return(t);
            }
            t = oncetd_1_0(d_4, t);
          }
          e_41 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_41), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_41)), (ATerm) ATmakeAppl(sym_PrimT_3, term_w_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_41))))), (ATerm)ATmakeAppl(sym_Var_1, c_41), (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_41)), not_null(a_41)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm g_41 = NULL,j_41 = NULL;
  g_41 = t;
  if(match_cons(t, sym_Match_1))
    {
      j_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_23 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_41 = NULL,m_41 = NULL,u_41 = NULL,v_41 = NULL;
        t = g_41;
        t = new_0_0(t);
        u_41 = t;
        t = j_41;
        {
          static ATerm f_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_41 != NULL) && (l_41 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_41 = ATgetArgument(t, 0);
                if(((m_41 != NULL) && (m_41 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_41), l_41);
            return(t);
          }
          t = pat_td_1_0(f_4, t);
        }
        v_41 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_41), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_41))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_41))))));
        LocalPopChoice(c_24);
      }
    else
      {
        t = x_23;
        {
          ATerm i_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
              t = g_41;
              t = new_0_0(t);
              j_42 = t;
              t = j_41;
              {
                static ATerm g_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_42 != NULL) && (i_42 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_42 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_42);
                  return(t);
                }
                t = pat_td_1_0(g_4, t);
              }
              k_42 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_42)), not_null(i_42))));
              LocalPopChoice(k_24);
            }
          else
            {
              t = i_24;
              {
                ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
                t = g_41;
                t = new_0_0(t);
                p_42 = t;
                t = j_41;
                {
                  static ATerm j_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_42 != NULL) && (o_42 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_42 = ATgetArgument(t, 0);
                        if(((n_42 != NULL) && (n_42 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_42 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_42);
                    return(t);
                  }
                  t = pat_td_1_0(j_4, t);
                }
                q_42 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_42)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_42)), not_null(o_42)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm s_141 (ATerm), ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_141(t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,t_47 = NULL;
        p_47 = t;
        if(match_cons(t, sym_Op_2))
          {
            q_47 = ATgetArgument(t, 0);
            t_47 = ATgetArgument(t, 1);
            {
              ATerm u_18 = NULL,x_18 = NULL,p_2 = NULL;
              t = SSLgetAnnotations(p_47);
              u_18 = t;
              t = t_47;
              {
                static ATerm k_4 (ATerm t)
                {
                  t = pat_td_1_0(s_141, t);
                  return(t);
                }
                t = fetch_1_0(k_4, t);
              }
              x_18 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, q_47, x_18);
              p_2 = t;
              t = SSLsetAnnotations(p_2, u_18);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                q_47 = ATgetArgument(t, 0);
                t_47 = ATgetArgument(t, 1);
                {
                  ATerm p_24 = t;
                  int r_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_19 = NULL,k_19 = NULL,q_2 = NULL;
                      t = SSLgetAnnotations(p_47);
                      h_19 = t;
                      t = t_47;
                      t = pat_td_1_0(s_141, t);
                      k_19 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, q_47, k_19);
                      q_2 = t;
                      t = SSLsetAnnotations(q_2, h_19);
                      LocalPopChoice(r_24);
                    }
                  else
                    {
                      t = p_24;
                      {
                        ATerm e_20 = NULL,n_20 = NULL,r_2 = NULL;
                        t = SSLgetAnnotations(p_47);
                        e_20 = t;
                        t = q_47;
                        t = pat_td_1_0(s_141, t);
                        n_20 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, n_20, t_47);
                        r_2 = t;
                        t = SSLsetAnnotations(r_2, e_20);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    q_47 = ATgetArgument(t, 0);
                    t_47 = ATgetArgument(t, 1);
                    o_47 = ATgetArgument(t, 2);
                    {
                      ATerm e_21 = NULL,s_21 = NULL,s_2 = NULL;
                      t = SSLgetAnnotations(p_47);
                      e_21 = t;
                      t = o_47;
                      {
                        static ATerm l_4 (ATerm t)
                        {
                          t = pat_td_1_0(s_141, t);
                          return(t);
                        }
                        t = fetch_1_0(l_4, t);
                      }
                      s_21 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, q_47, t_47, s_21);
                      s_2 = t;
                      t = SSLsetAnnotations(s_2, e_21);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        q_47 = ATgetArgument(t, 0);
                        t_47 = ATgetArgument(t, 1);
                        o_47 = ATgetArgument(t, 2);
                        {
                          ATerm k_22 = NULL,f_23 = NULL,x_2 = NULL;
                          t = SSLgetAnnotations(p_47);
                          k_22 = t;
                          t = o_47;
                          {
                            static ATerm m_4 (ATerm t)
                            {
                              t = pat_td_1_0(s_141, t);
                              return(t);
                            }
                            t = fetch_1_0(m_4, t);
                          }
                          f_23 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, q_47, t_47, f_23);
                          x_2 = t;
                          t = SSLsetAnnotations(x_2, k_22);
                        }
                      }
                    else
                      {
                        ATerm d_24 = NULL,j_24 = NULL,n_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            q_47 = ATgetArgument(t, 0);
                            t_47 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(p_47);
                        d_24 = t;
                        t = t_47;
                        t = pat_td_1_0(s_141, t);
                        j_24 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, q_47, j_24);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, d_24);
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
  ATerm u_48 = NULL,v_48 = NULL;
  u_48 = t;
  if(match_cons(t, sym_Build_1))
    {
      v_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_48 = NULL,x_48 = NULL,h_49 = NULL,o_49 = NULL;
        t = u_48;
        t = new_0_0(t);
        h_49 = t;
        t = v_48;
        {
          static ATerm n_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_48 != NULL) && (w_48 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_48 = ATgetArgument(t, 0);
                if(((x_48 != NULL) && (x_48 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, h_49);
            return(t);
          }
          t = pat_td_1_0(n_4, t);
        }
        o_49 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_48)), not_null(w_48))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_49)))), (ATerm) ATmakeAppl(sym_Build_1, o_49)));
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_49 = NULL,r_49 = NULL,s_49 = NULL;
              t = u_48;
              t = new_0_0(t);
              r_49 = t;
              t = v_48;
              {
                static ATerm o_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((p_49 != NULL) && (p_49 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, r_49);
                  return(t);
                }
                t = pat_td_1_0(o_4, t);
              }
              s_49 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_49), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_49)))), (ATerm) ATmakeAppl(sym_Build_1, s_49)));
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              {
                ATerm t_49 = NULL,u_49 = NULL,a_50 = NULL,c_50 = NULL;
                t = u_48;
                t = new_0_0(t);
                a_50 = t;
                t = v_48;
                {
                  static ATerm p_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((t_49 != NULL) && (t_49 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          t_49 = ATgetArgument(t, 0);
                        if(((u_49 != NULL) && (u_49 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_49 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_50);
                    return(t);
                  }
                  t = pat_td_1_0(p_4, t);
                }
                c_50 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_49), not_null(u_49), (ATerm) ATmakeAppl(sym_Var_1, a_50))), (ATerm) ATmakeAppl(sym_Build_1, c_50)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm t_50 = NULL,c_51 = NULL,d_51 = NULL,i_51 = NULL,l_51 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      i_51 = ATgetArgument(t, 0);
      l_51 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, i_51, l_51);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          i_51 = ATgetArgument(t, 0);
          t = i_51;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_50 = ATgetFirst((ATermList) t);
              c_51 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, t_50, (ATerm) ATmakeAppl(sym_LChoices_1, c_51));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_x_24;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              i_51 = ATgetArgument(t, 0);
              t = i_51;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_50 = ATgetFirst((ATermList) t);
                  c_51 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, t_50, (ATerm) ATmakeAppl(sym_Choices_1, c_51));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_x_24;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  i_51 = ATgetArgument(t, 0);
                  t = i_51;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_50 = ATgetFirst((ATermList) t);
                      c_51 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_50, (ATerm) ATmakeAppl(sym_Seqs_1, c_51));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_o_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      i_51 = ATgetArgument(t, 0);
                      l_51 = ATgetArgument(t, 1);
                      d_51 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, l_51, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, d_51), i_51)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          i_51 = ATgetArgument(t, 0);
                          l_51 = ATgetArgument(t, 1);
                          d_51 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, d_51)), i_51), (ATerm) ATmakeAppl(sym_Build_1, l_51)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              i_51 = ATgetArgument(t, 0);
                              l_51 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_51, (ATerm) ATmakeAppl(sym_Match_1, l_51));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  i_51 = ATgetArgument(t, 0);
                                  l_51 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_51), l_51);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      i_51 = ATgetArgument(t, 0);
                                      l_51 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_51), i_51);
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
static ATerm q_4 (ATerm t)
{
  ATerm z_24 = t;
  if((PushChoice() == 0))
    {
      ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,r_4 = NULL;
      l_53 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_53);
      j_53 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_53);
      r_4 = t;
      t = SSLsetAnnotations(r_4, j_53);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_24;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_53 = ATgetFirst((ATermList) t);
      n_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if(match_cons(e_25, sym__2))
        {
          u_53 = ATgetArgument(e_25, 0);
          v_53 = ATgetArgument(e_25, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            w_53 = ATgetArgument(c_26, 0);
            x_53 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_53), u_53), (ATerm) ATinsert(CheckATermList(x_53), v_53));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_53 = ATgetFirst((ATermList) t);
      z_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym__2))
        {
          a_54 = ATgetArgument(d_26, 0);
          b_54 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym__2))
          {
            c_54 = ATgetArgument(e_26, 0);
            d_54 = ATgetArgument(e_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_54), a_54), (ATerm) ATinsert(CheckATermList(d_54), b_54));
  return(t);
}
static ATerm h_10 (ATerm v_79, ATerm w_79, ATerm x_79, ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,s_4 = NULL;
  t = x_79;
  t = fetch_1_0(q_4, t);
  t = x_79;
  t = genzip_4_0(t_4, u_4, v_4, LiftPrimArg_0_0, t);
  i_53 = t;
  if(match_cons(t, sym__2))
    {
      a_53 = ATgetArgument(t, 0);
      f_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_53);
  z_52 = t;
  t = a_53;
  t = concat_0_0(t);
  g_53 = t;
  t = f_53;
  t = genzip_4_0(a_5, b_5, e_5, _id, t);
  h_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
  s_4 = t;
  t = SSLsetAnnotations(s_4, z_52);
  if(match_cons(t, sym__2))
    {
      w_52 = ATgetArgument(t, 0);
      {
        ATerm f_26 = ATgetArgument(t, 1);
        if(match_cons(f_26, sym__2))
          {
            x_52 = ATgetArgument(f_26, 0);
            y_52 = ATgetArgument(f_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, w_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_52), (ATerm) ATmakeAppl(sym_CallT_3, v_79, w_79, y_52)));
  return(t);
}
static ATerm z_54 (ATerm i_54, ATerm t)
{
  ATerm n_54 = NULL;
  t = i_54;
  {
    ATerm g_26 = t;
    if((PushChoice() == 0))
      {
        ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,d_5 = NULL;
        q_54 = t;
        if(match_cons(t, sym_Var_1))
          {
            p_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_54);
        o_54 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, p_54);
        d_5 = t;
        t = SSLsetAnnotations(d_5, o_54);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_26;
      }
  }
  t = new_0_0(t);
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_54), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_54)))), (ATerm) ATmakeAppl(sym_Var_1, n_54)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL;
  r_54 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_54 = ATgetArgument(t, 0);
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_54(r_54, t);
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATmakeAppl(sym_Var_1, s_54)));
          }
      }
    }
  else
    {
      t = z_54(r_54, t);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm k_26 = t;
  if((PushChoice() == 0))
    {
      ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,m_5 = NULL;
      o_25 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_25);
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_25);
      m_5 = t;
      t = SSLsetAnnotations(m_5, m_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_26;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_25 = ATgetFirst((ATermList) t);
      w_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_25, w_25);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(match_cons(l_26, sym__2))
        {
          y_25 = ATgetArgument(l_26, 0);
          z_25 = ATgetArgument(l_26, 1);
        }
      else
        _fail(t);
      {
        ATerm r_26 = ATgetArgument(t, 1);
        if(match_cons(r_26, sym__2))
          {
            a_26 = ATgetArgument(r_26, 0);
            b_26 = ATgetArgument(r_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_26), y_25), (ATerm) ATinsert(CheckATermList(b_26), z_25));
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm j_26 = NULL,m_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_26 = ATgetFirst((ATermList) t);
      m_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_26, m_26);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if(match_cons(s_26, sym__2))
        {
          n_26 = ATgetArgument(s_26, 0);
          o_26 = ATgetArgument(s_26, 1);
        }
      else
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(match_cons(v_26, sym__2))
          {
            p_26 = ATgetArgument(v_26, 0);
            q_26 = ATgetArgument(v_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_26), n_26), (ATerm) ATinsert(CheckATermList(q_26), o_26));
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm w_26 = t;
  if((PushChoice() == 0))
    {
      ATerm f_28 = NULL,g_28 = NULL,j_28 = NULL,o_5 = NULL;
      j_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_28);
      f_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_28);
      o_5 = t;
      t = SSLsetAnnotations(o_5, f_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_26;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm v_5 (ATerm t)
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
static ATerm y_5 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,s_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(match_cons(x_26, sym__2))
        {
          n_28 = ATgetArgument(x_26, 0);
          o_28 = ATgetArgument(x_26, 1);
        }
      else
        _fail(t);
      {
        ATerm y_26 = ATgetArgument(t, 1);
        if(match_cons(y_26, sym__2))
          {
            p_28 = ATgetArgument(y_26, 0);
            s_28 = ATgetArgument(y_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_28), n_28), (ATerm) ATinsert(CheckATermList(s_28), o_28));
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_25;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_28 = ATgetFirst((ATermList) t);
      u_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_28, u_28);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(match_cons(z_26, sym__2))
        {
          a_29 = ATgetArgument(z_26, 0);
          b_29 = ATgetArgument(z_26, 1);
        }
      else
        _fail(t);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(match_cons(a_27, sym__2))
          {
            c_29 = ATgetArgument(a_27, 0);
            d_29 = ATgetArgument(a_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_29), a_29), (ATerm) ATinsert(CheckATermList(d_29), b_29));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,l_59 = NULL;
  h_59 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_59 = ATgetArgument(t, 0);
      l_59 = ATgetArgument(t, 1);
      g_59 = ATgetArgument(t, 2);
      {
        ATerm a_25 = NULL,c_25 = NULL,d_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,n_5 = NULL;
        t = g_59;
        t = fetch_1_0(f_5, t);
        t = g_59;
        t = genzip_4_0(g_5, j_5, k_5, LiftPrimArg_0_0, t);
        l_25 = t;
        if(match_cons(t, sym__2))
          {
            h_25 = ATgetArgument(t, 0);
            i_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_25);
        g_25 = t;
        t = h_25;
        t = concat_0_0(t);
        j_25 = t;
        t = i_25;
        t = genzip_4_0(l_5, q_5, r_5, _id, t);
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_25, k_25);
        n_5 = t;
        t = SSLsetAnnotations(n_5, g_25);
        if(match_cons(t, sym__2))
          {
            a_25 = ATgetArgument(t, 0);
            {
              ATerm b_27 = ATgetArgument(t, 1);
              if(match_cons(b_27, sym__2))
                {
                  c_25 = ATgetArgument(b_27, 0);
                  d_25 = ATgetArgument(b_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_25, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_25), (ATerm) ATmakeAppl(sym_PrimT_3, i_59, l_59, d_25)));
      }
    }
  else
    {
      ATerm h_27 = NULL,i_27 = NULL,q_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,p_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          i_59 = ATgetArgument(t, 0);
          l_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_59;
      t = fetch_1_0(s_5, t);
      t = l_59;
      t = genzip_4_0(t_5, v_5, y_5, LiftPrimArg_0_0, t);
      c_28 = t;
      if(match_cons(t, sym__2))
        {
          u_27 = ATgetArgument(t, 0);
          v_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_28);
      t_27 = t;
      t = u_27;
      t = concat_0_0(t);
      a_28 = t;
      t = v_27;
      t = genzip_4_0(z_5, a_6, c_6, _id, t);
      b_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_28, b_28);
      p_5 = t;
      t = SSLsetAnnotations(p_5, t_27);
      if(match_cons(t, sym__2))
        {
          h_27 = ATgetArgument(t, 0);
          {
            ATerm c_27 = ATgetArgument(t, 1);
            if(match_cons(c_27, sym__2))
              {
                i_27 = ATgetArgument(c_27, 0);
                q_27 = ATgetArgument(c_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, h_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_27), (ATerm) ATmakeAppl(sym_PrimT_3, i_59, (ATerm)ATempty, q_27)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm t)
{
  static ATerm o_59 (ATerm t)
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_114(t);
        t = o_59(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = p_114(t);
      }
    return(t);
  }
  t = o_59(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL;
  f_60 = t;
  if(match_cons(t, sym_Con_3))
    {
      c_60 = ATgetArgument(t, 0);
      d_60 = ATgetArgument(t, 1);
      e_60 = ATgetArgument(t, 2);
      {
        ATerm h_30 = NULL,u_5 = NULL;
        t = SSLgetAnnotations(f_60);
        h_30 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, c_60, d_60, e_60);
        u_5 = t;
        t = SSLsetAnnotations(u_5, h_30);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = f_60;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm f_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_27;
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  if(match_cons(t, sym_Con_3))
    {
      v_62 = ATgetArgument(t, 0);
      w_62 = ATgetArgument(t, 1);
      t_62 = ATgetArgument(t, 2);
      {
        ATerm n_31 = NULL,w_5 = NULL;
        t = SSLgetAnnotations(u_62);
        n_31 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, v_62, w_62, t_62);
        w_5 = t;
        t = SSLsetAnnotations(w_5, n_31);
      }
    }
  else
    {
      ATerm z_31 = NULL,x_5 = NULL;
      if(match_cons(t, sym_App_2))
        {
          v_62 = ATgetArgument(t, 0);
          w_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_62);
      z_31 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, v_62, w_62);
      x_5 = t;
      t = SSLsetAnnotations(x_5, z_31);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm g_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(g_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,k_63 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      f_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_63;
  if(match_cons(t, sym_StratRule_3))
    {
      g_63 = ATgetArgument(t, 0);
      h_63 = ATgetArgument(t, 1);
      k_63 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_63), (ATerm) ATmakeAppl(sym_Where_1, k_63)), g_63));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          g_63 = ATgetArgument(t, 0);
          h_63 = ATgetArgument(t, 1);
          k_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_63;
      t = pureterm_0_0(t);
      t = h_63;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, h_63)), (ATerm) ATmakeAppl(sym_Where_1, k_63)), (ATerm) ATmakeAppl(sym_Match_1, g_63)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  static ATerm m_64 (ATerm t)
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_109(t);
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = SRTS_one(m_64, t);
      }
    return(t);
  }
  t = m_64(t);
  return(t);
}
static ATerm l_10 (ATerm i_75, ATerm j_75, ATerm k_75, ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
  t = new_0_0(t);
  r_64 = t;
  t = i_75;
  {
    static ATerm i_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_27 = ATgetArgument(t, 0);
          if(match_cons(p_27, sym_Var_1))
            {
              if(((q_64 != NULL) && (q_64 != ATgetArgument(p_27, 0))))
                _fail(ATgetArgument(p_27, 0));
              else
                q_64 = ATgetArgument(p_27, 0);
            }
          else
            _fail(t);
          if(((o_64 != NULL) && (o_64 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_64 = ATgetArgument(t, 1);
          {
            ATerm e_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_64);
      return(t);
    }
    t = oncetd_1_0(i_6, t);
  }
  s_64 = t;
  t = j_75;
  {
    static ATerm j_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm x_28 = ATgetArgument(t, 0);
          if(match_cons(x_28, sym_Var_1))
            {
              if(((q_64 != NULL) && (q_64 != ATgetArgument(x_28, 0))))
                _fail(ATgetArgument(x_28, 0));
              else
                q_64 = ATgetArgument(x_28, 0);
            }
          else
            _fail(t);
          if(((p_64 != NULL) && (p_64 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_64 = ATgetArgument(t, 1);
          {
            ATerm l_29 = ATgetArgument(t, 2);
            if(match_cons(l_29, sym_CallT_3))
              {
                if(((n_64 != NULL) && (n_64 != ATgetArgument(l_29, 0))))
                  _fail(ATgetArgument(l_29, 0));
                else
                  n_64 = ATgetArgument(l_29, 0);
                {
                  ATerm m_29 = ATgetArgument(l_29, 1);
                  if(((ATgetType(m_29) != AT_LIST) || !(ATisEmpty(m_29))))
                    _fail(t);
                }
                {
                  ATerm p_29 = ATgetArgument(l_29, 2);
                  if(((ATgetType(p_29) != AT_LIST) || !(ATisEmpty(p_29))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, r_64);
      return(t);
    }
    t = oncetd_1_0(j_6, t);
  }
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_64), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, s_64, t_64, (ATerm) ATmakeAppl(sym_Seq_2, k_75, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(n_64), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_64), not_null(p_64), term_o_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_64)), (ATerm) ATmakeAppl(sym_Var_1, r_64))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_29 = t;
      int y_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,q_66 = NULL,x_66 = NULL;
          n_66 = t;
          if(match_cons(t, sym_SRule_1))
            {
              q_66 = ATgetArgument(t, 0);
              t = q_66;
              if(match_cons(t, sym_Rule_3))
                {
                  i_66 = ATgetArgument(t, 0);
                  l_66 = ATgetArgument(t, 1);
                  m_66 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_66;
              t = l_10(i_66, l_66, m_66, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm v_32 = NULL,g_33 = NULL,b_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  q_66 = ATgetArgument(t, 0);
                  x_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_66);
              v_32 = t;
              t = x_66;
              t = desugarRule_0_0(t);
              g_33 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, q_66, g_33);
              b_6 = t;
              t = SSLsetAnnotations(b_6, v_32);
            }
          LocalPopChoice(y_29);
        }
      else
        {
          t = v_29;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm t_108 (ATerm), ATerm t)
{
  static ATerm l_6 (ATerm t)
  {
    t = topdown_1_0(t_108, t);
    return(t);
  }
  t = t_108(t);
  t = SRTS_all(l_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm c_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(f_30);
    }
  else
    {
      t = c_30;
    }
  t = repeat_2_0(n_6, _id, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm i_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = i_30;
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
            w_67 = t;
            if(match_cons(t, sym_CallT_3))
              {
                x_67 = ATgetArgument(t, 0);
                y_67 = ATgetArgument(t, 1);
                z_67 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_67;
            t = h_10(x_67, y_67, z_67, t);
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            {
              ATerm q_30 = t;
              int u_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(u_30);
                }
              else
                {
                  t = q_30;
                  {
                    ATerm z_30 = t;
                    int a_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(a_31);
                      }
                    else
                      {
                        t = z_30;
                        {
                          ATerm b_31 = t;
                          int e_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_31 = t;
                              int i_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm l_68 = NULL,m_68 = NULL,o_68 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      l_68 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = l_68;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      m_68 = ATgetArgument(t, 0);
                                      t = m_68;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          m_68 = ATgetArgument(t, 0);
                                          o_68 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, m_68, o_68);
                                    }
                                  LocalPopChoice(i_31);
                                }
                              else
                                {
                                  t = h_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(e_31);
                            }
                          else
                            {
                              t = b_31;
                              {
                                ATerm j_31 = t;
                                int k_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(k_31);
                                  }
                                else
                                  {
                                    t = j_31;
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
  t = topdown_1_0(m_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm l_69 = NULL,n_69 = NULL;
  n_69 = t;
  t = SSL_explode_term(n_69);
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_31 = ATgetArgument(t, 1);
        if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
          {
            l_69 = ATgetFirst((ATermList) m_31);
            {
              ATerm o_31 = (ATerm) ATgetNext((ATermList) m_31);
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
static ATerm q_6 (ATerm t)
{
  ATerm v_33 = NULL,x_33 = NULL,y_33 = NULL;
  y_33 = t;
  t = SSL_explode_term(y_33);
  if(match_cons(t, sym__2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_31 = ATgetArgument(t, 1);
        if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
          {
            ATerm r_31 = ATgetFirst((ATermList) q_31);
            v_33 = (ATerm) ATgetNext((ATermList) q_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_k_21;
  x_33 = t;
  t = SSL_mkterm(x_33, v_33);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL;
  static ATerm o_69 (ATerm t)
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_69 = NULL,g_69 = NULL,j_69 = NULL;
        f_69 = t;
        t = map_1_0(p_6, t);
        t = v_112(t);
        g_69 = t;
        t = f_69;
        t = map_1_0(q_6, t);
        t = o_69(t);
        j_69 = t;
        t = (ATerm) ATinsert(CheckATermList(j_69), g_69);
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = map_1_0(t_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = o_69(t);
  e_69 = t;
  t = term_k_21;
  d_69 = t;
  t = SSL_mkterm(d_69, e_69);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm u_69 = NULL;
  u_69 = t;
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
        t = u_69;
        t = new_0_0(t);
        w_69 = t;
        t = new_0_0(t);
        x_69 = t;
        t = new_0_0(t);
        y_69 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_69), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, u_69), (ATerm) ATmakeAppl(sym_Var_1, x_69))), (ATerm) ATmakeAppl(sym_Var_1, y_69)), (ATerm)ATmakeAppl(sym_VarDec_2, w_69, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_31), term_y_31)), x_69, (ATerm)ATmakeAppl(sym_Var_1, x_69), y_69, (ATerm) ATmakeAppl(sym_Var_1, y_69));
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        {
          ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
          t = u_69;
          t = new_0_0(t);
          c_70 = t;
          t = new_0_0(t);
          d_70 = t;
          t = new_0_0(t);
          e_70 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_70), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, u_69), (ATerm) ATmakeAppl(sym_Var_1, d_70))), (ATerm) ATmakeAppl(sym_Var_1, e_70)), (ATerm)ATmakeAppl(sym_VarDec_2, c_70, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_31), term_y_31)), d_70, (ATerm)ATmakeAppl(sym_Var_1, d_70), e_70, (ATerm) ATmakeAppl(sym_Var_1, e_70));
        }
      }
  }
  return(t);
}
static ATerm m_10 (ATerm e_42, ATerm f_42, ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_42, f_42);
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      t = SSL_subtr(e_42, f_42);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL;
  if(match_cons(t, sym__2))
    {
      f_70 = ATgetArgument(t, 0);
      g_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_70, g_70, (ATerm) ATempty);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm j_70 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if(((ATgetType(c_32) != AT_INT) || (ATgetInt((ATermInt) c_32) != 0)))
        _fail(t);
      {
        ATerm d_32 = ATgetArgument(t, 1);
      }
      j_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_70;
  return(t);
}
ATerm copy_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  static ATerm w_6 (ATerm t)
  {
    ATerm k_70 = NULL,l_70 = NULL,o_70 = NULL,p_70 = NULL,s_70 = NULL,t_70 = NULL;
    if(match_cons(t, sym__3))
      {
        k_70 = ATgetArgument(t, 0);
        l_70 = ATgetArgument(t, 1);
        o_70 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, k_70, term_x_16);
    t = geq_0_0(t);
    t = term_x_16;
    t_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_70, term_x_16);
    t = m_10(k_70, t_70, t);
    p_70 = t;
    t = l_70;
    t = e_127(t);
    s_70 = t;
    t = (ATerm) ATmakeAppl(sym__3, p_70, l_70, (ATerm) ATinsert(CheckATermList(o_70), s_70));
    return(t);
  }
  t = for_3_0(u_6, v_6, w_6, t);
  return(t);
}
static ATerm n_10 (ATerm c_62, ATerm d_62, ATerm t)
{
  ATerm u_70 = NULL,w_70 = NULL,x_70 = NULL;
  t = new_0_0(t);
  u_70 = t;
  t = new_0_0(t);
  w_70 = t;
  t = new_0_0(t);
  x_70 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_70), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_62)), (ATerm) ATmakeAppl(sym_Var_1, w_70))), (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_62)), (ATerm) ATmakeAppl(sym_Var_1, x_70)))), (ATerm)ATmakeAppl(sym_VarDec_2, u_70, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_31), term_y_31)), w_70, (ATerm)ATmakeAppl(sym_Var_1, w_70), x_70, (ATerm) ATmakeAppl(sym_Var_1, x_70));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_71 = NULL,j_71 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_71 = ATgetFirst((ATermList) t);
      j_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_71;
    }
  else
    {
      t = j_71;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm h_75 (ATerm a_72, ATerm b_72, ATerm e_72, ATerm f_72, ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,u_72 = NULL,v_72 = NULL,a_73 = NULL,b_73 = NULL;
  t = term_x_16;
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_72, term_x_16);
  t = r_11(b_72, b_73, t);
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_73, term_p_16);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_72 = ATgetFirst((ATermList) t);
      n_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_72;
  t = last_0_0(t);
  l_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_72), m_72), n_72);
  t = genzip_4_0(x_6, y_6, z_6, b_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      o_72 = ATgetArgument(t, 0);
      p_72 = ATgetArgument(t, 1);
      q_72 = ATgetArgument(t, 2);
      r_72 = ATgetArgument(t, 3);
      s_72 = ATgetArgument(t, 4);
      u_72 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_72), q_72), n_72);
  t = concat_0_0(t);
  v_72 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, a_72, term_e_32), p_72, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(v_72), m_72), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_72)), (ATerm) ATmakeAppl(sym_Op_2, a_72, r_72))), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_72)), (ATerm) ATmakeAppl(sym_Op_2, a_72, u_72))), (ATerm) ATmakeAppl(sym_Seqs_1, o_72)))));
  return(t);
}
static ATerm t_75 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm z_73, ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,x_74 = NULL;
  t = z_73;
  t = new_0_0(t);
  d_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_73, (ATerm) ATmakeAppl(sym_Var_1, d_74));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      e_74 = ATgetArgument(t, 0);
      f_74 = ATgetArgument(t, 1);
      j_74 = ATgetArgument(t, 2);
      k_74 = ATgetArgument(t, 3);
      l_74 = ATgetArgument(t, 4);
      m_74 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_74, l_74);
  t = conc_0_0(t);
  x_74 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, w_73, term_f_32), f_74, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(x_74), d_74), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_74)), (ATerm) ATmakeAppl(sym_Op_2, w_73, k_74))), (ATerm)ATmakeAppl(sym_Op_2, w_73, m_74), (ATerm) ATmakeAppl(sym_Seqs_1, e_74)))));
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_32 = ATgetArgument(t, 0);
      ATerm h_32 = ATgetArgument(t, 1);
      if(((ATgetType(h_32) != AT_LIST) || !(ATisEmpty(h_32))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,f_73 = NULL,g_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_32 = ATgetArgument(t, 0);
      if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
        {
          c_73 = ATgetFirst((ATermList) i_32);
          d_73 = (ATerm) ATgetNext((ATermList) i_32);
        }
      else
        _fail(t);
      {
        ATerm j_32 = ATgetArgument(t, 1);
        if(((ATgetType(j_32) == AT_LIST) && !(ATisEmpty(j_32))))
          {
            f_73 = ATgetFirst((ATermList) j_32);
            g_73 = (ATerm) ATgetNext((ATermList) j_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_73, f_73), (ATerm) ATmakeAppl(sym__2, d_73, g_73));
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL;
  if(match_cons(t, sym__2))
    {
      h_73 = ATgetArgument(t, 0);
      i_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_73), h_73);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL;
  if(match_cons(t, sym__2))
    {
      j_73 = ATgetArgument(t, 0);
      k_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(j_73, k_73, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL;
  z_74 = t;
  if(match_cons(t, sym__3))
    {
      a_75 = ATgetArgument(t, 0);
      b_75 = ATgetArgument(t, 1);
      c_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_75;
  if(match_string(t, "T"))
    {
      t = c_75;
      if(match_cons(t, sym__2))
        {
          d_75 = ATgetArgument(t, 0);
          e_75 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_75;
      if(match_int(t, 0))
        {
          ATerm k_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_75(a_75, d_75, e_75, z_74, t);
              LocalPopChoice(n_32);
            }
          else
            {
              t = k_32;
              {
                ATerm g_75 = NULL;
                t = z_74;
                t = new_0_0(t);
                g_75 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, a_75, term_e_32), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_75), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_75)), (ATerm) ATmakeAppl(sym_Op_2, a_75, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_75)), (ATerm) ATmakeAppl(sym_Op_2, a_75, (ATerm) ATempty))), term_o_23))));
              }
            }
        }
      else
        {
          t = h_75(a_75, d_75, e_75, z_74, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = c_75;
      if(match_cons(t, sym__2))
        {
          d_75 = ATgetArgument(t, 0);
          e_75 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_75(a_75, d_75, e_75, z_74, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_121 (ATerm), ATerm t)
{
  ATerm p_20 = NULL;
  static ATerm c_7 (ATerm t)
  {
    t = o_121(t);
    if(((p_20 != NULL) && (p_20 != t)))
      _fail(t);
    else
      p_20 = t;
    return(t);
  }
  t = fetch_1_0(c_7, t);
  t = not_null(p_20);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  t = term_r_16;
  r_20 = t;
  t = (ATerm) ATinsert(ATempty, term_o_32);
  s_20 = t;
  t = SSL_printnl(r_20, s_20);
  t = term_x_16;
  q_20 = t;
  t = SSL_exit(q_20);
  t = (ATerm) ATinsert(ATempty, term_o_32);
  return(t);
}
ATerm debug_1_0 (ATerm b_116 (ATerm), ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  w_20 = t;
  t = b_116(t);
  x_20 = t;
  t = term_r_16;
  y_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_20), x_20);
  z_20 = t;
  t = SSL_printnl(y_20, z_20);
  t = w_20;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_p_32;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm w_15 = NULL,z_15 = NULL;
  ATerm q_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm w_32 = ATgetArgument(t, 0);
          w_15 = ATgetArgument(t, 1);
          z_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(u_32);
      t = z_15;
      t = foldr_3_0(l_7, m_7, p_7, t);
      t = w_15;
      t = foldr_3_0(q_7, r_7, t_7, t);
    }
  else
    {
      t = q_32;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm x_32 = ATgetArgument(t, 0);
          w_15 = ATgetArgument(t, 1);
          z_15 = ATgetArgument(t, 2);
          {
            ATerm b_33 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = z_15;
      t = foldr_3_0(v_7, d_8, e_8, t);
      t = w_15;
      t = foldr_3_0(f_8, g_8, h_8, t);
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(i_16, j_16, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm l_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(l_16, n_16, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm q_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(q_16, t_16, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm u_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(u_16, w_16, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      ATerm r_33 = ATgetArgument(t, 1);
      ATerm t_33 = ATgetArgument(t, 2);
      ATerm u_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL;
      static ATerm d_7 (ATerm t)
      {
        ATerm i_21 = NULL,j_21 = NULL;
        i_21 = t;
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  j_21 = ATgetArgument(t, 0);
                  {
                    ATerm h_34 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm i_34 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(f_34);
              t = j_21;
              if(((g_21 != NULL) && (g_21 != t)))
                _fail(t);
              else
                g_21 = t;
              t = i_21;
            }
          else
            {
              t = e_34;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  j_21 = ATgetArgument(t, 0);
                  {
                    ATerm k_34 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm l_34 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm n_34 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = j_21;
              if(((g_21 != NULL) && (g_21 != t)))
                _fail(t);
              else
                g_21 = t;
              t = i_21;
            }
        }
        return(t);
      }
      t = fetch_1_0(d_7, t);
      {
        static ATerm f_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_21 = ATgetArgument(t, 0);
              {
                ATerm o_34 = ATgetArgument(t, 1);
              }
              {
                ATerm p_34 = ATgetArgument(t, 2);
              }
              {
                ATerm q_34 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_7, t);
      }
      t = not_null(g_21);
      t = debug_1_0(i_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm z_22 = NULL;
        z_22 = t;
        t = map_1_0(k_7, t);
        t = z_22;
        {
          ATerm t_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(i_8, t);
              LocalPopChoice(y_34);
            }
          else
            {
              t = t_34;
              {
                ATerm y_16 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_16 = ATgetFirst((ATermList) t);
                    {
                      ATerm z_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = y_16;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_x_24;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,c_17 = NULL;
  c_23 = t;
  t = SSL_explode_term(c_23);
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_35 = ATgetArgument(t, 1);
        if(((ATgetType(b_35) == AT_LIST) && !(ATisEmpty(b_35))))
          {
            d_23 = ATgetFirst((ATermList) b_35);
            {
              ATerm c_35 = (ATerm) ATgetNext((ATermList) b_35);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(c_23);
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_35 = ATgetArgument(t, 1);
        if(((ATgetType(f_35) == AT_LIST) && !(ATisEmpty(f_35))))
          {
            ATerm g_35 = ATgetFirst((ATermList) f_35);
            ATerm h_35 = (ATerm) ATgetNext((ATermList) f_35);
            if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
              {
                c_17 = ATgetFirst((ATermList) h_35);
                {
                  ATerm i_35 = (ATerm) ATgetNext((ATermList) h_35);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, d_23, c_17);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(j_8, m_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  static ATerm e_23 (ATerm t)
  {
    ATerm j_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_110(t);
        LocalPopChoice(l_35);
      }
    else
      {
        t = j_35;
        t = SRTS_all(e_23, t);
      }
    return(t);
  }
  t = e_23(t);
  return(t);
}
static ATerm z_9 (ATerm v_44, ATerm w_44, ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  i_23 = t;
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
        t = v_11(v_44, w_44, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_35 = ATgetFirst((ATermList) t);
            h_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_35);
        {
          ATerm j_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_44, w_44, h_23);
          t = lookup_table_0_1(v_44, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_11(w_44, h_23, j_23, t);
          t = (ATerm) ATmakeAppl(sym__3, v_44, w_44, h_23);
        }
      }
    else
      {
        t = m_35;
        {
          ATerm l_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
          t = lookup_table_0_1(v_44, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(w_44, l_23, t);
          t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
        }
      }
  }
  t = i_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_120 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,v_23 = NULL,y_23 = NULL,z_23 = NULL;
  t_23 = t;
  t = j_120(t);
  s_23 = t;
  {
    ATerm p_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_24 = NULL;
        t = term_v_35;
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_23, term_v_35);
        t = v_11(s_23, a_24, t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = p_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_23 = ATgetFirst((ATermList) t);
      q_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_23, term_v_35, q_23);
  t = lookup_table_0_1(s_23, t);
  z_23 = t;
  t = term_v_35;
  v_23 = t;
  t = z_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(v_23, q_23, y_23, t);
  t = r_23;
  {
    static ATerm n_8 (ATerm t)
    {
      ATerm b_24 = NULL;
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_23, b_24);
      t = z_9(s_23, b_24, t);
      return(t);
    }
    t = map_1_0(n_8, t);
  }
  t = t_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_112(t);
      t = b_112(t);
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      t = b_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_120 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,l_24 = NULL,o_24 = NULL,q_24 = NULL,y_24 = NULL;
  f_24 = t;
  t = i_120(t);
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_24, term_v_35);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_36 = ATgetArgument(t, 0);
            ATerm b_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_35;
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_24, term_v_35);
        t = v_11(e_24, f_25, t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = (ATerm) ATempty;
      }
  }
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_24, term_v_35, (ATerm) ATinsert(CheckATermList(g_24), (ATerm) ATempty));
  t = lookup_table_0_1(e_24, t);
  y_24 = t;
  t = term_v_35;
  l_24 = t;
  t = (ATerm) ATinsert(CheckATermList(g_24), (ATerm) ATempty);
  o_24 = t;
  t = y_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(l_24, o_24, q_24, t);
  t = f_24;
  return(t);
}
ATerm scope_2_0 (ATerm k_120 (ATerm), ATerm l_120 (ATerm), ATerm t)
{
  static ATerm o_8 (ATerm t)
  {
    t = end_scope_1_0(k_120, t);
    return(t);
  }
  t = begin_scope_1_0(k_120, t);
  t = restore_always_2_0(l_120, o_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,x_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_25 = ATgetFirst((ATermList) t);
      x_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_25;
  if(match_cons(t, sym__2))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      {
        ATerm c_36 = t;
        int d_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_25;
            if((s_25 != t))
              {
                _fail(t);
              }
            t = q_25;
            LocalPopChoice(d_36);
          }
        else
          {
            t = c_36;
            t = (ATerm) ATmakeAppl(sym__2, s_25, x_25);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, s_25, x_25);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm q_8 (ATerm t)
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
static ATerm s_8 (ATerm t)
{
  ATerm s_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      if(((ATgetType(h_36) == AT_LIST) && !(ATisEmpty(h_36))))
        {
          s_27 = ATgetFirst((ATermList) h_36);
          w_27 = (ATerm) ATgetNext((ATermList) h_36);
        }
      else
        _fail(t);
      {
        ATerm i_36 = ATgetArgument(t, 1);
        if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
          {
            x_27 = ATgetFirst((ATermList) i_36);
            y_27 = (ATerm) ATgetNext((ATermList) i_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_27, x_27), (ATerm) ATmakeAppl(sym__2, w_27, y_27));
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm z_27 = NULL,d_28 = NULL;
  if(match_cons(t, sym__2))
    {
      z_27 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_28), z_27);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  j_27 = t;
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_36 = ATgetArgument(t, 0);
            ATerm m_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(k_36);
        t = j_27;
      }
    else
      {
        t = j_36;
        {
          ATerm r_27 = NULL;
          if(match_cons(t, sym__3))
            {
              k_27 = ATgetArgument(t, 0);
              l_27 = ATgetArgument(t, 1);
              m_27 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, k_27, l_27);
          t = genzip_4_0(q_8, s_8, t_8, _id, t);
          r_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_27, m_27);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  static ATerm u_8 (ATerm t)
  {
    ATerm h_17 = NULL;
    t = c_108(t);
    h_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_17, not_null(i_28));
    t = lookup_0_0(t);
    t = d_108(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((i_28 != NULL) && (i_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28;
  t = alltd_1_0(u_8, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm v_28 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_28 = ATgetArgument(t, 0);
      {
        ATerm n_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_28;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm w_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_28;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_q_36;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if(((ATgetType(s_36) != AT_LIST) || !(ATisEmpty(s_36))))
        _fail(t);
      {
        ATerm t_36 = ATgetArgument(t, 1);
        if(((ATgetType(t_36) != AT_LIST) || !(ATisEmpty(t_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,e_29 = NULL,f_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_36 = ATgetArgument(t, 0);
      if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
        {
          y_28 = ATgetFirst((ATermList) v_36);
          z_28 = (ATerm) ATgetNext((ATermList) v_36);
        }
      else
        _fail(t);
      {
        ATerm w_36 = ATgetArgument(t, 1);
        if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
          {
            e_29 = ATgetFirst((ATermList) w_36);
            f_29 = (ATerm) ATgetNext((ATermList) w_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_28, e_29), (ATerm) ATmakeAppl(sym__2, z_28, f_29));
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  if(match_cons(t, sym__2))
    {
      g_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_29), g_29);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,n_29 = NULL,o_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if(match_cons(x_36, sym_VarDec_2))
        {
          i_29 = ATgetArgument(x_36, 0);
          {
            ATerm a_37 = ATgetArgument(x_36, 1);
          }
        }
      else
        _fail(t);
      j_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, i_29);
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_37, j_29);
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, i_29), (ATerm) ATmakeAppl(sym_Defined_2, term_b_37, j_29));
  t = d_11(i_9, n_29, o_29, t);
  t = k_29;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_q_36;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,o_17 = NULL;
  s_29 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm c_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_q_36;
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_36, s_29);
  t = h_11(o_17, s_29, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_37) != ATmakeSymbol("q_0", 0, ATtrue)))
        _fail(t);
      t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_29;
  return(t);
}
static ATerm d_10 (ATerm c_64, ATerm d_64, ATerm h_64, ATerm e_64, ATerm g_64, ATerm t)
{
  ATerm m_28 = NULL,q_28 = NULL,r_28 = NULL;
  t = e_64;
  t = map_1_0(w_8, t);
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_28, d_64, g_64);
  t = substitute_2_0(x_8, _id, t);
  q_28 = t;
  {
    static ATerm b_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, h_64, c_64);
      t = genzip_4_0(c_9, d_9, e_9, g_9, t);
      t = q_28;
      t = alltd_1_0(j_9, t);
      if(((r_28 != NULL) && (r_28 != t)))
        _fail(t);
      else
        r_28 = t;
      return(t);
    }
    t = scope_2_0(z_8, b_9, t);
  }
  t = not_null(r_28);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,r_30 = NULL,h_6 = NULL;
  r_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_30);
  j_30 = t;
  t = k_30;
  t = new_0_0(t);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_30, l_30);
  h_6 = t;
  t = SSLsetAnnotations(h_6, j_30);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,k_6 = NULL;
  x_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  s_30 = t;
  t = t_30;
  t = new_0_0(t);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_30, v_30);
  k_6 = t;
  t = SSLsetAnnotations(k_6, s_30);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm y_30 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_30 = ATgetArgument(t, 0);
      {
        ATerm e_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, y_30);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm c_31 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      c_31 = ATgetArgument(t, 0);
      {
        ATerm f_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, c_31);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm u_29 = NULL,w_29 = NULL,x_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,d_30 = NULL,e_30 = NULL,g_30 = NULL;
  b_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_37 = ATgetFirst((ATermList) t);
      if(match_cons(g_37, sym_SDefT_4))
        {
          u_29 = ATgetArgument(g_37, 0);
          w_29 = ATgetArgument(g_37, 1);
          x_29 = ATgetArgument(g_37, 2);
          {
            ATerm i_37 = ATgetArgument(g_37, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm h_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_29;
  t = map_1_0(k_9, t);
  z_29 = t;
  t = x_29;
  t = map_1_0(l_9, t);
  a_30 = t;
  t = z_29;
  t = map_1_0(t_9, t);
  d_30 = t;
  t = a_30;
  t = map_1_0(u_9, t);
  e_30 = t;
  t = b_30;
  {
    static ATerm v_9 (ATerm t)
    {
      ATerm d_31 = NULL,f_31 = NULL,g_31 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm j_37 = ATgetArgument(t, 0);
          d_31 = ATgetArgument(t, 1);
          f_31 = ATgetArgument(t, 2);
          g_31 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_10(d_30, e_30, d_31, f_31, g_31, t);
      return(t);
    }
    t = map_1_0(v_9, t);
  }
  t = choices_0_0(t);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, u_29, z_29, a_30, g_30);
  return(t);
}
static ATerm r_80 (ATerm c_76, ATerm d_76, ATerm f_76, ATerm g_76, ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,a_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_76, d_76);
  t = Definitions_0_0(t);
  j_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_77, f_76);
  m_77 = t;
  if(match_cons(t, sym__2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      ATerm p_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_77);
  k_77 = t;
  t = j_77;
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_77 = NULL,p_77 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_77 = ATgetFirst((ATermList) t);
            p_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_77;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_77;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        {
          ATerm s_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(w_37);
            }
          else
            {
              t = s_37;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  l_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_77, f_76);
  a_7 = t;
  t = SSLsetAnnotations(a_7, k_77);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm r_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,c_78 = NULL,o_78 = NULL,p_78 = NULL;
  v_77 = t;
  if(match_cons(t, sym__2))
    {
      w_77 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_77;
  if(match_cons(t, sym__2))
    {
      c_78 = ATgetArgument(t, 0);
      o_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_78;
  if(match_cons(t, sym_Mod_2))
    {
      r_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_80 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, r_77, u_77, o_78);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            q_80 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_80, p_78);
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
            t = r_80(c_78, o_78, p_78, v_77, t);
          }
      }
    }
  else
    {
      t = r_80(c_78, o_78, p_78, v_77, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm t_121 (ATerm), ATerm t)
{
  static ATerm g_85 (ATerm t)
  {
    ATerm x_84 = NULL,a_85 = NULL,c_85 = NULL;
    c_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_84 = ATgetFirst((ATermList) t);
        a_85 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_34 = NULL,m_34 = NULL,e_7 = NULL;
          t = SSLgetAnnotations(c_85);
          g_34 = t;
          t = a_85;
          t = g_85(t);
          m_34 = t;
          t = (ATerm) ATinsert(CheckATermList(m_34), x_84);
          e_7 = t;
          t = SSLsetAnnotations(e_7, g_34);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_85;
        t = t_121(t);
      }
    return(t);
  }
  t = g_85(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_80 = NULL,y_80 = NULL,a_81 = NULL;
  v_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_80;
    }
  else
    {
      static ATerm w_9 (ATerm t)
      {
        t = not_null(a_81);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_80 = ATgetFirst((ATermList) t);
          if(((a_81 != NULL) && (a_81 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_80;
      t = at_end_1_0(w_9, t);
    }
  return(t);
}
static ATerm c_86 (ATerm p_85, ATerm t)
{
  ATerm q_85 = NULL;
  t = SSL_explode_term(p_85);
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_85;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL;
  x_85 = t;
  if(match_cons(t, sym__2))
    {
      v_85 = ATgetArgument(t, 0);
      w_85 = ATgetArgument(t, 1);
      {
        ATerm a_38 = t;
        int b_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_9 (ATerm t)
            {
              t = w_85;
              return(t);
            }
            t = v_85;
            t = at_end_1_0(x_9, t);
            LocalPopChoice(b_38);
          }
        else
          {
            t = a_38;
            t = c_86(x_85, t);
          }
      }
    }
  else
    {
      t = c_86(x_85, t);
    }
  return(t);
}
static ATerm t_10 (ATerm g_123 (ATerm), ATerm p_50, ATerm o_50, ATerm t)
{
  static ATerm y_86 (ATerm t)
  {
    ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
    t_86 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_86;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_86 = ATgetFirst((ATermList) t);
            v_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_86;
              {
                static ATerm a_10 (ATerm t)
                {
                  t = o_50;
                  return(t);
                }
                t = e_11(g_123, a_10, u_86, v_86, t);
              }
              t = y_86(t);
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              {
                ATerm d_35 = NULL,k_35 = NULL,h_7 = NULL;
                t = SSLgetAnnotations(t_86);
                d_35 = t;
                t = v_86;
                t = y_86(t);
                k_35 = t;
                t = (ATerm) ATinsert(CheckATermList(k_35), u_86);
                h_7 = t;
                t = SSLsetAnnotations(h_7, d_35);
              }
            }
        }
      }
    return(t);
  }
  t = p_50;
  t = y_86(t);
  return(t);
}
ATerm genzip_4_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t)
{
  static ATerm g_87 (ATerm t)
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_113(t);
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        {
          ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,j_7 = NULL;
          t = g_113(t);
          f_87 = t;
          if(match_cons(t, sym__2))
            {
              b_87 = ATgetArgument(t, 0);
              c_87 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_87);
          a_87 = t;
          t = b_87;
          t = i_113(t);
          d_87 = t;
          t = c_87;
          t = g_87(t);
          e_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_87, e_87);
          j_7 = t;
          t = SSLsetAnnotations(j_7, a_87);
          t = h_113(t);
        }
      }
    return(t);
  }
  t = g_87(t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      if(((ATgetType(g_38) != AT_LIST) || !(ATisEmpty(g_38))))
        _fail(t);
      {
        ATerm h_38 = ATgetArgument(t, 1);
        if(((ATgetType(h_38) != AT_LIST) || !(ATisEmpty(h_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_38 = ATgetArgument(t, 0);
      if(((ATgetType(j_38) == AT_LIST) && !(ATisEmpty(j_38))))
        {
          n_87 = ATgetFirst((ATermList) j_38);
          o_87 = (ATerm) ATgetNext((ATermList) j_38);
        }
      else
        _fail(t);
      {
        ATerm k_38 = ATgetArgument(t, 1);
        if(((ATgetType(k_38) == AT_LIST) && !(ATisEmpty(k_38))))
          {
            p_87 = ATgetFirst((ATermList) k_38);
            q_87 = (ATerm) ATgetNext((ATermList) k_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_87, p_87), (ATerm) ATmakeAppl(sym__2, o_87, q_87));
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  if(match_cons(t, sym__2))
    {
      r_87 = ATgetArgument(t, 0);
      s_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_87), r_87);
  return(t);
}
static ATerm y_10 (ATerm m_741, ATerm r_741, ATerm z_72, ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL;
  t = SSL_explode_term(r_741);
  if(match_cons(t, sym__2))
    {
      i_87 = ATgetArgument(t, 0);
      k_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_741);
  if(match_cons(t, sym__2))
    {
      if((i_87 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_87, k_87);
  t = genzip_4_0(b_10, c_10, e_10, _id, t);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_87, z_72);
  t = conc_0_0(t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm i_88 = NULL;
  i_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_88);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm j_88 = NULL,m_88 = NULL,n_88 = NULL,p_88 = NULL,n_7 = NULL;
  p_88 = t;
  if(match_cons(t, sym__2))
    {
      m_88 = ATgetArgument(t, 0);
      n_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_88);
  j_88 = t;
  t = n_88;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_88, n_88);
  n_7 = t;
  t = SSLsetAnnotations(n_7, j_88);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL;
  i_89 = t;
  if(match_cons(t, sym__2))
    {
      j_89 = ATgetArgument(t, 0);
      k_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_89 = ATgetFirst((ATermList) t);
      m_89 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_89(j_89, k_89, i_89, t);
            LocalPopChoice(m_38);
          }
        else
          {
            t = l_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_89), l_89), m_89);
          }
      }
    }
  else
    {
      t = y_89(j_89, k_89, i_89, t);
    }
  return(t);
}
static ATerm y_89 (ATerm q_88, ATerm r_88, ATerm s_88, ATerm t)
{
  ATerm t_88 = NULL,w_88 = NULL,o_7 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL;
  t = SSLgetAnnotations(s_88);
  t_88 = t;
  t = r_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_88 = ATgetFirst((ATermList) t);
      c_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_88;
  if(match_cons(t, sym__2))
    {
      a_89 = ATgetArgument(t, 0);
      b_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_89;
        if((a_89 != t))
          {
            _fail(t);
          }
        t = c_89;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = r_88;
        t = y_10(a_89, b_89, c_89, t);
      }
  }
  w_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_88, w_88);
  o_7 = t;
  t = SSLsetAnnotations(o_7, t_88);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm x_89 = NULL;
  if(match_cons(t, sym__2))
    {
      x_89 = ATgetArgument(t, 0);
      if((x_89 != ATgetArgument(t, 1)))
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
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_10, g_10, i_10, t);
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
      {
        ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL;
        s_89 = t;
        if(match_cons(t, sym__2))
          {
            t_89 = ATgetArgument(t, 0);
            u_89 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_89;
        t = t_10(k_10, t_89, u_89, t);
      }
    }
  return(t);
}
static ATerm a_11 (ATerm o_141 (ATerm), ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm q_74, ATerm n_74, ATerm v_74, ATerm r_74, ATerm o_74, ATerm p_74, ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_74, r_74);
  t = o_141(t);
  if(match_cons(t, sym__2))
    {
      a_90 = ATgetArgument(t, 0);
      z_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_90;
  t = p_141(t);
  b_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_90, v_74);
  t = diff_0_0(t);
  c_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_90, n_74);
  t = conc_0_0(t);
  d_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_90, v_74);
  t = conc_0_0(t);
  e_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_74, a_90, o_74);
  t = q_141(t);
  f_90 = t;
  t = (ATerm) ATmakeAppl(sym__5, d_90, e_90, z_89, f_90, p_74);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm o_141 (ATerm), ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm r_38 = ATgetArgument(t, 0);
      if(((ATgetType(r_38) == AT_LIST) && !(ATisEmpty(r_38))))
        {
          h_90 = ATgetFirst((ATermList) r_38);
          i_90 = (ATerm) ATgetNext((ATermList) r_38);
        }
      else
        _fail(t);
      j_90 = ATgetArgument(t, 1);
      k_90 = ATgetArgument(t, 2);
      l_90 = ATgetArgument(t, 3);
      m_90 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = a_11(o_141, p_141, q_141, h_90, i_90, j_90, k_90, l_90, m_90, t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm t)
{
  static ATerm n_90 (ATerm t)
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_115(t);
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        t = g_115(t);
        t = n_90(t);
      }
    return(t);
  }
  t = n_90(t);
  return(t);
}
ATerm for_3_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t)
{
  t = i_115(t);
  t = while_not_2_0(j_115, k_115, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
  if(match_cons(t, sym__3))
    {
      x_90 = ATgetArgument(t, 0);
      y_90 = ATgetArgument(t, 1);
      z_90 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, x_90, x_90, y_90, z_90, (ATerm) ATempty);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if(((ATgetType(u_38) != AT_LIST) || !(ATisEmpty(u_38))))
        _fail(t);
      {
        ATerm v_38 = ATgetArgument(t, 1);
      }
      {
        ATerm x_38 = ATgetArgument(t, 2);
      }
      c_91 = ATgetArgument(t, 3);
      d_91 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_91, d_91);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm y_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, x_10, z_10, t);
      LocalPopChoice(a_39);
    }
  else
    {
      t = y_38;
      {
        ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL;
        if(match_cons(t, sym__5))
          {
            j_91 = ATgetArgument(t, 0);
            m_91 = ATgetArgument(t, 1);
            n_91 = ATgetArgument(t, 2);
            o_91 = ATgetArgument(t, 3);
            p_91 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = j_91;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_91 = ATgetFirst((ATermList) t);
            l_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, l_91, m_91, n_91, o_91, (ATerm) ATinsert(CheckATermList(p_91), k_91));
      }
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(b_11, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm g_91 = NULL,h_91 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm c_39 = ATgetArgument(t, 0);
      g_91 = ATgetArgument(t, 1);
      h_91 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_91), g_91);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_37;
  if(match_cons(t, sym_Mod_2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
      {
        ATerm g_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_37;
            t = s_9(n_37, o_37, v_37, t);
            LocalPopChoice(h_39);
          }
        else
          {
            t = g_39;
            t = i_38(u_37, v_37, t);
          }
      }
    }
  else
    {
      t = i_38(u_37, v_37, t);
    }
  return(t);
}
static ATerm i_38 (ATerm y_36, ATerm z_36, ATerm t)
{
  ATerm k_37 = NULL,m_37 = NULL;
  t = term_r_16;
  k_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_18), z_36), term_o_18), y_36), term_k_18);
  m_37 = t;
  t = SSL_printnl(k_37, m_37);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_18), z_36), term_o_18), y_36), term_k_18);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL;
  t = for_3_0(o_10, p_10, q_10, t);
  s_92 = t;
  if(match_cons(t, sym__2))
    {
      t_92 = ATgetArgument(t, 0);
      u_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_92;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_92;
    }
  else
    {
      ATerm g_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_92 = ATgetFirst((ATermList) t);
          w_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(w_92), v_92);
      t = map_1_0(c_11, t);
      t = term_x_16;
      g_36 = t;
      t = SSL_exit(g_36);
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm o_93 = NULL,p_93 = NULL;
  if(match_cons(t, sym__2))
    {
      o_93 = ATgetArgument(t, 0);
      p_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(o_93, p_93, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL;
  if(match_cons(t, sym__2))
    {
      q_93 = ATgetArgument(t, 0);
      r_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(q_93, r_93, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm s_93 = NULL;
  if(match_cons(t, sym__2))
    {
      s_93 = ATgetArgument(t, 0);
      if((s_93 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_k_39;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL;
  c_93 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      f_93 = ATgetArgument(t, 0);
      a_93 = ATgetArgument(t, 1);
      b_93 = ATgetArgument(t, 2);
      {
        ATerm l_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  h_93 = t;
  t = a_93;
  t = foldr_3_0(g_11, i_11, s_11, t);
  d_93 = t;
  t = b_93;
  t = foldr_3_0(x_11, c_12, d_12, t);
  e_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_93, (ATerm) ATmakeAppl(sym__2, d_93, e_93));
  {
    ATerm n_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(p_39);
      }
    else
      {
        t = n_39;
        t = (ATerm) ATempty;
      }
  }
  j_93 = t;
  t = f_93;
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        t = (ATerm) ATempty;
      }
  }
  i_93 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_93, e_93));
  n_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_93, e_93)), i_93);
  t = f_11(f_12, n_93, i_93, t);
  g_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_93, (ATerm) ATmakeAppl(sym__2, d_93, e_93));
  l_93 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_39, (ATerm) ATinsert(CheckATermList(j_93), c_93));
  m_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_93, (ATerm) ATmakeAppl(sym__2, d_93, e_93)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_39, (ATerm) ATinsert(CheckATermList(j_93), c_93)));
  t = d_11(g_12, l_93, m_93, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_39, g_93);
  k_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_93, (ATerm) ATmakeAppl(sym_Defined_2, term_t_39, g_93));
  t = d_11(h_12, f_93, k_93, t);
  t = h_93;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  if(match_cons(t, sym__2))
    {
      j_94 = ATgetArgument(t, 0);
      k_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(j_94, k_94, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL;
  if(match_cons(t, sym__2))
    {
      l_94 = ATgetArgument(t, 0);
      m_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(l_94, m_94, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm n_94 = NULL;
  if(match_cons(t, sym__2))
    {
      n_94 = ATgetArgument(t, 0);
      if((n_94 != ATgetArgument(t, 1)))
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
  t = term_i_39;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_k_39;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL;
  v_93 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      a_94 = ATgetArgument(t, 0);
      t_93 = ATgetArgument(t, 1);
      u_93 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  c_94 = t;
  t = t_93;
  t = foldr_3_0(l_12, m_12, n_12, t);
  y_93 = t;
  t = u_93;
  t = foldr_3_0(p_12, q_12, r_12, t);
  z_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_94, (ATerm) ATmakeAppl(sym__2, y_93, z_93));
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        t = (ATerm) ATempty;
      }
  }
  e_94 = t;
  t = a_94;
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
  d_94 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_93, z_93));
  i_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_93, z_93)), d_94);
  t = f_11(s_12, i_94, d_94, t);
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_94, (ATerm) ATmakeAppl(sym__2, y_93, z_93));
  g_94 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_40, (ATerm) ATinsert(CheckATermList(e_94), v_93));
  h_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_94, (ATerm) ATmakeAppl(sym__2, y_93, z_93)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_40, (ATerm) ATinsert(CheckATermList(e_94), v_93)));
  t = d_11(t_12, g_94, h_94, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_40, b_94);
  f_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_94, (ATerm) ATmakeAppl(sym_Defined_2, term_c_40, b_94));
  t = d_11(w_12, a_94, f_94, t);
  t = c_94;
  return(t);
}
static ATerm d_11 (ATerm m_120 (ATerm), ATerm m_43, ATerm k_43, ATerm t)
{
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL;
  r_94 = t;
  t = m_120(t);
  o_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_94, m_43, k_43);
  t = w_11(o_94, m_43, k_43, t);
  {
    ATerm d_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_94 = NULL;
        t = term_v_35;
        w_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_94, term_v_35);
        t = v_11(o_94, w_94, t);
        LocalPopChoice(h_40);
      }
    else
      {
        t = d_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_94 = ATgetFirst((ATermList) t);
      q_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_94, term_v_35, (ATerm) ATinsert(CheckATermList(q_94), (ATerm) ATinsert(CheckATermList(p_94), m_43)));
  t = lookup_table_0_1(o_94, t);
  v_94 = t;
  t = term_v_35;
  s_94 = t;
  t = (ATerm) ATinsert(CheckATermList(q_94), (ATerm) ATinsert(CheckATermList(p_94), m_43));
  t_94 = t;
  t = v_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(s_94, t_94, u_94, t);
  t = r_94;
  return(t);
}
static ATerm e_11 (ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm v_50, ATerm u_50, ATerm t)
{
  t = p_123(t);
  {
    static ATerm x_12 (ATerm t)
    {
      ATerm x_94 = NULL;
      x_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_50, x_94);
      t = o_123(t);
      return(t);
    }
    t = fetch_1_0(x_12, t);
  }
  t = u_50;
  return(t);
}
static ATerm f_11 (ATerm l_123 (ATerm), ATerm r_50, ATerm q_50, ATerm t)
{
  static ATerm n_95 (ATerm t)
  {
    ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL;
    i_95 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_50;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_95 = ATgetFirst((ATermList) t);
            k_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_40 = t;
          int k_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_95;
              {
                static ATerm y_12 (ATerm t)
                {
                  t = q_50;
                  return(t);
                }
                t = e_11(l_123, y_12, j_95, k_95, t);
              }
              t = n_95(t);
              LocalPopChoice(k_40);
            }
          else
            {
              t = i_40;
              {
                ATerm w_38 = NULL,z_38 = NULL,s_7 = NULL;
                t = SSLgetAnnotations(i_95);
                w_38 = t;
                t = k_95;
                t = n_95(t);
                z_38 = t;
                t = (ATerm) ATinsert(CheckATermList(z_38), j_95);
                s_7 = t;
                t = SSLsetAnnotations(s_7, w_38);
              }
            }
        }
      }
    return(t);
  }
  t = r_50;
  t = n_95(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm b_96 = NULL;
  b_96 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_40 = NULL,g_40 = NULL;
        t = term_k_39;
        g_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_39, b_96);
        t = h_11(g_40, b_96, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_40) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
            a_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_40;
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        {
          ATerm v_40 = t;
          int w_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_40 = NULL,u_40 = NULL;
              t = term_k_39;
              u_40 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_k_39, b_96);
              t = h_11(u_40, b_96, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm x_40 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_40) != ATmakeSymbol("y_0", 0, ATtrue)))
                    _fail(t);
                  m_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_40;
              LocalPopChoice(w_40);
            }
          else
            {
              t = v_40;
              {
                ATerm y_40 = NULL,i_41 = NULL;
                t = term_k_39;
                i_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_39, b_96);
                t = h_11(i_41, b_96, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm z_40 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_40) != ATmakeSymbol("u_0", 0, ATtrue)))
                      _fail(t);
                    y_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_40;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm h_11 (ATerm b_45, ATerm c_45, ATerm t)
{
  ATerm f_96 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_45, c_45);
  t = v_11(b_45, c_45, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_96 = ATgetFirst((ATermList) t);
      {
        ATerm f_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_96;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm w_96 = NULL,y_96 = NULL;
  w_96 = t;
  if(match_cons(t, sym__2))
    {
      ATerm h_41 = ATgetArgument(t, 0);
      y_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_96;
  if(match_cons(t, sym__2))
    {
      ATerm k_41 = ATgetArgument(t, 0);
      ATerm n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_42 = NULL,r_42 = NULL;
        t = term_i_39;
        r_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_39, w_96);
        t = h_11(r_42, w_96, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_41) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            g_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_42;
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        {
          ATerm r_41 = t;
          int s_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_42 = NULL,y_42 = NULL;
              t = term_i_39;
              y_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_i_39, w_96);
              t = h_11(y_42, w_96, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm t_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_41) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  v_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_42;
              LocalPopChoice(s_41);
            }
          else
            {
              t = r_41;
              {
                ATerm c_43 = NULL,g_43 = NULL;
                t = term_i_39;
                g_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_39, w_96);
                t = h_11(g_43, w_96, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm w_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_41) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    c_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_43;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm q_126 (ATerm), ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL;
  f_97 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_97;
      t = q_126(t);
    }
  else
    {
      ATerm k_97 = NULL,l_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_97 = ATgetFirst((ATermList) t);
          h_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_97;
      t = s_126(t);
      k_97 = t;
      t = h_97;
      t = foldr_3_0(q_126, r_126, s_126, t);
      l_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_97, l_97);
      t = r_126(t);
    }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL;
  if(match_cons(t, sym__2))
    {
      a_98 = ATgetArgument(t, 0);
      b_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(a_98, b_98, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL;
  if(match_cons(t, sym__2))
    {
      c_98 = ATgetArgument(t, 0);
      d_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(c_98, d_98, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm e_98 = NULL;
  if(match_cons(t, sym__2))
    {
      e_98 = ATgetArgument(t, 0);
      if((e_98 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_k_39;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL;
  o_97 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_97 = ATgetArgument(t, 0);
      m_97 = ATgetArgument(t, 1);
      n_97 = ATgetArgument(t, 2);
      {
        ATerm x_41 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t_97 = t;
  t = m_97;
  t = foldr_3_0(z_12, a_13, b_13, t);
  p_97 = t;
  t = n_97;
  t = foldr_3_0(h_13, i_13, j_13, t);
  q_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_97, (ATerm) ATmakeAppl(sym__2, p_97, q_97));
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        t = (ATerm) ATempty;
      }
  }
  v_97 = t;
  t = r_97;
  {
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(d_42);
      }
    else
      {
        t = c_42;
        t = (ATerm) ATempty;
      }
  }
  u_97 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_97, q_97));
  z_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_97, q_97)), u_97);
  t = f_11(m_13, z_97, u_97, t);
  s_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_97, (ATerm) ATmakeAppl(sym__2, p_97, q_97));
  x_97 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_42, (ATerm) ATinsert(CheckATermList(v_97), o_97));
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_97, (ATerm) ATmakeAppl(sym__2, p_97, q_97)), (ATerm) ATmakeAppl(sym_Defined_2, term_h_42, (ATerm) ATinsert(CheckATermList(v_97), o_97)));
  t = d_11(n_13, x_97, y_97, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_42, s_97);
  w_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_97, (ATerm) ATmakeAppl(sym_Defined_2, term_l_42, s_97));
  t = d_11(o_13, r_97, w_97, t);
  t = t_97;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm m_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(s_42);
    }
  else
    {
      t = m_42;
      {
        ATerm t_42 = t;
        int u_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(u_42);
          }
        else
          {
            t = t_42;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm f_98 = NULL;
  t = map_1_0(p_13, t);
  f_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_z_42), f_98, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL,u_7 = NULL;
  l_98 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_98 = ATgetFirst((ATermList) t);
      i_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_98);
  g_98 = t;
  t = h_98;
  t = w_93(t);
  j_98 = t;
  t = i_98;
  t = x_93(t);
  k_98 = t;
  t = (ATerm) ATinsert(CheckATermList(k_98), j_98);
  u_7 = t;
  t = SSLsetAnnotations(u_7, g_98);
  return(t);
}
static ATerm j_11 (ATerm u_34, ATerm v_34, ATerm t)
{
  ATerm m_98 = NULL;
  t = SSL_fputc(u_34, v_34);
  m_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_98);
  return(t);
}
static ATerm k_11 (ATerm m_33, ATerm n_33, ATerm t)
{
  ATerm n_98 = NULL;
  t = SSL_write_term_to_stream_text(m_33, n_33);
  n_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_98);
  return(t);
}
static ATerm m_11 (ATerm d_116 (ATerm), ATerm p_254, ATerm s_33, ATerm t)
{
  ATerm o_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_254, term_a_43);
  t = q_11(t);
  o_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_98, s_33);
  t = d_116(t);
  t = fclose_0_0(t);
  t = s_33;
  return(t);
}
static ATerm l_11 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm p_98 = NULL;
  t = SSL_write_term_to_stream_baf(i_33, j_33);
  p_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_98);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm f_44 = NULL,i_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(match_cons(b_43, sym_Stream_1))
        {
          f_44 = ATgetArgument(b_43, 0);
        }
      else
        _fail(t);
      i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(f_44, i_44, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,k_45 = NULL,m_45 = NULL,n_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_43 = ATgetArgument(t, 0);
      if(match_cons(d_43, sym_Stream_1))
        {
          m_45 = ATgetArgument(d_43, 0);
        }
      else
        _fail(t);
      n_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(m_45, n_45, t);
  h_45 = t;
  t = term_h_22;
  i_45 = t;
  t = h_45;
  if(match_cons(t, sym_Stream_1))
    {
      k_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_22, h_45);
  t = j_11(i_45, k_45, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,d_100 = NULL,e_100 = NULL,y_7 = NULL,w_7 = NULL;
  u_98 = t;
  if(match_cons(t, sym__2))
    {
      b_99 = ATgetArgument(t, 0);
      c_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_98);
  a_99 = t;
  t = b_99;
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_98 != NULL) && (t_98 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_98 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_13, t);
        LocalPopChoice(f_43);
      }
    else
      {
        t = e_43;
        t = term_h_43;
        t_98 = t;
      }
  }
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_99, c_99);
  w_7 = t;
  t = SSLsetAnnotations(w_7, a_99);
  t = u_98;
  if(match_cons(t, sym__2))
    {
      w_98 = ATgetArgument(t, 0);
      x_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_98);
  v_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_98, (ATerm) ATmakeAppl(sym__2, not_null(t_98), x_98));
  y_7 = t;
  t = SSLsetAnnotations(y_7, v_98);
  z_98 = t;
  if(match_cons(t, sym__2))
    {
      d_100 = ATgetArgument(t, 0);
      e_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_43 = NULL,s_43 = NULL,t_43 = NULL,d_44 = NULL,e_44 = NULL,z_7 = NULL;
        t = SSLgetAnnotations(z_98);
        l_43 = t;
        t = d_100;
        t = fetch_1_0(r_13, t);
        s_43 = t;
        t = e_100;
        if(match_cons(t, sym__2))
          {
            d_44 = ATgetArgument(t, 0);
            e_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(s_13, d_44, e_44, t);
        t_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_43, t_43);
        z_7 = t;
        t = SSLsetAnnotations(z_7, l_43);
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        {
          ATerm o_44 = NULL,x_44 = NULL,f_45 = NULL,g_45 = NULL,b_8 = NULL;
          t = SSLgetAnnotations(z_98);
          o_44 = t;
          t = e_100;
          if(match_cons(t, sym__2))
            {
              f_45 = ATgetArgument(t, 0);
              g_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_11(t_13, f_45, g_45, t);
          x_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_100, x_44);
          b_8 = t;
          t = SSLsetAnnotations(b_8, o_44);
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
ATerm apply_strategy_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL;
  l_100 = t;
  t = dtime_0_0(t);
  t = l_100;
  t = z_135(t);
  k_100 = t;
  t = dtime_0_0(t);
  h_100 = t;
  t = k_100;
  if(match_cons(t, sym__2))
    {
      i_100 = ATgetArgument(t, 0);
      j_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_100), (ATerm) ATmakeAppl(sym_Runtime_1, h_100)), j_100);
  return(t);
}
static ATerm z_100 (ATerm t_100, ATerm t)
{
  t = SSL_fclose(t_100);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL;
  x_100 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_100 = ATgetArgument(t, 0);
      {
        ATerm n_43 = t;
        int o_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_100);
            LocalPopChoice(o_43);
          }
        else
          {
            t = n_43;
            t = z_100(x_100, t);
          }
      }
    }
  else
    {
      t = z_100(x_100, t);
    }
  return(t);
}
static ATerm n_11 (ATerm o_33, ATerm t)
{
  t = SSL_read_term_from_stream(o_33);
  return(t);
}
static ATerm o_11 (ATerm u_59, ATerm v_59, ATerm t)
{
  t = SSL_strcat(u_59, v_59);
  return(t);
}
static ATerm p_11 (ATerm w_34, ATerm x_34, ATerm t)
{
  ATerm a_101 = NULL;
  t = SSL_fopen(w_34, x_34);
  a_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_101);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_101 = NULL;
  t = SSL_stdin_stream();
  b_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_101);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_101 = NULL;
  t = SSL_stdout_stream();
  c_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_101);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_101 = NULL;
  t = SSL_stderr_stream();
  d_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_101);
  return(t);
}
static ATerm k_102 (ATerm j_101, ATerm t)
{
  ATerm k_101 = NULL;
  t = SSL_explode_term(j_101);
  if(match_cons(t, sym__2))
    {
      ATerm p_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_43 = ATgetArgument(t, 1);
        if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
          {
            k_101 = ATgetFirst((ATermList) q_43);
            {
              ATerm r_43 = (ATerm) ATgetNext((ATermList) q_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_101;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_101;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_101;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_101;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_102 (ATerm n_101, ATerm o_101, ATerm p_101, ATerm t)
{
  ATerm q_101 = NULL,r_101 = NULL,s_101 = NULL,v_101 = NULL,k_8 = NULL;
  t = SSLgetAnnotations(p_101);
  s_101 = t;
  t = n_101;
  if(match_cons(t, sym_Path_1))
    {
      v_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_101, o_101);
  k_8 = t;
  t = SSLsetAnnotations(k_8, s_101);
  if(match_cons(t, sym__2))
    {
      q_101 = ATgetArgument(t, 0);
      r_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(q_101, r_101, t);
  return(t);
}
static ATerm m_102 (ATerm x_101, ATerm y_101, ATerm z_101, ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL,f_102 = NULL,l_8 = NULL;
  t = SSLgetAnnotations(z_101);
  c_102 = t;
  t = SSL_is_string(x_101);
  f_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_102, y_101);
  l_8 = t;
  t = SSLsetAnnotations(l_8, c_102);
  if(match_cons(t, sym__2))
    {
      a_102 = ATgetArgument(t, 0);
      b_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(a_102, b_102, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm h_102 = NULL,i_102 = NULL,j_102 = NULL;
  h_102 = t;
  if(match_cons(t, sym__2))
    {
      i_102 = ATgetArgument(t, 0);
      j_102 = ATgetArgument(t, 1);
      {
        ATerm u_43 = t;
        int v_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_102(h_102, t);
            LocalPopChoice(v_43);
          }
        else
          {
            t = u_43;
            {
              ATerm w_43 = t;
              int x_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_102(i_102, j_102, h_102, t);
                  LocalPopChoice(x_43);
                }
              else
                {
                  t = w_43;
                  t = m_102(i_102, j_102, h_102, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_102(h_102, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL,v_102 = NULL;
  v_102 = t;
  {
    ATerm y_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_102, term_a_44);
        t = q_11(t);
        LocalPopChoice(z_43);
      }
    else
      {
        t = y_43;
        {
          ATerm o_46 = NULL,p_46 = NULL;
          t = term_b_44;
          p_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_44, v_102);
          t = o_11(p_46, v_102, t);
          o_46 = t;
          t = SSL_perror(o_46);
          _fail(t);
        }
      }
  }
  p_102 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(q_102, t);
  o_102 = t;
  t = p_102;
  t = fclose_0_0(t);
  t = o_102;
  return(t);
}
ATerm fetch_1_0 (ATerm m_121 (ATerm), ATerm t)
{
  static ATerm u_103 (ATerm t)
  {
    ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL;
    r_103 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_103 = ATgetFirst((ATermList) t);
        t_103 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_44 = t;
      int g_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_46 = NULL,i_47 = NULL,p_8 = NULL;
          t = SSLgetAnnotations(r_103);
          x_46 = t;
          t = s_103;
          t = m_121(t);
          i_47 = t;
          t = (ATerm) ATinsert(CheckATermList(t_103), i_47);
          p_8 = t;
          t = SSLsetAnnotations(p_8, x_46);
          LocalPopChoice(g_44);
        }
      else
        {
          t = c_44;
          {
            ATerm d_48 = NULL,g_48 = NULL,r_8 = NULL;
            t = SSLgetAnnotations(r_103);
            d_48 = t;
            t = t_103;
            t = u_103(t);
            g_48 = t;
            t = (ATerm) ATinsert(CheckATermList(g_48), s_103);
            r_8 = t;
            t = SSLsetAnnotations(r_8, d_48);
          }
        }
    }
    return(t);
  }
  t = u_103(t);
  return(t);
}
static ATerm v_11 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm x_103 = NULL;
  t = lookup_table_0_1(j_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(k_46, x_103, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_117 (ATerm), ATerm t)
{
  ATerm a_104 = NULL;
  a_104 = t;
  {
    ATerm h_44 = t;
    int j_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL;
        t = term_k_44;
        d_104 = t;
        t = term_l_44;
        e_104 = t;
        t = term_m_44;
        t = v_11(d_104, e_104, t);
        c_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_104, term_n_44);
        t = geq_0_0(t);
        t = a_104;
        t = u_117(t);
        LocalPopChoice(j_44);
      }
    else
      {
        t = h_44;
        t = a_104;
      }
  }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm h_104 = NULL;
  h_104 = t;
  if(match_string(t, "-k"))
    {
      t = h_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_104;
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
  i_104 = t;
  t = SSL_string_to_int(i_104);
  j_104 = t;
  t = term_s_44;
  k_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_44, j_104);
  t = y_11(k_104, j_104, t);
  t = i_104;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_t_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_13, w_13, x_13, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm m_104 = NULL;
  m_104 = t;
  if(match_string(t, "-S"))
    {
      t = m_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_104;
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL;
  t = term_l_44;
  n_104 = t;
  t = term_u_20;
  o_104 = t;
  t = term_u_44;
  t = y_11(n_104, o_104, t);
  t = term_y_44;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_z_44;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL;
  p_104 = t;
  t = SSL_string_to_int(p_104);
  q_104 = t;
  t = term_l_44;
  r_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_44, q_104);
  t = y_11(r_104, q_104, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_104);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_a_45;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm s_104 = NULL,t_104 = NULL;
  t = term_d_45;
  s_104 = t;
  t = term_p_16;
  t_104 = t;
  t = term_e_45;
  t = y_11(s_104, t_104, t);
  t = term_j_45;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_l_45;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_13, z_13, a_14, t);
      LocalPopChoice(p_45);
    }
  else
    {
      t = o_45;
      {
        ATerm q_45 = t;
        int r_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_14, f_14, g_14, t);
            LocalPopChoice(r_45);
          }
        else
          {
            t = q_45;
            t = Option_3_0(h_14, i_14, j_14, t);
          }
      }
    }
  return(t);
}
static ATerm y_11 (ATerm b_39, ATerm d_39, ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL;
  t = term_k_44;
  u_104 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_44, b_39, d_39);
  t = lookup_table_0_1(u_104, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(b_39, d_39, v_104, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_44, b_39, d_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_105 = NULL,c_105 = NULL,d_105 = NULL;
      t = term_p_16;
      t = e_0(t);
      b_105 = t;
      t = term_s_45;
      c_105 = t;
      t = term_t_45;
      d_105 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_45, term_t_45, b_105);
      t = w_11(c_105, d_105, b_105, t);
      _fail(t);
    }
  else
    {
      ATerm g_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_104 = ATgetFirst((ATermList) t);
          a_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_104;
      t = c_0(t);
      t = term_p_16;
      t = d_0(t);
      g_105 = t;
      t = (ATerm) ATinsert(CheckATermList(a_105), g_105);
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm i_105 = NULL;
  i_105 = t;
  if(match_string(t, "-o"))
    {
      t = i_105;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_105;
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm j_105 = NULL,k_105 = NULL;
  j_105 = t;
  t = term_u_45;
  k_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_45, j_105);
  t = y_11(k_105, j_105, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_105);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_v_45;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_14, m_14, n_14, t);
  return(t);
}
static ATerm w_11 (ATerm q_44, ATerm r_44, ATerm p_44, ATerm t)
{
  ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL,p_105 = NULL,q_105 = NULL;
  m_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_44, r_44);
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_45 = ATgetArgument(t, 0);
            ATerm z_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_44, r_44);
        t = v_11(q_44, r_44, t);
        LocalPopChoice(x_45);
      }
    else
      {
        t = w_45;
        t = (ATerm) ATempty;
      }
  }
  n_105 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_44, r_44, (ATerm) ATinsert(CheckATermList(n_105), p_44));
  t = lookup_table_0_1(q_44, t);
  q_105 = t;
  t = (ATerm) ATinsert(CheckATermList(n_105), p_44);
  o_105 = t;
  t = q_105;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(r_44, o_105, p_105, t);
  t = m_105;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL,a_106 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL;
      t = term_p_16;
      t = n_0(t);
      b_106 = t;
      t = term_s_45;
      c_106 = t;
      t = term_t_45;
      d_106 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_45, term_t_45, b_106);
      t = w_11(c_106, d_106, b_106, t);
      _fail(t);
    }
  else
    {
      ATerm h_106 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_105 = ATgetFirst((ATermList) t);
          y_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_105;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_105 = ATgetFirst((ATermList) t);
          a_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_105;
      t = k_0(t);
      t = z_105;
      t = l_0(t);
      h_106 = t;
      t = (ATerm) ATinsert(CheckATermList(a_106), h_106);
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm j_106 = NULL;
  j_106 = t;
  if(match_string(t, "-i"))
    {
      t = j_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_106;
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm k_106 = NULL,l_106 = NULL;
  k_106 = t;
  t = term_a_46;
  l_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_46, k_106);
  t = y_11(l_106, k_106, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_106);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_b_46;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_14, p_14, q_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_16;
  t = whoami_0_0(t);
  m_106 = t;
  t = term_r_16;
  o_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_46), m_106);
  p_106 = t;
  t = SSL_printnl(o_106, p_106);
  t = term_x_16;
  n_106 = t;
  t = SSL_exit(n_106);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_106 = NULL,r_106 = NULL;
  t = term_k_44;
  q_106 = t;
  t = term_e_46;
  r_106 = t;
  t = term_f_46;
  t = v_11(q_106, r_106, t);
  return(t);
}
static ATerm r_11 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm g_46 = t;
  int h_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_41, z_41);
      LocalPopChoice(h_46);
    }
  else
    {
      t = g_46;
      t = SSL_addr(y_41, z_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm t)
{
  ATerm t_106 = NULL,u_106 = NULL,v_106 = NULL;
  t_106 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_106;
      t = o_126(t);
    }
  else
    {
      ATerm y_106 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_106 = ATgetFirst((ATermList) t);
          v_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_106;
      t = foldr_2_0(o_126, p_126, t);
      y_106 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_106, y_106);
      t = p_126(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm e_49 = NULL,g_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(e_49, g_49, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_107 = NULL,a_49 = NULL,b_49 = NULL;
  t = times_0_0(t);
  b_49 = t;
  t = SSL_explode_term(b_49);
  if(match_cons(t, sym__2))
    {
      ATerm i_46 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_49;
  t = foldr_2_0(r_14, t_14, t);
  b_107 = t;
  t = SSL_TicksToSeconds(b_107);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL;
  m_107 = t;
  if(match_cons(t, sym__2))
    {
      n_107 = ATgetArgument(t, 0);
      o_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_107;
        if((n_107 != t))
          {
            _fail(t);
          }
        t = m_107;
        LocalPopChoice(m_46);
      }
    else
      {
        t = l_46;
        t = (ATerm) ATmakeAppl(sym__2, n_107, o_107);
        {
          ATerm n_46 = t;
          int q_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_107, o_107);
              LocalPopChoice(q_46);
            }
          else
            {
              t = n_46;
              t = SSL_gtr(n_107, o_107);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_107, o_107);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_117 (ATerm), ATerm t)
{
  ATerm s_107 = NULL;
  s_107 = t;
  {
    ATerm r_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_107 = NULL,v_107 = NULL,w_107 = NULL;
        t = term_k_44;
        v_107 = t;
        t = term_l_44;
        w_107 = t;
        t = term_m_44;
        t = v_11(v_107, w_107, t);
        u_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_107, term_x_16);
        t = geq_0_0(t);
        t = s_107;
        t = t_117(t);
        LocalPopChoice(s_46);
      }
    else
      {
        t = r_46;
        t = s_107;
      }
  }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm b_108 = NULL,e_108 = NULL,g_108 = NULL,h_108 = NULL;
  t = run_time_0_0(t);
  b_108 = t;
  t = term_p_16;
  t = whoami_0_0(t);
  e_108 = t;
  t = term_r_16;
  g_108 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_46), b_108), term_t_46), e_108);
  h_108 = t;
  t = SSL_printnl(g_108, h_108);
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_46), b_108), term_t_46), e_108));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_108 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_20;
  i_108 = t;
  t = SSL_exit(i_108);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL;
  w_108 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_108;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_108 = ATgetArgument(t, 0);
          {
            ATerm d_50 = NULL,v_8 = NULL;
            t = SSLgetAnnotations(w_108);
            d_50 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_108);
            v_8 = t;
            t = SSLsetAnnotations(v_8, d_50);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_108;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_136 (ATerm), ATerm t)
{
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_108 = NULL,m_108 = NULL;
      t = term_k_44;
      l_108 = t;
      t = term_y_46;
      m_108 = t;
      t = term_z_46;
      t = v_11(l_108, m_108, t);
      LocalPopChoice(w_46);
    }
  else
    {
      t = v_46;
      t = fetch_1_0(w_14, t);
    }
  t = x_136(t);
  return(t);
}
static ATerm z_11 (ATerm i_48, ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm y_108 = NULL;
  t = SSL_hashtable_put(k_48, i_48, j_48);
  y_108 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_108);
  return(t);
}
static ATerm a_12 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_hashtable_get(m_48, l_48);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_46, ATerm t)
{
  ATerm h_109 = NULL;
  t = table_hashtable_0_0(t);
  h_109 = t;
  {
    ATerm a_47 = t;
    int b_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_50 = NULL;
        t = h_109;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_12(c_46, j_50, t);
        LocalPopChoice(b_47);
      }
    else
      {
        t = a_47;
        {
          ATerm s_50 = NULL;
          t = c_46;
          t = table_create_0_0(t);
          t = h_109;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(c_46, s_50, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_48, ATerm r_48, ATerm t)
{
  ATerm k_109 = NULL;
  t = SSL_hashtable_create(q_48, r_48);
  k_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_109);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_109 = NULL,m_109 = NULL,n_109 = NULL,p_109 = NULL,q_109 = NULL;
  l_109 = t;
  t = term_c_47;
  p_109 = t;
  t = term_d_47;
  q_109 = t;
  t = l_109;
  t = new_hashtable_0_2(p_109, q_109, t);
  m_109 = t;
  t = l_109;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(l_109, m_109, n_109, t);
  t = l_109;
  return(t);
}
static ATerm t_11 (ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm r_109 = NULL;
  t = SSL_hashtable_remove(o_48, n_48);
  r_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_109);
  return(t);
}
static ATerm u_11 (ATerm s_48, ATerm t)
{
  ATerm s_109 = NULL;
  t = SSL_hashtable_destroy(s_48);
  s_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_109);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_109 = NULL;
  t = SSL_table_hashtable();
  t_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_109);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL,z_109 = NULL;
  u_109 = t;
  t = table_hashtable_0_0(t);
  v_109 = t;
  t = lookup_table_0_1(u_109, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(z_109, t);
  t = v_109;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(u_109, w_109, t);
  t = u_109;
  return(t);
}
ATerm map_1_0 (ATerm c_121 (ATerm), ATerm t)
{
  static ATerm q_110 (ATerm t)
  {
    ATerm n_110 = NULL,o_110 = NULL,p_110 = NULL;
    n_110 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_110;
      }
    else
      {
        ATerm a_51 = NULL,g_51 = NULL,h_51 = NULL,y_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_110 = ATgetFirst((ATermList) t);
            p_110 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_110);
        a_51 = t;
        t = o_110;
        t = c_121(t);
        g_51 = t;
        t = p_110;
        t = q_110(t);
        h_51 = t;
        t = (ATerm) ATinsert(CheckATermList(h_51), g_51);
        y_8 = t;
        t = SSLsetAnnotations(y_8, a_51);
      }
    return(t);
  }
  t = q_110(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_110 = NULL,u_110 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_110 = ATgetFirst((ATermList) t);
      u_110 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_110 = NULL,z_110 = NULL;
        static ATerm z_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_110)), not_null(z_110));
          return(t);
        }
        t = u_110;
        t = i_0(t);
        if(((y_110 != NULL) && (y_110 != t)))
          _fail(t);
        else
          y_110 = t;
        t = t_110;
        t = g_0(t);
        if(((z_110 != NULL) && (z_110 != t)))
          _fail(t);
        else
          z_110 = t;
        t = u_110;
        t = reverse_acc_2_0(g_0, z_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_16;
      t = i_0(t);
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm f_111 = NULL,g_111 = NULL,h_111 = NULL,a_9 = NULL;
  h_111 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_111);
  f_111 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_111);
  a_9 = t;
  t = SSLsetAnnotations(a_9, f_111);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm j_111 = NULL;
  j_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_111), term_e_47);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_111 = NULL,c_111 = NULL;
  ATerm f_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_111 = NULL,e_111 = NULL;
      t = term_k_44;
      d_111 = t;
      t = term_e_46;
      e_111 = t;
      t = term_f_46;
      t = v_11(d_111, e_111, t);
      LocalPopChoice(g_47);
    }
  else
    {
      t = f_47;
      t = fetch_1_0(b_15, t);
    }
  t = term_h_47;
  t = echo_0_0(t);
  t = term_s_45;
  b_111 = t;
  t = term_t_45;
  c_111 = t;
  t = term_j_47;
  t = v_11(b_111, c_111, t);
  t = reverse_acc_2_0(_id, c_15, t);
  t = map_1_0(e_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL,n_111 = NULL;
  l_111 = t;
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_111;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_47 = ATgetFirst((ATermList) t);
                ATerm n_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_111;
          }
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
        t = (ATerm) ATinsert(ATempty, l_111);
      }
  }
  m_111 = t;
  t = term_h_43;
  n_111 = t;
  t = SSL_printnl(n_111, m_111);
  t = l_111;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_111 = NULL,s_111 = NULL;
  t = term_k_44;
  r_111 = t;
  t = term_e_46;
  s_111 = t;
  t = term_f_46;
  t = v_11(r_111, s_111, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm t_111 = NULL,u_111 = NULL;
  t = term_r_47;
  t_111 = t;
  t = term_p_16;
  u_111 = t;
  t = term_s_47;
  t = y_11(t_111, u_111, t);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_u_47;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL;
  t = term_r_47;
  x_111 = t;
  t = term_p_16;
  y_111 = t;
  t = term_s_47;
  t = y_11(x_111, y_111, t);
  t = term_v_47;
  v_111 = t;
  t = term_p_16;
  w_111 = t;
  t = term_w_47;
  t = y_11(v_111, w_111, t);
  t = term_x_47;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_y_47;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_15, g_15, h_15, t);
      LocalPopChoice(a_48);
    }
  else
    {
      t = z_47;
      t = Option_3_0(i_15, j_15, k_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_139 (ATerm), ATerm t)
{
  ATerm h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL,m_112 = NULL,n_112 = NULL,f_9 = NULL;
  h_112 = t;
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_48;
        t = a_139(t);
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
      }
  }
  t = h_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_112 = ATgetFirst((ATermList) t);
      k_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_112);
  i_112 = t;
  t = term_e_46;
  n_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_46, j_112);
  t = y_11(n_112, j_112, t);
  t = k_112;
  {
    static ATerm z_112 (ATerm t)
    {
      ATerm f_48 = t;
      int h_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_48 = t;
          int t_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_112 = NULL;
              q_112 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_112;
              LocalPopChoice(t_48);
            }
          else
            {
              t = p_48;
              t = a_139(t);
              t = Cons_2_0(_id, z_112, t);
            }
          LocalPopChoice(h_48);
        }
      else
        {
          t = f_48;
          {
            ATerm t_112 = NULL,u_112 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_112 = ATgetFirst((ATermList) t);
                u_112 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_112), (ATerm) ATmakeAppl(sym_Undefined_1, t_112));
          }
        }
      return(t);
    }
    t = z_112(t);
  }
  m_112 = t;
  t = (ATerm) ATinsert(CheckATermList(m_112), (ATerm) ATmakeAppl(sym_Program_1, j_112));
  f_9 = t;
  t = SSLsetAnnotations(f_9, i_112);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm r_113 = NULL;
  r_113 = t;
  if(match_string(t, "--help"))
    {
      t = r_113;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_113;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_113;
        }
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm s_113 = NULL,t_113 = NULL;
  t = term_y_46;
  s_113 = t;
  t = term_p_16;
  t_113 = t;
  t = term_y_48;
  t = y_11(s_113, t_113, t);
  t = term_z_48;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_c_49;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_138 (ATerm), ATerm t)
{
  ATerm e_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL;
  l_113 = t;
  t = term_s_45;
  m_113 = t;
  t = term_d_49;
  t = lookup_table_0_1(m_113, t);
  q_113 = t;
  t = term_t_45;
  n_113 = t;
  t = (ATerm) ATempty;
  o_113 = t;
  t = q_113;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(n_113, o_113, p_113, t);
  t = l_113;
  {
    static ATerm l_15 (ATerm t)
    {
      ATerm f_49 = t;
      int i_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_138(t);
          LocalPopChoice(i_49);
        }
      else
        {
          t = f_49;
          {
            ATerm j_49 = t;
            int k_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_15, q_15, r_15, t);
                LocalPopChoice(k_49);
              }
            else
              {
                t = j_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_15, t);
  }
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_114 = NULL;
        e_114 = t;
        {
          ATerm n_49 = t;
          int q_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_52 = NULL;
              t = e_114;
              {
                ATerm v_49 = t;
                int w_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_52 = NULL,l_52 = NULL;
                    t = term_k_44;
                    k_52 = t;
                    t = term_y_46;
                    l_52 = t;
                    t = term_z_46;
                    t = v_11(k_52, l_52, t);
                    LocalPopChoice(w_49);
                  }
                else
                  {
                    t = v_49;
                    t = fetch_1_0(s_15, t);
                  }
              }
              t = e_114;
              t = default_system_usage_0_0(t);
              t = term_u_20;
              j_52 = t;
              t = SSL_exit(j_52);
              LocalPopChoice(q_49);
            }
          else
            {
              t = n_49;
              {
                ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
                t = term_k_44;
                r_52 = t;
                t = term_r_47;
                s_52 = t;
                t = term_x_49;
                t = v_11(r_52, s_52, t);
                t = e_114;
                t = default_system_about_0_0(t);
                t = term_u_20;
                q_52 = t;
                t = SSL_exit(q_52);
              }
            }
        }
        LocalPopChoice(m_49);
      }
    else
      {
        t = l_49;
        {
          ATerm y_49 = t;
          int z_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_114 = NULL,g_114 = NULL,h_114 = NULL;
              static ATerm t_15 (ATerm t)
              {
                ATerm i_114 = NULL,j_114 = NULL,k_114 = NULL,r_9 = NULL;
                k_114 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_114 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_114);
                i_114 = t;
                t = j_114;
                if(((e_113 != NULL) && (e_113 != t)))
                  _fail(t);
                else
                  e_113 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_114);
                r_9 = t;
                t = SSLsetAnnotations(r_9, i_114);
                return(t);
              }
              t = fetch_1_0(t_15, t);
              t = term_r_16;
              g_114 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_113)), term_b_50);
              h_114 = t;
              t = SSL_printnl(g_114, h_114);
              t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_113)), term_b_50));
              t = default_system_usage_0_0(t);
              t = term_x_16;
              f_114 = t;
              t = SSL_exit(f_114);
              LocalPopChoice(z_49);
            }
          else
            {
              t = y_49;
            }
        }
      }
  }
  k_113 = t;
  t = term_s_45;
  t = table_destroy_0_0(t);
  t = k_113;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm c_137 (ATerm), ATerm t)
{
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL;
  t = parse_options_1_0(z_136, t);
  s_114 = t;
  t = term_e_50;
  t = table_create_0_0(t);
  t = term_e_50;
  t_114 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_50, term_f_50, s_114);
  t = lookup_table_0_1(t_114, t);
  w_114 = t;
  t = term_f_50;
  u_114 = t;
  t = w_114;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(u_114, s_114, v_114, t);
  t = s_114;
  t = b_137(t);
  {
    ATerm g_50 = t;
    int h_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_137, t);
        LocalPopChoice(h_50);
      }
    else
      {
        t = g_50;
        {
          ATerm i_50 = t;
          int k_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_137(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_50);
            }
          else
            {
              t = i_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = if_verbose2_1_0(g_16, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm x_114 = NULL,y_114 = NULL;
  t = term_l_50;
  x_114 = t;
  t = term_p_16;
  y_114 = t;
  t = term_m_50;
  t = y_11(x_114, y_114, t);
  t = term_n_50;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_w_50;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL;
  z_114 = t;
  t = term_k_44;
  d_115 = t;
  t = term_e_46;
  e_115 = t;
  t = term_f_46;
  t = v_11(d_115, e_115, t);
  a_115 = t;
  t = term_r_16;
  b_115 = t;
  t = (ATerm) ATinsert(ATempty, a_115);
  c_115 = t;
  t = SSL_printnl(b_115, c_115);
  t = z_114;
  return(t);
}
ATerm iowrap_3_0 (ATerm i_136 (ATerm), ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm t)
{
  static ATerm u_15 (ATerm t)
  {
    ATerm x_50 = t;
    int y_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_136(t);
        LocalPopChoice(y_50);
      }
    else
      {
        t = x_50;
        {
          ATerm z_50 = t;
          int b_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(b_51);
            }
          else
            {
              t = z_50;
              {
                ATerm e_51 = t;
                int f_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(f_51);
                  }
                else
                  {
                    t = e_51;
                    {
                      ATerm j_51 = t;
                      int k_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_15, c_16, d_16, t);
                          LocalPopChoice(k_51);
                        }
                      else
                        {
                          t = j_51;
                          {
                            ATerm m_51 = t;
                            int n_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(n_51);
                              }
                            else
                              {
                                t = m_51;
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
  static ATerm x_15 (ATerm t)
  {
    ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL;
    m_115 = t;
    {
      ATerm o_51 = t;
      int p_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm h_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_115 != NULL) && (l_115 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_115 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_16, t);
          LocalPopChoice(p_51);
        }
      else
        {
          t = o_51;
          t = term_q_51;
          l_115 = t;
        }
    }
    t = not_null(l_115);
    t = ReadFromFile_0_0(t);
    n_115 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_115, n_115);
    t = apply_strategy_1_0(i_136, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(u_15, k_136, v_15, x_15, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL,c_116 = NULL,v_12 = NULL,o_12 = NULL,b_12 = NULL;
  c_116 = t;
  if(match_cons(t, sym__2))
    {
      p_115 = ATgetArgument(t, 0);
      q_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_116);
  o_115 = t;
  t = q_115;
  if(match_cons(t, sym_Specification_1))
    {
      v_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_115);
  u_115 = t;
  t = v_115;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_115 = ATgetFirst((ATermList) t);
      y_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_115);
  w_115 = t;
  t = y_115;
  t = Cons_2_0(m_16, o_16, t);
  z_115 = t;
  t = (ATerm) ATinsert(CheckATermList(z_115), x_115);
  b_12 = t;
  t = SSLsetAnnotations(b_12, w_115);
  a_116 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_116);
  o_12 = t;
  t = SSLsetAnnotations(o_12, u_115);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm r_51 = ATgetArgument(t, 0);
      if(((ATgetType(r_51) == AT_LIST) && !(ATisEmpty(r_51))))
        {
          s_115 = ATgetFirst((ATermList) r_51);
          {
            ATerm s_51 = (ATerm) ATgetNext((ATermList) r_51);
            if(((ATgetType(s_51) == AT_LIST) && !(ATisEmpty(s_51))))
              {
                ATerm t_51 = ATgetFirst((ATermList) s_51);
                if(match_cons(t_51, sym_Strategies_1))
                  {
                    t_115 = ATgetArgument(t_51, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm u_51 = (ATerm) ATgetNext((ATermList) s_51);
                  if(((ATgetType(u_51) != AT_LIST) || !(ATisEmpty(u_51))))
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
  t = q_9(s_115, t_115, t);
  r_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_115, r_115);
  v_12 = t;
  t = SSLsetAnnotations(v_12, o_115);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm e_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL,u_10 = NULL;
  h_116 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_116);
  e_116 = t;
  t = f_116;
  t = needed_defs_0_0(t);
  g_116 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_116);
  u_10 = t;
  t = SSLsetAnnotations(u_10, e_116);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_16, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_s_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_a_51;
ATerm term_u_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_o_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_t_49;
ATerm term_o_49;
ATerm term_k_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_p_46;
ATerm term_d_46;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_v_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_e_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_q_42;
ATerm term_o_42;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_p_40;
ATerm term_n_40;
ATerm term_d_37;
ATerm term_u_36;
ATerm term_u_35;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_j_25;
ATerm term_g_25;
ATerm term_c_25;
ATerm term_i_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_m_22;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_x_20;
ATerm term_m_18;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_n_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("n_1", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("l_1", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATempty);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_21);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Call_2, term_r_22, (ATerm) ATempty);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Call_2, term_r_23, (ATerm) ATempty);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Call_2, term_p_21, (ATerm) ATempty);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_w_30, (ATerm) ATempty);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_30);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_x_20);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym__2, term_w_42, term_x_42);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym__2, term_c_44, term_d_44);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__2, term_d_44, term_x_20);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_20);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym__2, term_o_44, term_d_16);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(sym__2, term_c_44, term_u_46);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__2, term_c_44, term_f_48);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym__2, term_q_45, term_r_45);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym__2, term_x_48, term_d_16);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym__2, term_a_49, term_d_16);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym__2, term_f_48, term_d_16);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(sym__3, term_q_45, term_r_45, (ATerm) ATempty);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym__2, term_c_44, term_x_48);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(sym__2, term_a_51, term_d_16);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm f_137 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm q_9 (ATerm z_91, ATerm y_91, ATerm t);
static ATerm s_9 (ATerm z_69, ATerm a_70, ATerm b_70, ATerm t);
static ATerm w_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm j_115 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm y_9 (ATerm c_27, ATerm b_27, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm free_vars2_4_0 (ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm o_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_139 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm p_44 (ATerm b_37, ATerm c_37, ATerm t);
static ATerm q_44 (ATerm o_37, ATerm p_37, ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm v_149 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm h_10 (ATerm v_86, ATerm w_86, ATerm x_86, ATerm t);
static ATerm g_59 (ATerm s_58, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm p_117 (ATerm), ATerm t);
static ATerm l_10 (ATerm i_82, ATerm j_82, ATerm k_82, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_116 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm n_120 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm m_10 (ATerm m_42, ATerm n_42, ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm copy_1_0 (ATerm r_136 (ATerm), ATerm t);
static ATerm n_10 (ATerm c_69, ATerm d_69, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm i_79 (ATerm y_75, ATerm b_76, ATerm d_76, ATerm e_76, ATerm t);
static ATerm j_79 (ATerm x_77, ATerm z_77, ATerm c_78, ATerm d_78, ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm b_131 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm t_123 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm d_118 (ATerm), ATerm t);
static ATerm z_9 (ATerm d_45, ATerm e_45, ATerm t);
ATerm end_scope_1_0 (ATerm b_128 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm a_128 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm d_10 (ATerm c_71, ATerm d_71, ATerm h_71, ATerm e_71, ATerm g_71, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm d_81 (ATerm v_79, ATerm a_80, ATerm b_80, ATerm c_80, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm g_131 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_83 (ATerm y_82, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_10 (ATerm t_132 (ATerm), ATerm p_57, ATerm o_57, ATerm t);
ATerm genzip_4_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm y_10 (ATerm x_784, ATerm c_785, ATerm z_79, ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm w_92 (ATerm q_88, ATerm k_89, ATerm l_89, ATerm t);
static ATerm o_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_11 (ATerm r_149 (ATerm), ATerm s_149 (ATerm), ATerm t_149 (ATerm), ATerm q_81, ATerm n_81, ATerm v_81, ATerm r_81, ATerm o_81, ATerm p_81, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm r_149 (ATerm), ATerm s_149 (ATerm), ATerm t_149 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm t);
ATerm for_3_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm s_39 (ATerm t_38, ATerm a_39, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm d_11 (ATerm e_128 (ATerm), ATerm u_43, ATerm s_43, ATerm t);
static ATerm e_11 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm v_57, ATerm u_57, ATerm t);
static ATerm f_11 (ATerm y_132 (ATerm), ATerm r_57, ATerm q_57, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm h_11 (ATerm j_45, ATerm k_45, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm n_13 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t);
static ATerm j_11 (ATerm c_35, ATerm d_35, ATerm t);
static ATerm k_11 (ATerm u_33, ATerm v_33, ATerm t);
static ATerm m_11 (ATerm v_123 (ATerm), ATerm o_266, ATerm a_34, ATerm t);
static ATerm l_11 (ATerm q_33, ATerm r_33, ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm c_144 (ATerm), ATerm t);
static ATerm x_103 (ATerm r_103, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_11 (ATerm w_33, ATerm t);
static ATerm o_11 (ATerm u_66, ATerm v_66, ATerm t);
static ATerm p_11 (ATerm e_35, ATerm f_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_105 (ATerm h_104, ATerm t);
static ATerm j_105 (ATerm l_104, ATerm m_104, ATerm n_104, ATerm t);
static ATerm k_105 (ATerm v_104, ATerm w_104, ATerm x_104, ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_130 (ATerm), ATerm t);
static ATerm v_11 (ATerm r_46, ATerm s_46, ATerm t);
ATerm if_verbose2_1_0 (ATerm m_125 (ATerm), ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_11 (ATerm e_39, ATerm f_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_11 (ATerm y_44, ATerm z_44, ATerm x_44, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_11 (ATerm g_42, ATerm h_42, ATerm t);
ATerm foldr_2_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_125 (ATerm), ATerm t);
static ATerm r_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm need_help_1_0 (ATerm a_145 (ATerm), ATerm t);
static ATerm z_11 (ATerm d_49, ATerm e_49, ATerm f_49, ATerm t);
static ATerm a_12 (ATerm g_49, ATerm h_49, ATerm t);
ATerm lookup_table_0_1 (ATerm k_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_49, ATerm m_49, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_11 (ATerm i_49, ATerm j_49, ATerm t);
static ATerm u_11 (ATerm n_49, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm d_147 (ATerm), ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm o_15 (ATerm t);
ATerm parse_options_1_0 (ATerm c_147 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
ATerm iowrap_3_0 (ATerm l_144 (ATerm), ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,o_0 = NULL,q_0 = NULL;
  a_0 = t;
  t = term_d_16;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_g_16;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_16), b_0), term_h_16);
  q_0 = t;
  t = SSL_printnl(o_0, q_0);
  t = term_j_16;
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
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,x_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, (ATerm) ATempty);
        w_1 = t;
        t = term_n_16;
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, (ATerm) ATempty));
        t = h_11(x_1, w_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm o_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_16) != ATmakeSymbol("n_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, b_2);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        {
          ATerm k_3 = NULL,n_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, (ATerm) ATempty);
          k_3 = t;
          t = term_n_16;
          n_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATmakeAppl(sym_OpDecl_2, z_1, (ATerm) ATempty));
          t = h_11(n_3, k_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm p_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_16) != ATmakeSymbol("l_1", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm f_137 (ATerm), ATerm t)
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
        ATerm s_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 = NULL,i_4 = NULL,j_4 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(t_2);
            f_4 = t;
            t = u_2;
            t = f_137(t);
            i_4 = t;
            t = v_2;
            t = filter_1_0(f_137, t);
            j_4 = t;
            t = (ATerm) ATinsert(CheckATermList(j_4), i_4);
            h_0 = t;
            t = SSLsetAnnotations(h_0, f_4);
            LocalPopChoice(v_16);
          }
        else
          {
            t = s_16;
            t = v_2;
            t = filter_1_0(f_137, t);
          }
      }
    }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  z_2 = t;
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            a_3 = ATgetArgument(t, 0);
            {
              ATerm z_16 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_16);
        {
          ATerm e_3 = NULL,f_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, a_3, (ATerm) ATempty);
          e_3 = t;
          t = term_e_17;
          f_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, a_3, (ATerm) ATempty), term_e_17);
          t = d_11(k_0, e_3, f_3, t);
          t = z_2;
        }
      }
    else
      {
        t = x_16;
        {
          ATerm i_3 = NULL,j_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              a_3 = ATgetArgument(t, 0);
              {
                ATerm g_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, a_3, (ATerm) ATempty);
          i_3 = t;
          t = term_i_17;
          j_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, a_3, (ATerm) ATempty), term_i_17);
          t = d_11(t_0, i_3, j_3, t);
          t = z_2;
        }
      }
  }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
    }
  return(t);
}
static ATerm q_9 (ATerm z_91, ATerm y_91, ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,r_0 = NULL,p_0 = NULL,m_0 = NULL;
  t = y_91;
  t = topdown_1_0(u_0, t);
  t = z_91;
  if(match_cons(t, sym_Signature_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_91);
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
  r_0 = t;
  t = SSLsetAnnotations(r_0, l_3);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, y_91)), o_3));
  return(t);
}
static ATerm s_9 (ATerm z_69, ATerm a_70, ATerm b_70, ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  t = term_g_16;
  a_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), b_70), term_q_17), a_70), term_p_17), z_69), term_o_17);
  b_4 = t;
  t = SSL_printnl(a_4, b_4);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), b_70), term_q_17), a_70), term_p_17), z_69), term_o_17);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) != AT_INT) || (ATgetInt((ATermInt) s_17) != 0)))
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(((ATgetType(t_17) != AT_INT) || (ATgetInt((ATermInt) t_17) != 0)))
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
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL,j_5 = NULL;
        t = x_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_17 = ATgetFirst((ATermList) t);
            ATerm d_18 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
              {
                ATerm e_18 = ATgetFirst((ATermList) d_18);
                ATerm f_18 = (ATerm) ATgetNext((ATermList) d_18);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm g_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(w_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_18;
            }
        }
        t = term_g_16;
        i_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_m_18);
        j_5 = t;
        t = SSL_printnl(i_5, j_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_m_18);
        t = giving_up_0_0(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        {
          ATerm a_6 = NULL,d_6 = NULL;
          t = x_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_18 = ATgetFirst((ATermList) t);
              if(match_cons(n_18, sym__2))
                {
                  a_6 = ATgetArgument(n_18, 0);
                  d_6 = ATgetArgument(n_18, 1);
                }
              else
                _fail(t);
              {
                ATerm p_18 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATmakeAppl(sym__2, a_6, d_6));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATmakeAppl(sym__2, a_6, d_6));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,r_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
      {
        ATerm l_6 = NULL,p_6 = NULL,q_6 = NULL,c_1 = NULL;
        t = SSLgetAnnotations(m_15);
        l_6 = t;
        t = n_15;
        t = f_115(t);
        p_6 = t;
        t = r_15;
        t = f_115(t);
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_6, q_6);
        c_1 = t;
        t = SSLsetAnnotations(c_1, l_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_15 = ATgetArgument(t, 0);
          r_15 = ATgetArgument(t, 1);
          l_15 = ATgetArgument(t, 2);
          {
            ATerm b_7 = NULL,m_7 = NULL,q_7 = NULL,x_7 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(m_15);
            b_7 = t;
            t = n_15;
            t = h_115(t);
            m_7 = t;
            t = r_15;
            t = h_115(t);
            q_7 = t;
            t = l_15;
            t = f_115(t);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, m_7, q_7, x_7);
            e_1 = t;
            t = SSLsetAnnotations(e_1, b_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_15 = ATgetArgument(t, 0);
              r_15 = ATgetArgument(t, 1);
              l_15 = ATgetArgument(t, 2);
              k_15 = ATgetArgument(t, 3);
              {
                ATerm c_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,i_1 = NULL;
                t = SSLgetAnnotations(m_15);
                c_9 = t;
                t = n_15;
                t = h_115(t);
                k_9 = t;
                t = r_15;
                t = h_115(t);
                l_9 = t;
                t = l_15;
                t = h_115(t);
                m_9 = t;
                t = k_15;
                t = f_115(t);
                n_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_9, l_9, m_9, n_9);
                i_1 = t;
                t = SSLsetAnnotations(i_1, c_9);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  n_15 = ATgetArgument(t, 0);
                  r_15 = ATgetArgument(t, 1);
                  l_15 = ATgetArgument(t, 2);
                  k_15 = ATgetArgument(t, 3);
                  {
                    ATerm g_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,j_1 = NULL;
                    t = SSLgetAnnotations(m_15);
                    g_10 = t;
                    t = n_15;
                    t = h_115(t);
                    p_10 = t;
                    t = r_15;
                    t = h_115(t);
                    q_10 = t;
                    t = l_15;
                    t = h_115(t);
                    r_10 = t;
                    t = k_15;
                    t = f_115(t);
                    s_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, p_10, q_10, r_10, s_10);
                    j_1 = t;
                    t = SSLsetAnnotations(j_1, g_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      n_15 = ATgetArgument(t, 0);
                      r_15 = ATgetArgument(t, 1);
                      l_15 = ATgetArgument(t, 2);
                      {
                        ATerm c_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,m_1 = NULL;
                        t = SSLgetAnnotations(m_15);
                        c_12 = t;
                        t = n_15;
                        t = h_115(t);
                        g_12 = t;
                        t = r_15;
                        t = h_115(t);
                        h_12 = t;
                        t = l_15;
                        t = h_115(t);
                        i_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, g_12, h_12, i_12);
                        m_1 = t;
                        t = SSLsetAnnotations(m_1, c_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          n_15 = ATgetArgument(t, 0);
                          r_15 = ATgetArgument(t, 1);
                          {
                            ATerm s_12 = NULL,w_12 = NULL,x_12 = NULL,o_1 = NULL;
                            t = SSLgetAnnotations(m_15);
                            s_12 = t;
                            t = n_15;
                            t = h_115(t);
                            w_12 = t;
                            t = r_15;
                            t = f_115(t);
                            x_12 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, w_12, x_12);
                            o_1 = t;
                            t = SSLsetAnnotations(o_1, s_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              n_15 = ATgetArgument(t, 0);
                              r_15 = ATgetArgument(t, 1);
                              {
                                ATerm g_13 = NULL,k_13 = NULL,l_13 = NULL,p_1 = NULL;
                                t = SSLgetAnnotations(m_15);
                                g_13 = t;
                                t = n_15;
                                t = h_115(t);
                                k_13 = t;
                                t = r_15;
                                t = f_115(t);
                                l_13 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, k_13, l_13);
                                p_1 = t;
                                t = SSLsetAnnotations(p_1, g_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  n_15 = ATgetArgument(t, 0);
                                  r_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_14 = NULL,y_14 = NULL,a_15 = NULL,q_1 = NULL;
                                    t = SSLgetAnnotations(m_15);
                                    u_14 = t;
                                    t = n_15;
                                    t = h_115(t);
                                    y_14 = t;
                                    t = r_15;
                                    t = f_115(t);
                                    a_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, y_14, a_15);
                                    q_1 = t;
                                    t = SSLsetAnnotations(q_1, u_14);
                                  }
                                }
                              else
                                {
                                  ATerm t_15 = NULL,e_16 = NULL,f_16 = NULL,u_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      n_15 = ATgetArgument(t, 0);
                                      r_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(m_15);
                                  t_15 = t;
                                  t = n_15;
                                  t = h_115(t);
                                  e_16 = t;
                                  t = r_15;
                                  t = f_115(t);
                                  f_16 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, e_16, f_16);
                                  u_1 = t;
                                  t = SSLsetAnnotations(u_1, t_15);
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
ATerm dynrule_sargs_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,w_16 = NULL;
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          q_16 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_18);
      t = q_16;
      if(match_cons(t, sym_DynRuleId_1))
        {
          r_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_16;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_18 = ATgetArgument(t, 0);
          w_16 = ATgetArgument(t, 1);
          {
            ATerm v_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_16;
    }
  else
    {
      t = q_18;
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                q_16 = ATgetArgument(t, 0);
                {
                  ATerm z_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_18);
            t = q_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm b_19 = ATgetArgument(t, 0);
                w_16 = ATgetArgument(t, 1);
                {
                  ATerm c_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = w_16;
          }
        else
          {
            t = w_18;
            if(match_cons(t, sym_AddDynRule_2))
              {
                q_16 = ATgetArgument(t, 0);
                {
                  ATerm d_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = q_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_19 = ATgetArgument(t, 0);
                w_16 = ATgetArgument(t, 1);
                {
                  ATerm f_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = w_16;
          }
      }
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm y_18 = NULL;
  ATerm g_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_18 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = y_18;
    }
  else
    {
      t = g_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_18;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm m_19 = NULL;
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_19 = ATgetArgument(t, 0);
          {
            ATerm o_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_19);
      t = m_19;
    }
  else
    {
      t = k_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_19;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm r_19 = ATgetArgument(t, 0);
          j_18 = ATgetArgument(t, 1);
          {
            ATerm t_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_19);
      t = j_18;
      t = map_1_0(x_0, t);
    }
  else
    {
      t = p_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm v_19 = ATgetArgument(t, 0);
          j_18 = ATgetArgument(t, 1);
          {
            ATerm w_19 = ATgetArgument(t, 2);
          }
          {
            ATerm x_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_18;
      t = map_1_0(y_0, t);
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm b_20 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_20 = ATgetArgument(t, 0);
          {
            ATerm a_20 = ATgetArgument(t, 1);
          }
          {
            ATerm c_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
      t = b_20;
    }
  else
    {
      t = y_19;
      if(match_cons(t, sym_SDefT_4))
        {
          b_20 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
          {
            ATerm e_20 = ATgetArgument(t, 2);
          }
          {
            ATerm f_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = b_20;
    }
  return(t);
}
static ATerm y_9 (ATerm c_27, ATerm b_27, ATerm t)
{
  t = c_27;
  t = map_1_0(a_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(t_1, a_17, b_17, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm c_17 = NULL;
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      if((c_17 != ATgetArgument(t, 1)))
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
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(c_2, l_17, m_17, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm n_17 = NULL;
  if(match_cons(t, sym__2))
    {
      n_17 = ATgetArgument(t, 0);
      if((n_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm m_21 = NULL;
  if(match_cons(t, sym__2))
    {
      m_21 = ATgetArgument(t, 0);
      if((m_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm o_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_139 (ATerm), ATerm t)
{
  static ATerm n_21 (ATerm t)
  {
    ATerm v_20 = NULL,w_20 = NULL,z_20 = NULL;
    z_20 = t;
    {
      ATerm g_20 = t;
      int i_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_139(t);
          LocalPopChoice(i_20);
        }
      else
        {
          t = g_20;
          t = (ATerm) ATempty;
        }
    }
    v_20 = t;
    t = z_20;
    {
      ATerm j_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_21 = NULL,t_16 = NULL,u_16 = NULL;
          t = n_139(t);
          a_21 = t;
          t = z_20;
          {
            static ATerm g_1 (ATerm t)
            {
              ATerm k_16 = NULL;
              t = n_21(t);
              k_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_16, a_21);
              t = t_10(p_139, k_16, a_21, t);
              return(t);
            }
            t = o_139(g_1, n_21, k_1, t);
          }
          u_16 = t;
          t = SSL_explode_term(u_16);
          if(match_cons(t, sym__2))
            {
              ATerm l_20 = ATgetArgument(t, 0);
              t_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_16;
          t = foldr_3_0(r_1, s_1, _id, t);
          LocalPopChoice(k_20);
        }
      else
        {
          t = j_20;
          {
            ATerm f_17 = NULL;
            t = SSL_explode_term(z_20);
            if(match_cons(t, sym__2))
              {
                ATerm m_20 = ATgetArgument(t, 0);
                f_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_17;
            t = foldr_3_0(y_1, a_2, n_21, t);
          }
        }
    }
    w_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_20, w_20);
    t = f_11(d_2, v_20, w_20, t);
    return(t);
  }
  t = n_21(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if(match_cons(n_20, sym_SVar_1))
        {
          z_21 = ATgetArgument(n_20, 0);
        }
      else
        _fail(t);
      a_22 = ATgetArgument(t, 1);
      b_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_22;
  t = foldr_3_0(h_2, i_2, j_2, t);
  c_22 = t;
  t = b_22;
  t = foldr_3_0(k_2, l_2, m_2, t);
  f_22 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_21, (ATerm) ATmakeAppl(sym__2, c_22, f_22)));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,z_22 = NULL,a_23 = NULL;
      n_22 = t;
      if(match_cons(t, sym_Let_2))
        {
          o_22 = ATgetArgument(t, 0);
          p_22 = ATgetArgument(t, 1);
          t = n_22;
          t = y_9(o_22, p_22, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              o_22 = ATgetArgument(t, 0);
              p_22 = ATgetArgument(t, 1);
              z_22 = ATgetArgument(t, 2);
              t = p_22;
              t = map_1_0(n_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  o_22 = ATgetArgument(t, 0);
                  p_22 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, o_22);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_22 = ATgetArgument(t, 0);
                      p_22 = ATgetArgument(t, 1);
                      z_22 = ATgetArgument(t, 2);
                      a_23 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_22;
                  t = map_1_0(o_2, t);
                }
            }
        }
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = dynrule_sargs_1_0(p_2, t);
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(match_cons(t_20, sym__2))
        {
          m_24 = ATgetArgument(t_20, 0);
          {
            ATerm u_20 = ATgetArgument(t_20, 1);
          }
        }
      else
        _fail(t);
      if((m_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  if(match_cons(t, sym__2))
    {
      g_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(g_22, h_22, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(j_22, k_22, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm l_23 = NULL;
  ATerm y_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_23 = ATgetArgument(t, 0);
          {
            ATerm c_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_21);
      t = l_23;
    }
  else
    {
      t = y_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_23;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm a_24 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_24 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
      t = a_24;
    }
  else
    {
      t = d_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_24;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = map_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm h_24 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_24 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = h_24;
    }
  else
    {
      t = g_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_24;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(e_2, f_2, sboundin_3_0, g_2, t);
  return(t);
}
static ATerm p_44 (ATerm b_37, ATerm c_37, ATerm t)
{
  t = b_37;
  {
    ATerm j_21 = t;
    if((PushChoice() == 0))
      {
        ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,q_2 = NULL;
        j_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_37 = ATgetFirst((ATermList) t);
            i_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_37);
        g_37 = t;
        t = i_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_37), h_37);
        q_2 = t;
        t = SSLsetAnnotations(q_2, g_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_21, b_37);
  return(t);
}
static ATerm q_44 (ATerm o_37, ATerm p_37, ATerm t)
{
  t = o_37;
  {
    ATerm l_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,r_2 = NULL;
        u_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_37 = ATgetFirst((ATermList) t);
            t_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_37);
        r_37 = t;
        t = t_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(t_37), s_37);
        r_2 = t;
        t = SSLsetAnnotations(r_2, r_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_21, o_37);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm q_38 = NULL,u_38 = NULL,n_19 = NULL;
  q_38 = t;
  t = SSL_explode_term(q_38);
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_21 = ATgetArgument(t, 1);
        if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
          {
            u_38 = ATgetFirst((ATermList) u_21);
            {
              ATerm v_21 = (ATerm) ATgetNext((ATermList) u_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(q_38);
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
          {
            ATerm y_21 = ATgetFirst((ATermList) x_21);
            ATerm e_22 = (ATerm) ATgetNext((ATermList) x_21);
            if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
              {
                n_19 = ATgetFirst((ATermList) e_22);
                {
                  ATerm i_22 = (ATerm) ATgetNext((ATermList) e_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, n_19), u_38));
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm a_40 = NULL,c_40 = NULL;
  if(match_cons(t, sym__2))
    {
      a_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, c_40), a_40));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, h_40), g_40));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm e_41 = NULL,l_41 = NULL;
  if(match_cons(t, sym__2))
    {
      e_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_22, (ATerm) ATinsert(ATinsert(ATempty, l_41), e_41));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_s_22;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  if(match_cons(t, sym__2))
    {
      n_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_22, (ATerm) ATinsert(ATinsert(ATempty, o_41), n_41));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm v_37 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  j_38 = t;
  if(match_cons(t, sym_Anno_2))
    {
      k_38 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
      {
        ATerm o_38 = NULL;
        t = l_38;
        t = foldr_2_0(w_2, x_2, t);
        o_38 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, k_38, o_38);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          k_38 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, k_38, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              k_38 = ATgetArgument(t, 0);
              {
                ATerm s_19 = NULL;
                t = k_38;
                {
                  ATerm t_22 = t;
                  int u_22 = stack_ptr;
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
                                  t = term_y_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_b_23;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_c_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(u_22);
                    }
                  else
                    {
                      t = t_22;
                      {
                        ATerm u_19 = NULL;
                        t = SSL_explode_string(k_38);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm d_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(d_23) != AT_INT) || (ATgetInt((ATermInt) d_23) != 39)))
                              _fail(t);
                            {
                              ATerm e_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                                {
                                  u_19 = ATgetFirst((ATermList) e_23);
                                  {
                                    ATerm f_23 = (ATerm) ATgetNext((ATermList) e_23);
                                    if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
                                      {
                                        ATerm g_23 = ATgetFirst((ATermList) f_23);
                                        if(((ATgetType(g_23) != AT_INT) || (ATgetInt((ATermInt) g_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm i_23 = (ATerm) ATgetNext((ATermList) f_23);
                                          if(((ATgetType(i_23) != AT_LIST) || !(ATisEmpty(i_23))))
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
                        t = u_19;
                      }
                    }
                }
                s_19 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, s_19);
              }
            }
          else
            {
              ATerm j_23 = t;
              int k_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      k_38 = ATgetArgument(t, 0);
                      {
                        ATerm m_23 = ATgetArgument(t, 1);
                      }
                      e_38 = ATgetArgument(t, 2);
                      v_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, k_38, e_38, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_37), (ATerm) ATempty));
                }
              else
                {
                  t = j_23;
                  {
                    ATerm n_23 = t;
                    int o_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            k_38 = ATgetArgument(t, 0);
                            {
                              ATerm p_23 = ATgetArgument(t, 1);
                            }
                            e_38 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, k_38, e_38, term_s_23);
                      }
                    else
                      {
                        t = n_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            k_38 = ATgetArgument(t, 0);
                            l_38 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, k_38, l_38, term_s_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                k_38 = ATgetArgument(t, 0);
                                l_38 = ATgetArgument(t, 1);
                                {
                                  static ATerm y_2 (ATerm t)
                                  {
                                    t = l_38;
                                    return(t);
                                  }
                                  t = k_38;
                                  t = foldr_2_0(y_2, b_3, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    k_38 = ATgetArgument(t, 0);
                                    t = k_38;
                                    t = foldr_2_0(c_3, d_3, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        k_38 = ATgetArgument(t, 0);
                                        t = k_38;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            b_38 = ATgetFirst((ATermList) t);
                                            c_38 = (ATerm) ATgetNext((ATermList) t);
                                            t = c_38;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm t_23 = t;
                                                int u_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = p_44(k_38, j_38, t);
                                                    LocalPopChoice(u_23);
                                                  }
                                                else
                                                  {
                                                    t = t_23;
                                                    t = b_38;
                                                  }
                                              }
                                            else
                                              {
                                                t = p_44(k_38, j_38, t);
                                              }
                                          }
                                        else
                                          {
                                            t = p_44(k_38, j_38, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            k_38 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, k_38));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                k_38 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, k_38));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    k_38 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, k_38));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        k_38 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, k_38));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            k_38 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_38), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                k_38 = ATgetArgument(t, 0);
                                                                l_38 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_38), l_38);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    k_38 = ATgetArgument(t, 0);
                                                                    l_38 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm g_3 (ATerm t)
                                                                      {
                                                                        t = l_38;
                                                                        return(t);
                                                                      }
                                                                      t = k_38;
                                                                      t = foldr_2_0(g_3, h_3, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        k_38 = ATgetArgument(t, 0);
                                                                        t = k_38;
                                                                        t = foldr_2_0(y_3, z_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            k_38 = ATgetArgument(t, 0);
                                                                            l_38 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_p_21, (ATerm) ATinsert(CheckATermList(l_38), k_38));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                k_38 = ATgetArgument(t, 0);
                                                                                t = k_38;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    b_38 = ATgetFirst((ATermList) t);
                                                                                    c_38 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = c_38;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm v_23 = t;
                                                                                        int w_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = q_44(k_38, j_38, t);
                                                                                            LocalPopChoice(w_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_23;
                                                                                            t = b_38;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_44(k_38, j_38, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_44(k_38, j_38, t);
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
                                                                                        k_38 = ATgetArgument(t, 0);
                                                                                        l_38 = ATgetArgument(t, 1);
                                                                                        t = l_38;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            d_38 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_z_23, (ATerm) ATinsert(ATinsert(ATempty, d_38), k_38));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            k_38 = ATgetArgument(t, 0);
                                                                                            t = k_38;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                k_38 = ATgetArgument(t, 0);
                                                                                                l_38 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, k_38, l_38, term_b_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    k_38 = ATgetArgument(t, 0);
                                                                                                    l_38 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, k_38, l_38, term_b_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        k_38 = ATgetArgument(t, 0);
                                                                                                        l_38 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, k_38, (ATerm)ATempty, l_38);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            k_38 = ATgetArgument(t, 0);
                                                                                                            l_38 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, l_38, k_38);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                k_38 = ATgetArgument(t, 0);
                                                                                                                l_38 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, k_38, l_38, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    k_38 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, k_38, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        k_38 = ATgetArgument(t, 0);
                                                                                                                        l_38 = ATgetArgument(t, 1);
                                                                                                                        e_38 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_38, l_38, (ATerm)ATempty, e_38);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            k_38 = ATgetArgument(t, 0);
                                                                                                                            l_38 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_38, (ATerm)ATempty, (ATerm)ATempty, l_38);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                k_38 = ATgetArgument(t, 0);
                                                                                                                                l_38 = ATgetArgument(t, 1);
                                                                                                                                e_38 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, k_38, l_38, (ATerm)ATempty, e_38);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    k_38 = ATgetArgument(t, 0);
                                                                                                                                    l_38 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, k_38, (ATerm)ATempty, (ATerm)ATempty, l_38);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        k_38 = ATgetArgument(t, 0);
                                                                                                                                        l_38 = ATgetArgument(t, 1);
                                                                                                                                        e_38 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_38, l_38, (ATerm)ATempty, e_38);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            k_38 = ATgetArgument(t, 0);
                                                                                                                                            l_38 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, k_38, (ATerm)ATempty, (ATerm)ATempty, l_38);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm c_24 = ATgetArgument(t, 0);
                                                                                                                                                l_38 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, l_38);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm b_45 = NULL,f_45 = NULL,g_45 = NULL;
  f_45 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      g_45 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
      {
        ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
        t = f_45;
        t = new_0_0(t);
        l_45 = t;
        t = new_0_0(t);
        m_45 = t;
        t = new_0_0(t);
        n_45 = t;
        t = new_0_0(t);
        o_45 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_45), n_45), m_45), l_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, l_45), (ATerm) ATmakeAppl(sym_Var_1, n_45))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, g_45, (ATerm)ATmakeAppl(sym_Var_1, l_45), (ATerm) ATmakeAppl(sym_Var_1, m_45)), (ATerm) ATmakeAppl(sym_BAM_3, b_45, (ATerm)ATmakeAppl(sym_Var_1, n_45), (ATerm) ATmakeAppl(sym_Var_1, o_45)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_45)), (ATerm) ATmakeAppl(sym_Var_1, m_45))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          g_45 = ATgetArgument(t, 0);
          {
            ATerm p_45 = NULL,t_45 = NULL,w_45 = NULL,b_46 = NULL;
            t = f_45;
            t = new_0_0(t);
            w_45 = t;
            t = g_45;
            {
              static ATerm c_4 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((p_45 != NULL) && (p_45 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      p_45 = ATgetArgument(t, 0);
                    if(((t_45 != NULL) && (t_45 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      t_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, w_45);
                return(t);
              }
              t = oncetd_1_0(c_4, t);
            }
            b_46 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_45)), not_null(p_45))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_45)), (ATerm) ATmakeAppl(sym_Build_1, b_46))));
          }
        }
      else
        {
          ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,q_46 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              g_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_45;
          t = new_0_0(t);
          g_46 = t;
          t = new_0_0(t);
          h_46 = t;
          t = g_45;
          {
            static ATerm d_4 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_46 != NULL) && (e_46 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_46 = ATgetArgument(t, 0);
                  if(((f_46 != NULL) && (f_46 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    f_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_46);
              return(t);
            }
            t = oncetd_1_0(d_4, t);
          }
          q_46 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_46), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_46)), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_46))))), (ATerm)ATmakeAppl(sym_Var_1, g_46), (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_46)), not_null(e_46)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm y_46 = NULL,b_47 = NULL;
  y_46 = t;
  if(match_cons(t, sym_Match_1))
    {
      b_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
        t = y_46;
        t = new_0_0(t);
        f_47 = t;
        t = b_47;
        {
          static ATerm e_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((d_47 != NULL) && (d_47 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_47 = ATgetArgument(t, 0);
                if(((e_47 != NULL) && (e_47 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_47 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_47), d_47);
            return(t);
          }
          t = pat_td_1_0(e_4, t);
        }
        g_47 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_47), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_47))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_47))))));
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
              t = y_46;
              t = new_0_0(t);
              n_47 = t;
              t = b_47;
              {
                static ATerm g_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_47 != NULL) && (m_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_47);
                  return(t);
                }
                t = pat_td_1_0(g_4, t);
              }
              o_47 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_47)), not_null(m_47))));
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL;
                t = y_46;
                t = new_0_0(t);
                s_47 = t;
                t = b_47;
                {
                  static ATerm h_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((r_47 != NULL) && (r_47 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          r_47 = ATgetArgument(t, 0);
                        if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_47 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_47);
                    return(t);
                  }
                  t = pat_td_1_0(h_4, t);
                }
                t_47 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_47)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_47)), not_null(r_47)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm v_149 (ATerm), ATerm t)
{
  ATerm l_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_149(t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = l_24;
      {
        ATerm o_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
        w_52 = t;
        if(match_cons(t, sym_Op_2))
          {
            x_52 = ATgetArgument(t, 0);
            y_52 = ATgetArgument(t, 1);
            {
              ATerm h_20 = NULL,o_20 = NULL,p_3 = NULL;
              t = SSLgetAnnotations(w_52);
              h_20 = t;
              t = y_52;
              {
                static ATerm n_4 (ATerm t)
                {
                  t = pat_td_1_0(v_149, t);
                  return(t);
                }
                t = fetch_1_0(n_4, t);
              }
              o_20 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, x_52, o_20);
              p_3 = t;
              t = SSLsetAnnotations(p_3, h_20);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                x_52 = ATgetArgument(t, 0);
                y_52 = ATgetArgument(t, 1);
                {
                  ATerm u_24 = t;
                  int v_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_21 = NULL,r_21 = NULL,k_4 = NULL;
                      t = SSLgetAnnotations(w_52);
                      o_21 = t;
                      t = y_52;
                      t = pat_td_1_0(v_149, t);
                      r_21 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, x_52, r_21);
                      k_4 = t;
                      t = SSLsetAnnotations(k_4, o_21);
                      LocalPopChoice(v_24);
                    }
                  else
                    {
                      t = u_24;
                      {
                        ATerm d_22 = NULL,l_22 = NULL,l_4 = NULL;
                        t = SSLgetAnnotations(w_52);
                        d_22 = t;
                        t = x_52;
                        t = pat_td_1_0(v_149, t);
                        l_22 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, l_22, y_52);
                        l_4 = t;
                        t = SSLsetAnnotations(l_4, d_22);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    x_52 = ATgetArgument(t, 0);
                    y_52 = ATgetArgument(t, 1);
                    o_52 = ATgetArgument(t, 2);
                    {
                      ATerm x_22 = NULL,h_23 = NULL,m_4 = NULL;
                      t = SSLgetAnnotations(w_52);
                      x_22 = t;
                      t = o_52;
                      {
                        static ATerm q_4 (ATerm t)
                        {
                          t = pat_td_1_0(v_149, t);
                          return(t);
                        }
                        t = fetch_1_0(q_4, t);
                      }
                      h_23 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, x_52, y_52, h_23);
                      m_4 = t;
                      t = SSLsetAnnotations(m_4, x_22);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        x_52 = ATgetArgument(t, 0);
                        y_52 = ATgetArgument(t, 1);
                        o_52 = ATgetArgument(t, 2);
                        {
                          ATerm t_24 = NULL,a_25 = NULL,o_4 = NULL;
                          t = SSLgetAnnotations(w_52);
                          t_24 = t;
                          t = o_52;
                          {
                            static ATerm r_4 (ATerm t)
                            {
                              t = pat_td_1_0(v_149, t);
                              return(t);
                            }
                            t = fetch_1_0(r_4, t);
                          }
                          a_25 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, x_52, y_52, a_25);
                          o_4 = t;
                          t = SSLsetAnnotations(o_4, t_24);
                        }
                      }
                    else
                      {
                        ATerm o_25 = NULL,u_25 = NULL,p_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            x_52 = ATgetArgument(t, 0);
                            y_52 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_52);
                        o_25 = t;
                        t = y_52;
                        t = pat_td_1_0(v_149, t);
                        u_25 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, x_52, u_25);
                        p_4 = t;
                        t = SSLsetAnnotations(p_4, o_25);
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
  ATerm g_53 = NULL,h_53 = NULL;
  g_53 = t;
  if(match_cons(t, sym_Build_1))
    {
      h_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_24 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_53 = NULL,k_53 = NULL,p_53 = NULL,q_53 = NULL;
        t = g_53;
        t = new_0_0(t);
        p_53 = t;
        t = h_53;
        {
          static ATerm s_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((j_53 != NULL) && (j_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_53 = ATgetArgument(t, 0);
                if(((k_53 != NULL) && (k_53 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_53 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, p_53);
            return(t);
          }
          t = pat_td_1_0(s_4, t);
        }
        q_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_53)), not_null(j_53))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_53)))), (ATerm) ATmakeAppl(sym_Build_1, q_53)));
        LocalPopChoice(b_25);
      }
    else
      {
        t = w_24;
        {
          ATerm d_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_53 = NULL,t_53 = NULL,u_53 = NULL;
              t = g_53;
              t = new_0_0(t);
              t_53 = t;
              t = h_53;
              {
                static ATerm t_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_53 != NULL) && (r_53 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, t_53);
                  return(t);
                }
                t = pat_td_1_0(t_4, t);
              }
              u_53 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_53), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_53)))), (ATerm) ATmakeAppl(sym_Build_1, u_53)));
              LocalPopChoice(f_25);
            }
          else
            {
              t = d_25;
              {
                ATerm a_54 = NULL,b_54 = NULL,d_54 = NULL,e_54 = NULL;
                t = g_53;
                t = new_0_0(t);
                d_54 = t;
                t = h_53;
                {
                  static ATerm u_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((a_54 != NULL) && (a_54 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          a_54 = ATgetArgument(t, 0);
                        if(((b_54 != NULL) && (b_54 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_54 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_54);
                    return(t);
                  }
                  t = pat_td_1_0(u_4, t);
                }
                e_54 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_54), not_null(b_54), (ATerm) ATmakeAppl(sym_Var_1, d_54))), (ATerm) ATmakeAppl(sym_Build_1, e_54)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,n_54 = NULL,p_54 = NULL,w_54 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      p_54 = ATgetArgument(t, 0);
      w_54 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, p_54, w_54);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          p_54 = ATgetArgument(t, 0);
          t = p_54;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_54 = ATgetFirst((ATermList) t);
              k_54 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, j_54, (ATerm) ATmakeAppl(sym_LChoices_1, k_54));
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
          if(match_cons(t, sym_Choices_1))
            {
              p_54 = ATgetArgument(t, 0);
              t = p_54;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_54 = ATgetFirst((ATermList) t);
                  k_54 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, j_54, (ATerm) ATmakeAppl(sym_Choices_1, k_54));
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
              if(match_cons(t, sym_Seqs_1))
                {
                  p_54 = ATgetArgument(t, 0);
                  t = p_54;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_54 = ATgetFirst((ATermList) t);
                      k_54 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_54, (ATerm) ATmakeAppl(sym_Seqs_1, k_54));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_b_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      p_54 = ATgetArgument(t, 0);
                      w_54 = ATgetArgument(t, 1);
                      n_54 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, w_54, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, n_54), p_54)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          p_54 = ATgetArgument(t, 0);
                          w_54 = ATgetArgument(t, 1);
                          n_54 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, n_54)), p_54), (ATerm) ATmakeAppl(sym_Build_1, w_54)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              p_54 = ATgetArgument(t, 0);
                              w_54 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_54, (ATerm) ATmakeAppl(sym_Match_1, w_54));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  p_54 = ATgetArgument(t, 0);
                                  w_54 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_54), w_54);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      p_54 = ATgetArgument(t, 0);
                                      w_54 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_54), p_54);
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
static ATerm v_4 (ATerm t)
{
  ATerm i_25 = t;
  if((PushChoice() == 0))
    {
      ATerm f_57 = NULL,g_57 = NULL,i_57 = NULL,e_5 = NULL;
      i_57 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_57);
      f_57 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_57);
      e_5 = t;
      t = SSLsetAnnotations(e_5, f_57);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_25;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_25;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_57 = ATgetFirst((ATermList) t);
      k_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_57, k_57);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,c_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_25 = ATgetArgument(t, 0);
      if(match_cons(l_25, sym__2))
        {
          l_57 = ATgetArgument(l_25, 0);
          m_57 = ATgetArgument(l_25, 1);
        }
      else
        _fail(t);
      {
        ATerm m_25 = ATgetArgument(t, 1);
        if(match_cons(m_25, sym__2))
          {
            n_57 = ATgetArgument(m_25, 0);
            c_58 = ATgetArgument(m_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_57), l_57), (ATerm) ATinsert(CheckATermList(c_58), m_57));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_25;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_58 = ATgetFirst((ATermList) t);
      h_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_58, h_58);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,o_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if(match_cons(n_25, sym__2))
        {
          j_58 = ATgetArgument(n_25, 0);
          k_58 = ATgetArgument(n_25, 1);
        }
      else
        _fail(t);
      {
        ATerm p_25 = ATgetArgument(t, 1);
        if(match_cons(p_25, sym__2))
          {
            l_58 = ATgetArgument(p_25, 0);
            o_58 = ATgetArgument(p_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_58), j_58), (ATerm) ATinsert(CheckATermList(o_58), k_58));
  return(t);
}
static ATerm h_10 (ATerm v_86, ATerm w_86, ATerm x_86, ATerm t)
{
  ATerm u_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,p_5 = NULL;
  t = x_86;
  t = fetch_1_0(v_4, t);
  t = x_86;
  t = genzip_4_0(a_5, b_5, d_5, LiftPrimArg_0_0, t);
  e_57 = t;
  if(match_cons(t, sym__2))
    {
      a_57 = ATgetArgument(t, 0);
      b_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_57);
  z_56 = t;
  t = a_57;
  t = concat_0_0(t);
  c_57 = t;
  t = b_57;
  t = genzip_4_0(f_5, g_5, h_5, _id, t);
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_57, d_57);
  p_5 = t;
  t = SSLsetAnnotations(p_5, z_56);
  if(match_cons(t, sym__2))
    {
      u_56 = ATgetArgument(t, 0);
      {
        ATerm q_25 = ATgetArgument(t, 1);
        if(match_cons(q_25, sym__2))
          {
            x_56 = ATgetArgument(q_25, 0);
            y_56 = ATgetArgument(q_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_56, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_56), (ATerm) ATmakeAppl(sym_CallT_3, v_86, w_86, y_56)));
  return(t);
}
static ATerm g_59 (ATerm s_58, ATerm t)
{
  ATerm u_58 = NULL;
  t = s_58;
  {
    ATerm r_25 = t;
    if((PushChoice() == 0))
      {
        ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,s_5 = NULL;
        y_58 = t;
        if(match_cons(t, sym_Var_1))
          {
            x_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_58);
        w_58 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, x_58);
        s_5 = t;
        t = SSLsetAnnotations(s_5, w_58);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_25;
      }
  }
  t = new_0_0(t);
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_58), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_58), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_58)))), (ATerm) ATmakeAppl(sym_Var_1, u_58)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm z_58 = NULL,e_59 = NULL;
  z_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_59 = ATgetArgument(t, 0);
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_59(z_58, t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_b_24, (ATerm) ATmakeAppl(sym_Var_1, e_59)));
          }
      }
    }
  else
    {
      t = g_59(z_58, t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm v_25 = t;
  if((PushChoice() == 0))
    {
      ATerm m_27 = NULL,o_27 = NULL,p_27 = NULL,u_5 = NULL;
      p_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_27);
      m_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_27);
      u_5 = t;
      t = SSLsetAnnotations(u_5, m_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_25;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_25;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm q_27 = NULL,y_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      y_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_27, y_27);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm b_28 = NULL,g_28 = NULL,h_28 = NULL,l_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_25 = ATgetArgument(t, 0);
      if(match_cons(w_25, sym__2))
        {
          b_28 = ATgetArgument(w_25, 0);
          g_28 = ATgetArgument(w_25, 1);
        }
      else
        _fail(t);
      {
        ATerm x_25 = ATgetArgument(t, 1);
        if(match_cons(x_25, sym__2))
          {
            h_28 = ATgetArgument(x_25, 0);
            l_28 = ATgetArgument(x_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_28), b_28), (ATerm) ATinsert(CheckATermList(l_28), g_28));
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_25;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm p_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_25 = ATgetArgument(t, 0);
      if(match_cons(y_25, sym__2))
        {
          p_28 = ATgetArgument(y_25, 0);
          r_28 = ATgetArgument(y_25, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_28), p_28), (ATerm) ATinsert(CheckATermList(t_28), r_28));
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm a_26 = t;
  if((PushChoice() == 0))
    {
      ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,w_5 = NULL;
      c_30 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_30);
      a_30 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_30);
      w_5 = t;
      t = SSLsetAnnotations(w_5, a_30);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_26;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_25;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_30 = ATgetFirst((ATermList) t);
      e_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_30, e_30);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,o_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if(match_cons(b_26, sym__2))
        {
          f_30 = ATgetArgument(b_26, 0);
          g_30 = ATgetArgument(b_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            h_30 = ATgetArgument(c_26, 0);
            o_30 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_30), f_30), (ATerm) ATinsert(CheckATermList(o_30), g_30));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_25;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm t_30 = NULL,c_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_30 = ATgetFirst((ATermList) t);
      c_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_30, c_31);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,i_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym__2))
        {
          d_31 = ATgetArgument(d_26, 0);
          e_31 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym__2))
          {
            f_31 = ATgetArgument(e_26, 0);
            i_31 = ATgetArgument(e_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_31), d_31), (ATerm) ATinsert(CheckATermList(i_31), e_31));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm l_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL;
  n_63 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      o_63 = ATgetArgument(t, 0);
      p_63 = ATgetArgument(t, 1);
      l_63 = ATgetArgument(t, 2);
      {
        ATerm z_26 = NULL,a_27 = NULL,e_27 = NULL,f_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,v_5 = NULL;
        t = l_63;
        t = fetch_1_0(k_5, t);
        t = l_63;
        t = genzip_4_0(l_5, m_5, n_5, LiftPrimArg_0_0, t);
        l_27 = t;
        if(match_cons(t, sym__2))
          {
            h_27 = ATgetArgument(t, 0);
            i_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_27);
        f_27 = t;
        t = h_27;
        t = concat_0_0(t);
        j_27 = t;
        t = i_27;
        t = genzip_4_0(o_5, q_5, r_5, _id, t);
        k_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_27, k_27);
        v_5 = t;
        t = SSLsetAnnotations(v_5, f_27);
        if(match_cons(t, sym__2))
          {
            z_26 = ATgetArgument(t, 0);
            {
              ATerm f_26 = ATgetArgument(t, 1);
              if(match_cons(f_26, sym__2))
                {
                  a_27 = ATgetArgument(f_26, 0);
                  e_27 = ATgetArgument(f_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_26, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_27), (ATerm) ATmakeAppl(sym_PrimT_3, o_63, p_63, e_27)));
      }
    }
  else
    {
      ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,r_29 = NULL,s_29 = NULL,u_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,x_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          o_63 = ATgetArgument(t, 0);
          p_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_63;
      t = fetch_1_0(t_5, t);
      t = p_63;
      t = genzip_4_0(y_5, z_5, b_6, LiftPrimArg_0_0, t);
      z_29 = t;
      if(match_cons(t, sym__2))
        {
          s_29 = ATgetArgument(t, 0);
          u_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_29);
      r_29 = t;
      t = s_29;
      t = concat_0_0(t);
      x_29 = t;
      t = u_29;
      t = genzip_4_0(c_6, e_6, f_6, _id, t);
      y_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_29, y_29);
      x_5 = t;
      t = SSLsetAnnotations(x_5, r_29);
      if(match_cons(t, sym__2))
        {
          n_29 = ATgetArgument(t, 0);
          {
            ATerm g_26 = ATgetArgument(t, 1);
            if(match_cons(g_26, sym__2))
              {
                o_29 = ATgetArgument(g_26, 0);
                p_29 = ATgetArgument(g_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, n_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_29), (ATerm) ATmakeAppl(sym_PrimT_3, o_63, (ATerm)ATempty, p_29)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm t)
{
  static ATerm s_63 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_122(t);
        t = s_63(t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = h_122(t);
      }
    return(t);
  }
  t = s_63(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
  r_64 = t;
  if(match_cons(t, sym_Con_3))
    {
      o_64 = ATgetArgument(t, 0);
      p_64 = ATgetArgument(t, 1);
      q_64 = ATgetArgument(t, 2);
      {
        ATerm a_32 = NULL,h_6 = NULL;
        t = SSLgetAnnotations(r_64);
        a_32 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, o_64, p_64, q_64);
        h_6 = t;
        t = SSLsetAnnotations(h_6, a_32);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = r_64;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm j_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(g_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_26;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,y_65 = NULL,a_66 = NULL;
  w_65 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_65 = ATgetArgument(t, 0);
      a_66 = ATgetArgument(t, 1);
      v_65 = ATgetArgument(t, 2);
      {
        ATerm h_33 = NULL,m_6 = NULL;
        t = SSLgetAnnotations(w_65);
        h_33 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_65, a_66, v_65);
        m_6 = t;
        t = SSLsetAnnotations(m_6, h_33);
      }
    }
  else
    {
      ATerm w_34 = NULL,v_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          y_65 = ATgetArgument(t, 0);
          a_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_65);
      w_34 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, y_65, a_66);
      v_6 = t;
      t = SSLsetAnnotations(v_6, w_34);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm k_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_26;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,n_66 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      i_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_66;
  if(match_cons(t, sym_StratRule_3))
    {
      j_66 = ATgetArgument(t, 0);
      k_66 = ATgetArgument(t, 1);
      n_66 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_66), (ATerm) ATmakeAppl(sym_Where_1, n_66)), j_66));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          j_66 = ATgetArgument(t, 0);
          k_66 = ATgetArgument(t, 1);
          n_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_66;
      t = pureterm_0_0(t);
      t = k_66;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, k_66)), (ATerm) ATmakeAppl(sym_Where_1, n_66)), (ATerm) ATmakeAppl(sym_Match_1, j_66)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_117 (ATerm), ATerm t)
{
  static ATerm w_66 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_117(t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = SRTS_one(w_66, t);
      }
    return(t);
  }
  t = w_66(t);
  return(t);
}
static ATerm l_10 (ATerm i_82, ATerm j_82, ATerm k_82, ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
  t = new_0_0(t);
  c_67 = t;
  t = i_82;
  {
    static ATerm j_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm n_26 = ATgetArgument(t, 0);
          if(match_cons(n_26, sym_Var_1))
            {
              if(((a_67 != NULL) && (a_67 != ATgetArgument(n_26, 0))))
                _fail(ATgetArgument(n_26, 0));
              else
                a_67 = ATgetArgument(n_26, 0);
            }
          else
            _fail(t);
          if(((y_66 != NULL) && (y_66 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_66 = ATgetArgument(t, 1);
          {
            ATerm o_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, a_67);
      return(t);
    }
    t = oncetd_1_0(j_6, t);
  }
  d_67 = t;
  t = j_82;
  {
    static ATerm k_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_26 = ATgetArgument(t, 0);
          if(match_cons(p_26, sym_Var_1))
            {
              if(((a_67 != NULL) && (a_67 != ATgetArgument(p_26, 0))))
                _fail(ATgetArgument(p_26, 0));
              else
                a_67 = ATgetArgument(p_26, 0);
            }
          else
            _fail(t);
          if(((z_66 != NULL) && (z_66 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_66 = ATgetArgument(t, 1);
          {
            ATerm q_26 = ATgetArgument(t, 2);
            if(match_cons(q_26, sym_CallT_3))
              {
                if(((x_66 != NULL) && (x_66 != ATgetArgument(q_26, 0))))
                  _fail(ATgetArgument(q_26, 0));
                else
                  x_66 = ATgetArgument(q_26, 0);
                {
                  ATerm r_26 = ATgetArgument(q_26, 1);
                  if(((ATgetType(r_26) != AT_LIST) || !(ATisEmpty(r_26))))
                    _fail(t);
                }
                {
                  ATerm s_26 = ATgetArgument(q_26, 2);
                  if(((ATgetType(s_26) != AT_LIST) || !(ATisEmpty(s_26))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_67);
      return(t);
    }
    t = oncetd_1_0(k_6, t);
  }
  e_67 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_67), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_67, e_67, (ATerm) ATmakeAppl(sym_Seq_2, k_82, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(x_66), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_66), not_null(z_66), term_b_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_67)), (ATerm) ATmakeAppl(sym_Var_1, c_67))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_26 = t;
      int w_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
          t_69 = t;
          if(match_cons(t, sym_SRule_1))
            {
              u_69 = ATgetArgument(t, 0);
              t = u_69;
              if(match_cons(t, sym_Rule_3))
                {
                  q_69 = ATgetArgument(t, 0);
                  r_69 = ATgetArgument(t, 1);
                  s_69 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_69;
              t = l_10(q_69, r_69, s_69, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm o_35 = NULL,v_35 = NULL,e_7 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  u_69 = ATgetArgument(t, 0);
                  v_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_69);
              o_35 = t;
              t = v_69;
              t = desugarRule_0_0(t);
              v_35 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, u_69, v_35);
              e_7 = t;
              t = SSLsetAnnotations(e_7, o_35);
            }
          LocalPopChoice(w_26);
        }
      else
        {
          t = v_26;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    t = topdown_1_0(l_116, t);
    return(t);
  }
  t = l_116(t);
  t = SRTS_all(n_6, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
    }
  t = repeat_2_0(r_6, _id, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm d_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = d_27;
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
            b_71 = t;
            if(match_cons(t, sym_CallT_3))
              {
                l_71 = ATgetArgument(t, 0);
                m_71 = ATgetArgument(t, 1);
                n_71 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_71;
            t = h_10(l_71, m_71, n_71, t);
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            {
              ATerm a_28 = t;
              int d_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(d_28);
                }
              else
                {
                  t = a_28;
                  {
                    ATerm u_28 = t;
                    int v_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
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
                              ATerm a_29 = t;
                              int b_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_71 = NULL,t_71 = NULL,v_71 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_71 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_71;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      t_71 = ATgetArgument(t, 0);
                                      t = t_71;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          t_71 = ATgetArgument(t, 0);
                                          v_71 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, t_71, v_71);
                                    }
                                  LocalPopChoice(b_29);
                                }
                              else
                                {
                                  t = a_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(x_28);
                            }
                          else
                            {
                              t = w_28;
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
  t = topdown_1_0(o_6, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL;
  n_73 = t;
  t = SSL_explode_term(n_73);
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_29 = ATgetArgument(t, 1);
        if(((ATgetType(m_29) == AT_LIST) && !(ATisEmpty(m_29))))
          {
            m_73 = ATgetFirst((ATermList) m_29);
            {
              ATerm q_29 = (ATerm) ATgetNext((ATermList) m_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_73;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  h_36 = t;
  t = SSL_explode_term(h_36);
  if(match_cons(t, sym__2))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_29 = ATgetArgument(t, 1);
        if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
          {
            ATerm q_30 = ATgetFirst((ATermList) v_29);
            f_36 = (ATerm) ATgetNext((ATermList) v_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_k_21;
  g_36 = t;
  t = SSL_mkterm(g_36, f_36);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm n_120 (ATerm), ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL;
  static ATerm q_73 (ATerm t)
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_72 = NULL,c_73 = NULL,i_73 = NULL;
        z_72 = t;
        t = map_1_0(s_6, t);
        t = n_120(t);
        c_73 = t;
        t = z_72;
        t = map_1_0(t_6, t);
        t = q_73(t);
        i_73 = t;
        t = (ATerm) ATinsert(CheckATermList(i_73), c_73);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = map_1_0(u_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = q_73(t);
  w_72 = t;
  t = term_k_21;
  v_72 = t;
  t = SSL_mkterm(v_72, w_72);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm t_73 = NULL;
  t_73 = t;
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_73 = NULL,x_73 = NULL,y_73 = NULL;
        t = t_73;
        t = new_0_0(t);
        v_73 = t;
        t = new_0_0(t);
        x_73 = t;
        t = new_0_0(t);
        y_73 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_73), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, t_73), (ATerm) ATmakeAppl(sym_Var_1, x_73))), (ATerm) ATmakeAppl(sym_Var_1, y_73)), (ATerm)ATmakeAppl(sym_VarDec_2, v_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_30), term_y_30)), x_73, (ATerm)ATmakeAppl(sym_Var_1, x_73), y_73, (ATerm) ATmakeAppl(sym_Var_1, y_73));
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        {
          ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL;
          t = t_73;
          t = new_0_0(t);
          c_74 = t;
          t = new_0_0(t);
          d_74 = t;
          t = new_0_0(t);
          e_74 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_74), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, t_73), (ATerm) ATmakeAppl(sym_Var_1, d_74))), (ATerm) ATmakeAppl(sym_Var_1, e_74)), (ATerm)ATmakeAppl(sym_VarDec_2, c_74, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_30), term_y_30)), d_74, (ATerm)ATmakeAppl(sym_Var_1, d_74), e_74, (ATerm) ATmakeAppl(sym_Var_1, e_74));
        }
      }
  }
  return(t);
}
static ATerm m_10 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_42, n_42);
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      t = SSL_subtr(m_42, n_42);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  if(match_cons(t, sym__2))
    {
      f_74 = ATgetArgument(t, 0);
      g_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_74, g_74, (ATerm) ATempty);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm h_74 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if(((ATgetType(b_31) != AT_INT) || (ATgetInt((ATermInt) b_31) != 0)))
        _fail(t);
      {
        ATerm g_31 = ATgetArgument(t, 1);
      }
      h_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_74;
  return(t);
}
ATerm copy_1_0 (ATerm r_136 (ATerm), ATerm t)
{
  static ATerm y_6 (ATerm t)
  {
    ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,q_74 = NULL;
    if(match_cons(t, sym__3))
      {
        j_74 = ATgetArgument(t, 0);
        k_74 = ATgetArgument(t, 1);
        l_74 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, j_74, term_j_16);
    t = geq_0_0(t);
    t = term_j_16;
    q_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_74, term_j_16);
    t = m_10(j_74, q_74, t);
    m_74 = t;
    t = k_74;
    t = r_136(t);
    n_74 = t;
    t = (ATerm) ATmakeAppl(sym__3, m_74, k_74, (ATerm) ATinsert(CheckATermList(l_74), n_74));
    return(t);
  }
  t = for_3_0(w_6, x_6, y_6, t);
  return(t);
}
static ATerm n_10 (ATerm c_69, ATerm d_69, ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
  t = new_0_0(t);
  r_74 = t;
  t = new_0_0(t);
  s_74 = t;
  t = new_0_0(t);
  t_74 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_74), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_69)), (ATerm) ATmakeAppl(sym_Var_1, s_74))), (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_69)), (ATerm) ATmakeAppl(sym_Var_1, t_74)))), (ATerm)ATmakeAppl(sym_VarDec_2, r_74, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_30), term_y_30)), s_74, (ATerm)ATmakeAppl(sym_Var_1, s_74), t_74, (ATerm) ATmakeAppl(sym_Var_1, t_74));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_74 = ATgetFirst((ATermList) t);
      y_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_74;
    }
  else
    {
      t = y_74;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm i_79 (ATerm y_75, ATerm b_76, ATerm d_76, ATerm e_76, ATerm t)
{
  ATerm i_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,r_76 = NULL,u_76 = NULL,x_76 = NULL,y_76 = NULL,b_77 = NULL,d_77 = NULL,e_77 = NULL,i_77 = NULL;
  t = term_j_16;
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_76, term_j_16);
  t = r_11(b_76, i_77, t);
  e_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_77, term_d_16);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_76 = ATgetFirst((ATermList) t);
      l_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_76;
  t = last_0_0(t);
  i_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_76), k_76), l_76);
  t = genzip_4_0(z_6, a_7, c_7, d_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      m_76 = ATgetArgument(t, 0);
      r_76 = ATgetArgument(t, 1);
      u_76 = ATgetArgument(t, 2);
      x_76 = ATgetArgument(t, 3);
      y_76 = ATgetArgument(t, 4);
      b_77 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_76), u_76), l_76);
  t = concat_0_0(t);
  d_77 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, y_75, term_h_31), r_76, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(d_77), k_76), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_76)), (ATerm) ATmakeAppl(sym_Op_2, y_75, x_76))), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_76)), (ATerm) ATmakeAppl(sym_Op_2, y_75, b_77))), (ATerm) ATmakeAppl(sym_Seqs_1, m_76)))));
  return(t);
}
static ATerm j_79 (ATerm x_77, ATerm z_77, ATerm c_78, ATerm d_78, ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,u_78 = NULL;
  t = d_78;
  t = new_0_0(t);
  m_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_77, (ATerm) ATmakeAppl(sym_Var_1, m_78));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      n_78 = ATgetArgument(t, 0);
      o_78 = ATgetArgument(t, 1);
      p_78 = ATgetArgument(t, 2);
      q_78 = ATgetArgument(t, 3);
      r_78 = ATgetArgument(t, 4);
      s_78 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_78, r_78);
  t = conc_0_0(t);
  u_78 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, x_77, term_j_31), o_78, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(u_78), m_78), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_78)), (ATerm) ATmakeAppl(sym_Op_2, x_77, q_78))), (ATerm)ATmakeAppl(sym_Op_2, x_77, s_78), (ATerm) ATmakeAppl(sym_Seqs_1, n_78)))));
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      ATerm p_31 = ATgetArgument(t, 1);
      if(((ATgetType(p_31) != AT_LIST) || !(ATisEmpty(p_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,o_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_31 = ATgetArgument(t, 0);
      if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
        {
          j_77 = ATgetFirst((ATermList) q_31);
          k_77 = (ATerm) ATgetNext((ATermList) q_31);
        }
      else
        _fail(t);
      {
        ATerm r_31 = ATgetArgument(t, 1);
        if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
          {
            l_77 = ATgetFirst((ATermList) r_31);
            o_77 = (ATerm) ATgetNext((ATermList) r_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_77, l_77), (ATerm) ATmakeAppl(sym__2, k_77, o_77));
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL;
  if(match_cons(t, sym__2))
    {
      p_77 = ATgetArgument(t, 0);
      q_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_77), p_77);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm t_77 = NULL,v_77 = NULL;
  if(match_cons(t, sym__2))
    {
      t_77 = ATgetArgument(t, 0);
      v_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(t_77, v_77, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
  w_78 = t;
  if(match_cons(t, sym__3))
    {
      x_78 = ATgetArgument(t, 0);
      y_78 = ATgetArgument(t, 1);
      z_78 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_78;
  if(match_string(t, "T"))
    {
      t = z_78;
      if(match_cons(t, sym__2))
        {
          a_79 = ATgetArgument(t, 0);
          b_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_79;
      if(match_int(t, 0))
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_79(x_78, a_79, b_79, w_78, t);
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              {
                ATerm f_79 = NULL;
                t = w_78;
                t = new_0_0(t);
                f_79 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, x_78, term_h_31), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_79), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_79)), (ATerm) ATmakeAppl(sym_Op_2, x_78, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_79)), (ATerm) ATmakeAppl(sym_Op_2, x_78, (ATerm) ATempty))), term_b_24))));
              }
            }
        }
      else
        {
          t = i_79(x_78, a_79, b_79, w_78, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = z_78;
      if(match_cons(t, sym__2))
        {
          a_79 = ATgetArgument(t, 0);
          b_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_79(x_78, a_79, b_79, w_78, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_131 (ATerm), ATerm t)
{
  ATerm n_24 = NULL;
  static ATerm f_7 (ATerm t)
  {
    t = b_131(t);
    if(((n_24 != NULL) && (n_24 != t)))
      _fail(t);
    else
      n_24 = t;
    return(t);
  }
  t = fetch_1_0(f_7, t);
  t = not_null(n_24);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  t = term_g_16;
  q_24 = t;
  t = (ATerm) ATinsert(ATempty, term_u_31);
  r_24 = t;
  t = SSL_printnl(q_24, r_24);
  t = term_j_16;
  p_24 = t;
  t = SSL_exit(p_24);
  t = (ATerm) ATinsert(ATempty, term_u_31);
  return(t);
}
ATerm debug_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  s_24 = t;
  t = t_123(t);
  x_24 = t;
  t = term_g_16;
  y_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_24), x_24);
  z_24 = t;
  t = SSL_printnl(y_24, z_24);
  t = s_24;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  ATerm w_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm e_32 = ATgetArgument(t, 0);
          u_17 = ATgetArgument(t, 1);
          v_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(z_31);
      t = v_17;
      t = foldr_3_0(o_7, r_7, t_7, t);
      t = u_17;
      t = foldr_3_0(v_7, z_7, a_8, t);
    }
  else
    {
      t = w_31;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm f_32 = ATgetArgument(t, 0);
          u_17 = ATgetArgument(t, 1);
          v_17 = ATgetArgument(t, 2);
          {
            ATerm g_32 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_17;
      t = foldr_3_0(b_8, c_8, d_8, t);
      t = u_17;
      t = foldr_3_0(e_8, f_8, h_8, t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(z_17, a_18, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(b_18, c_18, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(h_18, i_18, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym__2))
    {
      k_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(k_18, l_18, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      ATerm k_32 = ATgetArgument(t, 1);
      ATerm n_32 = ATgetArgument(t, 2);
      ATerm p_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_25 = NULL;
      static ATerm g_7 (ATerm t)
      {
        ATerm h_25 = NULL,k_25 = NULL;
        h_25 = t;
        {
          ATerm w_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  k_25 = ATgetArgument(t, 0);
                  {
                    ATerm a_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm b_33 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(z_32);
              t = k_25;
              if(((e_25 != NULL) && (e_25 != t)))
                _fail(t);
              else
                e_25 = t;
              t = h_25;
            }
          else
            {
              t = w_32;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  k_25 = ATgetArgument(t, 0);
                  {
                    ATerm g_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm i_33 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm j_33 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = k_25;
              if(((e_25 != NULL) && (e_25 != t)))
                _fail(t);
              else
                e_25 = t;
              t = h_25;
            }
        }
        return(t);
      }
      t = fetch_1_0(g_7, t);
      {
        static ATerm j_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_25 = ATgetArgument(t, 0);
              {
                ATerm z_33 = ATgetArgument(t, 1);
              }
              {
                ATerm e_34 = ATgetArgument(t, 2);
              }
              {
                ATerm f_34 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_7, t);
      }
      t = not_null(e_25);
      t = debug_1_0(k_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm n_27 = NULL;
        n_27 = t;
        t = map_1_0(l_7, t);
        t = n_27;
        {
          ATerm g_34 = t;
          int i_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(j_8, t);
              LocalPopChoice(i_34);
            }
          else
            {
              t = g_34;
              {
                ATerm o_18 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_18 = ATgetFirst((ATermList) t);
                    {
                      ATerm j_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = o_18;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,u_18 = NULL;
  t_27 = t;
  t = SSL_explode_term(t_27);
  if(match_cons(t, sym__2))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_34 = ATgetArgument(t, 1);
        if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
          {
            u_27 = ATgetFirst((ATermList) n_34);
            {
              ATerm p_34 = (ATerm) ATgetNext((ATermList) n_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(t_27);
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_34 = ATgetArgument(t, 1);
        if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
          {
            ATerm x_34 = ATgetFirst((ATermList) s_34);
            ATerm y_34 = (ATerm) ATgetNext((ATermList) s_34);
            if(((ATgetType(y_34) == AT_LIST) && !(ATisEmpty(y_34))))
              {
                u_18 = ATgetFirst((ATermList) y_34);
                {
                  ATerm a_35 = (ATerm) ATgetNext((ATermList) y_34);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, u_27, u_18);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(m_8, p_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm d_118 (ATerm), ATerm t)
{
  static ATerm v_27 (ATerm t)
  {
    ATerm b_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_118(t);
        LocalPopChoice(g_35);
      }
    else
      {
        t = b_35;
        t = SRTS_all(v_27, t);
      }
    return(t);
  }
  t = v_27(t);
  return(t);
}
static ATerm z_9 (ATerm d_45, ATerm e_45, ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  x_27 = t;
  {
    ATerm h_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_45, e_45);
        t = v_11(d_45, e_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_35 = ATgetFirst((ATermList) t);
            w_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_35);
        {
          ATerm z_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, d_45, e_45, w_27);
          t = lookup_table_0_1(d_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_11(e_45, w_27, z_27, t);
          t = (ATerm) ATmakeAppl(sym__3, d_45, e_45, w_27);
        }
      }
    else
      {
        t = h_35;
        {
          ATerm c_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, d_45, e_45);
          t = lookup_table_0_1(d_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(e_45, c_28, t);
          t = (ATerm) ATmakeAppl(sym__2, d_45, e_45);
        }
      }
  }
  t = x_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm b_128 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,m_28 = NULL,q_28 = NULL;
  j_28 = t;
  t = b_128(t);
  i_28 = t;
  {
    ATerm n_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_28 = NULL;
        t = term_u_35;
        y_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_28, term_u_35);
        t = v_11(i_28, y_28, t);
        LocalPopChoice(p_35);
      }
    else
      {
        t = n_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_28 = ATgetFirst((ATermList) t);
      e_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, i_28, term_u_35, e_28);
  t = lookup_table_0_1(i_28, t);
  q_28 = t;
  t = term_u_35;
  k_28 = t;
  t = q_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(k_28, e_28, m_28, t);
  t = f_28;
  {
    static ATerm q_8 (ATerm t)
    {
      ATerm z_28 = NULL;
      z_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_28, z_28);
      t = z_9(i_28, z_28, t);
      return(t);
    }
    t = map_1_0(q_8, t);
  }
  t = j_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_119(t);
      t = t_119(t);
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      t = t_119(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_128 (ATerm), ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  g_29 = t;
  t = a_128(t);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_29, term_u_35);
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_36 = ATgetArgument(t, 0);
            ATerm d_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_35;
        w_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_29, term_u_35);
        t = v_11(f_29, w_29, t);
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = (ATerm) ATempty;
      }
  }
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_29, term_u_35, (ATerm) ATinsert(CheckATermList(h_29), (ATerm) ATempty));
  t = lookup_table_0_1(f_29, t);
  l_29 = t;
  t = term_u_35;
  i_29 = t;
  t = (ATerm) ATinsert(CheckATermList(h_29), (ATerm) ATempty);
  j_29 = t;
  t = l_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(i_29, j_29, k_29, t);
  t = g_29;
  return(t);
}
ATerm scope_2_0 (ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t)
{
  static ATerm r_8 (ATerm t)
  {
    t = end_scope_1_0(c_128, t);
    return(t);
  }
  t = begin_scope_1_0(c_128, t);
  t = restore_always_2_0(d_128, r_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,p_30 = NULL;
  k_30 = t;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_30 = ATgetFirst((ATermList) t);
      p_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_30;
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
      {
        ATerm e_36 = t;
        int i_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_30;
            if((l_30 != t))
              {
                _fail(t);
              }
            t = j_30;
            LocalPopChoice(i_36);
          }
        else
          {
            t = e_36;
            t = (ATerm) ATmakeAppl(sym__2, l_30, p_30);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_30, p_30);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      if(((ATgetType(j_36) != AT_LIST) || !(ATisEmpty(j_36))))
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
static ATerm t_8 (ATerm t)
{
  ATerm y_31 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
        {
          y_31 = ATgetFirst((ATermList) m_36);
          b_32 = (ATerm) ATgetNext((ATermList) m_36);
        }
      else
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
          {
            c_32 = ATgetFirst((ATermList) n_36);
            d_32 = (ATerm) ATgetNext((ATermList) n_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_31, c_32), (ATerm) ATmakeAppl(sym__2, b_32, d_32));
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL;
  if(match_cons(t, sym__2))
    {
      h_32 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_32), h_32);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  l_31 = t;
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_36 = ATgetArgument(t, 0);
            ATerm s_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(q_36);
        t = l_31;
      }
    else
      {
        t = p_36;
        {
          ATerm x_31 = NULL;
          if(match_cons(t, sym__3))
            {
              m_31 = ATgetArgument(t, 0);
              n_31 = ATgetArgument(t, 1);
              o_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_31, n_31);
          t = genzip_4_0(s_8, t_8, u_8, _id, t);
          x_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_31, o_31);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL;
  static ATerm x_8 (ATerm t)
  {
    ATerm a_19 = NULL;
    t = u_115(t);
    a_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_19, not_null(m_32));
    t = lookup_0_0(t);
    t = v_115(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((m_32 != NULL) && (m_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_32;
  t = alltd_1_0(x_8, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm u_32 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      u_32 = ATgetArgument(t, 0);
      {
        ATerm t_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_32;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm v_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_32;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_36 = ATgetArgument(t, 0);
      if(((ATgetType(v_36) != AT_LIST) || !(ATisEmpty(v_36))))
        _fail(t);
      {
        ATerm w_36 = ATgetArgument(t, 1);
        if(((ATgetType(w_36) != AT_LIST) || !(ATisEmpty(w_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,c_33 = NULL,d_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if(((ATgetType(x_36) == AT_LIST) && !(ATisEmpty(x_36))))
        {
          x_32 = ATgetFirst((ATermList) x_36);
          y_32 = (ATerm) ATgetNext((ATermList) x_36);
        }
      else
        _fail(t);
      {
        ATerm y_36 = ATgetArgument(t, 1);
        if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
          {
            c_33 = ATgetFirst((ATermList) y_36);
            d_33 = (ATerm) ATgetNext((ATermList) y_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_32, c_33), (ATerm) ATmakeAppl(sym__2, y_32, d_33));
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL;
  if(match_cons(t, sym__2))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_33), e_33);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_36 = ATgetArgument(t, 0);
      if(match_cons(z_36, sym_VarDec_2))
        {
          k_33 = ATgetArgument(z_36, 0);
          {
            ATerm a_37 = ATgetArgument(z_36, 1);
          }
        }
      else
        _fail(t);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_33);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_37, l_33);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, k_33), (ATerm) ATmakeAppl(sym_Defined_2, term_d_37, l_33));
  t = d_11(j_9, n_33, o_33, t);
  t = m_33;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm p_33 = NULL,s_33 = NULL,h_19 = NULL;
  p_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm e_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_u_36;
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_36, p_33);
  t = h_11(h_19, p_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_37) != ATmakeSymbol("s_0", 0, ATtrue)))
        _fail(t);
      s_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_33;
  return(t);
}
static ATerm d_10 (ATerm c_71, ATerm d_71, ATerm h_71, ATerm e_71, ATerm g_71, ATerm t)
{
  ATerm o_32 = NULL,s_32 = NULL,t_32 = NULL;
  t = e_71;
  t = map_1_0(y_8, t);
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_32, d_71, g_71);
  t = substitute_2_0(z_8, _id, t);
  s_32 = t;
  {
    static ATerm e_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, h_71, c_71);
      t = genzip_4_0(f_9, g_9, h_9, i_9, t);
      t = s_32;
      t = alltd_1_0(o_9, t);
      if(((t_32 != NULL) && (t_32 != t)))
        _fail(t);
      else
        t_32 = t;
      return(t);
    }
    t = scope_2_0(b_9, e_9, t);
  }
  t = not_null(t_32);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm o_34 = NULL,r_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,h_7 = NULL;
  v_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_34);
  o_34 = t;
  t = r_34;
  t = new_0_0(t);
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_34, t_34);
  h_7 = t;
  t = SSLsetAnnotations(h_7, o_34);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm z_34 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,q_35 = NULL,i_7 = NULL;
  q_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_35 = ATgetArgument(t, 0);
      j_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_35);
  z_34 = t;
  t = i_35;
  t = new_0_0(t);
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_35, j_35);
  i_7 = t;
  t = SSLsetAnnotations(i_7, z_34);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm r_35 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_35 = ATgetArgument(t, 0);
      {
        ATerm l_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, r_35);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm s_35 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_35 = ATgetArgument(t, 0);
      {
        ATerm n_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, s_35);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm t_33 = NULL,x_33 = NULL,y_33 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,h_34 = NULL,k_34 = NULL,m_34 = NULL;
  d_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_37 = ATgetFirst((ATermList) t);
      if(match_cons(q_37, sym_SDefT_4))
        {
          t_33 = ATgetArgument(q_37, 0);
          x_33 = ATgetArgument(q_37, 1);
          y_33 = ATgetArgument(q_37, 2);
          {
            ATerm x_37 = ATgetArgument(q_37, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm w_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_33;
  t = map_1_0(p_9, t);
  b_34 = t;
  t = y_33;
  t = map_1_0(t_9, t);
  c_34 = t;
  t = b_34;
  t = map_1_0(u_9, t);
  h_34 = t;
  t = c_34;
  t = map_1_0(v_9, t);
  k_34 = t;
  t = d_34;
  {
    static ATerm w_9 (ATerm t)
    {
      ATerm t_35 = NULL,y_35 = NULL,z_35 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm y_37 = ATgetArgument(t, 0);
          t_35 = ATgetArgument(t, 1);
          y_35 = ATgetArgument(t, 2);
          z_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_10(h_34, k_34, t_35, y_35, z_35, t);
      return(t);
    }
    t = map_1_0(w_9, t);
  }
  t = choices_0_0(t);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, t_33, b_34, c_34, m_34);
  return(t);
}
static ATerm d_81 (ATerm v_79, ATerm a_80, ATerm b_80, ATerm c_80, ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_79, a_80);
  t = Definitions_0_0(t);
  j_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_80, b_80);
  m_80 = t;
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      ATerm a_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_80);
  k_80 = t;
  t = j_80;
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_80 = NULL,p_80 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_80 = ATgetFirst((ATermList) t);
            p_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_80;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_80;
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        {
          ATerm i_38 = t;
          int m_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(m_38);
            }
          else
            {
              t = i_38;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_80, b_80);
  n_7 = t;
  t = SSLsetAnnotations(n_7, k_80);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL;
  t_80 = t;
  if(match_cons(t, sym__2))
    {
      u_80 = ATgetArgument(t, 0);
      x_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_80;
  if(match_cons(t, sym__2))
    {
      v_80 = ATgetArgument(t, 0);
      w_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_80;
  if(match_cons(t, sym_Mod_2))
    {
      r_80 = ATgetArgument(t, 0);
      s_80 = ATgetArgument(t, 1);
      {
        ATerm n_38 = t;
        int p_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_81 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, r_80, s_80, w_80);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            c_81 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_81, x_80);
            LocalPopChoice(p_38);
          }
        else
          {
            t = n_38;
            t = d_81(v_80, w_80, x_80, t_80, t);
          }
      }
    }
  else
    {
      t = d_81(v_80, w_80, x_80, t_80, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  static ATerm u_82 (ATerm t)
  {
    ATerm h_82 = NULL,s_82 = NULL,t_82 = NULL;
    t_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_82 = ATgetFirst((ATermList) t);
        s_82 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_36 = NULL,o_36 = NULL,p_7 = NULL;
          t = SSLgetAnnotations(t_82);
          l_36 = t;
          t = s_82;
          t = u_82(t);
          o_36 = t;
          t = (ATerm) ATinsert(CheckATermList(o_36), h_82);
          p_7 = t;
          t = SSLsetAnnotations(p_7, l_36);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_82;
        t = g_131(t);
      }
    return(t);
  }
  t = u_82(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL;
  h_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_81;
    }
  else
    {
      static ATerm x_9 (ATerm t)
      {
        t = not_null(j_81);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_81 = ATgetFirst((ATermList) t);
          if(((j_81 != NULL) && (j_81 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_81;
      t = at_end_1_0(x_9, t);
    }
  return(t);
}
static ATerm g_83 (ATerm y_82, ATerm t)
{
  ATerm z_82 = NULL;
  t = SSL_explode_term(y_82);
  if(match_cons(t, sym__2))
    {
      ATerm r_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_82;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
  d_83 = t;
  if(match_cons(t, sym__2))
    {
      b_83 = ATgetArgument(t, 0);
      c_83 = ATgetArgument(t, 1);
      {
        ATerm s_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_10 (ATerm t)
            {
              t = c_83;
              return(t);
            }
            t = b_83;
            t = at_end_1_0(a_10, t);
            LocalPopChoice(v_38);
          }
        else
          {
            t = s_38;
            t = g_83(d_83, t);
          }
      }
    }
  else
    {
      t = g_83(d_83, t);
    }
  return(t);
}
static ATerm t_10 (ATerm t_132 (ATerm), ATerm p_57, ATerm o_57, ATerm t)
{
  static ATerm t_84 (ATerm t)
  {
    ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL;
    o_84 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_84;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_84 = ATgetFirst((ATermList) t);
            q_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_38 = t;
          int x_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_84;
              {
                static ATerm b_10 (ATerm t)
                {
                  t = o_57;
                  return(t);
                }
                t = e_11(t_132, b_10, p_84, q_84, t);
              }
              t = t_84(t);
              LocalPopChoice(x_38);
            }
          else
            {
              t = w_38;
              {
                ATerm f_37 = NULL,m_37 = NULL,s_7 = NULL;
                t = SSLgetAnnotations(o_84);
                f_37 = t;
                t = q_84;
                t = t_84(t);
                m_37 = t;
                t = (ATerm) ATinsert(CheckATermList(m_37), p_84);
                s_7 = t;
                t = SSLsetAnnotations(s_7, f_37);
              }
            }
        }
      }
    return(t);
  }
  t = p_57;
  t = t_84(t);
  return(t);
}
ATerm genzip_4_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t)
{
  static ATerm p_85 (ATerm t)
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_120(t);
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
        {
          ATerm v_84 = NULL,w_84 = NULL,c_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL,u_7 = NULL;
          t = y_120(t);
          o_85 = t;
          if(match_cons(t, sym__2))
            {
              w_84 = ATgetArgument(t, 0);
              c_85 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_85);
          v_84 = t;
          t = w_84;
          t = a_121(t);
          m_85 = t;
          t = c_85;
          t = p_85(t);
          n_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_85, n_85);
          u_7 = t;
          t = SSLsetAnnotations(u_7, v_84);
          t = z_120(t);
        }
      }
    return(t);
  }
  t = p_85(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
        _fail(t);
      {
        ATerm c_39 = ATgetArgument(t, 1);
        if(((ATgetType(c_39) != AT_LIST) || !(ATisEmpty(c_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_39 = ATgetArgument(t, 0);
      if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
        {
          q_87 = ATgetFirst((ATermList) i_39);
          r_87 = (ATerm) ATgetNext((ATermList) i_39);
        }
      else
        _fail(t);
      {
        ATerm j_39 = ATgetArgument(t, 1);
        if(((ATgetType(j_39) == AT_LIST) && !(ATisEmpty(j_39))))
          {
            s_87 = ATgetFirst((ATermList) j_39);
            t_87 = (ATerm) ATgetNext((ATermList) j_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_87, s_87), (ATerm) ATmakeAppl(sym__2, r_87, t_87));
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL;
  if(match_cons(t, sym__2))
    {
      u_87 = ATgetArgument(t, 0);
      v_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_87), u_87);
  return(t);
}
static ATerm y_10 (ATerm x_784, ATerm c_785, ATerm z_79, ATerm t)
{
  ATerm r_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL;
  t = SSL_explode_term(c_785);
  if(match_cons(t, sym__2))
    {
      r_85 = ATgetArgument(t, 0);
      y_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_784);
  if(match_cons(t, sym__2))
    {
      if((r_85 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_85, y_85);
  t = genzip_4_0(c_10, e_10, f_10, _id, t);
  z_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_85, z_79);
  t = conc_0_0(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm l_88 = NULL;
  l_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, l_88);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL,w_7 = NULL;
  p_88 = t;
  if(match_cons(t, sym__2))
    {
      n_88 = ATgetArgument(t, 0);
      o_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_88);
  m_88 = t;
  t = o_88;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_88, o_88);
  w_7 = t;
  t = SSLsetAnnotations(w_7, m_88);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm g_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL;
  g_92 = t;
  if(match_cons(t, sym__2))
    {
      j_92 = ATgetArgument(t, 0);
      k_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_92 = ATgetFirst((ATermList) t);
      m_92 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_39 = t;
        int p_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_92(j_92, k_92, g_92, t);
            LocalPopChoice(p_39);
          }
        else
          {
            t = o_39;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_92), l_92), m_92);
          }
      }
    }
  else
    {
      t = w_92(j_92, k_92, g_92, t);
    }
  return(t);
}
static ATerm w_92 (ATerm q_88, ATerm k_89, ATerm l_89, ATerm t)
{
  ATerm m_89 = NULL,p_89 = NULL,y_7 = NULL,e_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL;
  t = SSLgetAnnotations(l_89);
  m_89 = t;
  t = k_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_91 = ATgetFirst((ATermList) t);
      r_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_91;
  if(match_cons(t, sym__2))
    {
      p_91 = ATgetArgument(t, 0);
      q_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_91;
        if((p_91 != t))
          {
            _fail(t);
          }
        t = r_91;
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        t = k_89;
        t = y_10(p_91, q_91, r_91, t);
      }
  }
  p_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_88, p_89);
  y_7 = t;
  t = SSLsetAnnotations(y_7, m_89);
  return(t);
}
static ATerm o_10 (ATerm t)
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
ATerm diff_0_0 (ATerm t)
{
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_10, j_10, k_10, t);
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      {
        ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
        q_92 = t;
        if(match_cons(t, sym__2))
          {
            r_92 = ATgetArgument(t, 0);
            s_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_92;
        t = t_10(o_10, r_92, s_92, t);
      }
    }
  return(t);
}
static ATerm a_11 (ATerm r_149 (ATerm), ATerm s_149 (ATerm), ATerm t_149 (ATerm), ATerm q_81, ATerm n_81, ATerm v_81, ATerm r_81, ATerm o_81, ATerm p_81, ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_81, r_81);
  t = r_149(t);
  if(match_cons(t, sym__2))
    {
      y_92 = ATgetArgument(t, 0);
      x_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_92;
  t = s_149(t);
  z_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_92, v_81);
  t = diff_0_0(t);
  a_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_93, n_81);
  t = conc_0_0(t);
  b_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_93, v_81);
  t = conc_0_0(t);
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_81, y_92, o_81);
  t = t_149(t);
  d_93 = t;
  t = (ATerm) ATmakeAppl(sym__5, b_93, c_93, x_92, d_93, p_81);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm r_149 (ATerm), ATerm s_149 (ATerm), ATerm t_149 (ATerm), ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
        {
          f_93 = ATgetFirst((ATermList) v_39);
          g_93 = (ATerm) ATgetNext((ATermList) v_39);
        }
      else
        _fail(t);
      h_93 = ATgetArgument(t, 1);
      i_93 = ATgetArgument(t, 2);
      j_93 = ATgetArgument(t, 3);
      k_93 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = a_11(r_149, s_149, t_149, f_93, g_93, h_93, i_93, j_93, k_93, t);
  return(t);
}
ATerm while_not_2_0 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm t)
{
  static ATerm l_93 (ATerm t)
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_122(t);
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        t = y_122(t);
        t = l_93(t);
      }
    return(t);
  }
  t = l_93(t);
  return(t);
}
ATerm for_3_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm t)
{
  t = a_123(t);
  t = while_not_2_0(b_123, c_123, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
  if(match_cons(t, sym__3))
    {
      v_93 = ATgetArgument(t, 0);
      w_93 = ATgetArgument(t, 1);
      x_93 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, v_93, v_93, w_93, x_93, (ATerm) ATempty);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm y_39 = ATgetArgument(t, 0);
      if(((ATgetType(y_39) != AT_LIST) || !(ATisEmpty(y_39))))
        _fail(t);
      {
        ATerm z_39 = ATgetArgument(t, 1);
      }
      {
        ATerm b_40 = ATgetArgument(t, 2);
      }
      a_94 = ATgetArgument(t, 3);
      b_94 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_94, b_94);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, z_10, b_11, t);
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL;
        if(match_cons(t, sym__5))
          {
            h_94 = ATgetArgument(t, 0);
            k_94 = ATgetArgument(t, 1);
            l_94 = ATgetArgument(t, 2);
            m_94 = ATgetArgument(t, 3);
            n_94 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = h_94;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_94 = ATgetFirst((ATermList) t);
            j_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, j_94, k_94, l_94, m_94, (ATerm) ATinsert(CheckATermList(n_94), i_94));
      }
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(c_11, t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_40 = ATgetArgument(t, 0);
      e_94 = ATgetArgument(t, 1);
      f_94 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_94), e_94);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm i_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(j_40);
    }
  else
    {
      t = i_40;
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm h_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  l_39 = t;
  if(match_cons(t, sym__2))
    {
      m_39 = ATgetArgument(t, 0);
      n_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_39;
  if(match_cons(t, sym_Mod_2))
    {
      h_39 = ATgetArgument(t, 0);
      k_39 = ATgetArgument(t, 1);
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_39;
            t = s_9(h_39, k_39, n_39, t);
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            t = s_39(m_39, n_39, t);
          }
      }
    }
  else
    {
      t = s_39(m_39, n_39, t);
    }
  return(t);
}
static ATerm s_39 (ATerm t_38, ATerm a_39, ATerm t)
{
  ATerm d_39 = NULL,g_39 = NULL;
  t = term_g_16;
  d_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), a_39), term_q_17), t_38), term_o_17);
  g_39 = t;
  t = SSL_printnl(d_39, g_39);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), a_39), term_q_17), t_38), term_o_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  t = for_3_0(v_10, w_10, x_10, t);
  q_95 = t;
  if(match_cons(t, sym__2))
    {
      r_95 = ATgetArgument(t, 0);
      s_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_95;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_95;
    }
  else
    {
      ATerm h_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_95 = ATgetFirst((ATermList) t);
          u_95 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(u_95), t_95);
      t = map_1_0(g_11, t);
      t = term_j_16;
      h_38 = t;
      t = SSL_exit(h_38);
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL;
  if(match_cons(t, sym__2))
    {
      m_96 = ATgetArgument(t, 0);
      n_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(m_96, n_96, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  if(match_cons(t, sym__2))
    {
      o_96 = ATgetArgument(t, 0);
      p_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(o_96, p_96, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm q_96 = NULL;
  if(match_cons(t, sym__2))
    {
      q_96 = ATgetArgument(t, 0);
      if((q_96 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL;
  a_96 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      d_96 = ATgetArgument(t, 0);
      y_95 = ATgetArgument(t, 1);
      z_95 = ATgetArgument(t, 2);
      {
        ATerm q_40 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  f_96 = t;
  t = y_95;
  t = foldr_3_0(i_11, s_11, x_11, t);
  b_96 = t;
  t = z_95;
  t = foldr_3_0(b_12, d_12, e_12, t);
  c_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_96, (ATerm) ATmakeAppl(sym__2, b_96, c_96));
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(s_40);
      }
    else
      {
        t = r_40;
        t = (ATerm) ATempty;
      }
  }
  h_96 = t;
  t = d_96;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        t = (ATerm) ATempty;
      }
  }
  g_96 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_96, c_96));
  l_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_96, c_96)), g_96);
  t = f_11(f_12, l_96, g_96, t);
  e_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_96, (ATerm) ATmakeAppl(sym__2, b_96, c_96));
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_40, (ATerm) ATinsert(CheckATermList(h_96), a_96));
  k_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_96, (ATerm) ATmakeAppl(sym__2, b_96, c_96)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_40, (ATerm) ATinsert(CheckATermList(h_96), a_96)));
  t = d_11(j_12, j_96, k_96, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_40, e_96);
  i_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_96, (ATerm) ATmakeAppl(sym_Defined_2, term_w_40, e_96));
  t = d_11(k_12, d_96, i_96, t);
  t = f_96;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL;
  if(match_cons(t, sym__2))
    {
      f_97 = ATgetArgument(t, 0);
      g_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(f_97, g_97, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm h_97 = NULL,i_97 = NULL;
  if(match_cons(t, sym__2))
    {
      h_97 = ATgetArgument(t, 0);
      i_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(h_97, i_97, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm j_97 = NULL;
  if(match_cons(t, sym__2))
    {
      j_97 = ATgetArgument(t, 0);
      if((j_97 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL;
  t_96 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      w_96 = ATgetArgument(t, 0);
      r_96 = ATgetArgument(t, 1);
      s_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  y_96 = t;
  t = r_96;
  t = foldr_3_0(l_12, m_12, n_12, t);
  u_96 = t;
  t = s_96;
  t = foldr_3_0(p_12, q_12, r_12, t);
  v_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_96, (ATerm) ATmakeAppl(sym__2, u_96, v_96));
  {
    ATerm x_40 = t;
    int y_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(y_40);
      }
    else
      {
        t = x_40;
        t = (ATerm) ATempty;
      }
  }
  a_97 = t;
  t = w_96;
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        t = (ATerm) ATempty;
      }
  }
  z_96 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_96, v_96));
  e_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_96, v_96)), z_96);
  t = f_11(t_12, e_97, z_96, t);
  x_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_96, (ATerm) ATmakeAppl(sym__2, u_96, v_96));
  c_97 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_41, (ATerm) ATinsert(CheckATermList(a_97), t_96));
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_96, (ATerm) ATmakeAppl(sym__2, u_96, v_96)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_41, (ATerm) ATinsert(CheckATermList(a_97), t_96)));
  t = d_11(u_12, c_97, d_97, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, x_96);
  b_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_96, (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, x_96));
  t = d_11(v_12, w_96, b_97, t);
  t = y_96;
  return(t);
}
static ATerm d_11 (ATerm e_128 (ATerm), ATerm u_43, ATerm s_43, ATerm t)
{
  ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL;
  n_97 = t;
  t = e_128(t);
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_97, u_43, s_43);
  t = w_11(k_97, u_43, s_43, t);
  {
    ATerm d_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_97 = NULL;
        t = term_u_35;
        s_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_97, term_u_35);
        t = v_11(k_97, s_97, t);
        LocalPopChoice(f_41);
      }
    else
      {
        t = d_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_97 = ATgetFirst((ATermList) t);
      m_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_97, term_u_35, (ATerm) ATinsert(CheckATermList(m_97), (ATerm) ATinsert(CheckATermList(l_97), u_43)));
  t = lookup_table_0_1(k_97, t);
  r_97 = t;
  t = term_u_35;
  o_97 = t;
  t = (ATerm) ATinsert(CheckATermList(m_97), (ATerm) ATinsert(CheckATermList(l_97), u_43));
  p_97 = t;
  t = r_97;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(o_97, p_97, q_97, t);
  t = n_97;
  return(t);
}
static ATerm e_11 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm v_57, ATerm u_57, ATerm t)
{
  t = c_133(t);
  {
    static ATerm y_12 (ATerm t)
    {
      ATerm t_97 = NULL;
      t_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_57, t_97);
      t = b_133(t);
      return(t);
    }
    t = fetch_1_0(y_12, t);
  }
  t = u_57;
  return(t);
}
static ATerm f_11 (ATerm y_132 (ATerm), ATerm r_57, ATerm q_57, ATerm t)
{
  static ATerm j_98 (ATerm t)
  {
    ATerm e_98 = NULL,f_98 = NULL,g_98 = NULL;
    e_98 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_57;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_98 = ATgetFirst((ATermList) t);
            g_98 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_41 = t;
          int h_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_98;
              {
                static ATerm z_12 (ATerm t)
                {
                  t = q_57;
                  return(t);
                }
                t = e_11(y_132, z_12, f_98, g_98, t);
              }
              t = j_98(t);
              LocalPopChoice(h_41);
            }
          else
            {
              t = g_41;
              {
                ATerm k_40 = NULL,o_40 = NULL,g_8 = NULL;
                t = SSLgetAnnotations(e_98);
                k_40 = t;
                t = g_98;
                t = j_98(t);
                o_40 = t;
                t = (ATerm) ATinsert(CheckATermList(o_40), f_98);
                g_8 = t;
                t = SSLsetAnnotations(g_8, k_40);
              }
            }
        }
      }
    return(t);
  }
  t = r_57;
  t = j_98(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm x_98 = NULL;
  x_98 = t;
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_41 = NULL,e_42 = NULL;
        t = term_p_40;
        e_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_40, x_98);
        t = h_11(e_42, x_98, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_41) != ATmakeSymbol("h_1", 0, ATtrue)))
              _fail(t);
            u_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_41;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        {
          ATerm m_41 = t;
          int p_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_42 = NULL,s_42 = NULL;
              t = term_p_40;
              s_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_40, x_98);
              t = h_11(s_42, x_98, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_41) != ATmakeSymbol("d_1", 0, ATtrue)))
                    _fail(t);
                  p_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_42;
              LocalPopChoice(p_41);
            }
          else
            {
              t = m_41;
              {
                ATerm f_43 = NULL,i_43 = NULL;
                t = term_p_40;
                i_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_40, x_98);
                t = h_11(i_43, x_98, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm r_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_41) != ATmakeSymbol("z_0", 0, ATtrue)))
                      _fail(t);
                    f_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_43;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm h_11 (ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm b_99 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
  t = v_11(j_45, k_45, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_99 = ATgetFirst((ATermList) t);
      {
        ATerm s_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_99;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm s_99 = NULL,u_99 = NULL;
  s_99 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_41 = ATgetArgument(t, 0);
      u_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_99;
  if(match_cons(t, sym__2))
    {
      ATerm v_41 = ATgetArgument(t, 0);
      ATerm w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_44 = NULL,l_44 = NULL;
        t = term_n_40;
        l_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_40, s_99);
        t = h_11(l_44, s_99, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm z_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_41) != ATmakeSymbol("f_1", 0, ATtrue)))
              _fail(t);
            f_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_44;
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        {
          ATerm a_42 = t;
          int b_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_44 = NULL,u_44 = NULL;
              t = term_n_40;
              u_44 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_n_40, s_99);
              t = h_11(u_44, s_99, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm c_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_42) != ATmakeSymbol("b_1", 0, ATtrue)))
                    _fail(t);
                  r_44 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_44;
              LocalPopChoice(b_42);
            }
          else
            {
              t = a_42;
              {
                ATerm c_45 = NULL,s_45 = NULL;
                t = term_n_40;
                s_45 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_40, s_99);
                t = h_11(s_45, s_99, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm d_42 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_42) != ATmakeSymbol("v_0", 0, ATtrue)))
                      _fail(t);
                    c_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_45;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
  b_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_100;
      t = d_136(t);
    }
  else
    {
      ATerm g_100 = NULL,h_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_100 = ATgetFirst((ATermList) t);
          d_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_100;
      t = f_136(t);
      g_100 = t;
      t = d_100;
      t = foldr_3_0(d_136, e_136, f_136, t);
      h_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_100, h_100);
      t = e_136(t);
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL;
  if(match_cons(t, sym__2))
    {
      w_100 = ATgetArgument(t, 0);
      x_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(w_100, x_100, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm a_101 = NULL,b_101 = NULL;
  if(match_cons(t, sym__2))
    {
      a_101 = ATgetArgument(t, 0);
      b_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(a_101, b_101, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm c_101 = NULL;
  if(match_cons(t, sym__2))
    {
      c_101 = ATgetArgument(t, 0);
      if((c_101 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL;
  k_100 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_100 = ATgetArgument(t, 0);
      i_100 = ATgetArgument(t, 1);
      j_100 = ATgetArgument(t, 2);
      {
        ATerm f_42 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  p_100 = t;
  t = i_100;
  t = foldr_3_0(a_13, b_13, d_13, t);
  l_100 = t;
  t = j_100;
  t = foldr_3_0(e_13, f_13, h_13, t);
  m_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_100, (ATerm) ATmakeAppl(sym__2, l_100, m_100));
  {
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        t = (ATerm) ATempty;
      }
  }
  r_100 = t;
  t = n_100;
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = (ATerm) ATempty;
      }
  }
  q_100 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_100, m_100));
  v_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_100, m_100)), q_100);
  t = f_11(i_13, v_100, q_100, t);
  o_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_100, (ATerm) ATmakeAppl(sym__2, l_100, m_100));
  t_100 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_42, (ATerm) ATinsert(CheckATermList(r_100), k_100));
  u_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_100, (ATerm) ATmakeAppl(sym__2, l_100, m_100)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_42, (ATerm) ATinsert(CheckATermList(r_100), k_100)));
  t = d_11(j_13, t_100, u_100, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_42, o_100);
  s_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_100, (ATerm) ATmakeAppl(sym_Defined_2, term_q_42, o_100));
  t = d_11(m_13, n_100, s_100, t);
  t = p_100;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm r_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(t_42);
    }
  else
    {
      t = r_42;
      {
        ATerm u_42 = t;
        int v_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(v_42);
          }
        else
          {
            t = u_42;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm d_101 = NULL;
  t = map_1_0(n_13, t);
  d_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_y_42), d_101, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,i_8 = NULL;
  j_101 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_101 = ATgetFirst((ATermList) t);
      g_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_101);
  e_101 = t;
  t = f_101;
  t = y_100(t);
  h_101 = t;
  t = g_101;
  t = z_100(t);
  i_101 = t;
  t = (ATerm) ATinsert(CheckATermList(i_101), h_101);
  i_8 = t;
  t = SSLsetAnnotations(i_8, e_101);
  return(t);
}
static ATerm j_11 (ATerm c_35, ATerm d_35, ATerm t)
{
  ATerm k_101 = NULL;
  t = SSL_fputc(c_35, d_35);
  k_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_101);
  return(t);
}
static ATerm k_11 (ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm l_101 = NULL;
  t = SSL_write_term_to_stream_text(u_33, v_33);
  l_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_101);
  return(t);
}
static ATerm m_11 (ATerm v_123 (ATerm), ATerm o_266, ATerm a_34, ATerm t)
{
  ATerm m_101 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_266, term_z_42);
  t = q_11(t);
  m_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_101, a_34);
  t = v_123(t);
  t = fclose_0_0(t);
  t = a_34;
  return(t);
}
static ATerm l_11 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm n_101 = NULL;
  t = SSL_write_term_to_stream_baf(q_33, r_33);
  n_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_101);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      if(match_cons(a_43, sym_Stream_1))
        {
          n_46 = ATgetArgument(a_43, 0);
        }
      else
        _fail(t);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(n_46, o_46, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(match_cons(b_43, sym_Stream_1))
        {
          v_47 = ATgetArgument(b_43, 0);
        }
      else
        _fail(t);
      w_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(v_47, w_47, t);
  k_47 = t;
  t = term_b_23;
  l_47 = t;
  t = k_47;
  if(match_cons(t, sym_Stream_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_23, k_47);
  t = j_11(l_47, u_47, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL,b_103 = NULL,c_103 = NULL,l_8 = NULL,k_8 = NULL;
  s_101 = t;
  if(match_cons(t, sym__2))
    {
      z_101 = ATgetArgument(t, 0);
      a_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_101);
  y_101 = t;
  t = z_101;
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_101 != NULL) && (r_101 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_13, t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        t = term_e_43;
        r_101 = t;
      }
  }
  b_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_102, a_102);
  k_8 = t;
  t = SSLsetAnnotations(k_8, y_101);
  t = s_101;
  if(match_cons(t, sym__2))
    {
      u_101 = ATgetArgument(t, 0);
      v_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_101);
  t_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_101, (ATerm) ATmakeAppl(sym__2, not_null(r_101), v_101));
  l_8 = t;
  t = SSLsetAnnotations(l_8, t_101);
  x_101 = t;
  if(match_cons(t, sym__2))
    {
      b_103 = ATgetArgument(t, 0);
      c_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_45 = NULL,i_46 = NULL,j_46 = NULL,l_46 = NULL,m_46 = NULL,n_8 = NULL;
        t = SSLgetAnnotations(x_101);
        z_45 = t;
        t = b_103;
        t = fetch_1_0(t_13, t);
        i_46 = t;
        t = c_103;
        if(match_cons(t, sym__2))
          {
            l_46 = ATgetArgument(t, 0);
            m_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(u_13, l_46, m_46, t);
        j_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        n_8 = t;
        t = SSLsetAnnotations(n_8, z_45);
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        {
          ATerm w_46 = NULL,a_47 = NULL,i_47 = NULL,j_47 = NULL,o_8 = NULL;
          t = SSLgetAnnotations(x_101);
          w_46 = t;
          t = c_103;
          if(match_cons(t, sym__2))
            {
              i_47 = ATgetArgument(t, 0);
              j_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_11(w_13, i_47, j_47, t);
          a_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_103, a_47);
          o_8 = t;
          t = SSLsetAnnotations(o_8, w_46);
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
ATerm apply_strategy_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL;
  j_103 = t;
  t = dtime_0_0(t);
  t = j_103;
  t = c_144(t);
  i_103 = t;
  t = dtime_0_0(t);
  f_103 = t;
  t = i_103;
  if(match_cons(t, sym__2))
    {
      g_103 = ATgetArgument(t, 0);
      h_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_103), (ATerm) ATmakeAppl(sym_Runtime_1, f_103)), h_103);
  return(t);
}
static ATerm x_103 (ATerm r_103, ATerm t)
{
  t = SSL_fclose(r_103);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_103 = NULL,v_103 = NULL;
  v_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_103 = ATgetArgument(t, 0);
      {
        ATerm j_43 = t;
        int k_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_103);
            LocalPopChoice(k_43);
          }
        else
          {
            t = j_43;
            t = x_103(v_103, t);
          }
      }
    }
  else
    {
      t = x_103(v_103, t);
    }
  return(t);
}
static ATerm n_11 (ATerm w_33, ATerm t)
{
  t = SSL_read_term_from_stream(w_33);
  return(t);
}
static ATerm o_11 (ATerm u_66, ATerm v_66, ATerm t)
{
  t = SSL_strcat(u_66, v_66);
  return(t);
}
static ATerm p_11 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm y_103 = NULL;
  t = SSL_fopen(e_35, f_35);
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_103);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_103 = NULL;
  t = SSL_stdin_stream();
  z_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_103);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_104 = NULL;
  t = SSL_stdout_stream();
  a_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_104);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_104 = NULL;
  t = SSL_stderr_stream();
  b_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_104);
  return(t);
}
static ATerm i_105 (ATerm h_104, ATerm t)
{
  ATerm i_104 = NULL;
  t = SSL_explode_term(h_104);
  if(match_cons(t, sym__2))
    {
      ATerm l_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_43 = ATgetArgument(t, 1);
        if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
          {
            i_104 = ATgetFirst((ATermList) m_43);
            {
              ATerm n_43 = (ATerm) ATgetNext((ATermList) m_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_104;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_104;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_104;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_104;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_105 (ATerm l_104, ATerm m_104, ATerm n_104, ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,t_104 = NULL,v_8 = NULL;
  t = SSLgetAnnotations(n_104);
  q_104 = t;
  t = l_104;
  if(match_cons(t, sym_Path_1))
    {
      t_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_104, m_104);
  v_8 = t;
  t = SSLsetAnnotations(v_8, q_104);
  if(match_cons(t, sym__2))
    {
      o_104 = ATgetArgument(t, 0);
      p_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(o_104, p_104, t);
  return(t);
}
static ATerm k_105 (ATerm v_104, ATerm w_104, ATerm x_104, ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL,d_105 = NULL,w_8 = NULL;
  t = SSLgetAnnotations(x_104);
  a_105 = t;
  t = SSL_is_string(v_104);
  d_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_105, w_104);
  w_8 = t;
  t = SSLsetAnnotations(w_8, a_105);
  if(match_cons(t, sym__2))
    {
      y_104 = ATgetArgument(t, 0);
      z_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(y_104, z_104, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL;
  f_105 = t;
  if(match_cons(t, sym__2))
    {
      g_105 = ATgetArgument(t, 0);
      h_105 = ATgetArgument(t, 1);
      {
        ATerm o_43 = t;
        int p_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_105(f_105, t);
            LocalPopChoice(p_43);
          }
        else
          {
            t = o_43;
            {
              ATerm q_43 = t;
              int r_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_105(g_105, h_105, f_105, t);
                  LocalPopChoice(r_43);
                }
              else
                {
                  t = q_43;
                  t = k_105(g_105, h_105, f_105, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_105(f_105, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL,t_105 = NULL;
  t_105 = t;
  {
    ATerm t_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_105, term_w_43);
        t = q_11(t);
        LocalPopChoice(v_43);
      }
    else
      {
        t = t_43;
        {
          ATerm j_48 = NULL,o_48 = NULL;
          t = term_x_43;
          o_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_43, t_105);
          t = o_11(o_48, t_105, t);
          j_48 = t;
          t = SSL_perror(j_48);
          _fail(t);
        }
      }
  }
  n_105 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(o_105, t);
  m_105 = t;
  t = n_105;
  t = fclose_0_0(t);
  t = m_105;
  return(t);
}
ATerm fetch_1_0 (ATerm z_130 (ATerm), ATerm t)
{
  static ATerm s_106 (ATerm t)
  {
    ATerm p_106 = NULL,q_106 = NULL,r_106 = NULL;
    p_106 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_106 = ATgetFirst((ATermList) t);
        r_106 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_43 = t;
      int z_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_48 = NULL,c_49 = NULL,a_9 = NULL;
          t = SSLgetAnnotations(p_106);
          t_48 = t;
          t = q_106;
          t = z_130(t);
          c_49 = t;
          t = (ATerm) ATinsert(CheckATermList(r_106), c_49);
          a_9 = t;
          t = SSLsetAnnotations(a_9, t_48);
          LocalPopChoice(z_43);
        }
      else
        {
          t = y_43;
          {
            ATerm a_50 = NULL,h_50 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(p_106);
            a_50 = t;
            t = r_106;
            t = s_106(t);
            h_50 = t;
            t = (ATerm) ATinsert(CheckATermList(h_50), q_106);
            d_9 = t;
            t = SSLsetAnnotations(d_9, a_50);
          }
        }
    }
    return(t);
  }
  t = s_106(t);
  return(t);
}
static ATerm v_11 (ATerm r_46, ATerm s_46, ATerm t)
{
  ATerm v_106 = NULL;
  t = lookup_table_0_1(r_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(s_46, v_106, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_125 (ATerm), ATerm t)
{
  ATerm y_106 = NULL;
  y_106 = t;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL;
        t = term_c_44;
        b_107 = t;
        t = term_d_44;
        c_107 = t;
        t = term_e_44;
        t = v_11(b_107, c_107, t);
        a_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_107, term_g_44);
        t = geq_0_0(t);
        t = y_106;
        t = m_125(t);
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = y_106;
      }
  }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm f_107 = NULL;
  f_107 = t;
  if(match_string(t, "-k"))
    {
      t = f_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_107;
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL;
  g_107 = t;
  t = SSL_string_to_int(g_107);
  h_107 = t;
  t = term_h_44;
  i_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_44, h_107);
  t = y_11(i_107, h_107, t);
  t = g_107;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_i_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_13, y_13, z_13, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm k_107 = NULL;
  k_107 = t;
  if(match_string(t, "-S"))
    {
      t = k_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_107;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm l_107 = NULL,m_107 = NULL;
  t = term_d_44;
  l_107 = t;
  t = term_x_20;
  m_107 = t;
  t = term_j_44;
  t = y_11(l_107, m_107, t);
  t = term_k_44;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_m_44;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm n_107 = NULL,o_107 = NULL,p_107 = NULL;
  n_107 = t;
  t = SSL_string_to_int(n_107);
  o_107 = t;
  t = term_d_44;
  p_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_44, o_107);
  t = y_11(p_107, o_107, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_107);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_n_44;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm q_107 = NULL,r_107 = NULL;
  t = term_o_44;
  q_107 = t;
  t = term_d_16;
  r_107 = t;
  t = term_s_44;
  t = y_11(q_107, r_107, t);
  t = term_t_44;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_v_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_14, b_14, c_14, t);
      LocalPopChoice(a_45);
    }
  else
    {
      t = w_44;
      {
        ATerm h_45 = t;
        int i_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_14, e_14, f_14, t);
            LocalPopChoice(i_45);
          }
        else
          {
            t = h_45;
            t = Option_3_0(g_14, h_14, i_14, t);
          }
      }
    }
  return(t);
}
static ATerm y_11 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm s_107 = NULL,t_107 = NULL;
  t = term_c_44;
  s_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_44, e_39, f_39);
  t = lookup_table_0_1(s_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(e_39, f_39, t_107, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_44, e_39, f_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_107 = NULL,y_107 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_107 = NULL,a_108 = NULL,b_108 = NULL;
      t = term_d_16;
      t = e_0(t);
      z_107 = t;
      t = term_q_45;
      a_108 = t;
      t = term_r_45;
      b_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_45, term_r_45, z_107);
      t = w_11(a_108, b_108, z_107, t);
      _fail(t);
    }
  else
    {
      ATerm e_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_107 = ATgetFirst((ATermList) t);
          y_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_107;
      t = c_0(t);
      t = term_d_16;
      t = d_0(t);
      e_108 = t;
      t = (ATerm) ATinsert(CheckATermList(y_107), e_108);
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm g_108 = NULL;
  g_108 = t;
  if(match_string(t, "-o"))
    {
      t = g_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_108;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL;
  h_108 = t;
  t = term_u_45;
  i_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_45, h_108);
  t = y_11(i_108, h_108, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_108);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_v_45;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_14, k_14, l_14, t);
  return(t);
}
static ATerm w_11 (ATerm y_44, ATerm z_44, ATerm x_44, ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL;
  k_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_44, z_44);
  {
    ATerm x_45 = t;
    int y_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_46 = ATgetArgument(t, 0);
            ATerm c_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_44, z_44);
        t = v_11(y_44, z_44, t);
        LocalPopChoice(y_45);
      }
    else
      {
        t = x_45;
        t = (ATerm) ATempty;
      }
  }
  l_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_44, z_44, (ATerm) ATinsert(CheckATermList(l_108), x_44));
  t = lookup_table_0_1(y_44, t);
  o_108 = t;
  t = (ATerm) ATinsert(CheckATermList(l_108), x_44);
  m_108 = t;
  t = o_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(z_44, m_108, n_108, t);
  t = k_108;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_108 = NULL,a_109 = NULL,b_109 = NULL;
      t = term_d_16;
      t = n_0(t);
      z_108 = t;
      t = term_q_45;
      a_109 = t;
      t = term_r_45;
      b_109 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_45, term_r_45, z_108);
      t = w_11(a_109, b_109, z_108, t);
      _fail(t);
    }
  else
    {
      ATerm f_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_108 = ATgetFirst((ATermList) t);
          w_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_108 = ATgetFirst((ATermList) t);
          y_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_108;
      t = j_0(t);
      t = x_108;
      t = l_0(t);
      f_109 = t;
      t = (ATerm) ATinsert(CheckATermList(y_108), f_109);
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm h_109 = NULL;
  h_109 = t;
  if(match_string(t, "-i"))
    {
      t = h_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_109;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm i_109 = NULL,j_109 = NULL;
  i_109 = t;
  t = term_d_46;
  j_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_46, i_109);
  t = y_11(j_109, i_109, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_109);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_p_46;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_14, n_14, o_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_16;
  t = whoami_0_0(t);
  k_109 = t;
  t = term_g_16;
  m_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_46), k_109);
  n_109 = t;
  t = SSL_printnl(m_109, n_109);
  t = term_j_16;
  l_109 = t;
  t = SSL_exit(l_109);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL;
  t = term_c_44;
  o_109 = t;
  t = term_u_46;
  p_109 = t;
  t = term_v_46;
  t = v_11(o_109, p_109, t);
  return(t);
}
static ATerm r_11 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm x_46 = t;
  int z_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_42, h_42);
      LocalPopChoice(z_46);
    }
  else
    {
      t = x_46;
      t = SSL_addr(g_42, h_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm t)
{
  ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL;
  r_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_109;
      t = b_136(t);
    }
  else
    {
      ATerm w_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_109 = ATgetFirst((ATermList) t);
          t_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_109;
      t = foldr_2_0(b_136, c_136, t);
      w_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_109, w_109);
      t = c_136(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  if(match_cons(t, sym__2))
    {
      b_51 = ATgetArgument(t, 0);
      c_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(b_51, c_51, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_109 = NULL,t_50 = NULL,v_50 = NULL;
  t = times_0_0(t);
  v_50 = t;
  t = SSL_explode_term(v_50);
  if(match_cons(t, sym__2))
    {
      ATerm c_47 = ATgetArgument(t, 0);
      t_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_50;
  t = foldr_2_0(p_14, q_14, t);
  z_109 = t;
  t = SSL_TicksToSeconds(z_109);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL;
  k_110 = t;
  if(match_cons(t, sym__2))
    {
      l_110 = ATgetArgument(t, 0);
      m_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_110;
        if((l_110 != t))
          {
            _fail(t);
          }
        t = k_110;
        LocalPopChoice(p_47);
      }
    else
      {
        t = h_47;
        t = (ATerm) ATmakeAppl(sym__2, l_110, m_110);
        {
          ATerm x_47 = t;
          int y_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_110, m_110);
              LocalPopChoice(y_47);
            }
          else
            {
              t = x_47;
              t = SSL_gtr(l_110, m_110);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_110, m_110);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm q_110 = NULL;
  q_110 = t;
  {
    ATerm z_47 = t;
    int a_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL;
        t = term_c_44;
        t_110 = t;
        t = term_d_44;
        u_110 = t;
        t = term_e_44;
        t = v_11(t_110, u_110, t);
        s_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_110, term_j_16);
        t = geq_0_0(t);
        t = q_110;
        t = l_125(t);
        LocalPopChoice(a_48);
      }
    else
      {
        t = z_47;
        t = q_110;
      }
  }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm w_110 = NULL,x_110 = NULL,z_110 = NULL,a_111 = NULL;
  t = run_time_0_0(t);
  w_110 = t;
  t = term_d_16;
  t = whoami_0_0(t);
  x_110 = t;
  t = term_g_16;
  z_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_48), w_110), term_b_48), x_110);
  a_111 = t;
  t = SSL_printnl(z_110, a_111);
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_48), w_110), term_b_48), x_110));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_111 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_20;
  b_111 = t;
  t = SSL_exit(b_111);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL;
  m_111 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_111;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_111 = ATgetArgument(t, 0);
          {
            ATerm u_51 = NULL,r_9 = NULL;
            t = SSLgetAnnotations(m_111);
            u_51 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_111);
            r_9 = t;
            t = SSLsetAnnotations(r_9, u_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_111;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_145 (ATerm), ATerm t)
{
  ATerm d_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_111 = NULL,f_111 = NULL;
      t = term_c_44;
      e_111 = t;
      t = term_f_48;
      f_111 = t;
      t = term_g_48;
      t = v_11(e_111, f_111, t);
      LocalPopChoice(e_48);
    }
  else
    {
      t = d_48;
      t = fetch_1_0(s_14, t);
    }
  t = a_145(t);
  return(t);
}
static ATerm z_11 (ATerm d_49, ATerm e_49, ATerm f_49, ATerm t)
{
  ATerm o_111 = NULL;
  t = SSL_hashtable_put(f_49, d_49, e_49);
  o_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_111);
  return(t);
}
static ATerm a_12 (ATerm g_49, ATerm h_49, ATerm t)
{
  t = SSL_hashtable_get(h_49, g_49);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_46, ATerm t)
{
  ATerm x_111 = NULL;
  t = table_hashtable_0_0(t);
  x_111 = t;
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_52 = NULL;
        t = x_111;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_12(k_46, g_52, t);
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
        {
          ATerm t_52 = NULL;
          t = k_46;
          t = table_create_0_0(t);
          t = x_111;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(k_46, t_52, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm a_112 = NULL;
  t = SSL_hashtable_create(l_49, m_49);
  a_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_112);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL,f_112 = NULL,g_112 = NULL;
  b_112 = t;
  t = term_k_48;
  f_112 = t;
  t = term_l_48;
  g_112 = t;
  t = b_112;
  t = new_hashtable_0_2(f_112, g_112, t);
  c_112 = t;
  t = b_112;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(b_112, c_112, d_112, t);
  t = b_112;
  return(t);
}
static ATerm t_11 (ATerm i_49, ATerm j_49, ATerm t)
{
  ATerm h_112 = NULL;
  t = SSL_hashtable_remove(j_49, i_49);
  h_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_112);
  return(t);
}
static ATerm u_11 (ATerm n_49, ATerm t)
{
  ATerm i_112 = NULL;
  t = SSL_hashtable_destroy(n_49);
  i_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_112);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_112 = NULL;
  t = SSL_table_hashtable();
  j_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_112);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL;
  k_112 = t;
  t = table_hashtable_0_0(t);
  l_112 = t;
  t = lookup_table_0_1(k_112, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(n_112, t);
  t = l_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(k_112, m_112, t);
  t = k_112;
  return(t);
}
ATerm map_1_0 (ATerm p_130 (ATerm), ATerm t)
{
  static ATerm c_113 (ATerm t)
  {
    ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL;
    z_112 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_112;
      }
    else
      {
        ATerm l_53 = NULL,v_53 = NULL,w_53 = NULL,u_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_113 = ATgetFirst((ATermList) t);
            b_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_112);
        l_53 = t;
        t = a_113;
        t = p_130(t);
        v_53 = t;
        t = b_113;
        t = c_113(t);
        w_53 = t;
        t = (ATerm) ATinsert(CheckATermList(w_53), v_53);
        u_10 = t;
        t = SSLsetAnnotations(u_10, l_53);
      }
    return(t);
  }
  t = c_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_113 = ATgetFirst((ATermList) t);
      g_113 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_113 = NULL,l_113 = NULL;
        static ATerm t_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_113)), not_null(l_113));
          return(t);
        }
        t = g_113;
        t = i_0(t);
        if(((k_113 != NULL) && (k_113 != t)))
          _fail(t);
        else
          k_113 = t;
        t = f_113;
        t = g_0(t);
        if(((l_113 != NULL) && (l_113 != t)))
          _fail(t);
        else
          l_113 = t;
        t = g_113;
        t = reverse_acc_2_0(g_0, t_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_16;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL,o_12 = NULL;
  t_113 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_113);
  r_113 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_113);
  o_12 = t;
  t = SSLsetAnnotations(o_12, r_113);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm v_113 = NULL;
  v_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_113), term_m_48);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_113 = NULL,o_113 = NULL;
  ATerm n_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_113 = NULL,q_113 = NULL;
      t = term_c_44;
      p_113 = t;
      t = term_u_46;
      q_113 = t;
      t = term_v_46;
      t = v_11(p_113, q_113, t);
      LocalPopChoice(p_48);
    }
  else
    {
      t = n_48;
      t = fetch_1_0(v_14, t);
    }
  t = term_q_48;
  t = echo_0_0(t);
  t = term_q_45;
  n_113 = t;
  t = term_r_45;
  o_113 = t;
  t = term_r_48;
  t = v_11(n_113, o_113, t);
  t = reverse_acc_2_0(_id, w_14, t);
  t = map_1_0(x_14, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_113 = NULL,y_113 = NULL,z_113 = NULL;
  x_113 = t;
  {
    ATerm s_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_113;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_48 = ATgetFirst((ATermList) t);
                ATerm w_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_113;
          }
        LocalPopChoice(u_48);
      }
    else
      {
        t = s_48;
        t = (ATerm) ATinsert(ATempty, x_113);
      }
  }
  y_113 = t;
  t = term_e_43;
  z_113 = t;
  t = SSL_printnl(z_113, y_113);
  t = x_113;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_114 = NULL,e_114 = NULL;
  t = term_c_44;
  d_114 = t;
  t = term_u_46;
  e_114 = t;
  t = term_v_46;
  t = v_11(d_114, e_114, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm f_114 = NULL,g_114 = NULL;
  t = term_x_48;
  f_114 = t;
  t = term_d_16;
  g_114 = t;
  t = term_y_48;
  t = y_11(f_114, g_114, t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_z_48;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL;
  t = term_x_48;
  j_114 = t;
  t = term_d_16;
  k_114 = t;
  t = term_y_48;
  t = y_11(j_114, k_114, t);
  t = term_a_49;
  h_114 = t;
  t = term_d_16;
  i_114 = t;
  t = term_b_49;
  t = y_11(h_114, i_114, t);
  t = term_k_49;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_o_49;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_14, b_15, c_15, t);
      LocalPopChoice(q_49);
    }
  else
    {
      t = p_49;
      t = Option_3_0(d_15, e_15, f_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_147 (ATerm), ATerm t)
{
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL,s_114 = NULL,u_114 = NULL,v_114 = NULL,c_13 = NULL;
  p_114 = t;
  {
    ATerm r_49 = t;
    int s_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_49;
        t = d_147(t);
        LocalPopChoice(s_49);
      }
    else
      {
        t = r_49;
      }
  }
  t = p_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_114 = ATgetFirst((ATermList) t);
      s_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_114);
  q_114 = t;
  t = term_u_46;
  v_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_46, r_114);
  t = y_11(v_114, r_114, t);
  t = s_114;
  {
    static ATerm i_115 (ATerm t)
    {
      ATerm u_49 = t;
      int v_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_49 = t;
          int x_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_114 = NULL;
              y_114 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_114;
              LocalPopChoice(x_49);
            }
          else
            {
              t = w_49;
              t = d_147(t);
              t = Cons_2_0(_id, i_115, t);
            }
          LocalPopChoice(v_49);
        }
      else
        {
          t = u_49;
          {
            ATerm b_115 = NULL,c_115 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_115 = ATgetFirst((ATermList) t);
                c_115 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_115), (ATerm) ATmakeAppl(sym_Undefined_1, b_115));
          }
        }
      return(t);
    }
    t = i_115(t);
  }
  u_114 = t;
  t = (ATerm) ATinsert(CheckATermList(u_114), (ATerm) ATmakeAppl(sym_Program_1, r_114));
  c_13 = t;
  t = SSLsetAnnotations(c_13, q_114);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm y_115 = NULL;
  y_115 = t;
  if(match_string(t, "--help"))
    {
      t = y_115;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_115;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_115;
        }
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm z_115 = NULL,a_116 = NULL;
  t = term_f_48;
  z_115 = t;
  t = term_d_16;
  a_116 = t;
  t = term_y_49;
  t = y_11(z_115, a_116, t);
  t = term_z_49;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_b_50;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_147 (ATerm), ATerm t)
{
  ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,w_115 = NULL,x_115 = NULL;
  q_115 = t;
  t = term_q_45;
  r_115 = t;
  t = term_c_50;
  t = lookup_table_0_1(r_115, t);
  x_115 = t;
  t = term_r_45;
  s_115 = t;
  t = (ATerm) ATempty;
  t_115 = t;
  t = x_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(s_115, t_115, w_115, t);
  t = q_115;
  {
    static ATerm g_15 (ATerm t)
    {
      ATerm d_50 = t;
      int e_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_147(t);
          LocalPopChoice(e_50);
        }
      else
        {
          t = d_50;
          {
            ATerm f_50 = t;
            int g_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_15, i_15, j_15, t);
                LocalPopChoice(g_50);
              }
            else
              {
                t = f_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_15, t);
  }
  {
    ATerm i_50 = t;
    int j_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_116 = NULL;
        o_116 = t;
        {
          ATerm k_50 = t;
          int l_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_54 = NULL;
              t = o_116;
              {
                ATerm m_50 = t;
                int n_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_54 = NULL,m_54 = NULL;
                    t = term_c_44;
                    l_54 = t;
                    t = term_f_48;
                    m_54 = t;
                    t = term_g_48;
                    t = v_11(l_54, m_54, t);
                    LocalPopChoice(n_50);
                  }
                else
                  {
                    t = m_50;
                    t = fetch_1_0(o_15, t);
                  }
              }
              t = o_116;
              t = default_system_usage_0_0(t);
              t = term_x_20;
              i_54 = t;
              t = SSL_exit(i_54);
              LocalPopChoice(l_50);
            }
          else
            {
              t = k_50;
              {
                ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
                t = term_c_44;
                u_54 = t;
                t = term_x_48;
                v_54 = t;
                t = term_o_50;
                t = v_11(u_54, v_54, t);
                t = o_116;
                t = default_system_about_0_0(t);
                t = term_x_20;
                t_54 = t;
                t = SSL_exit(t_54);
              }
            }
        }
        LocalPopChoice(j_50);
      }
    else
      {
        t = i_50;
        {
          ATerm p_50 = t;
          int q_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL;
              static ATerm p_15 (ATerm t)
              {
                ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL,o_13 = NULL;
                u_116 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_116 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_116);
                s_116 = t;
                t = t_116;
                if(((o_115 != NULL) && (o_115 != t)))
                  _fail(t);
                else
                  o_115 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_116);
                o_13 = t;
                t = SSLsetAnnotations(o_13, s_116);
                return(t);
              }
              t = fetch_1_0(p_15, t);
              t = term_g_16;
              q_116 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_115)), term_r_50);
              r_116 = t;
              t = SSL_printnl(q_116, r_116);
              t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_115)), term_r_50));
              t = default_system_usage_0_0(t);
              t = term_j_16;
              p_116 = t;
              t = SSL_exit(p_116);
              LocalPopChoice(q_50);
            }
          else
            {
              t = p_50;
            }
        }
      }
  }
  p_115 = t;
  t = term_q_45;
  t = table_destroy_0_0(t);
  t = p_115;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t)
{
  ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL;
  t = parse_options_1_0(c_145, t);
  z_116 = t;
  t = term_s_50;
  t = table_create_0_0(t);
  t = term_s_50;
  a_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_50, term_u_50, z_116);
  t = lookup_table_0_1(a_117, t);
  d_117 = t;
  t = term_u_50;
  b_117 = t;
  t = d_117;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(b_117, z_116, c_117, t);
  t = z_116;
  t = e_145(t);
  {
    ATerm w_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_145, t);
        LocalPopChoice(x_50);
      }
    else
      {
        t = w_50;
        {
          ATerm y_50 = t;
          int z_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_145(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_50);
            }
          else
            {
              t = y_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = if_verbose2_1_0(y_15, t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm e_117 = NULL,f_117 = NULL;
  t = term_a_51;
  e_117 = t;
  t = term_d_16;
  f_117 = t;
  t = term_d_51;
  t = y_11(e_117, f_117, t);
  t = term_e_51;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = term_f_51;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL;
  g_117 = t;
  t = term_c_44;
  k_117 = t;
  t = term_u_46;
  l_117 = t;
  t = term_v_46;
  t = v_11(k_117, l_117, t);
  h_117 = t;
  t = term_g_16;
  i_117 = t;
  t = (ATerm) ATinsert(ATempty, h_117);
  j_117 = t;
  t = SSL_printnl(i_117, j_117);
  t = g_117;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_144 (ATerm), ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm t)
{
  static ATerm q_15 (ATerm t)
  {
    ATerm g_51 = t;
    int h_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_144(t);
        LocalPopChoice(h_51);
      }
    else
      {
        t = g_51;
        {
          ATerm i_51 = t;
          int j_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(j_51);
            }
          else
            {
              t = i_51;
              {
                ATerm k_51 = t;
                int l_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(l_51);
                  }
                else
                  {
                    t = k_51;
                    {
                      ATerm m_51 = t;
                      int n_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_15, w_15, x_15, t);
                          LocalPopChoice(n_51);
                        }
                      else
                        {
                          t = m_51;
                          {
                            ATerm o_51 = t;
                            int p_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(p_51);
                              }
                            else
                              {
                                t = o_51;
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
  static ATerm u_15 (ATerm t)
  {
    ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL;
    n_117 = t;
    {
      ATerm q_51 = t;
      int r_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_117 != NULL) && (m_117 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_117 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_15, t);
          LocalPopChoice(r_51);
        }
      else
        {
          t = q_51;
          t = term_s_51;
          m_117 = t;
        }
    }
    t = not_null(m_117);
    t = ReadFromFile_0_0(t);
    o_117 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_117, o_117);
    t = apply_strategy_1_0(l_144, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_15, n_144, s_15, u_15, t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL,c_118 = NULL,f_118 = NULL,g_118 = NULL,v_13 = NULL,s_13 = NULL,r_13 = NULL;
  g_118 = t;
  if(match_cons(t, sym__2))
    {
      s_117 = ATgetArgument(t, 0);
      t_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_118);
  r_117 = t;
  t = t_117;
  if(match_cons(t, sym_Specification_1))
    {
      y_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_117);
  x_117 = t;
  t = y_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_118 = ATgetFirst((ATermList) t);
      b_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_117);
  z_117 = t;
  t = b_118;
  t = Cons_2_0(b_16, c_16, t);
  c_118 = t;
  t = (ATerm) ATinsert(CheckATermList(c_118), a_118);
  r_13 = t;
  t = SSLsetAnnotations(r_13, z_117);
  f_118 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_118);
  s_13 = t;
  t = SSLsetAnnotations(s_13, x_117);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm t_51 = ATgetArgument(t, 0);
      if(((ATgetType(t_51) == AT_LIST) && !(ATisEmpty(t_51))))
        {
          v_117 = ATgetFirst((ATermList) t_51);
          {
            ATerm v_51 = (ATerm) ATgetNext((ATermList) t_51);
            if(((ATgetType(v_51) == AT_LIST) && !(ATisEmpty(v_51))))
              {
                ATerm w_51 = ATgetFirst((ATermList) v_51);
                if(match_cons(w_51, sym_Strategies_1))
                  {
                    w_117 = ATgetArgument(w_51, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm x_51 = (ATerm) ATgetNext((ATermList) v_51);
                  if(((ATgetType(x_51) != AT_LIST) || !(ATisEmpty(x_51))))
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
  t = q_9(v_117, w_117, t);
  u_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_117, u_117);
  v_13 = t;
  t = SSLsetAnnotations(v_13, r_117);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL,q_13 = NULL;
  k_118 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_118);
  h_118 = t;
  t = i_118;
  t = needed_defs_0_0(t);
  j_118 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, j_118);
  q_13 = t;
  t = SSLsetAnnotations(q_13, h_118);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_16, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_d_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_y_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_o_50;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_j_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_r_48;
ATerm term_o_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_v_46;
ATerm term_t_46;
ATerm term_r_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_v_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_m_45;
ATerm term_v_44;
ATerm term_t_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_o_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_d_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_e_43;
ATerm term_z_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_e_37;
ATerm term_u_36;
ATerm term_v_35;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_g_31;
ATerm term_b_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_c_25;
ATerm term_i_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_y_20;
ATerm term_i_18;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_n_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("o_1", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATempty);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_21);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Call_2, term_s_22, (ATerm) ATempty);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Call_2, term_q_23, (ATerm) ATempty);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, (ATerm) ATempty);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_23);
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
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_u_30, (ATerm) ATempty);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_30);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_y_20);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym__2, term_t_42, term_u_42);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym__2, term_a_44, term_b_44);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__2, term_b_44, term_y_20);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_20);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym__2, term_q_44, term_d_16);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(sym__2, term_a_44, term_t_46);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__2, term_a_44, term_f_48);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym__2, term_m_45, term_q_45);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym__2, term_w_48, term_d_16);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym__2, term_z_48, term_d_16);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym__2, term_f_48, term_d_16);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym__3, term_m_45, term_q_45, (ATerm) ATempty);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym__2, term_a_44, term_w_48);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(sym__2, term_y_50, term_d_16);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_141 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm p_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm q_9 (ATerm b_95, ATerm a_95, ATerm t);
static ATerm s_9 (ATerm b_73, ATerm c_73, ATerm d_73, ATerm t);
static ATerm w_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm v_118 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm y_9 (ATerm m_27, ATerm l_27, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm free_vars2_4_0 (ATerm r_143 (ATerm), ATerm s_143 (ATerm), ATerm t_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_143 (ATerm), ATerm t);
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
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm h_44 (ATerm a_37, ATerm b_37, ATerm t);
static ATerm p_44 (ATerm j_37, ATerm o_37, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm b_154 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm h_10 (ATerm x_89, ATerm y_89, ATerm z_89, ATerm t);
static ATerm o_58 (ATerm b_58, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm b_121 (ATerm), ATerm t);
static ATerm l_10 (ATerm k_85, ATerm l_85, ATerm m_85, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm x_119 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm z_123 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm m_10 (ATerm w_42, ATerm x_42, ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm copy_1_0 (ATerm v_140 (ATerm), ATerm t);
static ATerm n_10 (ATerm e_72, ATerm f_72, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm d_79 (ATerm h_75, ATerm i_75, ATerm l_75, ATerm t_75, ATerm t);
static ATerm e_79 (ATerm v_77, ATerm w_77, ATerm x_77, ATerm y_77, ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm f_135 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm f_127 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm p_121 (ATerm), ATerm t);
static ATerm z_9 (ATerm n_45, ATerm o_45, ATerm t);
ATerm end_scope_1_0 (ATerm n_131 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_131 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm d_10 (ATerm e_74, ATerm f_74, ATerm j_74, ATerm g_74, ATerm i_74, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm t_80 (ATerm q_79, ATerm r_79, ATerm s_79, ATerm t_79, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm k_135 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_82 (ATerm y_81, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_10 (ATerm x_136 (ATerm), ATerm r_60, ATerm q_60, ATerm t);
ATerm genzip_4_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm y_10 (ATerm v_816, ATerm a_817, ATerm b_83, ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm i_86 (ATerm i_84, ATerm j_84, ATerm k_84, ATerm t);
static ATerm p_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_11 (ATerm x_153 (ATerm), ATerm y_153 (ATerm), ATerm z_153 (ATerm), ATerm s_84, ATerm p_84, ATerm x_84, ATerm t_84, ATerm q_84, ATerm r_84, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm x_153 (ATerm), ATerm y_153 (ATerm), ATerm z_153 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t);
ATerm for_3_0 (ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm t);
static ATerm q_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm u_39 (ATerm b_39, ATerm c_39, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm d_11 (ATerm q_131 (ATerm), ATerm e_44, ATerm c_44, ATerm t);
static ATerm e_11 (ATerm f_137 (ATerm), ATerm g_137 (ATerm), ATerm x_60, ATerm w_60, ATerm t);
static ATerm f_11 (ATerm c_137 (ATerm), ATerm t_60, ATerm s_60, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm h_11 (ATerm t_45, ATerm u_45, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm h_140 (ATerm), ATerm i_140 (ATerm), ATerm j_140 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm t);
static ATerm j_11 (ATerm m_35, ATerm n_35, ATerm t);
static ATerm k_11 (ATerm e_34, ATerm f_34, ATerm t);
static ATerm m_11 (ATerm h_127 (ATerm), ATerm k_270, ATerm k_34, ATerm t);
static ATerm l_11 (ATerm a_34, ATerm b_34, ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm i_148 (ATerm), ATerm t);
static ATerm u_103 (ATerm o_103, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_11 (ATerm g_34, ATerm t);
static ATerm o_11 (ATerm w_69, ATerm x_69, ATerm t);
static ATerm p_11 (ATerm o_35, ATerm p_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_105 (ATerm e_104, ATerm t);
static ATerm i_105 (ATerm i_104, ATerm j_104, ATerm k_104, ATerm t);
static ATerm j_105 (ATerm u_104, ATerm v_104, ATerm w_104, ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_135 (ATerm), ATerm t);
static ATerm v_11 (ATerm b_47, ATerm c_47, ATerm t);
ATerm if_verbose2_1_0 (ATerm y_128 (ATerm), ATerm t);
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
static ATerm y_11 (ATerm m_39, ATerm n_39, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_11 (ATerm i_45, ATerm j_45, ATerm h_45, ATerm t);
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_11 (ATerm q_42, ATerm r_42, ATerm t);
ATerm foldr_2_0 (ATerm f_140 (ATerm), ATerm g_140 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_128 (ATerm), ATerm t);
static ATerm r_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm need_help_1_0 (ATerm g_149 (ATerm), ATerm t);
static ATerm z_11 (ATerm a_50, ATerm b_50, ATerm c_50, ATerm t);
static ATerm a_12 (ATerm d_50, ATerm e_50, ATerm t);
ATerm lookup_table_0_1 (ATerm u_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_50, ATerm j_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_11 (ATerm f_50, ATerm g_50, ATerm t);
static ATerm u_11 (ATerm k_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm t_134 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm j_151 (ATerm), ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm parse_options_1_0 (ATerm i_151 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_149 (ATerm), ATerm j_149 (ATerm), ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm iowrap_3_0 (ATerm r_148 (ATerm), ATerm s_148 (ATerm), ATerm t_148 (ATerm), ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,i_0 = NULL;
  a_0 = t;
  t = term_d_16;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_e_16;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_16), b_0), term_h_16);
  i_0 = t;
  t = SSL_printnl(e_0, i_0);
  t = term_j_16;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,z_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      v_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 = NULL,a_2 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty);
        y_1 = t;
        t = term_n_16;
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty));
        t = h_11(a_2, y_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm o_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_16) != ATmakeSymbol("o_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, z_1);
        LocalPopChoice(m_16);
      }
    else
      {
        t = k_16;
        {
          ATerm p_3 = NULL,b_4 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty);
          p_3 = t;
          t = term_n_16;
          b_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty));
          t = h_11(b_4, p_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm r_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("m_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, z_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm j_141 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL;
  s_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_2 = ATgetFirst((ATermList) t);
          u_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 = NULL,n_4 = NULL,v_4 = NULL,f_0 = NULL;
            t = SSLgetAnnotations(s_2);
            g_4 = t;
            t = t_2;
            t = j_141(t);
            n_4 = t;
            t = u_2;
            t = filter_1_0(j_141, t);
            v_4 = t;
            t = (ATerm) ATinsert(CheckATermList(v_4), n_4);
            f_0 = t;
            t = SSLsetAnnotations(f_0, g_4);
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            t = u_2;
            t = filter_1_0(j_141, t);
          }
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  y_2 = t;
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            z_2 = ATgetArgument(t, 0);
            {
              ATerm z_16 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_16);
        {
          ATerm d_3 = NULL,e_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_2, (ATerm) ATempty);
          d_3 = t;
          t = term_b_17;
          e_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, z_2, (ATerm) ATempty), term_b_17);
          t = d_11(h_0, d_3, e_3, t);
          t = y_2;
        }
      }
    else
      {
        t = w_16;
        {
          ATerm h_3 = NULL,i_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              z_2 = ATgetArgument(t, 0);
              {
                ATerm d_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_2, (ATerm) ATempty);
          h_3 = t;
          t = term_h_17;
          i_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, z_2, (ATerm) ATempty), term_h_17);
          t = d_11(p_0, h_3, i_3, t);
          t = y_2;
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
static ATerm q_9 (ATerm b_95, ATerm a_95, ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,n_0 = NULL,m_0 = NULL,k_0 = NULL;
  t = a_95;
  t = topdown_1_0(u_0, t);
  t = b_95;
  if(match_cons(t, sym_Signature_1))
    {
      l_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_95);
  k_3 = t;
  t = l_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_3 = ATgetFirst((ATermList) t);
      r_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  o_3 = t;
  t = q_3;
  if(match_cons(t, sym_Constructors_1))
    {
      u_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_3);
  t_3 = t;
  t = u_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, v_3);
  k_0 = t;
  t = SSLsetAnnotations(k_0, t_3);
  w_3 = t;
  t = r_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_3), w_3);
  m_0 = t;
  t = SSLsetAnnotations(m_0, o_3);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, s_3);
  n_0 = t;
  t = SSLsetAnnotations(n_0, k_3);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, a_95)), m_3));
  return(t);
}
static ATerm s_9 (ATerm b_73, ATerm c_73, ATerm d_73, ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  t = term_e_16;
  z_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), d_73), term_p_17), c_73), term_m_17), b_73), term_l_17);
  a_4 = t;
  t = SSL_printnl(z_3, a_4);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), d_73), term_p_17), c_73), term_m_17), b_73), term_l_17);
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
  ATerm u_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  u_4 = t;
  if(match_cons(t, sym__2))
    {
      w_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = z_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm u_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_5 = NULL,k_5 = NULL;
        t = w_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_17 = ATgetFirst((ATermList) t);
            ATerm z_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(z_17) == AT_LIST) && !(ATisEmpty(z_17))))
              {
                ATerm a_18 = ATgetFirst((ATermList) z_17);
                ATerm f_18 = (ATerm) ATgetNext((ATermList) z_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm h_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(w_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_18;
            }
        }
        t = term_e_16;
        j_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, w_4), term_i_18);
        k_5 = t;
        t = SSL_printnl(j_5, k_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, w_4), term_i_18);
        t = giving_up_0_0(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = u_17;
        {
          ATerm e_6 = NULL,f_6 = NULL;
          t = w_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_18 = ATgetFirst((ATermList) t);
              if(match_cons(j_18, sym__2))
                {
                  e_6 = ATgetArgument(j_18, 0);
                  f_6 = ATgetArgument(j_18, 1);
                }
              else
                _fail(t);
              {
                ATerm n_18 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(n_18) != AT_LIST) || !(ATisEmpty(n_18))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_4, (ATerm) ATmakeAppl(sym__2, e_6, f_6));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, w_4, (ATerm) ATmakeAppl(sym__2, e_6, f_6));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  l_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      {
        ATerm o_6 = NULL,r_6 = NULL,s_6 = NULL,x_0 = NULL;
        t = SSLgetAnnotations(l_15);
        o_6 = t;
        t = m_15;
        t = r_118(t);
        r_6 = t;
        t = n_15;
        t = r_118(t);
        s_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_6, s_6);
        x_0 = t;
        t = SSLsetAnnotations(x_0, o_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_15 = ATgetArgument(t, 0);
          n_15 = ATgetArgument(t, 1);
          k_15 = ATgetArgument(t, 2);
          {
            ATerm g_7 = NULL,x_7 = NULL,a_8 = NULL,c_8 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(l_15);
            g_7 = t;
            t = m_15;
            t = t_118(t);
            x_7 = t;
            t = n_15;
            t = t_118(t);
            a_8 = t;
            t = k_15;
            t = r_118(t);
            c_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, x_7, a_8, c_8);
            a_1 = t;
            t = SSLsetAnnotations(a_1, g_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_15 = ATgetArgument(t, 0);
              n_15 = ATgetArgument(t, 1);
              k_15 = ATgetArgument(t, 2);
              j_15 = ATgetArgument(t, 3);
              {
                ATerm h_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,c_1 = NULL;
                t = SSLgetAnnotations(l_15);
                h_9 = t;
                t = m_15;
                t = t_118(t);
                m_9 = t;
                t = n_15;
                t = t_118(t);
                n_9 = t;
                t = k_15;
                t = t_118(t);
                o_9 = t;
                t = j_15;
                t = r_118(t);
                p_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_9, n_9, o_9, p_9);
                c_1 = t;
                t = SSLsetAnnotations(c_1, h_9);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  m_15 = ATgetArgument(t, 0);
                  n_15 = ATgetArgument(t, 1);
                  k_15 = ATgetArgument(t, 2);
                  j_15 = ATgetArgument(t, 3);
                  {
                    ATerm j_10 = NULL,r_10 = NULL,s_10 = NULL,v_10 = NULL,w_10 = NULL,d_1 = NULL;
                    t = SSLgetAnnotations(l_15);
                    j_10 = t;
                    t = m_15;
                    t = t_118(t);
                    r_10 = t;
                    t = n_15;
                    t = t_118(t);
                    s_10 = t;
                    t = k_15;
                    t = t_118(t);
                    v_10 = t;
                    t = j_15;
                    t = r_118(t);
                    w_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, r_10, s_10, v_10, w_10);
                    d_1 = t;
                    t = SSLsetAnnotations(d_1, j_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      m_15 = ATgetArgument(t, 0);
                      n_15 = ATgetArgument(t, 1);
                      k_15 = ATgetArgument(t, 2);
                      {
                        ATerm e_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,h_1 = NULL;
                        t = SSLgetAnnotations(l_15);
                        e_12 = t;
                        t = m_15;
                        t = t_118(t);
                        i_12 = t;
                        t = n_15;
                        t = t_118(t);
                        j_12 = t;
                        t = k_15;
                        t = t_118(t);
                        k_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, i_12, j_12, k_12);
                        h_1 = t;
                        t = SSLsetAnnotations(h_1, e_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          m_15 = ATgetArgument(t, 0);
                          n_15 = ATgetArgument(t, 1);
                          {
                            ATerm u_12 = NULL,y_12 = NULL,z_12 = NULL,j_1 = NULL;
                            t = SSLgetAnnotations(l_15);
                            u_12 = t;
                            t = m_15;
                            t = t_118(t);
                            y_12 = t;
                            t = n_15;
                            t = r_118(t);
                            z_12 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, y_12, z_12);
                            j_1 = t;
                            t = SSLsetAnnotations(j_1, u_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              m_15 = ATgetArgument(t, 0);
                              n_15 = ATgetArgument(t, 1);
                              {
                                ATerm i_13 = NULL,m_13 = NULL,n_13 = NULL,l_1 = NULL;
                                t = SSLgetAnnotations(l_15);
                                i_13 = t;
                                t = m_15;
                                t = t_118(t);
                                m_13 = t;
                                t = n_15;
                                t = r_118(t);
                                n_13 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, m_13, n_13);
                                l_1 = t;
                                t = SSLsetAnnotations(l_1, i_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  m_15 = ATgetArgument(t, 0);
                                  n_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_14 = NULL,b_15 = NULL,c_15 = NULL,n_1 = NULL;
                                    t = SSLgetAnnotations(l_15);
                                    w_14 = t;
                                    t = m_15;
                                    t = t_118(t);
                                    b_15 = t;
                                    t = n_15;
                                    t = r_118(t);
                                    c_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, b_15, c_15);
                                    n_1 = t;
                                    t = SSLsetAnnotations(n_1, w_14);
                                  }
                                }
                              else
                                {
                                  ATerm c_16 = NULL,f_16 = NULL,g_16 = NULL,p_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      m_15 = ATgetArgument(t, 0);
                                      n_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(l_15);
                                  c_16 = t;
                                  t = m_15;
                                  t = t_118(t);
                                  f_16 = t;
                                  t = n_15;
                                  t = r_118(t);
                                  g_16 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, f_16, g_16);
                                  p_1 = t;
                                  t = SSLsetAnnotations(p_1, c_16);
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
ATerm dynrule_sargs_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,s_16 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          p_16 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_18);
      t = p_16;
      if(match_cons(t, sym_DynRuleId_1))
        {
          q_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_16;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_18 = ATgetArgument(t, 0);
          s_16 = ATgetArgument(t, 1);
          {
            ATerm u_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_16;
    }
  else
    {
      t = p_18;
      {
        ATerm v_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                p_16 = ATgetArgument(t, 0);
                {
                  ATerm y_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_18);
            t = p_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_19 = ATgetArgument(t, 0);
                s_16 = ATgetArgument(t, 1);
                {
                  ATerm b_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = s_16;
          }
        else
          {
            t = v_18;
            if(match_cons(t, sym_AddDynRule_2))
              {
                p_16 = ATgetArgument(t, 0);
                {
                  ATerm c_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = p_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_19 = ATgetArgument(t, 0);
                s_16 = ATgetArgument(t, 1);
                {
                  ATerm f_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = s_16;
          }
      }
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm w_18 = NULL;
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_18 = ATgetArgument(t, 0);
          {
            ATerm i_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_19);
      t = w_18;
    }
  else
    {
      t = g_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_18;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm l_19 = NULL;
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm m_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_19);
      t = l_19;
    }
  else
    {
      t = j_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_19;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm g_18 = NULL;
  ATerm o_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm r_19 = ATgetArgument(t, 0);
          g_18 = ATgetArgument(t, 1);
          {
            ATerm s_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_19);
      t = g_18;
      t = map_1_0(z_0, t);
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm t_19 = ATgetArgument(t, 0);
          g_18 = ATgetArgument(t, 1);
          {
            ATerm v_19 = ATgetArgument(t, 2);
          }
          {
            ATerm x_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_18;
      t = map_1_0(f_1, t);
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm a_20 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_20 = ATgetArgument(t, 0);
          {
            ATerm b_20 = ATgetArgument(t, 1);
          }
          {
            ATerm c_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
      t = a_20;
    }
  else
    {
      t = y_19;
      if(match_cons(t, sym_SDefT_4))
        {
          a_20 = ATgetArgument(t, 0);
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
      t = a_20;
    }
  return(t);
}
static ATerm y_9 (ATerm m_27, ATerm l_27, ATerm t)
{
  t = m_27;
  t = map_1_0(k_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm c_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(w_1, c_17, e_17, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      if((f_17 != ATgetArgument(t, 1)))
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
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym__2))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(c_2, n_17, o_17, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      if((q_17 != ATgetArgument(t, 1)))
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
  ATerm l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      if((l_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm r_143 (ATerm), ATerm s_143 (ATerm), ATerm t_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_143 (ATerm), ATerm t)
{
  static ATerm m_21 (ATerm t)
  {
    ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
    w_20 = t;
    {
      ATerm g_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_143(t);
          LocalPopChoice(h_20);
        }
      else
        {
          t = g_20;
          t = (ATerm) ATempty;
        }
    }
    u_20 = t;
    t = w_20;
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_20 = NULL,v_16 = NULL,x_16 = NULL;
          t = s_143(t);
          z_20 = t;
          t = w_20;
          {
            static ATerm q_1 (ATerm t)
            {
              ATerm l_16 = NULL;
              t = m_21(t);
              l_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_16, z_20);
              t = t_10(u_143, l_16, z_20, t);
              return(t);
            }
            t = t_143(q_1, m_21, r_1, t);
          }
          x_16 = t;
          t = SSL_explode_term(x_16);
          if(match_cons(t, sym__2))
            {
              ATerm k_20 = ATgetArgument(t, 0);
              v_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_16;
          t = foldr_3_0(s_1, t_1, _id, t);
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          {
            ATerm i_17 = NULL;
            t = SSL_explode_term(w_20);
            if(match_cons(t, sym__2))
              {
                ATerm l_20 = ATgetArgument(t, 0);
                i_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_17;
            t = foldr_3_0(x_1, b_2, m_21, t);
          }
        }
    }
    v_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
    t = f_11(d_2, u_20, v_20, t);
    return(t);
  }
  t = m_21(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      if(match_cons(m_20, sym_SVar_1))
        {
          y_21 = ATgetArgument(m_20, 0);
        }
      else
        _fail(t);
      z_21 = ATgetArgument(t, 1);
      a_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_21;
  t = foldr_3_0(h_2, i_2, j_2, t);
  b_22 = t;
  t = a_22;
  t = foldr_3_0(k_2, l_2, m_2, t);
  c_22 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_21, (ATerm) ATmakeAppl(sym__2, b_22, c_22)));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,z_22 = NULL;
      k_22 = t;
      if(match_cons(t, sym_Let_2))
        {
          n_22 = ATgetArgument(t, 0);
          o_22 = ATgetArgument(t, 1);
          t = k_22;
          t = y_9(n_22, o_22, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              n_22 = ATgetArgument(t, 0);
              o_22 = ATgetArgument(t, 1);
              p_22 = ATgetArgument(t, 2);
              t = o_22;
              t = map_1_0(n_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  n_22 = ATgetArgument(t, 0);
                  o_22 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, n_22);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_22 = ATgetArgument(t, 0);
                      o_22 = ATgetArgument(t, 1);
                      p_22 = ATgetArgument(t, 2);
                      z_22 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_22;
                  t = map_1_0(q_2, t);
                }
            }
        }
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
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
            t = dynrule_sargs_1_0(r_2, t);
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(match_cons(t_20, sym__2))
        {
          l_24 = ATgetArgument(t_20, 0);
          {
            ATerm x_20 = ATgetArgument(t_20, 1);
          }
        }
      else
        _fail(t);
      if((l_24 != ATgetArgument(t, 1)))
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
  t = term_y_20;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(f_22, g_22, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm h_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(h_22, j_22, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm k_23 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_23 = ATgetArgument(t, 0);
          {
            ATerm c_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_21);
      t = k_23;
    }
  else
    {
      t = a_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_23;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm x_23 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_23 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
      t = x_23;
    }
  else
    {
      t = d_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_23;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = map_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm f_24 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_24 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = f_24;
    }
  else
    {
      t = g_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_24;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(e_2, f_2, sboundin_3_0, g_2, t);
  return(t);
}
static ATerm h_44 (ATerm a_37, ATerm b_37, ATerm t)
{
  t = a_37;
  {
    ATerm j_21 = t;
    if((PushChoice() == 0))
      {
        ATerm d_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,o_2 = NULL;
        i_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_37 = ATgetFirst((ATermList) t);
            h_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_37);
        d_37 = t;
        t = h_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_37), g_37);
        o_2 = t;
        t = SSLsetAnnotations(o_2, d_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_21, a_37);
  return(t);
}
static ATerm p_44 (ATerm j_37, ATerm o_37, ATerm t)
{
  t = j_37;
  {
    ATerm n_21 = t;
    if((PushChoice() == 0))
      {
        ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,p_2 = NULL;
        t_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_37 = ATgetFirst((ATermList) t);
            s_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_37);
        q_37 = t;
        t = s_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(s_37), r_37);
        p_2 = t;
        t = SSLsetAnnotations(p_2, q_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, j_37);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,p_19 = NULL;
  p_38 = t;
  t = SSL_explode_term(p_38);
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_21 = ATgetArgument(t, 1);
        if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
          {
            q_38 = ATgetFirst((ATermList) u_21);
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
  t = SSL_explode_term(p_38);
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
          {
            ATerm d_22 = ATgetFirst((ATermList) x_21);
            ATerm e_22 = (ATerm) ATgetNext((ATermList) x_21);
            if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
              {
                p_19 = ATgetFirst((ATermList) e_22);
                {
                  ATerm l_22 = (ATerm) ATgetNext((ATermList) e_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, p_19), q_38));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  if(match_cons(t, sym__2))
    {
      z_39 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, a_40), z_39));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  if(match_cons(t, sym__2))
    {
      f_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, g_40), f_40));
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  if(match_cons(t, sym__2))
    {
      d_41 = ATgetArgument(t, 0);
      e_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_22, (ATerm) ATinsert(ATinsert(ATempty, e_41), d_41));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  if(match_cons(t, sym__2))
    {
      m_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_22, (ATerm) ATinsert(ATinsert(ATempty, n_41), m_41));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,j_38 = NULL,k_38 = NULL;
  e_38 = t;
  if(match_cons(t, sym_Anno_2))
    {
      j_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
      {
        ATerm n_38 = NULL;
        t = k_38;
        t = foldr_2_0(x_2, a_3, t);
        n_38 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, j_38, n_38);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          j_38 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, j_38, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              j_38 = ATgetArgument(t, 0);
              {
                ATerm u_19 = NULL;
                t = j_38;
                {
                  ATerm u_22 = t;
                  int v_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_w_22;
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
                                      t = term_a_23;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_b_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(v_22);
                    }
                  else
                    {
                      t = u_22;
                      {
                        ATerm w_19 = NULL;
                        t = SSL_explode_string(j_38);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm d_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(d_23) != AT_INT) || (ATgetInt((ATermInt) d_23) != 39)))
                              _fail(t);
                            {
                              ATerm e_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                                {
                                  w_19 = ATgetFirst((ATermList) e_23);
                                  {
                                    ATerm f_23 = (ATerm) ATgetNext((ATermList) e_23);
                                    if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
                                      {
                                        ATerm g_23 = ATgetFirst((ATermList) f_23);
                                        if(((ATgetType(g_23) != AT_INT) || (ATgetInt((ATermInt) g_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm h_23 = (ATerm) ATgetNext((ATermList) f_23);
                                          if(((ATgetType(h_23) != AT_LIST) || !(ATisEmpty(h_23))))
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
                        t = w_19;
                      }
                    }
                }
                u_19 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, u_19);
              }
            }
          else
            {
              ATerm i_23 = t;
              int j_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      j_38 = ATgetArgument(t, 0);
                      {
                        ATerm l_23 = ATgetArgument(t, 1);
                      }
                      d_38 = ATgetArgument(t, 2);
                      u_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, j_38, d_38, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_37), (ATerm) ATempty));
                }
              else
                {
                  t = i_23;
                  {
                    ATerm m_23 = t;
                    int n_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            j_38 = ATgetArgument(t, 0);
                            {
                              ATerm o_23 = ATgetArgument(t, 1);
                            }
                            d_38 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(n_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, j_38, d_38, term_r_23);
                      }
                    else
                      {
                        t = m_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            j_38 = ATgetArgument(t, 0);
                            k_38 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, j_38, k_38, term_r_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                j_38 = ATgetArgument(t, 0);
                                k_38 = ATgetArgument(t, 1);
                                {
                                  static ATerm b_3 (ATerm t)
                                  {
                                    t = k_38;
                                    return(t);
                                  }
                                  t = j_38;
                                  t = foldr_2_0(b_3, c_3, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    j_38 = ATgetArgument(t, 0);
                                    t = j_38;
                                    t = foldr_2_0(f_3, g_3, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        j_38 = ATgetArgument(t, 0);
                                        t = j_38;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            v_37 = ATgetFirst((ATermList) t);
                                            b_38 = (ATerm) ATgetNext((ATermList) t);
                                            t = b_38;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm t_23 = t;
                                                int u_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = h_44(j_38, e_38, t);
                                                    LocalPopChoice(u_23);
                                                  }
                                                else
                                                  {
                                                    t = t_23;
                                                    t = v_37;
                                                  }
                                              }
                                            else
                                              {
                                                t = h_44(j_38, e_38, t);
                                              }
                                          }
                                        else
                                          {
                                            t = h_44(j_38, e_38, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            j_38 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, j_38));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                j_38 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, j_38));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    j_38 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, j_38));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        j_38 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, j_38));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            j_38 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_38), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                j_38 = ATgetArgument(t, 0);
                                                                k_38 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_38), k_38);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    j_38 = ATgetArgument(t, 0);
                                                                    k_38 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm j_3 (ATerm t)
                                                                      {
                                                                        t = k_38;
                                                                        return(t);
                                                                      }
                                                                      t = j_38;
                                                                      t = foldr_2_0(j_3, n_3, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        j_38 = ATgetArgument(t, 0);
                                                                        t = j_38;
                                                                        t = foldr_2_0(x_3, y_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            j_38 = ATgetArgument(t, 0);
                                                                            k_38 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, (ATerm) ATinsert(CheckATermList(k_38), j_38));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                j_38 = ATgetArgument(t, 0);
                                                                                t = j_38;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    v_37 = ATgetFirst((ATermList) t);
                                                                                    b_38 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = b_38;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm v_23 = t;
                                                                                        int w_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = p_44(j_38, e_38, t);
                                                                                            LocalPopChoice(w_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_23;
                                                                                            t = v_37;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_44(j_38, e_38, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_44(j_38, e_38, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_y_23;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        j_38 = ATgetArgument(t, 0);
                                                                                        k_38 = ATgetArgument(t, 1);
                                                                                        t = k_38;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            c_38 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_a_24, (ATerm) ATinsert(ATinsert(ATempty, c_38), j_38));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            j_38 = ATgetArgument(t, 0);
                                                                                            t = j_38;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                j_38 = ATgetArgument(t, 0);
                                                                                                k_38 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, j_38, k_38, term_b_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    j_38 = ATgetArgument(t, 0);
                                                                                                    k_38 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, j_38, k_38, term_b_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        j_38 = ATgetArgument(t, 0);
                                                                                                        k_38 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, j_38, (ATerm)ATempty, k_38);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            j_38 = ATgetArgument(t, 0);
                                                                                                            k_38 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, k_38, j_38);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                j_38 = ATgetArgument(t, 0);
                                                                                                                k_38 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, j_38, k_38, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    j_38 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, j_38, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        j_38 = ATgetArgument(t, 0);
                                                                                                                        k_38 = ATgetArgument(t, 1);
                                                                                                                        d_38 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, j_38, k_38, (ATerm)ATempty, d_38);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            j_38 = ATgetArgument(t, 0);
                                                                                                                            k_38 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, j_38, (ATerm)ATempty, (ATerm)ATempty, k_38);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                j_38 = ATgetArgument(t, 0);
                                                                                                                                k_38 = ATgetArgument(t, 1);
                                                                                                                                d_38 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, j_38, k_38, (ATerm)ATempty, d_38);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    j_38 = ATgetArgument(t, 0);
                                                                                                                                    k_38 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, j_38, (ATerm)ATempty, (ATerm)ATempty, k_38);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        j_38 = ATgetArgument(t, 0);
                                                                                                                                        k_38 = ATgetArgument(t, 1);
                                                                                                                                        d_38 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, j_38, k_38, (ATerm)ATempty, d_38);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            j_38 = ATgetArgument(t, 0);
                                                                                                                                            k_38 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, j_38, (ATerm)ATempty, (ATerm)ATempty, k_38);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm c_24 = ATgetArgument(t, 0);
                                                                                                                                                k_38 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, k_38);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm u_44 = NULL,y_44 = NULL,z_44 = NULL;
  y_44 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      z_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
      {
        ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
        t = y_44;
        t = new_0_0(t);
        c_45 = t;
        t = new_0_0(t);
        d_45 = t;
        t = new_0_0(t);
        e_45 = t;
        t = new_0_0(t);
        f_45 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_45), e_45), d_45), c_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, c_45), (ATerm) ATmakeAppl(sym_Var_1, e_45))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, z_44, (ATerm)ATmakeAppl(sym_Var_1, c_45), (ATerm) ATmakeAppl(sym_Var_1, d_45)), (ATerm) ATmakeAppl(sym_BAM_3, u_44, (ATerm)ATmakeAppl(sym_Var_1, e_45), (ATerm) ATmakeAppl(sym_Var_1, f_45)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_45)), (ATerm) ATmakeAppl(sym_Var_1, d_45))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_44 = ATgetArgument(t, 0);
          {
            ATerm g_45 = NULL,k_45 = NULL,s_45 = NULL,w_45 = NULL;
            t = y_44;
            t = new_0_0(t);
            s_45 = t;
            t = z_44;
            {
              static ATerm d_4 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((g_45 != NULL) && (g_45 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      g_45 = ATgetArgument(t, 0);
                    if(((k_45 != NULL) && (k_45 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      k_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, s_45);
                return(t);
              }
              t = oncetd_1_0(d_4, t);
            }
            w_45 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_45)), not_null(g_45))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_45)), (ATerm) ATmakeAppl(sym_Build_1, w_45))));
          }
        }
      else
        {
          ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              z_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_44;
          t = new_0_0(t);
          f_46 = t;
          t = new_0_0(t);
          g_46 = t;
          t = z_44;
          {
            static ATerm e_4 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((d_46 != NULL) && (d_46 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_46 = ATgetArgument(t, 0);
                  if(((e_46 != NULL) && (e_46 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    e_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, f_46);
              return(t);
            }
            t = oncetd_1_0(e_4, t);
          }
          h_46 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_46), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_46)), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_46))))), (ATerm)ATmakeAppl(sym_Var_1, f_46), (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_46)), not_null(d_46)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm o_46 = NULL,s_46 = NULL;
  o_46 = t;
  if(match_cons(t, sym_Match_1))
    {
      s_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL;
        t = o_46;
        t = new_0_0(t);
        e_47 = t;
        t = s_46;
        {
          static ATerm f_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_47 = ATgetArgument(t, 0);
                if(((d_47 != NULL) && (d_47 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  d_47 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_47), a_47);
            return(t);
          }
          t = pat_td_1_0(f_4, t);
        }
        f_47 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_47), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_47))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_47))))));
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_47 = NULL,m_47 = NULL,n_47 = NULL;
              t = o_46;
              t = new_0_0(t);
              m_47 = t;
              t = s_46;
              {
                static ATerm h_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_47);
                  return(t);
                }
                t = pat_td_1_0(h_4, t);
              }
              n_47 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_47)), not_null(h_47))));
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
                t = o_46;
                t = new_0_0(t);
                r_47 = t;
                t = s_46;
                {
                  static ATerm j_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_47 = ATgetArgument(t, 0);
                        if(((p_47 != NULL) && (p_47 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_47 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_47);
                    return(t);
                  }
                  t = pat_td_1_0(j_4, t);
                }
                s_47 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_47)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_47)), not_null(q_47)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm b_154 (ATerm), ATerm t)
{
  ATerm o_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_154(t);
      LocalPopChoice(t_24);
    }
  else
    {
      t = o_24;
      {
        ATerm n_52 = NULL,o_52 = NULL,w_52 = NULL,x_52 = NULL;
        o_52 = t;
        if(match_cons(t, sym_Op_2))
          {
            w_52 = ATgetArgument(t, 0);
            x_52 = ATgetArgument(t, 1);
            {
              ATerm n_20 = NULL,q_20 = NULL,w_2 = NULL;
              t = SSLgetAnnotations(o_52);
              n_20 = t;
              t = x_52;
              {
                static ATerm o_4 (ATerm t)
                {
                  t = pat_td_1_0(b_154, t);
                  return(t);
                }
                t = fetch_1_0(o_4, t);
              }
              q_20 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, w_52, q_20);
              w_2 = t;
              t = SSLsetAnnotations(w_2, n_20);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                w_52 = ATgetArgument(t, 0);
                x_52 = ATgetArgument(t, 1);
                {
                  ATerm u_24 = t;
                  int w_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_21 = NULL,s_21 = NULL,c_4 = NULL;
                      t = SSLgetAnnotations(o_52);
                      p_21 = t;
                      t = x_52;
                      t = pat_td_1_0(b_154, t);
                      s_21 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, w_52, s_21);
                      c_4 = t;
                      t = SSLsetAnnotations(c_4, p_21);
                      LocalPopChoice(w_24);
                    }
                  else
                    {
                      t = u_24;
                      {
                        ATerm i_22 = NULL,q_22 = NULL,i_4 = NULL;
                        t = SSLgetAnnotations(o_52);
                        i_22 = t;
                        t = w_52;
                        t = pat_td_1_0(b_154, t);
                        q_22 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, q_22, x_52);
                        i_4 = t;
                        t = SSLsetAnnotations(i_4, i_22);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    w_52 = ATgetArgument(t, 0);
                    x_52 = ATgetArgument(t, 1);
                    n_52 = ATgetArgument(t, 2);
                    {
                      ATerm c_23 = NULL,s_23 = NULL,k_4 = NULL;
                      t = SSLgetAnnotations(o_52);
                      c_23 = t;
                      t = n_52;
                      {
                        static ATerm p_4 (ATerm t)
                        {
                          t = pat_td_1_0(b_154, t);
                          return(t);
                        }
                        t = fetch_1_0(p_4, t);
                      }
                      s_23 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, w_52, x_52, s_23);
                      k_4 = t;
                      t = SSLsetAnnotations(k_4, c_23);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        w_52 = ATgetArgument(t, 0);
                        x_52 = ATgetArgument(t, 1);
                        n_52 = ATgetArgument(t, 2);
                        {
                          ATerm v_24 = NULL,b_25 = NULL,l_4 = NULL;
                          t = SSLgetAnnotations(o_52);
                          v_24 = t;
                          t = n_52;
                          {
                            static ATerm q_4 (ATerm t)
                            {
                              t = pat_td_1_0(b_154, t);
                              return(t);
                            }
                            t = fetch_1_0(q_4, t);
                          }
                          b_25 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, w_52, x_52, b_25);
                          l_4 = t;
                          t = SSLsetAnnotations(l_4, v_24);
                        }
                      }
                    else
                      {
                        ATerm s_25 = NULL,w_25 = NULL,m_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            w_52 = ATgetArgument(t, 0);
                            x_52 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(o_52);
                        s_25 = t;
                        t = x_52;
                        t = pat_td_1_0(b_154, t);
                        w_25 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, w_52, w_25);
                        m_4 = t;
                        t = SSLsetAnnotations(m_4, s_25);
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
  ATerm f_53 = NULL,g_53 = NULL;
  f_53 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_53 = NULL,j_53 = NULL,o_53 = NULL,p_53 = NULL;
        t = f_53;
        t = new_0_0(t);
        o_53 = t;
        t = g_53;
        {
          static ATerm r_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_53 != NULL) && (h_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_53 = ATgetArgument(t, 0);
                if(((j_53 != NULL) && (j_53 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  j_53 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, o_53);
            return(t);
          }
          t = pat_td_1_0(r_4, t);
        }
        p_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_53)), not_null(h_53))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_53)))), (ATerm) ATmakeAppl(sym_Build_1, p_53)));
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm f_25 = t;
          int g_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_53 = NULL,s_53 = NULL,t_53 = NULL;
              t = f_53;
              t = new_0_0(t);
              s_53 = t;
              t = g_53;
              {
                static ATerm s_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_53 != NULL) && (q_53 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_53);
                  return(t);
                }
                t = pat_td_1_0(s_4, t);
              }
              t_53 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_53), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_53)))), (ATerm) ATmakeAppl(sym_Build_1, t_53)));
              LocalPopChoice(g_25);
            }
          else
            {
              t = f_25;
              {
                ATerm u_53 = NULL,a_54 = NULL,c_54 = NULL,d_54 = NULL;
                t = f_53;
                t = new_0_0(t);
                c_54 = t;
                t = g_53;
                {
                  static ATerm t_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((u_53 != NULL) && (u_53 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          u_53 = ATgetArgument(t, 0);
                        if(((a_54 != NULL) && (a_54 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_54 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_54);
                    return(t);
                  }
                  t = pat_td_1_0(t_4, t);
                }
                d_54 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_53), not_null(a_54), (ATerm) ATmakeAppl(sym_Var_1, c_54))), (ATerm) ATmakeAppl(sym_Build_1, d_54)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,o_54 = NULL,p_54 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      o_54 = ATgetArgument(t, 0);
      p_54 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, o_54, p_54);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          o_54 = ATgetArgument(t, 0);
          t = o_54;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_54 = ATgetFirst((ATermList) t);
              j_54 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_54, (ATerm) ATmakeAppl(sym_LChoices_1, j_54));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_i_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              o_54 = ATgetArgument(t, 0);
              t = o_54;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_54 = ATgetFirst((ATermList) t);
                  j_54 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, i_54, (ATerm) ATmakeAppl(sym_Choices_1, j_54));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_i_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  o_54 = ATgetArgument(t, 0);
                  t = o_54;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_54 = ATgetFirst((ATermList) t);
                      j_54 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_54, (ATerm) ATmakeAppl(sym_Seqs_1, j_54));
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
                      o_54 = ATgetArgument(t, 0);
                      p_54 = ATgetArgument(t, 1);
                      k_54 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, p_54, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, k_54), o_54)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          o_54 = ATgetArgument(t, 0);
                          p_54 = ATgetArgument(t, 1);
                          k_54 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, k_54)), o_54), (ATerm) ATmakeAppl(sym_Build_1, p_54)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              o_54 = ATgetArgument(t, 0);
                              p_54 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_54, (ATerm) ATmakeAppl(sym_Match_1, p_54));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  o_54 = ATgetArgument(t, 0);
                                  p_54 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_54), p_54);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      o_54 = ATgetArgument(t, 0);
                                      p_54 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_54), o_54);
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
static ATerm a_5 (ATerm t)
{
  ATerm j_25 = t;
  if((PushChoice() == 0))
    {
      ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,c_5 = NULL;
      z_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_56);
      x_56 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_56);
      c_5 = t;
      t = SSLsetAnnotations(c_5, x_56);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_25;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm e_5 (ATerm t)
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
static ATerm f_5 (ATerm t)
{
  ATerm h_57 = NULL,l_57 = NULL,m_57 = NULL,o_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_25 = ATgetArgument(t, 0);
      if(match_cons(l_25, sym__2))
        {
          h_57 = ATgetArgument(l_25, 0);
          l_57 = ATgetArgument(l_25, 1);
        }
      else
        _fail(t);
      {
        ATerm m_25 = ATgetArgument(t, 1);
        if(match_cons(m_25, sym__2))
          {
            m_57 = ATgetArgument(m_25, 0);
            o_57 = ATgetArgument(m_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_57), h_57), (ATerm) ATinsert(CheckATermList(o_57), l_57));
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_57 = ATgetFirst((ATermList) t);
      q_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_57, q_57);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,x_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if(match_cons(n_25, sym__2))
        {
          t_57 = ATgetArgument(n_25, 0);
          u_57 = ATgetArgument(n_25, 1);
        }
      else
        _fail(t);
      {
        ATerm o_25 = ATgetArgument(t, 1);
        if(match_cons(o_25, sym__2))
          {
            v_57 = ATgetArgument(o_25, 0);
            x_57 = ATgetArgument(o_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_57), t_57), (ATerm) ATinsert(CheckATermList(x_57), u_57));
  return(t);
}
static ATerm h_10 (ATerm x_89, ATerm y_89, ATerm z_89, ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,w_56 = NULL,d_5 = NULL;
  t = z_89;
  t = fetch_1_0(a_5, t);
  t = z_89;
  t = genzip_4_0(b_5, e_5, f_5, LiftPrimArg_0_0, t);
  w_56 = t;
  if(match_cons(t, sym__2))
    {
      r_56 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_56);
  q_56 = t;
  t = r_56;
  t = concat_0_0(t);
  t_56 = t;
  t = s_56;
  t = genzip_4_0(g_5, h_5, i_5, _id, t);
  u_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_56, u_56);
  d_5 = t;
  t = SSLsetAnnotations(d_5, q_56);
  if(match_cons(t, sym__2))
    {
      n_56 = ATgetArgument(t, 0);
      {
        ATerm p_25 = ATgetArgument(t, 1);
        if(match_cons(p_25, sym__2))
          {
            o_56 = ATgetArgument(p_25, 0);
            p_56 = ATgetArgument(p_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, n_56, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_56), (ATerm) ATmakeAppl(sym_CallT_3, x_89, y_89, p_56)));
  return(t);
}
static ATerm o_58 (ATerm b_58, ATerm t)
{
  ATerm d_58 = NULL;
  t = b_58;
  {
    ATerm q_25 = t;
    if((PushChoice() == 0))
      {
        ATerm e_58 = NULL,h_58 = NULL,i_58 = NULL,q_5 = NULL;
        i_58 = t;
        if(match_cons(t, sym_Var_1))
          {
            h_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_58);
        e_58 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, h_58);
        q_5 = t;
        t = SSLsetAnnotations(q_5, e_58);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_25;
      }
  }
  t = new_0_0(t);
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_58), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_58), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_58)))), (ATerm) ATmakeAppl(sym_Var_1, d_58)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm j_58 = NULL,m_58 = NULL;
  j_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_58 = ATgetArgument(t, 0);
      {
        ATerm r_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_58(j_58, t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = r_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_b_24, (ATerm) ATmakeAppl(sym_Var_1, m_58)));
          }
      }
    }
  else
    {
      t = o_58(j_58, t);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm u_25 = t;
  if((PushChoice() == 0))
    {
      ATerm w_27 = NULL,y_27 = NULL,z_27 = NULL,s_5 = NULL;
      z_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_27);
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_27);
      s_5 = t;
      t = SSLsetAnnotations(s_5, w_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_25;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm a_28 = NULL,i_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_28 = ATgetFirst((ATermList) t);
      i_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_28, i_28);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if(match_cons(v_25, sym__2))
        {
          l_28 = ATgetArgument(v_25, 0);
          m_28 = ATgetArgument(v_25, 1);
        }
      else
        _fail(t);
      {
        ATerm x_25 = ATgetArgument(t, 1);
        if(match_cons(x_25, sym__2))
          {
            n_28 = ATgetArgument(x_25, 0);
            o_28 = ATgetArgument(x_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_28), l_28), (ATerm) ATinsert(CheckATermList(o_28), m_28));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_28 = ATgetFirst((ATermList) t);
      r_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_28, r_28);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,b_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_25 = ATgetArgument(t, 0);
      if(match_cons(y_25, sym__2))
        {
          t_28 = ATgetArgument(y_25, 0);
          u_28 = ATgetArgument(y_25, 1);
        }
      else
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(match_cons(z_25, sym__2))
          {
            v_28 = ATgetArgument(z_25, 0);
            b_29 = ATgetArgument(z_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_28), t_28), (ATerm) ATinsert(CheckATermList(b_29), u_28));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm a_26 = t;
  if((PushChoice() == 0))
    {
      ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,u_5 = NULL;
      d_30 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_30);
      b_30 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_30);
      u_5 = t;
      t = SSLsetAnnotations(u_5, b_30);
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
  t = term_k_25;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm e_30 = NULL,h_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_30 = ATgetFirst((ATermList) t);
      h_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_30, h_30);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm m_30 = NULL,q_30 = NULL,t_30 = NULL,c_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if(match_cons(b_26, sym__2))
        {
          m_30 = ATgetArgument(b_26, 0);
          q_30 = ATgetArgument(b_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            t_30 = ATgetArgument(c_26, 0);
            c_31 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_30), m_30), (ATerm) ATinsert(CheckATermList(c_31), q_30));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_31 = ATgetFirst((ATermList) t);
      e_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_31, e_31);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm f_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym__2))
        {
          f_31 = ATgetArgument(d_26, 0);
          h_31 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym__2))
          {
            i_31 = ATgetArgument(e_26, 0);
            j_31 = ATgetArgument(e_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_31), f_31), (ATerm) ATinsert(CheckATermList(j_31), h_31));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm k_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
      k_63 = ATgetArgument(t, 2);
      {
        ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,o_27 = NULL,p_27 = NULL,r_27 = NULL,v_27 = NULL,t_5 = NULL;
        t = k_63;
        t = fetch_1_0(l_5, t);
        t = k_63;
        t = genzip_4_0(m_5, n_5, o_5, LiftPrimArg_0_0, t);
        v_27 = t;
        if(match_cons(t, sym__2))
          {
            f_27 = ATgetArgument(t, 0);
            o_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_27);
        e_27 = t;
        t = f_27;
        t = concat_0_0(t);
        p_27 = t;
        t = o_27;
        t = genzip_4_0(p_5, r_5, w_5, _id, t);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_27, r_27);
        t_5 = t;
        t = SSLsetAnnotations(t_5, e_27);
        if(match_cons(t, sym__2))
          {
            b_27 = ATgetArgument(t, 0);
            {
              ATerm f_26 = ATgetArgument(t, 1);
              if(match_cons(f_26, sym__2))
                {
                  c_27 = ATgetArgument(f_26, 0);
                  d_27 = ATgetArgument(f_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_27), (ATerm) ATmakeAppl(sym_PrimT_3, n_63, o_63, d_27)));
      }
    }
  else
    {
      ATerm p_29 = NULL,r_29 = NULL,s_29 = NULL,u_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,v_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          n_63 = ATgetArgument(t, 0);
          o_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_63;
      t = fetch_1_0(x_5, t);
      t = o_63;
      t = genzip_4_0(y_5, z_5, a_6, LiftPrimArg_0_0, t);
      a_30 = t;
      if(match_cons(t, sym__2))
        {
          w_29 = ATgetArgument(t, 0);
          x_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_30);
      u_29 = t;
      t = w_29;
      t = concat_0_0(t);
      y_29 = t;
      t = x_29;
      t = genzip_4_0(c_6, d_6, g_6, _id, t);
      z_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
      v_5 = t;
      t = SSLsetAnnotations(v_5, u_29);
      if(match_cons(t, sym__2))
        {
          p_29 = ATgetArgument(t, 0);
          {
            ATerm g_26 = ATgetArgument(t, 1);
            if(match_cons(g_26, sym__2))
              {
                r_29 = ATgetArgument(g_26, 0);
                s_29 = ATgetArgument(g_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, p_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_29), (ATerm) ATmakeAppl(sym_PrimT_3, n_63, (ATerm)ATempty, s_29)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t)
{
  static ATerm r_63 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_125(t);
        t = r_63(t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = t_125(t);
      }
    return(t);
  }
  t = r_63(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  q_64 = t;
  if(match_cons(t, sym_Con_3))
    {
      n_64 = ATgetArgument(t, 0);
      o_64 = ATgetArgument(t, 1);
      p_64 = ATgetArgument(t, 2);
      {
        ATerm c_32 = NULL,b_6 = NULL;
        t = SSLgetAnnotations(q_64);
        c_32 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, n_64, o_64, p_64);
        b_6 = t;
        t = SSLsetAnnotations(b_6, c_32);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = q_64;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm j_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_26;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL,y_65 = NULL;
  v_65 = t;
  if(match_cons(t, sym_Con_3))
    {
      w_65 = ATgetArgument(t, 0);
      y_65 = ATgetArgument(t, 1);
      u_65 = ATgetArgument(t, 2);
      {
        ATerm j_33 = NULL,h_6 = NULL;
        t = SSLgetAnnotations(v_65);
        j_33 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, w_65, y_65, u_65);
        h_6 = t;
        t = SSLsetAnnotations(h_6, j_33);
      }
    }
  else
    {
      ATerm y_34 = NULL,k_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          w_65 = ATgetArgument(t, 0);
          y_65 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_65);
      y_34 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, w_65, y_65);
      k_6 = t;
      t = SSLsetAnnotations(k_6, y_34);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm k_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_6, t);
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
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      h_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_66;
  if(match_cons(t, sym_StratRule_3))
    {
      i_66 = ATgetArgument(t, 0);
      j_66 = ATgetArgument(t, 1);
      k_66 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_66), (ATerm) ATmakeAppl(sym_Where_1, k_66)), i_66));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          i_66 = ATgetArgument(t, 0);
          j_66 = ATgetArgument(t, 1);
          k_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_66;
      t = pureterm_0_0(t);
      t = j_66;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, j_66)), (ATerm) ATmakeAppl(sym_Where_1, k_66)), (ATerm) ATmakeAppl(sym_Match_1, i_66)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_121 (ATerm), ATerm t)
{
  static ATerm t_66 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_121(t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = SRTS_one(t_66, t);
      }
    return(t);
  }
  t = t_66(t);
  return(t);
}
static ATerm l_10 (ATerm k_85, ATerm l_85, ATerm m_85, ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL;
  t = new_0_0(t);
  z_66 = t;
  t = k_85;
  {
    static ATerm l_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm n_26 = ATgetArgument(t, 0);
          if(match_cons(n_26, sym_Var_1))
            {
              if(((y_66 != NULL) && (y_66 != ATgetArgument(n_26, 0))))
                _fail(ATgetArgument(n_26, 0));
              else
                y_66 = ATgetArgument(n_26, 0);
            }
          else
            _fail(t);
          if(((v_66 != NULL) && (v_66 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_66 = ATgetArgument(t, 1);
          {
            ATerm o_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, y_66);
      return(t);
    }
    t = oncetd_1_0(l_6, t);
  }
  a_67 = t;
  t = l_85;
  {
    static ATerm m_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_26 = ATgetArgument(t, 0);
          if(match_cons(p_26, sym_Var_1))
            {
              if(((y_66 != NULL) && (y_66 != ATgetArgument(p_26, 0))))
                _fail(ATgetArgument(p_26, 0));
              else
                y_66 = ATgetArgument(p_26, 0);
            }
          else
            _fail(t);
          if(((w_66 != NULL) && (w_66 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_66 = ATgetArgument(t, 1);
          {
            ATerm q_26 = ATgetArgument(t, 2);
            if(match_cons(q_26, sym_CallT_3))
              {
                if(((u_66 != NULL) && (u_66 != ATgetArgument(q_26, 0))))
                  _fail(ATgetArgument(q_26, 0));
                else
                  u_66 = ATgetArgument(q_26, 0);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, z_66);
      return(t);
    }
    t = oncetd_1_0(m_6, t);
  }
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_66), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, a_67, b_67, (ATerm) ATmakeAppl(sym_Seq_2, m_85, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(u_66), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_66), not_null(w_66), term_b_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_66)), (ATerm) ATmakeAppl(sym_Var_1, z_66))))));
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
          ATerm b_68 = NULL,c_68 = NULL,e_68 = NULL,f_68 = NULL,i_68 = NULL,j_68 = NULL;
          f_68 = t;
          if(match_cons(t, sym_SRule_1))
            {
              i_68 = ATgetArgument(t, 0);
              t = i_68;
              if(match_cons(t, sym_Rule_3))
                {
                  b_68 = ATgetArgument(t, 0);
                  c_68 = ATgetArgument(t, 1);
                  e_68 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_68;
              t = l_10(b_68, c_68, e_68, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm u_35 = NULL,x_35 = NULL,a_7 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  i_68 = ATgetArgument(t, 0);
                  j_68 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_68);
              u_35 = t;
              t = j_68;
              t = desugarRule_0_0(t);
              x_35 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, i_68, x_35);
              a_7 = t;
              t = SSLsetAnnotations(a_7, u_35);
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
ATerm topdown_1_0 (ATerm x_119 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    t = topdown_1_0(x_119, t);
    return(t);
  }
  t = x_119(t);
  t = SRTS_all(n_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
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
  t = repeat_2_0(q_6, _id, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm g_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
            b_69 = t;
            if(match_cons(t, sym_CallT_3))
              {
                c_69 = ATgetArgument(t, 0);
                d_69 = ATgetArgument(t, 1);
                e_69 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_69;
            t = h_10(c_69, d_69, e_69, t);
            LocalPopChoice(i_27);
          }
        else
          {
            t = g_27;
            {
              ATerm j_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(x_27);
                }
              else
                {
                  t = j_27;
                  {
                    ATerm c_28 = t;
                    int c_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(c_29);
                      }
                    else
                      {
                        t = c_28;
                        {
                          ATerm d_29 = t;
                          int e_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_29 = t;
                              int g_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_69 = NULL,o_69 = NULL,r_69 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      n_69 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = n_69;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      o_69 = ATgetArgument(t, 0);
                                      t = o_69;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          o_69 = ATgetArgument(t, 0);
                                          r_69 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, o_69, r_69);
                                    }
                                  LocalPopChoice(g_29);
                                }
                              else
                                {
                                  t = f_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(e_29);
                            }
                          else
                            {
                              t = d_29;
                              {
                                ATerm h_29 = t;
                                int k_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(k_29);
                                  }
                                else
                                  {
                                    t = h_29;
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
  t = topdown_1_0(p_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm m_70 = NULL,o_70 = NULL;
  o_70 = t;
  t = SSL_explode_term(o_70);
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_29 = ATgetArgument(t, 1);
        if(((ATgetType(m_29) == AT_LIST) && !(ATisEmpty(m_29))))
          {
            m_70 = ATgetFirst((ATermList) m_29);
            {
              ATerm n_29 = (ATerm) ATgetNext((ATermList) m_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_70;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  i_36 = t;
  t = SSL_explode_term(i_36);
  if(match_cons(t, sym__2))
    {
      ATerm o_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_29 = ATgetArgument(t, 1);
        if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
          {
            ATerm t_29 = ATgetFirst((ATermList) q_29);
            g_36 = (ATerm) ATgetNext((ATermList) q_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_k_21;
  h_36 = t;
  t = SSL_mkterm(h_36, g_36);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm z_123 (ATerm), ATerm t)
{
  ATerm f_70 = NULL,h_70 = NULL;
  static ATerm p_70 (ATerm t)
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL;
        i_70 = t;
        t = map_1_0(t_6, t);
        t = z_123(t);
        j_70 = t;
        t = i_70;
        t = map_1_0(u_6, t);
        t = p_70(t);
        k_70 = t;
        t = (ATerm) ATinsert(CheckATermList(k_70), j_70);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = map_1_0(v_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = p_70(t);
  h_70 = t;
  t = term_k_21;
  f_70 = t;
  t = SSL_mkterm(f_70, h_70);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm q_70 = NULL;
  q_70 = t;
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_71 = NULL,n_72 = NULL,o_72 = NULL;
        t = q_70;
        t = new_0_0(t);
        p_71 = t;
        t = new_0_0(t);
        n_72 = t;
        t = new_0_0(t);
        o_72 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_71), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, q_70), (ATerm) ATmakeAppl(sym_Var_1, n_72))), (ATerm) ATmakeAppl(sym_Var_1, o_72)), (ATerm)ATmakeAppl(sym_VarDec_2, p_71, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_30), term_w_30)), n_72, (ATerm)ATmakeAppl(sym_Var_1, n_72), o_72, (ATerm) ATmakeAppl(sym_Var_1, o_72));
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
          t = q_70;
          t = new_0_0(t);
          q_72 = t;
          t = new_0_0(t);
          r_72 = t;
          t = new_0_0(t);
          s_72 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, q_70), (ATerm) ATmakeAppl(sym_Var_1, r_72))), (ATerm) ATmakeAppl(sym_Var_1, s_72)), (ATerm)ATmakeAppl(sym_VarDec_2, q_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_30), term_w_30)), r_72, (ATerm)ATmakeAppl(sym_Var_1, r_72), s_72, (ATerm) ATmakeAppl(sym_Var_1, s_72));
        }
      }
  }
  return(t);
}
static ATerm m_10 (ATerm w_42, ATerm x_42, ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_42, x_42);
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      t = SSL_subtr(w_42, x_42);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL;
  if(match_cons(t, sym__2))
    {
      t_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_72, u_72, (ATerm) ATempty);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm v_72 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm z_30 = ATgetArgument(t, 0);
      if(((ATgetType(z_30) != AT_INT) || (ATgetInt((ATermInt) z_30) != 0)))
        _fail(t);
      {
        ATerm a_31 = ATgetArgument(t, 1);
      }
      v_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_72;
  return(t);
}
ATerm copy_1_0 (ATerm v_140 (ATerm), ATerm t)
{
  static ATerm y_6 (ATerm t)
  {
    ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,e_73 = NULL;
    if(match_cons(t, sym__3))
      {
        w_72 = ATgetArgument(t, 0);
        x_72 = ATgetArgument(t, 1);
        y_72 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_72, term_j_16);
    t = geq_0_0(t);
    t = term_j_16;
    e_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_72, term_j_16);
    t = m_10(w_72, e_73, t);
    z_72 = t;
    t = x_72;
    t = v_140(t);
    a_73 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_72, x_72, (ATerm) ATinsert(CheckATermList(y_72), a_73));
    return(t);
  }
  t = for_3_0(w_6, x_6, y_6, t);
  return(t);
}
static ATerm n_10 (ATerm e_72, ATerm f_72, ATerm t)
{
  ATerm f_73 = NULL,h_73 = NULL,k_73 = NULL;
  t = new_0_0(t);
  f_73 = t;
  t = new_0_0(t);
  h_73 = t;
  t = new_0_0(t);
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_73), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_72)), (ATerm) ATmakeAppl(sym_Var_1, h_73))), (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_72)), (ATerm) ATmakeAppl(sym_Var_1, k_73)))), (ATerm)ATmakeAppl(sym_VarDec_2, f_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_30), term_w_30)), h_73, (ATerm)ATmakeAppl(sym_Var_1, h_73), k_73, (ATerm) ATmakeAppl(sym_Var_1, k_73));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm q_73 = NULL,b_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_73 = ATgetFirst((ATermList) t);
      b_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_73;
    }
  else
    {
      t = b_74;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm d_79 (ATerm h_75, ATerm i_75, ATerm l_75, ATerm t_75, ATerm t)
{
  ATerm b_76 = NULL,e_76 = NULL,k_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,s_76 = NULL,w_76 = NULL,x_76 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
  t = term_j_16;
  d_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_75, term_j_16);
  t = r_11(i_75, d_77, t);
  c_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_77, term_d_16);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_76 = ATgetFirst((ATermList) t);
      k_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_76;
  t = last_0_0(t);
  b_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_76), e_76), k_76);
  t = genzip_4_0(z_6, b_7, c_7, d_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      n_76 = ATgetArgument(t, 0);
      o_76 = ATgetArgument(t, 1);
      p_76 = ATgetArgument(t, 2);
      s_76 = ATgetArgument(t, 3);
      w_76 = ATgetArgument(t, 4);
      x_76 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_76), p_76), k_76);
  t = concat_0_0(t);
  b_77 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, h_75, term_b_31), o_76, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(b_77), e_76), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_76)), (ATerm) ATmakeAppl(sym_Op_2, h_75, s_76))), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_76)), (ATerm) ATmakeAppl(sym_Op_2, h_75, x_76))), (ATerm) ATmakeAppl(sym_Seqs_1, n_76)))));
  return(t);
}
static ATerm e_79 (ATerm v_77, ATerm w_77, ATerm x_77, ATerm y_77, ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
  t = y_77;
  t = new_0_0(t);
  c_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_77, (ATerm) ATmakeAppl(sym_Var_1, c_78));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      d_78 = ATgetArgument(t, 0);
      e_78 = ATgetArgument(t, 1);
      f_78 = ATgetArgument(t, 2);
      g_78 = ATgetArgument(t, 3);
      h_78 = ATgetArgument(t, 4);
      i_78 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_78, h_78);
  t = conc_0_0(t);
  j_78 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, v_77, term_g_31), e_78, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(j_78), c_78), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_78)), (ATerm) ATmakeAppl(sym_Op_2, v_77, g_78))), (ATerm)ATmakeAppl(sym_Op_2, v_77, i_78), (ATerm) ATmakeAppl(sym_Seqs_1, d_78)))));
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      ATerm p_31 = ATgetArgument(t, 1);
      if(((ATgetType(p_31) != AT_LIST) || !(ATisEmpty(p_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm e_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_31 = ATgetArgument(t, 0);
      if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
        {
          e_77 = ATgetFirst((ATermList) q_31);
          h_77 = (ATerm) ATgetNext((ATermList) q_31);
        }
      else
        _fail(t);
      {
        ATerm r_31 = ATgetArgument(t, 1);
        if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
          {
            i_77 = ATgetFirst((ATermList) r_31);
            j_77 = (ATerm) ATgetNext((ATermList) r_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_77, i_77), (ATerm) ATmakeAppl(sym__2, h_77, j_77));
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm m_77 = NULL,o_77 = NULL;
  if(match_cons(t, sym__2))
    {
      m_77 = ATgetArgument(t, 0);
      o_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_77), m_77);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL;
  if(match_cons(t, sym__2))
    {
      p_77 = ATgetArgument(t, 0);
      q_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(p_77, q_77, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm l_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,v_78 = NULL,y_78 = NULL;
  l_78 = t;
  if(match_cons(t, sym__3))
    {
      o_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
      q_78 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_78;
  if(match_string(t, "T"))
    {
      t = q_78;
      if(match_cons(t, sym__2))
        {
          v_78 = ATgetArgument(t, 0);
          y_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_78;
      if(match_int(t, 0))
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_79(o_78, v_78, y_78, l_78, t);
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              {
                ATerm a_79 = NULL;
                t = l_78;
                t = new_0_0(t);
                a_79 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, o_78, term_b_31), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_79), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_79)), (ATerm) ATmakeAppl(sym_Op_2, o_78, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_79)), (ATerm) ATmakeAppl(sym_Op_2, o_78, (ATerm) ATempty))), term_b_24))));
              }
            }
        }
      else
        {
          t = d_79(o_78, v_78, y_78, l_78, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = q_78;
      if(match_cons(t, sym__2))
        {
          v_78 = ATgetArgument(t, 0);
          y_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_79(o_78, v_78, y_78, l_78, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm f_135 (ATerm), ATerm t)
{
  ATerm m_24 = NULL;
  static ATerm h_7 (ATerm t)
  {
    t = f_135(t);
    if(((m_24 != NULL) && (m_24 != t)))
      _fail(t);
    else
      m_24 = t;
    return(t);
  }
  t = fetch_1_0(h_7, t);
  t = not_null(m_24);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm n_24 = NULL,p_24 = NULL,q_24 = NULL;
  t = term_e_16;
  p_24 = t;
  t = (ATerm) ATinsert(ATempty, term_u_31);
  q_24 = t;
  t = SSL_printnl(p_24, q_24);
  t = term_j_16;
  n_24 = t;
  t = SSL_exit(n_24);
  t = (ATerm) ATinsert(ATempty, term_u_31);
  return(t);
}
ATerm debug_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,x_24 = NULL,y_24 = NULL;
  r_24 = t;
  t = f_127(t);
  s_24 = t;
  t = term_e_16;
  x_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_24), s_24);
  y_24 = t;
  t = SSL_printnl(x_24, y_24);
  t = r_24;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm b_32 = ATgetArgument(t, 0);
          v_17 = ATgetArgument(t, 1);
          w_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(a_32);
      t = w_17;
      t = foldr_3_0(o_7, q_7, r_7, t);
      t = v_17;
      t = foldr_3_0(t_7, w_7, y_7, t);
    }
  else
    {
      t = z_31;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm h_32 = ATgetArgument(t, 0);
          v_17 = ATgetArgument(t, 1);
          w_17 = ATgetArgument(t, 2);
          {
            ATerm k_32 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = w_17;
      t = foldr_3_0(b_8, d_8, e_8, t);
      t = v_17;
      t = foldr_3_0(f_8, h_8, m_8, t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm q_7 (ATerm t)
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
static ATerm r_7 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(d_18, e_18, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm d_8 (ATerm t)
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
static ATerm e_8 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm m_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(m_18, o_18, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm l_32 = ATgetArgument(t, 0);
      ATerm p_32 = ATgetArgument(t, 1);
      ATerm s_32 = ATgetArgument(t, 2);
      ATerm t_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_25 = NULL;
      static ATerm i_7 (ATerm t)
      {
        ATerm e_25 = NULL,h_25 = NULL;
        e_25 = t;
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  h_25 = ATgetArgument(t, 0);
                  {
                    ATerm b_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm g_33 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_32);
              t = h_25;
              if(((d_25 != NULL) && (d_25 != t)))
                _fail(t);
              else
                d_25 = t;
              t = e_25;
            }
          else
            {
              t = x_32;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  h_25 = ATgetArgument(t, 0);
                  {
                    ATerm h_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm i_33 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm x_33 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = h_25;
              if(((d_25 != NULL) && (d_25 != t)))
                _fail(t);
              else
                d_25 = t;
              t = e_25;
            }
        }
        return(t);
      }
      t = fetch_1_0(i_7, t);
      {
        static ATerm k_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((d_25 != NULL) && (d_25 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_25 = ATgetArgument(t, 0);
              {
                ATerm y_33 = ATgetArgument(t, 1);
              }
              {
                ATerm z_33 = ATgetArgument(t, 2);
              }
              {
                ATerm d_34 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_7, t);
      }
      t = not_null(d_25);
      t = debug_1_0(l_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(w_32);
    }
  else
    {
      t = u_32;
      {
        ATerm h_27 = NULL;
        h_27 = t;
        t = map_1_0(m_7, t);
        t = h_27;
        {
          ATerm h_34 = t;
          int i_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(n_8, t);
              LocalPopChoice(i_34);
            }
          else
            {
              t = h_34;
              {
                ATerm r_18 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_18 = ATgetFirst((ATermList) t);
                    {
                      ATerm j_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = r_18;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm k_27 = NULL,n_27 = NULL,z_18 = NULL;
  k_27 = t;
  t = SSL_explode_term(k_27);
  if(match_cons(t, sym__2))
    {
      ATerm m_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_34 = ATgetArgument(t, 1);
        if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
          {
            n_27 = ATgetFirst((ATermList) p_34);
            {
              ATerm q_34 = (ATerm) ATgetNext((ATermList) p_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(k_27);
  if(match_cons(t, sym__2))
    {
      ATerm s_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_34 = ATgetArgument(t, 1);
        if(((ATgetType(w_34) == AT_LIST) && !(ATisEmpty(w_34))))
          {
            ATerm x_34 = ATgetFirst((ATermList) w_34);
            ATerm a_35 = (ATerm) ATgetNext((ATermList) w_34);
            if(((ATgetType(a_35) == AT_LIST) && !(ATisEmpty(a_35))))
              {
                z_18 = ATgetFirst((ATermList) a_35);
                {
                  ATerm b_35 = (ATerm) ATgetNext((ATermList) a_35);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, n_27, z_18);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(o_8, p_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  static ATerm q_27 (ATerm t)
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_121(t);
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        t = SRTS_all(q_27, t);
      }
    return(t);
  }
  t = q_27(t);
  return(t);
}
static ATerm z_9 (ATerm n_45, ATerm o_45, ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  t_27 = t;
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        t = v_11(n_45, o_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_35 = ATgetFirst((ATermList) t);
            s_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_35);
        {
          ATerm u_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, s_27);
          t = lookup_table_0_1(n_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_11(o_45, s_27, u_27, t);
          t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, s_27);
        }
      }
    else
      {
        t = h_35;
        {
          ATerm b_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
          t = lookup_table_0_1(n_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(o_45, b_28, t);
          t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        }
      }
  }
  t = t_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_131 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,j_28 = NULL,k_28 = NULL;
  g_28 = t;
  t = n_131(t);
  f_28 = t;
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_28 = NULL;
        t = term_v_35;
        p_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_28, term_v_35);
        t = v_11(f_28, p_28, t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_28 = ATgetFirst((ATermList) t);
      d_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_28, term_v_35, d_28);
  t = lookup_table_0_1(f_28, t);
  k_28 = t;
  t = term_v_35;
  h_28 = t;
  t = k_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(h_28, d_28, j_28, t);
  t = e_28;
  {
    static ATerm q_8 (ATerm t)
    {
      ATerm s_28 = NULL;
      s_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_28, s_28);
      t = z_9(f_28, s_28, t);
      return(t);
    }
    t = map_1_0(q_8, t);
  }
  t = g_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm t)
{
  ATerm w_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_123(t);
      t = f_123(t);
      LocalPopChoice(z_35);
    }
  else
    {
      t = w_35;
      t = f_123(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_131 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,i_29 = NULL,j_29 = NULL;
  x_28 = t;
  t = m_131(t);
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_28, term_v_35);
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_36 = ATgetArgument(t, 0);
            ATerm d_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_35;
        v_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_28, term_v_35);
        t = v_11(w_28, v_29, t);
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = (ATerm) ATempty;
      }
  }
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_28, term_v_35, (ATerm) ATinsert(CheckATermList(y_28), (ATerm) ATempty));
  t = lookup_table_0_1(w_28, t);
  j_29 = t;
  t = term_v_35;
  z_28 = t;
  t = (ATerm) ATinsert(CheckATermList(y_28), (ATerm) ATempty);
  a_29 = t;
  t = j_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(z_28, a_29, i_29, t);
  t = x_28;
  return(t);
}
ATerm scope_2_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm t)
{
  static ATerm r_8 (ATerm t)
  {
    t = end_scope_1_0(o_131, t);
    return(t);
  }
  t = begin_scope_1_0(o_131, t);
  t = restore_always_2_0(p_131, r_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,n_30 = NULL;
  i_30 = t;
  if(match_cons(t, sym__2))
    {
      j_30 = ATgetArgument(t, 0);
      k_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_30 = ATgetFirst((ATermList) t);
      n_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_30;
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
      {
        ATerm e_36 = t;
        int f_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_30;
            if((j_30 != t))
              {
                _fail(t);
              }
            t = g_30;
            LocalPopChoice(f_36);
          }
        else
          {
            t = e_36;
            t = (ATerm) ATmakeAppl(sym__2, j_30, n_30);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_30, n_30);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm t_8 (ATerm t)
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
static ATerm v_8 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,d_32 = NULL,e_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
        {
          x_31 = ATgetFirst((ATermList) l_36);
          y_31 = (ATerm) ATgetNext((ATermList) l_36);
        }
      else
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
          {
            d_32 = ATgetFirst((ATermList) n_36);
            e_32 = (ATerm) ATgetNext((ATermList) n_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_31, d_32), (ATerm) ATmakeAppl(sym__2, y_31, e_32));
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  if(match_cons(t, sym__2))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_32), f_32);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  k_31 = t;
  {
    ATerm o_36 = t;
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
        t = k_31;
      }
    else
      {
        t = o_36;
        {
          ATerm w_31 = NULL;
          if(match_cons(t, sym__3))
            {
              l_31 = ATgetArgument(t, 0);
              m_31 = ATgetArgument(t, 1);
              n_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, l_31, m_31);
          t = genzip_4_0(t_8, v_8, w_8, _id, t);
          w_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_31, n_31);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  static ATerm x_8 (ATerm t)
  {
    ATerm d_19 = NULL;
    t = g_119(t);
    d_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_19, not_null(j_32));
    t = lookup_0_0(t);
    t = h_119(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((j_32 != NULL) && (j_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_32 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_32;
  t = alltd_1_0(x_8, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm q_32 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_32 = ATgetArgument(t, 0);
      {
        ATerm t_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_32;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm r_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_32;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm e_9 (ATerm t)
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
  ATerm v_32 = NULL,z_32 = NULL,a_33 = NULL,c_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if(((ATgetType(x_36) == AT_LIST) && !(ATisEmpty(x_36))))
        {
          v_32 = ATgetFirst((ATermList) x_36);
          z_32 = (ATerm) ATgetNext((ATermList) x_36);
        }
      else
        _fail(t);
      {
        ATerm y_36 = ATgetArgument(t, 1);
        if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
          {
            a_33 = ATgetFirst((ATermList) y_36);
            c_33 = (ATerm) ATgetNext((ATermList) y_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_32, a_33), (ATerm) ATmakeAppl(sym__2, z_32, c_33));
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  if(match_cons(t, sym__2))
    {
      d_33 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_33), d_33);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm f_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_36 = ATgetArgument(t, 0);
      if(match_cons(z_36, sym_VarDec_2))
        {
          f_33 = ATgetArgument(z_36, 0);
          {
            ATerm c_37 = ATgetArgument(z_36, 1);
          }
        }
      else
        _fail(t);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  l_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, f_33);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_37, k_33);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, f_33), (ATerm) ATmakeAppl(sym_Defined_2, term_e_37, k_33));
  t = d_11(k_9, m_33, n_33, t);
  t = l_33;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,n_19 = NULL;
  o_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm f_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_u_36;
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_36, o_33);
  t = h_11(n_19, o_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_37) != ATmakeSymbol("s_0", 0, ATtrue)))
        _fail(t);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_33;
  return(t);
}
static ATerm d_10 (ATerm e_74, ATerm f_74, ATerm j_74, ATerm g_74, ATerm i_74, ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  t = g_74;
  t = map_1_0(a_9, t);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_32, f_74, i_74);
  t = substitute_2_0(b_9, _id, t);
  n_32 = t;
  {
    static ATerm d_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, j_74, e_74);
      t = genzip_4_0(e_9, g_9, i_9, j_9, t);
      t = n_32;
      t = alltd_1_0(l_9, t);
      if(((o_32 != NULL) && (o_32 != t)))
        _fail(t);
      else
        o_32 = t;
      return(t);
    }
    t = scope_2_0(c_9, d_9, t);
  }
  t = not_null(o_32);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,r_34 = NULL,t_34 = NULL,u_34 = NULL,e_7 = NULL;
  u_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_34);
  n_34 = t;
  t = o_34;
  t = new_0_0(t);
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_34, r_34);
  e_7 = t;
  t = SSLsetAnnotations(e_7, n_34);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm v_34 = NULL,z_34 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_7 = NULL;
  e_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_34 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_35);
  v_34 = t;
  t = z_34;
  t = new_0_0(t);
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_35, c_35);
  f_7 = t;
  t = SSLsetAnnotations(f_7, v_34);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm k_35 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      k_35 = ATgetArgument(t, 0);
      {
        ATerm m_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_35);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm l_35 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_35 = ATgetArgument(t, 0);
      {
        ATerm n_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, l_35);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,c_34 = NULL,l_34 = NULL;
  v_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_37 = ATgetFirst((ATermList) t);
      if(match_cons(p_37, sym_SDefT_4))
        {
          q_33 = ATgetArgument(p_37, 0);
          r_33 = ATgetArgument(p_37, 1);
          s_33 = ATgetArgument(p_37, 2);
          {
            ATerm y_37 = ATgetArgument(p_37, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm x_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_33;
  t = map_1_0(t_9, t);
  t_33 = t;
  t = s_33;
  t = map_1_0(u_9, t);
  u_33 = t;
  t = t_33;
  t = map_1_0(v_9, t);
  w_33 = t;
  t = u_33;
  t = map_1_0(w_9, t);
  c_34 = t;
  t = v_33;
  {
    static ATerm x_9 (ATerm t)
    {
      ATerm s_35 = NULL,t_35 = NULL,y_35 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm z_37 = ATgetArgument(t, 0);
          s_35 = ATgetArgument(t, 1);
          t_35 = ATgetArgument(t, 2);
          y_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_10(w_33, c_34, s_35, t_35, y_35, t);
      return(t);
    }
    t = map_1_0(x_9, t);
  }
  t = choices_0_0(t);
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_33, t_33, u_33, l_34);
  return(t);
}
static ATerm t_80 (ATerm q_79, ATerm r_79, ATerm s_79, ATerm t_79, ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,j_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_79, r_79);
  t = Definitions_0_0(t);
  x_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_79, s_79);
  a_80 = t;
  if(match_cons(t, sym__2))
    {
      ATerm a_38 = ATgetArgument(t, 0);
      ATerm f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_80);
  y_79 = t;
  t = x_79;
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_80 = NULL,d_80 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_80 = ATgetFirst((ATermList) t);
            d_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_80;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_80;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        {
          ATerm i_38 = t;
          int l_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(l_38);
            }
          else
            {
              t = i_38;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  z_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_79, s_79);
  j_7 = t;
  t = SSLsetAnnotations(j_7, y_79);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL;
  h_80 = t;
  if(match_cons(t, sym__2))
    {
      i_80 = ATgetArgument(t, 0);
      n_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_80;
  if(match_cons(t, sym__2))
    {
      l_80 = ATgetArgument(t, 0);
      m_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_80;
  if(match_cons(t, sym_Mod_2))
    {
      f_80 = ATgetArgument(t, 0);
      g_80 = ATgetArgument(t, 1);
      {
        ATerm m_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_80 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, f_80, g_80, m_80);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            s_80 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_80, n_80);
            LocalPopChoice(o_38);
          }
        else
          {
            t = m_38;
            t = t_80(l_80, m_80, n_80, h_80, t);
          }
      }
    }
  else
    {
      t = t_80(l_80, m_80, n_80, h_80, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  static ATerm t_81 (ATerm t)
  {
    ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL;
    s_81 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_81 = ATgetFirst((ATermList) t);
        r_81 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_36 = NULL,p_36 = NULL,n_7 = NULL;
          t = SSLgetAnnotations(s_81);
          m_36 = t;
          t = r_81;
          t = t_81(t);
          p_36 = t;
          t = (ATerm) ATinsert(CheckATermList(p_36), q_81);
          n_7 = t;
          t = SSLsetAnnotations(n_7, m_36);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_81;
        t = k_135(t);
      }
    return(t);
  }
  t = t_81(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL;
  v_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_80;
    }
  else
    {
      static ATerm a_10 (ATerm t)
      {
        t = not_null(x_80);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_80 = ATgetFirst((ATermList) t);
          if(((x_80 != NULL) && (x_80 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_80;
      t = at_end_1_0(a_10, t);
    }
  return(t);
}
static ATerm g_82 (ATerm y_81, ATerm t)
{
  ATerm z_81 = NULL;
  t = SSL_explode_term(y_81);
  if(match_cons(t, sym__2))
    {
      ATerm s_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_81;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL;
  d_82 = t;
  if(match_cons(t, sym__2))
    {
      b_82 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
      {
        ATerm t_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_10 (ATerm t)
            {
              t = c_82;
              return(t);
            }
            t = b_82;
            t = at_end_1_0(b_10, t);
            LocalPopChoice(u_38);
          }
        else
          {
            t = t_38;
            t = g_82(d_82, t);
          }
      }
    }
  else
    {
      t = g_82(d_82, t);
    }
  return(t);
}
static ATerm t_10 (ATerm x_136 (ATerm), ATerm r_60, ATerm q_60, ATerm t)
{
  static ATerm x_82 (ATerm t)
  {
    ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL;
    r_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_82;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_82 = ATgetFirst((ATermList) t);
            t_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_38 = t;
          int w_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_82;
              {
                static ATerm c_10 (ATerm t)
                {
                  t = q_60;
                  return(t);
                }
                t = e_11(x_136, c_10, s_82, t_82, t);
              }
              t = x_82(t);
              LocalPopChoice(w_38);
            }
          else
            {
              t = v_38;
              {
                ATerm l_37 = NULL,w_37 = NULL,p_7 = NULL;
                t = SSLgetAnnotations(r_82);
                l_37 = t;
                t = t_82;
                t = x_82(t);
                w_37 = t;
                t = (ATerm) ATinsert(CheckATermList(w_37), s_82);
                p_7 = t;
                t = SSLsetAnnotations(p_7, l_37);
              }
            }
        }
      }
    return(t);
  }
  t = r_60;
  t = x_82(t);
  return(t);
}
ATerm genzip_4_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm t)
{
  static ATerm j_83 (ATerm t)
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_124(t);
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        {
          ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,s_7 = NULL;
          t = k_124(t);
          i_83 = t;
          if(match_cons(t, sym__2))
            {
              e_83 = ATgetArgument(t, 0);
              f_83 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_83);
          d_83 = t;
          t = e_83;
          t = m_124(t);
          g_83 = t;
          t = f_83;
          t = j_83(t);
          h_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_83, h_83);
          s_7 = t;
          t = SSLsetAnnotations(s_7, d_83);
          t = l_124(t);
        }
      }
    return(t);
  }
  t = j_83(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if(((ATgetType(z_38) != AT_LIST) || !(ATisEmpty(z_38))))
        _fail(t);
      {
        ATerm a_39 = ATgetArgument(t, 1);
        if(((ATgetType(a_39) != AT_LIST) || !(ATisEmpty(a_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_39 = ATgetArgument(t, 0);
      if(((ATgetType(d_39) == AT_LIST) && !(ATisEmpty(d_39))))
        {
          q_83 = ATgetFirst((ATermList) d_39);
          r_83 = (ATerm) ATgetNext((ATermList) d_39);
        }
      else
        _fail(t);
      {
        ATerm e_39 = ATgetArgument(t, 1);
        if(((ATgetType(e_39) == AT_LIST) && !(ATisEmpty(e_39))))
          {
            s_83 = ATgetFirst((ATermList) e_39);
            t_83 = (ATerm) ATgetNext((ATermList) e_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_83, s_83), (ATerm) ATmakeAppl(sym__2, r_83, t_83));
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL;
  if(match_cons(t, sym__2))
    {
      u_83 = ATgetArgument(t, 0);
      v_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_83), u_83);
  return(t);
}
static ATerm y_10 (ATerm v_816, ATerm a_817, ATerm b_83, ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL;
  t = SSL_explode_term(a_817);
  if(match_cons(t, sym__2))
    {
      l_83 = ATgetArgument(t, 0);
      n_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_816);
  if(match_cons(t, sym__2))
    {
      if((l_83 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_83, n_83);
  t = genzip_4_0(e_10, f_10, g_10, _id, t);
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_83, b_83);
  t = conc_0_0(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm d_84 = NULL;
  d_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_84);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,u_7 = NULL;
  h_84 = t;
  if(match_cons(t, sym__2))
    {
      f_84 = ATgetArgument(t, 0);
      g_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_84);
  e_84 = t;
  t = g_84;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_84, g_84);
  u_7 = t;
  t = SSLsetAnnotations(u_7, e_84);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL;
  u_85 = t;
  if(match_cons(t, sym__2))
    {
      v_85 = ATgetArgument(t, 0);
      w_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_85 = ATgetFirst((ATermList) t);
      y_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_86(v_85, w_85, u_85, t);
            LocalPopChoice(h_39);
          }
        else
          {
            t = g_39;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_85), x_85), y_85);
          }
      }
    }
  else
    {
      t = i_86(v_85, w_85, u_85, t);
    }
  return(t);
}
static ATerm i_86 (ATerm i_84, ATerm j_84, ATerm k_84, ATerm t)
{
  ATerm l_84 = NULL,o_84 = NULL,v_7 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL;
  t = SSLgetAnnotations(k_84);
  l_84 = t;
  t = j_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_85 = ATgetFirst((ATermList) t);
      e_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_85;
  if(match_cons(t, sym__2))
    {
      c_85 = ATgetArgument(t, 0);
      d_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_85;
        if((c_85 != t))
          {
            _fail(t);
          }
        t = e_85;
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        t = j_84;
        t = y_10(c_85, d_85, e_85, t);
      }
  }
  o_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_84, o_84);
  v_7 = t;
  t = SSLsetAnnotations(v_7, l_84);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm h_86 = NULL;
  if(match_cons(t, sym__2))
    {
      h_86 = ATgetArgument(t, 0);
      if((h_86 != ATgetArgument(t, 1)))
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
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_10, k_10, o_10, t);
      LocalPopChoice(t_39);
    }
  else
    {
      t = s_39;
      {
        ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL;
        c_86 = t;
        if(match_cons(t, sym__2))
          {
            d_86 = ATgetArgument(t, 0);
            e_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_86;
        t = t_10(p_10, d_86, e_86, t);
      }
    }
  return(t);
}
static ATerm a_11 (ATerm x_153 (ATerm), ATerm y_153 (ATerm), ATerm z_153 (ATerm), ATerm s_84, ATerm p_84, ATerm x_84, ATerm t_84, ATerm q_84, ATerm r_84, ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_84, t_84);
  t = x_153(t);
  if(match_cons(t, sym__2))
    {
      k_86 = ATgetArgument(t, 0);
      j_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_86;
  t = y_153(t);
  i_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_87, x_84);
  t = diff_0_0(t);
  j_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_87, p_84);
  t = conc_0_0(t);
  k_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_87, x_84);
  t = conc_0_0(t);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_84, k_86, q_84);
  t = z_153(t);
  m_87 = t;
  t = (ATerm) ATmakeAppl(sym__5, k_87, l_87, j_86, m_87, r_84);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm x_153 (ATerm), ATerm y_153 (ATerm), ATerm z_153 (ATerm), ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
        {
          o_87 = ATgetFirst((ATermList) v_39);
          p_87 = (ATerm) ATgetNext((ATermList) v_39);
        }
      else
        _fail(t);
      q_87 = ATgetArgument(t, 1);
      r_87 = ATgetArgument(t, 2);
      s_87 = ATgetArgument(t, 3);
      t_87 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = a_11(x_153, y_153, z_153, o_87, p_87, q_87, r_87, s_87, t_87, t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t)
{
  static ATerm u_87 (ATerm t)
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_126(t);
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        t = k_126(t);
        t = u_87(t);
      }
    return(t);
  }
  t = u_87(t);
  return(t);
}
ATerm for_3_0 (ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm t)
{
  t = m_126(t);
  t = while_not_2_0(n_126, o_126, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL,z_88 = NULL;
  if(match_cons(t, sym__3))
    {
      s_88 = ATgetArgument(t, 0);
      t_88 = ATgetArgument(t, 1);
      z_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, s_88, s_88, t_88, z_88, (ATerm) ATempty);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm c_89 = NULL,s_90 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm y_39 = ATgetArgument(t, 0);
      if(((ATgetType(y_39) != AT_LIST) || !(ATisEmpty(y_39))))
        _fail(t);
      {
        ATerm b_40 = ATgetArgument(t, 1);
      }
      {
        ATerm c_40 = ATgetArgument(t, 2);
      }
      c_89 = ATgetArgument(t, 3);
      s_90 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_89, s_90);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, b_11, c_11, t);
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
        if(match_cons(t, sym__5))
          {
            y_90 = ATgetArgument(t, 0);
            b_91 = ATgetArgument(t, 1);
            c_91 = ATgetArgument(t, 2);
            d_91 = ATgetArgument(t, 3);
            e_91 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = y_90;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_90 = ATgetFirst((ATermList) t);
            a_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, a_91, b_91, c_91, d_91, (ATerm) ATinsert(CheckATermList(e_91), z_90));
      }
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(g_11, t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_40 = ATgetArgument(t, 0);
      v_90 = ATgetArgument(t, 1);
      w_90 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_90), v_90);
  return(t);
}
static ATerm g_11 (ATerm t)
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
static ATerm i_11 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,o_39 = NULL,p_39 = NULL;
  l_39 = t;
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_39;
  if(match_cons(t, sym_Mod_2))
    {
      j_39 = ATgetArgument(t, 0);
      k_39 = ATgetArgument(t, 1);
      {
        ATerm k_40 = t;
        int l_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_39;
            t = s_9(j_39, k_39, p_39, t);
            LocalPopChoice(l_40);
          }
        else
          {
            t = k_40;
            t = u_39(o_39, p_39, t);
          }
      }
    }
  else
    {
      t = u_39(o_39, p_39, t);
    }
  return(t);
}
static ATerm u_39 (ATerm b_39, ATerm c_39, ATerm t)
{
  ATerm f_39 = NULL,i_39 = NULL;
  t = term_e_16;
  f_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), c_39), term_p_17), b_39), term_l_17);
  i_39 = t;
  t = SSL_printnl(f_39, i_39);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), c_39), term_p_17), b_39), term_l_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
  t = for_3_0(q_10, x_10, z_10, t);
  p_95 = t;
  if(match_cons(t, sym__2))
    {
      q_95 = ATgetArgument(t, 0);
      r_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_95;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_95;
    }
  else
    {
      ATerm r_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_95 = ATgetFirst((ATermList) t);
          t_95 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(t_95), s_95);
      t = map_1_0(i_11, t);
      t = term_j_16;
      r_38 = t;
      t = SSL_exit(r_38);
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL;
  if(match_cons(t, sym__2))
    {
      l_96 = ATgetArgument(t, 0);
      m_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(l_96, m_96, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm n_96 = NULL,o_96 = NULL;
  if(match_cons(t, sym__2))
    {
      n_96 = ATgetArgument(t, 0);
      o_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(n_96, o_96, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm p_96 = NULL;
  if(match_cons(t, sym__2))
    {
      p_96 = ATgetArgument(t, 0);
      if((p_96 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL;
  z_95 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      c_96 = ATgetArgument(t, 0);
      x_95 = ATgetArgument(t, 1);
      y_95 = ATgetArgument(t, 2);
      {
        ATerm p_40 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  e_96 = t;
  t = x_95;
  t = foldr_3_0(s_11, x_11, b_12, t);
  a_96 = t;
  t = y_95;
  t = foldr_3_0(c_12, d_12, f_12, t);
  b_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_96, (ATerm) ATmakeAppl(sym__2, a_96, b_96));
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
        t = (ATerm) ATempty;
      }
  }
  g_96 = t;
  t = c_96;
  {
    ATerm s_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(u_40);
      }
    else
      {
        t = s_40;
        t = (ATerm) ATempty;
      }
  }
  f_96 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_96, b_96));
  k_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_96, b_96)), f_96);
  t = f_11(g_12, k_96, f_96, t);
  d_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_96, (ATerm) ATmakeAppl(sym__2, a_96, b_96));
  i_96 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_40, (ATerm) ATinsert(CheckATermList(g_96), z_95));
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_96, (ATerm) ATmakeAppl(sym__2, a_96, b_96)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_40, (ATerm) ATinsert(CheckATermList(g_96), z_95)));
  t = d_11(h_12, i_96, j_96, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_40, d_96);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_96, (ATerm) ATmakeAppl(sym_Defined_2, term_w_40, d_96));
  t = d_11(l_12, c_96, h_96, t);
  t = e_96;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm e_97 = NULL,f_97 = NULL;
  if(match_cons(t, sym__2))
    {
      e_97 = ATgetArgument(t, 0);
      f_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(e_97, f_97, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm g_97 = NULL,h_97 = NULL;
  if(match_cons(t, sym__2))
    {
      g_97 = ATgetArgument(t, 0);
      h_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(g_97, h_97, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm i_97 = NULL;
  if(match_cons(t, sym__2))
    {
      i_97 = ATgetArgument(t, 0);
      if((i_97 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL;
  s_96 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      v_96 = ATgetArgument(t, 0);
      q_96 = ATgetArgument(t, 1);
      r_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  x_96 = t;
  t = q_96;
  t = foldr_3_0(m_12, n_12, p_12, t);
  t_96 = t;
  t = r_96;
  t = foldr_3_0(q_12, r_12, s_12, t);
  u_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym__2, t_96, u_96));
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
  z_96 = t;
  t = v_96;
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
  y_96 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_96, u_96));
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_96, u_96)), y_96);
  t = f_11(t_12, d_97, y_96, t);
  w_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym__2, t_96, u_96));
  b_97 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_41, (ATerm) ATinsert(CheckATermList(z_96), s_96));
  c_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym__2, t_96, u_96)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_41, (ATerm) ATinsert(CheckATermList(z_96), s_96)));
  t = d_11(v_12, b_97, c_97, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, w_96);
  a_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_96, (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, w_96));
  t = d_11(w_12, v_96, a_97, t);
  t = x_96;
  return(t);
}
static ATerm d_11 (ATerm q_131 (ATerm), ATerm e_44, ATerm c_44, ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL;
  m_97 = t;
  t = q_131(t);
  j_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_97, e_44, c_44);
  t = w_11(j_97, e_44, c_44, t);
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_97 = NULL;
        t = term_v_35;
        r_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_97, term_v_35);
        t = v_11(j_97, r_97, t);
        LocalPopChoice(g_41);
      }
    else
      {
        t = f_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_97 = ATgetFirst((ATermList) t);
      l_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_97, term_v_35, (ATerm) ATinsert(CheckATermList(l_97), (ATerm) ATinsert(CheckATermList(k_97), e_44)));
  t = lookup_table_0_1(j_97, t);
  q_97 = t;
  t = term_v_35;
  n_97 = t;
  t = (ATerm) ATinsert(CheckATermList(l_97), (ATerm) ATinsert(CheckATermList(k_97), e_44));
  o_97 = t;
  t = q_97;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(n_97, o_97, p_97, t);
  t = m_97;
  return(t);
}
static ATerm e_11 (ATerm f_137 (ATerm), ATerm g_137 (ATerm), ATerm x_60, ATerm w_60, ATerm t)
{
  t = g_137(t);
  {
    static ATerm x_12 (ATerm t)
    {
      ATerm s_97 = NULL;
      s_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_60, s_97);
      t = f_137(t);
      return(t);
    }
    t = fetch_1_0(x_12, t);
  }
  t = w_60;
  return(t);
}
static ATerm f_11 (ATerm c_137 (ATerm), ATerm t_60, ATerm s_60, ATerm t)
{
  static ATerm i_98 (ATerm t)
  {
    ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL;
    d_98 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_60;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_98 = ATgetFirst((ATermList) t);
            f_98 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_41 = t;
          int i_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_98;
              {
                static ATerm a_13 (ATerm t)
                {
                  t = s_60;
                  return(t);
                }
                t = e_11(c_137, a_13, e_98, f_98, t);
              }
              t = i_98(t);
              LocalPopChoice(i_41);
            }
          else
            {
              t = h_41;
              {
                ATerm m_40 = NULL,t_40 = NULL,z_7 = NULL;
                t = SSLgetAnnotations(d_98);
                m_40 = t;
                t = f_98;
                t = i_98(t);
                t_40 = t;
                t = (ATerm) ATinsert(CheckATermList(t_40), e_98);
                z_7 = t;
                t = SSLsetAnnotations(z_7, m_40);
              }
            }
        }
      }
    return(t);
  }
  t = t_60;
  t = i_98(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm w_98 = NULL;
  w_98 = t;
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_42 = NULL,g_42 = NULL;
        t = term_o_40;
        g_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_40, w_98);
        t = h_11(g_42, w_98, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_41) != ATmakeSymbol("i_1", 0, ATtrue)))
              _fail(t);
            a_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_42;
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        {
          ATerm o_41 = t;
          int p_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_42 = NULL,y_42 = NULL;
              t = term_o_40;
              y_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_o_40, w_98);
              t = h_11(y_42, w_98, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_41) != ATmakeSymbol("e_1", 0, ATtrue)))
                    _fail(t);
                  n_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_42;
              LocalPopChoice(p_41);
            }
          else
            {
              t = o_41;
              {
                ATerm k_43 = NULL,s_43 = NULL;
                t = term_o_40;
                s_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_40, w_98);
                t = h_11(s_43, w_98, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm r_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_41) != ATmakeSymbol("y_0", 0, ATtrue)))
                      _fail(t);
                    k_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_43;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm h_11 (ATerm t_45, ATerm u_45, ATerm t)
{
  ATerm a_99 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
  t = v_11(t_45, u_45, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_99 = ATgetFirst((ATermList) t);
      {
        ATerm s_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_99;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm r_99 = NULL,t_99 = NULL;
  r_99 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_41 = ATgetArgument(t, 0);
      t_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_99;
  if(match_cons(t, sym__2))
    {
      ATerm u_41 = ATgetArgument(t, 0);
      ATerm v_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_44 = NULL,n_44 = NULL;
        t = term_n_40;
        n_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_40, r_99);
        t = h_11(n_44, r_99, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_41) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
            k_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_44;
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
        {
          ATerm z_41 = t;
          int b_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_44 = NULL,w_44 = NULL;
              t = term_n_40;
              w_44 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_n_40, r_99);
              t = h_11(w_44, r_99, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm c_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_42) != ATmakeSymbol("b_1", 0, ATtrue)))
                    _fail(t);
                  s_44 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_44;
              LocalPopChoice(b_42);
            }
          else
            {
              t = z_41;
              {
                ATerm p_45 = NULL,x_45 = NULL;
                t = term_n_40;
                x_45 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_40, r_99);
                t = h_11(x_45, r_99, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm d_42 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_42) != ATmakeSymbol("v_0", 0, ATtrue)))
                      _fail(t);
                    p_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_45;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm h_140 (ATerm), ATerm i_140 (ATerm), ATerm j_140 (ATerm), ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL;
  a_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_100;
      t = h_140(t);
    }
  else
    {
      ATerm f_100 = NULL,g_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_100 = ATgetFirst((ATermList) t);
          c_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_100;
      t = j_140(t);
      f_100 = t;
      t = c_100;
      t = foldr_3_0(h_140, i_140, j_140, t);
      g_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_100, g_100);
      t = i_140(t);
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm v_100 = NULL,w_100 = NULL;
  if(match_cons(t, sym__2))
    {
      v_100 = ATgetArgument(t, 0);
      w_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(v_100, w_100, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL;
  if(match_cons(t, sym__2))
    {
      x_100 = ATgetArgument(t, 0);
      y_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(x_100, y_100, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm z_100 = NULL;
  if(match_cons(t, sym__2))
    {
      z_100 = ATgetArgument(t, 0);
      if((z_100 != ATgetArgument(t, 1)))
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
  t = term_n_40;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL;
  j_100 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_100 = ATgetArgument(t, 0);
      h_100 = ATgetArgument(t, 1);
      i_100 = ATgetArgument(t, 2);
      {
        ATerm e_42 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  o_100 = t;
  t = h_100;
  t = foldr_3_0(b_13, d_13, e_13, t);
  k_100 = t;
  t = i_100;
  t = foldr_3_0(f_13, g_13, h_13, t);
  l_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_100, (ATerm) ATmakeAppl(sym__2, k_100, l_100));
  {
    ATerm f_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(h_42);
      }
    else
      {
        t = f_42;
        t = (ATerm) ATempty;
      }
  }
  q_100 = t;
  t = m_100;
  {
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        t = (ATerm) ATempty;
      }
  }
  p_100 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_100, l_100));
  u_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_100, l_100)), p_100);
  t = f_11(j_13, u_100, p_100, t);
  n_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_100, (ATerm) ATmakeAppl(sym__2, k_100, l_100));
  s_100 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_42, (ATerm) ATinsert(CheckATermList(q_100), j_100));
  t_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_100, (ATerm) ATmakeAppl(sym__2, k_100, l_100)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_42, (ATerm) ATinsert(CheckATermList(q_100), j_100)));
  t = d_11(k_13, s_100, t_100, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_42, n_100);
  r_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_100, (ATerm) ATmakeAppl(sym_Defined_2, term_l_42, n_100));
  t = d_11(l_13, m_100, r_100, t);
  t = o_100;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm m_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(o_42);
    }
  else
    {
      t = m_42;
      {
        ATerm p_42 = t;
        int s_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(s_42);
          }
        else
          {
            t = p_42;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm a_101 = NULL;
  t = map_1_0(s_13, t);
  a_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_v_42), a_101, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL,g_8 = NULL;
  g_101 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_101 = ATgetFirst((ATermList) t);
      d_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_101);
  b_101 = t;
  t = c_101;
  t = m_104(t);
  e_101 = t;
  t = d_101;
  t = n_104(t);
  f_101 = t;
  t = (ATerm) ATinsert(CheckATermList(f_101), e_101);
  g_8 = t;
  t = SSLsetAnnotations(g_8, b_101);
  return(t);
}
static ATerm j_11 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm h_101 = NULL;
  t = SSL_fputc(m_35, n_35);
  h_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_101);
  return(t);
}
static ATerm k_11 (ATerm e_34, ATerm f_34, ATerm t)
{
  ATerm i_101 = NULL;
  t = SSL_write_term_to_stream_text(e_34, f_34);
  i_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_101);
  return(t);
}
static ATerm m_11 (ATerm h_127 (ATerm), ATerm k_270, ATerm k_34, ATerm t)
{
  ATerm j_101 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_270, term_z_42);
  t = q_11(t);
  j_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_101, k_34);
  t = h_127(t);
  t = fclose_0_0(t);
  t = k_34;
  return(t);
}
static ATerm l_11 (ATerm a_34, ATerm b_34, ATerm t)
{
  ATerm k_101 = NULL;
  t = SSL_write_term_to_stream_baf(a_34, b_34);
  k_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_101);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      if(match_cons(a_43, sym_Stream_1))
        {
          p_46 = ATgetArgument(a_43, 0);
        }
      else
        _fail(t);
      q_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(p_46, q_46, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(match_cons(b_43, sym_Stream_1))
        {
          w_47 = ATgetArgument(b_43, 0);
        }
      else
        _fail(t);
      x_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(w_47, x_47, t);
  t_47 = t;
  t = term_a_23;
  u_47 = t;
  t = t_47;
  if(match_cons(t, sym_Stream_1))
    {
      v_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, t_47);
  t = j_11(u_47, v_47, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_101 = NULL,p_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,y_102 = NULL,z_102 = NULL,j_8 = NULL,i_8 = NULL;
  p_101 = t;
  if(match_cons(t, sym__2))
    {
      w_101 = ATgetArgument(t, 0);
      x_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_101);
  v_101 = t;
  t = w_101;
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_101 != NULL) && (o_101 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(t_13, t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        t = term_e_43;
        o_101 = t;
      }
  }
  y_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_101, x_101);
  i_8 = t;
  t = SSLsetAnnotations(i_8, v_101);
  t = p_101;
  if(match_cons(t, sym__2))
    {
      r_101 = ATgetArgument(t, 0);
      s_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_101);
  q_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_101, (ATerm) ATmakeAppl(sym__2, not_null(o_101), s_101));
  j_8 = t;
  t = SSLsetAnnotations(j_8, q_101);
  u_101 = t;
  if(match_cons(t, sym__2))
    {
      y_102 = ATgetArgument(t, 0);
      z_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,k_8 = NULL;
        t = SSLgetAnnotations(u_101);
        c_46 = t;
        t = y_102;
        t = fetch_1_0(u_13, t);
        k_46 = t;
        t = z_102;
        if(match_cons(t, sym__2))
          {
            m_46 = ATgetArgument(t, 0);
            n_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(v_13, m_46, n_46, t);
        l_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
        k_8 = t;
        t = SSLsetAnnotations(k_8, c_46);
        LocalPopChoice(g_43);
      }
    else
      {
        t = f_43;
        {
          ATerm x_46 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,l_8 = NULL;
          t = SSLgetAnnotations(u_101);
          x_46 = t;
          t = z_102;
          if(match_cons(t, sym__2))
            {
              k_47 = ATgetArgument(t, 0);
              l_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_11(w_13, k_47, l_47, t);
          j_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_102, j_47);
          l_8 = t;
          t = SSLsetAnnotations(l_8, x_46);
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
ATerm apply_strategy_1_0 (ATerm i_148 (ATerm), ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL;
  g_103 = t;
  t = dtime_0_0(t);
  t = g_103;
  t = i_148(t);
  f_103 = t;
  t = dtime_0_0(t);
  c_103 = t;
  t = f_103;
  if(match_cons(t, sym__2))
    {
      d_103 = ATgetArgument(t, 0);
      e_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_103), (ATerm) ATmakeAppl(sym_Runtime_1, c_103)), e_103);
  return(t);
}
static ATerm u_103 (ATerm o_103, ATerm t)
{
  t = SSL_fclose(o_103);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_103 = NULL,s_103 = NULL;
  s_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_103 = ATgetArgument(t, 0);
      {
        ATerm h_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_103);
            LocalPopChoice(i_43);
          }
        else
          {
            t = h_43;
            t = u_103(s_103, t);
          }
      }
    }
  else
    {
      t = u_103(s_103, t);
    }
  return(t);
}
static ATerm n_11 (ATerm g_34, ATerm t)
{
  t = SSL_read_term_from_stream(g_34);
  return(t);
}
static ATerm o_11 (ATerm w_69, ATerm x_69, ATerm t)
{
  t = SSL_strcat(w_69, x_69);
  return(t);
}
static ATerm p_11 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm v_103 = NULL;
  t = SSL_fopen(o_35, p_35);
  v_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_103);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_103 = NULL;
  t = SSL_stdin_stream();
  w_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_103);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_103 = NULL;
  t = SSL_stdout_stream();
  x_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_103);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_103 = NULL;
  t = SSL_stderr_stream();
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_103);
  return(t);
}
static ATerm h_105 (ATerm e_104, ATerm t)
{
  ATerm f_104 = NULL;
  t = SSL_explode_term(e_104);
  if(match_cons(t, sym__2))
    {
      ATerm j_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_43 = ATgetArgument(t, 1);
        if(((ATgetType(l_43) == AT_LIST) && !(ATisEmpty(l_43))))
          {
            f_104 = ATgetFirst((ATermList) l_43);
            {
              ATerm m_43 = (ATerm) ATgetNext((ATermList) l_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_104;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_104;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_104;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_104;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_105 (ATerm i_104, ATerm j_104, ATerm k_104, ATerm t)
{
  ATerm l_104 = NULL,o_104 = NULL,p_104 = NULL,s_104 = NULL,s_8 = NULL;
  t = SSLgetAnnotations(k_104);
  p_104 = t;
  t = i_104;
  if(match_cons(t, sym_Path_1))
    {
      s_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_104, j_104);
  s_8 = t;
  t = SSLsetAnnotations(s_8, p_104);
  if(match_cons(t, sym__2))
    {
      l_104 = ATgetArgument(t, 0);
      o_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(l_104, o_104, t);
  return(t);
}
static ATerm j_105 (ATerm u_104, ATerm v_104, ATerm w_104, ATerm t)
{
  ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL,c_105 = NULL,u_8 = NULL;
  t = SSLgetAnnotations(w_104);
  z_104 = t;
  t = SSL_is_string(u_104);
  c_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_105, v_104);
  u_8 = t;
  t = SSLsetAnnotations(u_8, z_104);
  if(match_cons(t, sym__2))
    {
      x_104 = ATgetArgument(t, 0);
      y_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(x_104, y_104, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm e_105 = NULL,f_105 = NULL,g_105 = NULL;
  e_105 = t;
  if(match_cons(t, sym__2))
    {
      f_105 = ATgetArgument(t, 0);
      g_105 = ATgetArgument(t, 1);
      {
        ATerm n_43 = t;
        int o_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_105(e_105, t);
            LocalPopChoice(o_43);
          }
        else
          {
            t = n_43;
            {
              ATerm p_43 = t;
              int q_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_105(f_105, g_105, e_105, t);
                  LocalPopChoice(q_43);
                }
              else
                {
                  t = p_43;
                  t = j_105(f_105, g_105, e_105, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_105(e_105, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL,s_105 = NULL;
  s_105 = t;
  {
    ATerm r_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_105, term_u_43);
        t = q_11(t);
        LocalPopChoice(t_43);
      }
    else
      {
        t = r_43;
        {
          ATerm p_48 = NULL,q_48 = NULL;
          t = term_v_43;
          q_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_43, s_105);
          t = o_11(q_48, s_105, t);
          p_48 = t;
          t = SSL_perror(p_48);
          _fail(t);
        }
      }
  }
  m_105 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(n_105, t);
  l_105 = t;
  t = m_105;
  t = fclose_0_0(t);
  t = l_105;
  return(t);
}
ATerm fetch_1_0 (ATerm d_135 (ATerm), ATerm t)
{
  static ATerm r_106 (ATerm t)
  {
    ATerm o_106 = NULL,p_106 = NULL,q_106 = NULL;
    o_106 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_106 = ATgetFirst((ATermList) t);
        q_106 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_49 = NULL,e_49 = NULL,y_8 = NULL;
          t = SSLgetAnnotations(o_106);
          b_49 = t;
          t = p_106;
          t = d_135(t);
          e_49 = t;
          t = (ATerm) ATinsert(CheckATermList(q_106), e_49);
          y_8 = t;
          t = SSLsetAnnotations(y_8, b_49);
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          {
            ATerm w_49 = NULL,z_49 = NULL,z_8 = NULL;
            t = SSLgetAnnotations(o_106);
            w_49 = t;
            t = q_106;
            t = r_106(t);
            z_49 = t;
            t = (ATerm) ATinsert(CheckATermList(z_49), p_106);
            z_8 = t;
            t = SSLsetAnnotations(z_8, w_49);
          }
        }
    }
    return(t);
  }
  t = r_106(t);
  return(t);
}
static ATerm v_11 (ATerm b_47, ATerm c_47, ATerm t)
{
  ATerm u_106 = NULL;
  t = lookup_table_0_1(b_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(c_47, u_106, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_128 (ATerm), ATerm t)
{
  ATerm x_106 = NULL;
  x_106 = t;
  {
    ATerm y_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL;
        t = term_a_44;
        a_107 = t;
        t = term_b_44;
        b_107 = t;
        t = term_d_44;
        t = v_11(a_107, b_107, t);
        z_106 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_106, term_f_44);
        t = geq_0_0(t);
        t = x_106;
        t = y_128(t);
        LocalPopChoice(z_43);
      }
    else
      {
        t = y_43;
        t = x_106;
      }
  }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm e_107 = NULL;
  e_107 = t;
  if(match_string(t, "-k"))
    {
      t = e_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_107;
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
  f_107 = t;
  t = SSL_string_to_int(f_107);
  g_107 = t;
  t = term_g_44;
  h_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_44, g_107);
  t = y_11(h_107, g_107, t);
  t = f_107;
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
  ATerm j_107 = NULL;
  j_107 = t;
  if(match_string(t, "-S"))
    {
      t = j_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_107;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm k_107 = NULL,l_107 = NULL;
  t = term_b_44;
  k_107 = t;
  t = term_y_20;
  l_107 = t;
  t = term_j_44;
  t = y_11(k_107, l_107, t);
  t = term_l_44;
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
  ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL;
  m_107 = t;
  t = SSL_string_to_int(m_107);
  n_107 = t;
  t = term_b_44;
  o_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_44, n_107);
  t = y_11(o_107, n_107, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_107);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_o_44;
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
  ATerm p_107 = NULL,q_107 = NULL;
  t = term_q_44;
  p_107 = t;
  t = term_d_16;
  q_107 = t;
  t = term_r_44;
  t = y_11(p_107, q_107, t);
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
  ATerm x_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_14, b_14, c_14, t);
      LocalPopChoice(a_45);
    }
  else
    {
      t = x_44;
      {
        ATerm b_45 = t;
        int l_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_14, e_14, f_14, t);
            LocalPopChoice(l_45);
          }
        else
          {
            t = b_45;
            t = Option_3_0(g_14, h_14, i_14, t);
          }
      }
    }
  return(t);
}
static ATerm y_11 (ATerm m_39, ATerm n_39, ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL;
  t = term_a_44;
  r_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_44, m_39, n_39);
  t = lookup_table_0_1(r_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(m_39, n_39, s_107, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_44, m_39, n_39);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_107 = NULL,x_107 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL;
      t = term_d_16;
      t = j_0(t);
      y_107 = t;
      t = term_m_45;
      z_107 = t;
      t = term_q_45;
      a_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_45, term_q_45, y_107);
      t = w_11(z_107, a_108, y_107, t);
      _fail(t);
    }
  else
    {
      ATerm d_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_107 = ATgetFirst((ATermList) t);
          x_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_107;
      t = d_0(t);
      t = term_d_16;
      t = g_0(t);
      d_108 = t;
      t = (ATerm) ATinsert(CheckATermList(x_107), d_108);
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm f_108 = NULL;
  f_108 = t;
  if(match_string(t, "-o"))
    {
      t = f_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_108;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL;
  g_108 = t;
  t = term_r_45;
  h_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_45, g_108);
  t = y_11(h_108, g_108, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_108);
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
static ATerm w_11 (ATerm i_45, ATerm j_45, ATerm h_45, ATerm t)
{
  ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL;
  j_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_45, j_45);
  {
    ATerm y_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_46 = ATgetArgument(t, 0);
            ATerm b_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_45, j_45);
        t = v_11(i_45, j_45, t);
        LocalPopChoice(z_45);
      }
    else
      {
        t = y_45;
        t = (ATerm) ATempty;
      }
  }
  k_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_45, j_45, (ATerm) ATinsert(CheckATermList(k_108), h_45));
  t = lookup_table_0_1(i_45, t);
  n_108 = t;
  t = (ATerm) ATinsert(CheckATermList(k_108), h_45);
  l_108 = t;
  t = n_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(j_45, l_108, m_108, t);
  t = j_108;
  return(t);
}
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL,x_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL;
      t = term_d_16;
      t = t_0(t);
      y_108 = t;
      t = term_m_45;
      z_108 = t;
      t = term_q_45;
      a_109 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_45, term_q_45, y_108);
      t = w_11(z_108, a_109, y_108, t);
      _fail(t);
    }
  else
    {
      ATerm e_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_108 = ATgetFirst((ATermList) t);
          v_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_108 = ATgetFirst((ATermList) t);
          x_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_108;
      t = q_0(t);
      t = w_108;
      t = r_0(t);
      e_109 = t;
      t = (ATerm) ATinsert(CheckATermList(x_108), e_109);
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm g_109 = NULL;
  g_109 = t;
  if(match_string(t, "-i"))
    {
      t = g_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_109;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm h_109 = NULL,i_109 = NULL;
  h_109 = t;
  t = term_i_46;
  i_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_46, h_109);
  t = y_11(i_109, h_109, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_109);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_j_46;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_14, n_14, o_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_109 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_16;
  t = whoami_0_0(t);
  j_109 = t;
  t = term_e_16;
  l_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_46), j_109);
  m_109 = t;
  t = SSL_printnl(l_109, m_109);
  t = term_j_16;
  k_109 = t;
  t = SSL_exit(k_109);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_109 = NULL,o_109 = NULL;
  t = term_a_44;
  n_109 = t;
  t = term_t_46;
  o_109 = t;
  t = term_v_46;
  t = v_11(n_109, o_109, t);
  return(t);
}
static ATerm r_11 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm w_46 = t;
  int y_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_42, r_42);
      LocalPopChoice(y_46);
    }
  else
    {
      t = w_46;
      t = SSL_addr(q_42, r_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_140 (ATerm), ATerm g_140 (ATerm), ATerm t)
{
  ATerm q_109 = NULL,r_109 = NULL,s_109 = NULL;
  q_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_109;
      t = f_140(t);
    }
  else
    {
      ATerm v_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_109 = ATgetFirst((ATermList) t);
          s_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_109;
      t = foldr_2_0(f_140, g_140, t);
      v_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_109, v_109);
      t = g_140(t);
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
  t = term_y_20;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  if(match_cons(t, sym__2))
    {
      e_51 = ATgetArgument(t, 0);
      f_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(e_51, f_51, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_109 = NULL,z_50 = NULL,a_51 = NULL;
  t = times_0_0(t);
  a_51 = t;
  t = SSL_explode_term(a_51);
  if(match_cons(t, sym__2))
    {
      ATerm z_46 = ATgetArgument(t, 0);
      z_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_50;
  t = foldr_2_0(p_14, q_14, t);
  y_109 = t;
  t = SSL_TicksToSeconds(y_109);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL;
  j_110 = t;
  if(match_cons(t, sym__2))
    {
      k_110 = ATgetArgument(t, 0);
      l_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_47 = t;
    int i_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_110;
        if((k_110 != t))
          {
            _fail(t);
          }
        t = j_110;
        LocalPopChoice(i_47);
      }
    else
      {
        t = g_47;
        t = (ATerm) ATmakeAppl(sym__2, k_110, l_110);
        {
          ATerm o_47 = t;
          int y_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_110, l_110);
              LocalPopChoice(y_47);
            }
          else
            {
              t = o_47;
              t = SSL_gtr(k_110, l_110);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_110, l_110);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_128 (ATerm), ATerm t)
{
  ATerm p_110 = NULL;
  p_110 = t;
  {
    ATerm z_47 = t;
    int a_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL;
        t = term_a_44;
        s_110 = t;
        t = term_b_44;
        t_110 = t;
        t = term_d_44;
        t = v_11(s_110, t_110, t);
        r_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_110, term_j_16);
        t = geq_0_0(t);
        t = p_110;
        t = x_128(t);
        LocalPopChoice(a_48);
      }
    else
      {
        t = z_47;
        t = p_110;
      }
  }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL,y_110 = NULL,z_110 = NULL;
  t = run_time_0_0(t);
  v_110 = t;
  t = term_d_16;
  t = whoami_0_0(t);
  w_110 = t;
  t = term_e_16;
  y_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_48), v_110), term_b_48), w_110);
  z_110 = t;
  t = SSL_printnl(y_110, z_110);
  t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_48), v_110), term_b_48), w_110));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_111 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_20;
  a_111 = t;
  t = SSL_exit(a_111);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm k_111 = NULL,l_111 = NULL;
  l_111 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_111;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_111 = ATgetArgument(t, 0);
          {
            ATerm w_51 = NULL,f_9 = NULL;
            t = SSLgetAnnotations(l_111);
            w_51 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_111);
            f_9 = t;
            t = SSLsetAnnotations(f_9, w_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_111;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_149 (ATerm), ATerm t)
{
  ATerm d_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_111 = NULL,e_111 = NULL;
      t = term_a_44;
      d_111 = t;
      t = term_f_48;
      e_111 = t;
      t = term_g_48;
      t = v_11(d_111, e_111, t);
      LocalPopChoice(e_48);
    }
  else
    {
      t = d_48;
      t = fetch_1_0(s_14, t);
    }
  t = g_149(t);
  return(t);
}
static ATerm z_11 (ATerm a_50, ATerm b_50, ATerm c_50, ATerm t)
{
  ATerm n_111 = NULL;
  t = SSL_hashtable_put(c_50, a_50, b_50);
  n_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_111);
  return(t);
}
static ATerm a_12 (ATerm d_50, ATerm e_50, ATerm t)
{
  t = SSL_hashtable_get(e_50, d_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm u_46, ATerm t)
{
  ATerm w_111 = NULL;
  t = table_hashtable_0_0(t);
  w_111 = t;
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_52 = NULL;
        t = w_111;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_12(u_46, q_52, t);
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
        {
          ATerm v_52 = NULL;
          t = u_46;
          t = table_create_0_0(t);
          t = w_111;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(u_46, v_52, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm z_111 = NULL;
  t = SSL_hashtable_create(i_50, j_50);
  z_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_111);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL,e_112 = NULL,f_112 = NULL;
  a_112 = t;
  t = term_j_48;
  e_112 = t;
  t = term_k_48;
  f_112 = t;
  t = a_112;
  t = new_hashtable_0_2(e_112, f_112, t);
  b_112 = t;
  t = a_112;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(a_112, b_112, c_112, t);
  t = a_112;
  return(t);
}
static ATerm t_11 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm g_112 = NULL;
  t = SSL_hashtable_remove(g_50, f_50);
  g_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_112);
  return(t);
}
static ATerm u_11 (ATerm k_50, ATerm t)
{
  ATerm h_112 = NULL;
  t = SSL_hashtable_destroy(k_50);
  h_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_112);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_112 = NULL;
  t = SSL_table_hashtable();
  i_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_112);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL;
  j_112 = t;
  t = table_hashtable_0_0(t);
  k_112 = t;
  t = lookup_table_0_1(j_112, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(m_112, t);
  t = k_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(j_112, l_112, t);
  t = j_112;
  return(t);
}
ATerm map_1_0 (ATerm t_134 (ATerm), ATerm t)
{
  static ATerm b_113 (ATerm t)
  {
    ATerm y_112 = NULL,z_112 = NULL,a_113 = NULL;
    y_112 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_112;
      }
    else
      {
        ATerm n_53 = NULL,x_53 = NULL,y_53 = NULL,r_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_112 = ATgetFirst((ATermList) t);
            a_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_112);
        n_53 = t;
        t = z_112;
        t = t_134(t);
        x_53 = t;
        t = a_113;
        t = b_113(t);
        y_53 = t;
        t = (ATerm) ATinsert(CheckATermList(y_53), x_53);
        r_9 = t;
        t = SSLsetAnnotations(r_9, n_53);
      }
    return(t);
  }
  t = b_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_113 = ATgetFirst((ATermList) t);
      f_113 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_113 = NULL,k_113 = NULL;
        static ATerm t_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_113)), not_null(k_113));
          return(t);
        }
        t = f_113;
        t = o_0(t);
        if(((j_113 != NULL) && (j_113 != t)))
          _fail(t);
        else
          j_113 = t;
        t = e_113;
        t = l_0(t);
        if(((k_113 != NULL) && (k_113 != t)))
          _fail(t);
        else
          k_113 = t;
        t = f_113;
        t = reverse_acc_2_0(l_0, t_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_16;
      t = o_0(t);
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm q_113 = NULL,r_113 = NULL,s_113 = NULL,u_10 = NULL;
  s_113 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_113);
  q_113 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_113);
  u_10 = t;
  t = SSLsetAnnotations(u_10, q_113);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm u_113 = NULL;
  u_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_113), term_l_48);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL;
  ATerm m_48 = t;
  int n_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_113 = NULL,p_113 = NULL;
      t = term_a_44;
      o_113 = t;
      t = term_t_46;
      p_113 = t;
      t = term_v_46;
      t = v_11(o_113, p_113, t);
      LocalPopChoice(n_48);
    }
  else
    {
      t = m_48;
      t = fetch_1_0(u_14, t);
    }
  t = term_o_48;
  t = echo_0_0(t);
  t = term_m_45;
  m_113 = t;
  t = term_q_45;
  n_113 = t;
  t = term_r_48;
  t = v_11(m_113, n_113, t);
  t = reverse_acc_2_0(_id, v_14, t);
  t = map_1_0(x_14, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL;
  w_113 = t;
  {
    ATerm s_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_113;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_48 = ATgetFirst((ATermList) t);
                ATerm v_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_113;
          }
        LocalPopChoice(t_48);
      }
    else
      {
        t = s_48;
        t = (ATerm) ATinsert(ATempty, w_113);
      }
  }
  x_113 = t;
  t = term_e_43;
  y_113 = t;
  t = SSL_printnl(y_113, x_113);
  t = w_113;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL;
  t = term_a_44;
  c_114 = t;
  t = term_t_46;
  d_114 = t;
  t = term_v_46;
  t = v_11(c_114, d_114, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm e_114 = NULL,f_114 = NULL;
  t = term_w_48;
  e_114 = t;
  t = term_d_16;
  f_114 = t;
  t = term_x_48;
  t = y_11(e_114, f_114, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_y_48;
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
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL;
  t = term_w_48;
  i_114 = t;
  t = term_d_16;
  j_114 = t;
  t = term_x_48;
  t = y_11(i_114, j_114, t);
  t = term_z_48;
  g_114 = t;
  t = term_d_16;
  h_114 = t;
  t = term_a_49;
  t = y_11(g_114, h_114, t);
  t = term_c_49;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_d_49;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_49 = t;
  int g_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_14, z_14, a_15, t);
      LocalPopChoice(g_49);
    }
  else
    {
      t = f_49;
      t = Option_3_0(d_15, e_15, f_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_151 (ATerm), ATerm t)
{
  ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL,r_114 = NULL,t_114 = NULL,u_114 = NULL,o_12 = NULL;
  o_114 = t;
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_49;
        t = j_151(t);
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
      }
  }
  t = o_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_114 = ATgetFirst((ATermList) t);
      r_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_114);
  p_114 = t;
  t = term_t_46;
  u_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_46, q_114);
  t = y_11(u_114, q_114, t);
  t = r_114;
  {
    static ATerm e_115 (ATerm t)
    {
      ATerm k_49 = t;
      int l_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_49 = t;
          int n_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_114 = NULL;
              x_114 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_114;
              LocalPopChoice(n_49);
            }
          else
            {
              t = m_49;
              t = j_151(t);
              t = Cons_2_0(_id, e_115, t);
            }
          LocalPopChoice(l_49);
        }
      else
        {
          t = k_49;
          {
            ATerm a_115 = NULL,b_115 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_115 = ATgetFirst((ATermList) t);
                b_115 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_115), (ATerm) ATmakeAppl(sym_Undefined_1, a_115));
          }
        }
      return(t);
    }
    t = e_115(t);
  }
  t_114 = t;
  t = (ATerm) ATinsert(CheckATermList(t_114), (ATerm) ATmakeAppl(sym_Program_1, q_114));
  o_12 = t;
  t = SSLsetAnnotations(o_12, p_114);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm r_115 = NULL;
  r_115 = t;
  if(match_string(t, "--help"))
    {
      t = r_115;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_115;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_115;
        }
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL;
  t = term_f_48;
  s_115 = t;
  t = term_d_16;
  t_115 = t;
  t = term_o_49;
  t = y_11(s_115, t_115, t);
  t = term_p_49;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_q_49;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_151 (ATerm), ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL;
  l_115 = t;
  t = term_m_45;
  m_115 = t;
  t = term_r_49;
  t = lookup_table_0_1(m_115, t);
  q_115 = t;
  t = term_q_45;
  n_115 = t;
  t = (ATerm) ATempty;
  o_115 = t;
  t = q_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(n_115, o_115, p_115, t);
  t = l_115;
  {
    static ATerm g_15 (ATerm t)
    {
      ATerm s_49 = t;
      int t_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_151(t);
          LocalPopChoice(t_49);
        }
      else
        {
          t = s_49;
          {
            ATerm u_49 = t;
            int v_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_15, i_15, o_15, t);
                LocalPopChoice(v_49);
              }
            else
              {
                t = u_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_15, t);
  }
  {
    ATerm x_49 = t;
    int y_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_116 = NULL;
        e_116 = t;
        {
          ATerm h_50 = t;
          int l_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_54 = NULL;
              t = e_116;
              {
                ATerm m_50 = t;
                int n_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_54 = NULL,r_54 = NULL;
                    t = term_a_44;
                    q_54 = t;
                    t = term_f_48;
                    r_54 = t;
                    t = term_g_48;
                    t = v_11(q_54, r_54, t);
                    LocalPopChoice(n_50);
                  }
                else
                  {
                    t = m_50;
                    t = fetch_1_0(p_15, t);
                  }
              }
              t = e_116;
              t = default_system_usage_0_0(t);
              t = term_y_20;
              m_54 = t;
              t = SSL_exit(m_54);
              LocalPopChoice(l_50);
            }
          else
            {
              t = h_50;
              {
                ATerm v_54 = NULL,y_54 = NULL,z_54 = NULL;
                t = term_a_44;
                y_54 = t;
                t = term_w_48;
                z_54 = t;
                t = term_o_50;
                t = v_11(y_54, z_54, t);
                t = e_116;
                t = default_system_about_0_0(t);
                t = term_y_20;
                v_54 = t;
                t = SSL_exit(v_54);
              }
            }
        }
        LocalPopChoice(y_49);
      }
    else
      {
        t = x_49;
        {
          ATerm p_50 = t;
          int q_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL;
              static ATerm q_15 (ATerm t)
              {
                ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL,c_13 = NULL;
                k_116 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_116 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_116);
                i_116 = t;
                t = j_116;
                if(((j_115 != NULL) && (j_115 != t)))
                  _fail(t);
                else
                  j_115 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_116);
                c_13 = t;
                t = SSLsetAnnotations(c_13, i_116);
                return(t);
              }
              t = fetch_1_0(q_15, t);
              t = term_e_16;
              g_116 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_115)), term_r_50);
              h_116 = t;
              t = SSL_printnl(g_116, h_116);
              t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_115)), term_r_50));
              t = default_system_usage_0_0(t);
              t = term_j_16;
              f_116 = t;
              t = SSL_exit(f_116);
              LocalPopChoice(q_50);
            }
          else
            {
              t = p_50;
            }
        }
      }
  }
  k_115 = t;
  t = term_m_45;
  t = table_destroy_0_0(t);
  t = k_115;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_149 (ATerm), ATerm j_149 (ATerm), ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm t)
{
  ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL;
  t = parse_options_1_0(i_149, t);
  p_116 = t;
  t = term_s_50;
  t = table_create_0_0(t);
  t = term_s_50;
  q_116 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_50, term_t_50, p_116);
  t = lookup_table_0_1(q_116, t);
  t_116 = t;
  t = term_t_50;
  r_116 = t;
  t = t_116;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(r_116, p_116, s_116, t);
  t = p_116;
  t = k_149(t);
  {
    ATerm u_50 = t;
    int v_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_149, t);
        LocalPopChoice(v_50);
      }
    else
      {
        t = u_50;
        {
          ATerm w_50 = t;
          int x_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_149(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_50);
            }
          else
            {
              t = w_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = if_verbose2_1_0(x_15, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm u_116 = NULL,v_116 = NULL;
  t = term_y_50;
  u_116 = t;
  t = term_d_16;
  v_116 = t;
  t = term_b_51;
  t = y_11(u_116, v_116, t);
  t = term_c_51;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_d_51;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL;
  w_116 = t;
  t = term_a_44;
  a_117 = t;
  t = term_t_46;
  b_117 = t;
  t = term_v_46;
  t = v_11(a_117, b_117, t);
  x_116 = t;
  t = term_e_16;
  y_116 = t;
  t = (ATerm) ATinsert(ATempty, x_116);
  z_116 = t;
  t = SSL_printnl(y_116, z_116);
  t = w_116;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_148 (ATerm), ATerm s_148 (ATerm), ATerm t_148 (ATerm), ATerm t)
{
  static ATerm r_15 (ATerm t)
  {
    ATerm g_51 = t;
    int h_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_148(t);
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
                          t = Option_3_0(u_15, v_15, w_15, t);
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
  static ATerm t_15 (ATerm t)
  {
    ATerm c_117 = NULL,d_117 = NULL,e_117 = NULL;
    d_117 = t;
    {
      ATerm q_51 = t;
      int r_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_117 != NULL) && (c_117 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_117 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_15, t);
          LocalPopChoice(r_51);
        }
      else
        {
          t = q_51;
          t = term_s_51;
          c_117 = t;
        }
    }
    t = not_null(c_117);
    t = ReadFromFile_0_0(t);
    e_117 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_117, e_117);
    t = apply_strategy_1_0(r_148, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_15, t_148, s_15, t_15, t);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm f_117 = NULL,g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL,s_117 = NULL,r_13 = NULL,q_13 = NULL,p_13 = NULL;
  s_117 = t;
  if(match_cons(t, sym__2))
    {
      g_117 = ATgetArgument(t, 0);
      h_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_117);
  f_117 = t;
  t = h_117;
  if(match_cons(t, sym_Specification_1))
    {
      m_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_117);
  l_117 = t;
  t = m_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_117 = ATgetFirst((ATermList) t);
      p_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_117);
  n_117 = t;
  t = p_117;
  t = Cons_2_0(a_16, b_16, t);
  q_117 = t;
  t = (ATerm) ATinsert(CheckATermList(q_117), o_117);
  p_13 = t;
  t = SSLsetAnnotations(p_13, n_117);
  r_117 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_117);
  q_13 = t;
  t = SSLsetAnnotations(q_13, l_117);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm t_51 = ATgetArgument(t, 0);
      if(((ATgetType(t_51) == AT_LIST) && !(ATisEmpty(t_51))))
        {
          j_117 = ATgetFirst((ATermList) t_51);
          {
            ATerm u_51 = (ATerm) ATgetNext((ATermList) t_51);
            if(((ATgetType(u_51) == AT_LIST) && !(ATisEmpty(u_51))))
              {
                ATerm v_51 = ATgetFirst((ATermList) u_51);
                if(match_cons(v_51, sym_Strategies_1))
                  {
                    k_117 = ATgetArgument(v_51, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm x_51 = (ATerm) ATgetNext((ATermList) u_51);
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
  t = q_9(j_117, k_117, t);
  i_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_117, i_117);
  r_13 = t;
  t = SSLsetAnnotations(r_13, f_117);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL,o_13 = NULL;
  w_117 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_117);
  t_117 = t;
  t = u_117;
  t = needed_defs_0_0(t);
  v_117 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_117);
  o_13 = t;
  t = SSLsetAnnotations(o_13, t_117);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_15, _fail, default_usage_0_0, t);
  return(t);
}

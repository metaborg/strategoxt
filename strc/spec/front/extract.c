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
ATerm term_x_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_t_50;
ATerm term_x_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_o_49;
ATerm term_j_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_o_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_d_47;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_c_46;
ATerm term_z_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_c_45;
ATerm term_a_45;
ATerm term_y_44;
ATerm term_w_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_q_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_j_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_u_40;
ATerm term_s_40;
ATerm term_i_37;
ATerm term_z_36;
ATerm term_v_35;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_z_30;
ATerm term_k_25;
ATerm term_f_25;
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
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_n_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_z_20;
ATerm term_i_18;
ATerm term_r_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_e_17;
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
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATempty);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_21);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Call_2, term_t_22, (ATerm) ATempty);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(9);
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
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Sort_2, term_z_30, (ATerm) ATempty);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_31);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_z_20);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_b_43, term_c_43);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__2, term_h_44, term_i_44);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym__2, term_i_44, term_z_20);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_20);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym__2, term_w_44, term_d_16);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(sym__2, term_h_44, term_y_46);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym__2, term_h_44, term_k_48);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym__2, term_w_45, term_x_45);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym__2, term_c_49, term_d_16);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym__2, term_f_49, term_d_16);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym__2, term_k_48, term_d_16);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(sym__3, term_w_45, term_x_45, (ATerm) ATempty);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym__2, term_h_44, term_c_49);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym__2, term_f_51, term_d_16);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_141 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm r_9 (ATerm b_95, ATerm a_95, ATerm t);
static ATerm t_9 (ATerm b_73, ATerm c_73, ATerm d_73, ATerm t);
static ATerm v_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm v_118 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm z_9 (ATerm m_27, ATerm l_27, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm free_vars2_4_0 (ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm x_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_143 (ATerm), ATerm t);
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
static ATerm o_44 (ATerm g_37, ATerm h_37, ATerm t);
static ATerm p_44 (ATerm p_37, ATerm q_37, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm f_154 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm i_10 (ATerm x_89, ATerm y_89, ATerm z_89, ATerm t);
static ATerm u_58 (ATerm h_58, ATerm t);
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
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm b_121 (ATerm), ATerm t);
static ATerm m_10 (ATerm k_85, ATerm l_85, ATerm m_85, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm x_119 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm d_124 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm n_10 (ATerm w_42, ATerm x_42, ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm copy_1_0 (ATerm z_140 (ATerm), ATerm t);
static ATerm o_10 (ATerm e_72, ATerm f_72, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm h_79 (ATerm l_75, ATerm t_75, ATerm w_75, ATerm x_75, ATerm t);
static ATerm k_79 (ATerm z_77, ATerm c_78, ATerm d_78, ATerm e_78, ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm j_135 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm j_127 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm p_121 (ATerm), ATerm t);
static ATerm a_10 (ATerm n_45, ATerm o_45, ATerm t);
ATerm end_scope_1_0 (ATerm r_131 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_131 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm e_10 (ATerm e_74, ATerm f_74, ATerm j_74, ATerm g_74, ATerm i_74, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm z_80 (ATerm w_79, ATerm x_79, ATerm y_79, ATerm z_79, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm o_135 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_82 (ATerm e_82, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_10 (ATerm b_137 (ATerm), ATerm r_60, ATerm q_60, ATerm t);
ATerm genzip_4_0 (ATerm n_124 (ATerm), ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm t);
static ATerm d_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm z_10 (ATerm m_817, ATerm r_817, ATerm b_83, ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm l_87 (ATerm o_84, ATerm z_84, ATerm a_85, ATerm t);
static ATerm q_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm b_11 (ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm d_154 (ATerm), ATerm s_84, ATerm p_84, ATerm x_84, ATerm t_84, ATerm q_84, ATerm r_84, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm d_154 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_126 (ATerm), ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm x_39 (ATerm z_38, ATerm a_39, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm e_11 (ATerm u_131 (ATerm), ATerm e_44, ATerm c_44, ATerm t);
static ATerm f_11 (ATerm j_137 (ATerm), ATerm k_137 (ATerm), ATerm x_60, ATerm w_60, ATerm t);
static ATerm g_11 (ATerm g_137 (ATerm), ATerm t_60, ATerm s_60, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm i_11 (ATerm t_45, ATerm u_45, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm t);
static ATerm k_11 (ATerm m_35, ATerm n_35, ATerm t);
static ATerm l_11 (ATerm e_34, ATerm f_34, ATerm t);
static ATerm n_11 (ATerm l_127 (ATerm), ATerm o_270, ATerm k_34, ATerm t);
static ATerm m_11 (ATerm a_34, ATerm b_34, ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_148 (ATerm), ATerm t);
static ATerm a_104 (ATerm u_103, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_11 (ATerm g_34, ATerm t);
static ATerm p_11 (ATerm w_69, ATerm x_69, ATerm t);
static ATerm q_11 (ATerm o_35, ATerm p_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_105 (ATerm k_104, ATerm t);
static ATerm o_105 (ATerm q_104, ATerm r_104, ATerm s_104, ATerm t);
static ATerm p_105 (ATerm a_105, ATerm b_105, ATerm c_105, ATerm t);
static ATerm r_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_135 (ATerm), ATerm t);
static ATerm w_11 (ATerm b_47, ATerm c_47, ATerm t);
ATerm if_verbose2_1_0 (ATerm c_129 (ATerm), ATerm t);
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
static ATerm z_11 (ATerm o_39, ATerm p_39, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_11 (ATerm i_45, ATerm j_45, ATerm h_45, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_11 (ATerm q_42, ATerm r_42, ATerm t);
ATerm foldr_2_0 (ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_129 (ATerm), ATerm t);
static ATerm r_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm need_help_1_0 (ATerm k_149 (ATerm), ATerm t);
static ATerm a_12 (ATerm a_50, ATerm b_50, ATerm c_50, ATerm t);
static ATerm b_12 (ATerm d_50, ATerm e_50, ATerm t);
ATerm lookup_table_0_1 (ATerm u_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_50, ATerm j_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_11 (ATerm f_50, ATerm g_50, ATerm t);
static ATerm v_11 (ATerm k_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_134 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm n_151 (ATerm), ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm parse_options_1_0 (ATerm m_151 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_149 (ATerm), ATerm n_149 (ATerm), ATerm o_149 (ATerm), ATerm p_149 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm iowrap_3_0 (ATerm v_148 (ATerm), ATerm w_148 (ATerm), ATerm x_148 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,i_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_d_16;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_e_16;
  i_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_16), c_0), term_h_16);
  o_0 = t;
  t = SSL_printnl(i_0, o_0);
  t = term_j_16;
  e_0 = t;
  t = SSL_exit(e_0);
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
        ATerm y_1 = NULL,b_2 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty);
        y_1 = t;
        t = term_n_16;
        b_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty));
        t = i_11(b_2, y_1, t);
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
          ATerm q_3 = NULL,b_4 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty);
          q_3 = t;
          t = term_n_16;
          b_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATmakeAppl(sym_OpDecl_2, v_1, (ATerm) ATempty));
          t = i_11(b_4, q_3, t);
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
ATerm filter_1_0 (ATerm n_141 (ATerm), ATerm t)
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
            ATerm g_4 = NULL,o_4 = NULL,w_4 = NULL,k_0 = NULL;
            t = SSLgetAnnotations(s_2);
            g_4 = t;
            t = t_2;
            t = n_141(t);
            o_4 = t;
            t = u_2;
            t = filter_1_0(n_141, t);
            w_4 = t;
            t = (ATerm) ATinsert(CheckATermList(w_4), o_4);
            k_0 = t;
            t = SSLsetAnnotations(k_0, g_4);
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            t = u_2;
            t = filter_1_0(n_141, t);
          }
      }
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  y_2 = t;
  {
    ATerm v_16 = t;
    int x_16 = stack_ptr;
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
        LocalPopChoice(x_16);
        {
          ATerm d_3 = NULL,e_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_2, (ATerm) ATempty);
          d_3 = t;
          t = term_b_17;
          e_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, z_2, (ATerm) ATempty), term_b_17);
          t = e_11(n_0, d_3, e_3, t);
          t = y_2;
        }
      }
    else
      {
        t = v_16;
        {
          ATerm h_3 = NULL,i_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              z_2 = ATgetArgument(t, 0);
              {
                ATerm c_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_2, (ATerm) ATempty);
          h_3 = t;
          t = term_h_17;
          i_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, z_2, (ATerm) ATempty), term_h_17);
          t = e_11(s_0, h_3, i_3, t);
          t = y_2;
        }
      }
  }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm i_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = i_17;
    }
  return(t);
}
static ATerm r_9 (ATerm b_95, ATerm a_95, ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,r_0 = NULL,q_0 = NULL,p_0 = NULL;
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
      p_3 = ATgetFirst((ATermList) t);
      r_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  n_3 = t;
  t = p_3;
  if(match_cons(t, sym_Constructors_1))
    {
      u_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  t_3 = t;
  t = u_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, v_3);
  p_0 = t;
  t = SSLsetAnnotations(p_0, t_3);
  w_3 = t;
  t = r_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_3), w_3);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_3);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, s_3);
  r_0 = t;
  t = SSLsetAnnotations(r_0, k_3);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, a_95)), m_3));
  return(t);
}
static ATerm t_9 (ATerm b_73, ATerm c_73, ATerm d_73, ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  t = term_e_16;
  z_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), d_73), term_n_17), c_73), term_m_17), b_73), term_l_17);
  a_4 = t;
  t = SSL_printnl(z_3, a_4);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), d_73), term_n_17), c_73), term_m_17), b_73), term_l_17);
  return(t);
}
static ATerm v_0 (ATerm t)
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
  ATerm u_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  u_4 = t;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
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
        t = v_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_17 = ATgetFirst((ATermList) t);
            ATerm z_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(z_17) == AT_LIST) && !(ATisEmpty(z_17))))
              {
                ATerm a_18 = ATgetFirst((ATermList) z_17);
                ATerm b_18 = (ATerm) ATgetNext((ATermList) z_17);
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
              t = fetch_1_0(v_0, t);
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
        t = (ATerm) ATinsert(ATinsert(ATempty, v_4), term_i_18);
        k_5 = t;
        t = SSL_printnl(j_5, k_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, v_4), term_i_18);
        t = giving_up_0_0(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = u_17;
        {
          ATerm f_6 = NULL,g_6 = NULL;
          t = v_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_18 = ATgetFirst((ATermList) t);
              if(match_cons(j_18, sym__2))
                {
                  f_6 = ATgetArgument(j_18, 0);
                  g_6 = ATgetArgument(j_18, 1);
                }
              else
                _fail(t);
              {
                ATerm k_18 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(k_18) != AT_LIST) || !(ATisEmpty(k_18))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, v_4, (ATerm) ATmakeAppl(sym__2, f_6, g_6));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, v_4, (ATerm) ATmakeAppl(sym__2, f_6, g_6));
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
        ATerm p_6 = NULL,s_6 = NULL,t_6 = NULL,x_0 = NULL;
        t = SSLgetAnnotations(l_15);
        p_6 = t;
        t = m_15;
        t = r_118(t);
        s_6 = t;
        t = n_15;
        t = r_118(t);
        t_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, s_6, t_6);
        x_0 = t;
        t = SSLsetAnnotations(x_0, p_6);
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
            ATerm h_7 = NULL,y_7 = NULL,b_8 = NULL,d_8 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(l_15);
            h_7 = t;
            t = m_15;
            t = t_118(t);
            y_7 = t;
            t = n_15;
            t = t_118(t);
            b_8 = t;
            t = k_15;
            t = r_118(t);
            d_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_7, b_8, d_8);
            a_1 = t;
            t = SSLsetAnnotations(a_1, h_7);
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
                ATerm i_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(l_15);
                i_9 = t;
                t = m_15;
                t = t_118(t);
                n_9 = t;
                t = n_15;
                t = t_118(t);
                o_9 = t;
                t = k_15;
                t = t_118(t);
                p_9 = t;
                t = j_15;
                t = r_118(t);
                q_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, n_9, o_9, p_9, q_9);
                b_1 = t;
                t = SSLsetAnnotations(b_1, i_9);
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
                    ATerm k_10 = NULL,s_10 = NULL,t_10 = NULL,w_10 = NULL,x_10 = NULL,d_1 = NULL;
                    t = SSLgetAnnotations(l_15);
                    k_10 = t;
                    t = m_15;
                    t = t_118(t);
                    s_10 = t;
                    t = n_15;
                    t = t_118(t);
                    t_10 = t;
                    t = k_15;
                    t = t_118(t);
                    w_10 = t;
                    t = j_15;
                    t = r_118(t);
                    x_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, s_10, t_10, w_10, x_10);
                    d_1 = t;
                    t = SSLsetAnnotations(d_1, k_10);
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
                        ATerm f_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,h_1 = NULL;
                        t = SSLgetAnnotations(l_15);
                        f_12 = t;
                        t = m_15;
                        t = t_118(t);
                        j_12 = t;
                        t = n_15;
                        t = t_118(t);
                        k_12 = t;
                        t = k_15;
                        t = t_118(t);
                        l_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, j_12, k_12, l_12);
                        h_1 = t;
                        t = SSLsetAnnotations(h_1, f_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          m_15 = ATgetArgument(t, 0);
                          n_15 = ATgetArgument(t, 1);
                          {
                            ATerm v_12 = NULL,z_12 = NULL,a_13 = NULL,j_1 = NULL;
                            t = SSLgetAnnotations(l_15);
                            v_12 = t;
                            t = m_15;
                            t = t_118(t);
                            z_12 = t;
                            t = n_15;
                            t = r_118(t);
                            a_13 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, z_12, a_13);
                            j_1 = t;
                            t = SSLsetAnnotations(j_1, v_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              m_15 = ATgetArgument(t, 0);
                              n_15 = ATgetArgument(t, 1);
                              {
                                ATerm j_13 = NULL,n_13 = NULL,o_13 = NULL,l_1 = NULL;
                                t = SSLgetAnnotations(l_15);
                                j_13 = t;
                                t = m_15;
                                t = t_118(t);
                                n_13 = t;
                                t = n_15;
                                t = r_118(t);
                                o_13 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, n_13, o_13);
                                l_1 = t;
                                t = SSLsetAnnotations(l_1, j_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  m_15 = ATgetArgument(t, 0);
                                  n_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_14 = NULL,c_15 = NULL,d_15 = NULL,n_1 = NULL;
                                    t = SSLgetAnnotations(l_15);
                                    x_14 = t;
                                    t = m_15;
                                    t = t_118(t);
                                    c_15 = t;
                                    t = n_15;
                                    t = r_118(t);
                                    d_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, c_15, d_15);
                                    n_1 = t;
                                    t = SSLsetAnnotations(n_1, x_14);
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
  ATerm o_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          p_16 = ATgetArgument(t, 0);
          {
            ATerm r_18 = ATgetArgument(t, 1);
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
      t = o_18;
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
                ATerm z_18 = ATgetArgument(t, 0);
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
                ATerm d_19 = ATgetArgument(t, 0);
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
static ATerm y_0 (ATerm t)
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
  ATerm n_19 = t;
  int p_19 = stack_ptr;
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
      LocalPopChoice(p_19);
      t = g_18;
      t = map_1_0(y_0, t);
    }
  else
    {
      t = n_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm t_19 = ATgetArgument(t, 0);
          g_18 = ATgetArgument(t, 1);
          {
            ATerm u_19 = ATgetArgument(t, 2);
          }
          {
            ATerm w_19 = ATgetArgument(t, 3);
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
static ATerm z_9 (ATerm m_27, ATerm l_27, ATerm t)
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
  ATerm d_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      d_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(w_1, d_17, f_17, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm g_17 = NULL;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      if((g_17 != ATgetArgument(t, 1)))
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
static ATerm a_2 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(c_2, o_17, p_17, t);
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
ATerm free_vars2_4_0 (ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm x_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_143 (ATerm), ATerm t)
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
          t = v_143(t);
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
          ATerm x_20 = NULL,w_16 = NULL,y_16 = NULL;
          t = w_143(t);
          x_20 = t;
          t = w_20;
          {
            static ATerm q_1 (ATerm t)
            {
              ATerm l_16 = NULL;
              t = m_21(t);
              l_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_16, x_20);
              t = u_10(y_143, l_16, x_20, t);
              return(t);
            }
            t = x_143(q_1, m_21, r_1, t);
          }
          y_16 = t;
          t = SSL_explode_term(y_16);
          if(match_cons(t, sym__2))
            {
              ATerm k_20 = ATgetArgument(t, 0);
              w_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_16;
          t = foldr_3_0(s_1, t_1, _id, t);
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          {
            ATerm j_17 = NULL;
            t = SSL_explode_term(w_20);
            if(match_cons(t, sym__2))
              {
                ATerm l_20 = ATgetArgument(t, 0);
                j_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_17;
            t = foldr_3_0(x_1, a_2, m_21, t);
          }
        }
    }
    v_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
    t = g_11(d_2, u_20, v_20, t);
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
  ATerm n_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_22 = NULL,l_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
      k_22 = t;
      if(match_cons(t, sym_Let_2))
        {
          l_22 = ATgetArgument(t, 0);
          o_22 = ATgetArgument(t, 1);
          t = k_22;
          t = z_9(l_22, o_22, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              l_22 = ATgetArgument(t, 0);
              o_22 = ATgetArgument(t, 1);
              p_22 = ATgetArgument(t, 2);
              t = o_22;
              t = map_1_0(n_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  l_22 = ATgetArgument(t, 0);
                  o_22 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, l_22);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_22 = ATgetArgument(t, 0);
                      o_22 = ATgetArgument(t, 1);
                      p_22 = ATgetArgument(t, 2);
                      q_22 = ATgetArgument(t, 3);
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
      t = n_20;
      {
        ATerm q_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(s_20);
          }
        else
          {
            t = q_20;
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
            ATerm y_20 = ATgetArgument(t_20, 1);
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
  t = term_z_20;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm d_22 = NULL,g_22 = NULL;
  if(match_cons(t, sym__2))
    {
      d_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(d_22, g_22, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(h_22, i_22, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm i_23 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_23 = ATgetArgument(t, 0);
          {
            ATerm c_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_21);
      t = i_23;
    }
  else
    {
      t = a_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_23;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_23 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
      t = v_23;
    }
  else
    {
      t = d_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_23;
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
static ATerm o_44 (ATerm g_37, ATerm h_37, ATerm t)
{
  t = g_37;
  {
    ATerm j_21 = t;
    if((PushChoice() == 0))
      {
        ATerm j_37 = NULL,k_37 = NULL,n_37 = NULL,o_37 = NULL,o_2 = NULL;
        o_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_37 = ATgetFirst((ATermList) t);
            n_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_37);
        j_37 = t;
        t = n_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(n_37), k_37);
        o_2 = t;
        t = SSLsetAnnotations(o_2, j_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_21, g_37);
  return(t);
}
static ATerm p_44 (ATerm p_37, ATerm q_37, ATerm t)
{
  t = p_37;
  {
    ATerm n_21 = t;
    if((PushChoice() == 0))
      {
        ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,p_2 = NULL;
        z_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_37 = ATgetFirst((ATermList) t);
            y_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_37);
        w_37 = t;
        t = y_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_37), x_37);
        p_2 = t;
        t = SSLsetAnnotations(p_2, w_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, p_37);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,q_19 = NULL;
  v_38 = t;
  t = SSL_explode_term(v_38);
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_21 = ATgetArgument(t, 1);
        if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
          {
            w_38 = ATgetFirst((ATermList) u_21);
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
  t = SSL_explode_term(v_38);
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
          {
            ATerm e_22 = ATgetFirst((ATermList) x_21);
            ATerm f_22 = (ATerm) ATgetNext((ATermList) x_21);
            if(((ATgetType(f_22) == AT_LIST) && !(ATisEmpty(f_22))))
              {
                q_19 = ATgetFirst((ATermList) f_22);
                {
                  ATerm m_22 = (ATerm) ATgetNext((ATermList) f_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, q_19), w_38));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  if(match_cons(t, sym__2))
    {
      f_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, g_40), f_40));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm j_40 = NULL,m_40 = NULL;
  if(match_cons(t, sym__2))
    {
      j_40 = ATgetArgument(t, 0);
      m_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, m_40), j_40));
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL;
  if(match_cons(t, sym__2))
    {
      j_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, k_41), j_41));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_u_22;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  if(match_cons(t, sym__2))
    {
      s_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, t_41), s_41));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,q_38 = NULL;
  k_38 = t;
  if(match_cons(t, sym_Anno_2))
    {
      l_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
      {
        ATerm t_38 = NULL;
        t = q_38;
        t = foldr_2_0(x_2, a_3, t);
        t_38 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, l_38, t_38);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          l_38 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, l_38, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              l_38 = ATgetArgument(t, 0);
              {
                ATerm v_19 = NULL;
                t = l_38;
                {
                  ATerm v_22 = t;
                  int w_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_x_22;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_y_22;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_z_22;
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
                      LocalPopChoice(w_22);
                    }
                  else
                    {
                      t = v_22;
                      {
                        ATerm x_19 = NULL;
                        t = SSL_explode_string(l_38);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(c_23) != AT_INT) || (ATgetInt((ATermInt) c_23) != 39)))
                              _fail(t);
                            {
                              ATerm e_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                                {
                                  x_19 = ATgetFirst((ATermList) e_23);
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
                        t = x_19;
                      }
                    }
                }
                v_19 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, v_19);
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
                      l_38 = ATgetArgument(t, 0);
                      {
                        ATerm l_23 = ATgetArgument(t, 1);
                      }
                      j_38 = ATgetArgument(t, 2);
                      a_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, l_38, j_38, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_38), (ATerm) ATempty));
                }
              else
                {
                  t = j_23;
                  {
                    ATerm m_23 = t;
                    int n_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            l_38 = ATgetArgument(t, 0);
                            {
                              ATerm o_23 = ATgetArgument(t, 1);
                            }
                            j_38 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(n_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, l_38, j_38, term_r_23);
                      }
                    else
                      {
                        t = m_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            l_38 = ATgetArgument(t, 0);
                            q_38 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, l_38, q_38, term_r_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                l_38 = ATgetArgument(t, 0);
                                q_38 = ATgetArgument(t, 1);
                                {
                                  static ATerm b_3 (ATerm t)
                                  {
                                    t = q_38;
                                    return(t);
                                  }
                                  t = l_38;
                                  t = foldr_2_0(b_3, c_3, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    l_38 = ATgetArgument(t, 0);
                                    t = l_38;
                                    t = foldr_2_0(f_3, g_3, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        l_38 = ATgetArgument(t, 0);
                                        t = l_38;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            b_38 = ATgetFirst((ATermList) t);
                                            c_38 = (ATerm) ATgetNext((ATermList) t);
                                            t = c_38;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm s_23 = t;
                                                int t_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_44(l_38, k_38, t);
                                                    LocalPopChoice(t_23);
                                                  }
                                                else
                                                  {
                                                    t = s_23;
                                                    t = b_38;
                                                  }
                                              }
                                            else
                                              {
                                                t = o_44(l_38, k_38, t);
                                              }
                                          }
                                        else
                                          {
                                            t = o_44(l_38, k_38, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            l_38 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, l_38));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                l_38 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, l_38));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    l_38 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, l_38));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        l_38 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, l_38));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            l_38 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_38), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                l_38 = ATgetArgument(t, 0);
                                                                q_38 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_38), q_38);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    l_38 = ATgetArgument(t, 0);
                                                                    q_38 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm j_3 (ATerm t)
                                                                      {
                                                                        t = q_38;
                                                                        return(t);
                                                                      }
                                                                      t = l_38;
                                                                      t = foldr_2_0(j_3, o_3, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        l_38 = ATgetArgument(t, 0);
                                                                        t = l_38;
                                                                        t = foldr_2_0(x_3, y_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            l_38 = ATgetArgument(t, 0);
                                                                            q_38 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, (ATerm) ATinsert(CheckATermList(q_38), l_38));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                l_38 = ATgetArgument(t, 0);
                                                                                t = l_38;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    b_38 = ATgetFirst((ATermList) t);
                                                                                    c_38 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = c_38;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm u_23 = t;
                                                                                        int w_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = p_44(l_38, k_38, t);
                                                                                            LocalPopChoice(w_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_23;
                                                                                            t = b_38;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_44(l_38, k_38, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_44(l_38, k_38, t);
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
                                                                                        l_38 = ATgetArgument(t, 0);
                                                                                        q_38 = ATgetArgument(t, 1);
                                                                                        t = q_38;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            i_38 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_a_24, (ATerm) ATinsert(ATinsert(ATempty, i_38), l_38));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            l_38 = ATgetArgument(t, 0);
                                                                                            t = l_38;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                l_38 = ATgetArgument(t, 0);
                                                                                                q_38 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, l_38, q_38, term_b_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    l_38 = ATgetArgument(t, 0);
                                                                                                    q_38 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, l_38, q_38, term_b_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        l_38 = ATgetArgument(t, 0);
                                                                                                        q_38 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, l_38, (ATerm)ATempty, q_38);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            l_38 = ATgetArgument(t, 0);
                                                                                                            q_38 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, q_38, l_38);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                l_38 = ATgetArgument(t, 0);
                                                                                                                q_38 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, l_38, q_38, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    l_38 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, l_38, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        l_38 = ATgetArgument(t, 0);
                                                                                                                        q_38 = ATgetArgument(t, 1);
                                                                                                                        j_38 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, l_38, q_38, (ATerm)ATempty, j_38);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            l_38 = ATgetArgument(t, 0);
                                                                                                                            q_38 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_38, (ATerm)ATempty, (ATerm)ATempty, q_38);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                l_38 = ATgetArgument(t, 0);
                                                                                                                                q_38 = ATgetArgument(t, 1);
                                                                                                                                j_38 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, l_38, q_38, (ATerm)ATempty, j_38);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    l_38 = ATgetArgument(t, 0);
                                                                                                                                    q_38 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, l_38, (ATerm)ATempty, (ATerm)ATempty, q_38);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        l_38 = ATgetArgument(t, 0);
                                                                                                                                        q_38 = ATgetArgument(t, 1);
                                                                                                                                        j_38 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_38, q_38, (ATerm)ATempty, j_38);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            l_38 = ATgetArgument(t, 0);
                                                                                                                                            q_38 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, l_38, (ATerm)ATempty, (ATerm)ATempty, q_38);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm c_24 = ATgetArgument(t, 0);
                                                                                                                                                q_38 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, q_38);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm x_44 = NULL,b_45 = NULL,f_45 = NULL;
  b_45 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      f_45 = ATgetArgument(t, 0);
      x_44 = ATgetArgument(t, 1);
      {
        ATerm l_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL;
        t = b_45;
        t = new_0_0(t);
        l_45 = t;
        t = new_0_0(t);
        p_45 = t;
        t = new_0_0(t);
        q_45 = t;
        t = new_0_0(t);
        r_45 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_45), q_45), p_45), l_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, l_45), (ATerm) ATmakeAppl(sym_Var_1, q_45))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_45, (ATerm)ATmakeAppl(sym_Var_1, l_45), (ATerm) ATmakeAppl(sym_Var_1, p_45)), (ATerm) ATmakeAppl(sym_BAM_3, x_44, (ATerm)ATmakeAppl(sym_Var_1, q_45), (ATerm) ATmakeAppl(sym_Var_1, r_45)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_45)), (ATerm) ATmakeAppl(sym_Var_1, p_45))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_45 = ATgetArgument(t, 0);
          {
            ATerm s_45 = NULL,v_45 = NULL,a_46 = NULL,b_46 = NULL;
            t = b_45;
            t = new_0_0(t);
            a_46 = t;
            t = f_45;
            {
              static ATerm d_4 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((s_45 != NULL) && (s_45 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      s_45 = ATgetArgument(t, 0);
                    if(((v_45 != NULL) && (v_45 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, a_46);
                return(t);
              }
              t = oncetd_1_0(d_4, t);
            }
            b_46 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_45)), not_null(s_45))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_46)), (ATerm) ATmakeAppl(sym_Build_1, b_46))));
          }
        }
      else
        {
          ATerm i_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              f_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_45;
          t = new_0_0(t);
          l_46 = t;
          t = new_0_0(t);
          m_46 = t;
          t = f_45;
          {
            static ATerm e_4 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((i_46 != NULL) && (i_46 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    i_46 = ATgetArgument(t, 0);
                  if(((k_46 != NULL) && (k_46 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    k_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, l_46);
              return(t);
            }
            t = oncetd_1_0(e_4, t);
          }
          n_46 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_46), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_46)), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_46))))), (ATerm)ATmakeAppl(sym_Var_1, l_46), (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_46)), not_null(i_46)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm t_46 = NULL,z_46 = NULL;
  t_46 = t;
  if(match_cons(t, sym_Match_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
        t = t_46;
        t = new_0_0(t);
        k_47 = t;
        t = z_46;
        {
          static ATerm f_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((i_47 != NULL) && (i_47 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_47 = ATgetArgument(t, 0);
                if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  j_47 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_47), i_47);
            return(t);
          }
          t = pat_td_1_0(f_4, t);
        }
        l_47 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_47), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_47))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_47))))));
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
              ATerm n_47 = NULL,o_47 = NULL,t_47 = NULL;
              t = t_46;
              t = new_0_0(t);
              o_47 = t;
              t = z_46;
              {
                static ATerm h_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((n_47 != NULL) && (n_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, o_47);
                  return(t);
                }
                t = pat_td_1_0(h_4, t);
              }
              t_47 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_47)), not_null(n_47))));
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL;
                t = t_46;
                t = new_0_0(t);
                x_47 = t;
                t = z_46;
                {
                  static ATerm k_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_47 != NULL) && (w_47 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_47 = ATgetArgument(t, 0);
                        if(((v_47 != NULL) && (v_47 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_47 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_47);
                    return(t);
                  }
                  t = pat_td_1_0(k_4, t);
                }
                y_47 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_47)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_47)), not_null(w_47)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm f_154 (ATerm), ATerm t)
{
  ATerm n_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_154(t);
      LocalPopChoice(p_24);
    }
  else
    {
      t = n_24;
      {
        ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,d_53 = NULL;
        u_52 = t;
        if(match_cons(t, sym_Op_2))
          {
            v_52 = ATgetArgument(t, 0);
            d_53 = ATgetArgument(t, 1);
            {
              ATerm o_20 = NULL,r_20 = NULL,w_2 = NULL;
              t = SSLgetAnnotations(u_52);
              o_20 = t;
              t = d_53;
              {
                static ATerm n_4 (ATerm t)
                {
                  t = pat_td_1_0(f_154, t);
                  return(t);
                }
                t = fetch_1_0(n_4, t);
              }
              r_20 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, v_52, r_20);
              w_2 = t;
              t = SSLsetAnnotations(w_2, o_20);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                v_52 = ATgetArgument(t, 0);
                d_53 = ATgetArgument(t, 1);
                {
                  ATerm q_24 = t;
                  int y_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_21 = NULL,s_21 = NULL,c_4 = NULL;
                      t = SSLgetAnnotations(u_52);
                      p_21 = t;
                      t = d_53;
                      t = pat_td_1_0(f_154, t);
                      s_21 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, v_52, s_21);
                      c_4 = t;
                      t = SSLsetAnnotations(c_4, p_21);
                      LocalPopChoice(y_24);
                    }
                  else
                    {
                      t = q_24;
                      {
                        ATerm j_22 = NULL,r_22 = NULL,i_4 = NULL;
                        t = SSLgetAnnotations(u_52);
                        j_22 = t;
                        t = v_52;
                        t = pat_td_1_0(f_154, t);
                        r_22 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, r_22, d_53);
                        i_4 = t;
                        t = SSLsetAnnotations(i_4, j_22);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    v_52 = ATgetArgument(t, 0);
                    d_53 = ATgetArgument(t, 1);
                    t_52 = ATgetArgument(t, 2);
                    {
                      ATerm d_23 = NULL,x_23 = NULL,j_4 = NULL;
                      t = SSLgetAnnotations(u_52);
                      d_23 = t;
                      t = t_52;
                      {
                        static ATerm p_4 (ATerm t)
                        {
                          t = pat_td_1_0(f_154, t);
                          return(t);
                        }
                        t = fetch_1_0(p_4, t);
                      }
                      x_23 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, v_52, d_53, x_23);
                      j_4 = t;
                      t = SSLsetAnnotations(j_4, d_23);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        v_52 = ATgetArgument(t, 0);
                        d_53 = ATgetArgument(t, 1);
                        t_52 = ATgetArgument(t, 2);
                        {
                          ATerm v_24 = NULL,b_25 = NULL,l_4 = NULL;
                          t = SSLgetAnnotations(u_52);
                          v_24 = t;
                          t = t_52;
                          {
                            static ATerm q_4 (ATerm t)
                            {
                              t = pat_td_1_0(f_154, t);
                              return(t);
                            }
                            t = fetch_1_0(q_4, t);
                          }
                          b_25 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, v_52, d_53, b_25);
                          l_4 = t;
                          t = SSLsetAnnotations(l_4, v_24);
                        }
                      }
                    else
                      {
                        ATerm t_25 = NULL,z_25 = NULL,m_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            v_52 = ATgetArgument(t, 0);
                            d_53 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(u_52);
                        t_25 = t;
                        t = d_53;
                        t = pat_td_1_0(f_154, t);
                        z_25 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, v_52, z_25);
                        m_4 = t;
                        t = SSLsetAnnotations(m_4, t_25);
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
  ATerm l_53 = NULL,m_53 = NULL;
  l_53 = t;
  if(match_cons(t, sym_Build_1))
    {
      m_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_53 = NULL,o_53 = NULL,r_53 = NULL,v_53 = NULL;
        t = l_53;
        t = new_0_0(t);
        r_53 = t;
        t = m_53;
        {
          static ATerm r_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((n_53 != NULL) && (n_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_53 = ATgetArgument(t, 0);
                if(((o_53 != NULL) && (o_53 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_53 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, r_53);
            return(t);
          }
          t = pat_td_1_0(r_4, t);
        }
        v_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_53)), not_null(n_53))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_53)))), (ATerm) ATmakeAppl(sym_Build_1, v_53)));
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_53 = NULL,y_53 = NULL,z_53 = NULL;
              t = l_53;
              t = new_0_0(t);
              y_53 = t;
              t = m_53;
              {
                static ATerm s_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((w_53 != NULL) && (w_53 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        w_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, y_53);
                  return(t);
                }
                t = pat_td_1_0(s_4, t);
              }
              z_53 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_53), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_53)))), (ATerm) ATmakeAppl(sym_Build_1, z_53)));
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              {
                ATerm a_54 = NULL,b_54 = NULL,i_54 = NULL,j_54 = NULL;
                t = l_53;
                t = new_0_0(t);
                i_54 = t;
                t = m_53;
                {
                  static ATerm t_4 (ATerm t)
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_54);
                    return(t);
                  }
                  t = pat_td_1_0(t_4, t);
                }
                j_54 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_54), not_null(b_54), (ATerm) ATmakeAppl(sym_Var_1, i_54))), (ATerm) ATmakeAppl(sym_Build_1, j_54)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,u_54 = NULL,v_54 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      u_54 = ATgetArgument(t, 0);
      v_54 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, u_54, v_54);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          u_54 = ATgetArgument(t, 0);
          t = u_54;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_54 = ATgetFirst((ATermList) t);
              p_54 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, o_54, (ATerm) ATmakeAppl(sym_LChoices_1, p_54));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              u_54 = ATgetArgument(t, 0);
              t = u_54;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_54 = ATgetFirst((ATermList) t);
                  p_54 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, o_54, (ATerm) ATmakeAppl(sym_Choices_1, p_54));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_f_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  u_54 = ATgetArgument(t, 0);
                  t = u_54;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_54 = ATgetFirst((ATermList) t);
                      p_54 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_54, (ATerm) ATmakeAppl(sym_Seqs_1, p_54));
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
                      u_54 = ATgetArgument(t, 0);
                      v_54 = ATgetArgument(t, 1);
                      q_54 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, v_54, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, q_54), u_54)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          u_54 = ATgetArgument(t, 0);
                          v_54 = ATgetArgument(t, 1);
                          q_54 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_54)), u_54), (ATerm) ATmakeAppl(sym_Build_1, v_54)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              u_54 = ATgetArgument(t, 0);
                              v_54 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_54, (ATerm) ATmakeAppl(sym_Match_1, v_54));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  u_54 = ATgetArgument(t, 0);
                                  v_54 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_54), v_54);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      u_54 = ATgetArgument(t, 0);
                                      v_54 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_54), u_54);
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
static ATerm b_5 (ATerm t)
{
  ATerm j_25 = t;
  if((PushChoice() == 0))
    {
      ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,a_5 = NULL;
      f_57 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_57);
      d_57 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_57);
      a_5 = t;
      t = SSLsetAnnotations(a_5, d_57);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_25;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_57 = ATgetFirst((ATermList) t);
      h_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_57, h_57);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm i_57 = NULL,o_57 = NULL,s_57 = NULL,t_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_25 = ATgetArgument(t, 0);
      if(match_cons(l_25, sym__2))
        {
          i_57 = ATgetArgument(l_25, 0);
          o_57 = ATgetArgument(l_25, 1);
        }
      else
        _fail(t);
      {
        ATerm m_25 = ATgetArgument(t, 1);
        if(match_cons(m_25, sym__2))
          {
            s_57 = ATgetArgument(m_25, 0);
            t_57 = ATgetArgument(m_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_57), i_57), (ATerm) ATinsert(CheckATermList(t_57), o_57));
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
  ATerm v_57 = NULL,w_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_57 = ATgetFirst((ATermList) t);
      w_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_57, w_57);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm x_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if(match_cons(n_25, sym__2))
        {
          x_57 = ATgetArgument(n_25, 0);
          a_58 = ATgetArgument(n_25, 1);
        }
      else
        _fail(t);
      {
        ATerm o_25 = ATgetArgument(t, 1);
        if(match_cons(o_25, sym__2))
          {
            b_58 = ATgetArgument(o_25, 0);
            c_58 = ATgetArgument(o_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_58), x_57), (ATerm) ATinsert(CheckATermList(c_58), a_58));
  return(t);
}
static ATerm i_10 (ATerm x_89, ATerm y_89, ATerm z_89, ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,d_5 = NULL;
  t = z_89;
  t = fetch_1_0(b_5, t);
  t = z_89;
  t = genzip_4_0(c_5, e_5, f_5, LiftPrimArg_0_0, t);
  b_57 = t;
  if(match_cons(t, sym__2))
    {
      x_56 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_57);
  w_56 = t;
  t = x_56;
  t = concat_0_0(t);
  z_56 = t;
  t = y_56;
  t = genzip_4_0(g_5, h_5, i_5, _id, t);
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_56, a_57);
  d_5 = t;
  t = SSLsetAnnotations(d_5, w_56);
  if(match_cons(t, sym__2))
    {
      t_56 = ATgetArgument(t, 0);
      {
        ATerm p_25 = ATgetArgument(t, 1);
        if(match_cons(p_25, sym__2))
          {
            u_56 = ATgetArgument(p_25, 0);
            v_56 = ATgetArgument(p_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_56, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_56), (ATerm) ATmakeAppl(sym_CallT_3, x_89, y_89, v_56)));
  return(t);
}
static ATerm u_58 (ATerm h_58, ATerm t)
{
  ATerm j_58 = NULL;
  t = h_58;
  {
    ATerm q_25 = t;
    if((PushChoice() == 0))
      {
        ATerm k_58 = NULL,l_58 = NULL,o_58 = NULL,q_5 = NULL;
        o_58 = t;
        if(match_cons(t, sym_Var_1))
          {
            l_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_58);
        k_58 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, l_58);
        q_5 = t;
        t = SSLsetAnnotations(q_5, k_58);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_25;
      }
  }
  t = new_0_0(t);
  j_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, j_58), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_58), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_58)))), (ATerm) ATmakeAppl(sym_Var_1, j_58)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  p_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_58 = ATgetArgument(t, 0);
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_58(p_58, t);
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_b_24, (ATerm) ATmakeAppl(sym_Var_1, q_58)));
          }
      }
    }
  else
    {
      t = u_58(p_58, t);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm u_25 = t;
  if((PushChoice() == 0))
    {
      ATerm s_27 = NULL,t_27 = NULL,y_27 = NULL,s_5 = NULL;
      y_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_27);
      s_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_27);
      s_5 = t;
      t = SSLsetAnnotations(s_5, s_27);
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
  ATerm z_27 = NULL,a_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_27 = ATgetFirst((ATermList) t);
      a_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_27, a_28);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm i_28 = NULL,l_28 = NULL,n_28 = NULL,o_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if(match_cons(v_25, sym__2))
        {
          i_28 = ATgetArgument(v_25, 0);
          l_28 = ATgetArgument(v_25, 1);
        }
      else
        _fail(t);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(match_cons(w_25, sym__2))
          {
            n_28 = ATgetArgument(w_25, 0);
            o_28 = ATgetArgument(w_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_28), i_28), (ATerm) ATinsert(CheckATermList(o_28), l_28));
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
static ATerm w_5 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,y_28 = NULL,z_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      if(match_cons(x_25, sym__2))
        {
          v_28 = ATgetArgument(x_25, 0);
          w_28 = ATgetArgument(x_25, 1);
        }
      else
        _fail(t);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(match_cons(y_25, sym__2))
          {
            y_28 = ATgetArgument(y_25, 0);
            z_28 = ATgetArgument(y_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_28), v_28), (ATerm) ATinsert(CheckATermList(z_28), w_28));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm a_26 = t;
  if((PushChoice() == 0))
    {
      ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,u_5 = NULL;
      g_30 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_30);
      e_30 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_30);
      u_5 = t;
      t = SSLsetAnnotations(u_5, e_30);
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
  ATerm h_30 = NULL,i_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_30 = ATgetFirst((ATermList) t);
      i_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_30, i_30);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,q_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if(match_cons(b_26, sym__2))
        {
          j_30 = ATgetArgument(b_26, 0);
          k_30 = ATgetArgument(b_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            l_30 = ATgetArgument(c_26, 0);
            q_30 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_30), j_30), (ATerm) ATinsert(CheckATermList(q_30), k_30));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm v_30 = NULL,a_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_30 = ATgetFirst((ATermList) t);
      a_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_30, a_31);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym__2))
        {
          j_31 = ATgetArgument(d_26, 0);
          k_31 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym__2))
          {
            l_31 = ATgetArgument(e_26, 0);
            m_31 = ATgetArgument(e_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_31), j_31), (ATerm) ATinsert(CheckATermList(m_31), k_31));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm o_63 = NULL,r_63 = NULL,t_63 = NULL,u_63 = NULL;
  r_63 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      t_63 = ATgetArgument(t, 0);
      u_63 = ATgetArgument(t, 1);
      o_63 = ATgetArgument(t, 2);
      {
        ATerm c_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,o_27 = NULL,p_27 = NULL,r_27 = NULL,t_5 = NULL;
        t = o_63;
        t = fetch_1_0(l_5, t);
        t = o_63;
        t = genzip_4_0(m_5, n_5, o_5, LiftPrimArg_0_0, t);
        r_27 = t;
        if(match_cons(t, sym__2))
          {
            j_27 = ATgetArgument(t, 0);
            k_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_27);
        i_27 = t;
        t = j_27;
        t = concat_0_0(t);
        o_27 = t;
        t = k_27;
        t = genzip_4_0(p_5, r_5, w_5, _id, t);
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_27, p_27);
        t_5 = t;
        t = SSLsetAnnotations(t_5, i_27);
        if(match_cons(t, sym__2))
          {
            c_27 = ATgetArgument(t, 0);
            {
              ATerm f_26 = ATgetArgument(t, 1);
              if(match_cons(f_26, sym__2))
                {
                  g_27 = ATgetArgument(f_26, 0);
                  h_27 = ATgetArgument(f_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, c_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_27), (ATerm) ATmakeAppl(sym_PrimT_3, t_63, u_63, h_27)));
      }
    }
  else
    {
      ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,y_29 = NULL,z_29 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,v_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          t_63 = ATgetArgument(t, 0);
          u_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_63;
      t = fetch_1_0(x_5, t);
      t = u_63;
      t = genzip_4_0(y_5, z_5, b_6, LiftPrimArg_0_0, t);
      d_30 = t;
      if(match_cons(t, sym__2))
        {
          y_29 = ATgetArgument(t, 0);
          z_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_30);
      w_29 = t;
      t = y_29;
      t = concat_0_0(t);
      b_30 = t;
      t = z_29;
      t = genzip_4_0(c_6, e_6, h_6, _id, t);
      c_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
      v_5 = t;
      t = SSLsetAnnotations(v_5, w_29);
      if(match_cons(t, sym__2))
        {
          t_29 = ATgetArgument(t, 0);
          {
            ATerm g_26 = ATgetArgument(t, 1);
            if(match_cons(g_26, sym__2))
              {
                u_29 = ATgetArgument(g_26, 0);
                v_29 = ATgetArgument(g_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, t_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_29), (ATerm) ATmakeAppl(sym_PrimT_3, t_63, (ATerm)ATempty, v_29)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t)
{
  static ATerm x_63 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_125(t);
        t = x_63(t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = x_125(t);
      }
    return(t);
  }
  t = x_63(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  w_64 = t;
  if(match_cons(t, sym_Con_3))
    {
      t_64 = ATgetArgument(t, 0);
      u_64 = ATgetArgument(t, 1);
      v_64 = ATgetArgument(t, 2);
      {
        ATerm g_32 = NULL,a_6 = NULL;
        t = SSLgetAnnotations(w_64);
        g_32 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, t_64, u_64, v_64);
        a_6 = t;
        t = SSLsetAnnotations(a_6, g_32);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = w_64;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm j_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_26;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  if(match_cons(t, sym_Con_3))
    {
      c_66 = ATgetArgument(t, 0);
      d_66 = ATgetArgument(t, 1);
      a_66 = ATgetArgument(t, 2);
      {
        ATerm n_33 = NULL,d_6 = NULL;
        t = SSLgetAnnotations(b_66);
        n_33 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, c_66, d_66, a_66);
        d_6 = t;
        t = SSLsetAnnotations(d_6, n_33);
      }
    }
  else
    {
      ATerm z_34 = NULL,i_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          c_66 = ATgetArgument(t, 0);
          d_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_66);
      z_34 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, c_66, d_66);
      i_6 = t;
      t = SSLsetAnnotations(i_6, z_34);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm k_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_6, t);
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
  ATerm l_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      l_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_66;
  if(match_cons(t, sym_StratRule_3))
    {
      o_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
      q_66 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_66), (ATerm) ATmakeAppl(sym_Where_1, q_66)), o_66));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          o_66 = ATgetArgument(t, 0);
          p_66 = ATgetArgument(t, 1);
          q_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_66;
      t = pureterm_0_0(t);
      t = p_66;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, p_66)), (ATerm) ATmakeAppl(sym_Where_1, q_66)), (ATerm) ATmakeAppl(sym_Match_1, o_66)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_121 (ATerm), ATerm t)
{
  static ATerm z_66 (ATerm t)
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
        t = SRTS_one(z_66, t);
      }
    return(t);
  }
  t = z_66(t);
  return(t);
}
static ATerm m_10 (ATerm k_85, ATerm l_85, ATerm m_85, ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL;
  t = new_0_0(t);
  f_67 = t;
  t = k_85;
  {
    static ATerm l_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm n_26 = ATgetArgument(t, 0);
          if(match_cons(n_26, sym_Var_1))
            {
              if(((d_67 != NULL) && (d_67 != ATgetArgument(n_26, 0))))
                _fail(ATgetArgument(n_26, 0));
              else
                d_67 = ATgetArgument(n_26, 0);
            }
          else
            _fail(t);
          if(((b_67 != NULL) && (b_67 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_67 = ATgetArgument(t, 1);
          {
            ATerm o_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, d_67);
      return(t);
    }
    t = oncetd_1_0(l_6, t);
  }
  g_67 = t;
  t = l_85;
  {
    static ATerm m_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_26 = ATgetArgument(t, 0);
          if(match_cons(p_26, sym_Var_1))
            {
              if(((d_67 != NULL) && (d_67 != ATgetArgument(p_26, 0))))
                _fail(ATgetArgument(p_26, 0));
              else
                d_67 = ATgetArgument(p_26, 0);
            }
          else
            _fail(t);
          if(((c_67 != NULL) && (c_67 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_67 = ATgetArgument(t, 1);
          {
            ATerm q_26 = ATgetArgument(t, 2);
            if(match_cons(q_26, sym_CallT_3))
              {
                if(((a_67 != NULL) && (a_67 != ATgetArgument(q_26, 0))))
                  _fail(ATgetArgument(q_26, 0));
                else
                  a_67 = ATgetArgument(q_26, 0);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, f_67);
      return(t);
    }
    t = oncetd_1_0(m_6, t);
  }
  h_67 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_67), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_67, h_67, (ATerm) ATmakeAppl(sym_Seq_2, m_85, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(a_67), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_67), not_null(c_67), term_b_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_67)), (ATerm) ATmakeAppl(sym_Var_1, f_67))))));
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
          ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL,l_68 = NULL,m_68 = NULL,p_68 = NULL;
          l_68 = t;
          if(match_cons(t, sym_SRule_1))
            {
              m_68 = ATgetArgument(t, 0);
              t = m_68;
              if(match_cons(t, sym_Rule_3))
                {
                  h_68 = ATgetArgument(t, 0);
                  i_68 = ATgetArgument(t, 1);
                  j_68 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_68;
              t = m_10(h_68, i_68, j_68, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm u_35 = NULL,b_36 = NULL,w_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  m_68 = ATgetArgument(t, 0);
                  p_68 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_68);
              u_35 = t;
              t = p_68;
              t = desugarRule_0_0(t);
              b_36 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, m_68, b_36);
              w_6 = t;
              t = SSLsetAnnotations(w_6, u_35);
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
        ATerm b_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL;
            h_69 = t;
            if(match_cons(t, sym_CallT_3))
              {
                i_69 = ATgetArgument(t, 0);
                j_69 = ATgetArgument(t, 1);
                k_69 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = h_69;
            t = i_10(i_69, j_69, k_69, t);
            LocalPopChoice(e_27);
          }
        else
          {
            t = b_27;
            {
              ATerm f_27 = t;
              int b_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(b_28);
                }
              else
                {
                  t = f_27;
                  {
                    ATerm d_28 = t;
                    int a_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(a_29);
                      }
                    else
                      {
                        t = d_28;
                        {
                          ATerm b_29 = t;
                          int c_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_29 = t;
                              int f_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      t_69 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_69;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      u_69 = ATgetArgument(t, 0);
                                      t = u_69;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          u_69 = ATgetArgument(t, 0);
                                          v_69 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, u_69, v_69);
                                    }
                                  LocalPopChoice(f_29);
                                }
                              else
                                {
                                  t = e_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(c_29);
                            }
                          else
                            {
                              t = b_29;
                              {
                                ATerm g_29 = t;
                                int h_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(h_29);
                                  }
                                else
                                  {
                                    t = g_29;
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
static ATerm r_6 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  t_70 = t;
  t = SSL_explode_term(t_70);
  if(match_cons(t, sym__2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_29 = ATgetArgument(t, 1);
        if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
          {
            s_70 = ATgetFirst((ATermList) l_29);
            {
              ATerm m_29 = (ATerm) ATgetNext((ATermList) l_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_70;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  l_36 = t;
  t = SSL_explode_term(l_36);
  if(match_cons(t, sym__2))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_29 = ATgetArgument(t, 1);
        if(((ATgetType(s_29) == AT_LIST) && !(ATisEmpty(s_29))))
          {
            ATerm x_29 = ATgetFirst((ATermList) s_29);
            j_36 = (ATerm) ATgetNext((ATermList) s_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_k_21;
  k_36 = t;
  t = SSL_mkterm(k_36, j_36);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  ATerm j_70 = NULL,m_70 = NULL;
  static ATerm v_70 (ATerm t)
  {
    ATerm u_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL;
        o_70 = t;
        t = map_1_0(r_6, t);
        t = d_124(t);
        p_70 = t;
        t = o_70;
        t = map_1_0(u_6, t);
        t = v_70(t);
        q_70 = t;
        t = (ATerm) ATinsert(CheckATermList(q_70), p_70);
        LocalPopChoice(w_30);
      }
    else
      {
        t = u_30;
        t = map_1_0(v_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = v_70(t);
  m_70 = t;
  t = term_k_21;
  j_70 = t;
  t = SSL_mkterm(j_70, m_70);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm w_70 = NULL;
  w_70 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
        t = w_70;
        t = new_0_0(t);
        n_72 = t;
        t = new_0_0(t);
        o_72 = t;
        t = new_0_0(t);
        p_72 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, w_70), (ATerm) ATmakeAppl(sym_Var_1, o_72))), (ATerm) ATmakeAppl(sym_Var_1, p_72)), (ATerm)ATmakeAppl(sym_VarDec_2, n_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_31), term_c_31)), o_72, (ATerm)ATmakeAppl(sym_Var_1, o_72), p_72, (ATerm) ATmakeAppl(sym_Var_1, p_72));
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL;
          t = w_70;
          t = new_0_0(t);
          r_72 = t;
          t = new_0_0(t);
          s_72 = t;
          t = new_0_0(t);
          t_72 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, w_70), (ATerm) ATmakeAppl(sym_Var_1, s_72))), (ATerm) ATmakeAppl(sym_Var_1, t_72)), (ATerm)ATmakeAppl(sym_VarDec_2, r_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_31), term_c_31)), s_72, (ATerm)ATmakeAppl(sym_Var_1, s_72), t_72, (ATerm) ATmakeAppl(sym_Var_1, t_72));
        }
      }
  }
  return(t);
}
static ATerm n_10 (ATerm w_42, ATerm x_42, ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_42, x_42);
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      t = SSL_subtr(w_42, x_42);
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL;
  if(match_cons(t, sym__2))
    {
      u_72 = ATgetArgument(t, 0);
      v_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_72, v_72, (ATerm) ATempty);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm w_72 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_31 = ATgetArgument(t, 0);
      if(((ATgetType(f_31) != AT_INT) || (ATgetInt((ATermInt) f_31) != 0)))
        _fail(t);
      {
        ATerm g_31 = ATgetArgument(t, 1);
      }
      w_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_72;
  return(t);
}
ATerm copy_1_0 (ATerm z_140 (ATerm), ATerm t)
{
  static ATerm z_6 (ATerm t)
  {
    ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,e_73 = NULL,f_73 = NULL;
    if(match_cons(t, sym__3))
      {
        x_72 = ATgetArgument(t, 0);
        y_72 = ATgetArgument(t, 1);
        z_72 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, x_72, term_j_16);
    t = geq_0_0(t);
    t = term_j_16;
    f_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_72, term_j_16);
    t = n_10(x_72, f_73, t);
    a_73 = t;
    t = y_72;
    t = z_140(t);
    e_73 = t;
    t = (ATerm) ATmakeAppl(sym__3, a_73, y_72, (ATerm) ATinsert(CheckATermList(z_72), e_73));
    return(t);
  }
  t = for_3_0(x_6, y_6, z_6, t);
  return(t);
}
static ATerm o_10 (ATerm e_72, ATerm f_72, ATerm t)
{
  ATerm g_73 = NULL,l_73 = NULL,o_73 = NULL;
  t = new_0_0(t);
  g_73 = t;
  t = new_0_0(t);
  l_73 = t;
  t = new_0_0(t);
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_73), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_72)), (ATerm) ATmakeAppl(sym_Var_1, l_73))), (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_72)), (ATerm) ATmakeAppl(sym_Var_1, o_73)))), (ATerm)ATmakeAppl(sym_VarDec_2, g_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_31), term_c_31)), l_73, (ATerm)ATmakeAppl(sym_Var_1, l_73), o_73, (ATerm) ATmakeAppl(sym_Var_1, o_73));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_74 = NULL,n_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_74 = ATgetFirst((ATermList) t);
      n_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_74;
    }
  else
    {
      t = n_74;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm h_79 (ATerm l_75, ATerm t_75, ATerm w_75, ATerm x_75, ATerm t)
{
  ATerm k_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,s_76 = NULL,x_76 = NULL,y_76 = NULL,b_77 = NULL,d_77 = NULL,e_77 = NULL,i_77 = NULL,j_77 = NULL;
  t = term_j_16;
  j_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_75, term_j_16);
  t = s_11(t_75, j_77, t);
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_77, term_d_16);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_76 = ATgetFirst((ATermList) t);
      o_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_76;
  t = last_0_0(t);
  k_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_76), n_76), o_76);
  t = genzip_4_0(a_7, b_7, c_7, e_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      p_76 = ATgetArgument(t, 0);
      s_76 = ATgetArgument(t, 1);
      x_76 = ATgetArgument(t, 2);
      y_76 = ATgetArgument(t, 3);
      b_77 = ATgetArgument(t, 4);
      d_77 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_77), x_76), o_76);
  t = concat_0_0(t);
  e_77 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, l_75, term_h_31), s_76, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(e_77), n_76), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_76)), (ATerm) ATmakeAppl(sym_Op_2, l_75, y_76))), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_76)), (ATerm) ATmakeAppl(sym_Op_2, l_75, d_77))), (ATerm) ATmakeAppl(sym_Seqs_1, p_76)))));
  return(t);
}
static ATerm k_79 (ATerm z_77, ATerm c_78, ATerm d_78, ATerm e_78, ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
  t = e_78;
  t = new_0_0(t);
  i_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_78, (ATerm) ATmakeAppl(sym_Var_1, i_78));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      j_78 = ATgetArgument(t, 0);
      k_78 = ATgetArgument(t, 1);
      l_78 = ATgetArgument(t, 2);
      m_78 = ATgetArgument(t, 3);
      n_78 = ATgetArgument(t, 4);
      o_78 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_78, n_78);
  t = conc_0_0(t);
  p_78 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, z_77, term_i_31), k_78, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(p_78), i_78), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_78)), (ATerm) ATmakeAppl(sym_Op_2, z_77, m_78))), (ATerm)ATmakeAppl(sym_Op_2, z_77, o_78), (ATerm) ATmakeAppl(sym_Seqs_1, j_78)))));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      ATerm o_31 = ATgetArgument(t, 1);
      if(((ATgetType(o_31) != AT_LIST) || !(ATisEmpty(o_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,o_77 = NULL,p_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_31 = ATgetArgument(t, 0);
      if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
        {
          k_77 = ATgetFirst((ATermList) q_31);
          l_77 = (ATerm) ATgetNext((ATermList) q_31);
        }
      else
        _fail(t);
      {
        ATerm u_31 = ATgetArgument(t, 1);
        if(((ATgetType(u_31) == AT_LIST) && !(ATisEmpty(u_31))))
          {
            o_77 = ATgetFirst((ATermList) u_31);
            p_77 = (ATerm) ATgetNext((ATermList) u_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_77, o_77), (ATerm) ATmakeAppl(sym__2, l_77, p_77));
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm q_77 = NULL,t_77 = NULL;
  if(match_cons(t, sym__2))
    {
      q_77 = ATgetArgument(t, 0);
      t_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_77), q_77);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  if(match_cons(t, sym__2))
    {
      v_77 = ATgetArgument(t, 0);
      w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(v_77, w_77, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,c_79 = NULL;
  v_78 = t;
  if(match_cons(t, sym__3))
    {
      w_78 = ATgetArgument(t, 0);
      x_78 = ATgetArgument(t, 1);
      y_78 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_78;
  if(match_string(t, "T"))
    {
      t = y_78;
      if(match_cons(t, sym__2))
        {
          z_78 = ATgetArgument(t, 0);
          c_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_78;
      if(match_int(t, 0))
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_79(w_78, z_78, c_79, v_78, t);
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
              {
                ATerm g_79 = NULL;
                t = v_78;
                t = new_0_0(t);
                g_79 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, w_78, term_h_31), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_79), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_79)), (ATerm) ATmakeAppl(sym_Op_2, w_78, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_79)), (ATerm) ATmakeAppl(sym_Op_2, w_78, (ATerm) ATempty))), term_b_24))));
              }
            }
        }
      else
        {
          t = h_79(w_78, z_78, c_79, v_78, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = y_78;
      if(match_cons(t, sym__2))
        {
          z_78 = ATgetArgument(t, 0);
          c_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_79(w_78, z_78, c_79, v_78, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_135 (ATerm), ATerm t)
{
  ATerm m_24 = NULL;
  static ATerm g_7 (ATerm t)
  {
    t = j_135(t);
    if(((m_24 != NULL) && (m_24 != t)))
      _fail(t);
    else
      m_24 = t;
    return(t);
  }
  t = fetch_1_0(g_7, t);
  t = not_null(m_24);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm o_24 = NULL,r_24 = NULL,s_24 = NULL;
  t = term_e_16;
  r_24 = t;
  t = (ATerm) ATinsert(ATempty, term_x_31);
  s_24 = t;
  t = SSL_printnl(r_24, s_24);
  t = term_j_16;
  o_24 = t;
  t = SSL_exit(o_24);
  t = (ATerm) ATinsert(ATempty, term_x_31);
  return(t);
}
ATerm debug_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,w_24 = NULL,x_24 = NULL;
  t_24 = t;
  t = j_127(t);
  u_24 = t;
  t = term_e_16;
  w_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_24), u_24);
  x_24 = t;
  t = SSL_printnl(w_24, x_24);
  t = t_24;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm n_7 (ATerm t)
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
      t = foldr_3_0(t_7, w_7, x_7, t);
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
            ATerm i_32 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = w_17;
      t = foldr_3_0(a_8, e_8, f_8, t);
      t = v_17;
      t = foldr_3_0(g_8, h_8, m_8, t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      c_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(c_18, d_18, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(e_18, f_18, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(l_18, m_18, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL;
  if(match_cons(t, sym__2))
    {
      n_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(n_18, p_18, t);
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
      ATerm j_32 = ATgetArgument(t, 0);
      ATerm k_32 = ATgetArgument(t, 1);
      ATerm o_32 = ATgetArgument(t, 2);
      ATerm r_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_25 = NULL;
      static ATerm i_7 (ATerm t)
      {
        ATerm h_25 = NULL,i_25 = NULL;
        h_25 = t;
        {
          ATerm z_32 = t;
          int a_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  i_25 = ATgetArgument(t, 0);
                  {
                    ATerm b_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm g_33 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(a_33);
              t = i_25;
              if(((g_25 != NULL) && (g_25 != t)))
                _fail(t);
              else
                g_25 = t;
              t = h_25;
            }
          else
            {
              t = z_32;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  i_25 = ATgetArgument(t, 0);
                  {
                    ATerm h_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm i_33 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm o_33 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = i_25;
              if(((g_25 != NULL) && (g_25 != t)))
                _fail(t);
              else
                g_25 = t;
              t = h_25;
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
              if(((g_25 != NULL) && (g_25 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_25 = ATgetArgument(t, 0);
              {
                ATerm p_33 = ATgetArgument(t, 1);
              }
              {
                ATerm q_33 = ATgetArgument(t, 2);
              }
              {
                ATerm j_34 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_7, t);
      }
      t = not_null(g_25);
      t = debug_1_0(l_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(y_32);
    }
  else
    {
      t = u_32;
      {
        ATerm d_27 = NULL;
        d_27 = t;
        t = map_1_0(n_7, t);
        t = d_27;
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(n_8, t);
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              {
                ATerm s_18 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_18 = ATgetFirst((ATermList) t);
                    {
                      ATerm n_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = s_18;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_27 = NULL,q_27 = NULL,a_19 = NULL;
  n_27 = t;
  t = SSL_explode_term(n_27);
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_34 = ATgetArgument(t, 1);
        if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
          {
            q_27 = ATgetFirst((ATermList) p_34);
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
  t = SSL_explode_term(n_27);
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
            ATerm d_35 = (ATerm) ATgetNext((ATermList) w_34);
            if(((ATgetType(d_35) == AT_LIST) && !(ATisEmpty(d_35))))
              {
                a_19 = ATgetFirst((ATermList) d_35);
                {
                  ATerm e_35 = (ATerm) ATgetNext((ATermList) d_35);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, q_27, a_19);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(o_8, p_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  static ATerm u_27 (ATerm t)
  {
    ATerm f_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_121(t);
        LocalPopChoice(h_35);
      }
    else
      {
        t = f_35;
        t = SRTS_all(u_27, t);
      }
    return(t);
  }
  t = u_27(t);
  return(t);
}
static ATerm a_10 (ATerm n_45, ATerm o_45, ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  w_27 = t;
  {
    ATerm i_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        t = w_11(n_45, o_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_35 = ATgetFirst((ATermList) t);
            v_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_35);
        {
          ATerm x_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, v_27);
          t = lookup_table_0_1(n_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(o_45, v_27, x_27, t);
          t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, v_27);
        }
      }
    else
      {
        t = i_35;
        {
          ATerm c_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
          t = lookup_table_0_1(n_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(o_45, c_28, t);
          t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        }
      }
  }
  t = w_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_131 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  h_28 = t;
  t = r_131(t);
  g_28 = t;
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL;
        t = term_v_35;
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_28, term_v_35);
        t = w_11(g_28, j_28, t);
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
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
  {
    ATerm w_35 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_28), f_28);
        LocalPopChoice(c_36);
        {
          ATerm k_28 = NULL,m_28 = NULL,p_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, g_28, term_v_35);
          t = lookup_table_0_1(g_28, t);
          p_28 = t;
          t = term_v_35;
          k_28 = t;
          t = p_28;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(k_28, m_28, t);
          t = (ATerm) ATmakeAppl(sym__2, g_28, term_v_35);
        }
      }
    else
      {
        t = w_35;
        {
          ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, g_28, term_v_35, e_28);
          t = lookup_table_0_1(g_28, t);
          s_28 = t;
          t = term_v_35;
          q_28 = t;
          t = s_28;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(q_28, e_28, r_28, t);
          t = (ATerm) ATmakeAppl(sym__3, g_28, term_v_35, e_28);
        }
      }
  }
  t = f_28;
  {
    static ATerm q_8 (ATerm t)
    {
      ATerm x_28 = NULL;
      x_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_28, x_28);
      t = a_10(g_28, x_28, t);
      return(t);
    }
    t = map_1_0(q_8, t);
  }
  t = h_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_123(t);
      t = j_123(t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      t = j_123(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_131 (ATerm), ATerm t)
{
  ATerm d_29 = NULL,i_29 = NULL,j_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  i_29 = t;
  t = q_131(t);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_29, term_v_35);
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_30 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_36 = ATgetArgument(t, 0);
            ATerm i_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_35;
        a_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_29, term_v_35);
        t = w_11(d_29, a_30, t);
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        t = (ATerm) ATempty;
      }
  }
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_29, term_v_35, (ATerm) ATinsert(CheckATermList(j_29), (ATerm) ATempty));
  t = lookup_table_0_1(d_29, t);
  q_29 = t;
  t = term_v_35;
  n_29 = t;
  t = (ATerm) ATinsert(CheckATermList(j_29), (ATerm) ATempty);
  o_29 = t;
  t = q_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(n_29, o_29, p_29, t);
  t = i_29;
  return(t);
}
ATerm scope_2_0 (ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t)
{
  static ATerm r_8 (ATerm t)
  {
    t = end_scope_1_0(s_131, t);
    return(t);
  }
  t = begin_scope_1_0(s_131, t);
  t = restore_always_2_0(t_131, r_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  o_30 = t;
  if(match_cons(t, sym__2))
    {
      p_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_30 = ATgetFirst((ATermList) t);
      t_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_30;
  if(match_cons(t, sym__2))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
      {
        ATerm m_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_30;
            if((p_30 != t))
              {
                _fail(t);
              }
            t = n_30;
            LocalPopChoice(n_36);
          }
        else
          {
            t = m_36;
            t = (ATerm) ATmakeAppl(sym__2, p_30, t_30);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_30, t_30);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_36 = ATgetArgument(t, 0);
      if(((ATgetType(o_36) != AT_LIST) || !(ATisEmpty(o_36))))
        _fail(t);
      {
        ATerm q_36 = ATgetArgument(t, 1);
        if(((ATgetType(q_36) != AT_LIST) || !(ATisEmpty(q_36))))
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
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,l_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_36 = ATgetArgument(t, 0);
      if(((ATgetType(r_36) == AT_LIST) && !(ATisEmpty(r_36))))
        {
          d_32 = ATgetFirst((ATermList) r_36);
          e_32 = (ATerm) ATgetNext((ATermList) r_36);
        }
      else
        _fail(t);
      {
        ATerm t_36 = ATgetArgument(t, 1);
        if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
          {
            f_32 = ATgetFirst((ATermList) t_36);
            l_32 = (ATerm) ATgetNext((ATermList) t_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_32, f_32), (ATerm) ATmakeAppl(sym__2, e_32, l_32));
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL;
  if(match_cons(t, sym__2))
    {
      m_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_32), m_32);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm p_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  p_31 = t;
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_36 = ATgetArgument(t, 0);
            ATerm x_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(v_36);
        t = p_31;
      }
    else
      {
        t = u_36;
        {
          ATerm c_32 = NULL;
          if(match_cons(t, sym__3))
            {
              r_31 = ATgetArgument(t, 0);
              s_31 = ATgetArgument(t, 1);
              t_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_31, s_31);
          t = genzip_4_0(u_8, v_8, w_8, _id, t);
          c_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_32, t_31);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL;
  static ATerm y_8 (ATerm t)
  {
    ATerm e_19 = NULL;
    t = g_119(t);
    e_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_19, not_null(q_32));
    t = lookup_0_0(t);
    t = h_119(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((q_32 != NULL) && (q_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_32;
  t = alltd_1_0(y_8, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm w_32 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_32 = ATgetArgument(t, 0);
      {
        ATerm y_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_32;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm x_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_32;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_z_36;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_37 = ATgetArgument(t, 0);
      if(((ATgetType(a_37) != AT_LIST) || !(ATisEmpty(a_37))))
        _fail(t);
      {
        ATerm b_37 = ATgetArgument(t, 1);
        if(((ATgetType(b_37) != AT_LIST) || !(ATisEmpty(b_37))))
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
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
        {
          c_33 = ATgetFirst((ATermList) c_37);
          d_33 = (ATerm) ATgetNext((ATermList) c_37);
        }
      else
        _fail(t);
      {
        ATerm d_37 = ATgetArgument(t, 1);
        if(((ATgetType(d_37) == AT_LIST) && !(ATisEmpty(d_37))))
          {
            e_33 = ATgetFirst((ATermList) d_37);
            f_33 = (ATerm) ATgetNext((ATermList) d_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_33, e_33), (ATerm) ATmakeAppl(sym__2, d_33, f_33));
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_33), j_33);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_37 = ATgetArgument(t, 0);
      if(match_cons(e_37, sym_VarDec_2))
        {
          l_33 = ATgetArgument(e_37, 0);
          {
            ATerm f_37 = ATgetArgument(e_37, 1);
          }
        }
      else
        _fail(t);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, l_33);
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_37, m_33);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, l_33), (ATerm) ATmakeAppl(sym_Defined_2, term_i_37, m_33));
  t = e_11(l_9, s_33, t_33, t);
  t = r_33;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_z_36;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,o_19 = NULL;
  u_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm m_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_z_36;
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_36, u_33);
  t = i_11(o_19, u_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm r_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_37) != ATmakeSymbol("t_0", 0, ATtrue)))
        _fail(t);
      v_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_33;
  return(t);
}
static ATerm e_10 (ATerm e_74, ATerm f_74, ATerm j_74, ATerm g_74, ATerm i_74, ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,v_32 = NULL;
  t = g_74;
  t = map_1_0(a_9, t);
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_32, f_74, i_74);
  t = substitute_2_0(b_9, _id, t);
  t_32 = t;
  {
    static ATerm d_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, j_74, e_74);
      t = genzip_4_0(f_9, g_9, j_9, k_9, t);
      t = t_32;
      t = alltd_1_0(m_9, t);
      if(((v_32 != NULL) && (v_32 != t)))
        _fail(t);
      else
        v_32 = t;
      return(t);
    }
    t = scope_2_0(c_9, d_9, t);
  }
  t = not_null(v_32);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,y_34 = NULL,a_35 = NULL,d_7 = NULL;
  a_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_35);
  t_34 = t;
  t = u_34;
  t = new_0_0(t);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_34, v_34);
  d_7 = t;
  t = SSLsetAnnotations(d_7, t_34);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,g_35 = NULL,j_35 = NULL,k_35 = NULL,f_7 = NULL;
  k_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      c_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_35);
  b_35 = t;
  t = c_35;
  t = new_0_0(t);
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_35, g_35);
  f_7 = t;
  t = SSLsetAnnotations(f_7, b_35);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm l_35 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_35 = ATgetArgument(t, 0);
      {
        ATerm t_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, l_35);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm x_35 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      x_35 = ATgetArgument(t, 0);
      {
        ATerm u_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, x_35);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,c_34 = NULL,d_34 = NULL,h_34 = NULL,i_34 = NULL,r_34 = NULL;
  d_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_37 = ATgetFirst((ATermList) t);
      if(match_cons(v_37, sym_SDefT_4))
        {
          w_33 = ATgetArgument(v_37, 0);
          x_33 = ATgetArgument(v_37, 1);
          y_33 = ATgetArgument(v_37, 2);
          {
            ATerm e_38 = ATgetArgument(v_37, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm d_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_33;
  t = map_1_0(s_9, t);
  z_33 = t;
  t = y_33;
  t = map_1_0(u_9, t);
  c_34 = t;
  t = z_33;
  t = map_1_0(v_9, t);
  h_34 = t;
  t = c_34;
  t = map_1_0(w_9, t);
  i_34 = t;
  t = d_34;
  {
    static ATerm x_9 (ATerm t)
    {
      ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm f_38 = ATgetArgument(t, 0);
          y_35 = ATgetArgument(t, 1);
          z_35 = ATgetArgument(t, 2);
          a_36 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = e_10(h_34, i_34, y_35, z_35, a_36, t);
      return(t);
    }
    t = map_1_0(x_9, t);
  }
  t = choices_0_0(t);
  r_34 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, w_33, z_33, c_34, r_34);
  return(t);
}
static ATerm z_80 (ATerm w_79, ATerm x_79, ATerm y_79, ATerm z_79, ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,j_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_79, x_79);
  t = Definitions_0_0(t);
  d_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_80, y_79);
  g_80 = t;
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      ATerm h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_80);
  e_80 = t;
  t = d_80;
  {
    ATerm m_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_80 = NULL,j_80 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_80 = ATgetFirst((ATermList) t);
            j_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_80;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_80;
        LocalPopChoice(o_38);
      }
    else
      {
        t = m_38;
        {
          ATerm p_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(r_38);
            }
          else
            {
              t = p_38;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_80, y_79);
  j_7 = t;
  t = SSLsetAnnotations(j_7, e_80);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,s_80 = NULL,t_80 = NULL;
  n_80 = t;
  if(match_cons(t, sym__2))
    {
      o_80 = ATgetArgument(t, 0);
      t_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_80;
  if(match_cons(t, sym__2))
    {
      p_80 = ATgetArgument(t, 0);
      s_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_80;
  if(match_cons(t, sym_Mod_2))
    {
      l_80 = ATgetArgument(t, 0);
      m_80 = ATgetArgument(t, 1);
      {
        ATerm s_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_80 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, l_80, m_80, s_80);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            y_80 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_80, t_80);
            LocalPopChoice(u_38);
          }
        else
          {
            t = s_38;
            t = z_80(p_80, s_80, t_80, n_80, t);
          }
      }
    }
  else
    {
      t = z_80(p_80, s_80, t_80, n_80, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_135 (ATerm), ATerm t)
{
  static ATerm a_82 (ATerm t)
  {
    ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL;
    z_81 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_81 = ATgetFirst((ATermList) t);
        y_81 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_36 = NULL,s_36 = NULL,m_7 = NULL;
          t = SSLgetAnnotations(z_81);
          p_36 = t;
          t = y_81;
          t = a_82(t);
          s_36 = t;
          t = (ATerm) ATinsert(CheckATermList(s_36), x_81);
          m_7 = t;
          t = SSLsetAnnotations(m_7, p_36);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_81;
        t = o_135(t);
      }
    return(t);
  }
  t = a_82(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
  b_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_81;
    }
  else
    {
      static ATerm y_9 (ATerm t)
      {
        t = not_null(d_81);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_81 = ATgetFirst((ATermList) t);
          if(((d_81 != NULL) && (d_81 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_81;
      t = at_end_1_0(y_9, t);
    }
  return(t);
}
static ATerm m_82 (ATerm e_82, ATerm t)
{
  ATerm f_82 = NULL;
  t = SSL_explode_term(e_82);
  if(match_cons(t, sym__2))
    {
      ATerm x_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_82;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL;
  j_82 = t;
  if(match_cons(t, sym__2))
    {
      h_82 = ATgetArgument(t, 0);
      i_82 = ATgetArgument(t, 1);
      {
        ATerm y_38 = t;
        int b_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_10 (ATerm t)
            {
              t = i_82;
              return(t);
            }
            t = h_82;
            t = at_end_1_0(b_10, t);
            LocalPopChoice(b_39);
          }
        else
          {
            t = y_38;
            t = m_82(j_82, t);
          }
      }
    }
  else
    {
      t = m_82(j_82, t);
    }
  return(t);
}
static ATerm u_10 (ATerm b_137 (ATerm), ATerm r_60, ATerm q_60, ATerm t)
{
  static ATerm h_83 (ATerm t)
  {
    ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
    c_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_83;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_83 = ATgetFirst((ATermList) t);
            e_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_83;
              {
                static ATerm c_10 (ATerm t)
                {
                  t = q_60;
                  return(t);
                }
                t = f_11(b_137, c_10, d_83, e_83, t);
              }
              t = h_83(t);
              LocalPopChoice(d_39);
            }
          else
            {
              t = c_39;
              {
                ATerm l_37 = NULL,s_37 = NULL,p_7 = NULL;
                t = SSLgetAnnotations(c_83);
                l_37 = t;
                t = e_83;
                t = h_83(t);
                s_37 = t;
                t = (ATerm) ATinsert(CheckATermList(s_37), d_83);
                p_7 = t;
                t = SSLsetAnnotations(p_7, l_37);
              }
            }
        }
      }
    return(t);
  }
  t = r_60;
  t = h_83(t);
  return(t);
}
ATerm genzip_4_0 (ATerm n_124 (ATerm), ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm t)
{
  static ATerm p_83 (ATerm t)
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_124(t);
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        {
          ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,s_7 = NULL;
          t = o_124(t);
          o_83 = t;
          if(match_cons(t, sym__2))
            {
              k_83 = ATgetArgument(t, 0);
              l_83 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_83);
          j_83 = t;
          t = k_83;
          t = q_124(t);
          m_83 = t;
          t = l_83;
          t = p_83(t);
          n_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_83, n_83);
          s_7 = t;
          t = SSLsetAnnotations(s_7, j_83);
          t = p_124(t);
        }
      }
    return(t);
  }
  t = p_83(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if(((ATgetType(g_39) != AT_LIST) || !(ATisEmpty(g_39))))
        _fail(t);
      {
        ATerm h_39 = ATgetArgument(t, 1);
        if(((ATgetType(h_39) != AT_LIST) || !(ATisEmpty(h_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_39 = ATgetArgument(t, 0);
      if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
        {
          w_83 = ATgetFirst((ATermList) i_39);
          x_83 = (ATerm) ATgetNext((ATermList) i_39);
        }
      else
        _fail(t);
      {
        ATerm n_39 = ATgetArgument(t, 1);
        if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
          {
            y_83 = ATgetFirst((ATermList) n_39);
            z_83 = (ATerm) ATgetNext((ATermList) n_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_83, y_83), (ATerm) ATmakeAppl(sym__2, x_83, z_83));
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL;
  if(match_cons(t, sym__2))
    {
      a_84 = ATgetArgument(t, 0);
      b_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_84), a_84);
  return(t);
}
static ATerm z_10 (ATerm m_817, ATerm r_817, ATerm b_83, ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  t = SSL_explode_term(r_817);
  if(match_cons(t, sym__2))
    {
      r_83 = ATgetArgument(t, 0);
      t_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_817);
  if(match_cons(t, sym__2))
    {
      if((r_83 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_83, t_83);
  t = genzip_4_0(d_10, g_10, h_10, _id, t);
  u_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_83, b_83);
  t = conc_0_0(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm j_84 = NULL;
  j_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_84);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL,u_7 = NULL;
  n_84 = t;
  if(match_cons(t, sym__2))
    {
      l_84 = ATgetArgument(t, 0);
      m_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_84);
  k_84 = t;
  t = m_84;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_84, m_84);
  u_7 = t;
  t = SSLsetAnnotations(u_7, k_84);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL;
  a_86 = t;
  if(match_cons(t, sym__2))
    {
      b_86 = ATgetArgument(t, 0);
      c_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_86 = ATgetFirst((ATermList) t);
      e_86 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_87(b_86, c_86, a_86, t);
            LocalPopChoice(u_39);
          }
        else
          {
            t = q_39;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_86), d_86), e_86);
          }
      }
    }
  else
    {
      t = l_87(b_86, c_86, a_86, t);
    }
  return(t);
}
static ATerm l_87 (ATerm o_84, ATerm z_84, ATerm a_85, ATerm t)
{
  ATerm b_85 = NULL,e_85 = NULL,v_7 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,u_85 = NULL;
  t = SSLgetAnnotations(a_85);
  b_85 = t;
  t = z_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_85 = ATgetFirst((ATermList) t);
      u_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_85;
  if(match_cons(t, sym__2))
    {
      i_85 = ATgetArgument(t, 0);
      j_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85;
        if((i_85 != t))
          {
            _fail(t);
          }
        t = u_85;
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = z_84;
        t = z_10(i_85, j_85, u_85, t);
      }
  }
  e_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_84, e_85);
  v_7 = t;
  t = SSLsetAnnotations(v_7, b_85);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm k_87 = NULL;
  if(match_cons(t, sym__2))
    {
      k_87 = ATgetArgument(t, 0);
      if((k_87 != ATgetArgument(t, 1)))
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
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_10, l_10, p_10, t);
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      {
        ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL;
        i_86 = t;
        if(match_cons(t, sym__2))
          {
            j_86 = ATgetArgument(t, 0);
            k_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_86;
        t = u_10(q_10, j_86, k_86, t);
      }
    }
  return(t);
}
static ATerm b_11 (ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm d_154 (ATerm), ATerm s_84, ATerm p_84, ATerm x_84, ATerm t_84, ATerm q_84, ATerm r_84, ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_84, t_84);
  t = b_154(t);
  if(match_cons(t, sym__2))
    {
      n_87 = ATgetArgument(t, 0);
      m_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_87;
  t = c_154(t);
  o_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_87, x_84);
  t = diff_0_0(t);
  p_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_87, p_84);
  t = conc_0_0(t);
  q_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_87, x_84);
  t = conc_0_0(t);
  r_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_84, n_87, q_84);
  t = d_154(t);
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym__5, q_87, r_87, m_87, s_87, r_84);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm d_154 (ATerm), ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,e_88 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
        {
          u_87 = ATgetFirst((ATermList) a_40);
          v_87 = (ATerm) ATgetNext((ATermList) a_40);
        }
      else
        _fail(t);
      w_87 = ATgetArgument(t, 1);
      x_87 = ATgetArgument(t, 2);
      y_87 = ATgetArgument(t, 3);
      e_88 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = b_11(b_154, c_154, d_154, u_87, v_87, w_87, x_87, y_87, e_88, t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm t)
{
  static ATerm o_88 (ATerm t)
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_126(t);
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = o_126(t);
        t = o_88(t);
      }
    return(t);
  }
  t = o_88(t);
  return(t);
}
ATerm for_3_0 (ATerm q_126 (ATerm), ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t)
{
  t = q_126(t);
  t = while_not_2_0(r_126, s_126, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
  if(match_cons(t, sym__3))
    {
      s_90 = ATgetArgument(t, 0);
      t_90 = ATgetArgument(t, 1);
      u_90 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, s_90, s_90, t_90, u_90, (ATerm) ATempty);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm d_40 = ATgetArgument(t, 0);
      if(((ATgetType(d_40) != AT_LIST) || !(ATisEmpty(d_40))))
        _fail(t);
      {
        ATerm e_40 = ATgetArgument(t, 1);
      }
      {
        ATerm h_40 = ATgetArgument(t, 2);
      }
      x_90 = ATgetArgument(t, 3);
      y_90 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_90, y_90);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm i_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, a_11, c_11, t);
      LocalPopChoice(k_40);
    }
  else
    {
      t = i_40;
      {
        ATerm e_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL;
        if(match_cons(t, sym__5))
          {
            e_91 = ATgetArgument(t, 0);
            p_91 = ATgetArgument(t, 1);
            q_91 = ATgetArgument(t, 2);
            r_91 = ATgetArgument(t, 3);
            s_91 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = e_91;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_91 = ATgetFirst((ATermList) t);
            o_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, o_91, p_91, q_91, r_91, (ATerm) ATinsert(CheckATermList(s_91), n_91));
      }
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(d_11, t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      b_91 = ATgetArgument(t, 1);
      c_91 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_91), b_91);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(p_40);
    }
  else
    {
      t = o_40;
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  if(match_cons(t, sym__2))
    {
      s_39 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_39;
  if(match_cons(t, sym_Mod_2))
    {
      l_39 = ATgetArgument(t, 0);
      m_39 = ATgetArgument(t, 1);
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_39;
            t = t_9(l_39, m_39, t_39, t);
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
            t = x_39(s_39, t_39, t);
          }
      }
    }
  else
    {
      t = x_39(s_39, t_39, t);
    }
  return(t);
}
static ATerm x_39 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  t = term_e_16;
  j_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), a_39), term_n_17), z_38), term_l_17);
  k_39 = t;
  t = SSL_printnl(j_39, k_39);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), a_39), term_n_17), z_38), term_l_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL;
  t = for_3_0(r_10, v_10, y_10, t);
  v_95 = t;
  if(match_cons(t, sym__2))
    {
      w_95 = ATgetArgument(t, 0);
      x_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_95;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_95;
    }
  else
    {
      ATerm n_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_95 = ATgetFirst((ATermList) t);
          z_95 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(z_95), y_95);
      t = map_1_0(h_11, t);
      t = term_j_16;
      n_38 = t;
      t = SSL_exit(n_38);
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL;
  if(match_cons(t, sym__2))
    {
      r_96 = ATgetArgument(t, 0);
      s_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(r_96, s_96, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm t_96 = NULL,u_96 = NULL;
  if(match_cons(t, sym__2))
    {
      t_96 = ATgetArgument(t, 0);
      u_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(t_96, u_96, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm v_96 = NULL;
  if(match_cons(t, sym__2))
    {
      v_96 = ATgetArgument(t, 0);
      if((v_96 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_u_40;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  f_96 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      i_96 = ATgetArgument(t, 0);
      d_96 = ATgetArgument(t, 1);
      e_96 = ATgetArgument(t, 2);
      {
        ATerm v_40 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  k_96 = t;
  t = d_96;
  t = foldr_3_0(j_11, t_11, y_11, t);
  g_96 = t;
  t = e_96;
  t = foldr_3_0(d_12, e_12, g_12, t);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_96, (ATerm) ATmakeAppl(sym__2, g_96, h_96));
  {
    ATerm w_40 = t;
    int x_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(x_40);
      }
    else
      {
        t = w_40;
        t = (ATerm) ATempty;
      }
  }
  m_96 = t;
  t = i_96;
  {
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(z_40);
      }
    else
      {
        t = y_40;
        t = (ATerm) ATempty;
      }
  }
  l_96 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_96, h_96));
  q_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_96, h_96)), l_96);
  t = g_11(h_12, q_96, l_96, t);
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_96, (ATerm) ATmakeAppl(sym__2, g_96, h_96));
  o_96 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_41, (ATerm) ATinsert(CheckATermList(m_96), f_96));
  p_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_96, (ATerm) ATmakeAppl(sym__2, g_96, h_96)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_41, (ATerm) ATinsert(CheckATermList(m_96), f_96)));
  t = e_11(i_12, o_96, p_96, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_41, j_96);
  n_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_96, (ATerm) ATmakeAppl(sym_Defined_2, term_b_41, j_96));
  t = e_11(m_12, i_96, n_96, t);
  t = k_96;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm k_97 = NULL,l_97 = NULL;
  if(match_cons(t, sym__2))
    {
      k_97 = ATgetArgument(t, 0);
      l_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(k_97, l_97, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL;
  if(match_cons(t, sym__2))
    {
      m_97 = ATgetArgument(t, 0);
      n_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(m_97, n_97, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm o_97 = NULL;
  if(match_cons(t, sym__2))
    {
      o_97 = ATgetArgument(t, 0);
      if((o_97 != ATgetArgument(t, 1)))
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
  t = term_s_40;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_u_40;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL;
  y_96 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      b_97 = ATgetArgument(t, 0);
      w_96 = ATgetArgument(t, 1);
      x_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  d_97 = t;
  t = w_96;
  t = foldr_3_0(n_12, o_12, p_12, t);
  z_96 = t;
  t = x_96;
  t = foldr_3_0(q_12, r_12, s_12, t);
  a_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_97, (ATerm) ATmakeAppl(sym__2, z_96, a_97));
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = (ATerm) ATempty;
      }
  }
  f_97 = t;
  t = b_97;
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = (ATerm) ATempty;
      }
  }
  e_97 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_96, a_97));
  j_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_96, a_97)), e_97);
  t = g_11(t_12, j_97, e_97, t);
  c_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_97, (ATerm) ATmakeAppl(sym__2, z_96, a_97));
  h_97 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_41, (ATerm) ATinsert(CheckATermList(f_97), y_96));
  i_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_97, (ATerm) ATmakeAppl(sym__2, z_96, a_97)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_41, (ATerm) ATinsert(CheckATermList(f_97), y_96)));
  t = e_11(u_12, h_97, i_97, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_41, c_97);
  g_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_97, (ATerm) ATmakeAppl(sym_Defined_2, term_h_41, c_97));
  t = e_11(x_12, b_97, g_97, t);
  t = d_97;
  return(t);
}
static ATerm e_11 (ATerm u_131 (ATerm), ATerm e_44, ATerm c_44, ATerm t)
{
  ATerm p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL;
  s_97 = t;
  t = u_131(t);
  p_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_97, e_44, c_44);
  t = x_11(p_97, e_44, c_44, t);
  {
    ATerm i_41 = t;
    int l_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_97 = NULL;
        t = term_v_35;
        x_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_97, term_v_35);
        t = w_11(p_97, x_97, t);
        LocalPopChoice(l_41);
      }
    else
      {
        t = i_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_97 = ATgetFirst((ATermList) t);
      r_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_97, term_v_35, (ATerm) ATinsert(CheckATermList(r_97), (ATerm) ATinsert(CheckATermList(q_97), e_44)));
  t = lookup_table_0_1(p_97, t);
  w_97 = t;
  t = term_v_35;
  t_97 = t;
  t = (ATerm) ATinsert(CheckATermList(r_97), (ATerm) ATinsert(CheckATermList(q_97), e_44));
  u_97 = t;
  t = w_97;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(t_97, u_97, v_97, t);
  t = s_97;
  return(t);
}
static ATerm f_11 (ATerm j_137 (ATerm), ATerm k_137 (ATerm), ATerm x_60, ATerm w_60, ATerm t)
{
  t = k_137(t);
  {
    static ATerm y_12 (ATerm t)
    {
      ATerm y_97 = NULL;
      y_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_60, y_97);
      t = j_137(t);
      return(t);
    }
    t = fetch_1_0(y_12, t);
  }
  t = w_60;
  return(t);
}
static ATerm g_11 (ATerm g_137 (ATerm), ATerm t_60, ATerm s_60, ATerm t)
{
  static ATerm o_98 (ATerm t)
  {
    ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL;
    j_98 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_60;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_98 = ATgetFirst((ATermList) t);
            l_98 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_41 = t;
          int n_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_98;
              {
                static ATerm b_13 (ATerm t)
                {
                  t = s_60;
                  return(t);
                }
                t = f_11(g_137, b_13, k_98, l_98, t);
              }
              t = o_98(t);
              LocalPopChoice(n_41);
            }
          else
            {
              t = m_41;
              {
                ATerm l_40 = NULL,t_40 = NULL,z_7 = NULL;
                t = SSLgetAnnotations(j_98);
                l_40 = t;
                t = l_98;
                t = o_98(t);
                t_40 = t;
                t = (ATerm) ATinsert(CheckATermList(t_40), k_98);
                z_7 = t;
                t = SSLsetAnnotations(z_7, l_40);
              }
            }
        }
      }
    return(t);
  }
  t = t_60;
  t = o_98(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm c_99 = NULL;
  c_99 = t;
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_42 = NULL,h_42 = NULL;
        t = term_u_40;
        h_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_40, c_99);
        t = i_11(h_42, c_99, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_41) != ATmakeSymbol("i_1", 0, ATtrue)))
              _fail(t);
            a_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_42;
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        {
          ATerm r_41 = t;
          int u_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_42 = NULL,y_42 = NULL;
              t = term_u_40;
              y_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_u_40, c_99);
              t = i_11(y_42, c_99, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_41) != ATmakeSymbol("e_1", 0, ATtrue)))
                    _fail(t);
                  o_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_42;
              LocalPopChoice(u_41);
            }
          else
            {
              t = r_41;
              {
                ATerm l_43 = NULL,q_43 = NULL;
                t = term_u_40;
                q_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_40, c_99);
                t = i_11(q_43, c_99, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm w_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_41) != ATmakeSymbol("z_0", 0, ATtrue)))
                      _fail(t);
                    l_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_43;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_11 (ATerm t_45, ATerm u_45, ATerm t)
{
  ATerm g_99 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
  t = w_11(t_45, u_45, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_99 = ATgetFirst((ATermList) t);
      {
        ATerm x_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_99;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm x_99 = NULL,z_99 = NULL;
  x_99 = t;
  if(match_cons(t, sym__2))
    {
      ATerm y_41 = ATgetArgument(t, 0);
      z_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_99;
  if(match_cons(t, sym__2))
    {
      ATerm z_41 = ATgetArgument(t, 0);
      ATerm b_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_44 = NULL,r_44 = NULL;
        t = term_s_40;
        r_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_40, x_99);
        t = i_11(r_44, x_99, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_42) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
            l_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_44;
        LocalPopChoice(d_42);
      }
    else
      {
        t = c_42;
        {
          ATerm f_42 = t;
          int g_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_44 = NULL,z_44 = NULL;
              t = term_s_40;
              z_44 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_40, x_99);
              t = i_11(z_44, x_99, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm i_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_42) != ATmakeSymbol("c_1", 0, ATtrue)))
                    _fail(t);
                  v_44 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_44;
              LocalPopChoice(g_42);
            }
          else
            {
              t = f_42;
              {
                ATerm e_45 = NULL,y_45 = NULL;
                t = term_s_40;
                y_45 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_40, x_99);
                t = i_11(y_45, x_99, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm j_42 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_42) != ATmakeSymbol("w_0", 0, ATtrue)))
                      _fail(t);
                    e_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_45;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL;
  g_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_100;
      t = l_140(t);
    }
  else
    {
      ATerm l_100 = NULL,m_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_100 = ATgetFirst((ATermList) t);
          i_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_100;
      t = n_140(t);
      l_100 = t;
      t = i_100;
      t = foldr_3_0(l_140, m_140, n_140, t);
      m_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_100, m_100);
      t = m_140(t);
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL;
  if(match_cons(t, sym__2))
    {
      b_101 = ATgetArgument(t, 0);
      c_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(b_101, c_101, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL;
  if(match_cons(t, sym__2))
    {
      d_101 = ATgetArgument(t, 0);
      e_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(d_101, e_101, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm f_101 = NULL;
  if(match_cons(t, sym__2))
    {
      f_101 = ATgetArgument(t, 0);
      if((f_101 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_u_40;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL,w_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL;
  p_100 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_100 = ATgetArgument(t, 0);
      n_100 = ATgetArgument(t, 1);
      o_100 = ATgetArgument(t, 2);
      {
        ATerm k_42 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  u_100 = t;
  t = n_100;
  t = foldr_3_0(c_13, d_13, e_13, t);
  q_100 = t;
  t = o_100;
  t = foldr_3_0(f_13, g_13, h_13, t);
  r_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_100, (ATerm) ATmakeAppl(sym__2, q_100, r_100));
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
        t = (ATerm) ATempty;
      }
  }
  w_100 = t;
  t = s_100;
  {
    ATerm n_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(p_42);
      }
    else
      {
        t = n_42;
        t = (ATerm) ATempty;
      }
  }
  v_100 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_100, r_100));
  a_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_100, r_100)), v_100);
  t = g_11(i_13, a_101, v_100, t);
  t_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_100, (ATerm) ATmakeAppl(sym__2, q_100, r_100));
  y_100 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_42, (ATerm) ATinsert(CheckATermList(w_100), p_100));
  z_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_100, (ATerm) ATmakeAppl(sym__2, q_100, r_100)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_42, (ATerm) ATinsert(CheckATermList(w_100), p_100)));
  t = e_11(l_13, y_100, z_100, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_42, t_100);
  x_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_100, (ATerm) ATmakeAppl(sym_Defined_2, term_t_42, t_100));
  t = e_11(m_13, s_100, x_100, t);
  t = u_100;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm g_101 = NULL;
  t = map_1_0(s_13, t);
  g_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_d_43), g_101, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL,c_8 = NULL;
  m_101 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_101 = ATgetFirst((ATermList) t);
      j_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_101);
  h_101 = t;
  t = i_101;
  t = m_104(t);
  k_101 = t;
  t = j_101;
  t = n_104(t);
  l_101 = t;
  t = (ATerm) ATinsert(CheckATermList(l_101), k_101);
  c_8 = t;
  t = SSLsetAnnotations(c_8, h_101);
  return(t);
}
static ATerm k_11 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm n_101 = NULL;
  t = SSL_fputc(m_35, n_35);
  n_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_101);
  return(t);
}
static ATerm l_11 (ATerm e_34, ATerm f_34, ATerm t)
{
  ATerm o_101 = NULL;
  t = SSL_write_term_to_stream_text(e_34, f_34);
  o_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_101);
  return(t);
}
static ATerm n_11 (ATerm l_127 (ATerm), ATerm o_270, ATerm k_34, ATerm t)
{
  ATerm p_101 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_270, term_e_43);
  t = r_11(t);
  p_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_101, k_34);
  t = l_127(t);
  t = fclose_0_0(t);
  t = k_34;
  return(t);
}
static ATerm m_11 (ATerm a_34, ATerm b_34, ATerm t)
{
  ATerm q_101 = NULL;
  t = SSL_write_term_to_stream_baf(a_34, b_34);
  q_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_101);
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
  ATerm r_46 = NULL,s_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_43 = ATgetArgument(t, 0);
      if(match_cons(f_43, sym_Stream_1))
        {
          r_46 = ATgetArgument(f_43, 0);
        }
      else
        _fail(t);
      s_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(r_46, s_46, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,z_47 = NULL,a_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_43 = ATgetArgument(t, 0);
      if(match_cons(g_43, sym_Stream_1))
        {
          z_47 = ATgetArgument(g_43, 0);
        }
      else
        _fail(t);
      a_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(z_47, a_48, t);
  q_47 = t;
  t = term_a_23;
  r_47 = t;
  t = q_47;
  if(match_cons(t, sym_Stream_1))
    {
      s_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, q_47);
  t = k_11(r_47, s_47, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL,e_103 = NULL,f_103 = NULL,j_8 = NULL,i_8 = NULL;
  v_101 = t;
  if(match_cons(t, sym__2))
    {
      c_102 = ATgetArgument(t, 0);
      d_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_101);
  b_102 = t;
  t = c_102;
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_101 != NULL) && (u_101 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(t_13, t);
        LocalPopChoice(i_43);
      }
    else
      {
        t = h_43;
        t = term_j_43;
        u_101 = t;
      }
  }
  e_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_102, d_102);
  i_8 = t;
  t = SSLsetAnnotations(i_8, b_102);
  t = v_101;
  if(match_cons(t, sym__2))
    {
      x_101 = ATgetArgument(t, 0);
      y_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_101);
  w_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_101, (ATerm) ATmakeAppl(sym__2, not_null(u_101), y_101));
  j_8 = t;
  t = SSLsetAnnotations(j_8, w_101);
  a_102 = t;
  if(match_cons(t, sym__2))
    {
      e_103 = ATgetArgument(t, 0);
      f_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_46 = NULL,j_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,k_8 = NULL;
        t = SSLgetAnnotations(a_102);
        f_46 = t;
        t = e_103;
        t = fetch_1_0(u_13, t);
        j_46 = t;
        t = f_103;
        if(match_cons(t, sym__2))
          {
            p_46 = ATgetArgument(t, 0);
            q_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_11(v_13, p_46, q_46, t);
        o_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_46, o_46);
        k_8 = t;
        t = SSLsetAnnotations(k_8, f_46);
        LocalPopChoice(m_43);
      }
    else
      {
        t = k_43;
        {
          ATerm a_47 = NULL,g_47 = NULL,h_47 = NULL,p_47 = NULL,l_8 = NULL;
          t = SSLgetAnnotations(a_102);
          a_47 = t;
          t = f_103;
          if(match_cons(t, sym__2))
            {
              h_47 = ATgetArgument(t, 0);
              p_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_11(w_13, h_47, p_47, t);
          g_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_103, g_47);
          l_8 = t;
          t = SSLsetAnnotations(l_8, a_47);
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
ATerm apply_strategy_1_0 (ATerm m_148 (ATerm), ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL;
  m_103 = t;
  t = dtime_0_0(t);
  t = m_103;
  t = m_148(t);
  l_103 = t;
  t = dtime_0_0(t);
  i_103 = t;
  t = l_103;
  if(match_cons(t, sym__2))
    {
      j_103 = ATgetArgument(t, 0);
      k_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_103), (ATerm) ATmakeAppl(sym_Runtime_1, i_103)), k_103);
  return(t);
}
static ATerm a_104 (ATerm u_103, ATerm t)
{
  t = SSL_fclose(u_103);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_103 = NULL,y_103 = NULL;
  y_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_103 = ATgetArgument(t, 0);
      {
        ATerm n_43 = t;
        int o_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_103);
            LocalPopChoice(o_43);
          }
        else
          {
            t = n_43;
            t = a_104(y_103, t);
          }
      }
    }
  else
    {
      t = a_104(y_103, t);
    }
  return(t);
}
static ATerm o_11 (ATerm g_34, ATerm t)
{
  t = SSL_read_term_from_stream(g_34);
  return(t);
}
static ATerm p_11 (ATerm w_69, ATerm x_69, ATerm t)
{
  t = SSL_strcat(w_69, x_69);
  return(t);
}
static ATerm q_11 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm b_104 = NULL;
  t = SSL_fopen(o_35, p_35);
  b_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_104);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_104 = NULL;
  t = SSL_stdin_stream();
  c_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_104);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_104 = NULL;
  t = SSL_stdout_stream();
  d_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_104);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_104 = NULL;
  t = SSL_stderr_stream();
  e_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_104);
  return(t);
}
static ATerm n_105 (ATerm k_104, ATerm t)
{
  ATerm l_104 = NULL;
  t = SSL_explode_term(k_104);
  if(match_cons(t, sym__2))
    {
      ATerm p_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_43 = ATgetArgument(t, 1);
        if(((ATgetType(r_43) == AT_LIST) && !(ATisEmpty(r_43))))
          {
            l_104 = ATgetFirst((ATermList) r_43);
            {
              ATerm s_43 = (ATerm) ATgetNext((ATermList) r_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_104;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_104;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_104;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_104;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_105 (ATerm q_104, ATerm r_104, ATerm s_104, ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,y_104 = NULL,s_8 = NULL;
  t = SSLgetAnnotations(s_104);
  v_104 = t;
  t = q_104;
  if(match_cons(t, sym_Path_1))
    {
      y_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_104, r_104);
  s_8 = t;
  t = SSLsetAnnotations(s_8, v_104);
  if(match_cons(t, sym__2))
    {
      t_104 = ATgetArgument(t, 0);
      u_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(t_104, u_104, t);
  return(t);
}
static ATerm p_105 (ATerm a_105, ATerm b_105, ATerm c_105, ATerm t)
{
  ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL,i_105 = NULL,t_8 = NULL;
  t = SSLgetAnnotations(c_105);
  f_105 = t;
  t = SSL_is_string(a_105);
  i_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_105, b_105);
  t_8 = t;
  t = SSLsetAnnotations(t_8, f_105);
  if(match_cons(t, sym__2))
    {
      d_105 = ATgetArgument(t, 0);
      e_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(d_105, e_105, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL;
  k_105 = t;
  if(match_cons(t, sym__2))
    {
      l_105 = ATgetArgument(t, 0);
      m_105 = ATgetArgument(t, 1);
      {
        ATerm t_43 = t;
        int u_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_105(k_105, t);
            LocalPopChoice(u_43);
          }
        else
          {
            t = t_43;
            {
              ATerm v_43 = t;
              int w_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_105(l_105, m_105, k_105, t);
                  LocalPopChoice(w_43);
                }
              else
                {
                  t = v_43;
                  t = p_105(l_105, m_105, k_105, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_105(k_105, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL,y_105 = NULL;
  y_105 = t;
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_105, term_z_43);
        t = r_11(t);
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        {
          ATerm p_48 = NULL,q_48 = NULL;
          t = term_a_44;
          q_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_44, y_105);
          t = p_11(q_48, y_105, t);
          p_48 = t;
          t = SSL_perror(p_48);
          _fail(t);
        }
      }
  }
  s_105 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_11(t_105, t);
  r_105 = t;
  t = s_105;
  t = fclose_0_0(t);
  t = r_105;
  return(t);
}
ATerm fetch_1_0 (ATerm h_135 (ATerm), ATerm t)
{
  static ATerm x_106 (ATerm t)
  {
    ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL;
    u_106 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_106 = ATgetFirst((ATermList) t);
        w_106 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_44 = t;
      int d_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_48 = NULL,i_49 = NULL,x_8 = NULL;
          t = SSLgetAnnotations(u_106);
          z_48 = t;
          t = v_106;
          t = h_135(t);
          i_49 = t;
          t = (ATerm) ATinsert(CheckATermList(w_106), i_49);
          x_8 = t;
          t = SSLsetAnnotations(x_8, z_48);
          LocalPopChoice(d_44);
        }
      else
        {
          t = b_44;
          {
            ATerm w_49 = NULL,n_50 = NULL,z_8 = NULL;
            t = SSLgetAnnotations(u_106);
            w_49 = t;
            t = w_106;
            t = x_106(t);
            n_50 = t;
            t = (ATerm) ATinsert(CheckATermList(n_50), v_106);
            z_8 = t;
            t = SSLsetAnnotations(z_8, w_49);
          }
        }
    }
    return(t);
  }
  t = x_106(t);
  return(t);
}
static ATerm w_11 (ATerm b_47, ATerm c_47, ATerm t)
{
  ATerm a_107 = NULL;
  t = lookup_table_0_1(b_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(c_47, a_107, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  ATerm d_107 = NULL;
  d_107 = t;
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
        t = term_h_44;
        g_107 = t;
        t = term_i_44;
        h_107 = t;
        t = term_j_44;
        t = w_11(g_107, h_107, t);
        f_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_107, term_k_44);
        t = geq_0_0(t);
        t = d_107;
        t = c_129(t);
        LocalPopChoice(g_44);
      }
    else
      {
        t = f_44;
        t = d_107;
      }
  }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm k_107 = NULL;
  k_107 = t;
  if(match_string(t, "-k"))
    {
      t = k_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_107;
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm l_107 = NULL,m_107 = NULL,n_107 = NULL;
  l_107 = t;
  t = SSL_string_to_int(l_107);
  m_107 = t;
  t = term_m_44;
  n_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_44, m_107);
  t = z_11(n_107, m_107, t);
  t = l_107;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_n_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_13, y_13, z_13, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm p_107 = NULL;
  p_107 = t;
  if(match_string(t, "-S"))
    {
      t = p_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_107;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm q_107 = NULL,r_107 = NULL;
  t = term_i_44;
  q_107 = t;
  t = term_z_20;
  r_107 = t;
  t = term_q_44;
  t = z_11(q_107, r_107, t);
  t = term_s_44;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_t_44;
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
  ATerm s_107 = NULL,t_107 = NULL,u_107 = NULL;
  s_107 = t;
  t = SSL_string_to_int(s_107);
  t_107 = t;
  t = term_i_44;
  u_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_44, t_107);
  t = z_11(u_107, t_107, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_107);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_u_44;
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
  ATerm v_107 = NULL,w_107 = NULL;
  t = term_w_44;
  v_107 = t;
  t = term_d_16;
  w_107 = t;
  t = term_y_44;
  t = z_11(v_107, w_107, t);
  t = term_a_45;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_c_45;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_45 = t;
  int g_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_14, b_14, c_14, t);
      LocalPopChoice(g_45);
    }
  else
    {
      t = d_45;
      {
        ATerm k_45 = t;
        int m_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_14, e_14, f_14, t);
            LocalPopChoice(m_45);
          }
        else
          {
            t = k_45;
            t = Option_3_0(g_14, h_14, i_14, t);
          }
      }
    }
  return(t);
}
static ATerm z_11 (ATerm o_39, ATerm p_39, ATerm t)
{
  ATerm x_107 = NULL,y_107 = NULL;
  t = term_h_44;
  x_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_44, o_39, p_39);
  t = lookup_table_0_1(x_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(o_39, p_39, y_107, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_44, o_39, p_39);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL;
      t = term_d_16;
      t = f_0(t);
      e_108 = t;
      t = term_w_45;
      f_108 = t;
      t = term_x_45;
      g_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_45, term_x_45, e_108);
      t = x_11(f_108, g_108, e_108, t);
      _fail(t);
    }
  else
    {
      ATerm j_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_108 = ATgetFirst((ATermList) t);
          d_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_108;
      t = b_0(t);
      t = term_d_16;
      t = d_0(t);
      j_108 = t;
      t = (ATerm) ATinsert(CheckATermList(d_108), j_108);
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm l_108 = NULL;
  l_108 = t;
  if(match_string(t, "-o"))
    {
      t = l_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_108;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm m_108 = NULL,n_108 = NULL;
  m_108 = t;
  t = term_z_45;
  n_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_45, m_108);
  t = z_11(n_108, m_108, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_108);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_c_46;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_14, k_14, l_14, t);
  return(t);
}
static ATerm x_11 (ATerm i_45, ATerm j_45, ATerm h_45, ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL;
  p_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_45, j_45);
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_46 = ATgetArgument(t, 0);
            ATerm h_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_45, j_45);
        t = w_11(i_45, j_45, t);
        LocalPopChoice(e_46);
      }
    else
      {
        t = d_46;
        t = (ATerm) ATempty;
      }
  }
  q_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_45, j_45, (ATerm) ATinsert(CheckATermList(q_108), h_45));
  t = lookup_table_0_1(i_45, t);
  t_108 = t;
  t = (ATerm) ATinsert(CheckATermList(q_108), h_45);
  r_108 = t;
  t = t_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(j_45, r_108, s_108, t);
  t = p_108;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL;
      t = term_d_16;
      t = m_0(t);
      e_109 = t;
      t = term_w_45;
      f_109 = t;
      t = term_x_45;
      g_109 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_45, term_x_45, e_109);
      t = x_11(f_109, g_109, e_109, t);
      _fail(t);
    }
  else
    {
      ATerm k_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_109 = ATgetFirst((ATermList) t);
          b_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_109;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_109 = ATgetFirst((ATermList) t);
          d_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_109;
      t = j_0(t);
      t = c_109;
      t = l_0(t);
      k_109 = t;
      t = (ATerm) ATinsert(CheckATermList(d_109), k_109);
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm m_109 = NULL;
  m_109 = t;
  if(match_string(t, "-i"))
    {
      t = m_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_109;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm n_109 = NULL,o_109 = NULL;
  n_109 = t;
  t = term_v_46;
  o_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_46, n_109);
  t = z_11(o_109, n_109, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_109);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_w_46;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_14, n_14, o_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_16;
  t = whoami_0_0(t);
  p_109 = t;
  t = term_e_16;
  r_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_46), p_109);
  s_109 = t;
  t = SSL_printnl(r_109, s_109);
  t = term_j_16;
  q_109 = t;
  t = SSL_exit(q_109);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_109 = NULL,u_109 = NULL;
  t = term_h_44;
  t_109 = t;
  t = term_y_46;
  u_109 = t;
  t = term_d_47;
  t = w_11(t_109, u_109, t);
  return(t);
}
static ATerm s_11 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm e_47 = t;
  int f_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_42, r_42);
      LocalPopChoice(f_47);
    }
  else
    {
      t = e_47;
      t = SSL_addr(q_42, r_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm t)
{
  ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL;
  w_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_109;
      t = j_140(t);
    }
  else
    {
      ATerm b_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_109 = ATgetFirst((ATermList) t);
          y_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_109;
      t = foldr_2_0(j_140, k_140, t);
      b_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_109, b_110);
      t = k_140(t);
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
  t = term_z_20;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  if(match_cons(t, sym__2))
    {
      h_51 = ATgetArgument(t, 0);
      i_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(h_51, i_51, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_110 = NULL,z_50 = NULL,a_51 = NULL;
  t = times_0_0(t);
  a_51 = t;
  t = SSL_explode_term(a_51);
  if(match_cons(t, sym__2))
    {
      ATerm m_47 = ATgetArgument(t, 0);
      z_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_50;
  t = foldr_2_0(p_14, q_14, t);
  e_110 = t;
  t = SSL_TicksToSeconds(e_110);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_110 = NULL,q_110 = NULL,r_110 = NULL;
  p_110 = t;
  if(match_cons(t, sym__2))
    {
      q_110 = ATgetArgument(t, 0);
      r_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_47 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_110;
        if((q_110 != t))
          {
            _fail(t);
          }
        t = p_110;
        LocalPopChoice(b_48);
      }
    else
      {
        t = u_47;
        t = (ATerm) ATmakeAppl(sym__2, q_110, r_110);
        {
          ATerm c_48 = t;
          int d_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_110, r_110);
              LocalPopChoice(d_48);
            }
          else
            {
              t = c_48;
              t = SSL_gtr(q_110, r_110);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_110, r_110);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_129 (ATerm), ATerm t)
{
  ATerm v_110 = NULL;
  v_110 = t;
  {
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_110 = NULL,y_110 = NULL,z_110 = NULL;
        t = term_h_44;
        y_110 = t;
        t = term_i_44;
        z_110 = t;
        t = term_j_44;
        t = w_11(y_110, z_110, t);
        x_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_110, term_j_16);
        t = geq_0_0(t);
        t = v_110;
        t = b_129(t);
        LocalPopChoice(f_48);
      }
    else
      {
        t = e_48;
        t = v_110;
      }
  }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm b_111 = NULL,c_111 = NULL,e_111 = NULL,f_111 = NULL;
  t = run_time_0_0(t);
  b_111 = t;
  t = term_d_16;
  t = whoami_0_0(t);
  c_111 = t;
  t = term_e_16;
  e_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_48), b_111), term_g_48), c_111);
  f_111 = t;
  t = SSL_printnl(e_111, f_111);
  t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_48), b_111), term_g_48), c_111));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_111 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_20;
  g_111 = t;
  t = SSL_exit(g_111);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm q_111 = NULL,r_111 = NULL;
  r_111 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_111;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_111 = ATgetArgument(t, 0);
          {
            ATerm a_52 = NULL,e_9 = NULL;
            t = SSLgetAnnotations(r_111);
            a_52 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_111);
            e_9 = t;
            t = SSLsetAnnotations(e_9, a_52);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_111;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_149 (ATerm), ATerm t)
{
  ATerm i_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_111 = NULL,k_111 = NULL;
      t = term_h_44;
      j_111 = t;
      t = term_k_48;
      k_111 = t;
      t = term_l_48;
      t = w_11(j_111, k_111, t);
      LocalPopChoice(j_48);
    }
  else
    {
      t = i_48;
      t = fetch_1_0(s_14, t);
    }
  t = k_149(t);
  return(t);
}
static ATerm a_12 (ATerm a_50, ATerm b_50, ATerm c_50, ATerm t)
{
  ATerm t_111 = NULL;
  t = SSL_hashtable_put(c_50, a_50, b_50);
  t_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_111);
  return(t);
}
static ATerm b_12 (ATerm d_50, ATerm e_50, ATerm t)
{
  t = SSL_hashtable_get(e_50, d_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm u_46, ATerm t)
{
  ATerm c_112 = NULL;
  t = table_hashtable_0_0(t);
  c_112 = t;
  {
    ATerm m_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_52 = NULL;
        t = c_112;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_12(u_46, m_52, t);
        LocalPopChoice(n_48);
      }
    else
      {
        t = m_48;
        {
          ATerm z_52 = NULL;
          t = u_46;
          t = table_create_0_0(t);
          t = c_112;
          if(match_cons(t, sym_Hashtable_1))
            {
              z_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_12(u_46, z_52, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm f_112 = NULL;
  t = SSL_hashtable_create(i_50, j_50);
  f_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_112);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,k_112 = NULL,l_112 = NULL;
  g_112 = t;
  t = term_o_48;
  k_112 = t;
  t = term_r_48;
  l_112 = t;
  t = g_112;
  t = new_hashtable_0_2(k_112, l_112, t);
  h_112 = t;
  t = g_112;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(g_112, h_112, i_112, t);
  t = g_112;
  return(t);
}
static ATerm u_11 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm m_112 = NULL;
  t = SSL_hashtable_remove(g_50, f_50);
  m_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_112);
  return(t);
}
static ATerm v_11 (ATerm k_50, ATerm t)
{
  ATerm n_112 = NULL;
  t = SSL_hashtable_destroy(k_50);
  n_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_112);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_112 = NULL;
  t = SSL_table_hashtable();
  o_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_112);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL;
  p_112 = t;
  t = table_hashtable_0_0(t);
  q_112 = t;
  t = lookup_table_0_1(p_112, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(s_112, t);
  t = q_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(p_112, r_112, t);
  t = p_112;
  return(t);
}
ATerm map_1_0 (ATerm x_134 (ATerm), ATerm t)
{
  static ATerm h_113 (ATerm t)
  {
    ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL;
    e_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_113;
      }
    else
      {
        ATerm p_53 = NULL,u_53 = NULL,c_54 = NULL,h_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_113 = ATgetFirst((ATermList) t);
            g_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_113);
        p_53 = t;
        t = f_113;
        t = x_134(t);
        u_53 = t;
        t = g_113;
        t = h_113(t);
        c_54 = t;
        t = (ATerm) ATinsert(CheckATermList(c_54), u_53);
        h_9 = t;
        t = SSLsetAnnotations(h_9, p_53);
      }
    return(t);
  }
  t = h_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm k_113 = NULL,l_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_113 = ATgetFirst((ATermList) t);
      l_113 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_113 = NULL,q_113 = NULL;
        static ATerm t_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_113)), not_null(q_113));
          return(t);
        }
        t = l_113;
        t = h_0(t);
        if(((p_113 != NULL) && (p_113 != t)))
          _fail(t);
        else
          p_113 = t;
        t = k_113;
        t = g_0(t);
        if(((q_113 != NULL) && (q_113 != t)))
          _fail(t);
        else
          q_113 = t;
        t = l_113;
        t = reverse_acc_2_0(g_0, t_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_16;
      t = h_0(t);
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL,f_10 = NULL;
  y_113 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_113);
  w_113 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_113);
  f_10 = t;
  t = SSLsetAnnotations(f_10, w_113);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm a_114 = NULL;
  a_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_114), term_s_48);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_113 = NULL,t_113 = NULL;
  ATerm t_48 = t;
  int u_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_113 = NULL,v_113 = NULL;
      t = term_h_44;
      u_113 = t;
      t = term_y_46;
      v_113 = t;
      t = term_d_47;
      t = w_11(u_113, v_113, t);
      LocalPopChoice(u_48);
    }
  else
    {
      t = t_48;
      t = fetch_1_0(u_14, t);
    }
  t = term_v_48;
  t = echo_0_0(t);
  t = term_w_45;
  s_113 = t;
  t = term_x_45;
  t_113 = t;
  t = term_w_48;
  t = w_11(s_113, t_113, t);
  t = reverse_acc_2_0(_id, v_14, t);
  t = map_1_0(w_14, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL,e_114 = NULL;
  c_114 = t;
  {
    ATerm x_48 = t;
    int y_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_114;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_49 = ATgetFirst((ATermList) t);
                ATerm b_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_114;
          }
        LocalPopChoice(y_48);
      }
    else
      {
        t = x_48;
        t = (ATerm) ATinsert(ATempty, c_114);
      }
  }
  d_114 = t;
  t = term_j_43;
  e_114 = t;
  t = SSL_printnl(e_114, d_114);
  t = c_114;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_114 = NULL,j_114 = NULL;
  t = term_h_44;
  i_114 = t;
  t = term_y_46;
  j_114 = t;
  t = term_d_47;
  t = w_11(i_114, j_114, t);
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
  ATerm k_114 = NULL,l_114 = NULL;
  t = term_c_49;
  k_114 = t;
  t = term_d_16;
  l_114 = t;
  t = term_d_49;
  t = z_11(k_114, l_114, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_e_49;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm m_114 = NULL,n_114 = NULL,o_114 = NULL,p_114 = NULL;
  t = term_c_49;
  o_114 = t;
  t = term_d_16;
  p_114 = t;
  t = term_d_49;
  t = z_11(o_114, p_114, t);
  t = term_f_49;
  m_114 = t;
  t = term_d_16;
  n_114 = t;
  t = term_g_49;
  t = z_11(m_114, n_114, t);
  t = term_h_49;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_j_49;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_14, z_14, a_15, t);
      LocalPopChoice(l_49);
    }
  else
    {
      t = k_49;
      t = Option_3_0(b_15, e_15, f_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_151 (ATerm), ATerm t)
{
  ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL,z_114 = NULL,a_115 = NULL,c_12 = NULL;
  u_114 = t;
  {
    ATerm m_49 = t;
    int n_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_49;
        t = n_151(t);
        LocalPopChoice(n_49);
      }
    else
      {
        t = m_49;
      }
  }
  t = u_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_114 = ATgetFirst((ATermList) t);
      x_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_114);
  v_114 = t;
  t = term_y_46;
  a_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_46, w_114);
  t = z_11(a_115, w_114, t);
  t = x_114;
  {
    static ATerm k_115 (ATerm t)
    {
      ATerm p_49 = t;
      int q_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_49 = t;
          int s_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_115 = NULL;
              d_115 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_115;
              LocalPopChoice(s_49);
            }
          else
            {
              t = r_49;
              t = n_151(t);
              t = Cons_2_0(_id, k_115, t);
            }
          LocalPopChoice(q_49);
        }
      else
        {
          t = p_49;
          {
            ATerm g_115 = NULL,h_115 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_115 = ATgetFirst((ATermList) t);
                h_115 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_115), (ATerm) ATmakeAppl(sym_Undefined_1, g_115));
          }
        }
      return(t);
    }
    t = k_115(t);
  }
  z_114 = t;
  t = (ATerm) ATinsert(CheckATermList(z_114), (ATerm) ATmakeAppl(sym_Program_1, w_114));
  c_12 = t;
  t = SSLsetAnnotations(c_12, v_114);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm x_115 = NULL;
  x_115 = t;
  if(match_string(t, "--help"))
    {
      t = x_115;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_115;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_115;
        }
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm y_115 = NULL,z_115 = NULL;
  t = term_k_48;
  y_115 = t;
  t = term_d_16;
  z_115 = t;
  t = term_t_49;
  t = z_11(y_115, z_115, t);
  t = term_u_49;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_v_49;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_151 (ATerm), ATerm t)
{
  ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL;
  r_115 = t;
  t = term_w_45;
  s_115 = t;
  t = term_x_49;
  t = lookup_table_0_1(s_115, t);
  w_115 = t;
  t = term_x_45;
  t_115 = t;
  t = (ATerm) ATempty;
  u_115 = t;
  t = w_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(t_115, u_115, v_115, t);
  t = r_115;
  {
    static ATerm g_15 (ATerm t)
    {
      ATerm y_49 = t;
      int z_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_151(t);
          LocalPopChoice(z_49);
        }
      else
        {
          t = y_49;
          {
            ATerm h_50 = t;
            int l_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_15, i_15, o_15, t);
                LocalPopChoice(l_50);
              }
            else
              {
                t = h_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_15, t);
  }
  {
    ATerm m_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_116 = NULL;
        k_116 = t;
        {
          ATerm p_50 = t;
          int q_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_54 = NULL;
              t = k_116;
              {
                ATerm r_50 = t;
                int s_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_54 = NULL,s_54 = NULL;
                    t = term_h_44;
                    n_54 = t;
                    t = term_k_48;
                    s_54 = t;
                    t = term_l_48;
                    t = w_11(n_54, s_54, t);
                    LocalPopChoice(s_50);
                  }
                else
                  {
                    t = r_50;
                    t = fetch_1_0(p_15, t);
                  }
              }
              t = k_116;
              t = default_system_usage_0_0(t);
              t = term_z_20;
              m_54 = t;
              t = SSL_exit(m_54);
              LocalPopChoice(q_50);
            }
          else
            {
              t = p_50;
              {
                ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
                t = term_h_44;
                a_55 = t;
                t = term_c_49;
                b_55 = t;
                t = term_t_50;
                t = w_11(a_55, b_55, t);
                t = k_116;
                t = default_system_about_0_0(t);
                t = term_z_20;
                z_54 = t;
                t = SSL_exit(z_54);
              }
            }
        }
        LocalPopChoice(o_50);
      }
    else
      {
        t = m_50;
        {
          ATerm u_50 = t;
          int v_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_116 = NULL,m_116 = NULL,n_116 = NULL;
              static ATerm q_15 (ATerm t)
              {
                ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL,w_12 = NULL;
                q_116 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_116 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_116);
                o_116 = t;
                t = p_116;
                if(((p_115 != NULL) && (p_115 != t)))
                  _fail(t);
                else
                  p_115 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_116);
                w_12 = t;
                t = SSLsetAnnotations(w_12, o_116);
                return(t);
              }
              t = fetch_1_0(q_15, t);
              t = term_e_16;
              m_116 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_115)), term_w_50);
              n_116 = t;
              t = SSL_printnl(m_116, n_116);
              t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_115)), term_w_50));
              t = default_system_usage_0_0(t);
              t = term_j_16;
              l_116 = t;
              t = SSL_exit(l_116);
              LocalPopChoice(v_50);
            }
          else
            {
              t = u_50;
            }
        }
      }
  }
  q_115 = t;
  t = term_w_45;
  t = table_destroy_0_0(t);
  t = q_115;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_149 (ATerm), ATerm n_149 (ATerm), ATerm o_149 (ATerm), ATerm p_149 (ATerm), ATerm t)
{
  ATerm v_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL;
  t = parse_options_1_0(m_149, t);
  v_116 = t;
  t = term_x_50;
  t = table_create_0_0(t);
  t = term_x_50;
  w_116 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_50, term_y_50, v_116);
  t = lookup_table_0_1(w_116, t);
  z_116 = t;
  t = term_y_50;
  x_116 = t;
  t = z_116;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(x_116, v_116, y_116, t);
  t = v_116;
  t = o_149(t);
  {
    ATerm b_51 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_149, t);
        LocalPopChoice(c_51);
      }
    else
      {
        t = b_51;
        {
          ATerm d_51 = t;
          int e_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_149(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_51);
            }
          else
            {
              t = d_51;
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
  ATerm a_117 = NULL,b_117 = NULL;
  t = term_f_51;
  a_117 = t;
  t = term_d_16;
  b_117 = t;
  t = term_g_51;
  t = z_11(a_117, b_117, t);
  t = term_j_51;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_k_51;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm c_117 = NULL,d_117 = NULL,e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL;
  c_117 = t;
  t = term_h_44;
  g_117 = t;
  t = term_y_46;
  h_117 = t;
  t = term_d_47;
  t = w_11(g_117, h_117, t);
  d_117 = t;
  t = term_e_16;
  e_117 = t;
  t = (ATerm) ATinsert(ATempty, d_117);
  f_117 = t;
  t = SSL_printnl(e_117, f_117);
  t = c_117;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_148 (ATerm), ATerm w_148 (ATerm), ATerm x_148 (ATerm), ATerm t)
{
  static ATerm r_15 (ATerm t)
  {
    ATerm l_51 = t;
    int m_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_148(t);
        LocalPopChoice(m_51);
      }
    else
      {
        t = l_51;
        {
          ATerm n_51 = t;
          int o_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(o_51);
            }
          else
            {
              t = n_51;
              {
                ATerm p_51 = t;
                int q_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(q_51);
                  }
                else
                  {
                    t = p_51;
                    {
                      ATerm r_51 = t;
                      int s_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_15, v_15, w_15, t);
                          LocalPopChoice(s_51);
                        }
                      else
                        {
                          t = r_51;
                          {
                            ATerm t_51 = t;
                            int u_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(u_51);
                              }
                            else
                              {
                                t = t_51;
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
    ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL;
    j_117 = t;
    {
      ATerm v_51 = t;
      int w_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_117 != NULL) && (i_117 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_117 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_15, t);
          LocalPopChoice(w_51);
        }
      else
        {
          t = v_51;
          t = term_x_51;
          i_117 = t;
        }
    }
    t = not_null(i_117);
    t = ReadFromFile_0_0(t);
    k_117 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_117, k_117);
    t = apply_strategy_1_0(v_148, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_15, x_148, s_15, t_15, t);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL,r_13 = NULL,q_13 = NULL,p_13 = NULL;
  y_117 = t;
  if(match_cons(t, sym__2))
    {
      m_117 = ATgetArgument(t, 0);
      n_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_117);
  l_117 = t;
  t = n_117;
  if(match_cons(t, sym_Specification_1))
    {
      s_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_117);
  r_117 = t;
  t = s_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_117 = ATgetFirst((ATermList) t);
      v_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_117);
  t_117 = t;
  t = v_117;
  t = Cons_2_0(a_16, b_16, t);
  w_117 = t;
  t = (ATerm) ATinsert(CheckATermList(w_117), u_117);
  p_13 = t;
  t = SSLsetAnnotations(p_13, t_117);
  x_117 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_117);
  q_13 = t;
  t = SSLsetAnnotations(q_13, r_117);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm y_51 = ATgetArgument(t, 0);
      if(((ATgetType(y_51) == AT_LIST) && !(ATisEmpty(y_51))))
        {
          p_117 = ATgetFirst((ATermList) y_51);
          {
            ATerm z_51 = (ATerm) ATgetNext((ATermList) y_51);
            if(((ATgetType(z_51) == AT_LIST) && !(ATisEmpty(z_51))))
              {
                ATerm b_52 = ATgetFirst((ATermList) z_51);
                if(match_cons(b_52, sym_Strategies_1))
                  {
                    q_117 = ATgetArgument(b_52, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm c_52 = (ATerm) ATgetNext((ATermList) z_51);
                  if(((ATgetType(c_52) != AT_LIST) || !(ATisEmpty(c_52))))
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
  t = r_9(p_117, q_117, t);
  o_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_117, o_117);
  r_13 = t;
  t = SSLsetAnnotations(r_13, l_117);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm z_117 = NULL,a_118 = NULL,b_118 = NULL,c_118 = NULL,k_13 = NULL;
  c_118 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_118);
  z_117 = t;
  t = a_118;
  t = needed_defs_0_0(t);
  b_118 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_118);
  k_13 = t;
  t = SSLsetAnnotations(k_13, z_117);
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

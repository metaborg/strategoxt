#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
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
Symbol sym_Hashtable_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_OpDecl_2;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_SortList_1;
Symbol sym_SortListTl_2;
Symbol sym_SortTuple_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Op_2;
Symbol sym_Anno_2;
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
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_DynRuleIntersectFix_2;
Symbol sym_DynRuleUnionFix_2;
Symbol sym_DynRuleIntersect_3;
Symbol sym_DynRuleUnion_3;
Symbol sym_RDecNoArgs_1;
Symbol sym_RDec_2;
Symbol sym_RDecT_3;
Symbol sym_CallNoArgs_1;
Symbol sym_RChoice_2;
Symbol sym_CondChoice_3;
Symbol sym_SwitchChoiceNoOtherwise_2;
Symbol sym_SwitchChoice_3;
Symbol sym_AM_2;
Symbol sym_ParenStrat_1;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Where_1;
Symbol sym_PrimNoArgs_1;
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
Symbol sym_ListCongNoTail_1;
Symbol sym_ListCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
static void init_module_constructors (void)
{
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortList_1 = ATmakeSymbol("SortList", 1, ATfalse);
  ATprotectSymbol(sym_SortList_1);
  sym_SortListTl_2 = ATmakeSymbol("SortListTl", 2, ATfalse);
  ATprotectSymbol(sym_SortListTl_2);
  sym_SortTuple_1 = ATmakeSymbol("SortTuple", 1, ATfalse);
  ATprotectSymbol(sym_SortTuple_1);
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
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_DynRuleIntersectFix_2 = ATmakeSymbol("DynRuleIntersectFix", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersectFix_2);
  sym_DynRuleUnionFix_2 = ATmakeSymbol("DynRuleUnionFix", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleUnionFix_2);
  sym_DynRuleIntersect_3 = ATmakeSymbol("DynRuleIntersect", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersect_3);
  sym_DynRuleUnion_3 = ATmakeSymbol("DynRuleUnion", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleUnion_3);
  sym_RDecNoArgs_1 = ATmakeSymbol("RDecNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_RDecNoArgs_1);
  sym_RDec_2 = ATmakeSymbol("RDec", 2, ATfalse);
  ATprotectSymbol(sym_RDec_2);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_CondChoice_3 = ATmakeSymbol("CondChoice", 3, ATfalse);
  ATprotectSymbol(sym_CondChoice_3);
  sym_SwitchChoiceNoOtherwise_2 = ATmakeSymbol("SwitchChoiceNoOtherwise", 2, ATfalse);
  ATprotectSymbol(sym_SwitchChoiceNoOtherwise_2);
  sym_SwitchChoice_3 = ATmakeSymbol("SwitchChoice", 3, ATfalse);
  ATprotectSymbol(sym_SwitchChoice_3);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
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
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
}
ATerm term_s_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_e_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_e_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_s_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_e_8;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_m_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_l_6;
ATerm term_g_6;
ATerm term_w_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_n_5;
ATerm term_l_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Op_2, term_b_7, (ATerm) ATempty);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Sort_2, term_b_7, (ATerm) ATempty);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_7);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_7);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Call_2, term_o_9, (ATerm) ATempty);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-union", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-union", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-intersect", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-intersect", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Call_2, term_s_10, (ATerm) ATempty);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Call_2, term_v_7, (ATerm) ATempty);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_l_5);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_n_14);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_s_15);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_b_14);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_l_5);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_l_5);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_l_5);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, (ATerm) ATempty);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_o_17);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_l_5);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm g_115 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm mk_rulenames_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm s_105 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t);
static ATerm a_30 (ATerm y_14, ATerm z_14, ATerm t);
static ATerm b_30 (ATerm m_15, ATerm r_15, ATerm t);
static ATerm c_30 (ATerm b_16, ATerm c_16, ATerm d_16, ATerm e_16, ATerm t);
static ATerm f_30 (ATerm n_16, ATerm p_16, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm e_98 (ATerm), ATerm t);
static ATerm x_5 (ATerm a_43, ATerm b_43, ATerm t);
static ATerm y_5 (ATerm v_27, ATerm w_27, ATerm t);
static ATerm a_6 (ATerm h_104 (ATerm), ATerm v_197, ATerm b_28, ATerm t);
static ATerm z_5 (ATerm r_27, ATerm s_27, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm d_123 (ATerm), ATerm t);
static ATerm q_34 (ATerm j_34, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_6 (ATerm x_27, ATerm t);
static ATerm c_6 (ATerm t_41, ATerm u_41, ATerm t);
static ATerm d_6 (ATerm c_43, ATerm d_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_36 (ATerm f_35, ATerm t);
static ATerm h_36 (ATerm j_35, ATerm k_35, ATerm l_35, ATerm t);
static ATerm i_36 (ATerm t_35, ATerm u_35, ATerm v_35, ATerm t);
static ATerm e_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_105 (ATerm), ATerm t);
static ATerm j_6 (ATerm r_67, ATerm s_67, ATerm t);
ATerm if_verbose2_1_0 (ATerm m_121 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_6 (ATerm d_61, ATerm e_61, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_6 (ATerm y_65, ATerm z_65, ATerm x_65, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm f_6 (ATerm w_45, ATerm x_45, ATerm t);
ATerm foldr_2_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_121 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm need_help_1_0 (ATerm b_124 (ATerm), ATerm t);
static ATerm n_6 (ATerm q_70, ATerm r_70, ATerm s_70, ATerm t);
static ATerm o_6 (ATerm t_70, ATerm u_70, ATerm t);
ATerm lookup_table_0_1 (ATerm k_67, ATerm t);
ATerm new_hashtable_0_2 (ATerm y_70, ATerm z_70, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm h_6 (ATerm v_70, ATerm w_70, ATerm t);
static ATerm i_6 (ATerm a_71, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_126 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm parse_options_1_0 (ATerm d_126 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm iowrap_3_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm stratego_desugar_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,i_0 = NULL,k_0 = NULL,o_0 = NULL;
  c_0 = t;
  t = term_l_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_n_5;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_5), e_0), term_p_5);
  o_0 = t;
  t = SSL_printnl(k_0, o_0);
  t = term_r_5;
  i_0 = t;
  t = SSL_exit(i_0);
  t = c_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm g_115 (ATerm), ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,j_1 = NULL;
    ATerm s_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_115(t);
        LocalPopChoice(v_5);
      }
    else
      {
        t = s_5;
      }
    j_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_1 = ATgetFirst((ATermList) t);
        i_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_0 = NULL,w_0 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(j_1);
          r_0 = t;
          t = i_1;
          t = l_1(t);
          w_0 = t;
          t = (ATerm) ATinsert(CheckATermList(w_0), g_1);
          n_0 = t;
          t = SSLsetAnnotations(n_0, r_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_1;
      }
    return(t);
  }
  t = l_1(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_1 = ATgetFirst((ATermList) t);
      y_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = y_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_1 = ATgetFirst((ATermList) t);
      a_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_1;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(a_2), term_w_5);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(a_2), term_g_6);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(a_2), term_l_6);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(a_2), term_p_6);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(a_2), term_q_6);
                }
            }
        }
    }
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm d_9 = NULL,f_9 = NULL,g_9 = NULL,i_9 = NULL;
  f_9 = t;
  if(match_cons(t, sym_Str_1))
    {
      g_9 = ATgetArgument(t, 0);
      {
        ATerm l_9 = NULL,t_1 = NULL,u_1 = NULL,q_1 = NULL;
        t = SSL_explode_string(g_9);
        t = unquote_chars_2_0(a_0, p_0, t);
        q_1 = t;
        t = SSL_implode_string(q_1);
        u_1 = t;
        t = SSL_explode_string(u_1);
        t = unescape_chars_1_0(q_0, t);
        t_1 = t;
        t = SSL_implode_string(t_1);
        l_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, l_9);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          g_9 = ATgetArgument(t, 0);
          {
            ATerm j_2 = NULL;
            t = SSL_string_to_real(g_9);
            j_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, j_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              g_9 = ATgetArgument(t, 0);
              {
                ATerm p_2 = NULL;
                t = SSL_string_to_int(g_9);
                p_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, p_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  g_9 = ATgetArgument(t, 0);
                  i_9 = ATgetArgument(t, 1);
                  d_9 = ATgetArgument(t, 2);
                  t = SSL_is_string(d_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, g_9, i_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_9), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      g_9 = ATgetArgument(t, 0);
                      {
                        ATerm w_3 = NULL,z_3 = NULL,a_4 = NULL,y_0 = NULL;
                        t = SSLgetAnnotations(f_9);
                        w_3 = t;
                        t = SSL_explode_string(g_9);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(s_6) != AT_INT) || (ATgetInt((ATermInt) s_6) != 39)))
                              _fail(t);
                            z_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(z_3);
                        a_4 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_4);
                        y_0 = t;
                        t = SSLsetAnnotations(y_0, w_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          g_9 = ATgetArgument(t, 0);
                          i_9 = ATgetArgument(t, 1);
                          d_9 = ATgetArgument(t, 2);
                          {
                            ATerm u_4 = NULL,d_5 = NULL,e_5 = NULL,z_0 = NULL;
                            t = SSLgetAnnotations(f_9);
                            u_4 = t;
                            t = SSL_explode_string(g_9);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm u_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(u_6) != AT_INT) || (ATgetInt((ATermInt) u_6) != 39)))
                                  _fail(t);
                                d_5 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(d_5);
                            e_5 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, e_5, i_9, d_9);
                            z_0 = t;
                            t = SSLsetAnnotations(z_0, u_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              g_9 = ATgetArgument(t, 0);
                              i_9 = ATgetArgument(t, 1);
                              d_9 = ATgetArgument(t, 2);
                              {
                                ATerm t_5 = NULL,r_6 = NULL,t_6 = NULL,a_1 = NULL;
                                t = SSLgetAnnotations(f_9);
                                t_5 = t;
                                t = SSL_explode_string(g_9);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm v_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(v_6) != AT_INT) || (ATgetInt((ATermInt) v_6) != 39)))
                                      _fail(t);
                                    r_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(r_6);
                                t_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, t_6, i_9, d_9);
                                a_1 = t;
                                t = SSLsetAnnotations(a_1, t_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  g_9 = ATgetArgument(t, 0);
                                  i_9 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_7 = NULL,g_8 = NULL,h_8 = NULL,b_1 = NULL;
                                    t = SSLgetAnnotations(f_9);
                                    h_7 = t;
                                    t = SSL_explode_string(g_9);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm w_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(w_6) != AT_INT) || (ATgetInt((ATermInt) w_6) != 39)))
                                          _fail(t);
                                        g_8 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(g_8);
                                    h_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, h_8, i_9);
                                    b_1 = t;
                                    t = SSLsetAnnotations(b_1, h_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      g_9 = ATgetArgument(t, 0);
                                      {
                                        ATerm y_8 = NULL,e_9 = NULL,h_9 = NULL,c_1 = NULL;
                                        t = SSLgetAnnotations(f_9);
                                        y_8 = t;
                                        t = SSL_explode_string(g_9);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm x_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(x_6) != AT_INT) || (ATgetInt((ATermInt) x_6) != 39)))
                                              _fail(t);
                                            e_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(e_9);
                                        h_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_9);
                                        c_1 = t;
                                        t = SSLsetAnnotations(c_1, y_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          g_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm b_10 = NULL,g_10 = NULL,k_10 = NULL,d_1 = NULL;
                                            t = SSLgetAnnotations(f_9);
                                            b_10 = t;
                                            t = SSL_explode_string(g_9);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm y_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(y_6) != AT_INT) || (ATgetInt((ATermInt) y_6) != 39)))
                                                  _fail(t);
                                                g_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(g_10);
                                            k_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, k_10);
                                            d_1 = t;
                                            t = SSLsetAnnotations(d_1, b_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              g_9 = ATgetArgument(t, 0);
                                              i_9 = ATgetArgument(t, 1);
                                              {
                                                ATerm v_10 = NULL,g_11 = NULL,h_11 = NULL,f_1 = NULL;
                                                t = SSLgetAnnotations(f_9);
                                                v_10 = t;
                                                t = SSL_explode_string(g_9);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm z_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(z_6) != AT_INT) || (ATgetInt((ATermInt) z_6) != 39)))
                                                      _fail(t);
                                                    g_11 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(g_11);
                                                h_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, h_11, i_9);
                                                f_1 = t;
                                                t = SSLsetAnnotations(f_1, v_10);
                                              }
                                            }
                                          else
                                            {
                                              ATerm c_12 = NULL,j_12 = NULL,k_12 = NULL,m_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  g_9 = ATgetArgument(t, 0);
                                                  i_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(f_9);
                                              c_12 = t;
                                              t = SSL_explode_string(g_9);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm a_7 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(a_7) != AT_INT) || (ATgetInt((ATermInt) a_7) != 39)))
                                                    _fail(t);
                                                  j_12 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(j_12);
                                              k_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, k_12, i_9);
                                              m_1 = t;
                                              t = SSLsetAnnotations(m_1, c_12);
                                            }
                                        }
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm foldr_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,g_13 = NULL;
  c_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_13;
      t = r_111(t);
    }
  else
    {
      ATerm m_13 = NULL,n_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_13 = ATgetFirst((ATermList) t);
          g_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_13;
      t = t_111(t);
      m_13 = t;
      t = g_13;
      t = foldr_3_0(r_111, s_111, t_111, t);
      n_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_13, n_13);
      t = s_111(t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm q_13 = NULL,s_13 = NULL,e_14 = NULL;
  q_13 = t;
  t = SSL_explode_term(q_13);
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_7 = ATgetArgument(t, 1);
        if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
          {
            s_13 = ATgetFirst((ATermList) e_7);
            {
              ATerm f_7 = (ATerm) ATgetNext((ATermList) e_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(q_13);
  if(match_cons(t, sym__2))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_7 = ATgetArgument(t, 1);
        if(((ATgetType(i_7) == AT_LIST) && !(ATisEmpty(i_7))))
          {
            ATerm j_7 = ATgetFirst((ATermList) i_7);
            ATerm k_7 = (ATerm) ATgetNext((ATermList) i_7);
            if(((ATgetType(k_7) == AT_LIST) && !(ATisEmpty(k_7))))
              {
                e_14 = ATgetFirst((ATermList) k_7);
                {
                  ATerm l_7 = (ATerm) ATgetNext((ATermList) k_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, e_14), s_13));
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, t_13);
  return(t);
}
ATerm mk_rulenames_0_0 (ATerm t)
{
  t = foldr_3_0(s_0, t_0, u_0, t);
  return(t);
}
ATerm at_last_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  static ATerm z_11 (ATerm t)
  {
    ATerm s_11 = NULL,v_11 = NULL,y_11 = NULL;
    s_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_11 = ATgetFirst((ATermList) t);
        y_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_7 = t;
      int o_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_13 = NULL,f_3 = NULL;
          t = SSLgetAnnotations(s_11);
          b_13 = t;
          t = y_11;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(y_11), v_11);
          f_3 = t;
          t = SSLsetAnnotations(f_3, b_13);
          t = s_105(t);
          LocalPopChoice(o_7);
        }
      else
        {
          t = n_7;
          {
            ATerm w_13 = NULL,z_13 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(s_11);
            w_13 = t;
            t = y_11;
            t = z_11(t);
            z_13 = t;
            t = (ATerm) ATinsert(CheckATermList(z_13), v_11);
            h_3 = t;
            t = SSLsetAnnotations(h_3, w_13);
          }
        }
    }
    return(t);
  }
  t = z_11(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_12 = ATgetFirst((ATermList) t);
      h_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_12;
    }
  else
    {
      t = h_12;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm w_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_7 = ATgetFirst((ATermList) t);
      w_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_12;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,t_12 = NULL,v_12 = NULL;
  r_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_12 = ATgetFirst((ATermList) t);
      {
        ATerm q_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_12;
  t = r_114(t);
  t = r_12;
  t = last_0_0(t);
  t = s_114(t);
  t = r_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_7 = ATgetFirst((ATermList) t);
      t_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_12;
  t = at_last_1_0(v_0, t);
  return(t);
}
static ATerm a_30 (ATerm y_14, ATerm z_14, ATerm t)
{
  t = y_14;
  {
    ATerm s_7 = t;
    if((PushChoice() == 0))
      {
        ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,l_15 = NULL,l_3 = NULL;
        l_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_15 = ATgetFirst((ATermList) t);
            f_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_15);
        d_15 = t;
        t = f_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_15), e_15);
        l_3 = t;
        t = SSLsetAnnotations(l_3, d_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_7, y_14);
  return(t);
}
static ATerm b_30 (ATerm m_15, ATerm r_15, ATerm t)
{
  t = m_15;
  {
    ATerm u_7 = t;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL,n_3 = NULL;
        a_16 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_15 = ATgetFirst((ATermList) t);
            z_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_16);
        t_15 = t;
        t = z_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_15), x_15);
        n_3 = t;
        t = SSLsetAnnotations(n_3, t_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_7, m_15);
  return(t);
}
static ATerm c_30 (ATerm b_16, ATerm c_16, ATerm d_16, ATerm e_16, ATerm t)
{
  ATerm i_16 = NULL,m_16 = NULL;
  t = SSL_explode_string(b_16);
  t = unquote_chars_2_0(x_0, e_1, t);
  m_16 = t;
  t = SSL_implode_string(m_16);
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_16, c_16, d_16);
  return(t);
}
static ATerm f_30 (ATerm n_16, ATerm p_16, ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  t = SSL_explode_string(n_16);
  t = unquote_chars_2_0(h_1, k_1, t);
  s_16 = t;
  t = SSL_implode_string(s_16);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, r_16, (ATerm) ATempty);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm h_18 = NULL,k_18 = NULL,g_14 = NULL;
  h_18 = t;
  t = SSL_explode_term(h_18);
  if(match_cons(t, sym__2))
    {
      ATerm w_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_7 = ATgetArgument(t, 1);
        if(((ATgetType(x_7) == AT_LIST) && !(ATisEmpty(x_7))))
          {
            k_18 = ATgetFirst((ATermList) x_7);
            {
              ATerm y_7 = (ATerm) ATgetNext((ATermList) x_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(h_18);
  if(match_cons(t, sym__2))
    {
      ATerm z_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_8 = ATgetArgument(t, 1);
        if(((ATgetType(a_8) == AT_LIST) && !(ATisEmpty(a_8))))
          {
            ATerm b_8 = ATgetFirst((ATermList) a_8);
            ATerm c_8 = (ATerm) ATgetNext((ATermList) a_8);
            if(((ATgetType(c_8) == AT_LIST) && !(ATisEmpty(c_8))))
              {
                g_14 = ATgetFirst((ATermList) c_8);
                {
                  ATerm d_8 = (ATerm) ATgetNext((ATermList) c_8);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, g_14), k_18));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_e_8;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,v_14 = NULL;
  y_19 = t;
  t = SSL_explode_term(y_19);
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_8 = ATgetArgument(t, 1);
        if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
          {
            z_19 = ATgetFirst((ATermList) i_8);
            {
              ATerm j_8 = (ATerm) ATgetNext((ATermList) i_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(y_19);
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
          {
            ATerm m_8 = ATgetFirst((ATermList) l_8);
            ATerm n_8 = (ATerm) ATgetNext((ATermList) l_8);
            if(((ATgetType(n_8) == AT_LIST) && !(ATisEmpty(n_8))))
              {
                v_14 = ATgetFirst((ATermList) n_8);
                {
                  ATerm o_8 = (ATerm) ATgetNext((ATermList) n_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, v_14), z_19));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm i_20 = NULL,m_20 = NULL,b_15 = NULL;
  i_20 = t;
  t = SSL_explode_term(i_20);
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_8 = ATgetArgument(t, 1);
        if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
          {
            m_20 = ATgetFirst((ATermList) q_8);
            {
              ATerm r_8 = (ATerm) ATgetNext((ATermList) q_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(i_20);
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_8 = ATgetArgument(t, 1);
        if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
          {
            ATerm u_8 = ATgetFirst((ATermList) t_8);
            ATerm v_8 = (ATerm) ATgetNext((ATermList) t_8);
            if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
              {
                b_15 = ATgetFirst((ATermList) v_8);
                {
                  ATerm w_8 = (ATerm) ATgetNext((ATermList) v_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, b_15), m_20));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_e_8;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,g_15 = NULL;
  p_20 = t;
  t = SSL_explode_term(p_20);
  if(match_cons(t, sym__2))
    {
      ATerm x_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_8 = ATgetArgument(t, 1);
        if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
          {
            q_20 = ATgetFirst((ATermList) z_8);
            {
              ATerm a_9 = (ATerm) ATgetNext((ATermList) z_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_20);
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_9 = ATgetArgument(t, 1);
        if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
          {
            ATerm j_9 = ATgetFirst((ATermList) c_9);
            ATerm k_9 = (ATerm) ATgetNext((ATermList) c_9);
            if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
              {
                g_15 = ATgetFirst((ATermList) k_9);
                {
                  ATerm m_9 = (ATerm) ATgetNext((ATermList) k_9);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, g_15), q_20));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm i_21 = NULL,l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      i_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, l_21), i_21));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, p_21), o_21));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, j_26), i_26));
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm m_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym__2))
    {
      m_26 = ATgetArgument(t, 0);
      p_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, p_26), m_26));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm t_16 = NULL,c_17 = NULL,e_17 = NULL,f_17 = NULL,i_17 = NULL,j_17 = NULL,p_17 = NULL,q_17 = NULL;
  j_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
      {
        ATerm v_17 = NULL;
        t = q_17;
        t = foldr_2_0(n_1, o_1, t);
        v_17 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, p_17, v_17);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          p_17 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, p_17, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              p_17 = ATgetArgument(t, 0);
              {
                ATerm q_14 = NULL;
                t = p_17;
                {
                  ATerm q_9 = t;
                  int r_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_s_9;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_q_6;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_p_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_l_6;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_t_9;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(r_9);
                    }
                  else
                    {
                      t = q_9;
                      {
                        ATerm s_14 = NULL;
                        t = SSL_explode_string(p_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm u_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(u_9) != AT_INT) || (ATgetInt((ATermInt) u_9) != 39)))
                              _fail(t);
                            {
                              ATerm v_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
                                {
                                  s_14 = ATgetFirst((ATermList) v_9);
                                  {
                                    ATerm w_9 = (ATerm) ATgetNext((ATermList) v_9);
                                    if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
                                      {
                                        ATerm x_9 = ATgetFirst((ATermList) w_9);
                                        if(((ATgetType(x_9) != AT_INT) || (ATgetInt((ATermInt) x_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm y_9 = (ATerm) ATgetNext((ATermList) w_9);
                                          if(((ATgetType(y_9) != AT_LIST) || !(ATisEmpty(y_9))))
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
                        t = s_14;
                      }
                    }
                }
                q_14 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, q_14);
              }
            }
          else
            {
              if(match_cons(t, sym_DynRuleUnion_3))
                {
                  p_17 = ATgetArgument(t, 0);
                  q_17 = ATgetArgument(t, 1);
                  i_17 = ATgetArgument(t, 2);
                  {
                    ATerm y_18 = NULL;
                    t = q_17;
                    t = mk_rulenames_0_0(t);
                    y_18 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_a_10, (ATerm)ATinsert(ATinsert(ATempty, i_17), p_17), (ATerm) ATinsert(ATempty, y_18));
                  }
                }
              else
                {
                  if(match_cons(t, sym_DynRuleUnionFix_2))
                    {
                      p_17 = ATgetArgument(t, 0);
                      q_17 = ATgetArgument(t, 1);
                      {
                        ATerm h_19 = NULL;
                        t = p_17;
                        t = mk_rulenames_0_0(t);
                        h_19 = t;
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_10, (ATerm)ATinsert(ATempty, q_17), (ATerm) ATinsert(ATempty, h_19));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynRuleIntersect_3))
                        {
                          p_17 = ATgetArgument(t, 0);
                          q_17 = ATgetArgument(t, 1);
                          i_17 = ATgetArgument(t, 2);
                          {
                            ATerm o_19 = NULL;
                            t = q_17;
                            t = mk_rulenames_0_0(t);
                            o_19 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_10, (ATerm)ATinsert(ATinsert(ATempty, i_17), p_17), (ATerm) ATinsert(ATempty, o_19));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleIntersectFix_2))
                            {
                              p_17 = ATgetArgument(t, 0);
                              q_17 = ATgetArgument(t, 1);
                              {
                                ATerm r_19 = NULL;
                                t = p_17;
                                t = mk_rulenames_0_0(t);
                                r_19 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_10, (ATerm)ATinsert(ATempty, q_17), (ATerm) ATinsert(ATempty, r_19));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SortTuple_1))
                                {
                                  p_17 = ATgetArgument(t, 0);
                                  {
                                    ATerm v_19 = NULL;
                                    t = p_17;
                                    t = foldr_2_0(p_1, r_1, t);
                                    v_19 = t;
                                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_j_10, (ATerm) ATinsert(ATempty, v_19));
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_SortListTl_2))
                                    {
                                      p_17 = ATgetArgument(t, 0);
                                      q_17 = ATgetArgument(t, 1);
                                      {
                                        static ATerm s_1 (ATerm t)
                                        {
                                          t = q_17;
                                          return(t);
                                        }
                                        t = p_17;
                                        t = foldr_2_0(s_1, v_1, t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SortList_1))
                                        {
                                          p_17 = ATgetArgument(t, 0);
                                          t = p_17;
                                          t = foldr_2_0(w_1, b_2, t);
                                        }
                                      else
                                        {
                                          ATerm l_10 = t;
                                          int m_10 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Con4_4))
                                                {
                                                  p_17 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm n_10 = ATgetArgument(t, 1);
                                                  }
                                                  i_17 = ATgetArgument(t, 2);
                                                  t_16 = ATgetArgument(t, 3);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(m_10);
                                              t = (ATerm) ATmakeAppl(sym_Con_3, p_17, i_17, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_16), (ATerm) ATempty));
                                            }
                                          else
                                            {
                                              t = l_10;
                                              {
                                                ATerm o_10 = t;
                                                int p_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Con3_3))
                                                      {
                                                        p_17 = ATgetArgument(t, 0);
                                                        {
                                                          ATerm q_10 = ATgetArgument(t, 1);
                                                        }
                                                        i_17 = ATgetArgument(t, 2);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_10);
                                                    t = (ATerm) ATmakeAppl(sym_Con_3, p_17, i_17, term_t_10);
                                                  }
                                                else
                                                  {
                                                    t = o_10;
                                                    if(match_cons(t, sym_Con1_2))
                                                      {
                                                        p_17 = ATgetArgument(t, 0);
                                                        q_17 = ATgetArgument(t, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Con_3, p_17, q_17, term_t_10);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ListTail_2))
                                                          {
                                                            p_17 = ATgetArgument(t, 0);
                                                            q_17 = ATgetArgument(t, 1);
                                                            {
                                                              static ATerm c_2 (ATerm t)
                                                              {
                                                                t = q_17;
                                                                return(t);
                                                              }
                                                              t = p_17;
                                                              t = foldr_2_0(c_2, d_2, t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_List_1))
                                                              {
                                                                p_17 = ATgetArgument(t, 0);
                                                                t = p_17;
                                                                t = foldr_2_0(e_2, f_2, t);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_Tuple_1))
                                                                  {
                                                                    p_17 = ATgetArgument(t, 0);
                                                                    t = p_17;
                                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                      {
                                                                        c_17 = ATgetFirst((ATermList) t);
                                                                        e_17 = (ATerm) ATgetNext((ATermList) t);
                                                                        t = e_17;
                                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                          {
                                                                            ATerm u_10 = t;
                                                                            int w_10 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = a_30(p_17, j_17, t);
                                                                                LocalPopChoice(w_10);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_10;
                                                                                t = c_17;
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            t = a_30(p_17, j_17, t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_30(p_17, j_17, t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_CharCong_1))
                                                                      {
                                                                        p_17 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, p_17));
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_RealCong_1))
                                                                          {
                                                                            p_17 = ATgetArgument(t, 0);
                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, p_17));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_IntCong_1))
                                                                              {
                                                                                p_17 = ATgetArgument(t, 0);
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, p_17));
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_StrCong_1))
                                                                                  {
                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, p_17));
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                                      {
                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_17), (ATerm) ATempty);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ModCong_2))
                                                                                          {
                                                                                            p_17 = ATgetArgument(t, 0);
                                                                                            q_17 = ATgetArgument(t, 1);
                                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_17), q_17);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_ListCong_2))
                                                                                              {
                                                                                                p_17 = ATgetArgument(t, 0);
                                                                                                q_17 = ATgetArgument(t, 1);
                                                                                                {
                                                                                                  static ATerm g_2 (ATerm t)
                                                                                                  {
                                                                                                    t = q_17;
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = p_17;
                                                                                                  t = foldr_2_0(g_2, h_2, t);
                                                                                                }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                                  {
                                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                                    t = p_17;
                                                                                                    t = foldr_2_0(i_2, k_2, t);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                                      {
                                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                                        q_17 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_v_7, (ATerm) ATinsert(CheckATermList(q_17), p_17));
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                                          {
                                                                                                            p_17 = ATgetArgument(t, 0);
                                                                                                            t = p_17;
                                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                              {
                                                                                                                c_17 = ATgetFirst((ATermList) t);
                                                                                                                e_17 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                t = e_17;
                                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                  {
                                                                                                                    ATerm x_10 = t;
                                                                                                                    int y_10 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = b_30(p_17, j_17, t);
                                                                                                                        LocalPopChoice(y_10);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = x_10;
                                                                                                                        t = c_17;
                                                                                                                      }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = b_30(p_17, j_17, t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = b_30(p_17, j_17, t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                                              {
                                                                                                                t = term_z_10;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                                  {
                                                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                                                    q_17 = ATgetArgument(t, 1);
                                                                                                                    t = q_17;
                                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                                      {
                                                                                                                        f_17 = ATgetArgument(t, 0);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_b_11, (ATerm) ATinsert(ATinsert(ATempty, f_17), p_17));
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                                      {
                                                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                                                        t = p_17;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                                          {
                                                                                                                            p_17 = ATgetArgument(t, 0);
                                                                                                                            q_17 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, p_17, q_17, term_c_11);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                                              {
                                                                                                                                p_17 = ATgetArgument(t, 0);
                                                                                                                                q_17 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, p_17, q_17, term_c_11);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                                  {
                                                                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                                                                    q_17 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, p_17, (ATerm)ATempty, q_17);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SwitchChoice_3))
                                                                                                                                      {
                                                                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                                                                        q_17 = ATgetArgument(t, 1);
                                                                                                                                        i_17 = ATgetArgument(t, 2);
                                                                                                                                        {
                                                                                                                                          ATerm d_28 = NULL,g_28 = NULL,h_28 = NULL;
                                                                                                                                          t = j_17;
                                                                                                                                          t = new_0_0(t);
                                                                                                                                          h_28 = t;
                                                                                                                                          t = (ATerm) ATmakeAppl(sym_Var_1, h_28);
                                                                                                                                          t = new_0_0(t);
                                                                                                                                          g_28 = t;
                                                                                                                                          t = q_17;
                                                                                                                                          {
                                                                                                                                            static ATerm l_2 (ATerm t)
                                                                                                                                            {
                                                                                                                                              t = i_17;
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            static ATerm m_2 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
                                                                                                                                              if(match_cons(t, sym__2))
                                                                                                                                                {
                                                                                                                                                  ATerm d_11 = ATgetArgument(t, 0);
                                                                                                                                                  if(match_cons(d_11, sym__2))
                                                                                                                                                    {
                                                                                                                                                      i_28 = ATgetArgument(d_11, 0);
                                                                                                                                                      j_28 = ATgetArgument(d_11, 1);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  k_28 = ATgetArgument(t, 1);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, i_28, (ATerm) ATmakeAppl(sym_Var_1, g_28))), (ATerm)ATmakeAppl(sym_BA_2, j_28, (ATerm) ATmakeAppl(sym_Var_1, h_28)), (ATerm) ATmakeAppl(sym_BA_2, k_28, (ATerm) ATmakeAppl(sym_Var_1, h_28)));
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = foldr_2_0(l_2, m_2, t);
                                                                                                                                          }
                                                                                                                                          d_28 = t;
                                                                                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, p_17, (ATerm) ATmakeAppl(sym_Var_1, g_28)), d_28));
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SwitchChoiceNoOtherwise_2))
                                                                                                                                          {
                                                                                                                                            p_17 = ATgetArgument(t, 0);
                                                                                                                                            q_17 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SwitchChoice_3, p_17, q_17, term_e_11);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_CondChoice_3))
                                                                                                                                              {
                                                                                                                                                p_17 = ATgetArgument(t, 0);
                                                                                                                                                q_17 = ATgetArgument(t, 1);
                                                                                                                                                i_17 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, p_17), q_17, i_17);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                                                                  {
                                                                                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                                                                                    q_17 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_17, p_17);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_PrimT_3))
                                                                                                                                                      {
                                                                                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                                                                                        q_17 = ATgetArgument(t, 1);
                                                                                                                                                        i_17 = ATgetArgument(t, 2);
                                                                                                                                                        t = c_30(p_17, q_17, i_17, j_17, t);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                                                          {
                                                                                                                                                            p_17 = ATgetArgument(t, 0);
                                                                                                                                                            t = f_30(p_17, j_17, t);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                                              {
                                                                                                                                                                p_17 = ATgetArgument(t, 0);
                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Call_2, p_17, (ATerm) ATempty);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                                                  {
                                                                                                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                                                                                                    q_17 = ATgetArgument(t, 1);
                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDef_3, p_17, (ATerm)ATempty, q_17);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                                                      {
                                                                                                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                                                                                                        q_17 = ATgetArgument(t, 1);
                                                                                                                                                                        i_17 = ATgetArgument(t, 2);
                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, p_17, q_17, i_17);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                                                          {
                                                                                                                                                                            p_17 = ATgetArgument(t, 0);
                                                                                                                                                                            q_17 = ATgetArgument(t, 1);
                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDef_3, p_17, (ATerm)ATempty, q_17);
                                                                                                                                                                          }
                                                                                                                                                                        else
                                                                                                                                                                          {
                                                                                                                                                                            if(match_cons(t, sym_RDec_2))
                                                                                                                                                                              {
                                                                                                                                                                                p_17 = ATgetArgument(t, 0);
                                                                                                                                                                                q_17 = ATgetArgument(t, 1);
                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDecT_3, p_17, q_17, (ATerm) ATempty);
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_RDecNoArgs_1))
                                                                                                                                                                                  {
                                                                                                                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDec_2, p_17, (ATerm) ATempty);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  {
                                                                                                                                                                                    if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                                                      {
                                                                                                                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                                                                                                                        q_17 = ATgetArgument(t, 1);
                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, p_17, (ATerm)ATempty, q_17);
                                                                                                                                                                                      }
                                                                                                                                                                                    else
                                                                                                                                                                                      {
                                                                                                                                                                                        if(match_cons(t, sym_Module_2))
                                                                                                                                                                                          {
                                                                                                                                                                                            ATerm f_11 = ATgetArgument(t, 0);
                                                                                                                                                                                            q_17 = ATgetArgument(t, 1);
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Specification_1, q_17);
                                                                                                                                                                                      }
                                                                                                                                                                                  }
                                                                                                                                                                              }
                                                                                                                                                                          }
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                            }
                                        }
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
ATerm repeat_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t)
{
  static ATerm i_30 (ATerm t)
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_97(t);
        t = i_30(t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = f_97(t);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm topdown_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t)
  {
    t = topdown_1_0(e_98, t);
    return(t);
  }
  t = e_98(t);
  t = SRTS_all(n_2, t);
  return(t);
}
static ATerm x_5 (ATerm a_43, ATerm b_43, ATerm t)
{
  ATerm j_30 = NULL;
  t = SSL_fputc(a_43, b_43);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_30);
  return(t);
}
static ATerm y_5 (ATerm v_27, ATerm w_27, ATerm t)
{
  ATerm k_30 = NULL;
  t = SSL_write_term_to_stream_text(v_27, w_27);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_30);
  return(t);
}
static ATerm a_6 (ATerm h_104 (ATerm), ATerm v_197, ATerm b_28, ATerm t)
{
  ATerm l_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_197, term_k_11);
  t = e_6(t);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_30, b_28);
  t = h_104(t);
  t = fclose_0_0(t);
  t = b_28;
  return(t);
}
static ATerm z_5 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm o_30 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_30);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm w_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(match_cons(l_11, sym_Stream_1))
        {
          w_15 = ATgetArgument(l_11, 0);
        }
      else
        _fail(t);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(w_15, y_15, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,d_17 = NULL,g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          g_17 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(g_17, h_17, t);
  a_17 = t;
  t = term_l_6;
  b_17 = t;
  t = a_17;
  if(match_cons(t, sym_Stream_1))
    {
      d_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_6, a_17);
  t = x_5(b_17, d_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,y_30 = NULL,a_31 = NULL,b_31 = NULL,d_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,o_31 = NULL,j_33 = NULL,k_33 = NULL,r_3 = NULL,q_3 = NULL;
  v_30 = t;
  if(match_cons(t, sym__2))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_30);
  h_31 = t;
  t = i_31;
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_30 != NULL) && (u_30 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_2, t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = term_p_11;
        u_30 = t;
      }
  }
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_31, j_31);
  q_3 = t;
  t = SSLsetAnnotations(q_3, h_31);
  t = v_30;
  if(match_cons(t, sym__2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_30);
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_31, (ATerm) ATmakeAppl(sym__2, not_null(u_30), b_31));
  r_3 = t;
  t = SSLsetAnnotations(r_3, y_30);
  d_31 = t;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL,p_15 = NULL,q_15 = NULL,u_15 = NULL,v_15 = NULL,s_3 = NULL;
        t = SSLgetAnnotations(d_31);
        k_15 = t;
        t = j_33;
        t = fetch_1_0(q_2, t);
        p_15 = t;
        t = k_33;
        if(match_cons(t, sym__2))
          {
            u_15 = ATgetArgument(t, 0);
            v_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_6(r_2, u_15, v_15, t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_15, q_15);
        s_3 = t;
        t = SSLsetAnnotations(s_3, k_15);
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        {
          ATerm u_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,t_3 = NULL;
          t = SSLgetAnnotations(d_31);
          u_16 = t;
          t = k_33;
          if(match_cons(t, sym__2))
            {
              y_16 = ATgetArgument(t, 0);
              z_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_6(s_2, y_16, z_16, t);
          x_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_33, x_16);
          t_3 = t;
          t = SSLsetAnnotations(t_3, u_16);
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
ATerm apply_strategy_1_0 (ATerm d_123 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,t_33 = NULL;
  t_33 = t;
  t = dtime_0_0(t);
  t = t_33;
  t = d_123(t);
  s_33 = t;
  t = dtime_0_0(t);
  n_33 = t;
  t = s_33;
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_33), (ATerm) ATmakeAppl(sym_Runtime_1, n_33)), p_33);
  return(t);
}
static ATerm q_34 (ATerm j_34, ATerm t)
{
  t = SSL_fclose(j_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  o_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_34 = ATgetArgument(t, 0);
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_34);
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            t = q_34(o_34, t);
          }
      }
    }
  else
    {
      t = q_34(o_34, t);
    }
  return(t);
}
static ATerm b_6 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
static ATerm c_6 (ATerm t_41, ATerm u_41, ATerm t)
{
  t = SSL_strcat(t_41, u_41);
  return(t);
}
static ATerm d_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm r_34 = NULL;
  t = SSL_fopen(c_43, d_43);
  r_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_34);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_34 = NULL;
  t = SSL_stdin_stream();
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_34);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_34 = NULL;
  t = SSL_stdout_stream();
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_34);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_34 = NULL;
  t = SSL_stderr_stream();
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_34);
  return(t);
}
static ATerm g_36 (ATerm f_35, ATerm t)
{
  ATerm g_35 = NULL;
  t = SSL_explode_term(f_35);
  if(match_cons(t, sym__2))
    {
      ATerm w_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_11 = ATgetArgument(t, 1);
        if(((ATgetType(x_11) == AT_LIST) && !(ATisEmpty(x_11))))
          {
            g_35 = ATgetFirst((ATermList) x_11);
            {
              ATerm a_12 = (ATerm) ATgetNext((ATermList) x_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_35;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_35;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_35;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_35;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_36 (ATerm j_35, ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,r_35 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(l_35);
  o_35 = t;
  t = j_35;
  if(match_cons(t, sym_Path_1))
    {
      r_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_35, k_35);
  e_4 = t;
  t = SSLsetAnnotations(e_4, o_35);
  if(match_cons(t, sym__2))
    {
      m_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(m_35, n_35, t);
  return(t);
}
static ATerm i_36 (ATerm t_35, ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,b_36 = NULL,f_4 = NULL;
  t = SSLgetAnnotations(v_35);
  y_35 = t;
  t = SSL_is_string(t_35);
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_36, u_35);
  f_4 = t;
  t = SSLsetAnnotations(f_4, y_35);
  if(match_cons(t, sym__2))
    {
      w_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(w_35, x_35, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  if(match_cons(t, sym__2))
    {
      e_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
      {
        ATerm b_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_36(d_36, t);
            LocalPopChoice(d_12);
          }
        else
          {
            t = b_12;
            {
              ATerm e_12 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_36(e_36, f_36, d_36, t);
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = e_12;
                  t = i_36(e_36, f_36, d_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_36(d_36, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,r_36 = NULL;
  r_36 = t;
  {
    ATerm i_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_36, term_m_12);
        t = e_6(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = i_12;
        {
          ATerm z_17 = NULL,a_18 = NULL;
          t = term_n_12;
          a_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_12, r_36);
          t = c_6(a_18, r_36, t);
          z_17 = t;
          t = SSL_perror(z_17);
          _fail(t);
        }
      }
  }
  l_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(m_36, t);
  k_36 = t;
  t = l_36;
  t = fclose_0_0(t);
  t = k_36;
  return(t);
}
ATerm fetch_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  static ATerm r_37 (ATerm t)
  {
    ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
    o_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_37 = ATgetFirst((ATermList) t);
        q_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_12 = t;
      int p_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_18 = NULL,l_18 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(o_37);
          g_18 = t;
          t = p_37;
          t = a_105(t);
          l_18 = t;
          t = (ATerm) ATinsert(CheckATermList(q_37), l_18);
          k_4 = t;
          t = SSLsetAnnotations(k_4, g_18);
          LocalPopChoice(p_12);
        }
      else
        {
          t = o_12;
          {
            ATerm z_18 = NULL,d_19 = NULL,l_4 = NULL;
            t = SSLgetAnnotations(o_37);
            z_18 = t;
            t = q_37;
            t = r_37(t);
            d_19 = t;
            t = (ATerm) ATinsert(CheckATermList(d_19), p_37);
            l_4 = t;
            t = SSLsetAnnotations(l_4, z_18);
          }
        }
    }
    return(t);
  }
  t = r_37(t);
  return(t);
}
static ATerm j_6 (ATerm r_67, ATerm s_67, ATerm t)
{
  ATerm u_37 = NULL;
  t = lookup_table_0_1(r_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(s_67, u_37, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_121 (ATerm), ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  {
    ATerm q_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
        t = term_u_12;
        a_38 = t;
        t = term_x_12;
        b_38 = t;
        t = term_y_12;
        t = j_6(a_38, b_38, t);
        z_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_37, term_z_12);
        t = geq_0_0(t);
        t = x_37;
        t = m_121(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = q_12;
        t = x_37;
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  if(match_string(t, "-k"))
    {
      t = e_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_38;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  t = SSL_string_to_int(f_38);
  g_38 = t;
  t = term_a_13;
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, g_38);
  t = m_6(h_38, g_38, t);
  t = f_38;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, v_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm j_38 = NULL;
  j_38 = t;
  if(match_string(t, "-S"))
    {
      t = j_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_38;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  t = term_x_12;
  k_38 = t;
  t = term_f_13;
  l_38 = t;
  t = term_h_13;
  t = m_6(k_38, l_38, t);
  t = term_i_13;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_j_13;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  t = SSL_string_to_int(m_38);
  n_38 = t;
  t = term_x_12;
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, n_38);
  t = m_6(o_38, n_38, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_38);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_k_13;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  t = term_l_13;
  p_38 = t;
  t = term_l_5;
  q_38 = t;
  t = term_o_13;
  t = m_6(p_38, q_38, t);
  t = term_p_13;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_2, x_2, y_2, t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_2, a_3, b_3, t);
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            t = Option_3_0(c_3, d_3, e_3, t);
          }
      }
    }
  return(t);
}
static ATerm m_6 (ATerm d_61, ATerm e_61, ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  t = term_u_12;
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_12, d_61, e_61);
  t = lookup_table_0_1(r_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(d_61, e_61, s_38, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_12, d_61, e_61);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
      t = term_l_5;
      t = f_0(t);
      y_38 = t;
      t = term_a_14;
      z_38 = t;
      t = term_b_14;
      a_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, y_38);
      t = k_6(z_38, a_39, y_38, t);
      _fail(t);
    }
  else
    {
      ATerm d_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_38 = ATgetFirst((ATermList) t);
          x_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_38;
      t = b_0(t);
      t = term_l_5;
      t = d_0(t);
      d_39 = t;
      t = (ATerm) ATinsert(CheckATermList(x_38), d_39);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  if(match_string(t, "-o"))
    {
      t = f_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_39;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  t = term_c_14;
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, g_39);
  t = m_6(h_39, g_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_39);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, i_3, j_3, t);
  return(t);
}
static ATerm k_6 (ATerm y_65, ATerm z_65, ATerm x_65, ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_65, z_65);
  {
    ATerm f_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_14 = ATgetArgument(t, 0);
            ATerm j_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_65, z_65);
        t = j_6(y_65, z_65, t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = f_14;
        t = (ATerm) ATempty;
      }
  }
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_65, z_65, (ATerm) ATinsert(CheckATermList(k_39), x_65));
  t = lookup_table_0_1(y_65, t);
  n_39 = t;
  t = (ATerm) ATinsert(CheckATermList(k_39), x_65);
  l_39 = t;
  t = n_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(z_65, l_39, m_39, t);
  t = j_39;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
      t = term_l_5;
      t = m_0(t);
      y_39 = t;
      t = term_a_14;
      z_39 = t;
      t = term_b_14;
      a_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, y_39);
      t = k_6(z_39, a_40, y_39, t);
      _fail(t);
    }
  else
    {
      ATerm e_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_39 = ATgetFirst((ATermList) t);
          v_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_39 = ATgetFirst((ATermList) t);
          x_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_39;
      t = j_0(t);
      t = w_39;
      t = l_0(t);
      e_40 = t;
      t = (ATerm) ATinsert(CheckATermList(x_39), e_40);
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm g_40 = NULL;
  g_40 = t;
  if(match_string(t, "-i"))
    {
      t = g_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_40;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  h_40 = t;
  t = term_k_14;
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_14, h_40);
  t = m_6(i_40, h_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_40);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_3, m_3, o_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_5;
  t = whoami_0_0(t);
  j_40 = t;
  t = term_n_5;
  l_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_14), j_40);
  m_40 = t;
  t = SSL_printnl(l_40, m_40);
  t = term_r_5;
  k_40 = t;
  t = SSL_exit(k_40);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL;
  t = term_u_12;
  n_40 = t;
  t = term_n_14;
  o_40 = t;
  t = term_o_14;
  t = j_6(n_40, o_40, t);
  return(t);
}
static ATerm f_6 (ATerm w_45, ATerm x_45, ATerm t)
{
  ATerm p_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_45, x_45);
      LocalPopChoice(r_14);
    }
  else
    {
      t = p_14;
      t = SSL_addr(w_45, x_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_40;
      t = p_111(t);
    }
  else
    {
      ATerm v_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_40 = ATgetFirst((ATermList) t);
          s_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_40;
      t = foldr_2_0(p_111, q_111, t);
      v_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_40, v_40);
      t = q_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(a_20, b_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_40 = NULL,l_19 = NULL,s_19 = NULL;
  t = times_0_0(t);
  s_19 = t;
  t = SSL_explode_term(s_19);
  if(match_cons(t, sym__2))
    {
      ATerm t_14 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_19;
  t = foldr_2_0(p_3, u_3, t);
  y_40 = t;
  t = SSL_TicksToSeconds(y_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  if(match_cons(t, sym__2))
    {
      k_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_41;
        if((k_41 != t))
          {
            _fail(t);
          }
        t = j_41;
        LocalPopChoice(w_14);
      }
    else
      {
        t = u_14;
        t = (ATerm) ATmakeAppl(sym__2, k_41, l_41);
        {
          ATerm x_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_41, l_41);
              LocalPopChoice(a_15);
            }
          else
            {
              t = x_14;
              t = SSL_gtr(k_41, l_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_41, l_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_121 (ATerm), ATerm t)
{
  ATerm p_41 = NULL;
  p_41 = t;
  {
    ATerm c_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_41 = NULL,s_41 = NULL,v_41 = NULL;
        t = term_u_12;
        s_41 = t;
        t = term_x_12;
        v_41 = t;
        t = term_y_12;
        t = j_6(s_41, v_41, t);
        r_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_41, term_r_5);
        t = geq_0_0(t);
        t = p_41;
        t = l_121(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = c_15;
        t = p_41;
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,a_42 = NULL,b_42 = NULL;
  t = run_time_0_0(t);
  x_41 = t;
  t = term_l_5;
  t = whoami_0_0(t);
  y_41 = t;
  t = term_n_5;
  a_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_15), x_41), term_i_15), y_41);
  b_42 = t;
  t = SSL_printnl(a_42, b_42);
  t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_15), x_41), term_i_15), y_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_13;
  c_42 = t;
  t = SSL_exit(c_42);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  n_42 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_42;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_42 = ATgetArgument(t, 0);
          {
            ATerm b_21 = NULL,r_4 = NULL;
            t = SSLgetAnnotations(n_42);
            b_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_42);
            r_4 = t;
            t = SSLsetAnnotations(r_4, b_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_42;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_124 (ATerm), ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_42 = NULL,g_42 = NULL;
      t = term_u_12;
      f_42 = t;
      t = term_s_15;
      g_42 = t;
      t = term_f_16;
      t = j_6(f_42, g_42, t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      t = fetch_1_0(x_3, t);
    }
  t = b_124(t);
  return(t);
}
static ATerm n_6 (ATerm q_70, ATerm r_70, ATerm s_70, ATerm t)
{
  ATerm p_42 = NULL;
  t = SSL_hashtable_put(s_70, q_70, r_70);
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_42);
  return(t);
}
static ATerm o_6 (ATerm t_70, ATerm u_70, ATerm t)
{
  t = SSL_hashtable_get(u_70, t_70);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_67, ATerm t)
{
  ATerm y_42 = NULL;
  t = table_hashtable_0_0(t);
  y_42 = t;
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_21 = NULL;
        t = y_42;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_6(k_67, q_21, t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
          ATerm v_21 = NULL;
          t = k_67;
          t = table_create_0_0(t);
          t = y_42;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_6(k_67, v_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm y_70, ATerm z_70, ATerm t)
{
  ATerm h_43 = NULL;
  t = SSL_hashtable_create(y_70, z_70);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_43);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,l_43 = NULL,n_43 = NULL,o_43 = NULL;
  i_43 = t;
  t = term_j_16;
  n_43 = t;
  t = term_k_16;
  o_43 = t;
  t = i_43;
  t = new_hashtable_0_2(n_43, o_43, t);
  j_43 = t;
  t = i_43;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(i_43, j_43, l_43, t);
  t = i_43;
  return(t);
}
static ATerm h_6 (ATerm v_70, ATerm w_70, ATerm t)
{
  ATerm p_43 = NULL;
  t = SSL_hashtable_remove(w_70, v_70);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_43);
  return(t);
}
static ATerm i_6 (ATerm a_71, ATerm t)
{
  ATerm q_43 = NULL;
  t = SSL_hashtable_destroy(a_71);
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_43);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_43 = NULL;
  t = SSL_table_hashtable();
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_43);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  s_43 = t;
  t = table_hashtable_0_0(t);
  t_43 = t;
  t = lookup_table_0_1(s_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(v_43, t);
  t = t_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(s_43, u_43, t);
  t = s_43;
  return(t);
}
ATerm map_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  static ATerm k_44 (ATerm t)
  {
    ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
    h_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_44;
      }
    else
      {
        ATerm f_22 = NULL,i_22 = NULL,j_22 = NULL,v_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_44 = ATgetFirst((ATermList) t);
            j_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_44);
        f_22 = t;
        t = i_44;
        t = q_104(t);
        i_22 = t;
        t = j_44;
        t = k_44(t);
        j_22 = t;
        t = (ATerm) ATinsert(CheckATermList(j_22), i_22);
        v_4 = t;
        t = SSLsetAnnotations(v_4, f_22);
      }
    return(t);
  }
  t = k_44(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_44 = ATgetFirst((ATermList) t);
      o_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_44 = NULL,t_44 = NULL;
        static ATerm y_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_44)), not_null(t_44));
          return(t);
        }
        t = o_44;
        t = h_0(t);
        if(((s_44 != NULL) && (s_44 != t)))
          _fail(t);
        else
          s_44 = t;
        t = n_44;
        t = g_0(t);
        if(((t_44 != NULL) && (t_44 != t)))
          _fail(t);
        else
          t_44 = t;
        t = o_44;
        t = reverse_acc_2_0(g_0, y_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_5;
      t = h_0(t);
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,z_4 = NULL;
  b_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_45);
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_45);
  z_4 = t;
  t = SSLsetAnnotations(z_4, z_44);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_45), term_l_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  ATerm o_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_44 = NULL,y_44 = NULL;
      t = term_u_12;
      x_44 = t;
      t = term_n_14;
      y_44 = t;
      t = term_o_14;
      t = j_6(x_44, y_44, t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = o_16;
      t = fetch_1_0(b_4, t);
    }
  t = term_v_16;
  t = echo_0_0(t);
  t = term_a_14;
  v_44 = t;
  t = term_b_14;
  w_44 = t;
  t = term_w_16;
  t = j_6(v_44, w_44, t);
  t = reverse_acc_2_0(_id, c_4, t);
  t = map_1_0(d_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_17 = ATgetFirst((ATermList) t);
                ATerm n_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_45;
          }
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = (ATerm) ATinsert(ATempty, f_45);
      }
  }
  g_45 = t;
  t = term_p_11;
  h_45 = t;
  t = SSL_printnl(h_45, g_45);
  t = f_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  t = term_u_12;
  l_45 = t;
  t = term_n_14;
  m_45 = t;
  t = term_o_14;
  t = j_6(l_45, m_45, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  t = term_o_17;
  n_45 = t;
  t = term_l_5;
  o_45 = t;
  t = term_r_17;
  t = m_6(n_45, o_45, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  t = term_o_17;
  r_45 = t;
  t = term_l_5;
  s_45 = t;
  t = term_r_17;
  t = m_6(r_45, s_45, t);
  t = term_t_17;
  p_45 = t;
  t = term_l_5;
  q_45 = t;
  t = term_u_17;
  t = m_6(p_45, q_45, t);
  t = term_w_17;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_17 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_4, h_4, i_4, t);
      LocalPopChoice(b_18);
    }
  else
    {
      t = y_17;
      t = Option_3_0(j_4, m_4, n_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,c_5 = NULL;
  a_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_45 = ATgetFirst((ATermList) t);
      v_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_46);
  t_45 = t;
  t = u_45;
  t = s_74(t);
  y_45 = t;
  t = v_45;
  t = t_74(t);
  z_45 = t;
  t = (ATerm) ATinsert(CheckATermList(z_45), y_45);
  c_5 = t;
  t = SSLsetAnnotations(c_5, t_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,k_46 = NULL,l_46 = NULL,m_5 = NULL;
  f_46 = t;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_18;
        t = e_126(t);
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
      }
  }
  t = f_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_46 = ATgetFirst((ATermList) t);
      i_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_46);
  g_46 = t;
  t = term_n_14;
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, h_46);
  t = m_6(l_46, h_46, t);
  t = i_46;
  {
    static ATerm v_46 (ATerm t)
    {
      ATerm f_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_46 = NULL;
              o_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_46;
              LocalPopChoice(m_18);
            }
          else
            {
              t = j_18;
              t = e_126(t);
              t = Cons_2_0(_id, v_46, t);
            }
          LocalPopChoice(i_18);
        }
      else
        {
          t = f_18;
          {
            ATerm r_46 = NULL,s_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_46 = ATgetFirst((ATermList) t);
                s_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_46), (ATerm) ATmakeAppl(sym_Undefined_1, r_46));
          }
        }
      return(t);
    }
    t = v_46(t);
  }
  k_46 = t;
  t = (ATerm) ATinsert(CheckATermList(k_46), (ATerm) ATmakeAppl(sym_Program_1, h_46));
  m_5 = t;
  t = SSLsetAnnotations(m_5, g_46);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  if(match_string(t, "--help"))
    {
      t = j_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_47;
        }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  t = term_s_15;
  k_47 = t;
  t = term_l_5;
  l_47 = t;
  t = term_n_18;
  t = m_6(k_47, l_47, t);
  t = term_o_18;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_p_18;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  d_47 = t;
  t = term_a_14;
  e_47 = t;
  t = term_q_18;
  t = lookup_table_0_1(e_47, t);
  i_47 = t;
  t = term_b_14;
  f_47 = t;
  t = (ATerm) ATempty;
  g_47 = t;
  t = i_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(f_47, g_47, h_47, t);
  t = d_47;
  {
    static ATerm o_4 (ATerm t)
    {
      ATerm r_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_126(t);
          LocalPopChoice(s_18);
        }
      else
        {
          t = r_18;
          {
            ATerm t_18 = t;
            int u_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_4, q_4, s_4, t);
                LocalPopChoice(u_18);
              }
            else
              {
                t = t_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
  }
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_47 = NULL;
        w_47 = t;
        {
          ATerm x_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_22 = NULL;
              t = w_47;
              {
                ATerm b_19 = t;
                int c_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_22 = NULL,s_22 = NULL;
                    t = term_u_12;
                    r_22 = t;
                    t = term_s_15;
                    s_22 = t;
                    t = term_f_16;
                    t = j_6(r_22, s_22, t);
                    LocalPopChoice(c_19);
                  }
                else
                  {
                    t = b_19;
                    t = fetch_1_0(t_4, t);
                  }
              }
              t = w_47;
              t = default_system_usage_0_0(t);
              t = term_f_13;
              q_22 = t;
              t = SSL_exit(q_22);
              LocalPopChoice(a_19);
            }
          else
            {
              t = x_18;
              {
                ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
                t = term_u_12;
                x_22 = t;
                t = term_o_17;
                y_22 = t;
                t = term_e_19;
                t = j_6(x_22, y_22, t);
                t = w_47;
                t = default_system_about_0_0(t);
                t = term_f_13;
                w_22 = t;
                t = SSL_exit(w_22);
              }
            }
        }
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        {
          ATerm f_19 = t;
          int g_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
              static ATerm w_4 (ATerm t)
              {
                ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,o_5 = NULL;
                c_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_48);
                a_48 = t;
                t = b_48;
                if(((a_47 != NULL) && (a_47 != t)))
                  _fail(t);
                else
                  a_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_48);
                o_5 = t;
                t = SSLsetAnnotations(o_5, a_48);
                return(t);
              }
              t = fetch_1_0(w_4, t);
              t = term_n_5;
              y_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_47)), term_i_19);
              z_47 = t;
              t = SSL_printnl(y_47, z_47);
              t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_47)), term_i_19));
              t = default_system_usage_0_0(t);
              t = term_r_5;
              x_47 = t;
              t = SSL_exit(x_47);
              LocalPopChoice(g_19);
            }
          else
            {
              t = f_19;
            }
        }
      }
  }
  b_47 = t;
  t = term_a_14;
  t = table_destroy_0_0(t);
  t = b_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  t = parse_options_1_0(d_124, t);
  h_48 = t;
  t = term_j_19;
  t = table_create_0_0(t);
  t = term_j_19;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_19, term_k_19, h_48);
  t = lookup_table_0_1(i_48, t);
  l_48 = t;
  t = term_k_19;
  j_48 = t;
  t = l_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(j_48, h_48, k_48, t);
  t = h_48;
  t = f_124(t);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_124, t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_124(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = if_verbose2_1_0(h_5, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL;
  t = term_t_19;
  m_48 = t;
  t = term_l_5;
  n_48 = t;
  t = term_u_19;
  t = m_6(m_48, n_48, t);
  t = term_w_19;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_x_19;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  o_48 = t;
  t = term_u_12;
  s_48 = t;
  t = term_n_14;
  t_48 = t;
  t = term_o_14;
  t = j_6(s_48, t_48, t);
  p_48 = t;
  t = term_n_5;
  q_48 = t;
  t = (ATerm) ATinsert(ATempty, p_48);
  r_48 = t;
  t = SSL_printnl(q_48, r_48);
  t = o_48;
  return(t);
}
ATerm iowrap_3_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm t)
{
  static ATerm x_4 (ATerm t)
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_123(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm e_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(f_20);
            }
          else
            {
              t = e_20;
              {
                ATerm g_20 = t;
                int h_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(h_20);
                  }
                else
                  {
                    t = g_20;
                    {
                      ATerm j_20 = t;
                      int k_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_5, f_5, g_5, t);
                          LocalPopChoice(k_20);
                        }
                      else
                        {
                          t = j_20;
                          {
                            ATerm l_20 = t;
                            int n_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(n_20);
                              }
                            else
                              {
                                t = l_20;
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
  static ATerm a_5 (ATerm t)
  {
    ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
    v_48 = t;
    {
      ATerm o_20 = t;
      int r_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_48 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_5, t);
          LocalPopChoice(r_20);
        }
      else
        {
          t = o_20;
          t = term_s_20;
          u_48 = t;
        }
    }
    t = not_null(u_48);
    t = ReadFromFile_0_0(t);
    w_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
    t = apply_strategy_1_0(m_123, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(x_4, o_123, y_4, a_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,u_5 = NULL;
  e_49 = t;
  if(match_cons(t, sym__2))
    {
      b_49 = ATgetArgument(t, 0);
      c_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_49);
  a_49 = t;
  t = c_49;
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_49 = NULL;
        t = SSL_explode_term(c_49);
        if(match_cons(t, sym__2))
          {
            ATerm v_20 = ATgetArgument(t, 0);
            ATerm w_20 = ATgetArgument(t, 1);
            if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
              {
                f_49 = ATgetFirst((ATermList) w_20);
                {
                  ATerm x_20 = (ATerm) ATgetNext((ATermList) w_20);
                  if(((ATgetType(x_20) != AT_LIST) || !(ATisEmpty(x_20))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = f_49;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
      }
  }
  t = topdown_1_0(k_5, t);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_49, d_49);
  u_5 = t;
  t = SSLsetAnnotations(u_5, a_49);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(j_5, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}

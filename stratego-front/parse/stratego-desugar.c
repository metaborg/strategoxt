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
Symbol sym_RDecT_3;
Symbol sym_RDec_2;
Symbol sym_RDecNoArgs_1;
Symbol sym_Specification_1;
Symbol sym_Module_2;
Symbol sym_Overlay_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Con4_4;
Symbol sym_Con3_3;
Symbol sym_Con_3;
Symbol sym_Con1_2;
Symbol sym_ListTail_2;
Symbol sym_List_1;
Symbol sym_Tuple_1;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Char_1;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_StrategyCurly_1;
Symbol sym_SVar_1;
Symbol sym_DynRuleUnion_3;
Symbol sym_DynRuleIntersect_3;
Symbol sym_DynRuleUnionFix_2;
Symbol sym_DynRuleIntersectFix_2;
Symbol sym_AM_2;
Symbol sym_SwitchChoice_3;
Symbol sym_SwitchChoiceNoOtherwise_2;
Symbol sym_CondChoice_3;
Symbol sym_RChoice_2;
Symbol sym_CallNoArgs_1;
Symbol sym_ListCong_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ModCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_TupleCong_2;
Symbol sym_EmptyTupleCong_0;
Symbol sym_AnnoCong_2;
Symbol sym_CharCong_1;
Symbol sym_RealCong_1;
Symbol sym_IntCong_1;
Symbol sym_StrCong_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Prim_2;
Symbol sym_PrimNoArgs_1;
Symbol sym_Where_1;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Call_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_ParenStrat_1;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_3;
Symbol sym_SDefNoArgs_2;
Symbol sym_OpDecl_2;
Symbol sym_SortTuple_1;
Symbol sym_SortListTl_2;
Symbol sym_SortList_1;
Symbol sym_Sort_2;
Symbol sym_SortNoArgs_1;
Symbol sym_StratRule_3;
Symbol sym_StratRuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_SRDef_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefNoArgs_2;
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
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_RDec_2 = ATmakeSymbol("RDec", 2, ATfalse);
  ATprotectSymbol(sym_RDec_2);
  sym_RDecNoArgs_1 = ATmakeSymbol("RDecNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_RDecNoArgs_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_DynRuleUnion_3 = ATmakeSymbol("DynRuleUnion", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleUnion_3);
  sym_DynRuleIntersect_3 = ATmakeSymbol("DynRuleIntersect", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersect_3);
  sym_DynRuleUnionFix_2 = ATmakeSymbol("DynRuleUnionFix", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleUnionFix_2);
  sym_DynRuleIntersectFix_2 = ATmakeSymbol("DynRuleIntersectFix", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersectFix_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_SwitchChoice_3 = ATmakeSymbol("SwitchChoice", 3, ATfalse);
  ATprotectSymbol(sym_SwitchChoice_3);
  sym_SwitchChoiceNoOtherwise_2 = ATmakeSymbol("SwitchChoiceNoOtherwise", 2, ATfalse);
  ATprotectSymbol(sym_SwitchChoiceNoOtherwise_2);
  sym_CondChoice_3 = ATmakeSymbol("CondChoice", 3, ATfalse);
  ATprotectSymbol(sym_CondChoice_3);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_SortTuple_1 = ATmakeSymbol("SortTuple", 1, ATfalse);
  ATprotectSymbol(sym_SortTuple_1);
  sym_SortListTl_2 = ATmakeSymbol("SortListTl", 2, ATfalse);
  ATprotectSymbol(sym_SortListTl_2);
  sym_SortList_1 = ATmakeSymbol("SortList", 1, ATfalse);
  ATprotectSymbol(sym_SortList_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
}
ATerm term_t_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_f_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_g_18;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_j_17;
ATerm term_w_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_z_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_f_8;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_n_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_t_6;
ATerm term_r_6;
ATerm term_i_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_s_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_n_5;
ATerm term_m_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Op_2, term_c_7, (ATerm) ATempty);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_7);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Sort_2, term_c_7, (ATerm) ATempty);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_7);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_7);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Call_2, term_p_9, (ATerm) ATempty);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-union", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-union", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-intersect", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-intersect", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Call_2, term_t_10, (ATerm) ATempty);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Call_2, term_w_7, (ATerm) ATempty);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_h_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_m_5);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_p_14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_z_15);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_c_14);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_m_5);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_m_5);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_m_5);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, (ATerm) ATempty);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_q_17);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_m_5);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm s_115 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm mk_rulenames_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm d_106 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t);
static ATerm a_30 (ATerm a_15, ATerm b_15, ATerm t);
static ATerm b_30 (ATerm n_15, ATerm t_15, ATerm t);
static ATerm c_30 (ATerm c_16, ATerm d_16, ATerm e_16, ATerm f_16, ATerm t);
static ATerm f_30 (ATerm o_16, ATerm q_16, ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm p_98 (ATerm), ATerm t);
static ATerm z_5 (ATerm c_43, ATerm d_43, ATerm t);
static ATerm a_6 (ATerm u_27, ATerm v_27, ATerm t);
static ATerm c_6 (ATerm s_104 (ATerm), ATerm k_198, ATerm a_28, ATerm t);
static ATerm b_6 (ATerm q_27, ATerm r_27, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm q_123 (ATerm), ATerm t);
static ATerm q_34 (ATerm j_34, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_6 (ATerm w_27, ATerm t);
static ATerm e_6 (ATerm s_41, ATerm t_41, ATerm t);
static ATerm f_6 (ATerm e_43, ATerm f_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_36 (ATerm f_35, ATerm t);
static ATerm h_36 (ATerm j_35, ATerm k_35, ATerm l_35, ATerm t);
static ATerm i_36 (ATerm t_35, ATerm u_35, ATerm v_35, ATerm t);
static ATerm g_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_105 (ATerm), ATerm t);
static ATerm l_6 (ATerm a_68, ATerm b_68, ATerm t);
ATerm if_verbose2_1_0 (ATerm z_121 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_6 (ATerm m_61, ATerm n_61, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_6 (ATerm h_66, ATerm i_66, ATerm g_66, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_6 (ATerm y_45, ATerm z_45, ATerm t);
ATerm foldr_2_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_121 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm need_help_1_0 (ATerm o_124 (ATerm), ATerm t);
static ATerm p_6 (ATerm z_70, ATerm a_71, ATerm b_71, ATerm t);
static ATerm q_6 (ATerm c_71, ATerm d_71, ATerm t);
ATerm lookup_table_0_1 (ATerm t_67, ATerm t);
ATerm new_hashtable_0_2 (ATerm h_71, ATerm i_71, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_6 (ATerm e_71, ATerm f_71, ATerm t);
static ATerm k_6 (ATerm j_71, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_126 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm parse_options_1_0 (ATerm q_126 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm iowrap_3_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
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
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,k_0 = NULL;
  b_0 = t;
  t = term_m_5;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_n_5;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_5), c_0), term_p_5);
  k_0 = t;
  t = SSL_printnl(f_0, k_0);
  t = term_s_5;
  e_0 = t;
  t = SSL_exit(e_0);
  t = b_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  static ATerm n_1 (ATerm t);
  static ATerm n_1 (ATerm t)
  {
    ATerm i_1 = NULL,k_1 = NULL,l_1 = NULL;
    ATerm u_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_115(t);
        LocalPopChoice(v_5);
      }
    else
      {
        t = u_5;
      }
    l_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_1 = ATgetFirst((ATermList) t);
        k_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_0 = NULL,u_0 = NULL,z_0 = NULL;
          t = SSLgetAnnotations(l_1);
          q_0 = t;
          t = k_1;
          t = n_1(t);
          u_0 = t;
          t = (ATerm) ATinsert(CheckATermList(u_0), i_1);
          z_0 = t;
          t = SSLsetAnnotations(z_0, q_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_1;
      }
    return(t);
  }
  t = n_1(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm n_0 (ATerm t)
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
      t = (ATerm) ATinsert(CheckATermList(a_2), term_x_5);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(a_2), term_y_5);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(a_2), term_i_6);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(a_2), term_r_6);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(a_2), term_t_6);
                }
            }
        }
    }
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,h_9 = NULL,i_9 = NULL;
  f_9 = t;
  if(match_cons(t, sym_Str_1))
    {
      h_9 = ATgetArgument(t, 0);
      {
        ATerm l_9 = NULL,t_1 = NULL,u_1 = NULL,m_1 = NULL;
        t = SSL_explode_string(h_9);
        t = unquote_chars_2_0(a_0, i_0, t);
        m_1 = t;
        t = SSL_implode_string(m_1);
        u_1 = t;
        t = SSL_explode_string(u_1);
        t = unescape_chars_1_0(n_0, t);
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
          h_9 = ATgetArgument(t, 0);
          {
            ATerm j_2 = NULL;
            t = SSL_string_to_real(h_9);
            j_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, j_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              h_9 = ATgetArgument(t, 0);
              {
                ATerm p_2 = NULL;
                t = SSL_string_to_int(h_9);
                p_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, p_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  h_9 = ATgetArgument(t, 0);
                  i_9 = ATgetArgument(t, 1);
                  e_9 = ATgetArgument(t, 2);
                  t = SSL_is_string(e_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, h_9, i_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_9), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      h_9 = ATgetArgument(t, 0);
                      {
                        ATerm v_3 = NULL,y_3 = NULL,a_4 = NULL,b_1 = NULL;
                        t = SSLgetAnnotations(f_9);
                        v_3 = t;
                        t = SSL_explode_string(h_9);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm u_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(u_6) != AT_INT) || (ATgetInt((ATermInt) u_6) != 39)))
                              _fail(t);
                            y_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(y_3);
                        a_4 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_4);
                        b_1 = t;
                        t = SSLsetAnnotations(b_1, v_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          h_9 = ATgetArgument(t, 0);
                          i_9 = ATgetArgument(t, 1);
                          e_9 = ATgetArgument(t, 2);
                          {
                            ATerm s_4 = NULL,b_5 = NULL,f_5 = NULL,c_1 = NULL;
                            t = SSLgetAnnotations(f_9);
                            s_4 = t;
                            t = SSL_explode_string(h_9);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm v_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(v_6) != AT_INT) || (ATgetInt((ATermInt) v_6) != 39)))
                                  _fail(t);
                                b_5 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(b_5);
                            f_5 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, f_5, i_9, e_9);
                            c_1 = t;
                            t = SSLsetAnnotations(c_1, s_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              h_9 = ATgetArgument(t, 0);
                              i_9 = ATgetArgument(t, 1);
                              e_9 = ATgetArgument(t, 2);
                              {
                                ATerm t_5 = NULL,n_6 = NULL,s_6 = NULL,d_1 = NULL;
                                t = SSLgetAnnotations(f_9);
                                t_5 = t;
                                t = SSL_explode_string(h_9);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm w_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(w_6) != AT_INT) || (ATgetInt((ATermInt) w_6) != 39)))
                                      _fail(t);
                                    n_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(n_6);
                                s_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, s_6, i_9, e_9);
                                d_1 = t;
                                t = SSLsetAnnotations(d_1, t_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  h_9 = ATgetArgument(t, 0);
                                  i_9 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_7 = NULL,g_8 = NULL,h_8 = NULL,e_1 = NULL;
                                    t = SSLgetAnnotations(f_9);
                                    h_7 = t;
                                    t = SSL_explode_string(h_9);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm x_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(x_6) != AT_INT) || (ATgetInt((ATermInt) x_6) != 39)))
                                          _fail(t);
                                        g_8 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(g_8);
                                    h_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, h_8, i_9);
                                    e_1 = t;
                                    t = SSLsetAnnotations(e_1, h_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      h_9 = ATgetArgument(t, 0);
                                      {
                                        ATerm s_8 = NULL,d_9 = NULL,g_9 = NULL,f_1 = NULL;
                                        t = SSLgetAnnotations(f_9);
                                        s_8 = t;
                                        t = SSL_explode_string(h_9);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm y_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(y_6) != AT_INT) || (ATgetInt((ATermInt) y_6) != 39)))
                                              _fail(t);
                                            d_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(d_9);
                                        g_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_9);
                                        f_1 = t;
                                        t = SSLsetAnnotations(f_1, s_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          h_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm a_10 = NULL,d_10 = NULL,e_10 = NULL,h_1 = NULL;
                                            t = SSLgetAnnotations(f_9);
                                            a_10 = t;
                                            t = SSL_explode_string(h_9);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm z_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(z_6) != AT_INT) || (ATgetInt((ATermInt) z_6) != 39)))
                                                  _fail(t);
                                                d_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(d_10);
                                            e_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, e_10);
                                            h_1 = t;
                                            t = SSLsetAnnotations(h_1, a_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              h_9 = ATgetArgument(t, 0);
                                              i_9 = ATgetArgument(t, 1);
                                              {
                                                ATerm v_10 = NULL,c_11 = NULL,i_11 = NULL,o_1 = NULL;
                                                t = SSLgetAnnotations(f_9);
                                                v_10 = t;
                                                t = SSL_explode_string(h_9);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm a_7 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(a_7) != AT_INT) || (ATgetInt((ATermInt) a_7) != 39)))
                                                      _fail(t);
                                                    c_11 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(c_11);
                                                i_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, i_11, i_9);
                                                o_1 = t;
                                                t = SSLsetAnnotations(o_1, v_10);
                                              }
                                            }
                                          else
                                            {
                                              ATerm z_11 = NULL,f_12 = NULL,k_12 = NULL,p_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  h_9 = ATgetArgument(t, 0);
                                                  i_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(f_9);
                                              z_11 = t;
                                              t = SSL_explode_string(h_9);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm b_7 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(b_7) != AT_INT) || (ATgetInt((ATermInt) b_7) != 39)))
                                                    _fail(t);
                                                  f_12 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(f_12);
                                              k_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, k_12, i_9);
                                              p_1 = t;
                                              t = SSLsetAnnotations(p_1, z_11);
                                            }
                                        }
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
ATerm foldr_3_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_13;
      t = c_112(t);
    }
  else
    {
      ATerm o_13 = NULL,p_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_13 = ATgetFirst((ATermList) t);
          f_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_13;
      t = e_112(t);
      o_13 = t;
      t = f_13;
      t = foldr_3_0(c_112, d_112, e_112, t);
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_13, p_13);
      t = d_112(t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_d_7;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm s_13 = NULL,u_13 = NULL,e_14 = NULL;
  s_13 = t;
  t = SSL_explode_term(s_13);
  if(match_cons(t, sym__2))
    {
      ATerm e_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_7 = ATgetArgument(t, 1);
        if(((ATgetType(f_7) == AT_LIST) && !(ATisEmpty(f_7))))
          {
            u_13 = ATgetFirst((ATermList) f_7);
            {
              ATerm g_7 = (ATerm) ATgetNext((ATermList) f_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(s_13);
  if(match_cons(t, sym__2))
    {
      ATerm i_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_7 = ATgetArgument(t, 1);
        if(((ATgetType(j_7) == AT_LIST) && !(ATisEmpty(j_7))))
          {
            ATerm k_7 = ATgetFirst((ATermList) j_7);
            ATerm l_7 = (ATerm) ATgetNext((ATermList) j_7);
            if(((ATgetType(l_7) == AT_LIST) && !(ATisEmpty(l_7))))
              {
                e_14 = ATgetFirst((ATermList) l_7);
                {
                  ATerm m_7 = (ATerm) ATgetNext((ATermList) l_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, e_14), u_13));
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, v_13);
  return(t);
}
ATerm mk_rulenames_0_0 (ATerm t)
{
  t = foldr_3_0(r_0, s_0, t_0, t);
  return(t);
}
ATerm at_last_1_0 (ATerm d_106 (ATerm), ATerm t)
{
  static ATerm a_12 (ATerm t);
  static ATerm a_12 (ATerm t)
  {
    ATerm u_11 = NULL,w_11 = NULL,x_11 = NULL;
    u_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_11 = ATgetFirst((ATermList) t);
        x_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_7 = t;
      int p_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_13 = NULL,j_3 = NULL;
          t = SSLgetAnnotations(u_11);
          b_13 = t;
          t = x_11;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(x_11), w_11);
          j_3 = t;
          t = SSLsetAnnotations(j_3, b_13);
          t = d_106(t);
          LocalPopChoice(p_7);
        }
      else
        {
          t = o_7;
          {
            ATerm w_13 = NULL,z_13 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(u_11);
            w_13 = t;
            t = x_11;
            t = a_12(t);
            z_13 = t;
            t = (ATerm) ATinsert(CheckATermList(z_13), w_11);
            k_3 = t;
            t = SSLsetAnnotations(k_3, w_13);
          }
        }
    }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_12 = ATgetFirst((ATermList) t);
      i_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_12;
    }
  else
    {
      t = i_12;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm x_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_7 = ATgetFirst((ATermList) t);
      x_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_12;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_12 = ATgetFirst((ATermList) t);
      {
        ATerm r_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_12;
  t = d_115(t);
  t = t_12;
  t = last_0_0(t);
  t = e_115(t);
  t = t_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_7 = ATgetFirst((ATermList) t);
      u_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_12;
  t = at_last_1_0(v_0, t);
  return(t);
}
static ATerm a_30 (ATerm a_15, ATerm b_15, ATerm t)
{
  t = a_15;
  {
    ATerm t_7 = t;
    if((PushChoice() == 0))
      {
        ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,m_15 = NULL,n_3 = NULL;
        m_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_15 = ATgetFirst((ATermList) t);
            h_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_15);
        f_15 = t;
        t = h_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_15), g_15);
        n_3 = t;
        t = SSLsetAnnotations(n_3, f_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_7, a_15);
  return(t);
}
static ATerm b_30 (ATerm n_15, ATerm t_15, ATerm t)
{
  t = n_15;
  {
    ATerm v_7 = t;
    if((PushChoice() == 0))
      {
        ATerm v_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL,p_3 = NULL;
        b_16 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_15 = ATgetFirst((ATermList) t);
            a_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_16);
        v_15 = t;
        t = a_16;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(a_16), y_15);
        p_3 = t;
        t = SSLsetAnnotations(p_3, v_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_7, n_15);
  return(t);
}
static ATerm c_30 (ATerm c_16, ATerm d_16, ATerm e_16, ATerm f_16, ATerm t)
{
  ATerm j_16 = NULL,n_16 = NULL;
  t = SSL_explode_string(c_16);
  t = unquote_chars_2_0(w_0, x_0, t);
  n_16 = t;
  t = SSL_implode_string(n_16);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, j_16, d_16, e_16);
  return(t);
}
static ATerm f_30 (ATerm o_16, ATerm q_16, ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  t = SSL_explode_string(o_16);
  t = unquote_chars_2_0(a_1, g_1, t);
  t_16 = t;
  t = SSL_implode_string(t_16);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, s_16, (ATerm) ATempty);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_d_7;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm f_18 = NULL,j_18 = NULL,g_14 = NULL;
  f_18 = t;
  t = SSL_explode_term(f_18);
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            j_18 = ATgetFirst((ATermList) y_7);
            {
              ATerm z_7 = (ATerm) ATgetNext((ATermList) y_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(f_18);
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_8 = ATgetArgument(t, 1);
        if(((ATgetType(b_8) == AT_LIST) && !(ATisEmpty(b_8))))
          {
            ATerm c_8 = ATgetFirst((ATermList) b_8);
            ATerm d_8 = (ATerm) ATgetNext((ATermList) b_8);
            if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
              {
                g_14 = ATgetFirst((ATermList) d_8);
                {
                  ATerm e_8 = (ATerm) ATgetNext((ATermList) d_8);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, g_14), j_18));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm y_19 = NULL,a_20 = NULL,v_14 = NULL;
  y_19 = t;
  t = SSL_explode_term(y_19);
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_8 = ATgetArgument(t, 1);
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            a_20 = ATgetFirst((ATermList) j_8);
            {
              ATerm k_8 = (ATerm) ATgetNext((ATermList) j_8);
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
      ATerm l_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_8 = ATgetArgument(t, 1);
        if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
          {
            ATerm n_8 = ATgetFirst((ATermList) m_8);
            ATerm o_8 = (ATerm) ATgetNext((ATermList) m_8);
            if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
              {
                v_14 = ATgetFirst((ATermList) o_8);
                {
                  ATerm p_8 = (ATerm) ATgetNext((ATermList) o_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, v_14), a_20));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm j_20 = NULL,o_20 = NULL,x_14 = NULL;
  j_20 = t;
  t = SSL_explode_term(j_20);
  if(match_cons(t, sym__2))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_8 = ATgetArgument(t, 1);
        if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
          {
            o_20 = ATgetFirst((ATermList) r_8);
            {
              ATerm t_8 = (ATerm) ATgetNext((ATermList) r_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(j_20);
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_8 = ATgetArgument(t, 1);
        if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
          {
            ATerm w_8 = ATgetFirst((ATermList) v_8);
            ATerm x_8 = (ATerm) ATgetNext((ATermList) v_8);
            if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
              {
                x_14 = ATgetFirst((ATermList) x_8);
                {
                  ATerm y_8 = (ATerm) ATgetNext((ATermList) x_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, x_14), o_20));
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,d_15 = NULL;
  r_20 = t;
  t = SSL_explode_term(r_20);
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_9 = ATgetArgument(t, 1);
        if(((ATgetType(a_9) == AT_LIST) && !(ATisEmpty(a_9))))
          {
            s_20 = ATgetFirst((ATermList) a_9);
            {
              ATerm b_9 = (ATerm) ATgetNext((ATermList) a_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(r_20);
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_9 = ATgetArgument(t, 1);
        if(((ATgetType(j_9) == AT_LIST) && !(ATisEmpty(j_9))))
          {
            ATerm k_9 = ATgetFirst((ATermList) j_9);
            ATerm m_9 = (ATerm) ATgetNext((ATermList) j_9);
            if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
              {
                d_15 = ATgetFirst((ATermList) m_9);
                {
                  ATerm n_9 = (ATerm) ATgetNext((ATermList) m_9);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, d_15), s_20));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, k_21), j_21));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_d_7;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, q_21), p_21));
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, j_26), i_26));
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_q_9;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm m_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym__2))
    {
      m_26 = ATgetArgument(t, 0);
      p_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, p_26), m_26));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm u_16 = NULL,z_16 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,k_17 = NULL,l_17 = NULL,r_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      l_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
      {
        ATerm x_17 = NULL;
        t = r_17;
        t = foldr_2_0(j_1, q_1, t);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, l_17, x_17);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          l_17 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, l_17, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              l_17 = ATgetArgument(t, 0);
              {
                ATerm m_14 = NULL;
                t = l_17;
                {
                  ATerm r_9 = t;
                  int s_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_t_9;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_t_6;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_r_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_i_6;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_u_9;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(s_9);
                    }
                  else
                    {
                      t = r_9;
                      {
                        ATerm s_14 = NULL;
                        t = SSL_explode_string(l_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm v_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(v_9) != AT_INT) || (ATgetInt((ATermInt) v_9) != 39)))
                              _fail(t);
                            {
                              ATerm w_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
                                {
                                  s_14 = ATgetFirst((ATermList) w_9);
                                  {
                                    ATerm x_9 = (ATerm) ATgetNext((ATermList) w_9);
                                    if(((ATgetType(x_9) == AT_LIST) && !(ATisEmpty(x_9))))
                                      {
                                        ATerm y_9 = ATgetFirst((ATermList) x_9);
                                        if(((ATgetType(y_9) != AT_INT) || (ATgetInt((ATermInt) y_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm z_9 = (ATerm) ATgetNext((ATermList) x_9);
                                          if(((ATgetType(z_9) != AT_LIST) || !(ATisEmpty(z_9))))
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
                m_14 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, m_14);
              }
            }
          else
            {
              if(match_cons(t, sym_DynRuleUnion_3))
                {
                  l_17 = ATgetArgument(t, 0);
                  r_17 = ATgetArgument(t, 1);
                  h_17 = ATgetArgument(t, 2);
                  {
                    ATerm a_19 = NULL;
                    t = r_17;
                    t = mk_rulenames_0_0(t);
                    a_19 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_10, (ATerm)ATinsert(ATinsert(ATempty, h_17), l_17), (ATerm) ATinsert(ATempty, a_19));
                  }
                }
              else
                {
                  if(match_cons(t, sym_DynRuleUnionFix_2))
                    {
                      l_17 = ATgetArgument(t, 0);
                      r_17 = ATgetArgument(t, 1);
                      {
                        ATerm i_19 = NULL;
                        t = l_17;
                        t = mk_rulenames_0_0(t);
                        i_19 = t;
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_10, (ATerm)ATinsert(ATempty, r_17), (ATerm) ATinsert(ATempty, i_19));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynRuleIntersect_3))
                        {
                          l_17 = ATgetArgument(t, 0);
                          r_17 = ATgetArgument(t, 1);
                          h_17 = ATgetArgument(t, 2);
                          {
                            ATerm p_19 = NULL;
                            t = r_17;
                            t = mk_rulenames_0_0(t);
                            p_19 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_10, (ATerm)ATinsert(ATinsert(ATempty, h_17), l_17), (ATerm) ATinsert(ATempty, p_19));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleIntersectFix_2))
                            {
                              l_17 = ATgetArgument(t, 0);
                              r_17 = ATgetArgument(t, 1);
                              {
                                ATerm s_19 = NULL;
                                t = l_17;
                                t = mk_rulenames_0_0(t);
                                s_19 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_10, (ATerm)ATinsert(ATempty, r_17), (ATerm) ATinsert(ATempty, s_19));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SortTuple_1))
                                {
                                  l_17 = ATgetArgument(t, 0);
                                  {
                                    ATerm w_19 = NULL;
                                    t = l_17;
                                    t = foldr_2_0(r_1, s_1, t);
                                    w_19 = t;
                                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_10, (ATerm) ATinsert(ATempty, w_19));
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_SortListTl_2))
                                    {
                                      l_17 = ATgetArgument(t, 0);
                                      r_17 = ATgetArgument(t, 1);
                                      {
                                        static ATerm v_1 (ATerm t);
                                        static ATerm v_1 (ATerm t)
                                        {
                                          t = r_17;
                                          return(t);
                                        }
                                        t = l_17;
                                        t = foldr_2_0(v_1, w_1, t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SortList_1))
                                        {
                                          l_17 = ATgetArgument(t, 0);
                                          t = l_17;
                                          t = foldr_2_0(b_2, c_2, t);
                                        }
                                      else
                                        {
                                          ATerm m_10 = t;
                                          int n_10 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Con4_4))
                                                {
                                                  l_17 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm o_10 = ATgetArgument(t, 1);
                                                  }
                                                  h_17 = ATgetArgument(t, 2);
                                                  u_16 = ATgetArgument(t, 3);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(n_10);
                                              t = (ATerm) ATmakeAppl(sym_Con_3, l_17, h_17, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_16), (ATerm) ATempty));
                                            }
                                          else
                                            {
                                              t = m_10;
                                              {
                                                ATerm p_10 = t;
                                                int q_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Con3_3))
                                                      {
                                                        l_17 = ATgetArgument(t, 0);
                                                        {
                                                          ATerm r_10 = ATgetArgument(t, 1);
                                                        }
                                                        h_17 = ATgetArgument(t, 2);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_10);
                                                    t = (ATerm) ATmakeAppl(sym_Con_3, l_17, h_17, term_u_10);
                                                  }
                                                else
                                                  {
                                                    t = p_10;
                                                    if(match_cons(t, sym_Con1_2))
                                                      {
                                                        l_17 = ATgetArgument(t, 0);
                                                        r_17 = ATgetArgument(t, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Con_3, l_17, r_17, term_u_10);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ListTail_2))
                                                          {
                                                            l_17 = ATgetArgument(t, 0);
                                                            r_17 = ATgetArgument(t, 1);
                                                            {
                                                              static ATerm d_2 (ATerm t);
                                                              static ATerm d_2 (ATerm t)
                                                              {
                                                                t = r_17;
                                                                return(t);
                                                              }
                                                              t = l_17;
                                                              t = foldr_2_0(d_2, e_2, t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_List_1))
                                                              {
                                                                l_17 = ATgetArgument(t, 0);
                                                                t = l_17;
                                                                t = foldr_2_0(f_2, g_2, t);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_Tuple_1))
                                                                  {
                                                                    l_17 = ATgetArgument(t, 0);
                                                                    t = l_17;
                                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                      {
                                                                        z_16 = ATgetFirst((ATermList) t);
                                                                        f_17 = (ATerm) ATgetNext((ATermList) t);
                                                                        t = f_17;
                                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                          {
                                                                            ATerm w_10 = t;
                                                                            int x_10 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = a_30(l_17, k_17, t);
                                                                                LocalPopChoice(x_10);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = w_10;
                                                                                t = z_16;
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            t = a_30(l_17, k_17, t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_30(l_17, k_17, t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_CharCong_1))
                                                                      {
                                                                        l_17 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, l_17));
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_RealCong_1))
                                                                          {
                                                                            l_17 = ATgetArgument(t, 0);
                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, l_17));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_IntCong_1))
                                                                              {
                                                                                l_17 = ATgetArgument(t, 0);
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, l_17));
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_StrCong_1))
                                                                                  {
                                                                                    l_17 = ATgetArgument(t, 0);
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, l_17));
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                                      {
                                                                                        l_17 = ATgetArgument(t, 0);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_17), (ATerm) ATempty);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ModCong_2))
                                                                                          {
                                                                                            l_17 = ATgetArgument(t, 0);
                                                                                            r_17 = ATgetArgument(t, 1);
                                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_17), r_17);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_ListCong_2))
                                                                                              {
                                                                                                l_17 = ATgetArgument(t, 0);
                                                                                                r_17 = ATgetArgument(t, 1);
                                                                                                {
                                                                                                  static ATerm h_2 (ATerm t);
                                                                                                  static ATerm h_2 (ATerm t)
                                                                                                  {
                                                                                                    t = r_17;
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = l_17;
                                                                                                  t = foldr_2_0(h_2, i_2, t);
                                                                                                }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                                  {
                                                                                                    l_17 = ATgetArgument(t, 0);
                                                                                                    t = l_17;
                                                                                                    t = foldr_2_0(k_2, l_2, t);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                                      {
                                                                                                        l_17 = ATgetArgument(t, 0);
                                                                                                        r_17 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_w_7, (ATerm) ATinsert(CheckATermList(r_17), l_17));
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                                          {
                                                                                                            l_17 = ATgetArgument(t, 0);
                                                                                                            t = l_17;
                                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                              {
                                                                                                                z_16 = ATgetFirst((ATermList) t);
                                                                                                                f_17 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                t = f_17;
                                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                  {
                                                                                                                    ATerm y_10 = t;
                                                                                                                    int z_10 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = b_30(l_17, k_17, t);
                                                                                                                        LocalPopChoice(z_10);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = y_10;
                                                                                                                        t = z_16;
                                                                                                                      }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = b_30(l_17, k_17, t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = b_30(l_17, k_17, t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                                              {
                                                                                                                t = term_a_11;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                                  {
                                                                                                                    l_17 = ATgetArgument(t, 0);
                                                                                                                    r_17 = ATgetArgument(t, 1);
                                                                                                                    t = r_17;
                                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                                      {
                                                                                                                        g_17 = ATgetArgument(t, 0);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_d_11, (ATerm) ATinsert(ATinsert(ATempty, g_17), l_17));
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                                      {
                                                                                                                        l_17 = ATgetArgument(t, 0);
                                                                                                                        t = l_17;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                                          {
                                                                                                                            l_17 = ATgetArgument(t, 0);
                                                                                                                            r_17 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, l_17, r_17, term_e_11);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                                              {
                                                                                                                                l_17 = ATgetArgument(t, 0);
                                                                                                                                r_17 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, l_17, r_17, term_e_11);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                                  {
                                                                                                                                    l_17 = ATgetArgument(t, 0);
                                                                                                                                    r_17 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, l_17, (ATerm)ATempty, r_17);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SwitchChoice_3))
                                                                                                                                      {
                                                                                                                                        l_17 = ATgetArgument(t, 0);
                                                                                                                                        r_17 = ATgetArgument(t, 1);
                                                                                                                                        h_17 = ATgetArgument(t, 2);
                                                                                                                                        {
                                                                                                                                          ATerm d_28 = NULL,g_28 = NULL,h_28 = NULL;
                                                                                                                                          t = k_17;
                                                                                                                                          t = new_0_0(t);
                                                                                                                                          h_28 = t;
                                                                                                                                          t = (ATerm) ATmakeAppl(sym_Var_1, h_28);
                                                                                                                                          t = new_0_0(t);
                                                                                                                                          g_28 = t;
                                                                                                                                          t = r_17;
                                                                                                                                          {
                                                                                                                                            static ATerm m_2 (ATerm t);
                                                                                                                                            static ATerm n_2 (ATerm t);
                                                                                                                                            static ATerm m_2 (ATerm t)
                                                                                                                                            {
                                                                                                                                              t = h_17;
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            static ATerm n_2 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
                                                                                                                                              if(match_cons(t, sym__2))
                                                                                                                                                {
                                                                                                                                                  ATerm f_11 = ATgetArgument(t, 0);
                                                                                                                                                  if(match_cons(f_11, sym__2))
                                                                                                                                                    {
                                                                                                                                                      i_28 = ATgetArgument(f_11, 0);
                                                                                                                                                      j_28 = ATgetArgument(f_11, 1);
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
                                                                                                                                            t = foldr_2_0(m_2, n_2, t);
                                                                                                                                          }
                                                                                                                                          d_28 = t;
                                                                                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, l_17, (ATerm) ATmakeAppl(sym_Var_1, g_28)), d_28));
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SwitchChoiceNoOtherwise_2))
                                                                                                                                          {
                                                                                                                                            l_17 = ATgetArgument(t, 0);
                                                                                                                                            r_17 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SwitchChoice_3, l_17, r_17, term_g_11);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_CondChoice_3))
                                                                                                                                              {
                                                                                                                                                l_17 = ATgetArgument(t, 0);
                                                                                                                                                r_17 = ATgetArgument(t, 1);
                                                                                                                                                h_17 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, l_17), r_17, h_17);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                                                                  {
                                                                                                                                                    l_17 = ATgetArgument(t, 0);
                                                                                                                                                    r_17 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_17, l_17);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_PrimT_3))
                                                                                                                                                      {
                                                                                                                                                        l_17 = ATgetArgument(t, 0);
                                                                                                                                                        r_17 = ATgetArgument(t, 1);
                                                                                                                                                        h_17 = ATgetArgument(t, 2);
                                                                                                                                                        t = c_30(l_17, r_17, h_17, k_17, t);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                                                          {
                                                                                                                                                            l_17 = ATgetArgument(t, 0);
                                                                                                                                                            t = f_30(l_17, k_17, t);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                                              {
                                                                                                                                                                l_17 = ATgetArgument(t, 0);
                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Call_2, l_17, (ATerm) ATempty);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                                                  {
                                                                                                                                                                    l_17 = ATgetArgument(t, 0);
                                                                                                                                                                    r_17 = ATgetArgument(t, 1);
                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDef_3, l_17, (ATerm)ATempty, r_17);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                                                      {
                                                                                                                                                                        l_17 = ATgetArgument(t, 0);
                                                                                                                                                                        r_17 = ATgetArgument(t, 1);
                                                                                                                                                                        h_17 = ATgetArgument(t, 2);
                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, l_17, r_17, h_17);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                                                          {
                                                                                                                                                                            l_17 = ATgetArgument(t, 0);
                                                                                                                                                                            r_17 = ATgetArgument(t, 1);
                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDef_3, l_17, (ATerm)ATempty, r_17);
                                                                                                                                                                          }
                                                                                                                                                                        else
                                                                                                                                                                          {
                                                                                                                                                                            if(match_cons(t, sym_RDec_2))
                                                                                                                                                                              {
                                                                                                                                                                                l_17 = ATgetArgument(t, 0);
                                                                                                                                                                                r_17 = ATgetArgument(t, 1);
                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDecT_3, l_17, r_17, (ATerm) ATempty);
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_RDecNoArgs_1))
                                                                                                                                                                                  {
                                                                                                                                                                                    l_17 = ATgetArgument(t, 0);
                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDec_2, l_17, (ATerm) ATempty);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  {
                                                                                                                                                                                    if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                                                      {
                                                                                                                                                                                        l_17 = ATgetArgument(t, 0);
                                                                                                                                                                                        r_17 = ATgetArgument(t, 1);
                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, l_17, (ATerm)ATempty, r_17);
                                                                                                                                                                                      }
                                                                                                                                                                                    else
                                                                                                                                                                                      {
                                                                                                                                                                                        if(match_cons(t, sym_Module_2))
                                                                                                                                                                                          {
                                                                                                                                                                                            ATerm h_11 = ATgetArgument(t, 0);
                                                                                                                                                                                            r_17 = ATgetArgument(t, 1);
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Specification_1, r_17);
                                                                                                                                                                                      }
                                                                                                                                                                                  }
                                                                                                                                                                              }
                                                                                                                                                                          }
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                            }
                                        }
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
ATerm repeat_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  static ATerm i_30 (ATerm t);
  static ATerm i_30 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_97(t);
        t = i_30(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        t = q_97(t);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm topdown_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t);
  static ATerm o_2 (ATerm t)
  {
    t = topdown_1_0(p_98, t);
    return(t);
  }
  t = p_98(t);
  t = SRTS_all(o_2, t);
  return(t);
}
static ATerm z_5 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm j_30 = NULL;
  t = SSL_fputc(c_43, d_43);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_30);
  return(t);
}
static ATerm a_6 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm k_30 = NULL;
  t = SSL_write_term_to_stream_text(u_27, v_27);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_30);
  return(t);
}
static ATerm c_6 (ATerm s_104 (ATerm), ATerm k_198, ATerm a_28, ATerm t)
{
  ATerm l_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_198, term_l_11);
  t = g_6(t);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_30, a_28);
  t = s_104(t);
  t = fclose_0_0(t);
  t = a_28;
  return(t);
}
static ATerm b_6 (ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm o_30 = NULL;
  t = SSL_write_term_to_stream_baf(q_27, r_27);
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_30);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          w_15 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(w_15, x_15, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,i_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(match_cons(n_11, sym_Stream_1))
        {
          e_17 = ATgetArgument(n_11, 0);
        }
      else
        _fail(t);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(e_17, i_17, t);
  b_17 = t;
  t = term_i_6;
  c_17 = t;
  t = b_17;
  if(match_cons(t, sym_Stream_1))
    {
      d_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, b_17);
  t = z_5(c_17, d_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,y_30 = NULL,a_31 = NULL,b_31 = NULL,d_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,o_31 = NULL,j_33 = NULL,k_33 = NULL,t_3 = NULL,s_3 = NULL;
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
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_2 (ATerm t);
        static ATerm q_2 (ATerm t)
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
        t = fetch_1_0(q_2, t);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = term_q_11;
        u_30 = t;
      }
  }
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_31, j_31);
  s_3 = t;
  t = SSLsetAnnotations(s_3, h_31);
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
  t_3 = t;
  t = SSLsetAnnotations(t_3, y_30);
  d_31 = t;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,u_3 = NULL;
        t = SSLgetAnnotations(d_31);
        k_15 = t;
        t = j_33;
        t = fetch_1_0(r_2, t);
        p_15 = t;
        t = k_33;
        if(match_cons(t, sym__2))
          {
            r_15 = ATgetArgument(t, 0);
            s_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_6(s_2, r_15, s_15, t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_15, q_15);
        u_3 = t;
        t = SSLsetAnnotations(u_3, k_15);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm p_16 = NULL,x_16 = NULL,y_16 = NULL,a_17 = NULL,w_3 = NULL;
          t = SSLgetAnnotations(d_31);
          p_16 = t;
          t = k_33;
          if(match_cons(t, sym__2))
            {
              y_16 = ATgetArgument(t, 0);
              a_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_6(t_2, y_16, a_17, t);
          x_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_33, x_16);
          w_3 = t;
          t = SSLsetAnnotations(w_3, p_16);
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
ATerm apply_strategy_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,t_33 = NULL;
  t_33 = t;
  t = dtime_0_0(t);
  t = t_33;
  t = q_123(t);
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
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_34);
            LocalPopChoice(v_11);
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
static ATerm d_6 (ATerm w_27, ATerm t)
{
  t = SSL_read_term_from_stream(w_27);
  return(t);
}
static ATerm e_6 (ATerm s_41, ATerm t_41, ATerm t)
{
  t = SSL_strcat(s_41, t_41);
  return(t);
}
static ATerm f_6 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm r_34 = NULL;
  t = SSL_fopen(e_43, f_43);
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
      ATerm y_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_12 = ATgetArgument(t, 1);
        if(((ATgetType(b_12) == AT_LIST) && !(ATisEmpty(b_12))))
          {
            g_35 = ATgetFirst((ATermList) b_12);
            {
              ATerm c_12 = (ATerm) ATgetNext((ATermList) b_12);
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
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,r_35 = NULL,h_4 = NULL;
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
  h_4 = t;
  t = SSLsetAnnotations(h_4, o_35);
  if(match_cons(t, sym__2))
    {
      m_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(m_35, n_35, t);
  return(t);
}
static ATerm i_36 (ATerm t_35, ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,b_36 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(v_35);
  y_35 = t;
  t = SSL_is_string(t_35);
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_36, u_35);
  i_4 = t;
  t = SSLsetAnnotations(i_4, y_35);
  if(match_cons(t, sym__2))
    {
      w_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(w_35, x_35, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  if(match_cons(t, sym__2))
    {
      e_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_36(d_36, t);
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            {
              ATerm g_12 = t;
              int j_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_36(e_36, f_36, d_36, t);
                  LocalPopChoice(j_12);
                }
              else
                {
                  t = g_12;
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
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_36, term_n_12);
        t = g_6(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        {
          ATerm z_17 = NULL,a_18 = NULL;
          t = term_o_12;
          a_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_12, r_36);
          t = e_6(a_18, r_36, t);
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
  t = d_6(m_36, t);
  k_36 = t;
  t = l_36;
  t = fclose_0_0(t);
  t = k_36;
  return(t);
}
ATerm fetch_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  static ATerm r_37 (ATerm t);
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
      ATerm p_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_18 = NULL,l_18 = NULL,n_4 = NULL;
          t = SSLgetAnnotations(o_37);
          h_18 = t;
          t = p_37;
          t = l_105(t);
          l_18 = t;
          t = (ATerm) ATinsert(CheckATermList(q_37), l_18);
          n_4 = t;
          t = SSLsetAnnotations(n_4, h_18);
          LocalPopChoice(q_12);
        }
      else
        {
          t = p_12;
          {
            ATerm x_18 = NULL,c_19 = NULL,p_4 = NULL;
            t = SSLgetAnnotations(o_37);
            x_18 = t;
            t = q_37;
            t = r_37(t);
            c_19 = t;
            t = (ATerm) ATinsert(CheckATermList(c_19), p_37);
            p_4 = t;
            t = SSLsetAnnotations(p_4, x_18);
          }
        }
    }
    return(t);
  }
  t = r_37(t);
  return(t);
}
static ATerm l_6 (ATerm a_68, ATerm b_68, ATerm t)
{
  ATerm u_37 = NULL;
  t = lookup_table_0_1(a_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(b_68, u_37, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
        t = term_w_12;
        a_38 = t;
        t = term_y_12;
        b_38 = t;
        t = term_z_12;
        t = l_6(a_38, b_38, t);
        z_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_37, term_a_13);
        t = geq_0_0(t);
        t = x_37;
        t = z_121(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = x_37;
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
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
static ATerm v_2 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  t = SSL_string_to_int(f_38);
  g_38 = t;
  t = term_c_13;
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, g_38);
  t = o_6(h_38, g_38, t);
  t = f_38;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
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
static ATerm y_2 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  t = term_y_12;
  k_38 = t;
  t = term_h_13;
  l_38 = t;
  t = term_i_13;
  t = o_6(k_38, l_38, t);
  t = term_j_13;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_k_13;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  t = SSL_string_to_int(m_38);
  n_38 = t;
  t = term_y_12;
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, n_38);
  t = o_6(o_38, n_38, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_38);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_l_13;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  t = term_m_13;
  p_38 = t;
  t = term_m_5;
  q_38 = t;
  t = term_n_13;
  t = o_6(p_38, q_38, t);
  t = term_q_13;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_2, y_2, z_2, t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = t_13;
      {
        ATerm y_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_3, b_3, c_3, t);
            LocalPopChoice(a_14);
          }
        else
          {
            t = y_13;
            t = Option_3_0(d_3, e_3, f_3, t);
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  t = term_w_12;
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, m_61, n_61);
  t = lookup_table_0_1(r_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(m_61, n_61, s_38, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, m_61, n_61);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
      t = term_m_5;
      t = h_0(t);
      y_38 = t;
      t = term_b_14;
      z_38 = t;
      t = term_c_14;
      a_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, y_38);
      t = m_6(z_38, a_39, y_38, t);
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
      t = d_0(t);
      t = term_m_5;
      t = g_0(t);
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
static ATerm h_3 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  t = term_d_14;
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_14, g_39);
  t = o_6(h_39, g_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_39);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, i_3, t);
  return(t);
}
static ATerm m_6 (ATerm h_66, ATerm i_66, ATerm g_66, ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_66, i_66);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_14 = ATgetArgument(t, 0);
            ATerm k_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_66, i_66);
        t = l_6(h_66, i_66, t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = (ATerm) ATempty;
      }
  }
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_66, i_66, (ATerm) ATinsert(CheckATermList(k_39), g_66));
  t = lookup_table_0_1(h_66, t);
  n_39 = t;
  t = (ATerm) ATinsert(CheckATermList(k_39), g_66);
  l_39 = t;
  t = n_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(i_66, l_39, m_39, t);
  t = j_39;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
      t = term_m_5;
      t = p_0(t);
      y_39 = t;
      t = term_b_14;
      z_39 = t;
      t = term_c_14;
      a_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, y_39);
      t = m_6(z_39, a_40, y_39, t);
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
      t = m_0(t);
      t = w_39;
      t = o_0(t);
      e_40 = t;
      t = (ATerm) ATinsert(CheckATermList(x_39), e_40);
    }
  return(t);
}
static ATerm l_3 (ATerm t)
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
  t = term_l_14;
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, h_40);
  t = o_6(i_40, h_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_40);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, m_3, o_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_5;
  t = whoami_0_0(t);
  j_40 = t;
  t = term_n_5;
  l_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_14), j_40);
  m_40 = t;
  t = SSL_printnl(l_40, m_40);
  t = term_s_5;
  k_40 = t;
  t = SSL_exit(k_40);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL;
  t = term_w_12;
  n_40 = t;
  t = term_p_14;
  o_40 = t;
  t = term_q_14;
  t = l_6(n_40, o_40, t);
  return(t);
}
static ATerm h_6 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm r_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_45, z_45);
      LocalPopChoice(t_14);
    }
  else
    {
      t = r_14;
      t = SSL_addr(y_45, z_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_40;
      t = a_112(t);
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
      t = foldr_2_0(a_112, b_112, t);
      v_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_40, v_40);
      t = b_112(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm z_19 = NULL,c_20 = NULL;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(z_19, c_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_40 = NULL,l_19 = NULL,n_19 = NULL;
  t = times_0_0(t);
  n_19 = t;
  t = SSL_explode_term(n_19);
  if(match_cons(t, sym__2))
    {
      ATerm u_14 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_19;
  t = foldr_2_0(q_3, r_3, t);
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
    ATerm w_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_41;
        if((k_41 != t))
          {
            _fail(t);
          }
        t = j_41;
        LocalPopChoice(y_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATmakeAppl(sym__2, k_41, l_41);
        {
          ATerm z_14 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_41, l_41);
              LocalPopChoice(c_15);
            }
          else
            {
              t = z_14;
              t = SSL_gtr(k_41, l_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_41, l_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_121 (ATerm), ATerm t)
{
  ATerm p_41 = NULL;
  p_41 = t;
  {
    ATerm e_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_41 = NULL,u_41 = NULL,v_41 = NULL;
        t = term_w_12;
        u_41 = t;
        t = term_y_12;
        v_41 = t;
        t = term_z_12;
        t = l_6(u_41, v_41, t);
        r_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_41, term_s_5);
        t = geq_0_0(t);
        t = p_41;
        t = y_121(t);
        LocalPopChoice(i_15);
      }
    else
      {
        t = e_15;
        t = p_41;
      }
  }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,a_42 = NULL,b_42 = NULL;
  t = run_time_0_0(t);
  x_41 = t;
  t = term_m_5;
  t = whoami_0_0(t);
  y_41 = t;
  t = term_n_5;
  a_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_15), x_41), term_j_15), y_41);
  b_42 = t;
  t = SSL_printnl(a_42, b_42);
  t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_15), x_41), term_j_15), y_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_13;
  c_42 = t;
  t = SSL_exit(c_42);
  return(t);
}
static ATerm z_3 (ATerm t)
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
            ATerm a_21 = NULL,u_4 = NULL;
            t = SSLgetAnnotations(n_42);
            a_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_42);
            u_4 = t;
            t = SSLsetAnnotations(u_4, a_21);
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
ATerm need_help_1_0 (ATerm o_124 (ATerm), ATerm t)
{
  ATerm o_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_42 = NULL,g_42 = NULL;
      t = term_w_12;
      f_42 = t;
      t = term_z_15;
      g_42 = t;
      t = term_g_16;
      t = l_6(f_42, g_42, t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = o_15;
      t = fetch_1_0(z_3, t);
    }
  t = o_124(t);
  return(t);
}
static ATerm p_6 (ATerm z_70, ATerm a_71, ATerm b_71, ATerm t)
{
  ATerm p_42 = NULL;
  t = SSL_hashtable_put(b_71, z_70, a_71);
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_42);
  return(t);
}
static ATerm q_6 (ATerm c_71, ATerm d_71, ATerm t)
{
  t = SSL_hashtable_get(d_71, c_71);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_67, ATerm t)
{
  ATerm y_42 = NULL;
  t = table_hashtable_0_0(t);
  y_42 = t;
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL;
        t = y_42;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_6(t_67, n_21, t);
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        {
          ATerm v_21 = NULL;
          t = t_67;
          t = table_create_0_0(t);
          t = y_42;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_6(t_67, v_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm h_71, ATerm i_71, ATerm t)
{
  ATerm b_43 = NULL;
  t = SSL_hashtable_create(h_71, i_71);
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_43);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,n_43 = NULL,o_43 = NULL;
  i_43 = t;
  t = term_k_16;
  n_43 = t;
  t = term_l_16;
  o_43 = t;
  t = i_43;
  t = new_hashtable_0_2(n_43, o_43, t);
  j_43 = t;
  t = i_43;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(i_43, j_43, k_43, t);
  t = i_43;
  return(t);
}
static ATerm j_6 (ATerm e_71, ATerm f_71, ATerm t)
{
  ATerm p_43 = NULL;
  t = SSL_hashtable_remove(f_71, e_71);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_43);
  return(t);
}
static ATerm k_6 (ATerm j_71, ATerm t)
{
  ATerm q_43 = NULL;
  t = SSL_hashtable_destroy(j_71);
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
  t = k_6(v_43, t);
  t = t_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(s_43, u_43, t);
  t = s_43;
  return(t);
}
ATerm map_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  static ATerm k_44 (ATerm t);
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
        ATerm f_22 = NULL,i_22 = NULL,j_22 = NULL,x_4 = NULL;
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
        t = b_105(t);
        i_22 = t;
        t = j_44;
        t = k_44(t);
        j_22 = t;
        t = (ATerm) ATinsert(CheckATermList(j_22), i_22);
        x_4 = t;
        t = SSLsetAnnotations(x_4, f_22);
      }
    return(t);
  }
  t = k_44(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_44 = ATgetFirst((ATermList) t);
      o_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_44 = NULL,t_44 = NULL;
        static ATerm b_4 (ATerm t);
        static ATerm b_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_44)), not_null(t_44));
          return(t);
        }
        t = o_44;
        t = l_0(t);
        if(((s_44 != NULL) && (s_44 != t)))
          _fail(t);
        else
          s_44 = t;
        t = n_44;
        t = j_0(t);
        if(((t_44 != NULL) && (t_44 != t)))
          _fail(t);
        else
          t_44 = t;
        t = o_44;
        t = reverse_acc_2_0(j_0, b_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_5;
      t = l_0(t);
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_5 = NULL;
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
  c_5 = t;
  t = SSLsetAnnotations(c_5, z_44);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_45), term_m_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  ATerm r_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_44 = NULL,y_44 = NULL;
      t = term_w_12;
      x_44 = t;
      t = term_p_14;
      y_44 = t;
      t = term_q_14;
      t = l_6(x_44, y_44, t);
      LocalPopChoice(v_16);
    }
  else
    {
      t = r_16;
      t = fetch_1_0(c_4, t);
    }
  t = term_w_16;
  t = echo_0_0(t);
  t = term_b_14;
  v_44 = t;
  t = term_c_14;
  w_44 = t;
  t = term_j_17;
  t = l_6(v_44, w_44, t);
  t = reverse_acc_2_0(_id, d_4, t);
  t = map_1_0(e_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
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
                ATerm o_17 = ATgetFirst((ATermList) t);
                ATerm p_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_45;
          }
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = (ATerm) ATinsert(ATempty, f_45);
      }
  }
  g_45 = t;
  t = term_q_11;
  h_45 = t;
  t = SSL_printnl(h_45, g_45);
  t = f_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  t = term_w_12;
  l_45 = t;
  t = term_p_14;
  m_45 = t;
  t = term_q_14;
  t = l_6(l_45, m_45, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  t = term_q_17;
  n_45 = t;
  t = term_m_5;
  o_45 = t;
  t = term_s_17;
  t = o_6(n_45, o_45, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  t = term_q_17;
  r_45 = t;
  t = term_m_5;
  s_45 = t;
  t = term_s_17;
  t = o_6(r_45, s_45, t);
  t = term_u_17;
  p_45 = t;
  t = term_m_5;
  q_45 = t;
  t = term_v_17;
  t = o_6(p_45, q_45, t);
  t = term_w_17;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_4, g_4, j_4, t);
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      t = Option_3_0(k_4, l_4, m_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,a_46 = NULL,e_5 = NULL;
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
  t = b_75(t);
  w_45 = t;
  t = v_45;
  t = c_75(t);
  x_45 = t;
  t = (ATerm) ATinsert(CheckATermList(x_45), w_45);
  e_5 = t;
  t = SSLsetAnnotations(e_5, t_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_126 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,k_46 = NULL,l_46 = NULL,o_5 = NULL;
  f_46 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_18;
        t = r_126(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
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
  t = term_p_14;
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_14, h_46);
  t = o_6(l_46, h_46, t);
  t = i_46;
  {
    static ATerm v_46 (ATerm t);
    static ATerm v_46 (ATerm t)
    {
      ATerm i_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_46 = NULL;
              o_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_46;
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              t = r_126(t);
              t = Cons_2_0(_id, v_46, t);
            }
          LocalPopChoice(k_18);
        }
      else
        {
          t = i_18;
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
  o_5 = t;
  t = SSLsetAnnotations(o_5, g_46);
  return(t);
}
static ATerm q_4 (ATerm t)
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
static ATerm r_4 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  t = term_z_15;
  k_47 = t;
  t = term_m_5;
  l_47 = t;
  t = term_o_18;
  t = o_6(k_47, l_47, t);
  t = term_p_18;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_q_18;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_126 (ATerm), ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  c_47 = t;
  t = term_b_14;
  d_47 = t;
  t = term_r_18;
  t = lookup_table_0_1(d_47, t);
  i_47 = t;
  t = term_c_14;
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
  t = p_6(f_47, g_47, h_47, t);
  t = c_47;
  {
    static ATerm o_4 (ATerm t);
    static ATerm o_4 (ATerm t)
    {
      ATerm s_18 = t;
      int t_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_126(t);
          LocalPopChoice(t_18);
        }
      else
        {
          t = s_18;
          {
            ATerm u_18 = t;
            int v_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_4, r_4, t_4, t);
                LocalPopChoice(v_18);
              }
            else
              {
                t = u_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
  }
  {
    ATerm w_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_47 = NULL;
        w_47 = t;
        {
          ATerm z_18 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_22 = NULL;
              t = w_47;
              {
                ATerm d_19 = t;
                int e_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_22 = NULL,s_22 = NULL;
                    t = term_w_12;
                    r_22 = t;
                    t = term_z_15;
                    s_22 = t;
                    t = term_g_16;
                    t = l_6(r_22, s_22, t);
                    LocalPopChoice(e_19);
                  }
                else
                  {
                    t = d_19;
                    t = fetch_1_0(v_4, t);
                  }
              }
              t = w_47;
              t = default_system_usage_0_0(t);
              t = term_h_13;
              q_22 = t;
              t = SSL_exit(q_22);
              LocalPopChoice(b_19);
            }
          else
            {
              t = z_18;
              {
                ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
                t = term_w_12;
                x_22 = t;
                t = term_q_17;
                y_22 = t;
                t = term_f_19;
                t = l_6(x_22, y_22, t);
                t = w_47;
                t = default_system_about_0_0(t);
                t = term_h_13;
                w_22 = t;
                t = SSL_exit(w_22);
              }
            }
        }
        LocalPopChoice(y_18);
      }
    else
      {
        t = w_18;
        {
          ATerm g_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
              static ATerm w_4 (ATerm t);
              static ATerm w_4 (ATerm t)
              {
                ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,r_5 = NULL;
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
                r_5 = t;
                t = SSLsetAnnotations(r_5, a_48);
                return(t);
              }
              t = fetch_1_0(w_4, t);
              t = term_n_5;
              y_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_47)), term_j_19);
              z_47 = t;
              t = SSL_printnl(y_47, z_47);
              t = (ATerm) ATmakeAppl(sym__2, term_n_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_47)), term_j_19));
              t = default_system_usage_0_0(t);
              t = term_s_5;
              x_47 = t;
              t = SSL_exit(x_47);
              LocalPopChoice(h_19);
            }
          else
            {
              t = g_19;
            }
        }
      }
  }
  b_47 = t;
  t = term_b_14;
  t = table_destroy_0_0(t);
  t = b_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  t = parse_options_1_0(q_124, t);
  h_48 = t;
  t = term_k_19;
  t = table_create_0_0(t);
  t = term_k_19;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_19, term_m_19, h_48);
  t = lookup_table_0_1(i_48, t);
  l_48 = t;
  t = term_m_19;
  j_48 = t;
  t = l_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(j_48, h_48, k_48, t);
  t = h_48;
  t = s_124(t);
  {
    ATerm o_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_124, t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = o_19;
        {
          ATerm r_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_124(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_19);
            }
          else
            {
              t = r_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = if_verbose2_1_0(i_5, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL;
  t = term_u_19;
  m_48 = t;
  t = term_m_5;
  n_48 = t;
  t = term_v_19;
  t = o_6(m_48, n_48, t);
  t = term_x_19;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  o_48 = t;
  t = term_w_12;
  s_48 = t;
  t = term_p_14;
  t_48 = t;
  t = term_q_14;
  t = l_6(s_48, t_48, t);
  p_48 = t;
  t = term_n_5;
  q_48 = t;
  t = (ATerm) ATinsert(ATempty, p_48);
  r_48 = t;
  t = SSL_printnl(q_48, r_48);
  t = o_48;
  return(t);
}
ATerm iowrap_3_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm t)
{
  static ATerm y_4 (ATerm t);
  static ATerm a_5 (ATerm t);
  static ATerm y_4 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_124(t);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        {
          ATerm f_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_20);
            }
          else
            {
              t = f_20;
              {
                ATerm h_20 = t;
                int i_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(i_20);
                  }
                else
                  {
                    t = h_20;
                    {
                      ATerm k_20 = t;
                      int l_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_5, g_5, h_5, t);
                          LocalPopChoice(l_20);
                        }
                      else
                        {
                          t = k_20;
                          {
                            ATerm m_20 = t;
                            int n_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(n_20);
                              }
                            else
                              {
                                t = m_20;
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
      ATerm p_20 = t;
      int q_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm j_5 (ATerm t);
          static ATerm j_5 (ATerm t)
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
          t = fetch_1_0(j_5, t);
          LocalPopChoice(q_20);
        }
      else
        {
          t = p_20;
          t = term_t_20;
          u_48 = t;
        }
    }
    t = not_null(u_48);
    t = ReadFromFile_0_0(t);
    w_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
    t = apply_strategy_1_0(z_123, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(y_4, b_124, z_4, a_5, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,w_5 = NULL;
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
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_49 = NULL;
        t = SSL_explode_term(c_49);
        if(match_cons(t, sym__2))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            ATerm x_20 = ATgetArgument(t, 1);
            if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
              {
                f_49 = ATgetFirst((ATermList) x_20);
                {
                  ATerm y_20 = (ATerm) ATgetNext((ATermList) x_20);
                  if(((ATgetType(y_20) != AT_LIST) || !(ATisEmpty(y_20))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = f_49;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
      }
  }
  t = topdown_1_0(l_5, t);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_49, d_49);
  w_5 = t;
  t = SSLsetAnnotations(w_5, a_49);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm z_20 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = z_20;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(k_5, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}

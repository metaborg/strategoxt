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
Symbol sym_ParenStrat_1;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
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
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
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
ATerm term_m_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_z_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_e_8;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_l_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_d_6;
ATerm term_t_5;
ATerm term_r_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_h_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATempty);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Sort_2, term_z_6, (ATerm) ATempty);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_7);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_6);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Call_2, term_l_9, (ATerm) ATempty);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-union", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-union", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-intersect", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-intersect", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Call_2, term_q_10, (ATerm) ATempty);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Call_2, term_u_7, (ATerm) ATempty);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_x_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_h_5);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_j_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_f_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_w_13);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_h_5);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_h_5);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_h_5);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__3, term_r_13, term_w_13, (ATerm) ATempty);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_g_17);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_h_5);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm t_112 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm mk_rulenames_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm h_103 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t);
static ATerm d_29 (ATerm y_14, ATerm z_14, ATerm t);
static ATerm e_29 (ATerm r_15, ATerm t_15, ATerm t);
static ATerm g_29 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm c_16, ATerm t);
static ATerm h_29 (ATerm m_16, ATerm n_16, ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm t_95 (ATerm), ATerm t);
static ATerm u_5 (ATerm i_42, ATerm j_42, ATerm t);
static ATerm v_5 (ATerm d_27, ATerm e_27, ATerm t);
static ATerm x_5 (ATerm w_101 (ATerm), ATerm u_192, ATerm j_27, ATerm t);
static ATerm w_5 (ATerm z_26, ATerm a_27, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm p_120 (ATerm), ATerm t);
static ATerm w_33 (ATerm n_33, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_5 (ATerm f_27, ATerm t);
static ATerm z_5 (ATerm b_41, ATerm c_41, ATerm t);
static ATerm a_6 (ATerm k_42, ATerm l_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_35 (ATerm g_34, ATerm t);
static ATerm n_35 (ATerm p_34, ATerm q_34, ATerm r_34, ATerm t);
static ATerm o_35 (ATerm z_34, ATerm a_35, ATerm b_35, ATerm t);
static ATerm b_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_102 (ATerm), ATerm t);
static ATerm g_6 (ATerm b_66, ATerm c_66, ATerm t);
ATerm if_verbose2_1_0 (ATerm y_118 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_6 (ATerm n_59, ATerm o_59, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_6 (ATerm i_64, ATerm j_64, ATerm h_64, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_6 (ATerm e_45, ATerm f_45, ATerm t);
ATerm foldr_2_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_118 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm need_help_1_0 (ATerm n_121 (ATerm), ATerm t);
static ATerm k_6 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t);
static ATerm l_6 (ATerm q_68, ATerm r_68, ATerm t);
ATerm lookup_table_0_1 (ATerm u_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm e_6 (ATerm s_68, ATerm t_68, ATerm t);
static ATerm f_6 (ATerm x_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm f_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_123 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm parse_options_1_0 (ATerm p_123 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm iowrap_3_0 (ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
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
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL,o_0 = NULL,p_0 = NULL;
  b_0 = t;
  t = term_h_5;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_i_5;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_5), f_0), term_j_5);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_m_5;
  j_0 = t;
  t = SSL_exit(j_0);
  t = b_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm t_112 (ATerm), ATerm t)
{
  static ATerm m_1 (ATerm t)
  {
    ATerm i_1 = NULL,j_1 = NULL,l_1 = NULL;
    ATerm p_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_112(t);
        LocalPopChoice(q_5);
      }
    else
      {
        t = p_5;
      }
    l_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_1 = ATgetFirst((ATermList) t);
        j_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_0 = NULL,t_0 = NULL,y_0 = NULL;
          t = SSLgetAnnotations(l_1);
          q_0 = t;
          t = j_1;
          t = m_1(t);
          t_0 = t;
          t = (ATerm) ATinsert(CheckATermList(t_0), i_1);
          y_0 = t;
          t = SSLsetAnnotations(y_0, q_0);
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
  t = m_1(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_1 = ATgetFirst((ATermList) t);
      x_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = x_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_1 = ATgetFirst((ATermList) t);
      z_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_1;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(z_1), term_r_5);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(z_1), term_t_5);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(z_1), term_d_6);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(z_1), term_o_6);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(z_1), term_p_6);
                }
            }
        }
    }
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm g_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  if(match_cons(t, sym_Str_1))
    {
      j_9 = ATgetArgument(t, 0);
      {
        ATerm m_9 = NULL,s_1 = NULL,t_1 = NULL,k_1 = NULL;
        t = SSL_explode_string(j_9);
        t = unquote_chars_2_0(a_0, h_0, t);
        k_1 = t;
        t = SSL_implode_string(k_1);
        t_1 = t;
        t = SSL_explode_string(t_1);
        t = unescape_chars_1_0(m_0, t);
        s_1 = t;
        t = SSL_implode_string(s_1);
        m_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, m_9);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          j_9 = ATgetArgument(t, 0);
          {
            ATerm i_2 = NULL;
            t = SSL_string_to_real(j_9);
            i_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, i_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              j_9 = ATgetArgument(t, 0);
              {
                ATerm o_2 = NULL;
                t = SSL_string_to_int(j_9);
                o_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, o_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  j_9 = ATgetArgument(t, 0);
                  k_9 = ATgetArgument(t, 1);
                  g_9 = ATgetArgument(t, 2);
                  t = SSL_is_string(g_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, j_9, k_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_9), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      j_9 = ATgetArgument(t, 0);
                      {
                        ATerm j_3 = NULL,t_3 = NULL,v_3 = NULL,a_1 = NULL;
                        t = SSLgetAnnotations(i_9);
                        j_3 = t;
                        t = SSL_explode_string(j_9);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm q_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(q_6) != AT_INT) || (ATgetInt((ATermInt) q_6) != 39)))
                              _fail(t);
                            t_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(t_3);
                        v_3 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_3);
                        a_1 = t;
                        t = SSLsetAnnotations(a_1, j_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          j_9 = ATgetArgument(t, 0);
                          k_9 = ATgetArgument(t, 1);
                          g_9 = ATgetArgument(t, 2);
                          {
                            ATerm n_4 = NULL,v_4 = NULL,x_4 = NULL,b_1 = NULL;
                            t = SSLgetAnnotations(i_9);
                            n_4 = t;
                            t = SSL_explode_string(j_9);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm r_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(r_6) != AT_INT) || (ATgetInt((ATermInt) r_6) != 39)))
                                  _fail(t);
                                v_4 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(v_4);
                            x_4 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, x_4, k_9, g_9);
                            b_1 = t;
                            t = SSLsetAnnotations(b_1, n_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              j_9 = ATgetArgument(t, 0);
                              k_9 = ATgetArgument(t, 1);
                              g_9 = ATgetArgument(t, 2);
                              {
                                ATerm o_5 = NULL,i_6 = NULL,m_6 = NULL,c_1 = NULL;
                                t = SSLgetAnnotations(i_9);
                                o_5 = t;
                                t = SSL_explode_string(j_9);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm t_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(t_6) != AT_INT) || (ATgetInt((ATermInt) t_6) != 39)))
                                      _fail(t);
                                    i_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(i_6);
                                m_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, m_6, k_9, g_9);
                                c_1 = t;
                                t = SSLsetAnnotations(c_1, o_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  j_9 = ATgetArgument(t, 0);
                                  k_9 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_7 = NULL,h_7 = NULL,c_8 = NULL,d_1 = NULL;
                                    t = SSLgetAnnotations(i_9);
                                    c_7 = t;
                                    t = SSL_explode_string(j_9);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm u_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(u_6) != AT_INT) || (ATgetInt((ATermInt) u_6) != 39)))
                                          _fail(t);
                                        h_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(h_7);
                                    c_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, c_8, k_9);
                                    d_1 = t;
                                    t = SSLsetAnnotations(d_1, c_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      j_9 = ATgetArgument(t, 0);
                                      {
                                        ATerm n_8 = NULL,v_8 = NULL,y_8 = NULL,f_1 = NULL;
                                        t = SSLgetAnnotations(i_9);
                                        n_8 = t;
                                        t = SSL_explode_string(j_9);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm v_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(v_6) != AT_INT) || (ATgetInt((ATermInt) v_6) != 39)))
                                              _fail(t);
                                            v_8 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(v_8);
                                        y_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, y_8);
                                        f_1 = t;
                                        t = SSLsetAnnotations(f_1, n_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          j_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm v_9 = NULL,y_9 = NULL,z_9 = NULL,g_1 = NULL;
                                            t = SSLgetAnnotations(i_9);
                                            v_9 = t;
                                            t = SSL_explode_string(j_9);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm w_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(w_6) != AT_INT) || (ATgetInt((ATermInt) w_6) != 39)))
                                                  _fail(t);
                                                y_9 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(y_9);
                                            z_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, z_9);
                                            g_1 = t;
                                            t = SSLsetAnnotations(g_1, v_9);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              j_9 = ATgetArgument(t, 0);
                                              k_9 = ATgetArgument(t, 1);
                                              {
                                                ATerm u_10 = NULL,x_10 = NULL,y_10 = NULL,n_1 = NULL;
                                                t = SSLgetAnnotations(i_9);
                                                u_10 = t;
                                                t = SSL_explode_string(j_9);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm x_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(x_6) != AT_INT) || (ATgetInt((ATermInt) x_6) != 39)))
                                                      _fail(t);
                                                    x_10 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(x_10);
                                                y_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, y_10, k_9);
                                                n_1 = t;
                                                t = SSLsetAnnotations(n_1, u_10);
                                              }
                                            }
                                          else
                                            {
                                              ATerm t_11 = NULL,e_12 = NULL,f_12 = NULL,o_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  j_9 = ATgetArgument(t, 0);
                                                  k_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(i_9);
                                              t_11 = t;
                                              t = SSL_explode_string(j_9);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm y_6 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(y_6) != AT_INT) || (ATgetInt((ATermInt) y_6) != 39)))
                                                    _fail(t);
                                                  e_12 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(e_12);
                                              f_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, f_12, k_9);
                                              o_1 = t;
                                              t = SSLsetAnnotations(o_1, t_11);
                                            }
                                        }
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
ATerm foldr_3_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_13;
      t = g_109(t);
    }
  else
    {
      ATerm p_13 = NULL,q_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_13 = ATgetFirst((ATermList) t);
          k_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_13;
      t = i_109(t);
      p_13 = t;
      t = k_13;
      t = foldr_3_0(g_109, h_109, i_109, t);
      q_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
      t = h_109(t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_a_7;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm s_13 = NULL,u_13 = NULL,d_14 = NULL;
  s_13 = t;
  t = SSL_explode_term(s_13);
  if(match_cons(t, sym__2))
    {
      ATerm b_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_7 = ATgetArgument(t, 1);
        if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
          {
            u_13 = ATgetFirst((ATermList) d_7);
            {
              ATerm e_7 = (ATerm) ATgetNext((ATermList) d_7);
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
      ATerm f_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_7 = ATgetArgument(t, 1);
        if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
          {
            ATerm i_7 = ATgetFirst((ATermList) g_7);
            ATerm j_7 = (ATerm) ATgetNext((ATermList) g_7);
            if(((ATgetType(j_7) == AT_LIST) && !(ATisEmpty(j_7))))
              {
                d_14 = ATgetFirst((ATermList) j_7);
                {
                  ATerm k_7 = (ATerm) ATgetNext((ATermList) j_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, d_14), u_13));
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, v_13);
  return(t);
}
ATerm mk_rulenames_0_0 (ATerm t)
{
  t = foldr_3_0(r_0, s_0, u_0, t);
  return(t);
}
ATerm at_last_1_0 (ATerm h_103 (ATerm), ATerm t)
{
  static ATerm b_12 (ATerm t)
  {
    ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
    x_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_11 = ATgetFirst((ATermList) t);
        z_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_7 = t;
      int n_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_12 = NULL,k_3 = NULL;
          t = SSLgetAnnotations(x_11);
          u_12 = t;
          t = z_11;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(z_11), y_11);
          k_3 = t;
          t = SSLsetAnnotations(k_3, u_12);
          t = h_103(t);
          LocalPopChoice(n_7);
        }
      else
        {
          t = m_7;
          {
            ATerm t_13 = NULL,y_13 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(x_11);
            t_13 = t;
            t = z_11;
            t = b_12(t);
            y_13 = t;
            t = (ATerm) ATinsert(CheckATermList(y_13), y_11);
            l_3 = t;
            t = SSLsetAnnotations(l_3, t_13);
          }
        }
    }
    return(t);
  }
  t = b_12(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm l_12 = NULL,n_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_12 = ATgetFirst((ATermList) t);
      n_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_12;
    }
  else
    {
      t = n_12;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm z_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_7 = ATgetFirst((ATermList) t);
      z_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_12;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,y_12 = NULL;
  v_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_12 = ATgetFirst((ATermList) t);
      {
        ATerm p_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_12;
  t = f_112(t);
  t = v_12;
  t = last_0_0(t);
  t = g_112(t);
  t = v_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_7 = ATgetFirst((ATermList) t);
      w_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_12;
  t = at_last_1_0(v_0, t);
  return(t);
}
static ATerm d_29 (ATerm y_14, ATerm z_14, ATerm t)
{
  t = y_14;
  {
    ATerm r_7 = t;
    if((PushChoice() == 0))
      {
        ATerm g_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_3 = NULL;
        n_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_15 = ATgetFirst((ATermList) t);
            m_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_15);
        g_15 = t;
        t = m_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_15), l_15);
        o_3 = t;
        t = SSLsetAnnotations(o_3, g_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_7, y_14);
  return(t);
}
static ATerm e_29 (ATerm r_15, ATerm t_15, ATerm t)
{
  t = r_15;
  {
    ATerm t_7 = t;
    if((PushChoice() == 0))
      {
        ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,p_3 = NULL;
        y_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_15 = ATgetFirst((ATermList) t);
            x_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_15);
        v_15 = t;
        t = x_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_15), w_15);
        p_3 = t;
        t = SSLsetAnnotations(p_3, v_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_7, r_15);
  return(t);
}
static ATerm g_29 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm c_16, ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  t = SSL_explode_string(z_15);
  t = unquote_chars_2_0(w_0, x_0, t);
  l_16 = t;
  t = SSL_implode_string(l_16);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, k_16, a_16, b_16);
  return(t);
}
static ATerm h_29 (ATerm m_16, ATerm n_16, ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  t = SSL_explode_string(m_16);
  t = unquote_chars_2_0(z_0, e_1, t);
  z_16 = t;
  t = SSL_implode_string(z_16);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, y_16, (ATerm) ATempty);
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
static ATerm z_0 (ATerm t)
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
  t = term_a_7;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm l_18 = NULL,n_18 = NULL,f_14 = NULL;
  l_18 = t;
  t = SSL_explode_term(l_18);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            n_18 = ATgetFirst((ATermList) w_7);
            {
              ATerm x_7 = (ATerm) ATgetNext((ATermList) w_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_18);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            ATerm a_8 = ATgetFirst((ATermList) z_7);
            ATerm b_8 = (ATerm) ATgetNext((ATermList) z_7);
            if(((ATgetType(b_8) == AT_LIST) && !(ATisEmpty(b_8))))
              {
                f_14 = ATgetFirst((ATermList) b_8);
                {
                  ATerm d_8 = (ATerm) ATgetNext((ATermList) b_8);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, f_14), n_18));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_e_8;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,r_14 = NULL;
  b_20 = t;
  t = SSL_explode_term(b_20);
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_8 = ATgetArgument(t, 1);
        if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
          {
            c_20 = ATgetFirst((ATermList) g_8);
            {
              ATerm h_8 = (ATerm) ATgetNext((ATermList) g_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(b_20);
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_8 = ATgetArgument(t, 1);
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            ATerm k_8 = ATgetFirst((ATermList) j_8);
            ATerm l_8 = (ATerm) ATgetNext((ATermList) j_8);
            if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
              {
                r_14 = ATgetFirst((ATermList) l_8);
                {
                  ATerm m_8 = (ATerm) ATgetNext((ATermList) l_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, r_14), c_20));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,w_14 = NULL;
  j_20 = t;
  t = SSL_explode_term(j_20);
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_8 = ATgetArgument(t, 1);
        if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
          {
            k_20 = ATgetFirst((ATermList) p_8);
            {
              ATerm q_8 = (ATerm) ATgetNext((ATermList) p_8);
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
      ATerm r_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_8 = ATgetArgument(t, 1);
        if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
          {
            ATerm t_8 = ATgetFirst((ATermList) s_8);
            ATerm u_8 = (ATerm) ATgetNext((ATermList) s_8);
            if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
              {
                w_14 = ATgetFirst((ATermList) u_8);
                {
                  ATerm w_8 = (ATerm) ATgetNext((ATermList) u_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, w_14), k_20));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_e_8;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm q_20 = NULL,t_20 = NULL,b_15 = NULL;
  q_20 = t;
  t = SSL_explode_term(q_20);
  if(match_cons(t, sym__2))
    {
      ATerm x_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_8 = ATgetArgument(t, 1);
        if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
          {
            t_20 = ATgetFirst((ATermList) z_8);
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
  t = SSL_explode_term(q_20);
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_9 = ATgetArgument(t, 1);
        if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
          {
            ATerm d_9 = ATgetFirst((ATermList) c_9);
            ATerm e_9 = (ATerm) ATgetNext((ATermList) c_9);
            if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
              {
                b_15 = ATgetFirst((ATermList) e_9);
                {
                  ATerm f_9 = (ATerm) ATgetNext((ATermList) e_9);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, b_15), t_20));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm j_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, r_21), j_21));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_a_7;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, v_21), u_21));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  if(match_cons(t, sym__2))
    {
      e_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_9, (ATerm) ATinsert(ATinsert(ATempty, f_26), e_26));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_n_9;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  if(match_cons(t, sym__2))
    {
      l_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_9, (ATerm) ATinsert(ATinsert(ATempty, m_26), l_26));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,o_17 = NULL,p_17 = NULL,x_17 = NULL;
  o_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      p_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
      {
        ATerm g_18 = NULL;
        t = x_17;
        t = foldr_2_0(h_1, p_1, t);
        g_18 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, p_17, g_18);
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
                ATerm k_14 = NULL;
                t = p_17;
                {
                  ATerm o_9 = t;
                  int p_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_q_9;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_p_6;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_o_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_d_6;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_r_9;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(p_9);
                    }
                  else
                    {
                      t = o_9;
                      {
                        ATerm n_14 = NULL;
                        t = SSL_explode_string(p_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(s_9) != AT_INT) || (ATgetInt((ATermInt) s_9) != 39)))
                              _fail(t);
                            {
                              ATerm t_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
                                {
                                  n_14 = ATgetFirst((ATermList) t_9);
                                  {
                                    ATerm u_9 = (ATerm) ATgetNext((ATermList) t_9);
                                    if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
                                      {
                                        ATerm w_9 = ATgetFirst((ATermList) u_9);
                                        if(((ATgetType(w_9) != AT_INT) || (ATgetInt((ATermInt) w_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm x_9 = (ATerm) ATgetNext((ATermList) u_9);
                                          if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
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
                        t = n_14;
                      }
                    }
                }
                k_14 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, k_14);
              }
            }
          else
            {
              if(match_cons(t, sym_DynRuleUnion_3))
                {
                  p_17 = ATgetArgument(t, 0);
                  x_17 = ATgetArgument(t, 1);
                  l_17 = ATgetArgument(t, 2);
                  {
                    ATerm e_19 = NULL;
                    t = x_17;
                    t = mk_rulenames_0_0(t);
                    e_19 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_b_10, (ATerm)ATinsert(ATinsert(ATempty, l_17), p_17), (ATerm) ATinsert(ATempty, e_19));
                  }
                }
              else
                {
                  if(match_cons(t, sym_DynRuleUnionFix_2))
                    {
                      p_17 = ATgetArgument(t, 0);
                      x_17 = ATgetArgument(t, 1);
                      {
                        ATerm i_19 = NULL;
                        t = p_17;
                        t = mk_rulenames_0_0(t);
                        i_19 = t;
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_10, (ATerm)ATinsert(ATempty, x_17), (ATerm) ATinsert(ATempty, i_19));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynRuleIntersect_3))
                        {
                          p_17 = ATgetArgument(t, 0);
                          x_17 = ATgetArgument(t, 1);
                          l_17 = ATgetArgument(t, 2);
                          {
                            ATerm o_19 = NULL;
                            t = x_17;
                            t = mk_rulenames_0_0(t);
                            o_19 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_10, (ATerm)ATinsert(ATinsert(ATempty, l_17), p_17), (ATerm) ATinsert(ATempty, o_19));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleIntersectFix_2))
                            {
                              p_17 = ATgetArgument(t, 0);
                              x_17 = ATgetArgument(t, 1);
                              {
                                ATerm s_19 = NULL;
                                t = p_17;
                                t = mk_rulenames_0_0(t);
                                s_19 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_10, (ATerm)ATinsert(ATempty, x_17), (ATerm) ATinsert(ATempty, s_19));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SortTuple_1))
                                {
                                  p_17 = ATgetArgument(t, 0);
                                  {
                                    ATerm z_19 = NULL;
                                    t = p_17;
                                    t = foldr_2_0(q_1, r_1, t);
                                    z_19 = t;
                                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_i_10, (ATerm) ATinsert(ATempty, z_19));
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_SortListTl_2))
                                    {
                                      p_17 = ATgetArgument(t, 0);
                                      x_17 = ATgetArgument(t, 1);
                                      {
                                        static ATerm u_1 (ATerm t)
                                        {
                                          t = x_17;
                                          return(t);
                                        }
                                        t = p_17;
                                        t = foldr_2_0(u_1, v_1, t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SortList_1))
                                        {
                                          p_17 = ATgetArgument(t, 0);
                                          t = p_17;
                                          t = foldr_2_0(a_2, b_2, t);
                                        }
                                      else
                                        {
                                          ATerm j_10 = t;
                                          int k_10 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Con4_4))
                                                {
                                                  p_17 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm l_10 = ATgetArgument(t, 1);
                                                  }
                                                  l_17 = ATgetArgument(t, 2);
                                                  c_17 = ATgetArgument(t, 3);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(k_10);
                                              t = (ATerm) ATmakeAppl(sym_Con_3, p_17, l_17, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_17), (ATerm) ATempty));
                                            }
                                          else
                                            {
                                              t = j_10;
                                              {
                                                ATerm m_10 = t;
                                                int n_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Con3_3))
                                                      {
                                                        p_17 = ATgetArgument(t, 0);
                                                        {
                                                          ATerm o_10 = ATgetArgument(t, 1);
                                                        }
                                                        l_17 = ATgetArgument(t, 2);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_10);
                                                    t = (ATerm) ATmakeAppl(sym_Con_3, p_17, l_17, term_r_10);
                                                  }
                                                else
                                                  {
                                                    t = m_10;
                                                    if(match_cons(t, sym_Con1_2))
                                                      {
                                                        p_17 = ATgetArgument(t, 0);
                                                        x_17 = ATgetArgument(t, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Con_3, p_17, x_17, term_r_10);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ListTail_2))
                                                          {
                                                            p_17 = ATgetArgument(t, 0);
                                                            x_17 = ATgetArgument(t, 1);
                                                            {
                                                              static ATerm c_2 (ATerm t)
                                                              {
                                                                t = x_17;
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
                                                                        d_17 = ATgetFirst((ATermList) t);
                                                                        j_17 = (ATerm) ATgetNext((ATermList) t);
                                                                        t = j_17;
                                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                          {
                                                                            ATerm s_10 = t;
                                                                            int t_10 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = d_29(p_17, o_17, t);
                                                                                LocalPopChoice(t_10);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = s_10;
                                                                                t = d_17;
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            t = d_29(p_17, o_17, t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_29(p_17, o_17, t);
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
                                                                                            x_17 = ATgetArgument(t, 1);
                                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_17), x_17);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_ListCong_2))
                                                                                              {
                                                                                                p_17 = ATgetArgument(t, 0);
                                                                                                x_17 = ATgetArgument(t, 1);
                                                                                                {
                                                                                                  static ATerm g_2 (ATerm t)
                                                                                                  {
                                                                                                    t = x_17;
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
                                                                                                    t = foldr_2_0(j_2, k_2, t);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                                      {
                                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                                        x_17 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_u_7, (ATerm) ATinsert(CheckATermList(x_17), p_17));
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                                          {
                                                                                                            p_17 = ATgetArgument(t, 0);
                                                                                                            t = p_17;
                                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                              {
                                                                                                                d_17 = ATgetFirst((ATermList) t);
                                                                                                                j_17 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                t = j_17;
                                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                  {
                                                                                                                    ATerm v_10 = t;
                                                                                                                    int w_10 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = e_29(p_17, o_17, t);
                                                                                                                        LocalPopChoice(w_10);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = v_10;
                                                                                                                        t = d_17;
                                                                                                                      }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = e_29(p_17, o_17, t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = e_29(p_17, o_17, t);
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
                                                                                                                    x_17 = ATgetArgument(t, 1);
                                                                                                                    t = x_17;
                                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                                      {
                                                                                                                        k_17 = ATgetArgument(t, 0);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_b_11, (ATerm) ATinsert(ATinsert(ATempty, k_17), p_17));
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
                                                                                                                            x_17 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, p_17, x_17, term_c_11);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                                              {
                                                                                                                                p_17 = ATgetArgument(t, 0);
                                                                                                                                x_17 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, p_17, x_17, term_c_11);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                                  {
                                                                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                                                                    x_17 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, p_17, (ATerm)ATempty, x_17);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_CondChoice_3))
                                                                                                                                      {
                                                                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                                                                        x_17 = ATgetArgument(t, 1);
                                                                                                                                        l_17 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, p_17), x_17, l_17);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                                                          {
                                                                                                                                            p_17 = ATgetArgument(t, 0);
                                                                                                                                            x_17 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, x_17, p_17);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_PrimT_3))
                                                                                                                                              {
                                                                                                                                                p_17 = ATgetArgument(t, 0);
                                                                                                                                                x_17 = ATgetArgument(t, 1);
                                                                                                                                                l_17 = ATgetArgument(t, 2);
                                                                                                                                                t = g_29(p_17, x_17, l_17, o_17, t);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                                                  {
                                                                                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                                                                                    t = h_29(p_17, o_17, t);
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
                                                                                                                                                            x_17 = ATgetArgument(t, 1);
                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDef_3, p_17, (ATerm)ATempty, x_17);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                                                              {
                                                                                                                                                                p_17 = ATgetArgument(t, 0);
                                                                                                                                                                x_17 = ATgetArgument(t, 1);
                                                                                                                                                                l_17 = ATgetArgument(t, 2);
                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, p_17, x_17, l_17);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                                                  {
                                                                                                                                                                    p_17 = ATgetArgument(t, 0);
                                                                                                                                                                    x_17 = ATgetArgument(t, 1);
                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDef_3, p_17, (ATerm)ATempty, x_17);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_RDec_2))
                                                                                                                                                                      {
                                                                                                                                                                        p_17 = ATgetArgument(t, 0);
                                                                                                                                                                        x_17 = ATgetArgument(t, 1);
                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDecT_3, p_17, x_17, (ATerm) ATempty);
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
                                                                                                                                                                                x_17 = ATgetArgument(t, 1);
                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, p_17, (ATerm)ATempty, x_17);
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_Module_2))
                                                                                                                                                                                  {
                                                                                                                                                                                    ATerm d_11 = ATgetArgument(t, 0);
                                                                                                                                                                                    x_17 = ATgetArgument(t, 1);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Specification_1, x_17);
                                                                                                                                                                              }
                                                                                                                                                                          }
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                            }
                                        }
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
ATerm repeat_2_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm t)
{
  static ATerm i_29 (ATerm t)
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_94(t);
        t = i_29(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = u_94(t);
      }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm topdown_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  static ATerm l_2 (ATerm t)
  {
    t = topdown_1_0(t_95, t);
    return(t);
  }
  t = t_95(t);
  t = SRTS_all(l_2, t);
  return(t);
}
static ATerm u_5 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm j_29 = NULL;
  t = SSL_fputc(i_42, j_42);
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_29);
  return(t);
}
static ATerm v_5 (ATerm d_27, ATerm e_27, ATerm t)
{
  ATerm k_29 = NULL;
  t = SSL_write_term_to_stream_text(d_27, e_27);
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_29);
  return(t);
}
static ATerm x_5 (ATerm w_101 (ATerm), ATerm u_192, ATerm j_27, ATerm t)
{
  ATerm n_29 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_192, term_g_11);
  t = b_6(t);
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_29, j_27);
  t = w_101(t);
  t = fclose_0_0(t);
  t = j_27;
  return(t);
}
static ATerm w_5 (ATerm z_26, ATerm a_27, ATerm t)
{
  ATerm q_29 = NULL;
  t = SSL_write_term_to_stream_baf(z_26, a_27);
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_29);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm s_15 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if(match_cons(h_11, sym_Stream_1))
        {
          s_15 = ATgetArgument(h_11, 0);
        }
      else
        _fail(t);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(s_15, d_16, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm v_16 = NULL,x_16 = NULL,a_17 = NULL,b_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if(match_cons(i_11, sym_Stream_1))
        {
          b_17 = ATgetArgument(i_11, 0);
        }
      else
        _fail(t);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(b_17, e_17, t);
  v_16 = t;
  t = term_d_6;
  x_16 = t;
  t = v_16;
  if(match_cons(t, sym_Stream_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_6, v_16);
  t = u_5(x_16, a_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,c_30 = NULL,g_30 = NULL,i_30 = NULL,k_30 = NULL,m_30 = NULL,n_30 = NULL,p_32 = NULL,q_32 = NULL,z_3 = NULL,u_3 = NULL;
  x_29 = t;
  if(match_cons(t, sym__2))
    {
      k_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_29);
  i_30 = t;
  t = k_30;
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_29 != NULL) && (w_29 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(m_2, t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        t = term_l_11;
        w_29 = t;
      }
  }
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, m_30);
  u_3 = t;
  t = SSLsetAnnotations(u_3, i_30);
  t = x_29;
  if(match_cons(t, sym__2))
    {
      z_29 = ATgetArgument(t, 0);
      c_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_29);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_29, (ATerm) ATmakeAppl(sym__2, not_null(w_29), c_30));
  z_3 = t;
  t = SSLsetAnnotations(z_3, y_29);
  g_30 = t;
  if(match_cons(t, sym__2))
    {
      p_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_15 = NULL,k_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,a_4 = NULL;
        t = SSLgetAnnotations(g_30);
        h_15 = t;
        t = p_32;
        t = fetch_1_0(n_2, t);
        k_15 = t;
        t = q_32;
        if(match_cons(t, sym__2))
          {
            p_15 = ATgetArgument(t, 0);
            q_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(p_2, p_15, q_15, t);
        o_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_15, o_15);
        a_4 = t;
        t = SSLsetAnnotations(a_4, h_15);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm p_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,b_4 = NULL;
          t = SSLgetAnnotations(g_30);
          p_16 = t;
          t = q_32;
          if(match_cons(t, sym__2))
            {
              t_16 = ATgetArgument(t, 0);
              u_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_5(q_2, t_16, u_16, t);
          s_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_32, s_16);
          b_4 = t;
          t = SSLsetAnnotations(b_4, p_16);
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
ATerm apply_strategy_1_0 (ATerm p_120 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  x_32 = t;
  t = dtime_0_0(t);
  t = x_32;
  t = p_120(t);
  w_32 = t;
  t = dtime_0_0(t);
  t_32 = t;
  t = w_32;
  if(match_cons(t, sym__2))
    {
      u_32 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_32), (ATerm) ATmakeAppl(sym_Runtime_1, t_32)), v_32);
  return(t);
}
static ATerm w_33 (ATerm n_33, ATerm t)
{
  t = SSL_fclose(n_33);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_33 = NULL,u_33 = NULL;
  u_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_33 = ATgetArgument(t, 0);
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_33);
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            t = w_33(u_33, t);
          }
      }
    }
  else
    {
      t = w_33(u_33, t);
    }
  return(t);
}
static ATerm y_5 (ATerm f_27, ATerm t)
{
  t = SSL_read_term_from_stream(f_27);
  return(t);
}
static ATerm z_5 (ATerm b_41, ATerm c_41, ATerm t)
{
  t = SSL_strcat(b_41, c_41);
  return(t);
}
static ATerm a_6 (ATerm k_42, ATerm l_42, ATerm t)
{
  ATerm x_33 = NULL;
  t = SSL_fopen(k_42, l_42);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_33);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_33 = NULL;
  t = SSL_stdin_stream();
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_33);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_33 = NULL;
  t = SSL_stdout_stream();
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_33);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_34 = NULL;
  t = SSL_stderr_stream();
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_34);
  return(t);
}
static ATerm m_35 (ATerm g_34, ATerm t)
{
  ATerm l_34 = NULL;
  t = SSL_explode_term(g_34);
  if(match_cons(t, sym__2))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_11 = ATgetArgument(t, 1);
        if(((ATgetType(r_11) == AT_LIST) && !(ATisEmpty(r_11))))
          {
            l_34 = ATgetFirst((ATermList) r_11);
            {
              ATerm s_11 = (ATerm) ATgetNext((ATermList) r_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_34;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_34;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_34;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_34;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_35 (ATerm p_34, ATerm q_34, ATerm r_34, ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,x_34 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(r_34);
  u_34 = t;
  t = p_34;
  if(match_cons(t, sym_Path_1))
    {
      x_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_34, q_34);
  i_4 = t;
  t = SSLsetAnnotations(i_4, u_34);
  if(match_cons(t, sym__2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(s_34, t_34, t);
  return(t);
}
static ATerm o_35 (ATerm z_34, ATerm a_35, ATerm b_35, ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,h_35 = NULL,k_4 = NULL;
  t = SSLgetAnnotations(b_35);
  e_35 = t;
  t = SSL_is_string(z_34);
  h_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, a_35);
  k_4 = t;
  t = SSLsetAnnotations(k_4, e_35);
  if(match_cons(t, sym__2))
    {
      c_35 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(c_35, d_35, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  if(match_cons(t, sym__2))
    {
      k_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_35(j_35, t);
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            {
              ATerm w_11 = t;
              int a_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_35(k_35, l_35, j_35, t);
                  LocalPopChoice(a_12);
                }
              else
                {
                  t = w_11;
                  t = o_35(k_35, l_35, j_35, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_35(j_35, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,x_35 = NULL;
  x_35 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_35, term_g_12);
        t = b_6(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        {
          ATerm u_17 = NULL,v_17 = NULL;
          t = term_h_12;
          v_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_12, x_35);
          t = z_5(v_17, x_35, t);
          u_17 = t;
          t = SSL_perror(u_17);
          _fail(t);
        }
      }
  }
  r_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(s_35, t);
  q_35 = t;
  t = r_35;
  t = fclose_0_0(t);
  t = q_35;
  return(t);
}
ATerm fetch_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  static ATerm x_36 (ATerm t)
  {
    ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
    u_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_36 = ATgetFirst((ATermList) t);
        w_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_12 = t;
      int j_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_18 = NULL,h_18 = NULL,p_4 = NULL;
          t = SSLgetAnnotations(u_36);
          c_18 = t;
          t = v_36;
          t = p_102(t);
          h_18 = t;
          t = (ATerm) ATinsert(CheckATermList(w_36), h_18);
          p_4 = t;
          t = SSLsetAnnotations(p_4, c_18);
          LocalPopChoice(j_12);
        }
      else
        {
          t = i_12;
          {
            ATerm u_18 = NULL,y_18 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(u_36);
            u_18 = t;
            t = w_36;
            t = x_36(t);
            y_18 = t;
            t = (ATerm) ATinsert(CheckATermList(y_18), v_36);
            s_4 = t;
            t = SSLsetAnnotations(s_4, u_18);
          }
        }
    }
    return(t);
  }
  t = x_36(t);
  return(t);
}
static ATerm g_6 (ATerm b_66, ATerm c_66, ATerm t)
{
  ATerm a_37 = NULL;
  t = lookup_table_0_1(b_66, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(c_66, a_37, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  {
    ATerm k_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
        t = term_o_12;
        g_37 = t;
        t = term_p_12;
        h_37 = t;
        t = term_q_12;
        t = g_6(g_37, h_37, t);
        f_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_37, term_r_12);
        t = geq_0_0(t);
        t = d_37;
        t = y_118(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = k_12;
        t = d_37;
      }
  }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  if(match_string(t, "-k"))
    {
      t = k_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_37;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  t = SSL_string_to_int(l_37);
  m_37 = t;
  t = term_s_12;
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, m_37);
  t = j_6(n_37, m_37, t);
  t = l_37;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  if(match_string(t, "-S"))
    {
      t = p_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_37;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL;
  t = term_p_12;
  q_37 = t;
  t = term_x_12;
  r_37 = t;
  t = term_a_13;
  t = j_6(q_37, r_37, t);
  t = term_b_13;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
  s_37 = t;
  t = SSL_string_to_int(s_37);
  t_37 = t;
  t = term_p_12;
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_12, t_37);
  t = j_6(u_37, t_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_37);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_d_13;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  t = term_e_13;
  v_37 = t;
  t = term_h_5;
  w_37 = t;
  t = term_f_13;
  t = j_6(v_37, w_37, t);
  t = term_g_13;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_2, v_2, w_2, t);
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_2, y_2, z_2, t);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = Option_3_0(a_3, b_3, c_3, t);
          }
      }
    }
  return(t);
}
static ATerm j_6 (ATerm n_59, ATerm o_59, ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL;
  t = term_o_12;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_12, n_59, o_59);
  t = lookup_table_0_1(x_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(n_59, o_59, y_37, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_12, n_59, o_59);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
      t = term_h_5;
      t = e_0(t);
      e_38 = t;
      t = term_r_13;
      f_38 = t;
      t = term_w_13;
      g_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_13, term_w_13, e_38);
      t = h_6(f_38, g_38, e_38, t);
      _fail(t);
    }
  else
    {
      ATerm j_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_38 = ATgetFirst((ATermList) t);
          d_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_38;
      t = c_0(t);
      t = term_h_5;
      t = d_0(t);
      j_38 = t;
      t = (ATerm) ATinsert(CheckATermList(d_38), j_38);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm l_38 = NULL;
  l_38 = t;
  if(match_string(t, "-o"))
    {
      t = l_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_38;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL;
  m_38 = t;
  t = term_x_13;
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, m_38);
  t = j_6(n_38, m_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_38);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
static ATerm h_6 (ATerm i_64, ATerm j_64, ATerm h_64, ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_64, j_64);
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_14 = ATgetArgument(t, 0);
            ATerm e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_64, j_64);
        t = g_6(i_64, j_64, t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATempty;
      }
  }
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_64, j_64, (ATerm) ATinsert(CheckATermList(q_38), h_64));
  t = lookup_table_0_1(i_64, t);
  t_38 = t;
  t = (ATerm) ATinsert(CheckATermList(q_38), h_64);
  r_38 = t;
  t = t_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(j_64, r_38, s_38, t);
  t = p_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
      t = term_h_5;
      t = n_0(t);
      e_39 = t;
      t = term_r_13;
      f_39 = t;
      t = term_w_13;
      g_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_13, term_w_13, e_39);
      t = h_6(f_39, g_39, e_39, t);
      _fail(t);
    }
  else
    {
      ATerm k_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_39 = ATgetFirst((ATermList) t);
          b_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_39 = ATgetFirst((ATermList) t);
          d_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_39;
      t = k_0(t);
      t = c_39;
      t = l_0(t);
      k_39 = t;
      t = (ATerm) ATinsert(CheckATermList(d_39), k_39);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm m_39 = NULL;
  m_39 = t;
  if(match_string(t, "-i"))
    {
      t = m_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_39;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  n_39 = t;
  t = term_g_14;
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, n_39);
  t = j_6(o_39, n_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_39);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_h_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, i_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_5;
  t = whoami_0_0(t);
  p_39 = t;
  t = term_i_5;
  r_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_14), p_39);
  s_39 = t;
  t = SSL_printnl(r_39, s_39);
  t = term_m_5;
  q_39 = t;
  t = SSL_exit(q_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  t = term_o_12;
  t_39 = t;
  t = term_j_14;
  u_39 = t;
  t = term_l_14;
  t = g_6(t_39, u_39, t);
  return(t);
}
static ATerm c_6 (ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm m_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_45, f_45);
      LocalPopChoice(o_14);
    }
  else
    {
      t = m_14;
      t = SSL_addr(e_45, f_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_39;
      t = e_109(t);
    }
  else
    {
      ATerm b_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_39 = ATgetFirst((ATermList) t);
          y_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_39;
      t = foldr_2_0(e_109, f_109, t);
      b_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_39, b_40);
      t = f_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(v_19, w_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_40 = NULL,m_19 = NULL,n_19 = NULL;
  t = times_0_0(t);
  n_19 = t;
  t = SSL_explode_term(n_19);
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_19;
  t = foldr_2_0(m_3, n_3, t);
  e_40 = t;
  t = SSL_TicksToSeconds(e_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  if(match_cons(t, sym__2))
    {
      q_40 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_40;
        if((q_40 != t))
          {
            _fail(t);
          }
        t = p_40;
        LocalPopChoice(s_14);
      }
    else
      {
        t = q_14;
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        {
          ATerm t_14 = t;
          int u_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_40, r_40);
              LocalPopChoice(u_14);
            }
          else
            {
              t = t_14;
              t = SSL_gtr(q_40, r_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  ATerm v_40 = NULL;
  v_40 = t;
  {
    ATerm v_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
        t = term_o_12;
        y_40 = t;
        t = term_p_12;
        z_40 = t;
        t = term_q_12;
        t = g_6(y_40, z_40, t);
        x_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_40, term_m_5);
        t = geq_0_0(t);
        t = v_40;
        t = x_118(t);
        LocalPopChoice(x_14);
      }
    else
      {
        t = v_14;
        t = v_40;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,g_41 = NULL,h_41 = NULL;
  t = run_time_0_0(t);
  d_41 = t;
  t = term_h_5;
  t = whoami_0_0(t);
  e_41 = t;
  t = term_i_5;
  g_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), d_41), term_a_15), e_41);
  h_41 = t;
  t = SSL_printnl(g_41, h_41);
  t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), d_41), term_a_15), e_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_12;
  i_41 = t;
  t = SSL_exit(i_41);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  t_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_41 = ATgetArgument(t, 0);
          {
            ATerm w_20 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(t_41);
            w_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_41);
            y_4 = t;
            t = SSLsetAnnotations(y_4, w_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_121 (ATerm), ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_41 = NULL,m_41 = NULL;
      t = term_o_12;
      l_41 = t;
      t = term_f_15;
      m_41 = t;
      t = term_i_15;
      t = g_6(l_41, m_41, t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      t = fetch_1_0(r_3, t);
    }
  t = n_121(t);
  return(t);
}
static ATerm k_6 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t)
{
  ATerm v_41 = NULL;
  t = SSL_hashtable_put(p_68, n_68, o_68);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_41);
  return(t);
}
static ATerm l_6 (ATerm q_68, ATerm r_68, ATerm t)
{
  t = SSL_hashtable_get(r_68, q_68);
  return(t);
}
ATerm lookup_table_0_1 (ATerm u_65, ATerm t)
{
  ATerm e_42 = NULL;
  t = table_hashtable_0_0(t);
  e_42 = t;
  {
    ATerm j_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_21 = NULL;
        t = e_42;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_6(u_65, l_21, t);
        LocalPopChoice(u_15);
      }
    else
      {
        t = j_15;
        {
          ATerm q_21 = NULL;
          t = u_65;
          t = table_create_0_0(t);
          t = e_42;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_6(u_65, q_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t)
{
  ATerm h_42 = NULL;
  t = SSL_hashtable_create(v_68, w_68);
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_42);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,t_42 = NULL,u_42 = NULL;
  o_42 = t;
  t = term_e_16;
  t_42 = t;
  t = term_f_16;
  u_42 = t;
  t = o_42;
  t = new_hashtable_0_2(t_42, u_42, t);
  p_42 = t;
  t = o_42;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(o_42, p_42, q_42, t);
  t = o_42;
  return(t);
}
static ATerm e_6 (ATerm s_68, ATerm t_68, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_hashtable_remove(t_68, s_68);
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_42);
  return(t);
}
static ATerm f_6 (ATerm x_68, ATerm t)
{
  ATerm w_42 = NULL;
  t = SSL_hashtable_destroy(x_68);
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_42);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_42 = NULL;
  t = SSL_table_hashtable();
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_42);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  y_42 = t;
  t = table_hashtable_0_0(t);
  z_42 = t;
  t = lookup_table_0_1(y_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(b_43, t);
  t = z_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(y_42, a_43, t);
  t = y_42;
  return(t);
}
ATerm map_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  static ATerm q_43 (ATerm t)
  {
    ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
    n_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_43;
      }
    else
      {
        ATerm a_22 = NULL,d_22 = NULL,e_22 = NULL,c_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_43 = ATgetFirst((ATermList) t);
            p_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_43);
        a_22 = t;
        t = o_43;
        t = f_102(t);
        d_22 = t;
        t = p_43;
        t = q_43(t);
        e_22 = t;
        t = (ATerm) ATinsert(CheckATermList(e_22), d_22);
        c_5 = t;
        t = SSLsetAnnotations(c_5, a_22);
      }
    return(t);
  }
  t = q_43(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_43 = ATgetFirst((ATermList) t);
      u_43 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_43 = NULL,z_43 = NULL;
        static ATerm s_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_43)), not_null(z_43));
          return(t);
        }
        t = u_43;
        t = i_0(t);
        if(((y_43 != NULL) && (y_43 != t)))
          _fail(t);
        else
          y_43 = t;
        t = t_43;
        t = g_0(t);
        if(((z_43 != NULL) && (z_43 != t)))
          _fail(t);
        else
          z_43 = t;
        t = u_43;
        t = reverse_acc_2_0(g_0, s_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,k_5 = NULL;
  h_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_44);
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_44);
  k_5 = t;
  t = SSLsetAnnotations(k_5, f_44);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm j_44 = NULL;
  j_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_44), term_g_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_44 = NULL,e_44 = NULL;
      t = term_o_12;
      d_44 = t;
      t = term_j_14;
      e_44 = t;
      t = term_l_14;
      t = g_6(d_44, e_44, t);
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      t = fetch_1_0(w_3, t);
    }
  t = term_j_16;
  t = echo_0_0(t);
  t = term_r_13;
  b_44 = t;
  t = term_w_13;
  c_44 = t;
  t = term_o_16;
  t = g_6(b_44, c_44, t);
  t = reverse_acc_2_0(_id, x_3, t);
  t = map_1_0(y_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_16 = ATgetFirst((ATermList) t);
                ATerm f_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_44;
          }
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        t = (ATerm) ATinsert(ATempty, l_44);
      }
  }
  m_44 = t;
  t = term_l_11;
  n_44 = t;
  t = SSL_printnl(n_44, m_44);
  t = l_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  t = term_o_12;
  r_44 = t;
  t = term_j_14;
  s_44 = t;
  t = term_l_14;
  t = g_6(r_44, s_44, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL;
  t = term_g_17;
  t_44 = t;
  t = term_h_5;
  u_44 = t;
  t = term_h_17;
  t = j_6(t_44, u_44, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_i_17;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  t = term_g_17;
  x_44 = t;
  t = term_h_5;
  y_44 = t;
  t = term_h_17;
  t = j_6(x_44, y_44, t);
  t = term_m_17;
  v_44 = t;
  t = term_h_5;
  w_44 = t;
  t = term_n_17;
  t = j_6(v_44, w_44, t);
  t = term_q_17;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, e_4, t);
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      t = Option_3_0(f_4, g_4, h_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,g_45 = NULL,n_5 = NULL;
  g_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_45 = ATgetFirst((ATermList) t);
      b_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_45);
  z_44 = t;
  t = a_45;
  t = p_72(t);
  c_45 = t;
  t = b_45;
  t = q_72(t);
  d_45 = t;
  t = (ATerm) ATinsert(CheckATermList(d_45), c_45);
  n_5 = t;
  t = SSLsetAnnotations(n_5, z_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,q_45 = NULL,r_45 = NULL,s_5 = NULL;
  l_45 = t;
  {
    ATerm w_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_17;
        t = q_123(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = w_17;
      }
  }
  t = l_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_45 = ATgetFirst((ATermList) t);
      o_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_45);
  m_45 = t;
  t = term_j_14;
  r_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, n_45);
  t = j_6(r_45, n_45, t);
  t = o_45;
  {
    static ATerm b_46 (ATerm t)
    {
      ATerm a_18 = t;
      int b_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_45 = NULL;
              u_45 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_45;
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = q_123(t);
              t = Cons_2_0(_id, b_46, t);
            }
          LocalPopChoice(b_18);
        }
      else
        {
          t = a_18;
          {
            ATerm x_45 = NULL,y_45 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_45 = ATgetFirst((ATermList) t);
                y_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_45), (ATerm) ATmakeAppl(sym_Undefined_1, x_45));
          }
        }
      return(t);
    }
    t = b_46(t);
  }
  q_45 = t;
  t = (ATerm) ATinsert(CheckATermList(q_45), (ATerm) ATmakeAppl(sym_Program_1, n_45));
  s_5 = t;
  t = SSLsetAnnotations(s_5, m_45);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  if(match_string(t, "--help"))
    {
      t = p_46;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_46;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_46;
        }
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  t = term_f_15;
  q_46 = t;
  t = term_h_5;
  r_46 = t;
  t = term_f_18;
  t = j_6(q_46, r_46, t);
  t = term_i_18;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_j_18;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
  i_46 = t;
  t = term_r_13;
  j_46 = t;
  t = term_k_18;
  t = lookup_table_0_1(j_46, t);
  o_46 = t;
  t = term_w_13;
  l_46 = t;
  t = (ATerm) ATempty;
  m_46 = t;
  t = o_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(l_46, m_46, n_46, t);
  t = i_46;
  {
    static ATerm j_4 (ATerm t)
    {
      ATerm m_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_123(t);
          LocalPopChoice(o_18);
        }
      else
        {
          t = m_18;
          {
            ATerm p_18 = t;
            int q_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_4, m_4, o_4, t);
                LocalPopChoice(q_18);
              }
            else
              {
                t = p_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_4, t);
  }
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_47 = NULL;
        c_47 = t;
        {
          ATerm t_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_22 = NULL;
              t = c_47;
              {
                ATerm w_18 = t;
                int x_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_22 = NULL,n_22 = NULL;
                    t = term_o_12;
                    m_22 = t;
                    t = term_f_15;
                    n_22 = t;
                    t = term_i_15;
                    t = g_6(m_22, n_22, t);
                    LocalPopChoice(x_18);
                  }
                else
                  {
                    t = w_18;
                    t = fetch_1_0(q_4, t);
                  }
              }
              t = c_47;
              t = default_system_usage_0_0(t);
              t = term_x_12;
              l_22 = t;
              t = SSL_exit(l_22);
              LocalPopChoice(v_18);
            }
          else
            {
              t = t_18;
              {
                ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
                t = term_o_12;
                s_22 = t;
                t = term_g_17;
                t_22 = t;
                t = term_z_18;
                t = g_6(s_22, t_22, t);
                t = c_47;
                t = default_system_about_0_0(t);
                t = term_x_12;
                r_22 = t;
                t = SSL_exit(r_22);
              }
            }
        }
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
              static ATerm r_4 (ATerm t)
              {
                ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL,n_6 = NULL;
                i_47 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_47);
                g_47 = t;
                t = h_47;
                if(((g_46 != NULL) && (g_46 != t)))
                  _fail(t);
                else
                  g_46 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_47);
                n_6 = t;
                t = SSLsetAnnotations(n_6, g_47);
                return(t);
              }
              t = fetch_1_0(r_4, t);
              t = term_i_5;
              e_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), term_c_19);
              f_47 = t;
              t = SSL_printnl(e_47, f_47);
              t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), term_c_19));
              t = default_system_usage_0_0(t);
              t = term_m_5;
              d_47 = t;
              t = SSL_exit(d_47);
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
            }
        }
      }
  }
  h_46 = t;
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = h_46;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  t = parse_options_1_0(p_121, t);
  n_47 = t;
  t = term_d_19;
  t = table_create_0_0(t);
  t = term_d_19;
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_19, term_f_19, n_47);
  t = lookup_table_0_1(o_47, t);
  r_47 = t;
  t = term_f_19;
  p_47 = t;
  t = r_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(p_47, n_47, q_47, t);
  t = n_47;
  t = r_121(t);
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_121, t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_121(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = if_verbose2_1_0(d_5, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  t = term_l_19;
  s_47 = t;
  t = term_h_5;
  t_47 = t;
  t = term_p_19;
  t = j_6(s_47, t_47, t);
  t = term_q_19;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_r_19;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  u_47 = t;
  t = term_o_12;
  y_47 = t;
  t = term_j_14;
  z_47 = t;
  t = term_l_14;
  t = g_6(y_47, z_47, t);
  v_47 = t;
  t = term_i_5;
  w_47 = t;
  t = (ATerm) ATinsert(ATempty, v_47);
  x_47 = t;
  t = SSL_printnl(w_47, x_47);
  t = u_47;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t)
{
  static ATerm t_4 (ATerm t)
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_120(t);
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        {
          ATerm x_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(y_19);
            }
          else
            {
              t = x_19;
              {
                ATerm a_20 = t;
                int d_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(d_20);
                  }
                else
                  {
                    t = a_20;
                    {
                      ATerm e_20 = t;
                      int f_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_4, a_5, b_5, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(h_20);
                              }
                            else
                              {
                                t = g_20;
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
  static ATerm w_4 (ATerm t)
  {
    ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
    b_48 = t;
    {
      ATerm i_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm e_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_48 != NULL) && (a_48 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_48 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_5, t);
          LocalPopChoice(l_20);
        }
      else
        {
          t = i_20;
          t = term_m_20;
          a_48 = t;
        }
    }
    t = not_null(a_48);
    t = ReadFromFile_0_0(t);
    c_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
    t = apply_strategy_1_0(y_120, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(t_4, a_121, u_4, w_4, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,s_6 = NULL;
  k_48 = t;
  if(match_cons(t, sym__2))
    {
      h_48 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_48);
  g_48 = t;
  t = i_48;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_48 = NULL;
        t = SSL_explode_term(i_48);
        if(match_cons(t, sym__2))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            ATerm r_20 = ATgetArgument(t, 1);
            if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
              {
                l_48 = ATgetFirst((ATermList) r_20);
                {
                  ATerm s_20 = (ATerm) ATgetNext((ATermList) r_20);
                  if(((ATgetType(s_20) != AT_LIST) || !(ATisEmpty(s_20))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = l_48;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
      }
  }
  t = topdown_1_0(g_5, t);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_48, j_48);
  s_6 = t;
  t = SSLsetAnnotations(s_6, g_48);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(f_5, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}

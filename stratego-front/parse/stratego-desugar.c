#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Con_3;
static Symbol sym_TupleCong_1;
static Symbol sym_TupleCong_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Anno_2;
static Symbol sym_Var_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Anno_2;
static Symbol sym_Var_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RuleNames_1;
static Symbol sym_RDecT_3;
static Symbol sym_RDec_2;
static Symbol sym_RDecNoArgs_1;
static Symbol sym_Specification_1;
static Symbol sym_Module_2;
static Symbol sym_Overlay_3;
static Symbol sym_OverlayNoArgs_2;
static Symbol sym_Con4_4;
static Symbol sym_Con3_3;
static Symbol sym_Con_3;
static Symbol sym_Con1_2;
static Symbol sym_ListTail_2;
static Symbol sym_List_1;
static Symbol sym_Tuple_1;
static Symbol sym_AnnoTail_3;
static Symbol sym_Anno_2;
static Symbol sym_Op_2;
static Symbol sym_Char_1;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_StrategyCurly_1;
static Symbol sym_SVar_1;
static Symbol sym_DynRuleIntersectUnion_4;
static Symbol sym_DynRuleUnion_3;
static Symbol sym_DynRuleIntersect_3;
static Symbol sym_DynRuleIntersectUnionFix_3;
static Symbol sym_DynRuleUnionFix_2;
static Symbol sym_DynRuleIntersectFix_2;
static Symbol sym_AM_2;
static Symbol sym_SwitchChoice_3;
static Symbol sym_SwitchChoiceNoOtherwise_2;
static Symbol sym_IfThen_2;
static Symbol sym_CondChoice_3;
static Symbol sym_RChoice_2;
static Symbol sym_CallNoArgs_1;
static Symbol sym_ListCong_2;
static Symbol sym_ListCongNoTail_1;
static Symbol sym_ModCong_2;
static Symbol sym_ModCongNoArgs_1;
static Symbol sym_TupleCong_2;
static Symbol sym_EmptyTupleCong_0;
static Symbol sym_AnnoCong_2;
static Symbol sym_CharCong_1;
static Symbol sym_RealCong_1;
static Symbol sym_IntCong_1;
static Symbol sym_StrCong_1;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_PrimNoArgs_1;
static Symbol sym_Where_1;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Call_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_ParenStrat_1;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_SDefNoArgs_2;
static Symbol sym_OpDecl_2;
static Symbol sym_SortTuple_1;
static Symbol sym_SortListTl_2;
static Symbol sym_SortList_1;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_StratRule_3;
static Symbol sym_StratRuleNoCond_2;
static Symbol sym_Rule_3;
static Symbol sym_RuleNoCond_2;
static Symbol sym_SRDefT_4;
static Symbol sym_SRDef_3;
static Symbol sym_SRDefNoArgs_2;
static Symbol sym_RDef_3;
static Symbol sym_RDefNoArgs_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_RuleNames_1 = ATmakeSymbol("RuleNames", 1, ATfalse);
  ATprotectSymbol(sym_RuleNames_1);
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
  sym_AnnoTail_3 = ATmakeSymbol("AnnoTail", 3, ATfalse);
  ATprotectSymbol(sym_AnnoTail_3);
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
  sym_DynRuleIntersectUnion_4 = ATmakeSymbol("DynRuleIntersectUnion", 4, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersectUnion_4);
  sym_DynRuleUnion_3 = ATmakeSymbol("DynRuleUnion", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleUnion_3);
  sym_DynRuleIntersect_3 = ATmakeSymbol("DynRuleIntersect", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersect_3);
  sym_DynRuleIntersectUnionFix_3 = ATmakeSymbol("DynRuleIntersectUnionFix", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersectUnionFix_3);
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
  sym_IfThen_2 = ATmakeSymbol("IfThen", 2, ATfalse);
  ATprotectSymbol(sym_IfThen_2);
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
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
}
static ATerm term_v_4;
static ATerm term_t_4;
static ATerm term_s_4;
static ATerm term_r_4;
static ATerm term_o_4;
static ATerm term_i_4;
static ATerm term_h_4;
static ATerm term_g_4;
static ATerm term_x_3;
static ATerm term_w_3;
static ATerm term_t_3;
static ATerm term_s_3;
static ATerm term_r_3;
static ATerm term_q_3;
static ATerm term_p_3;
static ATerm term_o_3;
static ATerm term_m_3;
static ATerm term_l_3;
static ATerm term_k_3;
static ATerm term_j_3;
static ATerm term_h_3;
static ATerm term_x_2;
static ATerm term_v_2;
static ATerm term_r_2;
static ATerm term_q_2;
static ATerm term_p_2;
static ATerm term_m_2;
static ATerm term_l_2;
static ATerm term_k_2;
static ATerm term_j_2;
static ATerm term_i_2;
static ATerm term_g_2;
static ATerm term_c_2;
static ATerm term_b_2;
static ATerm term_z_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(sym_Op_2, term_z_1, (ATerm) ATempty);
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_2);
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(sym_Sort_2, term_z_1, (ATerm) ATempty);
  ATprotect(&(term_k_2));
  term_k_2 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_2);
  ATprotect(&(term_l_2));
  term_l_2 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_1);
  ATprotect(&(term_m_2));
  term_m_2 = (ATerm) ATmakeAppl(sym_Call_2, term_l_2, (ATerm) ATempty);
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_q_2));
  term_q_2 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_2));
  term_r_2 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_2));
  term_v_2 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_2));
  term_x_2 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-intersect-union", 0, ATtrue));
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_3);
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-intersect-union", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_3);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-union", 0, ATtrue));
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_3);
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-union", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_3);
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-intersect", 0, ATtrue));
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_3);
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-intersect", 0, ATtrue));
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_3);
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_4);
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(sym_Call_2, term_h_4, (ATerm) ATempty);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_Call_2, term_i_2, (ATerm) ATempty);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_4);
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_Fail_0);
}
#include <srts/init-stratego-application.h>
ATerm implode_string_0_0 (ATerm t);
ATerm Var_1_0 (ATerm d_89 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm string_to_real_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm try_1_0 (ATerm f_93 (ATerm), ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm foldr_2_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm mk_rulenames_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t);
static ATerm l_13 (ATerm z_6, ATerm a_7, ATerm t);
static ATerm m_13 (ATerm d_7, ATerm e_7, ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_1_0 (ATerm f_94 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm c_95 (ATerm), ATerm t);
ATerm io_wrap_1_0 (ATerm a_122 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm stratego_desugar_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm v_3 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_1 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_1) != AT_INT) || (ATgetInt((ATermInt) m_1) != 39)))
        _fail(t);
      v_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_3;
  t = implode_string_0_0(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm n_1 = t;
  int o_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,t_2 = NULL,w_2 = NULL,z_2 = NULL;
      t_2 = t;
      if(match_cons(t, sym_Str_1))
        {
          w_2 = ATgetArgument(t, 0);
          {
            ATerm c_3 = NULL;
            t = w_2;
            t = un_double_quote_0_0(t);
            t = unescape_0_0(t);
            c_3 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, c_3);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              w_2 = ATgetArgument(t, 0);
              {
                ATerm i_3 = NULL;
                t = w_2;
                t = string_to_real_0_0(t);
                i_3 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, i_3);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  w_2 = ATgetArgument(t, 0);
                  {
                    ATerm n_3 = NULL;
                    t = w_2;
                    t = string_to_int_0_0(t);
                    n_3 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, n_3);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Con_3))
                    {
                      w_2 = ATgetArgument(t, 0);
                      z_2 = ATgetArgument(t, 1);
                      s_2 = ATgetArgument(t, 2);
                      t = s_2;
                      t = is_string_0_0(t);
                      t = (ATerm) ATmakeAppl(sym_Con_3, w_2, z_2, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_2), (ATerm) ATempty));
                    }
                  else
                    {
                      if(match_cons(t, sym_DefaultVarDec_1))
                        {
                          w_2 = ATgetArgument(t, 0);
                          {
                            ATerm c_0 = NULL,f_0 = NULL,h_0 = NULL,d_0 = NULL;
                            t = SSLgetAnnotations(t_2);
                            c_0 = t;
                            t = w_2;
                            t = explode_string_0_0(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm p_1 = ATgetFirst((ATermList) t);
                                if(((ATgetType(p_1) != AT_INT) || (ATgetInt((ATermInt) p_1) != 39)))
                                  _fail(t);
                                f_0 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = f_0;
                            t = implode_string_0_0(t);
                            h_0 = t;
                            t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_0);
                            d_0 = t;
                            t = SSLsetAnnotations(d_0, c_0);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_RDef_3))
                            {
                              w_2 = ATgetArgument(t, 0);
                              z_2 = ATgetArgument(t, 1);
                              s_2 = ATgetArgument(t, 2);
                              {
                                ATerm r_0 = NULL,y_1 = NULL,a_2 = NULL,g_0 = NULL;
                                t = SSLgetAnnotations(t_2);
                                r_0 = t;
                                t = w_2;
                                t = explode_string_0_0(t);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm q_1 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(q_1) != AT_INT) || (ATgetInt((ATermInt) q_1) != 39)))
                                      _fail(t);
                                    y_1 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = y_1;
                                t = implode_string_0_0(t);
                                a_2 = t;
                                t = (ATerm) ATmakeAppl(sym_RDef_3, a_2, z_2, s_2);
                                g_0 = t;
                                t = SSLsetAnnotations(g_0, r_0);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDef_3))
                                {
                                  w_2 = ATgetArgument(t, 0);
                                  z_2 = ATgetArgument(t, 1);
                                  s_2 = ATgetArgument(t, 2);
                                  {
                                    ATerm u_2 = NULL,b_3 = NULL,d_3 = NULL,l_0 = NULL;
                                    t = SSLgetAnnotations(t_2);
                                    u_2 = t;
                                    t = w_2;
                                    t = explode_string_0_0(t);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm r_1 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(r_1) != AT_INT) || (ATgetInt((ATermInt) r_1) != 39)))
                                          _fail(t);
                                        b_3 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = b_3;
                                    t = implode_string_0_0(t);
                                    d_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDef_3, d_3, z_2, s_2);
                                    l_0 = t;
                                    t = SSLsetAnnotations(l_0, u_2);
                                  }
                                }
                              else
                                {
                                  ATerm u_3 = NULL,z_3 = NULL,a_4 = NULL,n_0 = NULL;
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      w_2 = ATgetArgument(t, 0);
                                      z_2 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(t_2);
                                  u_3 = t;
                                  t = w_2;
                                  t = explode_string_0_0(t);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      ATerm s_1 = ATgetFirst((ATermList) t);
                                      if(((ATgetType(s_1) != AT_INT) || (ATgetInt((ATermInt) s_1) != 39)))
                                        _fail(t);
                                      z_3 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = z_3;
                                  t = implode_string_0_0(t);
                                  a_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_4, z_2);
                                  n_0 = t;
                                  t = SSLsetAnnotations(n_0, u_3);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(o_1);
    }
  else
    {
      t = n_1;
      {
        ATerm t_1 = t;
        int u_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(a_0, t);
            LocalPopChoice(u_1);
          }
        else
          {
            t = t_1;
            {
              ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
              o_5 = t;
              if(match_cons(t, sym_SVar_1))
                {
                  p_5 = ATgetArgument(t, 0);
                  {
                    ATerm m_4 = NULL,p_4 = NULL,q_4 = NULL,s_0 = NULL;
                    t = SSLgetAnnotations(o_5);
                    m_4 = t;
                    t = p_5;
                    t = explode_string_0_0(t);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm v_1 = ATgetFirst((ATermList) t);
                        if(((ATgetType(v_1) != AT_INT) || (ATgetInt((ATermInt) v_1) != 39)))
                          _fail(t);
                        p_4 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = p_4;
                    t = implode_string_0_0(t);
                    q_4 = t;
                    t = (ATerm) ATmakeAppl(sym_SVar_1, q_4);
                    s_0 = t;
                    t = SSLsetAnnotations(s_0, m_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OpDecl_2))
                    {
                      p_5 = ATgetArgument(t, 0);
                      q_5 = ATgetArgument(t, 1);
                      {
                        ATerm g_6 = NULL,j_6 = NULL,k_6 = NULL,t_0 = NULL;
                        t = SSLgetAnnotations(o_5);
                        g_6 = t;
                        t = p_5;
                        t = explode_string_0_0(t);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm w_1 = ATgetFirst((ATermList) t);
                            if(((ATgetType(w_1) != AT_INT) || (ATgetInt((ATermInt) w_1) != 39)))
                              _fail(t);
                            j_6 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = j_6;
                        t = implode_string_0_0(t);
                        k_6 = t;
                        t = (ATerm) ATmakeAppl(sym_OpDecl_2, k_6, q_5);
                        t_0 = t;
                        t = SSLsetAnnotations(t_0, g_6);
                      }
                    }
                  else
                    {
                      ATerm s_6 = NULL,y_11 = NULL,o_12 = NULL,u_0 = NULL;
                      if(match_cons(t, sym_Op_2))
                        {
                          p_5 = ATgetArgument(t, 0);
                          q_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(o_5);
                      s_6 = t;
                      t = p_5;
                      t = explode_string_0_0(t);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm x_1 = ATgetFirst((ATermList) t);
                          if(((ATgetType(x_1) != AT_INT) || (ATgetInt((ATermInt) x_1) != 39)))
                            _fail(t);
                          y_11 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = y_11;
                      t = implode_string_0_0(t);
                      o_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, o_12, q_5);
                      u_0 = t;
                      t = SSLsetAnnotations(u_0, s_6);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_b_2;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  e_6 = t;
  t = Fst_0_0(t);
  c_6 = t;
  t = e_6;
  t = Snd_0_0(t);
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, d_6), c_6));
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm f_6 = NULL;
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, f_6);
  return(t);
}
ATerm mk_rulenames_0_0 (ATerm t)
{
  ATerm d_2 = t;
  int e_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_6 = NULL;
      if(match_cons(t, sym_RuleNames_1))
        {
          a_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_6;
      LocalPopChoice(e_2);
    }
  else
    {
      t = d_2;
      t = foldr_3_0(b_0, e_0, i_0, t);
    }
  return(t);
}
static ATerm l_13 (ATerm z_6, ATerm a_7, ATerm t)
{
  t = z_6;
  {
    ATerm f_2 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, Nil_0_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_2;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_2, z_6);
  return(t);
}
static ATerm m_13 (ATerm d_7, ATerm e_7, ATerm t)
{
  t = d_7;
  {
    ATerm h_2 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, Nil_0_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_2;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_2, d_7);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  y_7 = t;
  t = Fst_0_0(t);
  w_7 = t;
  t = y_7;
  t = Snd_0_0(t);
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, x_7), w_7));
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_b_2;
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  e_8 = t;
  t = Fst_0_0(t);
  c_8 = t;
  t = e_8;
  t = Snd_0_0(t);
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, d_8), c_8));
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_j_2;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  l_9 = t;
  t = Fst_0_0(t);
  j_9 = t;
  t = l_9;
  t = Snd_0_0(t);
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, k_9), j_9));
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  q_9 = t;
  t = Fst_0_0(t);
  o_9 = t;
  t = q_9;
  t = Snd_0_0(t);
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, p_9), o_9));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_j_2;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,v_9 = NULL;
  v_9 = t;
  t = Fst_0_0(t);
  s_9 = t;
  t = v_9;
  t = Snd_0_0(t);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, t_9), s_9));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, g_10), f_10));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_b_2;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, j_10), i_10));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_2, (ATerm) ATinsert(ATinsert(ATempty, v_10), u_10));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_m_2;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL;
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_2, (ATerm) ATinsert(ATinsert(ATempty, y_10), x_10));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  if(match_cons(t, sym_AnnoTail_3))
    {
      q_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
      o_7 = ATgetArgument(t, 2);
      {
        ATerm v_7 = NULL;
        t = r_7;
        {
          static ATerm j_0 (ATerm t);
          static ATerm j_0 (ATerm t)
          {
            t = o_7;
            return(t);
          }
          t = foldr_2_0(j_0, k_0, t);
        }
        v_7 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_7, v_7);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          q_7 = ATgetArgument(t, 0);
          r_7 = ATgetArgument(t, 1);
          {
            ATerm b_8 = NULL;
            t = r_7;
            t = foldr_2_0(m_0, o_0, t);
            b_8 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, q_7, b_8);
          }
        }
      else
        {
          if(match_cons(t, sym_SortNoArgs_1))
            {
              q_7 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Sort_2, q_7, (ATerm) ATempty);
            }
          else
            {
              if(match_cons(t, sym_Char_1))
                {
                  q_7 = ATgetArgument(t, 0);
                  {
                    ATerm w_13 = NULL;
                    t = q_7;
                    {
                      ATerm n_2 = t;
                      int o_2 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_string(t, "'\\ '"))
                            {
                              t = term_p_2;
                            }
                          else
                            {
                              if(match_string(t, "'\\r'"))
                                {
                                  t = term_q_2;
                                }
                              else
                                {
                                  if(match_string(t, "'\\t'"))
                                    {
                                      t = term_r_2;
                                    }
                                  else
                                    {
                                      if(match_string(t, "'\\n'"))
                                        {
                                          t = term_v_2;
                                        }
                                      else
                                        {
                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                            _fail(t);
                                          t = term_x_2;
                                        }
                                    }
                                }
                            }
                          LocalPopChoice(o_2);
                        }
                      else
                        {
                          t = n_2;
                          {
                            ATerm y_13 = NULL;
                            t = explode_string_0_0(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm y_2 = ATgetFirst((ATermList) t);
                                if(((ATgetType(y_2) != AT_INT) || (ATgetInt((ATermInt) y_2) != 39)))
                                  _fail(t);
                                {
                                  ATerm a_3 = (ATerm) ATgetNext((ATermList) t);
                                  if(((ATgetType(a_3) == AT_LIST) && !(ATisEmpty(a_3))))
                                    {
                                      y_13 = ATgetFirst((ATermList) a_3);
                                      {
                                        ATerm e_3 = (ATerm) ATgetNext((ATermList) a_3);
                                        if(((ATgetType(e_3) == AT_LIST) && !(ATisEmpty(e_3))))
                                          {
                                            ATerm f_3 = ATgetFirst((ATermList) e_3);
                                            if(((ATgetType(f_3) != AT_INT) || (ATgetInt((ATermInt) f_3) != 39)))
                                              _fail(t);
                                            {
                                              ATerm g_3 = (ATerm) ATgetNext((ATermList) e_3);
                                              if(((ATgetType(g_3) != AT_LIST) || !(ATisEmpty(g_3))))
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
                            t = y_13;
                          }
                        }
                    }
                    w_13 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, w_13);
                  }
                }
              else
                {
                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                    {
                      q_7 = ATgetArgument(t, 0);
                      r_7 = ATgetArgument(t, 1);
                      o_7 = ATgetArgument(t, 2);
                      l_7 = ATgetArgument(t, 3);
                      {
                        ATerm l_8 = NULL,m_8 = NULL;
                        t = r_7;
                        t = mk_rulenames_0_0(t);
                        l_8 = t;
                        t = o_7;
                        t = mk_rulenames_0_0(t);
                        m_8 = t;
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_3, (ATerm)ATinsert(ATinsert(ATempty, l_7), q_7), (ATerm) ATinsert(ATinsert(ATempty, m_8), l_8));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                        {
                          q_7 = ATgetArgument(t, 0);
                          r_7 = ATgetArgument(t, 1);
                          o_7 = ATgetArgument(t, 2);
                          {
                            ATerm q_8 = NULL,r_8 = NULL;
                            t = q_7;
                            t = mk_rulenames_0_0(t);
                            q_8 = t;
                            t = r_7;
                            t = mk_rulenames_0_0(t);
                            r_8 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_3, (ATerm)ATinsert(ATempty, o_7), (ATerm) ATinsert(ATinsert(ATempty, r_8), q_8));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleUnion_3))
                            {
                              q_7 = ATgetArgument(t, 0);
                              r_7 = ATgetArgument(t, 1);
                              o_7 = ATgetArgument(t, 2);
                              {
                                ATerm v_8 = NULL;
                                t = r_7;
                                t = mk_rulenames_0_0(t);
                                v_8 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_3, (ATerm)ATinsert(ATinsert(ATempty, o_7), q_7), (ATerm) ATinsert(ATempty, v_8));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_DynRuleUnionFix_2))
                                {
                                  q_7 = ATgetArgument(t, 0);
                                  r_7 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_8 = NULL;
                                    t = q_7;
                                    t = mk_rulenames_0_0(t);
                                    y_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_3, (ATerm)ATinsert(ATempty, r_7), (ATerm) ATinsert(ATempty, y_8));
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                    {
                                      q_7 = ATgetArgument(t, 0);
                                      r_7 = ATgetArgument(t, 1);
                                      o_7 = ATgetArgument(t, 2);
                                      {
                                        ATerm d_9 = NULL;
                                        t = r_7;
                                        t = mk_rulenames_0_0(t);
                                        d_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_3, (ATerm)ATinsert(ATinsert(ATempty, o_7), q_7), (ATerm) ATinsert(ATempty, d_9));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynRuleIntersectFix_2))
                                        {
                                          q_7 = ATgetArgument(t, 0);
                                          r_7 = ATgetArgument(t, 1);
                                          {
                                            ATerm g_9 = NULL;
                                            t = q_7;
                                            t = mk_rulenames_0_0(t);
                                            g_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_3, (ATerm)ATinsert(ATempty, r_7), (ATerm) ATinsert(ATempty, g_9));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SortTuple_1))
                                            {
                                              q_7 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_9 = NULL;
                                                t = q_7;
                                                t = foldr_2_0(p_0, q_0, t);
                                                i_9 = t;
                                                t = (ATerm) ATmakeAppl(sym_Sort_2, term_x_3, (ATerm) ATinsert(ATempty, i_9));
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SortListTl_2))
                                                {
                                                  q_7 = ATgetArgument(t, 0);
                                                  r_7 = ATgetArgument(t, 1);
                                                  {
                                                    static ATerm v_0 (ATerm t);
                                                    static ATerm v_0 (ATerm t)
                                                    {
                                                      t = r_7;
                                                      return(t);
                                                    }
                                                    t = q_7;
                                                    t = foldr_2_0(v_0, w_0, t);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_SortList_1))
                                                    {
                                                      q_7 = ATgetArgument(t, 0);
                                                      t = q_7;
                                                      t = foldr_2_0(x_0, y_0, t);
                                                    }
                                                  else
                                                    {
                                                      ATerm y_3 = t;
                                                      int b_4 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Con4_4))
                                                            {
                                                              q_7 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm c_4 = ATgetArgument(t, 1);
                                                              }
                                                              o_7 = ATgetArgument(t, 2);
                                                              l_7 = ATgetArgument(t, 3);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(b_4);
                                                          t = (ATerm) ATmakeAppl(sym_Con_3, q_7, o_7, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_7), (ATerm) ATempty));
                                                        }
                                                      else
                                                        {
                                                          t = y_3;
                                                          {
                                                            ATerm d_4 = t;
                                                            int e_4 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_Con3_3))
                                                                  {
                                                                    q_7 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm f_4 = ATgetArgument(t, 1);
                                                                    }
                                                                    o_7 = ATgetArgument(t, 2);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(e_4);
                                                                t = (ATerm) ATmakeAppl(sym_Con_3, q_7, o_7, term_i_4);
                                                              }
                                                            else
                                                              {
                                                                t = d_4;
                                                                if(match_cons(t, sym_Con1_2))
                                                                  {
                                                                    q_7 = ATgetArgument(t, 0);
                                                                    r_7 = ATgetArgument(t, 1);
                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, q_7, r_7, term_i_4);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListTail_2))
                                                                      {
                                                                        q_7 = ATgetArgument(t, 0);
                                                                        r_7 = ATgetArgument(t, 1);
                                                                        {
                                                                          static ATerm z_0 (ATerm t);
                                                                          static ATerm z_0 (ATerm t)
                                                                          {
                                                                            t = r_7;
                                                                            return(t);
                                                                          }
                                                                          t = q_7;
                                                                          t = foldr_2_0(z_0, a_1, t);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_List_1))
                                                                          {
                                                                            q_7 = ATgetArgument(t, 0);
                                                                            t = q_7;
                                                                            t = foldr_2_0(b_1, c_1, t);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_Tuple_1))
                                                                              {
                                                                                q_7 = ATgetArgument(t, 0);
                                                                                t = q_7;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    h_7 = ATgetFirst((ATermList) t);
                                                                                    i_7 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = i_7;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm j_4 = t;
                                                                                        int k_4 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = l_13(q_7, p_7, t);
                                                                                            LocalPopChoice(k_4);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = j_4;
                                                                                            t = h_7;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = l_13(q_7, p_7, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_13(q_7, p_7, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_CharCong_1))
                                                                                  {
                                                                                    q_7 = ATgetArgument(t, 0);
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, q_7));
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_RealCong_1))
                                                                                      {
                                                                                        q_7 = ATgetArgument(t, 0);
                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, q_7));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_IntCong_1))
                                                                                          {
                                                                                            q_7 = ATgetArgument(t, 0);
                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, q_7));
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StrCong_1))
                                                                                              {
                                                                                                q_7 = ATgetArgument(t, 0);
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, q_7));
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_ModCongNoArgs_1))
                                                                                                  {
                                                                                                    q_7 = ATgetArgument(t, 0);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_7), (ATerm) ATempty);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ModCong_2))
                                                                                                      {
                                                                                                        q_7 = ATgetArgument(t, 0);
                                                                                                        r_7 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_7), r_7);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_ListCong_2))
                                                                                                          {
                                                                                                            q_7 = ATgetArgument(t, 0);
                                                                                                            r_7 = ATgetArgument(t, 1);
                                                                                                            {
                                                                                                              static ATerm d_1 (ATerm t);
                                                                                                              static ATerm d_1 (ATerm t)
                                                                                                              {
                                                                                                                t = r_7;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = q_7;
                                                                                                              t = foldr_2_0(d_1, e_1, t);
                                                                                                            }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_ListCongNoTail_1))
                                                                                                              {
                                                                                                                q_7 = ATgetArgument(t, 0);
                                                                                                                t = q_7;
                                                                                                                t = foldr_2_0(f_1, g_1, t);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_TupleCong_2))
                                                                                                                  {
                                                                                                                    q_7 = ATgetArgument(t, 0);
                                                                                                                    r_7 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_2, (ATerm) ATinsert(CheckATermList(r_7), q_7));
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_TupleCong_1))
                                                                                                                      {
                                                                                                                        q_7 = ATgetArgument(t, 0);
                                                                                                                        t = q_7;
                                                                                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                          {
                                                                                                                            h_7 = ATgetFirst((ATermList) t);
                                                                                                                            i_7 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                            t = i_7;
                                                                                                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                              {
                                                                                                                                ATerm l_4 = t;
                                                                                                                                int n_4 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = m_13(q_7, p_7, t);
                                                                                                                                    LocalPopChoice(n_4);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = l_4;
                                                                                                                                    t = h_7;
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = m_13(q_7, p_7, t);
                                                                                                                              }
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = m_13(q_7, p_7, t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                                                          {
                                                                                                                            t = term_o_4;
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_AnnoCong_2))
                                                                                                                              {
                                                                                                                                q_7 = ATgetArgument(t, 0);
                                                                                                                                r_7 = ATgetArgument(t, 1);
                                                                                                                                t = r_7;
                                                                                                                                if(match_cons(t, sym_StrategyCurly_1))
                                                                                                                                  {
                                                                                                                                    j_7 = ATgetArgument(t, 0);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_Call_2, term_s_4, (ATerm) ATinsert(ATinsert(ATempty, j_7), q_7));
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_ParenStrat_1))
                                                                                                                                  {
                                                                                                                                    q_7 = ATgetArgument(t, 0);
                                                                                                                                    t = q_7;
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                                                      {
                                                                                                                                        q_7 = ATgetArgument(t, 0);
                                                                                                                                        r_7 = ATgetArgument(t, 1);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_StratRule_3, q_7, r_7, term_t_4);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RuleNoCond_2))
                                                                                                                                          {
                                                                                                                                            q_7 = ATgetArgument(t, 0);
                                                                                                                                            r_7 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Rule_3, q_7, r_7, term_t_4);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                                              {
                                                                                                                                                q_7 = ATgetArgument(t, 0);
                                                                                                                                                r_7 = ATgetArgument(t, 1);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Overlay_3, q_7, (ATerm)ATempty, r_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_SwitchChoice_3))
                                                                                                                                                  {
                                                                                                                                                    q_7 = ATgetArgument(t, 0);
                                                                                                                                                    r_7 = ATgetArgument(t, 1);
                                                                                                                                                    o_7 = ATgetArgument(t, 2);
                                                                                                                                                    {
                                                                                                                                                      ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
                                                                                                                                                      t = p_7;
                                                                                                                                                      t = new_0_0(t);
                                                                                                                                                      q_11 = t;
                                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, q_11);
                                                                                                                                                      t = new_0_0(t);
                                                                                                                                                      p_11 = t;
                                                                                                                                                      t = r_7;
                                                                                                                                                      {
                                                                                                                                                        static ATerm h_1 (ATerm t);
                                                                                                                                                        static ATerm i_1 (ATerm t);
                                                                                                                                                        static ATerm h_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = o_7;
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        static ATerm i_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
                                                                                                                                                          if(match_cons(t, sym__2))
                                                                                                                                                            {
                                                                                                                                                              ATerm u_4 = ATgetArgument(t, 0);
                                                                                                                                                              if(match_cons(u_4, sym__2))
                                                                                                                                                                {
                                                                                                                                                                  r_11 = ATgetArgument(u_4, 0);
                                                                                                                                                                  s_11 = ATgetArgument(u_4, 1);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t_11 = ATgetArgument(t, 1);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, r_11, (ATerm) ATmakeAppl(sym_Var_1, p_11))), (ATerm)ATmakeAppl(sym_BA_2, s_11, (ATerm) ATmakeAppl(sym_Var_1, q_11)), (ATerm) ATmakeAppl(sym_BA_2, t_11, (ATerm) ATmakeAppl(sym_Var_1, q_11)));
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = foldr_2_0(h_1, i_1, t);
                                                                                                                                                      }
                                                                                                                                                      o_11 = t;
                                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, q_7, (ATerm) ATmakeAppl(sym_Var_1, p_11)), o_11));
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_SwitchChoiceNoOtherwise_2))
                                                                                                                                                      {
                                                                                                                                                        q_7 = ATgetArgument(t, 0);
                                                                                                                                                        r_7 = ATgetArgument(t, 1);
                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SwitchChoice_3, q_7, r_7, term_v_4);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_IfThen_2))
                                                                                                                                                          {
                                                                                                                                                            q_7 = ATgetArgument(t, 0);
                                                                                                                                                            r_7 = ATgetArgument(t, 1);
                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_CondChoice_3, q_7, r_7, term_t_4);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            if(match_cons(t, sym_CondChoice_3))
                                                                                                                                                              {
                                                                                                                                                                q_7 = ATgetArgument(t, 0);
                                                                                                                                                                r_7 = ATgetArgument(t, 1);
                                                                                                                                                                o_7 = ATgetArgument(t, 2);
                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, q_7), r_7, o_7);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                                                                                  {
                                                                                                                                                                    q_7 = ATgetArgument(t, 0);
                                                                                                                                                                    r_7 = ATgetArgument(t, 1);
                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_7, q_7);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_PrimT_3))
                                                                                                                                                                      {
                                                                                                                                                                        q_7 = ATgetArgument(t, 0);
                                                                                                                                                                        r_7 = ATgetArgument(t, 1);
                                                                                                                                                                        o_7 = ATgetArgument(t, 2);
                                                                                                                                                                        {
                                                                                                                                                                          ATerm h_12 = NULL;
                                                                                                                                                                          t = q_7;
                                                                                                                                                                          t = un_double_quote_0_0(t);
                                                                                                                                                                          h_12 = t;
                                                                                                                                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, h_12, r_7, o_7);
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                                                                          {
                                                                                                                                                                            q_7 = ATgetArgument(t, 0);
                                                                                                                                                                            {
                                                                                                                                                                              ATerm j_12 = NULL;
                                                                                                                                                                              t = q_7;
                                                                                                                                                                              t = un_double_quote_0_0(t);
                                                                                                                                                                              j_12 = t;
                                                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Prim_2, j_12, (ATerm) ATempty);
                                                                                                                                                                            }
                                                                                                                                                                          }
                                                                                                                                                                        else
                                                                                                                                                                          {
                                                                                                                                                                            if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                                                              {
                                                                                                                                                                                q_7 = ATgetArgument(t, 0);
                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Call_2, q_7, (ATerm) ATempty);
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                                                                  {
                                                                                                                                                                                    q_7 = ATgetArgument(t, 0);
                                                                                                                                                                                    r_7 = ATgetArgument(t, 1);
                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDef_3, q_7, (ATerm)ATempty, r_7);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  {
                                                                                                                                                                                    if(match_cons(t, sym_SRDefT_4))
                                                                                                                                                                                      {
                                                                                                                                                                                        q_7 = ATgetArgument(t, 0);
                                                                                                                                                                                        r_7 = ATgetArgument(t, 1);
                                                                                                                                                                                        o_7 = ATgetArgument(t, 2);
                                                                                                                                                                                        l_7 = ATgetArgument(t, 3);
                                                                                                                                                                                        t = l_7;
                                                                                                                                                                                        if(match_cons(t, sym_StratRule_3))
                                                                                                                                                                                          {
                                                                                                                                                                                            m_7 = ATgetArgument(t, 0);
                                                                                                                                                                                            n_7 = ATgetArgument(t, 1);
                                                                                                                                                                                            k_7 = ATgetArgument(t, 2);
                                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_7, r_7, o_7, (ATerm) ATmakeAppl(sym_Seq_2, m_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, k_7), n_7)));
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          {
                                                                                                                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                                                                                                              {
                                                                                                                                                                                                m_7 = ATgetArgument(t, 0);
                                                                                                                                                                                                n_7 = ATgetArgument(t, 1);
                                                                                                                                                                                              }
                                                                                                                                                                                            else
                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_7, r_7, o_7, (ATerm) ATmakeAppl(sym_Seq_2, m_7, n_7));
                                                                                                                                                                                          }
                                                                                                                                                                                      }
                                                                                                                                                                                    else
                                                                                                                                                                                      {
                                                                                                                                                                                        if(match_cons(t, sym_SRDef_3))
                                                                                                                                                                                          {
                                                                                                                                                                                            q_7 = ATgetArgument(t, 0);
                                                                                                                                                                                            r_7 = ATgetArgument(t, 1);
                                                                                                                                                                                            o_7 = ATgetArgument(t, 2);
                                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_7, r_7, (ATerm)ATempty, o_7);
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          {
                                                                                                                                                                                            if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                                                                              {
                                                                                                                                                                                                q_7 = ATgetArgument(t, 0);
                                                                                                                                                                                                r_7 = ATgetArgument(t, 1);
                                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_7, (ATerm)ATempty, (ATerm)ATempty, r_7);
                                                                                                                                                                                              }
                                                                                                                                                                                            else
                                                                                                                                                                                              {
                                                                                                                                                                                                if(match_cons(t, sym_RDec_2))
                                                                                                                                                                                                  {
                                                                                                                                                                                                    q_7 = ATgetArgument(t, 0);
                                                                                                                                                                                                    r_7 = ATgetArgument(t, 1);
                                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDecT_3, q_7, r_7, (ATerm) ATempty);
                                                                                                                                                                                                  }
                                                                                                                                                                                                else
                                                                                                                                                                                                  {
                                                                                                                                                                                                    if(match_cons(t, sym_RDecNoArgs_1))
                                                                                                                                                                                                      {
                                                                                                                                                                                                        q_7 = ATgetArgument(t, 0);
                                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDec_2, q_7, (ATerm) ATempty);
                                                                                                                                                                                                      }
                                                                                                                                                                                                    else
                                                                                                                                                                                                      {
                                                                                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                                                                          {
                                                                                                                                                                                                            q_7 = ATgetArgument(t, 0);
                                                                                                                                                                                                            r_7 = ATgetArgument(t, 1);
                                                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDef_3, q_7, (ATerm)ATempty, r_7);
                                                                                                                                                                                                          }
                                                                                                                                                                                                        else
                                                                                                                                                                                                          {
                                                                                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                                                                                              {
                                                                                                                                                                                                                ATerm w_4 = ATgetArgument(t, 0);
                                                                                                                                                                                                                r_7 = ATgetArgument(t, 1);
                                                                                                                                                                                                              }
                                                                                                                                                                                                            else
                                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, r_7);
                                                                                                                                                                                                          }
                                                                                                                                                                                                      }
                                                                                                                                                                                                  }
                                                                                                                                                                                              }
                                                                                                                                                                                          }
                                                                                                                                                                                      }
                                                                                                                                                                                  }
                                                                                                                                                                              }
                                                                                                                                                                          }
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm j_1 (ATerm t)
{
  t = try_1_0(k_1, t);
  t = topdown_1_0(l_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  o_13 = t;
  t = SSL_explode_term(o_13);
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      ATerm y_4 = ATgetArgument(t, 1);
      if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
        {
          n_13 = ATgetFirst((ATermList) y_4);
          {
            ATerm z_4 = (ATerm) ATgetNext((ATermList) y_4);
            if(((ATgetType(z_4) != AT_LIST) || !(ATisEmpty(z_4))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = n_13;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  t = try_1_0(DesugarOnce_0_0, t);
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = io_wrap_1_0(j_1, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}

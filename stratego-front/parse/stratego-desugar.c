#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Var_1;
Symbol sym_Anno_2;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_m_4;
ATerm term_k_4;
ATerm term_i_4;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_a_4;
ATerm term_z_3;
ATerm term_y_3;
ATerm term_n_3;
ATerm term_l_3;
ATerm term_k_3;
ATerm term_j_3;
ATerm term_h_3;
ATerm term_g_3;
ATerm term_e_3;
ATerm term_d_3;
ATerm term_b_3;
ATerm term_q_2;
ATerm term_p_2;
ATerm term_o_2;
ATerm term_n_2;
ATerm term_m_2;
ATerm term_j_2;
ATerm term_i_2;
ATerm term_h_2;
ATerm term_g_2;
ATerm term_f_2;
ATerm term_d_2;
ATerm term_b_2;
ATerm term_a_2;
ATerm term_z_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(sym_Op_2, term_z_1, (ATerm) ATempty);
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_2);
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(sym_Sort_2, term_z_1, (ATerm) ATempty);
  ATprotect(&(term_h_2));
  term_h_2 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_2);
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_1);
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(sym_Call_2, term_i_2, (ATerm) ATempty);
  ATprotect(&(term_m_2));
  term_m_2 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_2));
  term_q_2 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-union", 0, ATtrue));
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_3);
  ATprotect(&(term_e_3));
  term_e_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-union", 0, ATtrue));
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_3);
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fork-and-intersect", 0, ATtrue));
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_3);
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-fix-and-intersect", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_3);
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_3);
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym_Call_2, term_z_3, (ATerm) ATempty);
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(sym_Call_2, term_f_2, (ATerm) ATempty);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_4);
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym_Fail_0);
}
#include <srts/init-stratego-application.h>
ATerm implode_string_0_0 (ATerm t);
ATerm Var_1_0 (ATerm m_80 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm string_to_real_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm try_1_0 (ATerm x_102 (ATerm), ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm foldr_2_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm mk_rulenames_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t);
static ATerm u_15 (ATerm v_6, ATerm w_6, ATerm t);
static ATerm v_15 (ATerm z_6, ATerm a_7, ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_1_0 (ATerm j_87 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm iowrap_1_0 (ATerm y_107 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
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
  ATerm c_4 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_1 = ATgetFirst((ATermList) t);
      if(((ATgetType(l_1) != AT_INT) || (ATgetInt((ATermInt) l_1) != 39)))
        _fail(t);
      c_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_4;
  t = implode_string_0_0(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm m_1 = t;
  int n_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 = NULL,z_2 = NULL,c_3 = NULL,f_3 = NULL;
      z_2 = t;
      if(match_cons(t, sym_Str_1))
        {
          c_3 = ATgetArgument(t, 0);
          {
            ATerm i_3 = NULL;
            t = c_3;
            t = un_double_quote_0_0(t);
            t = unescape_0_0(t);
            i_3 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, i_3);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              c_3 = ATgetArgument(t, 0);
              {
                ATerm m_3 = NULL;
                t = c_3;
                t = string_to_real_0_0(t);
                m_3 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, m_3);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  c_3 = ATgetArgument(t, 0);
                  {
                    ATerm p_3 = NULL;
                    t = c_3;
                    t = string_to_int_0_0(t);
                    p_3 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, p_3);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Con_3))
                    {
                      c_3 = ATgetArgument(t, 0);
                      f_3 = ATgetArgument(t, 1);
                      w_2 = ATgetArgument(t, 2);
                      t = w_2;
                      t = is_string_0_0(t);
                      t = (ATerm) ATmakeAppl(sym_Con_3, c_3, f_3, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_2), (ATerm) ATempty));
                    }
                  else
                    {
                      if(match_cons(t, sym_DefaultVarDec_1))
                        {
                          c_3 = ATgetArgument(t, 0);
                          {
                            ATerm c_0 = NULL,f_0 = NULL,h_0 = NULL,d_0 = NULL;
                            t = SSLgetAnnotations(z_2);
                            c_0 = t;
                            t = c_3;
                            t = explode_string_0_0(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm o_1 = ATgetFirst((ATermList) t);
                                if(((ATgetType(o_1) != AT_INT) || (ATgetInt((ATermInt) o_1) != 39)))
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
                              c_3 = ATgetArgument(t, 0);
                              f_3 = ATgetArgument(t, 1);
                              w_2 = ATgetArgument(t, 2);
                              {
                                ATerm y_0 = NULL,v_1 = NULL,x_1 = NULL,g_0 = NULL;
                                t = SSLgetAnnotations(z_2);
                                y_0 = t;
                                t = c_3;
                                t = explode_string_0_0(t);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm p_1 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(p_1) != AT_INT) || (ATgetInt((ATermInt) p_1) != 39)))
                                      _fail(t);
                                    v_1 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = v_1;
                                t = implode_string_0_0(t);
                                x_1 = t;
                                t = (ATerm) ATmakeAppl(sym_RDef_3, x_1, f_3, w_2);
                                g_0 = t;
                                t = SSLsetAnnotations(g_0, y_0);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDef_3))
                                {
                                  c_3 = ATgetArgument(t, 0);
                                  f_3 = ATgetArgument(t, 1);
                                  w_2 = ATgetArgument(t, 2);
                                  {
                                    ATerm r_2 = NULL,y_2 = NULL,a_3 = NULL,l_0 = NULL;
                                    t = SSLgetAnnotations(z_2);
                                    r_2 = t;
                                    t = c_3;
                                    t = explode_string_0_0(t);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm q_1 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(q_1) != AT_INT) || (ATgetInt((ATermInt) q_1) != 39)))
                                          _fail(t);
                                        y_2 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = y_2;
                                    t = implode_string_0_0(t);
                                    a_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDef_3, a_3, f_3, w_2);
                                    l_0 = t;
                                    t = SSLsetAnnotations(l_0, r_2);
                                  }
                                }
                              else
                                {
                                  ATerm s_3 = NULL,w_3 = NULL,x_3 = NULL,o_0 = NULL;
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      c_3 = ATgetArgument(t, 0);
                                      f_3 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(z_2);
                                  s_3 = t;
                                  t = c_3;
                                  t = explode_string_0_0(t);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      ATerm r_1 = ATgetFirst((ATermList) t);
                                      if(((ATgetType(r_1) != AT_INT) || (ATgetInt((ATermInt) r_1) != 39)))
                                        _fail(t);
                                      w_3 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = w_3;
                                  t = implode_string_0_0(t);
                                  x_3 = t;
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_3, f_3);
                                  o_0 = t;
                                  t = SSLsetAnnotations(o_0, s_3);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(n_1);
    }
  else
    {
      t = m_1;
      {
        ATerm s_1 = t;
        int t_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(a_0, t);
            LocalPopChoice(t_1);
          }
        else
          {
            t = s_1;
            {
              ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
              n_5 = t;
              if(match_cons(t, sym_SVar_1))
                {
                  o_5 = ATgetArgument(t, 0);
                  {
                    ATerm j_4 = NULL,n_4 = NULL,p_4 = NULL,q_0 = NULL;
                    t = SSLgetAnnotations(n_5);
                    j_4 = t;
                    t = o_5;
                    t = explode_string_0_0(t);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm u_1 = ATgetFirst((ATermList) t);
                        if(((ATgetType(u_1) != AT_INT) || (ATgetInt((ATermInt) u_1) != 39)))
                          _fail(t);
                        n_4 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = n_4;
                    t = implode_string_0_0(t);
                    p_4 = t;
                    t = (ATerm) ATmakeAppl(sym_SVar_1, p_4);
                    q_0 = t;
                    t = SSLsetAnnotations(q_0, j_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OpDecl_2))
                    {
                      o_5 = ATgetArgument(t, 0);
                      p_5 = ATgetArgument(t, 1);
                      {
                        ATerm e_6 = NULL,h_6 = NULL,i_6 = NULL,r_0 = NULL;
                        t = SSLgetAnnotations(n_5);
                        e_6 = t;
                        t = o_5;
                        t = explode_string_0_0(t);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm w_1 = ATgetFirst((ATermList) t);
                            if(((ATgetType(w_1) != AT_INT) || (ATgetInt((ATermInt) w_1) != 39)))
                              _fail(t);
                            h_6 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = h_6;
                        t = implode_string_0_0(t);
                        i_6 = t;
                        t = (ATerm) ATmakeAppl(sym_OpDecl_2, i_6, p_5);
                        r_0 = t;
                        t = SSLsetAnnotations(r_0, e_6);
                      }
                    }
                  else
                    {
                      ATerm c_9 = NULL,z_10 = NULL,a_11 = NULL,s_0 = NULL;
                      if(match_cons(t, sym_Op_2))
                        {
                          o_5 = ATgetArgument(t, 0);
                          p_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(n_5);
                      c_9 = t;
                      t = o_5;
                      t = explode_string_0_0(t);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm y_1 = ATgetFirst((ATermList) t);
                          if(((ATgetType(y_1) != AT_INT) || (ATgetInt((ATermInt) y_1) != 39)))
                            _fail(t);
                          z_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = z_10;
                      t = implode_string_0_0(t);
                      a_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, a_11, p_5);
                      s_0 = t;
                      t = SSLsetAnnotations(s_0, c_9);
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
  t = term_a_2;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  a_6 = t;
  t = Fst_0_0(t);
  y_5 = t;
  t = a_6;
  t = Snd_0_0(t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_2, (ATerm) ATinsert(ATinsert(ATempty, z_5), y_5));
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm b_6 = NULL;
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, b_6);
  return(t);
}
ATerm mk_rulenames_0_0 (ATerm t)
{
  t = foldr_3_0(b_0, e_0, i_0, t);
  return(t);
}
static ATerm u_15 (ATerm v_6, ATerm w_6, ATerm t)
{
  t = v_6;
  {
    ATerm c_2 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, Nil_0_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_2;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_2, v_6);
  return(t);
}
static ATerm v_15 (ATerm z_6, ATerm a_7, ATerm t)
{
  t = z_6;
  {
    ATerm e_2 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, Nil_0_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_2;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_2, z_6);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_a_2;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  q_7 = t;
  t = Fst_0_0(t);
  o_7 = t;
  t = q_7;
  t = Snd_0_0(t);
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_2, (ATerm) ATinsert(ATinsert(ATempty, p_7), o_7));
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_g_2;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  l_8 = t;
  t = Fst_0_0(t);
  j_8 = t;
  t = l_8;
  t = Snd_0_0(t);
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_b_2, (ATerm) ATinsert(ATinsert(ATempty, k_8), j_8));
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  r_8 = t;
  t = Fst_0_0(t);
  p_8 = t;
  t = r_8;
  t = Snd_0_0(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_b_2, (ATerm) ATinsert(ATinsert(ATempty, q_8), p_8));
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_g_2;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  v_8 = t;
  t = Fst_0_0(t);
  t_8 = t;
  t = v_8;
  t = Snd_0_0(t);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_b_2, (ATerm) ATinsert(ATinsert(ATempty, u_8), t_8));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      g_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_2, (ATerm) ATinsert(ATinsert(ATempty, h_9), g_9));
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_a_2;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_2, (ATerm) ATinsert(ATinsert(ATempty, k_9), j_9));
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_2, (ATerm) ATinsert(ATinsert(ATempty, w_9), v_9));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_j_2;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_2, (ATerm) ATinsert(ATinsert(ATempty, z_9), y_9));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
  i_7 = t;
  if(match_cons(t, sym_Anno_2))
    {
      j_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
      {
        ATerm n_7 = NULL;
        t = k_7;
        t = foldr_2_0(j_0, k_0, t);
        n_7 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, j_7, n_7);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          j_7 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, j_7, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              j_7 = ATgetArgument(t, 0);
              {
                ATerm i_11 = NULL;
                t = j_7;
                {
                  ATerm k_2 = t;
                  int l_2 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_m_2;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_n_2;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_o_2;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_p_2;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_q_2;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(l_2);
                    }
                  else
                    {
                      t = k_2;
                      {
                        ATerm k_11 = NULL;
                        t = explode_string_0_0(t);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_2 = ATgetFirst((ATermList) t);
                            if(((ATgetType(s_2) != AT_INT) || (ATgetInt((ATermInt) s_2) != 39)))
                              _fail(t);
                            {
                              ATerm t_2 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(t_2) == AT_LIST) && !(ATisEmpty(t_2))))
                                {
                                  k_11 = ATgetFirst((ATermList) t_2);
                                  {
                                    ATerm u_2 = (ATerm) ATgetNext((ATermList) t_2);
                                    if(((ATgetType(u_2) == AT_LIST) && !(ATisEmpty(u_2))))
                                      {
                                        ATerm v_2 = ATgetFirst((ATermList) u_2);
                                        if(((ATgetType(v_2) != AT_INT) || (ATgetInt((ATermInt) v_2) != 39)))
                                          _fail(t);
                                        {
                                          ATerm x_2 = (ATerm) ATgetNext((ATermList) u_2);
                                          if(((ATgetType(x_2) != AT_LIST) || !(ATisEmpty(x_2))))
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
                        t = k_11;
                      }
                    }
                }
                i_11 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, i_11);
              }
            }
          else
            {
              if(match_cons(t, sym_DynRuleUnion_3))
                {
                  j_7 = ATgetArgument(t, 0);
                  k_7 = ATgetArgument(t, 1);
                  h_7 = ATgetArgument(t, 2);
                  {
                    ATerm w_7 = NULL;
                    t = k_7;
                    t = mk_rulenames_0_0(t);
                    w_7 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_3, (ATerm)ATinsert(ATinsert(ATempty, h_7), j_7), (ATerm) ATinsert(ATempty, w_7));
                  }
                }
              else
                {
                  if(match_cons(t, sym_DynRuleUnionFix_2))
                    {
                      j_7 = ATgetArgument(t, 0);
                      k_7 = ATgetArgument(t, 1);
                      {
                        ATerm z_7 = NULL;
                        t = j_7;
                        t = mk_rulenames_0_0(t);
                        z_7 = t;
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_3, (ATerm)ATinsert(ATempty, k_7), (ATerm) ATinsert(ATempty, z_7));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynRuleIntersect_3))
                        {
                          j_7 = ATgetArgument(t, 0);
                          k_7 = ATgetArgument(t, 1);
                          h_7 = ATgetArgument(t, 2);
                          {
                            ATerm d_8 = NULL;
                            t = k_7;
                            t = mk_rulenames_0_0(t);
                            d_8 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_3, (ATerm)ATinsert(ATinsert(ATempty, h_7), j_7), (ATerm) ATinsert(ATempty, d_8));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleIntersectFix_2))
                            {
                              j_7 = ATgetArgument(t, 0);
                              k_7 = ATgetArgument(t, 1);
                              {
                                ATerm g_8 = NULL;
                                t = j_7;
                                t = mk_rulenames_0_0(t);
                                g_8 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_3, (ATerm)ATinsert(ATempty, k_7), (ATerm) ATinsert(ATempty, g_8));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SortTuple_1))
                                {
                                  j_7 = ATgetArgument(t, 0);
                                  {
                                    ATerm i_8 = NULL;
                                    t = j_7;
                                    t = foldr_2_0(m_0, n_0, t);
                                    i_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_3, (ATerm) ATinsert(ATempty, i_8));
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_SortListTl_2))
                                    {
                                      j_7 = ATgetArgument(t, 0);
                                      k_7 = ATgetArgument(t, 1);
                                      {
                                        static ATerm p_0 (ATerm t);
                                        static ATerm p_0 (ATerm t)
                                        {
                                          t = k_7;
                                          return(t);
                                        }
                                        t = j_7;
                                        t = foldr_2_0(p_0, t_0, t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SortList_1))
                                        {
                                          j_7 = ATgetArgument(t, 0);
                                          t = j_7;
                                          t = foldr_2_0(u_0, v_0, t);
                                        }
                                      else
                                        {
                                          ATerm o_3 = t;
                                          int q_3 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Con4_4))
                                                {
                                                  j_7 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm r_3 = ATgetArgument(t, 1);
                                                  }
                                                  h_7 = ATgetArgument(t, 2);
                                                  d_7 = ATgetArgument(t, 3);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(q_3);
                                              t = (ATerm) ATmakeAppl(sym_Con_3, j_7, h_7, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_7), (ATerm) ATempty));
                                            }
                                          else
                                            {
                                              t = o_3;
                                              {
                                                ATerm t_3 = t;
                                                int u_3 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Con3_3))
                                                      {
                                                        j_7 = ATgetArgument(t, 0);
                                                        {
                                                          ATerm v_3 = ATgetArgument(t, 1);
                                                        }
                                                        h_7 = ATgetArgument(t, 2);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(u_3);
                                                    t = (ATerm) ATmakeAppl(sym_Con_3, j_7, h_7, term_a_4);
                                                  }
                                                else
                                                  {
                                                    t = t_3;
                                                    if(match_cons(t, sym_Con1_2))
                                                      {
                                                        j_7 = ATgetArgument(t, 0);
                                                        k_7 = ATgetArgument(t, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Con_3, j_7, k_7, term_a_4);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ListTail_2))
                                                          {
                                                            j_7 = ATgetArgument(t, 0);
                                                            k_7 = ATgetArgument(t, 1);
                                                            {
                                                              static ATerm w_0 (ATerm t);
                                                              static ATerm w_0 (ATerm t)
                                                              {
                                                                t = k_7;
                                                                return(t);
                                                              }
                                                              t = j_7;
                                                              t = foldr_2_0(w_0, x_0, t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_List_1))
                                                              {
                                                                j_7 = ATgetArgument(t, 0);
                                                                t = j_7;
                                                                t = foldr_2_0(z_0, b_1, t);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_Tuple_1))
                                                                  {
                                                                    j_7 = ATgetArgument(t, 0);
                                                                    t = j_7;
                                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                      {
                                                                        e_7 = ATgetFirst((ATermList) t);
                                                                        f_7 = (ATerm) ATgetNext((ATermList) t);
                                                                        t = f_7;
                                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                          {
                                                                            ATerm b_4 = t;
                                                                            int d_4 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = u_15(j_7, i_7, t);
                                                                                LocalPopChoice(d_4);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = b_4;
                                                                                t = e_7;
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            t = u_15(j_7, i_7, t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_15(j_7, i_7, t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_CharCong_1))
                                                                      {
                                                                        j_7 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, j_7));
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_RealCong_1))
                                                                          {
                                                                            j_7 = ATgetArgument(t, 0);
                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, j_7));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_IntCong_1))
                                                                              {
                                                                                j_7 = ATgetArgument(t, 0);
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, j_7));
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_StrCong_1))
                                                                                  {
                                                                                    j_7 = ATgetArgument(t, 0);
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, j_7));
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                                      {
                                                                                        j_7 = ATgetArgument(t, 0);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_7), (ATerm) ATempty);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ModCong_2))
                                                                                          {
                                                                                            j_7 = ATgetArgument(t, 0);
                                                                                            k_7 = ATgetArgument(t, 1);
                                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_7), k_7);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_ListCong_2))
                                                                                              {
                                                                                                j_7 = ATgetArgument(t, 0);
                                                                                                k_7 = ATgetArgument(t, 1);
                                                                                                {
                                                                                                  static ATerm c_1 (ATerm t);
                                                                                                  static ATerm c_1 (ATerm t)
                                                                                                  {
                                                                                                    t = k_7;
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = j_7;
                                                                                                  t = foldr_2_0(c_1, d_1, t);
                                                                                                }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                                  {
                                                                                                    j_7 = ATgetArgument(t, 0);
                                                                                                    t = j_7;
                                                                                                    t = foldr_2_0(e_1, f_1, t);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                                      {
                                                                                                        j_7 = ATgetArgument(t, 0);
                                                                                                        k_7 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_f_2, (ATerm) ATinsert(CheckATermList(k_7), j_7));
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                                          {
                                                                                                            j_7 = ATgetArgument(t, 0);
                                                                                                            t = j_7;
                                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                              {
                                                                                                                e_7 = ATgetFirst((ATermList) t);
                                                                                                                f_7 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                t = f_7;
                                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                  {
                                                                                                                    ATerm e_4 = t;
                                                                                                                    int f_4 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = v_15(j_7, i_7, t);
                                                                                                                        LocalPopChoice(f_4);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = e_4;
                                                                                                                        t = e_7;
                                                                                                                      }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = v_15(j_7, i_7, t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = v_15(j_7, i_7, t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                                              {
                                                                                                                t = term_g_4;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                                  {
                                                                                                                    j_7 = ATgetArgument(t, 0);
                                                                                                                    k_7 = ATgetArgument(t, 1);
                                                                                                                    t = k_7;
                                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                                      {
                                                                                                                        g_7 = ATgetArgument(t, 0);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_4, (ATerm) ATinsert(ATinsert(ATempty, g_7), j_7));
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                                      {
                                                                                                                        j_7 = ATgetArgument(t, 0);
                                                                                                                        t = j_7;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                                          {
                                                                                                                            j_7 = ATgetArgument(t, 0);
                                                                                                                            k_7 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, j_7, k_7, term_k_4);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                                              {
                                                                                                                                j_7 = ATgetArgument(t, 0);
                                                                                                                                k_7 = ATgetArgument(t, 1);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, j_7, k_7, term_k_4);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                                  {
                                                                                                                                    j_7 = ATgetArgument(t, 0);
                                                                                                                                    k_7 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, j_7, (ATerm)ATempty, k_7);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SwitchChoice_3))
                                                                                                                                      {
                                                                                                                                        j_7 = ATgetArgument(t, 0);
                                                                                                                                        k_7 = ATgetArgument(t, 1);
                                                                                                                                        h_7 = ATgetArgument(t, 2);
                                                                                                                                        {
                                                                                                                                          ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
                                                                                                                                          t = i_7;
                                                                                                                                          t = new_0_0(t);
                                                                                                                                          r_10 = t;
                                                                                                                                          t = (ATerm) ATmakeAppl(sym_Var_1, r_10);
                                                                                                                                          t = new_0_0(t);
                                                                                                                                          q_10 = t;
                                                                                                                                          t = k_7;
                                                                                                                                          {
                                                                                                                                            static ATerm g_1 (ATerm t);
                                                                                                                                            static ATerm h_1 (ATerm t);
                                                                                                                                            static ATerm g_1 (ATerm t)
                                                                                                                                            {
                                                                                                                                              t = h_7;
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            static ATerm h_1 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
                                                                                                                                              if(match_cons(t, sym__2))
                                                                                                                                                {
                                                                                                                                                  ATerm l_4 = ATgetArgument(t, 0);
                                                                                                                                                  if(match_cons(l_4, sym__2))
                                                                                                                                                    {
                                                                                                                                                      s_10 = ATgetArgument(l_4, 0);
                                                                                                                                                      t_10 = ATgetArgument(l_4, 1);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  u_10 = ATgetArgument(t, 1);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, s_10, (ATerm) ATmakeAppl(sym_Var_1, q_10))), (ATerm)ATmakeAppl(sym_BA_2, t_10, (ATerm) ATmakeAppl(sym_Var_1, r_10)), (ATerm) ATmakeAppl(sym_BA_2, u_10, (ATerm) ATmakeAppl(sym_Var_1, r_10)));
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = foldr_2_0(g_1, h_1, t);
                                                                                                                                          }
                                                                                                                                          p_10 = t;
                                                                                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, j_7, (ATerm) ATmakeAppl(sym_Var_1, q_10)), p_10));
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SwitchChoiceNoOtherwise_2))
                                                                                                                                          {
                                                                                                                                            j_7 = ATgetArgument(t, 0);
                                                                                                                                            k_7 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SwitchChoice_3, j_7, k_7, term_m_4);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_CondChoice_3))
                                                                                                                                              {
                                                                                                                                                j_7 = ATgetArgument(t, 0);
                                                                                                                                                k_7 = ATgetArgument(t, 1);
                                                                                                                                                h_7 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, j_7), k_7, h_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                                                                  {
                                                                                                                                                    j_7 = ATgetArgument(t, 0);
                                                                                                                                                    k_7 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_7, j_7);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_PrimT_3))
                                                                                                                                                      {
                                                                                                                                                        j_7 = ATgetArgument(t, 0);
                                                                                                                                                        k_7 = ATgetArgument(t, 1);
                                                                                                                                                        h_7 = ATgetArgument(t, 2);
                                                                                                                                                        {
                                                                                                                                                          ATerm c_15 = NULL;
                                                                                                                                                          t = j_7;
                                                                                                                                                          t = un_double_quote_0_0(t);
                                                                                                                                                          c_15 = t;
                                                                                                                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_15, k_7, h_7);
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                                                          {
                                                                                                                                                            j_7 = ATgetArgument(t, 0);
                                                                                                                                                            {
                                                                                                                                                              ATerm e_15 = NULL;
                                                                                                                                                              t = j_7;
                                                                                                                                                              t = un_double_quote_0_0(t);
                                                                                                                                                              e_15 = t;
                                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Prim_2, e_15, (ATerm) ATempty);
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                                              {
                                                                                                                                                                j_7 = ATgetArgument(t, 0);
                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Call_2, j_7, (ATerm) ATempty);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                                                  {
                                                                                                                                                                    j_7 = ATgetArgument(t, 0);
                                                                                                                                                                    k_7 = ATgetArgument(t, 1);
                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDef_3, j_7, (ATerm)ATempty, k_7);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                                                      {
                                                                                                                                                                        j_7 = ATgetArgument(t, 0);
                                                                                                                                                                        k_7 = ATgetArgument(t, 1);
                                                                                                                                                                        h_7 = ATgetArgument(t, 2);
                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, j_7, k_7, h_7);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                                                          {
                                                                                                                                                                            j_7 = ATgetArgument(t, 0);
                                                                                                                                                                            k_7 = ATgetArgument(t, 1);
                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDef_3, j_7, (ATerm)ATempty, k_7);
                                                                                                                                                                          }
                                                                                                                                                                        else
                                                                                                                                                                          {
                                                                                                                                                                            if(match_cons(t, sym_RDec_2))
                                                                                                                                                                              {
                                                                                                                                                                                j_7 = ATgetArgument(t, 0);
                                                                                                                                                                                k_7 = ATgetArgument(t, 1);
                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDecT_3, j_7, k_7, (ATerm) ATempty);
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_RDecNoArgs_1))
                                                                                                                                                                                  {
                                                                                                                                                                                    j_7 = ATgetArgument(t, 0);
                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDec_2, j_7, (ATerm) ATempty);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  {
                                                                                                                                                                                    if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                                                      {
                                                                                                                                                                                        j_7 = ATgetArgument(t, 0);
                                                                                                                                                                                        k_7 = ATgetArgument(t, 1);
                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, j_7, (ATerm)ATempty, k_7);
                                                                                                                                                                                      }
                                                                                                                                                                                    else
                                                                                                                                                                                      {
                                                                                                                                                                                        if(match_cons(t, sym_Module_2))
                                                                                                                                                                                          {
                                                                                                                                                                                            ATerm o_4 = ATgetArgument(t, 0);
                                                                                                                                                                                            k_7 = ATgetArgument(t, 1);
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Specification_1, k_7);
                                                                                                                                                                                      }
                                                                                                                                                                                  }
                                                                                                                                                                              }
                                                                                                                                                                          }
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                            }
                                        }
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
static ATerm i_1 (ATerm t)
{
  t = try_1_0(j_1, t);
  t = topdown_1_0(k_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL;
  x_15 = t;
  t = SSL_explode_term(x_15);
  if(match_cons(t, sym__2))
    {
      ATerm q_4 = ATgetArgument(t, 0);
      ATerm r_4 = ATgetArgument(t, 1);
      if(((ATgetType(r_4) == AT_LIST) && !(ATisEmpty(r_4))))
        {
          w_15 = ATgetFirst((ATermList) r_4);
          {
            ATerm s_4 = (ATerm) ATgetNext((ATermList) r_4);
            if(((ATgetType(s_4) != AT_LIST) || !(ATisEmpty(s_4))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = w_15;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  t = try_1_0(DesugarOnce_0_0, t);
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_1_0(i_1, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}

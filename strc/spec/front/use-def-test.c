#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Overlay_3;
Symbol sym_SVar_1;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_SDefNoArgs_2;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Choice_2;
Symbol sym_SRule_1;
Symbol sym_LRule_1;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_PrimT_3;
Symbol sym_Where_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Call_2;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_StratRule_3;
Symbol sym_Rule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_RDefT_4;
Symbol sym_RDef_3;
Symbol sym_ListTail_2;
Symbol sym_RootApp_1;
Symbol sym_App_2;
Symbol sym_Op_2;
Symbol sym_Char_1;
Symbol sym_Str_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_ConstType_1;
Symbol sym_SortVar_1;
Symbol sym_Overlays_1;
Symbol sym_Strategies_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Some_1;
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
Symbol sym_stderr_0;
Symbol sym_Var_1;
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
Symbol sym_DynamicRules_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
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
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_SortVar_1 = ATmakeSymbol("SortVar", 1, ATfalse);
  ATprotectSymbol(sym_SortVar_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_r_67;
ATerm term_q_67;
ATerm term_p_67;
ATerm term_o_67;
ATerm term_n_67;
ATerm term_m_67;
ATerm term_g_67;
ATerm term_f_67;
ATerm term_x_65;
ATerm term_w_65;
ATerm term_p_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_l_58;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_53;
ATerm term_f_53;
ATerm term_b_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_z_45;
ATerm term_j_45;
ATerm term_v_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_e_44;
ATerm term_x_43;
ATerm term_s_43;
ATerm term_n_43;
ATerm term_x_42;
ATerm term_o_42;
ATerm term_l_42;
ATerm term_j_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_s_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_h_41;
ATerm term_d_41;
ATerm term_x_40;
ATerm term_t_40;
ATerm term_r_40;
ATerm term_n_40;
ATerm term_l_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_w_39;
ATerm term_q_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_d_39;
ATerm term_b_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_f_38;
ATerm term_a_38;
ATerm term_m_37;
ATerm term_g_37;
ATerm term_c_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_x_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_q_36;
ATerm term_l_36;
ATerm term_c_36;
ATerm term_z_35;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_p_35;
ATerm term_i_35;
ATerm term_f_35;
ATerm term_b_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_a_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_f_33;
ATerm term_d_33;
ATerm term_z_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_s_30;
ATerm term_q_30;
ATerm term_m_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_x_28;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test14a", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("UnEscape", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_c_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("'\\'", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Char_1, term_f_29);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Var_1, term_c_29);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("cs", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Var_1, term_l_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test14b", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("testing-main", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rob", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Var_1, term_d_30);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test14c", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Match_1, term_g_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test13a", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_SortVar_1, term_f_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_31);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_VarDec_2, term_d_30, term_l_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Build_1, term_g_30);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Str_1, term_f_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test13b", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_All_1, term_n_31);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_SDefT_4, term_d_31, (ATerm)ATempty, (ATerm)ATempty, term_x_31);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test13c", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("helper", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, term_k_32, term_l_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_32);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Var_1, term_t_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Match_1, term_u_32);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_Build_1, term_u_32);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Var_1, term_r_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Var_1, term_v_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Var_1, term_u_33);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_j_34);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Var_1, term_l_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Build_1, term_s_33);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_34);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_34);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Call_2, term_v_34, (ATerm) ATempty);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Build_1, term_a_34);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Match_1, term_m_34);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("test10a", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Var_1, term_p_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Str_1, term_v_35);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Var_1, term_z_35);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("test10b", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_36);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_Call_2, term_u_36, (ATerm) ATempty);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Match_1, term_c_36);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_36, term_x_36);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_Seq_2, term_d_33, term_z_36);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_38);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_Call_2, term_x_38, (ATerm) ATempty);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_LChoice_2, term_v_36, term_y_38);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_38, term_z_32);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_38, term_z_32);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_LChoice_2, term_v_36, term_i_39);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Var_1, term_d_40);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym_Match_1, term_e_40);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Str_1, term_h_40);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_Build_1, term_e_40);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_40, term_v_36);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym_App_2, term_v_36, term_e_40);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_Match_1, term_s_35);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym_Var_1, term_m_41);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym__2, term_w_41, (ATerm) ATempty);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym__2, term_x_41, (ATerm) ATempty);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_z_45, term_e_46);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("o_1", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym_Defined_2, term_y_52, term_z_52);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(sym_Defined_2, term_n_55, term_z_52);
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(sym_Defined_2, term_n_58, term_o_58);
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_n_67));
  term_n_67 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_o_67));
  term_o_67 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_p_67));
  term_p_67 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(sym__2, term_p_67, term_p_67);
  ATprotect(&(term_r_67));
  term_r_67 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm c_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm test14_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm test13_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm test12_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm test11_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm test10_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm test9_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm test8_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm test7_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm test6_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm test5_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm test4_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm test3_0_0 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm test2_0_0 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_7 (ATerm g_25, ATerm f_25, ATerm h_25, ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm or_2_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm t);
static ATerm k_10 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm h_136 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm g_136 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm i_136 (ATerm), ATerm j_136 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm f_136 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm s_108 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm g_7 (ATerm b_79, ATerm c_79, ATerm d_79, ATerm t);
static ATerm n_13 (ATerm t);
static ATerm h_7 (ATerm v_78, ATerm z_78, ATerm x_78, ATerm t);
static ATerm r_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm i_7 (ATerm p_78, ATerm t_78, ATerm r_78, ATerm t);
static ATerm h_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm a_19 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm f_19 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm j_7 (ATerm n_77, ATerm o_77, ATerm p_77, ATerm r_77, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm k_7 (ATerm y_75, ATerm z_75, ATerm x_75, ATerm t);
static ATerm j_19 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm l_7 (ATerm z_33, ATerm y_33, ATerm t);
static ATerm m_7 (ATerm y_37, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm n_7 (ATerm v_37, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm l_76, ATerm t);
static ATerm a_21 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm e_21 (ATerm t);
static ATerm f_21 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm o_7 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm r_7 (ATerm h_33, ATerm i_33, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm s_7 (ATerm w_32, ATerm x_32, ATerm v_32, ATerm t);
static ATerm t_7 (ATerm q_106 (ATerm), ATerm s_31, ATerm q_31, ATerm t);
static ATerm a_22 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm b_22 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_102 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm a_127 (ATerm), ATerm t);
static ATerm g_22 (ATerm t);
static ATerm i_22 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm k_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm r_24 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm x_24 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm w_7 (ATerm l_102 (ATerm), ATerm e_26, ATerm d_26, ATerm t);
ATerm foldr_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm g_103 (ATerm), ATerm t);
static ATerm x_7 (ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm i_26, ATerm h_26, ATerm t);
static ATerm y_7 (ATerm g_102 (ATerm), ATerm c_26, ATerm b_26, ATerm t);
ATerm at_end_1_0 (ATerm n_103 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_93 (ATerm c_93, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm d_8 (ATerm d_758, ATerm i_758, ATerm v_75, ATerm t);
ATerm while_not_2_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm t);
ATerm for_3_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t);
static ATerm v_25 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm x_95 (ATerm r_94, ATerm s_94, ATerm t_94, ATerm t);
static ATerm k_26 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_26 (ATerm t);
static ATerm t_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm z_26 (ATerm t);
static ATerm b_27 (ATerm t);
ATerm free_vars_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm a_107 (ATerm), ATerm t);
static ATerm f_8 (ATerm t_37, ATerm u_37, ATerm t);
static ATerm g_8 (ATerm b_33, ATerm c_33, ATerm t);
ATerm end_scope_1_0 (ATerm n_106 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm t);
static ATerm i_8 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_37, ATerm x_37, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm i_34, ATerm t);
static ATerm h_8 (ATerm r_37, ATerm s_37, ATerm t);
static ATerm j_8 (ATerm p_34, ATerm q_34, ATerm t);
ATerm begin_scope_1_0 (ATerm m_106 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t);
static ATerm h_27 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm l_27 (ATerm t);
static ATerm m_27 (ATerm t);
static ATerm p_27 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm u_27 (ATerm t);
static ATerm v_27 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_119 (ATerm), ATerm t);
static ATerm k_8 (ATerm e_30, ATerm f_30, ATerm t);
ATerm do_test_2_0 (ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
ATerm test1_0_0 (ATerm t);
ATerm debug_1_0 (ATerm o_116 (ATerm), ATerm t);
static ATerm b_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm k_28 (ATerm t);
ATerm test_suite_2_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t);
static ATerm m_28 (ATerm t);
static ATerm w_28 (ATerm t);
ATerm use_def_test_io_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_x_28;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_b_29, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_d_29), (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATinsert(ATempty, term_h_29), term_g_29), term_m_29), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, term_h_29), term_m_29)));
      {
        ATerm n_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_29;
          }
      }
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm a_0 = NULL,c_0 = NULL;
        t = term_o_29;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        c_0 = t;
        t = SSL_printnl(a_0, c_0);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_r_29;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_29, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_c_30, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_g_30)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_29, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_c_30, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_g_30)));
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm e_0 = NULL,g_0 = NULL;
        t = term_o_29;
        e_0 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        g_0 = t;
        t = SSL_printnl(e_0, g_0);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_m_30;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_29, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_q_30, (ATerm) ATmakeAppl(sym_CallT_3, term_c_30, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_g_30))));
      {
        ATerm r_30 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_30;
          }
      }
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      {
        ATerm i_0 = NULL,j_0 = NULL;
        t = term_o_29;
        i_0 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        j_0 = t;
        t = SSL_printnl(i_0, j_0);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
ATerm test14_0_0 (ATerm t)
{
  t = do_test_2_0(c_1, i_1, t);
  t = do_test_2_0(p_1, u_1, t);
  t = do_test_2_0(c_2, d_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_s_30;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_d_31, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_e_31, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_m_31), term_n_31)), (ATerm) ATmakeAppl(sym_CallT_3, term_o_31, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_p_31))));
      {
        ATerm t_31 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_31;
          }
      }
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm l_0 = NULL,n_0 = NULL;
        t = term_o_29;
        l_0 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        n_0 = t;
        t = SSL_printnl(l_0, n_0);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_32;
      t = def_use_def_0_0(t);
      t = term_f_32;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      {
        ATerm o_0 = NULL,q_0 = NULL;
        t = term_o_29;
        o_0 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        q_0 = t;
        t = SSL_printnl(o_0, q_0);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_g_32;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_d_31, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_m_32), term_x_31));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_d_31, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_m_32), term_x_31));
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      {
        ATerm r_0 = NULL,t_0 = NULL;
        t = term_o_29;
        r_0 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        t_0 = t;
        t = SSL_printnl(r_0, t_0);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
ATerm test13_0_0 (ATerm t)
{
  t = do_test_2_0(q_2, r_2, t);
  t = do_test_2_0(g_3, l_3, t);
  t = do_test_2_0(m_3, v_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_n_32;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_q_32, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_s_32, (ATerm) ATinsert(ATempty, term_z_32)), (ATerm)ATmakeAppl(sym_Call_2, term_s_32, (ATerm) ATinsert(ATempty, term_d_33)), term_l_32));
      {
        ATerm e_33 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_33;
          }
      }
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm u_0 = NULL,w_0 = NULL;
        t = term_o_29;
        u_0 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        w_0 = t;
        t = SSL_printnl(u_0, w_0);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(w_3, d_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_f_33;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_s_33), term_g_30))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_u_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_a_34), term_w_33)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_s_33), term_g_30))), term_w_33))))));
      {
        ATerm b_34 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_34;
          }
      }
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
        ATerm x_0 = NULL,z_0 = NULL;
        t = term_o_29;
        x_0 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        z_0 = t;
        t = SSL_printnl(x_0, z_0);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_e_34;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 = NULL,d_1 = NULL,d_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_h_34, (ATerm)ATinsert(ATempty, term_k_34), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_s_33), term_g_30)), (ATerm)ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_m_34), term_g_30))), term_w_33)), (ATerm) ATmakeAppl(sym_Seq_2, term_n_34, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_u_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_a_34), term_w_33))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_w_34, (ATerm) ATmakeAppl(sym_Op_2, term_x_34, (ATerm) ATinsert(ATinsert(ATempty, term_w_33), term_g_30)))), term_b_35))))), term_f_35))))));
      d_1 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm g_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_1);
      a_1 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_h_34, (ATerm)ATinsert(ATempty, term_k_34), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_s_33), term_g_30)), (ATerm)ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_m_34), term_g_30))), term_w_33)), (ATerm) ATmakeAppl(sym_Seq_2, term_n_34, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_u_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_a_34), term_w_33))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_w_34, (ATerm) ATmakeAppl(sym_Op_2, term_x_34, (ATerm) ATinsert(ATinsert(ATempty, term_w_33), term_g_30)))), term_b_35))))), term_f_35)))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_h_34, (ATerm)ATinsert(ATempty, term_k_34), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_s_33), term_g_30)), (ATerm)ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_m_34), term_g_30))), term_w_33)), (ATerm) ATmakeAppl(sym_Seq_2, term_n_34, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_u_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, term_a_34), term_w_33))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_w_34, (ATerm) ATmakeAppl(sym_Op_2, term_x_34, (ATerm) ATinsert(ATinsert(ATempty, term_w_33), term_g_30)))), term_b_35))))), term_f_35))))));
      d_0 = t;
      t = SSLsetAnnotations(d_0, a_1);
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm f_1 = NULL,h_1 = NULL;
        t = term_o_29;
        f_1 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        h_1 = t;
        t = SSL_printnl(f_1, h_1);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(k_4, n_4, t);
  t = do_test_2_0(q_4, t_4, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_i_35;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm l_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_r_33, (ATerm)ATinsert(ATinsert(ATempty, term_p_35), term_t_32), (ATerm) ATmakeAppl(sym_Op_2, term_t_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_36), term_x_35), term_u_32)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_e_31, (ATerm)ATinsert(ATinsert(ATempty, term_p_35), term_t_32), (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATinsert(ATempty, term_p_31), term_u_32)))))));
      {
        ATerm d_36 = t;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL,k_1 = NULL,n_1 = NULL,l_1 = NULL;
            n_1 = t;
            if(match_cons(t, sym_Overlays_1))
              {
                k_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_1);
            j_1 = t;
            t = k_1;
            {
              ATerm e_36 = t;
              int g_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_1;
                  LocalPopChoice(g_36);
                }
              else
                {
                  t = e_36;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_1;
                }
            }
            t = (ATerm) ATmakeAppl(sym_Overlays_1, k_1);
            l_1 = t;
            t = SSLsetAnnotations(l_1, j_1);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_36;
          }
      }
      LocalPopChoice(o_35);
    }
  else
    {
      t = l_35;
      {
        ATerm r_1 = NULL,s_1 = NULL;
        t = term_o_29;
        r_1 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        s_1 = t;
        t = SSL_printnl(r_1, s_1);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm m_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 = NULL,v_1 = NULL,b_2 = NULL;
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_r_33, (ATerm)ATinsert(ATinsert(ATempty, term_p_35), term_t_32), (ATerm) ATmakeAppl(sym_Op_2, term_t_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_35), term_x_35), term_u_32)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_e_31, (ATerm)ATinsert(ATinsert(ATempty, term_p_35), term_t_32), (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATinsert(ATempty, term_p_31), term_u_32)))))));
      v_1 = t;
      if(match_cons(t, sym_Overlays_1))
        {
          ATerm p_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_1);
      t_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_r_33, (ATerm)ATinsert(ATinsert(ATempty, term_p_35), term_t_32), (ATerm) ATmakeAppl(sym_Op_2, term_t_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_35), term_x_35), term_u_32)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_e_31, (ATerm)ATinsert(ATinsert(ATempty, term_p_35), term_t_32), (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATinsert(ATempty, term_p_31), term_u_32))))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_r_33, (ATerm)ATinsert(ATinsert(ATempty, term_p_35), term_t_32), (ATerm) ATmakeAppl(sym_Op_2, term_t_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_35), term_x_35), term_u_32)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_e_31, (ATerm)ATinsert(ATinsert(ATempty, term_p_35), term_t_32), (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATinsert(ATempty, term_p_31), term_u_32)))))));
      b_2 = t;
      t = SSLsetAnnotations(b_2, t_1);
      LocalPopChoice(o_36);
    }
  else
    {
      t = m_36;
      {
        ATerm w_1 = NULL,x_1 = NULL;
        t = term_o_29;
        w_1 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        x_1 = t;
        t = SSL_printnl(w_1, x_1);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(b_5, c_5, t);
  t = do_test_2_0(d_5, e_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_q_36;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32)), (ATerm)ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_c_36), term_s_35)), term_a_37)));
      {
        ATerm b_37 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_37;
          }
      }
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = term_o_29;
        y_1 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        z_1 = t;
        t = SSL_printnl(y_1, z_1);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_c_37;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32)), (ATerm)ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_c_36), term_s_35)), term_l_32)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32)), (ATerm)ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_c_36), term_s_35)), term_l_32)));
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
      {
        ATerm a_2 = NULL,g_2 = NULL;
        t = term_o_29;
        a_2 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        g_2 = t;
        t = SSL_printnl(a_2, g_2);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(f_5, g_5, t);
  t = do_test_2_0(l_5, m_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_g_37;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm h_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32)), (ATerm)ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_c_36), term_s_35)), term_a_37));
      {
        ATerm l_37 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_37;
          }
      }
      LocalPopChoice(j_37);
    }
  else
    {
      t = h_37;
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_o_29;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_m_37;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm n_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32)), (ATerm)ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_c_36), term_s_35)), term_l_32));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32)), (ATerm)ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_c_36), term_s_35)), term_l_32));
      LocalPopChoice(z_37);
    }
  else
    {
      t = n_37;
      {
        ATerm k_2 = NULL,l_2 = NULL;
        t = term_o_29;
        k_2 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        l_2 = t;
        t = SSL_printnl(k_2, l_2);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(n_5, o_5, t);
  t = do_test_2_0(p_5, q_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_a_38;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATempty, term_s_35))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATempty, term_u_32))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATempty, term_u_32))))));
      {
        ATerm e_38 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_38;
          }
      }
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      {
        ATerm m_2 = NULL,n_2 = NULL;
        t = term_o_29;
        m_2 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        n_2 = t;
        t = SSL_printnl(m_2, n_2);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_f_38;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATempty, term_u_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATempty, term_u_32)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32)))));
      {
        ATerm i_38 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_38;
          }
      }
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      {
        ATerm s_2 = NULL,t_2 = NULL;
        t = term_o_29;
        s_2 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        t_2 = t;
        t = SSL_printnl(s_2, t_2);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATempty, term_u_32))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATempty, term_u_32))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATempty, term_u_32))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATempty, term_u_32))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))))));
      LocalPopChoice(m_38);
    }
  else
    {
      t = l_38;
      {
        ATerm u_2 = NULL,v_2 = NULL;
        t = term_o_29;
        u_2 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        v_2 = t;
        t = SSL_printnl(u_2, v_2);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(w_5, x_5, t);
  t = do_test_2_0(y_5, z_5, t);
  t = do_test_2_0(b_6, d_6, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm r_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_b_39, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATempty, term_u_32)))));
      {
        ATerm c_39 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_39;
          }
      }
      LocalPopChoice(t_38);
    }
  else
    {
      t = r_38;
      {
        ATerm w_2 = NULL,x_2 = NULL;
        t = term_o_29;
        w_2 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        x_2 = t;
        t = SSL_printnl(w_2, x_2);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_d_39;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_j_39, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATempty, term_u_32)))));
      {
        ATerm l_39 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_39;
          }
      }
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
      {
        ATerm y_2 = NULL,z_2 = NULL;
        t = term_o_29;
        y_2 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        z_2 = t;
        t = SSL_printnl(y_2, z_2);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(g_6, h_6, t);
  t = do_test_2_0(i_6, j_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_q_39;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATempty, term_u_32)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATempty, term_u_32)))));
      {
        ATerm v_39 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_39;
          }
      }
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      {
        ATerm a_3 = NULL,b_3 = NULL;
        t = term_o_29;
        a_3 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        b_3 = t;
        t = SSL_printnl(a_3, b_3);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_w_39;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATempty, term_u_32)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32)))));
      {
        ATerm z_39 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_39;
          }
      }
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      {
        ATerm c_3 = NULL,d_3 = NULL;
        t = term_o_29;
        c_3 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        d_3 = t;
        t = SSL_printnl(c_3, d_3);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(n_6, s_6, t);
  t = do_test_2_0(t_6, u_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_a_40;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_g_40, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_40), term_l_40))), term_i_40)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_g_40, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_40), term_l_40))), term_i_40)))));
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm e_3 = NULL,f_3 = NULL;
        t = term_o_29;
        e_3 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        f_3 = t;
        t = SSL_printnl(e_3, f_3);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm o_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_g_40, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_r_40), term_i_40)))));
      {
        ATerm s_40 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_40;
          }
      }
      LocalPopChoice(q_40);
    }
  else
    {
      t = o_40;
      {
        ATerm h_3 = NULL,i_3 = NULL;
        t = term_o_29;
        h_3 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        i_3 = t;
        t = SSL_printnl(h_3, i_3);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm u_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_40), term_l_40))), term_i_40))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_40), term_l_40))), term_i_40))));
      LocalPopChoice(w_40);
    }
  else
    {
      t = u_40;
      {
        ATerm j_3 = NULL,k_3 = NULL;
        t = term_o_29;
        j_3 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        k_3 = t;
        t = SSL_printnl(j_3, k_3);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(w_6, z_6, t);
  t = do_test_2_0(a_7, b_7, t);
  t = do_test_2_0(c_7, d_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_x_40;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_p_35), (ATerm) ATmakeAppl(sym_Seq_2, term_d_41, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATempty, term_s_35))), term_u_32)))))));
      {
        ATerm g_41 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_41;
          }
      }
      LocalPopChoice(z_40);
    }
  else
    {
      t = y_40;
      {
        ATerm p_3 = NULL,q_3 = NULL;
        t = term_o_29;
        p_3 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        q_3 = t;
        t = SSL_printnl(p_3, q_3);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_h_41;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm j_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_p_35), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATinsert(ATempty, term_n_41), term_u_32))), term_s_35))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_p_35), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATinsert(ATempty, term_n_41), term_u_32))), term_s_35))))));
      LocalPopChoice(l_41);
    }
  else
    {
      t = j_41;
      {
        ATerm r_3 = NULL,s_3 = NULL;
        t = term_o_29;
        r_3 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        s_3 = t;
        t = SSL_printnl(r_3, s_3);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(p_7, u_7, t);
  t = do_test_2_0(v_7, w_8, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm p_41 = t;
  int q_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATempty, term_s_35))), term_u_32)))));
      {
        ATerm r_41 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_41;
          }
      }
      LocalPopChoice(q_41);
    }
  else
    {
      t = p_41;
      {
        ATerm t_3 = NULL,x_3 = NULL;
        t = term_o_29;
        t_3 = t;
        t = (ATerm) ATinsert(ATempty, term_q_29);
        x_3 = t;
        t = SSL_printnl(t_3, x_3);
        t = term_q_29;
        _fail(t);
      }
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_s_41;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm t_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATinsert(ATempty, term_n_41), term_u_32))), term_s_35)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATinsert(ATempty, term_n_41), term_u_32))), term_s_35)))));
      LocalPopChoice(v_41);
    }
  else
    {
      t = t_41;
      {
        ATerm z_3 = NULL,a_4 = NULL;
        t = term_o_29;
        z_3 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        a_4 = t;
        t = SSL_printnl(z_3, a_4);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(x_8, y_8, t);
  t = do_test_2_0(z_8, a_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_x_41;
  return(t);
}
static ATerm e_7 (ATerm g_25, ATerm f_25, ATerm h_25, ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL;
  b_4 = t;
  t = (ATerm) ATempty;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_41, g_25);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_41, g_25));
  t = t_7(b_9, f_4, g_4, t);
  t = (ATerm) ATempty;
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_41, g_25);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_41, g_25));
  t = t_7(c_9, c_4, e_4, t);
  t = h_25;
  t = use_vars_0_0(t);
  t = b_4;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_x_41;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_x_41;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL,r_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      r_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
      x_4 = ATgetArgument(t, 2);
      l_4 = ATgetArgument(t, 3);
      t = l_4;
      if(match_cons(t, sym_StratRule_3))
        {
          m_4 = ATgetArgument(t, 0);
          o_4 = ATgetArgument(t, 1);
          p_4 = ATgetArgument(t, 2);
          {
            ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
            t = (ATerm) ATempty;
            j_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_42, r_4);
            k_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_42, r_4));
            t = t_7(d_9, j_5, k_5, t);
            t = (ATerm) ATempty;
            h_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_42, r_4);
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_42, r_4));
            t = t_7(e_9, h_5, i_5, t);
            t = (ATerm) ATmakeAppl(sym__3, m_4, o_4, p_4);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, r_4, v_4, x_4, (ATerm) ATmakeAppl(sym_StratRule_3, m_4, o_4, p_4));
          }
        }
      else
        {
          ATerm r_5 = NULL,s_5 = NULL,u_5 = NULL,v_5 = NULL;
          if(match_cons(t, sym_Rule_3))
            {
              m_4 = ATgetArgument(t, 0);
              o_4 = ATgetArgument(t, 1);
              p_4 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          u_5 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_42, r_4);
          v_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_42, r_4));
          t = t_7(f_9, u_5, v_5, t);
          t = (ATerm) ATempty;
          r_5 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_42, r_4);
          s_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_42, r_4));
          t = t_7(g_9, r_5, s_5, t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, r_4, v_4, x_4, (ATerm) ATmakeAppl(sym_Rule_3, m_4, o_4, p_4));
          {
            static ATerm i_9 (ATerm t);
            static ATerm j_9 (ATerm t);
            static ATerm i_9 (ATerm t)
            {
              t = m_4;
              t = bind_vars_0_0(t);
              return(t);
            }
            static ATerm j_9 (ATerm t)
            {
              static ATerm k_9 (ATerm t);
              static ATerm p_9 (ATerm t);
              static ATerm k_9 (ATerm t)
              {
                t = p_4;
                t = unbound_vars_0_0(t);
                return(t);
              }
              static ATerm p_9 (ATerm t)
              {
                t = o_4;
                t = use_vars_0_0(t);
                return(t);
              }
              t = or_2_0(k_9, p_9, t);
              return(t);
            }
            t = or_2_0(i_9, j_9, t);
          }
          t = (ATerm) ATmakeAppl(sym_RDefT_4, r_4, v_4, x_4, (ATerm) ATmakeAppl(sym_Rule_3, m_4, o_4, p_4));
        }
    }
  else
    {
      ATerm k_6 = NULL,l_6 = NULL,o_6 = NULL,r_6 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          r_4 = ATgetArgument(t, 0);
          v_4 = ATgetArgument(t, 1);
          x_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_4;
      if(match_cons(t, sym_Rule_3))
        {
          y_4 = ATgetArgument(t, 0);
          z_4 = ATgetArgument(t, 1);
          a_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      o_6 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_42, r_4);
      r_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_42, r_4));
      t = t_7(q_9, o_6, r_6, t);
      t = (ATerm) ATempty;
      k_6 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_42, r_4);
      l_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_42, r_4));
      t = t_7(r_9, k_6, l_6, t);
      t = (ATerm) ATmakeAppl(sym_RDef_3, r_4, v_4, (ATerm) ATmakeAppl(sym_Rule_3, y_4, z_4, a_5));
      {
        static ATerm y_9 (ATerm t);
        static ATerm c_10 (ATerm t);
        static ATerm y_9 (ATerm t)
        {
          t = y_4;
          t = bind_vars_0_0(t);
          return(t);
        }
        static ATerm c_10 (ATerm t)
        {
          static ATerm d_10 (ATerm t);
          static ATerm f_10 (ATerm t);
          static ATerm d_10 (ATerm t)
          {
            t = a_5;
            t = unbound_vars_0_0(t);
            return(t);
          }
          static ATerm f_10 (ATerm t)
          {
            t = z_4;
            t = use_vars_0_0(t);
            return(t);
          }
          t = or_2_0(d_10, f_10, t);
          return(t);
        }
        t = or_2_0(y_9, c_10, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, r_4, v_4, (ATerm) ATmakeAppl(sym_Rule_3, y_4, z_4, a_5));
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm h_9 = NULL;
  h_9 = t;
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL,h_4 = NULL,i_4 = NULL;
        t = (ATerm) ATempty;
        h_4 = t;
        t = term_w_41;
        i_4 = t;
        t = term_j_42;
        t = r_7(i_4, h_4, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_42) != ATmakeSymbol("e_1", 0, ATtrue)))
              _fail(t);
            y_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(h_9), term_o_42), y_3), term_l_42);
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        {
          ATerm q_42 = t;
          int r_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_4 = NULL,u_4 = NULL,w_4 = NULL;
              t = (ATerm) ATempty;
              u_4 = t;
              t = term_w_41;
              w_4 = t;
              t = term_j_42;
              t = r_7(w_4, u_4, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_42) != ATmakeSymbol("y_0", 0, ATtrue)))
                    _fail(t);
                  s_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(h_9), term_o_42), s_4), term_x_42);
              LocalPopChoice(r_42);
            }
          else
            {
              t = q_42;
              {
                ATerm y_42 = t;
                int d_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_6 = NULL,c_6 = NULL,e_6 = NULL;
                    t = (ATerm) ATempty;
                    c_6 = t;
                    t = term_w_41;
                    e_6 = t;
                    t = term_j_42;
                    t = r_7(e_6, c_6, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm e_43 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) e_43) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        a_6 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(h_9), term_o_42), a_6), term_x_42);
                    LocalPopChoice(d_43);
                  }
                else
                  {
                    t = y_42;
                    {
                      ATerm f_43 = t;
                      int g_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_6 = NULL,p_6 = NULL,q_6 = NULL;
                          t = (ATerm) ATempty;
                          p_6 = t;
                          t = term_w_41;
                          q_6 = t;
                          t = term_j_42;
                          t = r_7(q_6, p_6, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm h_43 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) h_43) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              m_6 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(h_9), term_o_42), m_6), term_x_42);
                          LocalPopChoice(g_43);
                        }
                      else
                        {
                          t = f_43;
                          {
                            ATerm i_43 = t;
                            int k_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_6 = NULL,x_6 = NULL,y_6 = NULL;
                                t = (ATerm) ATempty;
                                x_6 = t;
                                t = term_w_41;
                                y_6 = t;
                                t = term_j_42;
                                t = r_7(y_6, x_6, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm m_43 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) m_43) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    v_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(h_9), term_o_42), v_6), term_n_43);
                                LocalPopChoice(k_43);
                              }
                            else
                              {
                                t = i_43;
                                {
                                  ATerm q_7 = NULL,a_8 = NULL,c_8 = NULL;
                                  t = (ATerm) ATempty;
                                  a_8 = t;
                                  t = term_w_41;
                                  c_8 = t;
                                  t = term_j_42;
                                  t = r_7(c_8, a_8, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm p_43 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) p_43) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      q_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(h_9), term_o_42), q_7), term_n_43);
                                }
                              }
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
ATerm Unbound_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
  w_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_9;
  if(match_cons(t, sym_ListVar_1))
    {
      v_9 = ATgetArgument(t, 0);
      {
        ATerm q_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_9;
            s_9 = t;
            t = w_9;
            LocalPopChoice(r_43);
          }
        else
          {
            t = q_43;
            t = x_9;
            s_9 = t;
            t = w_9;
          }
      }
    }
  else
    {
      t = x_9;
      s_9 = t;
      t = w_9;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_43), s_9), term_s_43);
  t = Context_0_0(t);
  t_9 = t;
  t = term_o_29;
  u_9 = t;
  t = SSL_printnl(u_9, t_9);
  t = t_9;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm z_43 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL,g_10 = NULL,h_10 = NULL;
        t = (ATerm) ATempty;
        g_10 = t;
        t = term_x_41;
        h_10 = t;
        t = term_e_44;
        t = r_7(h_10, g_10, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_44 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_44) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
            e_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_11), term_m_44), e_10), term_l_44);
        LocalPopChoice(d_44);
      }
    else
      {
        t = z_43;
        {
          ATerm o_44 = t;
          int s_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_10 = NULL,w_10 = NULL,x_10 = NULL;
              t = (ATerm) ATempty;
              w_10 = t;
              t = term_x_41;
              x_10 = t;
              t = term_e_44;
              t = r_7(x_10, w_10, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm t_44 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_44) != ATmakeSymbol("b_1", 0, ATtrue)))
                    _fail(t);
                  u_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_11), term_m_44), u_10), term_v_44);
              LocalPopChoice(s_44);
            }
          else
            {
              t = o_44;
              {
                ATerm w_44 = t;
                int x_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_11 = NULL,w_11 = NULL,x_11 = NULL;
                    t = (ATerm) ATempty;
                    w_11 = t;
                    t = term_x_41;
                    x_11 = t;
                    t = term_e_44;
                    t = r_7(x_11, w_11, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm y_44 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) y_44) != ATmakeSymbol("v_0", 0, ATtrue)))
                          _fail(t);
                        r_11 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_11), term_m_44), r_11), term_v_44);
                    LocalPopChoice(x_44);
                  }
                else
                  {
                    t = w_44;
                    {
                      ATerm z_44 = t;
                      int a_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_12 = NULL,d_13 = NULL,l_13 = NULL;
                          t = (ATerm) ATempty;
                          d_13 = t;
                          t = term_x_41;
                          l_13 = t;
                          t = term_e_44;
                          t = r_7(l_13, d_13, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm b_45 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) b_45) != ATmakeSymbol("p_0", 0, ATtrue)))
                                _fail(t);
                              x_12 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_11), term_m_44), x_12), term_v_44);
                          LocalPopChoice(a_45);
                        }
                      else
                        {
                          t = z_44;
                          {
                            ATerm c_45 = t;
                            int d_45 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_13 = NULL,x_13 = NULL,e_14 = NULL;
                                t = (ATerm) ATempty;
                                x_13 = t;
                                t = term_x_41;
                                e_14 = t;
                                t = term_e_44;
                                t = r_7(e_14, x_13, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm h_45 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) h_45) != ATmakeSymbol("k_0", 0, ATtrue)))
                                      _fail(t);
                                    v_13 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_11), term_m_44), v_13), term_j_45);
                                LocalPopChoice(d_45);
                              }
                            else
                              {
                                t = c_45;
                                {
                                  ATerm u_14 = NULL,z_14 = NULL,a_15 = NULL;
                                  t = (ATerm) ATempty;
                                  z_14 = t;
                                  t = term_x_41;
                                  a_15 = t;
                                  t = term_e_44;
                                  t = r_7(a_15, z_14, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm m_45 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) m_45) != ATmakeSymbol("f_0", 0, ATtrue)))
                                        _fail(t);
                                      u_14 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_11), term_m_44), u_14), term_j_45);
                                }
                              }
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
ATerm MaybeUnbound_0_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,y_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_11;
  if(match_cons(t, sym_ListVar_1))
    {
      u_11 = ATgetArgument(t, 0);
      {
        ATerm p_45 = t;
        int r_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_11;
            t_11 = t;
            t = v_11;
            LocalPopChoice(r_45);
          }
        else
          {
            t = p_45;
            t = y_11;
            t_11 = t;
            t = v_11;
          }
      }
    }
  else
    {
      t = y_11;
      t_11 = t;
      t = v_11;
    }
  {
    ATerm x_45 = t;
    int y_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
        t = term_z_45;
        b_12 = t;
        t = term_e_46;
        c_12 = t;
        t = term_f_46;
        t = j_8(b_12, c_12, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_46), t_11), term_s_43);
        t = Warning_0_0(t);
        z_11 = t;
        t = term_o_29;
        a_12 = t;
        t = SSL_printnl(a_12, z_11);
        t = z_11;
        LocalPopChoice(y_45);
      }
    else
      {
        t = x_45;
      }
  }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,f_2 = NULL;
  u_12 = t;
  if(match_cons(t, sym_App_2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_12);
  q_12 = t;
  t = r_12;
  t = unbound_vars_0_0(t);
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, t_12, s_12);
  f_2 = t;
  t = SSLsetAnnotations(f_2, q_12);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm v_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,h_2 = NULL;
  b_13 = t;
  if(match_cons(t, sym_App_2))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_13);
  v_12 = t;
  t = z_12;
  t = use_vars_0_0(t);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, y_12, a_13);
  h_2 = t;
  t = SSLsetAnnotations(h_2, v_12);
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL;
  ATerm i_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_12 = NULL,i_12 = NULL;
      h_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      i_12 = t;
      t = SSLgetAnnotations(h_12);
      f_12 = t;
      t = i_12;
      LocalPopChoice(k_46);
      {
        ATerm l_12 = NULL;
        l_12 = t;
        t = f_12;
        {
          ATerm l_46 = t;
          int m_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_46 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) n_46) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm o_46 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(o_46) != AT_LIST) || !(ATisEmpty(o_46))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(m_46);
              _fail(t);
            }
          else
            {
              t = l_46;
              {
                ATerm p_46 = t;
                int s_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm t_46 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) t_46) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm y_46 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(y_46) != AT_LIST) || !(ATisEmpty(y_46))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_46);
                    t = (ATerm) ATmakeAppl(sym_Var_1, g_12);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = p_46;
                    {
                      ATerm z_46 = t;
                      int a_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm g_47 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) g_47) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm h_47 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(h_47) != AT_LIST) || !(ATisEmpty(h_47))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_47);
                          t = (ATerm) ATmakeAppl(sym_Var_1, g_12);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = z_46;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, g_12);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = l_12;
      }
    }
  else
    {
      t = i_46;
      {
        ATerm j_47 = t;
        int l_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,e_2 = NULL;
            p_12 = t;
            if(match_cons(t, sym_App_2))
              {
                n_12 = ATgetArgument(t, 0);
                o_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_12);
            m_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, n_12, o_12);
            e_2 = t;
            t = SSLsetAnnotations(e_2, m_12);
            LocalPopChoice(l_47);
            t = or_2_0(i_10, j_10, t);
          }
        else
          {
            t = j_47;
            {
              ATerm m_47 = t;
              int o_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,o_2 = NULL;
                  g_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      f_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_13);
                  e_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, f_13);
                  o_2 = t;
                  t = SSLsetAnnotations(o_2, e_13);
                  LocalPopChoice(o_47);
                  {
                    ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,p_2 = NULL;
                    k_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        i_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(k_13);
                    h_13 = t;
                    t = i_13;
                    t = unbound_vars_0_0(t);
                    j_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, j_13);
                    p_2 = t;
                    t = SSLsetAnnotations(p_2, h_13);
                  }
                }
              else
                {
                  t = m_47;
                  t = SRTS_some(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm or_2_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm t)
{
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 = NULL;
      o_13 = t;
      t = u_120(t);
      t = o_13;
      LocalPopChoice(q_47);
      {
        ATerm p_13 = NULL;
        p_13 = t;
        {
          ATerm t_47 = t;
          int u_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_13;
              t = v_120(t);
              t = p_13;
              LocalPopChoice(u_47);
            }
          else
            {
              t = t_47;
              t = p_13;
            }
        }
      }
    }
  else
    {
      t = p_47;
      {
        ATerm t_13 = NULL;
        t_13 = t;
        t = v_120(t);
        t = t_13;
      }
    }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,u_3 = NULL;
  k_14 = t;
  if(match_cons(t, sym_App_2))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_14);
  g_14 = t;
  t = h_14;
  t = unbound_vars_0_0(t);
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, j_14, i_14);
  u_3 = t;
  t = SSLsetAnnotations(u_3, g_14);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,j_4 = NULL;
  q_14 = t;
  if(match_cons(t, sym_App_2))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_14);
  m_14 = t;
  t = o_14;
  t = use_vars_0_0(t);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, n_14, p_14);
  j_4 = t;
  t = SSLsetAnnotations(j_4, m_14);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm v_47 = t;
  int x_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_13 = NULL,y_13 = NULL,z_13 = NULL,n_3 = NULL;
      z_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_13);
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_13);
      n_3 = t;
      t = SSLsetAnnotations(n_3, u_13);
      LocalPopChoice(x_47);
      _fail(t);
    }
  else
    {
      t = v_47;
      {
        ATerm y_47 = t;
        int z_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,o_3 = NULL;
            d_14 = t;
            if(match_cons(t, sym_App_2))
              {
                b_14 = ATgetArgument(t, 0);
                c_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_14);
            a_14 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, b_14, c_14);
            o_3 = t;
            t = SSLsetAnnotations(o_3, a_14);
            LocalPopChoice(z_47);
            t = or_2_0(k_10, n_10, t);
          }
        else
          {
            t = y_47;
            {
              ATerm b_48 = t;
              int e_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_14 = NULL,s_14 = NULL,v_14 = NULL,t_5 = NULL;
                  v_14 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      s_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_14);
                  r_14 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, s_14);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, r_14);
                  LocalPopChoice(e_48);
                  {
                    ATerm w_14 = NULL,x_14 = NULL,b_15 = NULL,c_15 = NULL,f_6 = NULL;
                    c_15 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        x_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(c_15);
                    w_14 = t;
                    t = x_14;
                    t = unbound_vars_0_0(t);
                    b_15 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, b_15);
                    f_6 = t;
                    t = SSLsetAnnotations(f_6, w_14);
                  }
                }
              else
                {
                  t = b_48;
                  t = SRTS_some(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,n_16 = NULL,o_16 = NULL,n_8 = NULL;
  o_16 = t;
  if(match_cons(t, sym_Rule_3))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
      k_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_16);
  h_16 = t;
  t = i_16;
  t = bind_vars_0_0(t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, n_16, j_16, k_16);
  n_8 = t;
  t = SSLsetAnnotations(n_8, h_16);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = or_2_0(r_10, s_10, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,w_16 = NULL,o_8 = NULL;
  w_16 = t;
  if(match_cons(t, sym_Rule_3))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
      s_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_16);
  p_16 = t;
  t = s_16;
  t = unbound_vars_0_0(t);
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, q_16, r_16, t_16);
  o_8 = t;
  t = SSLsetAnnotations(o_8, p_16);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,p_8 = NULL;
  c_17 = t;
  if(match_cons(t, sym_Rule_3))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
      a_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_17);
  x_16 = t;
  t = z_16;
  t = use_vars_0_0(t);
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, y_16, b_17, a_17);
  p_8 = t;
  t = SSLsetAnnotations(p_8, x_16);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,s_17 = NULL,t_17 = NULL,r_8 = NULL;
  t_17 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
      p_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_17);
  m_17 = t;
  t = o_17;
  t = unbound_vars_0_0(t);
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, n_17, s_17, p_17);
  r_8 = t;
  t = SSLsetAnnotations(r_8, m_17);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm u_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,s_8 = NULL;
  c_18 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      y_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
      a_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_18);
  u_17 = t;
  t = a_18;
  t = use_vars_0_0(t);
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, y_17, z_17, b_18);
  s_8 = t;
  t = SSLsetAnnotations(s_8, u_17);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,u_8 = NULL;
  p_18 = t;
  if(match_cons(t, sym_CallT_3))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      n_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_18);
  k_18 = t;
  t = m_18;
  t = unbound_vars_0_0(t);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, l_18, o_18, n_18);
  u_8 = t;
  t = SSLsetAnnotations(u_8, k_18);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,x_18 = NULL,v_8 = NULL;
  x_18 = t;
  if(match_cons(t, sym_CallT_3))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
      t_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_18);
  q_18 = t;
  t = t_18;
  t = use_vars_0_0(t);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, r_18, s_18, u_18);
  v_8 = t;
  t = SSLsetAnnotations(v_8, q_18);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,z_7 = NULL;
      f_15 = t;
      if(match_cons(t, sym_Build_1))
        {
          e_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_15);
      d_15 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, e_15);
      z_7 = t;
      t = SSLsetAnnotations(z_7, d_15);
      LocalPopChoice(i_48);
      {
        ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL,b_8 = NULL;
        m_15 = t;
        if(match_cons(t, sym_Build_1))
          {
            j_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_15);
        i_15 = t;
        t = j_15;
        t = use_vars_0_0(t);
        k_15 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, k_15);
        b_8 = t;
        t = SSLsetAnnotations(b_8, i_15);
      }
    }
  else
    {
      t = h_48;
      {
        ATerm o_48 = t;
        int r_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_15 = NULL,s_15 = NULL,t_15 = NULL,e_8 = NULL;
            t_15 = t;
            if(match_cons(t, sym_Match_1))
              {
                s_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_15);
            o_15 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, s_15);
            e_8 = t;
            t = SSLsetAnnotations(e_8, o_15);
            LocalPopChoice(r_48);
            {
              ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,l_8 = NULL;
              x_15 = t;
              if(match_cons(t, sym_Match_1))
                {
                  v_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_15);
              u_15 = t;
              t = v_15;
              t = bind_vars_0_0(t);
              w_15 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, w_15);
              l_8 = t;
              t = SSLsetAnnotations(l_8, u_15);
            }
          }
        else
          {
            t = o_48;
            {
              ATerm w_48 = t;
              int y_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,g_16 = NULL,m_8 = NULL;
                  g_16 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      b_16 = ATgetArgument(t, 0);
                      c_16 = ATgetArgument(t, 1);
                      d_16 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_16);
                  a_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, b_16, c_16, d_16);
                  m_8 = t;
                  t = SSLsetAnnotations(m_8, a_16);
                  LocalPopChoice(y_48);
                  t = or_2_0(p_10, q_10, t);
                }
              else
                {
                  t = w_48;
                  {
                    ATerm d_49 = t;
                    int k_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,j_17 = NULL,l_17 = NULL,q_8 = NULL;
                        l_17 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            g_17 = ATgetArgument(t, 0);
                            h_17 = ATgetArgument(t, 1);
                            j_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(l_17);
                        f_17 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, g_17, h_17, j_17);
                        q_8 = t;
                        t = SSLsetAnnotations(q_8, f_17);
                        LocalPopChoice(k_49);
                        t = or_2_0(v_10, z_10, t);
                      }
                    else
                      {
                        t = d_49;
                        {
                          ATerm m_49 = t;
                          int n_49 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,t_8 = NULL;
                              j_18 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  g_18 = ATgetArgument(t, 0);
                                  h_18 = ATgetArgument(t, 1);
                                  i_18 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(j_18);
                              f_18 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, g_18, h_18, i_18);
                              t_8 = t;
                              t = SSLsetAnnotations(t_8, f_18);
                              LocalPopChoice(n_49);
                              t = or_2_0(a_11, e_11, t);
                            }
                          else
                            {
                              t = m_49;
                              t = SRTS_some(unbound_vars_0_0, t);
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
static ATerm f_11 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_x_41;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      b_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
      d_19 = ATgetArgument(t, 2);
      z_18 = ATgetArgument(t, 3);
      {
        ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
        t = (ATerm) ATempty;
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_49, b_19);
        n_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_49, b_19));
        t = t_7(f_11, m_19, n_19, t);
        t = (ATerm) ATempty;
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_49, b_19);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_49, b_19));
        t = t_7(g_11, k_19, l_19, t);
        t = z_18;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, b_19, c_19, d_19, z_18);
      }
    }
  else
    {
      ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          b_19 = ATgetArgument(t, 0);
          c_19 = ATgetArgument(t, 1);
          d_19 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      t_19 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_49, b_19);
      u_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_49, b_19));
      t = t_7(h_11, t_19, u_19, t);
      t = (ATerm) ATempty;
      r_19 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_49, b_19);
      s_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_49, b_19));
      t = t_7(o_11, r_19, s_19, t);
      t = d_19;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, b_19, c_19, d_19);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,l_9 = NULL;
  static ATerm p_11 (ATerm t);
  static ATerm q_11 (ATerm t);
  static ATerm p_11 (ATerm t)
  {
    ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,n_9 = NULL,m_9 = NULL;
    r_20 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        k_20 = ATgetArgument(t, 0);
        l_20 = ATgetArgument(t, 1);
        m_20 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_20);
    h_20 = t;
    t = k_20;
    t = h_136(t);
    p_20 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_20, l_20, m_20);
    m_9 = t;
    t = SSLsetAnnotations(m_9, h_20);
    q_20 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        d_20 = ATgetArgument(t, 0);
        e_20 = ATgetArgument(t, 1);
        f_20 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_20);
    c_20 = t;
    t = e_20;
    t = h_136(t);
    g_20 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, d_20, g_20, f_20);
    n_9 = t;
    t = SSLsetAnnotations(n_9, c_20);
    return(t);
  }
  static ATerm q_11 (ATerm t)
  {
    ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,o_9 = NULL;
    z_20 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        t_20 = ATgetArgument(t, 0);
        u_20 = ATgetArgument(t, 1);
        x_20 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_20);
    s_20 = t;
    t = x_20;
    t = h_136(t);
    y_20 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, t_20, u_20, y_20);
    o_9 = t;
    t = SSLsetAnnotations(o_9, s_20);
    return(t);
  }
  b_20 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
      a_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_20);
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_19, z_19, a_20);
  l_9 = t;
  t = SSLsetAnnotations(l_9, x_19);
  t = abstract_choice_2_0(p_11, q_11, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm g_136 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,z_9 = NULL;
  static ATerm s_11 (ATerm t);
  static ATerm d_12 (ATerm t);
  static ATerm s_11 (ATerm t)
  {
    ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,p_21 = NULL,a_10 = NULL;
    p_21 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        k_21 = ATgetArgument(t, 0);
        l_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_21);
    j_21 = t;
    t = k_21;
    t = g_136(t);
    m_21 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_21, l_21);
    a_10 = t;
    t = SSLsetAnnotations(a_10, j_21);
    return(t);
  }
  static ATerm d_12 (ATerm t)
  {
    ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,b_10 = NULL;
    u_21 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        r_21 = ATgetArgument(t, 0);
        s_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_21);
    q_21 = t;
    t = s_21;
    t = g_136(t);
    t_21 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_21, t_21);
    b_10 = t;
    t = SSLsetAnnotations(b_10, q_21);
    return(t);
  }
  i_21 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      g_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_21);
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, g_21, h_21);
  z_9 = t;
  t = SSLsetAnnotations(z_9, b_21);
  t = abstract_choice_2_0(s_11, d_12, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm i_136 (ATerm), ATerm j_136 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,c_22 = NULL;
  z_21 = t;
  t = save_MarkVar_0_0(t);
  v_21 = t;
  t = z_21;
  t = i_136(t);
  y_21 = t;
  t = save_MarkVar_0_0(t);
  w_21 = t;
  t = term_v_49;
  t = table_destroy_0_0(t);
  t = term_v_49;
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_49, v_21);
  t = l_7(c_22, v_21, t);
  t = y_21;
  t = j_136(t);
  x_21 = t;
  t = w_21;
  t = isect_MarkVar_0_0(t);
  t = x_21;
  return(t);
}
ATerm mark_choice_1_0 (ATerm f_136 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,h_22 = NULL,j_22 = NULL,l_10 = NULL;
  static ATerm e_12 (ATerm t);
  static ATerm j_12 (ATerm t);
  static ATerm e_12 (ATerm t)
  {
    ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,m_10 = NULL;
    q_22 = t;
    if(match_cons(t, sym_Choice_2))
      {
        n_22 = ATgetArgument(t, 0);
        o_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_22);
    m_22 = t;
    t = n_22;
    t = f_136(t);
    p_22 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, p_22, o_22);
    m_10 = t;
    t = SSLsetAnnotations(m_10, m_22);
    return(t);
  }
  static ATerm j_12 (ATerm t)
  {
    ATerm r_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,z_22 = NULL,o_10 = NULL;
    z_22 = t;
    if(match_cons(t, sym_Choice_2))
      {
        u_22 = ATgetArgument(t, 0);
        v_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_22);
    r_22 = t;
    t = v_22;
    t = f_136(t);
    w_22 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, u_22, w_22);
    o_10 = t;
    t = SSLsetAnnotations(o_10, r_22);
    return(t);
  }
  j_22 = t;
  if(match_cons(t, sym_Choice_2))
    {
      e_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_22);
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, e_22, h_22);
  l_10 = t;
  t = SSLsetAnnotations(l_10, d_22);
  t = abstract_choice_2_0(e_12, j_12, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,g_23 = NULL,j_23 = NULL,q_23 = NULL,t_23 = NULL,b_24 = NULL,e_24 = NULL,n_24 = NULL,y_10 = NULL,t_10 = NULL;
  b_23 = t;
  t = save_MarkVar_0_0(t);
  a_23 = t;
  t = b_23;
  if(match_cons(t, sym_Rec_2))
    {
      b_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_23);
  t_23 = t;
  t = e_24;
  t = mark_buv_0_0(t);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, b_24, n_24);
  t_10 = t;
  t = SSLsetAnnotations(t_10, t_23);
  t = a_23;
  t = isect_MarkVar_0_0(t);
  t = b_23;
  if(match_cons(t, sym_Rec_2))
    {
      g_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_23);
  c_23 = t;
  t = j_23;
  t = mark_buv_0_0(t);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, g_23, q_23);
  y_10 = t;
  t = SSLsetAnnotations(y_10, c_23);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm q_24 = NULL,z_24 = NULL,c_25 = NULL,i_25 = NULL,l_25 = NULL,s_25 = NULL,t_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,f_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,w_26 = NULL,x_26 = NULL,d_11 = NULL,c_11 = NULL,b_11 = NULL;
  x_26 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      o_26 = ATgetArgument(t, 0);
      p_26 = ATgetArgument(t, 1);
      q_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_26);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, o_26, p_26, q_26);
  b_11 = t;
  t = SSLsetAnnotations(b_11, n_26);
  w_26 = t;
  t = save_MarkVar_0_0(t);
  q_24 = t;
  t = w_26;
  if(match_cons(t, sym_PrimT_3))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
      z_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_26);
  w_25 = t;
  t = z_25;
  t = map_1_0(k_12, t);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, x_25, y_25, a_26);
  c_11 = t;
  t = SSLsetAnnotations(c_11, w_25);
  f_26 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
      l_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_26);
  z_24 = t;
  t = i_25;
  t = mark_buv_0_0(t);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_25, s_25, l_25);
  d_11 = t;
  t = SSLsetAnnotations(d_11, z_24);
  t_25 = t;
  t = q_24;
  t = isect_MarkVar_0_0(t);
  t = t_25;
  return(t);
}
ATerm alltd_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  static ATerm a_27 (ATerm t);
  static ATerm a_27 (ATerm t)
  {
    ATerm w_49 = t;
    int x_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_108(t);
        LocalPopChoice(x_49);
      }
    else
      {
        t = w_49;
        t = SRTS_all(a_27, t);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,p_30 = NULL;
  j_30 = t;
  if(match_cons(t, sym_CallT_3))
    {
      k_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
      i_30 = ATgetArgument(t, 2);
      {
        ATerm q_15 = NULL,r_15 = NULL,y_15 = NULL,z_15 = NULL,e_16 = NULL,f_16 = NULL,l_16 = NULL,m_16 = NULL,u_16 = NULL,v_16 = NULL,d_17 = NULL,e_17 = NULL,i_17 = NULL,k_17 = NULL,w_17 = NULL,l_11 = NULL,k_11 = NULL,i_11 = NULL;
        t = SSLgetAnnotations(j_30);
        k_17 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, k_30, p_30, i_30);
        i_11 = t;
        t = SSLsetAnnotations(i_11, k_17);
        w_17 = t;
        t = save_MarkVar_0_0(t);
        q_15 = t;
        t = w_17;
        if(match_cons(t, sym_CallT_3))
          {
            u_16 = ATgetArgument(t, 0);
            v_16 = ATgetArgument(t, 1);
            d_17 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_17);
        m_16 = t;
        t = d_17;
        t = map_1_0(w_12, t);
        e_17 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, u_16, v_16, e_17);
        k_11 = t;
        t = SSLsetAnnotations(k_11, m_16);
        i_17 = t;
        if(match_cons(t, sym_CallT_3))
          {
            y_15 = ATgetArgument(t, 0);
            z_15 = ATgetArgument(t, 1);
            e_16 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_17);
        r_15 = t;
        t = z_15;
        t = mark_buv_0_0(t);
        f_16 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, y_15, f_16, e_16);
        l_11 = t;
        t = SSLsetAnnotations(l_11, r_15);
        l_16 = t;
        t = q_15;
        t = isect_MarkVar_0_0(t);
        t = l_16;
      }
    }
  else
    {
      ATerm v_19 = NULL,w_19 = NULL,i_20 = NULL,j_20 = NULL,n_20 = NULL,o_20 = NULL,v_20 = NULL,c_21 = NULL,n_11 = NULL,m_11 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          k_30 = ATgetArgument(t, 0);
          p_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_30);
      v_20 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, k_30, p_30);
      m_11 = t;
      t = SSLsetAnnotations(m_11, v_20);
      c_21 = t;
      t = save_MarkVar_0_0(t);
      v_19 = t;
      t = c_21;
      if(match_cons(t, sym_Call_2))
        {
          i_20 = ATgetArgument(t, 0);
          j_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_21);
      w_19 = t;
      t = j_20;
      t = mark_buv_0_0(t);
      n_20 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, i_20, n_20);
      n_11 = t;
      t = SSLsetAnnotations(n_11, w_19);
      o_20 = t;
      t = v_19;
      t = isect_MarkVar_0_0(t);
      t = o_20;
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_v_49;
  return(t);
}
static ATerm g_7 (ATerm b_79, ATerm c_79, ATerm d_79, ATerm t)
{
  ATerm t_30 = NULL;
  static ATerm m_13 (ATerm t);
  static ATerm m_13 (ATerm t)
  {
    t = c_79;
    t = map_1_0(IntroduceBound_0_0, t);
    t = d_79;
    t = mark_build_vars_0_0(t);
    if(((t_30 != NULL) && (t_30 != t)))
      _fail(t);
    else
      t_30 = t;
    return(t);
  }
  t = scope_2_0(c_13, m_13, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, b_79, c_79, not_null(t_30));
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_v_49;
  return(t);
}
static ATerm h_7 (ATerm v_78, ATerm z_78, ATerm x_78, ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
  static ATerm q_13 (ATerm t);
  static ATerm q_13 (ATerm t)
  {
    t = v_78;
    t = mark_match_vars_0_0(t);
    if(((x_30 != NULL) && (x_30 != t)))
      _fail(t);
    else
      x_30 = t;
    t = x_78;
    t = mark_buv_0_0(t);
    if(((y_30 != NULL) && (y_30 != t)))
      _fail(t);
    else
      y_30 = t;
    t = z_78;
    t = mark_build_vars_0_0(t);
    if(((z_30 != NULL) && (z_30 != t)))
      _fail(t);
    else
      z_30 = t;
    return(t);
  }
  t = scope_2_0(n_13, q_13, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_30), not_null(z_30), not_null(y_30)));
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_v_49;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm k_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_31);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm y_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_49);
    }
  else
    {
      t = y_49;
      {
        ATerm a_50 = t;
        int b_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_50);
          }
        else
          {
            t = a_50;
            {
              ATerm c_50 = t;
              int d_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_31 = NULL,a_32 = NULL,c_32 = NULL,h_32 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_31 = ATgetArgument(t, 0);
                      a_32 = ATgetArgument(t, 1);
                      c_32 = ATgetArgument(t, 2);
                      h_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_32;
                  t = map_1_0(l_14, t);
                  LocalPopChoice(d_50);
                }
              else
                {
                  t = c_50;
                  {
                    ATerm e_50 = t;
                    int f_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_50);
                      }
                    else
                      {
                        t = e_50;
                        t = dynrule_targs_1_0(t_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm y_32 = NULL;
  ATerm g_50 = t;
  int i_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_32 = ATgetArgument(t, 0);
          {
            ATerm j_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_50);
      t = y_32;
    }
  else
    {
      t = g_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_32;
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = map_1_0(y_14, t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm t_33 = NULL;
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_33 = ATgetArgument(t, 0);
          {
            ATerm m_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_50);
      t = t_33;
    }
  else
    {
      t = k_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_33;
    }
  return(t);
}
static ATerm i_7 (ATerm p_78, ATerm t_78, ATerm r_78, ATerm t)
{
  ATerm g_31 = NULL,i_31 = NULL,j_31 = NULL;
  static ATerm s_13 (ATerm t);
  static ATerm s_13 (ATerm t)
  {
    t = p_78;
    t = free_vars_3_0(w_13, f_14, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = p_78;
    t = mark_match_vars_0_0(t);
    if(((g_31 != NULL) && (g_31 != t)))
      _fail(t);
    else
      g_31 = t;
    t = r_78;
    t = mark_buv_0_0(t);
    if(((i_31 != NULL) && (i_31 != t)))
      _fail(t);
    else
      i_31 = t;
    t = t_78;
    t = mark_build_vars_0_0(t);
    if(((j_31 != NULL) && (j_31 != t)))
      _fail(t);
    else
      j_31 = t;
    return(t);
  }
  t = scope_2_0(r_13, s_13, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_31), not_null(j_31), not_null(i_31)));
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm b_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_36);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm n_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_50);
    }
  else
    {
      t = n_50;
      {
        ATerm q_50 = t;
        int r_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_50);
          }
        else
          {
            t = q_50;
            {
              ATerm s_50 = t;
              int t_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_36 = ATgetArgument(t, 0);
                      i_36 = ATgetArgument(t, 1);
                      j_36 = ATgetArgument(t, 2);
                      k_36 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_36;
                  t = map_1_0(n_15, t);
                  LocalPopChoice(t_50);
                }
              else
                {
                  t = s_50;
                  {
                    ATerm u_50 = t;
                    int v_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(v_50);
                      }
                    else
                      {
                        t = u_50;
                        t = dynrule_targs_1_0(p_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm f_37 = NULL;
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_37 = ATgetArgument(t, 0);
          {
            ATerm e_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_50);
      t = f_37;
    }
  else
    {
      t = w_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_37;
    }
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = map_1_0(q_17, t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm b_38 = NULL;
  ATerm f_51 = t;
  int k_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_38 = ATgetArgument(t, 0);
          {
            ATerm l_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_51);
      t = b_38;
    }
  else
    {
      t = f_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_38;
    }
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_v_49;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm h_39 = NULL;
  ATerm m_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_39 = ATgetArgument(t, 0);
          {
            ATerm q_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_51);
      t = h_39;
    }
  else
    {
      t = m_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_39;
    }
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm k_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_39);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm r_51 = t;
  int s_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_51);
    }
  else
    {
      t = r_51;
      {
        ATerm z_51 = t;
        int a_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_52);
          }
        else
          {
            t = z_51;
            {
              ATerm f_52 = t;
              int g_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_39 = ATgetArgument(t, 0);
                      n_39 = ATgetArgument(t, 1);
                      o_39 = ATgetArgument(t, 2);
                      p_39 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_39;
                  t = map_1_0(v_18, t);
                  LocalPopChoice(g_52);
                }
              else
                {
                  t = f_52;
                  {
                    ATerm h_52 = t;
                    int k_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_52);
                      }
                    else
                      {
                        t = h_52;
                        t = dynrule_targs_1_0(w_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm f_40 = NULL;
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_40 = ATgetArgument(t, 0);
          {
            ATerm n_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_52);
      t = f_40;
    }
  else
    {
      t = l_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_40;
    }
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = map_1_0(y_18, t);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm k_40 = NULL;
  ATerm u_52 = t;
  int v_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_40 = ATgetArgument(t, 0);
          {
            ATerm w_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_52);
      t = k_40;
    }
  else
    {
      t = u_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_40;
    }
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,h_35 = NULL,k_35 = NULL,n_35 = NULL,q_35 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      c_35 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
      e_35 = ATgetArgument(t, 2);
      {
        ATerm u_35 = NULL,w_35 = NULL,y_35 = NULL,a_36 = NULL;
        t = e_35;
        if(match_cons(t, sym_Rule_3))
          {
            y_34 = ATgetArgument(t, 0);
            z_34 = ATgetArgument(t, 1);
            a_35 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = e_35;
        t = free_vars_3_0(h_15, l_15, tboundin_3_0, t);
        u_35 = t;
        {
          static ATerm v_17 (ATerm t);
          static ATerm v_17 (ATerm t)
          {
            t = u_35;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = y_34;
            t = mark_match_vars_0_0(t);
            if(((w_35 != NULL) && (w_35 != t)))
              _fail(t);
            else
              w_35 = t;
            t = a_35;
            t = mark_buv_0_0(t);
            if(((y_35 != NULL) && (y_35 != t)))
              _fail(t);
            else
              y_35 = t;
            t = z_34;
            t = mark_build_vars_0_0(t);
            if(((a_36 != NULL) && (a_36 != t)))
              _fail(t);
            else
              a_36 = t;
            return(t);
          }
          t = scope_2_0(r_17, v_17, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, c_35, d_35, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_35), not_null(a_36), not_null(y_35)));
      }
    }
  else
    {
      ATerm n_38 = NULL,o_38 = NULL,q_38 = NULL,s_38 = NULL,u_38 = NULL,a_39 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          c_35 = ATgetArgument(t, 0);
          d_35 = ATgetArgument(t, 1);
          e_35 = ATgetArgument(t, 2);
          h_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = h_35;
      if(match_cons(t, sym_Rule_3))
        {
          k_35 = ATgetArgument(t, 0);
          n_35 = ATgetArgument(t, 1);
          q_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_35;
      t = map_1_0(x_17, t);
      n_38 = t;
      t = h_35;
      t = free_vars_3_0(d_18, e_18, tboundin_3_0, t);
      a_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_39, n_38);
      t = diff_0_0(t);
      o_38 = t;
      {
        static ATerm e_19 (ATerm t);
        static ATerm e_19 (ATerm t)
        {
          t = n_38;
          t = map_1_0(IntroduceBound_0_0, t);
          t = o_38;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = k_35;
          t = mark_match_vars_0_0(t);
          if(((q_38 != NULL) && (q_38 != t)))
            _fail(t);
          else
            q_38 = t;
          t = q_35;
          t = mark_buv_0_0(t);
          if(((s_38 != NULL) && (s_38 != t)))
            _fail(t);
          else
            s_38 = t;
          t = n_35;
          t = mark_build_vars_0_0(t);
          if(((u_38 != NULL) && (u_38 != t)))
            _fail(t);
          else
            u_38 = t;
          return(t);
        }
        t = scope_2_0(a_19, e_19, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, c_35, d_35, e_35, (ATerm) ATmakeAppl(sym_Rule_3, not_null(q_38), not_null(u_38), not_null(s_38)));
    }
  return(t);
}
static ATerm f_19 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm v_40 = NULL,a_41 = NULL,c_41 = NULL;
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_40);
  a_41 = t;
  t = term_b_53;
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_40), term_b_53);
  t = t_7(f_19, a_41, c_41, t);
  t = v_40;
  return(t);
}
static ATerm g_19 (ATerm t)
{
  ATerm i_41 = NULL;
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_41 = ATgetArgument(t, 0);
          {
            ATerm e_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_53);
      t = i_41;
    }
  else
    {
      t = c_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_41;
    }
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_v_49;
  return(t);
}
static ATerm j_7 (ATerm n_77, ATerm o_77, ATerm p_77, ATerm r_77, ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  t = p_77;
  t = map_1_0(g_19, t);
  e_41 = t;
  {
    static ATerm i_19 (ATerm t);
    static ATerm i_19 (ATerm t)
    {
      t = e_41;
      t = map_1_0(IntroduceBound_0_0, t);
      t = r_77;
      t = mark_buv_0_0(t);
      if(((f_41 != NULL) && (f_41 != t)))
        _fail(t);
      else
        f_41 = t;
      return(t);
    }
    t = scope_2_0(h_19, i_19, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_77, o_77, p_77, not_null(f_41));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,w_42 = NULL;
  m_42 = t;
  if(match_cons(t, sym__2))
    {
      n_42 = ATgetArgument(t, 0);
      u_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_42;
  if(match_cons(t, sym_Undefined_0))
    {
      t = n_42;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_f_53;
        }
      else
        {
          t = term_f_53;
        }
    }
  else
    {
      ATerm g_53 = t;
      int h_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm i_53 = ATgetArgument(t, 0);
              w_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(h_53);
          t = n_42;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_f_53;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  s_42 = ATgetArgument(t, 0);
                  t_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm j_53 = t;
                int k_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, t_42, w_42);
                    {
                      ATerm l_53 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm l_22 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              l_22 = ATgetArgument(t, 0);
                              if((l_22 != ATgetArgument(t, 1)))
                                {
                                  _fail(ATgetArgument(t, 1));
                                }
                            }
                          else
                            _fail(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = l_53;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, s_42, term_m_53);
                    LocalPopChoice(k_53);
                  }
                else
                  {
                    t = j_53;
                    t = w_42;
                    if((t_42 != t))
                      {
                        _fail(t);
                      }
                    t = n_42;
                  }
              }
            }
        }
      else
        {
          t = g_53;
          t = n_42;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_f_53;
        }
    }
  return(t);
}
static ATerm k_7 (ATerm y_75, ATerm z_75, ATerm x_75, ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,j_43 = NULL;
  t = term_v_49;
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_49, y_75);
  t = j_8(j_43, y_75, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_43 = ATgetFirst((ATermList) t);
      {
        ATerm n_53 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_75, a_43);
  t = CompareEntries_0_0(t);
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_75, (ATerm) ATinsert(CheckATermList(x_75), b_43));
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,f_44 = NULL,g_44 = NULL;
  g_44 = t;
  if(match_cons(t, sym__2))
    {
      a_44 = ATgetArgument(t, 0);
      b_44 = ATgetArgument(t, 1);
      t = b_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_44 = ATgetFirst((ATermList) t);
          f_44 = (ATerm) ATgetNext((ATermList) t);
          t = c_44;
          {
            ATerm o_53 = t;
            int p_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm q_53 = ATgetArgument(t, 0);
                    ATerm r_53 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(p_53);
                t = a_44;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = g_44;
                  }
                else
                  {
                    ATerm s_53 = t;
                    int t_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_44;
                        t = k_7(a_44, c_44, f_44, t);
                        LocalPopChoice(t_53);
                      }
                    else
                      {
                        t = s_53;
                        t = g_44;
                      }
                  }
              }
            else
              {
                t = o_53;
                t = a_44;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = g_44;
                  }
                else
                  {
                    t = g_44;
                  }
              }
          }
        }
      else
        {
          t = a_44;
          if(match_cons(t, sym_Scopes_0))
            {
              t = g_44;
            }
          else
            {
              t = g_44;
            }
        }
    }
  else
    {
      t = g_44;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm u_43 = NULL,w_43 = NULL;
  t = map_1_0(j_19, t);
  u_43 = t;
  t = term_v_49;
  t = table_destroy_0_0(t);
  t = term_v_49;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_49, u_43);
  t = l_7(w_43, u_43, t);
  t = u_43;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,l_45 = NULL;
  l_45 = t;
  {
    ATerm u_53 = t;
    int v_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm w_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_53);
        t = l_45;
      }
    else
      {
        t = u_53;
        {
          ATerm x_53 = t;
          int y_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm z_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(y_53);
              t = l_45;
            }
          else
            {
              t = x_53;
              {
                ATerm a_54 = t;
                int b_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm c_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(b_54);
                    t = l_45;
                  }
                else
                  {
                    t = a_54;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm d_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = l_45;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  f_45 = t;
  t = l_45;
  t = SRTS_one(mark_buv_0_0, t);
  g_45 = t;
  t = f_45;
  t = isect_MarkVar_0_0(t);
  t = g_45;
  return(t);
}
static ATerm l_7 (ATerm z_33, ATerm y_33, ATerm t)
{
  static ATerm o_19 (ATerm t);
  static ATerm o_19 (ATerm t)
  {
    ATerm n_45 = NULL,o_45 = NULL,q_45 = NULL;
    if(match_cons(t, sym__2))
      {
        n_45 = ATgetArgument(t, 0);
        o_45 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, z_33, n_45, o_45);
    t = lookup_table_0_1(z_33, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        q_45 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = i_8(n_45, o_45, q_45, t);
    t = (ATerm) ATmakeAppl(sym__3, z_33, n_45, o_45);
    return(t);
  }
  t = y_33;
  t = map_1_0(o_19, t);
  return(t);
}
static ATerm m_7 (ATerm y_37, ATerm t)
{
  ATerm s_45 = NULL;
  t = SSL_hashtable_destroy(y_37);
  s_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_45);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  t_45 = t;
  t = table_hashtable_0_0(t);
  u_45 = t;
  t = lookup_table_0_1(t_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(w_45, t);
  t = u_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(t_45, v_45, t);
  t = t_45;
  return(t);
}
static ATerm n_7 (ATerm v_37, ATerm t)
{
  t = SSL_hashtable_keys(v_37);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  static ATerm p_19 (ATerm t);
  static ATerm p_19 (ATerm t)
  {
    ATerm d_46 = NULL,r_46 = NULL;
    d_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_46), d_46);
    t = j_8(not_null(a_46), d_46, t);
    r_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_46, r_46);
    return(t);
  }
  if(((a_46 != NULL) && (a_46 != t)))
    _fail(t);
  else
    a_46 = t;
  t = lookup_table_0_1(a_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(b_46, t);
  t = map_1_0(p_19, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_v_49;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm l_76, ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm q_19 (ATerm t);
    static ATerm q_19 (ATerm t)
    {
      static ATerm d_48 (ATerm b_47, ATerm t);
      static ATerm d_48 (ATerm b_47, ATerm t)
      {
        ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL;
        t = b_47;
        if(match_cons(t, sym__2))
          {
            ATerm e_54 = ATgetArgument(t, 0);
            c_47 = e_54;
            if(match_cons(e_54, sym_Var_1))
              {
                d_47 = ATgetArgument(e_54, 0);
              }
            else
              _fail(t);
            {
              ATerm f_54 = ATgetArgument(t, 1);
              if(((ATgetType(f_54) == AT_LIST) && !(ATisEmpty(f_54))))
                {
                  ATerm g_54 = ATgetFirst((ATermList) f_54);
                  if(match_cons(g_54, sym_Defined_2))
                    {
                      e_47 = ATgetArgument(g_54, 0);
                      {
                        ATerm h_54 = ATgetArgument(g_54, 1);
                        if((ATgetSymbol((ATermAppl) h_54) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  f_47 = (ATerm) ATgetNext((ATermList) f_54);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_76;
        {
          static ATerm w_20 (ATerm t);
          static ATerm w_20 (ATerm t)
          {
            if((d_47 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(w_20, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, c_47, (ATerm) ATinsert(CheckATermList(f_47), (ATerm) ATmakeAppl(sym_Defined_2, e_47, term_m_53)));
        return(t);
      }
      ATerm i_47 = NULL,k_47 = NULL;
      k_47 = t;
      {
        ATerm i_54 = t;
        int j_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                i_47 = ATgetArgument(t, 0);
                {
                  ATerm k_54 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_54);
            t = i_47;
            if(match_cons(t, sym_Scopes_0))
              {
                t = k_47;
              }
            else
              {
                ATerm l_54 = t;
                int m_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = d_48(k_47, t);
                    LocalPopChoice(m_54);
                  }
                else
                  {
                    t = l_54;
                    t = k_47;
                  }
              }
          }
        else
          {
            t = i_54;
            {
              ATerm n_54 = t;
              int o_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_48(k_47, t);
                  LocalPopChoice(o_54);
                }
              else
                {
                  t = n_54;
                  t = k_47;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(q_19, t);
  }
  w_46 = t;
  t = term_v_49;
  t = table_destroy_0_0(t);
  t = term_v_49;
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_49, w_46);
  t = l_7(x_46, w_46, t);
  t = w_46;
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm j_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_49);
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm p_54 = t;
  int q_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_54);
    }
  else
    {
      t = p_54;
      {
        ATerm r_54 = t;
        int s_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_54);
          }
        else
          {
            t = r_54;
            {
              ATerm t_54 = t;
              int u_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_49 = ATgetArgument(t, 0);
                      q_49 = ATgetArgument(t, 1);
                      r_49 = ATgetArgument(t, 2);
                      s_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_49;
                  t = map_1_0(e_21, t);
                  LocalPopChoice(u_54);
                }
              else
                {
                  t = t_54;
                  {
                    ATerm v_54 = t;
                    int w_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_54);
                      }
                    else
                      {
                        t = v_54;
                        t = dynrule_targs_1_0(f_21, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_21 (ATerm t)
{
  ATerm h_50 = NULL;
  ATerm x_54 = t;
  int y_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_50 = ATgetArgument(t, 0);
          {
            ATerm z_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_54);
      t = h_50;
    }
  else
    {
      t = x_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_50;
    }
  return(t);
}
static ATerm f_21 (ATerm t)
{
  t = map_1_0(n_21, t);
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm o_50 = NULL;
  ATerm a_55 = t;
  int b_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_50 = ATgetArgument(t, 0);
          {
            ATerm c_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_55);
      t = o_50;
    }
  else
    {
      t = a_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_50;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,q_48 = NULL,s_48 = NULL,t_48 = NULL,x_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,d_23 = NULL,g_15 = NULL;
  i_49 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_49);
  a_49 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, b_49, g_49);
  g_15 = t;
  t = SSLsetAnnotations(g_15, a_49);
  h_49 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_48 = ATgetArgument(t, 0);
      {
        ATerm d_55 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_48;
  t = free_vars_3_0(a_21, d_21, tboundin_3_0, t);
  j_48 = t;
  t = undefine_unbound_MarkVar_0_1(j_48, t);
  k_48 = t;
  t = h_49;
  if(match_cons(t, sym_Let_2))
    {
      q_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_49);
  m_48 = t;
  t = q_48;
  {
    static ATerm o_21 (ATerm t);
    static ATerm o_21 (ATerm t)
    {
      ATerm y_50 = NULL,z_50 = NULL;
      y_50 = t;
      t = term_v_49;
      t = table_destroy_0_0(t);
      t = term_v_49;
      z_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_49, k_48);
      t = l_7(z_50, k_48, t);
      t = y_50;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(o_21, t);
  }
  t_48 = t;
  t = term_v_49;
  t = table_destroy_0_0(t);
  t = term_v_49;
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_49, k_48);
  t = l_7(z_48, k_48, t);
  t = s_48;
  t = mark_buv_0_0(t);
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, t_48, x_48);
  d_23 = t;
  t = SSLsetAnnotations(d_23, m_48);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm e_55 = t;
  int f_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,h_23 = NULL;
      c_51 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_51);
      a_51 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_51);
      h_23 = t;
      t = SSLsetAnnotations(h_23, a_51);
      LocalPopChoice(f_55);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = e_55;
      {
        ATerm g_55 = t;
        int h_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,i_23 = NULL;
            i_51 = t;
            if(match_cons(t, sym_App_2))
              {
                g_51 = ATgetArgument(t, 0);
                h_51 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_51);
            d_51 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, g_51, h_51);
            i_23 = t;
            t = SSLsetAnnotations(i_23, d_51);
            LocalPopChoice(h_55);
            {
              ATerm j_51 = NULL,n_51 = NULL,o_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,k_23 = NULL;
              v_51 = t;
              if(match_cons(t, sym_App_2))
                {
                  n_51 = ATgetArgument(t, 0);
                  o_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_51);
              j_51 = t;
              t = n_51;
              t = mark_buv_0_0(t);
              t_51 = t;
              t = o_51;
              t = mark_build_vars_0_0(t);
              u_51 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, t_51, u_51);
              k_23 = t;
              t = SSLsetAnnotations(k_23, j_51);
            }
          }
        else
          {
            t = g_55;
            {
              ATerm k_55 = t;
              int l_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,l_23 = NULL;
                  y_51 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      x_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_51);
                  w_51 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, x_51);
                  l_23 = t;
                  t = SSLsetAnnotations(l_23, w_51);
                  LocalPopChoice(l_55);
                  {
                    ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,m_23 = NULL;
                    e_52 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        c_52 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_52);
                    b_52 = t;
                    t = c_52;
                    t = mark_buv_0_0(t);
                    d_52 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, d_52);
                    m_23 = t;
                    t = SSLsetAnnotations(m_23, b_52);
                  }
                }
              else
                {
                  t = k_55;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_7 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  j_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
  t = j_8(j_33, k_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_55 = ATgetFirst((ATermList) t);
      i_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_33, k_33, (ATerm) ATinsert(CheckATermList(i_52), l_33));
  t = lookup_table_0_1(j_33, t);
  q_52 = t;
  t = (ATerm) ATinsert(CheckATermList(i_52), l_33);
  o_52 = t;
  t = q_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(k_33, o_52, p_52, t);
  t = j_52;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,x_52 = NULL;
  r_52 = t;
  t = term_v_49;
  s_52 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_52);
  t_52 = t;
  t = term_o_55;
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_49, (ATerm)ATmakeAppl(sym_Var_1, r_52), term_o_55);
  t = o_7(s_52, t_52, x_52, t);
  t = r_52;
  return(t);
}
static ATerm r_7 (ATerm h_33, ATerm i_33, ATerm t)
{
  ATerm a_53 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_33, i_33);
  t = j_8(h_33, i_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_53 = ATgetFirst((ATermList) t);
      {
        ATerm p_55 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_53;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL;
  i_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_55 = t;
    int v_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,c_24 = NULL;
        t = term_v_49;
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_49, i_55);
        t = r_7(c_24, i_55, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_55 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_55) != ATmakeSymbol("q_1", 0, ATtrue)))
              _fail(t);
            u_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, j_55);
        v_23 = t;
        t = (ATerm) ATinsert(ATempty, u_23);
        w_23 = t;
        t = SSLsetAnnotations(v_23, w_23);
        LocalPopChoice(v_55);
      }
    else
      {
        t = q_55;
        {
          ATerm x_55 = t;
          int y_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,s_24 = NULL;
              t = term_v_49;
              s_24 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_49, i_55);
              t = r_7(s_24, i_55, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm z_55 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) z_55) != ATmakeSymbol("o_1", 0, ATtrue)))
                    _fail(t);
                  j_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, j_55);
              k_24 = t;
              t = (ATerm) ATinsert(ATempty, j_24);
              l_24 = t;
              t = SSLsetAnnotations(k_24, l_24);
              LocalPopChoice(y_55);
            }
          else
            {
              t = x_55;
              {
                ATerm y_24 = NULL,a_25 = NULL,b_25 = NULL,m_25 = NULL;
                t = term_v_49;
                m_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_49, i_55);
                t = r_7(m_25, i_55, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm a_56 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) a_56) != ATmakeSymbol("m_1", 0, ATtrue)))
                      _fail(t);
                    y_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, j_55);
                a_25 = t;
                t = (ATerm) ATinsert(ATempty, y_24);
                b_25 = t;
                t = SSLsetAnnotations(a_25, b_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,f_27 = NULL;
  ATerm d_56 = t;
  int e_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(e_56);
    }
  else
    {
      t = d_56;
    }
  u_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_55);
  r_55 = t;
  t = s_55;
  t = DeclareBound_0_0(t);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_55);
  f_27 = t;
  t = SSLsetAnnotations(f_27, r_55);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm f_56 = t;
  int g_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_56 = NULL,c_56 = NULL,j_56 = NULL,n_27 = NULL;
      j_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_56);
      b_56 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_56);
      n_27 = t;
      t = SSLsetAnnotations(n_27, b_56);
      LocalPopChoice(g_56);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = f_56;
      {
        ATerm h_56 = t;
        int i_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_56 = NULL,m_56 = NULL,s_56 = NULL,u_56 = NULL,o_27 = NULL;
            u_56 = t;
            if(match_cons(t, sym_App_2))
              {
                m_56 = ATgetArgument(t, 0);
                s_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_56);
            k_56 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, m_56, s_56);
            o_27 = t;
            t = SSLsetAnnotations(o_27, k_56);
            LocalPopChoice(i_56);
            {
              ATerm v_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,d_57 = NULL,e_57 = NULL,q_27 = NULL;
              e_57 = t;
              if(match_cons(t, sym_App_2))
                {
                  x_56 = ATgetArgument(t, 0);
                  y_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_57);
              v_56 = t;
              t = x_56;
              t = mark_buv_0_0(t);
              z_56 = t;
              t = y_56;
              t = mark_build_vars_0_0(t);
              d_57 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, z_56, d_57);
              q_27 = t;
              t = SSLsetAnnotations(q_27, v_56);
            }
          }
        else
          {
            t = h_56;
            {
              ATerm l_56 = t;
              int n_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,r_27 = NULL;
                  q_57 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      p_57 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_57);
                  o_57 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, p_57);
                  r_27 = t;
                  t = SSLsetAnnotations(r_27, o_57);
                  LocalPopChoice(n_56);
                  {
                    ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,s_27 = NULL;
                    u_57 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        s_57 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_57);
                    r_57 = t;
                    t = s_57;
                    t = mark_buv_0_0(t);
                    t_57 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, t_57);
                    s_27 = t;
                    t = SSLsetAnnotations(s_27, r_57);
                  }
                }
              else
                {
                  t = l_56;
                  t = SRTS_all(mark_match_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_59 = NULL,e_59 = NULL;
      b_59 = t;
      if(match_cons(t, sym_Match_1))
        {
          e_59 = ATgetArgument(t, 0);
          {
            ATerm q_25 = NULL,u_25 = NULL,c_28 = NULL;
            t = SSLgetAnnotations(b_59);
            q_25 = t;
            t = e_59;
            t = mark_match_vars_0_0(t);
            u_25 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, u_25);
            c_28 = t;
            t = SSLsetAnnotations(c_28, q_25);
          }
        }
      else
        {
          ATerm m_26 = NULL,s_26 = NULL,h_28 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              e_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_59);
          m_26 = t;
          t = e_59;
          t = mark_build_vars_0_0(t);
          s_26 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, s_26);
          h_28 = t;
          t = SSLsetAnnotations(h_28, m_26);
        }
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      {
        ATerm q_56 = t;
        int r_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(r_56);
          }
        else
          {
            t = q_56;
            {
              ATerm t_56 = t;
              int w_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(w_56);
                }
              else
                {
                  t = t_56;
                  {
                    ATerm a_57 = t;
                    int b_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(b_57);
                      }
                    else
                      {
                        t = a_57;
                        {
                          ATerm c_57 = t;
                          int f_57 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_59 = NULL,i_59 = NULL,k_59 = NULL,l_59 = NULL,s_59 = NULL;
                              h_59 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  i_59 = ATgetArgument(t, 0);
                                  k_59 = ATgetArgument(t, 1);
                                  l_59 = ATgetArgument(t, 2);
                                  s_59 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = h_59;
                              t = j_7(i_59, k_59, l_59, s_59, t);
                              LocalPopChoice(f_57);
                            }
                          else
                            {
                              t = c_57;
                              {
                                ATerm g_57 = t;
                                int h_57 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(h_57);
                                  }
                                else
                                  {
                                    t = g_57;
                                    {
                                      ATerm i_57 = t;
                                      int j_57 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_59 = NULL,b_60 = NULL,c_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
                                          k_60 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              l_60 = ATgetArgument(t, 0);
                                              t = l_60;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  x_59 = ATgetArgument(t, 0);
                                                  b_60 = ATgetArgument(t, 1);
                                                  c_60 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = k_60;
                                              t = i_7(x_59, b_60, c_60, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  l_60 = ATgetArgument(t, 0);
                                                  t = l_60;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      x_59 = ATgetArgument(t, 0);
                                                      b_60 = ATgetArgument(t, 1);
                                                      c_60 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = k_60;
                                                  t = h_7(x_59, b_60, c_60, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      l_60 = ATgetArgument(t, 0);
                                                      m_60 = ATgetArgument(t, 1);
                                                      n_60 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = k_60;
                                                  t = g_7(l_60, m_60, n_60, t);
                                                }
                                            }
                                          LocalPopChoice(j_57);
                                        }
                                      else
                                        {
                                          t = i_57;
                                          {
                                            ATerm k_57 = t;
                                            int l_57 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(l_57);
                                              }
                                            else
                                              {
                                                t = k_57;
                                                {
                                                  ATerm m_57 = t;
                                                  int n_57 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(n_57);
                                                    }
                                                  else
                                                    {
                                                      t = m_57;
                                                      {
                                                        ATerm v_57 = t;
                                                        int w_57 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm x_60 = NULL;
                                                            x_60 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm x_57 = ATgetArgument(t, 0);
                                                                ATerm y_57 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = x_60;
                                                            t = f_7(t);
                                                            LocalPopChoice(w_57);
                                                          }
                                                        else
                                                          {
                                                            t = v_57;
                                                            {
                                                              ATerm z_57 = t;
                                                              int a_58 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(a_58);
                                                                }
                                                              else
                                                                {
                                                                  t = z_57;
                                                                  {
                                                                    ATerm b_58 = t;
                                                                    int c_58 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(c_58);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_58;
                                                                        {
                                                                          ATerm d_58 = t;
                                                                          int e_58 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(e_58);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_58;
                                                                              t = SRTS_all(mark_buv_0_0, t);
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm s_7 (ATerm w_32, ATerm x_32, ATerm v_32, ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,l_61 = NULL,m_61 = NULL;
  h_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_32, x_32);
  {
    ATerm f_58 = t;
    int g_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_58 = ATgetArgument(t, 0);
            ATerm i_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_32, x_32);
        t = j_8(w_32, x_32, t);
        LocalPopChoice(g_58);
      }
    else
      {
        t = f_58;
        t = (ATerm) ATempty;
      }
  }
  i_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_32, x_32, (ATerm) ATinsert(CheckATermList(i_61), v_32));
  t = lookup_table_0_1(w_32, t);
  m_61 = t;
  t = (ATerm) ATinsert(CheckATermList(i_61), v_32);
  j_61 = t;
  t = m_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(x_32, j_61, l_61, t);
  t = h_61;
  return(t);
}
static ATerm t_7 (ATerm q_106 (ATerm), ATerm s_31, ATerm q_31, ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,z_61 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL;
  w_61 = t;
  t = q_106(t);
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_61, s_31, q_31);
  t = s_7(t_61, s_31, q_31, t);
  {
    ATerm j_58 = t;
    int k_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_62 = NULL;
        t = term_l_58;
        g_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_61, term_l_58);
        t = j_8(t_61, g_62, t);
        {
          ATerm m_58 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_58;
            }
        }
        LocalPopChoice(k_58);
      }
    else
      {
        t = j_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_61 = ATgetFirst((ATermList) t);
      v_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_61, term_l_58, (ATerm) ATinsert(CheckATermList(v_61), (ATerm) ATinsert(CheckATermList(u_61), s_31)));
  t = lookup_table_0_1(t_61, t);
  f_62 = t;
  t = term_l_58;
  z_61 = t;
  t = (ATerm) ATinsert(CheckATermList(v_61), (ATerm) ATinsert(CheckATermList(u_61), s_31));
  d_62 = t;
  t = f_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(z_61, d_62, e_62, t);
  t = w_61;
  return(t);
}
static ATerm a_22 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,n_62 = NULL;
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_62);
  k_62 = t;
  t = term_p_58;
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_62), term_p_58);
  t = t_7(a_22, k_62, n_62, t);
  t = j_62;
  return(t);
}
static ATerm b_22 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,t_62 = NULL,v_62 = NULL,w_62 = NULL,l_28 = NULL;
  w_62 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_62 = ATgetArgument(t, 0);
      t_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_62);
  p_62 = t;
  t = t_62;
  {
    static ATerm f_22 (ATerm t);
    static ATerm f_22 (ATerm t)
    {
      ATerm x_62 = NULL;
      x_62 = t;
      t = q_62;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = x_62;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(b_22, f_22, t);
  }
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, q_62, v_62);
  l_28 = t;
  t = SSLsetAnnotations(l_28, p_62);
  return(t);
}
ATerm tboundin_3_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  a_75 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_75 = ATgetArgument(t, 0);
      z_74 = ATgetArgument(t, 1);
      {
        ATerm c_27 = NULL,i_27 = NULL,j_27 = NULL,n_28 = NULL;
        t = SSLgetAnnotations(a_75);
        c_27 = t;
        t = b_75;
        t = t_126(t);
        i_27 = t;
        t = z_74;
        t = r_126(t);
        j_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_27, j_27);
        n_28 = t;
        t = SSLsetAnnotations(n_28, c_27);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          b_75 = ATgetArgument(t, 0);
          {
            ATerm y_27 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,j_28 = NULL,q_28 = NULL,r_28 = NULL,v_28 = NULL,p_28 = NULL,o_28 = NULL;
            t = SSLgetAnnotations(a_75);
            y_27 = t;
            t = b_75;
            if(match_cons(t, sym_Rule_3))
              {
                e_28 = ATgetArgument(t, 0);
                f_28 = ATgetArgument(t, 1);
                g_28 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_75);
            d_28 = t;
            t = e_28;
            t = r_126(t);
            j_28 = t;
            t = f_28;
            t = r_126(t);
            q_28 = t;
            t = g_28;
            t = r_126(t);
            r_28 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, j_28, q_28, r_28);
            o_28 = t;
            t = SSLsetAnnotations(o_28, d_28);
            v_28 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, v_28);
            p_28 = t;
            t = SSLsetAnnotations(p_28, y_27);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              b_75 = ATgetArgument(t, 0);
              z_74 = ATgetArgument(t, 1);
              x_74 = ATgetArgument(t, 2);
              {
                ATerm e_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,s_28 = NULL;
                t = SSLgetAnnotations(a_75);
                e_29 = t;
                t = b_75;
                t = t_126(t);
                i_29 = t;
                t = z_74;
                t = t_126(t);
                j_29 = t;
                t = x_74;
                t = t_126(t);
                k_29 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, i_29, j_29, k_29);
                s_28 = t;
                t = SSLsetAnnotations(s_28, e_29);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  b_75 = ATgetArgument(t, 0);
                  z_74 = ATgetArgument(t, 1);
                  x_74 = ATgetArgument(t, 2);
                  y_74 = ATgetArgument(t, 3);
                  {
                    ATerm l_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,a_31 = NULL,t_28 = NULL;
                    t = SSLgetAnnotations(a_75);
                    l_30 = t;
                    t = b_75;
                    t = t_126(t);
                    u_30 = t;
                    t = z_74;
                    t = t_126(t);
                    v_30 = t;
                    t = x_74;
                    t = t_126(t);
                    w_30 = t;
                    t = y_74;
                    t = r_126(t);
                    a_31 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, u_30, v_30, w_30, a_31);
                    t_28 = t;
                    t = SSLsetAnnotations(t_28, l_30);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_75 = ATgetArgument(t, 0);
                      z_74 = ATgetArgument(t, 1);
                      x_74 = ATgetArgument(t, 2);
                      y_74 = ATgetArgument(t, 3);
                      {
                        ATerm r_31 = NULL,y_31 = NULL,b_32 = NULL,d_32 = NULL,e_32 = NULL,u_28 = NULL;
                        t = SSLgetAnnotations(a_75);
                        r_31 = t;
                        t = b_75;
                        t = t_126(t);
                        y_31 = t;
                        t = z_74;
                        t = t_126(t);
                        b_32 = t;
                        t = x_74;
                        t = t_126(t);
                        d_32 = t;
                        t = y_74;
                        t = r_126(t);
                        e_32 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, y_31, b_32, d_32, e_32);
                        u_28 = t;
                        t = SSLsetAnnotations(u_28, r_31);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          b_75 = ATgetArgument(t, 0);
                          z_74 = ATgetArgument(t, 1);
                          {
                            ATerm a_33 = NULL,g_33 = NULL,m_33 = NULL,a_29 = NULL;
                            t = SSLgetAnnotations(a_75);
                            a_33 = t;
                            t = b_75;
                            t = t_126(t);
                            g_33 = t;
                            t = z_74;
                            t = r_126(t);
                            m_33 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, g_33, m_33);
                            a_29 = t;
                            t = SSLsetAnnotations(a_29, a_33);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              b_75 = ATgetArgument(t, 0);
                              z_74 = ATgetArgument(t, 1);
                              {
                                ATerm x_33 = NULL,c_34 = NULL,d_34 = NULL,p_29 = NULL;
                                t = SSLgetAnnotations(a_75);
                                x_33 = t;
                                t = b_75;
                                t = t_126(t);
                                c_34 = t;
                                t = z_74;
                                t = r_126(t);
                                d_34 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, c_34, d_34);
                                p_29 = t;
                                t = SSLsetAnnotations(p_29, x_33);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  b_75 = ATgetArgument(t, 0);
                                  z_74 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_34 = NULL,t_34 = NULL,u_34 = NULL,u_29 = NULL;
                                    t = SSLgetAnnotations(a_75);
                                    o_34 = t;
                                    t = b_75;
                                    t = t_126(t);
                                    t_34 = t;
                                    t = z_74;
                                    t = r_126(t);
                                    u_34 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, t_34, u_34);
                                    u_29 = t;
                                    t = SSLsetAnnotations(u_29, o_34);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      b_75 = ATgetArgument(t, 0);
                                      {
                                        ATerm j_35 = NULL,m_35 = NULL,v_29 = NULL;
                                        t = SSLgetAnnotations(a_75);
                                        j_35 = t;
                                        t = b_75;
                                        t = r_126(t);
                                        m_35 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, m_35);
                                        v_29 = t;
                                        t = SSLsetAnnotations(v_29, j_35);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          b_75 = ATgetArgument(t, 0);
                                          {
                                            ATerm f_36 = NULL,n_36 = NULL,w_29 = NULL;
                                            t = SSLgetAnnotations(a_75);
                                            f_36 = t;
                                            t = b_75;
                                            t = r_126(t);
                                            n_36 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, n_36);
                                            w_29 = t;
                                            t = SSLsetAnnotations(w_29, f_36);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              b_75 = ATgetArgument(t, 0);
                                              {
                                                ATerm w_36 = NULL,y_36 = NULL,x_29 = NULL;
                                                t = SSLgetAnnotations(a_75);
                                                w_36 = t;
                                                t = b_75;
                                                t = r_126(t);
                                                y_36 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, y_36);
                                                x_29 = t;
                                                t = SSLsetAnnotations(x_29, w_36);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  b_75 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm i_37 = NULL,k_37 = NULL,z_29 = NULL;
                                                    t = SSLgetAnnotations(a_75);
                                                    i_37 = t;
                                                    t = b_75;
                                                    t = r_126(t);
                                                    k_37 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, k_37);
                                                    z_29 = t;
                                                    t = SSLsetAnnotations(z_29, i_37);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm j_38 = NULL,v_38 = NULL,a_30 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      b_75 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(a_75);
                                                  j_38 = t;
                                                  t = b_75;
                                                  t = r_126(t);
                                                  v_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, v_38);
                                                  a_30 = t;
                                                  t = SSLsetAnnotations(a_30, j_38);
                                                }
                                            }
                                        }
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
ATerm map_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  static ATerm g_77 (ATerm t);
  static ATerm g_77 (ATerm t)
  {
    ATerm x_76 = NULL,b_77 = NULL,c_77 = NULL;
    x_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_76;
      }
    else
      {
        ATerm e_39 = NULL,r_39 = NULL,s_39 = NULL,z_42 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_77 = ATgetFirst((ATermList) t);
            c_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_76);
        e_39 = t;
        t = b_77;
        t = w_102(t);
        r_39 = t;
        t = c_77;
        t = g_77(t);
        s_39 = t;
        t = (ATerm) ATinsert(CheckATermList(s_39), r_39);
        z_42 = t;
        t = SSLsetAnnotations(z_42, e_39);
      }
    return(t);
  }
  t = g_77(t);
  return(t);
}
ATerm dynrule_targs_1_0 (ATerm a_127 (ATerm), ATerm t)
{
  ATerm g_80 = NULL,j_80 = NULL,m_80 = NULL;
  ATerm q_58 = t;
  int r_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          g_80 = ATgetArgument(t, 0);
          {
            ATerm s_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_58);
      t = g_80;
      if(match_cons(t, sym_DynRuleId_1))
        {
          j_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_80;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_58 = ATgetArgument(t, 0);
          ATerm u_58 = ATgetArgument(t, 1);
          m_80 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_80;
    }
  else
    {
      t = q_58;
      {
        ATerm v_58 = t;
        int w_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                g_80 = ATgetArgument(t, 0);
                {
                  ATerm x_58 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_58);
            t = g_80;
            if(match_cons(t, sym_DynRuleId_1))
              {
                j_80 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_80;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm y_58 = ATgetArgument(t, 0);
                ATerm z_58 = ATgetArgument(t, 1);
                m_80 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_80;
          }
        else
          {
            t = v_58;
            if(match_cons(t, sym_AddDynRule_2))
              {
                g_80 = ATgetArgument(t, 0);
                {
                  ATerm a_59 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = g_80;
            if(match_cons(t, sym_DynRuleId_1))
              {
                j_80 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_80;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm c_59 = ATgetArgument(t, 0);
                ATerm d_59 = ATgetArgument(t, 1);
                m_80 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_80;
          }
      }
    }
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm v_81 = NULL;
  ATerm f_59 = t;
  int g_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_81 = ATgetArgument(t, 0);
          {
            ATerm j_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_59);
      t = v_81;
    }
  else
    {
      t = f_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_81;
    }
  return(t);
}
static ATerm i_22 (ATerm t)
{
  ATerm h_82 = NULL;
  ATerm m_59 = t;
  int n_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_82 = ATgetArgument(t, 0);
          {
            ATerm o_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_59);
      t = h_82;
    }
  else
    {
      t = m_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_82;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm n_81 = NULL;
  ATerm p_59 = t;
  int q_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm r_59 = ATgetArgument(t, 0);
          ATerm t_59 = ATgetArgument(t, 1);
          n_81 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(q_59);
      t = n_81;
      t = map_1_0(g_22, t);
    }
  else
    {
      t = p_59;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm u_59 = ATgetArgument(t, 0);
          ATerm v_59 = ATgetArgument(t, 1);
          n_81 = ATgetArgument(t, 2);
          {
            ATerm w_59 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = n_81;
      t = map_1_0(i_22, t);
    }
  return(t);
}
static ATerm k_22 (ATerm t)
{
  ATerm u_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_83);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm y_59 = t;
  int z_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_59);
    }
  else
    {
      t = y_59;
      {
        ATerm a_60 = t;
        int d_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_60);
          }
        else
          {
            t = a_60;
            {
              ATerm e_60 = t;
              int f_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_83 = NULL,y_83 = NULL,g_84 = NULL,h_84 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_83 = ATgetArgument(t, 0);
                      y_83 = ATgetArgument(t, 1);
                      g_84 = ATgetArgument(t, 2);
                      h_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_84;
                  t = map_1_0(t_22, t);
                  LocalPopChoice(f_60);
                }
              else
                {
                  t = e_60;
                  {
                    ATerm g_60 = t;
                    int h_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_60);
                      }
                    else
                      {
                        t = g_60;
                        t = dynrule_targs_1_0(x_22, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_22 (ATerm t)
{
  ATerm r_84 = NULL;
  ATerm i_60 = t;
  int j_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_84 = ATgetArgument(t, 0);
          {
            ATerm o_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_60);
      t = r_84;
    }
  else
    {
      t = i_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_84;
    }
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = map_1_0(y_22, t);
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm w_84 = NULL;
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_84 = ATgetArgument(t, 0);
          {
            ATerm r_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_60);
      t = w_84;
    }
  else
    {
      t = p_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_84;
    }
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm a_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_85);
  return(t);
}
static ATerm f_23 (ATerm t)
{
  ATerm s_60 = t;
  int t_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_60);
    }
  else
    {
      t = s_60;
      {
        ATerm u_60 = t;
        int v_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_60);
          }
        else
          {
            t = u_60;
            {
              ATerm w_60 = t;
              int y_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_85 = ATgetArgument(t, 0);
                      d_85 = ATgetArgument(t, 1);
                      e_85 = ATgetArgument(t, 2);
                      f_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_85;
                  t = map_1_0(n_23, t);
                  LocalPopChoice(y_60);
                }
              else
                {
                  t = w_60;
                  {
                    ATerm z_60 = t;
                    int a_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_61);
                      }
                    else
                      {
                        t = z_60;
                        t = dynrule_targs_1_0(o_23, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm m_85 = NULL;
  ATerm b_61 = t;
  int c_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_85 = ATgetArgument(t, 0);
          {
            ATerm d_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_61);
      t = m_85;
    }
  else
    {
      t = b_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_85;
    }
  return(t);
}
static ATerm o_23 (ATerm t)
{
  t = map_1_0(p_23, t);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  ATerm r_85 = NULL;
  ATerm e_61 = t;
  int f_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_85 = ATgetArgument(t, 0);
          {
            ATerm g_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_61);
      t = r_85;
    }
  else
    {
      t = e_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_85;
    }
  return(t);
}
static ATerm r_23 (ATerm t)
{
  ATerm v_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_85);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  ATerm k_61 = t;
  int n_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_61);
    }
  else
    {
      t = k_61;
      {
        ATerm o_61 = t;
        int p_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_61);
          }
        else
          {
            t = o_61;
            {
              ATerm q_61 = t;
              int r_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_85 = ATgetArgument(t, 0);
                      y_85 = ATgetArgument(t, 1);
                      z_85 = ATgetArgument(t, 2);
                      a_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_85;
                  t = map_1_0(x_23, t);
                  LocalPopChoice(r_61);
                }
              else
                {
                  t = q_61;
                  {
                    ATerm s_61 = t;
                    int x_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_61);
                      }
                    else
                      {
                        t = s_61;
                        t = dynrule_targs_1_0(y_23, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_23 (ATerm t)
{
  ATerm h_86 = NULL;
  ATerm y_61 = t;
  int a_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_86 = ATgetArgument(t, 0);
          {
            ATerm b_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_62);
      t = h_86;
    }
  else
    {
      t = y_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_86;
    }
  return(t);
}
static ATerm y_23 (ATerm t)
{
  t = map_1_0(z_23, t);
  return(t);
}
static ATerm z_23 (ATerm t)
{
  ATerm m_86 = NULL;
  ATerm c_62 = t;
  int h_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_86 = ATgetArgument(t, 0);
          {
            ATerm i_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_62);
      t = m_86;
    }
  else
    {
      t = c_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_86;
    }
  return(t);
}
static ATerm a_24 (ATerm t)
{
  ATerm q_86 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_86);
  return(t);
}
static ATerm d_24 (ATerm t)
{
  ATerm l_62 = t;
  int m_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_62);
    }
  else
    {
      t = l_62;
      {
        ATerm o_62 = t;
        int r_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_62);
          }
        else
          {
            t = o_62;
            {
              ATerm s_62 = t;
              int u_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_86 = ATgetArgument(t, 0);
                      t_86 = ATgetArgument(t, 1);
                      u_86 = ATgetArgument(t, 2);
                      v_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_86;
                  t = map_1_0(f_24, t);
                  LocalPopChoice(u_62);
                }
              else
                {
                  t = s_62;
                  {
                    ATerm y_62 = t;
                    int z_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_62);
                      }
                    else
                      {
                        t = y_62;
                        t = dynrule_targs_1_0(g_24, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_24 (ATerm t)
{
  ATerm c_87 = NULL;
  ATerm a_63 = t;
  int b_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_87 = ATgetArgument(t, 0);
          {
            ATerm c_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_63);
      t = c_87;
    }
  else
    {
      t = a_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_87;
    }
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = map_1_0(h_24, t);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  ATerm h_87 = NULL;
  ATerm d_63 = t;
  int e_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_87 = ATgetArgument(t, 0);
          {
            ATerm f_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_63);
      t = h_87;
    }
  else
    {
      t = d_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_87;
    }
  return(t);
}
static ATerm i_24 (ATerm t)
{
  ATerm l_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_87);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  ATerm g_63 = t;
  int h_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_63);
    }
  else
    {
      t = g_63;
      {
        ATerm i_63 = t;
        int j_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_63);
          }
        else
          {
            t = i_63;
            {
              ATerm k_63 = t;
              int l_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_87 = ATgetArgument(t, 0);
                      o_87 = ATgetArgument(t, 1);
                      p_87 = ATgetArgument(t, 2);
                      q_87 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_87;
                  t = map_1_0(o_24, t);
                  LocalPopChoice(l_63);
                }
              else
                {
                  t = k_63;
                  {
                    ATerm m_63 = t;
                    int n_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_63);
                      }
                    else
                      {
                        t = m_63;
                        t = dynrule_targs_1_0(p_24, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_24 (ATerm t)
{
  ATerm x_87 = NULL;
  ATerm o_63 = t;
  int p_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_87 = ATgetArgument(t, 0);
          {
            ATerm q_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_63);
      t = x_87;
    }
  else
    {
      t = o_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_87;
    }
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = map_1_0(r_24, t);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  ATerm c_88 = NULL;
  ATerm r_63 = t;
  int s_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_88 = ATgetArgument(t, 0);
          {
            ATerm t_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_63);
      t = c_88;
    }
  else
    {
      t = r_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_88;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_83 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_83 = ATgetArgument(t, 0);
      t = q_83;
      t = free_vars_3_0(k_22, s_22, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_83 = ATgetArgument(t, 0);
          t = q_83;
          t = free_vars_3_0(e_23, f_23, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_83 = ATgetArgument(t, 0);
              t = q_83;
              t = free_vars_3_0(r_23, s_23, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_83 = ATgetArgument(t, 0);
                  t = q_83;
                  t = free_vars_3_0(a_24, d_24, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      q_83 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_83;
                  t = free_vars_3_0(i_24, m_24, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm r_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_88);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  ATerm u_63 = t;
  int v_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_63);
    }
  else
    {
      t = u_63;
      {
        ATerm w_63 = t;
        int x_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_63);
          }
        else
          {
            t = w_63;
            {
              ATerm y_63 = t;
              int z_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_88 = ATgetArgument(t, 0);
                      u_88 = ATgetArgument(t, 1);
                      v_88 = ATgetArgument(t, 2);
                      w_88 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_88;
                  t = map_1_0(v_24, t);
                  LocalPopChoice(z_63);
                }
              else
                {
                  t = y_63;
                  {
                    ATerm a_64 = t;
                    int b_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_64);
                      }
                    else
                      {
                        t = a_64;
                        t = dynrule_targs_1_0(w_24, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm d_89 = NULL;
  ATerm c_64 = t;
  int d_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_89 = ATgetArgument(t, 0);
          {
            ATerm e_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_64);
      t = d_89;
    }
  else
    {
      t = c_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_89;
    }
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = map_1_0(x_24, t);
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm i_89 = NULL;
  ATerm f_64 = t;
  int g_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_89 = ATgetArgument(t, 0);
          {
            ATerm h_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_64);
      t = i_89;
    }
  else
    {
      t = f_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_89;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm k_88 = NULL,o_88 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      o_88 = ATgetArgument(t, 0);
      t = o_88;
      if(match_cons(t, sym_Rule_3))
        {
          k_88 = ATgetArgument(t, 0);
          {
            ATerm i_64 = ATgetArgument(t, 1);
          }
          {
            ATerm j_64 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_88;
      t = free_vars_3_0(t_24, u_24, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          o_88 = ATgetArgument(t, 0);
          {
            ATerm k_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = o_88;
    }
  return(t);
}
static ATerm w_7 (ATerm l_102 (ATerm), ATerm e_26, ATerm d_26, ATerm t)
{
  static ATerm b_90 (ATerm t);
  static ATerm b_90 (ATerm t)
  {
    ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
    w_89 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_89 = ATgetFirst((ATermList) t);
            y_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_64 = t;
          int m_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_89;
              {
                static ATerm d_25 (ATerm t);
                static ATerm d_25 (ATerm t)
                {
                  t = d_26;
                  return(t);
                }
                t = x_7(l_102, d_25, x_89, y_89, t);
              }
              t = b_90(t);
              LocalPopChoice(m_64);
            }
          else
            {
              t = l_64;
              {
                ATerm m_40 = NULL,p_40 = NULL,y_43 = NULL;
                t = SSLgetAnnotations(w_89);
                m_40 = t;
                t = y_89;
                t = b_90(t);
                p_40 = t;
                t = (ATerm) ATinsert(CheckATermList(p_40), x_89);
                y_43 = t;
                t = SSLsetAnnotations(y_43, m_40);
              }
            }
        }
      }
    return(t);
  }
  t = e_26;
  t = b_90(t);
  return(t);
}
ATerm foldr_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL;
  e_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_90;
      t = g_105(t);
    }
  else
    {
      ATerm j_90 = NULL,k_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_90 = ATgetFirst((ATermList) t);
          g_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_90;
      t = i_105(t);
      j_90 = t;
      t = g_90;
      t = foldr_3_0(g_105, h_105, i_105, t);
      k_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_90, k_90);
      t = h_105(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  static ATerm j_91 (ATerm t);
  static ATerm j_91 (ATerm t)
  {
    ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL;
    g_91 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_91 = ATgetFirst((ATermList) t);
        i_91 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_64 = t;
      int o_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_41 = NULL,k_41 = NULL,q_44 = NULL;
          t = SSLgetAnnotations(g_91);
          b_41 = t;
          t = h_91;
          t = g_103(t);
          k_41 = t;
          t = (ATerm) ATinsert(CheckATermList(i_91), k_41);
          q_44 = t;
          t = SSLsetAnnotations(q_44, b_41);
          LocalPopChoice(o_64);
        }
      else
        {
          t = n_64;
          {
            ATerm u_41 = NULL,a_42 = NULL,r_44 = NULL;
            t = SSLgetAnnotations(g_91);
            u_41 = t;
            t = i_91;
            t = j_91(t);
            a_42 = t;
            t = (ATerm) ATinsert(CheckATermList(a_42), h_91);
            r_44 = t;
            t = SSLsetAnnotations(r_44, u_41);
          }
        }
    }
    return(t);
  }
  t = j_91(t);
  return(t);
}
static ATerm x_7 (ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm i_26, ATerm h_26, ATerm t)
{
  t = p_102(t);
  {
    static ATerm e_25 (ATerm t);
    static ATerm e_25 (ATerm t)
    {
      ATerm m_91 = NULL;
      m_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_26, m_91);
      t = o_102(t);
      return(t);
    }
    t = fetch_1_0(e_25, t);
  }
  t = h_26;
  return(t);
}
static ATerm y_7 (ATerm g_102 (ATerm), ATerm c_26, ATerm b_26, ATerm t)
{
  static ATerm c_92 (ATerm t);
  static ATerm c_92 (ATerm t)
  {
    ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
    x_91 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_91;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_91 = ATgetFirst((ATermList) t);
            z_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_64 = t;
          int q_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_91;
              {
                static ATerm j_25 (ATerm t);
                static ATerm j_25 (ATerm t)
                {
                  t = b_26;
                  return(t);
                }
                t = x_7(g_102, j_25, y_91, z_91, t);
              }
              t = c_92(t);
              LocalPopChoice(q_64);
            }
          else
            {
              t = p_64;
              {
                ATerm p_42 = NULL,c_43 = NULL,w_47 = NULL;
                t = SSLgetAnnotations(x_91);
                p_42 = t;
                t = z_91;
                t = c_92(t);
                c_43 = t;
                t = (ATerm) ATinsert(CheckATermList(c_43), y_91);
                w_47 = t;
                t = SSLsetAnnotations(w_47, p_42);
              }
            }
        }
      }
    return(t);
  }
  t = c_26;
  t = c_92(t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_103 (ATerm), ATerm t)
{
  static ATerm y_92 (ATerm t);
  static ATerm y_92 (ATerm t)
  {
    ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
    x_92 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_92 = ATgetFirst((ATermList) t);
        w_92 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_43 = NULL,o_43 = NULL,a_48 = NULL;
          t = SSLgetAnnotations(x_92);
          l_43 = t;
          t = w_92;
          t = y_92(t);
          o_43 = t;
          t = (ATerm) ATinsert(CheckATermList(o_43), v_92);
          a_48 = t;
          t = SSLsetAnnotations(a_48, l_43);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_92;
        t = n_103(t);
      }
    return(t);
  }
  t = y_92(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
  f_92 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_92;
    }
  else
    {
      static ATerm k_25 (ATerm t);
      static ATerm k_25 (ATerm t)
      {
        t = not_null(h_92);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_92 = ATgetFirst((ATermList) t);
          if(((h_92 != NULL) && (h_92 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_92;
      t = at_end_1_0(k_25, t);
    }
  return(t);
}
static ATerm k_93 (ATerm c_93, ATerm t)
{
  ATerm d_93 = NULL;
  t = SSL_explode_term(c_93);
  if(match_cons(t, sym__2))
    {
      ATerm r_64 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_64) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_93;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL;
  h_93 = t;
  if(match_cons(t, sym__2))
    {
      f_93 = ATgetArgument(t, 0);
      g_93 = ATgetArgument(t, 1);
      {
        ATerm s_64 = t;
        int t_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_25 (ATerm t);
            static ATerm n_25 (ATerm t)
            {
              t = g_93;
              return(t);
            }
            t = f_93;
            t = at_end_1_0(n_25, t);
            LocalPopChoice(t_64);
          }
        else
          {
            t = s_64;
            t = k_93(h_93, t);
          }
      }
    }
  else
    {
      t = k_93(h_93, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm t)
{
  static ATerm r_93 (ATerm t);
  static ATerm r_93 (ATerm t)
  {
    ATerm u_64 = t;
    int v_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_117(t);
        LocalPopChoice(v_64);
      }
    else
      {
        t = u_64;
        {
          ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,c_48 = NULL;
          t = v_117(t);
          q_93 = t;
          if(match_cons(t, sym__2))
            {
              m_93 = ATgetArgument(t, 0);
              n_93 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_93);
          l_93 = t;
          t = m_93;
          t = x_117(t);
          o_93 = t;
          t = n_93;
          t = r_93(t);
          p_93 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_93, p_93);
          c_48 = t;
          t = SSLsetAnnotations(c_48, l_93);
          t = w_117(t);
        }
      }
    return(t);
  }
  t = r_93(t);
  return(t);
}
static ATerm o_25 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_64 = ATgetArgument(t, 0);
      if(((ATgetType(w_64) != AT_LIST) || !(ATisEmpty(w_64))))
        _fail(t);
      {
        ATerm x_64 = ATgetArgument(t, 1);
        if(((ATgetType(x_64) != AT_LIST) || !(ATisEmpty(x_64))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_25 (ATerm t)
{
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_64 = ATgetArgument(t, 0);
      if(((ATgetType(y_64) == AT_LIST) && !(ATisEmpty(y_64))))
        {
          y_93 = ATgetFirst((ATermList) y_64);
          z_93 = (ATerm) ATgetNext((ATermList) y_64);
        }
      else
        _fail(t);
      {
        ATerm z_64 = ATgetArgument(t, 1);
        if(((ATgetType(z_64) == AT_LIST) && !(ATisEmpty(z_64))))
          {
            a_94 = ATgetFirst((ATermList) z_64);
            b_94 = (ATerm) ATgetNext((ATermList) z_64);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_93, a_94), (ATerm) ATmakeAppl(sym__2, z_93, b_94));
  return(t);
}
static ATerm r_25 (ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL;
  if(match_cons(t, sym__2))
    {
      c_94 = ATgetArgument(t, 0);
      d_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_94), c_94);
  return(t);
}
static ATerm d_8 (ATerm d_758, ATerm i_758, ATerm v_75, ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL;
  t = SSL_explode_term(i_758);
  if(match_cons(t, sym__2))
    {
      t_93 = ATgetArgument(t, 0);
      v_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_758);
  if(match_cons(t, sym__2))
    {
      if((t_93 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_93, v_93);
  t = genzip_4_0(o_25, p_25, r_25, _id, t);
  w_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_93, v_75);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm t)
{
  static ATerm f_94 (ATerm t);
  static ATerm f_94 (ATerm t)
  {
    ATerm a_65 = t;
    int b_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_115(t);
        LocalPopChoice(b_65);
      }
    else
      {
        t = a_65;
        t = t_115(t);
        t = f_94(t);
      }
    return(t);
  }
  t = f_94(t);
  return(t);
}
ATerm for_3_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t)
{
  t = v_115(t);
  t = while_not_2_0(w_115, x_115, t);
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm m_94 = NULL;
  m_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_94);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,f_48 = NULL;
  q_94 = t;
  if(match_cons(t, sym__2))
    {
      o_94 = ATgetArgument(t, 0);
      p_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_94);
  n_94 = t;
  t = p_94;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_94, p_94);
  f_48 = t;
  t = SSLsetAnnotations(f_48, n_94);
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL;
  j_95 = t;
  if(match_cons(t, sym__2))
    {
      k_95 = ATgetArgument(t, 0);
      l_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_95 = ATgetFirst((ATermList) t);
      n_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_65 = t;
        int d_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_95(k_95, l_95, j_95, t);
            LocalPopChoice(d_65);
          }
        else
          {
            t = c_65;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_95), m_95), n_95);
          }
      }
    }
  else
    {
      t = x_95(k_95, l_95, j_95, t);
    }
  return(t);
}
static ATerm x_95 (ATerm r_94, ATerm s_94, ATerm t_94, ATerm t)
{
  ATerm u_94 = NULL,x_94 = NULL,g_48 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
  t = SSLgetAnnotations(t_94);
  u_94 = t;
  t = s_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_95 = ATgetFirst((ATermList) t);
      d_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_95;
  if(match_cons(t, sym__2))
    {
      b_95 = ATgetArgument(t, 0);
      c_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_65 = t;
    int f_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_95;
        if((b_95 != t))
          {
            _fail(t);
          }
        t = d_95;
        LocalPopChoice(f_65);
      }
    else
      {
        t = e_65;
        t = s_94;
        t = d_8(b_95, c_95, d_95, t);
      }
  }
  x_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_94, x_94);
  g_48 = t;
  t = SSLsetAnnotations(g_48, u_94);
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm w_95 = NULL;
  if(match_cons(t, sym__2))
    {
      w_95 = ATgetArgument(t, 0);
      if((w_95 != ATgetArgument(t, 1)))
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
  ATerm g_65 = t;
  int h_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(v_25, g_26, j_26, t);
      LocalPopChoice(h_65);
    }
  else
    {
      t = g_65;
      {
        ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL;
        r_95 = t;
        if(match_cons(t, sym__2))
          {
            s_95 = ATgetArgument(t, 0);
            t_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_95;
        t = y_7(k_26, s_95, t_95, t);
      }
    }
  return(t);
}
static ATerm r_26 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_26 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL;
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(v_26, h_44, i_44, t);
  return(t);
}
static ATerm v_26 (ATerm t)
{
  ATerm j_44 = NULL;
  if(match_cons(t, sym__2))
    {
      j_44 = ATgetArgument(t, 0);
      if((j_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_26 (ATerm t)
{
  ATerm u_44 = NULL,e_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_44 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(b_27, u_44, e_45, t);
  return(t);
}
static ATerm b_27 (ATerm t)
{
  ATerm i_45 = NULL;
  if(match_cons(t, sym__2))
    {
      i_45 = ATgetArgument(t, 0);
      if((i_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm l_96 (ATerm t);
  static ATerm l_96 (ATerm t)
  {
    ATerm i_65 = t;
    int j_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_130(t);
        LocalPopChoice(j_65);
      }
    else
      {
        t = i_65;
        {
          ATerm k_65 = t;
          int l_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_95 = NULL,a_96 = NULL,t_43 = NULL,v_43 = NULL;
              z_95 = t;
              t = f_130(t);
              a_96 = t;
              t = z_95;
              {
                static ATerm l_26 (ATerm t);
                static ATerm l_26 (ATerm t)
                {
                  ATerm c_96 = NULL;
                  t = l_96(t);
                  c_96 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_96, a_96);
                  t = diff_0_0(t);
                  return(t);
                }
                t = g_130(l_26, l_96, r_26, t);
              }
              v_43 = t;
              t = SSL_explode_term(v_43);
              if(match_cons(t, sym__2))
                {
                  ATerm m_65 = ATgetArgument(t, 0);
                  t_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_43;
              t = foldr_3_0(t_26, u_26, _id, t);
              LocalPopChoice(l_65);
            }
          else
            {
              t = k_65;
              {
                ATerm n_44 = NULL,p_44 = NULL;
                p_44 = t;
                t = SSL_explode_term(p_44);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_65 = ATgetArgument(t, 0);
                    n_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_44;
                t = foldr_3_0(y_26, z_26, l_96, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_96(t);
  return(t);
}
ATerm topdown_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  static ATerm d_27 (ATerm t);
  static ATerm d_27 (ATerm t)
  {
    t = topdown_1_0(a_107, t);
    return(t);
  }
  t = a_107(t);
  t = SRTS_all(d_27, t);
  return(t);
}
static ATerm f_8 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm m_96 = NULL;
  t = SSL_hashtable_remove(u_37, t_37);
  m_96 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_96);
  return(t);
}
static ATerm g_8 (ATerm b_33, ATerm c_33, ATerm t)
{
  ATerm n_96 = NULL,o_96 = NULL;
  o_96 = t;
  {
    ATerm o_65 = t;
    int p_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = j_8(b_33, c_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_65 = ATgetFirst((ATermList) t);
            n_96 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_65);
        {
          ATerm p_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_33, c_33, n_96);
          t = lookup_table_0_1(b_33, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_8(c_33, n_96, p_96, t);
          t = (ATerm) ATmakeAppl(sym__3, b_33, c_33, n_96);
        }
      }
    else
      {
        t = o_65;
        {
          ATerm r_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
          t = lookup_table_0_1(b_33, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_8(c_33, r_96, t);
          t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        }
      }
  }
  t = o_96;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL;
  w_96 = t;
  t = n_106(t);
  v_96 = t;
  {
    ATerm r_65 = t;
    int s_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_97 = NULL;
        t = term_l_58;
        a_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_96, term_l_58);
        t = j_8(v_96, a_97, t);
        {
          ATerm t_65 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_65;
            }
        }
        LocalPopChoice(s_65);
      }
    else
      {
        t = r_65;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_96 = ATgetFirst((ATermList) t);
      t_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_96, term_l_58, t_96);
  t = lookup_table_0_1(v_96, t);
  z_96 = t;
  t = term_l_58;
  x_96 = t;
  t = z_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(x_96, t_96, y_96, t);
  t = u_96;
  {
    static ATerm e_27 (ATerm t);
    static ATerm e_27 (ATerm t)
    {
      ATerm b_97 = NULL;
      b_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_96, b_97);
      t = g_8(v_96, b_97, t);
      return(t);
    }
    t = map_1_0(e_27, t);
  }
  t = w_96;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm t)
{
  ATerm u_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_121(t);
      t = b_121(t);
      LocalPopChoice(v_65);
    }
  else
    {
      t = u_65;
      t = b_121(t);
      _fail(t);
    }
  return(t);
}
static ATerm i_8 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm c_97 = NULL;
  t = SSL_hashtable_put(q_37, o_37, p_37);
  c_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_97);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm d_97 = NULL;
  t = SSL_hashtable_create(w_37, x_37);
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_97);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,i_97 = NULL,j_97 = NULL;
  e_97 = t;
  t = term_w_65;
  i_97 = t;
  t = term_x_65;
  j_97 = t;
  t = e_97;
  t = new_hashtable_0_2(i_97, j_97, t);
  f_97 = t;
  t = e_97;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(e_97, f_97, g_97, t);
  t = e_97;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm k_97 = NULL;
  t = SSL_table_hashtable();
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_97);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_34, ATerm t)
{
  ATerm t_97 = NULL;
  t = table_hashtable_0_0(t);
  t_97 = t;
  {
    ATerm y_65 = t;
    int z_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_45 = NULL;
        t = t_97;
        if(match_cons(t, sym_Hashtable_1))
          {
            k_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_8(i_34, k_45, t);
        LocalPopChoice(z_65);
      }
    else
      {
        t = y_65;
        {
          ATerm c_46 = NULL;
          t = i_34;
          t = table_create_0_0(t);
          t = t_97;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_8(i_34, c_46, t);
        }
      }
  }
  return(t);
}
static ATerm h_8 (ATerm r_37, ATerm s_37, ATerm t)
{
  t = SSL_hashtable_get(s_37, r_37);
  return(t);
}
static ATerm j_8 (ATerm p_34, ATerm q_34, ATerm t)
{
  ATerm w_97 = NULL;
  t = lookup_table_0_1(p_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(q_34, w_97, t);
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL;
  a_98 = t;
  t = m_106(t);
  z_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_97, term_l_58);
  {
    ATerm a_66 = t;
    int b_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_98 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_66 = ATgetArgument(t, 0);
            ATerm d_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_58;
        j_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_97, term_l_58);
        t = j_8(z_97, j_98, t);
        LocalPopChoice(b_66);
      }
    else
      {
        t = a_66;
        t = (ATerm) ATempty;
      }
  }
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_97, term_l_58, (ATerm) ATinsert(CheckATermList(b_98), (ATerm) ATempty));
  t = lookup_table_0_1(z_97, t);
  f_98 = t;
  t = term_l_58;
  c_98 = t;
  t = (ATerm) ATinsert(CheckATermList(b_98), (ATerm) ATempty);
  d_98 = t;
  t = f_98;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(c_98, d_98, e_98, t);
  t = a_98;
  return(t);
}
ATerm scope_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t)
{
  static ATerm g_27 (ATerm t);
  static ATerm g_27 (ATerm t)
  {
    t = end_scope_1_0(o_106, t);
    return(t);
  }
  t = begin_scope_1_0(o_106, t);
  t = restore_always_2_0(p_106, g_27, t);
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  t = scope_2_0(l_27, m_27, t);
  return(t);
}
static ATerm l_27 (ATerm t)
{
  t = term_v_49;
  return(t);
}
static ATerm m_27 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL;
  t = topdown_1_0(p_27, t);
  u_98 = t;
  t = free_vars_3_0(t_27, u_27, tboundin_3_0, t);
  t_98 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_98, u_98);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm e_66 = ATgetArgument(t, 0);
      s_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_98;
  {
    ATerm f_66 = t;
    int g_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(g_66);
      }
    else
      {
        t = f_66;
        {
          ATerm h_66 = t;
          int i_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(i_66);
            }
          else
            {
              t = h_66;
              {
                ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    a_100 = ATgetArgument(t, 0);
                    b_100 = ATgetArgument(t, 1);
                    c_100 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = s_98;
                t = e_7(a_100, b_100, c_100, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_27 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  c_99 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_99 = ATgetArgument(t, 0);
      {
        ATerm j_66 = t;
        int k_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_46 = NULL,j_46 = NULL,n_48 = NULL;
            t = SSLgetAnnotations(c_99);
            h_46 = t;
            t = b_99;
            if(match_cons(t, sym_ListVar_1))
              {
                j_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, j_46);
            n_48 = t;
            t = SSLsetAnnotations(n_48, h_46);
            LocalPopChoice(k_66);
          }
        else
          {
            t = j_66;
            t = c_99;
          }
      }
    }
  else
    {
      t = c_99;
    }
  return(t);
}
static ATerm t_27 (ATerm t)
{
  ATerm f_99 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_99);
  return(t);
}
static ATerm u_27 (ATerm t)
{
  ATerm l_66 = t;
  int m_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_66);
    }
  else
    {
      t = l_66;
      {
        ATerm n_66 = t;
        int o_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_66);
          }
        else
          {
            t = n_66;
            {
              ATerm p_66 = t;
              int q_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_99 = ATgetArgument(t, 0);
                      i_99 = ATgetArgument(t, 1);
                      j_99 = ATgetArgument(t, 2);
                      k_99 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_99;
                  t = map_1_0(v_27, t);
                  LocalPopChoice(q_66);
                }
              else
                {
                  t = p_66;
                  {
                    ATerm r_66 = t;
                    int s_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_66);
                      }
                    else
                      {
                        t = r_66;
                        t = dynrule_targs_1_0(w_27, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_27 (ATerm t)
{
  ATerm r_99 = NULL;
  ATerm t_66 = t;
  int u_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_99 = ATgetArgument(t, 0);
          {
            ATerm v_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_66);
      t = r_99;
    }
  else
    {
      t = t_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_99;
    }
  return(t);
}
static ATerm w_27 (ATerm t)
{
  t = map_1_0(x_27, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm w_99 = NULL;
  ATerm w_66 = t;
  int x_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_99 = ATgetArgument(t, 0);
          {
            ATerm y_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_66);
      t = w_99;
    }
  else
    {
      t = w_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_99;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm r_98 = NULL;
  r_98 = t;
  t = scope_2_0(h_27, k_27, t);
  t = r_98;
  return(t);
}
ATerm filter_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm s_100 = NULL,t_100 = NULL,u_100 = NULL;
  s_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_100;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_100 = ATgetFirst((ATermList) t);
          u_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_66 = t;
        int a_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_46 = NULL,u_46 = NULL,v_46 = NULL,p_48 = NULL;
            t = SSLgetAnnotations(s_100);
            q_46 = t;
            t = t_100;
            t = u_119(t);
            u_46 = t;
            t = u_100;
            t = filter_1_0(u_119, t);
            v_46 = t;
            t = (ATerm) ATinsert(CheckATermList(v_46), u_46);
            p_48 = t;
            t = SSLsetAnnotations(p_48, q_46);
            LocalPopChoice(a_67);
          }
        else
          {
            t = z_66;
            t = u_100;
            t = filter_1_0(u_119, t);
          }
      }
    }
  return(t);
}
static ATerm k_8 (ATerm e_30, ATerm f_30, ATerm t)
{
  ATerm b_67 = t;
  int c_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_30, f_30);
      LocalPopChoice(c_67);
    }
  else
    {
      t = b_67;
      t = SSL_addr(e_30, f_30);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm t)
{
  ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL;
  z_100 = t;
  t = t_136(t);
  a_101 = t;
  t = term_o_29;
  b_101 = t;
  t = (ATerm) ATinsert(ATempty, a_101);
  c_101 = t;
  t = SSL_printnl(b_101, c_101);
  t = z_100;
  {
    ATerm d_67 = t;
    int e_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL,u_48 = NULL;
        t = u_136(t);
        t = z_100;
        if(match_cons(t, sym__2))
          {
            e_101 = ATgetArgument(t, 0);
            f_101 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_100);
        d_101 = t;
        t = term_f_67;
        h_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_101, term_f_67);
        t = k_8(e_101, h_101, t);
        g_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_101, f_101);
        u_48 = t;
        t = SSLsetAnnotations(u_48, d_101);
        LocalPopChoice(e_67);
      }
    else
      {
        t = d_67;
        {
          ATerm q_101 = NULL,r_101 = NULL,n_47 = NULL,r_47 = NULL,s_47 = NULL,v_48 = NULL;
          if(match_cons(t, sym__2))
            {
              q_101 = ATgetArgument(t, 0);
              r_101 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_100);
          n_47 = t;
          t = term_f_67;
          s_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_101, term_f_67);
          t = k_8(r_101, s_47, t);
          r_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_101, r_47);
          v_48 = t;
          t = SSLsetAnnotations(v_48, n_47);
        }
      }
  }
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = term_g_67;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  ATerm h_67 = t;
  int i_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_w_38, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATempty, term_s_35))), term_u_32)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_t_36, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_31, (ATerm) ATinsert(ATempty, term_u_32)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_p_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, term_s_35), term_u_32))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_35, (ATerm) ATinsert(ATinsert(ATempty, term_c_36), term_s_35))), term_u_32)))))));
      {
        ATerm j_67 = t;
        if((PushChoice() == 0))
          {
            ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,c_49 = NULL;
            w_101 = t;
            if(match_cons(t, sym_Strategies_1))
              {
                v_101 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_101);
            u_101 = t;
            t = v_101;
            {
              ATerm k_67 = t;
              int l_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_101;
                  LocalPopChoice(l_67);
                }
              else
                {
                  t = k_67;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_101;
                }
            }
            t = (ATerm) ATmakeAppl(sym_Strategies_1, v_101);
            c_49 = t;
            t = SSLsetAnnotations(c_49, u_101);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_67;
          }
      }
      LocalPopChoice(i_67);
    }
  else
    {
      t = h_67;
      {
        ATerm y_101 = NULL,z_101 = NULL;
        t = term_o_29;
        y_101 = t;
        t = (ATerm) ATinsert(ATempty, term_h_30);
        z_101 = t;
        t = SSL_printnl(y_101, z_101);
        t = term_h_30;
        _fail(t);
      }
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(z_27, a_28, t);
  return(t);
}
ATerm debug_1_0 (ATerm o_116 (ATerm), ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL;
  a_102 = t;
  t = o_116(t);
  b_102 = t;
  t = term_o_29;
  c_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_102), b_102);
  d_102 = t;
  t = SSL_printnl(c_102, d_102);
  t = a_102;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_m_67;
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_n_67;
  return(t);
}
static ATerm k_28 (ATerm t)
{
  t = term_o_67;
  return(t);
}
ATerm test_suite_2_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t)
{
  ATerm e_102 = NULL,f_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,n_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,f_49 = NULL,e_49 = NULL;
  t = r_136(t);
  t = debug_1_0(b_28, t);
  t = term_q_67;
  t = s_136(t);
  t_102 = t;
  if(match_cons(t, sym__2))
    {
      k_102 = ATgetArgument(t, 0);
      n_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_102);
  j_102 = t;
  t = k_102;
  t = debug_1_0(i_28, t);
  q_102 = t;
  t = n_102;
  t = debug_1_0(k_28, t);
  r_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_102, r_102);
  e_49 = t;
  t = SSLsetAnnotations(e_49, j_102);
  s_102 = t;
  if(match_cons(t, sym__2))
    {
      f_102 = ATgetArgument(t, 0);
      i_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_102);
  e_102 = t;
  t = i_102;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_102, i_102);
  f_49 = t;
  t = SSLsetAnnotations(f_49, e_102);
  return(t);
}
static ATerm m_28 (ATerm t)
{
  t = term_r_67;
  return(t);
}
static ATerm w_28 (ATerm t)
{
  t = test1_0_0(t);
  t = test2_0_0(t);
  t = test3_0_0(t);
  t = test4_0_0(t);
  t = test5_0_0(t);
  t = test6_0_0(t);
  t = test7_0_0(t);
  t = test8_0_0(t);
  t = test9_0_0(t);
  t = test10_0_0(t);
  t = test11_0_0(t);
  t = test12_0_0(t);
  t = test13_0_0(t);
  t = test14_0_0(t);
  return(t);
}
ATerm use_def_test_io_0_0 (ATerm t)
{
  t = test_suite_2_0(m_28, w_28, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_io_0_0(t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Overlays_1;
Symbol sym_ConstType_1;
Symbol sym_SortVar_1;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_ListTail_2;
Symbol sym_StratRule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
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
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Where_1;
Symbol sym_PrimT_3;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Some_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_SortVar_1 = ATmakeSymbol("SortVar", 1, ATfalse);
  ATprotectSymbol(sym_SortVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
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
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_p_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_m_58;
ATerm term_l_58;
ATerm term_k_58;
ATerm term_e_58;
ATerm term_d_58;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_x_44;
ATerm term_i_44;
ATerm term_b_44;
ATerm term_z_43;
ATerm term_x_43;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_e_38;
ATerm term_m_37;
ATerm term_i_37;
ATerm term_g_37;
ATerm term_e_37;
ATerm term_b_37;
ATerm term_z_36;
ATerm term_u_36;
ATerm term_a_36;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_z_34;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_c_33;
ATerm term_q_32;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_f_32;
ATerm term_b_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_w_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_v_30;
ATerm term_p_30;
ATerm term_e_30;
ATerm term_r_29;
ATerm term_l_29;
ATerm term_y_28;
ATerm term_b_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_e_27;
ATerm term_t_26;
ATerm term_n_26;
ATerm term_e_26;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_l_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_c_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14a", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("UnEscape", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("'\\'", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Char_1, term_j_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Var_1, term_h_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("cs", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Var_1, term_n_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14b", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("testing-main", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rob", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Var_1, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test14c", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Match_1, term_z_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13a", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_SortVar_1, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_VarDec_2, term_y_20, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Build_1, term_z_20);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Str_1, term_r_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13b", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_All_1, term_v_21);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_21, (ATerm)ATempty, (ATerm)ATempty, term_d_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test13c", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("helper", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, term_k_22, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Var_1, term_w_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Match_1, term_x_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Build_1, term_x_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Var_1, term_j_23);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Var_1, term_q_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Var_1, term_l_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_y_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Var_1, term_a_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Build_1, term_k_23);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_23);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Call_2, term_o_24, (ATerm) ATempty);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Build_1, term_s_23);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Match_1, term_c_24);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test10a", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Var_1, term_e_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Str_1, term_u_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Var_1, term_x_25);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test10b", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Call_2, term_m_27, (ATerm) ATempty);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Match_1, term_e_26);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_27, term_o_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_23, term_v_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Call_2, term_m_31, (ATerm) ATempty);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_LChoice_2, term_n_27, term_w_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_31, term_z_22);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_31, term_z_22);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_LChoice_2, term_n_27, term_f_32);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Var_1, term_f_33);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Match_1, term_g_33);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Str_1, term_i_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Build_1, term_g_33);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_33, term_n_27);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_App_2, term_n_27, term_g_33);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Match_1, term_l_25);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Var_1, term_c_34);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_m_34, (ATerm) ATempty);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_p_34, (ATerm) ATempty);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym__2, term_o_38, term_p_38);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_Defined_2, term_x_43, term_z_43);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_47, term_z_43);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_50, term_p_50);
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(sym__2, term_n_58, term_n_58);
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm e_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm test14_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm test13_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm test12_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm test11_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm test10_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm test9_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm test8_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm test7_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm test6_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm test5_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm test4_0_0 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm test3_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm test2_0_0 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm n_6 (ATerm o_23, ATerm n_23, ATerm p_23, ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm b_119 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm a_119 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm z_118 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm p_93 (ATerm), ATerm t);
static ATerm d_9 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm p_6 (ATerm r_65, ATerm s_65, ATerm t_65, ATerm t);
static ATerm h_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm q_6 (ATerm l_65, ATerm p_65, ATerm n_65, ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm r_6 (ATerm f_65, ATerm j_65, ATerm h_65, ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm s_6 (ATerm d_64, ATerm e_64, ATerm f_64, ATerm h_64, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm t_6 (ATerm o_62, ATerm p_62, ATerm n_62, ATerm t);
static ATerm x_11 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm u_6 (ATerm h_32, ATerm g_32, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm b_63, ATerm t);
static ATerm n_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm v_6 (ATerm r_31, ATerm s_31, ATerm t_31, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm y_6 (ATerm p_31, ATerm q_31, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm z_6 (ATerm e_31, ATerm f_31, ATerm d_31, ATerm t);
static ATerm a_7 (ATerm o_91 (ATerm), ATerm a_30, ATerm y_29, ATerm t);
static ATerm k_13 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm t);
ATerm map_1_0 (ATerm u_87 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm x_16 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm e_7 (ATerm j_87 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
ATerm foldr_3_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm e_88 (ATerm), ATerm t);
static ATerm f_7 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm g_7 (ATerm e_87 (ATerm), ATerm k_24, ATerm j_24, ATerm t);
ATerm at_end_1_0 (ATerm l_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_90 (ATerm o_90, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t);
static ATerm i_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm l_7 (ATerm q_652, ATerm v_652, ATerm l_62, ATerm t);
ATerm while_not_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t);
static ATerm n_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm s_93 (ATerm k_92, ATerm l_92, ATerm m_92, ATerm t);
static ATerm u_17 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm v_18 (ATerm t);
ATerm free_vars_3_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm x_91 (ATerm), ATerm t);
static ATerm n_7 (ATerm j_31, ATerm k_31, ATerm t);
ATerm end_scope_1_0 (ATerm l_91 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t);
static ATerm o_7 (ATerm v_32, ATerm w_32, ATerm t);
ATerm begin_scope_1_0 (ATerm k_91 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_104 (ATerm), ATerm t);
static ATerm p_7 (ATerm m_28, ATerm n_28, ATerm t);
ATerm do_test_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm t);
static ATerm j_19 (ATerm t);
static ATerm t_19 (ATerm t);
ATerm test1_0_0 (ATerm t);
ATerm debug_1_0 (ATerm k_101 (ATerm), ATerm t);
static ATerm u_19 (ATerm t);
static ATerm x_19 (ATerm t);
static ATerm y_19 (ATerm t);
ATerm test_suite_2_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm t);
static ATerm z_19 (ATerm t);
static ATerm a_20 (ATerm t);
ATerm use_def_test_io_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_f_20, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_i_20), (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATinsert(ATempty, term_m_20), term_k_20), term_o_20), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, term_m_20), term_o_20)));
      {
        ATerm p_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_20;
          }
      }
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm a_0 = NULL,c_0 = NULL;
        t = term_q_20;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        c_0 = t;
        t = SSL_printnl(a_0, c_0);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_s_20;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_v_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_x_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_z_20)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_v_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_x_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_z_20)));
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm e_0 = NULL,g_0 = NULL;
        t = term_q_20;
        e_0 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        g_0 = t;
        t = SSL_printnl(e_0, g_0);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_v_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_j_21, (ATerm) ATmakeAppl(sym_CallT_3, term_x_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_z_20))));
      {
        ATerm k_21 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_21;
          }
      }
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm i_0 = NULL,k_0 = NULL;
        t = term_q_20;
        i_0 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        k_0 = t;
        t = SSL_printnl(i_0, k_0);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test14_0_0 (ATerm t)
{
  t = do_test_2_0(e_1, l_1, t);
  t = do_test_2_0(o_1, q_1, t);
  t = do_test_2_0(u_1, b_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_l_21;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm m_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_q_21, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_u_21), term_v_21)), (ATerm) ATmakeAppl(sym_CallT_3, term_w_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_x_21))));
      {
        ATerm y_21 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_21;
          }
      }
      LocalPopChoice(o_21);
    }
  else
    {
      t = m_21;
      {
        ATerm l_0 = NULL,n_0 = NULL;
        t = term_q_20;
        l_0 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        n_0 = t;
        t = SSL_printnl(l_0, n_0);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_22;
      t = def_use_def_0_0(t);
      t = term_f_22;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm p_0 = NULL,r_0 = NULL;
        t = term_q_20;
        p_0 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        r_0 = t;
        t = SSL_printnl(p_0, r_0);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_m_22), term_d_22));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_p_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_m_22), term_d_22));
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm t_0 = NULL,v_0 = NULL;
        t = term_q_20;
        t_0 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        v_0 = t;
        t = SSL_printnl(t_0, v_0);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test13_0_0 (ATerm t)
{
  t = do_test_2_0(c_2, d_2, t);
  t = do_test_2_0(e_2, l_2, t);
  t = do_test_2_0(m_2, n_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_t_22, (ATerm) ATinsert(ATempty, term_z_22)), (ATerm)ATmakeAppl(sym_Call_2, term_t_22, (ATerm) ATinsert(ATempty, term_a_23)), term_l_22));
      {
        ATerm b_23 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_23;
          }
      }
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm x_0 = NULL,z_0 = NULL;
        t = term_q_20;
        x_0 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        z_0 = t;
        t = SSL_printnl(x_0, z_0);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(o_2, d_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_c_23;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_z_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_23), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_s_23), term_r_23)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_z_20))), term_r_23))))));
      {
        ATerm t_23 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_23;
          }
      }
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
        ATerm b_1 = NULL,c_1 = NULL;
        t = term_q_20;
        b_1 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        c_1 = t;
        t = SSL_printnl(b_1, c_1);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_u_23;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 = NULL,f_1 = NULL,d_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_x_23, (ATerm)ATinsert(ATempty, term_z_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_z_20)), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_24), term_z_20))), term_r_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_f_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_s_23), term_r_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_r_24, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_23), term_z_20)))), term_y_24))))), term_z_24))))));
      f_1 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm a_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_x_23, (ATerm)ATinsert(ATempty, term_z_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_z_20)), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_24), term_z_20))), term_r_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_f_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_s_23), term_r_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_r_24, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_23), term_z_20)))), term_y_24))))), term_z_24)))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_x_23, (ATerm)ATinsert(ATempty, term_z_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_z_20)), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_24), term_z_20))), term_r_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_f_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_s_23), term_r_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_r_24, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_23), term_z_20)))), term_y_24))))), term_z_24))))));
      d_0 = t;
      t = SSLsetAnnotations(d_0, d_1);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm h_1 = NULL,j_1 = NULL;
        t = term_q_20;
        h_1 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        j_1 = t;
        t = SSL_printnl(h_1, j_1);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(i_3, j_3, t);
  t = do_test_2_0(x_3, c_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_j_23, (ATerm)ATinsert(ATinsert(ATempty, term_e_25), term_w_22), (ATerm) ATmakeAppl(sym_Op_2, term_s_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_26), term_v_25), term_x_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_q_21, (ATerm)ATinsert(ATinsert(ATempty, term_e_25), term_w_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, term_x_21), term_x_22)))))));
      {
        ATerm f_26 = t;
        if((PushChoice() == 0))
          {
            ATerm m_1 = NULL,n_1 = NULL,p_1 = NULL,l_4 = NULL;
            p_1 = t;
            if(match_cons(t, sym_Overlays_1))
              {
                n_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_1);
            m_1 = t;
            t = n_1;
            {
              ATerm g_26 = t;
              int h_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_1;
                  LocalPopChoice(h_26);
                }
              else
                {
                  t = g_26;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_1;
                }
            }
            t = (ATerm) ATmakeAppl(sym_Overlays_1, n_1);
            l_4 = t;
            t = SSLsetAnnotations(l_4, m_1);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_26;
          }
      }
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm r_1 = NULL,s_1 = NULL;
        t = term_q_20;
        r_1 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        s_1 = t;
        t = SSL_printnl(r_1, s_1);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 = NULL,v_1 = NULL,p_4 = NULL;
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_j_23, (ATerm)ATinsert(ATinsert(ATempty, term_e_25), term_w_22), (ATerm) ATmakeAppl(sym_Op_2, term_s_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_25), term_v_25), term_x_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_q_21, (ATerm)ATinsert(ATinsert(ATempty, term_e_25), term_w_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, term_x_21), term_x_22)))))));
      v_1 = t;
      if(match_cons(t, sym_Overlays_1))
        {
          ATerm r_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_1);
      t_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_j_23, (ATerm)ATinsert(ATinsert(ATempty, term_e_25), term_w_22), (ATerm) ATmakeAppl(sym_Op_2, term_s_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_25), term_v_25), term_x_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_q_21, (ATerm)ATinsert(ATinsert(ATempty, term_e_25), term_w_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, term_x_21), term_x_22))))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_j_23, (ATerm)ATinsert(ATinsert(ATempty, term_e_25), term_w_22), (ATerm) ATmakeAppl(sym_Op_2, term_s_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_25), term_v_25), term_x_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_q_21, (ATerm)ATinsert(ATinsert(ATempty, term_e_25), term_w_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, term_x_21), term_x_22)))))));
      p_4 = t;
      t = SSLsetAnnotations(p_4, t_1);
      LocalPopChoice(q_26);
    }
  else
    {
      t = o_26;
      {
        ATerm w_1 = NULL,x_1 = NULL;
        t = term_q_20;
        w_1 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        x_1 = t;
        t = SSL_printnl(w_1, x_1);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(e_4, f_4, t);
  t = do_test_2_0(g_4, h_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_t_26;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm v_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22)), (ATerm)ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_e_26), term_l_25)), term_w_27)));
      {
        ATerm a_28 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_28;
          }
      }
      LocalPopChoice(x_26);
    }
  else
    {
      t = v_26;
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = term_q_20;
        y_1 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        z_1 = t;
        t = SSL_printnl(y_1, z_1);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm c_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22)), (ATerm)ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_e_26), term_l_25)), term_l_22)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22)), (ATerm)ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_e_26), term_l_25)), term_l_22)));
      LocalPopChoice(x_28);
    }
  else
    {
      t = c_28;
      {
        ATerm a_2 = NULL,f_2 = NULL;
        t = term_q_20;
        a_2 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        f_2 = t;
        t = SSL_printnl(a_2, f_2);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(i_4, j_4, t);
  t = do_test_2_0(k_4, m_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm z_28 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22)), (ATerm)ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_e_26), term_l_25)), term_w_27));
      {
        ATerm k_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_29;
          }
      }
      LocalPopChoice(f_29);
    }
  else
    {
      t = z_28;
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = term_q_20;
        g_2 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        h_2 = t;
        t = SSL_printnl(g_2, h_2);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_l_29;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm n_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22)), (ATerm)ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_e_26), term_l_25)), term_l_22));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22)), (ATerm)ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_e_26), term_l_25)), term_l_22));
      LocalPopChoice(p_29);
    }
  else
    {
      t = n_29;
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_q_20;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(n_4, o_4, t);
  t = do_test_2_0(q_4, r_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_r_29;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATempty, term_l_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATempty, term_x_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATempty, term_x_22))))));
      {
        ATerm d_30 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_30;
          }
      }
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm k_2 = NULL,p_2 = NULL;
        t = term_q_20;
        k_2 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        p_2 = t;
        t = SSL_printnl(k_2, p_2);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATempty, term_x_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATempty, term_x_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22)))));
      {
        ATerm o_30 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_30;
          }
      }
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      {
        ATerm q_2 = NULL,r_2 = NULL;
        t = term_q_20;
        q_2 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        r_2 = t;
        t = SSL_printnl(q_2, r_2);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_p_30;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATempty, term_x_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATempty, term_x_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATempty, term_x_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATempty, term_x_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))))));
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      {
        ATerm s_2 = NULL,t_2 = NULL;
        t = term_q_20;
        s_2 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        t_2 = t;
        t = SSL_printnl(s_2, t_2);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(s_4, x_4, t);
  t = do_test_2_0(y_4, z_4, t);
  t = do_test_2_0(a_5, g_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_v_30;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm a_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_z_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATempty, term_x_22)))));
      {
        ATerm a_32 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_32;
          }
      }
      LocalPopChoice(i_31);
    }
  else
    {
      t = a_31;
      {
        ATerm u_2 = NULL,v_2 = NULL;
        t = term_q_20;
        u_2 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        v_2 = t;
        t = SSL_printnl(u_2, v_2);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_b_32;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_i_32, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATempty, term_x_22)))));
      {
        ATerm j_32 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_32;
          }
      }
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      {
        ATerm w_2 = NULL,x_2 = NULL;
        t = term_q_20;
        w_2 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        x_2 = t;
        t = SSL_printnl(w_2, x_2);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(h_5, i_5, t);
  t = do_test_2_0(j_5, k_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATempty, term_x_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATempty, term_x_22)))));
      {
        ATerm p_32 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_32;
          }
      }
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      {
        ATerm y_2 = NULL,z_2 = NULL;
        t = term_q_20;
        y_2 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        z_2 = t;
        t = SSL_printnl(y_2, z_2);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_q_32;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATempty, term_x_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22)))));
      {
        ATerm b_33 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_33;
          }
      }
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm a_3 = NULL,b_3 = NULL;
        t = term_q_20;
        a_3 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        b_3 = t;
        t = SSL_printnl(a_3, b_3);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(l_5, q_5, t);
  t = do_test_2_0(r_5, s_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_c_33;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_h_33, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_f_33), term_l_33))), term_j_33)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_h_33, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_f_33), term_l_33))), term_j_33)))));
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      {
        ATerm c_3 = NULL,e_3 = NULL;
        t = term_q_20;
        c_3 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        e_3 = t;
        t = SSL_printnl(c_3, e_3);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_m_33;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_h_33, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_33), term_j_33)))));
      {
        ATerm q_33 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_33;
          }
      }
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
        ATerm f_3 = NULL,g_3 = NULL;
        t = term_q_20;
        f_3 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        g_3 = t;
        t = SSL_printnl(f_3, g_3);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_r_33;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_f_33), term_l_33))), term_j_33))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_f_33), term_l_33))), term_j_33))));
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm h_3 = NULL,k_3 = NULL;
        t = term_q_20;
        h_3 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        k_3 = t;
        t = SSL_printnl(h_3, k_3);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(t_5, v_5, t);
  t = do_test_2_0(h_6, m_6, t);
  t = do_test_2_0(b_7, c_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_u_33;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_e_25), (ATerm) ATmakeAppl(sym_Seq_2, term_x_33, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATempty, term_l_25))), term_x_22)))))));
      {
        ATerm y_33 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_33;
          }
      }
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      {
        ATerm l_3 = NULL,m_3 = NULL;
        t = term_q_20;
        l_3 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        m_3 = t;
        t = SSL_printnl(l_3, m_3);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_z_33;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_e_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, term_d_34), term_x_22))), term_l_25))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_e_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, term_d_34), term_x_22))), term_l_25))))));
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm n_3 = NULL,o_3 = NULL;
        t = term_q_20;
        n_3 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        o_3 = t;
        t = SSL_printnl(n_3, o_3);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(d_7, j_7, t);
  t = do_test_2_0(k_7, u_7, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_e_34;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATempty, term_l_25))), term_x_22)))));
      {
        ATerm i_34 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_34;
          }
      }
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm t_3 = NULL,u_3 = NULL;
        t = term_q_20;
        t_3 = t;
        t = (ATerm) ATinsert(ATempty, term_r_20);
        u_3 = t;
        t = SSL_printnl(t_3, u_3);
        t = term_r_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_j_34;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, term_d_34), term_x_22))), term_l_25)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, term_d_34), term_x_22))), term_l_25)))));
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      {
        ATerm v_3 = NULL,w_3 = NULL;
        t = term_q_20;
        v_3 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        w_3 = t;
        t = SSL_printnl(v_3, w_3);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(v_7, w_7, t);
  t = do_test_2_0(x_7, y_7, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm n_6 (ATerm o_23, ATerm n_23, ATerm p_23, ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL;
  y_3 = t;
  t = (ATerm) ATempty;
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_34, o_23);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_34, o_23));
  t = a_7(z_7, b_4, d_4, t);
  t = (ATerm) ATempty;
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_34, o_23);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_34, o_23));
  t = a_7(a_8, z_3, a_4, t);
  t = p_23;
  t = use_vars_0_0(t);
  t = y_3;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,w_6 = NULL,x_6 = NULL,h_7 = NULL,i_7 = NULL;
  j_6 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
      w_6 = ATgetArgument(t, 2);
      e_6 = ATgetArgument(t, 3);
      t = e_6;
      if(match_cons(t, sym_StratRule_3))
        {
          f_6 = ATgetArgument(t, 0);
          g_6 = ATgetArgument(t, 1);
          i_6 = ATgetArgument(t, 2);
          {
            ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,f_8 = NULL;
            t = (ATerm) ATempty;
            d_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_34, k_6);
            f_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_34, k_6));
            t = a_7(e_8, d_8, f_8, t);
            t = (ATerm) ATempty;
            b_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_34, k_6);
            c_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_34, k_6));
            t = a_7(g_8, b_8, c_8, t);
            t = (ATerm) ATmakeAppl(sym__3, f_6, g_6, i_6);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, k_6, l_6, w_6, (ATerm) ATmakeAppl(sym_StratRule_3, f_6, g_6, i_6));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              f_6 = ATgetArgument(t, 0);
              g_6 = ATgetArgument(t, 1);
              i_6 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = j_6;
          {
            ATerm v_34 = t;
            int w_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
                t = (ATerm) ATempty;
                r_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_34, k_6);
                s_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_34, k_6));
                t = a_7(h_8, r_3, s_3, t);
                t = (ATerm) ATempty;
                p_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_34, k_6);
                q_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_34, k_6));
                t = a_7(i_8, p_3, q_3, t);
                t = f_6;
                t = bind_vars_0_0(t);
                LocalPopChoice(w_34);
              }
            else
              {
                t = v_34;
                {
                  ATerm a_35 = t;
                  int b_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_6;
                      t = unbound_vars_0_0(t);
                      LocalPopChoice(b_35);
                    }
                  else
                    {
                      t = a_35;
                      t = g_6;
                      t = use_vars_0_0(t);
                    }
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_RDefT_4, k_6, l_6, w_6, (ATerm) ATmakeAppl(sym_Rule_3, f_6, g_6, i_6));
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          k_6 = ATgetArgument(t, 0);
          l_6 = ATgetArgument(t, 1);
          w_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_6;
      if(match_cons(t, sym_Rule_3))
        {
          x_6 = ATgetArgument(t, 0);
          h_7 = ATgetArgument(t, 1);
          i_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_6;
      {
        ATerm c_35 = t;
        int d_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 = NULL,y_5 = NULL,z_5 = NULL,b_6 = NULL;
            t = (ATerm) ATempty;
            z_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_35, k_6);
            b_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_35, k_6));
            t = a_7(j_8, z_5, b_6, t);
            t = (ATerm) ATempty;
            w_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_35, k_6);
            y_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_35, k_6));
            t = a_7(k_8, w_5, y_5, t);
            t = x_6;
            t = bind_vars_0_0(t);
            LocalPopChoice(d_35);
          }
        else
          {
            t = c_35;
            {
              ATerm g_35 = t;
              int h_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_7;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(h_35);
                }
              else
                {
                  t = g_35;
                  t = h_7;
                  t = use_vars_0_0(t);
                }
            }
          }
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, k_6, l_6, (ATerm) ATmakeAppl(sym_Rule_3, x_6, h_7, i_7));
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  {
    ATerm j_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL,k_9 = NULL,l_9 = NULL;
        t = (ATerm) ATempty;
        k_9 = t;
        t = term_m_34;
        l_9 = t;
        t = term_r_35;
        t = y_6(l_9, k_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_35) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            f_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_9), term_v_35), f_9), term_t_35);
        LocalPopChoice(n_35);
      }
    else
      {
        t = j_35;
        {
          ATerm w_35 = t;
          int x_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_10 = NULL,i_10 = NULL,j_10 = NULL;
              t = (ATerm) ATempty;
              i_10 = t;
              t = term_m_34;
              j_10 = t;
              t = term_r_35;
              t = y_6(j_10, i_10, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm y_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_35) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  a_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_9), term_v_35), a_10), term_a_36);
              LocalPopChoice(x_35);
            }
          else
            {
              t = w_35;
              {
                ATerm c_36 = t;
                int h_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_10 = NULL,p_10 = NULL,u_10 = NULL;
                    t = (ATerm) ATempty;
                    p_10 = t;
                    t = term_m_34;
                    u_10 = t;
                    t = term_r_35;
                    t = y_6(u_10, p_10, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm m_36 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) m_36) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        n_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_9), term_v_35), n_10), term_a_36);
                    LocalPopChoice(h_36);
                  }
                else
                  {
                    t = c_36;
                    {
                      ATerm n_36 = t;
                      int p_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_11 = NULL,p_11 = NULL,w_11 = NULL;
                          t = (ATerm) ATempty;
                          p_11 = t;
                          t = term_m_34;
                          w_11 = t;
                          t = term_r_35;
                          t = y_6(w_11, p_11, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm q_36 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) q_36) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              i_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_9), term_v_35), i_11), term_a_36);
                          LocalPopChoice(p_36);
                        }
                      else
                        {
                          t = n_36;
                          {
                            ATerm r_36 = t;
                            int s_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_12 = NULL,i_12 = NULL,j_12 = NULL;
                                t = (ATerm) ATempty;
                                i_12 = t;
                                t = term_m_34;
                                j_12 = t;
                                t = term_r_35;
                                t = y_6(j_12, i_12, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm t_36 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) t_36) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    c_12 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_9), term_v_35), c_12), term_u_36);
                                LocalPopChoice(s_36);
                              }
                            else
                              {
                                t = r_36;
                                {
                                  ATerm z_12 = NULL,b_13 = NULL,c_13 = NULL;
                                  t = (ATerm) ATempty;
                                  b_13 = t;
                                  t = term_m_34;
                                  c_13 = t;
                                  t = term_r_35;
                                  t = y_6(c_13, b_13, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm w_36 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) w_36) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      z_12 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_9), term_v_35), z_12), term_u_36);
                                }
                              }
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
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10;
  if(match_cons(t, sym_ListVar_1))
    {
      f_10 = ATgetArgument(t, 0);
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_10;
            c_10 = t;
            t = g_10;
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
            t = h_10;
            c_10 = t;
            t = g_10;
          }
      }
    }
  else
    {
      t = h_10;
      c_10 = t;
      t = g_10;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_37), c_10), term_z_36);
  t = Context_0_0(t);
  d_10 = t;
  t = term_q_20;
  e_10 = t;
  t = SSL_printnl(e_10, d_10);
  t = d_10;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_15 = NULL,i_15 = NULL,j_15 = NULL;
        t = (ATerm) ATempty;
        i_15 = t;
        t = term_p_34;
        j_15 = t;
        t = term_e_37;
        t = y_6(j_15, i_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_37) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            g_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_i_37), g_15), term_g_37);
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        {
          ATerm j_37 = t;
          int k_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_15 = NULL,j_16 = NULL,v_16 = NULL;
              t = (ATerm) ATempty;
              j_16 = t;
              t = term_p_34;
              v_16 = t;
              t = term_e_37;
              t = y_6(v_16, j_16, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm l_37 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_37) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  r_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_i_37), r_15), term_m_37);
              LocalPopChoice(k_37);
            }
          else
            {
              t = j_37;
              {
                ATerm n_37 = t;
                int o_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_17 = NULL,p_17 = NULL,r_17 = NULL;
                    t = (ATerm) ATempty;
                    p_17 = t;
                    t = term_p_34;
                    r_17 = t;
                    t = term_e_37;
                    t = y_6(r_17, p_17, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm q_37 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) q_37) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        j_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_i_37), j_17), term_m_37);
                    LocalPopChoice(o_37);
                  }
                else
                  {
                    t = n_37;
                    {
                      ATerm r_37 = t;
                      int s_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_18 = NULL,n_18 = NULL,o_18 = NULL;
                          t = (ATerm) ATempty;
                          n_18 = t;
                          t = term_p_34;
                          o_18 = t;
                          t = term_e_37;
                          t = y_6(o_18, n_18, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm u_37 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) u_37) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              b_18 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_i_37), b_18), term_m_37);
                          LocalPopChoice(s_37);
                        }
                      else
                        {
                          t = r_37;
                          {
                            ATerm x_37 = t;
                            int c_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_19 = NULL,n_19 = NULL,o_19 = NULL;
                                t = (ATerm) ATempty;
                                n_19 = t;
                                t = term_p_34;
                                o_19 = t;
                                t = term_e_37;
                                t = y_6(o_19, n_19, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm d_38 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) d_38) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    f_19 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_i_37), f_19), term_e_38);
                                LocalPopChoice(c_38);
                              }
                            else
                              {
                                t = x_37;
                                {
                                  ATerm b_20 = NULL,g_20 = NULL,l_20 = NULL;
                                  t = (ATerm) ATempty;
                                  g_20 = t;
                                  t = term_p_34;
                                  l_20 = t;
                                  t = term_e_37;
                                  t = y_6(l_20, g_20, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm f_38 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) f_38) != ATmakeSymbol("f_0", 0, ATtrue)))
                                        _fail(t);
                                      b_20 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_i_37), b_20), term_e_38);
                                }
                              }
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
  ATerm z_11 = NULL,a_12 = NULL,d_12 = NULL,e_12 = NULL;
  d_12 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_12;
  if(match_cons(t, sym_ListVar_1))
    {
      a_12 = ATgetArgument(t, 0);
      {
        ATerm g_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_12;
            z_11 = t;
            t = d_12;
            LocalPopChoice(l_38);
          }
        else
          {
            t = g_38;
            t = e_12;
            z_11 = t;
            t = d_12;
          }
      }
    }
  else
    {
      t = e_12;
      z_11 = t;
      t = d_12;
    }
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_12 = NULL,g_12 = NULL,k_12 = NULL,l_12 = NULL;
        t = term_o_38;
        k_12 = t;
        t = term_p_38;
        l_12 = t;
        t = term_q_38;
        t = o_7(k_12, l_12, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_38), z_11), term_z_36);
        t = Warning_0_0(t);
        f_12 = t;
        t = term_q_20;
        g_12 = t;
        t = SSL_printnl(g_12, f_12);
        t = f_12;
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12 = NULL,t_12 = NULL;
      s_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t_12 = t;
      t = SSLgetAnnotations(s_12);
      o_12 = t;
      t = t_12;
      LocalPopChoice(t_38);
      {
        ATerm u_12 = NULL;
        u_12 = t;
        t = o_12;
        {
          ATerm u_38 = t;
          int w_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_38 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) y_38) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm z_38 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(z_38) != AT_LIST) || !(ATisEmpty(z_38))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(w_38);
              _fail(t);
            }
          else
            {
              t = u_38;
              {
                ATerm a_39 = t;
                int b_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm c_39 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) c_39) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm d_39 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(d_39) != AT_LIST) || !(ATisEmpty(d_39))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(b_39);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_12);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = a_39;
                    {
                      ATerm e_39 = t;
                      int f_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm g_39 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) g_39) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm h_39 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(h_39) != AT_LIST) || !(ATisEmpty(h_39))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(f_39);
                          t = (ATerm) ATmakeAppl(sym_Var_1, p_12);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = e_39;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, p_12);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = u_12;
      }
    }
  else
    {
      t = s_38;
      {
        ATerm i_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_12 = NULL,w_12 = NULL,y_12 = NULL,d_13 = NULL,t_4 = NULL;
            d_13 = t;
            if(match_cons(t, sym_App_2))
              {
                w_12 = ATgetArgument(t, 0);
                y_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_13);
            v_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, w_12, y_12);
            t_4 = t;
            t = SSLsetAnnotations(t_4, v_12);
            LocalPopChoice(k_39);
            {
              ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,l_13 = NULL,u_4 = NULL;
              l_13 = t;
              if(match_cons(t, sym_App_2))
                {
                  f_13 = ATgetArgument(t, 0);
                  g_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_13);
              e_13 = t;
              t = f_13;
              t = unbound_vars_0_0(t);
              h_13 = t;
              t = g_13;
              t = use_vars_0_0(t);
              i_13 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, h_13, i_13);
              u_4 = t;
              t = SSLsetAnnotations(u_4, e_13);
            }
          }
        else
          {
            t = i_39;
            {
              ATerm l_39 = t;
              int p_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_13 = NULL,n_13 = NULL,q_13 = NULL,v_4 = NULL;
                  q_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      n_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_13);
                  m_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, n_13);
                  v_4 = t;
                  t = SSLsetAnnotations(v_4, m_13);
                  LocalPopChoice(p_39);
                  {
                    ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,w_4 = NULL;
                    u_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        s_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_13);
                    r_13 = t;
                    t = s_13;
                    t = unbound_vars_0_0(t);
                    t_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, t_13);
                    w_4 = t;
                    t = SSLsetAnnotations(w_4, r_13);
                  }
                }
              else
                {
                  t = l_39;
                  t = SRTS_some(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,b_5 = NULL;
      x_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_13);
      v_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_13);
      b_5 = t;
      t = SSLsetAnnotations(b_5, v_13);
      LocalPopChoice(s_39);
      _fail(t);
    }
  else
    {
      t = r_39;
      {
        ATerm t_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,c_5 = NULL;
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
            c_5 = t;
            t = SSLsetAnnotations(c_5, a_14);
            LocalPopChoice(u_39);
            {
              ATerm e_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,d_5 = NULL;
              k_14 = t;
              if(match_cons(t, sym_App_2))
                {
                  g_14 = ATgetArgument(t, 0);
                  h_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_14);
              e_14 = t;
              t = g_14;
              t = unbound_vars_0_0(t);
              i_14 = t;
              t = h_14;
              t = use_vars_0_0(t);
              j_14 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, i_14, j_14);
              d_5 = t;
              t = SSLsetAnnotations(d_5, e_14);
            }
          }
        else
          {
            t = t_39;
            {
              ATerm v_39 = t;
              int w_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,e_5 = NULL;
                  p_14 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      o_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_14);
                  n_14 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, o_14);
                  e_5 = t;
                  t = SSLsetAnnotations(e_5, n_14);
                  LocalPopChoice(w_39);
                  {
                    ATerm r_14 = NULL,t_14 = NULL,x_14 = NULL,y_14 = NULL,f_5 = NULL;
                    y_14 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        t_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(y_14);
                    r_14 = t;
                    t = t_14;
                    t = unbound_vars_0_0(t);
                    x_14 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, x_14);
                    f_5 = t;
                    t = SSLsetAnnotations(f_5, r_14);
                  }
                }
              else
                {
                  t = v_39;
                  t = SRTS_some(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,m_5 = NULL;
      o_15 = t;
      if(match_cons(t, sym_Build_1))
        {
          n_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_15);
      m_15 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, n_15);
      m_5 = t;
      t = SSLsetAnnotations(m_5, m_15);
      LocalPopChoice(y_39);
      {
        ATerm p_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,n_5 = NULL;
        u_15 = t;
        if(match_cons(t, sym_Build_1))
          {
            s_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_15);
        p_15 = t;
        t = s_15;
        t = use_vars_0_0(t);
        t_15 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, t_15);
        n_5 = t;
        t = SSLsetAnnotations(n_5, p_15);
      }
    }
  else
    {
      t = x_39;
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,o_5 = NULL;
            x_15 = t;
            if(match_cons(t, sym_Match_1))
              {
                w_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_15);
            v_15 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, w_15);
            o_5 = t;
            t = SSLsetAnnotations(o_5, v_15);
            LocalPopChoice(a_40);
            {
              ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,p_5 = NULL;
              b_16 = t;
              if(match_cons(t, sym_Match_1))
                {
                  z_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_16);
              y_15 = t;
              t = z_15;
              t = bind_vars_0_0(t);
              a_16 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, a_16);
              p_5 = t;
              t = SSLsetAnnotations(p_5, y_15);
            }
          }
        else
          {
            t = z_39;
            {
              ATerm b_40 = t;
              int d_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,u_5 = NULL;
                  g_16 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      d_16 = ATgetArgument(t, 0);
                      e_16 = ATgetArgument(t, 1);
                      f_16 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_16);
                  c_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, d_16, e_16, f_16);
                  u_5 = t;
                  t = SSLsetAnnotations(u_5, c_16);
                  LocalPopChoice(d_40);
                  {
                    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,c_18 = NULL;
                    x_17 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        y_17 = ATgetArgument(t, 0);
                        z_17 = ATgetArgument(t, 1);
                        c_18 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm e_40 = t;
                      int f_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_21 = NULL,n_21 = NULL,x_5 = NULL;
                          t = SSLgetAnnotations(x_17);
                          f_21 = t;
                          t = y_17;
                          t = bind_vars_0_0(t);
                          n_21 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, n_21, z_17, c_18);
                          x_5 = t;
                          t = SSLsetAnnotations(x_5, f_21);
                          LocalPopChoice(f_40);
                        }
                      else
                        {
                          t = e_40;
                          {
                            ATerm j_40 = t;
                            int p_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_22 = NULL,e_22 = NULL,a_6 = NULL;
                                t = SSLgetAnnotations(x_17);
                                a_22 = t;
                                t = c_18;
                                t = unbound_vars_0_0(t);
                                e_22 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, y_17, z_17, e_22);
                                a_6 = t;
                                t = SSLsetAnnotations(a_6, a_22);
                                LocalPopChoice(p_40);
                              }
                            else
                              {
                                t = j_40;
                                {
                                  ATerm q_22 = NULL,u_22 = NULL,c_6 = NULL;
                                  t = SSLgetAnnotations(x_17);
                                  q_22 = t;
                                  t = z_17;
                                  t = use_vars_0_0(t);
                                  u_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, y_17, u_22, c_18);
                                  c_6 = t;
                                  t = SSLsetAnnotations(c_6, q_22);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = b_40;
                  {
                    ATerm w_40 = t;
                    int x_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_18 = NULL,e_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,d_6 = NULL;
                        i_18 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            e_18 = ATgetArgument(t, 0);
                            g_18 = ATgetArgument(t, 1);
                            h_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(i_18);
                        d_18 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, e_18, g_18, h_18);
                        d_6 = t;
                        t = SSLsetAnnotations(d_6, d_18);
                        LocalPopChoice(x_40);
                        {
                          ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,p_19 = NULL;
                          k_19 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              l_19 = ATgetArgument(t, 0);
                              m_19 = ATgetArgument(t, 1);
                              p_19 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm y_40 = t;
                            int z_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_23 = NULL,m_23 = NULL,m_7 = NULL;
                                t = SSLgetAnnotations(k_19);
                                g_23 = t;
                                t = m_19;
                                t = unbound_vars_0_0(t);
                                m_23 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, l_19, m_23, p_19);
                                m_7 = t;
                                t = SSLsetAnnotations(m_7, g_23);
                                LocalPopChoice(z_40);
                              }
                            else
                              {
                                t = y_40;
                                {
                                  ATerm e_24 = NULL,u_24 = NULL,q_7 = NULL;
                                  t = SSLgetAnnotations(k_19);
                                  e_24 = t;
                                  t = p_19;
                                  t = use_vars_0_0(t);
                                  u_24 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, l_19, m_19, u_24);
                                  q_7 = t;
                                  t = SSLsetAnnotations(q_7, e_24);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = w_40;
                        {
                          ATerm a_41 = t;
                          int c_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,v_19 = NULL,w_19 = NULL,r_7 = NULL;
                              w_19 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  r_19 = ATgetArgument(t, 0);
                                  s_19 = ATgetArgument(t, 1);
                                  v_19 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(w_19);
                              q_19 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, r_19, s_19, v_19);
                              r_7 = t;
                              t = SSLsetAnnotations(r_7, q_19);
                              LocalPopChoice(c_41);
                              {
                                ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
                                b_21 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    c_21 = ATgetArgument(t, 0);
                                    d_21 = ATgetArgument(t, 1);
                                    e_21 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm e_41 = t;
                                  int g_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm m_25 = NULL,w_25 = NULL,s_7 = NULL;
                                      t = SSLgetAnnotations(b_21);
                                      m_25 = t;
                                      t = d_21;
                                      t = unbound_vars_0_0(t);
                                      w_25 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, c_21, w_25, e_21);
                                      s_7 = t;
                                      t = SSLsetAnnotations(s_7, m_25);
                                      LocalPopChoice(g_41);
                                    }
                                  else
                                    {
                                      t = e_41;
                                      {
                                        ATerm s_26 = NULL,d_27 = NULL,t_7 = NULL;
                                        t = SSLgetAnnotations(b_21);
                                        s_26 = t;
                                        t = e_21;
                                        t = use_vars_0_0(t);
                                        d_27 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, c_21, d_21, d_27);
                                        t_7 = t;
                                        t = SSLsetAnnotations(t_7, s_26);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = a_41;
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
static ATerm l_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm j_22 = NULL,v_22 = NULL,y_22 = NULL,h_23 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      v_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
      h_23 = ATgetArgument(t, 2);
      j_22 = ATgetArgument(t, 3);
      {
        ATerm b_24 = NULL,d_24 = NULL,g_24 = NULL,h_24 = NULL;
        t = (ATerm) ATempty;
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_41, v_22);
        h_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_41, v_22));
        t = a_7(l_8, g_24, h_24, t);
        t = (ATerm) ATempty;
        b_24 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_41, v_22);
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_41, v_22));
        t = a_7(m_8, b_24, d_24, t);
        t = j_22;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, v_22, y_22, h_23, j_22);
      }
    }
  else
    {
      ATerm s_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          v_22 = ATgetArgument(t, 0);
          y_22 = ATgetArgument(t, 1);
          h_23 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_41, v_22);
      x_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_41, v_22));
      t = a_7(n_8, w_24, x_24, t);
      t = (ATerm) ATempty;
      s_24 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_41, v_22);
      v_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_41, v_22));
      t = a_7(o_8, s_24, v_24, t);
      t = h_23;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, v_22, y_22, h_23);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,r_8 = NULL;
  static ATerm p_8 (ATerm t)
  {
    ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,t_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,t_8 = NULL,s_8 = NULL;
    d_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        y_25 = ATgetArgument(t, 0);
        z_25 = ATgetArgument(t, 1);
        a_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_26);
    t_25 = t;
    t = y_25;
    t = b_119(t);
    b_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, b_26, z_25, a_26);
    s_8 = t;
    t = SSLsetAnnotations(s_8, t_25);
    c_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        o_25 = ATgetArgument(t, 0);
        p_25 = ATgetArgument(t, 1);
        q_25 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_26);
    n_25 = t;
    t = p_25;
    t = b_119(t);
    r_25 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_25, r_25, q_25);
    t_8 = t;
    t = SSLsetAnnotations(t_8, n_25);
    return(t);
  }
  static ATerm q_8 (ATerm t)
  {
    ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,p_26 = NULL,u_8 = NULL;
    p_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        j_26 = ATgetArgument(t, 0);
        k_26 = ATgetArgument(t, 1);
        l_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_26);
    i_26 = t;
    t = l_26;
    t = b_119(t);
    m_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_26, k_26, m_26);
    u_8 = t;
    t = SSLsetAnnotations(u_8, i_26);
    return(t);
  }
  k_25 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
      j_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_25);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_25, i_25, j_25);
  r_8 = t;
  t = SSLsetAnnotations(r_8, g_25);
  t = abstract_choice_2_0(p_8, q_8, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,w_26 = NULL,y_26 = NULL,z_26 = NULL,a_9 = NULL;
  static ATerm v_8 (ATerm t)
  {
    ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,f_27 = NULL,g_27 = NULL,b_9 = NULL;
    g_27 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        b_27 = ATgetArgument(t, 0);
        c_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_27);
    a_27 = t;
    t = b_27;
    t = a_119(t);
    f_27 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_27, c_27);
    b_9 = t;
    t = SSLsetAnnotations(b_9, a_27);
    return(t);
  }
  static ATerm w_8 (ATerm t)
  {
    ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,c_9 = NULL;
    l_27 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        i_27 = ATgetArgument(t, 0);
        j_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_27);
    h_27 = t;
    t = j_27;
    t = a_119(t);
    k_27 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, i_27, k_27);
    c_9 = t;
    t = SSLsetAnnotations(c_9, h_27);
    return(t);
  }
  z_26 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      w_26 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_26);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, w_26, y_26);
  a_9 = t;
  t = SSLsetAnnotations(a_9, u_26);
  t = abstract_choice_2_0(v_8, w_8, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,x_27 = NULL;
  t_27 = t;
  t = save_MarkVar_0_0(t);
  p_27 = t;
  t = t_27;
  t = c_119(t);
  s_27 = t;
  t = save_MarkVar_0_0(t);
  q_27 = t;
  t = term_m_41;
  x_27 = t;
  t = SSL_table_destroy(x_27);
  t = term_m_41;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_41, p_27);
  t = u_6(u_27, p_27, t);
  t = s_27;
  t = d_119(t);
  r_27 = t;
  t = q_27;
  t = isect_MarkVar_0_0(t);
  t = r_27;
  return(t);
}
ATerm mark_choice_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,f_28 = NULL,i_28 = NULL,i_9 = NULL;
  static ATerm x_8 (ATerm t)
  {
    ATerm l_28 = NULL,t_28 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,m_9 = NULL;
    d_29 = t;
    if(match_cons(t, sym_Choice_2))
      {
        t_28 = ATgetArgument(t, 0);
        b_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_29);
    l_28 = t;
    t = t_28;
    t = z_118(t);
    c_29 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, c_29, b_29);
    m_9 = t;
    t = SSLsetAnnotations(m_9, l_28);
    return(t);
  }
  static ATerm y_8 (ATerm t)
  {
    ATerm e_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,n_9 = NULL;
    j_29 = t;
    if(match_cons(t, sym_Choice_2))
      {
        g_29 = ATgetArgument(t, 0);
        h_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_29);
    e_29 = t;
    t = h_29;
    t = z_118(t);
    i_29 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, g_29, i_29);
    n_9 = t;
    t = SSLsetAnnotations(n_9, e_29);
    return(t);
  }
  i_28 = t;
  if(match_cons(t, sym_Choice_2))
    {
      z_27 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_28);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, z_27, f_28);
  i_9 = t;
  t = SSLsetAnnotations(i_9, y_27);
  t = abstract_choice_2_0(x_8, y_8, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm m_29 = NULL,o_29 = NULL,q_29 = NULL,f_30 = NULL,h_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,q_30 = NULL,u_9 = NULL,t_9 = NULL;
  o_29 = t;
  t = save_MarkVar_0_0(t);
  m_29 = t;
  t = o_29;
  if(match_cons(t, sym_Rec_2))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_29);
  l_30 = t;
  t = n_30;
  t = mark_buv_0_0(t);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, m_30, q_30);
  t_9 = t;
  t = SSLsetAnnotations(t_9, l_30);
  t = m_29;
  t = isect_MarkVar_0_0(t);
  t = o_29;
  if(match_cons(t, sym_Rec_2))
    {
      f_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_29);
  q_29 = t;
  t = h_30;
  t = mark_buv_0_0(t);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, f_30, k_30);
  u_9 = t;
  t = SSLsetAnnotations(u_9, q_29);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,b_31 = NULL,c_31 = NULL,g_31 = NULL,h_31 = NULL,n_31 = NULL,o_31 = NULL,v_31 = NULL,x_31 = NULL,c_32 = NULL,k_32 = NULL,m_32 = NULL,r_32 = NULL,s_32 = NULL,k_10 = NULL,z_9 = NULL,y_9 = NULL;
  s_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
      m_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_32);
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_32, k_32, m_32);
  y_9 = t;
  t = SSLsetAnnotations(y_9, x_31);
  r_32 = t;
  t = save_MarkVar_0_0(t);
  r_30 = t;
  t = r_32;
  if(match_cons(t, sym_PrimT_3))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
      n_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_32);
  c_31 = t;
  t = n_31;
  t = map_1_0(z_8, t);
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, g_31, h_31, o_31);
  z_9 = t;
  t = SSLsetAnnotations(z_9, c_31);
  v_31 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_30 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
      y_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_31);
  s_30 = t;
  t = x_30;
  t = mark_buv_0_0(t);
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_30, z_30, y_30);
  k_10 = t;
  t = SSLsetAnnotations(k_10, s_30);
  b_31 = t;
  t = r_30;
  t = isect_MarkVar_0_0(t);
  t = b_31;
  return(t);
}
ATerm alltd_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  static ATerm x_32 (ATerm t)
  {
    ATerm n_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_93(t);
        LocalPopChoice(p_41);
      }
    else
      {
        t = n_41;
        t = SRTS_all(x_32, t);
      }
    return(t);
  }
  t = x_32(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm m_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_35 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
      m_35 = ATgetArgument(t, 2);
      {
        ATerm d_28 = NULL,e_28 = NULL,g_28 = NULL,h_28 = NULL,j_28 = NULL,k_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,a_29 = NULL,w_10 = NULL,v_10 = NULL,t_10 = NULL;
        t = SSLgetAnnotations(o_35);
        w_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, p_35, q_35, m_35);
        t_10 = t;
        t = SSLsetAnnotations(t_10, w_28);
        a_29 = t;
        t = save_MarkVar_0_0(t);
        d_28 = t;
        t = a_29;
        if(match_cons(t, sym_CallT_3))
          {
            q_28 = ATgetArgument(t, 0);
            r_28 = ATgetArgument(t, 1);
            s_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_29);
        p_28 = t;
        t = s_28;
        t = map_1_0(d_9, t);
        u_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, q_28, r_28, u_28);
        v_10 = t;
        t = SSLsetAnnotations(v_10, p_28);
        v_28 = t;
        if(match_cons(t, sym_CallT_3))
          {
            g_28 = ATgetArgument(t, 0);
            h_28 = ATgetArgument(t, 1);
            j_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_28);
        e_28 = t;
        t = h_28;
        t = mark_buv_0_0(t);
        k_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, g_28, k_28, j_28);
        w_10 = t;
        t = SSLsetAnnotations(w_10, e_28);
        o_28 = t;
        t = d_28;
        t = isect_MarkVar_0_0(t);
        t = o_28;
      }
    }
  else
    {
      ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,z_29 = NULL,b_30 = NULL,c_30 = NULL,g_30 = NULL,y_10 = NULL,x_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          p_35 = ATgetArgument(t, 0);
          q_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_35);
      c_30 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, p_35, q_35);
      x_10 = t;
      t = SSLsetAnnotations(x_10, c_30);
      g_30 = t;
      t = save_MarkVar_0_0(t);
      u_29 = t;
      t = g_30;
      if(match_cons(t, sym_Call_2))
        {
          w_29 = ATgetArgument(t, 0);
          x_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_30);
      v_29 = t;
      t = x_29;
      t = mark_buv_0_0(t);
      z_29 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, w_29, z_29);
      y_10 = t;
      t = SSLsetAnnotations(y_10, v_29);
      b_30 = t;
      t = u_29;
      t = isect_MarkVar_0_0(t);
      t = b_30;
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_m_41;
  return(t);
}
static ATerm p_6 (ATerm r_65, ATerm s_65, ATerm t_65, ATerm t)
{
  ATerm z_35 = NULL;
  static ATerm g_9 (ATerm t)
  {
    t = s_65;
    t = map_1_0(IntroduceBound_0_0, t);
    t = t_65;
    t = mark_build_vars_0_0(t);
    if(((z_35 != NULL) && (z_35 != t)))
      _fail(t);
    else
      z_35 = t;
    return(t);
  }
  t = scope_2_0(e_9, g_9, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, r_65, s_65, not_null(z_35));
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_m_41;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm g_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_36);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm u_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_41);
    }
  else
    {
      t = u_41;
      {
        ATerm w_41 = t;
        int x_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_41);
          }
        else
          {
            t = w_41;
            {
              ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,o_36 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_36 = ATgetArgument(t, 0);
                  j_36 = ATgetArgument(t, 1);
                  k_36 = ATgetArgument(t, 2);
                  o_36 = ATgetArgument(t, 3);
                  t = k_36;
                  t = map_1_0(r_9, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_36 = ATgetArgument(t, 0);
                      j_36 = ATgetArgument(t, 1);
                      k_36 = ATgetArgument(t, 2);
                      o_36 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_36;
                  t = map_1_0(s_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm a_37 = NULL;
  ATerm z_41 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_37 = ATgetArgument(t, 0);
          {
            ATerm c_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_42);
      t = a_37;
    }
  else
    {
      t = z_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_37;
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm p_37 = NULL;
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_37 = ATgetArgument(t, 0);
          {
            ATerm f_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_42);
      t = p_37;
    }
  else
    {
      t = d_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_37;
    }
  return(t);
}
static ATerm q_6 (ATerm l_65, ATerm p_65, ATerm n_65, ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  static ATerm j_9 (ATerm t)
  {
    t = l_65;
    t = free_vars_3_0(o_9, p_9, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = l_65;
    t = mark_match_vars_0_0(t);
    if(((d_36 != NULL) && (d_36 != t)))
      _fail(t);
    else
      d_36 = t;
    t = n_65;
    t = mark_buv_0_0(t);
    if(((e_36 != NULL) && (e_36 != t)))
      _fail(t);
    else
      e_36 = t;
    t = p_65;
    t = mark_build_vars_0_0(t);
    if(((f_36 != NULL) && (f_36 != t)))
      _fail(t);
    else
      f_36 = t;
    return(t);
  }
  t = scope_2_0(h_9, j_9, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_36), not_null(f_36), not_null(e_36)));
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_m_41;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm b_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_38);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      {
        ATerm j_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_42);
          }
        else
          {
            t = j_42;
            {
              ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_38 = ATgetArgument(t, 0);
                  i_38 = ATgetArgument(t, 1);
                  j_38 = ATgetArgument(t, 2);
                  k_38 = ATgetArgument(t, 3);
                  t = j_38;
                  t = map_1_0(l_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_38 = ATgetArgument(t, 0);
                      i_38 = ATgetArgument(t, 1);
                      j_38 = ATgetArgument(t, 2);
                      k_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_38;
                  t = map_1_0(m_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm x_38 = NULL;
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_38 = ATgetArgument(t, 0);
          {
            ATerm p_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_42);
      t = x_38;
    }
  else
    {
      t = n_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_38;
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm j_39 = NULL;
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_39 = ATgetArgument(t, 0);
          {
            ATerm s_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_42);
      t = j_39;
    }
  else
    {
      t = q_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_39;
    }
  return(t);
}
static ATerm r_6 (ATerm f_65, ATerm j_65, ATerm h_65, ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,a_38 = NULL;
  static ATerm w_9 (ATerm t)
  {
    t = f_65;
    t = free_vars_3_0(x_9, b_10, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = f_65;
    t = mark_match_vars_0_0(t);
    if(((v_37 != NULL) && (v_37 != t)))
      _fail(t);
    else
      v_37 = t;
    t = h_65;
    t = mark_buv_0_0(t);
    if(((w_37 != NULL) && (w_37 != t)))
      _fail(t);
    else
      w_37 = t;
    t = j_65;
    t = mark_build_vars_0_0(t);
    if(((a_38 != NULL) && (a_38 != t)))
      _fail(t);
    else
      a_38 = t;
    return(t);
  }
  t = scope_2_0(v_9, w_9, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_37), not_null(a_38), not_null(w_37)));
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm o_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_41);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_42);
    }
  else
    {
      t = t_42;
      {
        ATerm v_42 = t;
        int w_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_42);
          }
        else
          {
            t = v_42;
            {
              ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_41 = ATgetArgument(t, 0);
                  r_41 = ATgetArgument(t, 1);
                  s_41 = ATgetArgument(t, 2);
                  t_41 = ATgetArgument(t, 3);
                  t = s_41;
                  t = map_1_0(r_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_41 = ATgetArgument(t, 0);
                      r_41 = ATgetArgument(t, 1);
                      s_41 = ATgetArgument(t, 2);
                      t_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_41;
                  t = map_1_0(s_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm l_42 = NULL;
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_42 = ATgetArgument(t, 0);
          {
            ATerm b_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_42);
      t = l_42;
    }
  else
    {
      t = x_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_42;
    }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm a_43 = NULL;
  ATerm d_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_43 = ATgetArgument(t, 0);
          {
            ATerm f_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_43);
      t = a_43;
    }
  else
    {
      t = d_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_43;
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_m_41;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm m_44 = NULL;
  ATerm g_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_44 = ATgetArgument(t, 0);
          {
            ATerm i_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_43);
      t = m_44;
    }
  else
    {
      t = g_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_44;
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm p_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_44);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm j_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_43);
    }
  else
    {
      t = j_43;
      {
        ATerm m_43 = t;
        int n_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_43);
          }
        else
          {
            t = m_43;
            {
              ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_44 = ATgetArgument(t, 0);
                  s_44 = ATgetArgument(t, 1);
                  t_44 = ATgetArgument(t, 2);
                  u_44 = ATgetArgument(t, 3);
                  t = t_44;
                  t = map_1_0(e_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_44 = ATgetArgument(t, 0);
                      s_44 = ATgetArgument(t, 1);
                      t_44 = ATgetArgument(t, 2);
                      u_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_44;
                  t = map_1_0(g_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm h_45 = NULL;
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_45 = ATgetArgument(t, 0);
          {
            ATerm r_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_43);
      t = h_45;
    }
  else
    {
      t = p_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_45;
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm w_45 = NULL;
  ATerm s_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_45 = ATgetArgument(t, 0);
          {
            ATerm u_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_43);
      t = w_45;
    }
  else
    {
      t = s_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_45;
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,s_40 = NULL,t_40 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      k_40 = ATgetArgument(t, 0);
      l_40 = ATgetArgument(t, 1);
      m_40 = ATgetArgument(t, 2);
      {
        ATerm b_41 = NULL,d_41 = NULL,f_41 = NULL,h_41 = NULL;
        t = m_40;
        if(match_cons(t, sym_Rule_3))
          {
            g_40 = ATgetArgument(t, 0);
            h_40 = ATgetArgument(t, 1);
            i_40 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = m_40;
        t = free_vars_3_0(o_10, q_10, tboundin_3_0, t);
        b_41 = t;
        {
          static ATerm a_11 (ATerm t)
          {
            t = b_41;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = g_40;
            t = mark_match_vars_0_0(t);
            if(((d_41 != NULL) && (d_41 != t)))
              _fail(t);
            else
              d_41 = t;
            t = i_40;
            t = mark_buv_0_0(t);
            if(((f_41 != NULL) && (f_41 != t)))
              _fail(t);
            else
              f_41 = t;
            t = h_40;
            t = mark_build_vars_0_0(t);
            if(((h_41 != NULL) && (h_41 != t)))
              _fail(t);
            else
              h_41 = t;
            return(t);
          }
          t = scope_2_0(z_10, a_11, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, k_40, l_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_41), not_null(h_41), not_null(f_41)));
      }
    }
  else
    {
      ATerm v_43 = NULL,w_43 = NULL,y_43 = NULL,a_44 = NULL,c_44 = NULL,d_44 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          k_40 = ATgetArgument(t, 0);
          l_40 = ATgetArgument(t, 1);
          m_40 = ATgetArgument(t, 2);
          n_40 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = n_40;
      if(match_cons(t, sym_Rule_3))
        {
          o_40 = ATgetArgument(t, 0);
          s_40 = ATgetArgument(t, 1);
          t_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_40;
      t = map_1_0(b_11, t);
      v_43 = t;
      t = n_40;
      t = free_vars_3_0(c_11, d_11, tboundin_3_0, t);
      d_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_44, v_43);
      t = diff_0_0(t);
      w_43 = t;
      {
        static ATerm k_11 (ATerm t)
        {
          t = v_43;
          t = map_1_0(IntroduceBound_0_0, t);
          t = w_43;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = o_40;
          t = mark_match_vars_0_0(t);
          if(((y_43 != NULL) && (y_43 != t)))
            _fail(t);
          else
            y_43 = t;
          t = t_40;
          t = mark_buv_0_0(t);
          if(((a_44 != NULL) && (a_44 != t)))
            _fail(t);
          else
            a_44 = t;
          t = s_40;
          t = mark_build_vars_0_0(t);
          if(((c_44 != NULL) && (c_44 != t)))
            _fail(t);
          else
            c_44 = t;
          return(t);
        }
        t = scope_2_0(j_11, k_11, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, k_40, l_40, m_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_43), not_null(c_44), not_null(a_44)));
    }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_46);
  b_46 = t;
  t = term_b_44;
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_46), term_b_44);
  t = a_7(o_11, b_46, c_46, t);
  t = a_46;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm m_46 = NULL;
  ATerm e_44 = t;
  int f_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_46 = ATgetArgument(t, 0);
          {
            ATerm g_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_44);
      t = m_46;
    }
  else
    {
      t = e_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_46;
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_m_41;
  return(t);
}
static ATerm s_6 (ATerm d_64, ATerm e_64, ATerm f_64, ATerm h_64, ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  t = f_64;
  t = map_1_0(t_11, t);
  e_46 = t;
  {
    static ATerm v_11 (ATerm t)
    {
      t = e_46;
      t = map_1_0(IntroduceBound_0_0, t);
      t = h_64;
      t = mark_buv_0_0(t);
      if(((f_46 != NULL) && (f_46 != t)))
        _fail(t);
      else
        f_46 = t;
      return(t);
    }
    t = scope_2_0(u_11, v_11, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_64, e_64, f_64, not_null(f_46));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm p_47 = NULL,s_47 = NULL,t_47 = NULL,h_48 = NULL,i_48 = NULL,k_48 = NULL;
  p_47 = t;
  if(match_cons(t, sym__2))
    {
      s_47 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_48;
  if(match_cons(t, sym_Undefined_0))
    {
      t = s_47;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_i_44;
        }
      else
        {
          t = term_i_44;
        }
    }
  else
    {
      ATerm j_44 = t;
      int l_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm n_44 = ATgetArgument(t, 0);
              k_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(l_44);
          t = s_47;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_i_44;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  t_47 = ATgetArgument(t, 0);
                  h_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm o_44 = t;
                int q_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, h_48, k_48);
                    {
                      ATerm w_44 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm u_31 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              u_31 = ATgetArgument(t, 0);
                              if((u_31 != ATgetArgument(t, 1)))
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
                          t = w_44;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, t_47, term_x_44);
                    LocalPopChoice(q_44);
                  }
                else
                  {
                    t = o_44;
                    t = k_48;
                    if((h_48 != t))
                      {
                        _fail(t);
                      }
                    t = s_47;
                  }
              }
            }
        }
      else
        {
          t = j_44;
          t = s_47;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_i_44;
        }
    }
  return(t);
}
static ATerm t_6 (ATerm o_62, ATerm p_62, ATerm n_62, ATerm t)
{
  ATerm o_48 = NULL,q_48 = NULL,r_48 = NULL;
  t = term_m_41;
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_41, o_62);
  t = o_7(r_48, o_62, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_48 = ATgetFirst((ATermList) t);
      {
        ATerm y_44 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_62, o_48);
  t = CompareEntries_0_0(t);
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_62, (ATerm) ATinsert(CheckATermList(n_62), q_48));
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,v_49 = NULL,w_49 = NULL;
  w_49 = t;
  if(match_cons(t, sym__2))
    {
      q_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
      t = r_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_49 = ATgetFirst((ATermList) t);
          v_49 = (ATerm) ATgetNext((ATermList) t);
          t = s_49;
          {
            ATerm z_44 = t;
            int a_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm b_45 = ATgetArgument(t, 0);
                    ATerm c_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(a_45);
                t = q_49;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = w_49;
                  }
                else
                  {
                    ATerm d_45 = t;
                    int e_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_49;
                        t = t_6(q_49, s_49, v_49, t);
                        LocalPopChoice(e_45);
                      }
                    else
                      {
                        t = d_45;
                        t = w_49;
                      }
                  }
              }
            else
              {
                t = z_44;
                t = q_49;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = w_49;
                  }
                else
                  {
                    t = w_49;
                  }
              }
          }
        }
      else
        {
          t = q_49;
          if(match_cons(t, sym_Scopes_0))
            {
              t = w_49;
            }
          else
            {
              t = w_49;
            }
        }
    }
  else
    {
      t = w_49;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,o_49 = NULL;
  t = map_1_0(x_11, t);
  j_49 = t;
  t = term_m_41;
  o_49 = t;
  t = SSL_table_destroy(o_49);
  t = term_m_41;
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_41, j_49);
  t = u_6(k_49, j_49, t);
  t = j_49;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,l_51 = NULL;
  l_51 = t;
  {
    ATerm f_45 = t;
    int g_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm i_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_45);
        t = l_51;
      }
    else
      {
        t = f_45;
        {
          ATerm j_45 = t;
          int k_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm m_45 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(k_45);
              t = l_51;
            }
          else
            {
              t = j_45;
              {
                ATerm n_45 = t;
                int o_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm q_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_45);
                    t = l_51;
                  }
                else
                  {
                    t = n_45;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm r_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = l_51;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  i_51 = t;
  t = l_51;
  t = SRTS_one(mark_buv_0_0, t);
  j_51 = t;
  t = i_51;
  t = isect_MarkVar_0_0(t);
  t = j_51;
  return(t);
}
static ATerm u_6 (ATerm h_32, ATerm g_32, ATerm t)
{
  static ATerm y_11 (ATerm t)
  {
    ATerm p_51 = NULL,q_51 = NULL;
    if(match_cons(t, sym__2))
      {
        p_51 = ATgetArgument(t, 0);
        q_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(h_32, p_51, q_51);
    t = (ATerm) ATmakeAppl(sym__3, h_32, p_51, q_51);
    return(t);
  }
  t = g_32;
  t = map_1_0(y_11, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_51 = NULL;
  static ATerm b_12 (ATerm t)
  {
    ATerm s_51 = NULL,x_51 = NULL;
    s_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_51), s_51);
    t = o_7(not_null(r_51), s_51, t);
    x_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_51, x_51);
    return(t);
  }
  if(((r_51 != NULL) && (r_51 != t)))
    _fail(t);
  else
    r_51 = t;
  t = SSL_table_keys(r_51);
  t = map_1_0(b_12, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_m_41;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm b_63, ATerm t)
{
  ATerm c_52 = NULL,f_52 = NULL,g_52 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm h_12 (ATerm t)
    {
      static ATerm a_53 (ATerm h_52, ATerm t)
      {
        ATerm i_52 = NULL,k_52 = NULL,l_52 = NULL,p_52 = NULL;
        t = h_52;
        if(match_cons(t, sym__2))
          {
            ATerm s_45 = ATgetArgument(t, 0);
            i_52 = s_45;
            if(match_cons(s_45, sym_Var_1))
              {
                k_52 = ATgetArgument(s_45, 0);
              }
            else
              _fail(t);
            {
              ATerm t_45 = ATgetArgument(t, 1);
              if(((ATgetType(t_45) == AT_LIST) && !(ATisEmpty(t_45))))
                {
                  ATerm u_45 = ATgetFirst((ATermList) t_45);
                  if(match_cons(u_45, sym_Defined_2))
                    {
                      l_52 = ATgetArgument(u_45, 0);
                      {
                        ATerm v_45 = ATgetArgument(u_45, 1);
                        if((ATgetSymbol((ATermAppl) v_45) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  p_52 = (ATerm) ATgetNext((ATermList) t_45);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_63;
        {
          static ATerm m_12 (ATerm t)
          {
            if((k_52 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(m_12, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, i_52, (ATerm) ATinsert(CheckATermList(p_52), (ATerm) ATmakeAppl(sym_Defined_2, l_52, term_x_44)));
        return(t);
      }
      ATerm s_52 = NULL,w_52 = NULL;
      w_52 = t;
      {
        ATerm x_45 = t;
        int y_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                s_52 = ATgetArgument(t, 0);
                {
                  ATerm z_45 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_45);
            t = s_52;
            if(match_cons(t, sym_Scopes_0))
              {
                t = w_52;
              }
            else
              {
                ATerm d_46 = t;
                int g_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_53(w_52, t);
                    LocalPopChoice(g_46);
                  }
                else
                  {
                    t = d_46;
                    t = w_52;
                  }
              }
          }
        else
          {
            t = x_45;
            {
              ATerm h_46 = t;
              int i_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_53(w_52, t);
                  LocalPopChoice(i_46);
                }
              else
                {
                  t = h_46;
                  t = w_52;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(h_12, t);
  }
  c_52 = t;
  t = term_m_41;
  g_52 = t;
  t = SSL_table_destroy(g_52);
  t = term_m_41;
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_41, c_52);
  t = u_6(f_52, c_52, t);
  t = c_52;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm g_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_54);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_46);
    }
  else
    {
      t = j_46;
      {
        ATerm l_46 = t;
        int n_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_46);
          }
        else
          {
            t = l_46;
            {
              ATerm i_54 = NULL,j_54 = NULL,l_54 = NULL,m_54 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_54 = ATgetArgument(t, 0);
                  j_54 = ATgetArgument(t, 1);
                  l_54 = ATgetArgument(t, 2);
                  m_54 = ATgetArgument(t, 3);
                  t = l_54;
                  t = map_1_0(r_12, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_54 = ATgetArgument(t, 0);
                      j_54 = ATgetArgument(t, 1);
                      l_54 = ATgetArgument(t, 2);
                      m_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_54;
                  t = map_1_0(x_12, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm z_54 = NULL;
  ATerm o_46 = t;
  int p_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_54 = ATgetArgument(t, 0);
          {
            ATerm r_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_46);
      t = z_54;
    }
  else
    {
      t = o_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_54;
    }
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm m_55 = NULL;
  ATerm s_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_55 = ATgetArgument(t, 0);
          {
            ATerm v_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_46);
      t = m_55;
    }
  else
    {
      t = s_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_55;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,h_11 = NULL,f_11 = NULL;
  d_54 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_54 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_54);
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, a_54, b_54);
  f_11 = t;
  t = SSLsetAnnotations(f_11, z_53);
  c_54 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_53 = ATgetArgument(t, 0);
      {
        ATerm w_46 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_53;
  t = free_vars_3_0(n_12, q_12, tboundin_3_0, t);
  l_53 = t;
  t = undefine_unbound_MarkVar_0_1(l_53, t);
  m_53 = t;
  t = c_54;
  if(match_cons(t, sym_Let_2))
    {
      r_53 = ATgetArgument(t, 0);
      s_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_54);
  o_53 = t;
  t = r_53;
  {
    static ATerm a_13 (ATerm t)
    {
      ATerm r_55 = NULL,s_55 = NULL,u_55 = NULL;
      r_55 = t;
      t = term_m_41;
      u_55 = t;
      t = SSL_table_destroy(u_55);
      t = term_m_41;
      s_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_41, m_53);
      t = u_6(s_55, m_53, t);
      t = r_55;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(a_13, t);
  }
  t_53 = t;
  t = term_m_41;
  y_53 = t;
  t = SSL_table_destroy(y_53);
  t = term_m_41;
  v_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_41, m_53);
  t = u_6(v_53, m_53, t);
  t = s_53;
  t = mark_buv_0_0(t);
  u_53 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, t_53, u_53);
  h_11 = t;
  t = SSLsetAnnotations(h_11, o_53);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm x_46 = t;
  int y_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_55 = NULL,a_56 = NULL,b_56 = NULL,l_11 = NULL;
      b_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_56);
      v_55 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_56);
      l_11 = t;
      t = SSLsetAnnotations(l_11, v_55);
      LocalPopChoice(y_46);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = x_46;
      {
        ATerm z_46 = t;
        int a_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,m_11 = NULL;
            g_56 = t;
            if(match_cons(t, sym_App_2))
              {
                e_56 = ATgetArgument(t, 0);
                f_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_56);
            c_56 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, e_56, f_56);
            m_11 = t;
            t = SSLsetAnnotations(m_11, c_56);
            LocalPopChoice(a_47);
            {
              ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,r_56 = NULL,s_56 = NULL,q_11 = NULL;
              s_56 = t;
              if(match_cons(t, sym_App_2))
                {
                  k_56 = ATgetArgument(t, 0);
                  l_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_56);
              j_56 = t;
              t = k_56;
              t = mark_buv_0_0(t);
              m_56 = t;
              t = l_56;
              t = mark_build_vars_0_0(t);
              r_56 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, m_56, r_56);
              q_11 = t;
              t = SSLsetAnnotations(q_11, j_56);
            }
          }
        else
          {
            t = z_46;
            {
              ATerm c_47 = t;
              int d_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,r_11 = NULL;
                  v_56 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      u_56 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_56);
                  t_56 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, u_56);
                  r_11 = t;
                  t = SSLsetAnnotations(r_11, t_56);
                  LocalPopChoice(d_47);
                  {
                    ATerm w_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,s_11 = NULL;
                    b_57 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        z_56 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(b_57);
                    w_56 = t;
                    t = z_56;
                    t = mark_buv_0_0(t);
                    a_57 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, a_57);
                    s_11 = t;
                    t = SSLsetAnnotations(s_11, w_56);
                  }
                }
              else
                {
                  t = c_47;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_6 (ATerm r_31, ATerm s_31, ATerm t_31, ATerm t)
{
  ATerm c_57 = NULL,e_57 = NULL,f_57 = NULL;
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_31, s_31);
  t = o_7(r_31, s_31, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_47 = ATgetFirst((ATermList) t);
      c_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_57), t_31);
  f_57 = t;
  t = SSL_table_put(r_31, s_31, f_57);
  t = e_57;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
  k_57 = t;
  t = term_m_41;
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_57);
  m_57 = t;
  t = term_g_47;
  n_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_41, (ATerm)ATmakeAppl(sym_Var_1, k_57), term_g_47);
  t = v_6(l_57, m_57, n_57, t);
  t = k_57;
  return(t);
}
static ATerm y_6 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm o_57 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_31, q_31);
  t = o_7(p_31, q_31, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_57 = ATgetFirst((ATermList) t);
      {
        ATerm h_47 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_57;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm f_60 = NULL,h_60 = NULL;
  f_60 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,h_34 = NULL;
        t = term_m_41;
        h_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_41, f_60);
        t = y_6(h_34, f_60, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_47 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_47) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            y_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, h_60);
        z_32 = t;
        t = (ATerm) ATinsert(ATempty, y_32);
        a_33 = t;
        t = SSLsetAnnotations(z_32, a_33);
        LocalPopChoice(j_47);
      }
    else
      {
        t = i_47;
        {
          ATerm l_47 = t;
          int n_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_34 = NULL,o_34 = NULL,s_34 = NULL,y_34 = NULL;
              t = term_m_41;
              y_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_m_41, f_60);
              t = y_6(y_34, f_60, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm o_47 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) o_47) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  n_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, h_60);
              o_34 = t;
              t = (ATerm) ATinsert(ATempty, n_34);
              s_34 = t;
              t = SSLsetAnnotations(o_34, s_34);
              LocalPopChoice(n_47);
            }
          else
            {
              t = l_47;
              {
                ATerm i_35 = NULL,k_35 = NULL,l_35 = NULL,u_35 = NULL;
                t = term_m_41;
                u_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_41, f_60);
                t = y_6(u_35, f_60, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm q_47 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_47) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    i_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, h_60);
                k_35 = t;
                t = (ATerm) ATinsert(ATempty, i_35);
                l_35 = t;
                t = SSLsetAnnotations(k_35, l_35);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,j_13 = NULL;
  ATerm r_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(u_47);
    }
  else
    {
      t = r_47;
    }
  q_60 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_60);
  n_60 = t;
  t = o_60;
  t = DeclareBound_0_0(t);
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_60);
  j_13 = t;
  t = SSLsetAnnotations(j_13, n_60);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm v_47 = t;
  int w_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,o_13 = NULL;
      v_60 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_60);
      t_60 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_60);
      o_13 = t;
      t = SSLsetAnnotations(o_13, t_60);
      LocalPopChoice(w_47);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = v_47;
      {
        ATerm y_47 = t;
        int z_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,p_13 = NULL;
            e_61 = t;
            if(match_cons(t, sym_App_2))
              {
                c_61 = ATgetArgument(t, 0);
                d_61 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_61);
            b_61 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, c_61, d_61);
            p_13 = t;
            t = SSLsetAnnotations(p_13, b_61);
            LocalPopChoice(z_47);
            {
              ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,l_61 = NULL,m_61 = NULL,y_13 = NULL;
              m_61 = t;
              if(match_cons(t, sym_App_2))
                {
                  g_61 = ATgetArgument(t, 0);
                  h_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_61);
              f_61 = t;
              t = g_61;
              t = mark_buv_0_0(t);
              i_61 = t;
              t = h_61;
              t = mark_build_vars_0_0(t);
              l_61 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, i_61, l_61);
              y_13 = t;
              t = SSLsetAnnotations(y_13, f_61);
            }
          }
        else
          {
            t = y_47;
            {
              ATerm b_48 = t;
              int c_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_61 = NULL,o_61 = NULL,r_61 = NULL,z_13 = NULL;
                  r_61 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      o_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_61);
                  n_61 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, o_61);
                  z_13 = t;
                  t = SSLsetAnnotations(z_13, n_61);
                  LocalPopChoice(c_48);
                  {
                    ATerm s_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,f_14 = NULL;
                    b_62 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        z_61 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(b_62);
                    s_61 = t;
                    t = z_61;
                    t = mark_buv_0_0(t);
                    a_62 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, a_62);
                    f_14 = t;
                    t = SSLsetAnnotations(f_14, s_61);
                  }
                }
              else
                {
                  t = b_48;
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
  ATerm d_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_66 = NULL,g_66 = NULL;
      f_66 = t;
      if(match_cons(t, sym_Match_1))
        {
          g_66 = ATgetArgument(t, 0);
          {
            ATerm b_36 = NULL,l_36 = NULL,v_14 = NULL;
            t = SSLgetAnnotations(f_66);
            b_36 = t;
            t = g_66;
            t = mark_match_vars_0_0(t);
            l_36 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, l_36);
            v_14 = t;
            t = SSLsetAnnotations(v_14, b_36);
          }
        }
      else
        {
          ATerm v_36 = NULL,h_37 = NULL,w_14 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              g_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_66);
          v_36 = t;
          t = g_66;
          t = mark_build_vars_0_0(t);
          h_37 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, h_37);
          w_14 = t;
          t = SSLsetAnnotations(w_14, v_36);
        }
      LocalPopChoice(e_48);
    }
  else
    {
      t = d_48;
      {
        ATerm f_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(g_48);
          }
        else
          {
            t = f_48;
            {
              ATerm j_48 = t;
              int l_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(l_48);
                }
              else
                {
                  t = j_48;
                  {
                    ATerm m_48 = t;
                    int n_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(n_48);
                      }
                    else
                      {
                        t = m_48;
                        {
                          ATerm p_48 = t;
                          int t_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,n_66 = NULL;
                              h_66 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  i_66 = ATgetArgument(t, 0);
                                  j_66 = ATgetArgument(t, 1);
                                  k_66 = ATgetArgument(t, 2);
                                  n_66 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = h_66;
                              t = s_6(i_66, j_66, k_66, n_66, t);
                              LocalPopChoice(t_48);
                            }
                          else
                            {
                              t = p_48;
                              {
                                ATerm u_48 = t;
                                int w_48 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(w_48);
                                  }
                                else
                                  {
                                    t = u_48;
                                    {
                                      ATerm x_48 = t;
                                      int y_48 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_66 = NULL,f_67 = NULL,g_67 = NULL,k_67 = NULL,l_67 = NULL,n_67 = NULL,u_67 = NULL;
                                          k_67 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              l_67 = ATgetArgument(t, 0);
                                              t = l_67;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  y_66 = ATgetArgument(t, 0);
                                                  f_67 = ATgetArgument(t, 1);
                                                  g_67 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = k_67;
                                              t = r_6(y_66, f_67, g_67, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  l_67 = ATgetArgument(t, 0);
                                                  t = l_67;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      y_66 = ATgetArgument(t, 0);
                                                      f_67 = ATgetArgument(t, 1);
                                                      g_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = k_67;
                                                  t = q_6(y_66, f_67, g_67, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      l_67 = ATgetArgument(t, 0);
                                                      n_67 = ATgetArgument(t, 1);
                                                      u_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = k_67;
                                                  t = p_6(l_67, n_67, u_67, t);
                                                }
                                            }
                                          LocalPopChoice(y_48);
                                        }
                                      else
                                        {
                                          t = x_48;
                                          {
                                            ATerm z_48 = t;
                                            int c_49 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(c_49);
                                              }
                                            else
                                              {
                                                t = z_48;
                                                {
                                                  ATerm d_49 = t;
                                                  int e_49 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(e_49);
                                                    }
                                                  else
                                                    {
                                                      t = d_49;
                                                      {
                                                        ATerm i_49 = t;
                                                        int n_49 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm l_68 = NULL;
                                                            l_68 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm p_49 = ATgetArgument(t, 0);
                                                                ATerm t_49 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = l_68;
                                                            t = o_6(t);
                                                            LocalPopChoice(n_49);
                                                          }
                                                        else
                                                          {
                                                            t = i_49;
                                                            {
                                                              ATerm u_49 = t;
                                                              int x_49 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(x_49);
                                                                }
                                                              else
                                                                {
                                                                  t = u_49;
                                                                  {
                                                                    ATerm y_49 = t;
                                                                    int z_49 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(z_49);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_49;
                                                                        {
                                                                          ATerm d_50 = t;
                                                                          int e_50 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(e_50);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_50;
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
static ATerm z_6 (ATerm e_31, ATerm f_31, ATerm d_31, ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_31, f_31);
  {
    ATerm f_50 = t;
    int g_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_50 = ATgetArgument(t, 0);
            ATerm j_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_31, f_31);
        t = o_7(e_31, f_31, t);
        LocalPopChoice(g_50);
      }
    else
      {
        t = f_50;
        t = (ATerm) ATempty;
      }
  }
  s_68 = t;
  t = (ATerm) ATinsert(CheckATermList(s_68), d_31);
  t_68 = t;
  t = SSL_table_put(e_31, f_31, t_68);
  t = r_68;
  return(t);
}
static ATerm a_7 (ATerm o_91 (ATerm), ATerm a_30, ATerm y_29, ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,d_69 = NULL,f_69 = NULL;
  a_69 = t;
  t = o_91(t);
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_68, a_30, y_29);
  t = z_6(x_68, a_30, y_29, t);
  {
    ATerm l_50 = t;
    int m_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_69 = NULL;
        t = term_n_50;
        h_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_68, term_n_50);
        t = o_7(x_68, h_69, t);
        LocalPopChoice(m_50);
      }
    else
      {
        t = l_50;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_68 = ATgetFirst((ATermList) t);
      z_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_50;
  d_69 = t;
  t = (ATerm) ATinsert(CheckATermList(z_68), (ATerm) ATinsert(CheckATermList(y_68), a_30));
  f_69 = t;
  t = SSL_table_put(x_68, d_69, f_69);
  t = a_69;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_69);
  j_69 = t;
  t = term_q_50;
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_69), term_q_50);
  t = a_7(k_13, j_69, k_69, t);
  t = i_69;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm l_69 = NULL,n_69 = NULL,q_69 = NULL,t_69 = NULL,u_69 = NULL,b_15 = NULL;
  u_69 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_69 = ATgetArgument(t, 0);
      q_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_69);
  l_69 = t;
  t = q_69;
  {
    static ATerm m_14 (ATerm t)
    {
      ATerm v_69 = NULL;
      v_69 = t;
      t = n_69;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = v_69;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(l_14, m_14, t);
  }
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, n_69, t_69);
  b_15 = t;
  t = SSLsetAnnotations(b_15, l_69);
  return(t);
}
ATerm tboundin_3_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL,c_75 = NULL,n_75 = NULL,y_75 = NULL;
  n_75 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_75 = ATgetArgument(t, 0);
      t_74 = ATgetArgument(t, 1);
      {
        ATerm t_37 = NULL,y_37 = NULL,z_37 = NULL,d_15 = NULL;
        t = SSLgetAnnotations(n_75);
        t_37 = t;
        t = y_75;
        t = o_108(t);
        y_37 = t;
        t = t_74;
        t = m_108(t);
        z_37 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, y_37, z_37);
        d_15 = t;
        t = SSLsetAnnotations(d_15, t_37);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_75 = ATgetArgument(t, 0);
          t_74 = ATgetArgument(t, 1);
          u_74 = ATgetArgument(t, 2);
          c_75 = ATgetArgument(t, 3);
          {
            ATerm v_38 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,q_39 = NULL,k_15 = NULL;
            t = SSLgetAnnotations(n_75);
            v_38 = t;
            t = y_75;
            t = o_108(t);
            m_39 = t;
            t = t_74;
            t = o_108(t);
            n_39 = t;
            t = u_74;
            t = o_108(t);
            o_39 = t;
            t = c_75;
            t = m_108(t);
            q_39 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, m_39, n_39, o_39, q_39);
            k_15 = t;
            t = SSLsetAnnotations(k_15, v_38);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              y_75 = ATgetArgument(t, 0);
              t_74 = ATgetArgument(t, 1);
              u_74 = ATgetArgument(t, 2);
              c_75 = ATgetArgument(t, 3);
              {
                ATerm c_40 = NULL,q_40 = NULL,r_40 = NULL,u_40 = NULL,v_40 = NULL,h_16 = NULL;
                t = SSLgetAnnotations(n_75);
                c_40 = t;
                t = y_75;
                t = o_108(t);
                q_40 = t;
                t = t_74;
                t = o_108(t);
                r_40 = t;
                t = u_74;
                t = o_108(t);
                u_40 = t;
                t = c_75;
                t = m_108(t);
                v_40 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, q_40, r_40, u_40, v_40);
                h_16 = t;
                t = SSLsetAnnotations(h_16, c_40);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  y_75 = ATgetArgument(t, 0);
                  {
                    ATerm y_41 = NULL,a_42 = NULL,k_16 = NULL;
                    t = SSLgetAnnotations(n_75);
                    y_41 = t;
                    t = y_75;
                    t = m_108(t);
                    a_42 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, a_42);
                    k_16 = t;
                    t = SSLsetAnnotations(k_16, y_41);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      y_75 = ATgetArgument(t, 0);
                      {
                        ATerm i_42 = NULL,k_42 = NULL,l_16 = NULL;
                        t = SSLgetAnnotations(n_75);
                        i_42 = t;
                        t = y_75;
                        t = m_108(t);
                        k_42 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, k_42);
                        l_16 = t;
                        t = SSLsetAnnotations(l_16, i_42);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          y_75 = ATgetArgument(t, 0);
                          {
                            ATerm z_42 = NULL,c_43 = NULL,m_16 = NULL;
                            t = SSLgetAnnotations(n_75);
                            z_42 = t;
                            t = y_75;
                            t = m_108(t);
                            c_43 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, c_43);
                            m_16 = t;
                            t = SSLsetAnnotations(m_16, z_42);
                          }
                        }
                      else
                        {
                          ATerm k_43 = NULL,o_43 = NULL,n_16 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              y_75 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(n_75);
                          k_43 = t;
                          t = y_75;
                          t = m_108(t);
                          o_43 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, o_43);
                          n_16 = t;
                          t = SSLsetAnnotations(n_16, k_43);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm map_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  static ATerm o_77 (ATerm t)
  {
    ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
    l_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_77;
      }
    else
      {
        ATerm h_44 = NULL,k_44 = NULL,v_44 = NULL,w_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_77 = ATgetFirst((ATermList) t);
            n_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_77);
        h_44 = t;
        t = m_77;
        t = u_87(t);
        k_44 = t;
        t = n_77;
        t = o_77(t);
        v_44 = t;
        t = (ATerm) ATinsert(CheckATermList(v_44), k_44);
        w_16 = t;
        t = SSLsetAnnotations(w_16, h_44);
      }
    return(t);
  }
  t = o_77(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm v_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_78);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm r_50 = t;
  int s_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_50);
    }
  else
    {
      t = r_50;
      {
        ATerm t_50 = t;
        int v_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_50);
          }
        else
          {
            t = t_50;
            {
              ATerm b_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_79 = ATgetArgument(t, 0);
                  e_79 = ATgetArgument(t, 1);
                  f_79 = ATgetArgument(t, 2);
                  g_79 = ATgetArgument(t, 3);
                  t = f_79;
                  t = map_1_0(u_14, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_79 = ATgetArgument(t, 0);
                      e_79 = ATgetArgument(t, 1);
                      f_79 = ATgetArgument(t, 2);
                      g_79 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_79;
                  t = map_1_0(z_14, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm v_79 = NULL;
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_79 = ATgetArgument(t, 0);
          {
            ATerm y_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_50);
      t = v_79;
    }
  else
    {
      t = w_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_79;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm m_80 = NULL;
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_80 = ATgetArgument(t, 0);
          {
            ATerm d_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_51);
      t = m_80;
    }
  else
    {
      t = z_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_80;
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm x_80 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_80);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm e_51 = t;
  int f_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_51);
    }
  else
    {
      t = e_51;
      {
        ATerm g_51 = t;
        int h_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_51);
          }
        else
          {
            t = g_51;
            {
              ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_81 = ATgetArgument(t, 0);
                  c_81 = ATgetArgument(t, 1);
                  d_81 = ATgetArgument(t, 2);
                  e_81 = ATgetArgument(t, 3);
                  t = d_81;
                  t = map_1_0(e_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_81 = ATgetArgument(t, 0);
                      c_81 = ATgetArgument(t, 1);
                      d_81 = ATgetArgument(t, 2);
                      e_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_81;
                  t = map_1_0(f_15, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm u_81 = NULL;
  ATerm k_51 = t;
  int m_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_81 = ATgetArgument(t, 0);
          {
            ATerm n_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_51);
      t = u_81;
    }
  else
    {
      t = k_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_81;
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm j_82 = NULL;
  ATerm o_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_82 = ATgetArgument(t, 0);
          {
            ATerm v_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_51);
      t = j_82;
    }
  else
    {
      t = o_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_82;
    }
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm p_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_82);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm z_51 = t;
  int a_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_52);
    }
  else
    {
      t = z_51;
      {
        ATerm b_52 = t;
        int d_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_52);
          }
        else
          {
            t = b_52;
            {
              ATerm s_82 = NULL,t_82 = NULL,b_83 = NULL,c_83 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_82 = ATgetArgument(t, 0);
                  t_82 = ATgetArgument(t, 1);
                  b_83 = ATgetArgument(t, 2);
                  c_83 = ATgetArgument(t, 3);
                  t = b_83;
                  t = map_1_0(q_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_82 = ATgetArgument(t, 0);
                      t_82 = ATgetArgument(t, 1);
                      b_83 = ATgetArgument(t, 2);
                      c_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_83;
                  t = map_1_0(i_16, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm m_83 = NULL;
  ATerm e_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_83 = ATgetArgument(t, 0);
          {
            ATerm m_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_52);
      t = m_83;
    }
  else
    {
      t = e_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_83;
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm v_83 = NULL;
  ATerm n_52 = t;
  int o_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_83 = ATgetArgument(t, 0);
          {
            ATerm q_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_52);
      t = v_83;
    }
  else
    {
      t = n_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_83;
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm z_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_83);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm r_52 = t;
  int t_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_52);
    }
  else
    {
      t = r_52;
      {
        ATerm u_52 = t;
        int v_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_52);
          }
        else
          {
            t = u_52;
            {
              ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_84 = ATgetArgument(t, 0);
                  c_84 = ATgetArgument(t, 1);
                  d_84 = ATgetArgument(t, 2);
                  e_84 = ATgetArgument(t, 3);
                  t = d_84;
                  t = map_1_0(q_16, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_84 = ATgetArgument(t, 0);
                      c_84 = ATgetArgument(t, 1);
                      d_84 = ATgetArgument(t, 2);
                      e_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_84;
                  t = map_1_0(r_16, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm l_84 = NULL;
  ATerm x_52 = t;
  int y_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_84 = ATgetArgument(t, 0);
          {
            ATerm z_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_52);
      t = l_84;
    }
  else
    {
      t = x_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_84;
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm u_84 = NULL;
  ATerm b_53 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_84 = ATgetArgument(t, 0);
          {
            ATerm d_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_53);
      t = u_84;
    }
  else
    {
      t = b_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_84;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm p_78 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      p_78 = ATgetArgument(t, 0);
      t = p_78;
      t = free_vars_3_0(q_14, s_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          p_78 = ATgetArgument(t, 0);
          t = p_78;
          t = free_vars_3_0(a_15, c_15, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              p_78 = ATgetArgument(t, 0);
              t = p_78;
              t = free_vars_3_0(h_15, l_15, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_78 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_78;
              t = free_vars_3_0(o_16, p_16, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm j_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_85);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm e_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_53);
    }
  else
    {
      t = e_53;
      {
        ATerm g_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_53);
          }
        else
          {
            t = g_53;
            {
              ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_85 = ATgetArgument(t, 0);
                  m_85 = ATgetArgument(t, 1);
                  n_85 = ATgetArgument(t, 2);
                  o_85 = ATgetArgument(t, 3);
                  t = n_85;
                  t = map_1_0(u_16, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_85 = ATgetArgument(t, 0);
                      m_85 = ATgetArgument(t, 1);
                      n_85 = ATgetArgument(t, 2);
                      o_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_85;
                  t = map_1_0(x_16, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm v_85 = NULL;
  ATerm i_53 = t;
  int j_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_85 = ATgetArgument(t, 0);
          {
            ATerm k_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_53);
      t = v_85;
    }
  else
    {
      t = i_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_85;
    }
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm e_86 = NULL;
  ATerm p_53 = t;
  int q_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_86 = ATgetArgument(t, 0);
          {
            ATerm w_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_53);
      t = e_86;
    }
  else
    {
      t = p_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_86;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm c_85 = NULL,g_85 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      g_85 = ATgetArgument(t, 0);
      t = g_85;
      if(match_cons(t, sym_Rule_3))
        {
          c_85 = ATgetArgument(t, 0);
          {
            ATerm x_53 = ATgetArgument(t, 1);
          }
          {
            ATerm e_54 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = c_85;
      t = free_vars_3_0(s_16, t_16, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          g_85 = ATgetArgument(t, 0);
          {
            ATerm f_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_85;
    }
  return(t);
}
static ATerm e_7 (ATerm j_87 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm x_86 (ATerm t)
  {
    ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
    s_86 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_86 = ATgetFirst((ATermList) t);
            u_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_54 = t;
          int k_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_86;
              {
                static ATerm z_16 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = f_7(j_87, z_16, t_86, u_86, t);
              }
              t = x_86(t);
              LocalPopChoice(k_54);
            }
          else
            {
              t = h_54;
              {
                ATerm l_45 = NULL,p_45 = NULL,y_16 = NULL;
                t = SSLgetAnnotations(s_86);
                l_45 = t;
                t = u_86;
                t = x_86(t);
                p_45 = t;
                t = (ATerm) ATinsert(CheckATermList(p_45), t_86);
                y_16 = t;
                t = SSLsetAnnotations(y_16, l_45);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = x_86(t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL;
  a_87 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_87;
      t = e_90(t);
    }
  else
    {
      ATerm h_87 = NULL,i_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_87 = ATgetFirst((ATermList) t);
          c_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_87;
      t = g_90(t);
      h_87 = t;
      t = c_87;
      t = foldr_3_0(e_90, f_90, g_90, t);
      i_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_87, i_87);
      t = f_90(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  static ATerm s_88 (ATerm t)
  {
    ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
    p_88 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_88 = ATgetFirst((ATermList) t);
        r_88 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_54 = t;
      int o_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_46 = NULL,t_46 = NULL,a_17 = NULL;
          t = SSLgetAnnotations(p_88);
          q_46 = t;
          t = q_88;
          t = e_88(t);
          t_46 = t;
          t = (ATerm) ATinsert(CheckATermList(r_88), t_46);
          a_17 = t;
          t = SSLsetAnnotations(a_17, q_46);
          LocalPopChoice(o_54);
        }
      else
        {
          t = n_54;
          {
            ATerm b_47 = NULL,m_47 = NULL,b_17 = NULL;
            t = SSLgetAnnotations(p_88);
            b_47 = t;
            t = r_88;
            t = s_88(t);
            m_47 = t;
            t = (ATerm) ATinsert(CheckATermList(m_47), q_88);
            b_17 = t;
            t = SSLsetAnnotations(b_17, b_47);
          }
        }
    }
    return(t);
  }
  t = s_88(t);
  return(t);
}
static ATerm f_7 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = n_87(t);
  {
    static ATerm c_17 (ATerm t)
    {
      ATerm v_88 = NULL;
      v_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, v_88);
      t = m_87(t);
      return(t);
    }
    t = fetch_1_0(c_17, t);
  }
  t = p_24;
  return(t);
}
static ATerm g_7 (ATerm e_87 (ATerm), ATerm k_24, ATerm j_24, ATerm t)
{
  static ATerm l_89 (ATerm t)
  {
    ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL;
    g_89 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_89;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_89 = ATgetFirst((ATermList) t);
            i_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_54 = t;
          int q_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_89;
              {
                static ATerm d_17 (ATerm t)
                {
                  t = j_24;
                  return(t);
                }
                t = f_7(e_87, d_17, h_89, i_89, t);
              }
              t = l_89(t);
              LocalPopChoice(q_54);
            }
          else
            {
              t = p_54;
              {
                ATerm x_47 = NULL,a_48 = NULL,f_17 = NULL;
                t = SSLgetAnnotations(g_89);
                x_47 = t;
                t = i_89;
                t = l_89(t);
                a_48 = t;
                t = (ATerm) ATinsert(CheckATermList(a_48), h_89);
                f_17 = t;
                t = SSLsetAnnotations(f_17, x_47);
              }
            }
        }
      }
    return(t);
  }
  t = k_24;
  t = l_89(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  static ATerm k_90 (ATerm t)
  {
    ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
    j_90 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_90 = ATgetFirst((ATermList) t);
        i_90 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_48 = NULL,v_48 = NULL,h_17 = NULL;
          t = SSLgetAnnotations(j_90);
          s_48 = t;
          t = i_90;
          t = k_90(t);
          v_48 = t;
          t = (ATerm) ATinsert(CheckATermList(v_48), h_90);
          h_17 = t;
          t = SSLsetAnnotations(h_17, s_48);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_90;
        t = l_88(t);
      }
    return(t);
  }
  t = k_90(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL;
  o_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_89;
    }
  else
    {
      static ATerm e_17 (ATerm t)
      {
        t = not_null(q_89);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_89 = ATgetFirst((ATermList) t);
          if(((q_89 != NULL) && (q_89 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_89;
      t = at_end_1_0(e_17, t);
    }
  return(t);
}
static ATerm w_90 (ATerm o_90, ATerm t)
{
  ATerm p_90 = NULL;
  t = SSL_explode_term(o_90);
  if(match_cons(t, sym__2))
    {
      ATerm r_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_90;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL;
  t_90 = t;
  if(match_cons(t, sym__2))
    {
      r_90 = ATgetArgument(t, 0);
      s_90 = ATgetArgument(t, 1);
      {
        ATerm s_54 = t;
        int t_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_17 (ATerm t)
            {
              t = s_90;
              return(t);
            }
            t = r_90;
            t = at_end_1_0(g_17, t);
            LocalPopChoice(t_54);
          }
        else
          {
            t = s_54;
            t = w_90(t_90, t);
          }
      }
    }
  else
    {
      t = w_90(t_90, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  static ATerm d_91 (ATerm t)
  {
    ATerm u_54 = t;
    int v_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_102(t);
        LocalPopChoice(v_54);
      }
    else
      {
        t = u_54;
        {
          ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,l_17 = NULL;
          t = q_102(t);
          c_91 = t;
          if(match_cons(t, sym__2))
            {
              y_90 = ATgetArgument(t, 0);
              z_90 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_91);
          x_90 = t;
          t = y_90;
          t = s_102(t);
          a_91 = t;
          t = z_90;
          t = d_91(t);
          b_91 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_91, b_91);
          l_17 = t;
          t = SSLsetAnnotations(l_17, x_90);
          t = r_102(t);
        }
      }
    return(t);
  }
  t = d_91(t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_54 = ATgetArgument(t, 0);
      if(((ATgetType(w_54) != AT_LIST) || !(ATisEmpty(w_54))))
        _fail(t);
      {
        ATerm x_54 = ATgetArgument(t, 1);
        if(((ATgetType(x_54) != AT_LIST) || !(ATisEmpty(x_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm p_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_54 = ATgetArgument(t, 0);
      if(((ATgetType(y_54) == AT_LIST) && !(ATisEmpty(y_54))))
        {
          p_91 = ATgetFirst((ATermList) y_54);
          r_91 = (ATerm) ATgetNext((ATermList) y_54);
        }
      else
        _fail(t);
      {
        ATerm a_55 = ATgetArgument(t, 1);
        if(((ATgetType(a_55) == AT_LIST) && !(ATisEmpty(a_55))))
          {
            s_91 = ATgetFirst((ATermList) a_55);
            t_91 = (ATerm) ATgetNext((ATermList) a_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_91, s_91), (ATerm) ATmakeAppl(sym__2, r_91, t_91));
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL;
  if(match_cons(t, sym__2))
    {
      u_91 = ATgetArgument(t, 0);
      v_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_91), u_91);
  return(t);
}
static ATerm l_7 (ATerm q_652, ATerm v_652, ATerm l_62, ATerm t)
{
  ATerm f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL;
  t = SSL_explode_term(v_652);
  if(match_cons(t, sym__2))
    {
      f_91 = ATgetArgument(t, 0);
      h_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_652);
  if(match_cons(t, sym__2))
    {
      if((f_91 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_91, h_91);
  t = genzip_4_0(i_17, k_17, m_17, _id, t);
  i_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_91, l_62);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t)
{
  static ATerm y_91 (ATerm t)
  {
    ATerm b_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_100(t);
        LocalPopChoice(c_55);
      }
    else
      {
        t = b_55;
        t = p_100(t);
        t = y_91(t);
      }
    return(t);
  }
  t = y_91(t);
  return(t);
}
ATerm for_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  t = r_100(t);
  t = while_not_2_0(s_100, t_100, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm f_92 = NULL;
  f_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_92);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL,o_17 = NULL;
  j_92 = t;
  if(match_cons(t, sym__2))
    {
      h_92 = ATgetArgument(t, 0);
      i_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_92);
  g_92 = t;
  t = i_92;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_92, i_92);
  o_17 = t;
  t = SSLsetAnnotations(o_17, g_92);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL;
  c_93 = t;
  if(match_cons(t, sym__2))
    {
      d_93 = ATgetArgument(t, 0);
      e_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_93 = ATgetFirst((ATermList) t);
      g_93 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_55 = t;
        int e_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_93(d_93, e_93, c_93, t);
            LocalPopChoice(e_55);
          }
        else
          {
            t = d_55;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_93), f_93), g_93);
          }
      }
    }
  else
    {
      t = s_93(d_93, e_93, c_93, t);
    }
  return(t);
}
static ATerm s_93 (ATerm k_92, ATerm l_92, ATerm m_92, ATerm t)
{
  ATerm n_92 = NULL,q_92 = NULL,q_17 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL;
  t = SSLgetAnnotations(m_92);
  n_92 = t;
  t = l_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_92 = ATgetFirst((ATermList) t);
      w_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_92;
  if(match_cons(t, sym__2))
    {
      u_92 = ATgetArgument(t, 0);
      v_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_55 = t;
    int g_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_92;
        if((u_92 != t))
          {
            _fail(t);
          }
        t = w_92;
        LocalPopChoice(g_55);
      }
    else
      {
        t = f_55;
        t = l_92;
        t = l_7(u_92, v_92, w_92, t);
      }
  }
  q_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_92, q_92);
  q_17 = t;
  t = SSLsetAnnotations(q_17, n_92);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm r_93 = NULL;
  if(match_cons(t, sym__2))
    {
      r_93 = ATgetArgument(t, 0);
      if((r_93 != ATgetArgument(t, 1)))
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
  ATerm h_55 = t;
  int i_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(n_17, s_17, t_17, t);
      LocalPopChoice(i_55);
    }
  else
    {
      t = h_55;
      {
        ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL;
        k_93 = t;
        if(match_cons(t, sym__2))
          {
            l_93 = ATgetArgument(t, 0);
            m_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_93;
        t = g_7(u_17, l_93, m_93, t);
      }
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  if(match_cons(t, sym__2))
    {
      f_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(p_18, f_49, g_49, t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm h_49 = NULL;
  if(match_cons(t, sym__2))
    {
      h_49 = ATgetArgument(t, 0);
      if((h_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  if(match_cons(t, sym__2))
    {
      a_50 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(v_18, a_50, b_50, t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm c_50 = NULL;
  if(match_cons(t, sym__2))
    {
      c_50 = ATgetArgument(t, 0);
      if((c_50 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm g_94 (ATerm t)
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_111(t);
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        {
          ATerm l_55 = t;
          int n_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_93 = NULL,v_93 = NULL,a_49 = NULL,b_49 = NULL;
              u_93 = t;
              t = p_111(t);
              v_93 = t;
              t = u_93;
              {
                static ATerm w_17 (ATerm t)
                {
                  ATerm x_93 = NULL;
                  t = g_94(t);
                  x_93 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_93, v_93);
                  t = diff_0_0(t);
                  return(t);
                }
                t = q_111(w_17, g_94, a_18, t);
              }
              b_49 = t;
              t = SSL_explode_term(b_49);
              if(match_cons(t, sym__2))
                {
                  ATerm o_55 = ATgetArgument(t, 0);
                  a_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_49;
              t = foldr_3_0(f_18, k_18, _id, t);
              LocalPopChoice(n_55);
            }
          else
            {
              t = l_55;
              {
                ATerm l_49 = NULL,m_49 = NULL;
                m_49 = t;
                t = SSL_explode_term(m_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_55 = ATgetArgument(t, 0);
                    l_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_49;
                t = foldr_3_0(q_18, s_18, g_94, t);
              }
            }
        }
      }
    return(t);
  }
  t = g_94(t);
  return(t);
}
ATerm topdown_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  static ATerm w_18 (ATerm t)
  {
    t = topdown_1_0(x_91, t);
    return(t);
  }
  t = x_91(t);
  t = SRTS_all(w_18, t);
  return(t);
}
static ATerm n_7 (ATerm j_31, ATerm k_31, ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL;
  i_94 = t;
  {
    ATerm q_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_31, k_31);
        t = o_7(j_31, k_31, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_55 = ATgetFirst((ATermList) t);
            h_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_55);
        t = SSL_table_put(j_31, k_31, h_94);
        t = (ATerm) ATmakeAppl(sym__3, j_31, k_31, h_94);
      }
    else
      {
        t = q_55;
        t = SSL_table_remove(j_31, k_31);
        t = (ATerm) ATmakeAppl(sym__2, j_31, k_31);
      }
  }
  t = i_94;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_91 (ATerm), ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL;
  m_94 = t;
  t = l_91(t);
  l_94 = t;
  {
    ATerm x_55 = t;
    int y_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_94 = NULL;
        t = term_n_50;
        o_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_94, term_n_50);
        t = o_7(l_94, o_94, t);
        LocalPopChoice(y_55);
      }
    else
      {
        t = x_55;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_94 = ATgetFirst((ATermList) t);
      j_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_50;
  n_94 = t;
  t = SSL_table_put(l_94, n_94, j_94);
  t = k_94;
  {
    static ATerm x_18 (ATerm t)
    {
      ATerm p_94 = NULL;
      p_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_94, p_94);
      t = n_7(l_94, p_94, t);
      return(t);
    }
    t = map_1_0(x_18, t);
  }
  t = m_94;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  ATerm z_55 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_105(t);
      t = r_105(t);
      LocalPopChoice(d_56);
    }
  else
    {
      t = z_55;
      t = r_105(t);
      _fail(t);
    }
  return(t);
}
static ATerm o_7 (ATerm v_32, ATerm w_32, ATerm t)
{
  t = SSL_table_get(v_32, w_32);
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL;
  s_94 = t;
  t = k_91(t);
  r_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_94, term_n_50);
  {
    ATerm h_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_94 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_56 = ATgetArgument(t, 0);
            ATerm o_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_50;
        z_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_94, term_n_50);
        t = o_7(r_94, z_94, t);
        LocalPopChoice(i_56);
      }
    else
      {
        t = h_56;
        t = (ATerm) ATempty;
      }
  }
  t_94 = t;
  t = term_n_50;
  u_94 = t;
  t = (ATerm) ATinsert(CheckATermList(t_94), (ATerm) ATempty);
  v_94 = t;
  t = SSL_table_put(r_94, u_94, v_94);
  t = s_94;
  return(t);
}
ATerm scope_2_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm t)
{
  static ATerm y_18 (ATerm t)
  {
    t = end_scope_1_0(m_91, t);
    return(t);
  }
  t = begin_scope_1_0(m_91, t);
  t = restore_always_2_0(n_91, y_18, t);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = scope_2_0(b_19, c_19, t);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  t = term_m_41;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL;
  t = topdown_1_0(d_19, t);
  k_95 = t;
  t = free_vars_3_0(e_19, g_19, tboundin_3_0, t);
  j_95 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, j_95, k_95);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm p_56 = ATgetArgument(t, 0);
      i_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_95;
  {
    ATerm q_56 = t;
    int x_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(x_56);
      }
    else
      {
        t = q_56;
        {
          ATerm y_56 = t;
          int d_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(d_57);
            }
          else
            {
              t = y_56;
              {
                ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    u_96 = ATgetArgument(t, 0);
                    v_96 = ATgetArgument(t, 1);
                    w_96 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = i_95;
                t = n_6(u_96, v_96, w_96, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm d_19 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL;
  s_95 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_95 = ATgetArgument(t, 0);
      {
        ATerm g_57 = t;
        int h_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_50 = NULL,k_50 = NULL,v_17 = NULL;
            t = SSLgetAnnotations(s_95);
            i_50 = t;
            t = r_95;
            if(match_cons(t, sym_ListVar_1))
              {
                k_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_50);
            v_17 = t;
            t = SSLsetAnnotations(v_17, i_50);
            LocalPopChoice(h_57);
          }
        else
          {
            t = g_57;
            t = s_95;
          }
      }
    }
  else
    {
      t = s_95;
    }
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm v_95 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_95);
  return(t);
}
static ATerm g_19 (ATerm t)
{
  ATerm i_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_57);
    }
  else
    {
      t = i_57;
      {
        ATerm p_57 = t;
        int q_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_57);
          }
        else
          {
            t = p_57;
            {
              ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_95 = ATgetArgument(t, 0);
                  y_95 = ATgetArgument(t, 1);
                  z_95 = ATgetArgument(t, 2);
                  a_96 = ATgetArgument(t, 3);
                  t = z_95;
                  t = map_1_0(h_19, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_95 = ATgetArgument(t, 0);
                      y_95 = ATgetArgument(t, 1);
                      z_95 = ATgetArgument(t, 2);
                      a_96 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_95;
                  t = map_1_0(i_19, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm h_96 = NULL;
  ATerm r_57 = t;
  int s_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_96 = ATgetArgument(t, 0);
          {
            ATerm t_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_57);
      t = h_96;
    }
  else
    {
      t = r_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_96;
    }
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm q_96 = NULL;
  ATerm u_57 = t;
  int v_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_96 = ATgetArgument(t, 0);
          {
            ATerm w_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_57);
      t = q_96;
    }
  else
    {
      t = u_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_96;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm h_95 = NULL;
  h_95 = t;
  t = scope_2_0(z_18, a_19, t);
  t = h_95;
  return(t);
}
ATerm filter_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL;
  m_97 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_97;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_97 = ATgetFirst((ATermList) t);
          o_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_57 = t;
        int y_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_50 = NULL,b_51 = NULL,c_51 = NULL,j_18 = NULL;
            t = SSLgetAnnotations(m_97);
            u_50 = t;
            t = n_97;
            t = p_104(t);
            b_51 = t;
            t = o_97;
            t = filter_1_0(p_104, t);
            c_51 = t;
            t = (ATerm) ATinsert(CheckATermList(c_51), b_51);
            j_18 = t;
            t = SSLsetAnnotations(j_18, u_50);
            LocalPopChoice(y_57);
          }
        else
          {
            t = x_57;
            t = o_97;
            t = filter_1_0(p_104, t);
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm m_28, ATerm n_28, ATerm t)
{
  ATerm z_57 = t;
  int a_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_28, n_28);
      LocalPopChoice(a_58);
    }
  else
    {
      t = z_57;
      t = SSL_addr(m_28, n_28);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL;
  t_97 = t;
  t = n_119(t);
  u_97 = t;
  t = term_q_20;
  v_97 = t;
  t = (ATerm) ATinsert(ATempty, u_97);
  w_97 = t;
  t = SSL_printnl(v_97, w_97);
  t = t_97;
  {
    ATerm b_58 = t;
    int c_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,l_18 = NULL;
        t = o_119(t);
        t = t_97;
        if(match_cons(t, sym__2))
          {
            y_97 = ATgetArgument(t, 0);
            z_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_97);
        x_97 = t;
        t = term_d_58;
        b_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_97, term_d_58);
        t = p_7(y_97, b_98, t);
        a_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_98, z_97);
        l_18 = t;
        t = SSLsetAnnotations(l_18, x_97);
        LocalPopChoice(c_58);
      }
    else
      {
        t = b_58;
        {
          ATerm k_98 = NULL,l_98 = NULL,t_51 = NULL,w_51 = NULL,y_51 = NULL,m_18 = NULL;
          if(match_cons(t, sym__2))
            {
              k_98 = ATgetArgument(t, 0);
              l_98 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_97);
          t_51 = t;
          t = term_d_58;
          y_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_98, term_d_58);
          t = p_7(l_98, y_51, t);
          w_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_98, w_51);
          m_18 = t;
          t = SSLsetAnnotations(m_18, t_51);
        }
      }
  }
  return(t);
}
static ATerm j_19 (ATerm t)
{
  t = term_e_58;
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm f_58 = t;
  int g_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_l_31, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATempty, term_l_25))), term_x_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_e_27, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_21, (ATerm) ATinsert(ATempty, term_x_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_f_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), term_x_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATinsert(ATinsert(ATempty, term_e_26), term_l_25))), term_x_22)))))));
      {
        ATerm h_58 = t;
        if((PushChoice() == 0))
          {
            ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL,r_18 = NULL;
            q_98 = t;
            if(match_cons(t, sym_Strategies_1))
              {
                p_98 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_98);
            o_98 = t;
            t = p_98;
            {
              ATerm i_58 = t;
              int j_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_98;
                  LocalPopChoice(j_58);
                }
              else
                {
                  t = i_58;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_98;
                }
            }
            t = (ATerm) ATmakeAppl(sym_Strategies_1, p_98);
            r_18 = t;
            t = SSLsetAnnotations(r_18, o_98);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_58;
          }
      }
      LocalPopChoice(g_58);
    }
  else
    {
      t = f_58;
      {
        ATerm s_98 = NULL,t_98 = NULL;
        t = term_q_20;
        s_98 = t;
        t = (ATerm) ATinsert(ATempty, term_a_21);
        t_98 = t;
        t = SSL_printnl(s_98, t_98);
        t = term_a_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(j_19, t_19, t);
  return(t);
}
ATerm debug_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL;
  u_98 = t;
  t = k_101(t);
  v_98 = t;
  t = term_q_20;
  w_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_98), v_98);
  x_98 = t;
  t = SSL_printnl(w_98, x_98);
  t = u_98;
  return(t);
}
static ATerm u_19 (ATerm t)
{
  t = term_k_58;
  return(t);
}
static ATerm x_19 (ATerm t)
{
  t = term_l_58;
  return(t);
}
static ATerm y_19 (ATerm t)
{
  t = term_m_58;
  return(t);
}
ATerm test_suite_2_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,u_18 = NULL,t_18 = NULL;
  t = l_119(t);
  t = debug_1_0(u_19, t);
  t = term_o_58;
  t = m_119(t);
  h_99 = t;
  if(match_cons(t, sym__2))
    {
      c_99 = ATgetArgument(t, 0);
      d_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_99);
  b_99 = t;
  t = c_99;
  t = debug_1_0(x_19, t);
  e_99 = t;
  t = d_99;
  t = debug_1_0(y_19, t);
  f_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_99, f_99);
  t_18 = t;
  t = SSLsetAnnotations(t_18, b_99);
  g_99 = t;
  if(match_cons(t, sym__2))
    {
      z_98 = ATgetArgument(t, 0);
      a_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_99);
  y_98 = t;
  t = a_99;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_98, a_99);
  u_18 = t;
  t = SSLsetAnnotations(u_18, y_98);
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = term_p_58;
  return(t);
}
static ATerm a_20 (ATerm t)
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
  t = test_suite_2_0(z_19, a_20, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_io_0_0(t);
  return(t);
}

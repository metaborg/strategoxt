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
Symbol sym_Path_2;
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
Symbol sym_Path_1;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_x_56;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_k_50;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_v_44;
ATerm term_n_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_j_38;
ATerm term_v_37;
ATerm term_o_37;
ATerm term_x_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_f_36;
ATerm term_s_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_k_35;
ATerm term_e_35;
ATerm term_c_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_i_34;
ATerm term_c_34;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_b_33;
ATerm term_y_32;
ATerm term_t_32;
ATerm term_p_32;
ATerm term_e_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_b_31;
ATerm term_u_30;
ATerm term_q_29;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_k_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_s_27;
ATerm term_i_27;
ATerm term_w_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_f_26;
ATerm term_a_26;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_e_25;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_b_21;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_u_19;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test14a", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("UnEscape", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("'\\'", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Char_1, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Var_1, term_a_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("cs", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Var_1, term_f_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14b", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("testing-main", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rob", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Var_1, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14c", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Match_1, term_r_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13a", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_SortVar_1, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_VarDec_2, term_q_20, term_p_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Build_1, term_r_20);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Str_1, term_n_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13b", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_All_1, term_s_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_21, (ATerm)ATempty, (ATerm)ATempty, term_z_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test13c", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("helper", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, term_f_22, term_g_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Var_1, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Match_1, term_q_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Build_1, term_q_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Var_1, term_b_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Var_1, term_e_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Var_1, term_d_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_q_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Var_1, term_s_23);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Build_1, term_c_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Call_2, term_y_23, (ATerm) ATempty);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Build_1, term_g_23);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Match_1, term_t_23);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test10a", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Var_1, term_n_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Str_1, term_s_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Var_1, term_u_24);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test10b", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Call_2, term_m_25, (ATerm) ATempty);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Match_1, term_w_24);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_25, term_p_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_s_22, term_q_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_27);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Call_2, term_z_27, (ATerm) ATempty);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_LChoice_2, term_n_25, term_c_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_g_28, term_r_22);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_c_28, term_r_22);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_LChoice_2, term_n_25, term_e_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Var_1, term_b_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Match_1, term_d_31);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Str_1, term_h_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Build_1, term_d_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Seq_2, term_q_31, term_n_25);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_App_2, term_n_25, term_d_31);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Match_1, term_p_24);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Var_1, term_g_33);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym__2, term_m_34, (ATerm) ATempty);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_n_34, (ATerm) ATempty);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Defined_2, term_g_44, term_h_44);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym_Defined_2, term_i_47, term_h_44);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym_Defined_2, term_m_50, term_n_50);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym__2, term_v_56, term_v_56);
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm e_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm test14_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm test13_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm test12_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm test11_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm test10_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm test9_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm test8_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
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
static ATerm o_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm test5_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm test4_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm test3_0_0 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm test2_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm q_6 (ATerm l_23, ATerm k_23, ATerm m_23, ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
static ATerm r_6 (ATerm v_36, ATerm w_36, ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm x_115 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm w_115 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm v_115 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm l_90 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm t_6 (ATerm z_63, ATerm a_64, ATerm b_64, ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm u_6 (ATerm t_63, ATerm x_63, ATerm v_63, ATerm t);
static ATerm y_9 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm v_6 (ATerm n_63, ATerm r_63, ATerm p_63, ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm w_6 (ATerm l_62, ATerm m_62, ATerm n_62, ATerm p_62, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm x_6 (ATerm w_60, ATerm x_60, ATerm v_60, ATerm t);
static ATerm a_12 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm y_6 (ATerm z_30, ATerm y_30, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm j_61 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm z_6 (ATerm j_30, ATerm k_30, ATerm l_30, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm c_7 (ATerm h_30, ATerm i_30, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm d_7 (ATerm w_29, ATerm x_29, ATerm v_29, ATerm t);
static ATerm e_7 (ATerm p_88 (ATerm), ATerm o_29, ATerm m_29, ATerm t);
static ATerm v_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t);
ATerm map_1_0 (ATerm d_85 (ATerm), ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm i_7 (ATerm s_84 (ATerm), ATerm c_24, ATerm b_24, ATerm t);
ATerm foldr_3_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm n_85 (ATerm), ATerm t);
static ATerm j_7 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm g_24, ATerm f_24, ATerm t);
static ATerm k_7 (ATerm n_84 (ATerm), ATerm a_24, ATerm z_23, ATerm t);
ATerm at_end_1_0 (ATerm t_85 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_88 (ATerm v_87, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm p_7 (ATerm s_637, ATerm x_637, ATerm t_60, ATerm t);
ATerm while_not_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t);
ATerm for_3_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t);
static ATerm l_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm z_90 (ATerm r_89, ATerm s_89, ATerm t_89, ATerm t);
static ATerm q_16 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
ATerm free_vars_3_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm t_88 (ATerm), ATerm t);
static ATerm r_7 (ATerm b_30, ATerm c_30, ATerm t);
ATerm end_scope_1_0 (ATerm m_88 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm t);
static ATerm s_7 (ATerm n_31, ATerm o_31, ATerm t);
ATerm begin_scope_1_0 (ATerm l_88 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
static ATerm h_18 (ATerm t);
static ATerm j_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm z_18 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_101 (ATerm), ATerm t);
static ATerm t_7 (ATerm a_28, ATerm b_28, ATerm t);
ATerm do_test_2_0 (ATerm c_116 (ATerm), ATerm d_116 (ATerm), ATerm t);
static ATerm b_19 (ATerm t);
static ATerm e_19 (ATerm t);
ATerm test1_0_0 (ATerm t);
ATerm debug_1_0 (ATerm g_98 (ATerm), ATerm t);
static ATerm f_19 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm h_19 (ATerm t);
ATerm test_suite_2_0 (ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm t);
static ATerm k_19 (ATerm t);
static ATerm s_19 (ATerm t);
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
  t = term_u_19;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm v_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_z_19, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_b_20), (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATinsert(ATempty, term_e_20), term_d_20), term_g_20), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, term_e_20), term_g_20)));
      {
        ATerm h_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_20;
          }
      }
      LocalPopChoice(y_19);
    }
  else
    {
      t = v_19;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        t = term_i_20;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        b_0 = t;
        t = SSL_printnl(a_0, b_0);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_p_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_r_20)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_p_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_r_20)));
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm f_0 = NULL,g_0 = NULL;
        t = term_i_20;
        f_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        g_0 = t;
        t = SSL_printnl(f_0, g_0);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_w_20, (ATerm) ATmakeAppl(sym_CallT_3, term_p_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_r_20))));
      {
        ATerm x_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_20;
          }
      }
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm i_0 = NULL,k_0 = NULL;
        t = term_i_20;
        i_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        k_0 = t;
        t = SSL_printnl(i_0, k_0);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test14_0_0 (ATerm t)
{
  t = do_test_2_0(e_1, l_1, t);
  t = do_test_2_0(o_1, q_1, t);
  t = do_test_2_0(u_1, f_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm c_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_k_21, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_q_21), term_s_21)), (ATerm) ATmakeAppl(sym_CallT_3, term_t_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_u_21))));
      {
        ATerm v_21 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_21;
          }
      }
      LocalPopChoice(i_21);
    }
  else
    {
      t = c_21;
      {
        ATerm m_0 = NULL,n_0 = NULL;
        t = term_i_20;
        m_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        n_0 = t;
        t = SSL_printnl(m_0, n_0);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_w_21;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_22;
      t = def_use_def_0_0(t);
      t = term_a_22;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm p_0 = NULL,r_0 = NULL;
        t = term_i_20;
        p_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        r_0 = t;
        t = SSL_printnl(p_0, r_0);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm c_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_h_22), term_z_21));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_h_22), term_z_21));
      LocalPopChoice(e_22);
    }
  else
    {
      t = c_22;
      {
        ATerm t_0 = NULL,v_0 = NULL;
        t = term_i_20;
        t_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        v_0 = t;
        t = SSL_printnl(t_0, v_0);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test13_0_0 (ATerm t)
{
  t = do_test_2_0(g_2, i_2, t);
  t = do_test_2_0(j_2, q_2, t);
  t = do_test_2_0(r_2, s_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_m_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_o_22, (ATerm) ATinsert(ATempty, term_r_22)), (ATerm)ATmakeAppl(sym_Call_2, term_o_22, (ATerm) ATinsert(ATempty, term_s_22)), term_g_22));
      {
        ATerm t_22 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_22;
          }
      }
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm x_0 = NULL,z_0 = NULL;
        t = term_i_20;
        x_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        z_0 = t;
        t = SSL_printnl(x_0, z_0);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(t_2, i_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_23), term_r_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_23), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_g_23), term_f_23)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_23), term_r_20))), term_f_23))))));
      {
        ATerm h_23 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_23;
          }
      }
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm b_1 = NULL,c_1 = NULL;
        t = term_i_20;
        b_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        c_1 = t;
        t = SSL_printnl(b_1, c_1);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm j_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 = NULL,f_1 = NULL,d_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_o_23, (ATerm)ATinsert(ATempty, term_r_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_23), term_r_20)), (ATerm)ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_t_23), term_r_20))), term_f_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_v_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_g_23), term_f_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_d_24, (ATerm) ATmakeAppl(sym_Op_2, term_e_24, (ATerm) ATinsert(ATinsert(ATempty, term_f_23), term_r_20)))), term_h_24))))), term_i_24))))));
      f_1 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm j_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_o_23, (ATerm)ATinsert(ATempty, term_r_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_23), term_r_20)), (ATerm)ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_t_23), term_r_20))), term_f_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_v_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_g_23), term_f_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_d_24, (ATerm) ATmakeAppl(sym_Op_2, term_e_24, (ATerm) ATinsert(ATinsert(ATempty, term_f_23), term_r_20)))), term_h_24))))), term_i_24)))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_o_23, (ATerm)ATinsert(ATempty, term_r_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_23), term_r_20)), (ATerm)ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_t_23), term_r_20))), term_f_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_v_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_g_23), term_f_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_d_24, (ATerm) ATmakeAppl(sym_Op_2, term_e_24, (ATerm) ATinsert(ATinsert(ATempty, term_f_23), term_r_20)))), term_h_24))))), term_i_24))))));
      d_0 = t;
      t = SSLsetAnnotations(d_0, d_1);
      LocalPopChoice(n_23);
    }
  else
    {
      t = j_23;
      {
        ATerm h_1 = NULL,j_1 = NULL;
        t = term_i_20;
        h_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        j_1 = t;
        t = SSL_printnl(h_1, j_1);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(n_3, o_3, t);
  t = do_test_2_0(c_4, d_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_b_23, (ATerm)ATinsert(ATinsert(ATempty, term_n_24), term_p_22), (ATerm) ATmakeAppl(sym_Op_2, term_q_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_24), term_t_24), term_q_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_k_21, (ATerm)ATinsert(ATinsert(ATempty, term_n_24), term_p_22), (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, term_u_21), term_q_22)))))));
      {
        ATerm x_24 = t;
        if((PushChoice() == 0))
          {
            ATerm m_1 = NULL,n_1 = NULL,p_1 = NULL,k_4 = NULL;
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
              ATerm c_25 = t;
              int d_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_1;
                  LocalPopChoice(d_25);
                }
              else
                {
                  t = c_25;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_1;
                }
            }
            t = (ATerm) ATmakeAppl(sym_Overlays_1, n_1);
            k_4 = t;
            t = SSLsetAnnotations(k_4, m_1);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_24;
          }
      }
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm r_1 = NULL,s_1 = NULL;
        t = term_i_20;
        r_1 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        s_1 = t;
        t = SSL_printnl(r_1, s_1);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_e_25;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 = NULL,v_1 = NULL,l_4 = NULL;
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_b_23, (ATerm)ATinsert(ATinsert(ATempty, term_n_24), term_p_22), (ATerm) ATmakeAppl(sym_Op_2, term_q_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), term_t_24), term_q_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_k_21, (ATerm)ATinsert(ATinsert(ATempty, term_n_24), term_p_22), (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, term_u_21), term_q_22)))))));
      v_1 = t;
      if(match_cons(t, sym_Overlays_1))
        {
          ATerm h_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_1);
      t_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_b_23, (ATerm)ATinsert(ATinsert(ATempty, term_n_24), term_p_22), (ATerm) ATmakeAppl(sym_Op_2, term_q_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), term_t_24), term_q_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_k_21, (ATerm)ATinsert(ATinsert(ATempty, term_n_24), term_p_22), (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, term_u_21), term_q_22))))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_b_23, (ATerm)ATinsert(ATinsert(ATempty, term_n_24), term_p_22), (ATerm) ATmakeAppl(sym_Op_2, term_q_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), term_t_24), term_q_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_k_21, (ATerm)ATinsert(ATinsert(ATempty, term_n_24), term_p_22), (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, term_u_21), term_q_22)))))));
      l_4 = t;
      t = SSLsetAnnotations(l_4, t_1);
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm w_1 = NULL,x_1 = NULL;
        t = term_i_20;
        w_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        x_1 = t;
        t = SSL_printnl(w_1, x_1);
        t = term_j_20;
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
  t = term_i_25;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22)), (ATerm)ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_p_24)), term_r_25)));
      {
        ATerm u_25 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_25;
          }
      }
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = term_i_20;
        y_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        z_1 = t;
        t = SSL_printnl(y_1, z_1);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_v_25;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22)), (ATerm)ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_p_24)), term_g_22)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22)), (ATerm)ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_p_24)), term_g_22)));
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm a_2 = NULL,b_2 = NULL;
        t = term_i_20;
        a_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        b_2 = t;
        t = SSL_printnl(a_2, b_2);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(i_4, j_4, t);
  t = do_test_2_0(m_4, n_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm b_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22)), (ATerm)ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_p_24)), term_r_25));
      {
        ATerm e_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_26;
          }
      }
      LocalPopChoice(d_26);
    }
  else
    {
      t = b_26;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = term_i_20;
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        d_2 = t;
        t = SSL_printnl(c_2, d_2);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22)), (ATerm)ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_p_24)), term_g_22));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22)), (ATerm)ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_p_24)), term_g_22));
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm e_2 = NULL,h_2 = NULL;
        t = term_i_20;
        e_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        h_2 = t;
        t = SSL_printnl(e_2, h_2);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(o_4, r_4, t);
  t = do_test_2_0(s_4, t_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATempty, term_p_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATempty, term_q_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATempty, term_q_22))))));
      {
        ATerm q_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_26;
          }
      }
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm k_2 = NULL,l_2 = NULL;
        t = term_i_20;
        k_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        l_2 = t;
        t = SSL_printnl(k_2, l_2);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_r_26;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATempty, term_q_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATempty, term_q_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22)))));
      {
        ATerm v_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_26;
          }
      }
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm m_2 = NULL,n_2 = NULL;
        t = term_i_20;
        m_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        n_2 = t;
        t = SSL_printnl(m_2, n_2);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm y_26 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATempty, term_q_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATempty, term_q_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATempty, term_q_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATempty, term_q_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))))));
      LocalPopChoice(h_27);
    }
  else
    {
      t = y_26;
      {
        ATerm o_2 = NULL,p_2 = NULL;
        t = term_i_20;
        o_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        p_2 = t;
        t = SSL_printnl(o_2, p_2);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(v_4, x_4, t);
  t = do_test_2_0(y_4, z_4, t);
  t = do_test_2_0(a_5, g_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_i_27;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm p_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_h_28, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATempty, term_q_22)))));
      {
        ATerm j_28 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_28;
          }
      }
      LocalPopChoice(r_27);
    }
  else
    {
      t = p_27;
      {
        ATerm u_2 = NULL,v_2 = NULL;
        t = term_i_20;
        u_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        v_2 = t;
        t = SSL_printnl(u_2, v_2);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_k_28;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm m_28 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_h_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATempty, term_q_22)))));
      {
        ATerm j_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_29;
          }
      }
      LocalPopChoice(d_29);
    }
  else
    {
      t = m_28;
      {
        ATerm w_2 = NULL,x_2 = NULL;
        t = term_i_20;
        w_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        x_2 = t;
        t = SSL_printnl(w_2, x_2);
        t = term_j_20;
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
static ATerm o_5 (ATerm t)
{
  t = term_k_29;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATempty, term_q_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATempty, term_q_22)))));
      {
        ATerm p_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_29;
          }
      }
      LocalPopChoice(n_29);
    }
  else
    {
      t = l_29;
      {
        ATerm y_2 = NULL,z_2 = NULL;
        t = term_i_20;
        y_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        z_2 = t;
        t = SSL_printnl(y_2, z_2);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_q_29;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm r_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATempty, term_q_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22)))));
      {
        ATerm t_30 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_30;
          }
      }
      LocalPopChoice(t_29);
    }
  else
    {
      t = r_29;
      {
        ATerm a_3 = NULL,b_3 = NULL;
        t = term_i_20;
        a_3 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        b_3 = t;
        t = SSL_printnl(a_3, b_3);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(o_5, s_5, t);
  t = do_test_2_0(t_5, u_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_u_30;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_e_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_31), term_r_31))), term_j_31)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_e_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_31), term_r_31))), term_j_31)))));
      LocalPopChoice(a_31);
    }
  else
    {
      t = x_30;
      {
        ATerm c_3 = NULL,d_3 = NULL;
        t = term_i_20;
        c_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        d_3 = t;
        t = SSL_printnl(c_3, d_3);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm t_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_e_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_e_32), term_j_31)))));
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
      LocalPopChoice(a_32);
    }
  else
    {
      t = t_31;
      {
        ATerm e_3 = NULL,f_3 = NULL;
        t = term_i_20;
        e_3 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        f_3 = t;
        t = SSL_printnl(e_3, f_3);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_p_32;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_31), term_r_31))), term_j_31))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_31), term_r_31))), term_j_31))));
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
        ATerm g_3 = NULL,h_3 = NULL;
        t = term_i_20;
        g_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        h_3 = t;
        t = SSL_printnl(g_3, h_3);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(v_5, w_5, t);
  t = do_test_2_0(k_6, p_6, t);
  t = do_test_2_0(b_7, f_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_t_32;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm u_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_24), (ATerm) ATmakeAppl(sym_Seq_2, term_y_32, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATempty, term_p_24))), term_q_22)))))));
      {
        ATerm a_33 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_33;
          }
      }
      LocalPopChoice(w_32);
    }
  else
    {
      t = u_32;
      {
        ATerm j_3 = NULL,k_3 = NULL;
        t = term_i_20;
        j_3 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        k_3 = t;
        t = SSL_printnl(j_3, k_3);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_b_33;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, term_h_33), term_q_22))), term_p_24))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, term_h_33), term_q_22))), term_p_24))))));
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      {
        ATerm l_3 = NULL,m_3 = NULL;
        t = term_i_20;
        l_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        m_3 = t;
        t = SSL_printnl(l_3, m_3);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(g_7, h_7, t);
  t = do_test_2_0(l_7, m_7, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_c_34;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATempty, term_p_24))), term_q_22)))));
      {
        ATerm h_34 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_34;
          }
      }
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm p_3 = NULL,q_3 = NULL;
        t = term_i_20;
        p_3 = t;
        t = (ATerm) ATinsert(ATempty, term_j_20);
        q_3 = t;
        t = SSL_printnl(p_3, q_3);
        t = term_j_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_i_34;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, term_h_33), term_q_22))), term_p_24)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, term_h_33), term_q_22))), term_p_24)))));
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      {
        ATerm r_3 = NULL,s_3 = NULL;
        t = term_i_20;
        r_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        s_3 = t;
        t = SSL_printnl(r_3, s_3);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(n_7, x_7, t);
  t = do_test_2_0(y_7, z_7, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm q_6 (ATerm l_23, ATerm k_23, ATerm m_23, ATerm t)
{
  ATerm w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  w_3 = t;
  t = (ATerm) ATempty;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_34, l_23);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_34, l_23));
  t = e_7(a_8, a_4, b_4, t);
  t = (ATerm) ATempty;
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_34, l_23);
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_34, l_23));
  t = e_7(d_8, y_3, z_3, t);
  t = m_23;
  t = use_vars_0_0(t);
  t = w_3;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm d_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,a_7 = NULL;
  i_6 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      j_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
      m_6 = ATgetArgument(t, 2);
      d_6 = ATgetArgument(t, 3);
      t = d_6;
      if(match_cons(t, sym_StratRule_3))
        {
          f_6 = ATgetArgument(t, 0);
          g_6 = ATgetArgument(t, 1);
          h_6 = ATgetArgument(t, 2);
          {
            ATerm b_8 = NULL,c_8 = NULL,f_8 = NULL,g_8 = NULL;
            t = (ATerm) ATempty;
            f_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_34, j_6);
            g_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_34, j_6));
            t = e_7(e_8, f_8, g_8, t);
            t = (ATerm) ATempty;
            b_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_34, j_6);
            c_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_34, j_6));
            t = e_7(h_8, b_8, c_8, t);
            t = (ATerm) ATmakeAppl(sym__3, f_6, g_6, h_6);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, j_6, l_6, m_6, (ATerm) ATmakeAppl(sym_StratRule_3, f_6, g_6, h_6));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              f_6 = ATgetArgument(t, 0);
              g_6 = ATgetArgument(t, 1);
              h_6 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = i_6;
          {
            ATerm t_34 = t;
            int u_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL;
                t = (ATerm) ATempty;
                v_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_34, j_6);
                x_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_34, j_6));
                t = e_7(i_8, v_3, x_3, t);
                t = (ATerm) ATempty;
                t_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_34, j_6);
                u_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_34, j_6));
                t = e_7(j_8, t_3, u_3, t);
                t = f_6;
                t = bind_vars_0_0(t);
                LocalPopChoice(u_34);
              }
            else
              {
                t = t_34;
                {
                  ATerm x_34 = t;
                  int y_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_6;
                      t = unbound_vars_0_0(t);
                      LocalPopChoice(y_34);
                    }
                  else
                    {
                      t = x_34;
                      t = g_6;
                      t = use_vars_0_0(t);
                    }
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_RDefT_4, j_6, l_6, m_6, (ATerm) ATmakeAppl(sym_Rule_3, f_6, g_6, h_6));
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          j_6 = ATgetArgument(t, 0);
          l_6 = ATgetArgument(t, 1);
          m_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_6;
      if(match_cons(t, sym_Rule_3))
        {
          n_6 = ATgetArgument(t, 0);
          o_6 = ATgetArgument(t, 1);
          a_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_6;
      {
        ATerm a_35 = t;
        int b_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 = NULL,b_6 = NULL,c_6 = NULL,e_6 = NULL;
            t = (ATerm) ATempty;
            c_6 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_35, j_6);
            e_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_35, j_6));
            t = e_7(k_8, c_6, e_6, t);
            t = (ATerm) ATempty;
            y_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_35, j_6);
            b_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_35, j_6));
            t = e_7(l_8, y_5, b_6, t);
            t = n_6;
            t = bind_vars_0_0(t);
            LocalPopChoice(b_35);
          }
        else
          {
            t = a_35;
            {
              ATerm g_35 = t;
              int h_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_7;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(h_35);
                }
              else
                {
                  t = g_35;
                  t = o_6;
                  t = use_vars_0_0(t);
                }
            }
          }
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, j_6, l_6, (ATerm) ATmakeAppl(sym_Rule_3, n_6, o_6, a_7));
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  s_9 = t;
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL,n_9 = NULL,o_9 = NULL;
        t = (ATerm) ATempty;
        n_9 = t;
        t = term_m_34;
        o_9 = t;
        t = term_k_35;
        t = c_7(o_9, n_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_35) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            i_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_9), term_o_35), i_9), term_n_35);
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        {
          ATerm p_35 = t;
          int q_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_10 = NULL,j_10 = NULL,k_10 = NULL;
              t = (ATerm) ATempty;
              j_10 = t;
              t = term_m_34;
              k_10 = t;
              t = term_k_35;
              t = c_7(k_10, j_10, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm r_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_35) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  b_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_9), term_o_35), b_10), term_s_35);
              LocalPopChoice(q_35);
            }
          else
            {
              t = p_35;
              {
                ATerm t_35 = t;
                int u_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_10 = NULL,q_10 = NULL,x_10 = NULL;
                    t = (ATerm) ATempty;
                    q_10 = t;
                    t = term_m_34;
                    x_10 = t;
                    t = term_k_35;
                    t = c_7(x_10, q_10, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm x_35 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_35) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        o_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_9), term_o_35), o_10), term_s_35);
                    LocalPopChoice(u_35);
                  }
                else
                  {
                    t = t_35;
                    {
                      ATerm z_35 = t;
                      int a_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_11 = NULL,t_11 = NULL,x_11 = NULL;
                          t = (ATerm) ATempty;
                          t_11 = t;
                          t = term_m_34;
                          x_11 = t;
                          t = term_k_35;
                          t = c_7(x_11, t_11, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm b_36 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) b_36) != ATmakeSymbol("l_0", 0, ATtrue)))
                                _fail(t);
                              l_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_9), term_o_35), l_11), term_s_35);
                          LocalPopChoice(a_36);
                        }
                      else
                        {
                          t = z_35;
                          {
                            ATerm c_36 = t;
                            int d_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_12 = NULL,k_12 = NULL,l_12 = NULL;
                                t = (ATerm) ATempty;
                                k_12 = t;
                                t = term_m_34;
                                l_12 = t;
                                t = term_k_35;
                                t = c_7(l_12, k_12, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm e_36 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) e_36) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    f_12 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_9), term_o_35), f_12), term_f_36);
                                LocalPopChoice(d_36);
                              }
                            else
                              {
                                t = c_36;
                                {
                                  ATerm a_13 = NULL,c_13 = NULL,d_13 = NULL;
                                  t = (ATerm) ATempty;
                                  c_13 = t;
                                  t = term_m_34;
                                  d_13 = t;
                                  t = term_k_35;
                                  t = c_7(d_13, c_13, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm g_36 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) g_36) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      a_13 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_9), term_o_35), a_13), term_f_36);
                                }
                              }
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
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
  h_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_10;
  if(match_cons(t, sym_ListVar_1))
    {
      g_10 = ATgetArgument(t, 0);
      {
        ATerm h_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_10;
            d_10 = t;
            t = h_10;
            LocalPopChoice(j_36);
          }
        else
          {
            t = h_36;
            t = i_10;
            d_10 = t;
            t = h_10;
          }
      }
    }
  else
    {
      t = i_10;
      d_10 = t;
      t = h_10;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_36), d_10), term_k_36);
  t = Context_0_0(t);
  e_10 = t;
  t = term_i_20;
  f_10 = t;
  t = SSL_printnl(f_10, e_10);
  t = e_10;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_15 = NULL,v_15 = NULL,g_16 = NULL;
        t = (ATerm) ATempty;
        v_15 = t;
        t = term_n_34;
        g_16 = t;
        t = term_o_36;
        t = c_7(g_16, v_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_36) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            i_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_11), term_r_36), i_15), term_q_36);
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        {
          ATerm s_36 = t;
          int t_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_16 = NULL,m_16 = NULL,n_16 = NULL;
              t = (ATerm) ATempty;
              m_16 = t;
              t = term_n_34;
              n_16 = t;
              t = term_o_36;
              t = c_7(n_16, m_16, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm u_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_36) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  k_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_11), term_r_36), k_16), term_x_36);
              LocalPopChoice(t_36);
            }
          else
            {
              t = s_36;
              {
                ATerm y_36 = t;
                int z_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_16 = NULL,a_17 = NULL,f_17 = NULL;
                    t = (ATerm) ATempty;
                    a_17 = t;
                    t = term_n_34;
                    f_17 = t;
                    t = term_o_36;
                    t = c_7(f_17, a_17, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm b_37 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) b_37) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        r_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_11), term_r_36), r_16), term_x_36);
                    LocalPopChoice(z_36);
                  }
                else
                  {
                    t = y_36;
                    {
                      ATerm c_37 = t;
                      int f_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_17 = NULL,v_17 = NULL,w_17 = NULL;
                          t = (ATerm) ATempty;
                          v_17 = t;
                          t = term_n_34;
                          w_17 = t;
                          t = term_o_36;
                          t = c_7(w_17, v_17, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm g_37 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) g_37) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              s_17 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_11), term_r_36), s_17), term_x_36);
                          LocalPopChoice(f_37);
                        }
                      else
                        {
                          t = c_37;
                          {
                            ATerm h_37 = t;
                            int l_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_18 = NULL,x_18 = NULL,y_18 = NULL;
                                t = (ATerm) ATempty;
                                x_18 = t;
                                t = term_n_34;
                                y_18 = t;
                                t = term_o_36;
                                t = c_7(y_18, x_18, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm m_37 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) m_37) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    r_18 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_11), term_r_36), r_18), term_o_37);
                                LocalPopChoice(l_37);
                              }
                            else
                              {
                                t = h_37;
                                {
                                  ATerm r_19 = NULL,w_19 = NULL,x_19 = NULL;
                                  t = (ATerm) ATempty;
                                  w_19 = t;
                                  t = term_n_34;
                                  x_19 = t;
                                  t = term_o_36;
                                  t = c_7(x_19, w_19, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm p_37 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) p_37) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      r_19 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_11), term_r_36), r_19), term_o_37);
                                }
                              }
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
static ATerm r_6 (ATerm v_36, ATerm w_36, ATerm t)
{
  t = SSL_strcat(v_36, w_36);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm s_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(u_37);
    }
  else
    {
      t = s_37;
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_12 = NULL;
      d_12 = t;
      t = SSL_is_string(d_12);
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
      {
        ATerm b_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_8, t);
            LocalPopChoice(g_38);
          }
        else
          {
            t = b_38;
            {
              ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
              o_12 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_12 = ATgetArgument(t, 0);
                  t = p_12;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_12 = ATgetArgument(t, 0);
                      t = p_12;
                      {
                        ATerm h_38 = t;
                        int i_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(i_38);
                          }
                        else
                          {
                            t = h_38;
                            t = debug_1_0(n_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_12 = NULL,x_12 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_12 = ATgetArgument(t, 0);
                          q_12 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_12;
                      t = eval_config_0_0(t);
                      w_12 = t;
                      t = q_12;
                      t = eval_config_0_0(t);
                      x_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_12, x_12);
                      t = r_6(w_12, x_12, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  h_13 = t;
  t = term_j_38;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_38, h_13);
  t = s_7(i_13, h_13, t);
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_13 = NULL,k_13 = NULL;
        t = eval_config_0_0(t);
        j_13 = t;
        t = term_j_38;
        k_13 = t;
        t = SSL_table_put(k_13, h_13, j_13);
        t = j_13;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
      }
  }
  return(t);
}
ATerm MaybeUnbound_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  v_13 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_13;
  if(match_cons(t, sym_ListVar_1))
    {
      u_13 = ATgetArgument(t, 0);
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_13;
            t_13 = t;
            t = v_13;
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            t = w_13;
            t_13 = t;
            t = v_13;
          }
      }
    }
  else
    {
      t = w_13;
      t_13 = t;
      t = v_13;
    }
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_13 = NULL,y_13 = NULL;
        t = term_u_38;
        t = get_config_0_0(t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_38), t_13), term_k_36);
        t = Warning_0_0(t);
        x_13 = t;
        t = term_i_20;
        y_13 = t;
        t = SSL_printnl(y_13, x_13);
        t = x_13;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm b_14 = NULL,e_14 = NULL;
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14 = NULL,g_14 = NULL;
      f_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      g_14 = t;
      t = SSLgetAnnotations(f_14);
      b_14 = t;
      t = g_14;
      LocalPopChoice(x_38);
      {
        ATerm h_14 = NULL;
        h_14 = t;
        t = b_14;
        {
          ATerm y_38 = t;
          int z_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm a_39 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) a_39) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_39 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(z_38);
              _fail(t);
            }
          else
            {
              t = y_38;
              {
                ATerm c_39 = t;
                int d_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm e_39 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) e_39) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm f_39 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(f_39) != AT_LIST) || !(ATisEmpty(f_39))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_39);
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_14);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = c_39;
                    {
                      ATerm g_39 = t;
                      int h_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm j_39 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) j_39) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm k_39 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(k_39) != AT_LIST) || !(ATisEmpty(k_39))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(h_39);
                          t = (ATerm) ATmakeAppl(sym_Var_1, e_14);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = g_39;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, e_14);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = h_14;
      }
    }
  else
    {
      t = w_38;
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,p_4 = NULL;
            n_14 = t;
            if(match_cons(t, sym_App_2))
              {
                l_14 = ATgetArgument(t, 0);
                m_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_14);
            k_14 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, l_14, m_14);
            p_4 = t;
            t = SSLsetAnnotations(p_4, k_14);
            LocalPopChoice(m_39);
            {
              ATerm o_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,w_14 = NULL,q_4 = NULL;
              w_14 = t;
              if(match_cons(t, sym_App_2))
                {
                  r_14 = ATgetArgument(t, 0);
                  s_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_14);
              o_14 = t;
              t = r_14;
              t = unbound_vars_0_0(t);
              t_14 = t;
              t = s_14;
              t = use_vars_0_0(t);
              u_14 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, t_14, u_14);
              q_4 = t;
              t = SSLsetAnnotations(q_4, o_14);
            }
          }
        else
          {
            t = l_39;
            {
              ATerm n_39 = t;
              int s_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,u_4 = NULL;
                  d_15 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_15);
                  b_15 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, c_15);
                  u_4 = t;
                  t = SSLsetAnnotations(u_4, b_15);
                  LocalPopChoice(s_39);
                  {
                    ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,j_15 = NULL,w_4 = NULL;
                    j_15 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        f_15 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_15);
                    e_15 = t;
                    t = f_15;
                    t = unbound_vars_0_0(t);
                    g_15 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, g_15);
                    w_4 = t;
                    t = SSLsetAnnotations(w_4, e_15);
                  }
                }
              else
                {
                  t = n_39;
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
  ATerm t_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,b_5 = NULL;
      m_15 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_15);
      k_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_15);
      b_5 = t;
      t = SSLsetAnnotations(b_5, k_15);
      LocalPopChoice(v_39);
      _fail(t);
    }
  else
    {
      t = t_39;
      {
        ATerm w_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,c_5 = NULL;
            q_15 = t;
            if(match_cons(t, sym_App_2))
              {
                o_15 = ATgetArgument(t, 0);
                p_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_15);
            n_15 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, o_15, p_15);
            c_5 = t;
            t = SSLsetAnnotations(c_5, n_15);
            LocalPopChoice(x_39);
            {
              ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,d_5 = NULL;
              y_15 = t;
              if(match_cons(t, sym_App_2))
                {
                  s_15 = ATgetArgument(t, 0);
                  t_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_15);
              r_15 = t;
              t = s_15;
              t = unbound_vars_0_0(t);
              w_15 = t;
              t = t_15;
              t = use_vars_0_0(t);
              x_15 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, w_15, x_15);
              d_5 = t;
              t = SSLsetAnnotations(d_5, r_15);
            }
          }
        else
          {
            t = w_39;
            {
              ATerm e_40 = t;
              int f_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,e_5 = NULL;
                  b_16 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      a_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_16);
                  z_15 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, a_16);
                  e_5 = t;
                  t = SSLsetAnnotations(e_5, z_15);
                  LocalPopChoice(f_40);
                  {
                    ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,f_5 = NULL;
                    f_16 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        d_16 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(f_16);
                    c_16 = t;
                    t = d_16;
                    t = unbound_vars_0_0(t);
                    e_16 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, e_16);
                    f_5 = t;
                    t = SSLsetAnnotations(f_5, c_16);
                  }
                }
              else
                {
                  t = e_40;
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
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,l_5 = NULL;
      u_16 = t;
      if(match_cons(t, sym_Build_1))
        {
          t_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_16);
      s_16 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, t_16);
      l_5 = t;
      t = SSLsetAnnotations(l_5, s_16);
      LocalPopChoice(h_40);
      {
        ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,m_5 = NULL;
        y_16 = t;
        if(match_cons(t, sym_Build_1))
          {
            w_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_16);
        v_16 = t;
        t = w_16;
        t = use_vars_0_0(t);
        x_16 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, x_16);
        m_5 = t;
        t = SSLsetAnnotations(m_5, v_16);
      }
    }
  else
    {
      t = g_40;
      {
        ATerm i_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,n_5 = NULL;
            d_17 = t;
            if(match_cons(t, sym_Match_1))
              {
                c_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_17);
            b_17 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, c_17);
            n_5 = t;
            t = SSLsetAnnotations(n_5, b_17);
            LocalPopChoice(j_40);
            {
              ATerm e_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,p_5 = NULL;
              j_17 = t;
              if(match_cons(t, sym_Match_1))
                {
                  h_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_17);
              e_17 = t;
              t = h_17;
              t = bind_vars_0_0(t);
              i_17 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, i_17);
              p_5 = t;
              t = SSLsetAnnotations(p_5, e_17);
            }
          }
        else
          {
            t = i_40;
            {
              ATerm m_40 = t;
              int n_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_17 = NULL,l_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,q_5 = NULL;
                  q_17 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      l_17 = ATgetArgument(t, 0);
                      o_17 = ATgetArgument(t, 1);
                      p_17 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_17);
                  k_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, l_17, o_17, p_17);
                  q_5 = t;
                  t = SSLsetAnnotations(q_5, k_17);
                  LocalPopChoice(n_40);
                  {
                    ATerm i_19 = NULL,j_19 = NULL,l_19 = NULL,m_19 = NULL;
                    i_19 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        j_19 = ATgetArgument(t, 0);
                        l_19 = ATgetArgument(t, 1);
                        m_19 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm o_40 = t;
                      int p_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_21 = NULL,r_21 = NULL,r_5 = NULL;
                          t = SSLgetAnnotations(i_19);
                          m_21 = t;
                          t = j_19;
                          t = bind_vars_0_0(t);
                          r_21 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, r_21, l_19, m_19);
                          r_5 = t;
                          t = SSLsetAnnotations(r_5, m_21);
                          LocalPopChoice(p_40);
                        }
                      else
                        {
                          t = o_40;
                          {
                            ATerm r_40 = t;
                            int s_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_22 = NULL,i_22 = NULL,x_5 = NULL;
                                t = SSLgetAnnotations(i_19);
                                d_22 = t;
                                t = m_19;
                                t = unbound_vars_0_0(t);
                                i_22 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, j_19, l_19, i_22);
                                x_5 = t;
                                t = SSLsetAnnotations(x_5, d_22);
                                LocalPopChoice(s_40);
                              }
                            else
                              {
                                t = r_40;
                                {
                                  ATerm u_22 = NULL,z_22 = NULL,z_5 = NULL;
                                  t = SSLgetAnnotations(i_19);
                                  u_22 = t;
                                  t = l_19;
                                  t = use_vars_0_0(t);
                                  z_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, j_19, z_22, m_19);
                                  z_5 = t;
                                  t = SSLsetAnnotations(z_5, u_22);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = m_40;
                  {
                    ATerm t_40 = t;
                    int u_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,t_19 = NULL,a_6 = NULL;
                        t_19 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            o_19 = ATgetArgument(t, 0);
                            p_19 = ATgetArgument(t, 1);
                            q_19 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(t_19);
                        n_19 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, o_19, p_19, q_19);
                        a_6 = t;
                        t = SSLsetAnnotations(a_6, n_19);
                        LocalPopChoice(u_40);
                        {
                          ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,d_21 = NULL;
                          y_20 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              z_20 = ATgetArgument(t, 0);
                              a_21 = ATgetArgument(t, 1);
                              d_21 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm v_40 = t;
                            int w_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_23 = NULL,u_23 = NULL,o_7 = NULL;
                                t = SSLgetAnnotations(y_20);
                                p_23 = t;
                                t = a_21;
                                t = unbound_vars_0_0(t);
                                u_23 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, z_20, u_23, d_21);
                                o_7 = t;
                                t = SSLsetAnnotations(o_7, p_23);
                                LocalPopChoice(w_40);
                              }
                            else
                              {
                                t = v_40;
                                {
                                  ATerm r_24 = NULL,v_24 = NULL,q_7 = NULL;
                                  t = SSLgetAnnotations(y_20);
                                  r_24 = t;
                                  t = d_21;
                                  t = use_vars_0_0(t);
                                  v_24 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, z_20, a_21, v_24);
                                  q_7 = t;
                                  t = SSLsetAnnotations(q_7, r_24);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = t_40;
                        {
                          ATerm x_40 = t;
                          int y_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,l_21 = NULL,u_7 = NULL;
                              l_21 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  f_21 = ATgetArgument(t, 0);
                                  g_21 = ATgetArgument(t, 1);
                                  h_21 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(l_21);
                              e_21 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, f_21, g_21, h_21);
                              u_7 = t;
                              t = SSLsetAnnotations(u_7, e_21);
                              LocalPopChoice(y_40);
                              {
                                ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
                                y_24 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    z_24 = ATgetArgument(t, 0);
                                    a_25 = ATgetArgument(t, 1);
                                    b_25 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm a_41 = t;
                                  int b_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm x_25 = NULL,c_26 = NULL,v_7 = NULL;
                                      t = SSLgetAnnotations(y_24);
                                      x_25 = t;
                                      t = a_25;
                                      t = unbound_vars_0_0(t);
                                      c_26 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, z_24, c_26, b_25);
                                      v_7 = t;
                                      t = SSLsetAnnotations(v_7, x_25);
                                      LocalPopChoice(b_41);
                                    }
                                  else
                                    {
                                      t = a_41;
                                      {
                                        ATerm a_27 = NULL,q_27 = NULL,w_7 = NULL;
                                        t = SSLgetAnnotations(y_24);
                                        a_27 = t;
                                        t = b_25;
                                        t = use_vars_0_0(t);
                                        q_27 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, z_24, a_25, q_27);
                                        w_7 = t;
                                        t = SSLsetAnnotations(w_7, a_27);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = x_40;
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
static ATerm o_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm o_25 = NULL,s_25 = NULL,t_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
      w_25 = ATgetArgument(t, 2);
      o_25 = ATgetArgument(t, 3);
      {
        ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
        t = (ATerm) ATempty;
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, s_25);
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, s_25));
        t = e_7(o_8, i_26, j_26, t);
        t = (ATerm) ATempty;
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_41, s_25);
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_41, s_25));
        t = e_7(p_8, g_26, h_26, t);
        t = o_25;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, s_25, t_25, w_25, o_25);
      }
    }
  else
    {
      ATerm p_26 = NULL,s_26 = NULL,x_26 = NULL,z_26 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          s_25 = ATgetArgument(t, 0);
          t_25 = ATgetArgument(t, 1);
          w_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_41, s_25);
      z_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_41, s_25));
      t = e_7(q_8, x_26, z_26, t);
      t = (ATerm) ATempty;
      p_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_41, s_25);
      s_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_41, s_25));
      t = e_7(r_8, p_26, s_26, t);
      t = w_25;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, s_25, t_25, w_25);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,s_8 = NULL;
  static ATerm w_8 (ATerm t)
  {
    ATerm g_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,u_8 = NULL,t_8 = NULL;
    x_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        o_27 = ATgetArgument(t, 0);
        t_27 = ATgetArgument(t, 1);
        u_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_27);
    n_27 = t;
    t = o_27;
    t = x_115(t);
    v_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_27, t_27, u_27);
    t_8 = t;
    t = SSLsetAnnotations(t_8, n_27);
    w_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        j_27 = ATgetArgument(t, 0);
        k_27 = ATgetArgument(t, 1);
        l_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_27);
    g_27 = t;
    t = k_27;
    t = x_115(t);
    m_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_27, m_27, l_27);
    u_8 = t;
    t = SSLsetAnnotations(u_8, g_27);
    return(t);
  }
  static ATerm x_8 (ATerm t)
  {
    ATerm y_27 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,i_28 = NULL,l_28 = NULL,v_8 = NULL;
    l_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        d_28 = ATgetArgument(t, 0);
        e_28 = ATgetArgument(t, 1);
        f_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_28);
    y_27 = t;
    t = f_28;
    t = x_115(t);
    i_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, d_28, e_28, i_28);
    v_8 = t;
    t = SSLsetAnnotations(v_8, y_27);
    return(t);
  }
  f_27 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      c_27 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
      e_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_27);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_27, d_27, e_27);
  s_8 = t;
  t = SSLsetAnnotations(s_8, b_27);
  t = abstract_choice_2_0(w_8, x_8, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm w_115 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,u_28 = NULL,f_29 = NULL,g_29 = NULL,b_9 = NULL;
  static ATerm y_8 (ATerm t)
  {
    ATerm s_29 = NULL,y_29 = NULL,z_29 = NULL,e_30 = NULL,f_30 = NULL,d_9 = NULL;
    f_30 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        y_29 = ATgetArgument(t, 0);
        z_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_30);
    s_29 = t;
    t = y_29;
    t = w_115(t);
    e_30 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, e_30, z_29);
    d_9 = t;
    t = SSLsetAnnotations(d_9, s_29);
    return(t);
  }
  static ATerm z_8 (ATerm t)
  {
    ATerm g_30 = NULL,n_30 = NULL,o_30 = NULL,q_30 = NULL,v_30 = NULL,e_9 = NULL;
    v_30 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        n_30 = ATgetArgument(t, 0);
        o_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_30);
    g_30 = t;
    t = o_30;
    t = w_115(t);
    q_30 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, n_30, q_30);
    e_9 = t;
    t = SSLsetAnnotations(e_9, g_30);
    return(t);
  }
  g_29 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      u_28 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_29);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, u_28, f_29);
  b_9 = t;
  t = SSLsetAnnotations(b_9, o_28);
  t = abstract_choice_2_0(y_8, z_8, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,f_31 = NULL,g_31 = NULL,i_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  t = save_MarkVar_0_0(t);
  c_31 = t;
  t = k_31;
  t = y_115(t);
  i_31 = t;
  t = save_MarkVar_0_0(t);
  f_31 = t;
  t = term_g_41;
  m_31 = t;
  t = SSL_table_destroy(m_31);
  t = term_g_41;
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, c_31);
  t = y_6(l_31, c_31, t);
  t = i_31;
  t = z_115(t);
  g_31 = t;
  t = f_31;
  t = isect_MarkVar_0_0(t);
  t = g_31;
  return(t);
}
ATerm mark_choice_1_0 (ATerm v_115 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,u_31 = NULL,v_31 = NULL,x_31 = NULL,k_9 = NULL;
  static ATerm a_9 (ATerm t)
  {
    ATerm y_31 = NULL,z_31 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,l_9 = NULL;
    d_32 = t;
    if(match_cons(t, sym_Choice_2))
      {
        z_31 = ATgetArgument(t, 0);
        b_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_32);
    y_31 = t;
    t = z_31;
    t = v_115(t);
    c_32 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, c_32, b_32);
    l_9 = t;
    t = SSLsetAnnotations(l_9, y_31);
    return(t);
  }
  static ATerm c_9 (ATerm t)
  {
    ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,k_32 = NULL,m_9 = NULL;
    k_32 = t;
    if(match_cons(t, sym_Choice_2))
      {
        g_32 = ATgetArgument(t, 0);
        h_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_32);
    f_32 = t;
    t = h_32;
    t = v_115(t);
    i_32 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, g_32, i_32);
    m_9 = t;
    t = SSLsetAnnotations(m_9, f_32);
    return(t);
  }
  x_31 = t;
  if(match_cons(t, sym_Choice_2))
    {
      u_31 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_31);
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, u_31, v_31);
  k_9 = t;
  t = SSLsetAnnotations(k_9, p_31);
  t = abstract_choice_2_0(a_9, c_9, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,q_32 = NULL,v_32 = NULL,x_32 = NULL,z_32 = NULL,e_33 = NULL,f_33 = NULL,u_9 = NULL,t_9 = NULL;
  m_32 = t;
  t = save_MarkVar_0_0(t);
  l_32 = t;
  t = m_32;
  if(match_cons(t, sym_Rec_2))
    {
      z_32 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_32);
  x_32 = t;
  t = e_33;
  t = mark_buv_0_0(t);
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, z_32, f_33);
  t_9 = t;
  t = SSLsetAnnotations(t_9, x_32);
  t = l_32;
  t = isect_MarkVar_0_0(t);
  t = m_32;
  if(match_cons(t, sym_Rec_2))
    {
      o_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_32);
  n_32 = t;
  t = q_32;
  t = mark_buv_0_0(t);
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, o_32, v_32);
  u_9 = t;
  t = SSLsetAnnotations(u_9, n_32);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,l_10 = NULL,a_10 = NULL,z_9 = NULL;
  a_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_33 = ATgetArgument(t, 0);
      x_33 = ATgetArgument(t, 1);
      y_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_34);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_33, x_33, y_33);
  z_9 = t;
  t = SSLsetAnnotations(z_9, v_33);
  z_33 = t;
  t = save_MarkVar_0_0(t);
  i_33 = t;
  t = z_33;
  if(match_cons(t, sym_PrimT_3))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
      s_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_33);
  p_33 = t;
  t = s_33;
  t = map_1_0(f_9, t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, q_33, r_33, t_33);
  a_10 = t;
  t = SSLsetAnnotations(a_10, p_33);
  u_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
      m_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_33);
  j_33 = t;
  t = l_33;
  t = mark_buv_0_0(t);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, k_33, n_33, m_33);
  l_10 = t;
  t = SSLsetAnnotations(l_10, j_33);
  o_33 = t;
  t = i_33;
  t = isect_MarkVar_0_0(t);
  t = o_33;
  return(t);
}
ATerm alltd_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  static ATerm b_34 (ATerm t)
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_90(t);
        LocalPopChoice(i_41);
      }
    else
      {
        t = h_41;
        t = SRTS_all(b_34, t);
      }
    return(t);
  }
  t = b_34(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm d_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  i_37 = t;
  if(match_cons(t, sym_CallT_3))
    {
      j_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
      d_37 = ATgetArgument(t, 2);
      {
        ATerm n_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,i_29 = NULL,w_10 = NULL,v_10 = NULL,u_10 = NULL;
        t = SSLgetAnnotations(i_37);
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, j_37, k_37, d_37);
        u_10 = t;
        t = SSLsetAnnotations(u_10, c_29);
        i_29 = t;
        t = save_MarkVar_0_0(t);
        n_28 = t;
        t = i_29;
        if(match_cons(t, sym_CallT_3))
          {
            x_28 = ATgetArgument(t, 0);
            y_28 = ATgetArgument(t, 1);
            z_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_29);
        w_28 = t;
        t = z_28;
        t = map_1_0(g_9, t);
        a_29 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, x_28, y_28, a_29);
        v_10 = t;
        t = SSLsetAnnotations(v_10, w_28);
        b_29 = t;
        if(match_cons(t, sym_CallT_3))
          {
            q_28 = ATgetArgument(t, 0);
            r_28 = ATgetArgument(t, 1);
            s_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_29);
        p_28 = t;
        t = r_28;
        t = mark_buv_0_0(t);
        t_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, q_28, t_28, s_28);
        w_10 = t;
        t = SSLsetAnnotations(w_10, p_28);
        v_28 = t;
        t = n_28;
        t = isect_MarkVar_0_0(t);
        t = v_28;
      }
    }
  else
    {
      ATerm u_29 = NULL,a_30 = NULL,d_30 = NULL,m_30 = NULL,p_30 = NULL,r_30 = NULL,s_30 = NULL,w_30 = NULL,z_10 = NULL,y_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          j_37 = ATgetArgument(t, 0);
          k_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_37);
      s_30 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, j_37, k_37);
      y_10 = t;
      t = SSLsetAnnotations(y_10, s_30);
      w_30 = t;
      t = save_MarkVar_0_0(t);
      u_29 = t;
      t = w_30;
      if(match_cons(t, sym_Call_2))
        {
          d_30 = ATgetArgument(t, 0);
          m_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_30);
      a_30 = t;
      t = m_30;
      t = mark_buv_0_0(t);
      p_30 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, d_30, p_30);
      z_10 = t;
      t = SSLsetAnnotations(z_10, a_30);
      r_30 = t;
      t = u_29;
      t = isect_MarkVar_0_0(t);
      t = r_30;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm t_6 (ATerm z_63, ATerm a_64, ATerm b_64, ATerm t)
{
  ATerm n_37 = NULL;
  static ATerm j_9 (ATerm t)
  {
    t = a_64;
    t = map_1_0(IntroduceBound_0_0, t);
    t = b_64;
    t = mark_build_vars_0_0(t);
    if(((n_37 != NULL) && (n_37 != t)))
      _fail(t);
    else
      n_37 = t;
    return(t);
  }
  t = scope_2_0(h_9, j_9, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, z_63, a_64, not_null(n_37));
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm a_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_38);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_41);
    }
  else
    {
      t = k_41;
      {
        ATerm m_41 = t;
        int n_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_41);
          }
        else
          {
            t = m_41;
            {
              ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_38 = ATgetArgument(t, 0);
                  d_38 = ATgetArgument(t, 1);
                  e_38 = ATgetArgument(t, 2);
                  f_38 = ATgetArgument(t, 3);
                  t = e_38;
                  t = map_1_0(w_9, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_38 = ATgetArgument(t, 0);
                      d_38 = ATgetArgument(t, 1);
                      e_38 = ATgetArgument(t, 2);
                      f_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_38;
                  t = map_1_0(x_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm t_38 = NULL;
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_38 = ATgetArgument(t, 0);
          {
            ATerm u_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = t_38;
    }
  else
    {
      t = s_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_38;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm i_39 = NULL;
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_39 = ATgetArgument(t, 0);
          {
            ATerm x_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_41);
      t = i_39;
    }
  else
    {
      t = v_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_39;
    }
  return(t);
}
static ATerm u_6 (ATerm t_63, ATerm x_63, ATerm v_63, ATerm t)
{
  ATerm r_37 = NULL,y_37 = NULL,z_37 = NULL;
  static ATerm q_9 (ATerm t)
  {
    t = t_63;
    t = free_vars_3_0(r_9, v_9, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = t_63;
    t = mark_match_vars_0_0(t);
    if(((r_37 != NULL) && (r_37 != t)))
      _fail(t);
    else
      r_37 = t;
    t = v_63;
    t = mark_buv_0_0(t);
    if(((y_37 != NULL) && (y_37 != t)))
      _fail(t);
    else
      y_37 = t;
    t = x_63;
    t = mark_build_vars_0_0(t);
    if(((z_37 != NULL) && (z_37 != t)))
      _fail(t);
    else
      z_37 = t;
    return(t);
  }
  t = scope_2_0(p_9, q_9, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_37), not_null(z_37), not_null(y_37)));
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm u_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_39);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm y_41 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_42);
    }
  else
    {
      t = y_41;
      {
        ATerm g_42 = t;
        int i_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_42);
          }
        else
          {
            t = g_42;
            {
              ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_40 = ATgetArgument(t, 0);
                  b_40 = ATgetArgument(t, 1);
                  c_40 = ATgetArgument(t, 2);
                  d_40 = ATgetArgument(t, 3);
                  t = c_40;
                  t = map_1_0(p_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_40 = ATgetArgument(t, 0);
                      b_40 = ATgetArgument(t, 1);
                      c_40 = ATgetArgument(t, 2);
                      d_40 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_40;
                  t = map_1_0(r_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm q_40 = NULL;
  ATerm k_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_40 = ATgetArgument(t, 0);
          {
            ATerm p_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_42);
      t = q_40;
    }
  else
    {
      t = k_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_40;
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm z_40 = NULL;
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_40 = ATgetArgument(t, 0);
          {
            ATerm u_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_42);
      t = z_40;
    }
  else
    {
      t = q_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_40;
    }
  return(t);
}
static ATerm v_6 (ATerm n_63, ATerm r_63, ATerm p_63, ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  static ATerm c_10 (ATerm t)
  {
    t = n_63;
    t = free_vars_3_0(m_10, n_10, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = n_63;
    t = mark_match_vars_0_0(t);
    if(((o_39 != NULL) && (o_39 != t)))
      _fail(t);
    else
      o_39 = t;
    t = p_63;
    t = mark_buv_0_0(t);
    if(((p_39 != NULL) && (p_39 != t)))
      _fail(t);
    else
      p_39 = t;
    t = r_63;
    t = mark_build_vars_0_0(t);
    if(((q_39 != NULL) && (q_39 != t)))
      _fail(t);
    else
      q_39 = t;
    return(t);
  }
  t = scope_2_0(y_9, c_10, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_39), not_null(q_39), not_null(p_39)));
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm n_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_43);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm v_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_42);
    }
  else
    {
      t = v_42;
      {
        ATerm y_42 = t;
        int z_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_42);
          }
        else
          {
            t = y_42;
            {
              ATerm q_43 = NULL,v_43 = NULL,a_44 = NULL,d_44 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_43 = ATgetArgument(t, 0);
                  v_43 = ATgetArgument(t, 1);
                  a_44 = ATgetArgument(t, 2);
                  d_44 = ATgetArgument(t, 3);
                  t = a_44;
                  t = map_1_0(a_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_43 = ATgetArgument(t, 0);
                      v_43 = ATgetArgument(t, 1);
                      a_44 = ATgetArgument(t, 2);
                      d_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_44;
                  t = map_1_0(b_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm q_44 = NULL;
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_44 = ATgetArgument(t, 0);
          {
            ATerm c_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_43);
      t = q_44;
    }
  else
    {
      t = a_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_44;
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm f_45 = NULL;
  ATerm d_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_45 = ATgetArgument(t, 0);
          {
            ATerm h_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_43);
      t = f_45;
    }
  else
    {
      t = d_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_45;
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm j_46 = NULL;
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_46 = ATgetArgument(t, 0);
          {
            ATerm o_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_43);
      t = j_46;
    }
  else
    {
      t = j_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_46;
    }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm m_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_46);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm p_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_43);
    }
  else
    {
      t = p_43;
      {
        ATerm u_43 = t;
        int w_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_43);
          }
        else
          {
            t = u_43;
            {
              ATerm o_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_46 = ATgetArgument(t, 0);
                  q_46 = ATgetArgument(t, 1);
                  r_46 = ATgetArgument(t, 2);
                  s_46 = ATgetArgument(t, 3);
                  t = r_46;
                  t = map_1_0(j_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_46 = ATgetArgument(t, 0);
                      q_46 = ATgetArgument(t, 1);
                      r_46 = ATgetArgument(t, 2);
                      s_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_46;
                  t = map_1_0(k_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm c_47 = NULL;
  ATerm x_43 = t;
  int y_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_47 = ATgetArgument(t, 0);
          {
            ATerm z_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_43);
      t = c_47;
    }
  else
    {
      t = x_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_47;
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm r_47 = NULL;
  ATerm b_44 = t;
  int c_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_47 = ATgetArgument(t, 0);
          {
            ATerm e_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_44);
      t = r_47;
    }
  else
    {
      t = b_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_47;
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,s_42 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      d_42 = ATgetArgument(t, 0);
      e_42 = ATgetArgument(t, 1);
      f_42 = ATgetArgument(t, 2);
      {
        ATerm e_43 = NULL,g_43 = NULL,i_43 = NULL,m_43 = NULL;
        t = f_42;
        if(match_cons(t, sym_Rule_3))
          {
            z_41 = ATgetArgument(t, 0);
            a_42 = ATgetArgument(t, 1);
            b_42 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_42;
        t = free_vars_3_0(s_10, t_10, tboundin_3_0, t);
        e_43 = t;
        {
          static ATerm d_11 (ATerm t)
          {
            t = e_43;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = z_41;
            t = mark_match_vars_0_0(t);
            if(((g_43 != NULL) && (g_43 != t)))
              _fail(t);
            else
              g_43 = t;
            t = b_42;
            t = mark_buv_0_0(t);
            if(((i_43 != NULL) && (i_43 != t)))
              _fail(t);
            else
              i_43 = t;
            t = a_42;
            t = mark_build_vars_0_0(t);
            if(((m_43 != NULL) && (m_43 != t)))
              _fail(t);
            else
              m_43 = t;
            return(t);
          }
          t = scope_2_0(c_11, d_11, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, d_42, e_42, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_43), not_null(m_43), not_null(i_43)));
      }
    }
  else
    {
      ATerm m_45 = NULL,p_45 = NULL,t_45 = NULL,x_45 = NULL,z_45 = NULL,c_46 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          d_42 = ATgetArgument(t, 0);
          e_42 = ATgetArgument(t, 1);
          f_42 = ATgetArgument(t, 2);
          l_42 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = l_42;
      if(match_cons(t, sym_Rule_3))
        {
          m_42 = ATgetArgument(t, 0);
          n_42 = ATgetArgument(t, 1);
          s_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_42;
      t = map_1_0(e_11, t);
      m_45 = t;
      t = l_42;
      t = free_vars_3_0(f_11, g_11, tboundin_3_0, t);
      c_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_46, m_45);
      t = diff_0_0(t);
      p_45 = t;
      {
        static ATerm u_11 (ATerm t)
        {
          t = m_45;
          t = map_1_0(IntroduceBound_0_0, t);
          t = p_45;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = m_42;
          t = mark_match_vars_0_0(t);
          if(((t_45 != NULL) && (t_45 != t)))
            _fail(t);
          else
            t_45 = t;
          t = s_42;
          t = mark_buv_0_0(t);
          if(((x_45 != NULL) && (x_45 != t)))
            _fail(t);
          else
            x_45 = t;
          t = n_42;
          t = mark_build_vars_0_0(t);
          if(((z_45 != NULL) && (z_45 != t)))
            _fail(t);
          else
            z_45 = t;
          return(t);
        }
        t = scope_2_0(s_11, u_11, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, d_42, e_42, f_42, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_45), not_null(z_45), not_null(x_45)));
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,c_48 = NULL;
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_47);
  a_48 = t;
  t = term_i_44;
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_47), term_i_44);
  t = e_7(v_11, a_48, c_48, t);
  t = z_47;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm l_48 = NULL;
  ATerm j_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_48 = ATgetArgument(t, 0);
          {
            ATerm m_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_44);
      t = l_48;
    }
  else
    {
      t = j_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_48;
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm w_6 (ATerm l_62, ATerm m_62, ATerm n_62, ATerm p_62, ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL;
  t = n_62;
  t = map_1_0(w_11, t);
  e_48 = t;
  {
    static ATerm z_11 (ATerm t)
    {
      t = e_48;
      t = map_1_0(IntroduceBound_0_0, t);
      t = p_62;
      t = mark_buv_0_0(t);
      if(((f_48 != NULL) && (f_48 != t)))
        _fail(t);
      else
        f_48 = t;
      return(t);
    }
    t = scope_2_0(y_11, z_11, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_62, m_62, n_62, not_null(f_48));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm a_50 = NULL,c_50 = NULL,d_50 = NULL,h_50 = NULL,j_50 = NULL,l_50 = NULL;
  a_50 = t;
  if(match_cons(t, sym__2))
    {
      c_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_50;
  if(match_cons(t, sym_Undefined_0))
    {
      t = c_50;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_n_44;
        }
      else
        {
          t = term_n_44;
        }
    }
  else
    {
      ATerm o_44 = t;
      int p_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm r_44 = ATgetArgument(t, 0);
              l_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(p_44);
          t = c_50;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_n_44;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  d_50 = ATgetArgument(t, 0);
                  h_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm s_44 = t;
                int t_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, h_50, l_50);
                    {
                      ATerm u_44 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm w_31 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              w_31 = ATgetArgument(t, 0);
                              if((w_31 != ATgetArgument(t, 1)))
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
                          t = u_44;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, d_50, term_v_44);
                    LocalPopChoice(t_44);
                  }
                else
                  {
                    t = s_44;
                    t = l_50;
                    if((h_50 != t))
                      {
                        _fail(t);
                      }
                    t = c_50;
                  }
              }
            }
        }
      else
        {
          t = o_44;
          t = c_50;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_n_44;
        }
    }
  return(t);
}
static ATerm x_6 (ATerm w_60, ATerm x_60, ATerm v_60, ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  t = term_g_41;
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, w_60);
  t = s_7(r_50, w_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_50 = ATgetFirst((ATermList) t);
      {
        ATerm w_44 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_60, p_50);
  t = CompareEntries_0_0(t);
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_60, (ATerm) ATinsert(CheckATermList(v_60), q_50));
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,a_52 = NULL,d_52 = NULL,f_52 = NULL;
  f_52 = t;
  if(match_cons(t, sym__2))
    {
      x_51 = ATgetArgument(t, 0);
      y_51 = ATgetArgument(t, 1);
      t = y_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_52 = ATgetFirst((ATermList) t);
          d_52 = (ATerm) ATgetNext((ATermList) t);
          t = a_52;
          {
            ATerm x_44 = t;
            int y_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm z_44 = ATgetArgument(t, 0);
                    ATerm a_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(y_44);
                t = x_51;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = f_52;
                  }
                else
                  {
                    ATerm b_45 = t;
                    int d_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_52;
                        t = x_6(x_51, a_52, d_52, t);
                        LocalPopChoice(d_45);
                      }
                    else
                      {
                        t = b_45;
                        t = f_52;
                      }
                  }
              }
            else
              {
                t = x_44;
                t = x_51;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = f_52;
                  }
                else
                  {
                    t = f_52;
                  }
              }
          }
        }
      else
        {
          t = x_51;
          if(match_cons(t, sym_Scopes_0))
            {
              t = f_52;
            }
          else
            {
              t = f_52;
            }
        }
    }
  else
    {
      t = f_52;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm n_51 = NULL,p_51 = NULL,v_51 = NULL;
  t = map_1_0(a_12, t);
  n_51 = t;
  t = term_g_41;
  v_51 = t;
  t = SSL_table_destroy(v_51);
  t = term_g_41;
  p_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, n_51);
  t = y_6(p_51, n_51, t);
  t = n_51;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,j_53 = NULL;
  j_53 = t;
  {
    ATerm e_45 = t;
    int g_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm h_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_45);
        t = j_53;
      }
    else
      {
        t = e_45;
        {
          ATerm i_45 = t;
          int j_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm k_45 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(j_45);
              t = j_53;
            }
          else
            {
              t = i_45;
              {
                ATerm l_45 = t;
                int n_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm o_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_45);
                    t = j_53;
                  }
                else
                  {
                    t = l_45;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm r_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = j_53;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  e_53 = t;
  t = j_53;
  t = SRTS_one(mark_buv_0_0, t);
  f_53 = t;
  t = e_53;
  t = isect_MarkVar_0_0(t);
  t = f_53;
  return(t);
}
static ATerm y_6 (ATerm z_30, ATerm y_30, ATerm t)
{
  static ATerm b_12 (ATerm t)
  {
    ATerm l_53 = NULL,m_53 = NULL;
    if(match_cons(t, sym__2))
      {
        l_53 = ATgetArgument(t, 0);
        m_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(z_30, l_53, m_53);
    t = (ATerm) ATmakeAppl(sym__3, z_30, l_53, m_53);
    return(t);
  }
  t = y_30;
  t = map_1_0(b_12, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_53 = NULL;
  static ATerm e_12 (ATerm t)
  {
    ATerm p_53 = NULL,u_53 = NULL;
    p_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_53), p_53);
    t = s_7(not_null(o_53), p_53, t);
    u_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_53, u_53);
    return(t);
  }
  if(((o_53 != NULL) && (o_53 != t)))
    _fail(t);
  else
    o_53 = t;
  t = SSL_table_keys(o_53);
  t = map_1_0(e_12, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_g_41;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm j_61 (ATerm), ATerm t)
{
  ATerm z_53 = NULL,c_54 = NULL,d_54 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm g_12 (ATerm t)
    {
      static ATerm y_54 (ATerm e_54, ATerm t)
      {
        ATerm f_54 = NULL,k_54 = NULL,m_54 = NULL,n_54 = NULL;
        t = e_54;
        if(match_cons(t, sym__2))
          {
            ATerm s_45 = ATgetArgument(t, 0);
            f_54 = s_45;
            if(match_cons(s_45, sym_Var_1))
              {
                k_54 = ATgetArgument(s_45, 0);
              }
            else
              _fail(t);
            {
              ATerm u_45 = ATgetArgument(t, 1);
              if(((ATgetType(u_45) == AT_LIST) && !(ATisEmpty(u_45))))
                {
                  ATerm v_45 = ATgetFirst((ATermList) u_45);
                  if(match_cons(v_45, sym_Defined_2))
                    {
                      m_54 = ATgetArgument(v_45, 0);
                      {
                        ATerm w_45 = ATgetArgument(v_45, 1);
                        if((ATgetSymbol((ATermAppl) w_45) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  n_54 = (ATerm) ATgetNext((ATermList) u_45);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_61;
        {
          static ATerm h_12 (ATerm t)
          {
            if((k_54 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(h_12, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, f_54, (ATerm) ATinsert(CheckATermList(n_54), (ATerm) ATmakeAppl(sym_Defined_2, m_54, term_v_44)));
        return(t);
      }
      ATerm p_54 = NULL,t_54 = NULL;
      t_54 = t;
      {
        ATerm y_45 = t;
        int a_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                p_54 = ATgetArgument(t, 0);
                {
                  ATerm b_46 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_46);
            t = p_54;
            if(match_cons(t, sym_Scopes_0))
              {
                t = t_54;
              }
            else
              {
                ATerm d_46 = t;
                int e_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = y_54(t_54, t);
                    LocalPopChoice(e_46);
                  }
                else
                  {
                    t = d_46;
                    t = t_54;
                  }
              }
          }
        else
          {
            t = y_45;
            {
              ATerm f_46 = t;
              int h_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_54(t_54, t);
                  LocalPopChoice(h_46);
                }
              else
                {
                  t = f_46;
                  t = t_54;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(g_12, t);
  }
  z_53 = t;
  t = term_g_41;
  d_54 = t;
  t = SSL_table_destroy(d_54);
  t = term_g_41;
  c_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, z_53);
  t = y_6(c_54, z_53, t);
  t = z_53;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm d_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_56);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm i_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_46);
    }
  else
    {
      t = i_46;
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
              ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,k_56 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_56 = ATgetArgument(t, 0);
                  g_56 = ATgetArgument(t, 1);
                  h_56 = ATgetArgument(t, 2);
                  k_56 = ATgetArgument(t, 3);
                  t = h_56;
                  t = map_1_0(s_12, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_56 = ATgetArgument(t, 0);
                      g_56 = ATgetArgument(t, 1);
                      h_56 = ATgetArgument(t, 2);
                      k_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_56;
                  t = map_1_0(t_12, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm d_57 = NULL;
  ATerm p_46 = t;
  int t_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_57 = ATgetArgument(t, 0);
          {
            ATerm u_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_46);
      t = d_57;
    }
  else
    {
      t = p_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_57;
    }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm x_57 = NULL;
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_57 = ATgetArgument(t, 0);
          {
            ATerm x_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_46);
      t = x_57;
    }
  else
    {
      t = v_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_57;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,c_56 = NULL,i_11 = NULL,h_11 = NULL;
  c_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_55 = ATgetArgument(t, 0);
      y_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_56);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, x_55, y_55);
  h_11 = t;
  t = SSLsetAnnotations(h_11, w_55);
  z_55 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_55 = ATgetArgument(t, 0);
      {
        ATerm z_46 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_55;
  t = free_vars_3_0(i_12, r_12, tboundin_3_0, t);
  g_55 = t;
  t = undefine_unbound_MarkVar_0_1(g_55, t);
  h_55 = t;
  t = z_55;
  if(match_cons(t, sym_Let_2))
    {
      m_55 = ATgetArgument(t, 0);
      n_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_55);
  j_55 = t;
  t = m_55;
  {
    static ATerm u_12 (ATerm t)
    {
      ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
      h_58 = t;
      t = term_g_41;
      j_58 = t;
      t = SSL_table_destroy(j_58);
      t = term_g_41;
      i_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_g_41, h_55);
      t = y_6(i_58, h_55, t);
      t = h_58;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(u_12, t);
  }
  o_55 = t;
  t = term_g_41;
  v_55 = t;
  t = SSL_table_destroy(v_55);
  t = term_g_41;
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, h_55);
  t = y_6(u_55, h_55, t);
  t = n_55;
  t = mark_buv_0_0(t);
  p_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, o_55, p_55);
  i_11 = t;
  t = SSLsetAnnotations(i_11, j_55);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL,m_11 = NULL;
      m_58 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_58);
      k_58 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_58);
      m_11 = t;
      t = SSLsetAnnotations(m_11, k_58);
      LocalPopChoice(b_47);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = a_47;
      {
        ATerm d_47 = t;
        int e_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,n_11 = NULL;
            q_58 = t;
            if(match_cons(t, sym_App_2))
              {
                o_58 = ATgetArgument(t, 0);
                p_58 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_58);
            n_58 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, o_58, p_58);
            n_11 = t;
            t = SSLsetAnnotations(n_11, n_58);
            LocalPopChoice(e_47);
            {
              ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,p_11 = NULL;
              a_59 = t;
              if(match_cons(t, sym_App_2))
                {
                  w_58 = ATgetArgument(t, 0);
                  x_58 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_59);
              v_58 = t;
              t = w_58;
              t = mark_buv_0_0(t);
              y_58 = t;
              t = x_58;
              t = mark_build_vars_0_0(t);
              z_58 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, y_58, z_58);
              p_11 = t;
              t = SSLsetAnnotations(p_11, v_58);
            }
          }
        else
          {
            t = d_47;
            {
              ATerm f_47 = t;
              int g_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_59 = NULL,c_59 = NULL,f_59 = NULL,q_11 = NULL;
                  f_59 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_59);
                  b_59 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, c_59);
                  q_11 = t;
                  t = SSLsetAnnotations(q_11, b_59);
                  LocalPopChoice(g_47);
                  {
                    ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,r_11 = NULL;
                    j_59 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        h_59 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_59);
                    g_59 = t;
                    t = h_59;
                    t = mark_buv_0_0(t);
                    i_59 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, i_59);
                    r_11 = t;
                    t = SSLsetAnnotations(r_11, g_59);
                  }
                }
              else
                {
                  t = f_47;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_6 (ATerm j_30, ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,p_59 = NULL;
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_30, k_30);
  t = s_7(j_30, k_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_47 = ATgetFirst((ATermList) t);
      k_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_59), l_30);
  p_59 = t;
  t = SSL_table_put(j_30, k_30, p_59);
  t = l_59;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm q_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  q_59 = t;
  t = term_g_41;
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_59);
  u_59 = t;
  t = term_j_47;
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_41, (ATerm)ATmakeAppl(sym_Var_1, q_59), term_j_47);
  t = z_6(t_59, u_59, v_59, t);
  t = q_59;
  return(t);
}
static ATerm c_7 (ATerm h_30, ATerm i_30, ATerm t)
{
  ATerm w_59 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_30, i_30);
  t = s_7(h_30, i_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_59 = ATgetFirst((ATermList) t);
      {
        ATerm k_47 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_59;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL;
  c_65 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_34 = NULL,e_34 = NULL,j_34 = NULL,q_34 = NULL;
        t = term_g_41;
        q_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_41, c_65);
        t = c_7(q_34, c_65, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm o_47 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_47) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            d_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, d_65);
        e_34 = t;
        t = (ATerm) ATinsert(ATempty, d_34);
        j_34 = t;
        t = SSLsetAnnotations(e_34, j_34);
        LocalPopChoice(n_47);
      }
    else
      {
        t = l_47;
        {
          ATerm p_47 = t;
          int q_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_34 = NULL,d_35 = NULL,f_35 = NULL,m_35 = NULL;
              t = term_g_41;
              m_35 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_41, c_65);
              t = c_7(m_35, c_65, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm s_47 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_47) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  z_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, d_65);
              d_35 = t;
              t = (ATerm) ATinsert(ATempty, z_34);
              f_35 = t;
              t = SSLsetAnnotations(d_35, f_35);
              LocalPopChoice(q_47);
            }
          else
            {
              t = p_47;
              {
                ATerm v_35 = NULL,w_35 = NULL,y_35 = NULL,i_36 = NULL;
                t = term_g_41;
                i_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_41, c_65);
                t = c_7(i_36, c_65, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm t_47 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) t_47) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    v_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, d_65);
                w_35 = t;
                t = (ATerm) ATinsert(ATempty, v_35);
                y_35 = t;
                t = SSLsetAnnotations(w_35, y_35);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,c_12 = NULL;
  ATerm u_47 = t;
  int v_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(v_47);
    }
  else
    {
      t = u_47;
    }
  v_65 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_65);
  s_65 = t;
  t = t_65;
  t = DeclareBound_0_0(t);
  u_65 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_65);
  c_12 = t;
  t = SSLsetAnnotations(c_12, s_65);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm x_47 = t;
  int y_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,j_12 = NULL;
      h_66 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_66);
      f_66 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_66);
      j_12 = t;
      t = SSLsetAnnotations(j_12, f_66);
      LocalPopChoice(y_47);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = x_47;
      {
        ATerm b_48 = t;
        int d_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_12 = NULL;
            l_66 = t;
            if(match_cons(t, sym_App_2))
              {
                j_66 = ATgetArgument(t, 0);
                k_66 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_66);
            i_66 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, j_66, k_66);
            m_12 = t;
            t = SSLsetAnnotations(m_12, i_66);
            LocalPopChoice(d_48);
            {
              ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,n_12 = NULL;
              r_66 = t;
              if(match_cons(t, sym_App_2))
                {
                  n_66 = ATgetArgument(t, 0);
                  o_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_66);
              m_66 = t;
              t = n_66;
              t = mark_buv_0_0(t);
              p_66 = t;
              t = o_66;
              t = mark_build_vars_0_0(t);
              q_66 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, p_66, q_66);
              n_12 = t;
              t = SSLsetAnnotations(n_12, m_66);
            }
          }
        else
          {
            t = b_48;
            {
              ATerm g_48 = t;
              int h_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,y_12 = NULL;
                  u_66 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      t_66 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_66);
                  s_66 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, t_66);
                  y_12 = t;
                  t = SSLsetAnnotations(y_12, s_66);
                  LocalPopChoice(h_48);
                  {
                    ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,z_66 = NULL,z_12 = NULL;
                    z_66 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        w_66 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(z_66);
                    v_66 = t;
                    t = w_66;
                    t = mark_buv_0_0(t);
                    x_66 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, x_66);
                    z_12 = t;
                    t = SSLsetAnnotations(z_12, v_66);
                  }
                }
              else
                {
                  t = g_48;
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
  ATerm i_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_68 = NULL,j_68 = NULL;
      i_68 = t;
      if(match_cons(t, sym_Match_1))
        {
          j_68 = ATgetArgument(t, 0);
          {
            ATerm a_37 = NULL,e_37 = NULL,p_13 = NULL;
            t = SSLgetAnnotations(i_68);
            a_37 = t;
            t = j_68;
            t = mark_match_vars_0_0(t);
            e_37 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, e_37);
            p_13 = t;
            t = SSLsetAnnotations(p_13, a_37);
          }
        }
      else
        {
          ATerm q_37 = NULL,t_37 = NULL,q_13 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              j_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_68);
          q_37 = t;
          t = j_68;
          t = mark_build_vars_0_0(t);
          t_37 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, t_37);
          q_13 = t;
          t = SSLsetAnnotations(q_13, q_37);
        }
      LocalPopChoice(j_48);
    }
  else
    {
      t = i_48;
      {
        ATerm k_48 = t;
        int m_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(m_48);
          }
        else
          {
            t = k_48;
            {
              ATerm n_48 = t;
              int p_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(p_48);
                }
              else
                {
                  t = n_48;
                  {
                    ATerm q_48 = t;
                    int s_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(s_48);
                      }
                    else
                      {
                        t = q_48;
                        {
                          ATerm t_48 = t;
                          int u_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
                              k_68 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  p_68 = ATgetArgument(t, 0);
                                  q_68 = ATgetArgument(t, 1);
                                  r_68 = ATgetArgument(t, 2);
                                  s_68 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = k_68;
                              t = w_6(p_68, q_68, r_68, s_68, t);
                              LocalPopChoice(u_48);
                            }
                          else
                            {
                              t = t_48;
                              {
                                ATerm v_48 = t;
                                int y_48 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(y_48);
                                  }
                                else
                                  {
                                    t = v_48;
                                    {
                                      ATerm z_48 = t;
                                      int a_49 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
                                          i_69 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              j_69 = ATgetArgument(t, 0);
                                              t = j_69;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  c_69 = ATgetArgument(t, 0);
                                                  d_69 = ATgetArgument(t, 1);
                                                  e_69 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = i_69;
                                              t = v_6(c_69, d_69, e_69, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  j_69 = ATgetArgument(t, 0);
                                                  t = j_69;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      c_69 = ATgetArgument(t, 0);
                                                      d_69 = ATgetArgument(t, 1);
                                                      e_69 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_69;
                                                  t = u_6(c_69, d_69, e_69, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      j_69 = ATgetArgument(t, 0);
                                                      k_69 = ATgetArgument(t, 1);
                                                      l_69 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_69;
                                                  t = t_6(j_69, k_69, l_69, t);
                                                }
                                            }
                                          LocalPopChoice(a_49);
                                        }
                                      else
                                        {
                                          t = z_48;
                                          {
                                            ATerm e_49 = t;
                                            int h_49 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(h_49);
                                              }
                                            else
                                              {
                                                t = e_49;
                                                {
                                                  ATerm i_49 = t;
                                                  int j_49 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(j_49);
                                                    }
                                                  else
                                                    {
                                                      t = i_49;
                                                      {
                                                        ATerm k_49 = t;
                                                        int l_49 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm h_70 = NULL;
                                                            h_70 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm m_49 = ATgetArgument(t, 0);
                                                                ATerm n_49 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = h_70;
                                                            t = s_6(t);
                                                            LocalPopChoice(l_49);
                                                          }
                                                        else
                                                          {
                                                            t = k_49;
                                                            {
                                                              ATerm o_49 = t;
                                                              int p_49 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(p_49);
                                                                }
                                                              else
                                                                {
                                                                  t = o_49;
                                                                  {
                                                                    ATerm q_49 = t;
                                                                    int t_49 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(t_49);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_49;
                                                                        {
                                                                          ATerm v_49 = t;
                                                                          int w_49 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(w_49);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_49;
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
static ATerm d_7 (ATerm w_29, ATerm x_29, ATerm v_29, ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
  u_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_29, x_29);
  {
    ATerm y_49 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_50 = ATgetArgument(t, 0);
            ATerm f_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_29, x_29);
        t = s_7(w_29, x_29, t);
        LocalPopChoice(b_50);
      }
    else
      {
        t = y_49;
        t = (ATerm) ATempty;
      }
  }
  v_70 = t;
  t = (ATerm) ATinsert(CheckATermList(v_70), v_29);
  w_70 = t;
  t = SSL_table_put(w_29, x_29, w_70);
  t = u_70;
  return(t);
}
static ATerm e_7 (ATerm p_88 (ATerm), ATerm o_29, ATerm m_29, ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
  f_71 = t;
  t = p_88(t);
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_71, o_29, m_29);
  t = d_7(a_71, o_29, m_29, t);
  {
    ATerm g_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_71 = NULL;
        t = term_k_50;
        i_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_71, term_k_50);
        t = s_7(a_71, i_71, t);
        LocalPopChoice(i_50);
      }
    else
      {
        t = g_50;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_71 = ATgetFirst((ATermList) t);
      c_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_50;
  g_71 = t;
  t = (ATerm) ATinsert(CheckATermList(c_71), (ATerm) ATinsert(CheckATermList(b_71), o_29));
  h_71 = t;
  t = SSL_table_put(a_71, g_71, h_71);
  t = f_71;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_71);
  m_71 = t;
  t = term_o_50;
  n_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, l_71), term_o_50);
  t = e_7(v_12, m_71, n_71, t);
  t = l_71;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm r_71 = NULL,w_71 = NULL,x_71 = NULL,z_71 = NULL,a_72 = NULL,c_14 = NULL;
  a_72 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_71 = ATgetArgument(t, 0);
      x_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_72);
  r_71 = t;
  t = x_71;
  {
    static ATerm e_13 (ATerm t)
    {
      ATerm c_72 = NULL;
      c_72 = t;
      t = w_71;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = c_72;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(b_13, e_13, t);
  }
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, w_71, z_71);
  c_14 = t;
  t = SSLsetAnnotations(c_14, r_71);
  return(t);
}
ATerm tboundin_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm b_77 = NULL,f_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL;
  j_77 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_77 = ATgetArgument(t, 0);
      b_77 = ATgetArgument(t, 1);
      {
        ATerm k_38 = NULL,p_38 = NULL,q_38 = NULL,i_14 = NULL;
        t = SSLgetAnnotations(j_77);
        k_38 = t;
        t = k_77;
        t = k_105(t);
        p_38 = t;
        t = b_77;
        t = i_105(t);
        q_38 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_38, q_38);
        i_14 = t;
        t = SSLsetAnnotations(i_14, k_38);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          k_77 = ATgetArgument(t, 0);
          b_77 = ATgetArgument(t, 1);
          f_77 = ATgetArgument(t, 2);
          i_77 = ATgetArgument(t, 3);
          {
            ATerm r_39 = NULL,y_39 = NULL,z_39 = NULL,k_40 = NULL,l_40 = NULL,j_14 = NULL;
            t = SSLgetAnnotations(j_77);
            r_39 = t;
            t = k_77;
            t = k_105(t);
            y_39 = t;
            t = b_77;
            t = k_105(t);
            z_39 = t;
            t = f_77;
            t = k_105(t);
            k_40 = t;
            t = i_77;
            t = i_105(t);
            l_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_39, z_39, k_40, l_40);
            j_14 = t;
            t = SSLsetAnnotations(j_14, r_39);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              k_77 = ATgetArgument(t, 0);
              b_77 = ATgetArgument(t, 1);
              f_77 = ATgetArgument(t, 2);
              i_77 = ATgetArgument(t, 3);
              {
                ATerm j_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,p_14 = NULL;
                t = SSLgetAnnotations(j_77);
                j_41 = t;
                t = k_77;
                t = k_105(t);
                o_41 = t;
                t = b_77;
                t = k_105(t);
                p_41 = t;
                t = f_77;
                t = k_105(t);
                q_41 = t;
                t = i_77;
                t = i_105(t);
                r_41 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, o_41, p_41, q_41, r_41);
                p_14 = t;
                t = SSLsetAnnotations(p_14, j_41);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  k_77 = ATgetArgument(t, 0);
                  {
                    ATerm h_42 = NULL,j_42 = NULL,q_14 = NULL;
                    t = SSLgetAnnotations(j_77);
                    h_42 = t;
                    t = k_77;
                    t = i_105(t);
                    j_42 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, j_42);
                    q_14 = t;
                    t = SSLsetAnnotations(q_14, h_42);
                  }
                }
              else
                {
                  ATerm t_42 = NULL,x_42 = NULL,v_14 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      k_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_77);
                  t_42 = t;
                  t = k_77;
                  t = i_105(t);
                  x_42 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_42);
                  v_14 = t;
                  t = SSLsetAnnotations(v_14, t_42);
                }
            }
        }
    }
  return(t);
}
ATerm map_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  static ATerm c_79 (ATerm t)
  {
    ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL;
    t_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_78;
      }
    else
      {
        ATerm l_43 = NULL,s_43 = NULL,t_43 = NULL,g_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_78 = ATgetFirst((ATermList) t);
            v_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_78);
        l_43 = t;
        t = u_78;
        t = d_85(t);
        s_43 = t;
        t = v_78;
        t = c_79(t);
        t_43 = t;
        t = (ATerm) ATinsert(CheckATermList(t_43), s_43);
        g_17 = t;
        t = SSLsetAnnotations(g_17, l_43);
      }
    return(t);
  }
  t = c_79(t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm u_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_79);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm s_50 = t;
  int u_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_50);
    }
  else
    {
      t = s_50;
      {
        ATerm v_50 = t;
        int y_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_50);
          }
        else
          {
            t = v_50;
            {
              ATerm w_79 = NULL,z_79 = NULL,b_80 = NULL,c_80 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_79 = ATgetArgument(t, 0);
                  z_79 = ATgetArgument(t, 1);
                  b_80 = ATgetArgument(t, 2);
                  c_80 = ATgetArgument(t, 3);
                  t = b_80;
                  t = map_1_0(l_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_79 = ATgetArgument(t, 0);
                      z_79 = ATgetArgument(t, 1);
                      b_80 = ATgetArgument(t, 2);
                      c_80 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_80;
                  t = map_1_0(m_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm t_80 = NULL;
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_80 = ATgetArgument(t, 0);
          {
            ATerm b_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_51);
      t = t_80;
    }
  else
    {
      t = z_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_80;
    }
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm c_81 = NULL;
  ATerm c_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_81 = ATgetArgument(t, 0);
          {
            ATerm f_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_51);
      t = c_81;
    }
  else
    {
      t = c_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_81;
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm g_81 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_81);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm g_51 = t;
  int j_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_51);
    }
  else
    {
      t = g_51;
      {
        ATerm k_51 = t;
        int l_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_51);
          }
        else
          {
            t = k_51;
            {
              ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_81 = ATgetArgument(t, 0);
                  j_81 = ATgetArgument(t, 1);
                  k_81 = ATgetArgument(t, 2);
                  l_81 = ATgetArgument(t, 3);
                  t = k_81;
                  t = map_1_0(r_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_81 = ATgetArgument(t, 0);
                      j_81 = ATgetArgument(t, 1);
                      k_81 = ATgetArgument(t, 2);
                      l_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_81;
                  t = map_1_0(s_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm s_81 = NULL;
  ATerm m_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_81 = ATgetArgument(t, 0);
          {
            ATerm q_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_51);
      t = s_81;
    }
  else
    {
      t = m_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_81;
    }
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm b_82 = NULL;
  ATerm r_51 = t;
  int s_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_82 = ATgetArgument(t, 0);
          {
            ATerm t_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_51);
      t = b_82;
    }
  else
    {
      t = r_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_82;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm s_79 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      s_79 = ATgetArgument(t, 0);
      t = s_79;
      t = free_vars_3_0(f_13, g_13, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          s_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_79;
      t = free_vars_3_0(n_13, o_13, tboundin_3_0, t);
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm q_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_82);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm u_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_51);
    }
  else
    {
      t = u_51;
      {
        ATerm z_51 = t;
        int b_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_52);
          }
        else
          {
            t = z_51;
            {
              ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_82 = ATgetArgument(t, 0);
                  t_82 = ATgetArgument(t, 1);
                  u_82 = ATgetArgument(t, 2);
                  v_82 = ATgetArgument(t, 3);
                  t = u_82;
                  t = map_1_0(d_14, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_82 = ATgetArgument(t, 0);
                      t_82 = ATgetArgument(t, 1);
                      u_82 = ATgetArgument(t, 2);
                      v_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_82;
                  t = map_1_0(x_14, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm c_83 = NULL;
  ATerm c_52 = t;
  int e_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_83 = ATgetArgument(t, 0);
          {
            ATerm g_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_52);
      t = c_83;
    }
  else
    {
      t = c_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_83;
    }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm l_83 = NULL;
  ATerm h_52 = t;
  int i_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_83 = ATgetArgument(t, 0);
          {
            ATerm j_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_52);
      t = l_83;
    }
  else
    {
      t = h_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_83;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_82 = NULL,n_82 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      n_82 = ATgetArgument(t, 0);
      t = n_82;
      if(match_cons(t, sym_Rule_3))
        {
          j_82 = ATgetArgument(t, 0);
          {
            ATerm k_52 = ATgetArgument(t, 1);
          }
          {
            ATerm l_52 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_82;
      t = free_vars_3_0(z_13, a_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          n_82 = ATgetArgument(t, 0);
          {
            ATerm m_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_82;
    }
  return(t);
}
static ATerm i_7 (ATerm s_84 (ATerm), ATerm c_24, ATerm b_24, ATerm t)
{
  static ATerm e_84 (ATerm t)
  {
    ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL;
    z_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_84 = ATgetFirst((ATermList) t);
            b_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_52 = t;
          int o_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_83;
              {
                static ATerm y_14 (ATerm t)
                {
                  t = b_24;
                  return(t);
                }
                t = j_7(s_84, y_14, a_84, b_84, t);
              }
              t = e_84(t);
              LocalPopChoice(o_52);
            }
          else
            {
              t = n_52;
              {
                ATerm f_44 = NULL,k_44 = NULL,t_17 = NULL;
                t = SSLgetAnnotations(z_83);
                f_44 = t;
                t = b_84;
                t = e_84(t);
                k_44 = t;
                t = (ATerm) ATinsert(CheckATermList(k_44), a_84);
                t_17 = t;
                t = SSLsetAnnotations(t_17, f_44);
              }
            }
        }
      }
    return(t);
  }
  t = c_24;
  t = e_84(t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL;
  h_84 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_84;
      t = f_87(t);
    }
  else
    {
      ATerm m_84 = NULL,p_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_84 = ATgetFirst((ATermList) t);
          j_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_84;
      t = h_87(t);
      m_84 = t;
      t = j_84;
      t = foldr_3_0(f_87, g_87, h_87, t);
      p_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_84, p_84);
      t = g_87(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  static ATerm z_85 (ATerm t)
  {
    ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
    w_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_85 = ATgetFirst((ATermList) t);
        y_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_52 = t;
      int q_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_45 = NULL,q_45 = NULL,y_17 = NULL;
          t = SSLgetAnnotations(w_85);
          c_45 = t;
          t = x_85;
          t = n_85(t);
          q_45 = t;
          t = (ATerm) ATinsert(CheckATermList(y_85), q_45);
          y_17 = t;
          t = SSLsetAnnotations(y_17, c_45);
          LocalPopChoice(q_52);
        }
      else
        {
          t = p_52;
          {
            ATerm g_46 = NULL,y_46 = NULL,z_17 = NULL;
            t = SSLgetAnnotations(w_85);
            g_46 = t;
            t = y_85;
            t = z_85(t);
            y_46 = t;
            t = (ATerm) ATinsert(CheckATermList(y_46), x_85);
            z_17 = t;
            t = SSLsetAnnotations(z_17, g_46);
          }
        }
    }
    return(t);
  }
  t = z_85(t);
  return(t);
}
static ATerm j_7 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm g_24, ATerm f_24, ATerm t)
{
  t = w_84(t);
  {
    static ATerm z_14 (ATerm t)
    {
      ATerm c_86 = NULL;
      c_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_24, c_86);
      t = v_84(t);
      return(t);
    }
    t = fetch_1_0(z_14, t);
  }
  t = f_24;
  return(t);
}
static ATerm k_7 (ATerm n_84 (ATerm), ATerm a_24, ATerm z_23, ATerm t)
{
  static ATerm s_86 (ATerm t)
  {
    ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
    n_86 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_86;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_86 = ATgetFirst((ATermList) t);
            p_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_52 = t;
          int s_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_86;
              {
                static ATerm a_15 (ATerm t)
                {
                  t = z_23;
                  return(t);
                }
                t = j_7(n_84, a_15, o_86, p_86, t);
              }
              t = s_86(t);
              LocalPopChoice(s_52);
            }
          else
            {
              t = r_52;
              {
                ATerm m_47 = NULL,w_47 = NULL,c_18 = NULL;
                t = SSLgetAnnotations(n_86);
                m_47 = t;
                t = p_86;
                t = s_86(t);
                w_47 = t;
                t = (ATerm) ATinsert(CheckATermList(w_47), o_86);
                c_18 = t;
                t = SSLsetAnnotations(c_18, m_47);
              }
            }
        }
      }
    return(t);
  }
  t = a_24;
  t = s_86(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  static ATerm r_87 (ATerm t)
  {
    ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
    q_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_87 = ATgetFirst((ATermList) t);
        p_87 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_48 = NULL,r_48 = NULL,g_18 = NULL;
          t = SSLgetAnnotations(q_87);
          o_48 = t;
          t = p_87;
          t = r_87(t);
          r_48 = t;
          t = (ATerm) ATinsert(CheckATermList(r_48), o_87);
          g_18 = t;
          t = SSLsetAnnotations(g_18, o_48);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_87;
        t = t_85(t);
      }
    return(t);
  }
  t = r_87(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL;
  v_86 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_86;
    }
  else
    {
      static ATerm h_15 (ATerm t)
      {
        t = not_null(x_86);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_86 = ATgetFirst((ATermList) t);
          if(((x_86 != NULL) && (x_86 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_86;
      t = at_end_1_0(h_15, t);
    }
  return(t);
}
static ATerm d_88 (ATerm v_87, ATerm t)
{
  ATerm w_87 = NULL;
  t = SSL_explode_term(v_87);
  if(match_cons(t, sym__2))
    {
      ATerm t_52 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_52) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_87;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
  a_88 = t;
  if(match_cons(t, sym__2))
    {
      y_87 = ATgetArgument(t, 0);
      z_87 = ATgetArgument(t, 1);
      {
        ATerm u_52 = t;
        int v_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_15 (ATerm t)
            {
              t = z_87;
              return(t);
            }
            t = y_87;
            t = at_end_1_0(u_15, t);
            LocalPopChoice(v_52);
          }
        else
          {
            t = u_52;
            t = d_88(a_88, t);
          }
      }
    }
  else
    {
      t = d_88(a_88, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  static ATerm k_88 (ATerm t)
  {
    ATerm w_52 = t;
    int x_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_99(t);
        LocalPopChoice(x_52);
      }
    else
      {
        t = w_52;
        {
          ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,i_18 = NULL;
          t = m_99(t);
          j_88 = t;
          if(match_cons(t, sym__2))
            {
              f_88 = ATgetArgument(t, 0);
              g_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_88);
          e_88 = t;
          t = f_88;
          t = o_99(t);
          h_88 = t;
          t = g_88;
          t = k_88(t);
          i_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_88, i_88);
          i_18 = t;
          t = SSLsetAnnotations(i_18, e_88);
          t = n_99(t);
        }
      }
    return(t);
  }
  t = k_88(t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_52 = ATgetArgument(t, 0);
      if(((ATgetType(y_52) != AT_LIST) || !(ATisEmpty(y_52))))
        _fail(t);
      {
        ATerm z_52 = ATgetArgument(t, 1);
        if(((ATgetType(z_52) != AT_LIST) || !(ATisEmpty(z_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_53 = ATgetArgument(t, 0);
      if(((ATgetType(a_53) == AT_LIST) && !(ATisEmpty(a_53))))
        {
          y_88 = ATgetFirst((ATermList) a_53);
          z_88 = (ATerm) ATgetNext((ATermList) a_53);
        }
      else
        _fail(t);
      {
        ATerm b_53 = ATgetArgument(t, 1);
        if(((ATgetType(b_53) == AT_LIST) && !(ATisEmpty(b_53))))
          {
            a_89 = ATgetFirst((ATermList) b_53);
            b_89 = (ATerm) ATgetNext((ATermList) b_53);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_88, a_89), (ATerm) ATmakeAppl(sym__2, z_88, b_89));
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL;
  if(match_cons(t, sym__2))
    {
      c_89 = ATgetArgument(t, 0);
      d_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_89), c_89);
  return(t);
}
static ATerm p_7 (ATerm s_637, ATerm x_637, ATerm t_60, ATerm t)
{
  ATerm s_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL;
  t = SSL_explode_term(x_637);
  if(match_cons(t, sym__2))
    {
      s_88 = ATgetArgument(t, 0);
      v_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_637);
  if(match_cons(t, sym__2))
    {
      if((s_88 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_88, v_88);
  t = genzip_4_0(h_16, i_16, j_16, _id, t);
  w_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_88, t_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t)
{
  static ATerm f_89 (ATerm t)
  {
    ATerm c_53 = t;
    int d_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_97(t);
        LocalPopChoice(d_53);
      }
    else
      {
        t = c_53;
        t = l_97(t);
        t = f_89(t);
      }
    return(t);
  }
  t = f_89(t);
  return(t);
}
ATerm for_3_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  t = n_97(t);
  t = while_not_2_0(o_97, p_97, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm m_89 = NULL;
  m_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_89);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,k_18 = NULL;
  q_89 = t;
  if(match_cons(t, sym__2))
    {
      o_89 = ATgetArgument(t, 0);
      p_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_89);
  n_89 = t;
  t = p_89;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_89, p_89);
  k_18 = t;
  t = SSLsetAnnotations(k_18, n_89);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL;
  j_90 = t;
  if(match_cons(t, sym__2))
    {
      k_90 = ATgetArgument(t, 0);
      n_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_90 = ATgetFirst((ATermList) t);
      p_90 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_90(k_90, n_90, j_90, t);
            LocalPopChoice(h_53);
          }
        else
          {
            t = g_53;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_90), o_90), p_90);
          }
      }
    }
  else
    {
      t = z_90(k_90, n_90, j_90, t);
    }
  return(t);
}
static ATerm z_90 (ATerm r_89, ATerm s_89, ATerm t_89, ATerm t)
{
  ATerm u_89 = NULL,x_89 = NULL,l_18 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL;
  t = SSLgetAnnotations(t_89);
  u_89 = t;
  t = s_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_90 = ATgetFirst((ATermList) t);
      d_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_90;
  if(match_cons(t, sym__2))
    {
      b_90 = ATgetArgument(t, 0);
      c_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_53 = t;
    int k_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_90;
        if((b_90 != t))
          {
            _fail(t);
          }
        t = d_90;
        LocalPopChoice(k_53);
      }
    else
      {
        t = i_53;
        t = s_89;
        t = p_7(b_90, c_90, d_90, t);
      }
  }
  x_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_89, x_89);
  l_18 = t;
  t = SSLsetAnnotations(l_18, u_89);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm y_90 = NULL;
  if(match_cons(t, sym__2))
    {
      y_90 = ATgetArgument(t, 0);
      if((y_90 != ATgetArgument(t, 1)))
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
  ATerm n_53 = t;
  int q_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_16, o_16, p_16, t);
      LocalPopChoice(q_53);
    }
  else
    {
      t = n_53;
      {
        ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
        t_90 = t;
        if(match_cons(t, sym__2))
          {
            u_90 = ATgetArgument(t, 0);
            v_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_90;
        t = k_7(q_16, u_90, v_90, t);
      }
    }
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL;
  if(match_cons(t, sym__2))
    {
      b_49 = ATgetArgument(t, 0);
      c_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(u_17, b_49, c_49, t);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm d_49 = NULL;
  if(match_cons(t, sym__2))
    {
      d_49 = ATgetArgument(t, 0);
      if((d_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  if(match_cons(t, sym__2))
    {
      r_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(b_18, r_49, s_49, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm u_49 = NULL;
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      if((u_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm n_91 (ATerm t)
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_108(t);
        LocalPopChoice(s_53);
      }
    else
      {
        t = r_53;
        {
          ATerm t_53 = t;
          int v_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_91 = NULL,c_91 = NULL,w_48 = NULL,x_48 = NULL;
              b_91 = t;
              t = l_108(t);
              c_91 = t;
              t = b_91;
              {
                static ATerm z_16 (ATerm t)
                {
                  ATerm e_91 = NULL;
                  t = n_91(t);
                  e_91 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_91, c_91);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_108(z_16, n_91, m_17, t);
              }
              x_48 = t;
              t = SSL_explode_term(x_48);
              if(match_cons(t, sym__2))
                {
                  ATerm w_53 = ATgetArgument(t, 0);
                  w_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_48;
              t = foldr_3_0(n_17, r_17, _id, t);
              LocalPopChoice(v_53);
            }
          else
            {
              t = t_53;
              {
                ATerm f_49 = NULL,g_49 = NULL;
                g_49 = t;
                t = SSL_explode_term(g_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_53 = ATgetArgument(t, 0);
                    f_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_49;
                t = foldr_3_0(x_17, a_18, n_91, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_91(t);
  return(t);
}
ATerm topdown_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  static ATerm d_18 (ATerm t)
  {
    t = topdown_1_0(t_88, t);
    return(t);
  }
  t = t_88(t);
  t = SRTS_all(d_18, t);
  return(t);
}
static ATerm r_7 (ATerm b_30, ATerm c_30, ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL;
  p_91 = t;
  {
    ATerm y_53 = t;
    int a_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
        t = s_7(b_30, c_30, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_54 = ATgetFirst((ATermList) t);
            o_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_54);
        t = SSL_table_put(b_30, c_30, o_91);
        t = (ATerm) ATmakeAppl(sym__3, b_30, c_30, o_91);
      }
    else
      {
        t = y_53;
        t = SSL_table_remove(b_30, c_30);
        t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
      }
  }
  t = p_91;
  return(t);
}
ATerm end_scope_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL;
  t_91 = t;
  t = m_88(t);
  s_91 = t;
  {
    ATerm g_54 = t;
    int h_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_91 = NULL;
        t = term_k_50;
        v_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_91, term_k_50);
        t = s_7(s_91, v_91, t);
        LocalPopChoice(h_54);
      }
    else
      {
        t = g_54;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_91 = ATgetFirst((ATermList) t);
      q_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_50;
  u_91 = t;
  t = SSL_table_put(s_91, u_91, q_91);
  t = r_91;
  {
    static ATerm e_18 (ATerm t)
    {
      ATerm w_91 = NULL;
      w_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_91, w_91);
      t = r_7(s_91, w_91, t);
      return(t);
    }
    t = map_1_0(e_18, t);
  }
  t = t_91;
  return(t);
}
ATerm restore_always_2_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm t)
{
  ATerm i_54 = t;
  int j_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_102(t);
      t = n_102(t);
      LocalPopChoice(j_54);
    }
  else
    {
      t = i_54;
      t = n_102(t);
      _fail(t);
    }
  return(t);
}
static ATerm s_7 (ATerm n_31, ATerm o_31, ATerm t)
{
  t = SSL_table_get(n_31, o_31);
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL;
  z_91 = t;
  t = l_88(t);
  y_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_91, term_k_50);
  {
    ATerm l_54 = t;
    int o_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_92 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_54 = ATgetArgument(t, 0);
            ATerm r_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_50;
        g_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_91, term_k_50);
        t = s_7(y_91, g_92, t);
        LocalPopChoice(o_54);
      }
    else
      {
        t = l_54;
        t = (ATerm) ATempty;
      }
  }
  a_92 = t;
  t = term_k_50;
  b_92 = t;
  t = (ATerm) ATinsert(CheckATermList(a_92), (ATerm) ATempty);
  c_92 = t;
  t = SSL_table_put(y_91, b_92, c_92);
  t = z_91;
  return(t);
}
ATerm scope_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  static ATerm f_18 (ATerm t)
  {
    t = end_scope_1_0(n_88, t);
    return(t);
  }
  t = begin_scope_1_0(n_88, t);
  t = restore_always_2_0(o_88, f_18, t);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm j_18 (ATerm t)
{
  t = scope_2_0(m_18, n_18, t);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  t = topdown_1_0(p_18, t);
  r_92 = t;
  t = free_vars_3_0(s_18, t_18, tboundin_3_0, t);
  q_92 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, q_92, r_92);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm s_54 = ATgetArgument(t, 0);
      p_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_92;
  {
    ATerm u_54 = t;
    int v_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(v_54);
      }
    else
      {
        t = u_54;
        {
          ATerm w_54 = t;
          int x_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(x_54);
            }
          else
            {
              t = w_54;
              {
                ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    b_94 = ATgetArgument(t, 0);
                    c_94 = ATgetArgument(t, 1);
                    d_94 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = p_92;
                t = q_6(b_94, c_94, d_94, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL;
  z_92 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_92 = ATgetArgument(t, 0);
      {
        ATerm z_54 = t;
        int a_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_49 = NULL,z_49 = NULL,o_18 = NULL;
            t = SSLgetAnnotations(z_92);
            x_49 = t;
            t = y_92;
            if(match_cons(t, sym_ListVar_1))
              {
                z_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, z_49);
            o_18 = t;
            t = SSLsetAnnotations(o_18, x_49);
            LocalPopChoice(a_55);
          }
        else
          {
            t = z_54;
            t = z_92;
          }
      }
    }
  else
    {
      t = z_92;
    }
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm c_93 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_93);
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm b_55 = t;
  int c_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_55);
    }
  else
    {
      t = b_55;
      {
        ATerm d_55 = t;
        int e_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_55);
          }
        else
          {
            t = d_55;
            {
              ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_93 = ATgetArgument(t, 0);
                  f_93 = ATgetArgument(t, 1);
                  g_93 = ATgetArgument(t, 2);
                  h_93 = ATgetArgument(t, 3);
                  t = g_93;
                  t = map_1_0(w_18, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_93 = ATgetArgument(t, 0);
                      f_93 = ATgetArgument(t, 1);
                      g_93 = ATgetArgument(t, 2);
                      h_93 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_93;
                  t = map_1_0(z_18, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm o_93 = NULL;
  ATerm f_55 = t;
  int k_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_93 = ATgetArgument(t, 0);
          {
            ATerm l_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_55);
      t = o_93;
    }
  else
    {
      t = f_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_93;
    }
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm x_93 = NULL;
  ATerm q_55 = t;
  int r_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_93 = ATgetArgument(t, 0);
          {
            ATerm s_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_55);
      t = x_93;
    }
  else
    {
      t = q_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_93;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm o_92 = NULL;
  o_92 = t;
  t = scope_2_0(h_18, j_18, t);
  t = o_92;
  return(t);
}
ATerm filter_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_94;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_94 = ATgetFirst((ATermList) t);
          v_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_55 = t;
        int a_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_50 = NULL,w_50 = NULL,x_50 = NULL,q_18 = NULL;
            t = SSLgetAnnotations(t_94);
            t_50 = t;
            t = u_94;
            t = l_101(t);
            w_50 = t;
            t = v_94;
            t = filter_1_0(l_101, t);
            x_50 = t;
            t = (ATerm) ATinsert(CheckATermList(x_50), w_50);
            q_18 = t;
            t = SSLsetAnnotations(q_18, t_50);
            LocalPopChoice(a_56);
          }
        else
          {
            t = t_55;
            t = v_94;
            t = filter_1_0(l_101, t);
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm a_28, ATerm b_28, ATerm t)
{
  ATerm b_56 = t;
  int e_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_28, b_28);
      LocalPopChoice(e_56);
    }
  else
    {
      t = b_56;
      t = SSL_addr(a_28, b_28);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm c_116 (ATerm), ATerm d_116 (ATerm), ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
  a_95 = t;
  t = c_116(t);
  b_95 = t;
  t = term_i_20;
  c_95 = t;
  t = (ATerm) ATinsert(ATempty, b_95);
  d_95 = t;
  t = SSL_printnl(c_95, d_95);
  t = a_95;
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,u_18 = NULL;
        t = d_116(t);
        t = a_95;
        if(match_cons(t, sym__2))
          {
            f_95 = ATgetArgument(t, 0);
            g_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_95);
        e_95 = t;
        t = term_l_56;
        i_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_95, term_l_56);
        t = t_7(f_95, i_95, t);
        h_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_95, g_95);
        u_18 = t;
        t = SSLsetAnnotations(u_18, e_95);
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        {
          ATerm r_95 = NULL,s_95 = NULL,e_51 = NULL,h_51 = NULL,i_51 = NULL,v_18 = NULL;
          if(match_cons(t, sym__2))
            {
              r_95 = ATgetArgument(t, 0);
              s_95 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_95);
          e_51 = t;
          t = term_l_56;
          i_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_95, term_l_56);
          t = t_7(s_95, i_51, t);
          h_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_95, h_51);
          v_18 = t;
          t = SSLsetAnnotations(v_18, e_51);
        }
      }
  }
  return(t);
}
static ATerm b_19 (ATerm t)
{
  t = term_m_56;
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm n_56 = t;
  int o_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_s_27, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATempty, term_p_24))), term_q_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_l_25, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATempty, term_q_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_y_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_24), term_q_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_p_24))), term_q_22)))))));
      {
        ATerm p_56 = t;
        if((PushChoice() == 0))
          {
            ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL,a_19 = NULL;
            x_95 = t;
            if(match_cons(t, sym_Strategies_1))
              {
                w_95 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_95);
            v_95 = t;
            t = w_95;
            {
              ATerm q_56 = t;
              int r_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_95;
                  LocalPopChoice(r_56);
                }
              else
                {
                  t = q_56;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_95;
                }
            }
            t = (ATerm) ATmakeAppl(sym_Strategies_1, w_95);
            a_19 = t;
            t = SSLsetAnnotations(a_19, v_95);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_56;
          }
      }
      LocalPopChoice(o_56);
    }
  else
    {
      t = n_56;
      {
        ATerm z_95 = NULL,a_96 = NULL;
        t = term_i_20;
        z_95 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        a_96 = t;
        t = SSL_printnl(z_95, a_96);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(b_19, e_19, t);
  return(t);
}
ATerm debug_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL;
  b_96 = t;
  t = g_98(t);
  c_96 = t;
  t = term_i_20;
  d_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_96), c_96);
  e_96 = t;
  t = SSL_printnl(d_96, e_96);
  t = b_96;
  return(t);
}
static ATerm f_19 (ATerm t)
{
  t = term_s_56;
  return(t);
}
static ATerm g_19 (ATerm t)
{
  t = term_t_56;
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_u_56;
  return(t);
}
ATerm test_suite_2_0 (ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm t)
{
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,d_19 = NULL,c_19 = NULL;
  t = a_116(t);
  t = debug_1_0(f_19, t);
  t = term_w_56;
  t = b_116(t);
  o_96 = t;
  if(match_cons(t, sym__2))
    {
      j_96 = ATgetArgument(t, 0);
      k_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_96);
  i_96 = t;
  t = j_96;
  t = debug_1_0(g_19, t);
  l_96 = t;
  t = k_96;
  t = debug_1_0(h_19, t);
  m_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_96, m_96);
  c_19 = t;
  t = SSLsetAnnotations(c_19, i_96);
  n_96 = t;
  if(match_cons(t, sym__2))
    {
      g_96 = ATgetArgument(t, 0);
      h_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_96);
  f_96 = t;
  t = h_96;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_96, h_96);
  d_19 = t;
  t = SSLsetAnnotations(d_19, f_96);
  return(t);
}
static ATerm k_19 (ATerm t)
{
  t = term_x_56;
  return(t);
}
static ATerm s_19 (ATerm t)
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
  t = test_suite_2_0(k_19, s_19, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_io_0_0(t);
  return(t);
}

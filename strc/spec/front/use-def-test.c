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
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_GenDynRules_1;
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
Symbol sym_Overlay_3;
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
Symbol sym_Some_1;
Symbol sym_DynamicRules_1;
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
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
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
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_y_60;
ATerm term_x_60;
ATerm term_w_60;
ATerm term_v_60;
ATerm term_u_60;
ATerm term_t_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_l_58;
ATerm term_k_58;
ATerm term_s_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_i_45;
ATerm term_b_45;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_w_41;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_t_38;
ATerm term_y_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_p_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_a_37;
ATerm term_l_36;
ATerm term_e_36;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_y_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_t_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_v_32;
ATerm term_r_32;
ATerm term_n_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_m_31;
ATerm term_g_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_s_30;
ATerm term_n_30;
ATerm term_r_29;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_v_27;
ATerm term_l_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_n_26;
ATerm term_d_26;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_k_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_t_19;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test14a", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("UnEscape", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("'\\'", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Char_1, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Var_1, term_j_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("cs", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Var_1, term_o_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14b", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("testing-main", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rob", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Var_1, term_a_21);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test14c", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Match_1, term_b_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13a", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_SortVar_1, term_s_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_VarDec_2, term_a_21, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Build_1, term_b_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Str_1, term_s_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test13b", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_All_1, term_w_21);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_21, (ATerm)ATempty, (ATerm)ATempty, term_f_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test13c", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("helper", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, term_n_22, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Var_1, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Match_1, term_y_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Build_1, term_y_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Var_1, term_j_23);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Var_1, term_m_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Var_1, term_l_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_y_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Var_1, term_b_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Build_1, term_k_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_23);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Call_2, term_k_24, (ATerm) ATempty);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Build_1, term_p_23);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Match_1, term_c_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test10a", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Var_1, term_w_24);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Str_1, term_m_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Var_1, term_r_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test10b", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Call_2, term_z_26, (ATerm) ATempty);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Match_1, term_t_25);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_27, term_f_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_b_23, term_i_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Call_2, term_z_30, (ATerm) ATempty);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_LChoice_2, term_a_27, term_a_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Seq_2, term_b_31, term_z_22);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_31, term_z_22);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_LChoice_2, term_a_27, term_a_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Var_1, term_d_33);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Match_1, term_e_33);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Str_1, term_g_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Build_1, term_e_33);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_33, term_a_27);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_App_2, term_a_27, term_e_33);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Match_1, term_k_25);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Var_1, term_e_34);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_n_34, (ATerm) ATempty);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_o_34, (ATerm) ATempty);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_b_39);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_Defined_2, term_t_44, term_u_44);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Defined_2, term_d_48, term_u_44);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_Defined_2, term_n_51, term_o_51);
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym__2, term_w_60, term_w_60);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
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
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm test11_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm test10_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm test9_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm test8_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm test7_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm test6_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm test5_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm test4_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm test3_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm test2_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_7 (ATerm h_24, ATerm g_24, ATerm i_24, ATerm t);
static ATerm b_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm x_122 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm w_122 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm v_122 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm d_97 (ATerm), ATerm t);
static ATerm h_9 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm d_7 (ATerm l_68, ATerm m_68, ATerm n_68, ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm e_7 (ATerm f_68, ATerm j_68, ATerm h_68, ATerm t);
static ATerm w_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm f_7 (ATerm z_67, ATerm d_68, ATerm b_68, ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm g_7 (ATerm x_66, ATerm y_66, ATerm z_66, ATerm b_67, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm h_7 (ATerm i_65, ATerm j_65, ATerm h_65, ATerm t);
static ATerm s_11 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm i_7 (ATerm a_33, ATerm z_32, ATerm t);
static ATerm j_7 (ATerm z_35, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm k_7 (ATerm w_35, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm v_65, ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm l_7 (ATerm k_32, ATerm l_32, ATerm m_32, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm o_7 (ATerm i_32, ATerm j_32, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm p_7 (ATerm x_31, ATerm y_31, ATerm w_31, ATerm t);
static ATerm q_7 (ATerm b_95 (ATerm), ATerm t_30, ATerm r_30, ATerm t);
static ATerm k_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_91 (ATerm), ATerm t);
static ATerm j_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm t_15 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_7 (ATerm w_90 (ATerm), ATerm f_25, ATerm e_25, ATerm t);
ATerm foldr_3_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm r_91 (ATerm), ATerm t);
static ATerm u_7 (ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm j_25, ATerm i_25, ATerm t);
static ATerm v_7 (ATerm r_90 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
ATerm at_end_1_0 (ATerm y_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_89 (ATerm d_89, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm a_8 (ATerm s_678, ATerm x_678, ATerm f_65, ATerm t);
ATerm while_not_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t);
ATerm for_3_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm t);
static ATerm j_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm l_92 (ATerm u_90, ATerm v_90, ATerm y_90, ATerm t);
static ATerm r_17 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm k_18 (ATerm t);
ATerm free_vars_3_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm m_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm l_95 (ATerm), ATerm t);
static ATerm c_8 (ATerm u_35, ATerm v_35, ATerm t);
static ATerm d_8 (ATerm c_32, ATerm d_32, ATerm t);
ATerm end_scope_1_0 (ATerm y_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t);
static ATerm f_8 (ATerm p_35, ATerm q_35, ATerm r_35, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_35, ATerm y_35, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm j_33, ATerm t);
static ATerm e_8 (ATerm s_35, ATerm t_35, ATerm t);
static ATerm g_8 (ATerm q_33, ATerm r_33, ATerm t);
ATerm begin_scope_1_0 (ATerm x_94 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm k_19 (ATerm t);
static ATerm l_19 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_108 (ATerm), ATerm t);
static ATerm h_8 (ATerm f_29, ATerm g_29, ATerm t);
ATerm do_test_2_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm t);
static ATerm m_19 (ATerm t);
static ATerm n_19 (ATerm t);
ATerm test1_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_104 (ATerm), ATerm t);
static ATerm o_19 (ATerm t);
static ATerm p_19 (ATerm t);
static ATerm q_19 (ATerm t);
ATerm test_suite_2_0 (ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm t);
static ATerm r_19 (ATerm t);
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
  t = term_t_19;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm z_19 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_i_20, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_k_20), (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATinsert(ATempty, term_n_20), term_m_20), term_p_20), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, term_n_20), term_p_20)));
      {
        ATerm q_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_20;
          }
      }
      LocalPopChoice(h_20);
    }
  else
    {
      t = z_19;
      {
        ATerm a_0 = NULL,c_0 = NULL;
        t = term_r_20;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        c_0 = t;
        t = SSL_printnl(a_0, c_0);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_z_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_b_21)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_z_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_b_21)));
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm e_0 = NULL,g_0 = NULL;
        t = term_r_20;
        e_0 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        g_0 = t;
        t = SSL_printnl(e_0, g_0);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_d_21;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_g_21, (ATerm) ATmakeAppl(sym_CallT_3, term_z_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_b_21))));
      {
        ATerm h_21 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_21;
          }
      }
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm i_0 = NULL,k_0 = NULL;
        t = term_r_20;
        i_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        k_0 = t;
        t = SSL_printnl(i_0, k_0);
        t = term_s_20;
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
  t = term_k_21;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm l_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_r_21, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_v_21), term_w_21)), (ATerm) ATmakeAppl(sym_CallT_3, term_x_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_y_21))));
      {
        ATerm z_21 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_21;
          }
      }
      LocalPopChoice(o_21);
    }
  else
    {
      t = l_21;
      {
        ATerm l_0 = NULL,n_0 = NULL;
        t = term_r_20;
        l_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        n_0 = t;
        t = SSL_printnl(l_0, n_0);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm c_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_22;
      t = def_use_def_0_0(t);
      t = term_g_22;
      LocalPopChoice(e_22);
    }
  else
    {
      t = c_22;
      {
        ATerm p_0 = NULL,r_0 = NULL;
        t = term_r_20;
        p_0 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        r_0 = t;
        t = SSL_printnl(p_0, r_0);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_i_22;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_q_22), term_f_22));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_q_22), term_f_22));
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      {
        ATerm t_0 = NULL,v_0 = NULL;
        t = term_r_20;
        t_0 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        v_0 = t;
        t = SSL_printnl(t_0, v_0);
        t = term_c_21;
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
  t = term_r_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_u_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_w_22, (ATerm) ATinsert(ATempty, term_z_22)), (ATerm)ATmakeAppl(sym_Call_2, term_w_22, (ATerm) ATinsert(ATempty, term_b_23)), term_p_22));
      {
        ATerm c_23 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_23;
          }
      }
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm x_0 = NULL,z_0 = NULL;
        t = term_r_20;
        x_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        z_0 = t;
        t = SSL_printnl(x_0, z_0);
        t = term_s_20;
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
  t = term_d_23;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_b_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_23), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_p_23), term_n_23)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_b_21))), term_n_23))))));
      {
        ATerm q_23 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_23;
          }
      }
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm b_1 = NULL,c_1 = NULL;
        t = term_r_20;
        b_1 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        c_1 = t;
        t = SSL_printnl(b_1, c_1);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 = NULL,f_1 = NULL,d_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_x_23, (ATerm)ATinsert(ATempty, term_z_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_b_21)), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_24), term_b_21))), term_n_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_e_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_j_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_p_23), term_n_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_l_24, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_n_23), term_b_21)))), term_o_24))))), term_p_24))))));
      f_1 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm q_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_x_23, (ATerm)ATinsert(ATempty, term_z_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_b_21)), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_24), term_b_21))), term_n_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_e_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_j_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_p_23), term_n_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_l_24, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_n_23), term_b_21)))), term_o_24))))), term_p_24)))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_x_23, (ATerm)ATinsert(ATempty, term_z_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), term_b_21)), (ATerm)ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_24), term_b_21))), term_n_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_e_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_j_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, term_p_23), term_n_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_l_24, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_n_23), term_b_21)))), term_o_24))))), term_p_24))))));
      d_0 = t;
      t = SSLsetAnnotations(d_0, d_1);
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm h_1 = NULL,j_1 = NULL;
        t = term_r_20;
        h_1 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        j_1 = t;
        t = SSL_printnl(h_1, j_1);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(i_3, j_3, t);
  t = do_test_2_0(u_3, v_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_j_23, (ATerm)ATinsert(ATinsert(ATempty, term_w_24), term_x_22), (ATerm) ATmakeAppl(sym_Op_2, term_l_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_25), term_q_25), term_y_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_r_21, (ATerm)ATinsert(ATinsert(ATempty, term_w_24), term_x_22), (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_y_21), term_y_22)))))));
      {
        ATerm u_25 = t;
        if((PushChoice() == 0))
          {
            ATerm m_1 = NULL,n_1 = NULL,p_1 = NULL,n_4 = NULL;
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
              ATerm v_25 = t;
              int x_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_1;
                  LocalPopChoice(x_25);
                }
              else
                {
                  t = v_25;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_1;
                }
            }
            t = (ATerm) ATmakeAppl(sym_Overlays_1, n_1);
            n_4 = t;
            t = SSLsetAnnotations(n_4, m_1);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_25;
          }
      }
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm r_1 = NULL,s_1 = NULL;
        t = term_r_20;
        r_1 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        s_1 = t;
        t = SSL_printnl(r_1, s_1);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm e_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 = NULL,v_1 = NULL,o_4 = NULL;
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_j_23, (ATerm)ATinsert(ATinsert(ATempty, term_w_24), term_x_22), (ATerm) ATmakeAppl(sym_Op_2, term_l_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), term_q_25), term_y_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_r_21, (ATerm)ATinsert(ATinsert(ATempty, term_w_24), term_x_22), (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_y_21), term_y_22)))))));
      v_1 = t;
      if(match_cons(t, sym_Overlays_1))
        {
          ATerm m_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_1);
      t_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_j_23, (ATerm)ATinsert(ATinsert(ATempty, term_w_24), term_x_22), (ATerm) ATmakeAppl(sym_Op_2, term_l_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), term_q_25), term_y_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_r_21, (ATerm)ATinsert(ATinsert(ATempty, term_w_24), term_x_22), (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_y_21), term_y_22))))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_j_23, (ATerm)ATinsert(ATinsert(ATempty, term_w_24), term_x_22), (ATerm) ATmakeAppl(sym_Op_2, term_l_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), term_q_25), term_y_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_r_21, (ATerm)ATinsert(ATinsert(ATempty, term_w_24), term_x_22), (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_y_21), term_y_22)))))));
      o_4 = t;
      t = SSLsetAnnotations(o_4, t_1);
      LocalPopChoice(k_26);
    }
  else
    {
      t = e_26;
      {
        ATerm w_1 = NULL,x_1 = NULL;
        t = term_r_20;
        w_1 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        x_1 = t;
        t = SSL_printnl(w_1, x_1);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(a_4, f_4, t);
  t = do_test_2_0(g_4, h_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm o_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_t_25), term_k_25)), term_j_27)));
      {
        ATerm k_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_27;
          }
      }
      LocalPopChoice(q_26);
    }
  else
    {
      t = o_26;
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = term_r_20;
        y_1 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        z_1 = t;
        t = SSL_printnl(y_1, z_1);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm n_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_t_25), term_k_25)), term_p_22)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_t_25), term_k_25)), term_p_22)));
      LocalPopChoice(p_27);
    }
  else
    {
      t = n_27;
      {
        ATerm a_2 = NULL,f_2 = NULL;
        t = term_r_20;
        a_2 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        f_2 = t;
        t = SSL_printnl(a_2, f_2);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(i_4, j_4, t);
  t = do_test_2_0(k_4, l_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_v_27;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm w_27 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_t_25), term_k_25)), term_j_27));
      {
        ATerm h_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_29;
          }
      }
      LocalPopChoice(e_28);
    }
  else
    {
      t = w_27;
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = term_r_20;
        g_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        h_2 = t;
        t = SSL_printnl(g_2, h_2);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_i_29;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm j_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_t_25), term_k_25)), term_p_22));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_t_25), term_k_25)), term_p_22));
      LocalPopChoice(m_29);
    }
  else
    {
      t = j_29;
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_r_20;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(m_4, p_4, t);
  t = do_test_2_0(q_4, r_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_n_29;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATempty, term_k_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATempty, term_y_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATempty, term_y_22))))));
      {
        ATerm q_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_29;
          }
      }
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm k_2 = NULL,p_2 = NULL;
        t = term_r_20;
        k_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        p_2 = t;
        t = SSL_printnl(k_2, p_2);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_r_29;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm s_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATempty, term_y_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATempty, term_y_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22)))));
      {
        ATerm m_30 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_30;
          }
      }
      LocalPopChoice(x_29);
    }
  else
    {
      t = s_29;
      {
        ATerm q_2 = NULL,r_2 = NULL;
        t = term_r_20;
        q_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        r_2 = t;
        t = SSL_printnl(q_2, r_2);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_n_30;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATempty, term_y_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATempty, term_y_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATempty, term_y_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATempty, term_y_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))))));
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      {
        ATerm s_2 = NULL,t_2 = NULL;
        t = term_r_20;
        s_2 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        t_2 = t;
        t = SSL_printnl(s_2, t_2);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(s_4, t_4, t);
  t = do_test_2_0(w_4, z_4, t);
  t = do_test_2_0(a_5, b_5, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_s_30;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_g_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATempty, term_y_22)))));
      {
        ATerm h_31 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_31;
          }
      }
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm u_2 = NULL,v_2 = NULL;
        t = term_r_20;
        u_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        v_2 = t;
        t = SSL_printnl(u_2, v_2);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_m_31;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm n_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_b_32, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATempty, term_y_22)))));
      {
        ATerm e_32 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_32;
          }
      }
      LocalPopChoice(s_31);
    }
  else
    {
      t = n_31;
      {
        ATerm w_2 = NULL,x_2 = NULL;
        t = term_r_20;
        w_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        x_2 = t;
        t = SSL_printnl(w_2, x_2);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(c_5, i_5, t);
  t = do_test_2_0(j_5, k_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_n_32;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATempty, term_y_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATempty, term_y_22)))));
      {
        ATerm q_32 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_32;
          }
      }
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm y_2 = NULL,z_2 = NULL;
        t = term_r_20;
        y_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        z_2 = t;
        t = SSL_printnl(y_2, z_2);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_r_32;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATempty, term_y_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22)))));
      {
        ATerm u_32 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_32;
          }
      }
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm a_3 = NULL,b_3 = NULL;
        t = term_r_20;
        a_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        b_3 = t;
        t = SSL_printnl(a_3, b_3);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(l_5, m_5, t);
  t = do_test_2_0(q_5, w_5, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_f_33, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_33), term_l_33))), term_h_33)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_f_33, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_33), term_l_33))), term_h_33)))));
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      {
        ATerm c_3 = NULL,e_3 = NULL;
        t = term_r_20;
        c_3 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        e_3 = t;
        t = SSL_printnl(c_3, e_3);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_m_33;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_f_33, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_p_33), term_h_33)))));
      {
        ATerm s_33 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_33;
          }
      }
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
        ATerm f_3 = NULL,g_3 = NULL;
        t = term_r_20;
        f_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        g_3 = t;
        t = SSL_printnl(f_3, g_3);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_t_33;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_33), term_l_33))), term_h_33))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_d_33), term_l_33))), term_h_33))));
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm h_3 = NULL,m_3 = NULL;
        t = term_r_20;
        h_3 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        m_3 = t;
        t = SSL_printnl(h_3, m_3);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(x_5, y_5, t);
  t = do_test_2_0(e_6, f_6, t);
  t = do_test_2_0(j_6, k_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_w_33;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_24), (ATerm) ATmakeAppl(sym_Seq_2, term_z_33, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATempty, term_k_25))), term_y_22)))))));
      {
        ATerm a_34 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_34;
          }
      }
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      {
        ATerm n_3 = NULL,o_3 = NULL;
        t = term_r_20;
        n_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        o_3 = t;
        t = SSL_printnl(n_3, o_3);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_f_34), term_y_22))), term_k_25))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_f_34), term_y_22))), term_k_25))))));
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm p_3 = NULL,q_3 = NULL;
        t = term_r_20;
        p_3 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        q_3 = t;
        t = SSL_printnl(p_3, q_3);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(m_6, n_6, t);
  t = do_test_2_0(x_6, y_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_g_34;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATempty, term_k_25))), term_y_22)))));
      {
        ATerm j_34 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_34;
          }
      }
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      {
        ATerm r_3 = NULL,w_3 = NULL;
        t = term_r_20;
        r_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_20);
        w_3 = t;
        t = SSL_printnl(r_3, w_3);
        t = term_s_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_k_34;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_f_34), term_y_22))), term_k_25)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, term_f_34), term_y_22))), term_k_25)))));
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm x_3 = NULL,y_3 = NULL;
        t = term_r_20;
        x_3 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        y_3 = t;
        t = SSL_printnl(x_3, y_3);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(z_6, m_7, t);
  t = do_test_2_0(s_7, w_7, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_o_34;
  return(t);
}
static ATerm b_7 (ATerm h_24, ATerm g_24, ATerm i_24, ATerm t)
{
  ATerm z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  z_3 = t;
  t = (ATerm) ATempty;
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_34, h_24);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_34, h_24));
  t = q_7(x_7, d_4, e_4, t);
  t = (ATerm) ATempty;
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_34, h_24);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_34, h_24));
  t = q_7(y_7, b_4, c_4, t);
  t = i_24;
  t = use_vars_0_0(t);
  t = z_3;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_o_34;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_o_34;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,l_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,w_6 = NULL;
  o_6 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      q_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
      s_6 = ATgetArgument(t, 2);
      g_6 = ATgetArgument(t, 3);
      t = g_6;
      if(match_cons(t, sym_StratRule_3))
        {
          h_6 = ATgetArgument(t, 0);
          i_6 = ATgetArgument(t, 1);
          l_6 = ATgetArgument(t, 2);
          {
            ATerm z_7 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
            t = (ATerm) ATempty;
            n_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_34, q_6);
            o_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_34, q_6));
            t = q_7(b_8, n_8, o_8, t);
            t = (ATerm) ATempty;
            z_7 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_34, q_6);
            m_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_34, q_6));
            t = q_7(i_8, z_7, m_8, t);
            t = (ATerm) ATmakeAppl(sym__3, h_6, i_6, l_6);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, q_6, r_6, s_6, (ATerm) ATmakeAppl(sym_StratRule_3, h_6, i_6, l_6));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              h_6 = ATgetArgument(t, 0);
              i_6 = ATgetArgument(t, 1);
              l_6 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = o_6;
          {
            ATerm t_34 = t;
            int u_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_3 = NULL,l_3 = NULL,s_3 = NULL,t_3 = NULL;
                t = (ATerm) ATempty;
                s_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_34, q_6);
                t_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_34, q_6));
                t = q_7(j_8, s_3, t_3, t);
                t = (ATerm) ATempty;
                k_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_34, q_6);
                l_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_34, q_6));
                t = q_7(k_8, k_3, l_3, t);
                t = h_6;
                t = bind_vars_0_0(t);
                LocalPopChoice(u_34);
              }
            else
              {
                t = t_34;
                {
                  ATerm a_35 = t;
                  int b_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = l_6;
                      t = unbound_vars_0_0(t);
                      LocalPopChoice(b_35);
                    }
                  else
                    {
                      t = a_35;
                      t = i_6;
                      t = use_vars_0_0(t);
                    }
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_RDefT_4, q_6, r_6, s_6, (ATerm) ATmakeAppl(sym_Rule_3, h_6, i_6, l_6));
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          q_6 = ATgetArgument(t, 0);
          r_6 = ATgetArgument(t, 1);
          s_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_6;
      if(match_cons(t, sym_Rule_3))
        {
          t_6 = ATgetArgument(t, 0);
          u_6 = ATgetArgument(t, 1);
          w_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_6;
      {
        ATerm c_35 = t;
        int d_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
            t = (ATerm) ATempty;
            c_6 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_35, q_6);
            d_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_35, q_6));
            t = q_7(l_8, c_6, d_6, t);
            t = (ATerm) ATempty;
            z_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_35, q_6);
            b_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_35, q_6));
            t = q_7(p_8, z_5, b_6, t);
            t = t_6;
            t = bind_vars_0_0(t);
            LocalPopChoice(d_35);
          }
        else
          {
            t = c_35;
            {
              ATerm h_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_6;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(i_35);
                }
              else
                {
                  t = h_35;
                  t = u_6;
                  t = use_vars_0_0(t);
                }
            }
          }
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, q_6, r_6, (ATerm) ATmakeAppl(sym_Rule_3, t_6, u_6, w_6));
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  z_9 = t;
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL,c_9 = NULL,j_9 = NULL;
        t = (ATerm) ATempty;
        c_9 = t;
        t = term_n_34;
        j_9 = t;
        t = term_l_35;
        t = o_7(j_9, c_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_35) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            z_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_9), term_e_36), z_8), term_o_35);
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        {
          ATerm f_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_9 = NULL,c_10 = NULL,d_10 = NULL;
              t = (ATerm) ATempty;
              c_10 = t;
              t = term_n_34;
              d_10 = t;
              t = term_l_35;
              t = o_7(d_10, c_10, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm j_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) j_36) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  x_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_9), term_e_36), x_9), term_l_36);
              LocalPopChoice(i_36);
            }
          else
            {
              t = f_36;
              {
                ATerm m_36 = t;
                int n_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_10 = NULL,u_10 = NULL,v_10 = NULL;
                    t = (ATerm) ATempty;
                    u_10 = t;
                    t = term_n_34;
                    v_10 = t;
                    t = term_l_35;
                    t = o_7(v_10, u_10, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm p_36 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) p_36) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        m_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_9), term_e_36), m_10), term_l_36);
                    LocalPopChoice(n_36);
                  }
                else
                  {
                    t = m_36;
                    {
                      ATerm q_36 = t;
                      int s_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_10 = NULL,c_11 = NULL,m_11 = NULL;
                          t = (ATerm) ATempty;
                          c_11 = t;
                          t = term_n_34;
                          m_11 = t;
                          t = term_l_35;
                          t = o_7(m_11, c_11, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm u_36 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) u_36) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              z_10 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_9), term_e_36), z_10), term_l_36);
                          LocalPopChoice(s_36);
                        }
                      else
                        {
                          t = q_36;
                          {
                            ATerm x_36 = t;
                            int y_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_12 = NULL,h_12 = NULL,i_12 = NULL;
                                t = (ATerm) ATempty;
                                h_12 = t;
                                t = term_n_34;
                                i_12 = t;
                                t = term_l_35;
                                t = o_7(i_12, h_12, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm z_36 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) z_36) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    a_12 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_9), term_e_36), a_12), term_a_37);
                                LocalPopChoice(y_36);
                              }
                            else
                              {
                                t = x_36;
                                {
                                  ATerm u_12 = NULL,a_13 = NULL,b_13 = NULL;
                                  t = (ATerm) ATempty;
                                  a_13 = t;
                                  t = term_n_34;
                                  b_13 = t;
                                  t = term_l_35;
                                  t = o_7(b_13, a_13, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm e_37 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) e_37) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      u_12 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_9), term_e_36), u_12), term_a_37);
                                }
                              }
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
  ATerm n_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
  s_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_10;
  if(match_cons(t, sym_ListVar_1))
    {
      r_10 = ATgetArgument(t, 0);
      {
        ATerm f_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_10;
            n_10 = t;
            t = s_10;
            LocalPopChoice(k_37);
          }
        else
          {
            t = f_37;
            t = t_10;
            n_10 = t;
            t = s_10;
          }
      }
    }
  else
    {
      t = t_10;
      n_10 = t;
      t = s_10;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_37), n_10), term_l_37);
  t = Context_0_0(t);
  p_10 = t;
  t = term_r_20;
  q_10 = t;
  t = SSL_printnl(q_10, p_10);
  t = p_10;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm x_11 = NULL;
  x_11 = t;
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_15 = NULL,n_15 = NULL,o_15 = NULL;
        t = (ATerm) ATempty;
        n_15 = t;
        t = term_o_34;
        o_15 = t;
        t = term_p_37;
        t = o_7(o_15, n_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_37) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            l_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_11), term_u_37), l_15), term_t_37);
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        {
          ATerm v_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_15 = NULL,u_15 = NULL,v_15 = NULL;
              t = (ATerm) ATempty;
              u_15 = t;
              t = term_o_34;
              v_15 = t;
              t = term_p_37;
              t = o_7(v_15, u_15, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm x_37 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_37) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  s_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_11), term_u_37), s_15), term_y_37);
              LocalPopChoice(w_37);
            }
          else
            {
              t = v_37;
              {
                ATerm z_37 = t;
                int b_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_16 = NULL,b_17 = NULL,n_17 = NULL;
                    t = (ATerm) ATempty;
                    b_17 = t;
                    t = term_o_34;
                    n_17 = t;
                    t = term_p_37;
                    t = o_7(n_17, b_17, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm c_38 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) c_38) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        j_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_11), term_u_37), j_16), term_y_37);
                    LocalPopChoice(b_38);
                  }
                else
                  {
                    t = z_37;
                    {
                      ATerm h_38 = t;
                      int o_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_18 = NULL,h_18 = NULL,j_18 = NULL;
                          t = (ATerm) ATempty;
                          h_18 = t;
                          t = term_o_34;
                          j_18 = t;
                          t = term_p_37;
                          t = o_7(j_18, h_18, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm p_38 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) p_38) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              b_18 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_11), term_u_37), b_18), term_y_37);
                          LocalPopChoice(o_38);
                        }
                      else
                        {
                          t = h_38;
                          {
                            ATerm q_38 = t;
                            int r_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_18 = NULL,f_19 = NULL,g_19 = NULL;
                                t = (ATerm) ATempty;
                                f_19 = t;
                                t = term_o_34;
                                g_19 = t;
                                t = term_p_37;
                                t = o_7(g_19, f_19, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm s_38 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) s_38) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    t_18 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_11), term_u_37), t_18), term_t_38);
                                LocalPopChoice(r_38);
                              }
                            else
                              {
                                t = q_38;
                                {
                                  ATerm x_19 = NULL,f_20 = NULL,g_20 = NULL;
                                  t = (ATerm) ATempty;
                                  f_20 = t;
                                  t = term_o_34;
                                  g_20 = t;
                                  t = term_p_37;
                                  t = o_7(g_20, f_20, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm u_38 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) u_38) != ATmakeSymbol("f_0", 0, ATtrue)))
                                        _fail(t);
                                      x_19 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_11), term_u_37), x_19), term_t_38);
                                }
                              }
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
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  n_12 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_12;
  if(match_cons(t, sym_ListVar_1))
    {
      m_12 = ATgetArgument(t, 0);
      {
        ATerm v_38 = t;
        int w_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_12;
            l_12 = t;
            t = n_12;
            LocalPopChoice(w_38);
          }
        else
          {
            t = v_38;
            t = o_12;
            l_12 = t;
            t = n_12;
          }
      }
    }
  else
    {
      t = o_12;
      l_12 = t;
      t = n_12;
    }
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
        t = term_a_39;
        r_12 = t;
        t = term_b_39;
        s_12 = t;
        t = term_c_39;
        t = g_8(r_12, s_12, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_39), l_12), term_l_37);
        t = Warning_0_0(t);
        p_12 = t;
        t = term_r_20;
        q_12 = t;
        t = SSL_printnl(q_12, p_12);
        t = p_12;
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  ATerm e_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL,d_13 = NULL;
      c_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      d_13 = t;
      t = SSLgetAnnotations(c_13);
      x_12 = t;
      t = d_13;
      LocalPopChoice(g_39);
      {
        ATerm e_13 = NULL;
        e_13 = t;
        t = x_12;
        {
          ATerm h_39 = t;
          int i_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_39 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) m_39) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm n_39 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(n_39) != AT_LIST) || !(ATisEmpty(n_39))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(i_39);
              _fail(t);
            }
          else
            {
              t = h_39;
              {
                ATerm o_39 = t;
                int p_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm q_39 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) q_39) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm u_39 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(u_39) != AT_LIST) || !(ATisEmpty(u_39))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_39);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_12);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = o_39;
                    {
                      ATerm y_39 = t;
                      int z_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm a_40 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) a_40) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm d_40 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(d_40) != AT_LIST) || !(ATisEmpty(d_40))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_39);
                          t = (ATerm) ATmakeAppl(sym_Var_1, y_12);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = y_39;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, y_12);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = e_13;
      }
    }
  else
    {
      t = e_39;
      {
        ATerm e_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,k_13 = NULL,u_4 = NULL;
            k_13 = t;
            if(match_cons(t, sym_App_2))
              {
                g_13 = ATgetArgument(t, 0);
                h_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_13);
            f_13 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, g_13, h_13);
            u_4 = t;
            t = SSLsetAnnotations(u_4, f_13);
            LocalPopChoice(g_40);
            {
              ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,q_13 = NULL,v_13 = NULL,v_4 = NULL;
              v_13 = t;
              if(match_cons(t, sym_App_2))
                {
                  m_13 = ATgetArgument(t, 0);
                  n_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_13);
              l_13 = t;
              t = m_13;
              t = unbound_vars_0_0(t);
              o_13 = t;
              t = n_13;
              t = use_vars_0_0(t);
              q_13 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, o_13, q_13);
              v_4 = t;
              t = SSLsetAnnotations(v_4, l_13);
            }
          }
        else
          {
            t = e_40;
            {
              ATerm j_40 = t;
              int k_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,x_4 = NULL;
                  y_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      x_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_13);
                  w_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, x_13);
                  x_4 = t;
                  t = SSLsetAnnotations(x_4, w_13);
                  LocalPopChoice(k_40);
                  {
                    ATerm z_13 = NULL,a_14 = NULL,d_14 = NULL,e_14 = NULL,y_4 = NULL;
                    e_14 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        a_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_14);
                    z_13 = t;
                    t = a_14;
                    t = unbound_vars_0_0(t);
                    d_14 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, d_14);
                    y_4 = t;
                    t = SSLsetAnnotations(y_4, z_13);
                  }
                }
              else
                {
                  t = j_40;
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
  ATerm l_40 = t;
  int n_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14 = NULL,i_14 = NULL,j_14 = NULL,d_5 = NULL;
      j_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_14);
      f_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_14);
      d_5 = t;
      t = SSLsetAnnotations(d_5, f_14);
      LocalPopChoice(n_40);
      _fail(t);
    }
  else
    {
      t = l_40;
      {
        ATerm p_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,e_5 = NULL;
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
            e_5 = t;
            t = SSLsetAnnotations(e_5, k_14);
            LocalPopChoice(r_40);
            {
              ATerm o_14 = NULL,p_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,f_5 = NULL;
              v_14 = t;
              if(match_cons(t, sym_App_2))
                {
                  p_14 = ATgetArgument(t, 0);
                  s_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_14);
              o_14 = t;
              t = p_14;
              t = unbound_vars_0_0(t);
              t_14 = t;
              t = s_14;
              t = use_vars_0_0(t);
              u_14 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, t_14, u_14);
              f_5 = t;
              t = SSLsetAnnotations(f_5, o_14);
            }
          }
        else
          {
            t = p_40;
            {
              ATerm s_40 = t;
              int t_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_14 = NULL,y_14 = NULL,z_14 = NULL,g_5 = NULL;
                  z_14 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      y_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_14);
                  w_14 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, y_14);
                  g_5 = t;
                  t = SSLsetAnnotations(g_5, w_14);
                  LocalPopChoice(t_40);
                  {
                    ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,f_15 = NULL,h_5 = NULL;
                    f_15 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        b_15 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(f_15);
                    a_15 = t;
                    t = b_15;
                    t = unbound_vars_0_0(t);
                    c_15 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, c_15);
                    h_5 = t;
                    t = SSLsetAnnotations(h_5, a_15);
                  }
                }
              else
                {
                  t = s_40;
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
  ATerm v_40 = t;
  int a_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,n_5 = NULL;
      z_15 = t;
      if(match_cons(t, sym_Build_1))
        {
          y_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_15);
      x_15 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, y_15);
      n_5 = t;
      t = SSLsetAnnotations(n_5, x_15);
      LocalPopChoice(a_41);
      {
        ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,o_5 = NULL;
        e_16 = t;
        if(match_cons(t, sym_Build_1))
          {
            c_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_16);
        b_16 = t;
        t = c_16;
        t = use_vars_0_0(t);
        d_16 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, d_16);
        o_5 = t;
        t = SSLsetAnnotations(o_5, b_16);
      }
    }
  else
    {
      t = v_40;
      {
        ATerm b_41 = t;
        int c_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,p_5 = NULL;
            h_16 = t;
            if(match_cons(t, sym_Match_1))
              {
                g_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_16);
            f_16 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, g_16);
            p_5 = t;
            t = SSLsetAnnotations(p_5, f_16);
            LocalPopChoice(c_41);
            {
              ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,r_5 = NULL;
              n_16 = t;
              if(match_cons(t, sym_Match_1))
                {
                  l_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_16);
              k_16 = t;
              t = l_16;
              t = bind_vars_0_0(t);
              m_16 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, m_16);
              r_5 = t;
              t = SSLsetAnnotations(r_5, k_16);
            }
          }
        else
          {
            t = b_41;
            {
              ATerm d_41 = t;
              int f_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,s_5 = NULL;
                  s_16 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      p_16 = ATgetArgument(t, 0);
                      q_16 = ATgetArgument(t, 1);
                      r_16 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_16);
                  o_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, p_16, q_16, r_16);
                  s_5 = t;
                  t = SSLsetAnnotations(s_5, o_16);
                  LocalPopChoice(f_41);
                  {
                    ATerm e_18 = NULL,g_18 = NULL,i_18 = NULL,m_18 = NULL;
                    e_18 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        g_18 = ATgetArgument(t, 0);
                        i_18 = ATgetArgument(t, 1);
                        m_18 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm g_41 = t;
                      int l_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_20 = NULL,p_21 = NULL,t_5 = NULL;
                          t = SSLgetAnnotations(e_18);
                          y_20 = t;
                          t = g_18;
                          t = bind_vars_0_0(t);
                          p_21 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, p_21, i_18, m_18);
                          t_5 = t;
                          t = SSLsetAnnotations(t_5, y_20);
                          LocalPopChoice(l_41);
                        }
                      else
                        {
                          t = g_41;
                          {
                            ATerm m_41 = t;
                            int n_41 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_22 = NULL,o_22 = NULL,u_5 = NULL;
                                t = SSLgetAnnotations(e_18);
                                j_22 = t;
                                t = m_18;
                                t = unbound_vars_0_0(t);
                                o_22 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, g_18, i_18, o_22);
                                u_5 = t;
                                t = SSLsetAnnotations(u_5, j_22);
                                LocalPopChoice(n_41);
                              }
                            else
                              {
                                t = m_41;
                                {
                                  ATerm a_23 = NULL,g_23 = NULL,v_5 = NULL;
                                  t = SSLgetAnnotations(e_18);
                                  a_23 = t;
                                  t = i_18;
                                  t = use_vars_0_0(t);
                                  g_23 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, g_18, g_23, m_18);
                                  v_5 = t;
                                  t = SSLsetAnnotations(v_5, a_23);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = d_41;
                  {
                    ATerm o_41 = t;
                    int p_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,a_6 = NULL;
                        r_18 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            o_18 = ATgetArgument(t, 0);
                            p_18 = ATgetArgument(t, 1);
                            q_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_18);
                        n_18 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, o_18, p_18, q_18);
                        a_6 = t;
                        t = SSLsetAnnotations(a_6, n_18);
                        LocalPopChoice(p_41);
                        {
                          ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,y_19 = NULL;
                          u_19 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              v_19 = ATgetArgument(t, 0);
                              w_19 = ATgetArgument(t, 1);
                              y_19 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm q_41 = t;
                            int r_41 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_23 = NULL,w_23 = NULL,p_6 = NULL;
                                t = SSLgetAnnotations(u_19);
                                s_23 = t;
                                t = w_19;
                                t = unbound_vars_0_0(t);
                                w_23 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, v_19, w_23, y_19);
                                p_6 = t;
                                t = SSLsetAnnotations(p_6, s_23);
                                LocalPopChoice(r_41);
                              }
                            else
                              {
                                t = q_41;
                                {
                                  ATerm n_24 = NULL,r_24 = NULL,v_6 = NULL;
                                  t = SSLgetAnnotations(u_19);
                                  n_24 = t;
                                  t = y_19;
                                  t = use_vars_0_0(t);
                                  r_24 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_19, w_19, r_24);
                                  v_6 = t;
                                  t = SSLsetAnnotations(v_6, n_24);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = o_41;
                        {
                          ATerm s_41 = t;
                          int t_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,a_7 = NULL;
                              e_20 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  b_20 = ATgetArgument(t, 0);
                                  c_20 = ATgetArgument(t, 1);
                                  d_20 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(e_20);
                              a_20 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, b_20, c_20, d_20);
                              a_7 = t;
                              t = SSLsetAnnotations(a_7, a_20);
                              LocalPopChoice(t_41);
                              {
                                ATerm i_21 = NULL,j_21 = NULL,m_21 = NULL,n_21 = NULL;
                                i_21 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    j_21 = ATgetArgument(t, 0);
                                    m_21 = ATgetArgument(t, 1);
                                    n_21 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm u_41 = t;
                                  int v_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm s_25 = NULL,w_25 = NULL,n_7 = NULL;
                                      t = SSLgetAnnotations(i_21);
                                      s_25 = t;
                                      t = m_21;
                                      t = unbound_vars_0_0(t);
                                      w_25 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, j_21, w_25, n_21);
                                      n_7 = t;
                                      t = SSLsetAnnotations(n_7, s_25);
                                      LocalPopChoice(v_41);
                                    }
                                  else
                                    {
                                      t = u_41;
                                      {
                                        ATerm x_26 = NULL,g_27 = NULL,r_7 = NULL;
                                        t = SSLgetAnnotations(i_21);
                                        x_26 = t;
                                        t = n_21;
                                        t = use_vars_0_0(t);
                                        g_27 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, j_21, m_21, g_27);
                                        r_7 = t;
                                        t = SSLsetAnnotations(r_7, x_26);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = s_41;
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
static ATerm q_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_o_34;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL,h_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      d_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
      k_22 = ATgetArgument(t, 2);
      b_22 = ATgetArgument(t, 3);
      {
        ATerm o_23 = NULL,r_23 = NULL,a_24 = NULL,d_24 = NULL;
        t = (ATerm) ATempty;
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_41, d_22);
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_41, d_22));
        t = q_7(q_8, a_24, d_24, t);
        t = (ATerm) ATempty;
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_41, d_22);
        r_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_41, d_22));
        t = q_7(r_8, o_23, r_23, t);
        t = b_22;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_22, h_22, k_22, b_22);
      }
    }
  else
    {
      ATerm v_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          d_22 = ATgetArgument(t, 0);
          h_22 = ATgetArgument(t, 1);
          k_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      z_24 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_42, d_22);
      a_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_42, d_22));
      t = q_7(s_8, z_24, a_25, t);
      t = (ATerm) ATempty;
      v_24 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_42, d_22);
      y_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_42, d_22));
      t = q_7(t_8, v_24, y_24, t);
      t = k_22;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, d_22, h_22, k_22);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,g_25 = NULL,h_25 = NULL,n_25 = NULL,o_25 = NULL,w_8 = NULL;
  static ATerm u_8 (ATerm t)
  {
    ATerm p_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL,d_9 = NULL,a_9 = NULL;
    l_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        f_26 = ATgetArgument(t, 0);
        g_26 = ATgetArgument(t, 1);
        h_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_26);
    c_26 = t;
    t = f_26;
    t = x_122(t);
    i_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_26, g_26, h_26);
    a_9 = t;
    t = SSLsetAnnotations(a_9, c_26);
    j_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        y_25 = ATgetArgument(t, 0);
        z_25 = ATgetArgument(t, 1);
        a_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_26);
    p_25 = t;
    t = z_25;
    t = x_122(t);
    b_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_25, b_26, a_26);
    d_9 = t;
    t = SSLsetAnnotations(d_9, p_25);
    return(t);
  }
  static ATerm v_8 (ATerm t)
  {
    ATerm p_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,e_9 = NULL;
    v_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        r_26 = ATgetArgument(t, 0);
        s_26 = ATgetArgument(t, 1);
        t_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_26);
    p_26 = t;
    t = t_26;
    t = x_122(t);
    u_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_26, s_26, u_26);
    e_9 = t;
    t = SSLsetAnnotations(e_9, p_26);
    return(t);
  }
  o_25 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      g_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
      n_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_25);
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, g_25, h_25, n_25);
  w_8 = t;
  t = SSLsetAnnotations(w_8, b_25);
  t = abstract_choice_2_0(u_8, v_8, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,k_9 = NULL;
  static ATerm x_8 (ATerm t)
  {
    ATerm e_27 = NULL,h_27 = NULL,m_27 = NULL,o_27 = NULL,q_27 = NULL,l_9 = NULL;
    q_27 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        h_27 = ATgetArgument(t, 0);
        m_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_27);
    e_27 = t;
    t = h_27;
    t = w_122(t);
    o_27 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, o_27, m_27);
    l_9 = t;
    t = SSLsetAnnotations(l_9, e_27);
    return(t);
  }
  static ATerm y_8 (ATerm t)
  {
    ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,x_27 = NULL,m_9 = NULL;
    x_27 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        s_27 = ATgetArgument(t, 0);
        t_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_27);
    r_27 = t;
    t = t_27;
    t = w_122(t);
    u_27 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, s_27, u_27);
    m_9 = t;
    t = SSLsetAnnotations(m_9, r_27);
    return(t);
  }
  d_27 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      b_27 = ATgetArgument(t, 0);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_27);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, b_27, c_27);
  k_9 = t;
  t = SSLsetAnnotations(k_9, y_26);
  t = abstract_choice_2_0(x_8, y_8, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  c_28 = t;
  t = save_MarkVar_0_0(t);
  y_27 = t;
  t = c_28;
  t = y_122(t);
  b_28 = t;
  t = save_MarkVar_0_0(t);
  z_27 = t;
  t = term_c_42;
  t = table_destroy_0_0(t);
  t = term_c_42;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_42, y_27);
  t = i_7(d_28, y_27, t);
  t = b_28;
  t = z_122(t);
  a_28 = t;
  t = z_27;
  t = isect_MarkVar_0_0(t);
  t = a_28;
  return(t);
}
ATerm mark_choice_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,r_9 = NULL;
  static ATerm b_9 (ATerm t)
  {
    ATerm l_28 = NULL,m_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_9 = NULL;
    r_28 = t;
    if(match_cons(t, sym_Choice_2))
      {
        m_28 = ATgetArgument(t, 0);
        p_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_28);
    l_28 = t;
    t = m_28;
    t = v_122(t);
    q_28 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, q_28, p_28);
    s_9 = t;
    t = SSLsetAnnotations(s_9, l_28);
    return(t);
  }
  static ATerm f_9 (ATerm t)
  {
    ATerm x_28 = NULL,a_29 = NULL,d_29 = NULL,l_29 = NULL,t_29 = NULL,t_9 = NULL;
    t_29 = t;
    if(match_cons(t, sym_Choice_2))
      {
        a_29 = ATgetArgument(t, 0);
        d_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_29);
    x_28 = t;
    t = d_29;
    t = v_122(t);
    l_29 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, a_29, l_29);
    t_9 = t;
    t = SSLsetAnnotations(t_9, x_28);
    return(t);
  }
  k_28 = t;
  if(match_cons(t, sym_Choice_2))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_28);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, i_28, j_28);
  r_9 = t;
  t = SSLsetAnnotations(r_9, h_28);
  t = abstract_choice_2_0(b_9, f_9, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,e_30 = NULL,g_30 = NULL,i_30 = NULL,e_10 = NULL,a_10 = NULL;
  v_29 = t;
  t = save_MarkVar_0_0(t);
  u_29 = t;
  t = v_29;
  if(match_cons(t, sym_Rec_2))
    {
      e_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_29);
  b_30 = t;
  t = g_30;
  t = mark_buv_0_0(t);
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, e_30, i_30);
  a_10 = t;
  t = SSLsetAnnotations(a_10, b_30);
  t = u_29;
  t = isect_MarkVar_0_0(t);
  t = v_29;
  if(match_cons(t, sym_Rec_2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_29);
  w_29 = t;
  t = z_29;
  t = mark_buv_0_0(t);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, y_29, a_30);
  e_10 = t;
  t = SSLsetAnnotations(e_10, w_29);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,z_31 = NULL,f_32 = NULL,g_32 = NULL,j_10 = NULL,i_10 = NULL,h_10 = NULL;
  g_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_31 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
      z_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_32);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, u_31, v_31, z_31);
  h_10 = t;
  t = SSLsetAnnotations(h_10, t_31);
  f_32 = t;
  t = save_MarkVar_0_0(t);
  x_30 = t;
  t = f_32;
  if(match_cons(t, sym_PrimT_3))
    {
      k_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
      p_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_32);
  j_31 = t;
  t = p_31;
  t = map_1_0(g_9, t);
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, k_31, o_31, q_31);
  i_10 = t;
  t = SSLsetAnnotations(i_10, j_31);
  r_31 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
      e_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_31);
  y_30 = t;
  t = d_31;
  t = mark_buv_0_0(t);
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_31, f_31, e_31);
  j_10 = t;
  t = SSLsetAnnotations(j_10, y_30);
  i_31 = t;
  t = x_30;
  t = isect_MarkVar_0_0(t);
  t = i_31;
  return(t);
}
ATerm alltd_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  static ATerm h_32 (ATerm t)
  {
    ATerm d_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        LocalPopChoice(e_42);
      }
    else
      {
        t = d_42;
        t = SRTS_all(h_32, t);
      }
    return(t);
  }
  t = h_32(t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm n_35 = NULL,a_36 = NULL,g_36 = NULL,h_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym_CallT_3))
    {
      g_36 = ATgetArgument(t, 0);
      h_36 = ATgetArgument(t, 1);
      n_35 = ATgetArgument(t, 2);
      {
        ATerm f_28 = NULL,g_28 = NULL,n_28 = NULL,o_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,y_28 = NULL,z_28 = NULL,b_29 = NULL,c_29 = NULL,e_29 = NULL,k_29 = NULL,g_11 = NULL,f_11 = NULL,e_11 = NULL;
        t = SSLgetAnnotations(a_36);
        e_29 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, g_36, h_36, n_35);
        e_11 = t;
        t = SSLsetAnnotations(e_11, e_29);
        k_29 = t;
        t = save_MarkVar_0_0(t);
        f_28 = t;
        t = k_29;
        if(match_cons(t, sym_CallT_3))
          {
            w_28 = ATgetArgument(t, 0);
            y_28 = ATgetArgument(t, 1);
            z_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_29);
        v_28 = t;
        t = z_28;
        t = map_1_0(h_9, t);
        b_29 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_28, y_28, b_29);
        f_11 = t;
        t = SSLsetAnnotations(f_11, v_28);
        c_29 = t;
        if(match_cons(t, sym_CallT_3))
          {
            n_28 = ATgetArgument(t, 0);
            o_28 = ATgetArgument(t, 1);
            s_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_29);
        g_28 = t;
        t = o_28;
        t = mark_buv_0_0(t);
        t_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, n_28, t_28, s_28);
        g_11 = t;
        t = SSLsetAnnotations(g_11, g_28);
        u_28 = t;
        t = f_28;
        t = isect_MarkVar_0_0(t);
        t = u_28;
      }
    }
  else
    {
      ATerm c_30 = NULL,d_30 = NULL,f_30 = NULL,h_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,o_30 = NULL,i_11 = NULL,h_11 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          g_36 = ATgetArgument(t, 0);
          h_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_36);
      l_30 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, g_36, h_36);
      h_11 = t;
      t = SSLsetAnnotations(h_11, l_30);
      o_30 = t;
      t = save_MarkVar_0_0(t);
      c_30 = t;
      t = o_30;
      if(match_cons(t, sym_Call_2))
        {
          f_30 = ATgetArgument(t, 0);
          h_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_30);
      d_30 = t;
      t = h_30;
      t = mark_buv_0_0(t);
      j_30 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, f_30, j_30);
      i_11 = t;
      t = SSLsetAnnotations(i_11, d_30);
      k_30 = t;
      t = c_30;
      t = isect_MarkVar_0_0(t);
      t = k_30;
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm d_7 (ATerm l_68, ATerm m_68, ATerm n_68, ATerm t)
{
  ATerm o_36 = NULL;
  static ATerm n_9 (ATerm t)
  {
    t = m_68;
    t = map_1_0(IntroduceBound_0_0, t);
    t = n_68;
    t = mark_build_vars_0_0(t);
    if(((o_36 != NULL) && (o_36 != t)))
      _fail(t);
    else
      o_36 = t;
    return(t);
  }
  t = scope_2_0(i_9, n_9, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, l_68, m_68, not_null(o_36));
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm c_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_37);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm f_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = f_42;
      {
        ATerm k_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_42);
          }
        else
          {
            t = k_42;
            {
              ATerm n_42 = t;
              int p_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_37 = ATgetArgument(t, 0);
                      h_37 = ATgetArgument(t, 1);
                      i_37 = ATgetArgument(t, 2);
                      j_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_37;
                  t = map_1_0(v_9, t);
                  LocalPopChoice(p_42);
                }
              else
                {
                  t = n_42;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm q_37 = NULL;
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_37 = ATgetArgument(t, 0);
          {
            ATerm t_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_42);
      t = q_37;
    }
  else
    {
      t = r_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_37;
    }
  return(t);
}
static ATerm e_7 (ATerm f_68, ATerm j_68, ATerm h_68, ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,b_37 = NULL;
  static ATerm p_9 (ATerm t)
  {
    t = f_68;
    t = free_vars_3_0(q_9, u_9, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = f_68;
    t = mark_match_vars_0_0(t);
    if(((v_36 != NULL) && (v_36 != t)))
      _fail(t);
    else
      v_36 = t;
    t = h_68;
    t = mark_buv_0_0(t);
    if(((w_36 != NULL) && (w_36 != t)))
      _fail(t);
    else
      w_36 = t;
    t = j_68;
    t = mark_build_vars_0_0(t);
    if(((b_37 != NULL) && (b_37 != t)))
      _fail(t);
    else
      b_37 = t;
    return(t);
  }
  t = scope_2_0(o_9, p_9, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_36), not_null(b_37), not_null(w_36)));
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm g_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_38);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
      {
        ATerm x_42 = t;
        int z_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_42);
          }
        else
          {
            t = x_42;
            {
              ATerm c_43 = t;
              int d_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_38 = ATgetArgument(t, 0);
                      j_38 = ATgetArgument(t, 1);
                      k_38 = ATgetArgument(t, 2);
                      l_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_38;
                  t = map_1_0(g_10, t);
                  LocalPopChoice(d_43);
                }
              else
                {
                  t = c_43;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm z_38 = NULL;
  ATerm f_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_38 = ATgetArgument(t, 0);
          {
            ATerm h_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_43);
      t = z_38;
    }
  else
    {
      t = f_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_38;
    }
  return(t);
}
static ATerm f_7 (ATerm z_67, ATerm d_68, ATerm b_68, ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  static ATerm y_9 (ATerm t)
  {
    t = z_67;
    t = free_vars_3_0(b_10, f_10, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = z_67;
    t = mark_match_vars_0_0(t);
    if(((d_38 != NULL) && (d_38 != t)))
      _fail(t);
    else
      d_38 = t;
    t = b_68;
    t = mark_buv_0_0(t);
    if(((e_38 != NULL) && (e_38 != t)))
      _fail(t);
    else
      e_38 = t;
    t = d_68;
    t = mark_build_vars_0_0(t);
    if(((f_38 != NULL) && (f_38 != t)))
      _fail(t);
    else
      f_38 = t;
    return(t);
  }
  t = scope_2_0(w_9, y_9, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_38), not_null(f_38), not_null(e_38)));
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm e_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_41);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_43);
    }
  else
    {
      t = j_43;
      {
        ATerm m_43 = t;
        int s_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_43);
          }
        else
          {
            t = m_43;
            {
              ATerm t_43 = t;
              int u_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_41 = ATgetArgument(t, 0);
                      i_41 = ATgetArgument(t, 1);
                      j_41 = ATgetArgument(t, 2);
                      k_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_41;
                  t = map_1_0(o_10, t);
                  LocalPopChoice(u_43);
                }
              else
                {
                  t = t_43;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm x_41 = NULL;
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_41 = ATgetArgument(t, 0);
          {
            ATerm x_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_43);
      t = x_41;
    }
  else
    {
      t = v_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_41;
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm e_43 = NULL;
  ATerm y_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_43 = ATgetArgument(t, 0);
          {
            ATerm b_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_44);
      t = e_43;
    }
  else
    {
      t = y_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_43;
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm l_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_43);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_44);
    }
  else
    {
      t = c_44;
      {
        ATerm f_44 = t;
        int g_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_44);
          }
        else
          {
            t = f_44;
            {
              ATerm j_44 = t;
              int l_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_43 = ATgetArgument(t, 0);
                      p_43 = ATgetArgument(t, 1);
                      q_43 = ATgetArgument(t, 2);
                      r_43 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_43;
                  t = map_1_0(d_11, t);
                  LocalPopChoice(l_44);
                }
              else
                {
                  t = j_44;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm e_44 = NULL;
  ATerm n_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_44 = ATgetArgument(t, 0);
          {
            ATerm r_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_44);
      t = e_44;
    }
  else
    {
      t = n_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_44;
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_c_42;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,b_40 = NULL,c_40 = NULL,h_40 = NULL,i_40 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      v_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
      x_39 = ATgetArgument(t, 2);
      {
        ATerm m_40 = NULL,o_40 = NULL,q_40 = NULL,y_40 = NULL;
        t = x_39;
        if(match_cons(t, sym_Rule_3))
          {
            r_39 = ATgetArgument(t, 0);
            s_39 = ATgetArgument(t, 1);
            t_39 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = x_39;
        t = free_vars_3_0(k_10, l_10, tboundin_3_0, t);
        m_40 = t;
        {
          static ATerm x_10 (ATerm t)
          {
            t = m_40;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = r_39;
            t = mark_match_vars_0_0(t);
            if(((o_40 != NULL) && (o_40 != t)))
              _fail(t);
            else
              o_40 = t;
            t = t_39;
            t = mark_buv_0_0(t);
            if(((q_40 != NULL) && (q_40 != t)))
              _fail(t);
            else
              q_40 = t;
            t = s_39;
            t = mark_build_vars_0_0(t);
            if(((y_40 != NULL) && (y_40 != t)))
              _fail(t);
            else
              y_40 = t;
            return(t);
          }
          t = scope_2_0(w_10, x_10, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, v_39, w_39, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_40), not_null(y_40), not_null(q_40)));
      }
    }
  else
    {
      ATerm o_42 = NULL,q_42 = NULL,w_42 = NULL,y_42 = NULL,a_43 = NULL,b_43 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          v_39 = ATgetArgument(t, 0);
          w_39 = ATgetArgument(t, 1);
          x_39 = ATgetArgument(t, 2);
          b_40 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = b_40;
      if(match_cons(t, sym_Rule_3))
        {
          c_40 = ATgetArgument(t, 0);
          h_40 = ATgetArgument(t, 1);
          i_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_39;
      t = map_1_0(y_10, t);
      o_42 = t;
      t = b_40;
      t = free_vars_3_0(a_11, b_11, tboundin_3_0, t);
      b_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_43, o_42);
      t = diff_0_0(t);
      q_42 = t;
      {
        static ATerm k_11 (ATerm t)
        {
          t = o_42;
          t = map_1_0(IntroduceBound_0_0, t);
          t = q_42;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = c_40;
          t = mark_match_vars_0_0(t);
          if(((w_42 != NULL) && (w_42 != t)))
            _fail(t);
          else
            w_42 = t;
          t = i_40;
          t = mark_buv_0_0(t);
          if(((y_42 != NULL) && (y_42 != t)))
            _fail(t);
          else
            y_42 = t;
          t = h_40;
          t = mark_build_vars_0_0(t);
          if(((a_43 != NULL) && (a_43 != t)))
            _fail(t);
          else
            a_43 = t;
          return(t);
        }
        t = scope_2_0(j_11, k_11, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, v_39, w_39, x_39, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_42), not_null(a_43), not_null(y_42)));
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_c_42;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,m_44 = NULL;
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_44);
  i_44 = t;
  t = term_v_44;
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, h_44), term_v_44);
  t = q_7(l_11, i_44, m_44, t);
  t = h_44;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm s_44 = NULL;
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_44 = ATgetArgument(t, 0);
          {
            ATerm z_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_44);
      t = s_44;
    }
  else
    {
      t = w_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_44;
    }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm g_7 (ATerm x_66, ATerm y_66, ATerm z_66, ATerm b_67, ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  t = z_66;
  t = map_1_0(n_11, t);
  o_44 = t;
  {
    static ATerm r_11 (ATerm t)
    {
      t = o_44;
      t = map_1_0(IntroduceBound_0_0, t);
      t = b_67;
      t = mark_buv_0_0(t);
      if(((p_44 != NULL) && (p_44 != t)))
        _fail(t);
      else
        p_44 = t;
      return(t);
    }
    t = scope_2_0(o_11, r_11, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_66, y_66, z_66, not_null(p_44));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,y_45 = NULL,a_46 = NULL,t_46 = NULL;
  t_45 = t;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      a_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_46;
  if(match_cons(t, sym_Undefined_0))
    {
      t = u_45;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_b_45;
        }
      else
        {
          t = term_b_45;
        }
    }
  else
    {
      ATerm c_45 = t;
      int d_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm e_45 = ATgetArgument(t, 0);
              t_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(d_45);
          t = u_45;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_b_45;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  v_45 = ATgetArgument(t, 0);
                  y_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm f_45 = t;
                int g_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, y_45, t_46);
                    {
                      ATerm h_45 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm l_31 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              l_31 = ATgetArgument(t, 0);
                              if((l_31 != ATgetArgument(t, 1)))
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
                          t = h_45;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, v_45, term_i_45);
                    LocalPopChoice(g_45);
                  }
                else
                  {
                    t = f_45;
                    t = t_46;
                    if((y_45 != t))
                      {
                        _fail(t);
                      }
                    t = u_45;
                  }
              }
            }
        }
      else
        {
          t = c_45;
          t = u_45;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_b_45;
        }
    }
  return(t);
}
static ATerm h_7 (ATerm i_65, ATerm j_65, ATerm h_65, ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  t = term_c_42;
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_42, i_65);
  t = g_8(z_46, i_65, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_46 = ATgetFirst((ATermList) t);
      {
        ATerm j_45 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_65, x_46);
  t = CompareEntries_0_0(t);
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_65, (ATerm) ATinsert(CheckATermList(h_65), y_46));
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm r_47 = NULL,v_47 = NULL,w_47 = NULL,a_48 = NULL,b_48 = NULL;
  b_48 = t;
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      v_47 = ATgetArgument(t, 1);
      t = v_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_47 = ATgetFirst((ATermList) t);
          a_48 = (ATerm) ATgetNext((ATermList) t);
          t = w_47;
          {
            ATerm k_45 = t;
            int m_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm o_45 = ATgetArgument(t, 0);
                    ATerm p_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(m_45);
                t = r_47;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = b_48;
                  }
                else
                  {
                    ATerm q_45 = t;
                    int r_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = b_48;
                        t = h_7(r_47, w_47, a_48, t);
                        LocalPopChoice(r_45);
                      }
                    else
                      {
                        t = q_45;
                        t = b_48;
                      }
                  }
              }
            else
              {
                t = k_45;
                t = r_47;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = b_48;
                  }
                else
                  {
                    t = b_48;
                  }
              }
          }
        }
      else
        {
          t = r_47;
          if(match_cons(t, sym_Scopes_0))
            {
              t = b_48;
            }
          else
            {
              t = b_48;
            }
        }
    }
  else
    {
      t = b_48;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  t = map_1_0(s_11, t);
  l_47 = t;
  t = term_c_42;
  t = table_destroy_0_0(t);
  t = term_c_42;
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_42, l_47);
  t = i_7(m_47, l_47, t);
  t = l_47;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,l_49 = NULL;
  l_49 = t;
  {
    ATerm s_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm x_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_45);
        t = l_49;
      }
    else
      {
        t = s_45;
        {
          ATerm z_45 = t;
          int c_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm e_46 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(c_46);
              t = l_49;
            }
          else
            {
              t = z_45;
              {
                ATerm f_46 = t;
                int g_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm h_46 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(g_46);
                    t = l_49;
                  }
                else
                  {
                    t = f_46;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm i_46 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = l_49;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  g_49 = t;
  t = l_49;
  t = SRTS_one(mark_buv_0_0, t);
  h_49 = t;
  t = g_49;
  t = isect_MarkVar_0_0(t);
  t = h_49;
  return(t);
}
static ATerm i_7 (ATerm a_33, ATerm z_32, ATerm t)
{
  static ATerm u_11 (ATerm t)
  {
    ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
    if(match_cons(t, sym__2))
      {
        r_49 = ATgetArgument(t, 0);
        s_49 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, a_33, r_49, s_49);
    t = lookup_table_0_1(a_33, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        t_49 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = f_8(r_49, s_49, t_49, t);
    t = (ATerm) ATmakeAppl(sym__3, a_33, r_49, s_49);
    return(t);
  }
  t = z_32;
  t = map_1_0(u_11, t);
  return(t);
}
static ATerm j_7 (ATerm z_35, ATerm t)
{
  ATerm v_49 = NULL;
  t = SSL_hashtable_destroy(z_35);
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_49);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
  w_49 = t;
  t = table_hashtable_0_0(t);
  z_49 = t;
  t = lookup_table_0_1(w_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(b_50, t);
  t = z_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(w_49, a_50, t);
  t = w_49;
  return(t);
}
static ATerm k_7 (ATerm w_35, ATerm t)
{
  t = SSL_hashtable_keys(w_35);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_50 = NULL,e_50 = NULL;
  static ATerm y_11 (ATerm t)
  {
    ATerm f_50 = NULL,k_50 = NULL;
    f_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_50), f_50);
    t = g_8(not_null(c_50), f_50, t);
    k_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_50, k_50);
    return(t);
  }
  if(((c_50 != NULL) && (c_50 != t)))
    _fail(t);
  else
    c_50 = t;
  t = lookup_table_0_1(c_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(e_50, t);
  t = map_1_0(y_11, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_c_42;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm v_65, ATerm t)
{
  ATerm p_50 = NULL,s_50 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm c_12 (ATerm t)
    {
      static ATerm r_51 (ATerm t_50, ATerm t)
      {
        ATerm u_50 = NULL,z_50 = NULL,b_51 = NULL,c_51 = NULL;
        t = t_50;
        if(match_cons(t, sym__2))
          {
            ATerm j_46 = ATgetArgument(t, 0);
            u_50 = j_46;
            if(match_cons(j_46, sym_Var_1))
              {
                z_50 = ATgetArgument(j_46, 0);
              }
            else
              _fail(t);
            {
              ATerm k_46 = ATgetArgument(t, 1);
              if(((ATgetType(k_46) == AT_LIST) && !(ATisEmpty(k_46))))
                {
                  ATerm m_46 = ATgetFirst((ATermList) k_46);
                  if(match_cons(m_46, sym_Defined_2))
                    {
                      b_51 = ATgetArgument(m_46, 0);
                      {
                        ATerm n_46 = ATgetArgument(m_46, 1);
                        if((ATgetSymbol((ATermAppl) n_46) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  c_51 = (ATerm) ATgetNext((ATermList) k_46);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_65;
        {
          static ATerm d_12 (ATerm t)
          {
            if((z_50 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(d_12, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, u_50, (ATerm) ATinsert(CheckATermList(c_51), (ATerm) ATmakeAppl(sym_Defined_2, b_51, term_i_45)));
        return(t);
      }
      ATerm j_51 = NULL,l_51 = NULL;
      l_51 = t;
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                j_51 = ATgetArgument(t, 0);
                {
                  ATerm s_46 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(r_46);
            t = j_51;
            if(match_cons(t, sym_Scopes_0))
              {
                t = l_51;
              }
            else
              {
                ATerm u_46 = t;
                int v_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_51(l_51, t);
                    LocalPopChoice(v_46);
                  }
                else
                  {
                    t = u_46;
                    t = l_51;
                  }
              }
          }
        else
          {
            t = q_46;
            {
              ATerm w_46 = t;
              int a_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_51(l_51, t);
                  LocalPopChoice(a_47);
                }
              else
                {
                  t = w_46;
                  t = l_51;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(c_12, t);
  }
  p_50 = t;
  t = term_c_42;
  t = table_destroy_0_0(t);
  t = term_c_42;
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_42, p_50);
  t = i_7(s_50, p_50, t);
  t = p_50;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm q_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_52);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
      {
        ATerm d_47 = t;
        int f_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_47);
          }
        else
          {
            t = d_47;
            {
              ATerm g_47 = t;
              int i_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_52 = ATgetArgument(t, 0);
                      x_52 = ATgetArgument(t, 1);
                      y_52 = ATgetArgument(t, 2);
                      z_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_52;
                  t = map_1_0(g_12, t);
                  LocalPopChoice(i_47);
                }
              else
                {
                  t = g_47;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm j_53 = NULL;
  ATerm j_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_53 = ATgetArgument(t, 0);
          {
            ATerm n_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_47);
      t = j_53;
    }
  else
    {
      t = j_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_53;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm u_51 = NULL,w_51 = NULL,x_51 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,p_52 = NULL,q_11 = NULL,p_11 = NULL;
  p_52 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_52 = ATgetArgument(t, 0);
      m_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_52);
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, l_52, m_52);
  p_11 = t;
  t = SSLsetAnnotations(p_11, k_52);
  n_52 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_51 = ATgetArgument(t, 0);
      {
        ATerm o_47 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_51;
  t = free_vars_3_0(e_12, f_12, tboundin_3_0, t);
  u_51 = t;
  t = undefine_unbound_MarkVar_0_1(u_51, t);
  w_51 = t;
  t = n_52;
  if(match_cons(t, sym_Let_2))
    {
      d_52 = ATgetArgument(t, 0);
      e_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_52);
  c_52 = t;
  t = d_52;
  {
    static ATerm j_12 (ATerm t)
    {
      ATerm q_53 = NULL,r_53 = NULL;
      q_53 = t;
      t = term_c_42;
      t = table_destroy_0_0(t);
      t = term_c_42;
      r_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_42, w_51);
      t = i_7(r_53, w_51, t);
      t = q_53;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(j_12, t);
  }
  f_52 = t;
  t = term_c_42;
  t = table_destroy_0_0(t);
  t = term_c_42;
  h_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_42, w_51);
  t = i_7(h_52, w_51, t);
  t = e_52;
  t = mark_buv_0_0(t);
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, f_52, g_52);
  q_11 = t;
  t = SSLsetAnnotations(q_11, c_52);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_53 = NULL,t_53 = NULL,v_53 = NULL,t_11 = NULL;
      v_53 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_53);
      s_53 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_53);
      t_11 = t;
      t = SSLsetAnnotations(t_11, s_53);
      LocalPopChoice(q_47);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = p_47;
      {
        ATerm t_47 = t;
        int u_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,v_11 = NULL;
            b_54 = t;
            if(match_cons(t, sym_App_2))
              {
                z_53 = ATgetArgument(t, 0);
                a_54 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_54);
            y_53 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, z_53, a_54);
            v_11 = t;
            t = SSLsetAnnotations(v_11, y_53);
            LocalPopChoice(u_47);
            {
              ATerm d_54 = NULL,l_54 = NULL,n_54 = NULL,o_54 = NULL,q_54 = NULL,r_54 = NULL,w_11 = NULL;
              r_54 = t;
              if(match_cons(t, sym_App_2))
                {
                  l_54 = ATgetArgument(t, 0);
                  n_54 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_54);
              d_54 = t;
              t = l_54;
              t = mark_buv_0_0(t);
              o_54 = t;
              t = n_54;
              t = mark_build_vars_0_0(t);
              q_54 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, o_54, q_54);
              w_11 = t;
              t = SSLsetAnnotations(w_11, d_54);
            }
          }
        else
          {
            t = t_47;
            {
              ATerm y_47 = t;
              int z_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,z_11 = NULL;
                  w_54 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      v_54 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_54);
                  u_54 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, v_54);
                  z_11 = t;
                  t = SSLsetAnnotations(z_11, u_54);
                  LocalPopChoice(z_47);
                  {
                    ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_12 = NULL;
                    a_55 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        y_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(a_55);
                    x_54 = t;
                    t = y_54;
                    t = mark_buv_0_0(t);
                    z_54 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, z_54);
                    b_12 = t;
                    t = SSLsetAnnotations(b_12, x_54);
                  }
                }
              else
                {
                  t = y_47;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_7 (ATerm k_32, ATerm l_32, ATerm m_32, ATerm t)
{
  ATerm c_55 = NULL,e_55 = NULL,f_55 = NULL,k_55 = NULL,l_55 = NULL;
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
  t = g_8(k_32, l_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_48 = ATgetFirst((ATermList) t);
      c_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_32, l_32, (ATerm) ATinsert(CheckATermList(c_55), m_32));
  t = lookup_table_0_1(k_32, t);
  l_55 = t;
  t = (ATerm) ATinsert(CheckATermList(c_55), m_32);
  f_55 = t;
  t = l_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(l_32, f_55, k_55, t);
  t = e_55;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm m_55 = NULL,y_55 = NULL,z_55 = NULL,b_56 = NULL;
  m_55 = t;
  t = term_c_42;
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_55);
  z_55 = t;
  t = term_e_48;
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_42, (ATerm)ATmakeAppl(sym_Var_1, m_55), term_e_48);
  t = l_7(y_55, z_55, b_56, t);
  t = m_55;
  return(t);
}
static ATerm o_7 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm h_56 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_32, j_32);
  t = g_8(i_32, j_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_56 = ATgetFirst((ATermList) t);
      {
        ATerm f_48 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_56;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  g_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_32 = NULL,b_33 = NULL,c_33 = NULL,i_33 = NULL;
        t = term_c_42;
        i_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_42, g_58);
        t = o_7(i_33, g_58, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_48 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_48) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            y_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, h_58);
        b_33 = t;
        t = (ATerm) ATinsert(ATempty, y_32);
        c_33 = t;
        t = SSLsetAnnotations(b_33, c_33);
        LocalPopChoice(h_48);
      }
    else
      {
        t = g_48;
        {
          ATerm j_48 = t;
          int k_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_34 = NULL,x_34 = NULL,z_34 = NULL,g_35 = NULL;
              t = term_c_42;
              g_35 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_c_42, g_58);
              t = o_7(g_35, g_58, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm l_48 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_48) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  w_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, h_58);
              x_34 = t;
              t = (ATerm) ATinsert(ATempty, w_34);
              z_34 = t;
              t = SSLsetAnnotations(x_34, z_34);
              LocalPopChoice(k_48);
            }
          else
            {
              t = j_48;
              {
                ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,k_36 = NULL;
                t = term_c_42;
                k_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_c_42, g_58);
                t = o_7(k_36, g_58, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm m_48 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) m_48) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    b_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, h_58);
                c_36 = t;
                t = (ATerm) ATinsert(ATempty, b_36);
                d_36 = t;
                t = SSLsetAnnotations(c_36, d_36);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm o_58 = NULL,v_58 = NULL,w_58 = NULL,y_58 = NULL,i_13 = NULL;
  ATerm n_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(p_48);
    }
  else
    {
      t = n_48;
    }
  y_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_58);
  o_58 = t;
  t = v_58;
  t = DeclareBound_0_0(t);
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_58);
  i_13 = t;
  t = SSLsetAnnotations(i_13, o_58);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm q_48 = t;
  int r_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_59 = NULL,e_59 = NULL,h_59 = NULL,p_13 = NULL;
      h_59 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_59);
      b_59 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_59);
      p_13 = t;
      t = SSLsetAnnotations(p_13, b_59);
      LocalPopChoice(r_48);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = q_48;
      {
        ATerm s_48 = t;
        int t_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_59 = NULL,k_59 = NULL,l_59 = NULL,s_59 = NULL,r_13 = NULL;
            s_59 = t;
            if(match_cons(t, sym_App_2))
              {
                k_59 = ATgetArgument(t, 0);
                l_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_59);
            i_59 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, k_59, l_59);
            r_13 = t;
            t = SSLsetAnnotations(r_13, i_59);
            LocalPopChoice(t_48);
            {
              ATerm t_59 = NULL,u_59 = NULL,y_59 = NULL,z_59 = NULL,h_60 = NULL,i_60 = NULL,s_13 = NULL;
              i_60 = t;
              if(match_cons(t, sym_App_2))
                {
                  u_59 = ATgetArgument(t, 0);
                  y_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_60);
              t_59 = t;
              t = u_59;
              t = mark_buv_0_0(t);
              z_59 = t;
              t = y_59;
              t = mark_build_vars_0_0(t);
              h_60 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, z_59, h_60);
              s_13 = t;
              t = SSLsetAnnotations(s_13, t_59);
            }
          }
        else
          {
            t = s_48;
            {
              ATerm v_48 = t;
              int w_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,t_13 = NULL;
                  l_60 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      k_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_60);
                  j_60 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, k_60);
                  t_13 = t;
                  t = SSLsetAnnotations(t_13, j_60);
                  LocalPopChoice(w_48);
                  {
                    ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,u_13 = NULL;
                    p_60 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        n_60 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(p_60);
                    m_60 = t;
                    t = n_60;
                    t = mark_buv_0_0(t);
                    o_60 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, o_60);
                    u_13 = t;
                    t = SSLsetAnnotations(u_13, m_60);
                  }
                }
              else
                {
                  t = v_48;
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
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_61 = NULL,t_61 = NULL;
      s_61 = t;
      if(match_cons(t, sym_Match_1))
        {
          t_61 = ATgetArgument(t, 0);
          {
            ATerm r_36 = NULL,t_36 = NULL,r_14 = NULL;
            t = SSLgetAnnotations(s_61);
            r_36 = t;
            t = t_61;
            t = mark_match_vars_0_0(t);
            t_36 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, t_36);
            r_14 = t;
            t = SSLsetAnnotations(r_14, r_36);
          }
        }
      else
        {
          ATerm d_37 = NULL,r_37 = NULL,x_14 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              t_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_61);
          d_37 = t;
          t = t_61;
          t = mark_build_vars_0_0(t);
          r_37 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, r_37);
          x_14 = t;
          t = SSLsetAnnotations(x_14, d_37);
        }
      LocalPopChoice(y_48);
    }
  else
    {
      t = x_48;
      {
        ATerm z_48 = t;
        int a_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(a_49);
          }
        else
          {
            t = z_48;
            {
              ATerm b_49 = t;
              int c_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(c_49);
                }
              else
                {
                  t = b_49;
                  {
                    ATerm d_49 = t;
                    int e_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(e_49);
                      }
                    else
                      {
                        t = d_49;
                        {
                          ATerm f_49 = t;
                          int i_49 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_61 = NULL,y_61 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
                              w_61 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  y_61 = ATgetArgument(t, 0);
                                  b_62 = ATgetArgument(t, 1);
                                  c_62 = ATgetArgument(t, 2);
                                  d_62 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = w_61;
                              t = g_7(y_61, b_62, c_62, d_62, t);
                              LocalPopChoice(i_49);
                            }
                          else
                            {
                              t = f_49;
                              {
                                ATerm j_49 = t;
                                int m_49 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(m_49);
                                  }
                                else
                                  {
                                    t = j_49;
                                    {
                                      ATerm n_49 = t;
                                      int o_49 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_62 = NULL,o_62 = NULL,r_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL;
                                          t_62 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              u_62 = ATgetArgument(t, 0);
                                              t = u_62;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  n_62 = ATgetArgument(t, 0);
                                                  o_62 = ATgetArgument(t, 1);
                                                  r_62 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = t_62;
                                              t = f_7(n_62, o_62, r_62, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  u_62 = ATgetArgument(t, 0);
                                                  t = u_62;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      n_62 = ATgetArgument(t, 0);
                                                      o_62 = ATgetArgument(t, 1);
                                                      r_62 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = t_62;
                                                  t = e_7(n_62, o_62, r_62, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      u_62 = ATgetArgument(t, 0);
                                                      v_62 = ATgetArgument(t, 1);
                                                      w_62 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = t_62;
                                                  t = d_7(u_62, v_62, w_62, t);
                                                }
                                            }
                                          LocalPopChoice(o_49);
                                        }
                                      else
                                        {
                                          t = n_49;
                                          {
                                            ATerm q_49 = t;
                                            int u_49 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(u_49);
                                              }
                                            else
                                              {
                                                t = q_49;
                                                {
                                                  ATerm x_49 = t;
                                                  int y_49 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(y_49);
                                                    }
                                                  else
                                                    {
                                                      t = x_49;
                                                      {
                                                        ATerm d_50 = t;
                                                        int g_50 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm q_63 = NULL;
                                                            q_63 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm h_50 = ATgetArgument(t, 0);
                                                                ATerm i_50 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = q_63;
                                                            t = c_7(t);
                                                            LocalPopChoice(g_50);
                                                          }
                                                        else
                                                          {
                                                            t = d_50;
                                                            {
                                                              ATerm l_50 = t;
                                                              int m_50 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(m_50);
                                                                }
                                                              else
                                                                {
                                                                  t = l_50;
                                                                  {
                                                                    ATerm o_50 = t;
                                                                    int q_50 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(q_50);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_50;
                                                                        {
                                                                          ATerm r_50 = t;
                                                                          int v_50 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(v_50);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_50;
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
static ATerm p_7 (ATerm x_31, ATerm y_31, ATerm w_31, ATerm t)
{
  ATerm y_63 = NULL,f_64 = NULL,g_64 = NULL,i_64 = NULL,p_64 = NULL;
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_31, y_31);
  {
    ATerm y_50 = t;
    int a_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_51 = ATgetArgument(t, 0);
            ATerm g_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_31, y_31);
        t = g_8(x_31, y_31, t);
        LocalPopChoice(a_51);
      }
    else
      {
        t = y_50;
        t = (ATerm) ATempty;
      }
  }
  f_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_31, y_31, (ATerm) ATinsert(CheckATermList(f_64), w_31));
  t = lookup_table_0_1(x_31, t);
  p_64 = t;
  t = (ATerm) ATinsert(CheckATermList(f_64), w_31);
  g_64 = t;
  t = p_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(y_31, g_64, i_64, t);
  t = y_63;
  return(t);
}
static ATerm q_7 (ATerm b_95 (ATerm), ATerm t_30, ATerm r_30, ATerm t)
{
  ATerm v_64 = NULL,x_64 = NULL,m_65 = NULL,n_65 = NULL,q_65 = NULL,r_65 = NULL,w_65 = NULL,x_65 = NULL;
  n_65 = t;
  t = b_95(t);
  v_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_64, t_30, r_30);
  t = p_7(v_64, t_30, r_30, t);
  {
    ATerm i_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_65 = NULL;
        t = term_m_51;
        y_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_64, term_m_51);
        t = g_8(v_64, y_65, t);
        LocalPopChoice(k_51);
      }
    else
      {
        t = i_51;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_64 = ATgetFirst((ATermList) t);
      m_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_64, term_m_51, (ATerm) ATinsert(CheckATermList(m_65), (ATerm) ATinsert(CheckATermList(x_64), t_30)));
  t = lookup_table_0_1(v_64, t);
  x_65 = t;
  t = term_m_51;
  q_65 = t;
  t = (ATerm) ATinsert(CheckATermList(m_65), (ATerm) ATinsert(CheckATermList(x_64), t_30));
  r_65 = t;
  t = x_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(q_65, r_65, w_65, t);
  t = n_65;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_c_42;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_65);
  a_66 = t;
  t = term_s_51;
  b_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_65), term_s_51);
  t = q_7(k_12, a_66, b_66, t);
  t = z_65;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_c_42;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm c_66 = NULL,g_66 = NULL,h_66 = NULL,l_66 = NULL,m_66 = NULL,g_15 = NULL;
  m_66 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_66 = ATgetArgument(t, 0);
      h_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_66);
  c_66 = t;
  t = h_66;
  {
    static ATerm v_12 (ATerm t)
    {
      ATerm q_66 = NULL;
      q_66 = t;
      t = g_66;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = q_66;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(t_12, v_12, t);
  }
  l_66 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_66, l_66);
  g_15 = t;
  t = SSLsetAnnotations(g_15, c_66);
  return(t);
}
ATerm tboundin_3_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL;
  g_76 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_76 = ATgetArgument(t, 0);
      d_76 = ATgetArgument(t, 1);
      {
        ATerm a_38 = NULL,m_38 = NULL,n_38 = NULL,i_15 = NULL;
        t = SSLgetAnnotations(g_76);
        a_38 = t;
        t = h_76;
        t = k_112(t);
        m_38 = t;
        t = d_76;
        t = i_112(t);
        n_38 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_38, n_38);
        i_15 = t;
        t = SSLsetAnnotations(i_15, a_38);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          h_76 = ATgetArgument(t, 0);
          d_76 = ATgetArgument(t, 1);
          e_76 = ATgetArgument(t, 2);
          {
            ATerm f_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,p_15 = NULL;
            t = SSLgetAnnotations(g_76);
            f_39 = t;
            t = h_76;
            t = k_112(t);
            j_39 = t;
            t = d_76;
            t = k_112(t);
            k_39 = t;
            t = e_76;
            t = k_112(t);
            l_39 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, j_39, k_39, l_39);
            p_15 = t;
            t = SSLsetAnnotations(p_15, f_39);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              h_76 = ATgetArgument(t, 0);
              d_76 = ATgetArgument(t, 1);
              e_76 = ATgetArgument(t, 2);
              f_76 = ATgetArgument(t, 3);
              {
                ATerm f_40 = NULL,u_40 = NULL,w_40 = NULL,x_40 = NULL,z_40 = NULL,w_15 = NULL;
                t = SSLgetAnnotations(g_76);
                f_40 = t;
                t = h_76;
                t = k_112(t);
                u_40 = t;
                t = d_76;
                t = k_112(t);
                w_40 = t;
                t = e_76;
                t = k_112(t);
                x_40 = t;
                t = f_76;
                t = i_112(t);
                z_40 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_40, w_40, x_40, z_40);
                w_15 = t;
                t = SSLsetAnnotations(w_15, f_40);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  h_76 = ATgetArgument(t, 0);
                  d_76 = ATgetArgument(t, 1);
                  e_76 = ATgetArgument(t, 2);
                  f_76 = ATgetArgument(t, 3);
                  {
                    ATerm y_41 = NULL,g_42 = NULL,i_42 = NULL,j_42 = NULL,l_42 = NULL,t_16 = NULL;
                    t = SSLgetAnnotations(g_76);
                    y_41 = t;
                    t = h_76;
                    t = k_112(t);
                    g_42 = t;
                    t = d_76;
                    t = k_112(t);
                    i_42 = t;
                    t = e_76;
                    t = k_112(t);
                    j_42 = t;
                    t = f_76;
                    t = i_112(t);
                    l_42 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, g_42, i_42, j_42, l_42);
                    t_16 = t;
                    t = SSLsetAnnotations(t_16, y_41);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      h_76 = ATgetArgument(t, 0);
                      {
                        ATerm i_43 = NULL,o_43 = NULL,u_16 = NULL;
                        t = SSLgetAnnotations(g_76);
                        i_43 = t;
                        t = h_76;
                        t = i_112(t);
                        o_43 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, o_43);
                        u_16 = t;
                        t = SSLsetAnnotations(u_16, i_43);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          h_76 = ATgetArgument(t, 0);
                          {
                            ATerm z_43 = NULL,k_44 = NULL,v_16 = NULL;
                            t = SSLgetAnnotations(g_76);
                            z_43 = t;
                            t = h_76;
                            t = i_112(t);
                            k_44 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_44);
                            v_16 = t;
                            t = SSLsetAnnotations(v_16, z_43);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              h_76 = ATgetArgument(t, 0);
                              {
                                ATerm y_44 = NULL,a_45 = NULL,w_16 = NULL;
                                t = SSLgetAnnotations(g_76);
                                y_44 = t;
                                t = h_76;
                                t = i_112(t);
                                a_45 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, a_45);
                                w_16 = t;
                                t = SSLsetAnnotations(w_16, y_44);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  h_76 = ATgetArgument(t, 0);
                                  {
                                    ATerm l_45 = NULL,n_45 = NULL,x_16 = NULL;
                                    t = SSLgetAnnotations(g_76);
                                    l_45 = t;
                                    t = h_76;
                                    t = i_112(t);
                                    n_45 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, n_45);
                                    x_16 = t;
                                    t = SSLsetAnnotations(x_16, l_45);
                                  }
                                }
                              else
                                {
                                  ATerm b_46 = NULL,d_46 = NULL,y_16 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      h_76 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(g_76);
                                  b_46 = t;
                                  t = h_76;
                                  t = i_112(t);
                                  d_46 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, d_46);
                                  y_16 = t;
                                  t = SSLsetAnnotations(y_16, b_46);
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
static ATerm w_12 (ATerm t)
{
  ATerm a_78 = NULL;
  ATerm t_51 = t;
  int v_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_78 = ATgetArgument(t, 0);
          {
            ATerm b_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_51);
      t = a_78;
    }
  else
    {
      t = t_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_78;
    }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm n_78 = NULL;
  ATerm j_52 = t;
  int o_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_78 = ATgetArgument(t, 0);
          {
            ATerm r_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_52);
      t = n_78;
    }
  else
    {
      t = j_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_78;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm s_77 = NULL;
  ATerm s_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm v_52 = ATgetArgument(t, 0);
          ATerm a_53 = ATgetArgument(t, 1);
          s_77 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(u_52);
      t = s_77;
      t = map_1_0(w_12, t);
    }
  else
    {
      t = s_52;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_53 = ATgetArgument(t, 0);
          ATerm c_53 = ATgetArgument(t, 1);
          s_77 = ATgetArgument(t, 2);
          {
            ATerm d_53 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = s_77;
      t = map_1_0(z_12, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  static ATerm v_79 (ATerm t)
  {
    ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
    q_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_79;
      }
    else
      {
        ATerm l_46 = NULL,o_46 = NULL,p_46 = NULL,k_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_79 = ATgetFirst((ATermList) t);
            s_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_79);
        l_46 = t;
        t = r_79;
        t = h_91(t);
        o_46 = t;
        t = s_79;
        t = v_79(t);
        p_46 = t;
        t = (ATerm) ATinsert(CheckATermList(p_46), o_46);
        k_17 = t;
        t = SSLsetAnnotations(k_17, l_46);
      }
    return(t);
  }
  t = v_79(t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm y_80 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_80);
  return(t);
}
static ATerm b_14 (ATerm t)
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
        int i_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_53);
          }
        else
          {
            t = g_53;
            {
              ATerm k_53 = t;
              int m_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_81 = NULL,d_81 = NULL,f_81 = NULL,g_81 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_81 = ATgetArgument(t, 0);
                      d_81 = ATgetArgument(t, 1);
                      f_81 = ATgetArgument(t, 2);
                      g_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_81;
                  t = map_1_0(c_14, t);
                  LocalPopChoice(m_53);
                }
              else
                {
                  t = k_53;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm x_81 = NULL;
  ATerm n_53 = t;
  int o_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_81 = ATgetArgument(t, 0);
          {
            ATerm p_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_53);
      t = x_81;
    }
  else
    {
      t = n_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_81;
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm b_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_82);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm u_53 = t;
  int w_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_53);
    }
  else
    {
      t = u_53;
      {
        ATerm x_53 = t;
        int c_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_54);
          }
        else
          {
            t = x_53;
            {
              ATerm f_54 = t;
              int g_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_82 = ATgetArgument(t, 0);
                      e_82 = ATgetArgument(t, 1);
                      f_82 = ATgetArgument(t, 2);
                      g_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_82;
                  t = map_1_0(q_14, t);
                  LocalPopChoice(g_54);
                }
              else
                {
                  t = f_54;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm n_82 = NULL;
  ATerm j_54 = t;
  int k_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_82 = ATgetArgument(t, 0);
          {
            ATerm m_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_54);
      t = n_82;
    }
  else
    {
      t = j_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_82;
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm r_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_82);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm p_54 = t;
  int s_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_54);
    }
  else
    {
      t = p_54;
      {
        ATerm t_54 = t;
        int d_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_55);
          }
        else
          {
            t = t_54;
            {
              ATerm g_55 = t;
              int j_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_82 = ATgetArgument(t, 0);
                      u_82 = ATgetArgument(t, 1);
                      v_82 = ATgetArgument(t, 2);
                      w_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_82;
                  t = map_1_0(h_15, t);
                  LocalPopChoice(j_55);
                }
              else
                {
                  t = g_55;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm d_83 = NULL;
  ATerm n_55 = t;
  int o_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_83 = ATgetArgument(t, 0);
          {
            ATerm p_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_55);
      t = d_83;
    }
  else
    {
      t = n_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_83;
    }
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm h_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_83);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm q_55 = t;
  int r_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_55);
    }
  else
    {
      t = q_55;
      {
        ATerm s_55 = t;
        int t_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_55);
          }
        else
          {
            t = s_55;
            {
              ATerm u_55 = t;
              int v_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_83 = ATgetArgument(t, 0);
                      k_83 = ATgetArgument(t, 1);
                      l_83 = ATgetArgument(t, 2);
                      m_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_83;
                  t = map_1_0(m_15, t);
                  LocalPopChoice(v_55);
                }
              else
                {
                  t = u_55;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm t_83 = NULL;
  ATerm w_55 = t;
  int x_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_83 = ATgetArgument(t, 0);
          {
            ATerm a_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_55);
      t = t_83;
    }
  else
    {
      t = w_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_83;
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm x_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_83);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm c_56 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_56);
    }
  else
    {
      t = c_56;
      {
        ATerm e_56 = t;
        int f_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_56);
          }
        else
          {
            t = e_56;
            {
              ATerm g_56 = t;
              int i_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_83 = ATgetArgument(t, 0);
                      a_84 = ATgetArgument(t, 1);
                      b_84 = ATgetArgument(t, 2);
                      c_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_84;
                  t = map_1_0(t_15, t);
                  LocalPopChoice(i_56);
                }
              else
                {
                  t = g_56;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm j_84 = NULL;
  ATerm j_56 = t;
  int k_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_84 = ATgetArgument(t, 0);
          {
            ATerm l_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_56);
      t = j_84;
    }
  else
    {
      t = j_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_84;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm w_80 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      w_80 = ATgetArgument(t, 0);
      t = w_80;
      t = free_vars_3_0(j_13, b_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          w_80 = ATgetArgument(t, 0);
          t = w_80;
          t = free_vars_3_0(g_14, h_14, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              w_80 = ATgetArgument(t, 0);
              t = w_80;
              t = free_vars_3_0(d_15, e_15, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  w_80 = ATgetArgument(t, 0);
                  t = w_80;
                  t = free_vars_3_0(j_15, k_15, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      w_80 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_80;
                  t = free_vars_3_0(q_15, r_15, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm x_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_84);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_56);
    }
  else
    {
      t = m_56;
      {
        ATerm o_56 = t;
        int p_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_84 = ATgetArgument(t, 0);
                      a_85 = ATgetArgument(t, 1);
                      b_85 = ATgetArgument(t, 2);
                      c_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_85;
                  t = map_1_0(z_16, t);
                  LocalPopChoice(r_56);
                }
              else
                {
                  t = q_56;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm j_85 = NULL;
  ATerm s_56 = t;
  int t_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_85 = ATgetArgument(t, 0);
          {
            ATerm u_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_56);
      t = j_85;
    }
  else
    {
      t = s_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_85;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_84 = NULL,u_84 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_84 = ATgetArgument(t, 0);
      t = u_84;
      if(match_cons(t, sym_Rule_3))
        {
          q_84 = ATgetArgument(t, 0);
          {
            ATerm v_56 = ATgetArgument(t, 1);
          }
          {
            ATerm w_56 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_84;
      t = free_vars_3_0(a_16, i_16, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_84 = ATgetArgument(t, 0);
          {
            ATerm x_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_84;
    }
  return(t);
}
static ATerm t_7 (ATerm w_90 (ATerm), ATerm f_25, ATerm e_25, ATerm t)
{
  static ATerm c_86 (ATerm t)
  {
    ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
    x_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_85 = ATgetFirst((ATermList) t);
            z_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_56 = t;
          int z_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_85;
              {
                static ATerm a_17 (ATerm t)
                {
                  t = e_25;
                  return(t);
                }
                t = u_7(w_90, a_17, y_85, z_85, t);
              }
              t = c_86(t);
              LocalPopChoice(z_56);
            }
          else
            {
              t = y_56;
              {
                ATerm e_47 = NULL,h_47 = NULL,m_17 = NULL;
                t = SSLgetAnnotations(x_85);
                e_47 = t;
                t = z_85;
                t = c_86(t);
                h_47 = t;
                t = (ATerm) ATinsert(CheckATermList(h_47), y_85);
                m_17 = t;
                t = SSLsetAnnotations(m_17, e_47);
              }
            }
        }
      }
    return(t);
  }
  t = f_25;
  t = c_86(t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
  f_86 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_86;
      t = r_93(t);
    }
  else
    {
      ATerm k_86 = NULL,l_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_86 = ATgetFirst((ATermList) t);
          h_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_86;
      t = t_93(t);
      k_86 = t;
      t = h_86;
      t = foldr_3_0(r_93, s_93, t_93, t);
      l_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_86, l_86);
      t = s_93(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  static ATerm k_87 (ATerm t)
  {
    ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
    h_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_87 = ATgetFirst((ATermList) t);
        j_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_57 = t;
      int b_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_47 = NULL,x_47 = NULL,p_17 = NULL;
          t = SSLgetAnnotations(h_87);
          s_47 = t;
          t = i_87;
          t = r_91(t);
          x_47 = t;
          t = (ATerm) ATinsert(CheckATermList(j_87), x_47);
          p_17 = t;
          t = SSLsetAnnotations(p_17, s_47);
          LocalPopChoice(b_57);
        }
      else
        {
          t = a_57;
          {
            ATerm o_48 = NULL,u_48 = NULL,q_17 = NULL;
            t = SSLgetAnnotations(h_87);
            o_48 = t;
            t = j_87;
            t = k_87(t);
            u_48 = t;
            t = (ATerm) ATinsert(CheckATermList(u_48), i_87);
            q_17 = t;
            t = SSLsetAnnotations(q_17, o_48);
          }
        }
    }
    return(t);
  }
  t = k_87(t);
  return(t);
}
static ATerm u_7 (ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm j_25, ATerm i_25, ATerm t)
{
  t = a_91(t);
  {
    static ATerm c_17 (ATerm t)
    {
      ATerm n_87 = NULL;
      n_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_25, n_87);
      t = z_90(t);
      return(t);
    }
    t = fetch_1_0(c_17, t);
  }
  t = i_25;
  return(t);
}
static ATerm v_7 (ATerm r_90 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm d_88 (ATerm t)
  {
    ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
    y_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_87;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_87 = ATgetFirst((ATermList) t);
            a_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_57 = t;
          int d_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_87;
              {
                static ATerm d_17 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = u_7(r_90, d_17, z_87, a_88, t);
              }
              t = d_88(t);
              LocalPopChoice(d_57);
            }
          else
            {
              t = c_57;
              {
                ATerm k_49 = NULL,p_49 = NULL,t_17 = NULL;
                t = SSLgetAnnotations(y_87);
                k_49 = t;
                t = a_88;
                t = d_88(t);
                p_49 = t;
                t = (ATerm) ATinsert(CheckATermList(p_49), z_87);
                t_17 = t;
                t = SSLsetAnnotations(t_17, k_49);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = d_88(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  static ATerm z_88 (ATerm t)
  {
    ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
    y_88 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_88 = ATgetFirst((ATermList) t);
        x_88 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_50 = NULL,n_50 = NULL,w_17 = NULL;
          t = SSLgetAnnotations(y_88);
          j_50 = t;
          t = x_88;
          t = z_88(t);
          n_50 = t;
          t = (ATerm) ATinsert(CheckATermList(n_50), w_88);
          w_17 = t;
          t = SSLsetAnnotations(w_17, j_50);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_88;
        t = y_91(t);
      }
    return(t);
  }
  t = z_88(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL;
  g_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_88;
    }
  else
    {
      static ATerm e_17 (ATerm t)
      {
        t = not_null(i_88);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_88 = ATgetFirst((ATermList) t);
          if(((i_88 != NULL) && (i_88 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_88;
      t = at_end_1_0(e_17, t);
    }
  return(t);
}
static ATerm l_89 (ATerm d_89, ATerm t)
{
  ATerm e_89 = NULL;
  t = SSL_explode_term(d_89);
  if(match_cons(t, sym__2))
    {
      ATerm e_57 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_57) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_89;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL;
  i_89 = t;
  if(match_cons(t, sym__2))
    {
      g_89 = ATgetArgument(t, 0);
      h_89 = ATgetArgument(t, 1);
      {
        ATerm f_57 = t;
        int g_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_17 (ATerm t)
            {
              t = h_89;
              return(t);
            }
            t = g_89;
            t = at_end_1_0(f_17, t);
            LocalPopChoice(g_57);
          }
        else
          {
            t = f_57;
            t = l_89(i_89, t);
          }
      }
    }
  else
    {
      t = l_89(i_89, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm t)
{
  static ATerm s_89 (ATerm t)
  {
    ATerm h_57 = t;
    int i_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_106(t);
        LocalPopChoice(i_57);
      }
    else
      {
        t = h_57;
        {
          ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,y_17 = NULL;
          t = e_106(t);
          r_89 = t;
          if(match_cons(t, sym__2))
            {
              n_89 = ATgetArgument(t, 0);
              o_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_89);
          m_89 = t;
          t = n_89;
          t = g_106(t);
          p_89 = t;
          t = o_89;
          t = s_89(t);
          q_89 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_89, q_89);
          y_17 = t;
          t = SSLsetAnnotations(y_17, m_89);
          t = f_106(t);
        }
      }
    return(t);
  }
  t = s_89(t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_57 = ATgetArgument(t, 0);
      if(((ATgetType(j_57) != AT_LIST) || !(ATisEmpty(j_57))))
        _fail(t);
      {
        ATerm k_57 = ATgetArgument(t, 1);
        if(((ATgetType(k_57) != AT_LIST) || !(ATisEmpty(k_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_57 = ATgetArgument(t, 0);
      if(((ATgetType(l_57) == AT_LIST) && !(ATisEmpty(l_57))))
        {
          z_89 = ATgetFirst((ATermList) l_57);
          a_90 = (ATerm) ATgetNext((ATermList) l_57);
        }
      else
        _fail(t);
      {
        ATerm m_57 = ATgetArgument(t, 1);
        if(((ATgetType(m_57) == AT_LIST) && !(ATisEmpty(m_57))))
          {
            b_90 = ATgetFirst((ATermList) m_57);
            c_90 = (ATerm) ATgetNext((ATermList) m_57);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_89, b_90), (ATerm) ATmakeAppl(sym__2, a_90, c_90));
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL;
  if(match_cons(t, sym__2))
    {
      d_90 = ATgetArgument(t, 0);
      e_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_90), d_90);
  return(t);
}
static ATerm a_8 (ATerm s_678, ATerm x_678, ATerm f_65, ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  t = SSL_explode_term(x_678);
  if(match_cons(t, sym__2))
    {
      u_89 = ATgetArgument(t, 0);
      w_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_678);
  if(match_cons(t, sym__2))
    {
      if((u_89 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_89, w_89);
  t = genzip_4_0(g_17, h_17, i_17, _id, t);
  x_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_89, f_65);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  static ATerm g_90 (ATerm t)
  {
    ATerm n_57 = t;
    int o_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_104(t);
        LocalPopChoice(o_57);
      }
    else
      {
        t = n_57;
        t = d_104(t);
        t = g_90(t);
      }
    return(t);
  }
  t = g_90(t);
  return(t);
}
ATerm for_3_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm t)
{
  t = f_104(t);
  t = while_not_2_0(g_104, h_104, t);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm n_90 = NULL;
  n_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_90);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL,t_90 = NULL,c_18 = NULL;
  t_90 = t;
  if(match_cons(t, sym__2))
    {
      p_90 = ATgetArgument(t, 0);
      q_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_90);
  o_90 = t;
  t = q_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_90, q_90);
  c_18 = t;
  t = SSLsetAnnotations(c_18, o_90);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL,a_92 = NULL,b_92 = NULL;
  v_91 = t;
  if(match_cons(t, sym__2))
    {
      w_91 = ATgetArgument(t, 0);
      x_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_92 = ATgetFirst((ATermList) t);
      b_92 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_57 = t;
        int q_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_92(w_91, x_91, v_91, t);
            LocalPopChoice(q_57);
          }
        else
          {
            t = p_57;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_91), a_92), b_92);
          }
      }
    }
  else
    {
      t = l_92(w_91, x_91, v_91, t);
    }
  return(t);
}
static ATerm l_92 (ATerm u_90, ATerm v_90, ATerm y_90, ATerm t)
{
  ATerm b_91 = NULL,e_91 = NULL,d_18 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL;
  t = SSLgetAnnotations(y_90);
  b_91 = t;
  t = v_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_91 = ATgetFirst((ATermList) t);
      n_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_91;
  if(match_cons(t, sym__2))
    {
      l_91 = ATgetArgument(t, 0);
      m_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_57 = t;
    int s_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_91;
        if((l_91 != t))
          {
            _fail(t);
          }
        t = n_91;
        LocalPopChoice(s_57);
      }
    else
      {
        t = r_57;
        t = v_90;
        t = a_8(l_91, m_91, n_91, t);
      }
  }
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_90, e_91);
  d_18 = t;
  t = SSLsetAnnotations(d_18, b_91);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm k_92 = NULL;
  if(match_cons(t, sym__2))
    {
      k_92 = ATgetArgument(t, 0);
      if((k_92 != ATgetArgument(t, 1)))
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
  ATerm t_57 = t;
  int u_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_17, l_17, o_17, t);
      LocalPopChoice(u_57);
    }
  else
    {
      t = t_57;
      {
        ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
        f_92 = t;
        if(match_cons(t, sym__2))
          {
            g_92 = ATgetArgument(t, 0);
            h_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_92;
        t = v_7(r_17, g_92, h_92, t);
      }
    }
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  if(match_cons(t, sym__2))
    {
      e_51 = ATgetArgument(t, 0);
      f_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(z_17, e_51, f_51, t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm h_51 = NULL;
  if(match_cons(t, sym__2))
    {
      h_51 = ATgetArgument(t, 0);
      if((h_51 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  if(match_cons(t, sym__2))
    {
      y_51 = ATgetArgument(t, 0);
      z_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(k_18, y_51, z_51, t);
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm a_52 = NULL;
  if(match_cons(t, sym__2))
    {
      a_52 = ATgetArgument(t, 0);
      if((a_52 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm m_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm z_92 (ATerm t)
  {
    ATerm v_57 = t;
    int w_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_115(t);
        LocalPopChoice(w_57);
      }
    else
      {
        t = v_57;
        {
          ATerm x_57 = t;
          int y_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_92 = NULL,o_92 = NULL,w_50 = NULL,x_50 = NULL;
              n_92 = t;
              t = l_115(t);
              o_92 = t;
              t = n_92;
              {
                static ATerm s_17 (ATerm t)
                {
                  ATerm q_92 = NULL;
                  t = z_92(t);
                  q_92 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_92, o_92);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_115(s_17, z_92, u_17, t);
              }
              x_50 = t;
              t = SSL_explode_term(x_50);
              if(match_cons(t, sym__2))
                {
                  ATerm z_57 = ATgetArgument(t, 0);
                  w_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_50;
              t = foldr_3_0(v_17, x_17, _id, t);
              LocalPopChoice(y_57);
            }
          else
            {
              t = x_57;
              {
                ATerm p_51 = NULL,q_51 = NULL;
                q_51 = t;
                t = SSL_explode_term(q_51);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_58 = ATgetArgument(t, 0);
                    p_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_51;
                t = foldr_3_0(a_18, f_18, z_92, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_92(t);
  return(t);
}
ATerm topdown_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  static ATerm l_18 (ATerm t)
  {
    t = topdown_1_0(l_95, t);
    return(t);
  }
  t = l_95(t);
  t = SRTS_all(l_18, t);
  return(t);
}
static ATerm c_8 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm a_93 = NULL;
  t = SSL_hashtable_remove(v_35, u_35);
  a_93 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_93);
  return(t);
}
static ATerm d_8 (ATerm c_32, ATerm d_32, ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL;
  c_93 = t;
  {
    ATerm b_58 = t;
    int c_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_32, d_32);
        t = g_8(c_32, d_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_58 = ATgetFirst((ATermList) t);
            b_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_58);
        {
          ATerm d_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, c_32, d_32, b_93);
          t = lookup_table_0_1(c_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_93 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_8(d_32, b_93, d_93, t);
          t = (ATerm) ATmakeAppl(sym__3, c_32, d_32, b_93);
        }
      }
    else
      {
        t = b_58;
        {
          ATerm f_93 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, c_32, d_32);
          t = lookup_table_0_1(c_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_93 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_8(d_32, f_93, t);
          t = (ATerm) ATmakeAppl(sym__2, c_32, d_32);
        }
      }
  }
  t = c_93;
  return(t);
}
ATerm end_scope_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL;
  k_93 = t;
  t = y_94(t);
  j_93 = t;
  {
    ATerm e_58 = t;
    int f_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_93 = NULL;
        t = term_m_51;
        o_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_93, term_m_51);
        t = g_8(j_93, o_93, t);
        LocalPopChoice(f_58);
      }
    else
      {
        t = e_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_93 = ATgetFirst((ATermList) t);
      h_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_93, term_m_51, h_93);
  t = lookup_table_0_1(j_93, t);
  n_93 = t;
  t = term_m_51;
  l_93 = t;
  t = n_93;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(l_93, h_93, m_93, t);
  t = i_93;
  {
    static ATerm s_18 (ATerm t)
    {
      ATerm p_93 = NULL;
      p_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_93, p_93);
      t = d_8(j_93, p_93, t);
      return(t);
    }
    t = map_1_0(s_18, t);
  }
  t = k_93;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t)
{
  ATerm i_58 = t;
  int j_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_109(t);
      t = f_109(t);
      LocalPopChoice(j_58);
    }
  else
    {
      t = i_58;
      t = f_109(t);
      _fail(t);
    }
  return(t);
}
static ATerm f_8 (ATerm p_35, ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm q_93 = NULL;
  t = SSL_hashtable_put(r_35, p_35, q_35);
  q_93 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_93);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_35, ATerm y_35, ATerm t)
{
  ATerm u_93 = NULL;
  t = SSL_hashtable_create(x_35, y_35);
  u_93 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_93);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL,z_93 = NULL,a_94 = NULL;
  v_93 = t;
  t = term_k_58;
  z_93 = t;
  t = term_l_58;
  a_94 = t;
  t = v_93;
  t = new_hashtable_0_2(z_93, a_94, t);
  w_93 = t;
  t = v_93;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(v_93, w_93, x_93, t);
  t = v_93;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_94 = NULL;
  t = SSL_table_hashtable();
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_94);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_33, ATerm t)
{
  ATerm k_94 = NULL;
  t = table_hashtable_0_0(t);
  k_94 = t;
  {
    ATerm m_58 = t;
    int n_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_52 = NULL;
        t = k_94;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_8(j_33, i_52, t);
        LocalPopChoice(n_58);
      }
    else
      {
        t = m_58;
        {
          ATerm t_52 = NULL;
          t = j_33;
          t = table_create_0_0(t);
          t = k_94;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_8(j_33, t_52, t);
        }
      }
  }
  return(t);
}
static ATerm e_8 (ATerm s_35, ATerm t_35, ATerm t)
{
  t = SSL_hashtable_get(t_35, s_35);
  return(t);
}
static ATerm g_8 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm n_94 = NULL;
  t = lookup_table_0_1(q_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(r_33, n_94, t);
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_94 (ATerm), ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL;
  r_94 = t;
  t = x_94(t);
  q_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_94, term_m_51);
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_95 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_58 = ATgetArgument(t, 0);
            ATerm s_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_51;
        g_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_94, term_m_51);
        t = g_8(q_94, g_95, t);
        LocalPopChoice(q_58);
      }
    else
      {
        t = p_58;
        t = (ATerm) ATempty;
      }
  }
  s_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_94, term_m_51, (ATerm) ATinsert(CheckATermList(s_94), (ATerm) ATempty));
  t = lookup_table_0_1(q_94, t);
  w_94 = t;
  t = term_m_51;
  t_94 = t;
  t = (ATerm) ATinsert(CheckATermList(s_94), (ATerm) ATempty);
  u_94 = t;
  t = w_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(t_94, u_94, v_94, t);
  t = r_94;
  return(t);
}
ATerm scope_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  static ATerm u_18 (ATerm t)
  {
    t = end_scope_1_0(z_94, t);
    return(t);
  }
  t = begin_scope_1_0(z_94, t);
  t = restore_always_2_0(a_95, u_18, t);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = scope_2_0(z_18, c_19, t);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL;
  t = topdown_1_0(d_19, t);
  r_95 = t;
  t = free_vars_3_0(h_19, k_19, tboundin_3_0, t);
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, q_95, r_95);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm t_58 = ATgetArgument(t, 0);
      p_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_95;
  {
    ATerm u_58 = t;
    int x_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(x_58);
      }
    else
      {
        t = u_58;
        {
          ATerm z_58 = t;
          int a_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(a_59);
            }
          else
            {
              t = z_58;
              {
                ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    s_96 = ATgetArgument(t, 0);
                    t_96 = ATgetArgument(t, 1);
                    u_96 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = p_95;
                t = b_7(s_96, t_96, u_96, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm d_19 (ATerm t)
{
  ATerm y_95 = NULL,z_95 = NULL;
  z_95 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_95 = ATgetArgument(t, 0);
      {
        ATerm c_59 = t;
        int d_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_53 = NULL,l_53 = NULL,v_18 = NULL;
            t = SSLgetAnnotations(z_95);
            h_53 = t;
            t = y_95;
            if(match_cons(t, sym_ListVar_1))
              {
                l_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, l_53);
            v_18 = t;
            t = SSLsetAnnotations(v_18, h_53);
            LocalPopChoice(d_59);
          }
        else
          {
            t = c_59;
            t = z_95;
          }
      }
    }
  else
    {
      t = z_95;
    }
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm c_96 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_96);
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm f_59 = t;
  int g_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_59);
    }
  else
    {
      t = f_59;
      {
        ATerm j_59 = t;
        int m_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_59);
          }
        else
          {
            t = j_59;
            {
              ATerm n_59 = t;
              int o_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_96 = ATgetArgument(t, 0);
                      f_96 = ATgetArgument(t, 1);
                      g_96 = ATgetArgument(t, 2);
                      h_96 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_96;
                  t = map_1_0(l_19, t);
                  LocalPopChoice(o_59);
                }
              else
                {
                  t = n_59;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm o_96 = NULL;
  ATerm p_59 = t;
  int q_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_96 = ATgetArgument(t, 0);
          {
            ATerm r_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_59);
      t = o_96;
    }
  else
    {
      t = p_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_96;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm o_95 = NULL;
  o_95 = t;
  t = scope_2_0(w_18, x_18, t);
  t = o_95;
  return(t);
}
ATerm filter_1_0 (ATerm d_108 (ATerm), ATerm t)
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
        ATerm v_59 = t;
        int w_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_54 = NULL,h_54 = NULL,i_54 = NULL,y_18 = NULL;
            t = SSLgetAnnotations(m_97);
            e_54 = t;
            t = n_97;
            t = d_108(t);
            h_54 = t;
            t = o_97;
            t = filter_1_0(d_108, t);
            i_54 = t;
            t = (ATerm) ATinsert(CheckATermList(i_54), h_54);
            y_18 = t;
            t = SSLsetAnnotations(y_18, e_54);
            LocalPopChoice(w_59);
          }
        else
          {
            t = v_59;
            t = o_97;
            t = filter_1_0(d_108, t);
          }
      }
    }
  return(t);
}
static ATerm h_8 (ATerm f_29, ATerm g_29, ATerm t)
{
  ATerm x_59 = t;
  int a_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_29, g_29);
      LocalPopChoice(a_60);
    }
  else
    {
      t = x_59;
      t = SSL_addr(f_29, g_29);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL;
  t_97 = t;
  t = j_123(t);
  u_97 = t;
  t = term_r_20;
  v_97 = t;
  t = (ATerm) ATinsert(ATempty, u_97);
  w_97 = t;
  t = SSL_printnl(v_97, w_97);
  t = t_97;
  {
    ATerm b_60 = t;
    int c_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,a_19 = NULL;
        t = k_123(t);
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
        t = term_d_60;
        b_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_97, term_d_60);
        t = h_8(y_97, b_98, t);
        a_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_98, z_97);
        a_19 = t;
        t = SSLsetAnnotations(a_19, x_97);
        LocalPopChoice(c_60);
      }
    else
      {
        t = b_60;
        {
          ATerm k_98 = NULL,l_98 = NULL,b_55 = NULL,h_55 = NULL,i_55 = NULL,b_19 = NULL;
          if(match_cons(t, sym__2))
            {
              k_98 = ATgetArgument(t, 0);
              l_98 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_97);
          b_55 = t;
          t = term_d_60;
          i_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_98, term_d_60);
          t = h_8(l_98, i_55, t);
          h_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_98, h_55);
          b_19 = t;
          t = SSLsetAnnotations(b_19, b_55);
        }
      }
  }
  return(t);
}
static ATerm m_19 (ATerm t)
{
  t = term_e_60;
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm f_60 = t;
  int g_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_w_30, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATempty, term_k_25))), term_y_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_w_26, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_21, (ATerm) ATinsert(ATempty, term_y_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_h_23, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_y_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, term_t_25), term_k_25))), term_y_22)))))));
      {
        ATerm q_60 = t;
        if((PushChoice() == 0))
          {
            ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL,e_19 = NULL;
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
              ATerm r_60 = t;
              int s_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_98;
                  LocalPopChoice(s_60);
                }
              else
                {
                  t = r_60;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_98;
                }
            }
            t = (ATerm) ATmakeAppl(sym_Strategies_1, p_98);
            e_19 = t;
            t = SSLsetAnnotations(e_19, o_98);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_60;
          }
      }
      LocalPopChoice(g_60);
    }
  else
    {
      t = f_60;
      {
        ATerm s_98 = NULL,t_98 = NULL;
        t = term_r_20;
        s_98 = t;
        t = (ATerm) ATinsert(ATempty, term_c_21);
        t_98 = t;
        t = SSL_printnl(s_98, t_98);
        t = term_c_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(m_19, n_19, t);
  return(t);
}
ATerm debug_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL;
  u_98 = t;
  t = y_104(t);
  v_98 = t;
  t = term_r_20;
  w_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_98), v_98);
  x_98 = t;
  t = SSL_printnl(w_98, x_98);
  t = u_98;
  return(t);
}
static ATerm o_19 (ATerm t)
{
  t = term_t_60;
  return(t);
}
static ATerm p_19 (ATerm t)
{
  t = term_u_60;
  return(t);
}
static ATerm q_19 (ATerm t)
{
  t = term_v_60;
  return(t);
}
ATerm test_suite_2_0 (ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,j_19 = NULL,i_19 = NULL;
  t = h_123(t);
  t = debug_1_0(o_19, t);
  t = term_x_60;
  t = i_123(t);
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
  t = debug_1_0(p_19, t);
  e_99 = t;
  t = d_99;
  t = debug_1_0(q_19, t);
  f_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_99, f_99);
  i_19 = t;
  t = SSLsetAnnotations(i_19, b_99);
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
  j_19 = t;
  t = SSLsetAnnotations(j_19, y_98);
  return(t);
}
static ATerm r_19 (ATerm t)
{
  t = term_y_60;
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
  t = test_suite_2_0(r_19, s_19, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_io_0_0(t);
  return(t);
}

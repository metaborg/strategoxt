#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Strategies_1;
Symbol sym_Overlays_1;
Symbol sym_ConstType_1;
Symbol sym_SortVar_1;
Symbol sym_Var_1;
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
Symbol sym_Some_1;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Undefined_1;
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_n_42;
ATerm term_f_42;
ATerm term_b_42;
ATerm term_z_41;
ATerm term_x_41;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_h_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_z_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_l_35;
ATerm term_s_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_i_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_k_33;
ATerm term_h_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_y_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_q_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_o_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_t_30;
ATerm term_i_30;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_i_29;
ATerm term_b_29;
ATerm term_n_27;
ATerm term_f_27;
ATerm term_z_26;
ATerm term_o_26;
ATerm term_e_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_p_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_q_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_n_18;
void init_constant_terms (void)
{
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("test14a", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("UnEscape", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_s_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("'\\'", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Char_1, term_w_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Var_1, term_s_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("cs", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Var_1, term_d_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test14b", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("testing-main", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rob", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Var_1, term_y_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14c", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Match_1, term_a_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test13a", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_SortVar_1, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_VarDec_2, term_y_19, term_q_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Build_1, term_a_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Str_1, term_o_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test13b", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_All_1, term_t_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_SDefT_4, term_l_20, (ATerm)ATempty, (ATerm)ATempty, term_a_21);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13c", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("helper", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, term_j_21, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Var_1, term_b_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Match_1, term_c_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Build_1, term_c_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Var_1, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Var_1, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Var_1, term_n_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_b_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Var_1, term_e_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Build_1, term_m_22);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Call_2, term_j_23, (ATerm) ATempty);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Build_1, term_r_22);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Match_1, term_f_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test10a", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Var_1, term_w_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Str_1, term_b_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Var_1, term_h_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test10b", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Call_2, term_r_25, (ATerm) ATempty);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Match_1, term_i_24);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_25, term_y_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_22, term_b_26);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Call_2, term_n_29, (ATerm) ATempty);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_LChoice_2, term_v_25, term_o_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_p_29, term_d_22);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_o_29, term_d_22);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_LChoice_2, term_v_25, term_t_30);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_Var_1, term_z_31);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Match_1, term_c_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Str_1, term_h_32);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Build_1, term_c_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_32, term_v_25);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_App_2, term_v_25, term_c_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Match_1, term_y_23);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Var_1, term_b_33);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_k_33, (ATerm) ATempty);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATempty);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym_Defined_2, term_x_41, term_z_41);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Defined_2, term_a_45, term_z_41);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, term_a_48);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym__2, term_f_53, term_f_53);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm test14_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm p_2 (ATerm);
ATerm test13_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm test12_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm q_3 (ATerm);
ATerm v_3 (ATerm);
ATerm test11_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm test10_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm test9_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm test8_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm test7_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm test6_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm n_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm test5_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm k_7 (ATerm);
ATerm m_7 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm s_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm test2_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm t_5 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm Context_0_0 (ATerm);
ATerm u_5 (ATerm o_21, ATerm);
ATerm Warning_0_0 (ATerm);
ATerm v_5 (ATerm p_21, ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm i_109 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm h_109 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm e_9 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm g_9 (ATerm);
ATerm x_5 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm);
ATerm i_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm s_9 (ATerm);
ATerm u_9 (ATerm);
ATerm y_5 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm);
ATerm v_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm z_5 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm);
ATerm m_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm w_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm h_11 (ATerm);
ATerm mark_rdef_0_0 (ATerm);
ATerm j_11 (ATerm);
ATerm IntroduceBound_0_0 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm a_6 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm b_6 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm);
ATerm v_11 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm c_6 (ATerm o_28, ATerm n_28, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm x_12 (ATerm);
ATerm t_13 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm d_6 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm g_6 (ATerm w_27, ATerm x_27, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm h_6 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm);
ATerm i_6 (ATerm d_83 (ATerm), ATerm d_27, ATerm b_27, ATerm);
ATerm j_14 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm k_14 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm m_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm s_14 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm u_14 (ATerm);
ATerm v_14 (ATerm);
ATerm y_14 (ATerm);
ATerm w_15 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm n_6 (ATerm g_79 (ATerm), ATerm v_21, ATerm u_21, ATerm);
ATerm foldr_3_0 (ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm o_6 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm z_21, ATerm y_21, ATerm);
ATerm p_6 (ATerm b_79 (ATerm), ATerm t_21, ATerm s_21, ATerm);
ATerm at_end_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm l_84 (ATerm d_84, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm i_16 (ATerm);
ATerm t_6 (ATerm m_611, ATerm r_611, ATerm p_57, ATerm);
ATerm while_not_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm);
ATerm for_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm j_16 (ATerm);
ATerm l_16 (ATerm);
ATerm n_16 (ATerm);
ATerm f_87 (ATerm u_85, ATerm v_85, ATerm w_85, ATerm);
ATerm p_16 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm u_16 (ATerm);
ATerm x_16 (ATerm);
ATerm z_16 (ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm free_vars_3_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm v_6 (ATerm q_27, ATerm r_27, ATerm);
ATerm end_scope_1_0 (ATerm a_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm);
ATerm w_6 (ATerm c_29, ATerm d_29, ATerm);
ATerm begin_scope_1_0 (ATerm z_82 (ATerm), ATerm);
ATerm scope_2_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm);
ATerm w_17 (ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm e_18 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm filter_1_0 (ATerm z_88 (ATerm), ATerm);
ATerm x_6 (ATerm p_25, ATerm q_25, ATerm);
ATerm do_test_2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm debug_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm h_18 (ATerm);
ATerm i_18 (ATerm);
ATerm k_18 (ATerm);
ATerm test_suite_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm l_18 (ATerm);
ATerm m_18 (ATerm);
ATerm use_def_test_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_n_18;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_r_18, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_t_18), (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATinsert(ATempty, term_b_19), term_a_19), term_i_19), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, term_b_19), term_i_19)));
      {
        ATerm j_19 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_19;
          }
      }
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        t = term_k_19;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        b_0 = t;
        t = SSL_printnl(a_0, b_0);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_u_19, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_x_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_a_20)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_u_19, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_x_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_a_20)));
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm f_0 = NULL,g_0 = NULL;
        t = term_k_19;
        f_0 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        g_0 = t;
        t = SSL_printnl(f_0, g_0);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_u_19, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_g_20, (ATerm) ATmakeAppl(sym_CallT_3, term_x_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_a_20))));
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
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm i_0 = NULL,k_0 = NULL;
        t = term_k_19;
        i_0 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        k_0 = t;
        t = SSL_printnl(i_0, k_0);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test14_0_0 (ATerm t)
{
  t = do_test_2_0(e_1, f_1, t);
  t = do_test_2_0(m_1, p_1, t);
  t = do_test_2_0(q_1, s_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_l_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_m_20, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_r_20), term_t_20)), (ATerm) ATmakeAppl(sym_CallT_3, term_u_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_v_20))));
      {
        ATerm w_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_20;
          }
      }
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm m_0 = NULL,n_0 = NULL;
        t = term_k_19;
        m_0 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        n_0 = t;
        t = SSL_printnl(m_0, n_0);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_21;
      t = def_use_def_0_0(t);
      t = term_b_21;
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm p_0 = NULL,r_0 = NULL;
        t = term_k_19;
        p_0 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        r_0 = t;
        t = SSL_printnl(p_0, r_0);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_l_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_l_21), term_a_21));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_l_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_l_21), term_a_21));
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm t_0 = NULL,v_0 = NULL;
        t = term_k_19;
        t_0 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        v_0 = t;
        t = SSL_printnl(t_0, v_0);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test13_0_0 (ATerm t)
{
  t = do_test_2_0(w_1, x_1, t);
  t = do_test_2_0(y_1, z_1, t);
  t = do_test_2_0(a_2, p_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_w_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_a_22, (ATerm) ATinsert(ATempty, term_d_22)), (ATerm)ATmakeAppl(sym_Call_2, term_a_22, (ATerm) ATinsert(ATempty, term_e_22)), term_k_21));
      {
        ATerm f_22 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_22;
          }
      }
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm x_0 = NULL,z_0 = NULL;
        t = term_k_19;
        x_0 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        z_0 = t;
        t = SSL_printnl(x_0, z_0);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(u_2, v_2, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_22), term_a_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_r_22), term_q_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_22), term_a_20))), term_q_22))))));
      {
        ATerm s_22 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_22;
          }
      }
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm b_1 = NULL,c_1 = NULL;
        t = term_k_19;
        b_1 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        c_1 = t;
        t = SSL_printnl(b_1, c_1);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm u_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 = NULL,h_1 = NULL,d_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_a_23, (ATerm)ATinsert(ATempty, term_d_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_22), term_a_20)), (ATerm)ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_f_23), term_a_20))), term_q_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_g_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_i_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_r_22), term_q_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_k_23, (ATerm) ATmakeAppl(sym_Op_2, term_l_23, (ATerm) ATinsert(ATinsert(ATempty, term_q_22), term_a_20)))), term_m_23))))), term_n_23))))));
      h_1 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm o_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_a_23, (ATerm)ATinsert(ATempty, term_d_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_22), term_a_20)), (ATerm)ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_f_23), term_a_20))), term_q_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_g_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_i_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_r_22), term_q_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_k_23, (ATerm) ATmakeAppl(sym_Op_2, term_l_23, (ATerm) ATinsert(ATinsert(ATempty, term_q_22), term_a_20)))), term_m_23))))), term_n_23)))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_a_23, (ATerm)ATinsert(ATempty, term_d_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_22), term_a_20)), (ATerm)ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_f_23), term_a_20))), term_q_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_g_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_i_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, term_r_22), term_q_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_k_23, (ATerm) ATmakeAppl(sym_Op_2, term_l_23, (ATerm) ATinsert(ATinsert(ATempty, term_q_22), term_a_20)))), term_m_23))))), term_n_23))))));
      d_0 = t;
      t = SSLsetAnnotations(d_0, d_1);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = u_22;
      {
        ATerm j_1 = NULL,l_1 = NULL;
        t = term_k_19;
        j_1 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        l_1 = t;
        t = SSL_printnl(j_1, l_1);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(w_2, y_2, t);
  t = do_test_2_0(q_3, v_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_l_22, (ATerm)ATinsert(ATinsert(ATempty, term_w_23), term_b_22), (ATerm) ATmakeAppl(sym_Op_2, term_a_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_24), term_c_24), term_c_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_m_20, (ATerm)ATinsert(ATinsert(ATempty, term_w_23), term_b_22), (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, term_v_20), term_c_22)))))));
      {
        ATerm j_24 = t;
        if((PushChoice() == 0))
          {
            ATerm n_1 = NULL,o_1 = NULL,r_1 = NULL,p_4 = NULL;
            r_1 = t;
            if(match_cons(t, sym_Overlays_1))
              {
                o_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_1);
            n_1 = t;
            t = o_1;
            {
              ATerm l_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_1;
                  ;
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = l_24;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_1;
                }
              t = (ATerm) ATmakeAppl(sym_Overlays_1, o_1);
              p_4 = t;
              t = SSLsetAnnotations(p_4, n_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_24;
          }
      }
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm t_1 = NULL,u_1 = NULL;
        t = term_k_19;
        t_1 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        u_1 = t;
        t = SSL_printnl(t_1, u_1);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm q_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 = NULL,b_2 = NULL,q_4 = NULL;
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_l_22, (ATerm)ATinsert(ATinsert(ATempty, term_w_23), term_b_22), (ATerm) ATmakeAppl(sym_Op_2, term_a_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), term_c_24), term_c_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_m_20, (ATerm)ATinsert(ATinsert(ATempty, term_w_23), term_b_22), (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, term_v_20), term_c_22)))))));
      b_2 = t;
      if(match_cons(t, sym_Overlays_1))
        {
          ATerm x_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_2);
      v_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_l_22, (ATerm)ATinsert(ATinsert(ATempty, term_w_23), term_b_22), (ATerm) ATmakeAppl(sym_Op_2, term_a_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), term_c_24), term_c_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_m_20, (ATerm)ATinsert(ATinsert(ATempty, term_w_23), term_b_22), (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, term_v_20), term_c_22))))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_l_22, (ATerm)ATinsert(ATinsert(ATempty, term_w_23), term_b_22), (ATerm) ATmakeAppl(sym_Op_2, term_a_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), term_c_24), term_c_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_m_20, (ATerm)ATinsert(ATinsert(ATempty, term_w_23), term_b_22), (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, term_v_20), term_c_22)))))));
      q_4 = t;
      t = SSLsetAnnotations(q_4, v_1);
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = q_24;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = term_k_19;
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        d_2 = t;
        t = SSL_printnl(c_2, d_2);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(w_3, x_3, t);
  t = do_test_2_0(z_3, a_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_i_24), term_y_23)), term_c_26)));
      {
        ATerm d_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_26;
          }
      }
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm e_2 = NULL,f_2 = NULL;
        t = term_k_19;
        e_2 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        f_2 = t;
        t = SSL_printnl(e_2, f_2);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm g_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_i_24), term_y_23)), term_k_21)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_i_24), term_y_23)), term_k_21)));
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = g_26;
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = term_k_19;
        g_2 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        h_2 = t;
        t = SSL_printnl(g_2, h_2);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(c_4, j_4, t);
  t = do_test_2_0(k_4, l_4, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm s_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_i_24), term_y_23)), term_c_26));
      {
        ATerm y_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_26;
          }
      }
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = s_26;
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_k_19;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm a_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_i_24), term_y_23)), term_k_21));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22)), (ATerm)ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_i_24), term_y_23)), term_k_21));
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = a_27;
      {
        ATerm k_2 = NULL,l_2 = NULL;
        t = term_k_19;
        k_2 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        l_2 = t;
        t = SSL_printnl(k_2, l_2);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(m_4, n_4, t);
  t = do_test_2_0(o_4, r_4, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATempty, term_y_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATempty, term_c_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATempty, term_c_22))))));
      {
        ATerm j_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_27;
          }
      }
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm m_2 = NULL,n_2 = NULL;
        t = term_k_19;
        m_2 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        n_2 = t;
        t = SSL_printnl(m_2, n_2);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATempty, term_c_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATempty, term_c_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22)))));
      {
        ATerm b_28 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_28;
          }
      }
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm o_2 = NULL,q_2 = NULL;
        t = term_k_19;
        o_2 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        q_2 = t;
        t = SSL_printnl(o_2, q_2);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATempty, term_c_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATempty, term_c_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATempty, term_c_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATempty, term_c_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))))));
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm r_2 = NULL,s_2 = NULL;
        t = term_k_19;
        r_2 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        s_2 = t;
        t = SSL_printnl(r_2, s_2);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(s_4, t_4, t);
  t = do_test_2_0(x_4, y_4, t);
  t = do_test_2_0(z_4, b_5, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm j_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_r_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATempty, term_c_22)))));
      {
        ATerm h_30 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_30;
          }
      }
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = j_29;
      {
        ATerm t_2 = NULL,x_2 = NULL;
        t = term_k_19;
        t_2 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        x_2 = t;
        t = SSL_printnl(t_2, x_2);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm m_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_e_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATempty, term_c_22)))));
      {
        ATerm f_31 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_31;
          }
      }
      ;
      LocalPopChoice(o_30);
    }
  else
    {
      t = m_30;
      {
        ATerm z_2 = NULL,a_3 = NULL;
        t = term_k_19;
        z_2 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        a_3 = t;
        t = SSL_printnl(z_2, a_3);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(c_5, d_5, t);
  t = do_test_2_0(g_5, j_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm h_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATempty, term_c_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATempty, term_c_22)))));
      {
        ATerm n_31 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_31;
          }
      }
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = h_31;
      {
        ATerm b_3 = NULL,d_3 = NULL;
        t = term_k_19;
        b_3 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        d_3 = t;
        t = SSL_printnl(b_3, d_3);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm p_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATempty, term_c_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22)))));
      {
        ATerm u_31 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_31;
          }
      }
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = p_31;
      {
        ATerm f_3 = NULL,g_3 = NULL;
        t = term_k_19;
        f_3 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        g_3 = t;
        t = SSL_printnl(f_3, g_3);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(k_5, n_5, t);
  t = do_test_2_0(r_5, s_5, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_d_32, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_z_31), term_k_32))), term_i_32)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_d_32, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_z_31), term_k_32))), term_i_32)))));
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm h_3 = NULL,j_3 = NULL;
        t = term_k_19;
        h_3 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        j_3 = t;
        t = SSL_printnl(h_3, j_3);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_d_32, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_o_32), term_i_32)))));
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
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      {
        ATerm k_3 = NULL,l_3 = NULL;
        t = term_k_19;
        k_3 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        l_3 = t;
        t = SSL_printnl(k_3, l_3);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_z_31), term_k_32))), term_i_32))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_z_31), term_k_32))), term_i_32))));
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
        ATerm n_3 = NULL,o_3 = NULL;
        t = term_k_19;
        n_3 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        o_3 = t;
        t = SSL_printnl(n_3, o_3);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(e_6, f_6, t);
  t = do_test_2_0(j_6, k_6, t);
  t = do_test_2_0(l_6, m_6, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_23), (ATerm) ATmakeAppl(sym_Seq_2, term_w_32, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATempty, term_y_23))), term_c_22)))))));
      {
        ATerm x_32 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_32;
          }
      }
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm p_3 = NULL,r_3 = NULL;
        t = term_k_19;
        p_3 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        r_3 = t;
        t = SSL_printnl(p_3, r_3);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_23), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, term_c_33), term_c_22))), term_y_23))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_23), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, term_c_33), term_c_22))), term_y_23))))));
      ;
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      {
        ATerm s_3 = NULL,t_3 = NULL;
        t = term_k_19;
        s_3 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        t_3 = t;
        t = SSL_printnl(s_3, t_3);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(q_6, s_6, t);
  t = do_test_2_0(k_7, m_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATempty, term_y_23))), term_c_22)))));
      {
        ATerm g_33 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_33;
          }
      }
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm u_3 = NULL,y_3 = NULL;
        t = term_k_19;
        u_3 = t;
        t = (ATerm) ATinsert(ATempty, term_m_19);
        y_3 = t;
        t = SSL_printnl(u_3, y_3);
        t = term_m_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, term_c_33), term_c_22))), term_y_23)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, term_c_33), term_c_22))), term_y_23)))));
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      {
        ATerm b_4 = NULL,d_4 = NULL;
        t = term_k_19;
        b_4 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        d_4 = t;
        t = SSL_printnl(b_4, d_4);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(n_7, s_7, t);
  t = do_test_2_0(z_7, a_8, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm t_5 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  e_4 = t;
  t = (ATerm) ATempty;
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_33, e_21);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_33, e_21));
  t = i_6(b_8, h_4, i_4, t);
  t = (ATerm) ATempty;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_33, e_21);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_33, e_21));
  t = i_6(c_8, f_4, g_4, t);
  t = f_21;
  t = use_vars_0_0(t);
  t = e_4;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm l_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
  r_7 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
      v_7 = ATgetArgument(t, 2);
      l_7 = ATgetArgument(t, 3);
      t = l_7;
      if(match_cons(t, sym_StratRule_3))
        {
          o_7 = ATgetArgument(t, 0);
          p_7 = ATgetArgument(t, 1);
          q_7 = ATgetArgument(t, 2);
          {
            ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,o_8 = NULL;
            t = (ATerm) ATempty;
            l_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_33, t_7);
            o_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_33, t_7));
            t = i_6(d_8, l_8, o_8, t);
            t = (ATerm) ATempty;
            j_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_33, t_7);
            k_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_33, t_7));
            t = i_6(e_8, j_8, k_8, t);
            t = (ATerm) ATmakeAppl(sym__3, o_7, p_7, q_7);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, t_7, u_7, v_7, (ATerm) ATmakeAppl(sym_StratRule_3, o_7, p_7, q_7));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              o_7 = ATgetArgument(t, 0);
              p_7 = ATgetArgument(t, 1);
              q_7 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = r_7;
          {
            ATerm t_33 = t;
            int u_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_3 = NULL,e_3 = NULL,i_3 = NULL,m_3 = NULL;
                t = (ATerm) ATempty;
                i_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_33, t_7);
                m_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_33, t_7));
                t = i_6(f_8, i_3, m_3, t);
                t = (ATerm) ATempty;
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_33, t_7);
                e_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_33, t_7));
                t = i_6(g_8, c_3, e_3, t);
                t = o_7;
                t = bind_vars_0_0(t);
                ;
                LocalPopChoice(u_33);
              }
            else
              {
                t = t_33;
                {
                  ATerm x_33 = t;
                  int y_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = q_7;
                      t = unbound_vars_0_0(t);
                      ;
                      LocalPopChoice(y_33);
                    }
                  else
                    {
                      t = x_33;
                      t = p_7;
                      t = use_vars_0_0(t);
                    }
                }
              }
            t = (ATerm) ATmakeAppl(sym_RDefT_4, t_7, u_7, v_7, (ATerm) ATmakeAppl(sym_Rule_3, o_7, p_7, q_7));
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          t_7 = ATgetArgument(t, 0);
          u_7 = ATgetArgument(t, 1);
          v_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_7;
      if(match_cons(t, sym_Rule_3))
        {
          w_7 = ATgetArgument(t, 0);
          x_7 = ATgetArgument(t, 1);
          y_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_7;
      {
        ATerm z_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_5 = NULL,f_5 = NULL,h_5 = NULL,i_5 = NULL;
            t = (ATerm) ATempty;
            h_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_34, t_7);
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_34, t_7));
            t = i_6(h_8, h_5, i_5, t);
            t = (ATerm) ATempty;
            e_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_34, t_7);
            f_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_34, t_7));
            t = i_6(i_8, e_5, f_5, t);
            t = w_7;
            t = bind_vars_0_0(t);
            ;
            LocalPopChoice(a_34);
          }
        else
          {
            t = z_33;
            {
              ATerm e_34 = t;
              int f_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_7;
                  t = unbound_vars_0_0(t);
                  ;
                  LocalPopChoice(f_34);
                }
              else
                {
                  t = e_34;
                  t = x_7;
                  t = use_vars_0_0(t);
                }
            }
          }
        t = (ATerm) ATmakeAppl(sym_RDef_3, t_7, u_7, (ATerm) ATmakeAppl(sym_Rule_3, w_7, x_7, y_7));
      }
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL,y_8 = NULL,z_8 = NULL;
        t = (ATerm) ATempty;
        y_8 = t;
        t = term_k_33;
        z_8 = t;
        t = term_i_34;
        t = g_6(z_8, y_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_34) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            w_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_9), term_m_34), w_8), term_l_34);
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        {
          ATerm p_34 = t;
          int q_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_9 = NULL,g_10 = NULL,h_10 = NULL;
              t = (ATerm) ATempty;
              g_10 = t;
              t = term_k_33;
              h_10 = t;
              t = term_i_34;
              t = g_6(h_10, g_10, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm r_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_34) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  r_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_9), term_m_34), r_9), term_s_34);
              ;
              LocalPopChoice(q_34);
            }
          else
            {
              t = p_34;
              {
                ATerm t_34 = t;
                int v_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_10 = NULL,n_10 = NULL,o_10 = NULL;
                    t = (ATerm) ATempty;
                    n_10 = t;
                    t = term_k_33;
                    o_10 = t;
                    t = term_i_34;
                    t = g_6(o_10, n_10, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm y_34 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) y_34) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        l_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_9), term_m_34), l_10), term_s_34);
                    ;
                    LocalPopChoice(v_34);
                  }
                else
                  {
                    t = t_34;
                    {
                      ATerm z_34 = t;
                      int a_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_11 = NULL,k_11 = NULL,q_11 = NULL;
                          t = (ATerm) ATempty;
                          k_11 = t;
                          t = term_k_33;
                          q_11 = t;
                          t = term_i_34;
                          t = g_6(q_11, k_11, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm b_35 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) b_35) != ATmakeSymbol("l_0", 0, ATtrue)))
                                _fail(t);
                              b_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_9), term_m_34), b_11), term_s_34);
                          ;
                          LocalPopChoice(a_35);
                        }
                      else
                        {
                          t = z_34;
                          {
                            ATerm d_35 = t;
                            int h_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_12 = NULL,i_12 = NULL,j_12 = NULL;
                                t = (ATerm) ATempty;
                                i_12 = t;
                                t = term_k_33;
                                j_12 = t;
                                t = term_i_34;
                                t = g_6(j_12, i_12, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm i_35 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) i_35) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    d_12 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_9), term_m_34), d_12), term_l_35);
                                ;
                                LocalPopChoice(h_35);
                              }
                            else
                              {
                                t = d_35;
                                {
                                  ATerm w_12 = NULL,y_12 = NULL,g_13 = NULL;
                                  t = (ATerm) ATempty;
                                  y_12 = t;
                                  t = term_k_33;
                                  g_13 = t;
                                  t = term_i_34;
                                  t = g_6(g_13, y_12, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm m_35 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) m_35) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      w_12 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_9), term_m_34), w_12), term_l_35);
                                }
                              }
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
ATerm u_5 (ATerm o_21, ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_35), o_21), term_r_35);
  t = Context_0_0(t);
  e_10 = t;
  t = term_k_19;
  f_10 = t;
  t = SSL_printnl(f_10, e_10);
  t = e_10;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  {
    ATerm w_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_14 = NULL,z_14 = NULL,q_15 = NULL;
        t = (ATerm) ATempty;
        z_14 = t;
        t = term_n_33;
        q_15 = t;
        t = term_z_35;
        t = g_6(q_15, z_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm a_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_36) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            w_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_d_36), w_14), term_c_36);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = w_35;
        {
          ATerm e_36 = t;
          int f_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_16 = NULL,v_16 = NULL,w_16 = NULL;
              t = (ATerm) ATempty;
              v_16 = t;
              t = term_n_33;
              w_16 = t;
              t = term_z_35;
              t = g_6(w_16, v_16, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm g_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_36) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  q_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_d_36), q_16), term_h_36);
              ;
              LocalPopChoice(f_36);
            }
          else
            {
              t = e_36;
              {
                ATerm i_36 = t;
                int k_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_17 = NULL,n_17 = NULL,o_17 = NULL;
                    t = (ATerm) ATempty;
                    n_17 = t;
                    t = term_n_33;
                    o_17 = t;
                    t = term_z_35;
                    t = g_6(o_17, n_17, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm l_36 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) l_36) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        i_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_d_36), i_17), term_h_36);
                    ;
                    LocalPopChoice(k_36);
                  }
                else
                  {
                    t = i_36;
                    {
                      ATerm n_36 = t;
                      int o_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_18 = NULL,o_18 = NULL,v_18 = NULL;
                          t = (ATerm) ATempty;
                          o_18 = t;
                          t = term_n_33;
                          v_18 = t;
                          t = term_z_35;
                          t = g_6(v_18, o_18, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm p_36 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) p_36) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              j_18 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_d_36), j_18), term_h_36);
                          ;
                          LocalPopChoice(o_36);
                        }
                      else
                        {
                          t = n_36;
                          {
                            ATerm q_36 = t;
                            int r_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_19 = NULL,f_19 = NULL,g_19 = NULL;
                                t = (ATerm) ATempty;
                                f_19 = t;
                                t = term_n_33;
                                g_19 = t;
                                t = term_z_35;
                                t = g_6(g_19, f_19, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm s_36 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) s_36) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    c_19 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_d_36), c_19), term_t_36);
                                ;
                                LocalPopChoice(r_36);
                              }
                            else
                              {
                                t = q_36;
                                {
                                  ATerm l_19 = NULL,n_19 = NULL,p_19 = NULL;
                                  t = (ATerm) ATempty;
                                  n_19 = t;
                                  t = term_n_33;
                                  p_19 = t;
                                  t = term_z_35;
                                  t = g_6(p_19, n_19, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm v_36 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) v_36) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      l_19 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_d_36), l_19), term_t_36);
                                }
                              }
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
ATerm v_5 (ATerm p_21, ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_36), p_21), term_r_35);
  t = Warning_0_0(t);
  w_11 = t;
  t = term_k_19;
  x_11 = t;
  t = SSL_printnl(x_11, w_11);
  t = w_11;
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  ATerm x_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_12 = NULL,e_12 = NULL;
      c_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      e_12 = t;
      t = SSLgetAnnotations(c_12);
      a_12 = t;
      t = e_12;
      LocalPopChoice(y_36);
      {
        ATerm f_12 = NULL;
        f_12 = t;
        t = a_12;
        {
          ATerm z_36 = t;
          int c_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_37 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) e_37) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm f_37 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(f_37) != AT_LIST) || !(ATisEmpty(f_37))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(c_37);
              _fail(t);
            }
          else
            {
              t = z_36;
              {
                ATerm g_37 = t;
                int h_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm i_37 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) i_37) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm k_37 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(k_37) != AT_LIST) || !(ATisEmpty(k_37))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_37);
                    t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
                    t = v_5(b_12, t);
                    _fail(t);
                  }
                else
                  {
                    t = g_37;
                    {
                      ATerm m_37 = t;
                      int n_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm r_37 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) r_37) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm u_37 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(u_37) != AT_LIST) || !(ATisEmpty(u_37))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(n_37);
                          t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
                          t = u_5(b_12, t);
                        }
                      else
                        {
                          t = m_37;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
                          t = u_5(b_12, t);
                        }
                    }
                  }
              }
            }
          t = f_12;
        }
      }
    }
  else
    {
      t = x_36;
      {
        ATerm v_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,u_4 = NULL;
            n_12 = t;
            if(match_cons(t, sym_App_2))
              {
                l_12 = ATgetArgument(t, 0);
                m_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_12);
            h_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, l_12, m_12);
            u_4 = t;
            t = SSLsetAnnotations(u_4, h_12);
            LocalPopChoice(a_38);
            {
              ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,v_4 = NULL;
              v_12 = t;
              if(match_cons(t, sym_App_2))
                {
                  p_12 = ATgetArgument(t, 0);
                  q_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_12);
              o_12 = t;
              t = p_12;
              t = unbound_vars_0_0(t);
              t_12 = t;
              t = q_12;
              t = use_vars_0_0(t);
              u_12 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, t_12, u_12);
              v_4 = t;
              t = SSLsetAnnotations(v_4, o_12);
            }
          }
        else
          {
            t = v_37;
            {
              ATerm b_38 = t;
              int c_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,w_4 = NULL;
                  b_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      a_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_13);
                  z_12 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, a_13);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, z_12);
                  LocalPopChoice(c_38);
                  {
                    ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,a_5 = NULL;
                    f_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        d_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(f_13);
                    c_13 = t;
                    t = d_13;
                    t = unbound_vars_0_0(t);
                    e_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, e_13);
                    a_5 = t;
                    t = SSLsetAnnotations(a_5, c_13);
                  }
                }
              else
                {
                  t = b_38;
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
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_5 = NULL;
      k_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          j_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_13);
      i_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_13);
      l_5 = t;
      t = SSLsetAnnotations(l_5, i_13);
      LocalPopChoice(e_38);
      _fail(t);
    }
  else
    {
      t = d_38;
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,m_5 = NULL;
            o_13 = t;
            if(match_cons(t, sym_App_2))
              {
                m_13 = ATgetArgument(t, 0);
                n_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_13);
            l_13 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, m_13, n_13);
            m_5 = t;
            t = SSLsetAnnotations(m_5, l_13);
            LocalPopChoice(g_38);
            {
              ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,v_13 = NULL,w_13 = NULL,o_5 = NULL;
              w_13 = t;
              if(match_cons(t, sym_App_2))
                {
                  q_13 = ATgetArgument(t, 0);
                  r_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_13);
              p_13 = t;
              t = q_13;
              t = unbound_vars_0_0(t);
              s_13 = t;
              t = r_13;
              t = use_vars_0_0(t);
              v_13 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, s_13, v_13);
              o_5 = t;
              t = SSLsetAnnotations(o_5, p_13);
            }
          }
        else
          {
            t = f_38;
            {
              ATerm h_38 = t;
              int i_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_13 = NULL,a_14 = NULL,c_14 = NULL,p_5 = NULL;
                  c_14 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      a_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_14);
                  x_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, a_14);
                  p_5 = t;
                  t = SSLsetAnnotations(p_5, x_13);
                  LocalPopChoice(i_38);
                  {
                    ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,q_5 = NULL;
                    i_14 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        g_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(i_14);
                    f_14 = t;
                    t = g_14;
                    t = unbound_vars_0_0(t);
                    h_14 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, h_14);
                    q_5 = t;
                    t = SSLsetAnnotations(q_5, f_14);
                  }
                }
              else
                {
                  t = h_38;
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
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_14 = NULL,a_15 = NULL,b_15 = NULL,r_6 = NULL;
      b_15 = t;
      if(match_cons(t, sym_Build_1))
        {
          a_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_15);
      x_14 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, a_15);
      r_6 = t;
      t = SSLsetAnnotations(r_6, x_14);
      LocalPopChoice(k_38);
      {
        ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,u_6 = NULL;
        f_15 = t;
        if(match_cons(t, sym_Build_1))
          {
            d_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_15);
        c_15 = t;
        t = d_15;
        t = use_vars_0_0(t);
        e_15 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, e_15);
        u_6 = t;
        t = SSLsetAnnotations(u_6, c_15);
      }
    }
  else
    {
      t = j_38;
      {
        ATerm m_38 = t;
        int n_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,y_6 = NULL;
            i_15 = t;
            if(match_cons(t, sym_Match_1))
              {
                h_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_15);
            g_15 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, h_15);
            y_6 = t;
            t = SSLsetAnnotations(y_6, g_15);
            LocalPopChoice(n_38);
            {
              ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,z_6 = NULL;
              m_15 = t;
              if(match_cons(t, sym_Match_1))
                {
                  k_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_15);
              j_15 = t;
              t = k_15;
              t = bind_vars_0_0(t);
              l_15 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, l_15);
              z_6 = t;
              t = SSLsetAnnotations(z_6, j_15);
            }
          }
        else
          {
            t = m_38;
            {
              ATerm o_38 = t;
              int p_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,s_15 = NULL,t_15 = NULL,a_7 = NULL;
                  t_15 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      o_15 = ATgetArgument(t, 0);
                      p_15 = ATgetArgument(t, 1);
                      s_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_15);
                  n_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, o_15, p_15, s_15);
                  a_7 = t;
                  t = SSLsetAnnotations(a_7, n_15);
                  LocalPopChoice(p_38);
                  {
                    ATerm h_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
                    h_17 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        k_17 = ATgetArgument(t, 0);
                        l_17 = ATgetArgument(t, 1);
                        m_17 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm q_38 = t;
                      int r_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_19 = NULL,b_20 = NULL,b_7 = NULL;
                          t = SSLgetAnnotations(h_17);
                          w_19 = t;
                          t = k_17;
                          t = bind_vars_0_0(t);
                          b_20 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, b_20, l_17, m_17);
                          b_7 = t;
                          t = SSLsetAnnotations(b_7, w_19);
                          ;
                          LocalPopChoice(r_38);
                        }
                      else
                        {
                          t = q_38;
                          {
                            ATerm s_38 = t;
                            int t_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_20 = NULL,s_20 = NULL,c_7 = NULL;
                                t = SSLgetAnnotations(h_17);
                                n_20 = t;
                                t = m_17;
                                t = unbound_vars_0_0(t);
                                s_20 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, k_17, l_17, s_20);
                                c_7 = t;
                                t = SSLsetAnnotations(c_7, n_20);
                                ;
                                LocalPopChoice(t_38);
                              }
                            else
                              {
                                t = s_38;
                                {
                                  ATerm i_21 = NULL,n_21 = NULL,d_7 = NULL;
                                  t = SSLgetAnnotations(h_17);
                                  i_21 = t;
                                  t = l_17;
                                  t = use_vars_0_0(t);
                                  n_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, k_17, n_21, m_17);
                                  d_7 = t;
                                  t = SSLsetAnnotations(d_7, i_21);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = o_38;
                  {
                    ATerm u_38 = t;
                    int v_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,e_7 = NULL;
                        t_17 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            q_17 = ATgetArgument(t, 0);
                            r_17 = ATgetArgument(t, 1);
                            s_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(t_17);
                        p_17 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, q_17, r_17, s_17);
                        e_7 = t;
                        t = SSLsetAnnotations(e_7, p_17);
                        LocalPopChoice(v_38);
                        {
                          ATerm u_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
                          u_18 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              x_18 = ATgetArgument(t, 0);
                              y_18 = ATgetArgument(t, 1);
                              z_18 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm w_38 = t;
                            int y_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_22 = NULL,c_23 = NULL,f_7 = NULL;
                                t = SSLgetAnnotations(u_18);
                                o_22 = t;
                                t = y_18;
                                t = unbound_vars_0_0(t);
                                c_23 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, x_18, c_23, z_18);
                                f_7 = t;
                                t = SSLsetAnnotations(f_7, o_22);
                                ;
                                LocalPopChoice(y_38);
                              }
                            else
                              {
                                t = w_38;
                                {
                                  ATerm z_23 = NULL,k_24 = NULL,g_7 = NULL;
                                  t = SSLgetAnnotations(u_18);
                                  z_23 = t;
                                  t = z_18;
                                  t = use_vars_0_0(t);
                                  k_24 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, x_18, y_18, k_24);
                                  g_7 = t;
                                  t = SSLsetAnnotations(g_7, z_23);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = u_38;
                        {
                          ATerm z_38 = t;
                          int b_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_19 = NULL,h_19 = NULL,o_19 = NULL,r_19 = NULL,z_19 = NULL,h_7 = NULL;
                              z_19 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  h_19 = ATgetArgument(t, 0);
                                  o_19 = ATgetArgument(t, 1);
                                  r_19 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(z_19);
                              e_19 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, h_19, o_19, r_19);
                              h_7 = t;
                              t = SSLsetAnnotations(h_7, e_19);
                              LocalPopChoice(b_39);
                              {
                                ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
                                v_22 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    x_22 = ATgetArgument(t, 1);
                                    y_22 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm c_39 = t;
                                  int d_39 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm o_25 = NULL,z_25 = NULL,i_7 = NULL;
                                      t = SSLgetAnnotations(v_22);
                                      o_25 = t;
                                      t = x_22;
                                      t = unbound_vars_0_0(t);
                                      z_25 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, w_22, z_25, y_22);
                                      i_7 = t;
                                      t = SSLsetAnnotations(i_7, o_25);
                                      ;
                                      LocalPopChoice(d_39);
                                    }
                                  else
                                    {
                                      t = c_39;
                                      {
                                        ATerm x_26 = NULL,c_27 = NULL,j_7 = NULL;
                                        t = SSLgetAnnotations(v_22);
                                        x_26 = t;
                                        t = y_22;
                                        t = use_vars_0_0(t);
                                        c_27 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, w_22, x_22, c_27);
                                        j_7 = t;
                                        t = SSLsetAnnotations(j_7, x_26);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = z_38;
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
ATerm m_8 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm p_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      v_23 = ATgetArgument(t, 2);
      p_23 = ATgetArgument(t, 3);
      {
        ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
        t = (ATerm) ATempty;
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_39, t_23);
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_39, t_23));
        t = i_6(m_8, f_24, g_24, t);
        t = (ATerm) ATempty;
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_39, t_23);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_39, t_23));
        t = i_6(n_8, d_24, e_24, t);
        t = p_23;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_23, u_23, v_23, p_23);
      }
    }
  else
    {
      ATerm m_24 = NULL,n_24 = NULL,r_24 = NULL,s_24 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          t_23 = ATgetArgument(t, 0);
          u_23 = ATgetArgument(t, 1);
          v_23 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      r_24 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_39, t_23);
      s_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_39, t_23));
      t = i_6(p_8, r_24, s_24, t);
      t = (ATerm) ATempty;
      m_24 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_39, t_23);
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_39, t_23));
      t = i_6(q_8, m_24, n_24, t);
      t = v_23;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, t_23, u_23, v_23);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,y_24 = NULL,z_24 = NULL,t_8 = NULL;
  ATerm r_8 (ATerm t)
  {
    ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,e_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,s_25 = NULL,t_25 = NULL,b_9 = NULL,a_9 = NULL;
    t_25 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        k_25 = ATgetArgument(t, 0);
        l_25 = ATgetArgument(t, 1);
        m_25 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_25);
    j_25 = t;
    t = k_25;
    t = j_109(t);
    n_25 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_25, l_25, m_25);
    a_9 = t;
    t = SSLsetAnnotations(a_9, j_25);
    s_25 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        b_25 = ATgetArgument(t, 0);
        c_25 = ATgetArgument(t, 1);
        e_25 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_25);
    a_25 = t;
    t = c_25;
    t = j_109(t);
    i_25 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, b_25, i_25, e_25);
    b_9 = t;
    t = SSLsetAnnotations(b_9, a_25);
    return(t);
  }
  ATerm s_8 (ATerm t)
  {
    ATerm u_25 = NULL,w_25 = NULL,x_25 = NULL,a_26 = NULL,f_26 = NULL,h_26 = NULL,c_9 = NULL;
    h_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        w_25 = ATgetArgument(t, 0);
        x_25 = ATgetArgument(t, 1);
        a_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_26);
    u_25 = t;
    t = a_26;
    t = j_109(t);
    f_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_25, x_25, f_26);
    c_9 = t;
    t = SSLsetAnnotations(c_9, u_25);
    return(t);
  }
  z_24 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      u_24 = ATgetArgument(t, 0);
      v_24 = ATgetArgument(t, 1);
      y_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_24);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_24, v_24, y_24);
  t_8 = t;
  t = SSLsetAnnotations(t_8, t_24);
  t = abstract_choice_2_0(r_8, s_8, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,j_9 = NULL;
  ATerm u_8 (ATerm t)
  {
    ATerm m_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL,k_9 = NULL;
    t_26 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        p_26 = ATgetArgument(t, 0);
        q_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_26);
    m_26 = t;
    t = p_26;
    t = i_109(t);
    r_26 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_26, q_26);
    k_9 = t;
    t = SSLsetAnnotations(k_9, m_26);
    return(t);
  }
  ATerm v_8 (ATerm t)
  {
    ATerm u_26 = NULL,v_26 = NULL,g_27 = NULL,s_27 = NULL,t_27 = NULL,l_9 = NULL;
    t_27 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        v_26 = ATgetArgument(t, 0);
        g_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_27);
    u_26 = t;
    t = g_27;
    t = i_109(t);
    s_27 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, v_26, s_27);
    l_9 = t;
    t = SSLsetAnnotations(l_9, u_26);
    return(t);
  }
  l_26 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      j_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, j_26, k_26);
  j_9 = t;
  t = SSLsetAnnotations(j_9, i_26);
  t = abstract_choice_2_0(u_8, v_8, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,h_28 = NULL,i_28 = NULL;
  e_28 = t;
  t = save_MarkVar_0_0(t);
  u_27 = t;
  t = e_28;
  t = k_109(t);
  d_28 = t;
  t = save_MarkVar_0_0(t);
  v_27 = t;
  t = term_m_39;
  i_28 = t;
  t = SSL_table_destroy(i_28);
  t = term_m_39;
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_39, u_27);
  t = c_6(h_28, u_27, t);
  t = d_28;
  t = l_109(t);
  c_28 = t;
  t = v_27;
  t = isect_MarkVar_0_0(t);
  t = c_28;
  return(t);
}
ATerm mark_choice_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,s_28 = NULL,v_28 = NULL,z_28 = NULL,p_9 = NULL;
  ATerm x_8 (ATerm t)
  {
    ATerm g_29 = NULL,k_29 = NULL,q_29 = NULL,y_29 = NULL,z_29 = NULL,q_9 = NULL;
    z_29 = t;
    if(match_cons(t, sym_Choice_2))
      {
        k_29 = ATgetArgument(t, 0);
        q_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_29);
    g_29 = t;
    t = k_29;
    t = h_109(t);
    y_29 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, y_29, q_29);
    q_9 = t;
    t = SSLsetAnnotations(q_9, g_29);
    return(t);
  }
  ATerm d_9 (ATerm t)
  {
    ATerm a_30 = NULL,b_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,t_9 = NULL;
    f_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        b_30 = ATgetArgument(t, 0);
        d_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_30);
    a_30 = t;
    t = d_30;
    t = h_109(t);
    e_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, b_30, e_30);
    t_9 = t;
    t = SSLsetAnnotations(t_9, a_30);
    return(t);
  }
  z_28 = t;
  if(match_cons(t, sym_Choice_2))
    {
      s_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_28);
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, s_28, v_28);
  p_9 = t;
  t = SSLsetAnnotations(p_9, j_28);
  t = abstract_choice_2_0(x_8, d_9, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm g_30 = NULL,j_30 = NULL,k_30 = NULL,n_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,u_30 = NULL,v_30 = NULL,z_9 = NULL,y_9 = NULL;
  j_30 = t;
  t = save_MarkVar_0_0(t);
  g_30 = t;
  t = j_30;
  if(match_cons(t, sym_Rec_2))
    {
      s_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_30);
  r_30 = t;
  t = u_30;
  t = mark_buv_0_0(t);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, s_30, v_30);
  y_9 = t;
  t = SSLsetAnnotations(y_9, r_30);
  t = g_30;
  t = isect_MarkVar_0_0(t);
  t = j_30;
  if(match_cons(t, sym_Rec_2))
    {
      n_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_30);
  k_30 = t;
  t = p_30;
  t = mark_buv_0_0(t);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, n_30, q_30);
  z_9 = t;
  t = SSLsetAnnotations(z_9, k_30);
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,m_31 = NULL,r_31 = NULL,t_31 = NULL,v_31 = NULL,a_32 = NULL,b_32 = NULL,e_32 = NULL,f_32 = NULL,i_10 = NULL,d_10 = NULL,c_10 = NULL;
  f_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
      b_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_32);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_31, a_32, b_32);
  c_10 = t;
  t = SSLsetAnnotations(c_10, t_31);
  e_32 = t;
  t = save_MarkVar_0_0(t);
  w_30 = t;
  t = e_32;
  if(match_cons(t, sym_PrimT_3))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
      k_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_32);
  d_31 = t;
  t = k_31;
  t = map_1_0(e_9, t);
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_31, j_31, m_31);
  d_10 = t;
  t = SSLsetAnnotations(d_10, d_31);
  r_31 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      y_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
      a_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_31);
  x_30 = t;
  t = z_30;
  t = mark_buv_0_0(t);
  b_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, y_30, b_31, a_31);
  i_10 = t;
  t = SSLsetAnnotations(i_10, x_30);
  c_31 = t;
  t = w_30;
  t = isect_MarkVar_0_0(t);
  t = c_31;
  return(t);
}
ATerm alltd_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm g_32 (ATerm t)
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_84(t);
        ;
        LocalPopChoice(o_39);
      }
    else
      {
        t = n_39;
        t = SRTS_all(g_32, t);
      }
    return(t);
  }
  t = g_32(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,c_35 = NULL,e_35 = NULL;
  x_34 = t;
  if(match_cons(t, sym_CallT_3))
    {
      c_35 = ATgetArgument(t, 0);
      e_35 = ATgetArgument(t, 1);
      w_34 = ATgetArgument(t, 2);
      {
        ATerm f_28 = NULL,g_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,t_28 = NULL,u_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,a_29 = NULL,h_29 = NULL,u_10 = NULL,t_10 = NULL,s_10 = NULL;
        t = SSLgetAnnotations(x_34);
        a_29 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, c_35, e_35, w_34);
        s_10 = t;
        t = SSLsetAnnotations(s_10, a_29);
        h_29 = t;
        t = save_MarkVar_0_0(t);
        f_28 = t;
        t = h_29;
        if(match_cons(t, sym_CallT_3))
          {
            t_28 = ATgetArgument(t, 0);
            u_28 = ATgetArgument(t, 1);
            w_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_29);
        r_28 = t;
        t = w_28;
        t = map_1_0(f_9, t);
        x_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, t_28, u_28, x_28);
        t_10 = t;
        t = SSLsetAnnotations(t_10, r_28);
        y_28 = t;
        if(match_cons(t, sym_CallT_3))
          {
            k_28 = ATgetArgument(t, 0);
            l_28 = ATgetArgument(t, 1);
            m_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_28);
        g_28 = t;
        t = l_28;
        t = mark_buv_0_0(t);
        p_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, k_28, p_28, m_28);
        u_10 = t;
        t = SSLsetAnnotations(u_10, g_28);
        q_28 = t;
        t = f_28;
        t = isect_MarkVar_0_0(t);
        t = q_28;
      }
    }
  else
    {
      ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,c_30 = NULL,l_30 = NULL,y_10 = NULL,v_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          c_35 = ATgetArgument(t, 0);
          e_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_34);
      c_30 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, c_35, e_35);
      v_10 = t;
      t = SSLsetAnnotations(v_10, c_30);
      l_30 = t;
      t = save_MarkVar_0_0(t);
      s_29 = t;
      t = l_30;
      if(match_cons(t, sym_Call_2))
        {
          u_29 = ATgetArgument(t, 0);
          v_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_30);
      t_29 = t;
      t = v_29;
      t = mark_buv_0_0(t);
      w_29 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, u_29, w_29);
      y_10 = t;
      t = SSLsetAnnotations(y_10, t_29);
      x_29 = t;
      t = s_29;
      t = isect_MarkVar_0_0(t);
      t = x_29;
    }
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm x_5 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm t)
{
  ATerm j_35 = NULL;
  ATerm h_9 (ATerm t)
  {
    t = w_60;
    t = map_1_0(IntroduceBound_0_0, t);
    t = x_60;
    t = mark_build_vars_0_0(t);
    if(((j_35 != NULL) && (j_35 != t)))
      _fail(t);
    else
      j_35 = t;
    return(t);
  }
  t = scope_2_0(g_9, h_9, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, v_60, w_60, not_null(j_35));
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm q_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_35);
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
      {
        ATerm s_35 = NULL,u_35 = NULL,v_35 = NULL,x_35 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_35 = ATgetArgument(t, 0);
            t = s_35;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_35 = ATgetArgument(t, 0);
                u_35 = ATgetArgument(t, 1);
                v_35 = ATgetArgument(t, 2);
                x_35 = ATgetArgument(t, 3);
                t = v_35;
                t = map_1_0(s_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    s_35 = ATgetArgument(t, 0);
                    u_35 = ATgetArgument(t, 1);
                    v_35 = ATgetArgument(t, 2);
                    x_35 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_35;
                t = map_1_0(u_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm j_36 = NULL;
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_36 = ATgetArgument(t, 0);
          {
            ATerm u_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_39);
      t = j_36;
    }
  else
    {
      t = s_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_36;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm b_37 = NULL;
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_37 = ATgetArgument(t, 0);
          {
            ATerm z_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_39);
      t = b_37;
    }
  else
    {
      t = v_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_37;
    }
  return(t);
}
ATerm y_5 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  ATerm m_9 (ATerm t)
  {
    t = p_60;
    t = free_vars_3_0(n_9, o_9, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = p_60;
    t = mark_match_vars_0_0(t);
    if(((n_35 != NULL) && (n_35 != t)))
      _fail(t);
    else
      n_35 = t;
    t = r_60;
    t = mark_buv_0_0(t);
    if(((o_35 != NULL) && (o_35 != t)))
      _fail(t);
    else
      o_35 = t;
    t = t_60;
    t = mark_build_vars_0_0(t);
    if(((p_35 != NULL) && (p_35 != t)))
      _fail(t);
    else
      p_35 = t;
    return(t);
  }
  t = scope_2_0(i_9, m_9, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_35), not_null(p_35), not_null(o_35)));
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm q_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_37);
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm i_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_40);
    }
  else
    {
      t = i_40;
      {
        ATerm s_37 = NULL,t_37 = NULL,x_37 = NULL,y_37 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_37 = ATgetArgument(t, 0);
            t = s_37;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_37 = ATgetArgument(t, 0);
                t_37 = ATgetArgument(t, 1);
                x_37 = ATgetArgument(t, 2);
                y_37 = ATgetArgument(t, 3);
                t = x_37;
                t = map_1_0(j_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    s_37 = ATgetArgument(t, 0);
                    t_37 = ATgetArgument(t, 1);
                    x_37 = ATgetArgument(t, 2);
                    y_37 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_37;
                t = map_1_0(k_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm l_38 = NULL;
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_38 = ATgetArgument(t, 0);
          {
            ATerm n_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_40);
      t = l_38;
    }
  else
    {
      t = k_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_38;
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm a_39 = NULL;
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_39 = ATgetArgument(t, 0);
          {
            ATerm r_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_40);
      t = a_39;
    }
  else
    {
      t = o_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_39;
    }
  return(t);
}
ATerm z_5 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm t)
{
  ATerm j_37 = NULL,l_37 = NULL,p_37 = NULL;
  ATerm w_9 (ATerm t)
  {
    t = j_60;
    t = free_vars_3_0(a_10, b_10, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = j_60;
    t = mark_match_vars_0_0(t);
    if(((j_37 != NULL) && (j_37 != t)))
      _fail(t);
    else
      j_37 = t;
    t = l_60;
    t = mark_buv_0_0(t);
    if(((l_37 != NULL) && (l_37 != t)))
      _fail(t);
    else
      l_37 = t;
    t = n_60;
    t = mark_build_vars_0_0(t);
    if(((p_37 != NULL) && (p_37 != t)))
      _fail(t);
    else
      p_37 = t;
    return(t);
  }
  t = scope_2_0(v_9, w_9, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_37), not_null(p_37), not_null(l_37)));
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm a_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_41);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm t_40 = t;
  int v_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_40);
    }
  else
    {
      t = t_40;
      {
        ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_41 = ATgetArgument(t, 0);
            t = d_41;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_41 = ATgetArgument(t, 0);
                e_41 = ATgetArgument(t, 1);
                f_41 = ATgetArgument(t, 2);
                g_41 = ATgetArgument(t, 3);
                t = f_41;
                t = map_1_0(q_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_41 = ATgetArgument(t, 0);
                    e_41 = ATgetArgument(t, 1);
                    f_41 = ATgetArgument(t, 2);
                    g_41 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_41;
                t = map_1_0(r_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm s_41 = NULL;
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_41 = ATgetArgument(t, 0);
          {
            ATerm h_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_41);
      t = s_41;
    }
  else
    {
      t = b_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_41;
    }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm h_42 = NULL;
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_42 = ATgetArgument(t, 0);
          {
            ATerm k_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_41);
      t = h_42;
    }
  else
    {
      t = i_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_42;
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm v_43 = NULL;
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_43 = ATgetArgument(t, 0);
          {
            ATerm n_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_41);
      t = v_43;
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_43;
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm c_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_44);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
      {
        ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_44 = ATgetArgument(t, 0);
            t = f_44;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                f_44 = ATgetArgument(t, 0);
                g_44 = ATgetArgument(t, 1);
                h_44 = ATgetArgument(t, 2);
                i_44 = ATgetArgument(t, 3);
                t = h_44;
                t = map_1_0(d_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_44 = ATgetArgument(t, 0);
                    g_44 = ATgetArgument(t, 1);
                    h_44 = ATgetArgument(t, 2);
                    i_44 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_44;
                t = map_1_0(e_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm u_44 = NULL;
  ATerm q_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_44 = ATgetArgument(t, 0);
          {
            ATerm t_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_41);
      t = u_44;
    }
  else
    {
      t = q_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_44;
    }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm j_45 = NULL;
  ATerm u_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_45 = ATgetArgument(t, 0);
          {
            ATerm w_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_41);
      t = j_45;
    }
  else
    {
      t = u_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_45;
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm r_39 = NULL,x_39 = NULL,y_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      a_40 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
      c_40 = ATgetArgument(t, 2);
      {
        ATerm q_40 = NULL,s_40 = NULL,u_40 = NULL,w_40 = NULL;
        t = c_40;
        if(match_cons(t, sym_Rule_3))
          {
            r_39 = ATgetArgument(t, 0);
            x_39 = ATgetArgument(t, 1);
            y_39 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = c_40;
        t = free_vars_3_0(m_10, p_10, tboundin_3_0, t);
        q_40 = t;
        {
          ATerm x_10 (ATerm t)
          {
            t = q_40;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = r_39;
            t = mark_match_vars_0_0(t);
            if(((s_40 != NULL) && (s_40 != t)))
              _fail(t);
            else
              s_40 = t;
            t = y_39;
            t = mark_buv_0_0(t);
            if(((u_40 != NULL) && (u_40 != t)))
              _fail(t);
            else
              u_40 = t;
            t = x_39;
            t = mark_build_vars_0_0(t);
            if(((w_40 != NULL) && (w_40 != t)))
              _fail(t);
            else
              w_40 = t;
            return(t);
          }
          t = scope_2_0(w_10, x_10, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, a_40, b_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_40), not_null(w_40), not_null(u_40)));
        }
      }
    }
  else
    {
      ATerm b_43 = NULL,c_43 = NULL,e_43 = NULL,h_43 = NULL,k_43 = NULL,l_43 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          a_40 = ATgetArgument(t, 0);
          b_40 = ATgetArgument(t, 1);
          c_40 = ATgetArgument(t, 2);
          d_40 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_40;
      if(match_cons(t, sym_Rule_3))
        {
          e_40 = ATgetArgument(t, 0);
          f_40 = ATgetArgument(t, 1);
          g_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_40;
      t = map_1_0(z_10, t);
      b_43 = t;
      t = d_40;
      t = free_vars_3_0(a_11, c_11, tboundin_3_0, t);
      l_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_43, b_43);
      t = diff_0_0(t);
      c_43 = t;
      {
        ATerm i_11 (ATerm t)
        {
          t = b_43;
          t = map_1_0(IntroduceBound_0_0, t);
          t = c_43;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = e_40;
          t = mark_match_vars_0_0(t);
          if(((e_43 != NULL) && (e_43 != t)))
            _fail(t);
          else
            e_43 = t;
          t = g_40;
          t = mark_buv_0_0(t);
          if(((h_43 != NULL) && (h_43 != t)))
            _fail(t);
          else
            h_43 = t;
          t = f_40;
          t = mark_build_vars_0_0(t);
          if(((k_43 != NULL) && (k_43 != t)))
            _fail(t);
          else
            k_43 = t;
          return(t);
        }
        t = scope_2_0(h_11, i_11, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_40, b_40, c_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_43), not_null(k_43), not_null(h_43)));
      }
    }
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm m_45 = NULL,s_45 = NULL,t_45 = NULL;
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_45);
  s_45 = t;
  t = term_b_42;
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_45), term_b_42);
  t = i_6(j_11, s_45, t_45, t);
  t = m_45;
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm d_46 = NULL;
  ATerm c_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_46 = ATgetArgument(t, 0);
          {
            ATerm e_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_42);
      t = d_46;
    }
  else
    {
      t = c_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_46;
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm a_6 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  t = j_59;
  t = map_1_0(s_11, t);
  x_45 = t;
  {
    ATerm u_11 (ATerm t)
    {
      t = x_45;
      t = map_1_0(IntroduceBound_0_0, t);
      t = l_59;
      t = mark_buv_0_0(t);
      if(((y_45 != NULL) && (y_45 != t)))
        _fail(t);
      else
        y_45 = t;
      return(t);
    }
    t = scope_2_0(t_11, u_11, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, h_59, i_59, j_59, not_null(y_45));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm z_46 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,j_47 = NULL;
  z_46 = t;
  if(match_cons(t, sym__2))
    {
      e_47 = ATgetArgument(t, 0);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_47;
  if(match_cons(t, sym_Undefined_0))
    {
      t = e_47;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_f_42;
        }
      else
        {
          t = term_f_42;
        }
    }
  else
    {
      ATerm g_42 = t;
      int i_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm j_42 = ATgetArgument(t, 0);
              j_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(i_42);
          t = e_47;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_f_42;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  f_47 = ATgetArgument(t, 0);
                  g_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm k_42 = t;
                int l_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, g_47, j_47);
                    {
                      ATerm m_42 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm q_31 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              q_31 = ATgetArgument(t, 0);
                              if((q_31 != ATgetArgument(t, 1)))
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
                          t = m_42;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, f_47, term_n_42);
                    }
                    ;
                    LocalPopChoice(l_42);
                  }
                else
                  {
                    t = k_42;
                    t = j_47;
                    if((g_47 != t))
                      {
                        _fail(t);
                      }
                    t = e_47;
                  }
              }
            }
        }
      else
        {
          t = g_42;
          t = e_47;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_f_42;
        }
    }
  return(t);
}
ATerm b_6 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm t)
{
  ATerm r_47 = NULL,t_47 = NULL,u_47 = NULL;
  t = term_m_39;
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_39, s_57);
  t = w_6(u_47, s_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_47 = ATgetFirst((ATermList) t);
      {
        ATerm o_42 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_57, r_47);
  t = CompareEntries_0_0(t);
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_57, (ATerm) ATinsert(CheckATermList(r_57), t_47));
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,z_48 = NULL,c_49 = NULL,e_49 = NULL;
  e_49 = t;
  if(match_cons(t, sym__2))
    {
      k_48 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
      t = l_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_48 = ATgetFirst((ATermList) t);
          c_49 = (ATerm) ATgetNext((ATermList) t);
          t = z_48;
          {
            ATerm p_42 = t;
            int q_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm s_42 = ATgetArgument(t, 0);
                    ATerm t_42 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(q_42);
                t = k_48;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = e_49;
                  }
                else
                  {
                    ATerm u_42 = t;
                    int v_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_49;
                        t = b_6(k_48, z_48, c_49, t);
                        ;
                        LocalPopChoice(v_42);
                      }
                    else
                      {
                        t = u_42;
                        t = e_49;
                      }
                  }
              }
            else
              {
                t = p_42;
                t = k_48;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = e_49;
                  }
                else
                  {
                    t = e_49;
                  }
              }
          }
        }
      else
        {
          t = k_48;
          if(match_cons(t, sym_Scopes_0))
            {
              t = e_49;
            }
          else
            {
              t = e_49;
            }
        }
    }
  else
    {
      t = e_49;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  t = map_1_0(v_11, t);
  h_48 = t;
  t = term_m_39;
  j_48 = t;
  t = SSL_table_destroy(j_48);
  t = term_m_39;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_39, h_48);
  t = c_6(i_48, h_48, t);
  t = h_48;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,k_50 = NULL;
  k_50 = t;
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm a_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_42);
        t = k_50;
      }
    else
      {
        t = y_42;
        {
          ATerm d_43 = t;
          int f_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm g_43 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(f_43);
              t = k_50;
            }
          else
            {
              t = d_43;
              {
                ATerm i_43 = t;
                int j_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm m_43 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_43);
                    t = k_50;
                  }
                else
                  {
                    t = i_43;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm n_43 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = k_50;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    h_50 = t;
    t = k_50;
    t = SRTS_one(mark_buv_0_0, t);
    i_50 = t;
    t = h_50;
    t = isect_MarkVar_0_0(t);
    t = i_50;
  }
  return(t);
}
ATerm c_6 (ATerm o_28, ATerm n_28, ATerm t)
{
  ATerm y_11 (ATerm t)
  {
    ATerm q_50 = NULL,r_50 = NULL;
    if(match_cons(t, sym__2))
      {
        q_50 = ATgetArgument(t, 0);
        r_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(o_28, q_50, r_50);
    t = (ATerm) ATmakeAppl(sym__3, o_28, q_50, r_50);
    return(t);
  }
  t = n_28;
  t = map_1_0(y_11, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_50 = NULL;
  ATerm z_11 (ATerm t)
  {
    ATerm z_50 = NULL,a_51 = NULL;
    z_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_50), z_50);
    t = w_6(not_null(s_50), z_50, t);
    a_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_50, a_51);
    return(t);
  }
  if(((s_50 != NULL) && (s_50 != t)))
    _fail(t);
  else
    s_50 = t;
  t = SSL_table_keys(s_50);
  t = map_1_0(z_11, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_m_39;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
  t = save_MarkVar_0_0(t);
  {
    ATerm g_12 (ATerm t)
    {
      ATerm s_52 (ATerm q_51, ATerm t)
      {
        ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
        t = q_51;
        if(match_cons(t, sym__2))
          {
            ATerm o_43 = ATgetArgument(t, 0);
            r_51 = o_43;
            if(match_cons(o_43, sym_Var_1))
              {
                s_51 = ATgetArgument(o_43, 0);
              }
            else
              _fail(t);
            {
              ATerm p_43 = ATgetArgument(t, 1);
              if(((ATgetType(p_43) == AT_LIST) && !(ATisEmpty(p_43))))
                {
                  ATerm r_43 = ATgetFirst((ATermList) p_43);
                  if(match_cons(r_43, sym_Defined_2))
                    {
                      t_51 = ATgetArgument(r_43, 0);
                      {
                        ATerm s_43 = ATgetArgument(r_43, 1);
                        if((ATgetSymbol((ATermAppl) s_43) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  u_51 = (ATerm) ATgetNext((ATermList) p_43);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_58;
        {
          ATerm k_12 (ATerm t)
          {
            if((s_51 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(k_12, t);
          t = (ATerm) ATmakeAppl(sym__2, r_51, (ATerm) ATinsert(CheckATermList(u_51), (ATerm) ATmakeAppl(sym_Defined_2, t_51, term_n_42)));
        }
        return(t);
      }
      ATerm a_52 = NULL,c_52 = NULL;
      c_52 = t;
      {
        ATerm t_43 = t;
        int w_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                a_52 = ATgetArgument(t, 0);
                {
                  ATerm x_43 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_43);
            t = a_52;
            if(match_cons(t, sym_Scopes_0))
              {
                t = c_52;
              }
            else
              {
                ATerm y_43 = t;
                int z_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = s_52(c_52, t);
                    ;
                    LocalPopChoice(z_43);
                  }
                else
                  {
                    t = y_43;
                    t = c_52;
                  }
              }
          }
        else
          {
            t = t_43;
            {
              ATerm a_44 = t;
              int b_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_52(c_52, t);
                  ;
                  LocalPopChoice(b_44);
                }
              else
                {
                  t = a_44;
                  t = c_52;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(g_12, t);
    n_51 = t;
    t = term_m_39;
    p_51 = t;
    t = SSL_table_destroy(p_51);
    t = term_m_39;
    o_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_39, n_51);
    t = c_6(o_51, n_51, t);
    t = n_51;
  }
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm x_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_53);
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_44);
    }
  else
    {
      t = d_44;
      {
        ATerm z_53 = NULL,a_54 = NULL,e_54 = NULL,f_54 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_53 = ATgetArgument(t, 0);
            t = z_53;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_53 = ATgetArgument(t, 0);
                a_54 = ATgetArgument(t, 1);
                e_54 = ATgetArgument(t, 2);
                f_54 = ATgetArgument(t, 3);
                t = e_54;
                t = map_1_0(x_12, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_53 = ATgetArgument(t, 0);
                    a_54 = ATgetArgument(t, 1);
                    e_54 = ATgetArgument(t, 2);
                    f_54 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_54;
                t = map_1_0(t_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm t_54 = NULL;
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_54 = ATgetArgument(t, 0);
          {
            ATerm m_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_44);
      t = t_54;
    }
  else
    {
      t = j_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_54;
    }
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm i_55 = NULL;
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_55 = ATgetArgument(t, 0);
          {
            ATerm p_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_44);
      t = i_55;
    }
  else
    {
      t = n_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_55;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,d_53 = NULL,e_53 = NULL,k_53 = NULL,m_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,g_11 = NULL,f_11 = NULL;
  w_53 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_53 = ATgetArgument(t, 0);
      u_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_53);
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, t_53, u_53);
  f_11 = t;
  t = SSLsetAnnotations(f_11, s_53);
  v_53 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_53 = ATgetArgument(t, 0);
      {
        ATerm q_44 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_53;
  t = free_vars_3_0(r_12, s_12, tboundin_3_0, t);
  y_52 = t;
  t = undefine_unbound_MarkVar_0_1(y_52, t);
  z_52 = t;
  t = v_53;
  if(match_cons(t, sym_Let_2))
    {
      k_53 = ATgetArgument(t, 0);
      m_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_53);
  e_53 = t;
  t = k_53;
  {
    ATerm e_14 (ATerm t)
    {
      ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
      l_55 = t;
      t = term_m_39;
      n_55 = t;
      t = SSL_table_destroy(n_55);
      t = term_m_39;
      m_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_39, z_52);
      t = c_6(m_55, z_52, t);
      t = l_55;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(e_14, t);
    o_53 = t;
    t = term_m_39;
    r_53 = t;
    t = SSL_table_destroy(r_53);
    t = term_m_39;
    q_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_39, z_52);
    t = c_6(q_53, z_52, t);
    t = m_53;
    t = mark_buv_0_0(t);
    p_53 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, o_53, p_53);
    g_11 = t;
    t = SSLsetAnnotations(g_11, e_53);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm r_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,l_11 = NULL;
      q_55 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_55);
      o_55 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_55);
      l_11 = t;
      t = SSLsetAnnotations(l_11, o_55);
      LocalPopChoice(s_44);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = r_44;
      {
        ATerm t_44 = t;
        int v_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_55 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,m_11 = NULL;
            f_56 = t;
            if(match_cons(t, sym_App_2))
              {
                d_56 = ATgetArgument(t, 0);
                e_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_56);
            r_55 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, d_56, e_56);
            m_11 = t;
            t = SSLsetAnnotations(m_11, r_55);
            LocalPopChoice(v_44);
            {
              ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,m_56 = NULL,n_56 = NULL,o_11 = NULL;
              n_56 = t;
              if(match_cons(t, sym_App_2))
                {
                  h_56 = ATgetArgument(t, 0);
                  i_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_56);
              g_56 = t;
              t = h_56;
              t = mark_buv_0_0(t);
              j_56 = t;
              t = i_56;
              t = mark_build_vars_0_0(t);
              m_56 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, j_56, m_56);
              o_11 = t;
              t = SSLsetAnnotations(o_11, g_56);
            }
          }
        else
          {
            t = t_44;
            {
              ATerm w_44 = t;
              int x_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_56 = NULL,s_56 = NULL,t_56 = NULL,p_11 = NULL;
                  t_56 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      s_56 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_56);
                  q_56 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, s_56);
                  p_11 = t;
                  t = SSLsetAnnotations(p_11, q_56);
                  LocalPopChoice(x_44);
                  {
                    ATerm u_56 = NULL,v_56 = NULL,z_56 = NULL,a_57 = NULL,r_11 = NULL;
                    a_57 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        v_56 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(a_57);
                    u_56 = t;
                    t = v_56;
                    t = mark_buv_0_0(t);
                    z_56 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, z_56);
                    r_11 = t;
                    t = SSLsetAnnotations(r_11, u_56);
                  }
                }
              else
                {
                  t = w_44;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_6 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm c_57 = NULL,k_57 = NULL,l_57 = NULL;
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, z_27);
  t = w_6(y_27, z_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_44 = ATgetFirst((ATermList) t);
      c_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_57), a_28);
  l_57 = t;
  t = SSL_table_put(y_27, z_27, l_57);
  t = k_57;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm q_57 = NULL,w_57 = NULL,x_57 = NULL,a_58 = NULL;
  q_57 = t;
  t = term_m_39;
  w_57 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_57);
  x_57 = t;
  t = term_b_45;
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_39, (ATerm)ATmakeAppl(sym_Var_1, q_57), term_b_45);
  t = d_6(w_57, x_57, a_58, t);
  t = q_57;
  return(t);
}
ATerm g_6 (ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm b_58 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
  t = w_6(w_27, x_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_58 = ATgetFirst((ATermList) t);
      {
        ATerm c_45 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_58;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL;
  l_62 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL,m_33 = NULL,s_33 = NULL,b_34 = NULL;
        t = term_m_39;
        b_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_39, l_62);
        t = g_6(b_34, l_62, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_45 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_45) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            l_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, m_62);
        m_33 = t;
        t = (ATerm) ATinsert(ATempty, l_33);
        s_33 = t;
        t = SSLsetAnnotations(m_33, s_33);
        ;
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        {
          ATerm g_45 = t;
          int h_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_34 = NULL,n_34 = NULL,o_34 = NULL,u_34 = NULL;
              t = term_m_39;
              u_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_m_39, l_62);
              t = g_6(u_34, l_62, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm i_45 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_45) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  j_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, m_62);
              n_34 = t;
              t = (ATerm) ATinsert(ATempty, j_34);
              o_34 = t;
              t = SSLsetAnnotations(n_34, o_34);
              ;
              LocalPopChoice(h_45);
            }
          else
            {
              t = g_45;
              {
                ATerm f_35 = NULL,g_35 = NULL,k_35 = NULL,b_36 = NULL;
                t = term_m_39;
                b_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_39, l_62);
                t = g_6(b_36, l_62, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm k_45 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_45) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    f_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_62);
                g_35 = t;
                t = (ATerm) ATinsert(ATempty, f_35);
                k_35 = t;
                t = SSLsetAnnotations(g_35, k_35);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,h_13 = NULL;
  ATerm l_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(n_45);
    }
  else
    {
      t = l_45;
    }
  w_62 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_62);
  t_62 = t;
  t = u_62;
  t = DeclareBound_0_0(t);
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_62);
  h_13 = t;
  t = SSLsetAnnotations(h_13, t_62);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_63 = NULL,b_63 = NULL,h_63 = NULL,u_13 = NULL;
      h_63 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_63);
      a_63 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_63);
      u_13 = t;
      t = SSLsetAnnotations(u_13, a_63);
      LocalPopChoice(p_45);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = o_45;
      {
        ATerm r_45 = t;
        int u_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,r_63 = NULL,y_13 = NULL;
            r_63 = t;
            if(match_cons(t, sym_App_2))
              {
                j_63 = ATgetArgument(t, 0);
                k_63 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_63);
            i_63 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, j_63, k_63);
            y_13 = t;
            t = SSLsetAnnotations(y_13, i_63);
            LocalPopChoice(u_45);
            {
              ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,z_63 = NULL,z_13 = NULL;
              z_63 = t;
              if(match_cons(t, sym_App_2))
                {
                  t_63 = ATgetArgument(t, 0);
                  u_63 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_63);
              s_63 = t;
              t = t_63;
              t = mark_buv_0_0(t);
              v_63 = t;
              t = u_63;
              t = mark_build_vars_0_0(t);
              w_63 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, v_63, w_63);
              z_13 = t;
              t = SSLsetAnnotations(z_13, s_63);
            }
          }
        else
          {
            t = r_45;
            {
              ATerm w_45 = t;
              int z_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_64 = NULL,d_64 = NULL,f_64 = NULL,b_14 = NULL;
                  f_64 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      d_64 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_64);
                  c_64 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, d_64);
                  b_14 = t;
                  t = SSLsetAnnotations(b_14, c_64);
                  LocalPopChoice(z_45);
                  {
                    ATerm j_64 = NULL,q_64 = NULL,r_64 = NULL,t_64 = NULL,d_14 = NULL;
                    t_64 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        q_64 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(t_64);
                    j_64 = t;
                    t = q_64;
                    t = mark_buv_0_0(t);
                    r_64 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, r_64);
                    d_14 = t;
                    t = SSLsetAnnotations(d_14, j_64);
                  }
                }
              else
                {
                  t = w_45;
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
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_66 = NULL,d_66 = NULL;
      b_66 = t;
      if(match_cons(t, sym_Match_1))
        {
          d_66 = ATgetArgument(t, 0);
          {
            ATerm m_36 = NULL,u_36 = NULL,n_14 = NULL;
            t = SSLgetAnnotations(b_66);
            m_36 = t;
            t = d_66;
            t = mark_match_vars_0_0(t);
            u_36 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, u_36);
            n_14 = t;
            t = SSLsetAnnotations(n_14, m_36);
          }
        }
      else
        {
          ATerm a_37 = NULL,d_37 = NULL,o_14 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              d_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_66);
          a_37 = t;
          t = d_66;
          t = mark_build_vars_0_0(t);
          d_37 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, d_37);
          o_14 = t;
          t = SSLsetAnnotations(o_14, a_37);
        }
      ;
      LocalPopChoice(b_46);
    }
  else
    {
      t = a_46;
      {
        ATerm c_46 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            ;
            LocalPopChoice(e_46);
          }
        else
          {
            t = c_46;
            {
              ATerm f_46 = t;
              int g_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  ;
                  LocalPopChoice(g_46);
                }
              else
                {
                  t = f_46;
                  {
                    ATerm h_46 = t;
                    int i_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        ;
                        LocalPopChoice(i_46);
                      }
                    else
                      {
                        t = h_46;
                        {
                          ATerm j_46 = t;
                          int l_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL;
                              e_66 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  h_66 = ATgetArgument(t, 0);
                                  i_66 = ATgetArgument(t, 1);
                                  j_66 = ATgetArgument(t, 2);
                                  k_66 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = e_66;
                              t = a_6(h_66, i_66, j_66, k_66, t);
                              ;
                              LocalPopChoice(l_46);
                            }
                          else
                            {
                              t = j_46;
                              {
                                ATerm m_46 = t;
                                int n_46 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(n_46);
                                  }
                                else
                                  {
                                    t = m_46;
                                    {
                                      ATerm o_46 = t;
                                      int p_46 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_66 = NULL,r_66 = NULL,s_66 = NULL,u_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL;
                                          u_66 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              w_66 = ATgetArgument(t, 0);
                                              t = w_66;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  p_66 = ATgetArgument(t, 0);
                                                  r_66 = ATgetArgument(t, 1);
                                                  s_66 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = u_66;
                                              t = z_5(p_66, r_66, s_66, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  w_66 = ATgetArgument(t, 0);
                                                  t = w_66;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      p_66 = ATgetArgument(t, 0);
                                                      r_66 = ATgetArgument(t, 1);
                                                      s_66 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = u_66;
                                                  t = y_5(p_66, r_66, s_66, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      w_66 = ATgetArgument(t, 0);
                                                      x_66 = ATgetArgument(t, 1);
                                                      y_66 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = u_66;
                                                  t = x_5(w_66, x_66, y_66, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(p_46);
                                        }
                                      else
                                        {
                                          t = o_46;
                                          {
                                            ATerm q_46 = t;
                                            int r_46 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(r_46);
                                              }
                                            else
                                              {
                                                t = q_46;
                                                {
                                                  ATerm s_46 = t;
                                                  int u_46 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(u_46);
                                                    }
                                                  else
                                                    {
                                                      t = s_46;
                                                      {
                                                        ATerm v_46 = t;
                                                        int w_46 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm n_67 = NULL;
                                                            n_67 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm x_46 = ATgetArgument(t, 0);
                                                                ATerm y_46 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = n_67;
                                                            t = w_5(t);
                                                            ;
                                                            LocalPopChoice(w_46);
                                                          }
                                                        else
                                                          {
                                                            t = v_46;
                                                            {
                                                              ATerm a_47 = t;
                                                              int b_47 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(b_47);
                                                                }
                                                              else
                                                                {
                                                                  t = a_47;
                                                                  {
                                                                    ATerm c_47 = t;
                                                                    int d_47 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(d_47);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_47;
                                                                        {
                                                                          ATerm i_47 = t;
                                                                          int k_47 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(k_47);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_47;
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
ATerm h_6 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  {
    ATerm m_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_47 = ATgetArgument(t, 0);
            ATerm p_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
        t = w_6(l_27, m_27, t);
        ;
        LocalPopChoice(n_47);
      }
    else
      {
        t = m_47;
        t = (ATerm) ATempty;
      }
    z_67 = t;
    t = (ATerm) ATinsert(CheckATermList(z_67), k_27);
    a_68 = t;
    t = SSL_table_put(l_27, m_27, a_68);
    t = y_67;
  }
  return(t);
}
ATerm i_6 (ATerm d_83 (ATerm), ATerm d_27, ATerm b_27, ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
  n_68 = t;
  t = d_83(t);
  e_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_68, d_27, b_27);
  t = h_6(e_68, d_27, b_27, t);
  {
    ATerm s_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_68 = NULL;
        t = term_w_47;
        q_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_68, term_w_47);
        t = w_6(e_68, q_68, t);
        ;
        LocalPopChoice(v_47);
      }
    else
      {
        t = s_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_68 = ATgetFirst((ATermList) t);
        m_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_47;
    o_68 = t;
    t = (ATerm) ATinsert(CheckATermList(m_68), (ATerm) ATinsert(CheckATermList(f_68), d_27));
    p_68 = t;
    t = SSL_table_put(e_68, o_68, p_68);
    t = n_68;
  }
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_68);
  s_68 = t;
  t = term_b_48;
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_68), term_b_48);
  t = i_6(j_14, s_68, t_68, t);
  t = r_68;
  return(t);
}
ATerm k_14 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm v_68 = NULL,x_68 = NULL,y_68 = NULL,e_69 = NULL,j_69 = NULL,r_14 = NULL;
  j_69 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_68 = ATgetArgument(t, 0);
      y_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_69);
  v_68 = t;
  t = y_68;
  {
    ATerm l_14 (ATerm t)
    {
      ATerm k_69 = NULL;
      k_69 = t;
      t = x_68;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = k_69;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(k_14, l_14, t);
    e_69 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, x_68, e_69);
    r_14 = t;
    t = SSLsetAnnotations(r_14, v_68);
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL;
  v_73 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_73 = ATgetArgument(t, 0);
      s_73 = ATgetArgument(t, 1);
      {
        ATerm o_37 = NULL,w_37 = NULL,z_37 = NULL,t_14 = NULL;
        t = SSLgetAnnotations(v_73);
        o_37 = t;
        t = w_73;
        t = y_92(t);
        w_37 = t;
        t = s_73;
        t = w_92(t);
        z_37 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_37, z_37);
        t_14 = t;
        t = SSLsetAnnotations(t_14, o_37);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          w_73 = ATgetArgument(t, 0);
          s_73 = ATgetArgument(t, 1);
          t_73 = ATgetArgument(t, 2);
          u_73 = ATgetArgument(t, 3);
          {
            ATerm x_38 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,r_15 = NULL;
            t = SSLgetAnnotations(v_73);
            x_38 = t;
            t = w_73;
            t = y_92(t);
            h_39 = t;
            t = s_73;
            t = y_92(t);
            i_39 = t;
            t = t_73;
            t = y_92(t);
            j_39 = t;
            t = u_73;
            t = w_92(t);
            k_39 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, h_39, i_39, j_39, k_39);
            r_15 = t;
            t = SSLsetAnnotations(r_15, x_38);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              w_73 = ATgetArgument(t, 0);
              s_73 = ATgetArgument(t, 1);
              t_73 = ATgetArgument(t, 2);
              u_73 = ATgetArgument(t, 3);
              {
                ATerm h_40 = NULL,m_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,u_15 = NULL;
                t = SSLgetAnnotations(v_73);
                h_40 = t;
                t = w_73;
                t = y_92(t);
                m_40 = t;
                t = s_73;
                t = y_92(t);
                x_40 = t;
                t = t_73;
                t = y_92(t);
                y_40 = t;
                t = u_73;
                t = w_92(t);
                z_40 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, m_40, x_40, y_40, z_40);
                u_15 = t;
                t = SSLsetAnnotations(u_15, h_40);
              }
            }
          else
            {
              ATerm y_41 = NULL,a_42 = NULL,v_15 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  w_73 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_73);
              y_41 = t;
              t = w_73;
              t = w_92(t);
              a_42 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, a_42);
              v_15 = t;
              t = SSLsetAnnotations(v_15, y_41);
            }
        }
    }
  return(t);
}
ATerm map_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm g_75 (ATerm t)
  {
    ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
    a_75 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_75;
      }
    else
      {
        ATerm r_42 = NULL,w_42 = NULL,x_42 = NULL,a_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_75 = ATgetFirst((ATermList) t);
            c_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_75);
        r_42 = t;
        t = b_75;
        t = r_79(t);
        w_42 = t;
        t = c_75;
        t = g_75(t);
        x_42 = t;
        t = (ATerm) ATinsert(CheckATermList(x_42), w_42);
        a_16 = t;
        t = SSLsetAnnotations(a_16, r_42);
      }
    return(t);
  }
  t = g_75(t);
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm s_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_75);
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm c_48 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_48);
    }
  else
    {
      t = c_48;
      {
        ATerm u_75 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_75 = ATgetArgument(t, 0);
            t = u_75;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_75 = ATgetArgument(t, 0);
                b_76 = ATgetArgument(t, 1);
                c_76 = ATgetArgument(t, 2);
                d_76 = ATgetArgument(t, 3);
                t = c_76;
                t = map_1_0(q_14, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_75 = ATgetArgument(t, 0);
                    b_76 = ATgetArgument(t, 1);
                    c_76 = ATgetArgument(t, 2);
                    d_76 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_76;
                t = map_1_0(s_14, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm u_76 = NULL;
  ATerm o_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_76 = ATgetArgument(t, 0);
          {
            ATerm q_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_48);
      t = u_76;
    }
  else
    {
      t = o_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_76;
    }
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm m_77 = NULL;
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_77 = ATgetArgument(t, 0);
          {
            ATerm w_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_48);
      t = m_77;
    }
  else
    {
      t = u_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_77;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(m_14, p_14, tboundin_3_0, t);
  return(t);
}
ATerm u_14 (ATerm t)
{
  ATerm o_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_78);
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm y_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_49);
    }
  else
    {
      t = y_48;
      {
        ATerm q_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_78 = ATgetArgument(t, 0);
            t = q_78;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_78 = ATgetArgument(t, 0);
                u_78 = ATgetArgument(t, 1);
                v_78 = ATgetArgument(t, 2);
                w_78 = ATgetArgument(t, 3);
                t = v_78;
                t = map_1_0(y_14, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_78 = ATgetArgument(t, 0);
                    u_78 = ATgetArgument(t, 1);
                    v_78 = ATgetArgument(t, 2);
                    w_78 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_78;
                t = map_1_0(w_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm i_79 = NULL;
  ATerm b_49 = t;
  int d_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_79 = ATgetArgument(t, 0);
          {
            ATerm f_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_49);
      t = i_79;
    }
  else
    {
      t = b_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_79;
    }
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm w_79 = NULL;
  ATerm g_49 = t;
  int h_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_79 = ATgetArgument(t, 0);
          {
            ATerm i_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_49);
      t = w_79;
    }
  else
    {
      t = g_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_79;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm x_77 = NULL,e_78 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_78 = ATgetArgument(t, 0);
      t = e_78;
      if(match_cons(t, sym_Rule_3))
        {
          x_77 = ATgetArgument(t, 0);
          {
            ATerm k_49 = ATgetArgument(t, 1);
          }
          {
            ATerm m_49 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = x_77;
      t = free_vars_3_0(u_14, v_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_78 = ATgetArgument(t, 0);
          {
            ATerm n_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_78;
    }
  return(t);
}
ATerm n_6 (ATerm g_79 (ATerm), ATerm v_21, ATerm u_21, ATerm t)
{
  ATerm t_80 (ATerm t)
  {
    ATerm o_80 = NULL,p_80 = NULL,q_80 = NULL;
    o_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_80 = ATgetFirst((ATermList) t);
            q_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_49 = t;
          int p_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_80;
              {
                ATerm x_15 (ATerm t)
                {
                  t = u_21;
                  return(t);
                }
                t = o_6(g_79, x_15, p_80, q_80, t);
                t = t_80(t);
              }
              ;
              LocalPopChoice(p_49);
            }
          else
            {
              t = o_49;
              {
                ATerm q_43 = NULL,u_43 = NULL,c_16 = NULL;
                t = SSLgetAnnotations(o_80);
                q_43 = t;
                t = q_80;
                t = t_80(t);
                u_43 = t;
                t = (ATerm) ATinsert(CheckATermList(u_43), p_80);
                c_16 = t;
                t = SSLsetAnnotations(c_16, q_43);
              }
            }
        }
      }
    return(t);
  }
  t = v_21;
  t = t_80(t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_80;
      t = t_81(t);
    }
  else
    {
      ATerm b_81 = NULL,c_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_80 = ATgetFirst((ATermList) t);
          y_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_80;
      t = v_81(t);
      b_81 = t;
      t = y_80;
      t = foldr_3_0(t_81, u_81, v_81, t);
      c_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_81, c_81);
      t = u_81(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm e_82 (ATerm t)
  {
    ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL;
    b_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_82 = ATgetFirst((ATermList) t);
        d_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_49 = t;
      int r_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_44 = NULL,y_44 = NULL,g_16 = NULL;
          t = SSLgetAnnotations(b_82);
          l_44 = t;
          t = c_82;
          t = b_80(t);
          y_44 = t;
          t = (ATerm) ATinsert(CheckATermList(d_82), y_44);
          g_16 = t;
          t = SSLsetAnnotations(g_16, l_44);
          ;
          LocalPopChoice(r_49);
        }
      else
        {
          t = q_49;
          {
            ATerm q_45 = NULL,v_45 = NULL,h_16 = NULL;
            t = SSLgetAnnotations(b_82);
            q_45 = t;
            t = d_82;
            t = e_82(t);
            v_45 = t;
            t = (ATerm) ATinsert(CheckATermList(v_45), c_82);
            h_16 = t;
            t = SSLsetAnnotations(h_16, q_45);
          }
        }
    }
    return(t);
  }
  t = e_82(t);
  return(t);
}
ATerm o_6 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm z_21, ATerm y_21, ATerm t)
{
  t = k_79(t);
  {
    ATerm y_15 (ATerm t)
    {
      ATerm h_82 = NULL;
      h_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, h_82);
      t = j_79(t);
      return(t);
    }
    t = fetch_1_0(y_15, t);
    t = y_21;
  }
  return(t);
}
ATerm p_6 (ATerm b_79 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  ATerm x_82 (ATerm t)
  {
    ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL;
    s_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_82;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_82 = ATgetFirst((ATermList) t);
            u_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_49 = t;
          int u_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_82;
              {
                ATerm z_15 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = o_6(b_79, z_15, t_82, u_82, t);
                t = x_82(t);
              }
              ;
              LocalPopChoice(u_49);
            }
          else
            {
              t = s_49;
              {
                ATerm k_46 = NULL,t_46 = NULL,k_16 = NULL;
                t = SSLgetAnnotations(s_82);
                k_46 = t;
                t = u_82;
                t = x_82(t);
                t_46 = t;
                t = (ATerm) ATinsert(CheckATermList(t_46), t_82);
                k_16 = t;
                t = SSLsetAnnotations(k_16, k_46);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = x_82(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm z_83 (ATerm t)
  {
    ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL;
    y_83 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_83 = ATgetFirst((ATermList) t);
        x_83 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_47 = NULL,q_47 = NULL,m_16 = NULL;
          t = SSLgetAnnotations(y_83);
          l_47 = t;
          t = x_83;
          t = z_83(t);
          q_47 = t;
          t = (ATerm) ATinsert(CheckATermList(q_47), w_83);
          m_16 = t;
          t = SSLsetAnnotations(m_16, l_47);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_83;
        t = h_80(t);
      }
    return(t);
  }
  t = z_83(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL;
  g_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_83;
    }
  else
    {
      ATerm b_16 (ATerm t)
      {
        t = not_null(i_83);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_83 = ATgetFirst((ATermList) t);
          if(((i_83 != NULL) && (i_83 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_83;
      t = at_end_1_0(b_16, t);
    }
  return(t);
}
ATerm l_84 (ATerm d_84, ATerm t)
{
  ATerm e_84 = NULL;
  t = SSL_explode_term(d_84);
  if(match_cons(t, sym__2))
    {
      ATerm v_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_84;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_84 = NULL,h_84 = NULL,i_84 = NULL;
  i_84 = t;
  if(match_cons(t, sym__2))
    {
      g_84 = ATgetArgument(t, 0);
      h_84 = ATgetArgument(t, 1);
      {
        ATerm w_49 = t;
        int x_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_16 (ATerm t)
            {
              t = h_84;
              return(t);
            }
            t = g_84;
            t = at_end_1_0(d_16, t);
            ;
            LocalPopChoice(x_49);
          }
        else
          {
            t = w_49;
            t = l_84(i_84, t);
          }
      }
    }
  else
    {
      t = l_84(i_84, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm t)
{
  ATerm s_84 (ATerm t)
  {
    ATerm y_49 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_86(t);
        ;
        LocalPopChoice(b_50);
      }
    else
      {
        t = y_49;
        {
          ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,o_16 = NULL;
          t = a_87(t);
          r_84 = t;
          if(match_cons(t, sym__2))
            {
              n_84 = ATgetArgument(t, 0);
              o_84 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_84);
          m_84 = t;
          t = n_84;
          t = c_87(t);
          p_84 = t;
          t = o_84;
          t = s_84(t);
          q_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_84, q_84);
          o_16 = t;
          t = SSLsetAnnotations(o_16, m_84);
          t = b_87(t);
        }
      }
    return(t);
  }
  t = s_84(t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_50 = ATgetArgument(t, 0);
      if(((ATgetType(c_50) != AT_LIST) || !(ATisEmpty(c_50))))
        _fail(t);
      {
        ATerm d_50 = ATgetArgument(t, 1);
        if(((ATgetType(d_50) != AT_LIST) || !(ATisEmpty(d_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_50 = ATgetArgument(t, 0);
      if(((ATgetType(e_50) == AT_LIST) && !(ATisEmpty(e_50))))
        {
          b_85 = ATgetFirst((ATermList) e_50);
          c_85 = (ATerm) ATgetNext((ATermList) e_50);
        }
      else
        _fail(t);
      {
        ATerm f_50 = ATgetArgument(t, 1);
        if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
          {
            d_85 = ATgetFirst((ATermList) f_50);
            e_85 = (ATerm) ATgetNext((ATermList) f_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_85, d_85), (ATerm) ATmakeAppl(sym__2, c_85, e_85));
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL;
  if(match_cons(t, sym__2))
    {
      f_85 = ATgetArgument(t, 0);
      g_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_85), f_85);
  return(t);
}
ATerm t_6 (ATerm m_611, ATerm r_611, ATerm p_57, ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL;
  t = SSL_explode_term(r_611);
  if(match_cons(t, sym__2))
    {
      u_84 = ATgetArgument(t, 0);
      w_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_611);
  if(match_cons(t, sym__2))
    {
      if((u_84 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_84, w_84);
  t = genzip_4_0(e_16, f_16, i_16, _id, t);
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_84, p_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  ATerm i_85 (ATerm t)
  {
    ATerm g_50 = t;
    int j_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_98(t);
        ;
        LocalPopChoice(j_50);
      }
    else
      {
        t = g_50;
        t = k_98(t);
        t = i_85(t);
      }
    return(t);
  }
  t = i_85(t);
  return(t);
}
ATerm for_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  t = m_98(t);
  t = while_not_2_0(n_98, o_98, t);
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm p_85 = NULL;
  p_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_85);
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,s_16 = NULL;
  t_85 = t;
  if(match_cons(t, sym__2))
    {
      r_85 = ATgetArgument(t, 0);
      s_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_85);
  q_85 = t;
  t = s_85;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_85, s_85);
  s_16 = t;
  t = SSLsetAnnotations(s_16, q_85);
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL;
  m_86 = t;
  if(match_cons(t, sym__2))
    {
      n_86 = ATgetArgument(t, 0);
      o_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_86 = ATgetFirst((ATermList) t);
      q_86 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_50 = t;
        int m_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_87(n_86, o_86, m_86, t);
            ;
            LocalPopChoice(m_50);
          }
        else
          {
            t = l_50;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_86), p_86), q_86);
          }
      }
    }
  else
    {
      t = f_87(n_86, o_86, m_86, t);
    }
  return(t);
}
ATerm f_87 (ATerm u_85, ATerm v_85, ATerm w_85, ATerm t)
{
  ATerm x_85 = NULL,a_86 = NULL,t_16 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL;
  t = SSLgetAnnotations(w_85);
  x_85 = t;
  t = v_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_86 = ATgetFirst((ATermList) t);
      g_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_86;
  if(match_cons(t, sym__2))
    {
      e_86 = ATgetArgument(t, 0);
      f_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_86;
        if((e_86 != t))
          {
            _fail(t);
          }
        t = g_86;
        ;
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        t = v_85;
        t = t_6(e_86, f_86, g_86, t);
      }
    a_86 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_85, a_86);
    t_16 = t;
    t = SSLsetAnnotations(t_16, x_85);
  }
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm e_87 = NULL;
  if(match_cons(t, sym__2))
    {
      e_87 = ATgetArgument(t, 0);
      if((e_87 != ATgetArgument(t, 1)))
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
  ATerm p_50 = t;
  int t_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_16, l_16, n_16, t);
      ;
      LocalPopChoice(t_50);
    }
  else
    {
      t = p_50;
      {
        ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL;
        u_86 = t;
        if(match_cons(t, sym__2))
          {
            v_86 = ATgetArgument(t, 0);
            w_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_86;
        t = p_6(p_16, v_86, w_86, t);
      }
    }
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_16 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  if(match_cons(t, sym__2))
    {
      d_48 = ATgetArgument(t, 0);
      e_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(a_17, d_48, e_48, t);
  return(t);
}
ATerm a_17 (ATerm t)
{
  ATerm f_48 = NULL;
  if(match_cons(t, sym__2))
    {
      f_48 = ATgetArgument(t, 0);
      if((f_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  if(match_cons(t, sym__2))
    {
      r_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(f_17, r_48, s_48, t);
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm t_48 = NULL;
  if(match_cons(t, sym__2))
    {
      t_48 = ATgetArgument(t, 0);
      if((t_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_87 (ATerm t)
  {
    ATerm u_50 = t;
    int v_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_95(t);
        ;
        LocalPopChoice(v_50);
      }
    else
      {
        t = u_50;
        {
          ATerm w_50 = t;
          int x_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_87 = NULL,i_87 = NULL,y_47 = NULL,z_47 = NULL;
              h_87 = t;
              t = z_95(t);
              i_87 = t;
              t = h_87;
              {
                ATerm r_16 (ATerm t)
                {
                  ATerm k_87 = NULL;
                  t = t_87(t);
                  k_87 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_87, i_87);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_96(r_16, t_87, u_16, t);
                z_47 = t;
                t = SSL_explode_term(z_47);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_50 = ATgetArgument(t, 0);
                    y_47 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_47;
                t = foldr_3_0(x_16, z_16, _id, t);
              }
              ;
              LocalPopChoice(x_50);
            }
          else
            {
              t = w_50;
              {
                ATerm m_48 = NULL,n_48 = NULL;
                n_48 = t;
                t = SSL_explode_term(n_48);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_51 = ATgetArgument(t, 0);
                    m_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_48;
                t = foldr_3_0(b_17, e_17, t_87, t);
              }
            }
        }
      }
    return(t);
  }
  t = t_87(t);
  return(t);
}
ATerm v_6 (ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL;
  v_87 = t;
  {
    ATerm c_51 = t;
    int d_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
        t = w_6(q_27, r_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_51 = ATgetFirst((ATermList) t);
            u_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_51);
        t = SSL_table_put(q_27, r_27, u_87);
        t = (ATerm) ATmakeAppl(sym__3, q_27, r_27, u_87);
      }
    else
      {
        t = c_51;
        t = SSL_table_remove(q_27, r_27);
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
      }
    t = v_87;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  z_87 = t;
  t = a_83(t);
  y_87 = t;
  {
    ATerm f_51 = t;
    int g_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_88 = NULL;
        t = term_w_47;
        b_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_87, term_w_47);
        t = w_6(y_87, b_88, t);
        ;
        LocalPopChoice(g_51);
      }
    else
      {
        t = f_51;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_87 = ATgetFirst((ATermList) t);
        w_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_47;
    a_88 = t;
    t = SSL_table_put(y_87, a_88, w_87);
    t = x_87;
    {
      ATerm j_17 (ATerm t)
      {
        ATerm c_88 = NULL;
        c_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_87, c_88);
        t = v_6(y_87, c_88, t);
        return(t);
      }
      t = map_1_0(j_17, t);
      t = z_87;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t)
{
  ATerm h_51 = t;
  int i_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_90(t);
      t = b_90(t);
      ;
      LocalPopChoice(i_51);
    }
  else
    {
      t = h_51;
      t = b_90(t);
      _fail(t);
    }
  return(t);
}
ATerm w_6 (ATerm c_29, ATerm d_29, ATerm t)
{
  t = SSL_table_get(c_29, d_29);
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL,i_88 = NULL;
  f_88 = t;
  t = z_82(t);
  e_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_88, term_w_47);
  {
    ATerm j_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_88 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_51 = ATgetArgument(t, 0);
            ATerm m_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_47;
        m_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_88, term_w_47);
        t = w_6(e_88, m_88, t);
        ;
        LocalPopChoice(k_51);
      }
    else
      {
        t = j_51;
        t = (ATerm) ATempty;
      }
    g_88 = t;
    t = term_w_47;
    h_88 = t;
    t = (ATerm) ATinsert(CheckATermList(g_88), (ATerm) ATempty);
    i_88 = t;
    t = SSL_table_put(e_88, h_88, i_88);
    t = f_88;
  }
  return(t);
}
ATerm scope_2_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t)
{
  ATerm u_17 (ATerm t)
  {
    t = end_scope_1_0(b_83, t);
    return(t);
  }
  t = begin_scope_1_0(b_83, t);
  t = restore_always_2_0(c_83, u_17, t);
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm y_17 (ATerm t)
{
  t = scope_2_0(z_17, a_18, t);
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm a_18 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
  u_88 = t;
  t = free_vars_3_0(b_18, c_18, tboundin_3_0, t);
  t_88 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_88, u_88);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm v_51 = ATgetArgument(t, 0);
      s_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_88;
  {
    ATerm w_51 = t;
    int x_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(x_51);
      }
    else
      {
        t = w_51;
        {
          ATerm y_51 = t;
          int z_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(z_51);
            }
          else
            {
              t = y_51;
              {
                ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    w_89 = ATgetArgument(t, 0);
                    x_89 = ATgetArgument(t, 1);
                    y_89 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = s_88;
                t = t_5(w_89, x_89, y_89, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm b_18 (ATerm t)
{
  ATerm v_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_88);
  return(t);
}
ATerm c_18 (ATerm t)
{
  ATerm b_52 = t;
  int d_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_52);
    }
  else
    {
      t = b_52;
      {
        ATerm x_88 = NULL,y_88 = NULL,a_89 = NULL,b_89 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_88 = ATgetArgument(t, 0);
            t = x_88;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_88 = ATgetArgument(t, 0);
                y_88 = ATgetArgument(t, 1);
                a_89 = ATgetArgument(t, 2);
                b_89 = ATgetArgument(t, 3);
                t = a_89;
                t = map_1_0(d_18, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    x_88 = ATgetArgument(t, 0);
                    y_88 = ATgetArgument(t, 1);
                    a_89 = ATgetArgument(t, 2);
                    b_89 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_89;
                t = map_1_0(e_18, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm j_89 = NULL;
  ATerm e_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_89 = ATgetArgument(t, 0);
          {
            ATerm g_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_52);
      t = j_89;
    }
  else
    {
      t = e_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_89;
    }
  return(t);
}
ATerm e_18 (ATerm t)
{
  ATerm s_89 = NULL;
  ATerm h_52 = t;
  int i_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_89 = ATgetArgument(t, 0);
          {
            ATerm j_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_52);
      t = s_89;
    }
  else
    {
      t = h_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_89;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm r_88 = NULL;
  r_88 = t;
  t = scope_2_0(w_17, y_17, t);
  t = r_88;
  return(t);
}
ATerm filter_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
  s_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_90;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_90 = ATgetFirst((ATermList) t);
          u_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_52 = t;
        int l_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_48 = NULL,j_49 = NULL,l_49 = NULL,y_16 = NULL;
            t = SSLgetAnnotations(s_90);
            x_48 = t;
            t = t_90;
            t = z_88(t);
            j_49 = t;
            t = u_90;
            t = filter_1_0(z_88, t);
            l_49 = t;
            t = (ATerm) ATinsert(CheckATermList(l_49), j_49);
            y_16 = t;
            t = SSLsetAnnotations(y_16, x_48);
            ;
            LocalPopChoice(l_52);
          }
        else
          {
            t = k_52;
            t = u_90;
            t = filter_1_0(z_88, t);
          }
      }
    }
  return(t);
}
ATerm x_6 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm m_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_25, q_25);
      ;
      LocalPopChoice(n_52);
    }
  else
    {
      t = m_52;
      t = SSL_addr(p_25, q_25);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL;
  z_90 = t;
  t = o_109(t);
  a_91 = t;
  t = term_k_19;
  b_91 = t;
  t = (ATerm) ATinsert(ATempty, a_91);
  c_91 = t;
  t = SSL_printnl(b_91, c_91);
  t = z_90;
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL,c_17 = NULL;
        t = p_109(t);
        t = z_90;
        if(match_cons(t, sym__2))
          {
            e_91 = ATgetArgument(t, 0);
            f_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_90);
        d_91 = t;
        t = term_q_52;
        h_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_91, term_q_52);
        t = x_6(e_91, h_91, t);
        g_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_91, f_91);
        c_17 = t;
        t = SSLsetAnnotations(c_17, d_91);
        ;
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        {
          ATerm q_91 = NULL,r_91 = NULL,t_49 = NULL,z_49 = NULL,a_50 = NULL,d_17 = NULL;
          if(match_cons(t, sym__2))
            {
              q_91 = ATgetArgument(t, 0);
              r_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_90);
          t_49 = t;
          t = term_q_52;
          a_50 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_91, term_q_52);
          t = x_6(r_91, a_50, t);
          z_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_91, z_49);
          d_17 = t;
          t = SSLsetAnnotations(d_17, t_49);
        }
      }
  }
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = term_r_52;
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm t_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_m_29, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATempty, term_y_23))), term_c_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_h_25, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATempty, term_c_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_j_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), term_c_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, term_i_24), term_y_23))), term_c_22)))))));
      {
        ATerm v_52 = t;
        if((PushChoice() == 0))
          {
            ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL,g_17 = NULL;
            w_91 = t;
            if(match_cons(t, sym_Strategies_1))
              {
                v_91 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_91);
            u_91 = t;
            t = v_91;
            {
              ATerm w_52 = t;
              int x_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_91;
                  ;
                  LocalPopChoice(x_52);
                }
              else
                {
                  t = w_52;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_91;
                }
              t = (ATerm) ATmakeAppl(sym_Strategies_1, v_91);
              g_17 = t;
              t = SSLsetAnnotations(g_17, u_91);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_52;
          }
      }
      ;
      LocalPopChoice(u_52);
    }
  else
    {
      t = t_52;
      {
        ATerm y_91 = NULL,z_91 = NULL;
        t = term_k_19;
        y_91 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        z_91 = t;
        t = SSL_printnl(y_91, z_91);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(f_18, g_18, t);
  return(t);
}
ATerm debug_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL;
  a_92 = t;
  t = p_102(t);
  b_92 = t;
  t = term_k_19;
  c_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_92), b_92);
  d_92 = t;
  t = SSL_printnl(c_92, d_92);
  t = a_92;
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = term_a_53;
  return(t);
}
ATerm i_18 (ATerm t)
{
  t = term_b_53;
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = term_c_53;
  return(t);
}
ATerm test_suite_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,x_17 = NULL,v_17 = NULL;
  t = m_109(t);
  t = debug_1_0(h_18, t);
  t = term_g_53;
  t = n_109(t);
  n_92 = t;
  if(match_cons(t, sym__2))
    {
      i_92 = ATgetArgument(t, 0);
      j_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_92);
  h_92 = t;
  t = i_92;
  t = debug_1_0(i_18, t);
  k_92 = t;
  t = j_92;
  t = debug_1_0(k_18, t);
  l_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_92, l_92);
  v_17 = t;
  t = SSLsetAnnotations(v_17, h_92);
  m_92 = t;
  if(match_cons(t, sym__2))
    {
      f_92 = ATgetArgument(t, 0);
      g_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_92);
  e_92 = t;
  t = g_92;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_92, g_92);
  x_17 = t;
  t = SSLsetAnnotations(x_17, e_92);
  return(t);
}
ATerm l_18 (ATerm t)
{
  t = term_h_53;
  return(t);
}
ATerm m_18 (ATerm t)
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
  t = test_suite_2_0(l_18, m_18, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_io_0_0(t);
  return(t);
}

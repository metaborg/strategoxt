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
ATerm term_w_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_b_43;
ATerm term_s_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_j_37;
ATerm term_f_37;
ATerm term_u_36;
ATerm term_o_36;
ATerm term_m_36;
ATerm term_h_36;
ATerm term_a_36;
ATerm term_y_35;
ATerm term_r_35;
ATerm term_e_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_w_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_v_33;
ATerm term_s_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_g_33;
ATerm term_d_33;
ATerm term_z_32;
ATerm term_v_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_l_31;
ATerm term_g_31;
ATerm term_r_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_a_30;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_a_29;
ATerm term_w_28;
ATerm term_f_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_e_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_t_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_z_24;
ATerm term_q_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_b_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_b_19;
void init_constant_terms (void)
{
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test14a", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("UnEscape", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_g_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("'\\'", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Char_1, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Var_1, term_g_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("cs", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Var_1, term_n_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test14b", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("testing-main", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rob", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Var_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14c", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Match_1, term_b_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test13a", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_SortVar_1, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_VarDec_2, term_a_20, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Build_1, term_b_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Str_1, term_q_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13b", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_All_1, term_u_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_20, (ATerm)ATempty, (ATerm)ATempty, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13c", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("helper", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, term_p_21, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Var_1, term_j_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Match_1, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Build_1, term_l_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Var_1, term_u_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Var_1, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Var_1, term_w_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_f_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Var_1, term_i_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Build_1, term_v_22);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Call_2, term_p_23, (ATerm) ATempty);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Build_1, term_z_22);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Match_1, term_j_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test10a", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Var_1, term_b_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Str_1, term_h_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Var_1, term_l_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test10b", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Call_2, term_f_25, (ATerm) ATempty);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Match_1, term_m_24);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_m_25, term_n_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_22, term_t_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Call_2, term_h_29, (ATerm) ATempty);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_LChoice_2, term_m_25, term_r_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_s_29, term_m_22);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_r_29, term_m_22);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_LChoice_2, term_m_25, term_j_30);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Var_1, term_r_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Match_1, term_s_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Str_1, term_u_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Build_1, term_s_31);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_31, term_m_25);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_App_2, term_m_25, term_s_31);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Match_1, term_d_24);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Var_1, term_m_33);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_v_33, (ATerm) ATempty);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, term_z_33, (ATerm) ATempty);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Defined_2, term_m_42, term_n_42);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Defined_2, term_m_45, term_n_42);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Defined_2, term_m_48, term_q_48);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym__2, term_q_53, term_q_53);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
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
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm q_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm test2_0_0 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm t_5 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm Context_0_0 (ATerm);
ATerm Unbound_0_0 (ATerm);
ATerm Warning_0_0 (ATerm);
ATerm MaybeUnbound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm i_109 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm h_109 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm c_9 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm e_9 (ATerm);
ATerm v_5 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm);
ATerm g_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm w_5 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm);
ATerm t_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm i_10 (ATerm);
ATerm m_10 (ATerm);
ATerm x_5 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm);
ATerm o_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm mark_rdef_0_0 (ATerm);
ATerm n_11 (ATerm);
ATerm IntroduceBound_0_0 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm y_5 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm z_5 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm);
ATerm y_11 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm a_6 (ATerm o_28, ATerm n_28, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm i_12 (ATerm);
ATerm v_12 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm b_6 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm e_6 (ATerm w_27, ATerm x_27, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm f_6 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm);
ATerm g_6 (ATerm d_83 (ATerm), ATerm d_27, ATerm b_27, ATerm);
ATerm x_13 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm z_13 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm c_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm x_14 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm d_15 (ATerm);
ATerm h_15 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm l_6 (ATerm g_79 (ATerm), ATerm v_21, ATerm u_21, ATerm);
ATerm foldr_3_0 (ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm m_6 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm z_21, ATerm y_21, ATerm);
ATerm n_6 (ATerm b_79 (ATerm), ATerm t_21, ATerm s_21, ATerm);
ATerm at_end_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm c_85 (ATerm s_84, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm);
ATerm l_16 (ATerm);
ATerm n_16 (ATerm);
ATerm p_16 (ATerm);
ATerm r_6 (ATerm h_612, ATerm m_612, ATerm p_57, ATerm);
ATerm while_not_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm);
ATerm for_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm q_16 (ATerm);
ATerm t_16 (ATerm);
ATerm v_16 (ATerm);
ATerm u_87 (ATerm j_86, ATerm k_86, ATerm l_86, ATerm);
ATerm w_16 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm b_17 (ATerm);
ATerm d_17 (ATerm);
ATerm f_17 (ATerm);
ATerm h_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm free_vars_3_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm topdown_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm t_6 (ATerm q_27, ATerm r_27, ATerm);
ATerm end_scope_1_0 (ATerm a_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm);
ATerm u_6 (ATerm c_29, ATerm d_29, ATerm);
ATerm begin_scope_1_0 (ATerm z_82 (ATerm), ATerm);
ATerm scope_2_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm i_18 (ATerm);
ATerm l_18 (ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm filter_1_0 (ATerm z_88 (ATerm), ATerm);
ATerm v_6 (ATerm p_25, ATerm q_25, ATerm);
ATerm do_test_2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm debug_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm test_suite_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm x_18 (ATerm);
ATerm z_18 (ATerm);
ATerm use_def_test_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_e_19, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_h_19), (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATinsert(ATempty, term_m_19), term_l_19), term_o_19), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, term_m_19), term_o_19)));
      {
        ATerm p_19 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_19;
          }
      }
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        t = term_r_19;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        b_0 = t;
        t = SSL_printnl(a_0, b_0);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm u_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_19, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_z_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_b_20)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_19, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_z_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_b_20)));
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = u_19;
      {
        ATerm f_0 = NULL,g_0 = NULL;
        t = term_r_19;
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
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_19, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_g_20, (ATerm) ATmakeAppl(sym_CallT_3, term_z_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_b_20))));
      {
        ATerm i_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_20;
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
        t = term_r_19;
        i_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        k_0 = t;
        t = SSL_printnl(i_0, k_0);
        t = term_s_19;
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
  t = term_j_20;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_p_20, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_t_20), term_u_20)), (ATerm) ATmakeAppl(sym_CallT_3, term_v_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_w_20))));
      {
        ATerm z_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_20;
          }
      }
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      {
        ATerm m_0 = NULL,n_0 = NULL;
        t = term_r_19;
        m_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        n_0 = t;
        t = SSL_printnl(m_0, n_0);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm c_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_21;
      t = def_use_def_0_0(t);
      t = term_l_21;
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = c_21;
      {
        ATerm p_0 = NULL,r_0 = NULL;
        t = term_r_19;
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
  t = term_m_21;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_b_22), term_k_21));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_b_22), term_k_21));
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm t_0 = NULL,v_0 = NULL;
        t = term_r_19;
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
  t = term_c_22;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_g_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_i_22, (ATerm) ATinsert(ATempty, term_m_22)), (ATerm)ATmakeAppl(sym_Call_2, term_i_22, (ATerm) ATinsert(ATempty, term_n_22)), term_a_22));
      {
        ATerm o_22 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_22;
          }
      }
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm x_0 = NULL,z_0 = NULL;
        t = term_r_19;
        x_0 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        z_0 = t;
        t = SSL_printnl(x_0, z_0);
        t = term_s_19;
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
  t = term_p_22;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_v_22), term_b_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_y_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_v_22), term_b_20))), term_y_22))))));
      {
        ATerm a_23 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_23;
          }
      }
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm b_1 = NULL,c_1 = NULL;
        t = term_r_19;
        b_1 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        c_1 = t;
        t = SSL_printnl(b_1, c_1);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 = NULL,h_1 = NULL,d_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_e_23, (ATerm)ATinsert(ATempty, term_g_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_v_22), term_b_20)), (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_j_23), term_b_20))), term_y_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_k_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_y_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_t_23, (ATerm) ATmakeAppl(sym_Op_2, term_u_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_22), term_b_20)))), term_v_23))))), term_w_23))))));
      h_1 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm x_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_e_23, (ATerm)ATinsert(ATempty, term_g_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_v_22), term_b_20)), (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_j_23), term_b_20))), term_y_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_k_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_y_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_t_23, (ATerm) ATmakeAppl(sym_Op_2, term_u_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_22), term_b_20)))), term_v_23))))), term_w_23)))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_e_23, (ATerm)ATinsert(ATempty, term_g_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_v_22), term_b_20)), (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_j_23), term_b_20))), term_y_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_k_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_w_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_y_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_t_23, (ATerm) ATmakeAppl(sym_Op_2, term_u_23, (ATerm) ATinsert(ATinsert(ATempty, term_y_22), term_b_20)))), term_v_23))))), term_w_23))))));
      d_0 = t;
      t = SSLsetAnnotations(d_0, d_1);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm j_1 = NULL,l_1 = NULL;
        t = term_r_19;
        j_1 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        l_1 = t;
        t = SSL_printnl(j_1, l_1);
        t = term_s_19;
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
  t = term_y_23;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_u_22, (ATerm)ATinsert(ATinsert(ATempty, term_b_24), term_j_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_i_24), term_l_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_p_20, (ATerm)ATinsert(ATinsert(ATempty, term_b_24), term_j_22), (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, term_w_20), term_l_22)))))));
      {
        ATerm n_24 = t;
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
              ATerm o_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_1;
                  ;
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
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
            t = n_24;
          }
      }
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm t_1 = NULL,u_1 = NULL;
        t = term_r_19;
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
  t = term_q_24;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm r_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 = NULL,b_2 = NULL,q_4 = NULL;
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_u_22, (ATerm)ATinsert(ATinsert(ATempty, term_b_24), term_j_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), term_i_24), term_l_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_p_20, (ATerm)ATinsert(ATinsert(ATempty, term_b_24), term_j_22), (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, term_w_20), term_l_22)))))));
      b_2 = t;
      if(match_cons(t, sym_Overlays_1))
        {
          ATerm y_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_2);
      v_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_u_22, (ATerm)ATinsert(ATinsert(ATempty, term_b_24), term_j_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), term_i_24), term_l_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_p_20, (ATerm)ATinsert(ATinsert(ATempty, term_b_24), term_j_22), (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, term_w_20), term_l_22))))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_u_22, (ATerm)ATinsert(ATinsert(ATempty, term_b_24), term_j_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), term_i_24), term_l_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_p_20, (ATerm)ATinsert(ATinsert(ATempty, term_b_24), term_j_22), (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, term_w_20), term_l_22)))))));
      q_4 = t;
      t = SSLsetAnnotations(q_4, v_1);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = r_24;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = term_r_19;
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        d_2 = t;
        t = SSL_printnl(c_2, d_2);
        t = term_s_19;
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
  t = term_z_24;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22)), (ATerm)ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_d_24)), term_w_25)));
      {
        ATerm x_25 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_25;
          }
      }
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm e_2 = NULL,f_2 = NULL;
        t = term_r_19;
        e_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        f_2 = t;
        t = SSL_printnl(e_2, f_2);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22)), (ATerm)ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_d_24)), term_a_22)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22)), (ATerm)ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_d_24)), term_a_22)));
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = term_r_19;
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
  t = term_e_26;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22)), (ATerm)ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_d_24)), term_w_25));
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
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_r_19;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22)), (ATerm)ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_d_24)), term_a_22));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22)), (ATerm)ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_d_24)), term_a_22));
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm k_2 = NULL,l_2 = NULL;
        t = term_r_19;
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
  t = term_z_26;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm a_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATempty, term_d_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATempty, term_l_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATempty, term_l_22))))));
      {
        ATerm e_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_27;
          }
      }
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = a_27;
      {
        ATerm m_2 = NULL,n_2 = NULL;
        t = term_r_19;
        m_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        n_2 = t;
        t = SSL_printnl(m_2, n_2);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATempty, term_l_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATempty, term_l_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22)))));
      {
        ATerm u_28 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_28;
          }
      }
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm o_2 = NULL,q_2 = NULL;
        t = term_r_19;
        o_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        q_2 = t;
        t = SSL_printnl(o_2, q_2);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm x_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATempty, term_l_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATempty, term_l_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATempty, term_l_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATempty, term_l_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))))));
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = x_28;
      {
        ATerm r_2 = NULL,s_2 = NULL;
        t = term_r_19;
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
  t = term_a_29;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm b_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_u_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATempty, term_l_22)))));
      {
        ATerm v_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_29;
          }
      }
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = b_29;
      {
        ATerm t_2 = NULL,x_2 = NULL;
        t = term_r_19;
        t_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        x_2 = t;
        t = SSL_printnl(t_2, x_2);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_k_30, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATempty, term_l_22)))));
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
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      {
        ATerm z_2 = NULL,a_3 = NULL;
        t = term_r_19;
        z_2 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        a_3 = t;
        t = SSL_printnl(z_2, a_3);
        t = term_s_19;
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
  t = term_r_30;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATempty, term_l_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATempty, term_l_22)))));
      {
        ATerm c_31 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_31;
          }
      }
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      {
        ATerm b_3 = NULL,d_3 = NULL;
        t = term_r_19;
        b_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        d_3 = t;
        t = SSL_printnl(b_3, d_3);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATempty, term_l_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22)))));
      {
        ATerm k_31 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_31;
          }
      }
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
        ATerm f_3 = NULL,g_3 = NULL;
        t = term_r_19;
        f_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        g_3 = t;
        t = SSL_printnl(f_3, g_3);
        t = term_s_19;
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
ATerm c_6 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm n_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_t_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_r_31), term_r_32))), term_x_31)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_t_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_r_31), term_r_32))), term_x_31)))));
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = n_31;
      {
        ATerm h_3 = NULL,j_3 = NULL;
        t = term_r_19;
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
ATerm h_6 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_t_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_v_32), term_x_31)))));
      {
        ATerm w_32 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_32;
          }
      }
      ;
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm k_3 = NULL,l_3 = NULL;
        t = term_r_19;
        k_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        l_3 = t;
        t = SSL_printnl(k_3, l_3);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_r_31), term_r_32))), term_x_31))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_r_31), term_r_32))), term_x_31))));
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      {
        ATerm n_3 = NULL,o_3 = NULL;
        t = term_r_19;
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
  t = do_test_2_0(c_6, d_6, t);
  t = do_test_2_0(h_6, i_6, t);
  t = do_test_2_0(j_6, k_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_24), (ATerm) ATmakeAppl(sym_Seq_2, term_g_33, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATempty, term_d_24))), term_l_22)))))));
      {
        ATerm i_33 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_33;
          }
      }
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm p_3 = NULL,r_3 = NULL;
        t = term_r_19;
        p_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        r_3 = t;
        t = SSL_printnl(p_3, r_3);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, term_n_33), term_l_22))), term_d_24))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, term_n_33), term_l_22))), term_d_24))))));
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      {
        ATerm s_3 = NULL,t_3 = NULL;
        t = term_r_19;
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
  t = do_test_2_0(o_6, q_6, t);
  t = do_test_2_0(i_7, k_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATempty, term_d_24))), term_l_22)))));
      {
        ATerm r_33 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_33;
          }
      }
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      {
        ATerm u_3 = NULL,y_3 = NULL;
        t = term_r_19;
        u_3 = t;
        t = (ATerm) ATinsert(ATempty, term_s_19);
        y_3 = t;
        t = SSL_printnl(u_3, y_3);
        t = term_s_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, term_n_33), term_l_22))), term_d_24)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, term_n_33), term_l_22))), term_d_24)))));
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
      {
        ATerm b_4 = NULL,d_4 = NULL;
        t = term_r_19;
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
  t = do_test_2_0(l_7, q_7, t);
  t = do_test_2_0(x_7, y_7, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm t_5 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  e_4 = t;
  t = (ATerm) ATempty;
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_34, e_21);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_34, e_21));
  t = g_6(z_7, h_4, i_4, t);
  t = (ATerm) ATempty;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_34, e_21);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_34, e_21));
  t = g_6(a_8, f_4, g_4, t);
  t = f_21;
  t = use_vars_0_0(t);
  t = e_4;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm j_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
  p_7 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      t_7 = ATgetArgument(t, 2);
      j_7 = ATgetArgument(t, 3);
      t = j_7;
      if(match_cons(t, sym_StratRule_3))
        {
          m_7 = ATgetArgument(t, 0);
          n_7 = ATgetArgument(t, 1);
          o_7 = ATgetArgument(t, 2);
          {
            ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,m_8 = NULL;
            t = (ATerm) ATempty;
            j_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_34, r_7);
            m_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_34, r_7));
            t = g_6(b_8, j_8, m_8, t);
            t = (ATerm) ATempty;
            h_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_34, r_7);
            i_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_34, r_7));
            t = g_6(c_8, h_8, i_8, t);
            t = (ATerm) ATmakeAppl(sym__3, m_7, n_7, o_7);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, r_7, s_7, t_7, (ATerm) ATmakeAppl(sym_StratRule_3, m_7, n_7, o_7));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              m_7 = ATgetArgument(t, 0);
              n_7 = ATgetArgument(t, 1);
              o_7 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = p_7;
          {
            ATerm e_34 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_3 = NULL,e_3 = NULL,i_3 = NULL,m_3 = NULL;
                t = (ATerm) ATempty;
                i_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_34, r_7);
                m_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_34, r_7));
                t = g_6(d_8, i_3, m_3, t);
                t = (ATerm) ATempty;
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_34, r_7);
                e_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_34, r_7));
                t = g_6(e_8, c_3, e_3, t);
                t = m_7;
                t = bind_vars_0_0(t);
                ;
                LocalPopChoice(f_34);
              }
            else
              {
                t = e_34;
                {
                  ATerm j_34 = t;
                  int k_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_7;
                      t = unbound_vars_0_0(t);
                      ;
                      LocalPopChoice(k_34);
                    }
                  else
                    {
                      t = j_34;
                      t = n_7;
                      t = use_vars_0_0(t);
                    }
                }
              }
            t = (ATerm) ATmakeAppl(sym_RDefT_4, r_7, s_7, t_7, (ATerm) ATmakeAppl(sym_Rule_3, m_7, n_7, o_7));
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          r_7 = ATgetArgument(t, 0);
          s_7 = ATgetArgument(t, 1);
          t_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_7;
      if(match_cons(t, sym_Rule_3))
        {
          u_7 = ATgetArgument(t, 0);
          v_7 = ATgetArgument(t, 1);
          w_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_7;
      {
        ATerm l_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_5 = NULL,f_5 = NULL,h_5 = NULL,i_5 = NULL;
            t = (ATerm) ATempty;
            h_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_34, r_7);
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_34, r_7));
            t = g_6(f_8, h_5, i_5, t);
            t = (ATerm) ATempty;
            e_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_34, r_7);
            f_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_34, r_7));
            t = g_6(g_8, e_5, f_5, t);
            t = u_7;
            t = bind_vars_0_0(t);
            ;
            LocalPopChoice(m_34);
          }
        else
          {
            t = l_34;
            {
              ATerm q_34 = t;
              int r_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_7;
                  t = unbound_vars_0_0(t);
                  ;
                  LocalPopChoice(r_34);
                }
              else
                {
                  t = q_34;
                  t = v_7;
                  t = use_vars_0_0(t);
                }
            }
          }
        t = (ATerm) ATmakeAppl(sym_RDef_3, r_7, s_7, (ATerm) ATmakeAppl(sym_Rule_3, u_7, v_7, w_7));
      }
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  {
    ATerm s_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_8 = NULL,w_8 = NULL,x_8 = NULL;
        t = (ATerm) ATempty;
        w_8 = t;
        t = term_v_33;
        x_8 = t;
        t = term_w_34;
        t = e_6(x_8, w_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm x_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_34) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            u_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_9), term_z_34), u_8), term_y_34);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = s_34;
        {
          ATerm a_35 = t;
          int b_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_9 = NULL,c_10 = NULL,d_10 = NULL;
              t = (ATerm) ATempty;
              c_10 = t;
              t = term_v_33;
              d_10 = t;
              t = term_w_34;
              t = e_6(d_10, c_10, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm c_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_35) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  p_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_9), term_z_34), p_9), term_e_35);
              ;
              LocalPopChoice(b_35);
            }
          else
            {
              t = a_35;
              {
                ATerm f_35 = t;
                int g_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_10 = NULL,p_10 = NULL,q_10 = NULL;
                    t = (ATerm) ATempty;
                    p_10 = t;
                    t = term_v_33;
                    q_10 = t;
                    t = term_w_34;
                    t = e_6(q_10, p_10, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm h_35 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) h_35) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        n_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_9), term_z_34), n_10), term_e_35);
                    ;
                    LocalPopChoice(g_35);
                  }
                else
                  {
                    t = f_35;
                    {
                      ATerm i_35 = t;
                      int j_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_10 = NULL,z_10 = NULL,h_11 = NULL;
                          t = (ATerm) ATempty;
                          z_10 = t;
                          t = term_v_33;
                          h_11 = t;
                          t = term_w_34;
                          t = e_6(h_11, z_10, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm k_35 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) k_35) != ATmakeSymbol("l_0", 0, ATtrue)))
                                _fail(t);
                              u_10 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_9), term_z_34), u_10), term_e_35);
                          ;
                          LocalPopChoice(j_35);
                        }
                      else
                        {
                          t = i_35;
                          {
                            ATerm l_35 = t;
                            int m_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_11 = NULL,b_12 = NULL,d_12 = NULL;
                                t = (ATerm) ATempty;
                                b_12 = t;
                                t = term_v_33;
                                d_12 = t;
                                t = term_w_34;
                                t = e_6(d_12, b_12, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm o_35 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) o_35) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    w_11 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_9), term_z_34), w_11), term_r_35);
                                ;
                                LocalPopChoice(m_35);
                              }
                            else
                              {
                                t = l_35;
                                {
                                  ATerm h_12 = NULL,p_12 = NULL,q_12 = NULL;
                                  t = (ATerm) ATempty;
                                  p_12 = t;
                                  t = term_v_33;
                                  q_12 = t;
                                  t = term_w_34;
                                  t = e_6(q_12, p_12, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm t_35 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) t_35) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      h_12 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_9), term_z_34), h_12), term_r_35);
                                }
                              }
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
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  k_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_10;
  if(match_cons(t, sym_ListVar_1))
    {
      j_10 = ATgetArgument(t, 0);
      {
        ATerm u_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_10;
            e_10 = t;
            t = k_10;
            ;
            LocalPopChoice(w_35);
          }
        else
          {
            t = u_35;
            t = l_10;
            e_10 = t;
            t = k_10;
          }
      }
    }
  else
    {
      t = l_10;
      e_10 = t;
      t = k_10;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_36), e_10), term_y_35);
  t = Context_0_0(t);
  f_10 = t;
  t = term_r_19;
  g_10 = t;
  t = SSL_printnl(g_10, f_10);
  t = f_10;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL,e_15 = NULL,f_15 = NULL;
        t = (ATerm) ATempty;
        e_15 = t;
        t = term_z_33;
        f_15 = t;
        t = term_h_36;
        t = e_6(f_15, e_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_36) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            c_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_o_36), c_15), term_m_36);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        {
          ATerm q_36 = t;
          int s_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_15 = NULL,b_16 = NULL,c_16 = NULL;
              t = (ATerm) ATempty;
              b_16 = t;
              t = term_z_33;
              c_16 = t;
              t = term_h_36;
              t = e_6(c_16, b_16, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm t_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_36) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  o_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_o_36), o_15), term_u_36);
              ;
              LocalPopChoice(s_36);
            }
          else
            {
              t = q_36;
              {
                ATerm v_36 = t;
                int w_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_16 = NULL,y_16 = NULL,z_16 = NULL;
                    t = (ATerm) ATempty;
                    y_16 = t;
                    t = term_z_33;
                    z_16 = t;
                    t = term_h_36;
                    t = e_6(z_16, y_16, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm x_36 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_36) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        u_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_o_36), u_16), term_u_36);
                    ;
                    LocalPopChoice(w_36);
                  }
                else
                  {
                    t = v_36;
                    {
                      ATerm y_36 = t;
                      int z_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_17 = NULL,u_17 = NULL,g_18 = NULL;
                          t = (ATerm) ATempty;
                          u_17 = t;
                          t = term_z_33;
                          g_18 = t;
                          t = term_h_36;
                          t = e_6(g_18, u_17, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm a_37 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) a_37) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              m_17 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_o_36), m_17), term_u_36);
                          ;
                          LocalPopChoice(z_36);
                        }
                      else
                        {
                          t = y_36;
                          {
                            ATerm b_37 = t;
                            int c_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_18 = NULL,y_18 = NULL,a_19 = NULL;
                                t = (ATerm) ATempty;
                                y_18 = t;
                                t = term_z_33;
                                a_19 = t;
                                t = term_h_36;
                                t = e_6(a_19, y_18, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm d_37 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) d_37) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    t_18 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_o_36), t_18), term_f_37);
                                ;
                                LocalPopChoice(c_37);
                              }
                            else
                              {
                                t = b_37;
                                {
                                  ATerm f_19 = NULL,i_19 = NULL,j_19 = NULL;
                                  t = (ATerm) ATempty;
                                  i_19 = t;
                                  t = term_z_33;
                                  j_19 = t;
                                  t = term_h_36;
                                  t = e_6(j_19, i_19, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm g_37 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) g_37) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      f_19 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_o_36), f_19), term_f_37);
                                }
                              }
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
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
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
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_12;
            j_12 = t;
            t = n_12;
            ;
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            t = o_12;
            j_12 = t;
            t = n_12;
          }
      }
    }
  else
    {
      t = o_12;
      j_12 = t;
      t = n_12;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_37), j_12), term_y_35);
  t = Warning_0_0(t);
  k_12 = t;
  t = term_r_19;
  l_12 = t;
  t = SSL_printnl(l_12, k_12);
  t = k_12;
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = NULL,x_12 = NULL;
      t_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      x_12 = t;
      t = SSLgetAnnotations(t_12);
      r_12 = t;
      t = x_12;
      LocalPopChoice(m_37);
      {
        ATerm y_12 = NULL;
        y_12 = t;
        t = r_12;
        {
          ATerm n_37 = t;
          int q_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_37 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) r_37) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_37 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(s_37) != AT_LIST) || !(ATisEmpty(s_37))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(q_37);
              _fail(t);
            }
          else
            {
              t = n_37;
              {
                ATerm t_37 = t;
                int u_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm w_37 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) w_37) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm x_37 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(x_37) != AT_LIST) || !(ATisEmpty(x_37))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_37);
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_12);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = t_37;
                    {
                      ATerm y_37 = t;
                      int z_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm a_38 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) a_38) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm b_38 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(b_38) != AT_LIST) || !(ATisEmpty(b_38))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_37);
                          t = (ATerm) ATmakeAppl(sym_Var_1, s_12);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = y_37;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, s_12);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
          t = y_12;
        }
      }
    }
  else
    {
      t = l_37;
      {
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,u_4 = NULL;
            c_13 = t;
            if(match_cons(t, sym_App_2))
              {
                a_13 = ATgetArgument(t, 0);
                b_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_13);
            z_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, a_13, b_13);
            u_4 = t;
            t = SSLsetAnnotations(u_4, z_12);
            LocalPopChoice(d_38);
            {
              ATerm d_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,v_4 = NULL;
              k_13 = t;
              if(match_cons(t, sym_App_2))
                {
                  g_13 = ATgetArgument(t, 0);
                  h_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_13);
              d_13 = t;
              t = g_13;
              t = unbound_vars_0_0(t);
              i_13 = t;
              t = h_13;
              t = use_vars_0_0(t);
              j_13 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, i_13, j_13);
              v_4 = t;
              t = SSLsetAnnotations(v_4, d_13);
            }
          }
        else
          {
            t = c_38;
            {
              ATerm j_38 = t;
              int n_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,w_4 = NULL;
                  n_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      m_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_13);
                  l_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, m_13);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, l_13);
                  LocalPopChoice(n_38);
                  {
                    ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,t_13 = NULL,a_5 = NULL;
                    t_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        p_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(t_13);
                    o_13 = t;
                    t = p_13;
                    t = unbound_vars_0_0(t);
                    q_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, q_13);
                    a_5 = t;
                    t = SSLsetAnnotations(a_5, o_13);
                  }
                }
              else
                {
                  t = j_38;
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
  ATerm o_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_13 = NULL,v_13 = NULL,y_13 = NULL,l_5 = NULL;
      y_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_13);
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_13);
      l_5 = t;
      t = SSLsetAnnotations(l_5, u_13);
      LocalPopChoice(p_38);
      _fail(t);
    }
  else
    {
      t = o_38;
      {
        ATerm q_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,m_5 = NULL;
            f_14 = t;
            if(match_cons(t, sym_App_2))
              {
                d_14 = ATgetArgument(t, 0);
                e_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_14);
            a_14 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, d_14, e_14);
            m_5 = t;
            t = SSLsetAnnotations(m_5, a_14);
            LocalPopChoice(u_38);
            {
              ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_5 = NULL;
              n_14 = t;
              if(match_cons(t, sym_App_2))
                {
                  h_14 = ATgetArgument(t, 0);
                  i_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_14);
              g_14 = t;
              t = h_14;
              t = unbound_vars_0_0(t);
              l_14 = t;
              t = i_14;
              t = use_vars_0_0(t);
              m_14 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, l_14, m_14);
              o_5 = t;
              t = SSLsetAnnotations(o_5, g_14);
            }
          }
        else
          {
            t = q_38;
            {
              ATerm v_38 = t;
              int w_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,p_5 = NULL;
                  s_14 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      r_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_14);
                  q_14 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, r_14);
                  p_5 = t;
                  t = SSLsetAnnotations(p_5, q_14);
                  LocalPopChoice(w_38);
                  {
                    ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,y_14 = NULL,q_5 = NULL;
                    y_14 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        u_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(y_14);
                    t_14 = t;
                    t = u_14;
                    t = unbound_vars_0_0(t);
                    v_14 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, v_14);
                    q_5 = t;
                    t = SSLsetAnnotations(q_5, t_14);
                  }
                }
              else
                {
                  t = v_38;
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
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,p_6 = NULL;
      l_15 = t;
      if(match_cons(t, sym_Build_1))
        {
          k_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_15);
      j_15 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, k_15);
      p_6 = t;
      t = SSLsetAnnotations(p_6, j_15);
      LocalPopChoice(y_38);
      {
        ATerm m_15 = NULL,n_15 = NULL,q_15 = NULL,r_15 = NULL,s_6 = NULL;
        r_15 = t;
        if(match_cons(t, sym_Build_1))
          {
            n_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_15);
        m_15 = t;
        t = n_15;
        t = use_vars_0_0(t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, q_15);
        s_6 = t;
        t = SSLsetAnnotations(s_6, m_15);
      }
    }
  else
    {
      t = x_38;
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,w_6 = NULL;
            u_15 = t;
            if(match_cons(t, sym_Match_1))
              {
                t_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_15);
            s_15 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, t_15);
            w_6 = t;
            t = SSLsetAnnotations(w_6, s_15);
            LocalPopChoice(a_39);
            {
              ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,x_6 = NULL;
              y_15 = t;
              if(match_cons(t, sym_Match_1))
                {
                  w_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_15);
              v_15 = t;
              t = w_15;
              t = bind_vars_0_0(t);
              x_15 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, x_15);
              x_6 = t;
              t = SSLsetAnnotations(x_6, v_15);
            }
          }
        else
          {
            t = z_38;
            {
              ATerm c_39 = t;
              int f_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_15 = NULL,a_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,y_6 = NULL;
                  f_16 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      a_16 = ATgetArgument(t, 0);
                      d_16 = ATgetArgument(t, 1);
                      e_16 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_16);
                  z_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, a_16, d_16, e_16);
                  y_6 = t;
                  t = SSLsetAnnotations(y_6, z_15);
                  LocalPopChoice(f_39);
                  {
                    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
                    x_17 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        y_17 = ATgetArgument(t, 0);
                        z_17 = ATgetArgument(t, 1);
                        a_18 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm g_39 = t;
                      int h_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_19 = NULL,v_19 = NULL,z_6 = NULL;
                          t = SSLgetAnnotations(x_17);
                          q_19 = t;
                          t = y_17;
                          t = bind_vars_0_0(t);
                          v_19 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, v_19, z_17, a_18);
                          z_6 = t;
                          t = SSLsetAnnotations(z_6, q_19);
                          ;
                          LocalPopChoice(h_39);
                        }
                      else
                        {
                          t = g_39;
                          {
                            ATerm i_39 = t;
                            int j_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_20 = NULL,m_20 = NULL,a_7 = NULL;
                                t = SSLgetAnnotations(x_17);
                                h_20 = t;
                                t = a_18;
                                t = unbound_vars_0_0(t);
                                m_20 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, y_17, z_17, m_20);
                                a_7 = t;
                                t = SSLsetAnnotations(a_7, h_20);
                                ;
                                LocalPopChoice(j_39);
                              }
                            else
                              {
                                t = i_39;
                                {
                                  ATerm y_20 = NULL,h_21 = NULL,b_7 = NULL;
                                  t = SSLgetAnnotations(x_17);
                                  y_20 = t;
                                  t = z_17;
                                  t = use_vars_0_0(t);
                                  h_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, y_17, h_21, a_18);
                                  b_7 = t;
                                  t = SSLsetAnnotations(b_7, y_20);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = c_39;
                  {
                    ATerm k_39 = t;
                    int l_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,c_7 = NULL;
                        f_18 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            c_18 = ATgetArgument(t, 0);
                            d_18 = ATgetArgument(t, 1);
                            e_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_18);
                        b_18 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, c_18, d_18, e_18);
                        c_7 = t;
                        t = SSLsetAnnotations(c_7, b_18);
                        LocalPopChoice(l_39);
                        {
                          ATerm o_20 = NULL,x_20 = NULL,a_21 = NULL,g_21 = NULL;
                          o_20 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              x_20 = ATgetArgument(t, 0);
                              a_21 = ATgetArgument(t, 1);
                              g_21 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm m_39 = t;
                            int n_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_22 = NULL,k_22 = NULL,d_7 = NULL;
                                t = SSLgetAnnotations(o_20);
                                d_22 = t;
                                t = a_21;
                                t = unbound_vars_0_0(t);
                                k_22 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, x_20, k_22, g_21);
                                d_7 = t;
                                t = SSLsetAnnotations(d_7, d_22);
                                ;
                                LocalPopChoice(n_39);
                              }
                            else
                              {
                                t = m_39;
                                {
                                  ATerm h_23 = NULL,q_23 = NULL,e_7 = NULL;
                                  t = SSLgetAnnotations(o_20);
                                  h_23 = t;
                                  t = g_21;
                                  t = use_vars_0_0(t);
                                  q_23 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, x_20, a_21, q_23);
                                  e_7 = t;
                                  t = SSLsetAnnotations(e_7, h_23);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = k_39;
                        {
                          ATerm o_39 = t;
                          int p_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_21 = NULL,q_21 = NULL,r_21 = NULL,w_21 = NULL,x_21 = NULL,f_7 = NULL;
                              x_21 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  q_21 = ATgetArgument(t, 0);
                                  r_21 = ATgetArgument(t, 1);
                                  w_21 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(x_21);
                              j_21 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, q_21, r_21, w_21);
                              f_7 = t;
                              t = SSLsetAnnotations(f_7, j_21);
                              LocalPopChoice(p_39);
                              {
                                ATerm l_23 = NULL,m_23 = NULL,r_23 = NULL,s_23 = NULL;
                                l_23 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    m_23 = ATgetArgument(t, 0);
                                    r_23 = ATgetArgument(t, 1);
                                    s_23 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm q_39 = t;
                                  int r_39 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm u_24 = NULL,e_25 = NULL,g_7 = NULL;
                                      t = SSLgetAnnotations(l_23);
                                      u_24 = t;
                                      t = r_23;
                                      t = unbound_vars_0_0(t);
                                      e_25 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, m_23, e_25, s_23);
                                      g_7 = t;
                                      t = SSLsetAnnotations(g_7, u_24);
                                      ;
                                      LocalPopChoice(r_39);
                                    }
                                  else
                                    {
                                      t = q_39;
                                      {
                                        ATerm c_26 = NULL,q_26 = NULL,h_7 = NULL;
                                        t = SSLgetAnnotations(l_23);
                                        c_26 = t;
                                        t = s_23;
                                        t = use_vars_0_0(t);
                                        q_26 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, m_23, r_23, q_26);
                                        h_7 = t;
                                        t = SSLsetAnnotations(h_7, c_26);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = o_39;
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
ATerm k_8 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm e_24 = NULL,g_24 = NULL,j_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      g_24 = ATgetArgument(t, 0);
      j_24 = ATgetArgument(t, 1);
      k_24 = ATgetArgument(t, 2);
      e_24 = ATgetArgument(t, 3);
      {
        ATerm s_24 = NULL,t_24 = NULL,w_24 = NULL,x_24 = NULL;
        t = (ATerm) ATempty;
        w_24 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_39, g_24);
        x_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_39, g_24));
        t = g_6(k_8, w_24, x_24, t);
        t = (ATerm) ATempty;
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_39, g_24);
        t_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_39, g_24));
        t = g_6(l_8, s_24, t_24, t);
        t = e_24;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_24, j_24, k_24, e_24);
      }
    }
  else
    {
      ATerm c_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          g_24 = ATgetArgument(t, 0);
          j_24 = ATgetArgument(t, 1);
          k_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      h_25 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_39, g_24);
      i_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_39, g_24));
      t = g_6(n_8, h_25, i_25, t);
      t = (ATerm) ATempty;
      c_25 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_39, g_24);
      g_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_39, g_24));
      t = g_6(o_8, c_25, g_25, t);
      t = k_24;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, g_24, j_24, k_24);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,o_25 = NULL,r_25 = NULL,r_8 = NULL;
  ATerm p_8 (ATerm t)
  {
    ATerm s_25 = NULL,u_25 = NULL,v_25 = NULL,y_25 = NULL,d_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,n_26 = NULL,z_8 = NULL,y_8 = NULL;
    n_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        g_26 = ATgetArgument(t, 0);
        h_26 = ATgetArgument(t, 1);
        i_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_26);
    f_26 = t;
    t = g_26;
    t = j_109(t);
    j_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_26, h_26, i_26);
    y_8 = t;
    t = SSLsetAnnotations(y_8, f_26);
    k_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        u_25 = ATgetArgument(t, 0);
        v_25 = ATgetArgument(t, 1);
        y_25 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_26);
    s_25 = t;
    t = v_25;
    t = j_109(t);
    d_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_25, d_26, y_25);
    z_8 = t;
    t = SSLsetAnnotations(z_8, s_25);
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    ATerm o_26 = NULL,p_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,a_9 = NULL;
    u_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        p_26 = ATgetArgument(t, 0);
        r_26 = ATgetArgument(t, 1);
        s_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_26);
    o_26 = t;
    t = s_26;
    t = j_109(t);
    t_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_26, r_26, t_26);
    a_9 = t;
    t = SSLsetAnnotations(a_9, o_26);
    return(t);
  }
  r_25 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      k_25 = ATgetArgument(t, 0);
      l_25 = ATgetArgument(t, 1);
      o_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_25);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_25, l_25, o_25);
  r_8 = t;
  t = SSLsetAnnotations(r_8, j_25);
  t = abstract_choice_2_0(p_8, q_8, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,s_27 = NULL,t_27 = NULL,h_9 = NULL;
  ATerm s_8 (ATerm t)
  {
    ATerm u_27 = NULL,v_27 = NULL,c_28 = NULL,f_28 = NULL,g_28 = NULL,i_9 = NULL;
    g_28 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        v_27 = ATgetArgument(t, 0);
        c_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_28);
    u_27 = t;
    t = v_27;
    t = i_109(t);
    f_28 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_28, c_28);
    i_9 = t;
    t = SSLsetAnnotations(i_9, u_27);
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    ATerm h_28 = NULL,k_28 = NULL,t_28 = NULL,y_28 = NULL,f_29 = NULL,j_9 = NULL;
    f_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        k_28 = ATgetArgument(t, 0);
        t_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_29);
    h_28 = t;
    t = t_28;
    t = i_109(t);
    y_28 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_28, y_28);
    j_9 = t;
    t = SSLsetAnnotations(j_9, h_28);
    return(t);
  }
  t_27 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      o_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_27);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, o_27, s_27);
  h_9 = t;
  t = SSLsetAnnotations(h_9, n_27);
  t = abstract_choice_2_0(s_8, t_8, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,o_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,b_30 = NULL;
  y_29 = t;
  t = save_MarkVar_0_0(t);
  i_29 = t;
  t = y_29;
  t = k_109(t);
  x_29 = t;
  t = save_MarkVar_0_0(t);
  o_29 = t;
  t = term_x_39;
  b_30 = t;
  t = SSL_table_destroy(b_30);
  t = term_x_39;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_39, i_29);
  t = a_6(z_29, i_29, t);
  t = x_29;
  t = l_109(t);
  w_29 = t;
  t = o_29;
  t = isect_MarkVar_0_0(t);
  t = w_29;
  return(t);
}
ATerm mark_choice_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,h_30 = NULL,n_9 = NULL;
  ATerm v_8 (ATerm t)
  {
    ATerm i_30 = NULL,l_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,o_9 = NULL;
    p_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        l_30 = ATgetArgument(t, 0);
        n_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_30);
    i_30 = t;
    t = l_30;
    t = h_109(t);
    o_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, o_30, n_30);
    o_9 = t;
    t = SSLsetAnnotations(o_9, i_30);
    return(t);
  }
  ATerm b_9 (ATerm t)
  {
    ATerm q_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,r_9 = NULL;
    v_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        s_30 = ATgetArgument(t, 0);
        t_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_30);
    q_30 = t;
    t = t_30;
    t = h_109(t);
    u_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, s_30, u_30);
    r_9 = t;
    t = SSLsetAnnotations(r_9, q_30);
    return(t);
  }
  h_30 = t;
  if(match_cons(t, sym_Choice_2))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_30);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, d_30, e_30);
  n_9 = t;
  t = SSLsetAnnotations(n_9, c_30);
  t = abstract_choice_2_0(v_8, b_9, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,h_31 = NULL,m_31 = NULL,o_31 = NULL,q_31 = NULL,x_9 = NULL,w_9 = NULL;
  x_30 = t;
  t = save_MarkVar_0_0(t);
  w_30 = t;
  t = x_30;
  if(match_cons(t, sym_Rec_2))
    {
      m_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  h_31 = t;
  t = o_31;
  t = mark_buv_0_0(t);
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, m_31, q_31);
  w_9 = t;
  t = SSLsetAnnotations(w_9, h_31);
  t = w_30;
  t = isect_MarkVar_0_0(t);
  t = x_30;
  if(match_cons(t, sym_Rec_2))
    {
      d_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  y_30 = t;
  t = e_31;
  t = mark_buv_0_0(t);
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, d_31, f_31);
  x_9 = t;
  t = SSLsetAnnotations(x_9, y_30);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,h_10 = NULL,b_10 = NULL,a_10 = NULL;
  p_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      l_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
      n_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_32);
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, l_32, m_32, n_32);
  a_10 = t;
  t = SSLsetAnnotations(a_10, k_32);
  o_32 = t;
  t = save_MarkVar_0_0(t);
  v_31 = t;
  t = o_32;
  if(match_cons(t, sym_PrimT_3))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
      h_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_32);
  e_32 = t;
  t = h_32;
  t = map_1_0(c_9, t);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, f_32, g_32, i_32);
  b_10 = t;
  t = SSLsetAnnotations(b_10, e_32);
  j_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
      b_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_32);
  w_31 = t;
  t = a_32;
  t = mark_buv_0_0(t);
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, z_31, c_32, b_32);
  h_10 = t;
  t = SSLsetAnnotations(h_10, w_31);
  d_32 = t;
  t = v_31;
  t = isect_MarkVar_0_0(t);
  t = d_32;
  return(t);
}
ATerm alltd_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm q_32 (ATerm t)
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_84(t);
        ;
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        t = SRTS_all(q_32, t);
      }
    return(t);
  }
  t = q_32(t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm n_35 = NULL,p_35 = NULL,q_35 = NULL,s_35 = NULL;
  p_35 = t;
  if(match_cons(t, sym_CallT_3))
    {
      q_35 = ATgetArgument(t, 0);
      s_35 = ATgetArgument(t, 1);
      n_35 = ATgetArgument(t, 2);
      {
        ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,p_27 = NULL,b_28 = NULL,d_28 = NULL,e_28 = NULL,i_28 = NULL,j_28 = NULL,l_28 = NULL,m_28 = NULL,p_28 = NULL,q_28 = NULL,v_28 = NULL,b_11 = NULL,a_11 = NULL,y_10 = NULL;
        t = SSLgetAnnotations(p_35);
        q_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, q_35, s_35, n_35);
        y_10 = t;
        t = SSLsetAnnotations(y_10, q_28);
        v_28 = t;
        t = save_MarkVar_0_0(t);
        g_27 = t;
        t = v_28;
        if(match_cons(t, sym_CallT_3))
          {
            i_28 = ATgetArgument(t, 0);
            j_28 = ATgetArgument(t, 1);
            l_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_28);
        e_28 = t;
        t = l_28;
        t = map_1_0(d_9, t);
        m_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, i_28, j_28, m_28);
        a_11 = t;
        t = SSLsetAnnotations(a_11, e_28);
        p_28 = t;
        if(match_cons(t, sym_CallT_3))
          {
            i_27 = ATgetArgument(t, 0);
            j_27 = ATgetArgument(t, 1);
            p_27 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_28);
        h_27 = t;
        t = j_27;
        t = mark_buv_0_0(t);
        b_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, i_27, b_28, p_27);
        b_11 = t;
        t = SSLsetAnnotations(b_11, h_27);
        d_28 = t;
        t = g_27;
        t = isect_MarkVar_0_0(t);
        t = d_28;
      }
    }
  else
    {
      ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,p_29 = NULL,q_29 = NULL,t_29 = NULL,d_11 = NULL,c_11 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          q_35 = ATgetArgument(t, 0);
          s_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_35);
      q_29 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, q_35, s_35);
      c_11 = t;
      t = SSLsetAnnotations(c_11, q_29);
      t_29 = t;
      t = save_MarkVar_0_0(t);
      j_29 = t;
      t = t_29;
      if(match_cons(t, sym_Call_2))
        {
          l_29 = ATgetArgument(t, 0);
          m_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_29);
      k_29 = t;
      t = m_29;
      t = mark_buv_0_0(t);
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, l_29, n_29);
      d_11 = t;
      t = SSLsetAnnotations(d_11, k_29);
      p_29 = t;
      t = j_29;
      t = isect_MarkVar_0_0(t);
      t = p_29;
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm v_5 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm t)
{
  ATerm v_35 = NULL;
  ATerm f_9 (ATerm t)
  {
    t = w_60;
    t = map_1_0(IntroduceBound_0_0, t);
    t = x_60;
    t = mark_build_vars_0_0(t);
    if(((v_35 != NULL) && (v_35 != t)))
      _fail(t);
    else
      v_35 = t;
    return(t);
  }
  t = scope_2_0(e_9, f_9, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, v_60, w_60, not_null(v_35));
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm l_9 (ATerm t)
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
ATerm m_9 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm i_36 = NULL,j_36 = NULL,l_36 = NULL,n_36 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_36 = ATgetArgument(t, 0);
            t = i_36;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_36 = ATgetArgument(t, 0);
                j_36 = ATgetArgument(t, 1);
                l_36 = ATgetArgument(t, 2);
                n_36 = ATgetArgument(t, 3);
                t = l_36;
                t = map_1_0(q_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_36 = ATgetArgument(t, 0);
                    j_36 = ATgetArgument(t, 1);
                    l_36 = ATgetArgument(t, 2);
                    n_36 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_36;
                t = map_1_0(s_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm e_37 = NULL;
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_37 = ATgetArgument(t, 0);
          {
            ATerm j_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_40);
      t = e_37;
    }
  else
    {
      t = d_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_37;
    }
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm v_37 = NULL;
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_37 = ATgetArgument(t, 0);
          {
            ATerm p_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_40);
      t = v_37;
    }
  else
    {
      t = k_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_37;
    }
  return(t);
}
ATerm w_5 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  ATerm k_9 (ATerm t)
  {
    t = p_60;
    t = free_vars_3_0(l_9, m_9, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = p_60;
    t = mark_match_vars_0_0(t);
    if(((d_36 != NULL) && (d_36 != t)))
      _fail(t);
    else
      d_36 = t;
    t = r_60;
    t = mark_buv_0_0(t);
    if(((e_36 != NULL) && (e_36 != t)))
      _fail(t);
    else
      e_36 = t;
    t = t_60;
    t = mark_build_vars_0_0(t);
    if(((f_36 != NULL) && (f_36 != t)))
      _fail(t);
    else
      f_36 = t;
    return(t);
  }
  t = scope_2_0(g_9, k_9, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_36), not_null(f_36), not_null(e_36)));
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm i_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_38);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      {
        ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,t_38 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_38 = ATgetArgument(t, 0);
            t = k_38;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_38 = ATgetArgument(t, 0);
                l_38 = ATgetArgument(t, 1);
                m_38 = ATgetArgument(t, 2);
                t_38 = ATgetArgument(t, 3);
                t = m_38;
                t = map_1_0(i_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_38 = ATgetArgument(t, 0);
                    l_38 = ATgetArgument(t, 1);
                    m_38 = ATgetArgument(t, 2);
                    t_38 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_38;
                t = map_1_0(m_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm b_39 = NULL;
  ATerm u_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_39 = ATgetArgument(t, 0);
          {
            ATerm b_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_40);
      t = b_39;
    }
  else
    {
      t = u_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_39;
    }
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm s_39 = NULL;
  ATerm c_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_39 = ATgetArgument(t, 0);
          {
            ATerm g_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_41);
      t = s_39;
    }
  else
    {
      t = c_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_39;
    }
  return(t);
}
ATerm x_5 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  ATerm u_9 (ATerm t)
  {
    t = j_60;
    t = free_vars_3_0(y_9, z_9, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = j_60;
    t = mark_match_vars_0_0(t);
    if(((f_38 != NULL) && (f_38 != t)))
      _fail(t);
    else
      f_38 = t;
    t = l_60;
    t = mark_buv_0_0(t);
    if(((g_38 != NULL) && (g_38 != t)))
      _fail(t);
    else
      g_38 = t;
    t = n_60;
    t = mark_build_vars_0_0(t);
    if(((h_38 != NULL) && (h_38 != t)))
      _fail(t);
    else
      h_38 = t;
    return(t);
  }
  t = scope_2_0(t_9, u_9, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_38), not_null(h_38), not_null(g_38)));
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm p_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_41);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm h_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_41);
    }
  else
    {
      t = h_41;
      {
        ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_41 = ATgetArgument(t, 0);
            t = x_41;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_41 = ATgetArgument(t, 0);
                y_41 = ATgetArgument(t, 1);
                z_41 = ATgetArgument(t, 2);
                a_42 = ATgetArgument(t, 3);
                t = z_41;
                t = map_1_0(s_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    x_41 = ATgetArgument(t, 0);
                    y_41 = ATgetArgument(t, 1);
                    z_41 = ATgetArgument(t, 2);
                    a_42 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = z_41;
                t = map_1_0(t_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm t_42 = NULL;
  ATerm l_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_42 = ATgetArgument(t, 0);
          {
            ATerm q_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_41);
      t = t_42;
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_42;
    }
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm g_43 = NULL;
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_43 = ATgetArgument(t, 0);
          {
            ATerm t_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_41);
      t = g_43;
    }
  else
    {
      t = r_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_43;
    }
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm o_44 = NULL;
  ATerm u_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_44 = ATgetArgument(t, 0);
          {
            ATerm w_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_41);
      t = o_44;
    }
  else
    {
      t = u_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_44;
    }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm r_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_44);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      {
        ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_44 = ATgetArgument(t, 0);
            t = z_44;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_44 = ATgetArgument(t, 0);
                a_45 = ATgetArgument(t, 1);
                b_45 = ATgetArgument(t, 2);
                c_45 = ATgetArgument(t, 3);
                t = b_45;
                t = map_1_0(g_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_44 = ATgetArgument(t, 0);
                    a_45 = ATgetArgument(t, 1);
                    b_45 = ATgetArgument(t, 2);
                    c_45 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_45;
                t = map_1_0(i_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm p_45 = NULL;
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm f_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_42);
      t = p_45;
    }
  else
    {
      t = d_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_45;
    }
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm c_46 = NULL;
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_46 = ATgetArgument(t, 0);
          {
            ATerm l_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_42);
      t = c_46;
    }
  else
    {
      t = h_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_46;
    }
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,q_40 = NULL,r_40 = NULL,v_40 = NULL,w_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      q_40 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
      v_40 = ATgetArgument(t, 2);
      {
        ATerm i_41 = NULL,k_41 = NULL,m_41 = NULL,o_41 = NULL;
        t = v_40;
        if(match_cons(t, sym_Rule_3))
          {
            m_40 = ATgetArgument(t, 0);
            n_40 = ATgetArgument(t, 1);
            o_40 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = v_40;
        t = free_vars_3_0(o_10, r_10, tboundin_3_0, t);
        i_41 = t;
        {
          ATerm w_10 (ATerm t)
          {
            t = i_41;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = m_40;
            t = mark_match_vars_0_0(t);
            if(((k_41 != NULL) && (k_41 != t)))
              _fail(t);
            else
              k_41 = t;
            t = o_40;
            t = mark_buv_0_0(t);
            if(((m_41 != NULL) && (m_41 != t)))
              _fail(t);
            else
              m_41 = t;
            t = n_40;
            t = mark_build_vars_0_0(t);
            if(((o_41 != NULL) && (o_41 != t)))
              _fail(t);
            else
              o_41 = t;
            return(t);
          }
          t = scope_2_0(v_10, w_10, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, q_40, r_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_41), not_null(o_41), not_null(m_41)));
        }
      }
    }
  else
    {
      ATerm y_43 = NULL,a_44 = NULL,c_44 = NULL,i_44 = NULL,k_44 = NULL,l_44 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          q_40 = ATgetArgument(t, 0);
          r_40 = ATgetArgument(t, 1);
          v_40 = ATgetArgument(t, 2);
          w_40 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = w_40;
      if(match_cons(t, sym_Rule_3))
        {
          y_40 = ATgetArgument(t, 0);
          z_40 = ATgetArgument(t, 1);
          a_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_40;
      t = map_1_0(x_10, t);
      y_43 = t;
      t = w_40;
      t = free_vars_3_0(e_11, f_11, tboundin_3_0, t);
      l_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_44, y_43);
      t = diff_0_0(t);
      a_44 = t;
      {
        ATerm m_11 (ATerm t)
        {
          t = y_43;
          t = map_1_0(IntroduceBound_0_0, t);
          t = a_44;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = y_40;
          t = mark_match_vars_0_0(t);
          if(((c_44 != NULL) && (c_44 != t)))
            _fail(t);
          else
            c_44 = t;
          t = a_41;
          t = mark_buv_0_0(t);
          if(((i_44 != NULL) && (i_44 != t)))
            _fail(t);
          else
            i_44 = t;
          t = z_40;
          t = mark_build_vars_0_0(t);
          if(((k_44 != NULL) && (k_44 != t)))
            _fail(t);
          else
            k_44 = t;
          return(t);
        }
        t = scope_2_0(j_11, m_11, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_40, r_40, v_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_44), not_null(k_44), not_null(i_44)));
      }
    }
  return(t);
}
ATerm n_11 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_46);
  g_46 = t;
  t = term_o_42;
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_46), term_o_42);
  t = g_6(n_11, g_46, h_46, t);
  t = f_46;
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm r_46 = NULL;
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_46 = ATgetArgument(t, 0);
          {
            ATerm r_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_42);
      t = r_46;
    }
  else
    {
      t = p_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_46;
    }
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm y_5 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm t)
{
  ATerm j_46 = NULL,l_46 = NULL;
  t = j_59;
  t = map_1_0(o_11, t);
  j_46 = t;
  {
    ATerm x_11 (ATerm t)
    {
      t = j_46;
      t = map_1_0(IntroduceBound_0_0, t);
      t = l_59;
      t = mark_buv_0_0(t);
      if(((l_46 != NULL) && (l_46 != t)))
        _fail(t);
      else
        l_46 = t;
      return(t);
    }
    t = scope_2_0(p_11, x_11, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, h_59, i_59, j_59, not_null(l_46));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,x_47 = NULL,a_48 = NULL,b_48 = NULL,d_48 = NULL;
  t_47 = t;
  if(match_cons(t, sym__2))
    {
      u_47 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_48;
  if(match_cons(t, sym_Undefined_0))
    {
      t = u_47;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_s_42;
        }
      else
        {
          t = term_s_42;
        }
    }
  else
    {
      ATerm u_42 = t;
      int w_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm x_42 = ATgetArgument(t, 0);
              d_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(w_42);
          t = u_47;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_s_42;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  x_47 = ATgetArgument(t, 0);
                  a_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm y_42 = t;
                int z_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, a_48, d_48);
                    {
                      ATerm a_43 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm b_31 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              b_31 = ATgetArgument(t, 0);
                              if((b_31 != ATgetArgument(t, 1)))
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
                          t = a_43;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, x_47, term_b_43);
                    }
                    ;
                    LocalPopChoice(z_42);
                  }
                else
                  {
                    t = y_42;
                    t = d_48;
                    if((a_48 != t))
                      {
                        _fail(t);
                      }
                    t = u_47;
                  }
              }
            }
        }
      else
        {
          t = u_42;
          t = u_47;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_s_42;
        }
    }
  return(t);
}
ATerm z_5 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
  t = term_x_39;
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_39, s_57);
  t = u_6(w_48, s_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_48 = ATgetFirst((ATermList) t);
      {
        ATerm c_43 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_57, u_48);
  t = CompareEntries_0_0(t);
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_57, (ATerm) ATinsert(CheckATermList(r_57), v_48));
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm s_49 = NULL,w_49 = NULL,y_49 = NULL,b_50 = NULL,c_50 = NULL;
  c_50 = t;
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      w_49 = ATgetArgument(t, 1);
      t = w_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_49 = ATgetFirst((ATermList) t);
          b_50 = (ATerm) ATgetNext((ATermList) t);
          t = y_49;
          {
            ATerm d_43 = t;
            int e_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm f_43 = ATgetArgument(t, 0);
                    ATerm i_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(e_43);
                t = s_49;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = c_50;
                  }
                else
                  {
                    ATerm j_43 = t;
                    int k_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_50;
                        t = z_5(s_49, y_49, b_50, t);
                        ;
                        LocalPopChoice(k_43);
                      }
                    else
                      {
                        t = j_43;
                        t = c_50;
                      }
                  }
              }
            else
              {
                t = d_43;
                t = s_49;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = c_50;
                  }
                else
                  {
                    t = c_50;
                  }
              }
          }
        }
      else
        {
          t = s_49;
          if(match_cons(t, sym_Scopes_0))
            {
              t = c_50;
            }
          else
            {
              t = c_50;
            }
        }
    }
  else
    {
      t = c_50;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm i_49 = NULL,p_49 = NULL,r_49 = NULL;
  t = map_1_0(y_11, t);
  i_49 = t;
  t = term_x_39;
  r_49 = t;
  t = SSL_table_destroy(r_49);
  t = term_x_39;
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_39, i_49);
  t = a_6(p_49, i_49, t);
  t = i_49;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,m_51 = NULL;
  m_51 = t;
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm n_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_43);
        t = m_51;
      }
    else
      {
        t = l_43;
        {
          ATerm o_43 = t;
          int p_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm q_43 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(p_43);
              t = m_51;
            }
          else
            {
              t = o_43;
              {
                ATerm r_43 = t;
                int t_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm u_43 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_43);
                    t = m_51;
                  }
                else
                  {
                    t = r_43;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm v_43 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = m_51;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    j_51 = t;
    t = m_51;
    t = SRTS_one(mark_buv_0_0, t);
    k_51 = t;
    t = j_51;
    t = isect_MarkVar_0_0(t);
    t = k_51;
  }
  return(t);
}
ATerm a_6 (ATerm o_28, ATerm n_28, ATerm t)
{
  ATerm z_11 (ATerm t)
  {
    ATerm o_51 = NULL,p_51 = NULL;
    if(match_cons(t, sym__2))
      {
        o_51 = ATgetArgument(t, 0);
        p_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(o_28, o_51, p_51);
    t = (ATerm) ATmakeAppl(sym__3, o_28, o_51, p_51);
    return(t);
  }
  t = n_28;
  t = map_1_0(z_11, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_51 = NULL;
  ATerm a_12 (ATerm t)
  {
    ATerm v_51 = NULL,w_51 = NULL;
    v_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_51), v_51);
    t = u_6(not_null(q_51), v_51, t);
    w_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_51, w_51);
    return(t);
  }
  if(((q_51 != NULL) && (q_51 != t)))
    _fail(t);
  else
    q_51 = t;
  t = SSL_table_keys(q_51);
  t = map_1_0(a_12, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_x_39;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm t)
{
  ATerm n_52 = NULL,p_52 = NULL,q_52 = NULL;
  t = save_MarkVar_0_0(t);
  {
    ATerm c_12 (ATerm t)
    {
      ATerm o_53 (ATerm s_52, ATerm t)
      {
        ATerm t_52 = NULL,u_52 = NULL,y_52 = NULL,z_52 = NULL;
        t = s_52;
        if(match_cons(t, sym__2))
          {
            ATerm w_43 = ATgetArgument(t, 0);
            t_52 = w_43;
            if(match_cons(w_43, sym_Var_1))
              {
                u_52 = ATgetArgument(w_43, 0);
              }
            else
              _fail(t);
            {
              ATerm x_43 = ATgetArgument(t, 1);
              if(((ATgetType(x_43) == AT_LIST) && !(ATisEmpty(x_43))))
                {
                  ATerm b_44 = ATgetFirst((ATermList) x_43);
                  if(match_cons(b_44, sym_Defined_2))
                    {
                      y_52 = ATgetArgument(b_44, 0);
                      {
                        ATerm d_44 = ATgetArgument(b_44, 1);
                        if((ATgetSymbol((ATermAppl) d_44) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  z_52 = (ATerm) ATgetNext((ATermList) x_43);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_58;
        {
          ATerm e_12 (ATerm t)
          {
            if((u_52 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(e_12, t);
          t = (ATerm) ATmakeAppl(sym__2, t_52, (ATerm) ATinsert(CheckATermList(z_52), (ATerm) ATmakeAppl(sym_Defined_2, y_52, term_b_43)));
        }
        return(t);
      }
      ATerm h_53 = NULL,k_53 = NULL;
      k_53 = t;
      {
        ATerm e_44 = t;
        int f_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                h_53 = ATgetArgument(t, 0);
                {
                  ATerm g_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_44);
            t = h_53;
            if(match_cons(t, sym_Scopes_0))
              {
                t = k_53;
              }
            else
              {
                ATerm h_44 = t;
                int j_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = o_53(k_53, t);
                    ;
                    LocalPopChoice(j_44);
                  }
                else
                  {
                    t = h_44;
                    t = k_53;
                  }
              }
          }
        else
          {
            t = e_44;
            {
              ATerm m_44 = t;
              int n_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_53(k_53, t);
                  ;
                  LocalPopChoice(n_44);
                }
              else
                {
                  t = m_44;
                  t = k_53;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(c_12, t);
    n_52 = t;
    t = term_x_39;
    q_52 = t;
    t = SSL_table_destroy(q_52);
    t = term_x_39;
    p_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_39, n_52);
    t = a_6(p_52, n_52, t);
    t = n_52;
  }
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm q_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_54);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_44);
    }
  else
    {
      t = p_44;
      {
        ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_54 = ATgetArgument(t, 0);
            t = s_54;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_54 = ATgetArgument(t, 0);
                t_54 = ATgetArgument(t, 1);
                u_54 = ATgetArgument(t, 2);
                v_54 = ATgetArgument(t, 3);
                t = u_54;
                t = map_1_0(i_12, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    s_54 = ATgetArgument(t, 0);
                    t_54 = ATgetArgument(t, 1);
                    u_54 = ATgetArgument(t, 2);
                    v_54 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = u_54;
                t = map_1_0(v_12, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm j_55 = NULL;
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_55 = ATgetArgument(t, 0);
          {
            ATerm u_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_44);
      t = j_55;
    }
  else
    {
      t = s_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_55;
    }
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm d_56 = NULL;
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_56 = ATgetArgument(t, 0);
          {
            ATerm y_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_44);
      t = d_56;
    }
  else
    {
      t = w_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_56;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,z_53 = NULL,a_54 = NULL,c_54 = NULL,d_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,l_11 = NULL,k_11 = NULL;
  p_54 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_54 = ATgetArgument(t, 0);
      n_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_54);
  h_54 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, i_54, n_54);
  k_11 = t;
  t = SSLsetAnnotations(k_11, h_54);
  o_54 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_53 = ATgetArgument(t, 0);
      {
        ATerm d_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_53;
  t = free_vars_3_0(f_12, g_12, tboundin_3_0, t);
  s_53 = t;
  t = undefine_unbound_MarkVar_0_1(s_53, t);
  t_53 = t;
  t = o_54;
  if(match_cons(t, sym_Let_2))
    {
      z_53 = ATgetArgument(t, 0);
      a_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_54);
  v_53 = t;
  t = z_53;
  {
    ATerm w_13 (ATerm t)
    {
      ATerm i_56 = NULL,l_56 = NULL,n_56 = NULL;
      i_56 = t;
      t = term_x_39;
      n_56 = t;
      t = SSL_table_destroy(n_56);
      t = term_x_39;
      l_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_39, t_53);
      t = a_6(l_56, t_53, t);
      t = i_56;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(w_13, t);
    c_54 = t;
    t = term_x_39;
    g_54 = t;
    t = SSL_table_destroy(g_54);
    t = term_x_39;
    f_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_39, t_53);
    t = a_6(f_54, t_53, t);
    t = a_54;
    t = mark_buv_0_0(t);
    d_54 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, c_54, d_54);
    l_11 = t;
    t = SSLsetAnnotations(l_11, v_53);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,q_11 = NULL;
      q_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_56);
      o_56 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_56);
      q_11 = t;
      t = SSLsetAnnotations(q_11, o_56);
      LocalPopChoice(f_45);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = e_45;
      {
        ATerm g_45 = t;
        int h_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_56 = NULL,v_56 = NULL,x_56 = NULL,e_57 = NULL,r_11 = NULL;
            e_57 = t;
            if(match_cons(t, sym_App_2))
              {
                v_56 = ATgetArgument(t, 0);
                x_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_57);
            u_56 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, v_56, x_56);
            r_11 = t;
            t = SSLsetAnnotations(r_11, u_56);
            LocalPopChoice(h_45);
            {
              ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,l_57 = NULL,w_57 = NULL,x_57 = NULL,s_11 = NULL;
              x_57 = t;
              if(match_cons(t, sym_App_2))
                {
                  g_57 = ATgetArgument(t, 0);
                  h_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_57);
              f_57 = t;
              t = g_57;
              t = mark_buv_0_0(t);
              l_57 = t;
              t = h_57;
              t = mark_build_vars_0_0(t);
              w_57 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, l_57, w_57);
              s_11 = t;
              t = SSLsetAnnotations(s_11, f_57);
            }
          }
        else
          {
            t = g_45;
            {
              ATerm j_45 = t;
              int k_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_58 = NULL,b_58 = NULL,g_58 = NULL,u_11 = NULL;
                  g_58 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      b_58 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_58);
                  a_58 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, b_58);
                  u_11 = t;
                  t = SSLsetAnnotations(u_11, a_58);
                  LocalPopChoice(k_45);
                  {
                    ATerm l_58 = NULL,m_58 = NULL,q_58 = NULL,r_58 = NULL,v_11 = NULL;
                    r_58 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        m_58 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(r_58);
                    l_58 = t;
                    t = m_58;
                    t = mark_buv_0_0(t);
                    q_58 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, q_58);
                    v_11 = t;
                    t = SSLsetAnnotations(v_11, l_58);
                  }
                }
              else
                {
                  t = j_45;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm b_6 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,a_59 = NULL;
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, z_27);
  t = u_6(y_27, z_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_45 = ATgetFirst((ATermList) t);
      v_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_58), a_28);
  a_59 = t;
  t = SSL_table_put(y_27, z_27, a_59);
  t = w_58;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
  c_61 = t;
  t = term_x_39;
  d_61 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_61);
  e_61 = t;
  t = term_n_45;
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_39, (ATerm)ATmakeAppl(sym_Var_1, c_61), term_n_45);
  t = b_6(d_61, e_61, f_61, t);
  t = c_61;
  return(t);
}
ATerm e_6 (ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm g_61 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
  t = u_6(w_27, x_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_61 = ATgetFirst((ATermList) t);
      {
        ATerm o_45 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_61;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL;
  d_63 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_32 = NULL,y_32 = NULL,a_33 = NULL,h_33 = NULL;
        t = term_x_39;
        h_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_39, d_63);
        t = e_6(h_33, d_63, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_45 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_45) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            x_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, e_63);
        y_32 = t;
        t = (ATerm) ATinsert(ATempty, x_32);
        a_33 = t;
        t = SSLsetAnnotations(y_32, a_33);
        ;
        LocalPopChoice(r_45);
      }
    else
      {
        t = q_45;
        {
          ATerm t_45 = t;
          int u_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,i_34 = NULL;
              t = term_x_39;
              i_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_39, d_63);
              t = e_6(i_34, d_63, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_45 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_45) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  w_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, e_63);
              x_33 = t;
              t = (ATerm) ATinsert(ATempty, w_33);
              y_33 = t;
              t = SSLsetAnnotations(x_33, y_33);
              ;
              LocalPopChoice(u_45);
            }
          else
            {
              t = t_45;
              {
                ATerm p_34 = NULL,t_34 = NULL,u_34 = NULL,d_35 = NULL;
                t = term_x_39;
                d_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_39, d_63);
                t = e_6(d_35, d_63, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm x_45 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_45) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    p_34 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, e_63);
                t_34 = t;
                t = (ATerm) ATinsert(ATempty, p_34);
                u_34 = t;
                t = SSLsetAnnotations(t_34, u_34);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,u_63 = NULL,u_12 = NULL;
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
    }
  u_63 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_63);
  p_63 = t;
  t = q_63;
  t = DeclareBound_0_0(t);
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_63);
  u_12 = t;
  t = SSLsetAnnotations(u_12, p_63);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_64 = NULL,e_64 = NULL,l_64 = NULL,w_12 = NULL;
      l_64 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_64);
      a_64 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_64);
      w_12 = t;
      t = SSLsetAnnotations(w_12, a_64);
      LocalPopChoice(b_46);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = a_46;
      {
        ATerm d_46 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,e_13 = NULL;
            q_64 = t;
            if(match_cons(t, sym_App_2))
              {
                o_64 = ATgetArgument(t, 0);
                p_64 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_64);
            m_64 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, o_64, p_64);
            e_13 = t;
            t = SSLsetAnnotations(e_13, m_64);
            LocalPopChoice(e_46);
            {
              ATerm r_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,f_13 = NULL;
              a_65 = t;
              if(match_cons(t, sym_App_2))
                {
                  w_64 = ATgetArgument(t, 0);
                  x_64 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_65);
              r_64 = t;
              t = w_64;
              t = mark_buv_0_0(t);
              y_64 = t;
              t = x_64;
              t = mark_build_vars_0_0(t);
              z_64 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, y_64, z_64);
              f_13 = t;
              t = SSLsetAnnotations(f_13, r_64);
            }
          }
        else
          {
            t = d_46;
            {
              ATerm i_46 = t;
              int k_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,r_13 = NULL;
                  d_65 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_65 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_65);
                  b_65 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, c_65);
                  r_13 = t;
                  t = SSLsetAnnotations(r_13, b_65);
                  LocalPopChoice(k_46);
                  {
                    ATerm e_65 = NULL,f_65 = NULL,m_65 = NULL,n_65 = NULL,s_13 = NULL;
                    n_65 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        f_65 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(n_65);
                    e_65 = t;
                    t = f_65;
                    t = mark_buv_0_0(t);
                    m_65 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, m_65);
                    s_13 = t;
                    t = SSLsetAnnotations(s_13, e_65);
                  }
                }
              else
                {
                  t = i_46;
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
  ATerm m_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_66 = NULL,s_66 = NULL;
      r_66 = t;
      if(match_cons(t, sym_Match_1))
        {
          s_66 = ATgetArgument(t, 0);
          {
            ATerm x_35 = NULL,z_35 = NULL,j_14 = NULL;
            t = SSLgetAnnotations(r_66);
            x_35 = t;
            t = s_66;
            t = mark_match_vars_0_0(t);
            z_35 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, z_35);
            j_14 = t;
            t = SSLsetAnnotations(j_14, x_35);
          }
        }
      else
        {
          ATerm p_36 = NULL,r_36 = NULL,k_14 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              s_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_66);
          p_36 = t;
          t = s_66;
          t = mark_build_vars_0_0(t);
          r_36 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, r_36);
          k_14 = t;
          t = SSLsetAnnotations(k_14, p_36);
        }
      ;
      LocalPopChoice(n_46);
    }
  else
    {
      t = m_46;
      {
        ATerm p_46 = t;
        int q_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            ;
            LocalPopChoice(q_46);
          }
        else
          {
            t = p_46;
            {
              ATerm s_46 = t;
              int t_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  ;
                  LocalPopChoice(t_46);
                }
              else
                {
                  t = s_46;
                  {
                    ATerm u_46 = t;
                    int v_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        ;
                        LocalPopChoice(v_46);
                      }
                    else
                      {
                        t = u_46;
                        {
                          ATerm w_46 = t;
                          int x_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,x_66 = NULL,a_67 = NULL;
                              t_66 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  u_66 = ATgetArgument(t, 0);
                                  v_66 = ATgetArgument(t, 1);
                                  x_66 = ATgetArgument(t, 2);
                                  a_67 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = t_66;
                              t = y_5(u_66, v_66, x_66, a_67, t);
                              ;
                              LocalPopChoice(x_46);
                            }
                          else
                            {
                              t = w_46;
                              {
                                ATerm y_46 = t;
                                int a_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(a_47);
                                  }
                                else
                                  {
                                    t = y_46;
                                    {
                                      ATerm b_47 = t;
                                      int d_47 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,s_67 = NULL,v_67 = NULL;
                                          m_67 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              n_67 = ATgetArgument(t, 0);
                                              t = n_67;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  i_67 = ATgetArgument(t, 0);
                                                  k_67 = ATgetArgument(t, 1);
                                                  l_67 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = m_67;
                                              t = x_5(i_67, k_67, l_67, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  n_67 = ATgetArgument(t, 0);
                                                  t = n_67;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      i_67 = ATgetArgument(t, 0);
                                                      k_67 = ATgetArgument(t, 1);
                                                      l_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = m_67;
                                                  t = w_5(i_67, k_67, l_67, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      n_67 = ATgetArgument(t, 0);
                                                      s_67 = ATgetArgument(t, 1);
                                                      v_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = m_67;
                                                  t = v_5(n_67, s_67, v_67, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(d_47);
                                        }
                                      else
                                        {
                                          t = b_47;
                                          {
                                            ATerm e_47 = t;
                                            int f_47 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(f_47);
                                              }
                                            else
                                              {
                                                t = e_47;
                                                {
                                                  ATerm g_47 = t;
                                                  int h_47 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(h_47);
                                                    }
                                                  else
                                                    {
                                                      t = g_47;
                                                      {
                                                        ATerm i_47 = t;
                                                        int j_47 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm l_68 = NULL;
                                                            l_68 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm m_47 = ATgetArgument(t, 0);
                                                                ATerm n_47 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = l_68;
                                                            t = u_5(t);
                                                            ;
                                                            LocalPopChoice(j_47);
                                                          }
                                                        else
                                                          {
                                                            t = i_47;
                                                            {
                                                              ATerm o_47 = t;
                                                              int p_47 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(p_47);
                                                                }
                                                              else
                                                                {
                                                                  t = o_47;
                                                                  {
                                                                    ATerm q_47 = t;
                                                                    int r_47 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(r_47);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_47;
                                                                        {
                                                                          ATerm s_47 = t;
                                                                          int v_47 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(v_47);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_47;
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
ATerm f_6 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  {
    ATerm c_48 = t;
    int e_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_48 = ATgetArgument(t, 0);
            ATerm g_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
        t = u_6(l_27, m_27, t);
        ;
        LocalPopChoice(e_48);
      }
    else
      {
        t = c_48;
        t = (ATerm) ATempty;
      }
    s_68 = t;
    t = (ATerm) ATinsert(CheckATermList(s_68), k_27);
    t_68 = t;
    t = SSL_table_put(l_27, m_27, t_68);
    t = r_68;
  }
  return(t);
}
ATerm g_6 (ATerm d_83 (ATerm), ATerm d_27, ATerm b_27, ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
  j_69 = t;
  t = d_83(t);
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_69, d_27, b_27);
  t = f_6(g_69, d_27, b_27, t);
  {
    ATerm h_48 = t;
    int k_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_69 = NULL;
        t = term_l_48;
        m_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_69, term_l_48);
        t = u_6(g_69, m_69, t);
        ;
        LocalPopChoice(k_48);
      }
    else
      {
        t = h_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_69 = ATgetFirst((ATermList) t);
        i_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_48;
    k_69 = t;
    t = (ATerm) ATinsert(CheckATermList(i_69), (ATerm) ATinsert(CheckATermList(h_69), d_27));
    l_69 = t;
    t = SSL_table_put(g_69, k_69, l_69);
    t = j_69;
  }
  return(t);
}
ATerm x_13 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_69);
  o_69 = t;
  t = term_r_48;
  p_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_69), term_r_48);
  t = g_6(x_13, o_69, p_69, t);
  t = n_69;
  return(t);
}
ATerm z_13 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm u_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,w_14 = NULL;
  c_70 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_70);
  u_69 = t;
  t = a_70;
  {
    ATerm b_14 (ATerm t)
    {
      ATerm d_70 = NULL;
      d_70 = t;
      t = z_69;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = d_70;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(z_13, b_14, t);
    b_70 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, z_69, b_70);
    w_14 = t;
    t = SSLsetAnnotations(w_14, u_69);
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,u_74 = NULL,v_74 = NULL;
  u_74 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_74 = ATgetArgument(t, 0);
      p_74 = ATgetArgument(t, 1);
      {
        ATerm k_37 = NULL,o_37 = NULL,p_37 = NULL,z_14 = NULL;
        t = SSLgetAnnotations(u_74);
        k_37 = t;
        t = v_74;
        t = y_92(t);
        o_37 = t;
        t = p_74;
        t = w_92(t);
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_37, p_37);
        z_14 = t;
        t = SSLsetAnnotations(z_14, k_37);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          v_74 = ATgetArgument(t, 0);
          p_74 = ATgetArgument(t, 1);
          q_74 = ATgetArgument(t, 2);
          r_74 = ATgetArgument(t, 3);
          {
            ATerm e_38 = NULL,r_38 = NULL,s_38 = NULL,d_39 = NULL,e_39 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(u_74);
            e_38 = t;
            t = v_74;
            t = y_92(t);
            r_38 = t;
            t = p_74;
            t = y_92(t);
            s_38 = t;
            t = q_74;
            t = y_92(t);
            d_39 = t;
            t = r_74;
            t = w_92(t);
            e_39 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_38, s_38, d_39, e_39);
            g_15 = t;
            t = SSLsetAnnotations(g_15, e_38);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              v_74 = ATgetArgument(t, 0);
              p_74 = ATgetArgument(t, 1);
              q_74 = ATgetArgument(t, 2);
              r_74 = ATgetArgument(t, 3);
              {
                ATerm a_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,g_16 = NULL;
                t = SSLgetAnnotations(u_74);
                a_40 = t;
                t = v_74;
                t = y_92(t);
                f_40 = t;
                t = p_74;
                t = y_92(t);
                g_40 = t;
                t = q_74;
                t = y_92(t);
                h_40 = t;
                t = r_74;
                t = w_92(t);
                i_40 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, f_40, g_40, h_40, i_40);
                g_16 = t;
                t = SSLsetAnnotations(g_16, a_40);
              }
            }
          else
            {
              ATerm d_41 = NULL,f_41 = NULL,h_16 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  v_74 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_74);
              d_41 = t;
              t = v_74;
              t = w_92(t);
              f_41 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, f_41);
              h_16 = t;
              t = SSLsetAnnotations(h_16, d_41);
            }
        }
    }
  return(t);
}
ATerm map_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm h_76 (ATerm t)
  {
    ATerm b_76 = NULL,c_76 = NULL,g_76 = NULL;
    b_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_76;
      }
    else
      {
        ATerm g_42 = NULL,j_42 = NULL,k_42 = NULL,m_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_76 = ATgetFirst((ATermList) t);
            g_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_76);
        g_42 = t;
        t = c_76;
        t = r_79(t);
        j_42 = t;
        t = g_76;
        t = h_76(t);
        k_42 = t;
        t = (ATerm) ATinsert(CheckATermList(k_42), j_42);
        m_16 = t;
        t = SSLsetAnnotations(m_16, g_42);
      }
    return(t);
  }
  t = h_76(t);
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm s_76 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_76);
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm t_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_48);
    }
  else
    {
      t = t_48;
      {
        ATerm u_76 = NULL,x_76 = NULL,z_76 = NULL,a_77 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_76 = ATgetArgument(t, 0);
            t = u_76;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_76 = ATgetArgument(t, 0);
                x_76 = ATgetArgument(t, 1);
                z_76 = ATgetArgument(t, 2);
                a_77 = ATgetArgument(t, 3);
                t = z_76;
                t = map_1_0(p_14, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_76 = ATgetArgument(t, 0);
                    x_76 = ATgetArgument(t, 1);
                    z_76 = ATgetArgument(t, 2);
                    a_77 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = z_76;
                t = map_1_0(x_14, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm r_77 = NULL;
  ATerm z_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_77 = ATgetArgument(t, 0);
          {
            ATerm b_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_49);
      t = r_77;
    }
  else
    {
      t = z_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_77;
    }
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm f_78 = NULL;
  ATerm c_49 = t;
  int d_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_78 = ATgetArgument(t, 0);
          {
            ATerm f_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_49);
      t = f_78;
    }
  else
    {
      t = c_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_78;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(c_14, o_14, tboundin_3_0, t);
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm l_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_79);
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm g_49 = t;
  int k_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_49);
    }
  else
    {
      t = g_49;
      {
        ATerm n_79 = NULL,o_79 = NULL,q_79 = NULL,t_79 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_79 = ATgetArgument(t, 0);
            t = n_79;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_79 = ATgetArgument(t, 0);
                o_79 = ATgetArgument(t, 1);
                q_79 = ATgetArgument(t, 2);
                t_79 = ATgetArgument(t, 3);
                t = q_79;
                t = map_1_0(d_15, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_79 = ATgetArgument(t, 0);
                    o_79 = ATgetArgument(t, 1);
                    q_79 = ATgetArgument(t, 2);
                    t_79 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_79;
                t = map_1_0(h_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm d_80 = NULL;
  ATerm l_49 = t;
  int m_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_80 = ATgetArgument(t, 0);
          {
            ATerm n_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_49);
      t = d_80;
    }
  else
    {
      t = l_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_80;
    }
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm o_80 = NULL;
  ATerm o_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_80 = ATgetArgument(t, 0);
          {
            ATerm u_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_49);
      t = o_80;
    }
  else
    {
      t = o_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_80;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm y_78 = NULL,e_79 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_79 = ATgetArgument(t, 0);
      t = e_79;
      if(match_cons(t, sym_Rule_3))
        {
          y_78 = ATgetArgument(t, 0);
          {
            ATerm v_49 = ATgetArgument(t, 1);
          }
          {
            ATerm z_49 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = y_78;
      t = free_vars_3_0(a_15, b_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_79 = ATgetArgument(t, 0);
          {
            ATerm a_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_79;
    }
  return(t);
}
ATerm l_6 (ATerm g_79 (ATerm), ATerm v_21, ATerm u_21, ATerm t)
{
  ATerm h_81 (ATerm t)
  {
    ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL;
    c_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_81 = ATgetFirst((ATermList) t);
            e_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_50 = t;
          int e_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_81;
              {
                ATerm i_15 (ATerm t)
                {
                  t = u_21;
                  return(t);
                }
                t = m_6(g_79, i_15, d_81, e_81, t);
                t = h_81(t);
              }
              ;
              LocalPopChoice(e_50);
            }
          else
            {
              t = d_50;
              {
                ATerm v_42 = NULL,h_43 = NULL,o_16 = NULL;
                t = SSLgetAnnotations(c_81);
                v_42 = t;
                t = e_81;
                t = h_81(t);
                h_43 = t;
                t = (ATerm) ATinsert(CheckATermList(h_43), d_81);
                o_16 = t;
                t = SSLsetAnnotations(o_16, v_42);
              }
            }
        }
      }
    return(t);
  }
  t = v_21;
  t = h_81(t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL;
  k_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_81;
      t = t_81(t);
    }
  else
    {
      ATerm p_81 = NULL,q_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_81 = ATgetFirst((ATermList) t);
          m_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_81;
      t = v_81(t);
      p_81 = t;
      t = m_81;
      t = foldr_3_0(t_81, u_81, v_81, t);
      q_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_81, q_81);
      t = u_81(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm s_82 (ATerm t)
  {
    ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL;
    p_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_82 = ATgetFirst((ATermList) t);
        r_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_50 = t;
      int g_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_43 = NULL,z_43 = NULL,r_16 = NULL;
          t = SSLgetAnnotations(p_82);
          s_43 = t;
          t = q_82;
          t = b_80(t);
          z_43 = t;
          t = (ATerm) ATinsert(CheckATermList(r_82), z_43);
          r_16 = t;
          t = SSLsetAnnotations(r_16, s_43);
          ;
          LocalPopChoice(g_50);
        }
      else
        {
          t = f_50;
          {
            ATerm v_44 = NULL,i_45 = NULL,s_16 = NULL;
            t = SSLgetAnnotations(p_82);
            v_44 = t;
            t = r_82;
            t = s_82(t);
            i_45 = t;
            t = (ATerm) ATinsert(CheckATermList(i_45), q_82);
            s_16 = t;
            t = SSLsetAnnotations(s_16, v_44);
          }
        }
    }
    return(t);
  }
  t = s_82(t);
  return(t);
}
ATerm m_6 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm z_21, ATerm y_21, ATerm t)
{
  t = k_79(t);
  {
    ATerm p_15 (ATerm t)
    {
      ATerm v_82 = NULL;
      v_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, v_82);
      t = j_79(t);
      return(t);
    }
    t = fetch_1_0(p_15, t);
    t = y_21;
  }
  return(t);
}
ATerm n_6 (ATerm b_79 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  ATerm s_83 (ATerm t)
  {
    ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL;
    n_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_83;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_83 = ATgetFirst((ATermList) t);
            p_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_50 = t;
          int j_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_83;
              {
                ATerm i_16 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = m_6(b_79, i_16, o_83, p_83, t);
                t = s_83(t);
              }
              ;
              LocalPopChoice(j_50);
            }
          else
            {
              t = i_50;
              {
                ATerm w_45 = NULL,o_46 = NULL,a_17 = NULL;
                t = SSLgetAnnotations(n_83);
                w_45 = t;
                t = p_83;
                t = s_83(t);
                o_46 = t;
                t = (ATerm) ATinsert(CheckATermList(o_46), o_83);
                a_17 = t;
                t = SSLsetAnnotations(a_17, w_45);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = s_83(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm o_84 (ATerm t)
  {
    ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
    n_84 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_84 = ATgetFirst((ATermList) t);
        m_84 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_46 = NULL,c_47 = NULL,c_17 = NULL;
          t = SSLgetAnnotations(n_84);
          z_46 = t;
          t = m_84;
          t = o_84(t);
          c_47 = t;
          t = (ATerm) ATinsert(CheckATermList(c_47), l_84);
          c_17 = t;
          t = SSLsetAnnotations(c_17, z_46);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_84;
        t = h_80(t);
      }
    return(t);
  }
  t = o_84(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL;
  v_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_83;
    }
  else
    {
      ATerm j_16 (ATerm t)
      {
        t = not_null(x_83);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_83 = ATgetFirst((ATermList) t);
          if(((x_83 != NULL) && (x_83 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_83;
      t = at_end_1_0(j_16, t);
    }
  return(t);
}
ATerm c_85 (ATerm s_84, ATerm t)
{
  ATerm t_84 = NULL;
  t = SSL_explode_term(s_84);
  if(match_cons(t, sym__2))
    {
      ATerm k_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_50) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_84;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL;
  x_84 = t;
  if(match_cons(t, sym__2))
    {
      v_84 = ATgetArgument(t, 0);
      w_84 = ATgetArgument(t, 1);
      {
        ATerm l_50 = t;
        int m_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_16 (ATerm t)
            {
              t = w_84;
              return(t);
            }
            t = v_84;
            t = at_end_1_0(k_16, t);
            ;
            LocalPopChoice(m_50);
          }
        else
          {
            t = l_50;
            t = c_85(x_84, t);
          }
      }
    }
  else
    {
      t = c_85(x_84, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm t)
{
  ATerm j_85 (ATerm t)
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_86(t);
        ;
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        {
          ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,e_17 = NULL;
          t = a_87(t);
          i_85 = t;
          if(match_cons(t, sym__2))
            {
              e_85 = ATgetArgument(t, 0);
              f_85 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_85);
          d_85 = t;
          t = e_85;
          t = c_87(t);
          g_85 = t;
          t = f_85;
          t = j_85(t);
          h_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_85, h_85);
          e_17 = t;
          t = SSLsetAnnotations(e_17, d_85);
          t = b_87(t);
        }
      }
    return(t);
  }
  t = j_85(t);
  return(t);
}
ATerm l_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_50 = ATgetArgument(t, 0);
      if(((ATgetType(p_50) != AT_LIST) || !(ATisEmpty(p_50))))
        _fail(t);
      {
        ATerm q_50 = ATgetArgument(t, 1);
        if(((ATgetType(q_50) != AT_LIST) || !(ATisEmpty(q_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_50 = ATgetArgument(t, 0);
      if(((ATgetType(r_50) == AT_LIST) && !(ATisEmpty(r_50))))
        {
          q_85 = ATgetFirst((ATermList) r_50);
          r_85 = (ATerm) ATgetNext((ATermList) r_50);
        }
      else
        _fail(t);
      {
        ATerm s_50 = ATgetArgument(t, 1);
        if(((ATgetType(s_50) == AT_LIST) && !(ATisEmpty(s_50))))
          {
            s_85 = ATgetFirst((ATermList) s_50);
            t_85 = (ATerm) ATgetNext((ATermList) s_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_85, s_85), (ATerm) ATmakeAppl(sym__2, r_85, t_85));
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL;
  if(match_cons(t, sym__2))
    {
      u_85 = ATgetArgument(t, 0);
      v_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_85), u_85);
  return(t);
}
ATerm r_6 (ATerm h_612, ATerm m_612, ATerm p_57, ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL;
  t = SSL_explode_term(m_612);
  if(match_cons(t, sym__2))
    {
      l_85 = ATgetArgument(t, 0);
      n_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_612);
  if(match_cons(t, sym__2))
    {
      if((l_85 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_85, n_85);
  t = genzip_4_0(l_16, n_16, p_16, _id, t);
  o_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_85, p_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  ATerm x_85 (ATerm t)
  {
    ATerm t_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_98(t);
        ;
        LocalPopChoice(u_50);
      }
    else
      {
        t = t_50;
        t = k_98(t);
        t = x_85(t);
      }
    return(t);
  }
  t = x_85(t);
  return(t);
}
ATerm for_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  t = m_98(t);
  t = while_not_2_0(n_98, o_98, t);
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm e_86 = NULL;
  e_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_86);
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,g_17 = NULL;
  i_86 = t;
  if(match_cons(t, sym__2))
    {
      g_86 = ATgetArgument(t, 0);
      h_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_86);
  f_86 = t;
  t = h_86;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_86, h_86);
  g_17 = t;
  t = SSLsetAnnotations(g_17, f_86);
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL;
  g_87 = t;
  if(match_cons(t, sym__2))
    {
      h_87 = ATgetArgument(t, 0);
      i_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_87 = ATgetFirst((ATermList) t);
      k_87 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_50 = t;
        int w_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_87(h_87, i_87, g_87, t);
            ;
            LocalPopChoice(w_50);
          }
        else
          {
            t = v_50;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_87), j_87), k_87);
          }
      }
    }
  else
    {
      t = u_87(h_87, i_87, g_87, t);
    }
  return(t);
}
ATerm u_87 (ATerm j_86, ATerm k_86, ATerm l_86, ATerm t)
{
  ATerm m_86 = NULL,p_86 = NULL,i_17 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL;
  t = SSLgetAnnotations(l_86);
  m_86 = t;
  t = k_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_86 = ATgetFirst((ATermList) t);
      v_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_86;
  if(match_cons(t, sym__2))
    {
      t_86 = ATgetArgument(t, 0);
      u_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_50 = t;
    int y_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_86;
        if((t_86 != t))
          {
            _fail(t);
          }
        t = v_86;
        ;
        LocalPopChoice(y_50);
      }
    else
      {
        t = x_50;
        t = k_86;
        t = r_6(t_86, u_86, v_86, t);
      }
    p_86 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_86, p_86);
    i_17 = t;
    t = SSLsetAnnotations(i_17, m_86);
  }
  return(t);
}
ATerm w_16 (ATerm t)
{
  ATerm t_87 = NULL;
  if(match_cons(t, sym__2))
    {
      t_87 = ATgetArgument(t, 0);
      if((t_87 != ATgetArgument(t, 1)))
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
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_16, t_16, v_16, t);
      ;
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
      {
        ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
        o_87 = t;
        if(match_cons(t, sym__2))
          {
            p_87 = ATgetArgument(t, 0);
            q_87 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_87;
        t = n_6(w_16, p_87, q_87, t);
      }
    }
  return(t);
}
ATerm b_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm w_47 = NULL,y_47 = NULL;
  if(match_cons(t, sym__2))
    {
      w_47 = ATgetArgument(t, 0);
      y_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(h_17, w_47, y_47, t);
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm z_47 = NULL;
  if(match_cons(t, sym__2))
    {
      z_47 = ATgetArgument(t, 0);
      if((z_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(l_17, n_48, o_48, t);
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm p_48 = NULL;
  if(match_cons(t, sym__2))
    {
      p_48 = ATgetArgument(t, 0);
      if((p_48 != ATgetArgument(t, 1)))
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
  ATerm i_88 (ATerm t)
  {
    ATerm b_51 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_95(t);
        ;
        LocalPopChoice(c_51);
      }
    else
      {
        t = b_51;
        {
          ATerm d_51 = t;
          int e_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_87 = NULL,x_87 = NULL,k_47 = NULL,l_47 = NULL;
              w_87 = t;
              t = z_95(t);
              x_87 = t;
              t = w_87;
              {
                ATerm x_16 (ATerm t)
                {
                  ATerm z_87 = NULL;
                  t = i_88(t);
                  z_87 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_87, x_87);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_96(x_16, i_88, b_17, t);
                l_47 = t;
                t = SSL_explode_term(l_47);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_51 = ATgetArgument(t, 0);
                    k_47 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_47;
                t = foldr_3_0(d_17, f_17, _id, t);
              }
              ;
              LocalPopChoice(e_51);
            }
          else
            {
              t = d_51;
              {
                ATerm i_48 = NULL,j_48 = NULL;
                j_48 = t;
                t = SSL_explode_term(j_48);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_51 = ATgetArgument(t, 0);
                    i_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_48;
                t = foldr_3_0(j_17, k_17, i_88, t);
              }
            }
        }
      }
    return(t);
  }
  t = i_88(t);
  return(t);
}
ATerm topdown_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm o_17 (ATerm t)
  {
    t = topdown_1_0(h_83, t);
    return(t);
  }
  t = h_83(t);
  t = SRTS_all(o_17, t);
  return(t);
}
ATerm t_6 (ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL;
  k_88 = t;
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
        t = u_6(q_27, r_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_51 = ATgetFirst((ATermList) t);
            j_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_51);
        t = SSL_table_put(q_27, r_27, j_88);
        t = (ATerm) ATmakeAppl(sym__3, q_27, r_27, j_88);
      }
    else
      {
        t = h_51;
        t = SSL_table_remove(q_27, r_27);
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
      }
    t = k_88;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL;
  o_88 = t;
  t = a_83(t);
  n_88 = t;
  {
    ATerm n_51 = t;
    int r_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_88 = NULL;
        t = term_l_48;
        q_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_88, term_l_48);
        t = u_6(n_88, q_88, t);
        ;
        LocalPopChoice(r_51);
      }
    else
      {
        t = n_51;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_88 = ATgetFirst((ATermList) t);
        l_88 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_48;
    p_88 = t;
    t = SSL_table_put(n_88, p_88, l_88);
    t = m_88;
    {
      ATerm q_17 (ATerm t)
      {
        ATerm r_88 = NULL;
        r_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_88, r_88);
        t = t_6(n_88, r_88, t);
        return(t);
      }
      t = map_1_0(q_17, t);
      t = o_88;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t)
{
  ATerm s_51 = t;
  int t_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_90(t);
      t = b_90(t);
      ;
      LocalPopChoice(t_51);
    }
  else
    {
      t = s_51;
      t = b_90(t);
      _fail(t);
    }
  return(t);
}
ATerm u_6 (ATerm c_29, ATerm d_29, ATerm t)
{
  t = SSL_table_get(c_29, d_29);
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  u_88 = t;
  t = z_82(t);
  t_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_88, term_l_48);
  {
    ATerm u_51 = t;
    int x_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_89 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_51 = ATgetArgument(t, 0);
            ATerm z_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_48;
        c_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_88, term_l_48);
        t = u_6(t_88, c_89, t);
        ;
        LocalPopChoice(x_51);
      }
    else
      {
        t = u_51;
        t = (ATerm) ATempty;
      }
    v_88 = t;
    t = term_l_48;
    w_88 = t;
    t = (ATerm) ATinsert(CheckATermList(v_88), (ATerm) ATempty);
    x_88 = t;
    t = SSL_table_put(t_88, w_88, x_88);
    t = u_88;
  }
  return(t);
}
ATerm scope_2_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t)
{
  ATerm t_17 (ATerm t)
  {
    t = end_scope_1_0(b_83, t);
    return(t);
  }
  t = begin_scope_1_0(b_83, t);
  t = restore_always_2_0(c_83, t_17, t);
  return(t);
}
ATerm v_17 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = scope_2_0(i_18, l_18, t);
  return(t);
}
ATerm i_18 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
  t = topdown_1_0(m_18, t);
  n_89 = t;
  t = free_vars_3_0(n_18, o_18, tboundin_3_0, t);
  m_89 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_89, n_89);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm a_52 = ATgetArgument(t, 0);
      l_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_89;
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(c_52);
      }
    else
      {
        t = b_52;
        {
          ATerm d_52 = t;
          int e_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(e_52);
            }
          else
            {
              t = d_52;
              {
                ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    d_91 = ATgetArgument(t, 0);
                    e_91 = ATgetArgument(t, 1);
                    f_91 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = l_89;
                t = t_5(d_91, e_91, f_91, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm m_18 (ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL;
  v_89 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_89 = ATgetArgument(t, 0);
      {
        ATerm f_52 = t;
        int g_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_48 = NULL,x_48 = NULL,n_17 = NULL;
            t = SSLgetAnnotations(v_89);
            s_48 = t;
            t = u_89;
            if(match_cons(t, sym_ListVar_1))
              {
                x_48 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, x_48);
            n_17 = t;
            t = SSLsetAnnotations(n_17, s_48);
            ;
            LocalPopChoice(g_52);
          }
        else
          {
            t = f_52;
            t = v_89;
          }
      }
    }
  else
    {
      t = v_89;
    }
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm y_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_89);
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm h_52 = t;
  int i_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_52);
    }
  else
    {
      t = h_52;
      {
        ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_90 = ATgetArgument(t, 0);
            t = c_90;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_90 = ATgetArgument(t, 0);
                d_90 = ATgetArgument(t, 1);
                e_90 = ATgetArgument(t, 2);
                f_90 = ATgetArgument(t, 3);
                t = e_90;
                t = map_1_0(p_18, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_90 = ATgetArgument(t, 0);
                    d_90 = ATgetArgument(t, 1);
                    e_90 = ATgetArgument(t, 2);
                    f_90 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_90;
                t = map_1_0(q_18, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm q_90 = NULL;
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_90 = ATgetArgument(t, 0);
          {
            ATerm l_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_52);
      t = q_90;
    }
  else
    {
      t = j_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_90;
    }
  return(t);
}
ATerm q_18 (ATerm t)
{
  ATerm z_90 = NULL;
  ATerm m_52 = t;
  int o_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_90 = ATgetArgument(t, 0);
          {
            ATerm r_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_52);
      t = z_90;
    }
  else
    {
      t = m_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_90;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm k_89 = NULL;
  k_89 = t;
  t = scope_2_0(v_17, w_17, t);
  t = k_89;
  return(t);
}
ATerm filter_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL;
  v_91 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_91;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_91 = ATgetFirst((ATermList) t);
          x_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_52 = t;
        int w_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_49 = NULL,h_49 = NULL,j_49 = NULL,p_17 = NULL;
            t = SSLgetAnnotations(v_91);
            e_49 = t;
            t = w_91;
            t = z_88(t);
            h_49 = t;
            t = x_91;
            t = filter_1_0(z_88, t);
            j_49 = t;
            t = (ATerm) ATinsert(CheckATermList(j_49), h_49);
            p_17 = t;
            t = SSLsetAnnotations(p_17, e_49);
            ;
            LocalPopChoice(w_52);
          }
        else
          {
            t = v_52;
            t = x_91;
            t = filter_1_0(z_88, t);
          }
      }
    }
  return(t);
}
ATerm v_6 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm x_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_25, q_25);
      ;
      LocalPopChoice(a_53);
    }
  else
    {
      t = x_52;
      t = SSL_addr(p_25, q_25);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
  c_92 = t;
  t = o_109(t);
  d_92 = t;
  t = term_r_19;
  e_92 = t;
  t = (ATerm) ATinsert(ATempty, d_92);
  f_92 = t;
  t = SSL_printnl(e_92, f_92);
  t = c_92;
  {
    ATerm b_53 = t;
    int c_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL,r_17 = NULL;
        t = p_109(t);
        t = c_92;
        if(match_cons(t, sym__2))
          {
            h_92 = ATgetArgument(t, 0);
            i_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_92);
        g_92 = t;
        t = term_d_53;
        k_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_92, term_d_53);
        t = v_6(h_92, k_92, t);
        j_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_92, i_92);
        r_17 = t;
        t = SSLsetAnnotations(r_17, g_92);
        ;
        LocalPopChoice(c_53);
      }
    else
      {
        t = b_53;
        {
          ATerm t_92 = NULL,u_92 = NULL,t_49 = NULL,x_49 = NULL,h_50 = NULL,s_17 = NULL;
          if(match_cons(t, sym__2))
            {
              t_92 = ATgetArgument(t, 0);
              u_92 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_92);
          t_49 = t;
          t = term_d_53;
          h_50 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_92, term_d_53);
          t = v_6(u_92, h_50, t);
          x_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_92, x_49);
          s_17 = t;
          t = SSLsetAnnotations(s_17, t_49);
        }
      }
  }
  return(t);
}
ATerm r_18 (ATerm t)
{
  t = term_e_53;
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_g_29, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATempty, term_d_24))), term_l_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_d_25, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATempty, term_l_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_s_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, term_d_24), term_l_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_d_24))), term_l_22)))))));
      {
        ATerm i_53 = t;
        if((PushChoice() == 0))
          {
            ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,h_18 = NULL;
            c_93 = t;
            if(match_cons(t, sym_Strategies_1))
              {
                b_93 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_93);
            a_93 = t;
            t = b_93;
            {
              ATerm j_53 = t;
              int l_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_93;
                  ;
                  LocalPopChoice(l_53);
                }
              else
                {
                  t = j_53;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_93;
                }
              t = (ATerm) ATmakeAppl(sym_Strategies_1, b_93);
              h_18 = t;
              t = SSLsetAnnotations(h_18, a_93);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_53;
          }
      }
      ;
      LocalPopChoice(g_53);
    }
  else
    {
      t = f_53;
      {
        ATerm e_93 = NULL,f_93 = NULL;
        t = term_r_19;
        e_93 = t;
        t = (ATerm) ATinsert(ATempty, term_c_20);
        f_93 = t;
        t = SSL_printnl(e_93, f_93);
        t = term_c_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(r_18, s_18, t);
  return(t);
}
ATerm debug_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL;
  g_93 = t;
  t = p_102(t);
  h_93 = t;
  t = term_r_19;
  i_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_93), h_93);
  j_93 = t;
  t = SSL_printnl(i_93, j_93);
  t = g_93;
  return(t);
}
ATerm u_18 (ATerm t)
{
  t = term_m_53;
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = term_n_53;
  return(t);
}
ATerm w_18 (ATerm t)
{
  t = term_p_53;
  return(t);
}
ATerm test_suite_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL,k_18 = NULL,j_18 = NULL;
  t = m_109(t);
  t = debug_1_0(u_18, t);
  t = term_r_53;
  t = n_109(t);
  t_93 = t;
  if(match_cons(t, sym__2))
    {
      o_93 = ATgetArgument(t, 0);
      p_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_93);
  n_93 = t;
  t = o_93;
  t = debug_1_0(v_18, t);
  q_93 = t;
  t = p_93;
  t = debug_1_0(w_18, t);
  r_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_93, r_93);
  j_18 = t;
  t = SSLsetAnnotations(j_18, n_93);
  s_93 = t;
  if(match_cons(t, sym__2))
    {
      l_93 = ATgetArgument(t, 0);
      m_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_93);
  k_93 = t;
  t = m_93;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_93, m_93);
  k_18 = t;
  t = SSLsetAnnotations(k_18, k_93);
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = term_w_53;
  return(t);
}
ATerm z_18 (ATerm t)
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
  t = test_suite_2_0(x_18, z_18, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_io_0_0(t);
  return(t);
}

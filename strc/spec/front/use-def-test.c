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
Symbol sym_Path_1;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_g_54;
ATerm term_f_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_m_46;
ATerm term_k_46;
ATerm term_z_43;
ATerm term_p_43;
ATerm term_j_43;
ATerm term_h_43;
ATerm term_f_43;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_q_37;
ATerm term_i_37;
ATerm term_e_37;
ATerm term_s_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_k_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_b_36;
ATerm term_r_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_j_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_u_34;
ATerm term_s_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_q_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_c_32;
ATerm term_w_31;
ATerm term_n_31;
ATerm term_y_30;
ATerm term_w_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_j_30;
ATerm term_e_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_h_29;
ATerm term_v_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_g_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_g_19;
void init_constant_terms (void)
{
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test14a", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("UnEscape", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("'\\'", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Char_1, term_n_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Var_1, term_l_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("cs", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Var_1, term_r_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test14b", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("testing-main", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rob", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Var_1, term_e_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14c", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Match_1, term_f_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test13a", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_SortVar_1, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_VarDec_2, term_e_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Build_1, term_f_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Str_1, term_t_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13b", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_All_1, term_x_20);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_20, (ATerm)ATempty, (ATerm)ATempty, term_l_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13c", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("helper", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, term_r_21, term_s_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Var_1, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Match_1, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Build_1, term_p_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Var_1, term_y_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Var_1, term_b_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Var_1, term_a_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_j_23);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Var_1, term_l_23);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Build_1, term_z_22);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Call_2, term_s_23, (ATerm) ATempty);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Build_1, term_d_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Match_1, term_m_23);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test10a", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Var_1, term_k_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Str_1, term_o_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Var_1, term_q_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test10b", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Call_2, term_d_25, (ATerm) ATempty);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Match_1, term_r_24);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_25, term_f_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_r_22, term_g_25);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Call_2, term_z_26, (ATerm) ATempty);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_LChoice_2, term_e_25, term_b_27);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_c_27, term_q_22);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_b_27, term_q_22);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_LChoice_2, term_e_25, term_k_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Var_1, term_q_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Match_1, term_y_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Str_1, term_c_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Build_1, term_y_29);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_30, term_e_25);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_App_2, term_e_25, term_y_29);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Match_1, term_m_24);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Var_1, term_h_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_d_34, (ATerm) ATempty);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_f_34, (ATerm) ATempty);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_43, term_h_43);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym_Defined_2, term_k_46, term_h_43);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym_Defined_2, term_n_49, term_o_49);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym__2, term_d_54, term_d_54);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm m_1 (ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm test14_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm test13_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm w_2 (ATerm);
ATerm test12_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm p_3 (ATerm);
ATerm t_3 (ATerm);
ATerm test11_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm test10_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm test9_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm test8_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm test7_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm test6_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm test5_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm z_5 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm j_7 (ATerm);
ATerm o_7 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm test2_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm a_6 (ATerm f_21, ATerm e_21, ATerm g_21, ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm Context_0_0 (ATerm);
ATerm Unbound_0_0 (ATerm);
ATerm Warning_0_0 (ATerm);
ATerm b_6 (ATerm r_44, ATerm s_44, ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm MaybeUnbound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm p_109 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm o_109 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm n_109 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm f_9 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm g_9 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm h_9 (ATerm);
ATerm d_6 (ATerm z_60, ATerm a_61, ATerm b_61, ATerm);
ATerm m_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm x_9 (ATerm);
ATerm e_6 (ATerm t_60, ATerm x_60, ATerm v_60, ATerm);
ATerm z_9 (ATerm);
ATerm h_10 (ATerm);
ATerm j_10 (ATerm);
ATerm p_10 (ATerm);
ATerm s_10 (ATerm);
ATerm f_6 (ATerm n_60, ATerm r_60, ATerm p_60, ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm d_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm k_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm mark_rdef_0_0 (ATerm);
ATerm r_11 (ATerm);
ATerm IntroduceBound_0_0 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm g_6 (ATerm l_59, ATerm m_59, ATerm n_59, ATerm p_59, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm h_6 (ATerm w_57, ATerm x_57, ATerm v_57, ATerm);
ATerm b_12 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm i_6 (ATerm r_28, ATerm q_28, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm undefine_unbound_MarkVar_0_1 (ATerm j_58, ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm j_6 (ATerm b_28, ATerm c_28, ATerm d_28, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm m_6 (ATerm z_27, ATerm a_28, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm n_6 (ATerm o_27, ATerm p_27, ATerm n_27, ATerm);
ATerm o_6 (ATerm j_83 (ATerm), ATerm g_27, ATerm e_27, ATerm);
ATerm y_12 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm z_12 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm g_13 (ATerm);
ATerm i_13 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm r_13 (ATerm);
ATerm t_13 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm t_6 (ATerm m_79 (ATerm), ATerm w_21, ATerm v_21, ATerm);
ATerm foldr_3_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm u_6 (ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm a_22, ATerm z_21, ATerm);
ATerm v_6 (ATerm h_79 (ATerm), ATerm u_21, ATerm t_21, ATerm);
ATerm at_end_1_0 (ATerm n_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_86 (ATerm m_86, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm j_14 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm a_7 (ATerm x_617, ATerm c_618, ATerm t_57, ATerm);
ATerm while_not_2_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm);
ATerm for_3_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm);
ATerm s_14 (ATerm);
ATerm f_15 (ATerm);
ATerm e_16 (ATerm);
ATerm n_89 (ATerm g_88, ATerm h_88, ATerm i_88, ATerm);
ATerm j_16 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm s_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm d_17 (ATerm);
ATerm free_vars_3_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm topdown_1_0 (ATerm n_83 (ATerm), ATerm);
ATerm c_7 (ATerm t_27, ATerm u_27, ATerm);
ATerm end_scope_1_0 (ATerm g_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm);
ATerm d_7 (ATerm f_29, ATerm g_29, ATerm);
ATerm begin_scope_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm scope_2_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm e_18 (ATerm);
ATerm g_18 (ATerm);
ATerm j_18 (ATerm);
ATerm l_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm filter_1_0 (ATerm f_89 (ATerm), ATerm);
ATerm e_7 (ATerm s_25, ATerm t_25, ATerm);
ATerm do_test_2_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm);
ATerm r_18 (ATerm);
ATerm t_18 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm debug_1_0 (ATerm v_102 (ATerm), ATerm);
ATerm w_18 (ATerm);
ATerm x_18 (ATerm);
ATerm a_19 (ATerm);
ATerm test_suite_2_0 (ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm);
ATerm b_19 (ATerm);
ATerm f_19 (ATerm);
ATerm use_def_test_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm h_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_k_19, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_m_19), (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATinsert(ATempty, term_q_19), term_o_19), term_s_19), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, term_q_19), term_s_19)));
      {
        ATerm t_19 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_19;
          }
      }
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = h_19;
      {
        ATerm a_0 = NULL,c_0 = NULL;
        t = term_u_19;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        c_0 = t;
        t = SSL_printnl(a_0, c_0);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm y_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_d_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_f_20)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_d_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_f_20)));
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = y_19;
      {
        ATerm e_0 = NULL,g_0 = NULL;
        t = term_u_19;
        e_0 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        g_0 = t;
        t = SSL_printnl(e_0, g_0);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_k_20, (ATerm) ATmakeAppl(sym_CallT_3, term_d_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_f_20))));
      {
        ATerm m_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_20;
          }
      }
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm i_0 = NULL,k_0 = NULL;
        t = term_u_19;
        i_0 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        k_0 = t;
        t = SSL_printnl(i_0, k_0);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test14_0_0 (ATerm t)
{
  t = do_test_2_0(e_1, f_1, t);
  t = do_test_2_0(m_1, q_1, t);
  t = do_test_2_0(t_1, u_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_s_20, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_w_20), term_x_20)), (ATerm) ATmakeAppl(sym_CallT_3, term_y_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_z_20))));
      {
        ATerm a_21 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_21;
          }
      }
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm l_0 = NULL,n_0 = NULL;
        t = term_u_19;
        l_0 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        n_0 = t;
        t = SSL_printnl(l_0, n_0);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_21;
      t = def_use_def_0_0(t);
      t = term_n_21;
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm p_0 = NULL,r_0 = NULL;
        t = term_u_19;
        p_0 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        r_0 = t;
        t = SSL_printnl(p_0, r_0);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_b_22), term_l_21));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_b_22), term_l_21));
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm t_0 = NULL,v_0 = NULL;
        t = term_u_19;
        t_0 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        v_0 = t;
        t = SSL_printnl(t_0, v_0);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test13_0_0 (ATerm t)
{
  t = do_test_2_0(w_1, x_1, t);
  t = do_test_2_0(y_1, e_2, t);
  t = do_test_2_0(f_2, g_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm e_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_k_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_m_22, (ATerm) ATinsert(ATempty, term_q_22)), (ATerm)ATmakeAppl(sym_Call_2, term_m_22, (ATerm) ATinsert(ATempty, term_r_22)), term_s_21));
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
      t = e_22;
      {
        ATerm x_0 = NULL,z_0 = NULL;
        t = term_u_19;
        x_0 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        z_0 = t;
        t = SSL_printnl(x_0, z_0);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(h_2, w_2, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_f_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_a_23), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_d_23), term_c_23)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_f_20))), term_c_23))))));
      {
        ATerm e_23 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_23;
          }
      }
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm b_1 = NULL,c_1 = NULL;
        t = term_u_19;
        b_1 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        c_1 = t;
        t = SSL_printnl(b_1, c_1);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 = NULL,h_1 = NULL,d_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_i_23, (ATerm)ATinsert(ATempty, term_k_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_f_20)), (ATerm)ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_23), term_f_20))), term_c_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_n_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_a_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_d_23), term_c_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_y_23, (ATerm) ATmakeAppl(sym_Op_2, term_z_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_23), term_f_20)))), term_d_24))))), term_f_24))))));
      h_1 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm g_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_i_23, (ATerm)ATinsert(ATempty, term_k_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_f_20)), (ATerm)ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_23), term_f_20))), term_c_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_n_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_a_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_d_23), term_c_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_y_23, (ATerm) ATmakeAppl(sym_Op_2, term_z_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_23), term_f_20)))), term_d_24))))), term_f_24)))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_i_23, (ATerm)ATinsert(ATempty, term_k_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_f_20)), (ATerm)ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_23), term_f_20))), term_c_23)), (ATerm) ATmakeAppl(sym_Seq_2, term_n_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_a_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_22, (ATerm) ATinsert(ATinsert(ATempty, term_d_23), term_c_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_y_23, (ATerm) ATmakeAppl(sym_Op_2, term_z_23, (ATerm) ATinsert(ATinsert(ATempty, term_c_23), term_f_20)))), term_d_24))))), term_f_24))))));
      d_0 = t;
      t = SSLsetAnnotations(d_0, d_1);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm j_1 = NULL,l_1 = NULL;
        t = term_u_19;
        j_1 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        l_1 = t;
        t = SSL_printnl(j_1, l_1);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(b_3, c_3, t);
  t = do_test_2_0(p_3, t_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_h_24;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_y_22, (ATerm)ATinsert(ATinsert(ATempty, term_k_24), term_o_22), (ATerm) ATmakeAppl(sym_Op_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), term_p_24), term_p_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_s_20, (ATerm)ATinsert(ATinsert(ATempty, term_k_24), term_o_22), (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, term_z_20), term_p_22)))))));
      {
        ATerm s_24 = t;
        if((PushChoice() == 0))
          {
            ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_4 = NULL;
            p_1 = t;
            if(match_cons(t, sym_Overlays_1))
              {
                o_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_1);
            n_1 = t;
            t = o_1;
            {
              ATerm t_24 = t;
              int u_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_1;
                  ;
                  LocalPopChoice(u_24);
                }
              else
                {
                  t = t_24;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_1;
                }
              t = (ATerm) ATmakeAppl(sym_Overlays_1, o_1);
              q_4 = t;
              t = SSLsetAnnotations(q_4, n_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_24;
          }
      }
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm r_1 = NULL,s_1 = NULL;
        t = term_u_19;
        r_1 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        s_1 = t;
        t = SSL_printnl(r_1, s_1);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 = NULL,z_1 = NULL,r_4 = NULL;
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_y_22, (ATerm)ATinsert(ATinsert(ATempty, term_k_24), term_o_22), (ATerm) ATmakeAppl(sym_Op_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_p_24), term_p_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_s_20, (ATerm)ATinsert(ATinsert(ATempty, term_k_24), term_o_22), (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, term_z_20), term_p_22)))))));
      z_1 = t;
      if(match_cons(t, sym_Overlays_1))
        {
          ATerm y_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_1);
      v_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_y_22, (ATerm)ATinsert(ATinsert(ATempty, term_k_24), term_o_22), (ATerm) ATmakeAppl(sym_Op_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_p_24), term_p_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_s_20, (ATerm)ATinsert(ATinsert(ATempty, term_k_24), term_o_22), (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, term_z_20), term_p_22))))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_y_22, (ATerm)ATinsert(ATinsert(ATempty, term_k_24), term_o_22), (ATerm) ATmakeAppl(sym_Op_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_24), term_p_24), term_p_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_s_20, (ATerm)ATinsert(ATinsert(ATempty, term_k_24), term_o_22), (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, term_z_20), term_p_22)))))));
      r_4 = t;
      t = SSLsetAnnotations(r_4, v_1);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm a_2 = NULL,b_2 = NULL;
        t = term_u_19;
        a_2 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        b_2 = t;
        t = SSL_printnl(a_2, b_2);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(x_3, c_4, t);
  t = do_test_2_0(d_4, e_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
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
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22)), (ATerm)ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_m_24)), term_j_25)));
      {
        ATerm k_25 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_25;
          }
      }
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = term_u_19;
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        d_2 = t;
        t = SSL_printnl(c_2, d_2);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_l_25;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22)), (ATerm)ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_m_24)), term_s_21)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22)), (ATerm)ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_m_24)), term_s_21)));
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_u_19;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(g_4, j_4, t);
  t = do_test_2_0(k_4, l_4, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22)), (ATerm)ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_m_24)), term_j_25));
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
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm k_2 = NULL,l_2 = NULL;
        t = term_u_19;
        k_2 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        l_2 = t;
        t = SSL_printnl(k_2, l_2);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22)), (ATerm)ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_m_24)), term_s_21));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22)), (ATerm)ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_m_24)), term_s_21));
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm m_2 = NULL,n_2 = NULL;
        t = term_u_19;
        m_2 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        n_2 = t;
        t = SSL_printnl(m_2, n_2);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(m_4, n_4, t);
  t = do_test_2_0(o_4, p_4, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm c_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATempty, term_m_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATempty, term_p_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATempty, term_p_22))))));
      {
        ATerm f_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_26;
          }
      }
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = c_26;
      {
        ATerm o_2 = NULL,p_2 = NULL;
        t = term_u_19;
        o_2 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        p_2 = t;
        t = SSL_printnl(o_2, p_2);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATempty, term_p_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATempty, term_p_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22)))));
      {
        ATerm j_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_26;
          }
      }
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm q_2 = NULL,r_2 = NULL;
        t = term_u_19;
        q_2 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        r_2 = t;
        t = SSL_printnl(q_2, r_2);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATempty, term_p_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATempty, term_p_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATempty, term_p_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATempty, term_p_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))))));
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm s_2 = NULL,t_2 = NULL;
        t = term_u_19;
        s_2 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        t_2 = t;
        t = SSL_printnl(s_2, t_2);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(s_4, t_4, t);
  t = do_test_2_0(y_4, z_4, t);
  t = do_test_2_0(a_5, b_5, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_d_27, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATempty, term_p_22)))));
      {
        ATerm f_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_27;
          }
      }
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm u_2 = NULL,v_2 = NULL;
        t = term_u_19;
        u_2 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        v_2 = t;
        t = SSL_printnl(u_2, v_2);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_l_27, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATempty, term_p_22)))));
      {
        ATerm m_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_27;
          }
      }
      ;
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm x_2 = NULL,y_2 = NULL;
        t = term_u_19;
        x_2 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        y_2 = t;
        t = SSL_printnl(x_2, y_2);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(c_5, d_5, t);
  t = do_test_2_0(e_5, f_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATempty, term_p_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATempty, term_p_22)))));
      {
        ATerm c_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_29;
          }
      }
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm z_2 = NULL,a_3 = NULL;
        t = term_u_19;
        z_2 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        a_3 = t;
        t = SSL_printnl(z_2, a_3);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATempty, term_p_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22)))));
      {
        ATerm m_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_29;
          }
      }
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm d_3 = NULL,e_3 = NULL;
        t = term_u_19;
        d_3 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        e_3 = t;
        t = SSL_printnl(d_3, e_3);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(g_5, q_5, t);
  t = do_test_2_0(r_5, s_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_z_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_q_29), term_o_30))), term_e_30)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_z_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_q_29), term_o_30))), term_e_30)))));
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm f_3 = NULL,g_3 = NULL;
        t = term_u_19;
        f_3 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        g_3 = t;
        t = SSL_printnl(f_3, g_3);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_z_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_w_30), term_e_30)))));
      {
        ATerm x_30 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_30;
          }
      }
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm k_3 = NULL,m_3 = NULL;
        t = term_u_19;
        k_3 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        m_3 = t;
        t = SSL_printnl(k_3, m_3);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm b_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_q_29), term_o_30))), term_e_30))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_q_29), term_o_30))), term_e_30))));
      ;
      LocalPopChoice(h_31);
    }
  else
    {
      t = b_31;
      {
        ATerm n_3 = NULL,o_3 = NULL;
        t = term_u_19;
        n_3 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        o_3 = t;
        t = SSL_printnl(n_3, o_3);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(t_5, u_5, t);
  t = do_test_2_0(v_5, z_5, t);
  t = do_test_2_0(k_6, l_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm p_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_k_24), (ATerm) ATmakeAppl(sym_Seq_2, term_w_31, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATempty, term_m_24))), term_p_22)))))));
      {
        ATerm b_32 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_32;
          }
      }
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = p_31;
      {
        ATerm q_3 = NULL,r_3 = NULL;
        t = term_u_19;
        q_3 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        r_3 = t;
        t = SSL_printnl(q_3, r_3);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm d_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_k_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, term_j_32), term_p_22))), term_m_24))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_k_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, term_j_32), term_p_22))), term_m_24))))));
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = d_32;
      {
        ATerm s_3 = NULL,u_3 = NULL;
        t = term_u_19;
        s_3 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        u_3 = t;
        t = SSL_printnl(s_3, u_3);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(p_6, s_6, t);
  t = do_test_2_0(j_7, o_7, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATempty, term_m_24))), term_p_22)))));
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
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm v_3 = NULL,w_3 = NULL;
        t = term_u_19;
        v_3 = t;
        t = (ATerm) ATinsert(ATempty, term_w_19);
        w_3 = t;
        t = SSL_printnl(v_3, w_3);
        t = term_w_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm x_33 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, term_j_32), term_p_22))), term_m_24)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, term_j_32), term_p_22))), term_m_24)))));
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = x_33;
      {
        ATerm y_3 = NULL,z_3 = NULL;
        t = term_u_19;
        y_3 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        z_3 = t;
        t = SSL_printnl(y_3, z_3);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(p_7, v_7, t);
  t = do_test_2_0(w_7, y_7, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm a_6 (ATerm f_21, ATerm e_21, ATerm g_21, ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL;
  a_4 = t;
  t = (ATerm) ATempty;
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_34, f_21);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_34, f_21));
  t = o_6(a_8, h_4, i_4, t);
  t = (ATerm) ATempty;
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_34, f_21);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_34, f_21));
  t = o_6(b_8, b_4, f_4, t);
  t = g_21;
  t = use_vars_0_0(t);
  t = a_4;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,x_7 = NULL,z_7 = NULL;
  q_7 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      t_7 = ATgetArgument(t, 2);
      k_7 = ATgetArgument(t, 3);
      t = k_7;
      if(match_cons(t, sym_StratRule_3))
        {
          l_7 = ATgetArgument(t, 0);
          m_7 = ATgetArgument(t, 1);
          n_7 = ATgetArgument(t, 2);
          {
            ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,o_8 = NULL;
            t = (ATerm) ATempty;
            k_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_34, r_7);
            o_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_34, r_7));
            t = o_6(c_8, k_8, o_8, t);
            t = (ATerm) ATempty;
            i_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_34, r_7);
            j_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_34, r_7));
            t = o_6(d_8, i_8, j_8, t);
            t = (ATerm) ATmakeAppl(sym__3, l_7, m_7, n_7);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, r_7, s_7, t_7, (ATerm) ATmakeAppl(sym_StratRule_3, l_7, m_7, n_7));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              l_7 = ATgetArgument(t, 0);
              m_7 = ATgetArgument(t, 1);
              n_7 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = q_7;
          {
            ATerm m_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,l_3 = NULL;
                t = (ATerm) ATempty;
                j_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_34, r_7);
                l_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_34, r_7));
                t = o_6(e_8, j_3, l_3, t);
                t = (ATerm) ATempty;
                h_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_34, r_7);
                i_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_34, r_7));
                t = o_6(f_8, h_3, i_3, t);
                t = l_7;
                t = bind_vars_0_0(t);
                ;
                LocalPopChoice(o_34);
              }
            else
              {
                t = m_34;
                {
                  ATerm v_34 = t;
                  int w_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_7;
                      t = unbound_vars_0_0(t);
                      ;
                      LocalPopChoice(w_34);
                    }
                  else
                    {
                      t = v_34;
                      t = m_7;
                      t = use_vars_0_0(t);
                    }
                }
              }
            t = (ATerm) ATmakeAppl(sym_RDefT_4, r_7, s_7, t_7, (ATerm) ATmakeAppl(sym_Rule_3, l_7, m_7, n_7));
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
          x_7 = ATgetArgument(t, 1);
          z_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_7;
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 = NULL,l_5 = NULL,m_5 = NULL,o_5 = NULL;
            t = (ATerm) ATempty;
            m_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_35, r_7);
            o_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_35, r_7));
            t = o_6(g_8, m_5, o_5, t);
            t = (ATerm) ATempty;
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_35, r_7);
            l_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_35, r_7));
            t = o_6(h_8, i_5, l_5, t);
            t = u_7;
            t = bind_vars_0_0(t);
            ;
            LocalPopChoice(z_34);
          }
        else
          {
            t = y_34;
            {
              ATerm c_35 = t;
              int e_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_7;
                  t = unbound_vars_0_0(t);
                  ;
                  LocalPopChoice(e_35);
                }
              else
                {
                  t = c_35;
                  t = x_7;
                  t = use_vars_0_0(t);
                }
            }
          }
        t = (ATerm) ATmakeAppl(sym_RDef_3, r_7, s_7, (ATerm) ATmakeAppl(sym_Rule_3, u_7, x_7, z_7));
      }
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  {
    ATerm f_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL,x_8 = NULL,y_8 = NULL;
        t = (ATerm) ATempty;
        x_8 = t;
        t = term_d_34;
        y_8 = t;
        t = term_j_35;
        t = m_6(y_8, x_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_35) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            v_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_9), term_m_35), v_8), term_l_35);
        ;
        LocalPopChoice(i_35);
      }
    else
      {
        t = f_35;
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL,d_10 = NULL,e_10 = NULL;
              t = (ATerm) ATempty;
              d_10 = t;
              t = term_d_34;
              e_10 = t;
              t = term_j_35;
              t = m_6(e_10, d_10, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_35) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  y_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_9), term_m_35), y_9), term_r_35);
              ;
              LocalPopChoice(o_35);
            }
          else
            {
              t = n_35;
              {
                ATerm s_35 = t;
                int t_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_10 = NULL,q_10 = NULL,r_10 = NULL;
                    t = (ATerm) ATempty;
                    q_10 = t;
                    t = term_d_34;
                    r_10 = t;
                    t = term_j_35;
                    t = m_6(r_10, q_10, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm u_35 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) u_35) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        o_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_9), term_m_35), o_10), term_r_35);
                    ;
                    LocalPopChoice(t_35);
                  }
                else
                  {
                    t = s_35;
                    {
                      ATerm v_35 = t;
                      int w_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_10 = NULL,e_11 = NULL,j_11 = NULL;
                          t = (ATerm) ATempty;
                          e_11 = t;
                          t = term_d_34;
                          j_11 = t;
                          t = term_j_35;
                          t = m_6(j_11, e_11, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm x_35 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) x_35) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              v_10 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_9), term_m_35), v_10), term_r_35);
                          ;
                          LocalPopChoice(w_35);
                        }
                      else
                        {
                          t = v_35;
                          {
                            ATerm y_35 = t;
                            int z_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_11 = NULL,d_12 = NULL,e_12 = NULL;
                                t = (ATerm) ATempty;
                                d_12 = t;
                                t = term_d_34;
                                e_12 = t;
                                t = term_j_35;
                                t = m_6(e_12, d_12, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm a_36 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) a_36) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    v_11 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_9), term_m_35), v_11), term_b_36);
                                ;
                                LocalPopChoice(z_35);
                              }
                            else
                              {
                                t = y_35;
                                {
                                  ATerm i_12 = NULL,m_12 = NULL,n_12 = NULL;
                                  t = (ATerm) ATempty;
                                  m_12 = t;
                                  t = term_d_34;
                                  n_12 = t;
                                  t = term_j_35;
                                  t = m_6(n_12, m_12, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm c_36 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) c_36) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      i_12 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_9), term_m_35), i_12), term_b_36);
                                }
                              }
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
  ATerm f_10 = NULL,i_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_10;
  if(match_cons(t, sym_ListVar_1))
    {
      l_10 = ATgetArgument(t, 0);
      {
        ATerm d_36 = t;
        int e_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_10;
            f_10 = t;
            t = m_10;
            ;
            LocalPopChoice(e_36);
          }
        else
          {
            t = d_36;
            t = n_10;
            f_10 = t;
            t = m_10;
          }
      }
    }
  else
    {
      t = n_10;
      f_10 = t;
      t = m_10;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_36), f_10), term_f_36);
  t = Context_0_0(t);
  i_10 = t;
  t = term_u_19;
  k_10 = t;
  t = SSL_printnl(k_10, i_10);
  t = i_10;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_14 = NULL,g_15 = NULL,x_15 = NULL;
        t = (ATerm) ATempty;
        g_15 = t;
        t = term_f_34;
        x_15 = t;
        t = term_k_36;
        t = m_6(x_15, g_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_36) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            t_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_11), term_o_36), t_14), term_n_36);
        ;
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        {
          ATerm p_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_16 = NULL,m_16 = NULL,n_16 = NULL;
              t = (ATerm) ATempty;
              m_16 = t;
              t = term_f_34;
              n_16 = t;
              t = term_k_36;
              t = m_6(n_16, m_16, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm r_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_36) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  k_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_11), term_o_36), k_16), term_s_36);
              ;
              LocalPopChoice(q_36);
            }
          else
            {
              t = p_36;
              {
                ATerm t_36 = t;
                int u_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_16 = NULL,t_16 = NULL,u_16 = NULL;
                    t = (ATerm) ATempty;
                    t_16 = t;
                    t = term_f_34;
                    u_16 = t;
                    t = term_k_36;
                    t = m_6(u_16, t_16, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm w_36 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) w_36) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        r_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_11), term_o_36), r_16), term_s_36);
                    ;
                    LocalPopChoice(u_36);
                  }
                else
                  {
                    t = t_36;
                    {
                      ATerm x_36 = t;
                      int z_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_16 = NULL,e_17 = NULL,f_17 = NULL;
                          t = (ATerm) ATempty;
                          e_17 = t;
                          t = term_f_34;
                          f_17 = t;
                          t = term_k_36;
                          t = m_6(f_17, e_17, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm a_37 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) a_37) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              y_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_11), term_o_36), y_16), term_s_36);
                          ;
                          LocalPopChoice(z_36);
                        }
                      else
                        {
                          t = x_36;
                          {
                            ATerm b_37 = t;
                            int c_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_17 = NULL,d_18 = NULL,h_18 = NULL;
                                t = (ATerm) ATempty;
                                d_18 = t;
                                t = term_f_34;
                                h_18 = t;
                                t = term_k_36;
                                t = m_6(h_18, d_18, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm d_37 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) d_37) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    w_17 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_11), term_o_36), w_17), term_e_37);
                                ;
                                LocalPopChoice(c_37);
                              }
                            else
                              {
                                t = b_37;
                                {
                                  ATerm v_18 = NULL,c_19 = NULL,d_19 = NULL;
                                  t = (ATerm) ATempty;
                                  c_19 = t;
                                  t = term_f_34;
                                  d_19 = t;
                                  t = term_k_36;
                                  t = m_6(d_19, c_19, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm f_37 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) f_37) != ATmakeSymbol("f_0", 0, ATtrue)))
                                        _fail(t);
                                      v_18 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_11), term_o_36), v_18), term_e_37);
                                }
                              }
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
ATerm b_6 (ATerm r_44, ATerm s_44, ATerm t)
{
  t = SSL_strcat(r_44, s_44);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_12 = NULL;
      r_12 = t;
      t = SSL_is_string(r_12);
      ;
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_8, t);
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm x_12 = NULL,a_13 = NULL,b_13 = NULL;
              x_12 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_13 = ATgetArgument(t, 0);
                  t = a_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_13 = ATgetArgument(t, 0);
                      t = a_13;
                      {
                        ATerm o_37 = t;
                        int p_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_37);
                          }
                        else
                          {
                            t = o_37;
                            t = debug_1_0(m_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_13 = NULL,h_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_13 = ATgetArgument(t, 0);
                          b_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_13;
                      t = eval_config_0_0(t);
                      f_13 = t;
                      t = b_13;
                      t = eval_config_0_0(t);
                      h_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_13, h_13);
                      t = b_6(f_13, h_13, t);
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
  ATerm l_13 = NULL,m_13 = NULL;
  l_13 = t;
  t = term_q_37;
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, l_13);
  t = d_7(m_13, l_13, t);
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_13 = NULL,q_13 = NULL;
        t = eval_config_0_0(t);
        p_13 = t;
        t = term_q_37;
        q_13 = t;
        t = SSL_table_put(q_13, l_13, p_13);
        t = p_13;
        ;
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
      }
  }
  return(t);
}
ATerm MaybeUnbound_0_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,c_14 = NULL,d_14 = NULL;
  c_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_14;
  if(match_cons(t, sym_ListVar_1))
    {
      z_13 = ATgetArgument(t, 0);
      {
        ATerm y_37 = t;
        int z_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_13;
            y_13 = t;
            t = c_14;
            ;
            LocalPopChoice(z_37);
          }
        else
          {
            t = y_37;
            t = d_14;
            y_13 = t;
            t = c_14;
          }
      }
    }
  else
    {
      t = d_14;
      y_13 = t;
      t = c_14;
    }
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,f_14 = NULL;
        t = term_e_38;
        t = get_config_0_0(t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_38), y_13), term_f_36);
        t = Warning_0_0(t);
        e_14 = t;
        t = term_u_19;
        f_14 = t;
        t = SSL_printnl(f_14, e_14);
        t = e_14;
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_14 = NULL,p_14 = NULL;
      o_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      p_14 = t;
      t = SSLgetAnnotations(o_14);
      m_14 = t;
      t = p_14;
      LocalPopChoice(h_38);
      {
        ATerm q_14 = NULL;
        q_14 = t;
        t = m_14;
        {
          ATerm i_38 = t;
          int j_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_38 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) o_38) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm t_38 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(t_38) != AT_LIST) || !(ATisEmpty(t_38))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(j_38);
              _fail(t);
            }
          else
            {
              t = i_38;
              {
                ATerm u_38 = t;
                int w_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm x_38 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) x_38) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm y_38 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(y_38) != AT_LIST) || !(ATisEmpty(y_38))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_38);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = u_38;
                    {
                      ATerm z_38 = t;
                      int a_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm b_39 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) b_39) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm c_39 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(c_39) != AT_LIST) || !(ATisEmpty(c_39))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_39);
                          t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = z_38;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
          t = q_14;
        }
      }
    }
  else
    {
      t = g_38;
      {
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,u_4 = NULL;
            w_14 = t;
            if(match_cons(t, sym_App_2))
              {
                u_14 = ATgetArgument(t, 0);
                v_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_14);
            r_14 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, u_14, v_14);
            u_4 = t;
            t = SSLsetAnnotations(u_4, r_14);
            LocalPopChoice(e_39);
            {
              ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,v_4 = NULL;
              c_15 = t;
              if(match_cons(t, sym_App_2))
                {
                  y_14 = ATgetArgument(t, 0);
                  z_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_15);
              x_14 = t;
              t = y_14;
              t = unbound_vars_0_0(t);
              a_15 = t;
              t = z_14;
              t = use_vars_0_0(t);
              b_15 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, a_15, b_15);
              v_4 = t;
              t = SSLsetAnnotations(v_4, x_14);
            }
          }
        else
          {
            t = d_39;
            {
              ATerm f_39 = t;
              int j_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_15 = NULL,e_15 = NULL,h_15 = NULL,w_4 = NULL;
                  h_15 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      e_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_15);
                  d_15 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, e_15);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, d_15);
                  LocalPopChoice(j_39);
                  {
                    ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,x_4 = NULL;
                    l_15 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        j_15 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(l_15);
                    i_15 = t;
                    t = j_15;
                    t = unbound_vars_0_0(t);
                    k_15 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, k_15);
                    x_4 = t;
                    t = SSLsetAnnotations(x_4, i_15);
                  }
                }
              else
                {
                  t = f_39;
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
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,h_5 = NULL;
      o_15 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_15);
      m_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_15);
      h_5 = t;
      t = SSLsetAnnotations(h_5, m_15);
      LocalPopChoice(l_39);
      _fail(t);
    }
  else
    {
      t = k_39;
      {
        ATerm m_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,j_5 = NULL;
            s_15 = t;
            if(match_cons(t, sym_App_2))
              {
                q_15 = ATgetArgument(t, 0);
                r_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_15);
            p_15 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, q_15, r_15);
            j_5 = t;
            t = SSLsetAnnotations(j_5, p_15);
            LocalPopChoice(n_39);
            {
              ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,z_15 = NULL,a_16 = NULL,k_5 = NULL;
              a_16 = t;
              if(match_cons(t, sym_App_2))
                {
                  u_15 = ATgetArgument(t, 0);
                  v_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_16);
              t_15 = t;
              t = u_15;
              t = unbound_vars_0_0(t);
              w_15 = t;
              t = v_15;
              t = use_vars_0_0(t);
              z_15 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, w_15, z_15);
              k_5 = t;
              t = SSLsetAnnotations(k_5, t_15);
            }
          }
        else
          {
            t = m_39;
            {
              ATerm o_39 = t;
              int p_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,n_5 = NULL;
                  d_16 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_16);
                  b_16 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, c_16);
                  n_5 = t;
                  t = SSLsetAnnotations(n_5, b_16);
                  LocalPopChoice(p_39);
                  {
                    ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,p_5 = NULL;
                    i_16 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        g_16 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(i_16);
                    f_16 = t;
                    t = g_16;
                    t = unbound_vars_0_0(t);
                    h_16 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, h_16);
                    p_5 = t;
                    t = SSLsetAnnotations(p_5, f_16);
                  }
                }
              else
                {
                  t = o_39;
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
  ATerm q_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,w_5 = NULL;
      b_17 = t;
      if(match_cons(t, sym_Build_1))
        {
          a_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_17);
      z_16 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, a_17);
      w_5 = t;
      t = SSLsetAnnotations(w_5, z_16);
      LocalPopChoice(u_39);
      {
        ATerm c_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,x_5 = NULL;
        j_17 = t;
        if(match_cons(t, sym_Build_1))
          {
            h_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_17);
        c_17 = t;
        t = h_17;
        t = use_vars_0_0(t);
        i_17 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, i_17);
        x_5 = t;
        t = SSLsetAnnotations(x_5, c_17);
      }
    }
  else
    {
      t = q_39;
      {
        ATerm v_39 = t;
        int w_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,y_5 = NULL;
            m_17 = t;
            if(match_cons(t, sym_Match_1))
              {
                l_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_17);
            k_17 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, l_17);
            y_5 = t;
            t = SSLsetAnnotations(y_5, k_17);
            LocalPopChoice(w_39);
            {
              ATerm n_17 = NULL,o_17 = NULL,r_17 = NULL,s_17 = NULL,q_6 = NULL;
              s_17 = t;
              if(match_cons(t, sym_Match_1))
                {
                  o_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_17);
              n_17 = t;
              t = o_17;
              t = bind_vars_0_0(t);
              r_17 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, r_17);
              q_6 = t;
              t = SSLsetAnnotations(q_6, n_17);
            }
          }
        else
          {
            t = v_39;
            {
              ATerm x_39 = t;
              int y_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,x_17 = NULL,y_17 = NULL,r_6 = NULL;
                  y_17 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      u_17 = ATgetArgument(t, 0);
                      v_17 = ATgetArgument(t, 1);
                      x_17 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_17);
                  t_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, u_17, v_17, x_17);
                  r_6 = t;
                  t = SSLsetAnnotations(r_6, t_17);
                  LocalPopChoice(y_39);
                  {
                    ATerm b_21 = NULL,h_21 = NULL,k_21 = NULL,x_21 = NULL;
                    b_21 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        h_21 = ATgetArgument(t, 0);
                        k_21 = ATgetArgument(t, 1);
                        x_21 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm z_39 = t;
                      int a_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_19 = NULL,z_19 = NULL,w_6 = NULL;
                          t = SSLgetAnnotations(b_21);
                          v_19 = t;
                          t = h_21;
                          t = bind_vars_0_0(t);
                          z_19 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, z_19, k_21, x_21);
                          w_6 = t;
                          t = SSLsetAnnotations(w_6, v_19);
                          ;
                          LocalPopChoice(a_40);
                        }
                      else
                        {
                          t = z_39;
                          {
                            ATerm b_40 = t;
                            int c_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_20 = NULL,r_20 = NULL,x_6 = NULL;
                                t = SSLgetAnnotations(b_21);
                                l_20 = t;
                                t = x_21;
                                t = unbound_vars_0_0(t);
                                r_20 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, h_21, k_21, r_20);
                                x_6 = t;
                                t = SSLsetAnnotations(x_6, l_20);
                                ;
                                LocalPopChoice(c_40);
                              }
                            else
                              {
                                t = b_40;
                                {
                                  ATerm d_21 = NULL,m_21 = NULL,y_6 = NULL;
                                  t = SSLgetAnnotations(b_21);
                                  d_21 = t;
                                  t = k_21;
                                  t = use_vars_0_0(t);
                                  m_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, h_21, m_21, x_21);
                                  y_6 = t;
                                  t = SSLsetAnnotations(y_6, d_21);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = x_39;
                  {
                    ATerm d_40 = t;
                    int i_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_21 = NULL,c_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,z_6 = NULL;
                        h_22 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            c_22 = ATgetArgument(t, 0);
                            f_22 = ATgetArgument(t, 1);
                            g_22 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_22);
                        y_21 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, c_22, f_22, g_22);
                        z_6 = t;
                        t = SSLsetAnnotations(z_6, y_21);
                        LocalPopChoice(i_40);
                        {
                          ATerm r_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
                          r_23 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              t_23 = ATgetArgument(t, 0);
                              u_23 = ATgetArgument(t, 1);
                              v_23 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm j_40 = t;
                            int k_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_22 = NULL,n_22 = NULL,b_7 = NULL;
                                t = SSLgetAnnotations(r_23);
                                j_22 = t;
                                t = u_23;
                                t = unbound_vars_0_0(t);
                                n_22 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, t_23, n_22, v_23);
                                b_7 = t;
                                t = SSLsetAnnotations(b_7, j_22);
                                ;
                                LocalPopChoice(k_40);
                              }
                            else
                              {
                                t = j_40;
                                {
                                  ATerm p_23 = NULL,e_24 = NULL,f_7 = NULL;
                                  t = SSLgetAnnotations(r_23);
                                  p_23 = t;
                                  t = v_23;
                                  t = use_vars_0_0(t);
                                  e_24 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, t_23, u_23, e_24);
                                  f_7 = t;
                                  t = SSLsetAnnotations(f_7, p_23);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = d_40;
                        {
                          ATerm l_40 = t;
                          int r_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_23 = NULL,x_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,g_7 = NULL;
                              c_24 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  x_23 = ATgetArgument(t, 0);
                                  a_24 = ATgetArgument(t, 1);
                                  b_24 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(c_24);
                              w_23 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, x_23, a_24, b_24);
                              g_7 = t;
                              t = SSLsetAnnotations(g_7, w_23);
                              LocalPopChoice(r_40);
                              {
                                ATerm h_25 = NULL,m_25 = NULL,n_25 = NULL,p_25 = NULL;
                                h_25 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    m_25 = ATgetArgument(t, 0);
                                    n_25 = ATgetArgument(t, 1);
                                    p_25 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm s_40 = t;
                                  int t_40 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm i_25 = NULL,o_25 = NULL,h_7 = NULL;
                                      t = SSLgetAnnotations(h_25);
                                      i_25 = t;
                                      t = n_25;
                                      t = unbound_vars_0_0(t);
                                      o_25 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, m_25, o_25, p_25);
                                      h_7 = t;
                                      t = SSLsetAnnotations(h_7, i_25);
                                      ;
                                      LocalPopChoice(t_40);
                                    }
                                  else
                                    {
                                      t = s_40;
                                      {
                                        ATerm l_26 = NULL,a_27 = NULL,i_7 = NULL;
                                        t = SSLgetAnnotations(h_25);
                                        l_26 = t;
                                        t = p_25;
                                        t = use_vars_0_0(t);
                                        a_27 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, m_25, n_25, a_27);
                                        i_7 = t;
                                        t = SSLsetAnnotations(i_7, l_26);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = l_40;
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
ATerm n_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm d_26 = NULL,k_26 = NULL,m_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      k_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
      n_26 = ATgetArgument(t, 2);
      d_26 = ATgetArgument(t, 3);
      {
        ATerm s_26 = NULL,t_26 = NULL,w_26 = NULL,x_26 = NULL;
        t = (ATerm) ATempty;
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_40, k_26);
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_40, k_26));
        t = o_6(n_8, w_26, x_26, t);
        t = (ATerm) ATempty;
        s_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_40, k_26);
        t_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_40, k_26));
        t = o_6(p_8, s_26, t_26, t);
        t = d_26;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_26, m_26, n_26, d_26);
      }
    }
  else
    {
      ATerm w_27 = NULL,x_27 = NULL,f_28 = NULL,g_28 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          k_26 = ATgetArgument(t, 0);
          m_26 = ATgetArgument(t, 1);
          n_26 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      f_28 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_40, k_26);
      g_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_40, k_26));
      t = o_6(q_8, f_28, g_28, t);
      t = (ATerm) ATempty;
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_40, k_26);
      x_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_40, k_26));
      t = o_6(r_8, w_27, x_27, t);
      t = n_26;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, k_26, m_26, n_26);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,s_8 = NULL;
  ATerm t_8 (ATerm t)
  {
    ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,e_29 = NULL,i_29 = NULL,l_29 = NULL,a_30 = NULL,d_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,a_9 = NULL,z_8 = NULL;
    i_30 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        a_30 = ATgetArgument(t, 0);
        d_30 = ATgetArgument(t, 1);
        f_30 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_30);
    l_29 = t;
    t = a_30;
    t = p_109(t);
    g_30 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, g_30, d_30, f_30);
    z_8 = t;
    t = SSLsetAnnotations(z_8, l_29);
    h_30 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        v_28 = ATgetArgument(t, 0);
        w_28 = ATgetArgument(t, 1);
        e_29 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_30);
    u_28 = t;
    t = w_28;
    t = p_109(t);
    i_29 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_28, i_29, e_29);
    a_9 = t;
    t = SSLsetAnnotations(a_9, u_28);
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,q_30 = NULL,r_30 = NULL,b_9 = NULL;
    r_30 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        l_30 = ATgetArgument(t, 0);
        m_30 = ATgetArgument(t, 1);
        n_30 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_30);
    k_30 = t;
    t = n_30;
    t = p_109(t);
    q_30 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, l_30, m_30, q_30);
    b_9 = t;
    t = SSLsetAnnotations(b_9, k_30);
    return(t);
  }
  l_28 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
      k_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_28, j_28, k_28);
  s_8 = t;
  t = SSLsetAnnotations(s_8, h_28);
  t = abstract_choice_2_0(t_8, u_8, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,z_30 = NULL,a_31 = NULL,i_9 = NULL;
  ATerm w_8 (ATerm t)
  {
    ATerm c_31 = NULL,d_31 = NULL,f_31 = NULL,g_31 = NULL,i_31 = NULL,j_9 = NULL;
    i_31 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        d_31 = ATgetArgument(t, 0);
        f_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_31);
    c_31 = t;
    t = d_31;
    t = o_109(t);
    g_31 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, g_31, f_31);
    j_9 = t;
    t = SSLsetAnnotations(j_9, c_31);
    return(t);
  }
  ATerm c_9 (ATerm t)
  {
    ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,o_31 = NULL,k_9 = NULL;
    o_31 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        k_31 = ATgetArgument(t, 0);
        l_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_31);
    j_31 = t;
    t = l_31;
    t = o_109(t);
    m_31 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_31, m_31);
    k_9 = t;
    t = SSLsetAnnotations(k_9, j_31);
    return(t);
  }
  a_31 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      t_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_31);
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, t_30, z_30);
  i_9 = t;
  t = SSLsetAnnotations(i_9, s_30);
  t = abstract_choice_2_0(w_8, c_9, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,x_31 = NULL,y_31 = NULL;
  v_31 = t;
  t = save_MarkVar_0_0(t);
  q_31 = t;
  t = v_31;
  t = q_109(t);
  u_31 = t;
  t = save_MarkVar_0_0(t);
  s_31 = t;
  t = term_y_40;
  y_31 = t;
  t = SSL_table_destroy(y_31);
  t = term_y_40;
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_40, q_31);
  t = i_6(x_31, q_31, t);
  t = u_31;
  t = r_109(t);
  t_31 = t;
  t = s_31;
  t = isect_MarkVar_0_0(t);
  t = t_31;
  return(t);
}
ATerm mark_choice_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,e_32 = NULL,g_32 = NULL,o_9 = NULL;
  ATerm d_9 (ATerm t)
  {
    ATerm i_32 = NULL,n_32 = NULL,o_32 = NULL,r_32 = NULL,s_32 = NULL,p_9 = NULL;
    s_32 = t;
    if(match_cons(t, sym_Choice_2))
      {
        n_32 = ATgetArgument(t, 0);
        o_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_32);
    i_32 = t;
    t = n_32;
    t = n_109(t);
    r_32 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, r_32, o_32);
    p_9 = t;
    t = SSLsetAnnotations(p_9, i_32);
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,q_9 = NULL;
    x_32 = t;
    if(match_cons(t, sym_Choice_2))
      {
        u_32 = ATgetArgument(t, 0);
        v_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_32);
    t_32 = t;
    t = v_32;
    t = n_109(t);
    w_32 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, u_32, w_32);
    q_9 = t;
    t = SSLsetAnnotations(q_9, t_32);
    return(t);
  }
  g_32 = t;
  if(match_cons(t, sym_Choice_2))
    {
      a_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_32);
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, a_32, e_32);
  o_9 = t;
  t = SSLsetAnnotations(o_9, z_31);
  t = abstract_choice_2_0(d_9, e_9, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,w_9 = NULL,v_9 = NULL;
  z_32 = t;
  t = save_MarkVar_0_0(t);
  y_32 = t;
  t = z_32;
  if(match_cons(t, sym_Rec_2))
    {
      f_33 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_32);
  e_33 = t;
  t = g_33;
  t = mark_buv_0_0(t);
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, f_33, h_33);
  v_9 = t;
  t = SSLsetAnnotations(v_9, e_33);
  t = y_32;
  t = isect_MarkVar_0_0(t);
  t = z_32;
  if(match_cons(t, sym_Rec_2))
    {
      b_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_32);
  a_33 = t;
  t = c_33;
  t = mark_buv_0_0(t);
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, b_33, d_33);
  w_9 = t;
  t = SSLsetAnnotations(w_9, a_33);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,b_34 = NULL,e_34 = NULL,h_34 = NULL,n_34 = NULL,g_10 = NULL,c_10 = NULL,b_10 = NULL;
  n_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_33 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
      e_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_34);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_33, b_34, e_34);
  b_10 = t;
  t = SSLsetAnnotations(b_10, v_33);
  h_34 = t;
  t = save_MarkVar_0_0(t);
  i_33 = t;
  t = h_34;
  if(match_cons(t, sym_PrimT_3))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
      s_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_34);
  p_33 = t;
  t = s_33;
  t = map_1_0(f_9, t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, q_33, r_33, t_33);
  c_10 = t;
  t = SSLsetAnnotations(c_10, p_33);
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
  g_10 = t;
  t = SSLsetAnnotations(g_10, j_33);
  o_33 = t;
  t = i_33;
  t = isect_MarkVar_0_0(t);
  t = o_33;
  return(t);
}
ATerm alltd_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm t_34 (ATerm t)
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_85(t);
        ;
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        t = SRTS_all(t_34, t);
      }
    return(t);
  }
  t = t_34(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  v_37 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
      u_37 = ATgetArgument(t, 2);
      {
        ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,y_27 = NULL,e_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,s_28 = NULL,t_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,d_29 = NULL,a_11 = NULL,z_10 = NULL,y_10 = NULL;
        t = SSLgetAnnotations(v_37);
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_37, x_37, u_37);
        y_10 = t;
        t = SSLsetAnnotations(y_10, z_28);
        d_29 = t;
        t = save_MarkVar_0_0(t);
        q_27 = t;
        t = d_29;
        if(match_cons(t, sym_CallT_3))
          {
            p_28 = ATgetArgument(t, 0);
            s_28 = ATgetArgument(t, 1);
            t_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_29);
        o_28 = t;
        t = t_28;
        t = map_1_0(g_9, t);
        x_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, p_28, s_28, x_28);
        z_10 = t;
        t = SSLsetAnnotations(z_10, o_28);
        y_28 = t;
        if(match_cons(t, sym_CallT_3))
          {
            s_27 = ATgetArgument(t, 0);
            y_27 = ATgetArgument(t, 1);
            e_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_28);
        r_27 = t;
        t = y_27;
        t = mark_buv_0_0(t);
        m_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, s_27, m_28, e_28);
        a_11 = t;
        t = SSLsetAnnotations(a_11, r_27);
        n_28 = t;
        t = q_27;
        t = isect_MarkVar_0_0(t);
        t = n_28;
      }
    }
  else
    {
      ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,b_30 = NULL,c_11 = NULL,b_11 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          w_37 = ATgetArgument(t, 0);
          x_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_37);
      x_29 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, w_37, x_37);
      b_11 = t;
      t = SSLsetAnnotations(b_11, x_29);
      b_30 = t;
      t = save_MarkVar_0_0(t);
      r_29 = t;
      t = b_30;
      if(match_cons(t, sym_Call_2))
        {
          t_29 = ATgetArgument(t, 0);
          u_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_30);
      s_29 = t;
      t = u_29;
      t = mark_buv_0_0(t);
      v_29 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, t_29, v_29);
      c_11 = t;
      t = SSLsetAnnotations(c_11, s_29);
      w_29 = t;
      t = r_29;
      t = isect_MarkVar_0_0(t);
      t = w_29;
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm d_6 (ATerm z_60, ATerm a_61, ATerm b_61, ATerm t)
{
  ATerm a_38 = NULL;
  ATerm l_9 (ATerm t)
  {
    t = a_61;
    t = map_1_0(IntroduceBound_0_0, t);
    t = b_61;
    t = mark_build_vars_0_0(t);
    if(((a_38 != NULL) && (a_38 != t)))
      _fail(t);
    else
      a_38 = t;
    return(t);
  }
  t = scope_2_0(h_9, l_9, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, z_60, a_61, not_null(a_38));
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm n_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_38);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm b_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = b_41;
      {
        ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_38 = ATgetArgument(t, 0);
            t = p_38;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_38 = ATgetArgument(t, 0);
                q_38 = ATgetArgument(t, 1);
                r_38 = ATgetArgument(t, 2);
                s_38 = ATgetArgument(t, 3);
                t = r_38;
                t = map_1_0(t_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_38 = ATgetArgument(t, 0);
                    q_38 = ATgetArgument(t, 1);
                    r_38 = ATgetArgument(t, 2);
                    s_38 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_38;
                t = map_1_0(x_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm i_39 = NULL;
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_39 = ATgetArgument(t, 0);
          {
            ATerm g_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_41);
      t = i_39;
    }
  else
    {
      t = e_41;
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
ATerm x_9 (ATerm t)
{
  ATerm r_39 = NULL;
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_39 = ATgetArgument(t, 0);
          {
            ATerm n_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_41);
      t = r_39;
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_39;
    }
  return(t);
}
ATerm e_6 (ATerm t_60, ATerm x_60, ATerm v_60, ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  ATerm n_9 (ATerm t)
  {
    t = t_60;
    t = free_vars_3_0(r_9, s_9, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = t_60;
    t = mark_match_vars_0_0(t);
    if(((k_38 != NULL) && (k_38 != t)))
      _fail(t);
    else
      k_38 = t;
    t = v_60;
    t = mark_buv_0_0(t);
    if(((l_38 != NULL) && (l_38 != t)))
      _fail(t);
    else
      l_38 = t;
    t = x_60;
    t = mark_build_vars_0_0(t);
    if(((m_38 != NULL) && (m_38 != t)))
      _fail(t);
    else
      m_38 = t;
    return(t);
  }
  t = scope_2_0(m_9, n_9, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_38), not_null(m_38), not_null(l_38)));
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm h_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_40);
  return(t);
}
ATerm j_10 (ATerm t)
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
        ATerm m_40 = NULL,n_40 = NULL,p_40 = NULL,q_40 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_40 = ATgetArgument(t, 0);
            t = m_40;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_40 = ATgetArgument(t, 0);
                n_40 = ATgetArgument(t, 1);
                p_40 = ATgetArgument(t, 2);
                q_40 = ATgetArgument(t, 3);
                t = p_40;
                t = map_1_0(p_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_40 = ATgetArgument(t, 0);
                    n_40 = ATgetArgument(t, 1);
                    p_40 = ATgetArgument(t, 2);
                    q_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_40;
                t = map_1_0(s_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm c_41 = NULL;
  ATerm q_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_41 = ATgetArgument(t, 0);
          {
            ATerm t_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_41);
      t = c_41;
    }
  else
    {
      t = q_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_41;
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm r_41 = NULL;
  ATerm u_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_41 = ATgetArgument(t, 0);
          {
            ATerm w_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_41);
      t = r_41;
    }
  else
    {
      t = u_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_41;
    }
  return(t);
}
ATerm f_6 (ATerm n_60, ATerm r_60, ATerm p_60, ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  ATerm a_10 (ATerm t)
  {
    t = n_60;
    t = free_vars_3_0(h_10, j_10, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = n_60;
    t = mark_match_vars_0_0(t);
    if(((e_40 != NULL) && (e_40 != t)))
      _fail(t);
    else
      e_40 = t;
    t = p_60;
    t = mark_buv_0_0(t);
    if(((f_40 != NULL) && (f_40 != t)))
      _fail(t);
    else
      f_40 = t;
    t = r_60;
    t = mark_build_vars_0_0(t);
    if(((g_40 != NULL) && (g_40 != t)))
      _fail(t);
    else
      g_40 = t;
    return(t);
  }
  t = scope_2_0(z_9, a_10, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_40), not_null(g_40), not_null(f_40)));
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm t_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_43);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_41);
    }
  else
    {
      t = x_41;
      {
        ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_44 = ATgetArgument(t, 0);
            t = b_44;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_44 = ATgetArgument(t, 0);
                c_44 = ATgetArgument(t, 1);
                d_44 = ATgetArgument(t, 2);
                e_44 = ATgetArgument(t, 3);
                t = d_44;
                t = map_1_0(w_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_44 = ATgetArgument(t, 0);
                    c_44 = ATgetArgument(t, 1);
                    d_44 = ATgetArgument(t, 2);
                    e_44 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_44;
                t = map_1_0(x_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm m_44 = NULL;
  ATerm z_41 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_44 = ATgetArgument(t, 0);
          {
            ATerm d_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_42);
      t = m_44;
    }
  else
    {
      t = z_41;
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
ATerm x_10 (ATerm t)
{
  ATerm j_45 = NULL;
  ATerm e_42 = t;
  int f_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_45 = ATgetArgument(t, 0);
          {
            ATerm g_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_42);
      t = j_45;
    }
  else
    {
      t = e_42;
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
ATerm d_11 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm l_46 = NULL;
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_46 = ATgetArgument(t, 0);
          {
            ATerm k_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_42);
      t = l_46;
    }
  else
    {
      t = h_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_46;
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm o_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_46);
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm l_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_42);
    }
  else
    {
      t = l_42;
      {
        ATerm t_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_46 = ATgetArgument(t, 0);
            t = t_46;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_46 = ATgetArgument(t, 0);
                v_46 = ATgetArgument(t, 1);
                w_46 = ATgetArgument(t, 2);
                x_46 = ATgetArgument(t, 3);
                t = w_46;
                t = map_1_0(k_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_46 = ATgetArgument(t, 0);
                    v_46 = ATgetArgument(t, 1);
                    w_46 = ATgetArgument(t, 2);
                    x_46 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_46;
                t = map_1_0(n_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm o_47 = NULL;
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_47 = ATgetArgument(t, 0);
          {
            ATerm z_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_42);
      t = o_47;
    }
  else
    {
      t = x_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_47;
    }
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm e_48 = NULL;
  ATerm a_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_48 = ATgetArgument(t, 0);
          {
            ATerm e_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_43);
      t = e_48;
    }
  else
    {
      t = a_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_48;
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,b_43 = NULL,c_43 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      q_42 = ATgetArgument(t, 0);
      r_42 = ATgetArgument(t, 1);
      s_42 = ATgetArgument(t, 2);
      {
        ATerm g_43 = NULL,i_43 = NULL,k_43 = NULL,s_43 = NULL;
        t = s_42;
        if(match_cons(t, sym_Rule_3))
          {
            m_42 = ATgetArgument(t, 0);
            n_42 = ATgetArgument(t, 1);
            o_42 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = s_42;
        t = free_vars_3_0(t_10, u_10, tboundin_3_0, t);
        g_43 = t;
        {
          ATerm f_11 (ATerm t)
          {
            t = g_43;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = m_42;
            t = mark_match_vars_0_0(t);
            if(((i_43 != NULL) && (i_43 != t)))
              _fail(t);
            else
              i_43 = t;
            t = o_42;
            t = mark_buv_0_0(t);
            if(((k_43 != NULL) && (k_43 != t)))
              _fail(t);
            else
              k_43 = t;
            t = n_42;
            t = mark_build_vars_0_0(t);
            if(((s_43 != NULL) && (s_43 != t)))
              _fail(t);
            else
              s_43 = t;
            return(t);
          }
          t = scope_2_0(d_11, f_11, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, q_42, r_42, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_43), not_null(s_43), not_null(k_43)));
        }
      }
    }
  else
    {
      ATerm u_45 = NULL,v_45 = NULL,x_45 = NULL,z_45 = NULL,h_46 = NULL,i_46 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          q_42 = ATgetArgument(t, 0);
          r_42 = ATgetArgument(t, 1);
          s_42 = ATgetArgument(t, 2);
          t_42 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = t_42;
      if(match_cons(t, sym_Rule_3))
        {
          u_42 = ATgetArgument(t, 0);
          b_43 = ATgetArgument(t, 1);
          c_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_42;
      t = map_1_0(g_11, t);
      u_45 = t;
      t = t_42;
      t = free_vars_3_0(h_11, i_11, tboundin_3_0, t);
      i_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_46, u_45);
      t = diff_0_0(t);
      v_45 = t;
      {
        ATerm q_11 (ATerm t)
        {
          t = u_45;
          t = map_1_0(IntroduceBound_0_0, t);
          t = v_45;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = u_42;
          t = mark_match_vars_0_0(t);
          if(((x_45 != NULL) && (x_45 != t)))
            _fail(t);
          else
            x_45 = t;
          t = c_43;
          t = mark_buv_0_0(t);
          if(((z_45 != NULL) && (z_45 != t)))
            _fail(t);
          else
            z_45 = t;
          t = b_43;
          t = mark_build_vars_0_0(t);
          if(((h_46 != NULL) && (h_46 != t)))
            _fail(t);
          else
            h_46 = t;
          return(t);
        }
        t = scope_2_0(o_11, q_11, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_42, r_42, s_42, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_45), not_null(h_46), not_null(z_45)));
      }
    }
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_48);
  i_48 = t;
  t = term_j_43;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, h_48), term_j_43);
  t = o_6(r_11, i_48, j_48, t);
  t = h_48;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm p_48 = NULL;
  ATerm l_43 = t;
  int m_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_48 = ATgetArgument(t, 0);
          {
            ATerm n_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_43);
      t = p_48;
    }
  else
    {
      t = l_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_48;
    }
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm g_6 (ATerm l_59, ATerm m_59, ATerm n_59, ATerm p_59, ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  t = n_59;
  t = map_1_0(y_11, t);
  l_48 = t;
  {
    ATerm a_12 (ATerm t)
    {
      t = l_48;
      t = map_1_0(IntroduceBound_0_0, t);
      t = p_59;
      t = mark_buv_0_0(t);
      if(((m_48 != NULL) && (m_48 != t)))
        _fail(t);
      else
        m_48 = t;
      return(t);
    }
    t = scope_2_0(z_11, a_12, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_59, m_59, n_59, not_null(m_48));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm f_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,m_50 = NULL;
  f_50 = t;
  if(match_cons(t, sym__2))
    {
      h_50 = ATgetArgument(t, 0);
      k_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_50;
  if(match_cons(t, sym_Undefined_0))
    {
      t = h_50;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_p_43;
        }
      else
        {
          t = term_p_43;
        }
    }
  else
    {
      ATerm q_43 = t;
      int r_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm v_43 = ATgetArgument(t, 0);
              m_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(r_43);
          t = h_50;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_p_43;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  i_50 = ATgetArgument(t, 0);
                  j_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm w_43 = t;
                int x_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, j_50, m_50);
                    {
                      ATerm y_43 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm e_31 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              e_31 = ATgetArgument(t, 0);
                              if((e_31 != ATgetArgument(t, 1)))
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
                          t = y_43;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, i_50, term_z_43);
                    }
                    ;
                    LocalPopChoice(x_43);
                  }
                else
                  {
                    t = w_43;
                    t = m_50;
                    if((j_50 != t))
                      {
                        _fail(t);
                      }
                    t = h_50;
                  }
              }
            }
        }
      else
        {
          t = q_43;
          t = h_50;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_p_43;
        }
    }
  return(t);
}
ATerm h_6 (ATerm w_57, ATerm x_57, ATerm v_57, ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  t = term_y_40;
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_40, w_57);
  t = d_7(x_50, w_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_50 = ATgetFirst((ATermList) t);
      {
        ATerm a_44 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_57, v_50);
  t = CompareEntries_0_0(t);
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_57, (ATerm) ATinsert(CheckATermList(v_57), w_50));
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm a_52 = NULL,h_52 = NULL,i_52 = NULL,l_52 = NULL,m_52 = NULL;
  m_52 = t;
  if(match_cons(t, sym__2))
    {
      a_52 = ATgetArgument(t, 0);
      h_52 = ATgetArgument(t, 1);
      t = h_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_52 = ATgetFirst((ATermList) t);
          l_52 = (ATerm) ATgetNext((ATermList) t);
          t = i_52;
          {
            ATerm f_44 = t;
            int g_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_44 = ATgetArgument(t, 0);
                    ATerm i_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(g_44);
                t = a_52;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = m_52;
                  }
                else
                  {
                    ATerm j_44 = t;
                    int k_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_52;
                        t = h_6(a_52, i_52, l_52, t);
                        ;
                        LocalPopChoice(k_44);
                      }
                    else
                      {
                        t = j_44;
                        t = m_52;
                      }
                  }
              }
            else
              {
                t = f_44;
                t = a_52;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = m_52;
                  }
                else
                  {
                    t = m_52;
                  }
              }
          }
        }
      else
        {
          t = a_52;
          if(match_cons(t, sym_Scopes_0))
            {
              t = m_52;
            }
          else
            {
              t = m_52;
            }
        }
    }
  else
    {
      t = m_52;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm r_51 = NULL,x_51 = NULL,z_51 = NULL;
  t = map_1_0(b_12, t);
  r_51 = t;
  t = term_y_40;
  z_51 = t;
  t = SSL_table_destroy(z_51);
  t = term_y_40;
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_40, r_51);
  t = i_6(x_51, r_51, t);
  t = r_51;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm t_53 = NULL,x_53 = NULL,e_54 = NULL;
  e_54 = t;
  {
    ATerm l_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm o_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_44);
        t = e_54;
      }
    else
      {
        t = l_44;
        {
          ATerm p_44 = t;
          int t_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm u_44 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(t_44);
              t = e_54;
            }
          else
            {
              t = p_44;
              {
                ATerm v_44 = t;
                int w_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm y_44 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_44);
                    t = e_54;
                  }
                else
                  {
                    t = v_44;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm z_44 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_54;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    t_53 = t;
    t = e_54;
    t = SRTS_one(mark_buv_0_0, t);
    x_53 = t;
    t = t_53;
    t = isect_MarkVar_0_0(t);
    t = x_53;
  }
  return(t);
}
ATerm i_6 (ATerm r_28, ATerm q_28, ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    ATerm i_54 = NULL,j_54 = NULL;
    if(match_cons(t, sym__2))
      {
        i_54 = ATgetArgument(t, 0);
        j_54 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(r_28, i_54, j_54);
    t = (ATerm) ATmakeAppl(sym__3, r_28, i_54, j_54);
    return(t);
  }
  t = q_28;
  t = map_1_0(c_12, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_54 = NULL;
  ATerm f_12 (ATerm t)
  {
    ATerm l_54 = NULL,m_54 = NULL;
    l_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_54), l_54);
    t = d_7(not_null(k_54), l_54, t);
    m_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_54, m_54);
    return(t);
  }
  if(((k_54 != NULL) && (k_54 != t)))
    _fail(t);
  else
    k_54 = t;
  t = SSL_table_keys(k_54);
  t = map_1_0(f_12, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_y_40;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm j_58, ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
  t = save_MarkVar_0_0(t);
  {
    ATerm g_12 (ATerm t)
    {
      ATerm s_55 (ATerm u_54, ATerm t)
      {
        ATerm y_54 = NULL,z_54 = NULL,h_55 = NULL,i_55 = NULL;
        t = u_54;
        if(match_cons(t, sym__2))
          {
            ATerm a_45 = ATgetArgument(t, 0);
            y_54 = a_45;
            if(match_cons(a_45, sym_Var_1))
              {
                z_54 = ATgetArgument(a_45, 0);
              }
            else
              _fail(t);
            {
              ATerm b_45 = ATgetArgument(t, 1);
              if(((ATgetType(b_45) == AT_LIST) && !(ATisEmpty(b_45))))
                {
                  ATerm c_45 = ATgetFirst((ATermList) b_45);
                  if(match_cons(c_45, sym_Defined_2))
                    {
                      h_55 = ATgetArgument(c_45, 0);
                      {
                        ATerm d_45 = ATgetArgument(c_45, 1);
                        if((ATgetSymbol((ATermAppl) d_45) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  i_55 = (ATerm) ATgetNext((ATermList) b_45);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_58;
        {
          ATerm h_12 (ATerm t)
          {
            if((z_54 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(h_12, t);
          t = (ATerm) ATmakeAppl(sym__2, y_54, (ATerm) ATinsert(CheckATermList(i_55), (ATerm) ATmakeAppl(sym_Defined_2, h_55, term_z_43)));
        }
        return(t);
      }
      ATerm k_55 = NULL,m_55 = NULL;
      m_55 = t;
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                k_55 = ATgetArgument(t, 0);
                {
                  ATerm g_45 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_45);
            t = k_55;
            if(match_cons(t, sym_Scopes_0))
              {
                t = m_55;
              }
            else
              {
                ATerm h_45 = t;
                int i_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = s_55(m_55, t);
                    ;
                    LocalPopChoice(i_45);
                  }
                else
                  {
                    t = h_45;
                    t = m_55;
                  }
              }
          }
        else
          {
            t = e_45;
            {
              ATerm k_45 = t;
              int l_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_55(m_55, t);
                  ;
                  LocalPopChoice(l_45);
                }
              else
                {
                  t = k_45;
                  t = m_55;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(g_12, t);
    r_54 = t;
    t = term_y_40;
    t_54 = t;
    t = SSL_table_destroy(t_54);
    t = term_y_40;
    s_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_40, r_54);
    t = i_6(s_54, r_54, t);
    t = r_54;
  }
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm v_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_56);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm m_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_45);
    }
  else
    {
      t = m_45;
      {
        ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,c_57 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_56 = ATgetArgument(t, 0);
            t = x_56;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_56 = ATgetArgument(t, 0);
                y_56 = ATgetArgument(t, 1);
                z_56 = ATgetArgument(t, 2);
                c_57 = ATgetArgument(t, 3);
                t = z_56;
                t = map_1_0(s_12, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    x_56 = ATgetArgument(t, 0);
                    y_56 = ATgetArgument(t, 1);
                    z_56 = ATgetArgument(t, 2);
                    c_57 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = z_56;
                t = map_1_0(t_12, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm b_58 = NULL;
  ATerm p_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_58 = ATgetArgument(t, 0);
          {
            ATerm r_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_45);
      t = b_58;
    }
  else
    {
      t = p_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_58;
    }
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm v_58 = NULL;
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_58 = ATgetArgument(t, 0);
          {
            ATerm w_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_45);
      t = v_58;
    }
  else
    {
      t = s_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_58;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,m_11 = NULL,l_11 = NULL;
  u_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_56 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_56);
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, r_56, s_56);
  l_11 = t;
  t = SSLsetAnnotations(l_11, q_56);
  t_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_56 = ATgetArgument(t, 0);
      {
        ATerm y_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_56;
  t = free_vars_3_0(k_12, l_12, tboundin_3_0, t);
  a_56 = t;
  t = undefine_unbound_MarkVar_0_1(a_56, t);
  b_56 = t;
  t = t_56;
  if(match_cons(t, sym_Let_2))
    {
      e_56 = ATgetArgument(t, 0);
      f_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_56);
  d_56 = t;
  t = e_56;
  {
    ATerm w_12 (ATerm t)
    {
      ATerm e_59 = NULL,m_61 = NULL,n_61 = NULL;
      e_59 = t;
      t = term_y_40;
      n_61 = t;
      t = SSL_table_destroy(n_61);
      t = term_y_40;
      m_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_40, b_56);
      t = i_6(m_61, b_56, t);
      t = e_59;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(w_12, t);
    g_56 = t;
    t = term_y_40;
    j_56 = t;
    t = SSL_table_destroy(j_56);
    t = term_y_40;
    i_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_40, b_56);
    t = i_6(i_56, b_56, t);
    t = f_56;
    t = mark_buv_0_0(t);
    h_56 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, g_56, h_56);
    m_11 = t;
    t = SSLsetAnnotations(m_11, d_56);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm b_46 = t;
  int c_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_61 = NULL,p_61 = NULL,u_61 = NULL,p_11 = NULL;
      u_61 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_61);
      o_61 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_61);
      p_11 = t;
      t = SSLsetAnnotations(p_11, o_61);
      LocalPopChoice(c_46);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = b_46;
      {
        ATerm d_46 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_61 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,s_11 = NULL;
            d_62 = t;
            if(match_cons(t, sym_App_2))
              {
                b_62 = ATgetArgument(t, 0);
                c_62 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_62);
            w_61 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, b_62, c_62);
            s_11 = t;
            t = SSLsetAnnotations(s_11, w_61);
            LocalPopChoice(e_46);
            {
              ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,t_11 = NULL;
              j_62 = t;
              if(match_cons(t, sym_App_2))
                {
                  f_62 = ATgetArgument(t, 0);
                  g_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_62);
              e_62 = t;
              t = f_62;
              t = mark_buv_0_0(t);
              h_62 = t;
              t = g_62;
              t = mark_build_vars_0_0(t);
              i_62 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, h_62, i_62);
              t_11 = t;
              t = SSLsetAnnotations(t_11, e_62);
            }
          }
        else
          {
            t = d_46;
            {
              ATerm f_46 = t;
              int g_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_62 = NULL,l_62 = NULL,q_62 = NULL,w_11 = NULL;
                  q_62 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      l_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_62);
                  k_62 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, l_62);
                  w_11 = t;
                  t = SSLsetAnnotations(w_11, k_62);
                  LocalPopChoice(g_46);
                  {
                    ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,x_11 = NULL;
                    u_62 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        s_62 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_62);
                    r_62 = t;
                    t = s_62;
                    t = mark_buv_0_0(t);
                    t_62 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, t_62);
                    x_11 = t;
                    t = SSLsetAnnotations(x_11, r_62);
                  }
                }
              else
                {
                  t = f_46;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_6 (ATerm b_28, ATerm c_28, ATerm d_28, ATerm t)
{
  ATerm v_62 = NULL,y_62 = NULL,a_63 = NULL;
  y_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, c_28);
  t = d_7(b_28, c_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_46 = ATgetFirst((ATermList) t);
      v_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_62), d_28);
  a_63 = t;
  t = SSL_table_put(b_28, c_28, a_63);
  t = y_62;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,h_63 = NULL;
  b_63 = t;
  t = term_y_40;
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_63);
  d_63 = t;
  t = term_m_46;
  h_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_40, (ATerm)ATmakeAppl(sym_Var_1, b_63), term_m_46);
  t = j_6(c_63, d_63, h_63, t);
  t = b_63;
  return(t);
}
ATerm m_6 (ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm i_63 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_27, a_28);
  t = d_7(z_27, a_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_63 = ATgetFirst((ATermList) t);
      {
        ATerm n_46 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_63;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm v_65 = NULL,y_65 = NULL;
  v_65 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,i_34 = NULL;
        t = term_y_40;
        i_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_40, v_65);
        t = m_6(i_34, v_65, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_46 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_46) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            y_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, y_65);
        z_33 = t;
        t = (ATerm) ATinsert(ATempty, y_33);
        a_34 = t;
        t = SSLsetAnnotations(z_33, a_34);
        ;
        LocalPopChoice(q_46);
      }
    else
      {
        t = p_46;
        {
          ATerm u_46 = t;
          int y_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,x_34 = NULL;
              t = term_y_40;
              x_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_40, v_65);
              t = m_6(x_34, v_65, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm a_47 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) a_47) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  p_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, y_65);
              q_34 = t;
              t = (ATerm) ATinsert(ATempty, p_34);
              r_34 = t;
              t = SSLsetAnnotations(q_34, r_34);
              ;
              LocalPopChoice(y_46);
            }
          else
            {
              t = u_46;
              {
                ATerm d_35 = NULL,g_35 = NULL,h_35 = NULL,p_35 = NULL;
                t = term_y_40;
                p_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_40, v_65);
                t = m_6(p_35, v_65, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm b_47 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) b_47) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    d_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, y_65);
                g_35 = t;
                t = (ATerm) ATinsert(ATempty, d_35);
                h_35 = t;
                t = SSLsetAnnotations(g_35, h_35);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm i_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,j_12 = NULL;
  ATerm c_47 = t;
  int d_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(d_47);
    }
  else
    {
      t = c_47;
    }
  p_66 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_66);
  i_66 = t;
  t = n_66;
  t = DeclareBound_0_0(t);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_66);
  j_12 = t;
  t = SSLsetAnnotations(j_12, i_66);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm e_47 = t;
  int f_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,o_12 = NULL;
      u_66 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_66);
      s_66 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_66);
      o_12 = t;
      t = SSLsetAnnotations(o_12, s_66);
      LocalPopChoice(f_47);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = e_47;
      {
        ATerm g_47 = t;
        int h_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_66 = NULL,w_66 = NULL,d_67 = NULL,e_67 = NULL,p_12 = NULL;
            e_67 = t;
            if(match_cons(t, sym_App_2))
              {
                w_66 = ATgetArgument(t, 0);
                d_67 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_67);
            v_66 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, w_66, d_67);
            p_12 = t;
            t = SSLsetAnnotations(p_12, v_66);
            LocalPopChoice(h_47);
            {
              ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,q_12 = NULL;
              k_67 = t;
              if(match_cons(t, sym_App_2))
                {
                  g_67 = ATgetArgument(t, 0);
                  h_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_67);
              f_67 = t;
              t = g_67;
              t = mark_buv_0_0(t);
              i_67 = t;
              t = h_67;
              t = mark_build_vars_0_0(t);
              j_67 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, i_67, j_67);
              q_12 = t;
              t = SSLsetAnnotations(q_12, f_67);
            }
          }
        else
          {
            t = g_47;
            {
              ATerm i_47 = t;
              int j_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,u_12 = NULL;
                  n_67 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      m_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_67);
                  l_67 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, m_67);
                  u_12 = t;
                  t = SSLsetAnnotations(u_12, l_67);
                  LocalPopChoice(j_47);
                  {
                    ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,v_12 = NULL;
                    t_67 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        r_67 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(t_67);
                    q_67 = t;
                    t = r_67;
                    t = mark_buv_0_0(t);
                    s_67 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, s_67);
                    v_12 = t;
                    t = SSLsetAnnotations(v_12, q_67);
                  }
                }
              else
                {
                  t = i_47;
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
  ATerm k_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_68 = NULL,u_68 = NULL;
      t_68 = t;
      if(match_cons(t, sym_Match_1))
        {
          u_68 = ATgetArgument(t, 0);
          {
            ATerm h_36 = NULL,l_36 = NULL,j_13 = NULL;
            t = SSLgetAnnotations(t_68);
            h_36 = t;
            t = u_68;
            t = mark_match_vars_0_0(t);
            l_36 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, l_36);
            j_13 = t;
            t = SSLsetAnnotations(j_13, h_36);
          }
        }
      else
        {
          ATerm v_36 = NULL,y_36 = NULL,k_13 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              u_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_68);
          v_36 = t;
          t = u_68;
          t = mark_build_vars_0_0(t);
          y_36 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, y_36);
          k_13 = t;
          t = SSLsetAnnotations(k_13, v_36);
        }
      ;
      LocalPopChoice(l_47);
    }
  else
    {
      t = k_47;
      {
        ATerm m_47 = t;
        int n_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            ;
            LocalPopChoice(n_47);
          }
        else
          {
            t = m_47;
            {
              ATerm p_47 = t;
              int q_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  ;
                  LocalPopChoice(q_47);
                }
              else
                {
                  t = p_47;
                  {
                    ATerm r_47 = t;
                    int t_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        ;
                        LocalPopChoice(t_47);
                      }
                    else
                      {
                        t = r_47;
                        {
                          ATerm u_47 = t;
                          int v_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,b_69 = NULL,d_69 = NULL;
                              x_68 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  y_68 = ATgetArgument(t, 0);
                                  z_68 = ATgetArgument(t, 1);
                                  b_69 = ATgetArgument(t, 2);
                                  d_69 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = x_68;
                              t = g_6(y_68, z_68, b_69, d_69, t);
                              ;
                              LocalPopChoice(v_47);
                            }
                          else
                            {
                              t = u_47;
                              {
                                ATerm w_47 = t;
                                int y_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(y_47);
                                  }
                                else
                                  {
                                    t = w_47;
                                    {
                                      ATerm z_47 = t;
                                      int a_48 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
                                          s_69 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              t_69 = ATgetArgument(t, 0);
                                              t = t_69;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  m_69 = ATgetArgument(t, 0);
                                                  n_69 = ATgetArgument(t, 1);
                                                  o_69 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = s_69;
                                              t = f_6(m_69, n_69, o_69, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  t_69 = ATgetArgument(t, 0);
                                                  t = t_69;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      m_69 = ATgetArgument(t, 0);
                                                      n_69 = ATgetArgument(t, 1);
                                                      o_69 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_69;
                                                  t = e_6(m_69, n_69, o_69, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      t_69 = ATgetArgument(t, 0);
                                                      u_69 = ATgetArgument(t, 1);
                                                      v_69 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_69;
                                                  t = d_6(t_69, u_69, v_69, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(a_48);
                                        }
                                      else
                                        {
                                          t = z_47;
                                          {
                                            ATerm b_48 = t;
                                            int c_48 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(c_48);
                                              }
                                            else
                                              {
                                                t = b_48;
                                                {
                                                  ATerm d_48 = t;
                                                  int f_48 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(f_48);
                                                    }
                                                  else
                                                    {
                                                      t = d_48;
                                                      {
                                                        ATerm g_48 = t;
                                                        int k_48 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm o_70 = NULL;
                                                            o_70 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm n_48 = ATgetArgument(t, 0);
                                                                ATerm o_48 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = o_70;
                                                            t = c_6(t);
                                                            ;
                                                            LocalPopChoice(k_48);
                                                          }
                                                        else
                                                          {
                                                            t = g_48;
                                                            {
                                                              ATerm q_48 = t;
                                                              int t_48 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(t_48);
                                                                }
                                                              else
                                                                {
                                                                  t = q_48;
                                                                  {
                                                                    ATerm u_48 = t;
                                                                    int v_48 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(v_48);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_48;
                                                                        {
                                                                          ATerm w_48 = t;
                                                                          int a_49 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(a_49);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_48;
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
ATerm n_6 (ATerm o_27, ATerm p_27, ATerm n_27, ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,a_71 = NULL;
  v_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, p_27);
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_49 = ATgetArgument(t, 0);
            ATerm g_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_27, p_27);
        t = d_7(o_27, p_27, t);
        ;
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
        t = (ATerm) ATempty;
      }
    w_70 = t;
    t = (ATerm) ATinsert(CheckATermList(w_70), n_27);
    a_71 = t;
    t = SSL_table_put(o_27, p_27, a_71);
    t = v_70;
  }
  return(t);
}
ATerm o_6 (ATerm j_83 (ATerm), ATerm g_27, ATerm e_27, ATerm t)
{
  ATerm l_71 = NULL,s_71 = NULL,d_72 = NULL,o_72 = NULL,q_72 = NULL,r_72 = NULL;
  o_72 = t;
  t = j_83(t);
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_71, g_27, e_27);
  t = n_6(l_71, g_27, e_27, t);
  {
    ATerm h_49 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_72 = NULL;
        t = term_m_49;
        s_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_71, term_m_49);
        t = d_7(l_71, s_72, t);
        ;
        LocalPopChoice(l_49);
      }
    else
      {
        t = h_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_71 = ATgetFirst((ATermList) t);
        d_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_49;
    q_72 = t;
    t = (ATerm) ATinsert(CheckATermList(d_72), (ATerm) ATinsert(CheckATermList(s_71), g_27));
    r_72 = t;
    t = SSL_table_put(l_71, q_72, r_72);
    t = o_72;
  }
  return(t);
}
ATerm y_12 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm t_72 = NULL,w_72 = NULL,x_72 = NULL;
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_72);
  w_72 = t;
  t = term_p_49;
  x_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_72), term_p_49);
  t = o_6(y_12, w_72, x_72, t);
  t = t_72;
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm y_72 = NULL,d_73 = NULL,e_73 = NULL,g_73 = NULL,h_73 = NULL,s_13 = NULL;
  h_73 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_73 = ATgetArgument(t, 0);
      e_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_73);
  y_72 = t;
  t = e_73;
  {
    ATerm c_13 (ATerm t)
    {
      ATerm j_73 = NULL;
      j_73 = t;
      t = d_73;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = j_73;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(z_12, c_13, t);
    g_73 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, d_73, g_73);
    s_13 = t;
    t = SSLsetAnnotations(s_13, y_72);
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL,f_77 = NULL,g_77 = NULL;
  f_77 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_77 = ATgetArgument(t, 0);
      z_76 = ATgetArgument(t, 1);
      {
        ATerm n_37 = NULL,t_37 = NULL,b_38 = NULL,v_13 = NULL;
        t = SSLgetAnnotations(f_77);
        n_37 = t;
        t = g_77;
        t = e_93(t);
        t_37 = t;
        t = z_76;
        t = c_93(t);
        b_38 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, t_37, b_38);
        v_13 = t;
        t = SSLsetAnnotations(v_13, n_37);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          g_77 = ATgetArgument(t, 0);
          z_76 = ATgetArgument(t, 1);
          a_77 = ATgetArgument(t, 2);
          b_77 = ATgetArgument(t, 3);
          {
            ATerm v_38 = NULL,g_39 = NULL,h_39 = NULL,s_39 = NULL,t_39 = NULL,w_13 = NULL;
            t = SSLgetAnnotations(f_77);
            v_38 = t;
            t = g_77;
            t = e_93(t);
            g_39 = t;
            t = z_76;
            t = e_93(t);
            h_39 = t;
            t = a_77;
            t = e_93(t);
            s_39 = t;
            t = b_77;
            t = c_93(t);
            t_39 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_39, h_39, s_39, t_39);
            w_13 = t;
            t = SSLsetAnnotations(w_13, v_38);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              g_77 = ATgetArgument(t, 0);
              z_76 = ATgetArgument(t, 1);
              a_77 = ATgetArgument(t, 2);
              b_77 = ATgetArgument(t, 3);
              {
                ATerm o_40 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,x_13 = NULL;
                t = SSLgetAnnotations(f_77);
                o_40 = t;
                t = g_77;
                t = e_93(t);
                h_41 = t;
                t = z_76;
                t = e_93(t);
                i_41 = t;
                t = a_77;
                t = e_93(t);
                j_41 = t;
                t = b_77;
                t = c_93(t);
                k_41 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, h_41, i_41, j_41, k_41);
                x_13 = t;
                t = SSLsetAnnotations(x_13, o_40);
              }
            }
          else
            {
              ATerm a_42 = NULL,c_42 = NULL,a_14 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_77);
              a_42 = t;
              t = g_77;
              t = c_93(t);
              c_42 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, c_42);
              a_14 = t;
              t = SSLsetAnnotations(a_14, a_42);
            }
        }
    }
  return(t);
}
ATerm map_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm u_78 (ATerm t)
  {
    ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
    o_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_78;
      }
    else
      {
        ATerm j_42 = NULL,v_42 = NULL,w_42 = NULL,y_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_78 = ATgetFirst((ATermList) t);
            q_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_78);
        j_42 = t;
        t = p_78;
        t = x_79(t);
        v_42 = t;
        t = q_78;
        t = u_78(t);
        w_42 = t;
        t = (ATerm) ATinsert(CheckATermList(w_42), v_42);
        y_15 = t;
        t = SSLsetAnnotations(y_15, j_42);
      }
    return(t);
  }
  t = u_78(t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm z_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_78);
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm r_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_49);
    }
  else
    {
      t = r_49;
      {
        ATerm b_79 = NULL,e_79 = NULL,g_79 = NULL,j_79 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_79 = ATgetArgument(t, 0);
            t = b_79;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_79 = ATgetArgument(t, 0);
                e_79 = ATgetArgument(t, 1);
                g_79 = ATgetArgument(t, 2);
                j_79 = ATgetArgument(t, 3);
                t = g_79;
                t = map_1_0(g_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_79 = ATgetArgument(t, 0);
                    e_79 = ATgetArgument(t, 1);
                    g_79 = ATgetArgument(t, 2);
                    j_79 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = g_79;
                t = map_1_0(i_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm k_80 = NULL;
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_80 = ATgetArgument(t, 0);
          {
            ATerm w_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_49);
      t = k_80;
    }
  else
    {
      t = u_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_80;
    }
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm v_80 = NULL;
  ATerm x_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_80 = ATgetArgument(t, 0);
          {
            ATerm a_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_49);
      t = v_80;
    }
  else
    {
      t = x_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_80;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(d_13, e_13, tboundin_3_0, t);
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm k_81 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_81);
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm b_50 = t;
  int c_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_50);
    }
  else
    {
      t = b_50;
      {
        ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_81 = ATgetArgument(t, 0);
            t = m_81;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_81 = ATgetArgument(t, 0);
                n_81 = ATgetArgument(t, 1);
                o_81 = ATgetArgument(t, 2);
                p_81 = ATgetArgument(t, 3);
                t = o_81;
                t = map_1_0(r_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_81 = ATgetArgument(t, 0);
                    n_81 = ATgetArgument(t, 1);
                    o_81 = ATgetArgument(t, 2);
                    p_81 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_81;
                t = map_1_0(t_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm x_81 = NULL;
  ATerm d_50 = t;
  int e_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_81 = ATgetArgument(t, 0);
          {
            ATerm l_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_50);
      t = x_81;
    }
  else
    {
      t = d_50;
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
ATerm t_13 (ATerm t)
{
  ATerm j_82 = NULL;
  ATerm n_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_82 = ATgetArgument(t, 0);
          {
            ATerm q_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_50);
      t = j_82;
    }
  else
    {
      t = n_50;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm d_81 = NULL,h_81 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      h_81 = ATgetArgument(t, 0);
      t = h_81;
      if(match_cons(t, sym_Rule_3))
        {
          d_81 = ATgetArgument(t, 0);
          {
            ATerm r_50 = ATgetArgument(t, 1);
          }
          {
            ATerm s_50 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_81;
      t = free_vars_3_0(n_13, o_13, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_81 = ATgetArgument(t, 0);
          {
            ATerm t_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_81;
    }
  return(t);
}
ATerm t_6 (ATerm m_79 (ATerm), ATerm w_21, ATerm v_21, ATerm t)
{
  ATerm c_83 (ATerm t)
  {
    ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL;
    x_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_82 = ATgetFirst((ATermList) t);
            z_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_50 = t;
          int y_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_82;
              {
                ATerm u_13 (ATerm t)
                {
                  t = v_21;
                  return(t);
                }
                t = u_6(m_79, u_13, y_82, z_82, t);
                t = c_83(t);
              }
              ;
              LocalPopChoice(y_50);
            }
          else
            {
              t = u_50;
              {
                ATerm o_43 = NULL,u_43 = NULL,v_16 = NULL;
                t = SSLgetAnnotations(x_82);
                o_43 = t;
                t = z_82;
                t = c_83(t);
                u_43 = t;
                t = (ATerm) ATinsert(CheckATermList(u_43), y_82);
                v_16 = t;
                t = SSLsetAnnotations(v_16, o_43);
              }
            }
        }
      }
    return(t);
  }
  t = w_21;
  t = c_83(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t)
{
  ATerm k_83 = NULL,m_83 = NULL,o_83 = NULL;
  k_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_83;
      t = z_81(t);
    }
  else
    {
      ATerm r_83 = NULL,s_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_83 = ATgetFirst((ATermList) t);
          o_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_83;
      t = b_82(t);
      r_83 = t;
      t = o_83;
      t = foldr_3_0(z_81, a_82, b_82, t);
      s_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_83, s_83);
      t = a_82(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm r_84 (ATerm t)
  {
    ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL;
    o_84 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_84 = ATgetFirst((ATermList) t);
        q_84 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_50 = t;
      int b_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_44 = NULL,x_44 = NULL,z_17 = NULL;
          t = SSLgetAnnotations(o_84);
          q_44 = t;
          t = p_84;
          t = h_80(t);
          x_44 = t;
          t = (ATerm) ATinsert(CheckATermList(q_84), x_44);
          z_17 = t;
          t = SSLsetAnnotations(z_17, q_44);
          ;
          LocalPopChoice(b_51);
        }
      else
        {
          t = z_50;
          {
            ATerm n_45 = NULL,a_46 = NULL,a_18 = NULL;
            t = SSLgetAnnotations(o_84);
            n_45 = t;
            t = q_84;
            t = r_84(t);
            a_46 = t;
            t = (ATerm) ATinsert(CheckATermList(a_46), p_84);
            a_18 = t;
            t = SSLsetAnnotations(a_18, n_45);
          }
        }
    }
    return(t);
  }
  t = r_84(t);
  return(t);
}
ATerm u_6 (ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm a_22, ATerm z_21, ATerm t)
{
  t = q_79(t);
  {
    ATerm b_14 (ATerm t)
    {
      ATerm u_84 = NULL;
      u_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_22, u_84);
      t = p_79(t);
      return(t);
    }
    t = fetch_1_0(b_14, t);
    t = z_21;
  }
  return(t);
}
ATerm v_6 (ATerm h_79 (ATerm), ATerm u_21, ATerm t_21, ATerm t)
{
  ATerm m_85 (ATerm t)
  {
    ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
    h_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_85;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_85 = ATgetFirst((ATermList) t);
            j_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_51 = t;
          int f_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_85;
              {
                ATerm g_14 (ATerm t)
                {
                  t = t_21;
                  return(t);
                }
                t = u_6(h_79, g_14, i_85, j_85, t);
                t = m_85(t);
              }
              ;
              LocalPopChoice(f_51);
            }
          else
            {
              t = c_51;
              {
                ATerm s_46 = NULL,z_46 = NULL,f_18 = NULL;
                t = SSLgetAnnotations(h_85);
                s_46 = t;
                t = j_85;
                t = m_85(t);
                z_46 = t;
                t = (ATerm) ATinsert(CheckATermList(z_46), i_85);
                f_18 = t;
                t = SSLsetAnnotations(f_18, s_46);
              }
            }
        }
      }
    return(t);
  }
  t = u_21;
  t = m_85(t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm i_86 (ATerm t)
  {
    ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
    h_86 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_86 = ATgetFirst((ATermList) t);
        g_86 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_47 = NULL,x_47 = NULL,i_18 = NULL;
          t = SSLgetAnnotations(h_86);
          s_47 = t;
          t = g_86;
          t = i_86(t);
          x_47 = t;
          t = (ATerm) ATinsert(CheckATermList(x_47), f_86);
          i_18 = t;
          t = SSLsetAnnotations(i_18, s_47);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_86;
        t = n_80(t);
      }
    return(t);
  }
  t = i_86(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
  p_85 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_85;
    }
  else
    {
      ATerm h_14 (ATerm t)
      {
        t = not_null(r_85);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_85 = ATgetFirst((ATermList) t);
          if(((r_85 != NULL) && (r_85 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_85;
      t = at_end_1_0(h_14, t);
    }
  return(t);
}
ATerm u_86 (ATerm m_86, ATerm t)
{
  ATerm n_86 = NULL;
  t = SSL_explode_term(m_86);
  if(match_cons(t, sym__2))
    {
      ATerm g_51 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_51) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_86;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
  r_86 = t;
  if(match_cons(t, sym__2))
    {
      p_86 = ATgetArgument(t, 0);
      q_86 = ATgetArgument(t, 1);
      {
        ATerm h_51 = t;
        int i_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_14 (ATerm t)
            {
              t = q_86;
              return(t);
            }
            t = p_86;
            t = at_end_1_0(i_14, t);
            ;
            LocalPopChoice(i_51);
          }
        else
          {
            t = h_51;
            t = u_86(r_86, t);
          }
      }
    }
  else
    {
      t = u_86(r_86, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm b_87 (ATerm t)
  {
    ATerm j_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_87(t);
        ;
        LocalPopChoice(k_51);
      }
    else
      {
        t = j_51;
        {
          ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,k_18 = NULL;
          t = g_87(t);
          a_87 = t;
          if(match_cons(t, sym__2))
            {
              w_86 = ATgetArgument(t, 0);
              x_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_87);
          v_86 = t;
          t = w_86;
          t = i_87(t);
          y_86 = t;
          t = x_86;
          t = b_87(t);
          z_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_86, z_86);
          k_18 = t;
          t = SSLsetAnnotations(k_18, v_86);
          t = h_87(t);
        }
      }
    return(t);
  }
  t = b_87(t);
  return(t);
}
ATerm j_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_51 = ATgetArgument(t, 0);
      if(((ATgetType(l_51) != AT_LIST) || !(ATisEmpty(l_51))))
        _fail(t);
      {
        ATerm m_51 = ATgetArgument(t, 1);
        if(((ATgetType(m_51) != AT_LIST) || !(ATisEmpty(m_51))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_51 = ATgetArgument(t, 0);
      if(((ATgetType(n_51) == AT_LIST) && !(ATisEmpty(n_51))))
        {
          n_87 = ATgetFirst((ATermList) n_51);
          o_87 = (ATerm) ATgetNext((ATermList) n_51);
        }
      else
        _fail(t);
      {
        ATerm o_51 = ATgetArgument(t, 1);
        if(((ATgetType(o_51) == AT_LIST) && !(ATisEmpty(o_51))))
          {
            p_87 = ATgetFirst((ATermList) o_51);
            q_87 = (ATerm) ATgetNext((ATermList) o_51);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_87, p_87), (ATerm) ATmakeAppl(sym__2, o_87, q_87));
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  if(match_cons(t, sym__2))
    {
      r_87 = ATgetArgument(t, 0);
      s_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_87), r_87);
  return(t);
}
ATerm a_7 (ATerm x_617, ATerm c_618, ATerm t_57, ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,k_87 = NULL,l_87 = NULL;
  t = SSL_explode_term(c_618);
  if(match_cons(t, sym__2))
    {
      d_87 = ATgetArgument(t, 0);
      k_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_617);
  if(match_cons(t, sym__2))
    {
      if((d_87 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_87, k_87);
  t = genzip_4_0(j_14, k_14, l_14, _id, t);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_87, t_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm t)
{
  ATerm u_87 (ATerm t)
  {
    ATerm p_51 = t;
    int q_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_98(t);
        ;
        LocalPopChoice(q_51);
      }
    else
      {
        t = p_51;
        t = q_98(t);
        t = u_87(t);
      }
    return(t);
  }
  t = u_87(t);
  return(t);
}
ATerm for_3_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  t = s_98(t);
  t = while_not_2_0(t_98, u_98, t);
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm b_88 = NULL;
  b_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_88);
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,m_18 = NULL;
  f_88 = t;
  if(match_cons(t, sym__2))
    {
      d_88 = ATgetArgument(t, 0);
      e_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_88);
  c_88 = t;
  t = e_88;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_88, e_88);
  m_18 = t;
  t = SSLsetAnnotations(m_18, c_88);
  return(t);
}
ATerm e_16 (ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL;
  y_88 = t;
  if(match_cons(t, sym__2))
    {
      z_88 = ATgetArgument(t, 0);
      a_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_89 = ATgetFirst((ATermList) t);
      c_89 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_51 = t;
        int t_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_89(z_88, a_89, y_88, t);
            ;
            LocalPopChoice(t_51);
          }
        else
          {
            t = s_51;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_88), b_89), c_89);
          }
      }
    }
  else
    {
      t = n_89(z_88, a_89, y_88, t);
    }
  return(t);
}
ATerm n_89 (ATerm g_88, ATerm h_88, ATerm i_88, ATerm t)
{
  ATerm j_88 = NULL,m_88 = NULL,n_18 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL;
  t = SSLgetAnnotations(i_88);
  j_88 = t;
  t = h_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_88 = ATgetFirst((ATermList) t);
      s_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_88;
  if(match_cons(t, sym__2))
    {
      q_88 = ATgetArgument(t, 0);
      r_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_51 = t;
    int v_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_88;
        if((q_88 != t))
          {
            _fail(t);
          }
        t = s_88;
        ;
        LocalPopChoice(v_51);
      }
    else
      {
        t = u_51;
        t = h_88;
        t = a_7(q_88, r_88, s_88, t);
      }
    m_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_88, m_88);
    n_18 = t;
    t = SSLsetAnnotations(n_18, j_88);
  }
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm m_89 = NULL;
  if(match_cons(t, sym__2))
    {
      m_89 = ATgetArgument(t, 0);
      if((m_89 != ATgetArgument(t, 1)))
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
  ATerm w_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_14, f_15, e_16, t);
      ;
      LocalPopChoice(y_51);
    }
  else
    {
      t = w_51;
      {
        ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL;
        h_89 = t;
        if(match_cons(t, sym__2))
          {
            i_89 = ATgetArgument(t, 0);
            j_89 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_89;
        t = v_6(j_16, i_89, j_89, t);
      }
    }
  return(t);
}
ATerm o_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL;
  if(match_cons(t, sym__2))
    {
      x_48 = ATgetArgument(t, 0);
      y_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(s_16, x_48, y_48, t);
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm z_48 = NULL;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      if((z_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_16 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(d_17, i_49, j_49, t);
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm k_49 = NULL;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      if((k_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_90 (ATerm t)
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_96(t);
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
              ATerm p_89 = NULL,q_89 = NULL,r_48 = NULL,s_48 = NULL;
              p_89 = t;
              t = f_96(t);
              q_89 = t;
              t = p_89;
              {
                ATerm l_16 (ATerm t)
                {
                  ATerm s_89 = NULL;
                  t = b_90(t);
                  s_89 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_89, q_89);
                  t = diff_0_0(t);
                  return(t);
                }
                t = g_96(l_16, b_90, o_16, t);
                s_48 = t;
                t = SSL_explode_term(s_48);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_52 = ATgetArgument(t, 0);
                    r_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_48;
                t = foldr_3_0(p_16, q_16, _id, t);
              }
              ;
              LocalPopChoice(e_52);
            }
          else
            {
              t = d_52;
              {
                ATerm b_49 = NULL,c_49 = NULL;
                c_49 = t;
                t = SSL_explode_term(c_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_52 = ATgetArgument(t, 0);
                    b_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_49;
                t = foldr_3_0(w_16, x_16, b_90, t);
              }
            }
        }
      }
    return(t);
  }
  t = b_90(t);
  return(t);
}
ATerm topdown_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  ATerm g_17 (ATerm t)
  {
    t = topdown_1_0(n_83, t);
    return(t);
  }
  t = n_83(t);
  t = SRTS_all(g_17, t);
  return(t);
}
ATerm c_7 (ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL;
  d_90 = t;
  {
    ATerm j_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_27, u_27);
        t = d_7(t_27, u_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_52 = ATgetFirst((ATermList) t);
            c_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_52);
        t = SSL_table_put(t_27, u_27, c_90);
        t = (ATerm) ATmakeAppl(sym__3, t_27, u_27, c_90);
      }
    else
      {
        t = j_52;
        t = SSL_table_remove(t_27, u_27);
        t = (ATerm) ATmakeAppl(sym__2, t_27, u_27);
      }
    t = d_90;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL;
  j_90 = t;
  t = g_83(t);
  i_90 = t;
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_90 = NULL;
        t = term_m_49;
        l_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_90, term_m_49);
        t = d_7(i_90, l_90, t);
        ;
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_90 = ATgetFirst((ATermList) t);
        e_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_49;
    k_90 = t;
    t = SSL_table_put(i_90, k_90, e_90);
    t = f_90;
    {
      ATerm p_17 (ATerm t)
      {
        ATerm m_90 = NULL;
        m_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_90, m_90);
        t = c_7(i_90, m_90, t);
        return(t);
      }
      t = map_1_0(p_17, t);
      t = j_90;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t)
{
  ATerm q_52 = t;
  int r_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_90(t);
      t = h_90(t);
      ;
      LocalPopChoice(r_52);
    }
  else
    {
      t = q_52;
      t = h_90(t);
      _fail(t);
    }
  return(t);
}
ATerm d_7 (ATerm f_29, ATerm g_29, ATerm t)
{
  t = SSL_table_get(f_29, g_29);
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,v_90 = NULL;
  p_90 = t;
  t = f_83(t);
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_90, term_m_49);
  {
    ATerm s_52 = t;
    int t_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_90 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_52 = ATgetArgument(t, 0);
            ATerm v_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_49;
        z_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_90, term_m_49);
        t = d_7(o_90, z_90, t);
        ;
        LocalPopChoice(t_52);
      }
    else
      {
        t = s_52;
        t = (ATerm) ATempty;
      }
    q_90 = t;
    t = term_m_49;
    r_90 = t;
    t = (ATerm) ATinsert(CheckATermList(q_90), (ATerm) ATempty);
    v_90 = t;
    t = SSL_table_put(o_90, r_90, v_90);
    t = p_90;
  }
  return(t);
}
ATerm scope_2_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t)
{
  ATerm q_17 (ATerm t)
  {
    t = end_scope_1_0(h_83, t);
    return(t);
  }
  t = begin_scope_1_0(h_83, t);
  t = restore_always_2_0(i_83, q_17, t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm c_18 (ATerm t)
{
  t = scope_2_0(e_18, g_18, t);
  return(t);
}
ATerm e_18 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL;
  t = topdown_1_0(j_18, t);
  k_91 = t;
  t = free_vars_3_0(l_18, o_18, tboundin_3_0, t);
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, j_91, k_91);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm w_52 = ATgetArgument(t, 0);
      i_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_91;
  {
    ATerm x_52 = t;
    int y_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(y_52);
      }
    else
      {
        t = x_52;
        {
          ATerm z_52 = t;
          int a_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(a_53);
            }
          else
            {
              t = z_52;
              {
                ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    v_92 = ATgetArgument(t, 0);
                    w_92 = ATgetArgument(t, 1);
                    x_92 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = i_91;
                t = a_6(v_92, w_92, x_92, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm j_18 (ATerm t)
{
  ATerm r_91 = NULL,s_91 = NULL;
  s_91 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_91 = ATgetArgument(t, 0);
      {
        ATerm b_53 = t;
        int c_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_49 = NULL,s_49 = NULL,s_18 = NULL;
            t = SSLgetAnnotations(s_91);
            q_49 = t;
            t = r_91;
            if(match_cons(t, sym_ListVar_1))
              {
                s_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, s_49);
            s_18 = t;
            t = SSLsetAnnotations(s_18, q_49);
            ;
            LocalPopChoice(c_53);
          }
        else
          {
            t = b_53;
            t = s_91;
          }
      }
    }
  else
    {
      t = s_91;
    }
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm v_91 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_91);
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm d_53 = t;
  int e_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_53);
    }
  else
    {
      t = d_53;
      {
        ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_91 = ATgetArgument(t, 0);
            t = x_91;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_91 = ATgetArgument(t, 0);
                y_91 = ATgetArgument(t, 1);
                z_91 = ATgetArgument(t, 2);
                a_92 = ATgetArgument(t, 3);
                t = z_91;
                t = map_1_0(p_18, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    x_91 = ATgetArgument(t, 0);
                    y_91 = ATgetArgument(t, 1);
                    z_91 = ATgetArgument(t, 2);
                    a_92 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = z_91;
                t = map_1_0(q_18, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm i_92 = NULL;
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_92 = ATgetArgument(t, 0);
          {
            ATerm h_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_53);
      t = i_92;
    }
  else
    {
      t = f_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_92;
    }
  return(t);
}
ATerm q_18 (ATerm t)
{
  ATerm r_92 = NULL;
  ATerm i_53 = t;
  int j_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_92 = ATgetArgument(t, 0);
          {
            ATerm k_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_53);
      t = r_92;
    }
  else
    {
      t = i_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_92;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm h_91 = NULL;
  h_91 = t;
  t = scope_2_0(b_18, c_18, t);
  t = h_91;
  return(t);
}
ATerm filter_1_0 (ATerm f_89 (ATerm), ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL;
  q_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_93;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_93 = ATgetFirst((ATermList) t);
          s_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_53 = t;
        int m_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_49 = NULL,g_50 = NULL,o_50 = NULL,u_18 = NULL;
            t = SSLgetAnnotations(q_93);
            z_49 = t;
            t = r_93;
            t = f_89(t);
            g_50 = t;
            t = s_93;
            t = filter_1_0(f_89, t);
            o_50 = t;
            t = (ATerm) ATinsert(CheckATermList(o_50), g_50);
            u_18 = t;
            t = SSLsetAnnotations(u_18, z_49);
            ;
            LocalPopChoice(m_53);
          }
        else
          {
            t = l_53;
            t = s_93;
            t = filter_1_0(f_89, t);
          }
      }
    }
  return(t);
}
ATerm e_7 (ATerm s_25, ATerm t_25, ATerm t)
{
  ATerm n_53 = t;
  int o_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_25, t_25);
      ;
      LocalPopChoice(o_53);
    }
  else
    {
      t = n_53;
      t = SSL_addr(s_25, t_25);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL;
  x_93 = t;
  t = u_109(t);
  y_93 = t;
  t = term_u_19;
  z_93 = t;
  t = (ATerm) ATinsert(ATempty, y_93);
  a_94 = t;
  t = SSL_printnl(z_93, a_94);
  t = x_93;
  {
    ATerm p_53 = t;
    int q_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,y_18 = NULL;
        t = v_109(t);
        t = x_93;
        if(match_cons(t, sym__2))
          {
            c_94 = ATgetArgument(t, 0);
            d_94 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_93);
        b_94 = t;
        t = term_r_53;
        f_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_94, term_r_53);
        t = e_7(c_94, f_94, t);
        e_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_94, d_94);
        y_18 = t;
        t = SSLsetAnnotations(y_18, b_94);
        ;
        LocalPopChoice(q_53);
      }
    else
      {
        t = p_53;
        {
          ATerm o_94 = NULL,p_94 = NULL,a_51 = NULL,d_51 = NULL,e_51 = NULL,z_18 = NULL;
          if(match_cons(t, sym__2))
            {
              o_94 = ATgetArgument(t, 0);
              p_94 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_93);
          a_51 = t;
          t = term_r_53;
          e_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_94, term_r_53);
          t = e_7(p_94, e_51, t);
          d_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_94, d_51);
          z_18 = t;
          t = SSLsetAnnotations(z_18, a_51);
        }
      }
  }
  return(t);
}
ATerm r_18 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm u_53 = t;
  int v_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_y_26, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATempty, term_m_24))), term_p_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_c_25, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATempty, term_p_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_w_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, term_m_24), term_p_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_m_24))), term_p_22)))))));
      {
        ATerm w_53 = t;
        if((PushChoice() == 0))
          {
            ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL,e_19 = NULL;
            u_94 = t;
            if(match_cons(t, sym_Strategies_1))
              {
                t_94 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_94);
            s_94 = t;
            t = t_94;
            {
              ATerm y_53 = t;
              int z_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_94;
                  ;
                  LocalPopChoice(z_53);
                }
              else
                {
                  t = y_53;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_94;
                }
              t = (ATerm) ATmakeAppl(sym_Strategies_1, t_94);
              e_19 = t;
              t = SSLsetAnnotations(e_19, s_94);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_53;
          }
      }
      ;
      LocalPopChoice(v_53);
    }
  else
    {
      t = u_53;
      {
        ATerm w_94 = NULL,x_94 = NULL;
        t = term_u_19;
        w_94 = t;
        t = (ATerm) ATinsert(ATempty, term_g_20);
        x_94 = t;
        t = SSL_printnl(w_94, x_94);
        t = term_g_20;
        _fail(t);
      }
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(r_18, t_18, t);
  return(t);
}
ATerm debug_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL;
  y_94 = t;
  t = v_102(t);
  z_94 = t;
  t = term_u_19;
  a_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_94), z_94);
  b_95 = t;
  t = SSL_printnl(a_95, b_95);
  t = y_94;
  return(t);
}
ATerm w_18 (ATerm t)
{
  t = term_a_54;
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = term_b_54;
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = term_c_54;
  return(t);
}
ATerm test_suite_2_0 (ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,p_19 = NULL,i_19 = NULL;
  t = s_109(t);
  t = debug_1_0(w_18, t);
  t = term_f_54;
  t = t_109(t);
  l_95 = t;
  if(match_cons(t, sym__2))
    {
      g_95 = ATgetArgument(t, 0);
      h_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_95);
  f_95 = t;
  t = g_95;
  t = debug_1_0(x_18, t);
  i_95 = t;
  t = h_95;
  t = debug_1_0(a_19, t);
  j_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_95, j_95);
  i_19 = t;
  t = SSLsetAnnotations(i_19, f_95);
  k_95 = t;
  if(match_cons(t, sym__2))
    {
      d_95 = ATgetArgument(t, 0);
      e_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_95);
  c_95 = t;
  t = e_95;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_95, e_95);
  p_19 = t;
  t = SSLsetAnnotations(p_19, c_95);
  return(t);
}
ATerm b_19 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm f_19 (ATerm t)
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
  t = test_suite_2_0(b_19, f_19, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_io_0_0(t);
  return(t);
}

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
ATerm term_m_49;
ATerm term_h_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_o_48;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_y_44;
ATerm term_w_44;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_c_40;
ATerm term_v_39;
ATerm term_n_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_e_37;
ATerm term_v_34;
ATerm term_t_34;
ATerm term_e_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_u_33;
ATerm term_s_33;
ATerm term_q_33;
ATerm term_f_33;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_o_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_n_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_u_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_d_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_f_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_t_27;
ATerm term_n_27;
ATerm term_h_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_s_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_a_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_w_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_w_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_f_17;
void init_constant_terms (void)
{
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("test14", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("UnEscape", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_o_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("'\\'", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Char_1, term_s_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Var_1, term_o_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("cs", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Var_1, term_d_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test13", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_SortVar_1, term_s_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_VarDec_2, term_q_19, term_v_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Var_1, term_q_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Build_1, term_a_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_19);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Str_1, term_s_19);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Var_1, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Match_1, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Build_1, term_r_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Var_1, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Var_1, term_n_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Var_1, term_m_21);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Var_1, term_n_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Build_1, term_l_21);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_22);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_22);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATempty);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Build_1, term_w_21);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Match_1, term_o_22);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test10a", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Var_1, term_b_25);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Str_1, term_o_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Var_1, term_x_25);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test10b", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Call_2, term_s_26, (ATerm) ATempty);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Match_1, term_c_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_t_26, term_u_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_t_20, term_v_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Call_2, term_j_28, (ATerm) ATempty);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_LChoice_2, term_t_26, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_l_28, term_s_20);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_28, term_s_20);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_LChoice_2, term_t_26, term_v_28);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Var_1, term_n_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Match_1, term_o_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Str_1, term_t_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Build_1, term_o_29);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_29, term_t_26);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_App_2, term_t_26, term_o_29);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Match_1, term_k_25);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Var_1, term_c_31);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_q_31, (ATerm) ATempty);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_s_31, (ATerm) ATempty);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_Defined_2, term_k_39, term_l_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_41, term_l_39);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Defined_2, term_y_44, term_a_45);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Error: ", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym__2, term_f_49, term_f_49);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm r_0 (ATerm);
ATerm z_0 (ATerm);
ATerm test14_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm test13_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm test12_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm test11_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm p_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm test10_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm z_2 (ATerm);
ATerm p_3 (ATerm);
ATerm u_3 (ATerm);
ATerm test9_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm test8_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm test7_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm test6_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm test5_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm r_5 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm test2_0_0 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_5 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm);
ATerm t_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm Context_0_0 (ATerm);
ATerm t_5 (ATerm o_21, ATerm);
ATerm Warning_0_0 (ATerm);
ATerm u_5 (ATerm p_21, ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm e_109 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm c_109 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm f_8 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm v_84 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm k_8 (ATerm);
ATerm w_5 (ATerm r_60, ATerm s_60, ATerm t_60, ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm s_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm x_5 (ATerm l_60, ATerm p_60, ATerm n_60, ATerm);
ATerm w_8 (ATerm);
ATerm c_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm y_5 (ATerm f_60, ATerm j_60, ATerm h_60, ATerm);
ATerm j_9 (ATerm);
ATerm n_9 (ATerm);
ATerm p_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm e_10 (ATerm);
ATerm g_10 (ATerm);
ATerm j_10 (ATerm);
ATerm mark_rdef_0_0 (ATerm);
ATerm r_10 (ATerm);
ATerm IntroduceBound_0_0 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm z_5 (ATerm d_59, ATerm e_59, ATerm f_59, ATerm h_59, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm a_6 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm);
ATerm v_10 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm b_6 (ATerm o_28, ATerm n_28, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm e_11 (ATerm);
ATerm undefine_unbound_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm c_6 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm f_6 (ATerm w_27, ATerm x_27, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm g_6 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm);
ATerm h_6 (ATerm z_82 (ATerm), ATerm d_27, ATerm b_27, ATerm);
ATerm h_11 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm j_11 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm j_12 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm a_13 (ATerm);
ATerm f_13 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm m_6 (ATerm c_79 (ATerm), ATerm v_21, ATerm u_21, ATerm);
ATerm foldr_3_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm n_6 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm z_21, ATerm y_21, ATerm);
ATerm o_6 (ATerm x_78 (ATerm), ATerm t_21, ATerm s_21, ATerm);
ATerm at_end_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm t_77 (ATerm l_77, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm y_14 (ATerm);
ATerm s_6 (ATerm c_609, ATerm h_609, ATerm p_57, ATerm);
ATerm while_not_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm);
ATerm for_3_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm);
ATerm d_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm t_80 (ATerm e_79, ATerm h_79, ATerm i_79, ATerm);
ATerm j_15 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm m_15 (ATerm);
ATerm o_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm u_15 (ATerm);
ATerm w_15 (ATerm);
ATerm z_15 (ATerm);
ATerm free_vars_3_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm u_6 (ATerm q_27, ATerm r_27, ATerm);
ATerm end_scope_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm v_6 (ATerm c_29, ATerm d_29, ATerm);
ATerm begin_scope_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm scope_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm);
ATerm f_16 (ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm t_16 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_88 (ATerm), ATerm);
ATerm w_6 (ATerm p_25, ATerm q_25, ATerm);
ATerm do_test_2_0 (ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm debug_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm z_16 (ATerm);
ATerm test_suite_2_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm use_def_test_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_l_17, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_q_17), (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATinsert(ATempty, term_y_17), term_x_17), term_f_18), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, term_y_17), term_f_18)));
      {
        ATerm q_18 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_18;
          }
      }
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm a_0 = NULL,b_0 = NULL;
        t = term_w_18;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        b_0 = t;
        t = SSL_printnl(a_0, b_0);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test14_0_0 (ATerm t)
{
  t = do_test_2_0(r_0, z_0, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_k_19, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_m_19, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_y_19), term_b_20)), (ATerm) ATmakeAppl(sym_CallT_3, term_d_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_e_20))));
      {
        ATerm g_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_20;
          }
      }
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm f_0 = NULL,g_0 = NULL;
        t = term_w_18;
        f_0 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        g_0 = t;
        t = SSL_printnl(f_0, g_0);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test13_0_0 (ATerm t)
{
  t = do_test_2_0(e_1, f_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm i_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_m_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_p_20, (ATerm) ATinsert(ATempty, term_s_20)), (ATerm)ATmakeAppl(sym_Call_2, term_p_20, (ATerm) ATinsert(ATempty, term_t_20)), term_u_20));
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
      t = i_20;
      {
        ATerm i_0 = NULL,k_0 = NULL;
        t = term_w_18;
        i_0 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        k_0 = t;
        t = SSL_printnl(i_0, k_0);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(m_1, p_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm z_20 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_21), term_a_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_m_21), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_w_21), term_r_21)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_21), term_a_20))), term_r_21))))));
      {
        ATerm d_22 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_22;
          }
      }
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = z_20;
      {
        ATerm m_0 = NULL,n_0 = NULL;
        t = term_w_18;
        m_0 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        n_0 = t;
        t = SSL_printnl(m_0, n_0);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm h_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_0 = NULL,t_0 = NULL,d_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_k_22, (ATerm)ATinsert(ATempty, term_m_22), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_21), term_a_20)), (ATerm)ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_o_22), term_a_20))), term_r_21)), (ATerm) ATmakeAppl(sym_Seq_2, term_v_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_m_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_w_21), term_r_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_o_24, (ATerm) ATmakeAppl(sym_Op_2, term_s_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_21), term_a_20)))), term_u_24))))), term_v_24))))));
      t_0 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm w_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_0);
      p_0 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_k_22, (ATerm)ATinsert(ATempty, term_m_22), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_21), term_a_20)), (ATerm)ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_o_22), term_a_20))), term_r_21)), (ATerm) ATmakeAppl(sym_Seq_2, term_v_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_m_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_w_21), term_r_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_o_24, (ATerm) ATmakeAppl(sym_Op_2, term_s_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_21), term_a_20)))), term_u_24))))), term_v_24)))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_k_22, (ATerm)ATinsert(ATempty, term_m_22), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_l_21), term_a_20)), (ATerm)ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_o_22), term_a_20))), term_r_21)), (ATerm) ATmakeAppl(sym_Seq_2, term_v_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_m_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, term_w_21), term_r_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_o_24, (ATerm) ATmakeAppl(sym_Op_2, term_s_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_21), term_a_20)))), term_u_24))))), term_v_24))))));
      d_0 = t;
      t = SSLsetAnnotations(d_0, p_0);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = h_22;
      {
        ATerm v_0 = NULL,x_0 = NULL;
        t = term_w_18;
        v_0 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        x_0 = t;
        t = SSL_printnl(v_0, x_0);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(q_1, x_1, t);
  t = do_test_2_0(y_1, z_1, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_k_21, (ATerm)ATinsert(ATinsert(ATempty, term_b_25), term_q_20), (ATerm) ATmakeAppl(sym_Op_2, term_l_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_26), term_s_25), term_r_20)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_m_19, (ATerm)ATinsert(ATinsert(ATempty, term_b_25), term_q_20), (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, term_e_20), term_r_20)))))));
      {
        ATerm d_26 = t;
        if((PushChoice() == 0))
          {
            ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,g_4 = NULL;
            d_1 = t;
            if(match_cons(t, sym_Overlays_1))
              {
                c_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_1);
            b_1 = t;
            t = c_1;
            {
              ATerm f_26 = t;
              int g_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_1;
                  ;
                  LocalPopChoice(g_26);
                }
              else
                {
                  t = f_26;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_1;
                }
              t = (ATerm) ATmakeAppl(sym_Overlays_1, c_1);
              g_4 = t;
              t = SSLsetAnnotations(g_4, b_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_26;
          }
      }
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm h_1 = NULL,j_1 = NULL;
        t = term_w_18;
        h_1 = t;
        t = (ATerm) ATinsert(ATempty, term_h_26);
        j_1 = t;
        t = SSL_printnl(h_1, j_1);
        t = term_h_26;
        _fail(t);
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm j_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 = NULL,n_1 = NULL,h_4 = NULL;
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_k_21, (ATerm)ATinsert(ATinsert(ATempty, term_b_25), term_q_20), (ATerm) ATmakeAppl(sym_Op_2, term_l_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), term_s_25), term_r_20)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_m_19, (ATerm)ATinsert(ATinsert(ATempty, term_b_25), term_q_20), (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, term_e_20), term_r_20)))))));
      n_1 = t;
      if(match_cons(t, sym_Overlays_1))
        {
          ATerm n_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_1);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_k_21, (ATerm)ATinsert(ATinsert(ATempty, term_b_25), term_q_20), (ATerm) ATmakeAppl(sym_Op_2, term_l_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), term_s_25), term_r_20)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_m_19, (ATerm)ATinsert(ATinsert(ATempty, term_b_25), term_q_20), (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, term_e_20), term_r_20))))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_k_21, (ATerm)ATinsert(ATinsert(ATempty, term_b_25), term_q_20), (ATerm) ATmakeAppl(sym_Op_2, term_l_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), term_s_25), term_r_20)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_m_19, (ATerm)ATinsert(ATinsert(ATempty, term_b_25), term_q_20), (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, term_e_20), term_r_20)))))));
      h_4 = t;
      t = SSLsetAnnotations(h_4, l_1);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = j_26;
      {
        ATerm o_1 = NULL,r_1 = NULL;
        t = term_w_18;
        o_1 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        r_1 = t;
        t = SSL_printnl(o_1, r_1);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(a_2, p_2, t);
  t = do_test_2_0(u_2, v_2, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20)), (ATerm)ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_c_26), term_k_25)), term_w_26)));
      {
        ATerm x_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_26;
          }
      }
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm s_1 = NULL,t_1 = NULL;
        t = term_w_18;
        s_1 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        t_1 = t;
        t = SSL_printnl(s_1, t_1);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20)), (ATerm)ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_c_26), term_k_25)), term_u_20)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20)), (ATerm)ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_c_26), term_k_25)), term_u_20)));
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm u_1 = NULL,v_1 = NULL;
        t = term_w_18;
        u_1 = t;
        t = (ATerm) ATinsert(ATempty, term_h_26);
        v_1 = t;
        t = SSL_printnl(u_1, v_1);
        t = term_h_26;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(w_2, z_2, t);
  t = do_test_2_0(p_3, u_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20)), (ATerm)ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_c_26), term_k_25)), term_w_26));
      {
        ATerm g_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_27;
          }
      }
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm w_1 = NULL,b_2 = NULL;
        t = term_w_18;
        w_1 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        b_2 = t;
        t = SSL_printnl(w_1, b_2);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20)), (ATerm)ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_c_26), term_k_25)), term_u_20));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20)), (ATerm)ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_c_26), term_k_25)), term_u_20));
      ;
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = term_w_18;
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, term_h_26);
        d_2 = t;
        t = SSL_printnl(c_2, d_2);
        t = term_h_26;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(v_3, w_3, t);
  t = do_test_2_0(y_3, z_3, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATempty, term_k_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATempty, term_r_20))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATempty, term_r_20))))));
      {
        ATerm s_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_27;
          }
      }
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm e_2 = NULL,f_2 = NULL;
        t = term_w_18;
        e_2 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        f_2 = t;
        t = SSL_printnl(e_2, f_2);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATempty, term_r_20))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATempty, term_r_20)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20)))));
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
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = term_w_18;
        g_2 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        h_2 = t;
        t = SSL_printnl(g_2, h_2);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATempty, term_r_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATempty, term_r_20))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATempty, term_r_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATempty, term_r_20))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))))));
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_w_18;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_h_26);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = term_h_26;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(a_4, b_4, t);
  t = do_test_2_0(c_4, d_4, t);
  t = do_test_2_0(e_4, f_4, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_m_28, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATempty, term_r_20)))));
      {
        ATerm r_28 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_28;
          }
      }
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm k_2 = NULL,l_2 = NULL;
        t = term_w_18;
        k_2 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        l_2 = t;
        t = SSL_printnl(k_2, l_2);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_w_28, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATempty, term_r_20)))));
      {
        ATerm y_28 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_28;
          }
      }
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm m_2 = NULL,n_2 = NULL;
        t = term_w_18;
        m_2 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        n_2 = t;
        t = SSL_printnl(m_2, n_2);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(i_4, j_4, t);
  t = do_test_2_0(o_4, p_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATempty, term_r_20)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATempty, term_r_20)))));
      {
        ATerm e_29 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_29;
          }
      }
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm o_2 = NULL,q_2 = NULL;
        t = term_w_18;
        o_2 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        q_2 = t;
        t = SSL_printnl(o_2, q_2);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATempty, term_r_20)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20)))));
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
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
        ATerm r_2 = NULL,s_2 = NULL;
        t = term_w_18;
        r_2 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        s_2 = t;
        t = SSL_printnl(r_2, s_2);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(q_4, r_4, t);
  t = do_test_2_0(s_4, u_4, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_q_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_29), term_w_29))), term_u_29)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_q_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_29), term_w_29))), term_u_29)))));
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      {
        ATerm t_2 = NULL,x_2 = NULL;
        t = term_w_18;
        t_2 = t;
        t = (ATerm) ATinsert(ATempty, term_h_26);
        x_2 = t;
        t = SSL_printnl(t_2, x_2);
        t = term_h_26;
        _fail(t);
      }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_q_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_b_30), term_u_29)))));
      {
        ATerm c_30 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_30;
          }
      }
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm y_2 = NULL,a_3 = NULL;
        t = term_w_18;
        y_2 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        a_3 = t;
        t = SSL_printnl(y_2, a_3);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_d_30;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm f_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_29), term_w_29))), term_u_29))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_29), term_w_29))), term_u_29))));
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = f_30;
      {
        ATerm c_3 = NULL,e_3 = NULL;
        t = term_w_18;
        c_3 = t;
        t = (ATerm) ATinsert(ATempty, term_h_26);
        e_3 = t;
        t = SSL_printnl(c_3, e_3);
        t = term_h_26;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(w_4, y_4, t);
  t = do_test_2_0(a_5, b_5, t);
  t = do_test_2_0(d_5, f_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_25), (ATerm) ATmakeAppl(sym_Seq_2, term_q_30, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATempty, term_k_25))), term_r_20)))))));
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
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
        ATerm f_3 = NULL,g_3 = NULL;
        t = term_w_18;
        f_3 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        g_3 = t;
        t = SSL_printnl(f_3, g_3);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, term_h_31), term_r_20))), term_k_25))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_b_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, term_h_31), term_r_20))), term_k_25))))));
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm i_3 = NULL,j_3 = NULL;
        t = term_w_18;
        i_3 = t;
        t = (ATerm) ATinsert(ATempty, term_h_26);
        j_3 = t;
        t = SSL_printnl(i_3, j_3);
        t = term_h_26;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(j_5, k_5, t);
  t = do_test_2_0(l_5, m_5, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATempty, term_k_25))), term_r_20)))));
      {
        ATerm m_31 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_31;
          }
      }
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm k_3 = NULL,m_3 = NULL;
        t = term_w_18;
        k_3 = t;
        t = (ATerm) ATinsert(ATempty, term_b_19);
        m_3 = t;
        t = SSL_printnl(k_3, m_3);
        t = term_b_19;
        _fail(t);
      }
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, term_h_31), term_r_20))), term_k_25)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, term_h_31), term_r_20))), term_k_25)))));
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm n_3 = NULL,o_3 = NULL;
        t = term_w_18;
        n_3 = t;
        t = (ATerm) ATinsert(ATempty, term_h_26);
        o_3 = t;
        t = SSL_printnl(n_3, o_3);
        t = term_h_26;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(n_5, r_5, t);
  t = do_test_2_0(k_6, l_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm s_5 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,x_3 = NULL;
  q_3 = t;
  t = (ATerm) ATempty;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_31, e_21);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_31, e_21));
  t = h_6(p_6, t_3, x_3, t);
  t = (ATerm) ATempty;
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_31, e_21);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_31, e_21));
  t = h_6(r_6, r_3, s_3, t);
  t = f_21;
  t = use_vars_0_0(t);
  t = q_3;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm x_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,o_7 = NULL,p_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      f_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
      j_7 = ATgetArgument(t, 2);
      x_6 = ATgetArgument(t, 3);
      t = x_6;
      if(match_cons(t, sym_StratRule_3))
        {
          b_7 = ATgetArgument(t, 0);
          c_7 = ATgetArgument(t, 1);
          d_7 = ATgetArgument(t, 2);
          {
            ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
            t = (ATerm) ATempty;
            a_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_31, f_7);
            b_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_31, f_7));
            t = h_6(t_6, a_8, b_8, t);
            t = (ATerm) ATempty;
            y_7 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_31, f_7);
            z_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_31, f_7));
            t = h_6(y_6, y_7, z_7, t);
            t = (ATerm) ATmakeAppl(sym__3, b_7, c_7, d_7);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, f_7, i_7, j_7, (ATerm) ATmakeAppl(sym_StratRule_3, b_7, c_7, d_7));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              b_7 = ATgetArgument(t, 0);
              c_7 = ATgetArgument(t, 1);
              d_7 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = e_7;
          {
            ATerm y_31 = t;
            int z_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_3 = NULL,d_3 = NULL,h_3 = NULL,l_3 = NULL;
                t = (ATerm) ATempty;
                h_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_32, f_7);
                l_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_32, f_7));
                t = h_6(z_6, h_3, l_3, t);
                t = (ATerm) ATempty;
                b_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_32, f_7);
                d_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_32, f_7));
                t = h_6(a_7, b_3, d_3, t);
                t = b_7;
                t = bind_vars_0_0(t);
                ;
                LocalPopChoice(z_31);
              }
            else
              {
                t = y_31;
                {
                  ATerm d_32 = t;
                  int e_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = d_7;
                      t = unbound_vars_0_0(t);
                      ;
                      LocalPopChoice(e_32);
                    }
                  else
                    {
                      t = d_32;
                      t = c_7;
                      t = use_vars_0_0(t);
                    }
                }
              }
            t = (ATerm) ATmakeAppl(sym_RDefT_4, f_7, i_7, j_7, (ATerm) ATmakeAppl(sym_Rule_3, b_7, c_7, d_7));
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          f_7 = ATgetArgument(t, 0);
          i_7 = ATgetArgument(t, 1);
          j_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_7;
      if(match_cons(t, sym_Rule_3))
        {
          k_7 = ATgetArgument(t, 0);
          o_7 = ATgetArgument(t, 1);
          p_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_7;
      {
        ATerm f_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
            t = (ATerm) ATempty;
            h_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_32, f_7);
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_32, f_7));
            t = h_6(g_7, h_5, i_5, t);
            t = (ATerm) ATempty;
            e_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_32, f_7);
            g_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_32, f_7));
            t = h_6(h_7, e_5, g_5, t);
            t = k_7;
            t = bind_vars_0_0(t);
            ;
            LocalPopChoice(g_32);
          }
        else
          {
            t = f_32;
            {
              ATerm j_32 = t;
              int k_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_7;
                  t = unbound_vars_0_0(t);
                  ;
                  LocalPopChoice(k_32);
                }
              else
                {
                  t = j_32;
                  t = o_7;
                  t = use_vars_0_0(t);
                }
            }
          }
        t = (ATerm) ATmakeAppl(sym_RDef_3, f_7, i_7, (ATerm) ATmakeAppl(sym_Rule_3, k_7, o_7, p_7));
      }
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL,z_8 = NULL,b_9 = NULL;
        t = (ATerm) ATempty;
        z_8 = t;
        t = term_q_31;
        b_9 = t;
        t = term_o_32;
        t = f_6(b_9, z_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_32) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            t_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_9), term_s_32), t_8), term_r_32);
        ;
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_9 = NULL,y_9 = NULL,z_9 = NULL;
              t = (ATerm) ATempty;
              y_9 = t;
              t = term_q_31;
              z_9 = t;
              t = term_o_32;
              t = f_6(z_9, y_9, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm b_33 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_33) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  o_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_9), term_s_32), o_9), term_f_33);
              ;
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              {
                ATerm g_33 = t;
                int h_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_10 = NULL,f_10 = NULL,q_10 = NULL;
                    t = (ATerm) ATempty;
                    f_10 = t;
                    t = term_q_31;
                    q_10 = t;
                    t = term_o_32;
                    t = f_6(q_10, f_10, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm i_33 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) i_33) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        d_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_9), term_s_32), d_10), term_f_33);
                    ;
                    LocalPopChoice(h_33);
                  }
                else
                  {
                    t = g_33;
                    {
                      ATerm j_33 = t;
                      int k_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_11 = NULL,l_11 = NULL,v_11 = NULL;
                          t = (ATerm) ATempty;
                          l_11 = t;
                          t = term_q_31;
                          v_11 = t;
                          t = term_o_32;
                          t = f_6(v_11, l_11, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm m_33 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) m_33) != ATmakeSymbol("l_0", 0, ATtrue)))
                                _fail(t);
                              i_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_9), term_s_32), i_11), term_f_33);
                          ;
                          LocalPopChoice(k_33);
                        }
                      else
                        {
                          t = j_33;
                          {
                            ATerm n_33 = t;
                            int o_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_12 = NULL,n_12 = NULL,q_12 = NULL;
                                t = (ATerm) ATempty;
                                n_12 = t;
                                t = term_q_31;
                                q_12 = t;
                                t = term_o_32;
                                t = f_6(q_12, n_12, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm p_33 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) p_33) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    i_12 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_9), term_s_32), i_12), term_q_33);
                                ;
                                LocalPopChoice(o_33);
                              }
                            else
                              {
                                t = n_33;
                                {
                                  ATerm b_13 = NULL,g_13 = NULL,h_13 = NULL;
                                  t = (ATerm) ATempty;
                                  g_13 = t;
                                  t = term_q_31;
                                  h_13 = t;
                                  t = term_o_32;
                                  t = f_6(h_13, g_13, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm r_33 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) r_33) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      b_13 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_9), term_s_32), b_13), term_q_33);
                                }
                              }
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
ATerm t_5 (ATerm o_21, ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_33), o_21), term_s_33);
  t = Context_0_0(t);
  w_9 = t;
  t = term_w_18;
  x_9 = t;
  t = SSL_printnl(x_9, w_9);
  t = w_9;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  {
    ATerm v_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,g_16 = NULL,s_16 = NULL;
        t = (ATerm) ATempty;
        g_16 = t;
        t = term_s_31;
        s_16 = t;
        t = term_y_33;
        t = f_6(s_16, g_16, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm z_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_33) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            t_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_11), term_s_32), t_15), term_a_34);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = v_33;
        {
          ATerm b_34 = t;
          int c_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_17 = NULL,p_17 = NULL,r_17 = NULL;
              t = (ATerm) ATempty;
              p_17 = t;
              t = term_s_31;
              r_17 = t;
              t = term_y_33;
              t = f_6(r_17, p_17, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_34) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  k_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_11), term_s_32), k_17), term_e_34);
              ;
              LocalPopChoice(c_34);
            }
          else
            {
              t = b_34;
              {
                ATerm f_34 = t;
                int g_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_18 = NULL,g_18 = NULL,p_18 = NULL;
                    t = (ATerm) ATempty;
                    g_18 = t;
                    t = term_s_31;
                    p_18 = t;
                    t = term_y_33;
                    t = f_6(p_18, g_18, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm j_34 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) j_34) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        e_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_11), term_s_32), e_18), term_e_34);
                    ;
                    LocalPopChoice(g_34);
                  }
                else
                  {
                    t = f_34;
                    {
                      ATerm l_34 = t;
                      int m_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_19 = NULL,f_19 = NULL,g_19 = NULL;
                          t = (ATerm) ATempty;
                          f_19 = t;
                          t = term_s_31;
                          g_19 = t;
                          t = term_y_33;
                          t = f_6(g_19, f_19, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm p_34 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) p_34) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              c_19 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_11), term_s_32), c_19), term_e_34);
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
                                ATerm l_19 = NULL,n_19 = NULL,p_19 = NULL;
                                t = (ATerm) ATempty;
                                n_19 = t;
                                t = term_s_31;
                                p_19 = t;
                                t = term_y_33;
                                t = f_6(p_19, n_19, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm s_34 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) s_34) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    l_19 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_11), term_s_32), l_19), term_t_34);
                                ;
                                LocalPopChoice(r_34);
                              }
                            else
                              {
                                t = q_34;
                                {
                                  ATerm u_19 = NULL,w_19 = NULL,x_19 = NULL;
                                  t = (ATerm) ATempty;
                                  w_19 = t;
                                  t = term_s_31;
                                  x_19 = t;
                                  t = term_y_33;
                                  t = f_6(x_19, w_19, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm u_34 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) u_34) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      u_19 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_11), term_s_32), u_19), term_t_34);
                                }
                              }
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
ATerm u_5 (ATerm p_21, ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_34), p_21), term_s_33);
  t = Warning_0_0(t);
  m_11 = t;
  t = term_w_18;
  n_11 = t;
  t = SSL_printnl(n_11, m_11);
  t = m_11;
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_11 = NULL,r_11 = NULL;
      q_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      r_11 = t;
      t = SSLgetAnnotations(q_11);
      o_11 = t;
      t = r_11;
      LocalPopChoice(x_34);
      {
        ATerm s_11 = NULL;
        s_11 = t;
        t = o_11;
        {
          ATerm y_34 = t;
          int z_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_35 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) b_35) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm c_35 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(c_35) != AT_LIST) || !(ATisEmpty(c_35))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(z_34);
              _fail(t);
            }
          else
            {
              t = y_34;
              {
                ATerm d_35 = t;
                int h_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm l_35 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) l_35) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm t_35 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(t_35) != AT_LIST) || !(ATisEmpty(t_35))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_35);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_11);
                    t = u_5(p_11, t);
                    _fail(t);
                  }
                else
                  {
                    t = d_35;
                    {
                      ATerm u_35 = t;
                      int w_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm x_35 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) x_35) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm y_35 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(y_35) != AT_LIST) || !(ATisEmpty(y_35))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(w_35);
                          t = (ATerm) ATmakeAppl(sym_Var_1, p_11);
                          t = t_5(p_11, t);
                        }
                      else
                        {
                          t = u_35;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, p_11);
                          t = t_5(p_11, t);
                        }
                    }
                  }
              }
            }
          t = s_11;
        }
      }
    }
  else
    {
      t = w_34;
      {
        ATerm z_35 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_11 = NULL,u_11 = NULL,x_11 = NULL,y_11 = NULL,k_4 = NULL;
            y_11 = t;
            if(match_cons(t, sym_App_2))
              {
                u_11 = ATgetArgument(t, 0);
                x_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_11);
            t_11 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, u_11, x_11);
            k_4 = t;
            t = SSLsetAnnotations(k_4, t_11);
            LocalPopChoice(b_36);
            {
              ATerm z_11 = NULL,a_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,l_4 = NULL;
              g_12 = t;
              if(match_cons(t, sym_App_2))
                {
                  a_12 = ATgetArgument(t, 0);
                  d_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_12);
              z_11 = t;
              t = a_12;
              t = unbound_vars_0_0(t);
              e_12 = t;
              t = d_12;
              t = use_vars_0_0(t);
              f_12 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, e_12, f_12);
              l_4 = t;
              t = SSLsetAnnotations(l_4, z_11);
            }
          }
        else
          {
            t = z_35;
            {
              ATerm d_36 = t;
              int f_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_12 = NULL,k_12 = NULL,l_12 = NULL,m_4 = NULL;
                  l_12 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      k_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_12);
                  h_12 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, k_12);
                  m_4 = t;
                  t = SSLsetAnnotations(m_4, h_12);
                  LocalPopChoice(f_36);
                  {
                    ATerm m_12 = NULL,o_12 = NULL,p_12 = NULL,r_12 = NULL,n_4 = NULL;
                    r_12 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        o_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(r_12);
                    m_12 = t;
                    t = o_12;
                    t = unbound_vars_0_0(t);
                    p_12 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, p_12);
                    n_4 = t;
                    t = SSLsetAnnotations(n_4, m_12);
                  }
                }
              else
                {
                  t = d_36;
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
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,t_4 = NULL;
      w_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_12);
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_12);
      t_4 = t;
      t = SSLsetAnnotations(t_4, u_12);
      LocalPopChoice(j_36);
      _fail(t);
    }
  else
    {
      t = i_36;
      {
        ATerm k_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,c_13 = NULL,v_4 = NULL;
            c_13 = t;
            if(match_cons(t, sym_App_2))
              {
                y_12 = ATgetArgument(t, 0);
                z_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_13);
            x_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, y_12, z_12);
            v_4 = t;
            t = SSLsetAnnotations(v_4, x_12);
            LocalPopChoice(m_36);
            {
              ATerm d_13 = NULL,e_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,x_4 = NULL;
              l_13 = t;
              if(match_cons(t, sym_App_2))
                {
                  e_13 = ATgetArgument(t, 0);
                  i_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_13);
              d_13 = t;
              t = e_13;
              t = unbound_vars_0_0(t);
              j_13 = t;
              t = i_13;
              t = use_vars_0_0(t);
              k_13 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, j_13, k_13);
              x_4 = t;
              t = SSLsetAnnotations(x_4, d_13);
            }
          }
        else
          {
            t = k_36;
            {
              ATerm p_36 = t;
              int q_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_13 = NULL,p_13 = NULL,q_13 = NULL,z_4 = NULL;
                  q_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      p_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_13);
                  m_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, p_13);
                  z_4 = t;
                  t = SSLsetAnnotations(z_4, m_13);
                  LocalPopChoice(q_36);
                  {
                    ATerm r_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,c_5 = NULL;
                    v_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        t_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(v_13);
                    r_13 = t;
                    t = t_13;
                    t = unbound_vars_0_0(t);
                    u_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, u_13);
                    c_5 = t;
                    t = SSLsetAnnotations(c_5, r_13);
                  }
                }
              else
                {
                  t = p_36;
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
  ATerm s_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,o_5 = NULL;
      e_14 = t;
      if(match_cons(t, sym_Build_1))
        {
          d_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_14);
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, d_14);
      o_5 = t;
      t = SSLsetAnnotations(o_5, c_14);
      LocalPopChoice(v_36);
      {
        ATerm f_14 = NULL,g_14 = NULL,j_14 = NULL,l_14 = NULL,p_5 = NULL;
        l_14 = t;
        if(match_cons(t, sym_Build_1))
          {
            g_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_14);
        f_14 = t;
        t = g_14;
        t = use_vars_0_0(t);
        j_14 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, j_14);
        p_5 = t;
        t = SSLsetAnnotations(p_5, f_14);
      }
    }
  else
    {
      t = s_36;
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,q_5 = NULL;
            o_14 = t;
            if(match_cons(t, sym_Match_1))
              {
                n_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_14);
            m_14 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, n_14);
            q_5 = t;
            t = SSLsetAnnotations(q_5, m_14);
            LocalPopChoice(x_36);
            {
              ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,u_14 = NULL,d_6 = NULL;
              u_14 = t;
              if(match_cons(t, sym_Match_1))
                {
                  q_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_14);
              p_14 = t;
              t = q_14;
              t = bind_vars_0_0(t);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, r_14);
              d_6 = t;
              t = SSLsetAnnotations(d_6, p_14);
            }
          }
        else
          {
            t = w_36;
            {
              ATerm y_36 = t;
              int z_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_14 = NULL,w_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,e_6 = NULL;
                  c_15 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      w_14 = ATgetArgument(t, 0);
                      a_15 = ATgetArgument(t, 1);
                      b_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_15);
                  v_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, w_14, a_15, b_15);
                  e_6 = t;
                  t = SSLsetAnnotations(e_6, v_14);
                  LocalPopChoice(z_36);
                  {
                    ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
                    o_16 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        p_16 = ATgetArgument(t, 0);
                        q_16 = ATgetArgument(t, 1);
                        r_16 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm a_37 = t;
                      int b_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_20 = NULL,j_20 = NULL,i_6 = NULL;
                          t = SSLgetAnnotations(o_16);
                          f_20 = t;
                          t = p_16;
                          t = bind_vars_0_0(t);
                          j_20 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, j_20, q_16, r_16);
                          i_6 = t;
                          t = SSLsetAnnotations(i_6, f_20);
                          ;
                          LocalPopChoice(b_37);
                        }
                      else
                        {
                          t = a_37;
                          {
                            ATerm c_37 = t;
                            int d_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_20 = NULL,b_21 = NULL,j_6 = NULL;
                                t = SSLgetAnnotations(o_16);
                                v_20 = t;
                                t = r_16;
                                t = unbound_vars_0_0(t);
                                b_21 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, p_16, q_16, b_21);
                                j_6 = t;
                                t = SSLsetAnnotations(j_6, v_20);
                                ;
                                LocalPopChoice(d_37);
                              }
                            else
                              {
                                t = c_37;
                                {
                                  ATerm a_22 = NULL,i_22 = NULL,q_6 = NULL;
                                  t = SSLgetAnnotations(o_16);
                                  a_22 = t;
                                  t = q_16;
                                  t = use_vars_0_0(t);
                                  i_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, p_16, i_22, r_16);
                                  q_6 = t;
                                  t = SSLsetAnnotations(q_6, a_22);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = y_36;
                  t = SRTS_some(unbound_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm y_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
      c_17 = ATgetArgument(t, 2);
      y_16 = ATgetArgument(t, 3);
      {
        ATerm i_17 = NULL,j_17 = NULL,m_17 = NULL,n_17 = NULL;
        t = (ATerm) ATempty;
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_37, a_17);
        n_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_37, a_17));
        t = h_6(l_7, m_17, n_17, t);
        t = (ATerm) ATempty;
        i_17 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_37, a_17);
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_37, a_17));
        t = h_6(m_7, i_17, j_17, t);
        t = y_16;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, a_17, b_17, c_17, y_16);
      }
    }
  else
    {
      ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          a_17 = ATgetArgument(t, 0);
          b_17 = ATgetArgument(t, 1);
          c_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      v_17 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_37, a_17);
      w_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_37, a_17));
      t = h_6(q_7, v_17, w_17, t);
      t = (ATerm) ATempty;
      t_17 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_37, a_17);
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_37, a_17));
      t = h_6(r_7, t_17, u_17, t);
      t = c_17;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, a_17, b_17, c_17);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,h_18 = NULL,n_7 = NULL;
  ATerm s_7 (ATerm t)
  {
    ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,u_7 = NULL,t_7 = NULL;
    v_18 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        o_18 = ATgetArgument(t, 0);
        r_18 = ATgetArgument(t, 1);
        s_18 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_18);
    n_18 = t;
    t = o_18;
    t = e_109(t);
    t_18 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, t_18, r_18, s_18);
    t_7 = t;
    t = SSLsetAnnotations(t_7, n_18);
    u_18 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        j_18 = ATgetArgument(t, 0);
        k_18 = ATgetArgument(t, 1);
        l_18 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_18);
    i_18 = t;
    t = k_18;
    t = e_109(t);
    m_18 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_18, m_18, l_18);
    u_7 = t;
    t = SSLsetAnnotations(u_7, i_18);
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,e_19 = NULL,h_19 = NULL,c_8 = NULL;
    h_19 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        y_18 = ATgetArgument(t, 0);
        z_18 = ATgetArgument(t, 1);
        a_19 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_19);
    x_18 = t;
    t = a_19;
    t = e_109(t);
    e_19 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_18, z_18, e_19);
    c_8 = t;
    t = SSLsetAnnotations(c_8, x_18);
    return(t);
  }
  if(((h_18 != NULL) && (h_18 != t)))
    _fail(t);
  else
    h_18 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((a_18 != NULL) && (a_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_18 = ATgetArgument(t, 0);
      if(((b_18 != NULL) && (b_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_18 = ATgetArgument(t, 1);
      if(((c_18 != NULL) && (c_18 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        c_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_18);
  if(((z_17 != NULL) && (z_17 != t)))
    _fail(t);
  else
    z_17 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_18, b_18, c_18);
  if(((n_7 != NULL) && (n_7 != t)))
    _fail(t);
  else
    n_7 = t;
  t = SSLsetAnnotations(n_7, z_17);
  t = abstract_choice_2_0(s_7, v_7, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,r_19 = NULL,z_19 = NULL,c_20 = NULL,h_8 = NULL;
  ATerm w_7 (ATerm t)
  {
    ATerm l_20 = NULL,o_20 = NULL,x_20 = NULL,a_21 = NULL,g_21 = NULL,i_8 = NULL;
    g_21 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        o_20 = ATgetArgument(t, 0);
        x_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_21);
    l_20 = t;
    t = o_20;
    t = d_109(t);
    a_21 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_21, x_20);
    i_8 = t;
    t = SSLsetAnnotations(i_8, l_20);
    return(t);
  }
  ATerm x_7 (ATerm t)
  {
    ATerm j_21 = NULL,q_21 = NULL,x_21 = NULL,b_22 = NULL,c_22 = NULL,j_8 = NULL;
    c_22 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        q_21 = ATgetArgument(t, 0);
        x_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_22);
    j_21 = t;
    t = x_21;
    t = d_109(t);
    b_22 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_21, b_22);
    j_8 = t;
    t = SSLsetAnnotations(j_8, j_21);
    return(t);
  }
  if(((c_20 != NULL) && (c_20 != t)))
    _fail(t);
  else
    c_20 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((r_19 != NULL) && (r_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_19 = ATgetArgument(t, 0);
      if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_20);
  if(((o_19 != NULL) && (o_19 != t)))
    _fail(t);
  else
    o_19 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, r_19, z_19);
  if(((h_8 != NULL) && (h_8 != t)))
    _fail(t);
  else
    h_8 = t;
  t = SSLsetAnnotations(h_8, o_19);
  t = abstract_choice_2_0(w_7, x_7, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,g_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  t = save_MarkVar_0_0(t);
  e_22 = t;
  t = r_22;
  t = f_109(t);
  q_22 = t;
  t = save_MarkVar_0_0(t);
  g_22 = t;
  t = term_j_37;
  t_22 = t;
  t = SSL_table_destroy(t_22);
  t = term_j_37;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_37, e_22);
  t = b_6(s_22, e_22, t);
  t = q_22;
  t = g_109(t);
  p_22 = t;
  t = g_22;
  t = isect_MarkVar_0_0(t);
  t = p_22;
  return(t);
}
ATerm mark_choice_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm u_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,p_8 = NULL;
  ATerm d_8 (ATerm t)
  {
    ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,j_23 = NULL,q_8 = NULL;
    j_23 = t;
    if(match_cons(t, sym_Choice_2))
      {
        c_23 = ATgetArgument(t, 0);
        d_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_23);
    b_23 = t;
    t = c_23;
    t = c_109(t);
    e_23 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, e_23, d_23);
    q_8 = t;
    t = SSLsetAnnotations(q_8, b_23);
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    ATerm k_23 = NULL,l_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,r_8 = NULL;
    r_23 = t;
    if(match_cons(t, sym_Choice_2))
      {
        l_23 = ATgetArgument(t, 0);
        p_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_23);
    k_23 = t;
    t = p_23;
    t = c_109(t);
    q_23 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, l_23, q_23);
    r_8 = t;
    t = SSLsetAnnotations(r_8, k_23);
    return(t);
  }
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((x_22 != NULL) && (x_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_22 = ATgetArgument(t, 0);
      if(((y_22 != NULL) && (y_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_22);
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, x_22, y_22);
  if(((p_8 != NULL) && (p_8 != t)))
    _fail(t);
  else
    p_8 = t;
  t = SSLsetAnnotations(p_8, u_22);
  t = abstract_choice_2_0(d_8, e_8, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,y_8 = NULL,x_8 = NULL;
  t_23 = t;
  t = save_MarkVar_0_0(t);
  s_23 = t;
  t = t_23;
  if(match_cons(t, sym_Rec_2))
    {
      g_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_23);
  f_24 = t;
  t = h_24;
  t = mark_buv_0_0(t);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, g_24, i_24);
  x_8 = t;
  t = SSLsetAnnotations(x_8, f_24);
  t = s_23;
  t = isect_MarkVar_0_0(t);
  t = t_23;
  if(match_cons(t, sym_Rec_2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_23);
  u_23 = t;
  t = y_23;
  t = mark_buv_0_0(t);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, x_23, z_23);
  y_8 = t;
  t = SSLsetAnnotations(y_8, u_23);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,x_24 = NULL,m_25 = NULL,r_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,e_26 = NULL,f_9 = NULL,e_9 = NULL,d_9 = NULL;
  e_26 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
      a_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_26);
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, y_25, z_25, a_26);
  d_9 = t;
  t = SSLsetAnnotations(d_9, w_25);
  b_26 = t;
  t = save_MarkVar_0_0(t);
  j_24 = t;
  t = b_26;
  if(match_cons(t, sym_PrimT_3))
    {
      m_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      t_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_26);
  x_24 = t;
  t = t_25;
  t = map_1_0(f_8, t);
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, m_25, r_25, u_25);
  e_9 = t;
  t = SSLsetAnnotations(e_9, x_24);
  v_25 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
      p_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_25);
  k_24 = t;
  t = m_24;
  t = mark_buv_0_0(t);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, l_24, q_24, p_24);
  f_9 = t;
  t = SSLsetAnnotations(f_9, k_24);
  r_24 = t;
  t = j_24;
  t = isect_MarkVar_0_0(t);
  t = r_24;
  return(t);
}
ATerm alltd_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm k_26 (ATerm t)
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_84(t);
        ;
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = SRTS_all(k_26, t);
      }
    return(t);
  }
  t = k_26(t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,m_30 = NULL,n_30 = NULL;
  h_30 = t;
  if(match_cons(t, sym_CallT_3))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
      g_30 = ATgetArgument(t, 2);
      {
        ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,v_23 = NULL,w_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,t_24 = NULL,q_9 = NULL,l_9 = NULL,k_9 = NULL;
        t = SSLgetAnnotations(h_30);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, m_30, n_30, g_30);
        k_9 = t;
        t = SSLsetAnnotations(k_9, e_24);
        t_24 = t;
        t = save_MarkVar_0_0(t);
        f_23 = t;
        t = t_24;
        if(match_cons(t, sym_CallT_3))
          {
            w_23 = ATgetArgument(t, 0);
            a_24 = ATgetArgument(t, 1);
            b_24 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_24);
        v_23 = t;
        t = b_24;
        t = map_1_0(g_8, t);
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_23, a_24, c_24);
        l_9 = t;
        t = SSLsetAnnotations(l_9, v_23);
        d_24 = t;
        if(match_cons(t, sym_CallT_3))
          {
            h_23 = ATgetArgument(t, 0);
            i_23 = ATgetArgument(t, 1);
            m_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_24);
        g_23 = t;
        t = i_23;
        t = mark_buv_0_0(t);
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, h_23, n_23, m_23);
        q_9 = t;
        t = SSLsetAnnotations(q_9, g_23);
        o_23 = t;
        t = f_23;
        t = isect_MarkVar_0_0(t);
        t = o_23;
      }
    }
  else
    {
      ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,n_25 = NULL,s_9 = NULL,r_9 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          m_30 = ATgetArgument(t, 0);
          n_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_30);
      j_25 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, m_30, n_30);
      r_9 = t;
      t = SSLsetAnnotations(r_9, j_25);
      n_25 = t;
      t = save_MarkVar_0_0(t);
      d_25 = t;
      t = n_25;
      if(match_cons(t, sym_Call_2))
        {
          f_25 = ATgetArgument(t, 0);
          g_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_25);
      e_25 = t;
      t = g_25;
      t = mark_buv_0_0(t);
      h_25 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, f_25, h_25);
      s_9 = t;
      t = SSLsetAnnotations(s_9, e_25);
      i_25 = t;
      t = d_25;
      t = isect_MarkVar_0_0(t);
      t = i_25;
    }
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm w_5 (ATerm r_60, ATerm s_60, ATerm t_60, ATerm t)
{
  ATerm s_30 = NULL;
  ATerm l_8 (ATerm t)
  {
    t = s_60;
    t = map_1_0(IntroduceBound_0_0, t);
    t = t_60;
    t = mark_build_vars_0_0(t);
    if(((s_30 != NULL) && (s_30 != t)))
      _fail(t);
    else
      s_30 = t;
    return(t);
  }
  t = scope_2_0(k_8, l_8, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, r_60, s_60, not_null(s_30));
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm b_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_31);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      {
        ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_31 = ATgetArgument(t, 0);
            t = d_31;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_31 = ATgetArgument(t, 0);
                e_31 = ATgetArgument(t, 1);
                f_31 = ATgetArgument(t, 2);
                g_31 = ATgetArgument(t, 3);
                t = f_31;
                t = map_1_0(u_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_31 = ATgetArgument(t, 0);
                    e_31 = ATgetArgument(t, 1);
                    f_31 = ATgetArgument(t, 2);
                    g_31 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_31;
                t = map_1_0(v_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm c_32 = NULL;
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_32 = ATgetArgument(t, 0);
          {
            ATerm r_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_37);
      t = c_32;
    }
  else
    {
      t = p_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_32;
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm n_32 = NULL;
  ATerm s_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_32 = ATgetArgument(t, 0);
          {
            ATerm w_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_37);
      t = n_32;
    }
  else
    {
      t = s_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_32;
    }
  return(t);
}
ATerm x_5 (ATerm l_60, ATerm p_60, ATerm n_60, ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  ATerm n_8 (ATerm t)
  {
    t = l_60;
    t = free_vars_3_0(o_8, s_8, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = l_60;
    t = mark_match_vars_0_0(t);
    if(((y_30 != NULL) && (y_30 != t)))
      _fail(t);
    else
      y_30 = t;
    t = n_60;
    t = mark_buv_0_0(t);
    if(((z_30 != NULL) && (z_30 != t)))
      _fail(t);
    else
      z_30 = t;
    t = p_60;
    t = mark_build_vars_0_0(t);
    if(((a_31 != NULL) && (a_31 != t)))
      _fail(t);
    else
      a_31 = t;
    return(t);
  }
  t = scope_2_0(m_8, n_8, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_30), not_null(a_31), not_null(z_30)));
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm a_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_33);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm x_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_37);
    }
  else
    {
      t = x_37;
      {
        ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,l_33 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_33 = ATgetArgument(t, 0);
            t = c_33;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_33 = ATgetArgument(t, 0);
                d_33 = ATgetArgument(t, 1);
                e_33 = ATgetArgument(t, 2);
                l_33 = ATgetArgument(t, 3);
                t = e_33;
                t = map_1_0(h_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_33 = ATgetArgument(t, 0);
                    d_33 = ATgetArgument(t, 1);
                    e_33 = ATgetArgument(t, 2);
                    l_33 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_33;
                t = map_1_0(i_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm t_33 = NULL;
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_33 = ATgetArgument(t, 0);
          {
            ATerm c_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_38);
      t = t_33;
    }
  else
    {
      t = a_38;
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
ATerm i_9 (ATerm t)
{
  ATerm k_34 = NULL;
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_34 = ATgetArgument(t, 0);
          {
            ATerm f_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_38);
      t = k_34;
    }
  else
    {
      t = d_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_34;
    }
  return(t);
}
ATerm y_5 (ATerm f_60, ATerm j_60, ATerm h_60, ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  ATerm a_9 (ATerm t)
  {
    t = f_60;
    t = free_vars_3_0(c_9, g_9, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = f_60;
    t = mark_match_vars_0_0(t);
    if(((x_32 != NULL) && (x_32 != t)))
      _fail(t);
    else
      x_32 = t;
    t = h_60;
    t = mark_buv_0_0(t);
    if(((y_32 != NULL) && (y_32 != t)))
      _fail(t);
    else
      y_32 = t;
    t = j_60;
    t = mark_build_vars_0_0(t);
    if(((z_32 != NULL) && (z_32 != t)))
      _fail(t);
    else
      z_32 = t;
    return(t);
  }
  t = scope_2_0(w_8, a_9, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_32), not_null(z_32), not_null(y_32)));
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm h_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_36);
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm i_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_38);
    }
  else
    {
      t = i_38;
      {
        ATerm l_36 = NULL,n_36 = NULL,o_36 = NULL,u_36 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_36 = ATgetArgument(t, 0);
            t = l_36;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_36 = ATgetArgument(t, 0);
                n_36 = ATgetArgument(t, 1);
                o_36 = ATgetArgument(t, 2);
                u_36 = ATgetArgument(t, 3);
                t = o_36;
                t = map_1_0(p_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_36 = ATgetArgument(t, 0);
                    n_36 = ATgetArgument(t, 1);
                    o_36 = ATgetArgument(t, 2);
                    u_36 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_36;
                t = map_1_0(t_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm f_37 = NULL;
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_37 = ATgetArgument(t, 0);
          {
            ATerm o_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_38);
      t = f_37;
    }
  else
    {
      t = m_38;
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
ATerm t_9 (ATerm t)
{
  ATerm v_37 = NULL;
  ATerm p_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_37 = ATgetArgument(t, 0);
          {
            ATerm s_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_38);
      t = v_37;
    }
  else
    {
      t = p_38;
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
ATerm u_9 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm x_38 = NULL;
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_38 = ATgetArgument(t, 0);
          {
            ATerm y_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_38);
      t = x_38;
    }
  else
    {
      t = v_38;
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
ATerm b_10 (ATerm t)
{
  ATerm a_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_39);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm z_38 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_39);
    }
  else
    {
      t = z_38;
      {
        ATerm j_39 = NULL,p_39 = NULL,s_39 = NULL,t_39 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_39 = ATgetArgument(t, 0);
            t = j_39;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_39 = ATgetArgument(t, 0);
                p_39 = ATgetArgument(t, 1);
                s_39 = ATgetArgument(t, 2);
                t_39 = ATgetArgument(t, 3);
                t = s_39;
                t = map_1_0(e_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_39 = ATgetArgument(t, 0);
                    p_39 = ATgetArgument(t, 1);
                    s_39 = ATgetArgument(t, 2);
                    t_39 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_39;
                t = map_1_0(g_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm d_40 = NULL;
  ATerm c_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_40 = ATgetArgument(t, 0);
          {
            ATerm f_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_39);
      t = d_40;
    }
  else
    {
      t = c_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_40;
    }
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm z_40 = NULL;
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_40 = ATgetArgument(t, 0);
          {
            ATerm i_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_39);
      t = z_40;
    }
  else
    {
      t = g_39;
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
ATerm j_10 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,o_35 = NULL,p_35 = NULL,r_35 = NULL,s_35 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      i_35 = ATgetArgument(t, 0);
      j_35 = ATgetArgument(t, 1);
      k_35 = ATgetArgument(t, 2);
      {
        ATerm a_36 = NULL,c_36 = NULL,e_36 = NULL,g_36 = NULL;
        t = k_35;
        if(match_cons(t, sym_Rule_3))
          {
            e_35 = ATgetArgument(t, 0);
            f_35 = ATgetArgument(t, 1);
            g_35 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = k_35;
        t = free_vars_3_0(j_9, n_9, tboundin_3_0, t);
        a_36 = t;
        {
          ATerm v_9 (ATerm t)
          {
            t = a_36;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = e_35;
            t = mark_match_vars_0_0(t);
            if(((c_36 != NULL) && (c_36 != t)))
              _fail(t);
            else
              c_36 = t;
            t = g_35;
            t = mark_buv_0_0(t);
            if(((e_36 != NULL) && (e_36 != t)))
              _fail(t);
            else
              e_36 = t;
            t = f_35;
            t = mark_build_vars_0_0(t);
            if(((g_36 != NULL) && (g_36 != t)))
              _fail(t);
            else
              g_36 = t;
            return(t);
          }
          t = scope_2_0(u_9, v_9, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, i_35, j_35, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_36), not_null(g_36), not_null(e_36)));
        }
      }
    }
  else
    {
      ATerm g_38 = NULL,h_38 = NULL,j_38 = NULL,l_38 = NULL,t_38 = NULL,u_38 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          i_35 = ATgetArgument(t, 0);
          j_35 = ATgetArgument(t, 1);
          k_35 = ATgetArgument(t, 2);
          o_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = o_35;
      if(match_cons(t, sym_Rule_3))
        {
          p_35 = ATgetArgument(t, 0);
          r_35 = ATgetArgument(t, 1);
          s_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_35;
      t = map_1_0(a_10, t);
      g_38 = t;
      t = o_35;
      t = free_vars_3_0(b_10, c_10, tboundin_3_0, t);
      u_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_38, g_38);
      t = diff_0_0(t);
      h_38 = t;
      {
        ATerm k_10 (ATerm t)
        {
          t = g_38;
          t = map_1_0(IntroduceBound_0_0, t);
          t = h_38;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = p_35;
          t = mark_match_vars_0_0(t);
          if(((j_38 != NULL) && (j_38 != t)))
            _fail(t);
          else
            j_38 = t;
          t = s_35;
          t = mark_buv_0_0(t);
          if(((l_38 != NULL) && (l_38 != t)))
            _fail(t);
          else
            l_38 = t;
          t = r_35;
          t = mark_build_vars_0_0(t);
          if(((t_38 != NULL) && (t_38 != t)))
            _fail(t);
          else
            t_38 = t;
          return(t);
        }
        t = scope_2_0(j_10, k_10, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, i_35, j_35, k_35, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_38), not_null(t_38), not_null(l_38)));
      }
    }
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_41);
  g_41 = t;
  t = term_n_39;
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_41), term_n_39);
  t = h_6(r_10, g_41, h_41, t);
  t = f_41;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm n_41 = NULL;
  ATerm o_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_41 = ATgetArgument(t, 0);
          {
            ATerm u_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_39);
      t = n_41;
    }
  else
    {
      t = o_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_41;
    }
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm z_5 (ATerm d_59, ATerm e_59, ATerm f_59, ATerm h_59, ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL;
  t = f_59;
  t = map_1_0(s_10, t);
  j_41 = t;
  {
    ATerm u_10 (ATerm t)
    {
      t = j_41;
      t = map_1_0(IntroduceBound_0_0, t);
      t = h_59;
      t = mark_buv_0_0(t);
      if(((k_41 != NULL) && (k_41 != t)))
        _fail(t);
      else
        k_41 = t;
      return(t);
    }
    t = scope_2_0(t_10, u_10, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, d_59, e_59, f_59, not_null(k_41));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm n_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,x_42 = NULL;
  n_42 = t;
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      u_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_42;
  if(match_cons(t, sym_Undefined_0))
    {
      t = r_42;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_v_39;
        }
      else
        {
          t = term_v_39;
        }
    }
  else
    {
      ATerm w_39 = t;
      int x_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm y_39 = ATgetArgument(t, 0);
              x_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(x_39);
          t = r_42;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_v_39;
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
                ATerm z_39 = t;
                int a_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, t_42, x_42);
                    {
                      ATerm b_40 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm m_26 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              m_26 = ATgetArgument(t, 0);
                              if((m_26 != ATgetArgument(t, 1)))
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
                          t = b_40;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, s_42, term_c_40);
                    }
                    ;
                    LocalPopChoice(a_40);
                  }
                else
                  {
                    t = z_39;
                    t = x_42;
                    if((t_42 != t))
                      {
                        _fail(t);
                      }
                    t = r_42;
                  }
              }
            }
        }
      else
        {
          t = w_39;
          t = r_42;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_v_39;
        }
    }
  return(t);
}
ATerm a_6 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  t = term_j_37;
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_37, s_57);
  t = v_6(d_43, s_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_43 = ATgetFirst((ATermList) t);
      {
        ATerm e_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_57, b_43);
  t = CompareEntries_0_0(t);
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_57, (ATerm) ATinsert(CheckATermList(r_57), c_43));
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,k_44 = NULL,x_44 = NULL,z_44 = NULL;
  z_44 = t;
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
      t = i_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_44 = ATgetFirst((ATermList) t);
          x_44 = (ATerm) ATgetNext((ATermList) t);
          t = k_44;
          {
            ATerm f_40 = t;
            int g_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_40 = ATgetArgument(t, 0);
                    ATerm j_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(g_40);
                t = h_44;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = z_44;
                  }
                else
                  {
                    ATerm k_40 = t;
                    int l_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = z_44;
                        t = a_6(h_44, k_44, x_44, t);
                        ;
                        LocalPopChoice(l_40);
                      }
                    else
                      {
                        t = k_40;
                        t = z_44;
                      }
                  }
              }
            else
              {
                t = f_40;
                t = h_44;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = z_44;
                  }
                else
                  {
                    t = z_44;
                  }
              }
          }
        }
      else
        {
          t = h_44;
          if(match_cons(t, sym_Scopes_0))
            {
              t = z_44;
            }
          else
            {
              t = z_44;
            }
        }
    }
  else
    {
      t = z_44;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  t = map_1_0(v_10, t);
  e_44 = t;
  t = term_j_37;
  g_44 = t;
  t = SSL_table_destroy(g_44);
  t = term_j_37;
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_37, e_44);
  t = b_6(f_44, e_44, t);
  t = e_44;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm z_45 = NULL,g_46 = NULL,j_46 = NULL;
  j_46 = t;
  {
    ATerm m_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm p_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_40);
        t = j_46;
      }
    else
      {
        t = m_40;
        {
          ATerm q_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm s_40 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(r_40);
              t = j_46;
            }
          else
            {
              t = q_40;
              {
                ATerm t_40 = t;
                int u_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm v_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_40);
                    t = j_46;
                  }
                else
                  {
                    t = t_40;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm w_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = j_46;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    z_45 = t;
    t = j_46;
    t = SRTS_one(mark_buv_0_0, t);
    g_46 = t;
    t = z_45;
    t = isect_MarkVar_0_0(t);
    t = g_46;
  }
  return(t);
}
ATerm b_6 (ATerm o_28, ATerm n_28, ATerm t)
{
  ATerm x_10 (ATerm t)
  {
    ATerm r_46 = NULL,s_46 = NULL;
    if(match_cons(t, sym__2))
      {
        r_46 = ATgetArgument(t, 0);
        s_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(o_28, r_46, s_46);
    t = (ATerm) ATmakeAppl(sym__3, o_28, r_46, s_46);
    return(t);
  }
  t = n_28;
  t = map_1_0(x_10, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_46 = NULL;
  ATerm d_11 (ATerm t)
  {
    ATerm v_46 = NULL,w_46 = NULL;
    v_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_46), v_46);
    t = v_6(not_null(u_46), v_46, t);
    w_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_46, w_46);
    return(t);
  }
  if(((u_46 != NULL) && (u_46 != t)))
    _fail(t);
  else
    u_46 = t;
  t = SSL_table_keys(u_46);
  t = map_1_0(d_11, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_j_37;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,b_48 = NULL,c_48 = NULL;
  c_48 = t;
  if(match_cons(t, sym__2))
    {
      t_47 = ATgetArgument(t, 0);
      u_47 = ATgetArgument(t, 1);
      t = u_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_47 = ATgetFirst((ATermList) t);
          b_48 = (ATerm) ATgetNext((ATermList) t);
          t = v_47;
          if(match_cons(t, sym_Defined_2))
            {
              w_47 = ATgetArgument(t, 0);
              x_47 = ATgetArgument(t, 1);
              t = x_47;
              if(match_string(t, "unbound"))
                {
                  t = t_47;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = c_48;
                    }
                  else
                    {
                      ATerm x_40 = t;
                      int y_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, t_47, (ATerm) ATinsert(CheckATermList(b_48), (ATerm) ATmakeAppl(sym_Defined_2, w_47, term_c_40)));
                          ;
                          LocalPopChoice(y_40);
                        }
                      else
                        {
                          t = x_40;
                          t = c_48;
                        }
                    }
                }
              else
                {
                  t = t_47;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = c_48;
                    }
                  else
                    {
                      t = c_48;
                    }
                }
            }
          else
            {
              t = t_47;
              if(match_cons(t, sym_Scopes_0))
                {
                  t = c_48;
                }
              else
                {
                  t = c_48;
                }
            }
        }
      else
        {
          t = t_47;
          if(match_cons(t, sym_Scopes_0))
            {
              t = c_48;
            }
          else
            {
              t = c_48;
            }
        }
    }
  else
    {
      t = c_48;
    }
  return(t);
}
ATerm undefine_unbound_MarkVar_0_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
  t = save_MarkVar_0_0(t);
  t = map_1_0(e_11, t);
  q_47 = t;
  t = term_j_37;
  s_47 = t;
  t = SSL_table_destroy(s_47);
  t = term_j_37;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_37, q_47);
  t = b_6(r_47, q_47, t);
  t = q_47;
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm g_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,i_10 = NULL,h_10 = NULL;
  x_49 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_49 = ATgetArgument(t, 0);
      v_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_49);
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, u_49, v_49);
  h_10 = t;
  t = SSLsetAnnotations(h_10, t_49);
  w_49 = t;
  t = undefine_unbound_MarkVar_0_0(t);
  g_49 = t;
  t = w_49;
  if(match_cons(t, sym_Let_2))
    {
      j_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_49);
  i_49 = t;
  t = j_49;
  {
    ATerm g_11 (ATerm t)
    {
      ATerm y_49 = NULL,z_49 = NULL,f_50 = NULL;
      y_49 = t;
      t = term_j_37;
      f_50 = t;
      t = SSL_table_destroy(f_50);
      t = term_j_37;
      z_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_37, g_49);
      t = b_6(z_49, g_49, t);
      t = y_49;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(g_11, t);
    if(((l_49 != NULL) && (l_49 != t)))
      _fail(t);
    else
      l_49 = t;
    t = term_j_37;
    if(((s_49 != NULL) && (s_49 != t)))
      _fail(t);
    else
      s_49 = t;
    t = SSL_table_destroy(s_49);
    t = term_j_37;
    if(((r_49 != NULL) && (r_49 != t)))
      _fail(t);
    else
      r_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_37, g_49);
    t = b_6(r_49, g_49, t);
    t = k_49;
    t = mark_buv_0_0(t);
    if(((q_49 != NULL) && (q_49 != t)))
      _fail(t);
    else
      q_49 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, l_49, q_49);
    if(((i_10 != NULL) && (i_10 != t)))
      _fail(t);
    else
      i_10 = t;
    t = SSLsetAnnotations(i_10, i_49);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_50 = NULL,i_50 = NULL,j_50 = NULL,l_10 = NULL;
      j_50 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_50);
      g_50 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_50);
      l_10 = t;
      t = SSLsetAnnotations(l_10, g_50);
      LocalPopChoice(b_41);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = a_41;
      {
        ATerm c_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,m_10 = NULL;
            n_50 = t;
            if(match_cons(t, sym_App_2))
              {
                l_50 = ATgetArgument(t, 0);
                m_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_50);
            k_50 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, l_50, m_50);
            m_10 = t;
            t = SSLsetAnnotations(m_10, k_50);
            LocalPopChoice(e_41);
            {
              ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,v_50 = NULL,e_51 = NULL,n_10 = NULL;
              e_51 = t;
              if(match_cons(t, sym_App_2))
                {
                  p_50 = ATgetArgument(t, 0);
                  q_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_51);
              o_50 = t;
              t = p_50;
              t = mark_buv_0_0(t);
              r_50 = t;
              t = q_50;
              t = mark_build_vars_0_0(t);
              v_50 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, r_50, v_50);
              n_10 = t;
              t = SSLsetAnnotations(n_10, o_50);
            }
          }
        else
          {
            t = c_41;
            {
              ATerm i_41 = t;
              int l_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,o_10 = NULL;
                  h_51 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      g_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_51);
                  f_51 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, g_51);
                  o_10 = t;
                  t = SSLsetAnnotations(o_10, f_51);
                  LocalPopChoice(l_41);
                  {
                    ATerm m_51 = NULL,o_51 = NULL,t_51 = NULL,u_51 = NULL,p_10 = NULL;
                    u_51 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        o_51 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_51);
                    m_51 = t;
                    t = o_51;
                    t = mark_buv_0_0(t);
                    t_51 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, t_51);
                    p_10 = t;
                    t = SSLsetAnnotations(p_10, m_51);
                  }
                }
              else
                {
                  t = i_41;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm c_6 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, z_27);
  t = v_6(y_27, z_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_41 = ATgetFirst((ATermList) t);
      v_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_51), a_28);
  x_51 = t;
  t = SSL_table_put(y_27, z_27, x_51);
  t = w_51;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL;
  y_51 = t;
  t = term_j_37;
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_51);
  a_52 = t;
  t = term_p_41;
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_37, (ATerm)ATmakeAppl(sym_Var_1, y_51), term_p_41);
  t = c_6(z_51, a_52, b_52, t);
  t = y_51;
  return(t);
}
ATerm f_6 (ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm c_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
  t = v_6(w_27, x_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_52 = ATgetFirst((ATermList) t);
      {
        ATerm q_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_52;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm e_54 = NULL,h_54 = NULL;
  e_54 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_28 = NULL,q_28 = NULL,x_28 = NULL,i_29 = NULL;
        t = term_j_37;
        i_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_37, e_54);
        t = f_6(i_29, e_54, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_41) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            p_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, h_54);
        q_28 = t;
        t = (ATerm) ATinsert(ATempty, p_28);
        x_28 = t;
        t = SSLsetAnnotations(q_28, x_28);
        ;
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        {
          ATerm v_41 = t;
          int w_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_29 = NULL,r_29 = NULL,s_29 = NULL,x_29 = NULL;
              t = term_j_37;
              x_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_j_37, e_54);
              t = f_6(x_29, e_54, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm x_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_41) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  p_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, h_54);
              r_29 = t;
              t = (ATerm) ATinsert(ATempty, p_29);
              s_29 = t;
              t = SSLsetAnnotations(r_29, s_29);
              ;
              LocalPopChoice(w_41);
            }
          else
            {
              t = v_41;
              {
                ATerm e_30 = NULL,i_30 = NULL,j_30 = NULL,t_30 = NULL;
                t = term_j_37;
                t_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_37, e_54);
                t = f_6(t_30, e_54, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm y_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) y_41) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    e_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, h_54);
                i_30 = t;
                t = (ATerm) ATinsert(ATempty, e_30);
                j_30 = t;
                t = SSLsetAnnotations(i_30, j_30);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_10 = NULL;
  ATerm a_42 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(b_42);
    }
  else
    {
      t = a_42;
    }
  v_54 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_54);
  s_54 = t;
  t = t_54;
  t = DeclareBound_0_0(t);
  u_54 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_54);
  w_10 = t;
  t = SSLsetAnnotations(w_10, s_54);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_55 = NULL,g_55 = NULL,n_55 = NULL,y_10 = NULL;
      n_55 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_55);
      d_55 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_55);
      y_10 = t;
      t = SSLsetAnnotations(y_10, d_55);
      LocalPopChoice(e_42);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = d_42;
      {
        ATerm f_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_55 = NULL,r_55 = NULL,t_55 = NULL,u_55 = NULL,z_10 = NULL;
            u_55 = t;
            if(match_cons(t, sym_App_2))
              {
                r_55 = ATgetArgument(t, 0);
                t_55 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_55);
            q_55 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, r_55, t_55);
            z_10 = t;
            t = SSLsetAnnotations(z_10, q_55);
            LocalPopChoice(g_42);
            {
              ATerm v_55 = NULL,w_55 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,b_11 = NULL;
              e_56 = t;
              if(match_cons(t, sym_App_2))
                {
                  w_55 = ATgetArgument(t, 0);
                  b_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_56);
              v_55 = t;
              t = w_55;
              t = mark_buv_0_0(t);
              c_56 = t;
              t = b_56;
              t = mark_build_vars_0_0(t);
              d_56 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, c_56, d_56);
              b_11 = t;
              t = SSLsetAnnotations(b_11, v_55);
            }
          }
        else
          {
            t = f_42;
            {
              ATerm h_42 = t;
              int i_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,c_11 = NULL;
                  h_56 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      g_56 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_56);
                  f_56 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, g_56);
                  c_11 = t;
                  t = SSLsetAnnotations(c_11, f_56);
                  LocalPopChoice(i_42);
                  {
                    ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,r_56 = NULL,f_11 = NULL;
                    r_56 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        j_56 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(r_56);
                    i_56 = t;
                    t = j_56;
                    t = mark_buv_0_0(t);
                    k_56 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, k_56);
                    f_11 = t;
                    t = SSLsetAnnotations(f_11, i_56);
                  }
                }
              else
                {
                  t = h_42;
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
  ATerm j_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_58 = NULL,i_58 = NULL;
      h_58 = t;
      if(match_cons(t, sym_Match_1))
        {
          i_58 = ATgetArgument(t, 0);
          {
            ATerm x_30 = NULL,i_31 = NULL,n_13 = NULL;
            t = SSLgetAnnotations(h_58);
            x_30 = t;
            t = i_58;
            t = mark_match_vars_0_0(t);
            i_31 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, i_31);
            n_13 = t;
            t = SSLsetAnnotations(n_13, x_30);
          }
        }
      else
        {
          ATerm r_31 = NULL,v_31 = NULL,o_13 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              i_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_58);
          r_31 = t;
          t = i_58;
          t = mark_build_vars_0_0(t);
          v_31 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, v_31);
          o_13 = t;
          t = SSLsetAnnotations(o_13, r_31);
        }
      ;
      LocalPopChoice(k_42);
    }
  else
    {
      t = j_42;
      {
        ATerm l_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            ;
            LocalPopChoice(m_42);
          }
        else
          {
            t = l_42;
            {
              ATerm o_42 = t;
              int p_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  ;
                  LocalPopChoice(p_42);
                }
              else
                {
                  t = o_42;
                  {
                    ATerm w_42 = t;
                    int y_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        ;
                        LocalPopChoice(y_42);
                      }
                    else
                      {
                        t = w_42;
                        {
                          ATerm z_42 = t;
                          int a_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_58 = NULL,n_58 = NULL,o_58 = NULL,s_58 = NULL,t_58 = NULL;
                              j_58 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  n_58 = ATgetArgument(t, 0);
                                  o_58 = ATgetArgument(t, 1);
                                  s_58 = ATgetArgument(t, 2);
                                  t_58 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = j_58;
                              t = z_5(n_58, o_58, s_58, t_58, t);
                              ;
                              LocalPopChoice(a_43);
                            }
                          else
                            {
                              t = z_42;
                              {
                                ATerm e_43 = t;
                                int f_43 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(f_43);
                                  }
                                else
                                  {
                                    t = e_43;
                                    {
                                      ATerm g_43 = t;
                                      int k_43 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL;
                                          e_61 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              f_61 = ATgetArgument(t, 0);
                                              t = f_61;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  b_61 = ATgetArgument(t, 0);
                                                  c_61 = ATgetArgument(t, 1);
                                                  d_61 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = e_61;
                                              t = y_5(b_61, c_61, d_61, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  f_61 = ATgetArgument(t, 0);
                                                  t = f_61;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      b_61 = ATgetArgument(t, 0);
                                                      c_61 = ATgetArgument(t, 1);
                                                      d_61 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_61;
                                                  t = x_5(b_61, c_61, d_61, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      f_61 = ATgetArgument(t, 0);
                                                      g_61 = ATgetArgument(t, 1);
                                                      h_61 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_61;
                                                  t = w_5(f_61, g_61, h_61, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(k_43);
                                        }
                                      else
                                        {
                                          t = g_43;
                                          {
                                            ATerm n_43 = t;
                                            int o_43 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(o_43);
                                              }
                                            else
                                              {
                                                t = n_43;
                                                {
                                                  ATerm p_43 = t;
                                                  int t_43 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(t_43);
                                                    }
                                                  else
                                                    {
                                                      t = p_43;
                                                      {
                                                        ATerm u_43 = t;
                                                        int v_43 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm u_61 = NULL;
                                                            u_61 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm x_43 = ATgetArgument(t, 0);
                                                                ATerm y_43 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = u_61;
                                                            t = v_5(t);
                                                            ;
                                                            LocalPopChoice(v_43);
                                                          }
                                                        else
                                                          {
                                                            t = u_43;
                                                            {
                                                              ATerm b_44 = t;
                                                              int c_44 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(c_44);
                                                                }
                                                              else
                                                                {
                                                                  t = b_44;
                                                                  {
                                                                    ATerm d_44 = t;
                                                                    int j_44 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(j_44);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_44;
                                                                        {
                                                                          ATerm l_44 = t;
                                                                          int m_44 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(m_44);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_44;
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
ATerm g_6 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,k_62 = NULL;
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  {
    ATerm n_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_44 = ATgetArgument(t, 0);
            ATerm t_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
        t = v_6(l_27, m_27, t);
        ;
        LocalPopChoice(p_44);
      }
    else
      {
        t = n_44;
        t = (ATerm) ATempty;
      }
    f_62 = t;
    t = (ATerm) ATinsert(CheckATermList(f_62), k_27);
    k_62 = t;
    t = SSL_table_put(l_27, m_27, k_62);
    t = e_62;
  }
  return(t);
}
ATerm h_6 (ATerm z_82 (ATerm), ATerm d_27, ATerm b_27, ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  r_62 = t;
  t = z_82(t);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_62, d_27, b_27);
  t = g_6(o_62, d_27, b_27, t);
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_63 = NULL;
        t = term_w_44;
        a_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_62, term_w_44);
        t = v_6(o_62, a_63, t);
        ;
        LocalPopChoice(v_44);
      }
    else
      {
        t = u_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_62 = ATgetFirst((ATermList) t);
        q_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_44;
    s_62 = t;
    t = (ATerm) ATinsert(CheckATermList(q_62), (ATerm) ATinsert(CheckATermList(p_62), d_27));
    t_62 = t;
    t = SSL_table_put(o_62, s_62, t_62);
    t = r_62;
  }
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_63);
  c_63 = t;
  t = term_b_45;
  d_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_63), term_b_45);
  t = h_6(h_11, c_63, d_63, t);
  t = b_63;
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,x_13 = NULL;
  i_63 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_63 = ATgetArgument(t, 0);
      g_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_63);
  e_63 = t;
  t = g_63;
  {
    ATerm k_11 (ATerm t)
    {
      ATerm j_63 = NULL;
      j_63 = t;
      t = f_63;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = j_63;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(j_11, k_11, t);
    if(((h_63 != NULL) && (h_63 != t)))
      _fail(t);
    else
      h_63 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, f_63, h_63);
    if(((x_13 != NULL) && (x_13 != t)))
      _fail(t);
    else
      x_13 = t;
    t = SSLsetAnnotations(x_13, e_63);
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL;
  d_68 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_68 = ATgetArgument(t, 0);
      y_67 = ATgetArgument(t, 1);
      {
        ATerm q_32 = NULL,t_32 = NULL,u_32 = NULL,z_13 = NULL;
        t = SSLgetAnnotations(d_68);
        q_32 = t;
        t = e_68;
        t = u_92(t);
        t_32 = t;
        t = y_67;
        t = s_92(t);
        u_32 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, t_32, u_32);
        z_13 = t;
        t = SSLsetAnnotations(z_13, q_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          e_68 = ATgetArgument(t, 0);
          y_67 = ATgetArgument(t, 1);
          z_67 = ATgetArgument(t, 2);
          c_68 = ATgetArgument(t, 3);
          {
            ATerm w_33 = NULL,h_34 = NULL,i_34 = NULL,n_34 = NULL,o_34 = NULL,a_14 = NULL;
            t = SSLgetAnnotations(d_68);
            w_33 = t;
            t = e_68;
            t = u_92(t);
            h_34 = t;
            t = y_67;
            t = u_92(t);
            i_34 = t;
            t = z_67;
            t = u_92(t);
            n_34 = t;
            t = c_68;
            t = s_92(t);
            o_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, h_34, i_34, n_34, o_34);
            a_14 = t;
            t = SSLsetAnnotations(a_14, w_33);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              e_68 = ATgetArgument(t, 0);
              y_67 = ATgetArgument(t, 1);
              z_67 = ATgetArgument(t, 2);
              c_68 = ATgetArgument(t, 3);
              {
                ATerm a_35 = NULL,m_35 = NULL,n_35 = NULL,q_35 = NULL,v_35 = NULL,b_14 = NULL;
                t = SSLgetAnnotations(d_68);
                a_35 = t;
                t = e_68;
                t = u_92(t);
                m_35 = t;
                t = y_67;
                t = u_92(t);
                n_35 = t;
                t = z_67;
                t = u_92(t);
                q_35 = t;
                t = c_68;
                t = s_92(t);
                v_35 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, m_35, n_35, q_35, v_35);
                b_14 = t;
                t = SSLsetAnnotations(b_14, a_35);
              }
            }
          else
            {
              ATerm r_36 = NULL,t_36 = NULL,h_14 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  e_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_68);
              r_36 = t;
              t = e_68;
              t = s_92(t);
              t_36 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, t_36);
              h_14 = t;
              t = SSLsetAnnotations(h_14, r_36);
            }
        }
    }
  return(t);
}
ATerm map_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm x_69 (ATerm t)
  {
    ATerm o_69 = NULL,p_69 = NULL,w_69 = NULL;
    o_69 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_69;
      }
    else
      {
        ATerm o_37 = NULL,t_37 = NULL,y_37 = NULL,x_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_69 = ATgetFirst((ATermList) t);
            w_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_69);
        o_37 = t;
        t = p_69;
        t = n_79(t);
        t_37 = t;
        t = w_69;
        t = x_69(t);
        y_37 = t;
        t = (ATerm) ATinsert(CheckATermList(y_37), t_37);
        x_14 = t;
        t = SSLsetAnnotations(x_14, o_37);
      }
    return(t);
  }
  t = x_69(t);
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm f_70 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_70);
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_45);
    }
  else
    {
      t = c_45;
      {
        ATerm i_70 = NULL,m_70 = NULL,p_70 = NULL,q_70 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_70 = ATgetArgument(t, 0);
            t = i_70;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_70 = ATgetArgument(t, 0);
                m_70 = ATgetArgument(t, 1);
                p_70 = ATgetArgument(t, 2);
                q_70 = ATgetArgument(t, 3);
                t = p_70;
                t = map_1_0(c_12, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_70 = ATgetArgument(t, 0);
                    m_70 = ATgetArgument(t, 1);
                    p_70 = ATgetArgument(t, 2);
                    q_70 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_70;
                t = map_1_0(j_12, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm h_71 = NULL;
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_71 = ATgetArgument(t, 0);
          {
            ATerm g_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_45);
      t = h_71;
    }
  else
    {
      t = e_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_71;
    }
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm t_71 = NULL;
  ATerm h_45 = t;
  int i_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_71 = ATgetArgument(t, 0);
          {
            ATerm j_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_45);
      t = t_71;
    }
  else
    {
      t = h_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_71;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(w_11, b_12, tboundin_3_0, t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm v_72 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_72);
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm k_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_45);
    }
  else
    {
      t = k_45;
      {
        ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_72 = ATgetArgument(t, 0);
            t = x_72;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_72 = ATgetArgument(t, 0);
                y_72 = ATgetArgument(t, 1);
                z_72 = ATgetArgument(t, 2);
                a_73 = ATgetArgument(t, 3);
                t = z_72;
                t = map_1_0(a_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    x_72 = ATgetArgument(t, 0);
                    y_72 = ATgetArgument(t, 1);
                    z_72 = ATgetArgument(t, 2);
                    a_73 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = z_72;
                t = map_1_0(f_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm i_73 = NULL;
  ATerm m_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_73 = ATgetArgument(t, 0);
          {
            ATerm o_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_45);
      t = i_73;
    }
  else
    {
      t = m_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_73;
    }
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm r_73 = NULL;
  ATerm p_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_73 = ATgetArgument(t, 0);
          {
            ATerm r_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_45);
      t = r_73;
    }
  else
    {
      t = p_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_73;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm l_72 = NULL,s_72 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      s_72 = ATgetArgument(t, 0);
      t = s_72;
      if(match_cons(t, sym_Rule_3))
        {
          l_72 = ATgetArgument(t, 0);
          {
            ATerm s_45 = ATgetArgument(t, 1);
          }
          {
            ATerm t_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_72;
      t = free_vars_3_0(s_12, t_12, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          s_72 = ATgetArgument(t, 0);
          {
            ATerm u_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_72;
    }
  return(t);
}
ATerm m_6 (ATerm c_79 (ATerm), ATerm v_21, ATerm u_21, ATerm t)
{
  ATerm k_74 (ATerm t)
  {
    ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
    f_74 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_74 = ATgetFirst((ATermList) t);
            h_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_45 = t;
          int w_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_74;
              {
                ATerm s_13 (ATerm t)
                {
                  t = u_21;
                  return(t);
                }
                t = n_6(c_79, s_13, g_74, h_74, t);
                t = k_74(t);
              }
              ;
              LocalPopChoice(w_45);
            }
          else
            {
              t = v_45;
              {
                ATerm q_38 = NULL,d_39 = NULL,z_14 = NULL;
                t = SSLgetAnnotations(f_74);
                q_38 = t;
                t = h_74;
                t = k_74(t);
                d_39 = t;
                t = (ATerm) ATinsert(CheckATermList(d_39), g_74);
                z_14 = t;
                t = SSLsetAnnotations(z_14, q_38);
              }
            }
        }
      }
    return(t);
  }
  t = v_21;
  t = k_74(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
  n_74 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_74;
      t = p_81(t);
    }
  else
    {
      ATerm s_74 = NULL,t_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_74 = ATgetFirst((ATermList) t);
          p_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_74;
      t = r_81(t);
      s_74 = t;
      t = p_74;
      t = foldr_3_0(p_81, q_81, r_81, t);
      t_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_74, t_74);
      t = q_81(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm s_75 (ATerm t)
  {
    ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
    p_75 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_75 = ATgetFirst((ATermList) t);
        r_75 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_45 = t;
      int y_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_39 = NULL,q_39 = NULL,e_15 = NULL;
          t = SSLgetAnnotations(p_75);
          m_39 = t;
          t = q_75;
          t = x_79(t);
          q_39 = t;
          t = (ATerm) ATinsert(CheckATermList(r_75), q_39);
          e_15 = t;
          t = SSLsetAnnotations(e_15, m_39);
          ;
          LocalPopChoice(y_45);
        }
      else
        {
          t = x_45;
          {
            ATerm i_40 = NULL,n_40 = NULL,f_15 = NULL;
            t = SSLgetAnnotations(p_75);
            i_40 = t;
            t = r_75;
            t = s_75(t);
            n_40 = t;
            t = (ATerm) ATinsert(CheckATermList(n_40), q_75);
            f_15 = t;
            t = SSLsetAnnotations(f_15, i_40);
          }
        }
    }
    return(t);
  }
  t = s_75(t);
  return(t);
}
ATerm n_6 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm z_21, ATerm y_21, ATerm t)
{
  t = g_79(t);
  {
    ATerm w_13 (ATerm t)
    {
      ATerm v_75 = NULL;
      v_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, v_75);
      t = f_79(t);
      return(t);
    }
    t = fetch_1_0(w_13, t);
    t = y_21;
  }
  return(t);
}
ATerm o_6 (ATerm x_78 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  ATerm l_76 (ATerm t)
  {
    ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
    g_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_76;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_76 = ATgetFirst((ATermList) t);
            i_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_46 = t;
          int b_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_76;
              {
                ATerm y_13 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = n_6(x_78, y_13, h_76, i_76, t);
                t = l_76(t);
              }
              ;
              LocalPopChoice(b_46);
            }
          else
            {
              t = a_46;
              {
                ATerm d_41 = NULL,r_41 = NULL,i_15 = NULL;
                t = SSLgetAnnotations(g_76);
                d_41 = t;
                t = i_76;
                t = l_76(t);
                r_41 = t;
                t = (ATerm) ATinsert(CheckATermList(r_41), h_76);
                i_15 = t;
                t = SSLsetAnnotations(i_15, d_41);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = l_76(t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm h_77 (ATerm t)
  {
    ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
    g_77 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_77 = ATgetFirst((ATermList) t);
        f_77 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_41 = NULL,c_42 = NULL,l_15 = NULL;
          t = SSLgetAnnotations(g_77);
          z_41 = t;
          t = f_77;
          t = h_77(t);
          c_42 = t;
          t = (ATerm) ATinsert(CheckATermList(c_42), e_77);
          l_15 = t;
          t = SSLsetAnnotations(l_15, z_41);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_77;
        t = d_80(t);
      }
    return(t);
  }
  t = h_77(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
  o_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_76;
    }
  else
    {
      ATerm i_14 (ATerm t)
      {
        t = not_null(q_76);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((p_76 != NULL) && (p_76 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            p_76 = ATgetFirst((ATermList) t);
          if(((q_76 != NULL) && (q_76 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_76;
      t = at_end_1_0(i_14, t);
    }
  return(t);
}
ATerm t_77 (ATerm l_77, ATerm t)
{
  ATerm m_77 = NULL;
  t = SSL_explode_term(l_77);
  if(match_cons(t, sym__2))
    {
      ATerm c_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL;
  q_77 = t;
  if(match_cons(t, sym__2))
    {
      o_77 = ATgetArgument(t, 0);
      p_77 = ATgetArgument(t, 1);
      {
        ATerm d_46 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_14 (ATerm t)
            {
              t = p_77;
              return(t);
            }
            t = o_77;
            t = at_end_1_0(k_14, t);
            ;
            LocalPopChoice(e_46);
          }
        else
          {
            t = d_46;
            t = t_77(q_77, t);
          }
      }
    }
  else
    {
      t = t_77(q_77, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm t)
{
  ATerm a_78 (ATerm t)
  {
    ATerm f_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_86(t);
        ;
        LocalPopChoice(h_46);
      }
    else
      {
        t = f_46;
        {
          ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,n_15 = NULL;
          t = w_86(t);
          z_77 = t;
          if(match_cons(t, sym__2))
            {
              v_77 = ATgetArgument(t, 0);
              w_77 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_77);
          u_77 = t;
          t = v_77;
          t = y_86(t);
          x_77 = t;
          t = w_77;
          t = a_78(t);
          y_77 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_77, y_77);
          n_15 = t;
          t = SSLsetAnnotations(n_15, u_77);
          t = x_86(t);
        }
      }
    return(t);
  }
  t = a_78(t);
  return(t);
}
ATerm s_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_46 = ATgetArgument(t, 0);
      if(((ATgetType(i_46) != AT_LIST) || !(ATisEmpty(i_46))))
        _fail(t);
      {
        ATerm k_46 = ATgetArgument(t, 1);
        if(((ATgetType(k_46) != AT_LIST) || !(ATisEmpty(k_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_46 = ATgetArgument(t, 0);
      if(((ATgetType(l_46) == AT_LIST) && !(ATisEmpty(l_46))))
        {
          h_78 = ATgetFirst((ATermList) l_46);
          i_78 = (ATerm) ATgetNext((ATermList) l_46);
        }
      else
        _fail(t);
      {
        ATerm m_46 = ATgetArgument(t, 1);
        if(((ATgetType(m_46) == AT_LIST) && !(ATisEmpty(m_46))))
          {
            j_78 = ATgetFirst((ATermList) m_46);
            k_78 = (ATerm) ATgetNext((ATermList) m_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_78, j_78), (ATerm) ATmakeAppl(sym__2, i_78, k_78));
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL;
  if(match_cons(t, sym__2))
    {
      l_78 = ATgetArgument(t, 0);
      m_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_78), l_78);
  return(t);
}
ATerm s_6 (ATerm c_609, ATerm h_609, ATerm p_57, ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL;
  t = SSL_explode_term(h_609);
  if(match_cons(t, sym__2))
    {
      c_78 = ATgetArgument(t, 0);
      e_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_609);
  if(match_cons(t, sym__2))
    {
      if((c_78 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_78, e_78);
  t = genzip_4_0(s_14, t_14, y_14, _id, t);
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_78, p_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm o_78 (ATerm t)
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_98(t);
        ;
        LocalPopChoice(o_46);
      }
    else
      {
        t = n_46;
        t = g_98(t);
        t = o_78(t);
      }
    return(t);
  }
  t = o_78(t);
  return(t);
}
ATerm for_3_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  t = i_98(t);
  t = while_not_2_0(j_98, k_98, t);
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm v_78 = NULL;
  v_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_78);
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm w_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,p_15 = NULL;
  b_79 = t;
  if(match_cons(t, sym__2))
    {
      z_78 = ATgetArgument(t, 0);
      a_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_79);
  w_78 = t;
  t = a_79;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_78, a_79);
  p_15 = t;
  t = SSLsetAnnotations(p_15, w_78);
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL;
  f_80 = t;
  if(match_cons(t, sym__2))
    {
      g_80 = ATgetArgument(t, 0);
      h_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_80 = ATgetFirst((ATermList) t);
      j_80 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_46 = t;
        int q_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_80(g_80, h_80, f_80, t);
            ;
            LocalPopChoice(q_46);
          }
        else
          {
            t = p_46;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_80), i_80), j_80);
          }
      }
    }
  else
    {
      t = t_80(g_80, h_80, f_80, t);
    }
  return(t);
}
ATerm t_80 (ATerm e_79, ATerm h_79, ATerm i_79, ATerm t)
{
  ATerm j_79 = NULL,p_79 = NULL,q_15 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL;
  t = SSLgetAnnotations(i_79);
  j_79 = t;
  t = h_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_79 = ATgetFirst((ATermList) t);
      v_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_79;
  if(match_cons(t, sym__2))
    {
      t_79 = ATgetArgument(t, 0);
      u_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_46 = t;
    int x_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_79;
        if((t_79 != t))
          {
            _fail(t);
          }
        t = v_79;
        ;
        LocalPopChoice(x_46);
      }
    else
      {
        t = t_46;
        t = h_79;
        t = s_6(t_79, u_79, v_79, t);
      }
    p_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_79, p_79);
    q_15 = t;
    t = SSLsetAnnotations(q_15, j_79);
  }
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm s_80 = NULL;
  if(match_cons(t, sym__2))
    {
      s_80 = ATgetArgument(t, 0);
      if((s_80 != ATgetArgument(t, 1)))
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
  ATerm y_46 = t;
  int z_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_15, g_15, h_15, t);
      ;
      LocalPopChoice(z_46);
    }
  else
    {
      t = y_46;
      {
        ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL;
        n_80 = t;
        if(match_cons(t, sym__2))
          {
            o_80 = ATgetArgument(t, 0);
            p_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_80;
        t = o_6(j_15, o_80, p_80, t);
      }
    }
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(s_15, h_43, i_43, t);
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm j_43 = NULL;
  if(match_cons(t, sym__2))
    {
      j_43 = ATgetArgument(t, 0);
      if((j_43 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  if(match_cons(t, sym__2))
    {
      q_43 = ATgetArgument(t, 0);
      r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(z_15, q_43, r_43, t);
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm s_43 = NULL;
  if(match_cons(t, sym__2))
    {
      s_43 = ATgetArgument(t, 0);
      if((s_43 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_81 (ATerm t)
  {
    ATerm a_47 = t;
    int b_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_95(t);
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
              ATerm v_80 = NULL,w_80 = NULL,q_42 = NULL,v_42 = NULL;
              v_80 = t;
              t = v_95(t);
              w_80 = t;
              t = v_80;
              {
                ATerm k_15 (ATerm t)
                {
                  ATerm y_80 = NULL;
                  t = h_81(t);
                  y_80 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_80, w_80);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_95(k_15, h_81, m_15, t);
                if(((v_42 != NULL) && (v_42 != t)))
                  _fail(t);
                else
                  v_42 = t;
                t = SSL_explode_term(v_42);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_47 = ATgetArgument(t, 0);
                    if(((q_42 != NULL) && (q_42 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      q_42 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_42;
                t = foldr_3_0(o_15, r_15, _id, t);
              }
              ;
              LocalPopChoice(d_47);
            }
          else
            {
              t = c_47;
              {
                ATerm l_43 = NULL,m_43 = NULL;
                m_43 = t;
                t = SSL_explode_term(m_43);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_47 = ATgetArgument(t, 0);
                    l_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_43;
                t = foldr_3_0(u_15, w_15, h_81, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_81(t);
  return(t);
}
ATerm u_6 (ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL;
  j_81 = t;
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
        t = v_6(q_27, r_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_47 = ATgetFirst((ATermList) t);
            i_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_47);
        t = SSL_table_put(q_27, r_27, i_81);
        t = (ATerm) ATmakeAppl(sym__3, q_27, r_27, i_81);
      }
    else
      {
        t = g_47;
        t = SSL_table_remove(q_27, r_27);
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
      }
    t = j_81;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL;
  n_81 = t;
  t = w_82(t);
  m_81 = t;
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_81 = NULL;
        t = term_w_44;
        s_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_81, term_w_44);
        t = v_6(m_81, s_81, t);
        ;
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_81 = ATgetFirst((ATermList) t);
        k_81 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_44;
    o_81 = t;
    t = SSL_table_put(m_81, o_81, k_81);
    t = l_81;
    {
      ATerm a_16 (ATerm t)
      {
        ATerm t_81 = NULL;
        t_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_81, t_81);
        t = u_6(m_81, t_81, t);
        return(t);
      }
      t = map_1_0(a_16, t);
      t = n_81;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_89(t);
      t = x_89(t);
      ;
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
      t = x_89(t);
      _fail(t);
    }
  return(t);
}
ATerm v_6 (ATerm c_29, ATerm d_29, ATerm t)
{
  t = SSL_table_get(c_29, d_29);
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL;
  w_81 = t;
  t = v_82(t);
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_81, term_w_44);
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_82 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_47 = ATgetArgument(t, 0);
            ATerm y_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_44;
        d_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_81, term_w_44);
        t = v_6(v_81, d_82, t);
        ;
        LocalPopChoice(o_47);
      }
    else
      {
        t = n_47;
        t = (ATerm) ATempty;
      }
    x_81 = t;
    t = term_w_44;
    y_81 = t;
    t = (ATerm) ATinsert(CheckATermList(x_81), (ATerm) ATempty);
    z_81 = t;
    t = SSL_table_put(v_81, y_81, z_81);
    t = w_81;
  }
  return(t);
}
ATerm scope_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm t)
{
  ATerm c_16 (ATerm t)
  {
    t = end_scope_1_0(x_82, t);
    return(t);
  }
  t = begin_scope_1_0(x_82, t);
  t = restore_always_2_0(y_82, c_16, t);
  return(t);
}
ATerm f_16 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = scope_2_0(i_16, j_16, t);
  return(t);
}
ATerm i_16 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
  l_82 = t;
  t = free_vars_3_0(k_16, l_16, tboundin_3_0, t);
  k_82 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, k_82, l_82);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm z_47 = ATgetArgument(t, 0);
      j_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_82;
  {
    ATerm a_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(d_48);
      }
    else
      {
        t = a_48;
        {
          ATerm e_48 = t;
          int f_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(f_48);
            }
          else
            {
              t = e_48;
              {
                ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    s_83 = ATgetArgument(t, 0);
                    t_83 = ATgetArgument(t, 1);
                    u_83 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = j_82;
                t = s_5(s_83, t_83, u_83, t);
              }
            }
        }
      }
    t = debug_1_0(t_16, t);
  }
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm m_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_82);
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm g_48 = t;
  int h_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_48);
    }
  else
    {
      t = g_48;
      {
        ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_82 = ATgetArgument(t, 0);
            t = o_82;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_82 = ATgetArgument(t, 0);
                p_82 = ATgetArgument(t, 1);
                q_82 = ATgetArgument(t, 2);
                r_82 = ATgetArgument(t, 3);
                t = q_82;
                t = map_1_0(m_16, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_82 = ATgetArgument(t, 0);
                    p_82 = ATgetArgument(t, 1);
                    q_82 = ATgetArgument(t, 2);
                    r_82 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_82;
                t = map_1_0(n_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm f_83 = NULL;
  ATerm i_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_83 = ATgetArgument(t, 0);
          {
            ATerm k_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_48);
      t = f_83;
    }
  else
    {
      t = i_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_83;
    }
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm o_83 = NULL;
  ATerm l_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_83 = ATgetArgument(t, 0);
          {
            ATerm n_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_48);
      t = o_83;
    }
  else
    {
      t = l_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_83;
    }
  return(t);
}
ATerm t_16 (ATerm t)
{
  t = term_o_48;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm i_82 = NULL;
  i_82 = t;
  t = scope_2_0(f_16, h_16, t);
  t = i_82;
  return(t);
}
ATerm filter_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL;
  j_84 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_84;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_84 = ATgetFirst((ATermList) t);
          l_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_48 = t;
        int q_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_43 = NULL,z_43 = NULL,a_44 = NULL,v_15 = NULL;
            t = SSLgetAnnotations(j_84);
            w_43 = t;
            t = k_84;
            t = v_88(t);
            z_43 = t;
            t = l_84;
            t = filter_1_0(v_88, t);
            a_44 = t;
            t = (ATerm) ATinsert(CheckATermList(a_44), z_43);
            v_15 = t;
            t = SSLsetAnnotations(v_15, w_43);
            ;
            LocalPopChoice(q_48);
          }
        else
          {
            t = p_48;
            t = l_84;
            t = filter_1_0(v_88, t);
          }
      }
    }
  return(t);
}
ATerm w_6 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm r_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_25, q_25);
      ;
      LocalPopChoice(s_48);
    }
  else
    {
      t = r_48;
      t = SSL_addr(p_25, q_25);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL;
  q_84 = t;
  t = j_109(t);
  r_84 = t;
  t = term_w_18;
  s_84 = t;
  t = (ATerm) ATinsert(ATempty, r_84);
  t_84 = t;
  t = SSL_printnl(s_84, t_84);
  t = q_84;
  {
    ATerm t_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,x_15 = NULL;
        t = k_109(t);
        t = q_84;
        if(match_cons(t, sym__2))
          {
            x_84 = ATgetArgument(t, 0);
            y_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_84);
        u_84 = t;
        t = term_v_48;
        a_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_84, term_v_48);
        t = w_6(x_84, a_85, t);
        z_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_84, y_84);
        x_15 = t;
        t = SSLsetAnnotations(x_15, u_84);
        ;
        LocalPopChoice(u_48);
      }
    else
      {
        t = t_48;
        {
          ATerm j_85 = NULL,k_85 = NULL,o_44 = NULL,r_44 = NULL,s_44 = NULL,y_15 = NULL;
          if(match_cons(t, sym__2))
            {
              j_85 = ATgetArgument(t, 0);
              k_85 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_84);
          o_44 = t;
          t = term_v_48;
          s_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_85, term_v_48);
          t = w_6(k_85, s_44, t);
          r_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_85, r_44);
          y_15 = t;
          t = SSLsetAnnotations(y_15, o_44);
        }
      }
  }
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_w_48;
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_i_28, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATempty, term_k_25))), term_r_20)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_r_26, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_19, (ATerm) ATinsert(ATempty, term_r_20)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_h_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_25), term_r_20))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, term_c_26), term_k_25))), term_r_20)))))));
      {
        ATerm z_48 = t;
        if((PushChoice() == 0))
          {
            ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,b_16 = NULL;
            p_85 = t;
            if(match_cons(t, sym_Strategies_1))
              {
                o_85 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_85);
            n_85 = t;
            t = o_85;
            {
              ATerm a_49 = t;
              int b_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_85;
                  ;
                  LocalPopChoice(b_49);
                }
              else
                {
                  t = a_49;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_85;
                }
              t = (ATerm) ATmakeAppl(sym_Strategies_1, o_85);
              b_16 = t;
              t = SSLsetAnnotations(b_16, n_85);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_48;
          }
      }
      ;
      LocalPopChoice(y_48);
    }
  else
    {
      t = x_48;
      {
        ATerm r_85 = NULL,s_85 = NULL;
        t = term_w_18;
        r_85 = t;
        t = (ATerm) ATinsert(ATempty, term_h_26);
        s_85 = t;
        t = SSL_printnl(r_85, s_85);
        t = term_h_26;
        _fail(t);
      }
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(u_16, v_16, t);
  return(t);
}
ATerm debug_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL;
  t_85 = t;
  t = l_102(t);
  u_85 = t;
  t = term_w_18;
  v_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_85), u_85);
  w_85 = t;
  t = SSL_printnl(v_85, w_85);
  t = t_85;
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = term_c_49;
  return(t);
}
ATerm x_16 (ATerm t)
{
  t = term_d_49;
  return(t);
}
ATerm z_16 (ATerm t)
{
  t = term_e_49;
  return(t);
}
ATerm test_suite_2_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,e_16 = NULL,d_16 = NULL;
  t = h_109(t);
  t = debug_1_0(w_16, t);
  t = term_h_49;
  t = i_109(t);
  g_86 = t;
  if(match_cons(t, sym__2))
    {
      b_86 = ATgetArgument(t, 0);
      c_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_86);
  a_86 = t;
  t = b_86;
  t = debug_1_0(x_16, t);
  d_86 = t;
  t = c_86;
  t = debug_1_0(z_16, t);
  e_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_86, e_86);
  d_16 = t;
  t = SSLsetAnnotations(d_16, a_86);
  f_86 = t;
  if(match_cons(t, sym__2))
    {
      y_85 = ATgetArgument(t, 0);
      z_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_86);
  x_85 = t;
  t = z_85;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_85, z_85);
  e_16 = t;
  t = SSLsetAnnotations(e_16, x_85);
  return(t);
}
ATerm d_17 (ATerm t)
{
  t = term_m_49;
  return(t);
}
ATerm e_17 (ATerm t)
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
  t = test_suite_2_0(d_17, e_17, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_io_0_0(t);
  return(t);
}

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
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_StratRule_3;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_Choice_2;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Where_1;
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
Symbol sym_stderr_0;
Symbol sym_Var_1;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
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
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
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
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
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
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_z_36;
ATerm term_s_36;
ATerm term_w_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_s_30;
ATerm term_f_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_u_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_a_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_i_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_m_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_x_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_c_21;
void init_constant_terms (void)
{
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Var_1, term_o_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Match_1, term_q_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Build_1, term_q_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Var_1, term_j_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Var_1, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Var_1, term_q_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Var_1, term_n_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_z_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Var_1, term_c_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Build_1, term_m_22);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_22);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Call_2, term_h_23, (ATerm) ATempty);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Build_1, term_t_22);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Match_1, term_d_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Str_1, term_u_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Var_1, term_g_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Str_1, term_y_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Var_1, term_a_25);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Call_2, term_l_25, (ATerm) ATempty);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Match_1, term_b_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_m_25, term_n_25);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_s_21, term_o_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Call_2, term_q_26, (ATerm) ATempty);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_LChoice_2, term_m_25, term_r_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_s_26, term_r_21);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_r_26, term_r_21);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_LChoice_2, term_m_25, term_x_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Var_1, term_k_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Match_1, term_l_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Str_1, term_n_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Build_1, term_l_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_p_27, term_m_25);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_App_2, term_m_25, term_l_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Match_1, term_w_24);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Var_1, term_h_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_31);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_j_37);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm test12_0_0 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm k_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm test11_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm s_64 (ATerm), ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm test10_0_0 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm y_12 (ATerm);
ATerm test9_0_0 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm test8_0_0 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm i_14 (ATerm);
ATerm test7_0_0 (ATerm);
ATerm j_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm v_14 (ATerm);
ATerm test6_0_0 (ATerm);
ATerm w_14 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm b_15 (ATerm);
ATerm test5_0_0 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm y_15 (ATerm);
ATerm test2_0_0 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm b_16 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm u_17 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm);
ATerm v_17 (ATerm);
ATerm b_7 (ATerm b_6, ATerm c_6, ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm y_17 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm e_66 (ATerm), ATerm);
ATerm App_2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm Var_1_0 (ATerm o_65 (ATerm), ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm f_69 (ATerm), ATerm);
ATerm Build_1_0 (ATerm g_69 (ATerm), ATerm);
ATerm a_18 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm e_18 (ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm h_18 (ATerm);
ATerm j_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm m_18 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm s_18 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm assert_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm f_68 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm diff_1_0 (ATerm z_76 (ATerm), ATerm);
ATerm f_19 (ATerm);
ATerm g_19 (ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm n_19 (ATerm);
ATerm p_19 (ATerm);
ATerm free_vars_3_0 (ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm scope_2_0 (ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm);
ATerm filter_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm q_64 (ATerm), ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm do_test_2_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm r_20 (ATerm);
ATerm s_20 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm w_20 (ATerm);
ATerm test_suite_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm use_def_test_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm e_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_i_21, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_l_21, (ATerm) ATinsert(ATempty, term_r_21)), (ATerm)ATmakeAppl(sym_Call_2, term_l_21, (ATerm) ATinsert(ATempty, term_s_21)), term_t_21));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = e_21;
      {
        ATerm c_0 = NULL,k_0 = NULL,l_0 = NULL,n_0 = NULL;
        l_0 = t;
        t = term_u_21;
        c_0 = t;
        t = l_0;
        n_0 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        k_0 = t;
        t = SSL_printnl(c_0, k_0);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(f_12, g_12, t);
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_22), term_k_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, term_t_22), term_r_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_22), term_k_22))), term_r_22))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm o_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL;
        t_0 = t;
        t = term_u_21;
        o_0 = t;
        t = t_0;
        u_0 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        r_0 = t;
        t = SSL_printnl(o_0, r_0);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_y_22, (ATerm)ATinsert(ATempty, term_a_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, term_m_22), term_k_22)), (ATerm)ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, term_d_23), term_k_22))), term_r_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_e_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, term_t_22), term_r_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_i_23, (ATerm) ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, term_r_22), term_k_22)))), term_l_23))))), term_m_23))))));
      t = Strategies_1_0(n_12, t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm v_0 = NULL,x_0 = NULL,y_0 = NULL,d_1 = NULL;
        y_0 = t;
        t = term_u_21;
        v_0 = t;
        t = y_0;
        d_1 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        x_0 = t;
        t = SSL_printnl(v_0, x_0);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm a_0 = NULL;
        a_0 = t;
        t = filter_1_0(o_12, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_0;
      }
    }
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm w_23 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_23;
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(h_12, i_12, t);
  t = do_test_2_0(j_12, k_12, t);
  return(t);
}
ATerm Overlays_1_0 (ATerm s_64 (ATerm), ATerm t)
{
  ATerm d_0 = NULL,e_0 = NULL,g_0 = NULL,i_0 = NULL,g_1 = NULL,h_1 = NULL;
  i_0 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      e_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_0);
  d_0 = t;
  t = e_0;
  t = s_64(t);
  g_0 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_Overlays_1, g_0);
  g_1 = t;
  t = SSLsetAnnotations(g_1, d_0);
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm y_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_l_22, (ATerm)ATinsert(ATinsert(ATempty, term_g_24), term_o_21), (ATerm) ATmakeAppl(sym_Op_2, term_x_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), term_z_24), term_q_21)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_f_24, (ATerm)ATinsert(ATinsert(ATempty, term_g_24), term_o_21), (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, term_v_24), term_q_21)))))));
      {
        ATerm c_25 = t;
        if((PushChoice() == 0))
          {
            t = Overlays_1_0(r_12, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_25;
          }
      }
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = y_23;
      {
        ATerm i_1 = NULL,l_1 = NULL,m_1 = NULL,p_1 = NULL;
        m_1 = t;
        t = term_u_21;
        i_1 = t;
        t = m_1;
        p_1 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        l_1 = t;
        t = SSL_printnl(i_1, l_1);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm q_0 = NULL;
        q_0 = t;
        t = filter_1_0(s_12, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_0;
      }
    }
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm g_25 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_25;
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(p_12, q_12, t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21)), (ATerm)ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_b_25), term_w_24)), term_p_25)));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,z_1 = NULL;
        x_1 = t;
        t = term_u_21;
        v_1 = t;
        t = x_1;
        z_1 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        w_1 = t;
        t = SSL_printnl(v_1, w_1);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21)), (ATerm)ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_b_25), term_w_24)), term_t_21)));
      {
        ATerm t_25 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_25;
          }
      }
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL;
        c_2 = t;
        t = term_u_21;
        a_2 = t;
        t = c_2;
        d_2 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        b_2 = t;
        t = SSL_printnl(a_2, b_2);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(t_12, u_12, t);
  t = do_test_2_0(v_12, y_12, t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21)), (ATerm)ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_b_25), term_w_24)), term_p_25));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,i_2 = NULL;
        g_2 = t;
        t = term_u_21;
        e_2 = t;
        t = g_2;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        f_2 = t;
        t = SSL_printnl(e_2, f_2);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm n_13 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21)), (ATerm)ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_b_25), term_w_24)), term_t_21));
      {
        ATerm a_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_26;
          }
      }
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,n_2 = NULL;
        l_2 = t;
        t = term_u_21;
        j_2 = t;
        t = l_2;
        n_2 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        k_2 = t;
        t = SSL_printnl(j_2, k_2);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(h_13, i_13, t);
  t = do_test_2_0(n_13, o_13, t);
  return(t);
}
ATerm v_13 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATempty, term_w_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATempty, term_q_21))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATempty, term_q_21))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
        q_2 = t;
        t = term_u_21;
        o_2 = t;
        t = q_2;
        r_2 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        p_2 = t;
        t = SSL_printnl(o_2, p_2);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm b_14 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATempty, term_q_21))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATempty, term_q_21)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21)))));
      {
        ATerm h_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_26;
          }
      }
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
        u_2 = t;
        t = term_u_21;
        s_2 = t;
        t = u_2;
        v_2 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        t_2 = t;
        t = SSL_printnl(s_2, t_2);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATempty, term_q_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATempty, term_q_21))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))))));
      {
        ATerm l_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_26;
          }
      }
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
        y_2 = t;
        t = term_u_21;
        w_2 = t;
        t = y_2;
        z_2 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        x_2 = t;
        t = SSL_printnl(w_2, x_2);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(v_13, w_13, t);
  t = do_test_2_0(b_14, c_14, t);
  t = do_test_2_0(d_14, i_14, t);
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_t_26, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATempty, term_q_21)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
        c_3 = t;
        t = term_u_21;
        a_3 = t;
        t = c_3;
        d_3 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        b_3 = t;
        t = SSL_printnl(a_3, b_3);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm q_14 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_y_26, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATempty, term_q_21)))));
      {
        ATerm z_26 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_26;
          }
      }
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
        g_3 = t;
        t = term_u_21;
        e_3 = t;
        t = g_3;
        h_3 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        f_3 = t;
        t = SSL_printnl(e_3, f_3);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(j_14, p_14, t);
  t = do_test_2_0(q_14, v_14, t);
  return(t);
}
ATerm w_14 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATempty, term_q_21)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATempty, term_q_21)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm i_3 = NULL,k_3 = NULL,l_3 = NULL,n_3 = NULL;
        l_3 = t;
        t = term_u_21;
        i_3 = t;
        t = l_3;
        n_3 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        k_3 = t;
        t = SSL_printnl(i_3, k_3);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATempty, term_q_21)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21)))));
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
        ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL;
        q_3 = t;
        t = term_u_21;
        o_3 = t;
        t = q_3;
        r_3 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        p_3 = t;
        t = SSL_printnl(o_3, p_3);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(w_14, y_14, t);
  t = do_test_2_0(z_14, b_15, t);
  return(t);
}
ATerm f_15 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_m_27, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_k_27), term_q_27))), term_o_27)))));
      {
        ATerm r_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_27;
          }
      }
      ;
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm t_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
        w_3 = t;
        t = term_u_21;
        t_3 = t;
        t = w_3;
        x_3 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        v_3 = t;
        t = SSL_printnl(t_3, v_3);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm h_15 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_m_27, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_v_27), term_o_27)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
        ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
        b_4 = t;
        t = term_u_21;
        z_3 = t;
        t = b_4;
        c_4 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        a_4 = t;
        t = SSL_printnl(z_3, a_4);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_k_27), term_q_27))), term_o_27))));
      {
        ATerm z_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_27;
          }
      }
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,k_4 = NULL;
        f_4 = t;
        t = term_u_21;
        d_4 = t;
        t = f_4;
        k_4 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        e_4 = t;
        t = SSL_printnl(d_4, e_4);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(f_15, g_15, t);
  t = do_test_2_0(h_15, i_15, t);
  t = do_test_2_0(j_15, k_15, t);
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_g_24), (ATerm) ATmakeAppl(sym_Seq_2, term_d_28, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATempty, term_w_24))), term_q_21)))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm l_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL;
        o_4 = t;
        t = term_u_21;
        l_4 = t;
        t = o_4;
        p_4 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        m_4 = t;
        t = SSL_printnl(l_4, m_4);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm p_15 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_g_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, term_i_28), term_q_21))), term_w_24))))));
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
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm t_4 = NULL,v_4 = NULL,y_4 = NULL,z_4 = NULL;
        y_4 = t;
        t = term_u_21;
        t_4 = t;
        t = y_4;
        z_4 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        v_4 = t;
        t = SSL_printnl(t_4, v_4);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(m_15, n_15, t);
  t = do_test_2_0(p_15, q_15, t);
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_k_28;
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATempty, term_w_24))), term_q_21)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm a_5 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL;
        d_5 = t;
        t = term_u_21;
        a_5 = t;
        t = d_5;
        e_5 = t;
        t = (ATerm) ATinsert(ATempty, term_v_21);
        b_5 = t;
        t = SSL_printnl(a_5, b_5);
        t = term_v_21;
        _fail(t);
      }
    }
  return(t);
}
ATerm t_15 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, term_i_28), term_q_21))), term_w_24)))));
      {
        ATerm q_28 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_28;
          }
      }
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm f_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
        i_5 = t;
        t = term_u_21;
        f_5 = t;
        t = i_5;
        j_5 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        h_5 = t;
        t = SSL_printnl(f_5, h_5);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(r_15, s_15, t);
  t = do_test_2_0(t_15, y_15, t);
  return(t);
}
ATerm z_15 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm a_16 (ATerm t)
{
  ATerm c_1 = NULL;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_1), term_t_28);
  t = assert_1_0(b_16, t);
  t = c_1;
  return(t);
}
ATerm b_16 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm overlay_ud_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      z_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
      b_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_28, z_0));
  t = assert_1_0(z_15, t);
  t = a_1;
  t = map_1_0(a_16, t);
  t = b_1;
  t = use_vars_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, z_0, a_1, b_1);
  return(t);
}
ATerm m_16 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm h_2 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_2 = ATgetArgument(t, 0);
          {
            ATerm y_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_28);
      t = h_2;
    }
  else
    {
      t = w_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_2;
    }
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_2), term_t_28);
  t = assert_1_0(z_16, t);
  t = m_2;
  return(t);
}
ATerm z_16 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm m_3 = NULL;
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_3 = ATgetArgument(t, 0);
          {
            ATerm b_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_29);
      t = m_3;
    }
  else
    {
      t = z_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_3;
    }
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, s_3), term_t_28);
  t = assert_1_0(t_17, t);
  t = s_3;
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm u_17 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
      s_1 = ATgetArgument(t, 2);
      j_1 = ATgetArgument(t, 3);
      t = j_1;
      if(match_cons(t, sym_StratRule_3))
        {
          k_1 = ATgetArgument(t, 0);
          n_1 = ATgetArgument(t, 1);
          o_1 = ATgetArgument(t, 2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_29, q_1));
          t = assert_1_0(m_16, t);
          t = s_1;
          t = map_1_0(n_16, t);
          t = map_1_0(y_16, t);
          t = k_1;
          t = unbound_vars_0_0(t);
          t = n_1;
          t = unbound_vars_0_0(t);
          t = o_1;
          t = unbound_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, q_1, r_1, s_1, (ATerm) ATmakeAppl(sym_StratRule_3, k_1, n_1, o_1));
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              k_1 = ATgetArgument(t, 0);
              n_1 = ATgetArgument(t, 1);
              o_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_29, q_1));
          t = assert_1_0(k_17, t);
          t = s_1;
          t = map_1_0(l_17, t);
          t = map_1_0(s_17, t);
          t = k_1;
          t = bind_vars_0_0(t);
          t = o_1;
          t = unbound_vars_0_0(t);
          t = n_1;
          t = use_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, q_1, r_1, s_1, (ATerm) ATmakeAppl(sym_Rule_3, k_1, n_1, o_1));
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          q_1 = ATgetArgument(t, 0);
          r_1 = ATgetArgument(t, 1);
          s_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_1;
      if(match_cons(t, sym_Rule_3))
        {
          t_1 = ATgetArgument(t, 0);
          u_1 = ATgetArgument(t, 1);
          y_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_29, q_1));
      t = assert_1_0(u_17, t);
      t = t_1;
      t = bind_vars_0_0(t);
      t = y_1;
      t = unbound_vars_0_0(t);
      t = u_1;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDef_3, q_1, r_1, (ATerm) ATmakeAppl(sym_Rule_3, t_1, u_1, y_1));
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,w_4 = NULL,x_4 = NULL,l_5 = NULL,m_5 = NULL;
  x_4 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      h_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
      q_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_4);
  g_4 = t;
  t = h_4;
  t = s_69(t);
  r_4 = t;
  t = i_4;
  t = t_69(t);
  s_4 = t;
  t = q_4;
  t = u_69(t);
  w_4 = t;
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_4, s_4, w_4);
  l_5 = t;
  t = SSLsetAnnotations(l_5, g_4);
  return(t);
}
ATerm v_17 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
      r_6 = t;
      if(match_cons(t, sym__2))
        {
          t_6 = ATgetArgument(t, 0);
          u_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_6;
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_6 = ATgetFirst((ATermList) t);
                {
                  ATerm j_29 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_29);
            t = v_6;
            {
              ATerm k_29 = t;
              int l_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm m_29 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_29);
                  t = t_6;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm n_29 = t;
                      int o_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_6;
                          ;
                          LocalPopChoice(o_29);
                        }
                      else
                        {
                          t = n_29;
                          t = b_7(t_6, r_6, t);
                        }
                    }
                  else
                    {
                      t = b_7(t_6, r_6, t);
                    }
                }
              else
                {
                  t = k_29;
                  t = t_6;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = r_6;
                }
            }
          }
        else
          {
            t = h_29;
            t = t_6;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = r_6;
          }
      }
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
    }
  return(t);
}
ATerm b_7 (ATerm b_6, ATerm c_6, ATerm t)
{
  t = c_6;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_5 = NULL,p_5 = NULL;
        t = c_6;
        p_5 = t;
        t = term_u_28;
        n_5 = t;
        t = SSL_table_get(n_5, b_6);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_29 = ATgetFirst((ATermList) t);
            if(match_cons(r_29, sym_Defined_1))
              {
                ATerm t_29 = ATgetArgument(r_29, 0);
              }
            else
              _fail(t);
            {
              ATerm s_29 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = c_6;
        ;
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATmakeAppl(sym__2, b_6, (ATerm) ATinsert(ATempty, term_u_29));
      }
  }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm a_6 = NULL,q_5 = NULL,r_5 = NULL;
  t = map_1_0(v_17, t);
  a_6 = t;
  r_5 = t;
  t = term_u_28;
  q_5 = t;
  t = SSL_table_destroy(q_5);
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, a_6);
  t = table_putlist_0_0(t);
  t = a_6;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7;
  {
    ATerm w_17 (ATerm t)
    {
      ATerm k_7 = NULL,o_7 = NULL;
      if(match_cons(t, sym__2))
        {
          k_7 = ATgetArgument(t, 0);
          o_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(j_7, k_7, o_7);
      t = (ATerm) ATmakeAppl(sym__3, j_7, k_7, o_7);
      return(t);
    }
    t = map_1_0(w_17, t);
  }
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL,v_5 = NULL,x_5 = NULL;
  e_1 = t;
  x_5 = t;
  t = term_u_28;
  v_5 = t;
  t = SSL_table_get(v_5, e_1);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, f_1);
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  t = term_u_28;
  u_5 = t;
  t = term_u_28;
  t_5 = t;
  t = SSL_table_keys(t_5);
  t = map_1_0(y_17, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,h_8 = NULL,i_8 = NULL,y_5 = NULL,z_5 = NULL;
  b_8 = t;
  t = save_Bound_0_0(t);
  c_8 = t;
  t = b_8;
  t = s_76(t);
  d_8 = t;
  t = save_Bound_0_0(t);
  h_8 = t;
  z_5 = t;
  t = term_u_28;
  y_5 = t;
  t = SSL_table_destroy(y_5);
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, c_8);
  t = table_putlist_0_0(t);
  t = d_8;
  t = t_76(t);
  i_8 = t;
  t = h_8;
  t = isect_Bound_0_0(t);
  t = i_8;
  return(t);
}
ATerm LChoice_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,w_8 = NULL,d_6 = NULL,e_6 = NULL;
  w_8 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      k_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_8);
  j_8 = t;
  t = k_8;
  t = o_69(t);
  r_8 = t;
  t = q_8;
  t = p_69(t);
  s_8 = t;
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, r_8, s_8);
  d_6 = t;
  t = SSLsetAnnotations(d_6, j_8);
  return(t);
}
ATerm Choice_2_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,p_9 = NULL,q_9 = NULL,f_6 = NULL,g_6 = NULL;
  q_9 = t;
  if(match_cons(t, sym_Choice_2))
    {
      j_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_9);
  d_9 = t;
  t = j_9;
  t = m_68(t);
  l_9 = t;
  t = k_9;
  t = n_68(t);
  p_9 = t;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, l_9, p_9);
  f_6 = t;
  t = SSLsetAnnotations(f_6, d_9);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 = NULL,u_3 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
        t = term_r_28;
        j_6 = t;
        t = term_r_28;
        h_6 = t;
        t = j_6;
        k_6 = t;
        t = (ATerm) ATempty;
        i_6 = t;
        t = SSL_table_get(h_6, i_6);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_3 = ATgetFirst((ATermList) t);
            {
              ATerm x_29 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_3;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_29) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
            j_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_a_30), j_3), term_z_29);
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        {
          ATerm b_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_3 = NULL,j_4 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
              t = term_r_28;
              n_6 = t;
              t = term_r_28;
              l_6 = t;
              t = n_6;
              o_6 = t;
              t = (ATerm) ATempty;
              m_6 = t;
              t = SSL_table_get(l_6, m_6);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_4 = ATgetFirst((ATermList) t);
                  {
                    ATerm d_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = j_4;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_30 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_30) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  y_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_a_30), y_3), term_f_30);
              ;
              LocalPopChoice(c_30);
            }
          else
            {
              t = b_30;
              {
                ATerm g_30 = t;
                int h_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_4 = NULL,u_4 = NULL,p_6 = NULL,q_6 = NULL,s_6 = NULL,w_6 = NULL;
                    t = term_r_28;
                    s_6 = t;
                    t = term_r_28;
                    p_6 = t;
                    t = s_6;
                    w_6 = t;
                    t = (ATerm) ATempty;
                    q_6 = t;
                    t = SSL_table_get(p_6, q_6);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        u_4 = ATgetFirst((ATermList) t);
                        {
                          ATerm i_30 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = u_4;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm j_30 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) j_30) != ATmakeSymbol("j_0", 0, ATtrue)))
                          _fail(t);
                        n_4 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_a_30), n_4), term_f_30);
                    ;
                    LocalPopChoice(h_30);
                  }
                else
                  {
                    t = g_30;
                    {
                      ATerm k_30 = t;
                      int l_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_5 = NULL,g_5 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
                          t = term_r_28;
                          z_6 = t;
                          t = term_r_28;
                          x_6 = t;
                          t = z_6;
                          a_7 = t;
                          t = (ATerm) ATempty;
                          y_6 = t;
                          t = SSL_table_get(x_6, y_6);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              g_5 = ATgetFirst((ATermList) t);
                              {
                                ATerm m_30 = (ATerm) ATgetNext((ATermList) t);
                              }
                            }
                          else
                            _fail(t);
                          t = g_5;
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm n_30 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) n_30) != ATmakeSymbol("h_0", 0, ATtrue)))
                                _fail(t);
                              c_5 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_a_30), c_5), term_f_30);
                          ;
                          LocalPopChoice(l_30);
                        }
                      else
                        {
                          t = k_30;
                          {
                            ATerm o_30 = t;
                            int p_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_5 = NULL,o_5 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
                                t = term_r_28;
                                e_7 = t;
                                t = term_r_28;
                                c_7 = t;
                                t = e_7;
                                f_7 = t;
                                t = (ATerm) ATempty;
                                d_7 = t;
                                t = SSL_table_get(c_7, d_7);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    o_5 = ATgetFirst((ATermList) t);
                                    {
                                      ATerm q_30 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = o_5;
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm r_30 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) r_30) != ATmakeSymbol("f_0", 0, ATtrue)))
                                      _fail(t);
                                    k_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_a_30), k_5), term_s_30);
                                ;
                                LocalPopChoice(p_30);
                              }
                            else
                              {
                                t = o_30;
                                {
                                  ATerm s_5 = NULL,w_5 = NULL,g_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
                                  t = term_r_28;
                                  m_7 = t;
                                  t = term_r_28;
                                  g_7 = t;
                                  t = m_7;
                                  n_7 = t;
                                  t = (ATerm) ATempty;
                                  l_7 = t;
                                  t = SSL_table_get(g_7, l_7);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      w_5 = ATgetFirst((ATermList) t);
                                      {
                                        ATerm t_30 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = w_5;
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm u_30 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) u_30) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      s_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_a_30), s_5), term_s_30);
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
ATerm Bound_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  l_12 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_7 = NULL,p_7 = NULL,q_7 = NULL;
        t = term_u_28;
        q_7 = t;
        t = term_u_28;
        p_7 = t;
        t = SSL_table_get(p_7, l_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_7 = ATgetFirst((ATermList) t);
            {
              ATerm x_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = h_7;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm y_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_30) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, m_12);
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_7 = NULL,r_7 = NULL,s_7 = NULL;
              t = term_u_28;
              s_7 = t;
              t = term_u_28;
              r_7 = t;
              t = SSL_table_get(r_7, l_12);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_7 = ATgetFirst((ATermList) t);
                  {
                    ATerm b_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = v_7;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              {
                ATerm m_8 = NULL,t_7 = NULL,u_7 = NULL;
                t = term_u_28;
                u_7 = t;
                t = term_u_28;
                t_7 = t;
                t = SSL_table_get(t_7, l_12);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_8 = ATgetFirst((ATermList) t);
                    {
                      ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = m_8;
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm d_31 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_31) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(f_31);
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            {
              ATerm w_12 = NULL,x_12 = NULL,u_8 = NULL,w_7 = NULL,x_7 = NULL;
              w_12 = t;
              if(match_cons(t, sym_Var_1))
                {
                  x_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_31), x_12), term_i_31);
              t = Context_0_0(t);
              u_8 = t;
              x_7 = t;
              t = term_u_21;
              w_7 = t;
              t = SSL_printnl(w_7, u_8);
              t = u_8;
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = e_31;
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(l_31);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = k_31;
            {
              ATerm m_31 = t;
              int n_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(n_31);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = m_31;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,y_7 = NULL,z_7 = NULL;
  g_13 = t;
  if(match_cons(t, sym_Rule_3))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
      c_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_13);
  z_12 = t;
  t = a_13;
  t = f_67(t);
  d_13 = t;
  t = b_13;
  t = g_67(t);
  e_13 = t;
  t = c_13;
  t = h_67(t);
  f_13 = t;
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, d_13, e_13, f_13);
  y_7 = t;
  t = SSLsetAnnotations(y_7, z_12);
  return(t);
}
ATerm RootApp_1_0 (ATerm e_66 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,a_8 = NULL,e_8 = NULL;
  m_13 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_13);
  j_13 = t;
  t = k_13;
  t = e_66(t);
  l_13 = t;
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, l_13);
  a_8 = t;
  t = SSLsetAnnotations(a_8, j_13);
  return(t);
}
ATerm App_2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,f_8 = NULL,g_8 = NULL;
  u_13 = t;
  if(match_cons(t, sym_App_2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_13);
  p_13 = t;
  t = q_13;
  t = c_66(t);
  s_13 = t;
  t = r_13;
  t = d_66(t);
  t_13 = t;
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, s_13, t_13);
  f_8 = t;
  t = SSLsetAnnotations(f_8, p_13);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,l_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym__3))
    {
      x_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
      z_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(x_13, y_13);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_31 = ATgetFirst((ATermList) t);
      a_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  n_8 = t;
  t = (ATerm) ATinsert(CheckATermList(a_14), z_13);
  l_8 = t;
  t = SSL_table_put(x_13, y_13, l_8);
  t = (ATerm) ATmakeAppl(sym__3, x_13, y_13, z_13);
  return(t);
}
ATerm Var_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,o_8 = NULL,p_8 = NULL;
  h_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_14);
  e_14 = t;
  t = f_14;
  t = o_65(t);
  g_14 = t;
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_14);
  o_8 = t;
  t = SSLsetAnnotations(o_8, e_14);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(q_31);
      {
        ATerm k_14 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            k_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, term_u_28, (ATerm)ATmakeAppl(sym_Var_1, k_14), term_s_31);
        t = table_replace_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, k_14);
      }
    }
  else
    {
      t = p_31;
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(u_31);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = t_31;
            {
              ATerm v_31 = t;
              int w_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(w_31);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = v_31;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm f_69 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,t_8 = NULL,v_8 = NULL;
  o_14 = t;
  if(match_cons(t, sym_Match_1))
    {
      m_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_14);
  l_14 = t;
  t = m_14;
  t = f_69(t);
  n_14 = t;
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, n_14);
  t_8 = t;
  t = SSLsetAnnotations(t_8, l_14);
  return(t);
}
ATerm Build_1_0 (ATerm g_69 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,x_8 = NULL,y_8 = NULL;
  u_14 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  r_14 = t;
  t = s_14;
  t = g_69(t);
  t_14 = t;
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, t_14);
  x_8 = t;
  t = SSLsetAnnotations(x_8, r_14);
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm c_18 (ATerm t)
{
  t = Scope_2_0(d_18, unbound_vars_0_0, t);
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = map_1_0(e_18, t);
  return(t);
}
ATerm e_18 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_14), term_u_29);
  t = assert_1_0(f_18, t);
  t = x_14;
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm g_18 (ATerm t)
{
  t = Choice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = Choice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm j_18 (ATerm t)
{
  t = LChoice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = LChoice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm l_18 (ATerm t)
{
  t = GuardedLChoice_3_0(unbound_vars_0_0, unbound_vars_0_0, _id, t);
  return(t);
}
ATerm m_18 (ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, unbound_vars_0_0, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(y_31);
      t = scope_2_0(a_18, c_18, t);
    }
  else
    {
      t = x_31;
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(a_32);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = z_31;
            {
              ATerm b_32 = t;
              int c_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(c_32);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = b_32;
                  {
                    ATerm d_32 = t;
                    int e_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(e_32);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = d_32;
                        {
                          ATerm f_32 = t;
                          int g_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(g_32);
                              t = abstract_choice_2_0(g_18, h_18, t);
                            }
                          else
                            {
                              t = f_32;
                              {
                                ATerm h_32 = t;
                                int i_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(i_32);
                                    t = abstract_choice_2_0(j_18, k_18, t);
                                  }
                                else
                                  {
                                    t = h_32;
                                    {
                                      ATerm j_32 = t;
                                      int k_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(k_32);
                                          t = abstract_choice_2_0(l_18, m_18, t);
                                        }
                                      else
                                        {
                                          t = j_32;
                                          t = SRTS_all(unbound_vars_0_0, t);
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
ATerm n_18 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm l_15 = NULL;
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_15 = ATgetArgument(t, 0);
          {
            ATerm n_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_32);
      t = l_15;
    }
  else
    {
      t = l_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_15;
    }
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_15), term_t_28);
  t = assert_1_0(q_18, t);
  t = o_15;
  return(t);
}
ATerm q_18 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm s_18 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm a_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      e_15 = ATgetArgument(t, 2);
      a_15 = ATgetArgument(t, 3);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_32, c_15));
      t = assert_1_0(n_18, t);
      t = e_15;
      t = map_1_0(o_18, t);
      t = map_1_0(p_18, t);
      t = a_15;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, c_15, d_15, e_15, a_15);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_15 = ATgetArgument(t, 0);
          d_15 = ATgetArgument(t, 1);
          e_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_32, c_15));
      t = assert_1_0(s_18, t);
      t = e_15;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, c_15, d_15, e_15);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__3))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
      w_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_15, v_15);
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_32 = ATgetArgument(t, 0);
            ATerm t_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_15, v_15);
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        t = (ATerm) ATempty;
      }
    x_15 = t;
    a_9 = t;
    t = (ATerm) ATinsert(CheckATermList(x_15), w_15);
    z_8 = t;
    t = SSL_table_put(u_15, v_15, z_8);
    t = (ATerm) ATmakeAppl(sym__3, u_15, v_15, w_15);
  }
  return(t);
}
ATerm assert_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,e_9 = NULL,i_9 = NULL,m_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_81(t);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_16, c_16, d_16);
  t = table_push_0_0(t);
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_9 = NULL,c_9 = NULL;
        c_9 = t;
        t = term_w_32;
        b_9 = t;
        t = SSL_table_get(e_16, b_9);
        ;
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_16 = ATgetFirst((ATermList) t);
        g_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    m_9 = t;
    t = term_w_32;
    e_9 = t;
    t = m_9;
    r_9 = t;
    t = (ATerm) ATinsert(CheckATermList(g_16), (ATerm) ATinsert(CheckATermList(f_16), c_16));
    i_9 = t;
    t = SSL_table_put(e_16, e_9, i_9);
    t = (ATerm) ATmakeAppl(sym__2, c_16, d_16);
  }
  return(t);
}
ATerm map_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm h_16 (ATerm t)
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = Cons_2_0(p_77, h_16, t);
      }
    return(t);
  }
  t = h_16(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm f_68 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,s_9 = NULL,u_9 = NULL;
  l_16 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      j_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_16);
  i_16 = t;
  t = j_16;
  t = f_68(t);
  k_16 = t;
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_16);
  s_9 = t;
  t = SSLsetAnnotations(s_9, i_16);
  return(t);
}
ATerm RDefT_4_0 (ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,v_9 = NULL,w_9 = NULL;
  x_16 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
      r_16 = ATgetArgument(t, 2);
      s_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_16);
  o_16 = t;
  t = p_16;
  t = w_67(t);
  t_16 = t;
  t = q_16;
  t = x_67(t);
  u_16 = t;
  t = r_16;
  t = y_67(t);
  v_16 = t;
  t = s_16;
  t = z_67(t);
  w_16 = t;
  w_9 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, t_16, u_16, v_16, w_16);
  v_9 = t;
  t = SSLsetAnnotations(v_9, o_16);
  return(t);
}
ATerm SDefT_4_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,y_9 = NULL,z_9 = NULL;
  j_17 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      d_17 = ATgetArgument(t, 2);
      e_17 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_17);
  a_17 = t;
  t = b_17;
  t = q_71(t);
  f_17 = t;
  t = c_17;
  t = r_71(t);
  g_17 = t;
  t = d_17;
  t = s_71(t);
  h_17 = t;
  t = e_17;
  t = t_71(t);
  i_17 = t;
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_17, g_17, h_17, i_17);
  y_9 = t;
  t = SSLsetAnnotations(y_9, a_17);
  return(t);
}
ATerm Scope_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,a_10 = NULL,d_10 = NULL;
  r_17 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_17);
  m_17 = t;
  t = n_17;
  t = i_69(t);
  p_17 = t;
  t = o_17;
  t = j_69(t);
  q_17 = t;
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, p_17, q_17);
  a_10 = t;
  t = SSLsetAnnotations(a_10, m_17);
  return(t);
}
ATerm tboundin_3_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(u_90, s_90, t);
      ;
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      {
        ATerm b_33 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(u_90, u_90, u_90, s_90, t);
            ;
            LocalPopChoice(c_33);
          }
        else
          {
            t = b_33;
            {
              ATerm d_33 = t;
              int e_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(u_90, u_90, u_90, s_90, t);
                  ;
                  LocalPopChoice(e_33);
                }
              else
                {
                  t = d_33;
                  t = DynamicRules_1_0(s_90, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm x_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_17);
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
        ATerm z_17 = NULL,b_18 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_17 = ATgetArgument(t, 0);
            t = z_17;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm h_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm j_33 = ATgetArgument(t, 0);
                    ATerm k_33 = ATgetArgument(t, 1);
                    b_18 = ATgetArgument(t, 2);
                    {
                      ATerm l_33 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(i_33);
                t = b_18;
                t = map_1_0(v_18, t);
              }
            else
              {
                t = h_33;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm m_33 = ATgetArgument(t, 0);
                    ATerm n_33 = ATgetArgument(t, 1);
                    b_18 = ATgetArgument(t, 2);
                    {
                      ATerm o_33 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_18;
                t = map_1_0(w_18, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm i_18 = NULL;
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_18 = ATgetArgument(t, 0);
          {
            ATerm r_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_33);
      t = i_18;
    }
  else
    {
      t = p_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_18;
    }
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm r_18 = NULL;
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_18 = ATgetArgument(t, 0);
          {
            ATerm u_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_33);
      t = r_18;
    }
  else
    {
      t = s_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_18;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(t_18, u_18, tboundin_3_0, t);
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm m_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_19);
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      {
        ATerm o_19 = NULL,q_19 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_19 = ATgetArgument(t, 0);
            t = o_19;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm x_33 = t;
            int y_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm z_33 = ATgetArgument(t, 0);
                    ATerm a_34 = ATgetArgument(t, 1);
                    q_19 = ATgetArgument(t, 2);
                    {
                      ATerm b_34 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(y_33);
                t = q_19;
                t = map_1_0(z_18, t);
              }
            else
              {
                t = x_33;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm c_34 = ATgetArgument(t, 0);
                    ATerm d_34 = ATgetArgument(t, 1);
                    q_19 = ATgetArgument(t, 2);
                    {
                      ATerm e_34 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = q_19;
                t = map_1_0(a_19, t);
              }
          }
      }
    }
  return(t);
}
ATerm z_18 (ATerm t)
{
  ATerm w_19 = NULL;
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_19 = ATgetArgument(t, 0);
          {
            ATerm h_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_34);
      t = w_19;
    }
  else
    {
      t = f_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_19;
    }
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm c_20 = NULL;
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_20 = ATgetArgument(t, 0);
          {
            ATerm k_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_34);
      t = c_20;
    }
  else
    {
      t = i_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_20;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm e_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_19 = ATgetArgument(t, 0);
      t = j_19;
      if(match_cons(t, sym_Rule_3))
        {
          e_19 = ATgetArgument(t, 0);
          {
            ATerm l_34 = ATgetArgument(t, 1);
          }
          {
            ATerm m_34 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_19;
      t = free_vars_3_0(x_18, y_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_19 = ATgetArgument(t, 0);
          {
            ATerm n_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_19;
    }
  return(t);
}
ATerm union_1_0 (ATerm e_77 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_20;
  {
    ATerm i_20 (ATerm t)
    {
      ATerm o_34 = t;
      int p_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_20;
          ;
          LocalPopChoice(p_34);
        }
      else
        {
          t = o_34;
          {
            ATerm q_34 = t;
            int r_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_9 = NULL,g_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_9 = ATgetFirst((ATermList) t);
                    g_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_20;
                {
                  ATerm b_19 (ATerm t)
                  {
                    ATerm h_9 = NULL;
                    h_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_9, h_9);
                    t = e_77(t);
                    return(t);
                  }
                  t = fetch_1_0(b_19, t);
                  t = g_9;
                  t = i_20(t);
                }
                ;
                LocalPopChoice(r_34);
              }
            else
              {
                t = q_34;
                t = Cons_2_0(_id, i_20, t);
              }
          }
        }
      return(t);
    }
    t = i_20(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_79(t);
      ;
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      {
        ATerm l_20 = NULL,m_20 = NULL,p_20 = NULL,q_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_20 = ATgetFirst((ATermList) t);
            m_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_20;
        t = u_79(t);
        p_20 = t;
        t = m_20;
        t = foldr_3_0(s_79, t_79, u_79, t);
        q_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
        t = t_79(t);
      }
    }
  return(t);
}
ATerm fetch_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm t_20 (ATerm t)
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_78, _id, t);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = Cons_2_0(_id, t_20, t);
      }
    return(t);
  }
  t = t_20(t);
  return(t);
}
ATerm diff_1_0 (ATerm z_76 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_20;
  {
    ATerm z_20 (ATerm t)
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          {
            ATerm y_34 = t;
            int z_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_9 = NULL,o_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    n_9 = ATgetFirst((ATermList) t);
                    o_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = y_20;
                {
                  ATerm c_19 (ATerm t)
                  {
                    ATerm t_9 = NULL;
                    t_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_9, t_9);
                    t = z_76(t);
                    return(t);
                  }
                  t = fetch_1_0(c_19, t);
                  t = o_9;
                  t = z_20(t);
                }
                ;
                LocalPopChoice(z_34);
              }
            else
              {
                t = y_34;
                t = Cons_2_0(_id, z_20, t);
              }
          }
        }
      return(t);
    }
    t = z_20(t);
  }
  return(t);
}
ATerm f_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_19 (ATerm t)
{
  ATerm g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      g_21 = ATgetArgument(t, 0);
      if((g_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_19 (ATerm t)
{
  t = union_1_0(k_19, t);
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      if((g_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm l_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_19 (ATerm t)
{
  t = union_1_0(p_19, t);
  return(t);
}
ATerm p_19 (ATerm t)
{
  ATerm n_10 = NULL;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      if((n_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm j_21 (ATerm t)
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_93(t);
        ;
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        {
          ATerm c_35 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_21 = NULL,f_21 = NULL,b_10 = NULL,c_10 = NULL;
              d_21 = t;
              t = v_93(t);
              f_21 = t;
              t = d_21;
              {
                ATerm d_19 (ATerm t)
                {
                  ATerm x_9 = NULL;
                  t = j_21(t);
                  x_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_9, f_21);
                  t = diff_1_0(g_19, t);
                  return(t);
                }
                t = w_93(d_19, j_21, f_19, t);
                b_10 = t;
                t = SSL_explode_term(b_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_35 = ATgetArgument(t, 0);
                    c_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_10;
                t = foldr_3_0(h_19, i_19, _id, t);
              }
              ;
              LocalPopChoice(d_35);
            }
          else
            {
              t = c_35;
              {
                ATerm h_10 = NULL,i_10 = NULL;
                h_10 = t;
                t = SSL_explode_term(h_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_35 = ATgetArgument(t, 0);
                    i_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_10;
                t = foldr_3_0(l_19, n_19, j_21, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_21(t);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,p_21 = NULL;
  if(match_cons(t, sym__2))
    {
      m_21 = ATgetArgument(t, 0);
      n_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_21, n_21);
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_35 = ATgetArgument(t, 0);
            ATerm j_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_21, n_21);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_35 = ATgetFirst((ATermList) t);
            q_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_10;
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        t = (ATerm) ATempty;
      }
    p_21 = t;
    t = SSL_table_put(m_21, n_21, p_21);
    t = (ATerm) ATmakeAppl(sym__2, m_21, n_21);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,j_10 = NULL,k_10 = NULL;
  x_21 = t;
  t = y_80(t);
  y_21 = t;
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL,f_10 = NULL;
        f_10 = t;
        t = term_w_32;
        e_10 = t;
        t = SSL_table_get(y_21, e_10);
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_22 = ATgetFirst((ATermList) t);
        z_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    k_10 = t;
    t = term_w_32;
    j_10 = t;
    t = SSL_table_put(y_21, j_10, z_21);
    t = a_22;
    {
      ATerm r_19 (ATerm t)
      {
        ATerm b_22 = NULL;
        b_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_21, b_22);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_19, t);
      t = x_21;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_87(t);
      t = z_87(t);
      ;
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      t = z_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,o_10 = NULL,p_10 = NULL,r_10 = NULL,s_10 = NULL;
  e_22 = t;
  t = x_80(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, term_w_32);
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_10 = NULL,m_10 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_35 = ATgetArgument(t, 0);
            ATerm s_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        m_10 = t;
        t = term_w_32;
        l_10 = t;
        t = SSL_table_get(f_22, l_10);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = (ATerm) ATempty;
      }
    g_22 = t;
    r_10 = t;
    t = term_w_32;
    o_10 = t;
    t = r_10;
    s_10 = t;
    t = (ATerm) ATinsert(CheckATermList(g_22), (ATerm) ATempty);
    p_10 = t;
    t = SSL_table_put(f_22, o_10, p_10);
    t = e_22;
  }
  return(t);
}
ATerm scope_2_0 (ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm t)
{
  t = begin_scope_1_0(z_80, t);
  {
    ATerm s_19 (ATerm t)
    {
      t = end_scope_1_0(z_80, t);
      return(t);
    }
    t = restore_always_2_0(a_81, s_19, t);
  }
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm u_19 (ATerm t)
{
  t = scope_2_0(v_19, x_19, t);
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm x_19 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  t = free_vars_3_0(y_19, z_19, tboundin_3_0, t);
  t = map_1_0(d_20, t);
  t = o_22;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              t = overlay_ud_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_19 (ATerm t)
{
  ATerm p_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_22);
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      {
        ATerm s_22 = NULL,u_22 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_22 = ATgetArgument(t, 0);
            t = s_22;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm z_35 = t;
            int a_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm b_36 = ATgetArgument(t, 0);
                    ATerm c_36 = ATgetArgument(t, 1);
                    u_22 = ATgetArgument(t, 2);
                    {
                      ATerm d_36 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(a_36);
                t = u_22;
                t = map_1_0(a_20, t);
              }
            else
              {
                t = z_35;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm e_36 = ATgetArgument(t, 0);
                    ATerm f_36 = ATgetArgument(t, 1);
                    u_22 = ATgetArgument(t, 2);
                    {
                      ATerm g_36 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = u_22;
                t = map_1_0(b_20, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm b_23 = NULL;
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_23 = ATgetArgument(t, 0);
          {
            ATerm j_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_36);
      t = b_23;
    }
  else
    {
      t = h_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_23;
    }
  return(t);
}
ATerm b_20 (ATerm t)
{
  ATerm j_23 = NULL;
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_23 = ATgetArgument(t, 0);
          {
            ATerm m_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_36);
      t = j_23;
    }
  else
    {
      t = k_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_23;
    }
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_23), term_u_29);
  t = assert_1_0(e_20, t);
  t = n_23;
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  t = scope_2_0(t_19, u_19, t);
  return(t);
}
ATerm Cons_2_0 (ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,t_10 = NULL,v_10 = NULL;
  t_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_23 = ATgetFirst((ATermList) t);
      q_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_23);
  o_23 = t;
  t = p_23;
  t = m_64(t);
  r_23 = t;
  t = q_23;
  t = n_64(t);
  s_23 = t;
  v_10 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), r_23);
  t_10 = t;
  t = SSLsetAnnotations(t_10, o_23);
  return(t);
}
ATerm filter_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_20 (ATerm t)
            {
              t = filter_1_0(x_86, t);
              return(t);
            }
            t = Cons_2_0(x_86, f_20, t);
            ;
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm z_23 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_36 = ATgetFirst((ATermList) t);
                  z_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_23;
              t = filter_1_0(x_86, t);
            }
          }
      }
    }
  return(t);
}
ATerm Strategies_1_0 (ATerm q_64 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,w_10 = NULL,x_10 = NULL;
  e_24 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_24);
  b_24 = t;
  t = c_24;
  t = q_64(t);
  d_24 = t;
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_24);
  w_10 = t;
  t = SSLsetAnnotations(w_10, b_24);
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_24, term_s_36);
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL,e_11 = NULL;
        e_11 = t;
        t = term_s_36;
        d_11 = t;
        t = SSL_addi(j_24, d_11);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        {
          ATerm f_11 = NULL,g_11 = NULL;
          g_11 = t;
          t = term_s_36;
          f_11 = t;
          t = SSL_addr(j_24, f_11);
        }
      }
  }
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_24, term_s_36);
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,i_11 = NULL;
        i_11 = t;
        t = term_s_36;
        h_11 = t;
        t = SSL_addi(k_24, h_11);
        ;
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
        {
          ATerm j_11 = NULL,k_11 = NULL;
          k_11 = t;
          t = term_s_36;
          j_11 = t;
          t = SSL_addr(k_24, j_11);
        }
      }
  }
  return(t);
}
ATerm do_test_2_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,y_10 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL;
  h_24 = t;
  t = j_96(t);
  i_24 = t;
  b_11 = t;
  t = term_u_21;
  y_10 = t;
  t = b_11;
  c_11 = t;
  t = (ATerm) ATinsert(ATempty, i_24);
  z_10 = t;
  t = SSL_printnl(y_10, z_10);
  t = h_24;
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_96(t);
        t = h_24;
        t = _2_0(j_20, _id, t);
        ;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = _2_0(_id, k_20, t);
      }
  }
  return(t);
}
ATerm n_20 (ATerm t)
{
  t = term_z_36;
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_p_26, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATempty, term_w_24))), term_q_21)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_k_25, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATinsert(ATempty, term_q_21)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_h_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_q_21))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, term_b_25), term_w_24))), term_q_21)))))));
      {
        ATerm c_37 = t;
        if((PushChoice() == 0))
          {
            t = Strategies_1_0(r_20, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_37;
          }
      }
      ;
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      {
        ATerm l_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL;
        o_11 = t;
        t = term_u_21;
        l_11 = t;
        t = o_11;
        p_11 = t;
        t = (ATerm) ATinsert(ATempty, term_d_25);
        m_11 = t;
        t = SSL_printnl(l_11, m_11);
        t = term_d_25;
        _fail(t);
      }
    }
  return(t);
}
ATerm r_20 (ATerm t)
{
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
      {
        ATerm l_24 = NULL;
        l_24 = t;
        t = filter_1_0(s_20, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_24;
      }
    }
  return(t);
}
ATerm s_20 (ATerm t)
{
  ATerm f_37 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_37;
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(n_20, o_20, t);
  return(t);
}
ATerm _2_0 (ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,q_11 = NULL,r_11 = NULL;
  s_24 = t;
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_24);
  n_24 = t;
  t = o_24;
  t = x_59(t);
  q_24 = t;
  t = p_24;
  t = y_59(t);
  r_24 = t;
  r_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
  q_11 = t;
  t = SSLsetAnnotations(q_11, n_24);
  return(t);
}
ATerm u_20 (ATerm t)
{
  ATerm a_11 = NULL,w_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  a_11 = t;
  t = term_g_37;
  z_11 = t;
  t = term_u_21;
  w_11 = t;
  t = z_11;
  a_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_11), term_g_37);
  y_11 = t;
  t = SSL_printnl(w_11, y_11);
  t = a_11;
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm x_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  x_11 = t;
  t = term_h_37;
  d_12 = t;
  t = term_u_21;
  b_12 = t;
  t = d_12;
  e_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_11), term_h_37);
  c_12 = t;
  t = SSL_printnl(b_12, c_12);
  t = x_11;
  return(t);
}
ATerm w_20 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t = h_96(t);
  u_10 = t;
  t = term_i_37;
  u_11 = t;
  t = term_u_21;
  s_11 = t;
  t = u_11;
  v_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_10), term_i_37);
  t_11 = t;
  t = SSL_printnl(s_11, t_11);
  t = term_k_37;
  t = i_96(t);
  t = _2_0(u_20, v_20, t);
  t = _2_0(_id, w_20, t);
  return(t);
}
ATerm a_21 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm b_21 (ATerm t)
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
  return(t);
}
ATerm use_def_test_0_0 (ATerm t)
{
  t = test_suite_2_0(a_21, b_21, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_0_0(t);
  return(t);
}
